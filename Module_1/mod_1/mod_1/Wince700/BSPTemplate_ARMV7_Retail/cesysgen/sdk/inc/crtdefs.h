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
*crtdefs.h - definitions/declarations common to all CRT
*
*Purpose:
*       This file has mostly defines used by the entire CRT.
*
*       [Public]
*
****/

/* Lack of pragma once is deliberate */

/* Define _CRTIMP */
#ifndef _CRTIMP
#define _CRTIMP
#endif  /* _CRTIMP */

/* Define _INTRIMP for functions which are always intrinsics */
#ifndef _INTRIMP
#define _INTRIMP
#endif

/* Define _INTRIMP2 for functions which are intrinsic for RISC, but not x86 */
#ifndef _INTRIMP2
#define _INTRIMP2
#endif

#ifndef _INC_CRTDEFS
#define _INC_CRTDEFS



#if defined(__midl)
/* MIDL does not want to see this stuff */
#undef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
#undef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT
#undef _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 0
#endif

#if     !defined(_WIN32)
#error ERROR: Only Win32 target supported!
#endif

#include <sal.h>

#ifdef  _MSC_VER
#undef _CRT_PACKING
#define _CRT_PACKING 8

#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#ifdef  __cplusplus
extern "C" {
#endif

/* preprocessor string helpers */
#ifndef _CRT_STRINGIZE
#define __CRT_STRINGIZE(_Value) #_Value
#define _CRT_STRINGIZE(_Value) __CRT_STRINGIZE(_Value)
#endif

#ifndef _CRT_WIDE
#define __CRT_WIDE(_String) L ## _String
#define _CRT_WIDE(_String) __CRT_WIDE(_String)
#endif


#if !defined(_W64)
#if !defined(__midl) && (defined(_X86_) || defined(_M_IX86)) && _MSC_VER >= 1300
#define _W64 __w64
#else
#define _W64
#endif
#endif


/* Define _CRTIMP2 */

#ifndef _CRTIMP2
#if defined(_DLL) && !defined(_STATIC_CPPLIB)
#define _CRTIMP2 __declspec(dllimport)
#else   /* ndef _DLL && !STATIC_CPPLIB */
#define _CRTIMP2
#endif  /* _DLL && !STATIC_CPPLIB */
#endif  /* _CRTIMP2 */

/* Define _CRTIMP_ALTERNATIVE */

#ifndef _CRTIMP_ALTERNATIVE
#ifdef  _DLL
#ifdef _CRT_ALTERNATIVE_INLINES
#define _CRTIMP_ALTERNATIVE
#else
#define _CRTIMP_ALTERNATIVE _CRTIMP
#define _CRT_ALTERNATIVE_IMPORTED
#endif
#else   /* ndef _DLL */
#define _CRTIMP_ALTERNATIVE
#endif  /* _DLL */
#endif  /* _CRTIMP_ALTERNATIVE */


/* Define __STDC_SECURE_LIB__ */
#define __STDC_SECURE_LIB__ 200411L

/* Default value for __STDC_WANT_SECURE_LIB__ is 1 */
#ifndef __STDC_WANT_SECURE_LIB__
#define __STDC_WANT_SECURE_LIB__ 1
#endif

/* Turn off deprecation if __STDC_WANT_SECURE_LIB__ is 0 */
#if !__STDC_WANT_SECURE_LIB__ && !defined(_CRT_SECURE_NO_DEPRECATE)
#define _CRT_SECURE_NO_DEPRECATE
#endif

#if !defined(__midl) && !defined(MIDL_PASS)
#if _MSC_FULL_VER >= 140050320
#define _CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated(_Text))
#else
#define _CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated)
#endif
#else // !defined(__midl) && !defined(MIDL_PASS)
#define _CRT_DEPRECATE_TEXT(_Text)
#endif

/* Define _CRT_BANNED_DEPRECATE */
#ifndef _CRT_BANNED_DEPRECATE
#ifdef _CRT_SECURE_DEPRECATE_BANNED
#define _CRT_BANNED_DEPRECATE(_Replacement) _CRT_DEPRECATE_TEXT("This function or variable has been banned. Consider using " #_Replacement " instead. To disable deprecation, undefine _CRT_SECURE_DEPRECATE_BANNED.")
#else
#define _CRT_BANNED_DEPRECATE(_Replacement)
#endif
#endif

/* Define _CRT_INSECURE_DEPRECATE */
#ifndef _CRT_INSECURE_DEPRECATE
#ifdef _CRT_SECURE_NO_DEPRECATE
#define _CRT_INSECURE_DEPRECATE(_Replacement)
#else
#define _CRT_INSECURE_DEPRECATE(_Replacement) _CRT_DEPRECATE_TEXT("This function or variable may be unsafe. Consider using " #_Replacement " instead. To disable deprecation, use _CRT_SECURE_NO_DEPRECATE. See online help for details.")
#endif
#endif

/* Define _CRT_INSECURE_DEPRECATE_MEMORY */
#ifndef _CRT_INSECURE_DEPRECATE_MEMORY
#if !defined(_CRT_SECURE_DEPRECATE_MEMORY)
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement)
#else
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement) _CRT_INSECURE_DEPRECATE(_Replacement)
#endif
#endif

/* Define _CRT_INSECURE_DEPRECATE_GLOBALS */
#ifndef _CRT_INSECURE_DEPRECATE_GLOBALS
#if defined (RC_INVOKED)
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement)
#else
#if defined(_CRT_SECURE_NO_DEPRECATE_GLOBALS)
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement)
#else
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement) _CRT_INSECURE_DEPRECATE(_Replacement)
#endif
#endif
#endif

/* _SECURECRT_FILL_BUFFER_PATTERN is the same as _bNoMansLandFill */
#define _SECURECRT_FILL_BUFFER_PATTERN 0xFD

/* obsolete stuff */

/* Define _CRT_OBSOLETE */
#ifndef _CRT_OBSOLETE
#ifdef _CRT_OBSOLETE_NO_DEPRECATE
#define _CRT_OBSOLETE(_NewItem)
#else
#define _CRT_OBSOLETE(_NewItem) _CRT_DEPRECATE_TEXT("This function or variable has been superceded by newer library or operating system functionality. Consider using" #_NewItem "instead. See online help for details.")
#endif
#endif

/* Define overload switches */
#if !defined (RC_INVOKED)
 #if !defined(_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES)
  #define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0
 #else
  #if !__STDC_WANT_SECURE_LIB__ && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
   #error Cannot use Secure CRT C++ overloads when __STDC_WANT_SECURE_LIB__ is 0
  #endif
 #endif
#endif

#if !defined (RC_INVOKED)
 #if !defined(_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT)
  /* _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT is ignored if _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES is set to 0 */
  #define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0
 #else
  #if !__STDC_WANT_SECURE_LIB__ && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT
   #error Cannot use Secure CRT C++ overloads when __STDC_WANT_SECURE_LIB__ is 0
  #endif
 #endif
#endif

#if !defined (RC_INVOKED)
 #if !defined(_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES)
  #if __STDC_WANT_SECURE_LIB__
   #define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1
  #else
   #define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 0
  #endif
 #else
  #if !__STDC_WANT_SECURE_LIB__ && _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES
   #error Cannot use Secure CRT C++ overloads when __STDC_WANT_SECURE_LIB__ is 0
  #endif
 #endif
#endif

/* Define _CRT_NONSTDC_DEPRECATE */
#if !defined(_CRT_NONSTDC_DEPRECATE)
#if defined(_CRT_NONSTDC_NO_DEPRECATE) || defined(_POSIX_)
#define _CRT_NONSTDC_DEPRECATE(_NewName)
#else
#define _CRT_NONSTDC_DEPRECATE(_NewName) _CRT_DEPRECATE_TEXT("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " #_NewName ". See online help for details.")
#endif
#endif

#ifndef _SIZE_T_DEFINED
#ifdef  _WIN64
typedef unsigned __int64    size_t;
#else
typedef _W64 unsigned int   size_t;
#endif
#define _SIZE_T_DEFINED
#endif

#if __STDC_WANT_SECURE_LIB__
#ifndef _RSIZE_T_DEFINED
typedef size_t rsize_t;
#define _RSIZE_T_DEFINED
#endif
#endif

#ifndef _INTPTR_T_DEFINED
#ifdef  _WIN64
typedef __int64             intptr_t;
#else
typedef _W64 int            intptr_t;
#endif
#define _INTPTR_T_DEFINED
#endif

#ifndef _UINTPTR_T_DEFINED
#ifdef  _WIN64
typedef unsigned __int64    uintptr_t;
#else
typedef _W64 unsigned int   uintptr_t;
#endif
#define _UINTPTR_T_DEFINED
#endif

#ifndef _PTRDIFF_T_DEFINED
#ifdef  _WIN64
typedef __int64             ptrdiff_t;
#else
typedef _W64 int            ptrdiff_t;
#endif
#define _PTRDIFF_T_DEFINED
#endif

#ifndef _WCHAR_T_DEFINED
typedef unsigned short wchar_t;
#define _WCHAR_T_DEFINED
#endif

#ifndef _WCTYPE_T_DEFINED
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
#define _WCTYPE_T_DEFINED
#endif

#ifndef _VA_LIST_DEFINED
#ifdef _M_CEE_PURE
typedef System::ArgIterator va_list;
#else
typedef char *  va_list;
#endif
#define _VA_LIST_DEFINED
#endif

#if     _INTEGRAL_MAX_BITS < 64
// The resource compiler doesn't like this being set twice and public\common\oak\misc\makefile.def already sets it
#undef _USE_32BIT_TIME_T
#define _USE_32BIT_TIME_T
#endif

#ifndef _ERRCODE_DEFINED
#define _ERRCODE_DEFINED
typedef int errno_t;
#endif

#ifndef _TIME32_T_DEFINED
typedef _W64 unsigned long __time32_t;   /* 32-bit time value */
#define _TIME32_T_DEFINED
#endif

#ifndef _TIME64_T_DEFINED
#if     _INTEGRAL_MAX_BITS >= 64
typedef __int64 __time64_t;     /* 64-bit time value */
#endif
#define _TIME64_T_DEFINED
#endif

#ifndef _TIME_T_DEFINED
#ifdef _USE_32BIT_TIME_T
typedef __time32_t time_t;      /* time value */
#else
typedef __time64_t time_t;      /* time value */
#endif
#define _TIME_T_DEFINED         /* avoid multiple def's of time_t */
#endif

#ifndef _CONST_RETURN
#ifdef  __cplusplus
#define _CONST_RETURN  const
#define _CRT_CONST_CORRECT_OVERLOADS
#else
#define _CONST_RETURN
#endif
#endif

#if !defined(UNALIGNED)
#if defined(_M_IX86)
#define UNALIGNED
#else
#define UNALIGNED __unaligned
#endif
#endif

#if !defined(_CRT_ALIGN)
#if defined(__midl)
#define _CRT_ALIGN(x)
#else
#define _CRT_ALIGN(x) __declspec(align(x))
#endif
#endif

/* Define _CRTNOALIAS, _CRTRESTRICT, _CRTNORETURN */

#if (_MSC_VER >= 1400) && !defined(__midl) && !defined(MIDL_PASS)

#ifndef _CRTNOALIAS
#define _CRTNOALIAS __declspec(noalias)
#endif  /* _CRTNOALIAS */

#ifndef _CRTRESTRICT
#define _CRTRESTRICT __declspec(restrict)
#endif  /* _CRTRESTRICT */

#ifndef _CRTNORETURN
#define _CRTNORETURN __declspec(noreturn)
#endif  /* _CRTNORETURN */

#else

#ifndef _CRTNOALIAS
#define _CRTNOALIAS
#endif  /* _CRTNOALIAS */

#ifndef _CRTRESTRICT
#define _CRTRESTRICT
#endif  /* _CRTRESTRICT */

#ifndef _CRTNORETURN
#define _CRTNORETURN
#endif  /* _CRTNORETURN */

#endif

/* Define __cdecl for non-Microsoft compilers */
#if     ( !defined(_MSC_VER) && !defined(__cdecl) )
#define __cdecl
#endif

#if !defined(__CRTDECL)
#if defined(_M_CEE_PURE)
#define __CRTDECL
#else
#define __CRTDECL   __cdecl
#endif
#endif

#if !defined(_CRTAPI1)
#define _CRTAPI1 __cdecl
#endif


#define _ARGMAX 100

/* _TRUNCATE */
#if !defined(_TRUNCATE)
#define _TRUNCATE ((size_t)-1)
#endif

/* helper macros for cpp overloads */
#if !defined(RC_INVOKED)
#if defined(__cplusplus) && _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(_ReturnType, _FuncName, _DstType, _Dst) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size]) \
    { \
        return _FuncName(_Dst, _Size); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1) \
    { \
        return _FuncName(_Dst, _Size, _TArg1); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return _FuncName(_Dst, _Size, _TArg1, _TArg2); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return _FuncName(_Dst, _Size, _TArg1, _TArg2, _TArg3); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        return _FuncName(_Dst, _Size, _TArg1, _TArg2, _TArg3, _TArg4); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType (&_Dst)[_Size], _TType1 _TArg1) \
    { \
        return _FuncName(_HArg1, _Dst, _Size, _TArg1); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return _FuncName(_HArg1, _Dst, _Size, _TArg1, _TArg2); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return _FuncName(_HArg1, _Dst, _Size, _TArg1, _TArg2, _TArg3); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(_ReturnType, _FuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _HType2 _HArg2, _DstType (&_Dst)[_Size]) \
    { \
        return _FuncName(_HArg1, _HArg2, _Dst, _Size); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(_ReturnType, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1) \
    extern "C++" \
    { \
    __pragma(warning(push)); \
    __pragma(warning(disable: 4793)); \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg1); \
        return _VFuncName(_Dst, _Size, _TArg1, _ArgList); \
    } \
    __pragma(warning(pop)); \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(_ReturnType, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    extern "C++" \
    { \
    __pragma(warning(push)); \
    __pragma(warning(disable: 4793)); \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg2); \
        return _VFuncName(_Dst, _Size, _TArg1, _TArg2, _ArgList); \
    } \
    __pragma(warning(pop)); \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(_ReturnType, _FuncName, _DstType, _Src) \
    extern "C++" \
    { \
    template <size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize> \
    inline \
    _ReturnType __CRTDECL _FuncName(__in const _DstType *_Src, __out_ecount_opt(_DriveSize) _DstType (&_Drive)[_DriveSize], __out_ecount_opt(_DirSize) _DstType (&_Dir)[_DirSize], __out_ecount_opt(_NameSize) _DstType (&_Name)[_NameSize], __out_ecount_opt(_ExtSize) _DstType (&_Ext)[_ExtSize]) \
    { \
        return _FuncName(_Src, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize); \
    } \
    }

#else

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(_ReturnType, _FuncName, _DstType, _Dst)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(_ReturnType, _FuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(_ReturnType, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(_ReturnType, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(_ReturnType, _FuncName, _DstType, _Src)

#endif /* _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES */
#endif

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _VFuncName, _VFuncName##_s, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _VFuncName##_s, _DstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE(_DeclSpec, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE(_DeclSpec, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _Dst) \

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _VFuncName, _VFuncName##_s, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE(_DeclSpec, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE(_DeclSpec, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)


#if !defined(RC_INVOKED)
#if defined(__cplusplus) && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES

#define __RETURN_POLICY_SAME(_FunctionCall, _Dst) return (_FunctionCall)
#define __RETURN_POLICY_DST(_FunctionCall, _Dst) return ((_FunctionCall) == 0 ? _Dst : 0)
#define __RETURN_POLICY_VOID(_FunctionCall, _Dst) (_FunctionCall); return
#define __EMPTY_DECLSPEC

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_DstType *_Dst) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_DstType *); \
        return _FuncName(_Dst); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst)); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst)); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst) \
    { \
        return __insecure_##_FuncName(_Dst); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size]) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1]) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_CGETS(_ReturnType, _DeclSpec, _FuncName, _DstType, _Dst) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_DstType *_Dst) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_DstType *); \
        return _FuncName(_Dst); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst)); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst)); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst) \
    { \
        return __insecure_##_FuncName(_Dst); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size]) \
    { \
        size_t _SizeRead = 0; \
        errno_t _Err = _FuncName##_s(_Dst + 2, (_Size - 2) < ((size_t)_Dst[0]) ? (_Size - 2) : ((size_t)_Dst[0]), &_SizeRead); \
        _Dst[1] = (_DstType)(_SizeRead); \
        return (_Err == 0 ? _Dst + 2 : 0); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1]) \
    { \
        return __insecure_##_FuncName((_DstType *)_Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName<2>(_DstType (&_Dst)[2]) \
    { \
        return __insecure_##_FuncName((_DstType *)_Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_DstType *_Dst, _TType1 _TArg1) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_DstType *, _TType1); \
        return _FuncName(_Dst, _TArg1); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size, _TArg1), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1, _TArg1), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_DstType *, _TType1, _TType2); \
        return _FuncName(_Dst, _TArg1, _TArg2); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1, _TArg2); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size, _TArg1, _TArg2), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1, _TArg1, _TArg2), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_DstType *, _TType1, _TType2, _TType3); \
        return _FuncName(_Dst, _TArg1, _TArg2, _TArg3); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1, _TArg2, _TArg3); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size, _TArg1, _TArg2, _TArg3), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1, _TArg1, _TArg2, _TArg3), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_DstType *, _TType1, _TType2, _TType3, _TType4); \
        return _FuncName(_Dst, _TArg1, _TArg2, _TArg3, _TArg4); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3, _TArg4); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3, _TArg4); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1, _TArg2, _TArg3, _TArg4); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size, _TArg1, _TArg2, _TArg3, _TArg4), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1, _TArg1, _TArg2, _TArg3, _TArg4), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_HType1 _HArg1, _DstType *_Dst, _TType1 _TArg1) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_HType1, _DstType *, _TType1); \
        return _FuncName(_HArg1, _Dst, _TArg1); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _T &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(_HArg1, static_cast<_DstType *>(_Dst), _TArg1); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, const _T &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(_HArg1, static_cast<_DstType *>(_Dst), _TArg1); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType * &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(_HArg1, _Dst, _TArg1); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType (&_Dst)[_Size], _TType1 _TArg1) \
    { \
        _ReturnPolicy(_SecureFuncName(_HArg1, _Dst, _Size, _TArg1), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_HType1 _HArg1, _DstType (&_Dst)[1], _TType1 _TArg1) \
    { \
        _ReturnPolicy(_SecureFuncName(_HArg1, _Dst, 1, _TArg1), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_HType1 _HArg1, _HType2 _HArg2, _DstType *_Dst) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_HType1, _HType2, _DstType *); \
        return _FuncName(_HArg1, _HArg2, _Dst); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _HType2 _HArg2, _T &_Dst) \
    { \
        return __insecure_##_FuncName(_HArg1, _HArg2, static_cast<_DstType *>(_Dst)); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _HType2 _HArg2, const _T &_Dst) \
    { \
        return __insecure_##_FuncName(_HArg1, _HArg2, static_cast<_DstType *>(_Dst)); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _HType2 _HArg2, _DstType * &_Dst) \
    { \
        return __insecure_##_FuncName(_HArg1, _HArg2, _Dst); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _HType2 _HArg2, _DstType (&_Dst)[_Size]) \
    { \
        _ReturnPolicy(_SecureFuncName(_HArg1, _HArg2, _Dst, _Size), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_HType1 _HArg1, _HType2 _HArg2, _DstType (&_Dst)[1]) \
    { \
        _ReturnPolicy(_SecureFuncName(_HArg1, _HArg2, _Dst, 1), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _VFuncName, _SecureVFuncName, _DstType, _Dst, _TType1, _TArg1) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_VFuncName(_DstType *_Dst, _TType1 _TArg1, va_list _ArgList) \
    { \
        _DeclSpec _ReturnType __cdecl _VFuncName(_DstType *, _TType1, va_list); \
        return _VFuncName(_Dst, _TArg1, _ArgList); \
    } \
    extern "C++" \
    { \
    __pragma(warning(push)); \
    __pragma(warning(disable: 4793)); \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg1); \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _ArgList); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg1); \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _ArgList); \
    } \
    __pragma(warning(pop)); \
    \
    __pragma(warning(push)); \
    __pragma(warning(disable: 4793)); \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg1); \
        return __insecure_##_VFuncName(_Dst, _TArg1, _ArgList); \
    } \
    __pragma(warning(pop)); \
    \
    __pragma(warning(push)); \
    __pragma(warning(disable: 4793)); \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg1); \
        _ReturnPolicy(_SecureVFuncName(_Dst, _Size, _TArg1, _ArgList), _Dst); \
    } \
    __pragma(warning(pop)); \
    \
    __pragma(warning(push)); \
    __pragma(warning(disable: 4793)); \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg1); \
        _ReturnPolicy(_SecureVFuncName(_Dst, 1, _TArg1, _ArgList), _Dst); \
    } \
    __pragma(warning(pop)); \
    \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName(_T &_Dst, _TType1 _TArg1, va_list _ArgList) \
    { \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _ArgList); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName(const _T &_Dst, _TType1 _TArg1, va_list _ArgList) \
    { \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _ArgList); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName(_DstType *&_Dst, _TType1 _TArg1, va_list _ArgList) \
    { \
        return __insecure_##_VFuncName(_Dst, _TArg1, _ArgList); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _VFuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, va_list _ArgList) \
    { \
        _ReturnPolicy(_SecureVFuncName(_Dst, _Size, _TArg1, _ArgList), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, va_list _ArgList) \
    { \
        _ReturnPolicy(_SecureVFuncName(_Dst, 1, _TArg1, _ArgList), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SecureVFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_VFuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList) \
    { \
        _DeclSpec _ReturnType __cdecl _VFuncName(_DstType *, _TType1, _TType2, va_list); \
        return _VFuncName(_Dst, _TArg1, _TArg2, _ArgList); \
    } \
    extern "C++" \
    { \
    __pragma(warning(push)); \
    __pragma(warning(disable: 4793)); \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg2); \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _ArgList); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg2); \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _ArgList); \
    } \
    __pragma(warning(pop)); \
    \
    __pragma(warning(push)); \
    __pragma(warning(disable: 4793)); \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg2); \
        return __insecure_##_VFuncName(_Dst, _TArg1, _TArg2, _ArgList); \
    } \
    __pragma(warning(pop)); \
    \
    __pragma(warning(push)); \
    __pragma(warning(disable: 4793)); \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg2); \
        _ReturnPolicy(_SecureVFuncName(_Dst, _Size, _TArg1, _TArg2, _ArgList), _Dst); \
    } \
    __pragma(warning(pop)); \
    \
    __pragma(warning(push)); \
    __pragma(warning(disable: 4793)); \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg2); \
        _ReturnPolicy(_SecureVFuncName(_Dst, 1, _TArg1, _TArg2, _ArgList), _Dst); \
    } \
    __pragma(warning(pop)); \
    \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList) \
    { \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _ArgList); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList) \
    { \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _ArgList); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName(_DstType *&_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList) \
    { \
        return __insecure_##_VFuncName(_Dst, _TArg1, _TArg2, _ArgList); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _VFuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList) \
    { \
        _ReturnPolicy(_SecureVFuncName(_Dst, _Size, _TArg1, _TArg2, _ArgList), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList) \
    { \
        _ReturnPolicy(_SecureVFuncName(_Dst, 1, _TArg1, _TArg2, _ArgList), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __inline \
    size_t __CRTDECL __insecure_##_FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        _DeclSpec size_t __cdecl _FuncName(_DstType *, _TType1, _TType2); \
        return _FuncName(_Dst, _TArg1, _TArg2); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1, _TArg2); \
    } \
    template <size_t _Size> \
    inline \
    size_t __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        size_t _Ret = 0; \
        _SecureFuncName(&_Ret, _Dst, _Size, _TArg1, _TArg2); \
        return (_Ret > 0 ? (_Ret - 1) : _Ret); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        size_t _Ret = 0; \
        _SecureFuncName(&_Ret, _Dst, 1, _TArg1, _TArg2); \
        return (_Ret > 0 ? (_Ret - 1) : _Ret); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __inline \
    size_t __CRTDECL __insecure_##_FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        _DeclSpec size_t __cdecl _FuncName(_DstType *, _TType1, _TType2, _TType3); \
        return _FuncName(_Dst, _TArg1, _TArg2, _TArg3); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1, _TArg2, _TArg3); \
    } \
    template <size_t _Size> \
    inline \
    size_t __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        size_t _Ret = 0; \
        _SecureFuncName(&_Ret, _Dst, _Size, _TArg1, _TArg2, _TArg3); \
        return (_Ret > 0 ? (_Ret - 1) : _Ret); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        size_t _Ret = 0; \
        _SecureFuncName(&_Ret, _Dst, 1, _TArg1, _TArg2, _TArg3); \
        return (_Ret > 0 ? (_Ret - 1) : _Ret); \
    } \
    }

#if !defined(RC_INVOKED) && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_CGETS(_ReturnType, _DeclSpec, _FuncName, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_CGETS(_ReturnType, _DeclSpec, _FuncName, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _VFuncName, _SecureVFuncName, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _VFuncName, _SecureVFuncName, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _VFuncName##_s, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#else

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst) \
        _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_GETS(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _DstType *_Dst, _TType1 _TArg1);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName,_VFuncName, _SecureVFuncName, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, ...); \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_DstType *_Dst, _TType1 _TArg1, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
    _CRT_INSECURE_DEPRECATE(_VFuncName##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
    _CRT_INSECURE_DEPRECATE(_VFuncName##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

#endif /* _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT */

#else

#define __RETURN_POLICY_SAME(_FunctionCall)
#define __RETURN_POLICY_DST(_FunctionCall)
#define __RETURN_POLICY_VOID(_FunctionCall)
#define __EMPTY_DECLSPEC

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_CGETS(_ReturnType, _DeclSpec, _FuncName, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _DstType *_Dst, _TType1 _TArg1);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _VFuncName, _SecureVFuncName, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, ...); \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_DstType *_Dst, _TType1 _TArg1, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SecureVFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_GETS(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _DstType *_Dst, _TType1 _TArg1);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _VFuncName, _SecureVFuncName, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, ...); \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_DstType *_Dst, _TType1 _TArg1, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
    _CRT_INSECURE_DEPRECATE(_VFuncName##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
    _CRT_INSECURE_DEPRECATE(_VFuncName##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

#endif /* _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES */
#endif

struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct * pthreadlocinfo;
typedef struct threadmbcinfostruct * pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct
{
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
} _locale_tstruct, *_locale_t;

#ifndef _TAGLC_ID_DEFINED
typedef struct tagLC_ID {
        unsigned short wLanguage;
        unsigned short wCountry;
        unsigned short wCodePage;
} LC_ID, *LPLC_ID;
#define _TAGLC_ID_DEFINED
#endif  /* _TAGLC_ID_DEFINED */

#ifndef _THREADLOCALEINFO
typedef struct threadlocaleinfostruct {
        int refcount;
        unsigned int lc_codepage;
        unsigned int lc_collate_cp;
        unsigned long lc_handle[6]; /* LCID */
        LC_ID lc_id[6];
        struct {
            char *locale;
            wchar_t *wlocale;
            int *refcount;
            int *wrefcount;
        } lc_category[6];
        int lc_clike;
        int mb_cur_max;
        int * lconv_intl_refcount;
        int * lconv_num_refcount;
        int * lconv_mon_refcount;
        struct lconv * lconv;
        int * ctype1_refcount;
        unsigned short * ctype1;
        const unsigned short * pctype;
#ifndef _WIN32_WCE
        const unsigned char * pclmap;
        const unsigned char * pcumap;
#endif /* _WIN32_WCE */
        struct __lc_time_data * lc_time_curr;
} threadlocinfo;
#define _THREADLOCALEINFO
#endif

#ifdef  __cplusplus
}
#endif

#if defined(_PREFAST_) && defined(_PFT_SHOULD_CHECK_RETURN)
#define __checkReturn_opt __checkReturn
#else
#define __checkReturn_opt
#endif

#if defined(_PREFAST_) && defined(_PFT_SHOULD_CHECK_RETURN_WAT)
#define __checkReturn_wat __checkReturn
#else
#define __checkReturn_wat
#endif

#if !defined(__midl) && !defined(MIDL_PASS) && defined(_PREFAST_)
#define __crt_typefix(ctype)              __declspec("SAL_typefix(" __CRT_STRINGIZE(ctype) ")")
#else
#define __crt_typefix(ctype)
#endif

#if (defined(__midl))
/* suppress tchar inlines */
#ifndef _NO_INLINING
#define _NO_INLINING
#endif
#endif

#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_CRTDEFS */
