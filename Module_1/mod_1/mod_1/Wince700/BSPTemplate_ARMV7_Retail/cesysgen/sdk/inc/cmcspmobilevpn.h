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

#ifndef _CmCspMobileVpn_h_
#define _CmCspMobileVpn_h_

#include <CmNet.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#define CM_CONST(name, value) \
        const DWORD name = DWORD(value)
#else
#define CM_CONST(name, value) \
        enum { name = value }
#endif

//
// The Mobile VPN CSP version
//
CM_CONST(CM_CSP_MOBILEVPN_CURRENT_VERSION, 1);

//
// A fixed Mobile VPN connection name, any use of other connection name for Mobile VPN type will be rejected.
//
static const TCHAR CM_CSP_MOBILEVPN_CONNECTION[] = TEXT("{E17DCB4B-30D5-4484-B429-519403826D3F}");

//
// Defining a Mobile VPN type
//
// {D08E2B6A-419C-4225-ACE9-A990EE6184CF}
static const CM_CONNECTION_TYPE CM_CSP_MOBILEVPN_TYPE = 
{ 0xd08e2b6a, 0x419c, 0x4225, { 0xac, 0xe9, 0xa9, 0x90, 0xee, 0x61, 0x84, 0xcf } };

//
// The Mobile VPN network type.
//
DEFINE_GUID(CMCN_VIRTUAL_VPN_MOBILE,  0x5eb0a246, 0x46df, 0x4d13, 0xb1, 0x5e, 0xcd, 0xc1, 0x42, 0x19, 0xbe, 0xd6); // {5EB0A246-46DF-4d13-B15E-CDC14219BED6}

//
// Mobile VPN Key exchange types
//
enum CM_CSP_MOBILEVPN_KEY_EXCHANGE_ALGORITHMS
{
    CM_CSP_MOBILEVPN_KEY_EXCHANGE_DH_GROUP_2      = 0x00000002,
    CM_CSP_MOBILEVPN_KEY_EXCHANGE_DH_GROUP_5      = 0x00000004,
    CM_CSP_MOBILEVPN_KEY_EXCHANGE_DH_GROUP_14     = 0x00000008,
    CM_CSP_MOBILEVPN_KEY_EXCHANGE_DH_GROUP_15     = 0x00000010,
    CM_CSP_MOBILEVPN_KEY_EXCHANGE_DH_GROUP_16     = 0x00000020
};

//
// Mobile VPN Data encryption types
//
enum CM_CSP_MOBILEVPN_DATA_ENCRYPTION_ALGORITHMS
{
    CM_CSP_MOBILEVPN_DATA_ENCRYPTION_3DES      = 0x00000010,
    CM_CSP_MOBILEVPN_DATA_ENCRYPTION_AES       = 0x00000020
};


//
// The following are the suggested default value for Mobile VPN connection.
// These values are used in the Mobile VPN Configuration Service Provider as well.
//

static ULONG const CM_CSP_MOBILEVPN_DEFAULT_KEY_EXCHANGE_ALGORITHMS =
    CM_CSP_MOBILEVPN_KEY_EXCHANGE_DH_GROUP_2 |
    CM_CSP_MOBILEVPN_KEY_EXCHANGE_DH_GROUP_5 |
    CM_CSP_MOBILEVPN_KEY_EXCHANGE_DH_GROUP_14|
    CM_CSP_MOBILEVPN_KEY_EXCHANGE_DH_GROUP_15|
    CM_CSP_MOBILEVPN_KEY_EXCHANGE_DH_GROUP_16;

static ULONG const CM_CSP_MOBILEVPN_DEFAULT_DATA_ENCRYPTION_ALGORITHMS =
    CM_CSP_MOBILEVPN_DATA_ENCRYPTION_3DES |
    CM_CSP_MOBILEVPN_DATA_ENCRYPTION_AES;

static BOOL const CM_CSP_MOBILEVPN_DEFAULT_USER_SWITCHABLE = TRUE;
static BOOL const CM_CSP_MOBILEVPN_DEFAULT_WWAN_ROAMING_KEEPALIVE = FALSE;
static BOOL const CM_CSP_MOBILEVPN_DEFAULT_WWAN_CONNECTION_FAILOVER = TRUE;
static BOOL const CM_CSP_MOBILEVPN_DEFAULT_WLAN_CONNECTION_FAILOVER = TRUE;
static BOOL const CM_CSP_MOBILEVPN_DEFAULT_ENABLE = TRUE;

static ULONG const CM_CSP_MOBILEVPN_DEFAULT_NAT_KEEPALIVE_INTERVAL = 0;
static ULONG const CM_CSP_MOBILEVPN_DEFAULT_NON_NAT_KEEPALIVE_INTERVAL = 1680;   // 28 minutes
static ULONG const CM_CSP_MOBILEVPN_DEFAULT_IKESA_LIFETIME = 26280;    // 7.3 hours
static ULONG const CM_CSP_MOBILEVPN_DEFAULT_IPSECSA_LIFETIME = 21600;  // 6 hours

CM_CONST(CM_CSP_MOBILEVPN_STRING_LENGTH, 256);
CM_CONST(CM_CSP_MOBILEVPN_CTL_HASH_LENGTH, 41); // single SHA1 + null terminated char


//
// represent a position in the config existence bitmask of every config parameter.
//
typedef enum 
{
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_NONE                       = 0x0,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_IKASALIFETIME              = 0x00000001,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_IPSECSALIFETIME            = 0x00000002,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_NONNATKEEPALIVEINTERVAL    = 0x00000004,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_NATKEEPALIVEINTERVAL       = 0x00000008,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_KEYEXCHANGEALGORITHMS      = 0x00000010,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_DATAENCRYPTIONALGORITHMS   = 0x00000020,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_SERVERNAME                 = 0x00000040,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_CLIENTCERTSEARCHCRITERIA   = 0x00000080,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_CTLHASH                    = 0x00000100,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_WWANCONNECTION             = 0x00000200,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_WLANCONNECTION             = 0x00000400,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_USERSWITCHABLE             = 0x00000800,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_WWANROAMINGKEEPALIVE       = 0x00001000,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_WWANCONNECTIONFAILOVER     = 0x00002000,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_WLANCONNECTIONFAILOVER     = 0x00004000
} CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_EXISTENCE_BITMASK;

//
// Internal used Macro, it is highly recommended to use method call such as
// CmCspMobileVpnDoesConfigParamExist, CmCspMobileVpnUnsetConfigParamExist, CmCspMobileVpnSetConfigParamExist
// instead.
//
#define CM_CSP_MOBILEVPN_DOES_CONFIG_PARAM_EXIST(_bitmaskConfig_, _paramIndex_) (_bitmaskConfig_ & _paramIndex_)
#define CM_CSP_MOBILEVPN_MARK_CONFIG_PARAM_NOT_EXIST(_bitmaskConfig_, _paramIndex_) (_bitmaskConfig_ &= (~_paramIndex_))
#define CM_CSP_MOBILEVPN_MARK_CONFIG_PARAM_EXIST(_bitmaskConfig_, _paramIndex_) (_bitmaskConfig_ |= _paramIndex_)


//
// This data structure describes the format of type specific configuration
// data used by MobileVPN CSP. (these are "input" of VPN)
//
typedef struct CM_CSP_MOBILEVPN_SPECIFIC_CONFIG
{
    DWORD   dwVersion;
#define CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_VERSION_1  1
    DWORD   dwBitMaskConfigParamExistence;
    DWORD   dwBitMaskKeyExchangeExistence;
    DWORD   dwBitMaskDataEncryptionExistence;
    DWORD   dwIKESALifetime;
    DWORD   dwIPSecSALifetime;
    DWORD   dwNonNATKeepAliveInterval;
    DWORD   dwNATKeepAliveInterval;
    DWORD   dwKeyExchangeAlgorithms;
    DWORD   dwDataEncryptionAlgorithms;
    WCHAR   wszServerName[CM_CSP_MOBILEVPN_STRING_LENGTH];
    WCHAR   wszClientCertSearchCriteria[CM_CSP_MOBILEVPN_STRING_LENGTH];
    WCHAR   wszCTLHash[CM_CSP_MOBILEVPN_CTL_HASH_LENGTH];
    WCHAR   wszWWANConnection[CM_CSP_MOBILEVPN_STRING_LENGTH];
    WCHAR   wszWLANConnection[CM_CSP_MOBILEVPN_STRING_LENGTH];
    BOOL    fUserSwitchable;
    BOOL    fWWANRoamingKeepalive;
    BOOL    fWWANConnectionFailover;
    BOOL    fWLANConnectionFailover;
} CM_CSP_MOBILEVPN_SPECIFIC_CONFIG;

//
// This data structure describes the format of type specific inforamtion
// data used by MobileVPN CSP. (these are "output" of VPN)
//
typedef struct CM_CSP_MOBILEVPN_SPECIFIC_INFO
{
    DWORD   dwVersion;
#define CM_CSP_MOBILEVPN_SPECIFIC_INFO_VERSION_1    1
    DWORD   dwReserved1;
    DWORD   dwReserved2;
    DWORD   dwReserved3;
    DWORD   dwReserved4;
    DWORD   dwKeepAliveInterval;
    WCHAR   wszBaseConnectionName[CM_CONNECTION_NAME_LENGTH];
    SOCKADDR_STORAGE    saGatewayAddr;
} CM_CSP_MOBILEVPN_SPECIFIC_INFO;


//
// The following methods are used to check/set/unset the config parameter existence bitmask.
//

//
// This method to check if a parameter in the MobileVPN config structure
// existed or not.
//
FORCEINLINE BOOL CmCspMobileVpnDoesConfigParamExist(
    const CM_CSP_MOBILEVPN_SPECIFIC_CONFIG* pConfigInfo,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_EXISTENCE_BITMASK eConfigParam)
{
    ASSERT(pConfigInfo);
    if (eConfigParam != CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_NONE)
    {
        return CM_CSP_MOBILEVPN_DOES_CONFIG_PARAM_EXIST(pConfigInfo->dwBitMaskConfigParamExistence, eConfigParam);
    }
    return TRUE;
}

//
// This method to unset the existence bit of a parameter. It is expected to be called
// after a MobileVPN config parameter has been removed.
//
FORCEINLINE void CmCspMobileVpnUnsetConfigParamExist(
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG* pConfigInfo,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_EXISTENCE_BITMASK eConfigParam)
{
    ASSERT(pConfigInfo);
    if (eConfigParam != CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_NONE)
    {
        CM_CSP_MOBILEVPN_MARK_CONFIG_PARAM_NOT_EXIST(pConfigInfo->dwBitMaskConfigParamExistence, eConfigParam);
    }
}

//
// This method to set the existence bit of a parameter. It is expected to be called
// when a MobileVPN config parameter is add/set.
//
FORCEINLINE void CmCspMobileVpnSetConfigParamExist(
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG* pConfigInfo,
    CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_EXISTENCE_BITMASK eConfigParam)
{
    ASSERT(pConfigInfo);
    if (eConfigParam != CM_CSP_MOBILEVPN_SPECIFIC_CONFIG_NONE)
    {
        CM_CSP_MOBILEVPN_MARK_CONFIG_PARAM_EXIST(pConfigInfo->dwBitMaskConfigParamExistence, eConfigParam);
    }
}

#ifdef __cplusplus
}
#endif

#endif // _CmCspMobileVpn_h_
