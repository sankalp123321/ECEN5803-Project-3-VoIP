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

hwcomapi.h

Abstract:

Holds pdd level prototypes of win32 comm apis.

Notes: 


--*/

#ifdef __cplusplus
extern "C" {
#endif


ULONG
HWGetStatus(
    PVOID	pHead,
    LPCOMSTAT	lpStat
    );

VOID
HWReset(
    PVOID   pHead
    );

VOID
HWGetModemStatus(
    PVOID   pHead,
    PULONG  pModemStatus
    );

VOID
HWGetCommProperties(
    PVOID	pHead,
    LPCOMMPROP	pCommProp
    );

VOID
HWPurgeComm(
    PVOID pHead,
    DWORD   fdwAction
    );

#ifdef __cplusplus
}
#endif

    
