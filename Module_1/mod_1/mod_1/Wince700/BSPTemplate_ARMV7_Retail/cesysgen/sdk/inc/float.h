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
*float.h - constants for floating point values
*
*Purpose:
*       This file contains defines for a number of implementation dependent
*       values which are commonly used by sophisticated numerical (floating
*       point) programs.
*       [ANSI]
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_FLOAT
#define _INC_FLOAT

/*
 * STDLIB is included for legacy reasons.  It contains the "old" function
 * declarations.
 */
#include <stdlib.h>

#include <crtdefs.h>

#ifdef  __cplusplus
extern "C" {
#endif

_CRTIMP errno_t __cdecl _controlfp_s(__out_opt unsigned int *_CurrentState, __in unsigned int _NewValue, __in unsigned int _Mask);

_CRTIMP __checkReturn int __cdecl _isnanf(__in float);
_CRTIMP __checkReturn int __cdecl _isunordered(__in double, __in double);
_CRTIMP __checkReturn int __cdecl _isunorderedf(__in float, __in float);


#ifdef  __cplusplus
}
#endif

#endif  /* _INC_FLOAT */

