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
*stdio.h - definitions/declarations for standard I/O routines
*
*Purpose:
*       This file defines the structures, values, macros, and functions
*       used by the level 2 I/O ("standard I/O") routines.
*       [ANSI/System V]
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_STDIO
#define _INC_STDIO

/*
 * STDLIB is included for legacy reasons.  It contains the "old" function
 * declarations.
 */
#include <stdlib.h>

#include <crtdefs.h>
#ifdef  _MSC_VER
/*
 * Currently, all MS C compilers for Win32 platforms default to 8 byte
 * alignment.
 */
#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#ifdef  __cplusplus
extern "C" {
#endif

/* Define NULL pointer value */
#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

/* Function prototypes */

// @CESYSGEN IF COREDLL_CORESTRA
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl sscanf_s(__in_z const char * _Src, __in_z __format_string const char * _Format, ...);
#endif

_CRTIMP __checkReturn int __cdecl _scprintf(__in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn int __cdecl _vscprintf(__in_z __format_string const char * _Format, va_list _ArgList);
// @CESYSGEN ENDIF

_CRTIMP int __cdecl _set_printf_count_output(__in int _Value);
_CRTIMP int __cdecl _get_printf_count_output();

// @CESYSGEN IF COREDLL_CORESTRW
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl swscanf_s(__in_z const wchar_t *_Src, __in_z __format_string const wchar_t * _Format, ...);
#endif
// @CESYSGEN ENDIF

// @CESYSGEN IF COREDLL_CORESIOA
#if __STDC_WANT_SECURE_LIB__
_CRTIMP __checkReturn_wat errno_t __cdecl fopen_s(__deref_out_opt FILE ** _File, __in_z const char * _Filename, __in_z const char * _Mode);
_CRTIMP __checkReturn_opt int __cdecl fprintf_s(__inout FILE * _File, __in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl fscanf_s(__inout FILE * _File, __in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl printf_s(__in_z __format_string const char * _Format, ...);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl scanf_s(__in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl vfprintf_s(__inout FILE * _File, __in_z __format_string const char * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl vprintf_s(__in_z __format_string const char * _Format, va_list _ArgList);
#endif
// @CESYSGEN ENDIF

// @CESYSGEN IF COREDLL_CORESIOW
#if __STDC_WANT_SECURE_LIB__
_CRTIMP __checkReturn_opt int __cdecl fwprintf_s(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl wprintf_s(__in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl vfwprintf_s(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl vwprintf_s(__in_z __format_string const wchar_t * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl fwscanf_s(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, ...);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl wscanf_s(__in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_wat errno_t __cdecl _wfopen_s(__deref_out_opt FILE ** _File, __in_z const wchar_t * _Filename, __in_z const wchar_t * _Mode);
#endif

_CRTIMP __checkReturn int __cdecl _scwprintf(__in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn int __cdecl _vscwprintf(__in_z __format_string const wchar_t * _Format, va_list _ArgList);
// @CESYSGEN ENDIF

// @CESYSGEN IF COREDLL_CORESIOA || COREDLL_CORESIOW
#if __STDC_WANT_SECURE_LIB__
_CRTIMP __checkReturn_wat errno_t __cdecl clearerr_s(__inout FILE * _File );
_CRTIMP __checkReturn_opt size_t __cdecl fread_s(__out_bcount(_ElementSize*_Count) void * _DstBuf, __in size_t _DstSize, __in size_t _ElementSize, __in size_t _Count, __inout FILE * _File);
_CRTIMP __checkReturn_wat errno_t __cdecl _wfreopen_s(__deref_out_opt FILE ** _File, __in_z const wchar_t * _Filename, __in_z const wchar_t * _Mode, __inout FILE * _OldFile);
#endif
// @CESYSGEN ENDIF

#ifdef  __cplusplus
}
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_STDIO */

