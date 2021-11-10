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
*wchar.h - declarations for wide character functions
*
*Purpose:
*       This file contains the types, macros and function declarations for
*       all wide character-related functions.  They may also be declared in
*       individual header files on a functional basis.
*       [ISO]
*
*       Note: keep in sync with ctype.h, stdio.h, stdlib.h, string.h, time.h.
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_WCHAR
#define _INC_WCHAR

/*
 * STDLIB is included for legacy reasons.
 */
#include "stdlib.h"

#include <crtdefs.h>

#ifdef  _MSC_VER
#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#ifdef  __cplusplus
extern "C" {
#endif

/*
 *  According to the standard, WCHAR_MIN and WCHAR_MAX need to be
 *  "constant expressions suitable for use in #if preprocessing directives,
 *  and this expression shall have the same type as would an expression that
 *  is an object of the corresponding type converted according to the integer
 *  promotions".
 */
#define WCHAR_MIN       0
#define WCHAR_MAX       0xffff

typedef int mbstate_t;
typedef wchar_t _Wint_t;

#ifdef  __cplusplus
inline int fwide(FILE *, int _M)
        {return (_M); }
inline int mbsinit(const mbstate_t *)
        {return (1); }
inline const wchar_t *wmemchr(const wchar_t *_S, wchar_t _C, size_t _N)
        {for (; 0 < _N; ++_S, --_N)
                if (*_S == _C)
                        return (_S);
        return (0); }
inline int wmemcmp(const wchar_t *_S1, const wchar_t *_S2, size_t _N)
        {for (; 0 < _N; ++_S1, ++_S2, --_N)
                if (*_S1 != *_S2)
                        return (*_S1 < *_S2 ? -1 : +1);
        return (0); }
inline wchar_t *wmemcpy(wchar_t *_S1, const wchar_t *_S2, size_t _N)
        {wchar_t *_Su1 = _S1;
        for (; 0 < _N; ++_Su1, ++_S2, --_N)
                *_Su1 = *_S2;
        return (_S1); }
inline wchar_t *wmemmove(wchar_t *_S1, const wchar_t *_S2, size_t _N)
        {wchar_t *_Su1 = _S1;
        if (_S2 < _Su1 && _Su1 < _S2 + _N)
                for (_Su1 += _N, _S2 += _N; 0 < _N; --_N)
                        *--_Su1 = *--_S2;
        else
                for (; 0 < _N; --_N)
                        *_Su1++ = *_S2++;
        return (_S1); }
inline wchar_t *wmemset(wchar_t *_S, wchar_t _C, size_t _N)
        {wchar_t *_Su = _S;
        for (; 0 < _N; ++_Su, --_N)
                *_Su = _C;
        return (_S); }
}       /* end of extern "C" */
inline wchar_t *wmemchr(wchar_t *_S, wchar_t _C, size_t _N)
        {return ((wchar_t *)wmemchr((const wchar_t *)_S, _C, _N)); }

#endif /* __cplusplus */

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_WCHAR */

