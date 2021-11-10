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
*wctype.h - declarations for wide character functions
*
*       Created from wchar.h January 1996 by P.J. Plauger
*
*Purpose:
*       This file contains the types, macros and function declarations for
*       all ctype-style wide-character functions.  They may also be declared in
*       wchar.h.
*       [ISO]
*
*       Note: keep in sync with ctype.h and wchar.h.
*
*       [Public]
*
****/

#ifndef _INC_WCTYPE
#define _INC_WCTYPE

#ifdef  _MSC_VER
#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#include <crtdefs.h>

#ifdef  __cplusplus
extern "C" {
#endif

/* set bit masks for the possible character types */

#define _LEADBYTE       0x8000                  /* multibyte leadbyte */

typedef wchar_t wctrans_t;

#ifdef  __cplusplus
}
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_WCTYPE */

