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

#include <CmNet.h>
#include <l2cmn.h>

// {8568B401-858E-4b7b-B3DF-0FD4927F131B}
static const CM_CONNECTION_TYPE  CM_CSP_WIFI_TYPE = 
{ 0x8568b401, 0x858e, 0x4b7b, {0xb3, 0xdf, 0xf, 0xd4, 0x92, 0x7f, 0x13, 0x1b} };

//
// The WiFi device type.
//
DEFINE_GUID(CMCD_WIFI,      0x3ad5e5a6, 0x6448, 0x4273, 0xa2, 0x65, 0xa5, 0xe7, 0x9e, 0x38, 0x52, 0xf6); // {3AD5E5A6-6448-4273-A265-A5E79E3852F6}

//
// Supported WiFi network types.
//
DEFINE_GUID(CMCN_WIFI_UNKNOWN,        0x334fe23f, 0x115, 0x450c, 0x86, 0xba, 0x64, 0xf9, 0x5e, 0xb6, 0x7d, 0xd8); // {334FE23F-0115-450c-86BA-64F95EB67DD8}
DEFINE_GUID(CMCN_WIFI_802_11_G,       0x151ee71b, 0xa534, 0x449f, 0x97, 0xa0, 0xd, 0x2c, 0x5f, 0x8, 0xbf, 0xfb);  // {151EE71B-A534-449f-97A0-0D2C5F08BFFB}
DEFINE_GUID(CMCN_WIFI_802_11_B,       0x85703fb, 0xa93c, 0x4d78, 0xa3, 0x64, 0xa1, 0xb6, 0xe9, 0xd6, 0x88, 0x26); // {085703FB-A93C-4d78-A364-A1B6E9D68826}
DEFINE_GUID(CMCN_WIFI_802_11_A,       0x2a1150a4, 0x7dc3, 0x4e91, 0xaa, 0x8, 0xc4, 0xe2, 0x71, 0x67, 0x4f, 0x7b); // {2A1150A4-7DC3-4e91-AA08-C4E271674F7B}
DEFINE_GUID(CMCN_WIFI_802_11_N,       0xd4ada027, 0x8907, 0x4b17, 0x9e, 0x39, 0xd4, 0x4b, 0xad, 0xe1, 0xfc, 0x12); //{d4ada027-8907-4b17-9e39-d44bade1fc12}
DEFINE_GUID(CMCN_WIFI_DSSS,           0xf33fafce, 0x77b8, 0x4c1e, 0xba, 0x9a, 0x73, 0x38, 0x35, 0x18, 0x47, 0xc4); //{f33fafce-77b8-4c1e-ba9a-7338351847c4}
DEFINE_GUID(CMCN_WIFI_FSSS,           0x991241c6, 0x01cc, 0x42cf, 0x8c, 0x07, 0x0d, 0x97, 0x07, 0x94, 0x96, 0xca); //{991241c6-01cc-42cf-8c07-0d97079496ca}
DEFINE_GUID(CMCN_WIFI_IR_BASEBAND,    0x44a769df, 0x9d5e, 0x426f, 0xa0, 0x1d, 0xc0, 0x45, 0x69, 0xf3, 0x6d, 0x0e); //{44a769df-9d5e-426f-a01d-c04569f36d0e}

// {C54DC729-87FA-48da-A1B5-479E209D9752}
static const RM_RESOURCE_ID RM_WIFI_RESOURCE_ID = 
{ 0xc54dc729, 0x87fa, 0x48da, { 0xa1, 0xb5, 0x47, 0x9e, 0x20, 0x9d, 0x97, 0x52 } };

//
// The following data structure describes the format of type specific configuration
// data used by CSPWIFI.
//
#define CSP_WIFI_SPECIFIC_INFO_VERSION  1

struct CspWiFiSpecificInfo
{
    DWORD   Version;            // Version of this type specific info
    BOOL    InterfaceSpecific;  // Indicates if config is adapter-specific
    GUID    InterfaceGuid;      // Must be supplied if InterfaceSpecific is TRUE. Ignored otherwise
    DWORD   cbUserDataOffset;   // Start location of EAP User XML inside DevConfigXml, equal to ceDevConfig if no eap user xml
    DWORD   cbDevConfig;        // Size in bytes of DevConfigXml buffer
    BYTE    DevConfigXml[1];    // Variable length array containing connection profile in WLAN XML form
};

// Type of CspWiFi information can be retrived by application  
#define CSP_WIFI_PROFILE_NAME  1

struct CspWiFiProfileName
{
    WCHAR   szProfileName[L2_PROFILE_MAX_NAME_LENGTH];
};
