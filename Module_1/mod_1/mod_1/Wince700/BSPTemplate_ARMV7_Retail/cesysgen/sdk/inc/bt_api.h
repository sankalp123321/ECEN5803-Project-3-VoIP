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
//------------------------------------------------------------------------------
// 
//      Bluetooth client API declarations
// 
// 
// Module Name:
// 
//      bt_api.h
// 
// Abstract:
// 
//      This file defines client-level APIs to Bluetooth stack
// 
// 
//------------------------------------------------------------------------------
//
//Blietooth client API
//

#pragma once

#if ! defined (__bt_api_H__)
#define __bt_api_H__        1

#include <windows.h>
#include <ws2bth.h>
#include <winioctl.h>

#if defined (__cplusplus)
extern "C" {
#endif

//
//      COD classes
//

#define GET_MAJOR_SERVICE_COD(dwCOD)                            (dwCOD & 0x00FFE000) //bits 13-23
#define BTH_COD_MAJOR_SERVICE_CLASS_INFORMATION                 0x00800000
#define BTH_COD_MAJOR_SERVICE_CLASS_TELEPHONY                   0x00400000
#define BTH_COD_MAJOR_SERVICE_CLASS_AUDIO                       0x00200000
#define BTH_COD_MAJOR_SERVICE_CLASS_OBEX                        0x00100000
#define BTH_COD_MAJOR_SERVICE_CLASS_CAPTURE                     0x00080000
#define BTH_COD_MAJOR_SERVICE_CLASS_RENDERING                   0x00040000
#define BTH_COD_MAJOR_SERVICE_CLASS_NETWORK                     0x00020000
#define BTH_COD_MAJOR_SERVICE_CLASS_POSITIONING                 0x00010000
#define BTH_COD_MAJOR_SERVICE_CLASS_LIMITED_DISC                0x00002000

#define GET_MAJOR_DEVICE_COD(dwCOD)                             (dwCOD & 0x00001F00) //bits 8-12
#define BTH_COD_MAJOR_DEVICE_CLASS_MISC                         0x00000000
#define BTH_COD_MAJOR_DEVICE_CLASS_COMPUTER                     0x00000100
#define BTH_COD_MAJOR_DEVICE_CLASS_PHONE                        0x00000200
#define BTH_COD_MAJOR_DEVICE_CLASS_LAP                          0x00000300
#define BTH_COD_MAJOR_DEVICE_CLASS_AV                           0x00000400
#define BTH_COD_MAJOR_DEVICE_CLASS_PERIPHERAL                   0x00000500
#define BTH_COD_MAJOR_DEVICE_CLASS_IMAGING                      0x00000600
#define BTH_COD_MAJOR_DEVICE_CLASS_UNCLASSIFIED                 0x00001F00

#define GET_MINOR_COMPUTER_COD(dwCOD)                           (dwCOD & 0x000000FC) //bits 2-7
#define BTH_COD_MINOR_COMPUTER_UNCLASSIFIED         0x00000000
#define BTH_COD_MINOR_COMPUTER_DESKTOP              0x00000004
#define BTH_COD_MINOR_COMPUTER_SERVER               0x00000008
#define BTH_COD_MINOR_COMPUTER_LAPTOP               0x0000000C
#define BTH_COD_MINOR_COMPUTER_HANDHELD                         0x00000010
#define BTH_COD_MINOR_COMPUTER_PDA                              0x00000014
#define BTH_COD_MINOR_COMPUTER_WEARABLE                         0x00000018

#define GET_MINOR_PHONE_COD(dwCOD)                              (dwCOD & 0x000000FC) //bits 2-7
#define BTH_COD_MINOR_PHONE_UNCLASSIFIED                        0x00000000
#define BTH_COD_MINOR_PHONE_CELL                                0x00000004
#define BTH_COD_MINOR_PHONE_CORDLESS                            0x00000008
#define BTH_COD_MINOR_PHONE_SMART                               0x0000000C
#define BTH_COD_MINOR_PHONE_WIRED                               0x00000010
#define BTH_COD_MINOR_PHONE_ISDN                                0x00000014

#define GET_MINOR_LAP_COD(dwCOD)                                (dwCOD & 0x000000E0) //bits 5-7
#define BTH_COD_MINOR_LAP_AVAILABLE                             0x00000000
#define BTH_COD_MINOR_LAP_1_17                                  0x00000020
#define BTH_COD_MINOR_LAP_17_33                                 0x00000040
#define BTH_COD_MINOR_LAP_33_50                                 0x00000060
#define BTH_COD_MINOR_LAP_50_67                                 0x00000080
#define BTH_COD_MINOR_LAP_67_83                                 0x000000A0
#define BTH_COD_MINOR_LAP_83_99                                 0x000000C0
#define BTH_COD_MINOR_LAP_NO_SERVICE                            0x000000E0

#define GET_MINOR_AV_COD(dwCOD)                                 (dwCOD & 0x000000FC) //bits 2-7
#define BTH_COD_MINOR_AV_UNCLASSIFIED                           0x00000000
#define BTH_COD_MINOR_AV_HEADSET                                0x00000004
#define BTH_COD_MINOR_AV_HANDSFREE                              0x00000008
// reserved                                                     0x0000000C
#define BTH_COD_MINOR_AV_MICROPHONE                             0x00000010
#define BTH_COD_MINOR_AV_LOUDSPEAKER                            0x00000014
#define BTH_COD_MINOR_AV_HEADPHONE                              0x00000018
#define BTH_COD_MINOR_AV_PORTABLE                               0x0000001C
#define BTH_COD_MINOR_AV_CAR                                    0x00000020
#define BTH_COD_MINOR_AV_SETTOP                                 0x00000024
#define BTH_COD_MINOR_AV_HIFI                                   0x00000028
#define BTH_COD_MINOR_AV_VCR                                    0x0000002C
#define BTH_COD_MINOR_AV_CAMERA                                 0x00000030
#define BTH_COD_MINOR_AV_CAMCORDER                              0x00000034
#define BTH_COD_MINOR_AV_DISPLAY                                0x00000038
#define BTH_COD_MINOR_AV_DISPLAYSPEAKER                         0x0000003C
#define BTH_COD_MINOR_AV_CONFERENCING                           0x00000040
// reserved                                                     0x00000044
#define BTH_COD_MINOR_AV_GAMING                                 0x00000048

#define GET_MINOR_FN_PERIPHERAL_COD(dwCOD)                      (dwCOD & 0x0000003C) //bits 2-5
#define BTH_COD_MINOR_FN_PERIPHERAL_UNCLASSIFIED                0x00000000
#define BTH_COD_MINOR_FN_PERIPHERAL_JOYSTICK                    0x00000004
#define BTH_COD_MINOR_FN_PERIPHERAL_GAMEPAD                     0x00000008
#define BTH_COD_MINOR_FN_PERIPHERAL_REMOTE                      0x0000000C
#define BTH_COD_MINOR_FN_PERIPHERAL_SENSING                     0x00000010
#define BTH_COD_MINOR_FN_PERIPHERAL_TABLET                      0x00000014
#define BTH_COD_MINOR_FN_PERIPHERAL_CARDREADER                  0x0000001C

#define GET_MINOR_PERIPHERAL_COD(dwCOD)                         (dwCOD & 0x000000C0) //bits 6-7
#define BTH_COD_MINOR_PERIPHERAL_KEYBOARD                       0x00000040
#define BTH_COD_MINOR_PERIPHERAL_POINTING                       0x00000080
#define BTH_COD_MINOR_PERIPHERAL_COMBO                          0x000000C0

#define GET_MINOR_FN_IMAGING_COD(dwCOD)                         (dwCOD & 0x000000F0) //bits 4-7
#define BTH_COD_MINOR_FN_IMAGING_DISPLAY                        0x00000010
#define BTH_COD_MINOR_FN_IMAGING_CAMERA                         0x00000020
#define BTH_COD_MINOR_FN_IMAGING_SCANNER                        0x00000040
#define BTH_COD_MINOR_FN_IMAGING_PRINTER                        0x00000080

// Defined for backwards compatibility
#define BTH_COD_MAJOR_DEVICE_CLASS_AUDIO                        BTH_COD_MAJOR_DEVICE_CLASS_AV
#define BTH_COD_MINOR_AUDIO_UNCLASSIFIED                        BTH_COD_MINOR_AV_UNCLASSIFIED
#define BTH_COD_MINOR_AUDIO_HEADSET                             BTH_COD_MINOR_AV_HEADSET

#define BTH_NAMEDEVENT_PAIRING_CHANGED              L"system/events/bluetooth/PairingChange"
#define BTH_NAMEDEVENT_HARDWARE_CHANGED             L"system/events/bluetooth/HardwareChange"
#define BTH_NAMEDEVENT_DEVICEID_CHANGED             L"system/events/bluetooth/DeviceIdChange"
#define BTH_NAMEDEVENT_CONNECTIVITY_CHANGED         L"system/events/bluetooth/ConnectivityChange"
#define BTH_NAMEDEVENT_SECURITY_CHANGED             L"system/events/bluetooth/SecurityChange"
#define BTH_NAMEDEVENT_CONNECTIONS_CHANGED          L"system/events/bluetooth/ConnectionsChange"
#define BTH_NAMEDEVENT_BASEBAND_CHANGED             L"system/events/bluetooth/BasebandChange"
#define BTH_NAMEDEVENT_STACK_INITED                 L"system/events/bluetooth/StackInitialized"
#define BTH_NAMEDEVENT_PAN_REFRESH                  L"system/events/bluetooth/pan/refresh"

#define BTH_MAX_PIN_LENGTH  16

// Helpful macro for StringCchPrintf
#define STRING_AND_COUNTOF(s) (s), _countof(s)

#if ! defined (__bt_ddi_H__)
//
//  Attention: also defined in bt_ddi.h! Keep in sync!
//
//  Hardware Status
//
#define HCI_HARDWARE_UNKNOWN                            0
#define HCI_HARDWARE_NOT_PRESENT                        1
#define HCI_HARDWARE_INITIALIZING                       2
#define HCI_HARDWARE_RUNNING                            3
#define HCI_HARDWARE_SHUTDOWN                           4
#define HCI_HARDWARE_ERROR                              5

#define BTH_MIN_PIN_SIZE     1
#define BTH_MAX_PIN_SIZE    16
#define BTH_LINK_KEY_SIZE   16

#endif

#define BTH_GET_BASEBAND_CONNECTIONS_EX_API_VERSION      1

typedef struct _BASEBAND_CONNECTION
{
    USHORT      hConnection;
    BT_ADDR     baAddress;
    int         cDataPacketsPending;
    UINT        fLinkType       : 1;
    UINT        fEncrypted      : 1;
    UINT        fAuthenticated  : 1;
    UINT        fMode           : 3;
} BASEBAND_CONNECTION, *PBASEBAND_CONNECTION;

typedef struct _BASEBAND_CONNECTION_EX
{
    USHORT      hConnection;    
    BT_ADDR     baAddress;
    int         cDataPacketsPending;
    UCHAR       link_type;
    UCHAR       mode;
    UINT        fEncrypted      : 1;
    BOOL        fAuthenticated  : 1;
} BASEBAND_CONNECTION_EX, *PBASEBAND_CONNECTION_EX;


#define HCI_PAGE_SCAN_TYPE_STANDARD         0x00
#define HCI_PAGE_SCAN_TYPE_INTERLACED       0x01

#define HCI_INQUIRY_SCAN_TYPE_STANDARD      0x00
#define HCI_INQUIRY_SCAN_TYPE_INTERLACED    0x01


// Scan Enable bitmask
#define SCAN_ENABLE_INQUIRY 0x01
#define SCAN_ENABLE_PAGE    0x02

//
// Warning: To use the following Bth* APIs you must link to btdrt.lib.  
//          This library may or may not be available in your SDK.
//
// To preserve Win32 compatibility, consider using the Winsock equivalent 
// of these functions.
//

//
//  Management APIs
//
int BthWriteScanEnableMask
(
unsigned char   mask
);

int BthReadScanEnableMask
(
unsigned char   *pmask
);

int BthWritePageTimeout
(
unsigned short timeout
);

int BthReadPageTimeout
(
unsigned short *ptimeout
);

int BthWriteCOD
(
unsigned int    cod
);

int BthReadCOD
(
unsigned int    *pcod
);

int BthGetRemoteCOD
(
BT_ADDR         *pbt,
unsigned int    *pcod
);

int BthWriteAuthenticationEnable
(
unsigned char   ae
);

int BthReadAuthenticationEnable
(
unsigned char   *pae
);

int BthWriteLinkPolicySettings
(
BT_ADDR         *pba,
unsigned short  lps
);

int BthReadLinkPolicySettings
(
BT_ADDR         *pba,
unsigned short  *plps
);

int BthEnterHoldMode
(
BT_ADDR         *pba,
unsigned short  hold_mode_max,
unsigned short  hold_mode_min,
unsigned short  *pinterval
);

int BthEnterSniffMode
(
BT_ADDR         *pba,
unsigned short  sniff_mode_max,
unsigned short  sniff_mode_min,
unsigned short  sniff_attempt,
unsigned short  sniff_timeout,
unsigned short  *pinterval
);

int BthExitSniffMode
(
BT_ADDR         *pba
);

int BthSetSSRParameters
(
BT_ADDR         *pba,
unsigned short  ssr_max_latency,
unsigned short  ssr_min_remote_timeout,
unsigned short  ssr_min_local_timeout
);


int BthWriteLSTO
(
BT_ADDR            *pbt,
unsigned short    timeout
);

int BthReadLSTO
(
BT_ADDR            *pbt,
unsigned short    *ptimeout
);

int BthEnterParkMode
(
BT_ADDR         *pba,
unsigned short  beacon_max,
unsigned short  beacon_min,
unsigned short  *pinterval
);

int BthExitParkMode
(
BT_ADDR         *pba
);

int BthGetCurrentMode
(
BT_ADDR         *pba,
unsigned char   *pmode
);

int BthGetBasebandHandles
(
int             cHandles,
__out_ecount(cHandles) unsigned short   *pHandles,
int             *pcHandlesReturned
);

int BthGetBasebandConnections
(
int                 cConnections,
__out_ecount(cConnections) BASEBAND_CONNECTION  *pConnections,
int                 *pcConnectionsReturned
);

int BthGetBasebandConnectionsEx
(
DWORD dwApiVersion,
int cConnections,
__out_ecount(cConnections) BASEBAND_CONNECTION_EX *pConnections,
int *pcConnectionsReturned
);

int BthGetAddress
(
unsigned short  handle,
BT_ADDR         *pba
);

int BthReadLocalAddr
(
BT_ADDR         *pba
);

int BthGetHardwareStatus
(
int             *pistatus
);

int BthReadLocalVersion
(
unsigned char   *phci_version,
unsigned short  *phci_revision,
unsigned char   *plmp_version,
unsigned short  *plmp_subversion,
unsigned short  *pmanufacturer,
unsigned char   *plmp_features
);

int BthReadRemoteVersion
(
BT_ADDR         *pba,
unsigned char   *plmp_version,
unsigned short  *plmp_subversion,
unsigned short  *pmanufacturer,
unsigned char   *plmp_features
);

DWORD BthReadRemoteExtendedFeatures(
    __in  const BT_ADDR  *pba,
    __in  BYTE            PageNumber,
    __out BYTE            LMPFeatures[8]);

int BthPerformInquiry
(
unsigned int     LAP,
unsigned char    length,
unsigned char    num_responses,
unsigned int     cElems,
unsigned int     *pcDiscoveredDevices,
__out_ecount(cElems) BthInquiryResult *InquiryList
);

int 
BthStartInquiryAsync(
    UINT LAP,
    UCHAR length,
    UCHAR cNumResponses);

int BthCancelInquiry
(
void
);

int BthRemoteNameQuery
(
BT_ADDR         *pba,
unsigned int    ccBuffer,
unsigned int    *pcRequired,
__out_ecount(ccBuffer) WCHAR         *szString
);

int BthCancelRemoteNameQuery
(
BT_ADDR         *pba
);

int BthTerminateIdleConnections
(
void
);

int BthSetInquiryFilter
(
BT_ADDR         *pba
);

int BthSetCODInquiryFilter
(
 unsigned int cod,
 unsigned int codMask
);

int BthClearInquiryFilter
(
void
);

int BthSwitchRole
(
BT_ADDR* pbt,     
USHORT usRole     
);

int BthGetRole
(
BT_ADDR* pbt,     
USHORT* pusRole
);

int BthRefreshEncryptionKey
(
BT_ADDR* pbt   
);

int BthReadRSSI
(
BT_ADDR* pbt, 
BYTE* pbRSSI
);


//
//  Security manager APIs
//
int BthSetPIN
(
BT_ADDR         *pba,
int             cPinLength,
unsigned char   *ppin
);

int BthRevokePIN
(
BT_ADDR         *pba
);

int BthSetLinkKey
(
BT_ADDR         *pba,
unsigned char   key[16]
);

int BthGetLinkKey
(
BT_ADDR         *pba,
unsigned char   key[16]
);

int BthRevokeLinkKey
(
BT_ADDR         *pba
);

int BthAuthenticate
(
BT_ADDR         *pba
);

typedef enum BTSecurityLevel
{                           // Link key requirement (SSP / Pre-2.1):
    BTSecurityLevel_0 = 0,  // None             / None
    BTSecurityLevel_1,      // Unauthenticated  / None
    BTSecurityLevel_2,      // Unauthenticated  / Combination
    BTSecurityLevel_3       // Authenticated    / Combination 
} BTSecurityLevel;

typedef enum BTSSPBondingType
{
    BTSSPBonding_None = 0,
    BTSSPBonding_Dedicated = 1,
    BTSSPBonding_General = 2
} BTSSPBondingType;

//
//  BthAuthenticateEx is called to authenticate the connection to
//  the specified remote device to ensure that the link key meets
//  the required SecurityLevel.
//
//  If the current link key for the connection is sufficient to meet
//  the required SecurityLevel, then no new authentication will take place.
//
//  If a new link key is generated, then it will be saved for reuse
//  on subsequent connections to the remote device if PersistKey = TRUE.
//
DWORD 
BthAuthenticateEx(
    __in  const BT_ADDR             *pRemoteDevice,
    __in  const BTSecurityLevel      RequiredSecurityLevel,
    __in  const BTSSPBondingType     BondingType,
    __in  const BOOL                 PersistKey);


int BthSetEncryption
(
BT_ADDR         *pba,
int             fOn
);

int BthSetSecurityUI
(
HANDLE      hEvent,
DWORD       dwStoreTimeout,
DWORD       dwProcTimeout
);

int BthGetPINRequest
(
BT_ADDR *pbt
);

int BthRefusePINRequest
(
BT_ADDR *pbt
);

int BthAnswerPairRequest 
(
BT_ADDR *pba,
int cPinLength,
__in_bcount(cPinLength) unsigned char *ppin
);

int BthPairRequest 
(
BT_ADDR *pba,
int cPinLength,
__in_bcount(cPinLength) unsigned char *ppin
);

//
//  Connection APIs
//

int BthCreateACLConnection
(
BT_ADDR         *pbt,
unsigned short  *phandle
);

int BthCreateSCOConnection
(
BT_ADDR         *pbt,
unsigned short  *phandle
);

int BthCloseConnection
(
unsigned short  handle
);

int BthAcceptSCOConnections
(
BOOL fAccept
);

int BthWritePageScanActivity
(
unsigned short pageScanInterval,
unsigned short pageScanWindow
);

int BthWriteInquiryScanActivity
(
unsigned short inquiryScanInterval,
unsigned short inquiryScanWindow
);

int BthReadPageScanActivity
(
unsigned short* pPageScanInterval,
unsigned short* pPageScanWindow
);

int BthReadInquiryScanActivity
(
unsigned short* pInquiryScanInterval,
unsigned short* pInquiryScanWindow
);

int BthWritePageScanType
(
unsigned char pageScanType
);

int BthWriteInquiryScanType
(
unsigned char inquiryScanType
);

int BthReadPageScanType
(
unsigned char* pPageScanType
);

int BthReadInquiryScanType
(
unsigned char* pInquiryScanType
);

int BthCreateSynchronousConnection
(
BT_ADDR         *pbt,
unsigned short  *pHandle,
unsigned int    txBandwidth,
unsigned int    rxBandwidth,
unsigned short  maxLatency,
unsigned short  voiceSetting,
unsigned char   retransmit
);

int BthAcceptSynchronousConnections
(
BOOL fAccept
);

BOOL BthIsProfileAllowed
(
GUID uuidService
);

int
BthSetLocalEirRecord(
    BYTE cbLength,
    BYTE bDataType,
    PBYTE pData);

int
BthRemoveLocalEirRecord(    
    BYTE bDataType);

int
BthFindFirstEirRecord(
    __in BT_ADDR* pbta,
    __out PBYTE pcbLength,
    __out PBYTE pbDataType,
    __out PBYTE pData,
    __in DWORD cbDataBuffer,
    HANDLE* phFind);

int
BthFindNextEirRecord(
    __in HANDLE hFind,    
    __out PBYTE pcbLength,
    __out PBYTE pbDataType,
    __out PBYTE pData,
    __in DWORD cbDataBuffer);

int
BthFindEirRecordClose(
    __in HANDLE hFind);

int
BthGetEirRecord(
    __in BT_ADDR* pbta,
    __in BYTE bDataType,
    __out PBYTE pcbLength,
    __out PBYTE pData,
    __in DWORD cbDataBuffer);

//
//  SDP Name Service APIs
//
typedef struct _SdpAttributeRange SdpAttributeRange;
typedef struct _SdpQueryUuid      SdpQueryUuid;
typedef struct _WSAQuerySetW *LPWSAQUERYSET;
typedef enum _WSAESETSERVICEOP WSAESETSERVICEOP;


int BthNsSetService(LPWSAQUERYSET pSet, WSAESETSERVICEOP op, DWORD dwFlags);
int BthNsLookupServiceBegin(LPWSAQUERYSET pQuerySet, DWORD dwFlags, LPHANDLE lphLookup);
int BthNsLookupServiceNext(HANDLE hLookup, DWORD dwFlags, LPDWORD lpdwBufferLength, __out_bcount_opt(*lpdwBufferLength) LPWSAQUERYSET pResults);
int BthNsLookupServiceEnd(HANDLE hLookup);

//
//  RFCOMM Apis
//

//  PORTEMUPortParams.uiportflags bits:
#define RFCOMM_PORT_FLAGS_REMOTE_DCB         0x00000001
#define RFCOMM_PORT_FLAGS_KEEP_DCD           0x00000002
#define RFCOMM_PORT_FLAGS_AUTHENTICATE       0x00000004
#define RFCOMM_PORT_FLAGS_ENCRYPT            0x00000008

// If RFCOMM_PORT_FLAGS_USE_SECURITY_LEVEL is set, then
// RFCOMM_PORT_FLAGS_AUTHENTICATE is ignored and
// the security level (0-3) is defined by the 2 bits of RFCOMM_PORT_FLAGS_SECURITY_LEVEL.
#define RFCOMM_PORT_FLAGS_SECURITY_LEVEL_BITPOS 4
#define RFCOMM_PORT_FLAGS_SECURITY_LEVEL      0x00000070
#define RFCOMM_PORT_FLAGS_USE_SECURITY_LEVEL  0x00000080

#if ! defined (__bt_ddi_H__)
//
//  Attention: also defined in bt_ddi.h! Keep in sync!
//
//  channel:
//      RFCOMM_CHANNEL_ALL          accept connection on all channels (default upper layer)
//      RFCOMM_CHANNEL_CLIENT_ONLY  do not accept connections at all (client only)
//      ...or channel to restrict connections on
//
#define RFCOMM_CHANNEL_ALL          0x00
#define RFCOMM_CHANNEL_MULTIPLE     0xfe
#define RFCOMM_CHANNEL_CLIENT_ONLY  0xff
#endif

typedef struct _portemu_port_params {
    int             channel;
    int             flocal;
    BT_ADDR         device;
    int             imtu;
    int             iminmtu;
    int             imaxmtu;
    int             isendquota;
    int             irecvquota;
    GUID            uuidService;
    unsigned int    uiportflags;
} PORTEMUPortParams;

//  Bluetooth serial IOCTLs are cross-defined in pegdser.h to reserve spot there.
#define IOCTL_BLUETOOTH_GET_RFCOMM_CHANNEL  CTL_CODE(FILE_DEVICE_SERIAL_PORT,24,METHOD_BUFFERED,FILE_ANY_ACCESS)
#define IOCTL_BLUETOOTH_GET_PEER_DEVICE     CTL_CODE(FILE_DEVICE_SERIAL_PORT,25,METHOD_BUFFERED,FILE_ANY_ACCESS)

//
// Bluetooth COM port registration
//

HANDLE RegisterBluetoothCOMPort
(
LPCWSTR lpszType,           // "BSP" or "COM"
DWORD dwIndex,              // device index
PORTEMUPortParams* pParams  // BT specific params
);

BOOL DeregisterBluetoothCOMPort
(
HANDLE hDevice
);


//
// Bluetooth notification system
//

HANDLE RequestBluetoothNotifications
(
DWORD dwClass,  // class of notifications to register for
HANDLE hMsgQ    // message queue created by caller
);

BOOL StopBluetoothNotifications
(
HANDLE h        // Handle returned from RequestBluetoothNotifications
);

typedef struct _BTEVENT {
    DWORD dwEventId;        // Event ID    
    DWORD dwReserved;       // Reserved
    BYTE baEventData[64];   // Event Data
} BTEVENT, *PBTEVENT;

int BthNotifyEvent(PBTEVENT pbtEvent, DWORD dwEventClass);

//
// Bluetooth notification event classes
//
#define BTE_CLASS_CONNECTIONS   0x00000001
#define BTE_CLASS_PAIRING       0x00000002
#define BTE_CLASS_DEVICE        0x00000004
#define BTE_CLASS_STACK         0x00000008
#define BTE_CLASS_AVDTP         0x00000010
#define BTE_CLASS_PAN           0x00000020
#define BTE_CLASS_INQUIRY       0x00000040
#define BTE_CLASS_SSP           0x00000080
#define BTE_CLASS_SERVICE       0x00000100

//
// Bluetooth notification event identifiers
//

// Connection class
#define BTE_CONNECTION                      100
#define BTE_DISCONNECTION                   101
#define BTE_ROLE_SWITCH                     102
#define BTE_MODE_CHANGE                     103
#define BTE_PAGE_TIMEOUT                    104
#define BTE_CONNECTION_AUTH_FAILURE         105
#define BTE_SSR_EVENT                       106
// Pairing class
#define BTE_KEY_NOTIFY                      200
#define BTE_KEY_REVOKED                     201
// Device class
#define BTE_LOCAL_NAME                      300
#define BTE_COD                             301
#define BTE_SCAN_MODE                       302
// Stack class
#define BTE_STACK_UP                        400
#define BTE_STACK_DOWN                      401
#define BTE_WINSOCK_UP                      402
// AVDTP class
#define BTE_AVDTP_STATE                     500
// PAN class
#define BTE_PAN_CONNECTIONS                 600
// Inquiry class
#define BTE_INQUIRY_RESULT                  700
#define BTE_INQUIRY_COMPLETE                701
#define BTE_INQUIRY_CANCEL                  702
#define BTE_INQUIRY_STARTED                 703

// Service class
#define BTE_SERVICE_CONNECTION_REQUEST      900
#define BTE_SERVICE_DISCONNECTION_REQUEST   901
#define BTE_SERVICE_CONNECTION_EVENT        902
#define BTE_SERVICE_DISCONNECTION_EVENT     903

//
// Bluetooth notification data structures
// 

// Connection class data structures
typedef struct {
    DWORD dwSize;         // To keep track of version
    USHORT hConnection;   // Baseband connection handle
    BT_ADDR bta;          // Address of remote device
    UCHAR ucLinkType;     // Link Type (ACL/SCO)
    UCHAR ucEncryptMode;  // Encryption mode
} BT_CONNECT_EVENT, *PBT_CONNECT_EVENT;

typedef struct {
    DWORD dwSize;         // To keep track of version
    USHORT hConnection;   // Baseband connection handle
    UCHAR ucReason;       // Reason for disconnection
} BT_DISCONNECT_EVENT, *PBT_DISCONNECT_EVENT;

typedef struct {
    DWORD dwSize;         // To keep track of version
    BT_ADDR bta;          // Address of remote device
    UINT fRole : 1;       // New Role (master/slave)
} BT_ROLE_SWITCH_EVENT, *PBT_ROLE_SWITCH_EVENT;

typedef struct {
    DWORD dwSize;         // To keep track of version
    USHORT hConnection;   // Baseband connection handle
    BT_ADDR bta;          // Address of remote device
    BYTE bMode;           // Power mode (sniff, etc)
    USHORT usInterval;    // Power mode interval 
} BT_MODE_CHANGE_EVENT, *PBT_MODE_CHANGE_EVENT;

typedef struct {
    DWORD dwSize;         // To keep track of version
    USHORT hConnection;   // Baseband connection handle
    BT_ADDR bta;          // Address of remote device
    USHORT status;
    USHORT maximum_transmit_latency;
    USHORT maximum_receive_latency;
    USHORT minimum_remote_timeout;
    USHORT minimum_local_timeout;
} BT_SSR_EVENT, *PBT_SSRPARAM_CHANGE_EVENT;


// Pairing class data structures

typedef struct {
    DWORD dwSize;        // To keep track of version
    BT_ADDR bta;         // Address of remote device
    UCHAR link_key[16];  // Link key data
    UCHAR key_type;      // Link key type
} BT_LINK_KEY_EVENT, *PBT_LINK_KEY_EVENT;

// Device class data structures

typedef struct {
    DWORD dwSize;       // To keep track of version
    UCHAR scan_mode;    // Scan enable mask
} BT_SCAN_MODE_EVENT, *PBT_SCAN_MODE_EVENT;


// AVDTP class data structures

#define BT_AVDTP_STATE_DISCONNECTED     0
#define BT_AVDTP_STATE_SUSPENDED        1
#define BT_AVDTP_STATE_STREAMING        2

typedef struct {
    DWORD dwSize;       // To keep track of version
    BT_ADDR bta;        // Address of remote device
    DWORD dwState;      // New state of the AVDTP stream
} BT_AVDTP_STATE_CHANGE, *PBT_AVDTP_STATE_CHANGE;


// PAN class data structures

typedef struct {
    DWORD dwSize;       // To keep track of version
    DWORD NumConnections; // Number of peers connected
} BT_PAN_NUM_CONNECTIONS, *PBT_PAN_NUM_CONNECTIONS;


// Inquiry class data structures

#define INQUIRY_RESULT_NAME_MAX_CHARACTERS 21

typedef struct {
    DWORD dwSize;
    UINT uiCod;
    BT_ADDR bta;
    UCHAR ucRssi;
    BYTE    fNamePresent;   // TRUE if EIR response included full or short name
    BYTE    fNameShort;     // TRUE if EIR response included short name
    BYTE    fNameTruncated; // TRUE if EIR response name would not fit in wszDeviceName field
    WCHAR   wszDeviceName[INQUIRY_RESULT_NAME_MAX_CHARACTERS + 1]; // Name returned by EIR event if fNamePresent is TRUE
} BT_INQUIRY_RESULT_EVENT, *PBT_INQUIRY_RESULT_EVENT;


// Service class data structures

typedef struct {
    DWORD dwSize;
    BT_ADDR btAddr;
    GUID uuidService;
} BT_SERVICE_REQUEST, *PBT_SERVICE_REQUEST;


//
// Secure Simple Pairing (SSP) Data Types and APIs
//

typedef enum BTSSPIOCapability
{
    BTSSPIO_DisplayOnly  = 0x00,
    BTSSPIO_DisplayYesNo = 0x01,
    BTSSPIO_KeyboardOnly = 0x02,
    BTSSPIO_NoIO         = 0x03,
    BTSSPIO_Unspecified  = 0xFF
} BTSSPIOCapability;

typedef struct BTSSPAuthRequirement   
{
    BOOL                 MITMProtectionRequired;
    BTSSPBondingType     BondingType;
} BTSSPAuthRequirement;

typedef struct BTSSPConfigurationInfo
{
    BTSSPIOCapability    IOCapability;
    DWORD                Flags;
#define BT_SSP_FLAG_INDICATE_IO_CAPABILITY_REQUEST_EVENTS (1<<0)
#define BT_SSP_FLAG_INDICATE_OOB_DATA_REQUEST_EVENTS      (1<<1)
#define BT_SSP_FLAG_BASEBAND_SSP_DISABLE                  (1<<2)
// Flag bits 3-31 are reserved and should be set to zero

} BTSSPConfigurationInfo;

typedef enum  BTSSP_Keypress_Notification_Type
{
    BTSSP_Keypress_Notification_Started = 0,
    BTSSP_Keypress_Notification_Digit_Entered = 1,
    BTSSP_Keypress_Notification_Digit_Erased = 2,
    BTSSP_Keypress_Notification_Cleared = 3,
    BTSSP_Keypress_Notification_Completed = 4
} BTSSP_Keypress_Notification_Type;

#define BTSSP_HASH_SIZE       16
#define BTSSP_RANDOMIZER_SIZE 16

typedef struct BTSSPOOBData
{
    BYTE C[BTSSP_HASH_SIZE];         // 16 byte Hash
    BYTE R[BTSSP_RANDOMIZER_SIZE];   // 16 byte Randomizer
} BTSSPOOBData;

// BthSSPLocalSupported will determine whether the local BT device supports SSP.
// If supported, then *SSPSupported will be set to true, otherwise false.
DWORD BthSSPLocalSupported(__out BOOL *SSPSupported);

// BthSSPRemoteSupported will determine whether the remote BT device supports SSP.
// If supported, then *SSPSupported will be set to true, otherwise false.
DWORD BthSSPRemoteSupported(__in BT_ADDR RemoteDevice, __out BOOL *SSPSupported);

// Register a message queue to receive BTE_CLASS_SSP events
HANDLE BthSSPRequestNotifications(__in HANDLE hMsgQ);

// Stop receiving BTE_CLASS_SSP events
// The parameter "h" is the return value from BthSSPRequestNotifications
BOOL BthSSPStopNotifications(__in HANDLE h);

// BthSSPSetConfigurationInfo is called to enable the use of SSP.
// It must be called prior to calling any other BthSSPXxx APIs other than BthSSPIsSupported. 
DWORD BthSSPSetConfigurationInfo(__in const BTSSPConfigurationInfo *pInfo);

// Retrieve the setting from the most recent call to BthSSPSetConfigurationInfo.
DWORD BthSSPGetConfigurationInfo(__out BTSSPConfigurationInfo *pInfo);

// BthSSPPairRequest is called to initiate pairing using the SSP procedure to the specified remote device.
DWORD BthSSPPairRequest(__in const BT_ADDR *RemoteDevice);

// BthSSPAbortPairing aborts any pairing attempt in progress with the specified device
DWORD BthSSPAbortPairing(__in const BT_ADDR *RemoteDevice);

// BthSSPUserConfirmationRequestReply is called after the user accepts or rejects a numeric value
// displayed as a result of a User Confirmation Request Event.
//
// "UserAccepted" should be "true" if the user accepted the displayed value as being correct
// (e.g. by pressing the "OK" button of a confirmation dialog),
//  or "false" if the user rejected the value (e.g. by pressing the "Cancel" button of a confirmation dialog).
//
DWORD BthSSPUserConfirmationRequestReply(__in const BT_ADDR *RemoteDevice, BOOL UserAccepted);

// BthSSPUserPasskeyRequestReply is called after the user enters (or refuses to enter)
// a 6 decimal digit passkey as a result of a User Passkey Request Event.
// If the user entered a passkey then "HavePasskey" should be "true" and
// "Passkey" should be set to the entered value.
// If no passkey is available then HavePasskey should be false and Passkey is ignored.
DWORD BthSSPUserPasskeyRequestReply(const BT_ADDR *RemoteDevice, BOOL HavePasskey, UINT Passkey);

// BthSSPSendKeypressNotification is called to indicate progress being made as the user
// types the passkey into the keyboard in response to a User Passkey Request Event.
DWORD BthSSPSendKeypressNotification(__in const BT_ADDR *RemoteDevice, BTSSP_Keypress_Notification_Type Type);

// BthSSPSetRemoteOOBData is called by an application to set the OOB data 
// that has been received from the peer through the OOB mechanism.
// Default is no OOB data present.
DWORD BthSSPSetRemoteOOBData(__in const BT_ADDR *RemoteDevice, __in const BTSSPOOBData *pData);

// Retrieve the OOB data set for the specified RemoteDevice in an earlier call to BthSSPSetRemoteOOBData
DWORD BthSSPGetRemoteOOBData(__in const BT_ADDR * RemoteDevice, __out BTSSPOOBData *pData);

// BthSSPGetLocalOOBData to retrieve the local values of C and R for transmission to a peer through an OOB mechanism.
DWORD BthSSPGetLocalOOBData(__out BTSSPOOBData *pData);

// BthSSPIOCapabilityRequestReply is used to respond to an SSP IO Capability Request from the peer
DWORD  BthSSPIOCapabilityRequestReply(
    __in const BT_ADDR              *RemoteDevice,
    __in const BTSSPIOCapability     IOCapability,
    __in const BOOL                  OOBDataPresent,
    __in const BTSSPAuthRequirement *pAuthRequirements);

// BthSSPIOCapabilityRequestNegativeReply is used to respond to an SSP IO Capability Request from the peer
DWORD BthSSPIOCapabilityRequestNegativeReply(
    __in const BT_ADDR             *RemoteDevice,
    __in const BYTE                 Reason);

// BthSSPPINCodeRequestReply is called to specify the PIN entered by the user in response to a PIN Code Request Event. 
// If pPin is NULL, a PIN Code Request Negative Reply will be sent.
DWORD BthSSPPINCodeRequestReply(
    __in      const BT_ADDR *RemoteDevice,
    __in_opt  const BYTE    *pPin, 
    __in UINT                cbPin);

//  BthSSPWriteDebugMode sets the Simple Pairing Debug Mode:
//      Mode 0: disable
//      Mode 1: enabled
//      Others: reserved
DWORD BthSSPWriteDebugMode(__in  BYTE  Mode);

//  BthSSPReadDebugMode retrieves the most recent Simple Pairing Debug Mode successfully set by BthSSPWriteDebugMode
DWORD BthSSPReadDebugMode(__out  BYTE  *pMode);


//
// Events for Secure Simple Pairing (SSP)
//

#define BTE_SSP_USER_CONFIRMATION_REQUEST   801
typedef struct BT_SSP_USER_CONFIRMATION_REQUEST_EVENT
{
    UINT         NumericValue;     // Value 000000-999999 to be displayed/confirmed by user
} BT_SSP_USER_CONFIRMATION_REQUEST_EVENT;

#define BTE_SSP_USER_PASSKEY_REQUEST        802
typedef struct BT_SSP_PASSKEY_REQUEST_EVENT
{
    UINT Reserved;
} BT_SSP_PASSKEY_REQUEST_EVENT;

#define BTE_SSP_PAIRING_COMPLETE            803
typedef struct BT_SSP_PAIRING_COMPLETE_EVENT
{
    BYTE         Status;           // 0=Success, 1-0xFF = error code
} BT_SSP_PAIRING_COMPLETE_EVENT;

#define BTE_SSP_USER_PASSKEY_NOTIFICATION   804
typedef struct BT_SSP_USER_PASSKEY_NOTIFICATION_EVENT
{
    UINT         Passkey;          // Passkey in range 000000-999999 to be displayed to user
                                   // so he can enter it on remote device keyboard
} BT_SSP_USER_PASSKEY_NOTIFICATION_EVENT;

#define BTE_SSP_KEYPRESS_NOTIFICATION       805
typedef struct BT_SSP_KEYPRESS_NOTIFICATION_EVENT
{
    BTSSP_Keypress_Notification_Type Type;
} BT_SSP_KEYPRESS_NOTIFICATION_EVENT;

#define BTE_SSP_IO_CAPABILITY_REQUEST       806
typedef struct BT_SSP_IO_CAPABILITY_REQUEST_EVENT
{
    UINT Reserved;
} BT_SSP_IO_CAPABILITY_REQUEST_EVENT;

#define BTE_SSP_IO_CAPABILITY_RESPONSE      807
typedef struct BT_SSP_IO_CAPABILITY_RESPONSE_EVENT
{
    BTSSPIOCapability    IOCapability;
    BOOL                 OOBDataPresent;
    BTSSPAuthRequirement AuthRequirement;
} BT_SSP_IO_CAPABILITY_RESPONSE_EVENT;

#define BTE_SSP_REMOTE_OOB_DATA_REQUEST      808
typedef struct BT_SSP_REMOTE_OOB_DATA_REQUEST_EVENT
{
    UINT Reserved;
} BT_SSP_REMOTE_OOB_DATA_REQUEST_EVENT;

#define BTE_SSP_PIN_CODE_REQUEST             809
typedef struct BT_SSP_PIN_CODE_REQUEST_EVENT
{
    UINT Reserved;
} BT_SSP_PIN_CODE_REQUEST_EVENT;

// BTE_SSP_IO_CAPABILITY_NOTIFICATION is an informative event
// specifying the values the stack is sending to the peer
// in response to an IO Capability Request from the peer.
// No action is required from the application upon reception
// of this event.
#define BTE_SSP_IO_CAPABILITY_NOTIFICATION   810
typedef struct BT_SSP_IO_CAPABILITY_NOTIFICATION_EVENT
{
    BTSSPIOCapability    IOCapability;
    BOOL                 OOBDataPresent;
    BTSSPAuthRequirement AuthRequirement;
} BT_SSP_IO_CAPABILITY_NOTIFICATION_EVENT;

// BTE_SSP_AUTHENTICATION_COMPLETED is an informative event that is
// indicated when authentication has finished successfully (after
// a link key is generated) or unsuccessfully (e.g. peer
// disconnected prior to link key being issued, or we timed out
// after sending a PIN.)
#define BTE_SSP_AUTHENTICATION_COMPLETED     811
typedef struct BT_SSP_AUTHENTICATION_COMPLETED_EVENT
{
    DWORD  Result; // ERROR_SUCCESS if authentication was successful
} BT_SSP_AUTHENTICATION_COMPLETED_EVENT;

typedef struct BTSSPEvent
{
    DWORD                dwSize;
    BT_ADDR              RemoteDevice;     // Remote device being paired with
    ULONG                BTECode;          // BTE_SSP_Xxx identifier
    union
    {
        BT_SSP_USER_CONFIRMATION_REQUEST_EVENT  UserConfirmationRequest;
        BT_SSP_PASSKEY_REQUEST_EVENT            PasskeyRequest;
        BT_SSP_PAIRING_COMPLETE_EVENT           PairingComplete;
        BT_SSP_USER_PASSKEY_NOTIFICATION_EVENT  UserPasskeyNotification;
        BT_SSP_KEYPRESS_NOTIFICATION_EVENT      KeypressNotification;
        BT_SSP_IO_CAPABILITY_REQUEST_EVENT      IoCapabilityRequest;
        BT_SSP_IO_CAPABILITY_RESPONSE_EVENT     IoCapabilityResponse;
        BT_SSP_REMOTE_OOB_DATA_REQUEST_EVENT    RemoteOOBDataRequest;
        BT_SSP_PIN_CODE_REQUEST_EVENT           PINCodeRequest;
        BT_SSP_IO_CAPABILITY_NOTIFICATION_EVENT IoCapabilityNotification;
        BT_SSP_AUTHENTICATION_COMPLETED_EVENT   AuthenticationCompleted;
    };
} BTSSPEvent;


//
// PAN APIs
//

int BthActivatePAN (BOOL fActivate);

// Define these for back-compat
#define rfRegisterDevice RegisterDevice
#define rfDeregisterDevice DeregisterDevice
#define rfCreateFile CreateFile
#define rfReadFile ReadFile
#define rfWriteFile WriteFile
#define rfCloseHandle CloseHandle

#if defined (__cplusplus)
};          // __cplusplus
#endif

#endif      /* __bt_api_H__ */


