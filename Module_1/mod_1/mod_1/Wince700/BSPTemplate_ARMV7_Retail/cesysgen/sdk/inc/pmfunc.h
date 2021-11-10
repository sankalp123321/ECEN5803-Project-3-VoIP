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

afdfunc.h

Abstract:

Functions exposed from the AFD system process

Notes: 


--*/

// @CESYSGEN IF CE_MODULES_AFD

#pragma once

#ifndef _AFDFUNC_H_
#define _AFDFUNC_H_

//#include <types.h>
//#include <wtypes.h>
#include <windns.h>

#ifndef _AFD_NO_WS2

#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _SOCK_LIST_DEF
#define _SOCK_LIST_DEF

typedef struct _SOCK_LIST {
    DWORD               hSocket;            // handle to socket passed in from dll layer
    struct _SOCK_INFO   *Socket;             // the target socket
    DWORD               EventMask;          // events the client is interested in
    DWORD               Context;            // user-defined context value (handle?)
    struct _SOCK_INFO   *pSock;         // ptr to real socket
                // no need to confuse people Context is just a SOCKET
    HANDLE              hHandleLock;
    
} SOCK_LIST, *LPSOCK_LIST, *PSOCK_LIST;


typedef struct _PMSOCK_LIST {
    DWORD               hSocket;            // handle to socket passed in from dll layer
    struct _Socket      *Socket;             // the target socket
    DWORD               EventMask;          // events the client is interested in
    DWORD               Context;            // user-defined context value (handle?)
    struct _Socket      *pSock;         // ptr to real socket
                // no need to confuse people Context is just a SOCKET
    HANDLE              hHandleLock;
    
} PMSOCK_LIST, *PPMSOCK_LIST;


#endif  // _SOCK_LIST_DEF


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

#if defined(WINCEMACRO)
#include <mPmFunc.h>    // macros
#endif

#ifndef WINCEMACRO  //defined(WINCEWSPMMACRO)

#ifdef __cplusplus
extern "C" {
#endif


SOCKHAND PMSocket(DWORD AddressFamily, DWORD SocketType, DWORD Protocol,
                DWORD CatId, GUID *pProvId, DWORD cProvId);
// BUGBUG: NYI
/*
DWORD AFDControl(DWORD Protocol, DWORD Action, VOID *pInputBuf, 
            DWORD cbInputBuf, VOID *pOutputBuf, DWORD cbOutputBuf, DWORD *pcOutputBuf);

DWORD AFDGetHostentByAttr(LPSOCK_THREAD pThread, DWORD cbThread, LPWSTR Name,
                        LPBYTE Address, LPVOID pOptions, DWORD cOptions);

DWORD AFDAddIPHostent(LPWSTR Hostname, char **IpAddr, LPWSTR Aliases,
                      LPFILETIME lpFileTime);

BOOL APIENTRY AfdAddInterface (PTSTR pAdapter, void *Nte, DWORD Context,
                               int Flags, uint IpAddr, uint SubnetMask,
                               int cDns, uint *pDns, int cWins, uint *pWins);

DWORD NETbios(DWORD x1, DWORD dwOpCode, PVOID pNCB, DWORD cBuf1,
              PBYTE pBuf1, DWORD cBuf2, PDWORD pBuf2);
*/

int PMSelect(UINT ReadCount, LPSOCK_LIST ReadList, UINT cbReadList, 
                UINT WriteCount, LPSOCK_LIST WriteList, UINT cbWriteList,
                UINT ExceptCount, LPSOCK_LIST ExceptList, UINT cbExceptList,
                const struct timeval *timeout);

int PMInstallProvider(GUID *pProviderId,const WCHAR *szProviderDllPath,
            const LPWSAPROTOCOL_INFOW pProtocolInfoList, DWORD cbProtocolInfoList,
            DWORD NumberOfEntries, DWORD Flags);

int PMEnumProtocols(int *pProtocols, WSAPROTOCOL_INFOW *pProtocolBuffer,
            DWORD cbBuffer, DWORD *pBufferLength, DWORD *pFlags, int *pErrno);

int PMFindProvider(int af, int type, int protocol, DWORD dwFlags,
            DWORD CatalogEntryId, WSAPROTOCOL_INFOW *pProtocolInfo,
            DWORD cbProtocolInfo, LPWSTR pszPath, DWORD cbPath);

int PMInstallNameSpace(LPWSTR pszIdentifier, LPWSTR pszPathName, 
            DWORD dwNameSpace, DWORD dwVersion, GUID *pProviderId, DWORD *pFlags);

int PMEnumNameSpaceProviders(DWORD *pcBuf, WSANAMESPACE_INFOW   *pBuf,
            DWORD cBuf, DWORD *pFlags, int *pErr);
                            

int PMFindNameSpaces(WSAQUERYSETW *pQuery, void *pBuf, int cBuf, int *pcBuf, 
            int *pErr);


int PMAddrConvert(DWORD Op, DWORD AddrFamily, SOCKADDR *pSockAddr, 
        DWORD cSockAddr, DWORD *pcSockAddr, LPWSAPROTOCOL_INFOW pProtInfo, 
        DWORD cbProtInfo, PWSTR psAddr, DWORD cAddr, DWORD *pcAddr);


DNS_STATUS AFDDnsQuery_W(PCWSTR pszName, WORD wType, DWORD Options, 
        PIP4_ARRAY aipServers, DWORD cbServers, PDNS_RECORD *ppQueryResults,
        PVOID *pReserved);


void AfdDNSRecordListFree(PDNS_RECORD pRecordList, DNS_FREE_TYPE FreeType);


DWORD AFD_UpdateOrModifyRecords(PDNS_RECORD pAddRecords, 
        PDNS_RECORD pDeleteRecords, DWORD Options, HANDLE hContext,
        PIP4_ARRAY pServerList, DWORD cbServers, PVOID pReserved, BOOL fReplace);

 
int PMAccept(UINT hListeningSock, UINT *phAcceptedSock, PSOCKADDR pAddr, 
    DWORD cbAddr, DWORD *pcbAddr, LPCONDITIONPROC pfnCondition, DWORD CallbackData);


int PMBind(UINT hPmSock, PSOCKADDR pAddr, DWORD cbAddr);


int PMConnect(UINT hPmSock, PSOCKADDR pAddr, DWORD cbAddr);


int PMIoctl(UINT hPmSock, DWORD Code, VOID *pInBuf, DWORD cbInBuf, VOID *pOutBuf,
        DWORD cbOutBuf, DWORD *pcbOutBuf, WSAOVERLAPPED *pOv, DWORD cbOv,
        LPWSAOVERLAPPED_COMPLETION_ROUTINE pCompRtn, LPWSATHREADID pThreadId);


int PMListen(UINT hPmSock, DWORD Backlog);


int PMRecv(UINT hPmSock, WSABUF *pWsaBufs, DWORD cWsaBufs, DWORD *pcbRcvd, 
        DWORD *pFlags);


int PMRecvFrom(UINT hPmSock, WSABUF *pWsaBufs, DWORD cWsaBufs, DWORD *pcbRcvd,
        DWORD *pFlags, PSOCKADDR pAddr, DWORD cbAddr, DWORD *pcbAddr);


// this is used for handling or Overlapped and special calls which regular
// recv/recvfrom can't handle
int PMRecvEx(UINT hPmSock, WSABUF *pWsaBufs, DWORD cWsaBufs, DWORD *pcbRcvd, 
        DWORD *pFlags, PSOCKADDR pAddr, DWORD cbAddr, DWORD *pcbAddr, 
        WSAOVERLAPPED *pOv, LPWSAOVERLAPPED_COMPLETION_ROUTINE pCompRtn, 
        LPWSATHREADID pThreadId, WSABUF *pControl);


int PMSend(UINT hPmSock, WSABUF *pWsaBufs, DWORD cWsaBufs, DWORD *pcbSent, 
        DWORD Flags);


int PMSendTo(UINT hPmSock, WSABUF *pWsaBufs, DWORD cWsaBufs, DWORD *pcbSent, 
        DWORD Flags, PSOCKADDR pAddr, DWORD cbAddr);


// this is used for handling Overlapped and special calls which regular
// send/sendto can't handle
int PMSendEx(UINT hPmSock, WSABUF *pWsaBufs, DWORD cWsaBufs, DWORD *pcbSent, 
        DWORD Flags, PSOCKADDR pAddr, DWORD cbAddr, WSAOVERLAPPED *pOv, 
        LPWSAOVERLAPPED_COMPLETION_ROUTINE pCompRtn, LPWSATHREADID pThreadId);


int PMSendMsg(IN UINT hPmSock, IN LPWSAMSG pMsg, IN DWORD Flags,
    __out_opt LPDWORD pcbSent, __in_opt LPWSAOVERLAPPED pOverlapped,
    __in_opt LPWSAOVERLAPPED_COMPLETION_ROUTINE pCompRtn, LPWSATHREADID pThreadId);


int PMShutdown(UINT hPmSock, DWORD How);


int PMGetsockname (UINT hPmSock, LPSOCKADDR pAddr, DWORD cbAddr, 
        LPDWORD pcbAddr);


int PMGetpeername (UINT hPmSock, LPSOCKADDR pAddr, DWORD cbAddr, 
        LPDWORD pcbAddr);


int PMGetSockOpt(UINT hPmSock, DWORD Level, DWORD OptionName, 
        LPVOID pBuf, DWORD cbBuf, LPDWORD pcBuf);


int PMSetSockOpt (UINT hPmSock, DWORD Level, DWORD OptionName, 
        LPVOID pBuf, DWORD cbBuf);


int PMWakeup (UINT hPmSock, DWORD Event, DWORD Status);


int PMGetOverlappedResult (UINT hPmSock, WSAOVERLAPPED *pOv, 
        DWORD *pcTransfer, DWORD fWait, DWORD *pFlags, DWORD *pErr);


int PMEventSelect (UINT hPmSock, WSAEVENT hEvent, long NetworkEvents);


int PMEnumNetworkEvents (UINT hPmSock, WSAEVENT hEvent, 
        LPWSANETWORKEVENTS pNetworkEvents, DWORD cbNetworkEvents);


DWORD PMCloseSocket(uint hAfdSock);

#ifdef __cplusplus
}
#endif


#endif

#endif

#endif  // _AFDFUNC_H_

// @CESYSGEN ENDIF
