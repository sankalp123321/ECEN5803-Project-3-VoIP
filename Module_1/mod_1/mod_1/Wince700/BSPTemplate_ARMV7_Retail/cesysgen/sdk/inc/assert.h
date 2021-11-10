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
/****
*
* assert.h - define the assert macro
*
* Purpose:
*   Defines the assert(exp) macro.
*   If the DEBUG compiler directive is set, assert(exp) where exp
*   evaluates to a false condition will result in a debug message
*   being printed to the debug console, followed by a DebugBreak().
*   The debug message will be in the form:
*
*   *** ASSERTION FAILED in <file>(<line>):
*   <expression>
*
* Note:
*   If the DEBUG directive is set, winbase.h will be included
*   by this file.
*
****/

#pragma once

#ifndef _INC_ASSERT
#define _INC_ASSERT

#include <crtdefs.h>

/* Define __cdecl for non-Microsoft compilers */

/* If DEBUG is not defined, make sure NDEBUG is defined */
#if !defined(DEBUG) && !defined(NDEBUG)
#define NDEBUG 1
#endif // !defined(DEBUG) && !defined(NDEBUG)

#ifdef NDEBUG

#define assert(exp) ((void)0)

#else /* NDEBUG */

#include <windef.h>
#include <types.h>
#include <winbase.h>
/* Multi-level macro needed to launder __LINE__ */
#define ASSERT_PRINT(exp,file,line) OutputDebugString(TEXT("\r\n*** ASSERTION FAILED in ") TEXT(file) TEXT("(") TEXT(#line) TEXT("):\r\n") TEXT(#exp) TEXT("\r\n"))
#define ASSERT_AT(exp,file,line) (void)( (exp) || (ASSERT_PRINT(exp,file,line), DebugBreak(), 0 ) )
#define assert(exp) ASSERT_AT(exp,__FILE__,__LINE__)

#endif /* NDEBUG */

#endif /* _INC_ASSERT */
