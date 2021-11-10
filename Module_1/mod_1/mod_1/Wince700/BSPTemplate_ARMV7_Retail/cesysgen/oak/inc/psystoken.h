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

psystoken.h

Abstract:

System token helper functions

Notes:


--*/
#ifndef _PRIV_SYSTOKEN_H__
#define _PRIV_SYSTOKEN_H__

#ifdef __cplusplus
extern "C" {
#endif

__inline BOOL IsSystemToken (HANDLE hToken)
{
    return TRUE;
}

__inline DWORD TlsCntNonSystemCallers (void)
{
    return 0;
}

__inline HANDLE GetCurrentTokenHndl (void)
{
    return NULL;
}

__inline BOOL IsSystemCaller (HANDLE hToken) 
{
    return TRUE;
}

#ifdef __cplusplus
}
#endif

#endif
