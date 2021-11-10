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
#ifndef _PROXYDBS_H_
#define _PROXYDBS_H_

#ifdef __cplusplus
extern "C" {
#endif

//
// Proxy Information Data Structures
//

// Version information
const DWORD PS_CURRENT_VERSION = 1;
const DWORD PS_CONNNAME_LEN = 64;

// String max length (excluding the null terminator).
//
// These values are only used in the call to PsSetProxy()
// as guidance to the clients about how much the buffer
// should be. The PsSetProxy() funciton will check that
// the input strings do not exceed the max limits.
// These values are NOT used in the call to PsGetProxy(),
// since the PsGetProxy() funciton will allocate the needed
// buffer for the clients.
//
const unsigned long PS_SERVER_MAXLEN = 256;
const unsigned long PS_FRIENDLYNAME_MAXLEN = 64;
const unsigned long PS_USERNAME_MAXLEN = 128;
const unsigned long PS_PASSWORD_MAXLEN = 128;
const unsigned long PS_EXCEPTION_MAXLEN = 1024;
const unsigned long PS_EXTRAINFO_MAXLEN = 1024;

// Proxy type definition
typedef enum _PS_PROXYTYPE
{
    PS_PROXYTYPE_NULL = 0,
    PS_PROXYTYPE_HTTP = 1,
    PS_PROXYTYPE_WAP = 2,
    PS_PROXYTYPE_SOCKS4 = 4,
    PS_PROXYTYPE_SOCKS5 = 5
} PS_PROXYTYPE;

// This enum indicate whether the PROXY_INFO data structure
// contains the 'CONFIG' information or the 'SCRIPT' information.
typedef enum _PS_INFOSWTICH
{
    PS_INFOSWITCH_CONFIG    = 0,
    PS_INFOSWITCH_SCRIPT    = PS_INFOSWITCH_CONFIG + 1
} PS_INFOSWITCH;

// This enum can be ORed to form the 'Flags' field of PROXY_INFO.
typedef enum _PS_INFOFLAG
{
    PS_INFOFLAG_DISABLED  = 0x1 << 0,
    PS_INFOFLAG_BYPASSLOCAL   = 0x1 << 1
} PS_INFOFLAG;

typedef struct _PS_PROXYINFO
{
    DWORD Version;
    WCHAR *pszFriendlyName;
    DWORD Flags;
    PS_INFOSWITCH InfoSwitch;
    union 
    {
        struct 
        {
            WCHAR *pszServer;
            WCHAR *pszUsername;
            WCHAR *pszPassword;
            WCHAR *pszException;
            WCHAR *pszExtraInfo;
            WORD Port;
        };
        struct 
        {
            WCHAR *pszScript;
        };
    };
}PS_PROXYINFO;

typedef struct _PS_PROXYELEMENT
{
    PS_PROXYTYPE Type;
    PS_PROXYINFO Info;
} PS_PROXYELEMENT;

typedef struct _PS_PROXYLIST
{
    DWORD Size;
    PS_PROXYELEMENT *Proxies;
} PS_PROXYLIST;

typedef struct _PS_CONNNAME
{
    WCHAR szConnName[PS_CONNNAME_LEN];
} PS_CONNNAME;

typedef struct _PS_CONNNAMELIST
{
    DWORD Size;
    PS_CONNNAME *Names;
} PS_CONNNAMELIST;

//
// Proxy Service Client Dll APIs
//

//! Initialize the Proxy client API.
//! This function must be called before calling any other API functions.
//! Each successfuly call to PsInit() must be balanced by a corresponding
//! PsDeInit() call to completely cleanup the Proxy client API.
//!
//! Returns:
//!     ERROR_SUCCESS: if successful
//!     RPC error code: to indicate RPC status
//!
DWORD PsInit();

//! Cleanup the Proxy client API.
//! This function must be called after all API functions are done.
//!
//! Returns:
//!     ERROR_SUCCESS: if successful
//!     RPC error code: to indicate RPC status
//!
DWORD PsDeInit();

//! Get the proxy information for a type in a connection.
//! Need to call PsFreeGetProxy() after a successful call to PsGetProxy().
//!
//! Returns:
//!     ERROR_SUCCESS: if successful
//!     ERROR_INVALID_PARAMETER: invalid parameter (NULL)
//!     ERROR_FILE_NOT_FOUND: the proxy does not exist
//!     ERROR_OUTOFMEMORY: out of memory
//!     RPC error code: to indicate RPC status
//!
DWORD PsGetProxy(
    __in const WCHAR* pszConnectionName,
    __in const PS_PROXYTYPE Type,
    __out PS_PROXYINFO* pProxyInfo);

//! Free the memory allocated during call to PsGetProxy().
//! This will clear Struce (*pProxyInfo) to all 0 at exit.
//!
//! Returns:
//!     ERROR_SUCCESS: if successful
//!     ERROR_INVALID_PARAMETER: invalid parameter (NULL)
//!
DWORD PsFreeGetProxy(
    __inout PS_PROXYINFO* pProxyInfo);

//! Set the proxy information for a type in a connection.
//! If there is no proxy for the specified type in the
//! connection before, this will add the proxy; otherwise,
//! this will replace the old proxy.
//!
//! The 'pszFriendlyName' field of PS_PROXYINFO struct needs
//! to be unique, or you can make it NULL or empty string.
//! If no pszFriendlyName is specified (NULL or empty string),
//! a unique name will be automatically generated.
//!
//! Returns:
//!     ERROR_SUCCESS: if successful
//!     ERROR_INVALID_PARAMETER: invalid parameter (NULL or invalid 'Version' field)
//!     ERROR_DUP_NAME: the 'pszFriendlyName' of PS_PROXYINFO is not unique.
//!     RPC error code: to indicate RPC status
//!
DWORD PsSetProxy(
    __in const WCHAR* pszConnectionName,
    __in const PS_PROXYTYPE Type,
    __in const PS_PROXYINFO* pProxyInfo);

//! Get all types of proxies in one connection.
//! If no items are found, it will return success with an empty list.
//! Need to call PsFreeGetProxyList() after a successful call to PsGetProxyList().
//!
//! Returns:
//!     ERROR_SUCCESS: if successful
//!     ERROR_INVALID_PARAMETER: invalid parameter (NULL)
//!     ERROR_OUTOFMEMORY: out of memory
//!     RPC error code: to indicate RPC status
//!
DWORD PsGetProxyList(
    __in const WCHAR* pszConnectionName,
    __out PS_PROXYLIST* pList);

//! Free the memory allocated during call to PsGetProxyList().
//! This will clear structure (*pList) to all 0 at exit.
//!
//! Returns:
//!     ERROR_SUCCESS: if successful
//!     ERROR_INVALID_PARAMETER: invalid parameter (NULL)
//!
DWORD PsFreeGetProxyList(
    __inout PS_PROXYLIST* pList);

//! Delete the proxy for a specific type in a connection.
//!
//! Returns:
//!     ERROR_SUCCESS: if successful
//!     ERROR_INVALID_PARAMETER: invalid parameter (NULL)
//!     ERROR_FILE_NOT_FOUND: the proxy does not exist
//!     RPC error code: to indicate RPC status
//!
DWORD PsDelProxy(
    __in const WCHAR* pszConnectionName,
    __in const PS_PROXYTYPE Type);

//! Get the names of all connections that have proxies associated with them.
//! If no items are found, it will return success with an empty list.
//! Need to call PsFreeGetConnNameList() after a successful call to PsGetConnNameList().
//!
//! Returns:
//!     ERROR_SUCCESS: if successful
//!     ERROR_INVALID_PARAMETER: invalid parameter (NULL)
//!     ERROR_OUTOFMEMORY: out of memory
//!     RPC error code: to indicate RPC status
//!
DWORD PsGetConnNameList(
    __out PS_CONNNAMELIST* pList);

//! Free the memory allocated during call to PsGetConnNameList().
//! This will clear structure (*pList) to all 0 at exit.
//!
//! Returns:
//!     ERROR_SUCCESS: if successful
//!     ERROR_INVALID_PARAMETER: invalid parameter (NULL)
//!
DWORD PsFreeGetConnNameList(
    __inout PS_CONNNAMELIST* pList);

#ifdef __cplusplus
}
#endif

#endif  // _PROXYDBS_H_
