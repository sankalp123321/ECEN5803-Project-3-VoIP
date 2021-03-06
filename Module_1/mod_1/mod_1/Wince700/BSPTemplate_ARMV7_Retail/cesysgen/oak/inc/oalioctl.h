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
/*++
THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
PARTICULAR PURPOSE.

Module Name:  

oalioctl.h

Abstract:

This file defines the symbols used by OAL Ioctl module

Notes: 


--*/

#ifndef _OAL_IOCTL_H_
#define _OAL_IOCTL_H_

// OAL ioctl dll name
#define OALIOCTL_DLL L"oalioctl"

// Entry point into OAL ioctl dll
#define OALIOCTL_DLL_IOCONTROL "IOControl"

typedef BOOL (* PFN_Ioctl) (DWORD dwCode, LPVOID pInBuf, DWORD nInSize, LPVOID pOutBuf, DWORD nOutSize, LPDWORD pcbRet);

extern PFN_Ioctl g_pfnOalIoctl;

#endif  // _OAL_GLOBAL_H_

