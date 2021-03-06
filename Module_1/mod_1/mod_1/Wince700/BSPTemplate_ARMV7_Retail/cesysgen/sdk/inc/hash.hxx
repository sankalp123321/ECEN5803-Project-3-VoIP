//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//

#ifndef __HASH__
#define __HASH__

//
// hash is base class for hash_map and hash_set
//

#include <assert.h>
#include "allocator.hxx"
#include "list.hxx"
#include "vector.hxx"
#include "string.hxx"

namespace ce
{

// hash_traits template - defines hash function for numeric types
template <typename T>
struct hash_traits
{
    size_t hash_function(const T& Key) const
    {
        return (size_t)Key;
    }
};


// hash_traits template - defines hash function for ce::_string_t types
template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
struct hash_traits<_string_t<T, _BUF_SIZE, _Tr, _Al> >
{
    size_t hash_function(const _string_t<T, _BUF_SIZE, _Tr, _Al>& Key) const
    {
        size_t len = Key.length();
        size_t hash = len;
        
        // add up to 14 characters from the string
        for(size_t i = 0, delta = len / 15 + 1; i < len; i += delta)
            hash += Key[i];
        
        return hash;
    };
};


namespace details
{

// hash template class
template <typename _Tr>
class hash : protected _Tr
{
public:
    typedef typename _Tr::value_type        value_type;
    typedef typename _Tr::key_type          key_type;
    typedef size_t                          size_type;
    typedef typename _Tr::allocator_type    allocator_type;

protected:
    typedef list<value_type, allocator_type> _Mylist;
    typedef list<value_type, details::reference_allocator<allocator_type> > _TmpList;

public:
    typedef typename _Mylist::iterator       iterator;
    typedef typename _Mylist::const_iterator const_iterator;

protected:
    typedef std::pair<iterator, size_type>  _Mybucket;
    typedef vector<_Mybucket>               _Myvec;
    typedef hash<_Tr>                       _Myt;

public:
    // ctor
    explicit hash(size_type nBuckets = 32)
        : _Mask(nBuckets - 1)
        {assert(((nBuckets & (nBuckets - 1)) == 0) && nBuckets); }
        
    explicit hash(const _Tr& Traits, size_type nBuckets = 32)
        : _Mask(nBuckets - 1),
          _Tr(Traits)
        {assert(((nBuckets & (nBuckets - 1)) == 0) && nBuckets); }
    
    explicit hash(const allocator_type& Alloc, size_type nBuckets = 32)
        : _Mask(nBuckets - 1),
          _List(Alloc)
        {assert(((nBuckets & (nBuckets - 1)) == 0) && nBuckets); }
        
    explicit hash(const _Tr& Traits, const allocator_type& Alloc, size_type nBuckets = 32)
        : _Mask(nBuckets - 1),
          _Tr(Traits),
          _List(Alloc)
        {assert(((nBuckets & (nBuckets - 1)) == 0) && nBuckets); }
        
#ifdef CE_STL_STRICT
private:
#endif    
    // copy ctor
    hash(const hash& Right)
        : _Tr(Right),
          _List(Right._List.get_allocator())
        {_copy(Right); }

    // operator=
    hash& operator=(const hash& Right)
    {
        assign(Right);
        return (*this);
    }
    
public:
    // swap    
    void swap(hash& Right)
        {_swap(Right); }
        
        
    // assign
    bool assign(const hash& Right)
    {
        if(this != &Right)
        {
            _Myvec      _TmpVec;
            _TmpList    _TmpList(_List.get_allocator());
            size_type   _TmpMask;
            
            _TmpVec.swap(_Vec);
            _TmpList._Swap(_List);
            _TmpMask = _Mask;
            
            if(!_copy(Right))
            {
                // copy failed -> restore original value
                _TmpVec.swap(_Vec);
                _TmpList._Swap(_List);
                _Mask = _TmpMask;
                
                return false;
            }
        }
        
        return true;
    }
    
    // begin
    iterator begin()
        {return _List.begin(); }

    const_iterator begin() const
        {return _List.begin(); }

    // end
    iterator end()
        {return _List.end(); }

    const_iterator end() const
        {return _List.end(); }

    // size
    size_type size() const
        {return _List.size(); }

    // empty
    bool empty() const
        {return _List.empty(); }
        
    // insert
    iterator insert(const value_type& Val)
    {
        if(!_ready())
            return end();
            
        _Mybucket&  Bucket = _get_bucket(_Tr::_key(Val));
        size_type   nCount = _bucket_size(Bucket);
        
        //
        // Check if item with this key is already in the hash
        //
        for(iterator it = _bucket_begin(Bucket); nCount--; ++it)        
        {
            assert(it != end());
            
            if(_Tr::_key(*it) == _Tr::_key(Val))
                return it;
        }
                
        //
        // Insert the new item as the first item in the bucket
        //
        if(_List.end() == _List.insert(_bucket_begin(Bucket), Val))
            return end();
        
        //
        // Increase bucket size and set added item as new beginning of the bucket
        //
        return ++_bucket_size(Bucket),--_bucket_begin(Bucket);
    }
    
    iterator insert(iterator, const value_type& Val)
    {
        return insert(Val);
    }
    
    template<class Iter>
    void insert(Iter First, Iter Last)
    {
        for(; First != Last; ++First)
            insert(*First);
    }
    
    
    // erase
    iterator erase(iterator Where)
    {
        assert(!_Vec.empty());
        
        _Mybucket& Bucket = _get_bucket(_Tr::_key(*Where));
        
        assert(_bucket_size(Bucket) > 0);
        assert(Where != end());
        
        //
        // Decrease bucket size
        //
        --_bucket_size(Bucket);
        
        //
        // Update bucket beginning if this is the first item in the bucket
        //
        if(_bucket_begin(Bucket) == Where)
            if(_bucket_size(Bucket))
                ++_bucket_begin(Bucket);
            else
                _bucket_begin(Bucket) = end();
                
        //
        // Erase item from the list
        //
        return _List.erase(Where);
    }
    
    
    iterator erase(iterator First, iterator Last)
    {
        while (First != Last)
            erase(First++);
        
        return First; 
    }
    
    
    size_type erase(const key_type& Key)
    {
        iterator Where = find(Key);
        
        if(end() != Where)
        {
            erase(Where);
            return 1;
        }
        
        return 0;
    }        
    
    
    // clear
    void clear()
    {
        //
        // Erase all the items from the list
        //
        _List.erase(_List.begin(), _List.end());
        
        //
        // Empty all the buckets
        //
        for(_Myvec::iterator it = _Vec.begin(), itEnd = _Vec.end(); it != itEnd; ++it)
        {
            _bucket_begin(*it) = _List.end();
            _bucket_size(*it) = 0;
        }
    }
    
    
    // find
    iterator find(const key_type& Key)
    {
        if(_ready())
        {
            _Mybucket&  Bucket = _get_bucket(Key);
            size_type   nCount = _bucket_size(Bucket);
            
            //
            // Look for item with matching key in the bucket
            //
            for(iterator it = _bucket_begin(Bucket); nCount--; ++it)
            {
                assert(it != end());
                
                if(_Tr::_key(*it) == Key)
                    return it;
            }
        }
        
        return end();
    }
    
    
    // find
    const_iterator find(const key_type& Key) const
    {
        if(!_Vec.empty())
        {
            const _Mybucket&  Bucket = _get_bucket(Key);
            size_type   nCount = _bucket_size(Bucket);
            
            //
            // Look for item with matching key in the bucket
            //
            for(const_iterator it = _bucket_begin(Bucket); nCount--; ++it)
            {
                assert(it != end());
                
                if(_Tr::_key(*it) == Key)
                    return it;
            }
        }
        
        return end();
    }

    // get_allocator
    allocator_type get_allocator() const
	    {return _List.get_allocator(); }

protected:
    _Mybucket& _get_bucket(const key_type& Key)
    {
        assert(_Vec.size() - 1 == _Mask);
        
        return _Vec[hash_function(Key) & _Mask];
    }

    const _Mybucket& _get_bucket(const key_type& Key) const
    {
        assert(_Vec.size() - 1 == _Mask);
        
        return _Vec[hash_function(Key) & _Mask];
    }
    
    typename _Mylist::iterator& _bucket_begin(_Mybucket& Bucket)
        {return Bucket.first; }
        
    const typename _Mylist::iterator& _bucket_begin(const _Mybucket& Bucket) const
        {return Bucket.first; }
        
    size_type& _bucket_size(_Mybucket& Bucket)
        {return Bucket.second; }
        
    const size_type& _bucket_size(const _Mybucket& Bucket) const
        {return Bucket.second; }
    
    bool _init_hash_table(size_type nBuckets)
    {
        //
        // nBuckets must be power of 2
        //
        assert(((nBuckets & (nBuckets - 1)) == 0));
        
        return _Vec.resize(nBuckets, _Mybucket(_List.end(), 0));
    }
        
    bool _copy(const hash& Right)
    {
        assert(_List.empty());
        assert(_Vec.empty());
        
        _Mask = Right._Mask;

        //
        // Initialize hash table buckets
        //
        if(!_init_hash_table(Right._Vec.size()))
            return false;
        
        assert(_Vec.size() == Right._Vec.size());
        
        for(size_type i = 0; i < Right._Vec.size(); ++i)
        {
            size_type nCount = _bucket_size(Right._Vec[i]);
            
            //
            // Copy all the items from the source bucket to the destination bucket
            //
            for(const_iterator it = _bucket_begin(Right._Vec[i]); nCount--; ++it)
            {
                assert(it != Right.end());
                
                if(_List.end() == _List.insert(_bucket_begin(_Vec[i]), *it))
                {
                    //
                    // insertion failed - probably OOM
                    //
                    return false;
                }
                
                //
                // Update bucket size and beginning
                //
                --_bucket_begin(_Vec[i]);
                ++_bucket_size(_Vec[i]);
            }
        }

        return true;
    }
    
    // _ready
    bool _ready()
    {
        if(_Vec.empty())
            return _init_hash_table(_Mask + 1);
        else
            return true;
    }
    
    // _swap
    void _swap(hash& Right)
    {
        // Supported only if both hashes use the "same" allocator,
        // not the same type but an "interchangeable" instance.
        // After the swap, items from one hash will be deallocated
        // by the allocator of the other hash and vice versa.
        // To remove this limiation, allocators would have to support
        // swap operation. 
        assert(Right.get_allocator() == get_allocator());

        _Vec.swap(Right._Vec);
        _List.swap(Right._List);
        std::swap(_Mask, Right._Mask);
    }
        
protected:
    _Mylist     _List;
    _Myvec      _Vec;
    size_type   _Mask;
};

}; // namespace details

}; // namespace ce

#endif // __HASH__
