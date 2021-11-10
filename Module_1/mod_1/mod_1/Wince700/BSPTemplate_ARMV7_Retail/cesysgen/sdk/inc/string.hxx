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

#pragma once

#ifndef __STRING__
#define __STRING__

#include <assert.h>
#include "allocator.hxx"

// _string_t is a no-nonsense, STL-like, lightweight string class template.
// string and wstring are instances of the template for strings of char and wchar_t respectivly.
// In the simplest use, the template is merely managing dynamic memory for a string
// and thus has minimal or no overhead compared to manually allocation/freeing 
// dynamic memory.
// _string_t implements small string optimization - small strings are stored in internal buffer
// rather than in a buffer allocated from heap.

#if 0
/**/
/**/    ///////////////////////////////////////////////////
/**/    // 1. construction and assigment
/**/
/**/    ce::string      str;    // string
/**/    ce::wstring     wstr;   // wide character string
/**/    ce::tstring     tstr;   // system character string
/**/    ce::istring     istr;   // case-insensitive string
/**/    ce::wistring    wistr;  // case-insensitive wide-character string
/**/    ce::tistring    tistr;  // case-insensitive system-character string
/**/
/**/    // assigment
/**/    str = "string";
/**/    istr = str;
/**/    wstr = L"string";
/**/    wistr = wstr;
/**/    tstr = TEXT("string");
/**/    tistr = tstr;
/**/
/**/    // construction with initialization
/**/    ce::string str1("string1");
/**/    ce::wstring wstr2(wstr);
/**/
/**/    ///////////////////////////////////////////////////
/**/    // 2. comparison
/**/
/**/    // comparison operators can be used to compare string objects with appropriate
/**/    // "C" strings (character pointers) or "compatible" string objects.
/**/    // Strings are "incompatible" if they are of different characters (char vs. wchar_t)
/**/    // or different traits (for example case sensitive vs. case insensitive).
/**/
/**/    if(str == str1)
/**/        // ...
/**/    
/**/    if(str == "string")
/**/        // ...
/**/    
/**/    if(istr == "STRING")    // case-insensitive comparison
/**/        // ...
/**/    
/**/    if(wstr > L"STRING")
/**/        // ...
/**/
/**/    if(wistr >= L"STRING")  // case-insensitive comparison
/**/        // ...
/**/
/**/    // strings can be also compared using compare method
/**/    if(0 == wistr.compare(L"STRING"))
/**/        // ...
/**/    
/**/    ///////////////////////////////////////////////////
/**/    // 3. manipulating a string
/**/
/**/    if(!str.append(psz, 3))         // append first 3 characters from psz
/**/        return ERROR_OUTOFMEMORY;
/**/
/**/    // operator += can be used to append to a string
/**/    // Note that there is no way to check for OOM in this case,
/**/    // the string will have its old value
/**/    str += "text";
/**/
/**/    if(!str.assign("123", 2, 2))    // assing "12" to the string starting at position 2
/**/        return ERROR_OUTOFMEMORY;
/**/
/**/    if(!str.insert(5, "456"))       // insert "456" at position 5
/**/        return ERROR_OUTOFMEMORY;
/**/
/**/    str.erase(5, 3));               // erase 3 characters at position 5
/**/
/**/    str.erase(5);                   // erase from position 5 to the end of string
/**/
/**/    if(!str.replace(5, 3, "7890"))  // replace 3 characters at position 5 with "7890"
/**/        return ERROR_OUTOFMEMORY;
/**/
/**/    ///////////////////////////////////////////////////
/**/    // 4. finding characters/substrings
/**/
/**/    // wstring::npos indicates that substring/character was not found
/**/
/**/    n = wstr.find(L"ri");           // return possition of the first substring "ri"
/**/
/**/    n = wistr.find(L"ri");          // return possition of the first substring "ri", "Ri", "RI", or "rI"
/**/
/**/    n = wstr.find_first_of(L"ri");  // return possition of the first character 'r' or 'i'
/**/
/**/    n = wistr.find_first_of(L"ri"); // return possition of the first character 'r', 'R', 'i' or 'I'
/**/
/**/    n = wstr.find_last_of(L"ri");   // return possition of the last character 'r' or 'i'
/**/
/**/    n = wistr.find_last_of(L"ri");  // return possition of the last character 'r', 'R', 'i' or 'I'
/**/
/**/    ///////////////////////////////////////////////////
/**/    // 5. accessing underlaying C string
/**/
/**/    void foo(const char* psz);
/**/    void bar(wchar_t *ps, int n);
/**/
/**/    foo(str); // automatic conversion to const char*
/**/    
/**/    // reserve space for 100 characters and pass a writable buffer to a function
/**/    wstr.reserve(100);
/**/    bar(wstr.get_buffer(), wstr.capacity());
/**/
/**/    ///////////////////////////////////////////////////
/**/    // 6. miscellaneous helper functions
/**/    
/**/    // conversion between multi-byte and wide-character strings
/**/    ce::MultiByteToWideChar(CP_UTF8, "string", -1, &wstr);
/**/    ce::WideCharToMultiByte(CP_UTF8, wstr, -1, &istr);
/**/
/**/    // reading string or multi-string value from registry
/**/    ce::RegQueryValue(hkey, L"ValueName", wstr);
/**/    
/**/    ///////////////////////////////////////////////////
/**/    // 7. defining custom instances of _string_t template
/**/    
/**/    // string that uses internal buffer for strings up to 128 characters
/**/    typedef ce::_string_t<char, 128>  wstring128;
/**/
/**/    // wide character, case insensitive string that uses an alternative allocator
/**/    typedef ce::_string_t<wchar_t, 16, ce::i_char_traits<wchar_t>, ce::heap_allocator>  wstring_fixed;
/**/
#endif

// AUTOEXP.DAT
// 
// Add following line to your AUTOEXP.DAT to tell debugger how to display
// objects of this class in watch windows.
//
// ce::_string_t<*>=<_Ptr>

namespace ce
{

template <class T>
struct char_traits;

namespace details
{

class nonexistent;

}; // namespace details


// _string_t
template <class T, unsigned _BUF_SIZE = 16, class _Tr = char_traits<T>, class _Al = ce::allocator >
class _string_t : _Al
{
    class _buffer;
    
public:
    typedef _string_t<T, _BUF_SIZE, _Tr, _Al>   _Myt;
    typedef size_t                              size_type;
    typedef _Al                                 allocator_type;
    typedef T&                                  reference;
    typedef const T&                            const_reference;
    
    static const size_type                      npos = static_cast<size_type>(-1);

    // ctors
    _string_t()
        {_Init(); }
        
    explicit _string_t(const allocator_type& _Alloc)
        : _Al(_Alloc)
        {_Init(); }

#ifdef CE_STL_STRICT
private:
#endif
    _string_t(const _string_t& _X)
        : _Al(_X.get_allocator())
        {_Init(); assign(_X); }
    
    _string_t(const T* _S)
        {_Init(); assign(_S); }
        
    _string_t(const T* _S, const allocator_type& _Alloc)
        : _Al(_Alloc)
        {_Init(); assign(_S); }
        
    _string_t(const T* _S, size_type _Count)
        {_Init(); assign(_S, _Count); }
        
    _string_t(const T* _S, size_type _Count, const allocator_type& _Alloc)
        : _Al(_Alloc)
        {_Init(); assign(_S, _Count); }
        
    explicit _string_t(size_type _N)
        {_Init(); _Grow(_N); }
        
    _string_t(size_type _N, const allocator_type& _Alloc)
        : _Al(_Alloc)
        {_Init(); _Grow(_N); }

public:
    // dtor
    ~_string_t()
    {
        assert(_Len <= _Res);
        assert(_Ptr[_Res] == T(0));
        
        if(_Res != _BUF_SIZE)
            deallocate(_Ptr, (_Res + 1) * sizeof(T));
    }
    
    // length
    size_type length() const
        {return _Len; }
        
    // size
    size_type size() const
        {return length(); } 
        
    // capacity
    size_type capacity() const
        {return _Res; } 
        
    // empty
    bool empty() const   
        {return _Len == 0; }

    // reserve
    bool reserve(size_type _N)
        {return _Grow(_N); }

    // operator const T*
    const T *c_str() const
        {return _Ptr; }
        
    // operator const T*
    operator const T*() const
        {return _Ptr; }

    // swap
    void swap(_string_t& Right)
    { 
        // Supported only if both strings use the "same" allocator,
        // not just the same type but an "interchangeable" instance.
        // After the swap, buffer from one string will be deallocated
        // by the allocator of the other string and vice versa.
        // To remove this limiation, allocators would have to support
        // swap operation. 
        assert(Right.get_allocator() == get_allocator());
        
        T _TmpBuf[_BUF_SIZE + 1], *_RightBuf = Right._Buf;
        
        if(Right._Ptr == Right._Buf && _Ptr == _Buf)
            _Tr::copy(_RightBuf = _TmpBuf, Right._Buf, _BUF_SIZE + 1);
    
        if(_Ptr == _Buf)
        {
            _Tr::copy(Right._Buf, _Buf, _BUF_SIZE + 1);
            _Ptr = Right._Buf;
        }
        
        if(Right._Ptr == Right._Buf)
        {
            _Tr::copy(_Buf, _RightBuf, _BUF_SIZE + 1);
            Right._Ptr = _Buf;
        }

        std::swap(Right._Ptr, _Ptr);
        std::swap(Right._Res, _Res);
        std::swap(Right._Len, _Len);    
    }

#ifdef CE_STL_STRICT
private:
#endif
    // operator=
    _string_t& operator=(const T* _S)
        {assign(_S); return *this; }

    _string_t& operator=(const _string_t& _X)
        {assign(_X); return *this; }

    // operator+=
    _string_t& operator+=(const _string_t& _X)
        {append(_X); return *this; }

    _string_t& operator+=(const T* _S)
        {append(_S); return *this; }
    
public:    
    // operator[]
    reference operator[](size_type _Off)
        {return _Ptr[_Off]; }
        
    reference operator[](int _Off)
        {return _Ptr[_Off]; }

    const_reference operator[](int _Off) const
        {return _Ptr[_Off]; }
        
    const_reference operator[](size_type _Off) const
        {return _Ptr[_Off]; }
    
    // compare
    int compare(const _string_t& _X) const
        {return compare(_X._Ptr); }

    int compare(const T* _S) const
        {return _Tr::compare(_Ptr, _S); }
        
    int compare(const T* _S, size_type _N, size_type _Off = 0) const
        {return _Tr::compare(_Ptr + _Off, _S, _N); }
    
    // append
    bool append(const T& _C)
        {return append(&_C, 1); }

    bool append(const _string_t& _X)
        {return append(_X._Ptr, _X.length()); }

    bool append(const T* _S)
        {return append(_S, _Tr::length(_S)); }

    bool append(const T* _S, size_type _N)
        {return assign(_S, _N, _Len); }

    // assign
    bool assign(const T& _C)
        {return assign(&_C, 1); }

    bool assign(const _string_t& _X)
        {return assign(_X._Ptr, _X.length()); }
    
    bool assign(const T* _S)
        {return assign(_S, _Tr::length(_S)); }
    
    bool assign(const T* _S, size_type _N, size_type _Off = 0)
    {
        if(_N + _Off >= _N &&   // protect against integer overflow 
           _Grow(_N + _Off))
        {
            _Tr::copy(_Ptr + _Off, _S, _N);
            _Eos(_N + _Off);
            
            return true;
        }

        return false;
    }
    
    
    // erase
    void erase(size_type _Off = 0, size_type _Count = npos)
    {
        if(_Len > _Off)
        {    
            if(_Len - _Off < _Count)
                _Count = _Len - _Off; // trim _Count
            
            _Tr::copy(_Ptr + _Off, _Ptr + _Off + _Count, _Len - _Off - _Count);
            _Eos(_Len - _Count);
        }
    }
    
    
    // insert
    bool insert(size_type _Off, const T* _S)
        {return insert(_Off, _S, _Tr::length(_S)); }
    
    
    bool insert(size_type _Off, const T* _S, size_type _Count)
    {
        // behavior of insert is undefined when inserting substring
        assert(_S < _Ptr || (_Len >= 0 && _S >= _Ptr + _Len));
        
        if(0 < _Count)
        {
            size_type _Num;
            
            if(_Len + _Count >= _Len && _Off >= 0 &&   // protect against integer overflow
               _Grow(_Num = _Len + _Count))
            {
                _Tr::copy(_Ptr + _Off + _Count, _Ptr + _Off, _Len - _Off);
                _Tr::copy(_Ptr + _Off, _S, _Count);
                _Eos(_Num);
            }
            else
                return false;
        }
        
        return true;
    }
    
    
    // replace
    bool replace(size_type _Off, size_type _N0, const T*_S)
        {return replace(_Off, _N0, _S, _Tr::length(_S)); }
        
    bool replace(size_type _Off, size_type _N0, const T*_S, size_type _Count)
        {return erase(_Off, _N0), insert(_Off, _S, _Count); }
    
    
    // clear
    void clear()
        {_Eos(0); }

    // resize
    bool resize(size_type _N)
    {
        if(_Grow(_N))
        {
            _Eos(_N);
            
            return true;
        }
        
        return false;
    }
    
    // get_buffer()
    _buffer get_buffer()
        {return this; }

    
    // find
    size_type find(const T* _S, size_type _Off = 0) const
        {return find(_S, _Off, _Tr::length(_S)); }
    
    // find
    size_type find(const T* _S, size_type _Off, size_type _Count) const
    {
        if (_Count == 0 && _Off <= _Len)
            return _Off;    // null string always matches (if inside string)

        if(_Off < _Len && _Count <= _Len - _Off)
        {    // room for match, look for it
            const T     *_Uptr, *_Vptr;
            size_type   _Nm = _Len - _Off - _Count + 1;
            
            for(_Vptr = _Ptr + _Off;
                NULL != (_Uptr = _Tr::find(_Vptr, *_S, _Nm));
                _Nm -= _Uptr - _Vptr + 1, _Vptr = _Uptr + 1)
            {
                if(_Tr::compare(_Uptr, _S, _Count) == 0)
                    return _Uptr - _Ptr;    // found a match
            }
        }

        return npos;    // no match
    }
    
    
    // find_first_of
    size_type find_first_of(const T* _S, size_type _Off = 0) const
    {
        if(_Off < _Len)
        {
            const T* const _V = _Ptr + _Len;

            for(const T* _U = _Ptr + _Off; _U < _V; ++_U)
                if(_Tr::find(_S, *_U) != NULL)
                    return (_U - _Ptr);
        }

        return npos;
    }
    
    
    // find_first_not_of
    size_type find_first_not_of(const T* _S, size_type _Off = 0) const
    {
        if(_Off < _Len)
        {
            const T* const _V = _Ptr + _Len;

            for(const T* _U = _Ptr + _Off; _U < _V; ++_U)
                if(_Tr::find(_S, *_U) == NULL)
                    return (_U - _Ptr);
        }

        return npos;
    }

    
    // find_last_of
    size_type find_last_of(const T* _S, size_type _Off = npos) const
    {
        if(0 < _Len)
            for(const T* _U = _Ptr + (_Off < _Len ? _Off : _Len - 1); ; --_U)
                if(_Tr::find(_S, *_U) != NULL)
                    return (_U - _Ptr);
                else if (_U == _Ptr)
                    break;

        return npos;
    }
    
    
    // find_last_not_of
    size_type find_last_not_of(const T* _S, size_type _Off = npos) const
    {
        if(0 < _Len)
            for(const T* _U = _Ptr + (_Off < _Len ? _Off : _Len - 1); ; --_U)
                if(_Tr::find(_S, *_U) == NULL)
                    return (_U - _Ptr);
                else if (_U == _Ptr)
                    break;

        return npos;
    }

    // trim
    void trim(const T* _S)
    {
        size_type _Off;

        _Off = find_first_not_of(_S);
        _Off = (_Off == npos) ? _Len : _Off;
        
        if(_Off != 0)
        {
            _Tr::copy(_Ptr, _Ptr + _Off, _Len - _Off);
            _Eos(_Len - _Off);
        }

        _Off = find_last_not_of(_S);

        if(_Off != npos)
            _Eos(_Off + 1);
    }
    
    // get_allocator
    const allocator_type& get_allocator() const
        {return *this; }

protected:
    void _Init()
    {
        _Res = _BUF_SIZE;
        _Ptr = _Buf;
        _Ptr[_Res] = T(0);
        _Eos(0);
    }
    
    // _Grow
    bool _Grow(size_type _N)
    {
        if(_Res < _N)
        {
            // try to grow exponentially
            size_type _NewRes = _Res + _Res / 2;
            
            if(_NewRes < _N)
                _NewRes = _N;
            
            T* _New = reinterpret_cast<T*>(allocate((_NewRes + 1) * sizeof(T)));

            if(!_New)
            {
                // if allocation failed, retry with exact size required
                _New = reinterpret_cast<T*>(allocate(((_NewRes = _N) + 1) * sizeof(T)));
                
                if(!_New)
                    return false;
            }
            
            _Tr::copy(_New, _Ptr, _Res);

            if(_Res != _BUF_SIZE)
                deallocate(_Ptr, (_Res + 1) * sizeof(T));

            _Ptr = _New;
            _Res = _NewRes;
            _Ptr[_Res] = T(0);
        }
        
        assert(_Res >= _N);

        return true;
    }

    // _Eos
    void _Eos(size_type _N)
    {
        assert(_N <= _Res);
        
        _Ptr[_Len = _N] = T(0);
    }
    
    //
    // This declaration is included so that operator const T* is not used
    // in a syntax requiring a pointer, for example:
    // if(str) ...
    // if(str1 == str2) ... where strings are incompatible
    //
    // operator const T* will be used only when conversion to const T* is required 
    // either implicitly or through explicit static_cast
    // 
    operator const details::nonexistent*() const;

private:
    T*          _Ptr;
    T           _Buf[_BUF_SIZE + 1];
    size_type   _Len, _Res;

    friend _buffer;
    
    class _buffer
    {
    public:
        _buffer(_string_t* _X)
            : _Str(_X)
            {}

        ~_buffer()
            {_Str->_Eos(_Tr::length(_Str->_Ptr)); }

        operator T*()
            {return _Str->_Ptr; }

    private:
        _string_t* _Str;
    };
};


//
// Comparison operators are defined for any two instances of _string_t with the same T and _Tr arguments;
// _BUF_SIZE and _Al may be different because they don't impact results of comparisons.
// There are also comparison operators taking const T* as left or right argument.
//

// operator==
template <class T, unsigned _BUF_SIZE_L, unsigned _BUF_SIZE_R, class _Tr, class _Al_L, class _Al_R>
inline bool operator==(const _string_t<T, _BUF_SIZE_L, _Tr, _Al_L>& _L, const _string_t<T, _BUF_SIZE_R, _Tr, _Al_R>& _R)
    {return _L.compare(_R) == 0; }

template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
inline bool operator==(const _string_t<T, _BUF_SIZE, _Tr, _Al>& _L, const T* _R)
    {return _L.compare(_R) == 0; }

template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
inline bool operator==(const T* _L, const _string_t<T, _BUF_SIZE, _Tr, _Al>& _R)
    {return _R.compare(_L) == 0; }


// operator!=
template <class T, unsigned _BUF_SIZE_L, unsigned _BUF_SIZE_R, class _Tr, class _Al_L, class _Al_R>
inline bool operator!=(const _string_t<T, _BUF_SIZE_L, _Tr, _Al_L>& _L, const _string_t<T, _BUF_SIZE_R, _Tr, _Al_R>& _R)
    {return !(_L == _R); }

template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
inline bool operator!=(const _string_t<T, _BUF_SIZE, _Tr, _Al>& _L, const T* _R)
    {return !(_L == _R); }

template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
inline bool operator!=(const T* _L, const _string_t<T, _BUF_SIZE, _Tr, _Al>& _R)
    {return !(_L == _R); }


// operator<
template <class T, unsigned _BUF_SIZE_L, unsigned _BUF_SIZE_R, class _Tr, class _Al_L, class _Al_R>
inline bool operator<(const _string_t<T, _BUF_SIZE_L, _Tr, _Al_L>& _L, const _string_t<T, _BUF_SIZE_R, _Tr, _Al_R>& _R)
    {return _L.compare(_R) < 0; }

template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
inline bool operator<(const _string_t<T, _BUF_SIZE, _Tr, _Al>& _L, const T* _R)
    {return _L.compare(_R) < 0; }

template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
inline bool operator<(const T* _L, const _string_t<T, _BUF_SIZE, _Tr, _Al>& _R)
    {return _R.compare(_L) > 0; }
    

// operator>
template <class T, unsigned _BUF_SIZE_L, unsigned _BUF_SIZE_R, class _Tr, class _Al_L, class _Al_R>
inline bool operator>(const _string_t<T, _BUF_SIZE_L, _Tr, _Al_L>& _L, const _string_t<T, _BUF_SIZE_R, _Tr, _Al_R>& _R)
    {return _R < _L; }

template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
inline bool operator>(const _string_t<T, _BUF_SIZE, _Tr, _Al>& _L, const T* _R)
    {return _R < _L; }

template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
inline bool operator>(const T* _L, const _string_t<T, _BUF_SIZE, _Tr, _Al>& _R)
    {return _R < _L; }
        

// operator<=
template <class T, unsigned _BUF_SIZE_L, unsigned _BUF_SIZE_R, class _Tr, class _Al_L, class _Al_R>
inline bool operator<=(const _string_t<T, _BUF_SIZE_L, _Tr, _Al_L>& _L, const _string_t<T, _BUF_SIZE_R, _Tr, _Al_R>& _R)
    {return !(_R < _L); }

template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
inline bool operator<=(const _string_t<T, _BUF_SIZE, _Tr, _Al>& _L, const T* _R)
    {return !(_R < _L); }

template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
inline bool operator<=(const T* _L, const _string_t<T, _BUF_SIZE, _Tr, _Al>& _R)
    {return !(_R < _L); }
    
    
// operator>=
template <class T, unsigned _BUF_SIZE_L, unsigned _BUF_SIZE_R, class _Tr, class _Al_L, class _Al_R>
inline bool operator>=(const _string_t<T, _BUF_SIZE_L, _Tr, _Al_L>& _L, const _string_t<T, _BUF_SIZE_R, _Tr, _Al_R>& _R)
    {return !(_L < _R); }

template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
inline bool operator>=(const _string_t<T, _BUF_SIZE, _Tr, _Al>& _L, const T* _R)
    {return !(_L < _R); }

template <class T, unsigned _BUF_SIZE, class _Tr, class _Al>
inline bool operator>=(const T* _L, const _string_t<T, _BUF_SIZE, _Tr, _Al>& _R)
    {return !(_L < _R); }
    
//
// basic_char_traits
//
// Base class for all the predefined string trait classes
//
template <class T>
struct basic_char_traits
{
    static T* __cdecl copy(__out_ecount(_N) T* _U, const T* _V, size_t _N)
        {return (T*)memmove(_U, _V, _N * sizeof(T)); }

    static T* __cdecl assign(T* _U, size_t _N, const T& _C)
        {return (T*)memset(_U, _C, _N * sizeof(T)); }
    
    static size_t __cdecl length(const T* _U)
    {
        if(_U)
        {
            const T *eos = _U;

            while(*eos)
                ++eos;

            return (size_t)(eos - _U);
        }
        else
            return 0;
    }
};


//
// char_traits for char
//
// string traits class for case sensitive char string
//
template<>
struct char_traits<char> : public basic_char_traits<char>
{
    static int __cdecl compare(const char* _U, const char* _V)
        {return _U ? (_V ? strcmp(_U, _V) : 1) : -1; }
        
    static int __cdecl compare(const char* _U, const char* _V, size_t _Count)
        {return _U ? (_V ? strncmp(_U, _V, _Count) : 1) : -1; }

    static const char* __cdecl find(const char* _U, const char& _C)
        {return strchr(_U, _C); }
    
    static const char* __cdecl find(const char* _U, const char& _C, size_t _Count)
    {
        for(; *_U && _Count; ++_U, --_Count)
            if(*_U == _C)
                return _U;
        
        return NULL; 
    }
};


template <class T>
struct i_char_traits;

//
// i_char_traits<char>
//
// string traits class for case insensitive char string
//
template<>
struct i_char_traits<char> : public basic_char_traits<char>
{
    static int __cdecl compare(const char* _U, const char* _V)
        {return _U ? (_V ? _stricmp(_U, _V) : 1) : -1; }
        
    static int __cdecl compare(const char* _U, const char* _V, size_t _Count)
        {return _U ? (_V ? _strnicmp(_U, _V, _Count) : 1) : -1; }

    static const char* __cdecl find(const char* _U, const char& _C)
    {
        for(; *_U; ++_U)
            if(toupper(*_U) == toupper(_C))
                return _U;
        
        return NULL; 
    }
    
    static const char* __cdecl find(const char* _U, const char& _C, size_t _Count)
    {
        for(; *_U && _Count; ++_U, --_Count)
            if(toupper(*_U) == toupper(_C))
                return _U;
        
        return NULL; 
    }
};


//
// char_traits<wchar_t>
//
// string traits class for case sensitive wchar_t string
//
template<>
struct char_traits<wchar_t> : public basic_char_traits<wchar_t>
{
    static int __cdecl compare(const wchar_t* _U, const wchar_t* _V)
        {return _U ? (_V ? wcscmp(_U, _V) : 1) : -1; }
        
    static int __cdecl compare(__in_ecount(_Count) const wchar_t* _U, const wchar_t* _V, size_t _Count)
        {return _U ? (_V ? wcsncmp(_U, _V, _Count) : 1) : -1; }

    static const wchar_t* __cdecl find(const wchar_t* _U, const wchar_t& _C)
        {return wcschr(_U, _C); }
    
    static const wchar_t* __cdecl find(const wchar_t* _U, const wchar_t& _C, size_t _Count)
    {
        for(; *_U && _Count; ++_U, --_Count)
            if(*_U == _C)
                return _U;
        
        return NULL; 
    }
};


//
// i_char_traits<wchar_t>
//
// string traits class for case insensitive wchar_t string
//
template<>
struct i_char_traits<wchar_t> : public basic_char_traits<wchar_t>
{
    static int __cdecl compare(const wchar_t* _U, const wchar_t* _V)
        {return _U ? (_V ? _wcsicmp(_U, _V) : 1) : -1; }

    static int __cdecl compare(const wchar_t* _U, const wchar_t* _V, size_t _Count)
        {return _U ? (_V ? _wcsnicmp(_U, _V, _Count) : 1) : -1; }
        
    static const wchar_t* __cdecl find(const wchar_t* _U, const wchar_t& _C)
    {
        for(; *_U; ++_U)
            if(towupper(*_U) == toupper(_C))
                return _U;
        
        return NULL; 
    }
    
    static const wchar_t* __cdecl find(const wchar_t* _U, const wchar_t& _C, size_t _Count)
    {
        for(; *_U && _Count; ++_U, --_Count)
            if(towupper(*_U) == toupper(_C))
                return _U;
        
        return NULL; 
    }
};


//
// MultiByteToWideChar
//
// Convert multibyte string to wide character and store result in a string variable
//
template<unsigned _BUF_SIZE, class _Tr, class _Al>
inline int MultiByteToWideChar(UINT CodePage, __in_bcount(cbMultiByte) LPCSTR lpMultiByteStr, int cbMultiByte, _string_t<wchar_t, _BUF_SIZE, _Tr, _Al>* pwstr, DWORD dwFlags = 0)
{
    int nSize;

    nSize = ::MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, NULL, 0);

    if(!nSize)
    {
        nSize = ::MultiByteToWideChar(CP_ACP, dwFlags, lpMultiByteStr, cbMultiByte, NULL, 0);
        if(nSize)
            CodePage = CP_ACP;
    }
    
    pwstr->resize(nSize);
    
    return ::MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, pwstr->get_buffer(), static_cast<int>(pwstr->capacity()));
}


//
// WideCharToMultiByte
//
// Convert wide character string to multibyte and store result in a string variable
//
template<unsigned _BUF_SIZE, class _Tr, class _Al>
inline int WideCharToMultiByte(UINT CodePage, LPCWSTR lpWideCharStr, int cchWideChar, _string_t<char, _BUF_SIZE, _Tr, _Al>* pstr, DWORD dwFlags = 0, LPCSTR lpDefaultChar = NULL, LPBOOL lpUsedDefaultChar = NULL)
{
    int nSize;

    nSize = ::WideCharToMultiByte(CodePage, dwFlags, lpWideCharStr, cchWideChar, NULL, 0, lpDefaultChar, lpUsedDefaultChar);

    if(!nSize)
    {
        nSize = ::WideCharToMultiByte(CP_ACP, dwFlags, lpWideCharStr, cchWideChar, NULL, 0, lpDefaultChar, lpUsedDefaultChar);
        if(nSize)
            CodePage = CP_ACP;
    }
    
    pstr->resize(nSize);
    
    return ::WideCharToMultiByte(CodePage, dwFlags, lpWideCharStr, cchWideChar, pstr->get_buffer(), static_cast<int>(pstr->capacity()), lpDefaultChar, lpUsedDefaultChar);
}


//
// RegQueryValue
// 
// Read REG_SZ or REG_MULTI_SZ value from registry into a string variable
//
template<unsigned _BUF_SIZE, class _Tr, class _Al>
inline LONG RegQueryValue(HKEY hkey, LPCWSTR wszName, _string_t<wchar_t, _BUF_SIZE, _Tr, _Al>& value)
{
    DWORD dwErr, cbSize = 0;
    
    while(ERROR_MORE_DATA == (dwErr = RegQueryValueEx(hkey, wszName, NULL, NULL, reinterpret_cast<LPBYTE>(static_cast<LPWSTR>(value.get_buffer())), &(cbSize = value.capacity() * sizeof(wchar_t)))))
        if(!value.reserve(cbSize / sizeof(wchar_t)))
            break;
    
    if(dwErr == ERROR_SUCCESS)
        value.resize(cbSize / sizeof(wchar_t));
    
    return dwErr;
}


//
// Common instances of _string_t template
//
typedef _string_t<char>                                     string;
typedef _string_t<wchar_t>                                  wstring;
typedef _string_t<TCHAR>                                    tstring;
typedef _string_t<char, 16, i_char_traits<char> >           istring;
typedef _string_t<wchar_t, 16, i_char_traits<wchar_t> >     wistring;
typedef _string_t<TCHAR, 16, i_char_traits<TCHAR> >         tistring;

}; // namespace ce


#endif // __STRING__
