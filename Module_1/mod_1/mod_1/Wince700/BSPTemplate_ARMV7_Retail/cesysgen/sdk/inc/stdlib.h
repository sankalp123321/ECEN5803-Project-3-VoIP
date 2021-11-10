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
*stdlib.h - declarations/definitions for *ALL* CORELIBC functions
*
*
*Purpose:
*    This include file contains the function declarations for
*    ALL CORELIBC functions
*
****/
#pragma once

#ifndef _INC_STDLIB
#define _INC_STDLIB

#include <crtdefs.h>

/* Define _CRT_BANNED_DEPRECATE */
#ifndef _CRT_BANNED_DEPRECATE
#ifdef _CRT_SECURE_DEPRECATE_BANNED
#define _CRT_BANNED_DEPRECATE(_Replacement) _CRT_DEPRECATE_TEXT("This function or variable has been banned. Consider using " #_Replacement " instead. To disable deprecation, undefine _CRT_SECURE_DEPRECATE_BANNED.")
#else
#define _CRT_BANNED_DEPRECATE(_Replacement)
#endif
#endif

/*******************************
 * The following definitions should come from crtdefs.h, but we might
 * pick up the wrong one from the Visual C++ SDK.
 */

/* Define _INTRIMP for functions which are always intrinsics */
#ifndef _INTRIMP
#define _INTRIMP
#endif

/* Define _INTRIMP2 for functions which are intrinsic for RISC, but not x86 */
#ifndef _INTRIMP2
#define _INTRIMP2
#endif

#if !defined(UNALIGNED)
#if defined(_M_IX86)
#define UNALIGNED
#else
#define UNALIGNED __unaligned
#endif
#endif

#ifndef _CRTNORETURN
#if (_MSC_VER >= 1400) && !defined(__midl) && !defined(MIDL_PASS)
#define _CRTNORETURN __declspec(noreturn)
#else
#define _CRTNORETURN
#endif
#endif  /* _CRTNORETURN */

#if !defined(_CRTAPI1)
#define _CRTAPI1 __cdecl
#endif

/*******************************/


#define COREDLL_CRT 1

#ifdef  _MSC_VER
/*
 * Currently, all MS C compilers for Win32 platforms default to 8 byte
 * alignment.
 */
#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _CRTIMP_DATA
#define _CRTIMP_DATA __declspec(dllimport)
#endif

#ifndef _NLSCMP_DEFINED
#define _NLSCMPERROR    2147483647  /* currently == INT_MAX */
#define _NLSCMP_DEFINED
#endif

#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

extern int __argc;          /* count of cmd line args */
extern char ** __argv;      /* pointer to table of cmd line args */
extern wchar_t ** __wargv;  /* pointer to table of wide cmd line args */

#ifndef _VA_LIST_DEFINED
typedef char * va_list;
#define _VA_LIST_DEFINED
#endif

/*
 * definition of _exception struct - this struct is passed to the matherr
 * routine when a floating point exception is detected
 */
struct _exception {
    int type;        /* exception type - see below */
    char *name;      /* name of function where error occured */
    double arg1;     /* first argument to function */
    double arg2;     /* second argument (if any) to function */
    double retval;   /* value to be returned by function */
    } ;

/* _countof helper */
#if !defined(_countof)
#if !defined(__cplusplus)
#define _countof(_Array) (sizeof(_Array) / sizeof(_Array[0]))
#else
extern "C++"
{
template <typename _CountofType, size_t _SizeOfArray>
char (*__countof_helper(UNALIGNED _CountofType (&_Array)[_SizeOfArray]))[_SizeOfArray];
#define _countof(_Array) sizeof(*__countof_helper(_Array))
}
#endif
#endif

/****************** MALLOC.H ************************/

#ifndef _CRT_ALLOCATION_DEFINED
#define _CRT_ALLOCATION_DEFINED
_CRTIMP   _CRTNOALIAS _CRTRESTRICT __checkReturn __bcount_opt(_NumOfElements* _SizeOfElements) void * __cdecl calloc(__in size_t _NumOfElements, __in size_t _SizeOfElements);
_CRTIMP   _CRTNOALIAS                                                                          void   __cdecl free(__inout_opt void * _Memory);
_CRTIMP   _CRTNOALIAS _CRTRESTRICT __checkReturn __bcount_opt(_Size)                           void * __cdecl malloc(__in size_t _Size);
_CRTIMP   _CRTNOALIAS _CRTRESTRICT __checkReturn __bcount_opt(_NewSize)                        void * __cdecl realloc(__in_opt void * _Memory, __in size_t _NewSize);
#endif

_CRTIMP   __checkReturn size_t  __cdecl _msize(__in void * _Memory);

_CRT_BANNED_DEPRECATE(_malloca and _freea) __checkReturn __bcount(_Size) void * __cdecl _alloca(__in size_t _Size);

          
#if !__STDC__
/* Non-ANSI names for compatibility */
#define alloca  _alloca
#endif /* __STDC__ */


/****************** PROCESS.H ***********************/

_CRTNORETURN void __cdecl exit(__in int _Code);
_CRTNORETURN void __cdecl _exit(__in int _Code);
void __cdecl _cexit(void);
void __cdecl _c_exit (void);

/*
 * Security check initialization used by /GS security checks.
 */
void __cdecl __security_init_cookie(void);

/****************** STRING.H ************************/

/* WIDE string functions */
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl wcscat_s(__inout_ecount_z(_DstSize) wchar_t * _Dst, __in rsize_t _DstSize, const wchar_t * _Src);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, wcscat_s, __deref_inout_z wchar_t, _Dest, __in_z const wchar_t *, _Source)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(wchar_t *, __RETURN_POLICY_DST, _INTRIMP, wcscat, __inout_z wchar_t, _Dest, __in_z const wchar_t *, _Source)
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl wcscpy_s(__out_ecount_z(_DstSize) wchar_t * _Dst, __in rsize_t _DstSize, __in_z const wchar_t * _Src);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, wcscpy_s, wchar_t, _Dest, __in_z const wchar_t *, _Source)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(wchar_t *, __RETURN_POLICY_DST, _INTRIMP, wcscpy, __out_z wchar_t, _Dest, __in_z const wchar_t *, _Source)

_CRTIMP   __checkReturn _CONST_RETURN wchar_t * __cdecl wcschr(__in_z const wchar_t * _Str, wchar_t _Ch);
_INTRIMP  __checkReturn int __cdecl wcscmp(__in_z const wchar_t * _Str1, __in_z const wchar_t * _Str2);
_CRTIMP   __checkReturn size_t __cdecl wcscspn(__in_z const wchar_t * _Str, __in_z const wchar_t * _Control);

_INTRIMP  __checkReturn size_t __cdecl wcslen(__in_z const wchar_t * _Str);

#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl wcsncat_s(__inout_ecount_z(_DstSize) wchar_t * _Dst, __in rsize_t _DstSize, __in_z const wchar_t * _Src, __in rsize_t _MaxCount);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(errno_t, wcsncat_s, __deref_inout_z wchar_t, _Dest, __in_z const wchar_t *, _Source, __in size_t, _Count)
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, wcsncat, wcsncat_s, __in_z __out_ecount(_Count) wchar_t, __inout wchar_t, _Dest, __in_z const wchar_t *, _Source, __in size_t, _Count)
_INTRIMP2 __checkReturn int __cdecl wcsncmp(__in_z const wchar_t * _Str1, __in_z const wchar_t * _Str2, __in size_t _MaxCount);
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl wcsncpy_s(__out_ecount_z(_DstSize) wchar_t * _Dst, __in rsize_t _DstSize, __in_z const wchar_t * _Src, __in rsize_t _MaxCount);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(errno_t, wcsncpy_s, wchar_t, _Dest, __in_z const wchar_t *, _Source, __in size_t, _Count)
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(wchar_t *, __RETURN_POLICY_DST, _INTRIMP2, wcsncpy, wcsncpy_s, __out_z wchar_t, __out_ecount(_Count) wchar_t, _Dest, __in_z const wchar_t *, _Source, __in size_t, _Count)
_CRTIMP   __checkReturn _CONST_RETURN wchar_t * __cdecl wcspbrk(__in_z const wchar_t * _Str, __in_z const wchar_t * _Control);
_CRTIMP   __checkReturn _CONST_RETURN wchar_t * __cdecl wcsrchr(__in_z const wchar_t * _Str, __in wchar_t _Ch);
_CRTIMP   __checkReturn size_t __cdecl wcsspn(__in_z const wchar_t * _Str, __in_z const wchar_t * _Control);
_CRTIMP   __checkReturn _CONST_RETURN wchar_t * __cdecl wcsstr(__in_z const wchar_t * _Str, __in_z const wchar_t * _SubStr);
_CRT_INSECURE_DEPRECATE(wcstok_s) _CRTIMP __checkReturn wchar_t * __cdecl wcstok(__inout_z_opt wchar_t * _Str, __in_z const wchar_t * _Delim);
_CRTIMP   __checkReturn wchar_t * __cdecl _wcsdup(__in_z const wchar_t * _Str);
_CRTIMP   __checkReturn int __cdecl _wcsicmp(__in_z const wchar_t * _Str1, __in_z const wchar_t * _Str2);
_CRTIMP   __checkReturn int __cdecl _wcsnicmp(__in_z const wchar_t * _Str1, __in_z const wchar_t * _Str2, __in size_t _MaxCount);
_CRT_INSECURE_DEPRECATE(_wcsnset_s) _CRTIMP wchar_t * __cdecl _wcsnset(__inout_z wchar_t * _Str, __in_z wchar_t _Val, __in size_t _MaxCount);
_CRTIMP   wchar_t * __cdecl _wcsrev(__inout_z wchar_t * _Str);
_CRT_INSECURE_DEPRECATE(_wcsset_s) _INTRIMP wchar_t * __cdecl _wcsset(__inout_z wchar_t * _Str, wchar_t _Val);
_CRTIMP __checkReturn_wat errno_t __cdecl _wcslwr_s(__inout_ecount_z(_SizeInWords) wchar_t * _Str, __in size_t _SizeInWords);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _wcslwr_s, __deref_inout_z wchar_t, _String)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, _wcslwr, __inout_z wchar_t, _String)
_CRTIMP __checkReturn_wat errno_t __cdecl _wcsupr_s(__inout_ecount_z(_Size) wchar_t * _Str, __in size_t _Size);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _wcsupr_s, __deref_inout_z wchar_t, _String)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, _wcsupr, __inout_z wchar_t, _String)

#ifdef  __cplusplus
extern "C++" {
inline __checkReturn wchar_t * __CRTDECL wcschr(__in_z wchar_t *_Str, wchar_t _Ch)
        {return ((wchar_t *)wcschr((const wchar_t *)_Str, _Ch)); }
inline __checkReturn wchar_t * __CRTDECL wcspbrk(__in_z wchar_t *_Str, __in_z const wchar_t *_Control)
        {return ((wchar_t *)wcspbrk((const wchar_t *)_Str, _Control)); }
inline __checkReturn wchar_t * __CRTDECL wcsrchr(__in_z wchar_t *_Str, __in wchar_t _Ch)
        {return ((wchar_t *)wcsrchr((const wchar_t *)_Str, _Ch)); }
inline __checkReturn wchar_t * __CRTDECL wcsstr(__in_z wchar_t *_Str, __in_z const wchar_t *_SubStr)
        {return ((wchar_t *)wcsstr((const wchar_t *)_Str, _SubStr)); }
}
#endif

#if !__STDC__
/* Non-ANSI names for compatibility */
#define wcsdup    _wcsdup
#define wcsicmp   _wcsicmp
#define wcsnicmp  _wcsnicmp
#define wcsnset   _wcsnset
#define wcsrev    _wcsrev
#define wcsset    _wcsset
#define wcslwr    _wcslwr
#define wcsupr    _wcsupr
#endif /* __STDC__ */

/* NARROW ("ANSI") string functions */

#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl strcpy_s(__out_ecount_z(_DstSize) char * _Dst, __in rsize_t _DstSize, __in_z const char * _Src);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, strcpy_s, __deref_out_z char, _Dest, __in_z const char *, _Source)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(char *, __RETURN_POLICY_DST, _INTRIMP, strcpy, __out_z char, _Dest, __in_z const char *, _Source)
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl strcat_s(__inout_ecount_z(_DstSize) char * _Dst, __in rsize_t _DstSize, __in_z const char * _Src);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, strcat_s, __deref_inout_z char, _Dest, __in_z const char *, _Source)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(char *, __RETURN_POLICY_DST, _INTRIMP, strcat, __inout_z char, _Dest, __in_z const char *, _Source)
_INTRIMP  __checkReturn int     __cdecl strcmp(__in_z const char * _Str1, __in_z const char * _Str2);

#pragma warning(push)
#pragma warning(disable:4995)
_INTRIMP  __checkReturn size_t  __cdecl strlen(__in_z  const char * _Str);
#pragma warning(pop)

_CRTIMP   __checkReturn _CONST_RETURN char *  __cdecl strchr(__in_z const char * _Str, __in int _Val);
_CRTIMP __checkReturn size_t  __cdecl strcspn(__in_z  const char * _Str, __in_z  const char * _Control);
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl strncat_s(__inout_ecount_z(_DstSize) char * _Dst, __in rsize_t _DstSize, __in_z const char * _Src, __in rsize_t _MaxCount);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(errno_t, strncat_s, __deref_inout_z char, _Dest, __in_z const char *, _Source, __in size_t, _Count)
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(char *, __RETURN_POLICY_DST, _CRTIMP, strncat, strncat_s, __deref_inout_ecount_z(_Size) char, __inout_ecount_z(_Count) char, _Dest, __in_z const char *, _Source, __in size_t, _Count)
_INTRIMP2 __checkReturn int     __cdecl strncmp(__in_z const char * _Str1, __in_z const char * _Str2, __in size_t _MaxCount);
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALTERNATIVE __checkReturn_wat errno_t __cdecl strncpy_s(__out_ecount_z(_DstSize) char * _Dst, __in rsize_t _DstSize, __in_z_opt const char * _Src, __in rsize_t _MaxCount);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(errno_t, strncpy_s, char, _Dest, __in_z const char *, _Source, __in size_t, _Count)
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(char *, __RETURN_POLICY_DST, _INTRIMP2, strncpy, strncpy_s, __out_z char, __out_ecount(_Count) char, _Dest, __in_z const char *, _Source, __in size_t, _Count)
_CRTIMP __checkReturn _CONST_RETURN char *  __cdecl strstr(__in_z const char * _Str, __in_z const char * _SubStr);
_CRT_INSECURE_DEPRECATE(strtok_s) _CRTIMP __checkReturn char *  __cdecl strtok(__inout_z_opt char * _Str, __in_z const char * _Delim);

_CRTIMP __checkReturn int     __cdecl _stricmp(__in_z  const char * _Str1, __in_z  const char * _Str2);
_CRTIMP __checkReturn int     __cdecl _strnicmp(__in_z const char * _Str1, __in_z const char * _Str2, __in size_t _MaxCount);
_CRTIMP __checkReturn _CONST_RETURN char *  __cdecl strpbrk(__in_z const char * _Str, __in_z const char * _Control);
_CRTIMP __checkReturn _CONST_RETURN char *  __cdecl strrchr(__in_z const char * _Str, __in int _Ch);
_CRTIMP __checkReturn size_t  __cdecl strspn(__in_z const char * _Str, __in_z const char * _Control);
_CRTIMP __checkReturn char *  __cdecl _strdup(__in_z_opt const char * _Src);
_CRT_INSECURE_DEPRECATE(_strnset_s) _CRTIMP char *  __cdecl _strnset(__inout_z char * _Str, __in int _Val, __in size_t _MaxCount);
_CRTIMP char *  __cdecl _strrev(__inout_z char * _Str);
_INTRIMP _CRT_INSECURE_DEPRECATE(_strset_s) char *  __cdecl _strset(__inout_z char * _Str, __in int _Val);
_CRTIMP __checkReturn_wat errno_t __cdecl _strlwr_s(__inout_ecount_z(_Size) char * _Str, __in size_t _Size);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _strlwr_s, __deref_inout_z char, _String)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(char *, __RETURN_POLICY_DST, _CRTIMP, _strlwr, __inout_z char, _String)
_CRTIMP __checkReturn_wat errno_t __cdecl _strupr_s(__inout_ecount_z(_Size) char * _Str, __in size_t _Size);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _strupr_s, __deref_inout_z char, _String)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(char *, __RETURN_POLICY_DST, _CRTIMP, _strupr, __inout_z char, _String)

#ifdef __cplusplus
extern "C++" {
inline __checkReturn char * __CRTDECL strchr(__in_z char * _Str, __in int _Ch)
    { return (char*)strchr((const char*)_Str, _Ch); }
inline __checkReturn char * __CRTDECL strpbrk(__in_z char * _Str, __in_z const char * _Control)
    { return (char*)strpbrk((const char*)_Str, _Control); }
inline __checkReturn char * __CRTDECL strrchr(__in_z char * _Str, __in int _Ch)
    { return (char*)strrchr((const char*)_Str, _Ch); }
inline __checkReturn char * __CRTDECL strstr(__in_z char * _Str, __in_z const char * _SubStr)
    { return (char*)strstr((const char*)_Str, _SubStr); }
}
#endif


/****************** MEMORY.H ************************/

_CRTIMP   void *  __cdecl _memccpy( __out_bcount_opt(_MaxCount) void * _Dst, __in const void * _Src, __in int _Val, __in size_t _MaxCount);
_INTRIMP2 __checkReturn _CONST_RETURN void *  __cdecl memchr( __in_bcount_opt(_MaxCount) const void * _Buf , __in int _Val, __in size_t _MaxCount);
_CRTIMP   __checkReturn int     __cdecl _memicmp(__in_bcount_opt(_Size) const void * _Buf1, __in_bcount_opt(_Size) const void * _Buf2, __in size_t _Size);
_INTRIMP  __checkReturn int     __cdecl memcmp(__in_bcount_opt(_Size) const void * _Buf1, __in_bcount_opt(_Size) const void * _Buf2, __in size_t _Size);
_INTRIMP  _CRT_INSECURE_DEPRECATE_MEMORY(memcpy_s) void *  __cdecl memcpy(__out_bcount_full_opt(_Size) void * _Dst, __in_bcount_opt(_Size) const void * _Src, __in size_t _Size);
_INTRIMP  void * __cdecl memset(__out_bcount_full_opt(_Size) void * _Dst, __in int _Val, __in size_t _Size);
_CRTIMP   _CRT_INSECURE_DEPRECATE_MEMORY(memmove_s) void *  __cdecl memmove(__out_bcount_full_opt(_Size) void * _Dst, __in_bcount_opt(_Size) const void * _Src, __in size_t _Size);

#ifdef __cplusplus
extern "C++" {
inline __checkReturn void * __CRTDECL memchr(__in_bcount_opt(_N) void * _Pv, __in int _C, __in size_t _N)
    { return (void*)memchr((const void*)_Pv, _C, _N); }
}
#endif


/****************** CTYPE.H *************************/

// Bit masks used by iswXXX macros
#define _UPPER      0x1     /* upper case letter */
#define _LOWER      0x2     /* lower case letter */
#define _DIGIT      0x4     /* digit[0-9] */
#define _SPACE      0x8     /* tab, carriage return, newline, */
                            /* vertical tab or form feed */
#define _PUNCT      0x10    /* punctuation character */
#define _CONTROL    0x20    /* control character */
#define _BLANK      0x40    /* space char */
#define _HEX        0x80    /* hexadecimal digit */

#define _ALPHA      (0x0100|_UPPER|_LOWER)    /* alphabetic character */

// character classification function prototypes
_CRTIMP __checkReturn int __cdecl iswctype(__in wint_t _C, __in wctype_t _Type);
_CRTIMP __checkReturn wint_t __cdecl towupper(__in wint_t _C);
_CRTIMP __checkReturn wint_t __cdecl towlower(__in wint_t _C);
_CRTIMP __checkReturn int __cdecl toupper(__in int _C);
_CRTIMP __checkReturn int __cdecl tolower(__in int _C);
#define _tolower tolower
#define _toupper toupper

#ifndef MB_CUR_MAX
#define MB_CUR_MAX 1
#endif  /* MB_CUR_MAX */


// the character classification macro definitions, CTYPE.H
_CRTIMP __checkReturn int __cdecl _isctype(__in int _C, __in int _Type);
#define isalpha(_c)      ( _isctype(_c,_ALPHA) )
#define isupper(_c)      ( _isctype(_c,_UPPER) )
#define islower(_c)      ( _isctype(_c,_LOWER) )
#define isdigit(_c)      ( _isctype(_c,_DIGIT) )
#define isxdigit(_c)     ( _isctype(_c,_HEX) )
#define isspace(_c)      ( _isctype(_c,_SPACE) )
#define ispunct(_c)      ( _isctype(_c,_PUNCT) )
#define isalnum(_c)      ( _isctype(_c,_ALPHA|_DIGIT) )
#define isprint(_c)      ( _isctype(_c,_BLANK|_PUNCT|_ALPHA|_DIGIT) )
#define isgraph(_c)      ( _isctype(_c,_PUNCT|_ALPHA|_DIGIT) )
#define iscntrl(_c)      ( _isctype(_c,_CONTROL) )
#define __isascii(_c)    ((unsigned)(_c) < 0x80)
#define isascii          __isascii

#define iswalpha(_c)     ( iswctype(_c,_ALPHA) )
#define iswupper(_c)     ( iswctype(_c,_UPPER) )
#define iswlower(_c)     ( iswctype(_c,_LOWER) )
#define iswdigit(_c)     ( iswctype(_c,_DIGIT) )
#define iswxdigit(_c)    ( iswctype(_c,_HEX) )
#define iswspace(_c)     ( iswctype(_c,_SPACE) )
#define iswpunct(_c)     ( iswctype(_c,_PUNCT) )
#define iswalnum(_c)     ( iswctype(_c,_ALPHA|_DIGIT) )
#define iswprint(_c)     ( iswctype(_c,_BLANK|_PUNCT|_ALPHA|_DIGIT) )
#define iswgraph(_c)     ( iswctype(_c,_PUNCT|_ALPHA|_DIGIT) )
#define iswcntrl(_c)     ( iswctype(_c,_CONTROL) )
#define iswascii(_c)     ( (unsigned)(_c) < 0x80 )
#define isleadbyte(_c)   ( IsDBCSLeadByte(_c))

/****************** VADEFS.H ************************/

#if defined(_M_MRX000)

# if _MSC_VER > 1200

#  ifdef __cplusplus
extern "C" int __cdecl __regsize (void);
#  else
int __cdecl __regsize (void);
#  endif

#  define SIZE_OF_INT_REG   (__regsize())

# else

#  define SIZE_OF_INT_REG   (4)

# endif

# define _ARGSIZE(n)  ((__builtin_alignof(n) > SIZE_OF_INT_REG) ? __builtin_alignof(n) : SIZE_OF_INT_REG)

# if _MSC_VER > 1200

#ifdef __cplusplus

extern "C" void __cdecl __va_start(va_list*, ...);
#define _crt_va_start(ap,v) (__va_start(&ap, &v, sizeof(v)))

#else // __cplusplus

#define _crt_va_start(ap,v) ap  = (va_list)&v + sizeof(v)

#endif // __cplusplus

#else // _MSC_VER > 1200

#define _crt_va_start(ap,v) ap  = (va_list)&v + sizeof(v)

#endif // _MSC_VER > 1200

#define _crt_va_end(list) ( list = (va_list)0 )
#define _crt_va_arg(list, mode) ((mode *)(list =\
 (char *) ((((int)list + (_ARGSIZE(mode) - 1)) &\
 ~(_ARGSIZE(mode) - 1))+sizeof(mode))))[-1]

#elif defined(_M_SH)

#define _INTSIZEOF(n) ( (sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1) )

#ifdef __cplusplus

extern  "C" void __cdecl __va_start(va_list*, ...);
#define _crt_va_start(ap,v) (__va_start(&ap, &v, _INTSIZEOF(v)))

#else // __cplusplus

#define _crt_va_start(ap,v) ap  = (va_list)&v + _INTSIZEOF(v)

#endif // __cplusplus

#define _crt_va_arg(ap,t)    ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )
#define _crt_va_end(ap)      ( ap = (va_list)0 )

#else // defined(_M_MRX000)

#define _INTSIZEOF(n)   ( (sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1) )
#define _crt_va_start(ap,v)  ( ap = (va_list)&v + _INTSIZEOF(v) )
#define _crt_va_arg(ap,t)    ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )
#define _crt_va_end(ap)      ( ap = (va_list)0 )

#endif // defined(_M_MRX000)

/****************** STDIO.H *************************/

#ifndef MAX_PATH
#define MAX_PATH 260
#endif
#define _MAX_PATH    MAX_PATH

#define EOF  (-1)
#define WEOF (wint_t)(0xFFFF)

/* seek method constants for fseek */
#define SEEK_CUR    1
#define SEEK_END    2
#define SEEK_SET    0

/* mode constants for _setmode */
#define _O_TEXT     0x4000  /* file mode is text (translated) */
#define _O_BINARY   0x8000  /* file mode is binary (untranslated) */

/* FILE is an opaque handle in Win CE. Users have no access to the internals */
#ifndef _FILE_DEFINED
typedef void FILE;
#define _FILE_DEFINED
#endif

/* Define file position type */

#ifndef _FPOS_T_DEFINED
typedef __int64 fpos_t;
#define _FPOS_T_DEFINED
#endif

// Std handle defns
#define stdin  _getstdfilex(0)
#define stdout _getstdfilex(1)
#define stderr _getstdfilex(2)

// @CESYSGEN IF COREDLL_CORESTRA
// ANSI String formatting functions
_CRTIMP __checkReturn_opt int __cdecl setvbuf(__inout FILE * _File, __inout_bcount_z_opt(_Size) char * _Buf, __in int _Mode, __in size_t _Size);
_CRT_INSECURE_DEPRECATE(sscanf_s) _CRTIMP __checkReturn_opt int __cdecl sscanf(__in_z const char * _Src, __in_z __format_string const char * _Format, ...);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl sprintf_s(__out_bcount_z(_DstSize) char * _DstBuf, __in size_t _DstSize, __in_z __format_string const char * _Format, ...);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(int, sprintf_s, vsprintf_s, char, _Dest, __in_z __format_string const char *, _Format)
_CRTIMP_ALTERNATIVE                   int __cdecl vsprintf_s(__out_ecount_z(_Size) char * _DstBuf, __in size_t _Size, __in_z __format_string const char * _Format, va_list _ArgList);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(int, vsprintf_s, char, _Dest, __in_z __format_string const char *, _Format, va_list, _Args)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST(int, __RETURN_POLICY_SAME, _CRTIMP, sprintf, vsprintf, __out_z char, _Dest, __in_z __format_string const char *, _Format)
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _snprintf_s(__out_bcount_z(_DstSize) char * _DstBuf, __in size_t _DstSize, __in size_t _MaxCount, __in_z __format_string const char * _Format, ...);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(int, _snprintf_s, _vsnprintf_s, char, _Dest, __in size_t, _Count, __in_z __format_string const char *,_Format)
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _vsnprintf_s(__out_ecount_z(_DstSize) char * _DstBuf, __in size_t _DstSize, __in size_t _MaxCount, __in_z __format_string const char * _Format, va_list _ArgList);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(int, _vsnprintf_s, char, _Dest, __in size_t, _Count, __in_z __format_string const char *, _Format, va_list, _Args)
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(int, __RETURN_POLICY_SAME, _CRTIMP, _snprintf, _vsnprintf, __out_z char, __out_ecount(_Count) char, _Dest, __in size_t, _Count, __in_z __format_string const char *, _Format)
// @CESYSGEN ENDIF

// Always present since wsprintfW (used by kernel) redirects to these
_CRTIMP_ALTERNATIVE int __cdecl swprintf_s(__out_ecount_z(_SizeInWords) wchar_t * _Dst, __in size_t _SizeInWords, __in_z __format_string const wchar_t * _Format, ...);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(int, swprintf_s, vswprintf_s, wchar_t, _Dest, __in_z __format_string const wchar_t *, _Format)
_CRTIMP_ALTERNATIVE int __cdecl vswprintf_s(__out_ecount_z(_SizeInWords) wchar_t * _Dst, __in size_t _SizeInWords, __in_z __format_string const wchar_t * _Format, va_list _ArgList);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(int, vswprintf_s, wchar_t, _Dest, __in_z __format_string const wchar_t *, _Format, va_list, _Args)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(int, __RETURN_POLICY_SAME, _CRTIMP, swprintf, swprintf_s, vswprintf, vswprintf_s, __out_z wchar_t, _Dest, __in_z __format_string const wchar_t *, _Format)
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _snwprintf_s(__out_ecount_z(_DstSizeInWords) wchar_t * _DstBuf, __in size_t _DstSizeInWords, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, ...);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(int, _snwprintf_s, _vsnwprintf_s, wchar_t, _Dest, __in size_t, _Count, __in_z __format_string const wchar_t *, _Format)
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _vsnwprintf_s(__out_ecount_z(_DstSizeInWords) wchar_t * _DstBuf, __in size_t _DstSizeInWords, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, va_list _ArgList);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(int, _vsnwprintf_s, wchar_t, _Dest, __in size_t, _Count, __in_z __format_string const wchar_t *, _Format, va_list, _Args)
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(int, __RETURN_POLICY_SAME, _CRTIMP, _snwprintf, _vsnwprintf, __out_z wchar_t, __out_ecount(_Count) wchar_t, _Dest, __in size_t, _Count, __in_z __format_string const wchar_t *, _Format)

// @CESYSGEN IF COREDLL_CORESTRW
// WIDE String formatting functions
_CRT_INSECURE_DEPRECATE(swscanf_s) _CRTIMP __checkReturn_opt int __cdecl swscanf(__in_z const wchar_t * _Src, __in_z __format_string const wchar_t * _Format, ...);
// @CESYSGEN ENDIF

// @CESYSGEN IF COREDLL_CORESIOA

// ANSI Stdin/Out functions & macros
_CRT_INSECURE_DEPRECATE(scanf_s) _CRTIMP __checkReturn_opt int __cdecl scanf(__in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl printf(__in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl vprintf(__in_z __format_string const char * _Format, va_list _ArgList);
_CRTIMP __checkReturn int __cdecl getchar(void);
_CRTIMP char * __cdecl gets_s(__out_ecount_z(_Size) char * _Buf, __in rsize_t _Size);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(char *, gets_s, char, _Buffer)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(char *, __RETURN_POLICY_SAME, _CRTIMP, gets, __out_z char, _Buffer)
_CRTIMP __checkReturn_opt int __cdecl putchar(__in int _Ch);
_CRTIMP __checkReturn_opt int __cdecl puts(__in_z const char * _Str);

// ANSI functions for Stdin/out and/or general buffered file handling
_CRTIMP __checkReturn_opt int __cdecl fgetc(__inout FILE * _File);
_CRTIMP __checkReturn_opt char * __cdecl fgets(__out_ecount_z(_MaxCount) char * _Buf, __in int _MaxCount, __inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl fputc(__in int _Ch, __inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl fputs(__in_z const char * _Str, __inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl ungetc(__in int _Ch, __inout FILE * _File);

// ANSI functions for general buffered file handling
_CRT_INSECURE_DEPRECATE(fopen_s) _CRTIMP __checkReturn FILE * __cdecl fopen(__in_z const char * _Filename, __in_z const char * _Mode);
_CRT_INSECURE_DEPRECATE(fscanf_s) _CRTIMP __checkReturn_opt int __cdecl fscanf(__inout FILE * _File, __in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl fprintf(__inout FILE * _File, __in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl vfprintf(__inout FILE * _File, __in_z __format_string const char * _Format, va_list _ArgList);

#define getc(_stream)     fgetc(_stream)
#define putc(_i, _stream) fputc(_i, _stream)

// @CESYSGEN ENDIF

// @CESYSGEN IF COREDLL_CORESIOA || COREDLL_CORESIOW

// functions for general buffered file handling in either ANSI or Wide
_CRTIMP __checkReturn FILE*  __cdecl _getstdfilex(int _FileHandle);
_CRTIMP __checkReturn_opt int __cdecl fclose(__inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl _fcloseall(void);
_CRTIMP __checkReturn_opt size_t __cdecl fread(__out_bcount(_ElementSize*_Count) void * _DstBuf, __in size_t _ElementSize, __in size_t _Count, __inout FILE * _File);
_CRTIMP __checkReturn_opt size_t __cdecl fwrite(__in_ecount(_Size*_Count) const void * _Str, __in size_t _Size, __in size_t _Count, __inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl fflush(__inout_opt FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl _flushall(void);
_CRTIMP __checkReturn int __cdecl feof(__in FILE * _File);
_CRTIMP __checkReturn int __cdecl ferror(__in FILE * _File);
_CRTIMP void __cdecl clearerr(__inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl fgetpos(__inout FILE * _File , __out fpos_t * _Pos);
_CRTIMP __checkReturn_opt int __cdecl fsetpos(__inout FILE * _File, __in const fpos_t * _Pos);
_CRTIMP __checkReturn_opt int __cdecl fseek(__inout FILE * _File, __in long _Offset, __in int _Origin);
_CRTIMP __checkReturn long __cdecl ftell(__inout FILE * _File);
_CRTIMP __checkReturn void * __cdecl _fileno(__in FILE * _File);
_CRTIMP __checkReturn FILE * __cdecl _wfdopen(__in void * _FileHandle , __in_z const wchar_t * _Mode);
_CRT_INSECURE_DEPRECATE(_wfreopen_s) _CRTIMP __checkReturn FILE * __cdecl _wfreopen(__in_z const wchar_t * _Filename, __in_z const wchar_t * _Mode, __inout FILE * _OldFile);

#if !__STDC__
/* Non-ANSI names for compatibility */
#define fcloseall _fcloseall
#define fileno    _fileno
#define flushall  _flushall
#endif /* !__STDC__ */

// @CESYSGEN ENDIF

// @CESYSGEN IF COREDLL_CORESIOW

// WIDE Stdin/Out functions & macros
_CRT_INSECURE_DEPRECATE(wscanf_s) _CRTIMP __checkReturn_opt int __cdecl wscanf(__in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl wprintf(__in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl vwprintf(__in_z __format_string const wchar_t * _Format, va_list _ArgList);
_CRTIMP __checkReturn wint_t __cdecl getwchar(void);
_CRTIMP __checkReturn_opt wint_t __cdecl putwchar(__in_z wchar_t _Ch);
_CRTIMP __checkReturn_opt wchar_t * __cdecl _getws_s(__out_ecount_z(_SizeInWords) wchar_t * _Str, __in size_t _SizeInWords);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(wchar_t *, _getws_s, wchar_t, _String)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(wchar_t *, __RETURN_POLICY_SAME, _CRTIMP, _getws, __out_z wchar_t, _String)
_CRTIMP __checkReturn_opt int __cdecl _putws(__in_z const wchar_t * _Str);

// WIDE functions for Stdin/out and/or general buffered file handling
_CRTIMP __checkReturn_opt wint_t __cdecl fgetwc(__inout FILE * _File);
_CRTIMP __checkReturn_opt wint_t __cdecl fputwc(__in_z wchar_t _Ch, __inout FILE * _File);
_CRTIMP __checkReturn_opt wint_t __cdecl ungetwc(__in wint_t _Ch, __inout FILE * _File);
_CRTIMP __checkReturn_opt wchar_t * __cdecl fgetws(__out_ecount_z(_SizeInWords) wchar_t * _Dst, __in int _SizeInWords, __inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl fputws(__in_z const wchar_t * _Str, __inout FILE * _File);

#define getwc(_stm)             fgetwc(_stm)
#define putwc(_c,_stm)          fputwc(_c,_stm)

// WIDE functions for general buffered file handling
_CRT_INSECURE_DEPRECATE(_wfopen_s) _CRTIMP __checkReturn FILE * __cdecl _wfopen(__in_z const wchar_t * _Filename, __in_z const wchar_t * _Mode);
_CRT_INSECURE_DEPRECATE(fwscanf_s) _CRTIMP __checkReturn_opt int __cdecl fwscanf(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl fwprintf(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl vfwprintf(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, va_list _ArgList);

// @CESYSGEN ENDIF


/****************** IO.H ****************************/

_CRTIMP __checkReturn int __cdecl _setmode(__in FILE * _File, __in int _Mode);


/****************** STDLIB.H ************************/

#if __STDC_WANT_SECURE_LIB__
_CRTIMP   __checkReturn_opt errno_t __cdecl mbstowcs_s(__out_opt size_t * _PtNumOfCharConverted, __out_ecount_part_opt(_SizeInWords, *_PtNumOfCharConverted) wchar_t * _DstBuf, __in size_t _SizeInWords, __in_ecount_z(_MaxCount) const char * _SrcBuf, __in size_t _MaxCount);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(errno_t, mbstowcs_s, __out_opt size_t *, _PtNumOfCharConverted, __deref_out_z wchar_t, _Dest, __in_z const char *, _Source, __in size_t, _MaxCount)
#endif
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE(_CRTIMP, mbstowcs, __out_z_opt wchar_t, _Dest, __in_z const char *, _Source, __in size_t, _MaxCount)
#if __STDC_WANT_SECURE_LIB__
_CRTIMP   __checkReturn_wat errno_t __cdecl wcstombs_s(__out_opt size_t * _PtNumOfCharConverted, __out_bcount_part_opt(_DstSizeInBytes, *_PtNumOfCharConverted) char * _Dst, __in size_t _DstSizeInBytes, __in_z const wchar_t * _Src, __in size_t _MaxCountInBytes);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(errno_t, wcstombs_s, __out_opt size_t *, _PtNumOfCharConverted, __out_bcount_opt(_Size) char, _Dest, __in_z const wchar_t *, _Source, __in size_t, _MaxCount)
#endif
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE(_CRTIMP, wcstombs, __out_z_opt char, _Dest, __in_z const wchar_t *, _Source, __in size_t, _MaxCount)

// __min and max macros
#define   __max(a,b)    (((a) > (b)) ? (a) : (b))
#define   __min(a,b)    (((a) < (b)) ? (a) : (b))

/* Conversion functions */

_CRTIMP   __checkReturn double __cdecl strtod(__in_z const char * _Str, __deref_opt_out_z char ** _EndPtr);
_CRTIMP   __checkReturn long   __cdecl strtol(__in_z const char * _Str, __deref_opt_out_z char ** _EndPtr, __in int _Radix);
_CRTIMP   __checkReturn unsigned long __cdecl strtoul(__in_z const char * _Str, __deref_opt_out_z char ** _EndPtr, __in int _Radix);
_CRTIMP   __checkReturn __int64          __cdecl _strtoi64(__in_z const char * _Str, __deref_opt_out_z char ** _EndPtr, __in int _Radix);
_CRTIMP   __checkReturn unsigned __int64 __cdecl _strtoui64(__in_z const char * _Str, __deref_opt_out_z char ** _EndPtr, __in int _Radix);
_CRTIMP   __checkReturn double  __cdecl atof(__in_z const char *_String);
_CRTIMP   __checkReturn int    __cdecl atoi(__in_z const char *_Str);
_CRTIMP   __checkReturn long   __cdecl atol(__in_z const char *_Str);
_CRTIMP   __checkReturn __int64 __cdecl _atoi64(__in_z const char * _String);
_INTRIMP  __checkReturn unsigned short __cdecl _byteswap_ushort(__in unsigned short _Short);
_INTRIMP  __checkReturn unsigned long  __cdecl _byteswap_ulong (__in unsigned long _Long);
_INTRIMP  __checkReturn unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Int64);
_CRTIMP   __checkReturn_opt errno_t __cdecl _itoa_s(__in int _Value, __out_ecount_z(_Size) char * _DstBuf, __in size_t _Size, __in int _Radix);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _itoa_s, __in int, _Value, char, _Dest, __in int, _Radix)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(char *, __RETURN_POLICY_DST, _CRTIMP, _itoa, __in int, _Value, __out_z char, _Dest, __in int, _Radix)
_CRTIMP   __checkReturn_opt errno_t __cdecl _ltoa_s(__in long _Val, __out_ecount_z(_Size) char * _DstBuf, __in size_t _Size, __in int _Radix);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _ltoa_s, __in long, _Value, char, _Dest, __in int, _Radix)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(char *, __RETURN_POLICY_DST, _CRTIMP, _ltoa, __in long, _Value, __out_z char, _Dest, __in int, _Radix)
_CRTIMP   __checkReturn_opt errno_t __cdecl _ultoa_s(__in unsigned long _Val, __out_ecount_z(_Size) char * _DstBuf, __in size_t _Size, __in int _Radix);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _ultoa_s, __in unsigned long, _Value, char, _Dest, __in int, _Radix)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(char *, __RETURN_POLICY_DST, _CRTIMP, _ultoa, __in unsigned long, _Value, __out_z char, _Dest, __in int, _Radix)
_CRTIMP   __checkReturn_wat errno_t __cdecl _ecvt_s(__out_ecount_z(_Size) char * _DstBuf, __in size_t _Size, __in double _Val, __in int _NumOfDights, __out int * _PtDec, __out int * _PtSign);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(errno_t, _ecvt_s, char, _Dest, __in double, _Value, __in int, _NumOfDigits, __out int *, _PtDec, __out int *, _PtSign)
_CRTIMP _CRT_INSECURE_DEPRECATE(_ecvt_s) __checkReturn char * __cdecl _ecvt(__in double _Val, __in int _NumOfDigits, __out int * _PtDec, __out int * _PtSign);
_CRTIMP   __checkReturn_wat errno_t __cdecl _fcvt_s(__out_ecount_z(_Size) char * _DstBuf, __in size_t _Size, __in double _Val, __in int _NumOfDec, __out int * _PtDec, __out int * _PtSign);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(errno_t, _fcvt_s, char, _Dest, __in double, _Value, __in int, _NumOfDigits, __out int *, _PtDec, __out int *, _PtSign)
_CRTIMP   _CRT_INSECURE_DEPRECATE(_fcvt_s) __checkReturn char * __cdecl _fcvt(__in double _Val, __in int _NumOfDec, __out int * _PtDec, __out int * _PtSign);
_CRTIMP   errno_t __cdecl _gcvt_s(__out_ecount_z(_Size) char * _DstBuf, __in size_t _Size, __in double _Val, __in int _NumOfDigits);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(errno_t, _gcvt_s, char, _Dest, __in double, _Value, __in int, _NumOfDigits)
_CRTIMP   _CRT_INSECURE_DEPRECATE(_gcvt_s) char * __cdecl _gcvt(__in double _Val, __in int _NumOfDigits, __out_z char * _DstBuf);
_CRTIMP   __checkReturn double __cdecl wcstod(__in_z const wchar_t * _Str, __deref_opt_out_z wchar_t ** _EndPtr);
_CRTIMP   __checkReturn long   __cdecl wcstol(__in_z const wchar_t *_Str, __deref_opt_out_z wchar_t ** _EndPtr, int _Radix);
_CRTIMP __checkReturn unsigned long    __cdecl wcstoul(__in_z const wchar_t *_Str, __deref_opt_out_z wchar_t ** _EndPtr, int _Radix);
_CRTIMP __checkReturn __int64          __cdecl _wcstoi64(__in_z const wchar_t *_Str, __deref_opt_out_z wchar_t ** _EndPtr, int _Radix);
_CRTIMP __checkReturn unsigned __int64 __cdecl _wcstoui64(__in_z const wchar_t *_Str, __deref_opt_out_z wchar_t ** _EndPtr, int _Radix);
_CRTIMP   __checkReturn_wat errno_t __cdecl _itow_s (__in int _Val, __out_ecount_z(_SizeInWords) wchar_t * _DstBuf, __in size_t _SizeInWords, __in int _Radix);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _itow_s, __in int, _Value, wchar_t, _Dest, __in int, _Radix)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, _itow, __in int, _Value, __out_z wchar_t, _Dest, __in int, _Radix)
_CRTIMP   __checkReturn_wat errno_t __cdecl _ltow_s (__in long _Val, __out_ecount_z(_SizeInWords) wchar_t * _DstBuf, __in size_t _SizeInWords, __in int _Radix);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _ltow_s, __in long, _Value, wchar_t, _Dest, __in int, _Radix)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, _ltow, __in long, _Value, __out_z wchar_t, _Dest, __in int, _Radix)
_CRTIMP   __checkReturn_wat errno_t __cdecl _ultow_s (__in unsigned long _Val, __out_ecount_z(_SizeInWords) wchar_t * _DstBuf, __in size_t _SizeInWords, __in int _Radix);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _ultow_s, __in unsigned long, _Value, wchar_t, _Dest, __in int, _Radix)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, _ultow, __in unsigned long, _Value, __out_z wchar_t, _Dest, __in int, _Radix)
_CRTIMP __checkReturn double  __cdecl _wtof(__in_z const wchar_t *_String);
_CRTIMP __checkReturn int     __cdecl _wtoi(__in_z const wchar_t *_Str);
_CRTIMP __checkReturn long __cdecl _wtol(__in_z const wchar_t *_Str);
_CRTIMP __checkReturn __int64 __cdecl _wtoi64(__in_z const wchar_t *_Str);
#define _atoll  _atoi64
#define _wtoll  _wtoi64

/* Extended logical Ops functions */

_INTRIMP  __checkReturn unsigned long __cdecl _lrotl(__in unsigned long _Val, __in int _Shift);
_INTRIMP  __checkReturn unsigned long __cdecl _lrotr(__in unsigned long _Val, __in int _Shift);
_INTRIMP  __checkReturn unsigned int __cdecl _rotl(__in unsigned int _Val, __in int _Shift);
_INTRIMP  __checkReturn unsigned int __cdecl _rotr(__in unsigned int _Val, __in int _Shift);
_INTRIMP  __checkReturn unsigned __int64 __cdecl _rotl64(__in unsigned __int64 _Val, __in int _Shift);
_INTRIMP  __checkReturn unsigned __int64 __cdecl _rotr64(__in unsigned __int64 _Val, __in int _Shift);

/* Other misc functions */

_CRTIMP void   __cdecl _swab(__inout_ecount_full(_SizeInBytes) char * _Buf1, __inout_ecount_full(_SizeInBytes) char * _Buf2, int _SizeInBytes);
#pragma warning(push)
#pragma warning(disable: 4995)
_CRTIMP __checkReturn int    __cdecl rand(void);
#pragma warning(pop)
// @CESYSGEN IF CE_MODULES_FILESYS
/* rand_s is only available if CeGenRandom is available */
_CRTIMP errno_t __cdecl rand_s ( __out unsigned int *_RandomValue);
// @CESYSGEN ENDIF
_CRTIMP void   __cdecl srand(__in unsigned int _Seed);

#define _CRT_BSEARCH_DEFINED_ 1

#if __STDC_WANT_SECURE_LIB__
__checkReturn _CRTIMP void * __cdecl bsearch_s(__in const void * _Key, __in_bcount(_NumOfElements * _SizeOfElements) const void * _Base,
        __in rsize_t _NumOfElements, __in rsize_t _SizeOfElements,
        __in int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void * _Context);
#endif
__checkReturn _CRTIMP void * __cdecl bsearch(__in const void * _Key, __in_bcount(_NumOfElements * _SizeOfElements) const void * _Base,
        __in size_t _NumOfElements, __in size_t _SizeOfElements,
        __in int (__cdecl * _PtFuncCompare)(const void *, const void *));

#if __STDC_WANT_SECURE_LIB__
_CRTIMP void __cdecl qsort_s(__inout_bcount(_NumOfElements* _SizeOfElements) void * _Base,
        __in rsize_t _NumOfElements, __in rsize_t _SizeOfElements,
        __in int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void *_Context);
#endif
_CRTIMP void __cdecl qsort(__inout_bcount(_NumOfElements * _SizeOfElements) void * _Base,
        __in size_t _NumOfElements, __in size_t _SizeOfElements,
        __in int (__cdecl * _PtFuncCompare)(const void *, const void *));

_CRTIMP double __cdecl difftime(__in __time32_t _Time1, __in __time32_t _Time2);
        int    __cdecl atexit(void (__cdecl *)(void));

/* Maximum value that can be returned by the rand function. */
#define RAND_MAX 0x7fff

/* Definition of the argument values for the exit() function */

#define EXIT_SUCCESS    0
#define EXIT_FAILURE    1

/* onexit() defns */

typedef int (__cdecl * _onexit_t)(void);
#if !__STDC__
#define onexit_t _onexit_t
#endif

/* Data structure definitions for div and ldiv routines */

typedef struct _div_t {
    int quot;
    int rem;
} div_t;

typedef struct _ldiv_t {
    long quot;
    long rem;
} ldiv_t;

_CRTIMP __checkReturn div_t  __cdecl div(__in int _Numerator, __in int _Denominator);
_CRTIMP __checkReturn ldiv_t __cdecl ldiv(__in long _Numerator, __in long _Denominator);

/* an invalid parameter handler procedure. */
typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *, const wchar_t *, const wchar_t *, unsigned int, uintptr_t);

/* establishes a invalid_arg handler for the process */
_CRTIMP _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(__in_opt _invalid_parameter_handler _Handler);
_CRTIMP _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);

/****************** LIMITS.H ************************/

#define CHAR_BIT      8                   /* number of bits in a char */
#define SCHAR_MIN   (-128)                /* minimum signed char value */
#define SCHAR_MAX     127                 /* maximum signed char value */
#define UCHAR_MAX     0xff                /* maximum unsigned char value */

#ifndef _CHAR_UNSIGNED
#define CHAR_MIN    SCHAR_MIN             /* mimimum char value */
#define CHAR_MAX    SCHAR_MAX             /* maximum char value */
#else
#define CHAR_MIN      0
#define CHAR_MAX    UCHAR_MAX
#endif    /* _CHAR_UNSIGNED */

#define MB_LEN_MAX    5                   /* max. # bytes in multibyte char */
#define SHRT_MIN    (-32768)              /* minimum (signed) short value */
#define SHRT_MAX      32767               /* maximum (signed) short value */
#define USHRT_MAX     0xffff              /* maximum unsigned short value */
#define INT_MIN     (-2147483647 - 1)     /* minimum (signed) int value */
#define INT_MAX       2147483647          /* maximum (signed) int value */
#define UINT_MAX      0xffffffff          /* maximum unsigned int value */
#define LONG_MIN    (-2147483647L - 1)    /* minimum (signed) long value */
#define LONG_MAX      2147483647L         /* maximum (signed) long value */
#define ULONG_MAX     0xffffffffUL        /* maximum unsigned long value */
#define LLONG_MAX     9223372036854775807i64       /* maximum signed long long int value */
#define LLONG_MIN   (-9223372036854775807i64 - 1)  /* minimum signed long long int value */
#define ULLONG_MAX    0xffffffffffffffffui64       /* maximum unsigned long long int value */

#if    _INTEGRAL_MAX_BITS >= 8
#define _I8_MIN     (-127i8 - 1)          /* minimum signed 8 bit value */
#define _I8_MAX       127i8               /* maximum signed 8 bit value */
#define _UI8_MAX      0xffui8             /* maximum unsigned 8 bit value */
#endif

#if    _INTEGRAL_MAX_BITS >= 16
#define _I16_MIN    (-32767i16 - 1)       /* minimum signed 16 bit value */
#define _I16_MAX      32767i16            /* maximum signed 16 bit value */
#define _UI16_MAX     0xffffui16          /* maximum unsigned 16 bit value */
#endif

#if    _INTEGRAL_MAX_BITS >= 32
#define _I32_MIN    (-2147483647i32 - 1)  /* minimum signed 32 bit value */
#define _I32_MAX      2147483647i32       /* maximum signed 32 bit value */
#define _UI32_MAX     0xffffffffui32      /* maximum unsigned 32 bit value */
#endif

#if    _INTEGRAL_MAX_BITS >= 64
/* minimum signed 64 bit value */
#define _I64_MIN    (-9223372036854775807i64 - 1)
/* maximum signed 64 bit value */
#define _I64_MAX      9223372036854775807i64
/* maximum unsigned 64 bit value */
#define _UI64_MAX     0xffffffffffffffffui64
#endif

#if    _INTEGRAL_MAX_BITS >= 128
/* minimum signed 128 bit value */
#define _I128_MIN    (-170141183460469231731687303715884105727i128 - 1)
/* maximum signed 128 bit value */
#define _I128_MAX      170141183460469231731687303715884105727i128
/* maximum unsigned 128 bit value */
#define _UI128_MAX     0xffffffffffffffffffffffffffffffffui128
#endif


/****************** FLOAT.H *************************/

#define DBL_DIG        15                 /* # of decimal digits of precision */
#define DBL_EPSILON    2.2204460492503131e-016 /* smallest such that 1.0+DBL_EPSILON != 1.0 */
#define DBL_MANT_DIG   53                 /* # of bits in mantissa */
#define DBL_MAX        1.7976931348623158e+308 /* max value */
#define DBL_MAX_10_EXP 308                /* max decimal exponent */
#define DBL_MAX_EXP    1024               /* max binary exponent */
#define DBL_MIN        2.2250738585072014e-308 /* min positive value */
#define DBL_MIN_10_EXP (-307)             /* min decimal exponent */
#define DBL_MIN_EXP    (-1021)            /* min binary exponent */
#define _DBL_RADIX     2                  /* exponent radix */
#define _DBL_ROUNDS    1                  /* addition rounding: near */

#define FLT_DIG        6                  /* # of decimal digits of precision */
#define FLT_EPSILON    1.192092896e-07F   /* smallest such that 1.0+FLT_EPSILON != 1.0 */
#define FLT_GUARD      0
#define FLT_MANT_DIG   24                 /* # of bits in mantissa */
#define FLT_MAX        3.402823466e+38F   /* max value */
#define FLT_MAX_10_EXP 38                 /* max decimal exponent */
#define FLT_MAX_EXP    128                /* max binary exponent */
#define FLT_MIN        1.175494351e-38F   /* min positive value */
#define FLT_MIN_10_EXP (-37)              /* min decimal exponent */
#define FLT_MIN_EXP    (-125)             /* min binary exponent */
#define FLT_NORMALIZE  0
#define FLT_RADIX      2                  /* exponent radix */
#define FLT_ROUNDS     1                  /* addition rounding: near */

#define LDBL_DIG        DBL_DIG           /* # of decimal digits of precision */
#define LDBL_EPSILON    DBL_EPSILON       /* smallest such that 1.0+LDBL_EPSILON != 1.0 */
#define LDBL_MANT_DIG   DBL_MANT_DIG      /* # of bits in mantissa */
#define LDBL_MAX        DBL_MAX           /* max value */
#define LDBL_MAX_10_EXP DBL_MAX_10_EXP    /* max decimal exponent */
#define LDBL_MAX_EXP    DBL_MAX_EXP       /* max binary exponent */
#define LDBL_MIN        DBL_MIN           /* min positive value */
#define LDBL_MIN_10_EXP DBL_MIN_10_EXP    /* min decimal exponent */
#define LDBL_MIN_EXP    DBL_MIN_EXP       /* min binary exponent */
#define _LDBL_RADIX     DBL_RADIX         /* exponent radix */
#define _LDBL_ROUNDS    DBL_ROUNDS        /* addition rounding: near */

/* Abstract User Control Word Mask and bit definitions */

#define _MCW_EM         0x0008001f        /* interrupt Exception Masks */
#define _EM_INEXACT     0x00000001        /*   inexact (precision) */
#define _EM_UNDERFLOW   0x00000002        /*   underflow */
#define _EM_OVERFLOW    0x00000004        /*   overflow */
#define _EM_ZERODIVIDE  0x00000008        /*   zero divide */
#define _EM_INVALID     0x00000010        /*   invalid */
#define _MCW_RC         0x00000300        /* Rounding Control */
#define _RC_NEAR        0x00000000        /*   near */
#define _RC_DOWN        0x00000100        /*   down */
#define _RC_UP          0x00000200        /*   up */
#define _RC_CHOP        0x00000300        /*   chop */

/* Abstract User Status Word bit definitions */

#define _SW_INEXACT     0x00000001        /* inexact (precision) */
#define _SW_UNDERFLOW   0x00000002        /* underflow */
#define _SW_OVERFLOW    0x00000004        /* overflow */
#define _SW_ZERODIVIDE  0x00000008        /* zero divide */
#define _SW_INVALID     0x00000010        /* invalid */

/* i386 specific definitions */

#define _MCW_PC         0x00030000        /* Precision Control */
#define _PC_64          0x00000000        /*    64 bits */
#define _PC_53          0x00010000        /*    53 bits */
#define _PC_24          0x00020000        /*    24 bits */
#define _MCW_IC         0x00040000        /* Infinity Control */
#define _IC_AFFINE      0x00040000        /*   affine */
#define _IC_PROJECTIVE  0x00000000        /*   projective */
#define _EM_DENORMAL    0x00080000        /* denormal exception mask (_control87 only) */
#define _SW_DENORMAL    0x00080000        /* denormal status bit */

/* MIPS R4000 and SH4 specific definitions */

#ifdef  _M_SH
#define _MCW_DN     0x00040000            /* Denormal Control (SH4) */
#define _DN_FLUSH   0x00040000            /*   flush to zero  (SH4) */
#else
#define _MCW_DN     0x01000000            /* Denormal Control (R4000) */
#define _DN_FLUSH   0x01000000            /*   flush to zero  (R4000) */
#endif
#define _DN_SAVE    0x00000000            /*   save */

/* initial Control Word value */

#ifdef    _M_IX86
#define _CW_DEFAULT ( _RC_NEAR + _PC_64 + _EM_INVALID + _EM_ZERODIVIDE + _EM_OVERFLOW + _EM_UNDERFLOW + _EM_INEXACT )
#else
#define _CW_DEFAULT ( _RC_NEAR + _PC_53 + _EM_INVALID + _EM_ZERODIVIDE + _EM_OVERFLOW + _EM_UNDERFLOW + _EM_INEXACT )
#endif

/* invalid subconditions (_SW_INVALID also set) */

#define _SW_UNEMULATED      0x0040    /* unemulated instruction */
#define _SW_SQRTNEG         0x0080    /* square root of a neg number */
#define _SW_STACKOVERFLOW   0x0200    /* FP stack overflow */
#define _SW_STACKUNDERFLOW  0x0400    /* FP stack underflow */

/* Floating point error signals and return codes */

#define _FPE_INVALID        0x81
#define _FPE_DENORMAL       0x82
#define _FPE_ZERODIVIDE     0x83
#define _FPE_OVERFLOW       0x84
#define _FPE_UNDERFLOW      0x85
#define _FPE_INEXACT        0x86
#define _FPE_UNEMULATED     0x87
#define _FPE_SQRTNEG        0x88
#define _FPE_STACKOVERFLOW  0x8a
#define _FPE_STACKUNDERFLOW 0x8b
#define _FPE_EXPLICITGEN    0x8c    /* raise( SIGFPE ); */

/* Floating point function prototypes */

_CRTIMP unsigned int __cdecl _clearfp(void);
_CRT_INSECURE_DEPRECATE(_controlfp_s) _CRTIMP unsigned int __cdecl _controlfp(__in unsigned int _NewValue,__in unsigned int _Mask);
_CRTIMP unsigned int __cdecl _statusfp(void);
_CRTIMP void __cdecl _fpreset(void);
#define _clear87    _clearfp
#define _status87   _statusfp

/* IEEE recommended functions */

_CRTIMP __checkReturn double __cdecl _copysign (__in double _Number, __in double _Sign);
_CRTIMP __checkReturn double __cdecl _chgsign (__in double _X);
_CRTIMP __checkReturn double __cdecl _scalb(__in double _X, __in long _Y);
_CRTIMP __checkReturn double __cdecl _logb(__in double _X);
_CRTIMP __checkReturn double __cdecl _nextafter(__in double _X, __in double _Y);
_CRTIMP __checkReturn int    __cdecl _finite(__in double _X);
_CRTIMP __checkReturn int    __cdecl _isnan(__in double _X);
_CRTIMP __checkReturn int    __cdecl _fpclass(__in double _X);

#define _FPCLASS_SNAN   0x0001  /* signaling NaN */
#define _FPCLASS_QNAN   0x0002  /* quiet NaN */
#define _FPCLASS_NINF   0x0004  /* negative infinity */
#define _FPCLASS_NN     0x0008  /* negative normal */
#define _FPCLASS_ND     0x0010  /* negative denormal */
#define _FPCLASS_NZ     0x0020  /* -0 */
#define _FPCLASS_PZ     0x0040  /* +0 */
#define _FPCLASS_PD     0x0080  /* positive denormal */
#define _FPCLASS_PN     0x0100  /* positive normal */
#define _FPCLASS_PINF   0x0200  /* positive infinity */

typedef float           _FP32;
typedef double          _FP64;
typedef short           _I16;
typedef int             _I32;
typedef unsigned short  _U16;
typedef unsigned int    _U32;

typedef struct {
    unsigned long W[4];
} _U32ARRAY;

typedef struct {
    unsigned short W[5];
} _FP80;

typedef struct {
    unsigned long W[4];
} _FP128;

typedef struct {
    unsigned long W[2];
} _I64;

typedef struct {
    unsigned long W[2];
} _U64;

typedef struct {
    unsigned short W[5];
} _BCD80;

typedef struct {
    union {
        _FP32        Fp32Value;
        _FP64        Fp64Value;
#ifndef _FP_NO_EXTENDED_PRECISION
        _FP80        Fp80Value;
        _FP128       Fp128Value;
#endif
        _I16         I16Value;
        _I32         I32Value;
        _I64         I64Value;
        _U16         U16Value;
        _U32         U32Value;
        _U64         U64Value;
#ifndef _FP_NO_EXTENDED_PRECISION
        _BCD80       Bcd80Value;
#endif
        char         *StringValue;
        int      CompareValue;
        _U32ARRAY    U32ArrayValue;
    } Value;
    unsigned int OperandValid : 1;
    unsigned int Format : 4;
} _FPIEEE_VALUE;

typedef struct {
    unsigned int Inexact : 1;
    unsigned int Underflow : 1;
    unsigned int Overflow : 1;
    unsigned int ZeroDivide : 1;
    unsigned int InvalidOperation : 1;
} _FPIEEE_EXCEPTION_FLAGS;

typedef struct {
    unsigned int RoundingMode : 2;
    unsigned int Precision : 3;
    unsigned int Operation :12;
    _FPIEEE_EXCEPTION_FLAGS Cause;
    _FPIEEE_EXCEPTION_FLAGS Enable;
    _FPIEEE_EXCEPTION_FLAGS Status;
    _FPIEEE_VALUE Operand1;
    _FPIEEE_VALUE Operand2;
    _FPIEEE_VALUE Result;
} _FPIEEE_RECORD;


struct _EXCEPTION_POINTERS;

/*
 * Floating point IEEE exception filter routine
 */

_CRTIMP int __cdecl _fpieee_flt(
        __in unsigned long _ExceptionCode,
        __in struct _EXCEPTION_POINTERS * _PtExceptionPtr,
        __in int (__cdecl * _Handler)(_FPIEEE_RECORD *)
        );

#if !__STDC__
// Non-ANSI names for compatibility
#define DBL_RADIX           _DBL_RADIX
#define DBL_ROUNDS          _DBL_ROUNDS
#define LDBL_RADIX          _LDBL_RADIX
#define LDBL_ROUNDS         _LDBL_ROUNDS
#define MCW_EM              _MCW_EM
#define EM_INVALID          _EM_INVALID
#define EM_ZERODIVIDE       _EM_ZERODIVIDE
#define EM_OVERFLOW         _EM_OVERFLOW
#define EM_UNDERFLOW        _EM_UNDERFLOW
#define EM_INEXACT          _EM_INEXACT

#define EM_DENORMAL         _EM_DENORMAL
#define SW_DENORMAL         _SW_DENORMAL
#define MCW_IC              _MCW_IC
#define IC_AFFINE           _IC_AFFINE
#define IC_PROJECTIVE       _IC_PROJECTIVE
#define MCW_PC              _MCW_PC
#define PC_24               _PC_24
#define PC_53               _PC_53
#define PC_64               _PC_64

#define MCW_RC              _MCW_RC
#define RC_CHOP             _RC_CHOP
#define RC_UP               _RC_UP
#define RC_DOWN             _RC_DOWN
#define RC_NEAR             _RC_NEAR
#define CW_DEFAULT          _CW_DEFAULT
#define SW_INVALID          _SW_INVALID
#define SW_ZERODIVIDE       _SW_ZERODIVIDE
#define SW_OVERFLOW         _SW_OVERFLOW
#define SW_UNDERFLOW        _SW_UNDERFLOW
#define SW_INEXACT          _SW_INEXACT
#define SW_UNEMULATED       _SW_UNEMULATED
#define SW_SQRTNEG          _SW_SQRTNEG
#define SW_STACKOVERFLOW    _SW_STACKOVERFLOW
#define SW_STACKUNDERFLOW   _SW_STACKUNDERFLOW
#define FPE_INVALID         _FPE_INVALID
#define FPE_DENORMAL        _FPE_DENORMAL
#define FPE_ZERODIVIDE      _FPE_ZERODIVIDE
#define FPE_OVERFLOW        _FPE_OVERFLOW
#define FPE_UNDERFLOW       _FPE_UNDERFLOW
#define FPE_INEXACT         _FPE_INEXACT
#define FPE_UNEMULATED      _FPE_UNEMULATED
#define FPE_SQRTNEG         _FPE_SQRTNEG
#define FPE_STACKOVERFLOW   _FPE_STACKOVERFLOW
#define FPE_STACKUNDERFLOW  _FPE_STACKUNDERFLOW
#define FPE_EXPLICITGEN     _FPE_EXPLICITGEN
#endif /* !__STDC__ */


/****************** MATH.H **************************/

_CRTIMP double _frnd(__in double _X);
_CRTIMP double _fsqrt(__in double _X);

/*
 * definition of a _complex struct to be used by those who use cabs and
 * want type checking on their argument
 */
struct _complex {
    double x,y;    /* real and imaginary parts */
    } ;

#if !__STDC__ && !defined(__cplusplus)
// Non-ANSI name for compatibility
#define complex _complex
#endif /* !__STDC__ */

// definitions of _HUGE and HUGE_VAL - respectively the XENIX and ANSI names
// for a value returned in case of error by a number of the floating point
// math routines
// @CESYSGEN IF !REMOVE_DRAGON
_CRTIMP_DATA
// @CESYSGEN ENDIF
extern double _HUGE;
#define HUGE_VAL _HUGE

// MATH.H func defns
#if !defined(__assembler)
_INTRIMP  int       __cdecl abs(__in int _X);
_INTRIMP  long      __cdecl labs(__in long _X);
#endif
_INTRIMP  __int64   __cdecl _abs64(__in __int64 _X);
_INTRIMP2 float     __cdecl ceilf(__in float _X);
_INTRIMP2 float     __cdecl fabsf(__in float _X);
_INTRIMP2 float     __cdecl floorf(__in float _X);
_INTRIMP2 float     __cdecl fmodf(__in float _X, __in float _Y);
_INTRIMP2 float     __cdecl sqrtf(__in float _X);
_INTRIMP  double    __cdecl acos(__in double _X);
_INTRIMP  double    __cdecl asin(__in double _X);
_INTRIMP  double    __cdecl atan(__in double _X);
_INTRIMP  double    __cdecl atan2(__in double _Y, __in double _X);
_INTRIMP  double    __cdecl cos(__in double _X);
_INTRIMP  double    __cdecl cosh(__in double _X);
_INTRIMP  double    __cdecl exp(__in double _X);
_INTRIMP  double    __cdecl fabs(__in double _X);
_INTRIMP  double    __cdecl fmod(__in double _X, __in double _Y);
_INTRIMP  double    __cdecl log(__in double _X);
_INTRIMP  double    __cdecl log10(__in double _X);
_INTRIMP  double    __cdecl pow(__in double _X, __in double _Y);
_INTRIMP  double    __cdecl sin(__in double _X);
_INTRIMP  double    __cdecl sinh(__in double _X);
_INTRIMP  double    __cdecl sqrt(__in double _X);
_INTRIMP  double    __cdecl tan(__in double _X);
_INTRIMP  double    __cdecl tanh(__in double _X);
_CRTIMP   double    __cdecl _cabs(__in struct _complex _Complex);
_INTRIMP2 double    __cdecl ceil(__in double _X);
_INTRIMP  double    __cdecl floor(__in double _X);
_CRTIMP   double    __cdecl frexp(__in double _X, __out int * _Y);
_CRTIMP   double    __cdecl _hypot(__in double _X, __in double _Y);
_CRTIMP   double    __cdecl _j0(__in double _X);
_CRTIMP   double    __cdecl _j1(__in double _X);
_CRTIMP   double    __cdecl _jn(__in int _X, __in double _Y);
_CRTIMP   double    __cdecl ldexp(__in double _X, __in int _Y);
_CRTIMP   int       __cdecl _matherr(__inout struct _exception * _Except);
_CRTIMP   double    __cdecl modf(__in double _X, __out double * _Y);
_CRTIMP   double    __cdecl _y0(__in double _X);
_CRTIMP   double    __cdecl _y1(__in double _X);
_CRTIMP   double    __cdecl _yn(__in int _X, __in double _Y);

#if defined(_M_MRX000) // MIPS
#pragma function(floor, floorf, ceil, ceilf)
#pragma intrinsic(sqrtf) // for MIPSII-FP and MIPSIV-FP, ignored otherwise
#endif

#if defined(_M_SH) // SH4
#pragma intrinsic(fabsf, sqrtf)
#endif

// MATH.H macros -- oldnames
#define acosl(x)    ((long double)acos((double)(x)))
#define asinl(x)    ((long double)asin((double)(x)))
#define atanl(x)    ((long double)atan((double)(x)))
#define atan2l(x,y) ((long double)atan2((double)(x), (double)(y)))
#define ceill(x)    ((long double)ceil((double)(x)))
#define cosl(x)     ((long double)cos((double)(x)))
#define coshl(x)    ((long double)cosh((double)(x)))
#define expl(x)     ((long double)exp((double)(x)))
#define fabsl(x)    ((long double)fabs((double)(x)))
#define floorl(x)   ((long double)floor((double)(x)))
#define fmodl(x,y)  ((long double)fmod((double)(x), (double)(y)))
#define frexpl(x,y) ((long double)frexp((double)(x), (y)))
#define hypotl(x,y) ((long double)hypot((double)(x), (double)(y)))
#define ldexpl(x,y) ((long double)ldexp((double)(x), (y)))
#define logl(x)     ((long double)log((double)(x)))
#define log10l(x)   ((long double)log10((double)(x)))
#define _matherrl   _matherr
#define modfl(x,y)  ((long double)modf((double)(x), (double *)(y)))
#define powl(x,y)   ((long double)pow((double)(x), (double)(y)))
#define sinl(x)     ((long double)sin((double)(x)))
#define sinhl(x)    ((long double)sinh((double)(x)))
#define sqrtl(x)    ((long double)sqrt((double)(x)))
#define tanl(x)     ((long double)tan((double)(x)))
#define tanhl(x)    ((long double)tanh((double)(x)))


/****************** STDARG.H ************************/

#define va_start _crt_va_start
#define va_arg _crt_va_arg
#define va_end _crt_va_end

/****************** SETJMP.H ************************/

#ifdef _M_IX86
#define _JBLEN    16
#elif defined(_M_SH) || defined(_M_MRX000)
#define _JBLEN    32
#elif defined(_M_ARM)
#define _JBLEN    11
#endif

#define _JBTYPE int

/* Define the buffer type for holding the state information */
typedef _JBTYPE jmp_buf[_JBLEN];

#define setjmp _setjmp  /* redirect to the intrinsic */
int __cdecl setjmp(__out jmp_buf _Buf);
#ifdef  __cplusplus
_CRTIMP _CRTNORETURN void __cdecl longjmp(__in jmp_buf _Buf, __in int _Value) throw(...);
#else
_CRTIMP _CRTNORETURN void __cdecl longjmp(__in jmp_buf _Buf, __in int _Value);
#endif

#ifdef __cplusplus
}
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif    /* _INC_STDLIB */

