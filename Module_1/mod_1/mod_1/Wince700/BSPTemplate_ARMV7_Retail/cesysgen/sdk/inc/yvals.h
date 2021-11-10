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
/* yvals.h values header for Microsoft C/C++ */

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _YVALS
#define _YVALS

#include <libdefs>

#ifdef  _MSC_VER
#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#pragma warning(4: 4018 4114 4146 4244 4245)
#pragma warning(disable: 4237 4284 4290 4514)
        /* NAMESPACE */
#if defined(__cplusplus)
#define _STD          std::
#define _STD_BEGIN    namespace std {
#define _STD_END      };
#define _STD_USING
#else
#define _STD          ::
#define _STD_BEGIN
#define _STD_END
#endif /* __cplusplus */
_STD_BEGIN
        /* TYPE bool */
#if defined(__cplusplus)
typedef bool _Bool;
#endif /* __cplusplus */
        /* INTEGER PROPERTIES */
#define _MAX_EXP_DIG    8   /* for parsing numerics */
#define _MAX_INT_DIG    32
#define _MAX_SIG_DIG    36
        /* STDIO PROPERTIES */
#define _Filet FILEX

#ifndef _FPOS_T_DEFINED
#define _FPOSOFF(fp)    ((long)(fp))
#endif /* _FPOS_T_DEFINED */

        /* NAMING PROPERTIES */
#if defined(__cplusplus)
#define _C_LIB_DECL extern "C" {
#define _END_C_LIB_DECL }
#else
#define _C_LIB_DECL
#define _END_C_LIB_DECL
#endif /* __cplusplus */
#define _CDECL
        // CLASS _Lockit
#if defined(__cplusplus)
class _CRTIMP _Lockit
    {   // lock while object in existence
public:
#ifdef _MT
#define _LOCKIT(x)   lockit x
    _Lockit();
    ~_Lockit();
#else
#define _LOCKIT(x)
    _Lockit()
        {}
    ~_Lockit()
        {}
#endif /* _MT */
    };
#endif /* __cplusplus */
        /* MISCELLANEOUS MACROS */
#define _L(c)   L##c
#define _MAX    _cpp_max
#define _MIN    _cpp_min
_STD_END
#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif /* _YVALS */

/*
 * Copyright (c) 1996 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
 */
