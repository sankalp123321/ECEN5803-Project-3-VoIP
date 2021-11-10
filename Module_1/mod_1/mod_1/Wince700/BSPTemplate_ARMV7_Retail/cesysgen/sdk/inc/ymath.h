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
/* ymath.h internal header */
#ifndef _YMATH
#define _YMATH

#include <math.h>

#ifndef _YVALS
#include <yvals.h>
#endif

        /* MACROS */
#define _FINITE     -1
#define _INFCODE    1
#define _NANCODE    2

        /* TYPE DEFINITIONS */
typedef union {
    unsigned __int16 _W[4];
    float _F;
    double _D;
    long double _L;
    } _Dconst;


// QNAN and SNAN have architecture-specific values

#if defined(_M_IX86) || defined(_M_ARM)

// float NaNs
#define __FNAN_INIT     {1, 0x7fc0, 0, 0}
#define __FSNAN_INIT    {1, 0x7f80, 0, 0}
// double NaNs
#define __NAN_INIT      {1, 0, 0, 0x7ff8}
#define __SNAN_INIT     {1, 0, 0, 0x7ff0}

#elif  defined(_M_MRX000) || defined(_M_SH)

// float NaNs
#define __FNAN_INIT     {1, 0x7f80, 0, 0}
#define __FSNAN_INIT    {1, 0x7fc0, 0, 0}
// double NaNs
#define __NAN_INIT      {1, 0, 0, 0x7ff0}
#define __SNAN_INIT     {1, 0, 0, 0x7ff8}

#else
#error Unknown target architecture
#endif

#define _CRTCONST __declspec(selectany) extern const


_C_LIB_DECL

        /* float DECLARATIONS */
_CRTIMP float __cdecl _FCosh(float, float);
_CRTIMP short __cdecl _FDtest(float *);
_CRTIMP short __cdecl _FExp(float *, float, short);
_CRTIMP float __cdecl _FSinh(float, float);

_CRTCONST _Dconst _FDenorm  = {1, 0, 0, 0};
_CRTCONST _Dconst _FInf     = {0, 0x7f80, 0, 0};
_CRTCONST _Dconst _FNan     = __FNAN_INIT;
_CRTCONST _Dconst _FSnan    = __FSNAN_INIT;

        /* double DECLARATIONS */
_CRTIMP double __cdecl _Cosh(double, double);
_CRTIMP short __cdecl _Dtest(double *);
_CRTIMP short __cdecl _Exp(double *, double, short);
_CRTIMP double __cdecl _Sinh(double, double);

_CRTCONST _Dconst _Denorm   = {1, 0, 0, 0};
_CRTCONST _Dconst _Inf      = {0, 0, 0, 0x7ff0};
_CRTCONST _Dconst _Nan      = __NAN_INIT;
_CRTCONST _Dconst _Snan     = __SNAN_INIT;

        /* long double DECLARATIONS */
_CRTIMP long double __cdecl _LCosh(long double, long double);
_CRTIMP short __cdecl _LDtest(long double *);
_CRTIMP short __cdecl _LExp(long double *, long double, short);
_CRTIMP long double __cdecl _LSinh(long double, long double);

// 'long double' is identical with 'double'
_CRTCONST _Dconst _LDenorm  = {1, 0, 0, 0};
_CRTCONST _Dconst _LInf     = {0, 0, 0, 0x7ff0};
_CRTCONST _Dconst _LNan     = __NAN_INIT;
_CRTCONST _Dconst _LSnan    = __SNAN_INIT;

_END_C_LIB_DECL


#undef __FNAN_INIT
#undef __FSNAN_INIT
#undef __NAN_INIT
#undef __SNAN_INIT
#undef _CRTCONST

#endif /* _YMATH */

/*
 * Copyright (c) 1995 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
 */
