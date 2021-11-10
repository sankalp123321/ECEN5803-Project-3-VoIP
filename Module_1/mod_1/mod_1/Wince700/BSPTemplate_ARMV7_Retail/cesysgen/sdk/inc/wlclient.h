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

#ifndef __WLCLIENT_H__
#define __WLCLIENT_H__

#pragma once

#ifndef __WINDOT11_H__
#include <windot11.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif



typedef struct _DOT11_ADAPTER {
    GUID gAdapterId;
#ifdef __midl
    [string] LPWSTR pszDescription;
#else
    LPWSTR pszDescription;
#endif
    DOT11_CURRENT_OPERATION_MODE Dot11CurrentOpMode;
} DOT11_ADAPTER, * PDOT11_ADAPTER;





typedef struct _DOT11_BSS_LIST {
    ULONG uNumOfBytes;
#ifdef __midl
    [size_is(uNumOfBytes)] PUCHAR pucBuffer;
#else
    __field_ecount_opt(uNumOfBytes) PUCHAR pucBuffer;
#endif
} DOT11_BSS_LIST, * PDOT11_BSS_LIST;





typedef struct _DOT11_PORT_STATE {
    DOT11_MAC_ADDRESS PeerMacAddress;   // Unicast mac address of the peer
    ULONG uSessionId;
    BOOL bPortControlled;               // TRUE, if the port is controlled by Security Module
    BOOL bPortAuthorized;               // TRUE, if the port is authorized for data packets
} DOT11_PORT_STATE, * PDOT11_PORT_STATE;




#include <packon.h>
typedef struct _DOT11_SECURITY_PACKET_HEADER {
    DOT11_MAC_ADDRESS PeerMac;
    USHORT usEtherType;
    UCHAR Data[1];
} DOT11_SECURITY_PACKET_HEADER, * PDOT11_SECURITY_PACKET_HEADER;
#include <packoff.h>


#ifdef __cplusplus
}
#endif

#endif // __WLCLIENT_H__

