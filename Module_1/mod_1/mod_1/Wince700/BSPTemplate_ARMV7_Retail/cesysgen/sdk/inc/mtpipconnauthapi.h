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

#pragma once

#include <windows.h>
#include <winsock2.h>

#define MTPIP_CONNAUTH_MAX_NAME_LENGTH           40

typedef struct _MTPIPCONNECTIONINFO {
    DWORD dwNonce;
    GUID guidClient;
    WCHAR rgwchClientName[MTPIP_CONNAUTH_MAX_NAME_LENGTH];
    DWORD cchClientName;
    SOCKADDR_STORAGE saClient;
    SOCKADDR_STORAGE saLocal;
} MTPIPCONNECTIONINFO;


/// <summary>
/// Registers an event to be signalled, or deregisters an existing event if hEvent is NULL.
/// </summary>
/// <returns>
///        <list type="table">
///            <item>
///                <term>S_OK</term>
///                <description>Event has been successfully registered or deregistered.</description>
///            </item>
///            <item>
///                <term>E_FAIL</term>
///                <description>Bad handle or other internal failure.</description>
///            </item>
///        </list>
/// </returns>
/// <param name = HANDLE hEvent>Event handle to register, or NULL to deregister</param>
HRESULT MTPIPRegisterConnectionNotification(HANDLE hEvent);

/// <summary>
/// Retreives connection information for a pending connection.
/// </summary>
/// <returns>
///        <list type="table">
///            <item>
///                <term>S_OK</term>
///                <description>Connection information has been retrieved successfully and was stored in *pCI.</description>
///            </item>
///            <item>
///                <term>E_INVALIDARG</term>
///                <description>Invalid argument - pCI was NULL</description>
///            </item>
///            <item>
///                <term>E_PENDING</term>
///                <description>No notification event registered. Call MTPIPRegisterConnectionNotification first.</description>
///            </item>
///            <item>
///                <term>E_FAIL</term>
///                <description>Internal error.</description>
///            </item>
///        </list>
/// </returns>
/// <param name = MTPIPCONNECTIONINFO * pCI>Pointer to a MTPIPCONNECTIONINFO structure that will hold the connection information.</param>
HRESULT MTPIPGetConnectionData(MTPIPCONNECTIONINFO *pCI);

/// <summary>
/// Allow or reject a specific connection
/// </summary>
/// <returns>
///        <list type="table">
///            <item>
///                <term>S_OK</term>
///                <description>Connection has been successfully allowed or rejected.</description>
///            </item>
///            <item>
///                <term>E_PENDING</term>
///                <description>No notification event registered. Call MTPIPRegisterConnectionNotification first.</description>
///            </item>
///            <item>
///                <term>E_FAIL</term>
///                <description>Internal error.</description>
///            </item>
///        </list>
/// </returns>
/// <param name = DWORD dwNonce>Connection nonce from the MTPIPCONNECTIONINFO structure.</param>
/// <param name = BOOL fAuthorize>TRUE to allow, FALSE to reject.</param>
HRESULT MTPIPAuthorizeConnection(DWORD dwNonce, BOOL fAuthorize);
