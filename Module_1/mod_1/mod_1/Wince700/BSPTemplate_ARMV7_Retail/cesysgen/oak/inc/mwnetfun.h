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

    mwnetfun.h

Abstract:  

    Function macros for WNet API functions.  Only Unicode versions are
    implemented.
    
Notes: 


--*/
  
#ifndef _MWNETFUN_H
#define _MWNETFUN_H  1

#ifdef __cplusplus
extern "C" {
#endif

#ifndef WINCEMACRO
#error WINCEMACRO not defined __FILE__
#endif

/*
 * WNet API calls. Only unicode (W) functions are defined
 */
#define WNetAddConnection3W IMPLICIT_DECL (DWORD, SH_WNET, 1,  \
                                           (HWND hwndOwner,    \
                                            LPNETRESOURCEW lpNetResource, \
                                            DWORD cNetResource, \
                                            LPCWSTR lpUserName, \
                                            LPCWSTR lpPassword, \
                                            DWORD   dwFlags))
    
#define WNetCancelConnection2W IMPLICIT_DECL (DWORD, SH_WNET, 2, \
                                              (LPCWSTR lpName,   \
                                               DWORD dwFlags,    \
                                               BOOL   fForce))

#define WNetConnectionDialog1W IMPLICIT_DECL (DWORD, SH_WNET, 3,   \
                                              (LPCONNECTDLGSTRUCTW lpConnectDlgStruc, \
                                              DWORD cConnectDlgStruc))

#define WNetDisconnectDialog IMPLICIT_DECL (DWORD, SH_WNET, 4,   \
                                            (HWND hWnd,          \
                                             DWORD dwType))
    
#define WNetDisconnectDialog1W IMPLICIT_DECL (DWORD, SH_WNET, 5,   \
                                              (LPDISCDLGSTRUCT lpDiscDlgStruc, \
                                              DWORD cDiscDlgStruc))

#define WNetGetConnectionW IMPLICIT_DECL (DWORD, SH_WNET, 6,     \
                                          (LPCWSTR lpLocalName,  \
                                           LPWSTR  lpRemoteName, \
                                           DWORD cRemoteName, \
                                           LPDWORD lpnLength))

#define WNetGetUniversalNameW IMPLICIT_DECL (DWORD, SH_WNET, 7,    \
                                             (LPCWSTR lpLocalPath, \
                                              DWORD   dwInfoLevel, \
                                              LPVOID lpBuffer,     \
                                              DWORD cBuffer, \
                                              LPDWORD lpBufferSize))

#define WNetGetUserW IMPLICIT_DECL (DWORD, SH_WNET, 8,   \
                                    (LPCWSTR lpName,     \
                                     LPWSTR lpUserName,  \
                                     DWORD cUserName, \
                                     LPDWORD lpnLength))

#define WNetOpenEnumW IMPLICIT_DECL (DWORD, SH_WNET, 9,      \
                                     (DWORD dwScope,         \
                                      DWORD dwType,          \
                                      DWORD dwUsage,         \
                                      LPNETRESOURCEW lpNetResource, \
                                      DWORD cNetResource, \
                                      LPHANDLE lphEnum))

    
    
/*
 * WNet Enum handle based API calls
 */
#define     WNET_CALL(type, api, args)    (*(type (*) args)IMPLICIT_CALL(HT_WNETENUM, api))
  
#define     WNetCloseEnum   WNET_CALL (DWORD, 0,             \
                                       (HANDLE hEnum))

#define     WNetEnumResourceW WNET_CALL (DWORD,2,            \
                                         (HANDLE  hEnum,     \
                                          LPDWORD pCount,    \
                                          LPVOID pBuf,       \
                                          DWORD cBuf,       \
                                          LPDWORD pBufSize))
  
#ifdef __cplusplus
}
#endif

#endif // _MWNETFUN_H
