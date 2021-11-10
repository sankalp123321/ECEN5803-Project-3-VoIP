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
/***
*new.h - declarations and definitions for C++ memory allocation functions
*
*
*Purpose:
*       Contains the declarations for C++ memory allocation functions.
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_NEW
#define _INC_NEW

#ifdef  __cplusplus

#ifndef _MSC_EXTENSIONS
#include <new>
#endif

#include <crtdefs.h>

/* Protect against #define of new */
#pragma push_macro("new")
#undef  new

/* types and structures */

#ifdef  _MSC_EXTENSIONS

// set_new_handler should be in namespace std
// namespace std {

typedef void (__cdecl * new_handler) ();
_CRTIMP new_handler __cdecl set_new_handler(__in_opt new_handler _NewHandler) throw();

// using std::new_handler;
// using std::set_new_handler;

// }

#endif

#ifndef __NOTHROW_T_DEFINED
#define __NOTHROW_T_DEFINED
namespace std {
        /* placement new tag type to suppress exceptions */
        struct nothrow_t {};

        /* constant for placement new tag */
        extern const nothrow_t nothrow;
};

__bcount_opt(_Size) void *__CRTDECL operator new(size_t _Size, const std::nothrow_t&) throw();
__bcount_opt(_Size) void *__CRTDECL operator new[](size_t _Size, const std::nothrow_t&) throw();
void __CRTDECL operator delete(void *, const std::nothrow_t&) throw();
void __CRTDECL operator delete[](void *, const std::nothrow_t&) throw();
#endif

#ifndef __PLACEMENT_NEW_INLINE
#define __PLACEMENT_NEW_INLINE
inline void *__CRTDECL operator new(size_t, void *_Where)
        {return (_Where); }
#if     _MSC_VER >= 1200
inline void __CRTDECL operator delete(void *, void *)
        {return; }
#endif
#endif


/*
 * new mode flag -- when set, makes malloc() behave like new()
 */

_CRTIMP int __cdecl _query_new_mode( void );
_CRTIMP int __cdecl _set_new_mode( int );

#ifndef _PNH_DEFINED
typedef int (__cdecl * _PNH)( size_t );
#define _PNH_DEFINED
#endif

_CRTIMP _PNH __cdecl _query_new_handler( void );
_CRTIMP _PNH __cdecl _set_new_handler( __in_opt _PNH _NewHandler);

#pragma pop_macro("new")

#endif  /* __cplusplus */

#endif  /* _INC_NEW */
