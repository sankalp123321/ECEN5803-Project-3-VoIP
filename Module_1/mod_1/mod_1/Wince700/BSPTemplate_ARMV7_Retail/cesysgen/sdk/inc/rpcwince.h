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

  Module name: 

    Rpcwince.h
  
  Abstract:

    Definitions for Windows CE specific RPC functions.
 
--*/
#ifndef __WINCERPC_H__
#define __WINCERPC_H__

#ifdef __cplusplus
extern "C" {
#endif

RPCRTAPI
RPC_STATUS 
RPC_ENTRY
CeRpcServerUnregisterProtseqEpW(
    __in WCHAR *Protseq,
    __in WCHAR *Endpoint
    );

#ifdef __cplusplus
}
#endif

#endif // __WINCERPC_H__
