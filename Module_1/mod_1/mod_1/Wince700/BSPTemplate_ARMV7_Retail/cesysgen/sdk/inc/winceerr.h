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
/************************************************************************
*                                                                       *
*   winceerr.h --  error code ranges used with FACILITY_WINDOWS_CE      *
*                                                                       *
*                                                                       *
************************************************************************/

#ifndef _WINCEERR_
#define _WINCEERR_

#if defined (_MSC_VER) && (_MSC_VER >= 1020) && !defined(__midl)
#pragma once
#endif

// Unless otherwise specified, ranges should be considered to cover 0x40 codes

#define UPDERROR_BASE       0x0000  // See public\common\oak\inc\upderrors.h

#define MA_ML_BASE          0x0200  // MediaApps Media Library (see public\mediaapps\MLErrorCodes.h)

#define MA_CAMCAP_BASE      0x0300  // MediaApps SHCameraCaptureEx (see public\mediaapps\sdk\inc\CAMErrorCodes.h

#define UPDSUCCESS_BASE     0x1000  // See public\common\oak\inc\upderrors.h

#define LASS_BASE           0x1500  // See public\common\sdk\inc\lasscommonerrors.h

#define WINCEPRIV_BASE      0x8000  // Codes from 0x8000-0xFFFF are used by private Windows CE code

#endif//_WINCEERR_
