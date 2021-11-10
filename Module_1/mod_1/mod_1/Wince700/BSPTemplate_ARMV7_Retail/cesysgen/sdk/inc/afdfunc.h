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

Module Name:  

afdfunc.h

Abstract:

Functions exposed from the AFD system process

Notes: 


--*/

// @CESYSGEN IF CE_MODULES_AFD

#ifndef _AFDFUNC_H_
#define _AFDFUNC_H_

#ifndef _AFD_NO_WS2

#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _SOCK_LIST_DEF
#define _SOCK_LIST_DEF

typedef struct _SOCK_LIST {
    DWORD                hSocket;            // handle to socket passed in from dll layer
    struct _SOCK_INFO    *Socket;             // the target socket
    DWORD                EventMask;          // events the client is interested in
    DWORD                Context;            // user-defined context value (handle?)
    struct _SOCK_INFO    *pSock;            // ptr to real socket
                // no need to confuse people Context is just a SOCKET
    HANDLE                hHandleLock;
    
} SOCK_LIST, *LPSOCK_LIST, *PSOCK_LIST;

#endif    // _SOCK_LIST_DEF


#ifndef SOCKHAND_DEFINED
DECLARE_HANDLE(SOCKHAND);
typedef SOCKHAND *PSOCKHAND;
#define SOCKHAND_DEFINED
#endif

#include "ras.h"
#include "tapi.h"
                
#ifdef __cplusplus
}
#endif

#ifdef WINCEOEM

#if defined(WINCEMACRO) || defined(WINCEAFDMACRO) || defined(WINCEWSPMMACRO)
#include <mafdfunc.h>    // macros
#endif

#if defined(WINCEWSPMMACRO)
SOCKHAND AFDSocket(DWORD AddressFamily, DWORD SocketType, DWORD Protocol,
                DWORD CatId, GUID *pProvId);





DWORD 
AFDSelect(UINT ReadCount, PSOCK_LIST ReadList,
    UINT WriteCount, PSOCK_LIST WriteList,
    UINT ExceptCount, PSOCK_LIST ExceptList,
    const struct timeval *timeout);

#endif

#endif

#endif  // _AFDFUNC_H_

// @CESYSGEN ENDIF
