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
#ifndef __VECTOR__
#define __VECTOR__

// vector is a no-nonsense STL like vector class template.
// The template merely manages dynamic memory for a vector
// and thus has minimal or no overhead compared to manually allocation/freeing 
// dynamic memory.
// It keeps all items in a consecutive memory block so in case it needs to grow 
// memory it must copy items which might include calling copy ctor and dtor. 
// You may reserve some memory upfront to minimize reallocations.

#if 0
/**/    // 1. can be used with simple types or classes (must have copy ctor)
/**/
/**/    ce::vector<int>         vectorInt;
/**/    ce::vector<ce::string>  vectorStr;
/**/    ce::vector<POINT>       vectorPoint;
/**/
/**/    // 2. reserve memory to avoid reallocations
/**/
/**/    vectorInt.reserve(100); // reserve space for 100 items
/**/
/**/    vectorInt[99] = 99;
/**/    
/**/    // 3. adding items
/**/
/**/    // add item at the end of the vector
/**/    vectorStr.push_back(str);
/**/
/**/    // insert item at specified position
/**/    // note that this requires that all items from insertion point
/**/    // must be moved, this may be expensive
/**/    it = vectorStr.begin();
/**/    vectorStr.insert(it, L"string");
/**/
/**/    // insert n items at specified position
/**/    vectorStr.insert(it, 10, L"string");
/**/
/**/    // 4. removing items
/**/
/**/    // remove last item
/**/    vectorInt.pop_back();
/**/
/**/    // remove all items - does not free memeory
/**/    vectorInt.clear(); 
/**/
/**/    // remove specified item
/**/    // note that this requires that all items from deletion point
/**/    // must be moved, this may be expensive
/**/    vectorInt.erase(it);
/**/
/**/    // remove range of items
/**/    vectorInt.erase(it1, it2);
/**/    
/**/    // 5. iterating the STL way
/**/
/**/    for(ce::vector<POINT>::iterator it = vectorPoint.begin(), itEnd = vectorPoint.end(); it != itEnd; ++it)
/**/        if(it->x == 10)
/**/            break;
/**/
/**/    // 6. growth policy
/**/    //    whenever vector needs to grow as a result of inserting item(s), by default it will grow by extra 10 items
/**/    //    this behavior can be modified by specifying an alternate growth policy
/**/
/**/    // vector grows exponentially - this provides insertion at the end approaching O(1), at the cost of higher memory usage
/**/    typedef ce::vector<int, ce::allocator, ce::exp_growth> int_vector1;
/**/
/**/    // vector grows only by exact amount needed for current insertion - insertions at the end of vector approach O(X^2)
/**/    typedef ce::vector<int, ce::allocator, ce::incremental_growth<0> > int_vector2;
/**/
#endif

#include "allocator.hxx"
#include <new>
#include <assert.h>

namespace ce
{

namespace detail
{
//  Some helpers for type manipulation
//

    struct false_type {};
    struct true_type {};

    //  is_integral<T> - template class that helps finding out if the parameter is an integral type,
    //      it's used in vector<T> to resolve an ambiguity between two 3-parameter insert() methods:
    //      one of the methods takes integral parameters and another takes an iterator range.
    //
    template <typename T>
    struct is_integral
    {
        typedef false_type type;
    };

#define DECLARE_INTEGRAL_TYPE(t)    \
    template <>                     \
    struct is_integral<t>           \
    {                               \
        typedef true_type type;     \
    }                               \

    DECLARE_INTEGRAL_TYPE(bool);
    DECLARE_INTEGRAL_TYPE(char);
    DECLARE_INTEGRAL_TYPE(signed char);
    DECLARE_INTEGRAL_TYPE(unsigned char);
#ifdef _NATIVE_WCHAR_T_DEFINED
    DECLARE_INTEGRAL_TYPE(wchar_t);
#endif
    DECLARE_INTEGRAL_TYPE(short);
    DECLARE_INTEGRAL_TYPE(unsigned short);
    DECLARE_INTEGRAL_TYPE(int);
    DECLARE_INTEGRAL_TYPE(unsigned int);
    DECLARE_INTEGRAL_TYPE(long);
    DECLARE_INTEGRAL_TYPE(unsigned long);
    DECLARE_INTEGRAL_TYPE(long long);
    DECLARE_INTEGRAL_TYPE(unsigned long long);

#undef DECLARE_INTEGRAL_TYPE

}  // namespace detail

//
// Growth policy where vector grows by extra Increment items
//
template <size_t Increment = 10>
struct incremental_growth
{
    static size_t get_growth(size_t /*Size*/, size_t /*Capacity*/, size_t Need)
    {
        return Need + Increment;
    }
};

typedef incremental_growth<> inc_growth;


//
// Growth policy where vector grows by at least half its current size
//
template <size_t MinSize = 10>
struct exponential_growth
{
    static size_t get_growth(size_t Size, size_t /*Capacity*/, size_t Need)
    {
        size_t growth = (MinSize <= Size ? Size / 2 : MinSize);
        return Need < growth ? growth : Need;
    }
};

typedef exponential_growth<> exp_growth;


// vector template class
template <typename T, typename _Al = ce::allocator, typename _Tr = ce::exp_growth>
class vector : _Al
{
    typedef vector<T, details::reference_allocator<_Al>, _Tr> _TmpVector;
    
    // friend all other instances of vector
    template <typename T1, typename _Al1, typename _Tr1> friend class vector;
    
public:
    typedef T*                  iterator;
    typedef const T*            const_iterator;
    typedef size_t              size_type;
    typedef _Al                 allocator_type;
    typedef T                   value_type;
    typedef T &                 reference;
    typedef T const &           const_reference;

    typedef vector<T, _Al, _Tr> _Myt;
    
    vector()
        : _First(NULL), _Last(NULL), _End(NULL)
        {}
        
    explicit vector(const allocator_type& _Alloc)
        : _First(NULL), _Last(NULL), _End(NULL),
          _Al(_Alloc)
        {}        

#ifdef CE_STL_STRICT
private:
#endif
    explicit vector(size_type n)
        : _First(NULL), _Last(NULL), _End(NULL)
        {resize(n); }
        
    vector(size_type n, const allocator_type& _Alloc)
        : _First(NULL), _Last(NULL), _End(NULL),
          _Al(_Alloc)
        {resize(n); }
        
    vector(size_type n, const T& Val)
        : _First(NULL), _Last(NULL), _End(NULL)
        {resize(n, Val); }
        
    vector(size_type n, const T& Val, const allocator_type& _Alloc)
        : _First(NULL), _Last(NULL), _End(NULL),
          _Al(_Alloc)
        {resize(n, Val); }

    template <typename Iter>
    vector(Iter first, Iter last)
        : _First(NULL)
        , _Last(NULL)
        , _End(NULL)
    {
        _ConstructRange(first, last);
    }

    template <typename Iter>
    vector(Iter first, Iter last, allocator_type const & alloc)
        : _First(NULL)
        , _Last(NULL)
        , _End(NULL)
        , _Al(alloc)
    {
        _ConstructRange(first, last);
    }
    
    // copy ctor
    vector(vector const & right)
        : _First(NULL)
        , _Last(NULL)
        , _End(NULL)
        , _Al(right.get_allocator())
    {
        _ConstructRange(right.begin(), right.end());
    }

public:
    ~vector()
    {
        // clear all elements in vector
        clear();

        // delete memory
        deallocate(_First, capacity() * sizeof(T));
    }
    
#ifdef CE_STL_STRICT
private:
#endif    
    // operator=
    vector& operator=(const vector& Right)
    {
        assign(Right);
        
        return *this;
    }
    
public:
    // assign
    bool assign(const vector& Right)
    {
        _TmpVector _Tmp(get_allocator());
        
        assert(_Tmp._First == NULL);
        assert(_Tmp._Last == NULL);
        assert(_Tmp._End == NULL);
        
        _Tmp._First = reinterpret_cast<iterator>(_Tmp.allocate(Right.size() * sizeof(T)));
        
        if(!_Tmp._First)
            return false;
        
        _Tmp._Last = _Copy(Right.begin(), Right.end(), _Tmp._First);
        _Tmp._End = _Tmp._First + Right.size();

        if(_Tmp._Last != _Tmp._End)
            return false;
        
        _Tmp._Swap(*this);
        
        return true;
    }    
    
    // begin
    const_iterator begin() const
        {return _First; }

    iterator begin()
        {return _First; }

    //
    // end() returns const reference to iterator so that following idiom 
    // can be used safely w/o depending on evaluation order:
    //
    // if(v.end() == v.insert(v.end(), value))
    //
    const const_iterator& end() const
        {return _Last; }

    const iterator& end()
        {return _Last; }

    // front
    T& front()
        {return *(begin());}
    const T& front() const
        {return *(begin());}
    
    // back
    T& back()
    {
        iterator it = end();
        return *(--it);
    }
    const T& back() const
    {
        const_iterator it = end();
        return *(--it);
    }

    // resize
    bool resize(size_type _N)
    {
        if (size() < _N)
            return insert(end(), _N - size(), T());
        else if (_N < size())
            erase(begin() + _N, end());
            
        return true;
    }
        
#ifndef CE_STL_STRICT
    bool resize(size_type _N, T const & _X)
#else
    template <typename _Val>
    bool resize(size_type _N, _Val const & _X)
#endif
    {
        if (size() < _N)
            return insert(end(), _N - size(), _X);
        else if (_N < size())
            erase(begin() + _N, end());
            
        return true;
    }
    
    // reserve
    bool reserve(size_type _N)
    {
        if(_N > capacity())
        {
            _TmpVector _Tmp(get_allocator());
        
            assert(_Tmp._First == NULL);
            assert(_Tmp._Last == NULL);
            assert(_Tmp._End == NULL);
            
            _Tmp._First = reinterpret_cast<iterator>(_Tmp.allocate(_N * sizeof(T)));
            
            if(!_Tmp._First)
                return false;
            
            _Tmp._Last = _Copy(begin(), end(), _Tmp._First);
            _Tmp._End = _Tmp._First + _N;

            if(_Tmp._Last != _Tmp._First + size())
                return false;
            
            _Tmp._Swap(*this);
        }
        
        assert(_N <= capacity());
        
        return true;
    }

    // clear
    void clear()
    {
        erase(begin(), end());
    }
    
    void swap(vector& _Right)
        {_Swap(_Right); }
    
    // size
    size_type size() const
        {return _Last - _First; }
        
    // capacity
    size_type capacity() const
        {return _End - _First; }

    // empty
    bool empty() const
        {return (size() == 0); }

    // const operator[]
    const T& operator[](size_type i) const
        {return *(_First + i); }
    
    // operator[]
    T& operator[](size_type i)
        {return *(_First + i); }

    // insert
#ifndef CE_STL_STRICT
    bool insert(iterator _Where, size_type _N, T const & _X)
#else
    template <typename _Val>
    bool insert(iterator _Where, size_type _N, _Val const & _X)
#endif
    {
        return _Insert_dispatch(_Where, _N, _X, detail::true_type());
    }

#ifndef CE_STL_STRICT
    iterator insert(iterator _Where, T const & _X)
#else
    template <typename _Val>
    iterator insert(iterator _Where, _Val const & _X)
#endif
    {
        size_type _O = _Where - begin();
        
        if(!insert(_Where, 1, _X))
            return end();
        
        //
        // Insertion may require that vector is reallocated so
        // the final possition of the inserted item might not be 
        // the same as _Where
        //
        return begin() + _O;
    }

#ifndef CE_STL_STRICT
    template <typename Iter>
    bool insert(iterator _Where, Iter _First, Iter _Last)
    {
        return _Insert_dispatch(_Where, _First, _Last, detail::is_integral<Iter>::type());
    }
#endif

    // erase
    iterator erase(iterator _F, iterator _L)
    {
        assert(_F <= _L);
        assert(_F >= begin());
        assert(_L <= end());

        _MoveBackward(_L, _F);
        _Last -= _L - _F;
        
        return _F;
    }
    
    #pragma prefast(suppress: 25057, "generic code: iterator can be a class")
    iterator erase(iterator _Where)
        {return erase(_Where, _Where + 1); }
    
    
    // push_back
#ifndef CE_STL_STRICT
    bool push_back(T const & _X)
#else
    template <typename _Val>
    bool push_back(_Val const & _X)
#endif
    {
        iterator it = insert(end(), _X); 
        return (it != end());
    }
        
    // pop_back
    void pop_back()
        {erase(end()-1); }
        
    const allocator_type& get_allocator() const
        {return *this; }

private:
    template <typename Iter>
    void _ConstructRange(Iter first, Iter last)
    {
        // only random access input range iterators are supported
        size_type range_size = last - first;
        _First = reinterpret_cast<iterator>(allocate(range_size * sizeof(T)));
        
        if (_First)
        {
            _Last = _Copy(first, last, _First);
            _End = _First + range_size;
        }
    }

    // destroy elements from _F to _L
    void _Destroy(iterator _F, iterator _L)
    {
        for (; _F != _L; ++_F)
            _F->~T();
    }

    // copy elements from _F to _L to new location starting at _P
    #pragma prefast(suppress: 25057, "generic code: iterator can be a class")
    template <typename Iter> iterator _Copy(Iter _F, Iter _L, iterator _P)
    {
        assert(_F <= _L);
        
        for(; _F != _L; ++_F)
#ifdef CE_STL_STRICT
            if(!_Construct(_P++, *_F))
            {    
                (--_P)->~T();
                break;
            }    
#else
            new (_P++) T(*_F);
#endif        
        
        return (_P);
    }

    //  insert for iterator range
    template <typename Iter>
    bool _Insert_dispatch(iterator _Where, Iter _First, Iter _Last, detail::false_type const &)
    {
        size_type offset = _Where - begin();

        for (; _First != _Last; ++_First, ++offset)
        {
            if (!insert(begin() + offset, *_First))
                return false;
        }

        return true;
    }

    //  insert for non-iterator range
#ifndef CE_STL_STRICT
    #pragma prefast(suppress: 25057, "generic code: iterator can be a class")
    bool _Insert_dispatch(iterator _Where, size_type _N, T const & _X, detail::true_type const &)
#else
    template <typename _Val>
    bool _Insert_dispatch(iterator _Where, size_type _N, _Val const & _X, detail::true_type const &)
#endif
    {
        assert(_Where >= begin());
        assert(_Where <= end());
        
        if(_N > capacity() - size())
        {
            //
            // The vector doesn't have space for _N additional items so it has to grow
            //
            size_t _GrowBy = _Tr::get_growth(size(), capacity(), _N);
            
            if(_GrowBy < _N)
                return false; // integer overflow or faulty growth policy
            
            size_type _NewCapacity = size() + _GrowBy;
            
            //
            // Protected against integer overflow
            //
            if(_NewCapacity > ULONG_MAX / sizeof(T) ||
               _NewCapacity < size())
            {
                return false;
            }
            
            //
            // Use temporary vector object to recover cleanly from failues during construction 
            //
            _TmpVector _Tmp(get_allocator());
            
            assert(_Tmp._First == NULL);
            assert(_Tmp._Last == NULL);
            assert(_Tmp._End == NULL);
            
            _Tmp._First = reinterpret_cast<iterator>(_Tmp.allocate(_NewCapacity * sizeof(T)));
            
            if(!_Tmp._First)
                return false;
                
            _Tmp._Last = _Tmp._First;
            _Tmp._End = _Tmp._First + _NewCapacity;
                
            //
            // Copy items from the beginning to the insertion position
            //
            _Tmp._Last = _Copy(begin(), _Where, _Tmp._First);
            
            if(_Tmp._Last != _Tmp._First + (_Where - begin()))
                return false;
            
            //
            // Insert new item(s)
            //
            for(size_type i = _N ; i > 0; --i)
#ifdef CE_STL_STRICT
                if(!_Construct(_Tmp._Last++, _X))
                    return false;
#else
                new (_Tmp._Last++)T(_X);
#endif
                
            //
            // Copy items from the insertion position to the end
            //
            _Tmp._Last = _Copy(_Where, end(), _Tmp._Last);
            
            if(_Tmp._Last != _Tmp._First + size() + _N)
                return false;
                
            _Tmp._Swap(*this);
        }
        else
        {
#ifdef CE_STL_STRICT

            // Example: _N=3  _X='X'
            //  .---.---.---.---.---.---.---.---.---.---.---.---.---.---.
            //  | A | B | C | D | E | F | G | H | I |   |   |   |   |   |
            //  '---'---'---'---'---'---'---'---'---'---'---'---'---'---'
            //    ^       ^                           ^                   ^
            //    |       |                           |                   |
            // _First  _Where                      _Last                _End 

            // Free space for new item(s) by copying existing items to empty space at the end of the vector
            size_type CopiedItems = (_N < (size_type)(_Last - _Where)) ? _N : (_Last - _Where);
            
            iterator Copy = _Last + (_N - CopiedItems);
            
            iterator NewLast = _Copy(_Where, _Where + CopiedItems, Copy);
            
            if(NewLast != Copy + CopiedItems)
            {
                // Not all items could be copied - destroy those that were and bail out - vector will be unchanged
                //  .---.---.---.---.---.---.---.---.---.---.---.---.---.---.
                //  | A | B | C | D | E | F | G | H | I | C | D |   |   |   |
                //  '---'---'---'---'---'---'---'---'---'---'---'---'---'---'
                //    ^       ^                           ^       ^           ^
                //    |       |                           |       |           |
                // _First  _Where                       Copy   NewLast      _End 
                
                _Destroy(Copy, NewLast);
                return false;
            }
            
            //  .---.---.---.---.---.---.---.---.---.---.---.---.---.---.
            //  | A | B | C | D | E | F | G | H | I | C | D | E |   |   |
            //  '---'---'---'---'---'---'---'---'---'---'---'---'---'---'
            //    ^       ^                           ^           ^       ^
            //    |       |                           |           |       |
            // _First  _Where                       Copy       NewLast  _End 

            // Insert new item(s)
            for(size_type NewItems = 1; NewItems <= _N; ++NewItems)
            {
                if(_Where < _Last)
                    _Where->~T();
                
                if(!_Construct(_Where++, _X))
                {
                    //  .---.---.---.---.---.---.---.---.---.---.---.---.---.---.
                    //  | A | B | X | _ | E | F | G | H | I | C | D | E |   |   |
                    //  '---'---'---'---'---'---'---'---'---'---'---'---'---'---'
                    //    ^               ^                   ^           ^       ^
                    //    |               |                   |           |       |
                    // _First          _Where               Copy       NewLast  _End 

                    for(size_type j = 1; j <= NewItems; ++j)
                        swap_objects(*--_Where, *(Copy + NewItems - j));

                    //  .---.---.---.---.---.---.---.---.---.---.---.---.---.---.
                    //  | A | B | C | D | E | F | G | H | I | X | _ | E |   |   |
                    //  '---'---'---'---'---'---'---'---'---'---'---'---'---'---'
                    //    ^       ^                           ^           ^       ^
                    //    |       |                           |           |       |
                    // _First  _Where                       Copy       NewLast  _End 

                    _Destroy(Copy, NewLast);
                    
                    if(NewItems > CopiedItems)
                        _Destroy(_Last, _Last + NewItems - CopiedItems);
                    
                    return false;
                }
            }

            //  .---.---.---.---.---.---.---.---.---.---.---.---.---.---.
            //  | A | B | X | X | X | F | G | H | I | C | D | E |   |   |
            //  '---'---'---'---'---'---'---'---'---'---'---'---'---'---'
            //    ^                   ^               ^           ^       ^
            //    |                   |               |           |       |
            // _First              _Where           Copy       NewLast  _End 

            for(iterator it1 = Copy; CopiedItems > 0; ++it1, ++_Where, --CopiedItems)
                for(iterator it2 = it1; it2 > _Where; --it2)
                    swap_objects(*it2, *(it2-1));

            _Last = NewLast;
#else
            //
            // Vector has enough space, we need to move existing items and insert new ones
            //
            _MoveForward(_Where, _Where + _N);

            //
            // Insert new item(s)
            //
            for(; _N > 0; --_N, ++_Where, ++_Last)
                new (_Where)T(_X);
#endif
        }
        
        return true;
    }
    
    // move range of items from _F to end() forward to a new position _P
    #pragma prefast(suppress: 25057, "generic code: iterator can be a class")
    void _MoveForward(iterator _F, iterator _P)
    {
        assert(_F >= begin() && _F <= end());
        assert(_P >= begin() && _P <= _End);
        assert(_P + (end() - _F) <= _End);
        assert(_P > _F);
        
        iterator _L = end();
        
        //
        // Starting from last item in the range, re-construct the items
        // in their new position and destroy them in the old position.
        //
        for(--_L, _P += _L - _F; _L >= _F; --_P, --_L)
        {
            new (_P) T(*_L);
            _L->~T();
        }
    }
    
    // move range of items from _F to end() backward to a new position _P    
    #pragma prefast(suppress: 25057, "generic code: iterator can be a class")
    void _MoveBackward(iterator _F, iterator _P)
    {
        assert(_F >= begin() && _F <= end());
        assert(_P >= begin() && _P <= end());
        assert(_P <= _F);
        
        //
        // Move range of items to new position
        //
        for(; _F != end(); ++_P, ++_F)
        {
#ifdef CE_STL_STRICT
            swap_objects(*_P, *_F);
#else
            _P->~T();
            new (_P) T(*_F);
#endif // CE_STL_STRICT    
        }
        
        // Destroy moved items that were not overwritten by other moved items
        _Destroy(_P, end());
    }
    
    template <typename _Allocator>
    void _Swap(vector<T, _Allocator, _Tr>& Right)
    {
        // Supported only if both vectors use the "same" allocator,
        // not the same type but an "interchangeable" instance.
        // After the swap, buffer from one vector will be deallocated
        // by the allocator of the other vector and vice versa.
        assert(Right.get_allocator() == get_allocator());
        
        std::swap(Right._First, _First);
        std::swap(Right._Last, _Last);
        std::swap(Right._End, _End);
    }
    
#ifdef CE_STL_STRICT    
    template <typename _Val>
    bool _Construct(T* _Where, _Val const & _X)
    {
        new (_Where) T;
        
        return assign_object(*_Where, _X);
    }
#endif // CE_STL_STRICT    

private:
    iterator _First, _Last, _End;
};

template <typename T, typename _Al, typename _Tr>
inline void swap(vector<T, _Al, _Tr>& _Left, vector<T, _Al, _Tr>& _Right)
{
    _Left.swap(_Right);
}

}; // namespace ce

#endif // __VECTOR__
