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
//      Bluetooth Layered Device Driver Interface
// 
// 
// Module Name:
// 
//      bt_ddi.h
// 
// Abstract:
// 
//      This file defines interfaces between layers of Bluetooth device driver
// 
// 
//------------------------------------------------------------------------------
#if ! defined (__bt_ddi_H__)
#define __bt_ddi_H__        1

#pragma once

#include <svsutil.hxx> // For SVSCookie

//
//  ------------------------------------ BD_ADDR------------------------------------
//
#define __BD_ADDR_DEFINED__ 1
#pragma pack(push, 1)
typedef struct  __bd_addr {
    union {
        struct {
            unsigned int LAP : 24;  // Lower address part
            unsigned int UAP : 8;   // Upper address part
        };
        unsigned int SAP;           // Significant address part
    };

    unsigned short NAP;             // Non-significant address part
} BD_ADDR;
#pragma pack(pop)

#if defined (__cplusplus)
inline BOOL operator==(BD_ADDR& a, BD_ADDR& b) {
    return (a.SAP == b.SAP) && (a.NAP == b.NAP);
}

inline BOOL operator!=(BD_ADDR& a, BD_ADDR& b) {
    return (a.SAP != b.SAP) || (a.NAP != b.NAP);
}
#endif

#define BLUETOOTH_TRANSPORT_NAME    TEXT("MSBT")

//
//  ------------------------------------ Stack Common ------------------------------------
//

// Audio driver message for BT audio control
#define WODM_BT_SCO_AUDIO_CONTROL       500
#define WODM_OPEN_CLOSE_A2DP            517
#define WODM_BT_A2DP_SUSPEND            518
#define WODM_BT_A2DP_START              519
#define WODM_PARAM_CLOSE_A2DP           0
#define WODM_PARAM_OPEN_A2DP            1
#define WODM_PARAM_OPENASYNC_A2DP       2




// {399B03C3-D326-4317-B675-ACD546BD3BDF}
static const GUID GUID_STATE = 
{ 0x399b03c3, 0xd326, 0x4317, { 0xb6, 0x75, 0xac, 0xd5, 0x46, 0xbd, 0x3b, 0xdf } };



// Control-down
#define BTH_HCI_IOCTL_GET_BD_FOR_HANDLE             0x00000001
#define BTH_HCI_IOCTL_GET_HANDLE_FOR_BD             0x00000002
#define BTH_HCI_IOCTL_GET_NUM_UNSENT                0x00000003
#define BTH_HCI_IOCTL_GET_NUM_ONDEVICE              0x00000004
#define BTH_HCI_IOCTL_GET_NUM_PENDING               0x00000005
#define BTH_HCI_IOCTL_GET_INQUIRY                   0x00000006
#define BTH_HCI_IOCTL_GET_PERIODIC_INQUIRY          0x00000007
#define BTH_HCI_IOCTL_GET_LOOPBACK                  0x00000008
#define BTH_HCI_IOCTL_GET_ERRORS                    0x00000009
#define BTH_HCI_IOCTL_GET_FLOW                      0x0000000a
#define BTH_HCI_IOCTL_GET_COMMANDSIZE               0x0000000b
#define BTH_HCI_IOCTL_HANDLE_AUTHENTICATED          0x0000000c
#define BTH_HCI_IOCTL_HANDLE_ENCRYPTED              0x0000000d
#define BTH_HCI_IOCTL_GET_UNDER_TEST                0x0000000e
#define BTH_HCI_IOCTL_GET_BASEBAND_HANDLES          0x00000010
#define BTH_HCI_IOCTL_GET_HANDLE_MODE               0x00000011
#define BTH_HCI_IOCTL_GET_SCO_PARAMETERS            0x00000012
#define BTH_HCI_IOCTL_GET_BASEBAND_CONNECTIONS      0x00000013
#define BTH_HCI_IOCTL_GET_HARDWARE_STATUS           0x00000014
#define BTH_HCI_IOCTL_GET_REMOTE_COD                0x00000015 
#define BTH_HCI_IOCTL_GET_NUM_QUEUED_PACKETS        0x00000016
#define BTH_HCI_IOCTL_CHECK_PENDING_CONNECTION_REQUEST 0x00000017
#define BTH_HCI_IOCTL_GET_LINK_KEY_TYPE             0x00000018

#define BTH_STACK_IOCTL_GET_CONNECTED               0x80000001
#define BTH_STACK_IOCTL_RESERVE_PORT                0x80000002
#define BTH_STACK_IOCTL_FREE_PORT                   0x80000003

#define BTH_L2CAP_IOCTL_DROP_IDLE                   0xc0000001
#define BTH_L2CAP_IOCTL_SET_PACKET_TYPE             0xc0000002
#define BTH_L2CAP_IOCTL_LOCK_BASEBAND               0x00000003
#define BTH_L2CAP_IOCTL_UNLOCK_BASEBAND             0x00000004
#define BTH_L2CAP_IOCTL_CONNECT_PHYS                0x00000005
#define BTH_L2CAP_IOCTL_TIMEOUT_PHYS                0x00000006
#define BTH_L2CAP_IOCTL_SET_TRAFFIC_TYPE            0xc0000007
#define BTH_L2CAP_IOCTL_SET_FLUSH_TIMEOUT           0xc0000008

#define BTH_AVDTP_IOCTL_SET_BIT_RATE                0xc0000010
#define BTH_AVDTP_IOCTL_TERMINATE_IDLE_CONNECTIONS  0xc0000011
#define BTH_AVDTP_IOCTL_GET_UNIQUE_SEID             0xc0000012
#define BTH_AVDTP_IOCTL_GET_MEDIA_PARAMS            0xc0000013

typedef int (*BT_LAYER_IO_CONTROL)        (HANDLE hDeviceContext, int fSelector, int cInBuffer, char *pInBuffer, int cOutBuffer, char *pOutBuffer, int *pcDataReturned);

//  Control-up
#define BTH_STACK_NONE                              0
#define BTH_STACK_RESET                             1
#define BTH_STACK_DOWN                              2
#define BTH_STACK_UP                                3
#define BTH_STACK_DISCONNECT                        4
#define BTH_STACK_FLOW_ON                           5
#define BTH_STACK_FLOW_OFF                          6
#define BTH_STACK_HOST_BUFFER                       7
#define BTH_STACK_EVENT_MASK_SET                    8
#define BTH_STACK_LOOPBACK_ON                       9
#define BTH_STACK_LOOPBACK_OFF                      10
#define BTH_STACK_UNDER_TEST                        11
#define BTH_STACK_HCI_HARDWARE_EVENT                12

//  L2CAP events
#define BTH_STACK_L2CAP_DROP_COMPLETE               0xc0000001

typedef int (*BT_LAYER_STACK_EVENT_IND)   (void *pUserContext, int iEvent, void *pEventContext);

//  Call control
typedef int (*BT_LAYER_ABORT_CALL)        (HANDLE hDeviceContext, void *pCallContext);
typedef int (*BT_LAYER_CALL_ABORTED)      (void *pCallContext, int iError);

// Link types
#define BTH_LINK_TYPE_SCO           0
#define BTH_LINK_TYPE_ACL           1
#define BTH_LINK_TYPE_ESCO          2

// Event Filter
enum HCI_EVENT_FILTER_TYPE {
    HCI_EVENT_FILTER_CLEAR              = 0x00,
    HCI_EVENT_FILTER_INQUIRY            = 0x01,
    HCI_EVENT_FILTER_CONNECTION         = 0x02
};

enum HCI_EVENT_FILTER_CONDITION {
    HCI_EVENT_FILTER_CONDITION_ALL      = 0x00,
    HCI_EVENT_FILTER_CONDITION_COD      = 0x01,
    HCI_EVENT_FILTER_CONDITION_BDADDR   = 0x02
};

//
// ------------------------------------ AVDTP -----------------------------------
//

#define BTH_NAMEDEVENT_AVDTP_INITED     L"system/events/bluetooth/AVDTPInitialized"

#define AVDTP_MEDIA_TYPE_AUDIO          0
#define AVDTP_MEDIA_TYPE_VIDEO          1
#define AVDTP_MEDIA_TYPE_MULTIMEDIA     2

#define AVDTP_CAT_MEDIA_TRANSPORT       1
#define AVDTP_CAT_REPORTING             2
#define AVDTP_CAT_RECOVERY              3
#define AVDTP_CAT_CONTENT_PROTECTION    4
#define AVDTP_CAT_HEADER_COMPRESSION    5
#define AVDTP_CAT_MULTIPLEXING          6
#define AVDTP_CAT_MEDIA_CODEC           7

typedef struct _AVDTP_SET_BIT_RATE {
    DWORD dwSize;
    HANDLE hStream;
    DWORD dwBitRate;
    DWORD cbCodecHeader;
} AVDTP_SET_BIT_RATE, *PAVDTP_SET_BIT_RATE;

typedef struct _AVDTP_GET_MEDIA_PARAMS {
    DWORD dwSize;
    HANDLE hStream;
    USHORT usMediaMTU;
} AVDTP_GET_MEDIA_PARAMS, *PAVDTP_GET_MEDIA_PARAMS;

typedef struct _AVDTP_ENDPOINT_INFO {
    DWORD dwSize;           // To keep track of structure version
    BYTE bSEID : 6;         // Stream endpoint id
    BYTE fInUse : 1;        // In use?
    BYTE fMediaType : 4;    // Media Type according to assigned numbers
    BYTE bTSEP : 1;         // Type of Stream Endpoint (SNK or SRC)
} AVDTP_ENDPOINT_INFO, *PAVDTP_ENDPOINT_INFO;

typedef struct _CAPABILITY_IE {
    DWORD dwSize;
    BYTE bServiceCategory;
    BYTE bServiceCategoryLen;

    union {
        struct {
            BYTE bMediaType;
            BYTE bMediaCodecType;
            BYTE CodecIEs[128];  // This should be a large enough buffer
        } MediaCodec; 
    };
} AVDTP_CAPABILITY_IE, *PAVDTP_CAPABILITY_IE;

#define AVDTP_PSM   0x19

typedef struct _AVDTP_INTERFACE         AVDTP_INTERFACE, *PAVDTP_INTERFACE;
typedef struct _AVDTP_EVENT_INDICATION  AVDTP_EVENT_INDICATION, *PAVDTP_EVENT_INDICATION;
typedef struct _AVDTP_CALLBACKS         AVDTP_CALLBACKS, *PAVDTP_CALLBACKS;

typedef int (*AVDTP_DiscoverReq_In)             (HANDLE hDeviceContext, void* pCallContext, BD_ADDR* pba);
typedef int (*AVDTP_DiscoverRsp_In)             (HANDLE hDeviceContext, void* pCallContext, BYTE bTransaction, BD_ADDR* pba, PAVDTP_ENDPOINT_INFO pEPInfo, DWORD cEndpoints, BYTE bError);
typedef int (*AVDTP_GetCapabilitiesReq_In)      (HANDLE hDeviceContext, void* pCallContext, BD_ADDR* pba, BYTE bAcpSEID);
typedef int (*AVDTP_GetCapabilitiesRsp_In)      (HANDLE hDeviceContext, void* pCallContext, BYTE bTransaction, BD_ADDR* pba, PAVDTP_CAPABILITY_IE pCapabilityIE, DWORD cCapabilityIE, BYTE bError);
typedef int (*AVDTP_SetConfigurationReq_In)     (HANDLE hDeviceContext, void* pCallContext, BD_ADDR* pba, BYTE bAcpSEID, BYTE bIntSEID, PAVDTP_CAPABILITY_IE pCapabilityIE, DWORD cCapabilityIE);
typedef int (*AVDTP_SetConfigurationRsp_In)     (HANDLE hDeviceContext, void* pCallContext, BYTE bTransaction, HANDLE hStream, BYTE bServiceCategory, BYTE bError);
typedef int (*AVDTP_GetConfigurationReq_In)     (HANDLE hDeviceContext, void* pCallContext, HANDLE hStream);
typedef int (*AVDTP_GetConfigurationRsp_In)     (HANDLE hDeviceContext, void* pCallContext, BYTE bTransaction, HANDLE hStream, PAVDTP_CAPABILITY_IE pCapabilityIE, DWORD cCapabilityIE, BYTE bError);
typedef int (*AVDTP_OpenReq_In)                 (HANDLE hDeviceContext, void* pCallContext, HANDLE hStream);
typedef int (*AVDTP_OpenRsp_In)                 (HANDLE hDeviceContext, void* pCallContext, BYTE bTransaction, HANDLE hStream, BYTE bError);
typedef int (*AVDTP_CloseReq_In)                (HANDLE hDeviceContext, void* pCallContext, HANDLE hStream);
typedef int (*AVDTP_CloseRsp_In)                (HANDLE hDeviceContext, void* pCallContext, BYTE bTransaction, HANDLE hStream, BYTE bError);
typedef int (*AVDTP_StartReq_In)                (HANDLE hDeviceContext, void* pCallContext, HANDLE* pStreamHandles, DWORD cStreamHandles);
typedef int (*AVDTP_StartRsp_In)                (HANDLE hDeviceContext, void* pCallContext, BYTE bTransaction, HANDLE hFirstFailingStream, BYTE bError);
typedef int (*AVDTP_SuspendReq_In)              (HANDLE hDeviceContext, void* pCallContext, HANDLE* pStreamHandles, DWORD cStreamHandles);
typedef int (*AVDTP_SuspendRsp_In)              (HANDLE hDeviceContext, void* pCallContext, BYTE bTransaction, HANDLE hFirstStream, HANDLE hFirstFailingStream, BYTE bError);
typedef int (*AVDTP_ReconfigureReq_In)          (HANDLE hDeviceContext, void* pCallContext, HANDLE hStream, PAVDTP_CAPABILITY_IE pCapabilityIE, DWORD cCapabilityIE);
typedef int (*AVDTP_ReconfigureRsp_In)          (HANDLE hDeviceContext, void* pCallContext, BYTE bTransaction, HANDLE hStream, BYTE bServiceCategory, BYTE bError);
typedef int (*AVDTP_SecurityControlReq_In)      (HANDLE hDeviceContext, void* pCallContext, HANDLE hStream, USHORT cbSecurityControlData, PBYTE pSecurityControlData);
typedef int (*AVDTP_SecurityControlRsp_In)      (HANDLE hDeviceContext, void* pCallContext, BYTE bTransaction, HANDLE hStream, USHORT cbSecurityControlData, PBYTE pSecurityControlData, BYTE bError);
typedef int (*AVDTP_AbortReq_In)                (HANDLE hDeviceContext, void* pCallContext, HANDLE hStream);
typedef int (*AVDTP_AbortRsp_In)                (HANDLE hDeviceContext, void* pCallContext, BYTE bTransaction, HANDLE hStream, BYTE bError);
typedef int (*AVDTP_WriteReq_In)                (HANDLE hDeviceContext, HANDLE hStream, BD_BUFFER* pBuffer, DWORD dwTimeInfo, BYTE bPayloadType, USHORT usMarker);

typedef int (*AVDTP_Discover_Ind)               (void* pUserContext, BYTE bTransaction, BD_ADDR* pba);
typedef int (*AVDTP_GetCapabilities_Ind)        (void* pUserContext, BYTE bTransaction, BD_ADDR* pba, BYTE bAcpSEID);
typedef int (*AVDTP_SetConfiguration_Ind)       (void* pUserContext, BYTE bTransaction, HANDLE hStream, BD_ADDR* pba, BYTE bAcpSEID, BYTE bIntSEID, PAVDTP_CAPABILITY_IE pCapabilityIE, DWORD cCapabilityIE);
typedef int (*AVDTP_GetConfiguration_Ind)       (void* pUserContext, BYTE bTransaction, HANDLE hStream);
typedef int (*AVDTP_Open_Ind)                   (void* pUserContext, BYTE bTransaction, HANDLE hStream);
typedef int (*AVDTP_Close_Ind)                  (void* pUserContext, BYTE bTransaction, HANDLE hStream);
typedef int (*AVDTP_Start_Ind)                  (void* pUserContext, BYTE bTransaction, HANDLE* pStreamHandles, DWORD cStreamHandles);
typedef int (*AVDTP_Suspend_Ind)                (void* pUserContext, BYTE bTransaction, HANDLE* pStreamHandles, DWORD cStreamHandles);
typedef int (*AVDTP_Reconfigure_Ind)            (void* pUserContext, BYTE bTransaction, HANDLE hStream, PAVDTP_CAPABILITY_IE pCapabilityIE, DWORD cCapabilityIE);
typedef int (*AVDTP_SecurityControl_Ind)        (void* pUserContext, BYTE bTransaction, HANDLE hStream, USHORT cbSecurityControlData, PBYTE pSecurityControlData);
typedef int (*AVDTP_Abort_Ind)                  (void* pUserContext, BYTE bTransaction, HANDLE hStream);
typedef int (*AVDTP_StreamData_Up_Ind)          (void* pUserContext, HANDLE hStream, BD_BUFFER* pBuffer, DWORD dwTimeInfo, BYTE bPayloadType, USHORT usMarker, USHORT usReliability);
typedef int (*AVDTP_StreamAbortedEvent)         (void* pUserContext, HANDLE hStream, int iError);

typedef int (*AVDTP_Discover_Out)               (void* pCallContext, BD_ADDR* pba, PAVDTP_ENDPOINT_INFO pAcpSEIDInfo, DWORD cAcpSEIDInfo, BYTE bError);
typedef int (*AVDTP_GetCapabilities_Out)        (void* pCallContext, BD_ADDR* pba, PAVDTP_CAPABILITY_IE pCapabilityIE, DWORD cCapabilityIE, BYTE bError);
typedef int (*AVDTP_SetConfiguration_Out)       (void* pCallContext, HANDLE hStream, BYTE bServiceCategory, BYTE bError);
typedef int (*AVDTP_GetConfiguration_Out)       (void* pCallContext, HANDLE hStream, PAVDTP_CAPABILITY_IE pCapabilityIE, DWORD cCapabilityIE, BYTE bError);
typedef int (*AVDTP_Open_Out)                   (void* pCallContext, HANDLE hStream, BYTE bError);
typedef int (*AVDTP_Close_Out)                  (void* pCallContext, HANDLE hStream, BYTE bError);
typedef int (*AVDTP_Start_Out)                  (void* pCallContext, HANDLE hFirstFailingStream, BYTE bError);
typedef int (*AVDTP_Suspend_Out)                (void* pCallContext, HANDLE hFirstStream, HANDLE hFirstFailingStream, BYTE bError);
typedef int (*AVDTP_Reconfigure_Out)            (void* pCallContext, HANDLE hStream, BYTE bServiceCategory, BYTE bError);
typedef int (*AVDTP_SecurityControl_Out)        (void* pCallContext, HANDLE hStream, USHORT cbSecurityControlData, PBYTE pSecurityControlData, BYTE bError);
typedef int (*AVDTP_Abort_Out)                  (void* pCallContext, HANDLE hStream, BYTE bError);

struct _AVDTP_INTERFACE {
    AVDTP_DiscoverReq_In            avdtp_DiscoverReq_In;
    AVDTP_DiscoverRsp_In            avdtp_DiscoverRsp_In;
    AVDTP_GetCapabilitiesReq_In     avdtp_GetCapabilitiesReq_In;
    AVDTP_GetCapabilitiesRsp_In     avdtp_GetCapabilitiesRsp_In;
    AVDTP_SetConfigurationReq_In    avdtp_SetConfigurationReq_In;
    AVDTP_SetConfigurationRsp_In    avdtp_SetConfigurationRsp_In;
    AVDTP_GetConfigurationReq_In    avdtp_GetConfigurationReq_In;
    AVDTP_GetConfigurationRsp_In    avdtp_GetConfigurationRsp_In;
    AVDTP_OpenReq_In                avdtp_OpenReq_In;
    AVDTP_OpenRsp_In                avdtp_OpenRsp_In;
    AVDTP_CloseReq_In               avdtp_CloseReq_In;
    AVDTP_CloseRsp_In               avdtp_CloseRsp_In;
    AVDTP_StartReq_In               avdtp_StartReq_In;
    AVDTP_StartRsp_In               avdtp_StartRsp_In;
    AVDTP_SuspendReq_In             avdtp_SuspendReq_In;
    AVDTP_SuspendRsp_In             avdtp_SuspendRsp_In;
    AVDTP_ReconfigureReq_In         avdtp_ReconfigureReq_In;
    AVDTP_ReconfigureRsp_In         avdtp_ReconfigureRsp_In;
    AVDTP_SecurityControlReq_In     avdtp_SecurityControlReq_In;
    AVDTP_SecurityControlRsp_In     avdtp_SecurityControlRsp_In;
    AVDTP_AbortReq_In               avdtp_AbortReq_In;
    AVDTP_AbortRsp_In               avdtp_AbortRsp_In;
    AVDTP_WriteReq_In               avdtp_WriteReq_In;

    BT_LAYER_IO_CONTROL             avdtp_ioctl;
    BT_LAYER_ABORT_CALL             avdtp_AbortCall;
};

struct _AVDTP_EVENT_INDICATION {
    AVDTP_Discover_Ind              avdtp_Discover_Ind;
    AVDTP_GetCapabilities_Ind       avdtp_GetCapabilities_Ind;
    AVDTP_SetConfiguration_Ind      avdtp_SetConfiguration_Ind;
    AVDTP_GetConfiguration_Ind      avdtp_GetConfiguration_Ind;
    AVDTP_Open_Ind                  avdtp_Open_Ind;
    AVDTP_Close_Ind                 avdtp_Close_Ind;
    AVDTP_Start_Ind                 avdtp_Start_Ind;
    AVDTP_Suspend_Ind               avdtp_Suspend_Ind;
    AVDTP_Reconfigure_Ind           avdtp_Reconfigure_Ind;
    AVDTP_SecurityControl_Ind       avdtp_SecurityControl_Ind;
    AVDTP_Abort_Ind                 avdtp_Abort_Ind;
    AVDTP_StreamData_Up_Ind         avdtp_StreamData_Up_Ind;

    AVDTP_StreamAbortedEvent        avdtp_StreamAbortedEvent;
    BT_LAYER_STACK_EVENT_IND        avdtp_StackEvent;
};

struct _AVDTP_CALLBACKS {
    AVDTP_Discover_Out              avdtp_Discover_Out;
    AVDTP_GetCapabilities_Out       avdtp_GetCapabilities_Out;
    AVDTP_SetConfiguration_Out      avdtp_SetConfiguration_Out;
    AVDTP_GetConfiguration_Out      avdtp_GetConfiguration_Out;
    AVDTP_Open_Out                  avdtp_Open_Out;
    AVDTP_Close_Out                 avdtp_Close_Out;
    AVDTP_Start_Out                 avdtp_Start_Out;
    AVDTP_Suspend_Out               avdtp_Suspend_Out;
    AVDTP_Reconfigure_Out           avdtp_Reconfigure_Out;
    AVDTP_SecurityControl_Out       avdtp_SecurityControl_Out;
    AVDTP_Abort_Out                 avdtp_Abort_Out;

    BT_LAYER_CALL_ABORTED           avdtp_CallAborted;
};


int AVDTP_EstablishDeviceContext
(
void*                   pUserContext,       /* IN */
PAVDTP_EVENT_INDICATION pInd,               /* IN */
PAVDTP_CALLBACKS        pCall,              /* IN */
PAVDTP_INTERFACE        pInt,               /* OUT */
int*                    pcDataHeaders,      /* OUT */
int*                    pcDataTrailers,     /* OUT */
HANDLE*                 phDeviceContext    /* OUT */
);

int AVDTP_CloseDeviceContext
(
HANDLE hDeviceContext       /* IN */
);

int avdtp_InitializeOnce (void);
int avdtp_CreateDriverInstance (void);
int avdtp_CloseDriverInstance (void);
int avdtp_UninitializeOnce (void);

//
//  ------------------------------------ PAN ------------------------------------
//

#define OID_PAN_CONNECT         0xffff0101
#define OID_PAN_DISCONNECT      0xffff0102
#define OID_PAN_AUTHENTICATE    0xffff0103
#define OID_PAN_ENCRYPT         0xffff0104
#define OID_PAN_SECURITY_LEVEL  0xffff0105

int pan_InitializeOnce (void);
int pan_CreateDriverInstance (void);
int pan_Activate (BOOL fActivate);
int pan_CloseDriverInstance (void);
int pan_UninitializeOnce (void);

//
//  ------------------------------------ SDP NS ------------------------------------
//
int bthns_InitializeOnce(void);
int bthns_CreateDriverInstance(void);
int bthns_CloseDriverInstance(void);
int bthns_UninitializeOnce(void);

//
//  ------------------------------------ SDP ------------------------------------
//
typedef struct _SdpAttributeRange SdpAttributeRange;
typedef struct _SdpQueryUuid      SdpQueryUuid;
typedef struct _SdpServiceSearch  SdpServiceSearch;

typedef int (*SDP_AddRecord)                   (HANDLE hDeviceContext, UCHAR *pStream, ULONG streamSize, HANDLE *pId);
typedef int (*SDP_RemoveRecord)                (HANDLE hDeviceContext, HANDLE Id);
typedef int (*SDP_Connect_In)                  (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba);
typedef int (*SDP_Disconnect_In)               (HANDLE hDeviceContext, void *pCallContext, unsigned short cid);
typedef int (*SDP_ServiceSearch_In)            (HANDLE hDeviceContext, void *pCallContext, unsigned short cid, SdpQueryUuid* pUUIDs, unsigned short cMaxHandles);
typedef int (*SDP_AttributeSearch_In)          (HANDLE hDeviceContext, void *pCallContext, unsigned short cid, unsigned long recordHandle, SdpAttributeRange *pAttribRange, int numAttributes);
typedef int (*SDP_ServiceAttributeSearch_In)   (HANDLE hDeviceContext, void *pCallContext, unsigned short cid, SdpQueryUuid* pUUIDs, SdpAttributeRange *pAttribRange, int numAttributes);

struct SDP_INTERFACE {
    SDP_AddRecord                   sdp_AddRecord;
    SDP_RemoveRecord                sdp_RemoveRecord;
    SDP_Connect_In                  sdp_Connect_In;
    SDP_Disconnect_In               sdp_Disconnect_In;
    SDP_ServiceSearch_In            sdp_ServiceSearch_In;
    SDP_AttributeSearch_In          sdp_AttributeSearch_In;
    SDP_ServiceAttributeSearch_In   sdp_ServiceAttributeSearch_In;

    BT_LAYER_IO_CONTROL             sdp_ioctl;
    BT_LAYER_ABORT_CALL             sdp_AbortCall;
};

typedef int (*SDP_Connect_Out)                  (void *pCallContext, unsigned long status, unsigned short cid);
typedef int (*SDP_Disonnect_Out)                (void *pCallContext, unsigned long status);
typedef int (*SDP_ServiceSearch_Out)            (void *pCallContext, unsigned long status, unsigned short cReturnedHandles, unsigned long *pHandles);
typedef int (*SDP_AttributeSearch_Out)          (void *pCallContext, unsigned long status, unsigned char *pOutBuf, unsigned long cOutBuf);
typedef int (*SDP_ServiceAttributeSearch_Out)   (void *pCallContext, unsigned long status, unsigned char *pOutBuf, unsigned long cOutBuf);


struct SDP_CALLBACKS {
    SDP_Connect_Out                 sdp_Connect_Out;
    SDP_Disonnect_Out               sdp_Disconnect_Out; 
    SDP_ServiceSearch_Out           sdp_ServiceSearch_Out;
    SDP_AttributeSearch_Out         sdp_AttributeSearch_Out;
    SDP_ServiceAttributeSearch_Out  sdp_ServiceAttributeSearch_Out;
    BT_LAYER_CALL_ABORTED           sdp_CallAborted;
};

struct SDP_EVENT_INDICATION {
    BT_LAYER_STACK_EVENT_IND        sdp_StackEvent;
};

int SDP_EstablishDeviceContext
(
void                    *pUserContext,      /* IN */
SDP_EVENT_INDICATION    *pInd,              /* IN */
SDP_CALLBACKS           *pCall,             /* IN */
SDP_INTERFACE           *pInt,              /* OUT */
HANDLE                  *phDeviceContext    /* OUT */
);

int SDP_CloseDeviceContext
(
HANDLE                  hDeviceContext      /* IN */
);

int sdp_InitializeOnce (void);
int sdp_CreateDriverInstance (void);
int sdp_CloseDriverInstance (void);
int sdp_UninitializeOnce (void);

int sdp_ProcessConsoleCommand (WCHAR *pString);

//
//  ------------------------------------ RFCOMM ------------------------------------
//
#define RFCOMM_PSM              3
#define RFCOMM_LINGER           0
#define RFCOMM_N1_MIN           27
#define RFCOMM_T1               60
#define RFCOMM_T2               60
#define RFCOMM_MAX_ERR          0
#define RFCOMM_MAX_DATA         0x7fff

#define RFCOMM_PN_CREDIT_IN     0xf
#define RFCOMM_PN_CREDIT_OUT    0xe
#define RFCOMM_PN_CREDIT_MAX    0x7

#define RFCOMM_RPN_XON_IN       0x01
#define RFCOMM_RPN_XON_OUT      0x02
#define RFCOMM_RPN_RTR_IN       0x04
#define RFCOMM_RPN_RTR_OUT      0x08
#define RFCOMM_RPN_RTC_IN       0x10
#define RFCOMM_RPN_RTC_OUT      0x20

#define RFCOMM_RPN_HAVE_BAUD    0x0001
#define RFCOMM_RPN_HAVE_DATA    0x0002
#define RFCOMM_RPN_HAVE_STOP    0x0004
#define RFCOMM_RPN_HAVE_PARITY  0x0008
#define RFCOMM_RPN_HAVE_PT      0x0010
#define RFCOMM_RPN_HAVE_XON     0x0020
#define RFCOMM_RPN_HAVE_XOFF    0x0040
#define RFCOMM_RPN_HAVE_XON_IN  0x0100
#define RFCOMM_RPN_HAVE_XON_OUT 0x0200
#define RFCOMM_RPN_HAVE_RTR_IN  0x0400  
#define RFCOMM_RPN_HAVE_RTR_OUT 0x0800
#define RFCOMM_RPN_HAVE_RTC_IN  0x1000
#define RFCOMM_RPN_HAVE_RTC_OUT 0x2000

typedef struct _RFCOMM_EVENT_INDICATION RFCOMM_EVENT_INDICATION, *PRFCOMM_EVENT_INDICATION;
typedef struct _RFCOMM_INTERFACE        RFCOMM_INTERFACE, *PRFCOMM_INTERFACE;
typedef struct _RFCOMM_CALLBACKS        RFCOMM_CALLBACKS, *PRFCOMM_CALLBACKS;

typedef int (*RFCOMM_CreateChannel)         (HANDLE hDeviceContext, BD_ADDR *pba, unsigned char channel, HANDLE *phConnection);
typedef int (*RFCOMM_GetChannelAddress)     (HANDLE hDeviceContext, HANDLE hConnection, BD_ADDR *pba, unsigned char *pchannel, int *pfLocal);

typedef int (*RFCOMM_ConnectRequest_In)     (HANDLE hDeviceContext, void *pCallContext, HANDLE hConnection);
typedef int (*RFCOMM_ConnectRequest_Out)    (void *pCallContext, int iError, HANDLE hConnection);
typedef int (*RFCOMM_ConnectResponse_In)    (HANDLE hDeviceContext, void *pCallContext, HANDLE hConnection, int fAllowConnection);
typedef int (*RFCOMM_ConnectResponse_Out)   (void *pCallContext, int iError);
typedef int (*RFCOMM_DataDown_In)           (HANDLE hDeviceContext, void *pCallContext, HANDLE hConnection, BD_BUFFER *pBuffer, int add_credits);
typedef int (*RFCOMM_DataDown_Out)          (void *pCallContext, int iError);
typedef int (*RFCOMM_Disconnect_In)         (HANDLE hDeviceContext, void *pCallContext, HANDLE hConnection);
typedef int (*RFCOMM_Disconnect_Out)        (void *pCallContext, int iError);
typedef int (*RFCOMM_MSC_In)                (HANDLE hDeviceContext, void *pCallContext, HANDLE hConnection, unsigned char v24, unsigned char bs);
typedef int (*RFCOMM_MSC_Out)               (void *pCallContext, int iError);
typedef int (*RFCOMM_RLS_In)                (HANDLE hDeviceContext, void *pCallContext, HANDLE hConnection, unsigned char rls);
typedef int (*RFCOMM_RLS_Out)               (void *pCallContext, int iError);
typedef int (*RFCOMM_FC_In)                 (HANDLE hDeviceContext, void *pCallContext, HANDLE hConnection, unsigned char fcOn);
typedef int (*RFCOMM_FC_Out)                (void *pCallContext, int iError);
typedef int (*RFCOMM_PNREQ_In)              (HANDLE hDeviceContext, void *pCallContext, HANDLE hConnection, unsigned char priority, unsigned short n1, int use_credit_fc_in, int initial_credit_in);
typedef int (*RFCOMM_PNREQ_Out)             (void *pCallContext, int iError, unsigned char priority, unsigned short n1, int use_credit_fc_out, int initial_count_out);
typedef int (*RFCOMM_RPNREQ_In)             (HANDLE hDeviceContext, void *pCallContext, HANDLE hConnection, unsigned short mask, int baud, int data, int stop, int parity, int parity_type, unsigned char flow, unsigned char xon, unsigned char xoff);
typedef int (*RFCOMM_RPNREQ_Out)            (void *pCallContext, int iError, unsigned short mask, int baud, int data, int stop, int parity, int parity_type, unsigned char flow, unsigned char xon, unsigned char xoff);
typedef int (*RFCOMM_PNRSP_In)              (HANDLE hDeviceContext, void *pCallContext, HANDLE hConnection, unsigned char priority, unsigned short n1, int use_credit_fc_out, int initial_credit_out);
typedef int (*RFCOMM_PNRSP_Out)             (void *pCallContext, int iError);
typedef int (*RFCOMM_RPNRSP_In)             (HANDLE hDeviceContext, void *pCallContext, HANDLE hConnection, unsigned short mask, int baud, int data, int stop, int parity, int parity_type, unsigned char flow, unsigned char xon, unsigned char xoff);
typedef int (*RFCOMM_RPNRSP_Out)            (void *pCallContext, int iError);
typedef int (*RFCOMM_TEST_In)               (HANDLE hDeviceContext, void *pCallContext, HANDLE hConnection, unsigned char len, unsigned char *buff);
typedef int (*RFCOMM_TEST_Out)              (void *pCallContext, int iError, unsigned char len, unsigned char *buff);

typedef int (*RFCOMM_ConnectRequest_Ind)    (void *pUserContext, HANDLE hConnection, BD_ADDR *pba, unsigned char channel);
typedef int (*RFCOMM_DataUp_Ind)            (void *pUserContext, HANDLE hConnection, BD_BUFFER *pba, int add_credits);
typedef int (*RFCOMM_Disconnect_Ind)        (void *pUserContext, HANDLE hConnection);
typedef int (*RFCOMM_MSC_Ind)               (void *pUserContext, HANDLE hConnection, unsigned char v24, unsigned char bs);
typedef int (*RFCOMM_RLS_Ind)               (void *pUserContext, HANDLE hConnection, unsigned char rls);
typedef int (*RFCOMM_FC_Ind)                (void *pUserContext, HANDLE hConnection, unsigned char fcOn);
typedef int (*RFCOMM_PNREQ_Ind)             (void *pUserContext, HANDLE hConnection, unsigned char priority, unsigned short n1, int use_credit_fc, int initial_credit);
typedef int (*RFCOMM_RPNREQ_Ind)            (void *pUserContext, HANDLE hConnection, unsigned short mask, int baud, int data, int stop, int parity, int party_type, unsigned char flow, unsigned char xon, unsigned char xoff);

struct _RFCOMM_EVENT_INDICATION {
    RFCOMM_ConnectRequest_Ind               rfcomm_ConnectRequest_Ind;
    RFCOMM_DataUp_Ind                       rfcomm_DataUp_Ind;
    RFCOMM_Disconnect_Ind                   rfcomm_Disconnect_Ind;
    RFCOMM_MSC_Ind                          rfcomm_MSC_Ind;
    RFCOMM_RLS_Ind                          rfcomm_RLS_Ind;
    RFCOMM_FC_Ind                           rfcomm_FC_Ind;
    RFCOMM_PNREQ_Ind                        rfcomm_PNREQ_Ind;
    RFCOMM_RPNREQ_Ind                       rfcomm_RPNREQ_Ind;

    BT_LAYER_STACK_EVENT_IND                rfcomm_StackEvent;
};

struct _RFCOMM_INTERFACE {
    RFCOMM_CreateChannel                    rfcomm_CreateChannel;
    RFCOMM_GetChannelAddress                rfcomm_GetChannelAddress;
    RFCOMM_ConnectRequest_In                rfcomm_ConnectRequest_In;
    RFCOMM_ConnectResponse_In               rfcomm_ConnectResponse_In;
    RFCOMM_DataDown_In                      rfcomm_DataDown_In;
    RFCOMM_Disconnect_In                    rfcomm_Disconnect_In;
    RFCOMM_MSC_In                           rfcomm_MSC_In;
    RFCOMM_RLS_In                           rfcomm_RLS_In;
    RFCOMM_FC_In                            rfcomm_FC_In;
    RFCOMM_PNREQ_In                         rfcomm_PNREQ_In;            // Send a Parameter Negotiation Request
    RFCOMM_RPNREQ_In                        rfcomm_RPNREQ_In;
    RFCOMM_PNRSP_In                         rfcomm_PNRSP_In;
    RFCOMM_RPNRSP_In                        rfcomm_RPNRSP_In;
    RFCOMM_TEST_In                          rfcomm_TEST_In;

    BT_LAYER_IO_CONTROL                     rfcomm_ioctl;
    BT_LAYER_ABORT_CALL                     rfcomm_AbortCall;
};

struct _RFCOMM_CALLBACKS {
    RFCOMM_ConnectRequest_Out               rfcomm_ConnectRequest_Out;
    RFCOMM_ConnectResponse_Out              rfcomm_ConnectResponse_Out;
    RFCOMM_DataDown_Out                     rfcomm_DataDown_Out;
    RFCOMM_Disconnect_Out                   rfcomm_Disconnect_Out;
    RFCOMM_MSC_Out                          rfcomm_MSC_Out;
    RFCOMM_RLS_Out                          rfcomm_RLS_Out;
    RFCOMM_FC_Out                           rfcomm_FC_Out;
    RFCOMM_PNREQ_Out                        rfcomm_PNREQ_Out;
    RFCOMM_RPNREQ_Out                       rfcomm_RPNREQ_Out;
    RFCOMM_PNRSP_Out                        rfcomm_PNRSP_Out;
    RFCOMM_RPNRSP_Out                       rfcomm_RPNRSP_Out;
    RFCOMM_TEST_Out                         rfcomm_TEST_Out;

    BT_LAYER_CALL_ABORTED                   rfcomm_CallAborted;
};

#if ! defined (__bt_api_H__)
//
//  Attention: also defined in bt_api.h! Keep in sync!
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

int RFCOMM_EstablishDeviceContext
(
void                    *pUserContext,      /* IN */
unsigned char           channel,            /* IN */
RFCOMM_EVENT_INDICATION *pInd,              /* IN */
RFCOMM_CALLBACKS        *pCall,             /* IN */
RFCOMM_INTERFACE        *pInt,              /* OUT */
int                     *pcDataHeaders,     /* OUT */
int                     *pcDataTrailers,    /* OUT */
HANDLE                  *phDeviceContext    /* OUT */
);

int RFCOMM_CloseDeviceContext
(
HANDLE                  hDeviceContext      /* IN */
);

int rfcomm_InitializeOnce (void);
int rfcomm_CreateDriverInstance (void);
int rfcomm_CloseDriverInstance (void);
int rfcomm_UninitializeOnce (void);

int rfcomm_ProcessConsoleCommand (WCHAR *pString);

//  RFCOMM port emulator entity

#define PORTEMU_MTUMIN      23
#define PORTEMU_MTUMAX      32767
#define PORTEMU_MTU_DESIRED 1024
#define PORTEMU_RECVMAX     7168
#define PORTEMU_SENDMAX     7168
#define PORTEMU_XONLIM      800
#define PORTEMU_XOFFLIM     200
#define PORTEMU_PRI         32
#define PORTEMU_RTO         1000
#define PORTEMU_WTO         1000

#define PORTEMU_CREDITS_LOW     20
#define PORTEMU_CREDITS_LOWEST  10

int portemu_InitializeOnce (void);
int portemu_CreateDriverInstance (void);
int portemu_CloseDriverInstance (void);
int portemu_UninitializeOnce (void);

int portemu_ProcessConsoleCommand (WCHAR *pString);


//RFCOMM TLN
#define TLNR_MTUMIN         23
#define TLNR_MTUMAX         32767
#define TLNR_MTU            127
#define TLNR_MTU_DESIRED    1024
#define TLNR_RECVMAX        7168
#define TLNR_SENDMAX        7168
#define TLNR_XONLIM         800
#define TLNR_XOFFLIM        200
#define TLNR_PRI            32

#define TLNR_CREDITS_LOW    10
#define TLNR_CREDITS_LOWEST 3

int bttln_CreateDriverInstance(void);
int bttln_CloseDriverInstance (void);

//
//  ------------------------------------ L2CAP ------------------------------------
//
typedef struct _L2CAP_EVENT_INDICATION      L2CAP_EVENT_INDICATION, *PL2CAP_EVENT_INDICATION;
typedef struct _L2CAP_INTERFACE             L2CAP_INTERFACE,        *PL2CAP_INTERFACE;
typedef struct _L2CAP_CALLBACKS             L2CAP_CALLBACKS,        *PL2CAP_CALLBACKS;

struct btFLOWSPEC {
    unsigned char   flags;
    unsigned char   service_type;
    unsigned int    token_rate;
    unsigned int    token_bucket_size;
    unsigned int    peak_bandwidth;
    unsigned int    latency;
    unsigned int    delay_variation;
};

struct btCONFIGEXTENSION {
    unsigned char type;
    unsigned char length;
    unsigned char ucData[1];
};

struct btFCROptionData
{
    BYTE Mode;
    BYTE TxWindowSize;
    BYTE MaxTransmit;
    BYTE RetransmissionTimeout[2];
    BYTE MonitorTimeout[2];
    BYTE MaximumPDUSize[2];
};

#define INVALID_CID    0

typedef int (*L2CA_ConnectInd)            (void *pUserContext, BD_ADDR *pba, unsigned short cid, unsigned char id, unsigned short psm);
typedef int (*L2CA_ConfigInd)             (void *pUserContext, unsigned char id, unsigned short cid, unsigned short usOutMTU, unsigned short usInFlushTO, struct btFLOWSPEC *pInFlow, int cOptNum, struct btCONFIGEXTENSION **ppExtendedOptions);
typedef int (*L2CA_ConfigIndEx)           (void *pUserContext, unsigned char id, unsigned short cid, unsigned short Flags, unsigned short usOutMTU, unsigned short usInFlushTO, struct btFLOWSPEC *pInFlow, int cOptNum, struct btCONFIGEXTENSION **ppExtendedOptions);
typedef int (*L2CA_DisconnectInd)         (void *pUserContext, unsigned short cid, int iErr);
typedef int (*L2CA_QoSViolationInd)       (void *pUserContext, BD_ADDR *pba);
typedef int (*L2CA_DataUpInd)             (void *pUserContext, unsigned short cid, BD_BUFFER *pBuffer);

typedef int (*L2CA_ConnectReq_In)         (HANDLE hDeviceContext, void *pCallContext, unsigned short psm, BD_ADDR *pba);
typedef int (*L2CA_ConnectReq_Out)        (void *pCallContext, unsigned short cid, unsigned short result, unsigned short status);
typedef int (*L2CA_ConnectResponse_In)    (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned char id, unsigned short cid, unsigned short response, unsigned short status);
typedef int (*L2CA_ConnectResponse_Out)   (void *pCallContext, unsigned short result);
typedef int (*L2CA_ConfigReq_In)          (HANDLE hDeviceContext, void *pCallContext, unsigned short cid, unsigned short usInMTU, unsigned short usOutFlushTO, struct btFLOWSPEC *pOutFlow, int cOptNum, struct btCONFIGEXTENSION **ppExtendedOptions);
typedef int (*L2CA_ConfigReq_Out)         (void *pCallContext, unsigned short usResult, unsigned short usInMTU, unsigned short usOutFlushTO, struct btFLOWSPEC *pOutFlow, int cOptNum, struct btCONFIGEXTENSION **ppExtendedOptions);
typedef int (*L2CA_ConfigReqEx_Out)       (void *pCallContext, unsigned short Flags, unsigned short usResult, unsigned short usInMTU, unsigned short usOutFlushTO, struct btFLOWSPEC *pOutFlow, int cOptNum, struct btCONFIGEXTENSION **ppExtendedOptions);
typedef int (*L2CA_ConfigResponse_In)     (HANDLE hDeviceContext, void *pCallContext, unsigned char id, unsigned short cid, unsigned short result, unsigned short usOutMTU, unsigned short usInFlushTO, struct btFLOWSPEC *pInFlow, int cOptNum, struct btCONFIGEXTENSION **pExtendedOptions);
typedef int (*L2CA_ConfigResponse_Out)    (void *pCallContext, unsigned short result);
typedef int (*L2CA_Disconnect_In)         (HANDLE hDeviceContext, void *pCallContext, unsigned short cid);
typedef int (*L2CA_Disconnect_Out)        (void *pCallContext, unsigned short result);
typedef int (*L2CA_DataDown_In)           (HANDLE hDeviceContext, void *pCallContext, unsigned short cid, BD_BUFFER *pBuffer);
typedef int (*L2CA_DataDown_Out)          (void *pCallContext, unsigned short result);
typedef int (*L2CA_GroupCreate_In)        (HANDLE hDeviceContext, void *pCallContext, unsigned short psm);
typedef int (*L2CA_GroupCreate_Out)       (void *pCallContext, unsigned short cid);
typedef int (*L2CA_GroupClose_In)         (HANDLE hDeviceContext, void *pCallContext, unsigned short cid);
typedef int (*L2CA_GroupClose_Out)        (void *pCallContext, unsigned short result);
typedef int (*L2CA_GroupAddMember_In)     (HANDLE hDeviceContext, void *pCallContext, unsigned short cid, BD_ADDR *pba);
typedef int (*L2CA_GroupAddMember_Out)    (void *pCallContext, unsigned short result);
typedef int (*L2CA_GroupRemoveMember_In)  (HANDLE hDeviceContext, void *pCallContext, unsigned short cid, BD_ADDR *pba);
typedef int (*L2CA_GroupRemoveMember_Out) (void *pCallContext, unsigned short result);
typedef int (*L2CA_GroupMembership_In)    (HANDLE hDeviceContext, void *pCallContext, unsigned short cid);
typedef int (*L2CA_GroupMembership_Out)   (void *pCallContext, unsigned short result, unsigned short n, BD_ADDR *pList);
typedef int (*L2CA_Ping_In)               (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned char *pInBuffer, unsigned short length);
typedef int (*L2CA_Ping_Out)              (void *pCallContext, BD_ADDR *pba, unsigned char *pOutBuffer, unsigned short size);
typedef int (*L2CA_GetInfo_In)            (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned short usInfoType);
typedef int (*L2CA_GetInfo_Out)           (void *pCallContext, unsigned short result, unsigned char *pBuffer, unsigned short size);
typedef int (*L2CA_DisableCLT_In)         (HANDLE hDeviceContext, void *pCallContext, unsigned short psm);
typedef int (*L2CA_DisableCLT_Out)        (void *pCallContext, unsigned short result);
typedef int (*L2CA_EnableCLT_In)          (HANDLE hDeviceContext, void *pCallContext, unsigned short psm);
typedef int (*L2CA_EnableCLT_Out)         (void *pCallContext, unsigned short result);

struct _L2CAP_EVENT_INDICATION {
    L2CA_ConnectInd                 l2ca_ConnectInd;        // Callback to process a received Connection Request
    L2CA_ConfigInd                  l2ca_ConfigInd;         // Callback to process a received Configuration Request
    L2CA_DisconnectInd              l2ca_DisconnectInd;
    L2CA_QoSViolationInd            l2ca_QoSViolationInd;
    L2CA_DataUpInd                  l2ca_DataUpInd;

    BT_LAYER_STACK_EVENT_IND        l2ca_StackEvent;

    L2CA_ConfigIndEx                l2ca_ConfigIndEx;       // Callback to process a received Configuration Request (required when request Flags field is non-0)
};

struct _L2CAP_CALLBACKS {
    L2CA_ConnectReq_Out         l2ca_ConnectReq_Out;         // Callback to process a received Connection Response packet
    L2CA_ConnectResponse_Out    l2ca_ConnectResponse_Out;    // Callback after a Connection Response packet has been sent by HCI
    L2CA_ConfigReq_Out          l2ca_ConfigReq_Out;          // Callback to process a received Configure Response packet
    L2CA_ConfigResponse_Out     l2ca_ConfigResponse_Out;     // Callback after a Configuration Response packet has been sent by HCI
    L2CA_Disconnect_Out         l2ca_Disconnect_Out;         // Callback to process a received Disconnect Response packet
    L2CA_DataDown_Out           l2ca_DataDown_Out;           // Callback after a data packet has been transmitted by HCI (Basic mode)
                                                             // Callback after a data packet has been acked/timed out (Flow Control/Retransmission modes)
    L2CA_GroupCreate_Out        l2ca_GroupCreate_Out;
    L2CA_GroupClose_Out         l2ca_GroupClose_Out;
    L2CA_GroupAddMember_Out     l2ca_GroupAddMember_Out;
    L2CA_GroupRemoveMember_Out  l2ca_GroupRemoveMember_Out;
    L2CA_GroupMembership_Out    l2ca_GroupMembership_Out;
    L2CA_Ping_Out               l2ca_Ping_Out;
    L2CA_GetInfo_Out            l2ca_GetInfo_Out;
    L2CA_DisableCLT_Out         l2ca_DisableCLT_Out;
    L2CA_EnableCLT_Out          l2ca_EnableCLT_Out;

    BT_LAYER_CALL_ABORTED       l2ca_CallAborted;

    L2CA_ConfigReqEx_Out        l2ca_ConfigReqEx_Out;        // Callback to process a received Configure Response packet, required to handle non-0 Flags field
};

struct _L2CAP_INTERFACE {
    L2CA_ConnectReq_In          l2ca_ConnectReq_In;          // Call to send a Connection Request
    L2CA_ConnectResponse_In     l2ca_ConnectResponse_In;     // Call to send a Connection Response
    L2CA_ConfigReq_In           l2ca_ConfigReq_In;           // Call to send a Configuration Request
    L2CA_ConfigResponse_In      l2ca_ConfigResponse_In;      // Call to send a Configuration Response
    L2CA_Disconnect_In          l2ca_Disconnect_In;          // Call to send a Disconnection Request
    L2CA_DataDown_In            l2ca_DataDown_In;            // Call to send data
    L2CA_GroupCreate_In         l2ca_GroupCreate_In;
    L2CA_GroupClose_In          l2ca_GroupClose_In;
    L2CA_GroupAddMember_In      l2ca_GroupAddMember_In;
    L2CA_GroupRemoveMember_In   l2ca_GroupRemoveMember_In;
    L2CA_GroupMembership_In     l2ca_GroupMembership_In;
    L2CA_Ping_In                l2ca_Ping_In;
    L2CA_GetInfo_In             l2ca_GetInfo_In;
    L2CA_DisableCLT_In          l2ca_DisableCLT_In;
    L2CA_EnableCLT_In           l2ca_EnableCLT_In;

    BT_LAYER_IO_CONTROL         l2ca_ioctl;
    BT_LAYER_ABORT_CALL         l2ca_AbortCall;
};

#define L2CAP_PSM_ALL           0x0000
#define L2CAP_PSM_MULTIPLE      0x1000

int L2CAP_EstablishDeviceContext
(
void                    *pUserContext,      /* IN */
unsigned short          psm,                /* IN */
L2CAP_EVENT_INDICATION  *pInd,              /* IN */
L2CAP_CALLBACKS         *pCall,             /* IN */
L2CAP_INTERFACE         *pInt,              /* OUT */
int                     *pcDataHeaders,     /* OUT */
int                     *pcDataTrailers,    /* OUT */
HANDLE                  *phDeviceContext    /* OUT */
);

int L2CAP_CloseDeviceContext
(
HANDLE                  hDeviceContext      /* IN */
);


extern DWORD L2CAPSetAllowSniffMode(__in  HANDLE hDeviceContext, __in bool AllowSniffMode);
extern DWORD L2CAPLogicalConnectionCount(__in  BD_ADDR *pRemoteDevice, __out DWORD   *pLogicalConnectionCount);

enum BTSecurityLevel;

//
//  L2CAPInitiateConnection is called by a service to initiate the establishment of an
//  L2CAP connection to the specified device.
//
//  The Security Mode 4 procedure is used which establishes the link security prior
//  to sending the L2CAP Connection Request packet.
//
//  Parameters:
//    hDeviceContext - Handle returned earlier by L2CAPEstablishDeviceContext
//    pCallContext   - Opaque pointer, will be passed back in callbacks
//    *pRemoteDevice - Specifies the remote device address to connect to
//    PSM            - Specifies the particular service to connect to
//    RequiredSecurityLevel - Security Level required for this connection
//    RequireEncryption     - TRUE if encryption is required for this connection
//
DWORD
L2CAPInitiateConnection(
    __in  HANDLE           hDeviceContext,
    __in  void            *pCallContext,
    __in  BD_ADDR         *pRemoteDevice,
    __in  unsigned short   PSM,
    __in  BTSecurityLevel  RequiredSecurityLevel,
    __in  BOOL             RequireEncryption);

//
//  L2CAPSendConfigRequest is called by a service to send a configure request
//  to the peer for the local logical channel specified by LocalCID.
//
int
L2CAPSendConfigRequest(
    HANDLE                     hDeviceContext, 
    void                      *pCallContext, 
    unsigned short             LocalCID,
    USHORT                     Flags,
    unsigned short             usInMTU, 
    unsigned short             usOutFlushTO, 
    struct btFLOWSPEC         *pOutFlow, 
    int                        cOptNum,
    struct btCONFIGEXTENSION **ppExtendedOptions);

//
//  L2CAPSendConfigResponse is called by a service to send a configure response
//  to the peer for the configure request packet we received with RequestPacketID.
//
int
L2CAPSendConfigResponse(
    HANDLE                     hDeviceContext, 
    void                      *pCallContext,
    BYTE                       RequestPacketID,
    unsigned short             LocalCID,
    USHORT                     Flags,
    USHORT                     ConfigResult,
    unsigned short             usOutMTU, 
    unsigned short             usInFlushTO, 
    struct btFLOWSPEC         *pInFlow, 
    int                        cOptNum,
    struct btCONFIGEXTENSION **ppExtendedOptions);

// Definition for Flags bits in Config Request and Response:
// Bit 0:     Continuation flag
// Bits 1-15: Reserved, should be 0
#define L2CAP_Continuation_Flag_Mask (1<<0)

enum BTSSPBondingType;

typedef ULONGLONG BT_ADDR;

DWORD 
BtdAuthenticateEx(
    __in  const BT_ADDR             *pRemoteDevice,
    __in  const BTSecurityLevel      RequiredSecurityLevel,
    __in  const BTSSPBondingType     BondingType,
    __in  const BOOL                 PersistKey);

typedef enum L2CAPConnectionResponseResult
{
    L2CAP_Connection_Result_Successful            = 0,
    L2CAP_Connection_Result_Pending               = 1,
    L2CAP_Connection_Result_Refused_Unknown_PSM   = 2,
    L2CAP_Connection_Result_Refused_Security      = 3,
    L2CAP_Connection_Result_Refused_No_Resources  = 4
} L2CAPConnectionResponseResult;

typedef enum L2CAPConnectionPendingStatus
{
    L2CAP_Connection_Pending_Status_No_Info        = 0,
    L2CAP_Connection_Pending_Status_Authenticating = 1,
    L2CAP_Connection_Pending_Status_Authorizing    = 2
} L2CAPConnectionPendingStatus;

typedef enum L2CAPConfigResult
{
    L2CAPConfigResult_Success                = 0,
    L2CAPConfigResult_UnacceptableParameters = 1,
    L2CAPConfigResult_Rejected               = 2,
    L2CAPConfigResult_UnknownOptions         = 3,
} L2CAPConfigResult;

typedef enum L2CAPConfigOptionType
{
    L2CAPConfigOptionType_MTU          = 1, // Option length=2,  Value is USHORT MTU in bytes
    L2CAPConfigOptionType_FlushTimeout = 2, // Option length=2,  Value is USHORT Flush Timeout in milliseconds
    L2CAPConfigOptionType_QoS          = 3, // Option length=22, Value is QoS option data structure
    L2CAPConfigOptionType_FCR          = 4  // Option length=9,  Value is FCR option data structure
} L2CAPConfigOptionType;

//
//  Data types and interfaces for Flow Control and Retransmission
//
enum L2CAP_Mode
{
    L2CAP_Mode_Basic = 0,
    L2CAP_Mode_Retransmission = 1,
    L2CAP_Mode_Flow_Control = 2
};

struct L2CAP_FCR_Settings
{
    L2CAP_Mode   Mode;
    BYTE         TxWindowSize;                 // 1-32
    BYTE         MaxTransmit;                  // 1-255
    UINT16       RetransmissionTimeoutMs;      // 100+ ms
    UINT16       MonitorTimeoutMs;             // 100+ ms
    UINT16       MaxPDUInformationPayloadSize; // 0-65531
};

int l2cap_InitializeOnce (void);
int l2cap_CreateDriverInstance (void);
int l2cap_CloseDriverInstance (void);
int l2cap_UninitializeOnce (void);

int l2cap_ProcessConsoleCommand (WCHAR *pString);

#define L2CAP_MTU                       672
#define L2CAP_MTUMIN                    48
#define L2CAP_MTUMAX                    65512

//
//  ------------------------------------ HCI ------------------------------------
//
//
//  Events
//
#define BT_ERROR_SUCCESS                                0x00
#define BT_ERROR_UNKNOWN_HCI_COMMAND                    0x01
#define BT_ERROR_NO_CONNECTION                          0x02
#define BT_ERROR_HARDWARE_FAILURE                       0x03
#define BT_ERROR_PAGE_TIMEOUT                           0x04
#define BT_ERROR_AUTHENTICATION_FAILURE                 0x05
#define BT_ERROR_KEY_MISSING                            0x06
#define BT_ERROR_MEMORY_FULL                            0x07
#define BT_ERROR_CONNECTION_TIMEOUT                     0x08
#define BT_ERROR_MAX_NUMBER_OF_CONNECTIONS              0x09
#define BT_ERROR_MAX_NUMBER_OF_SCO_CONNECTIONS          0x0a
#define BT_ERROR_MAX_NUMBER_OF_ACL_CONNECTIONS          0x0b
#define BT_ERROR_COMMAND_DISALLOWED                     0x0c
#define BT_ERROR_HOST_REJECTED_LIMITED_RESOURCES        0x0d
#define BT_ERROR_HOST_REJECTED_SECURITY_REASONS         0x0e
#define BT_ERROR_HOST_REJECTED_PERSONAL_DEVICE          0x0f
#define BT_ERROR_HOST_TIMEOUT                           0x10
#define BT_ERROR_UNSUPPORTED_FEATURE_OR_PARAMETER       0x11
#define BT_ERROR_INVALID_HCI_PARAMETER                  0x12
#define BT_ERROR_OETC_USER_ENDED                        0x13
#define BT_ERROR_OETC_LOW_RESOURCES                     0x14
#define BT_ERROR_OETC_POWERING_OFF                      0x15
#define BT_ERROR_CONNECTION_TERMINATED_BY_LOCAL_HOST    0x16
#define BT_ERROR_REPEATED_ATTEMPTS                      0x17
#define BT_ERROR_PAIRING_NOT_ALLOWED                    0x18
#define BT_ERROR_UNSUPPORTED_REMOTE_FEATURE             0x1a
#define BT_ERROR_UNSPECIFIED_ERROR                      0x1f
#define BT_ERROR_LMP_RESPONSE_TIMEOUT                   0x22

#define BT_PACKET_TYPE_DM1                              0x0008
#define BT_PACKET_TYPE_DH1                              0x0010
#define BT_PACKET_TYPE_HV1                              0x0020
#define BT_PACKET_TYPE_HV2                              0x0040
#define BT_PACKET_TYPE_HV3                              0x0080
#define BT_PACKET_TYPE_AUX1                             0x0200
#define BT_PACKET_TYPE_DM3                              0x0400
#define BT_PACKET_TYPE_DH3                              0x0800
#define BT_PACKET_TYPE_DM5                              0x4000
#define BT_PACKET_TYPE_DH5                              0x8000

#define BT_SYNC_PACKET_TYPE_HV1                         0x0001
#define BT_SYNC_PACKET_TYPE_HV2                         0x0002
#define BT_SYNC_PACKET_TYPE_HV3                         0x0004
#define BT_SYNC_PACKET_TYPE_EV3                         0x0008
#define BT_SYNC_PACKET_TYPE_EV4                         0x0010
#define BT_SYNC_PACKET_TYPE_EV5                         0x0020
#define BT_SYNC_PACKET_TYPE_2EV3                        0x0040
#define BT_SYNC_PACKET_TYPE_3EV3                        0x0080
#define BT_SYNC_PACKET_TYPE_2EV5                        0x0100
#define BT_SYNC_PACKET_TYPE_3EV5                        0x0200

#define BT_PAGE_SCAN_REP_MODE_R0                        0x00
#define BT_PAGE_SCAN_REP_MODE_R1                        0x01
#define BT_PAGE_SCAN_REP_MODE_R2                        0x02

#define BT_PAGE_SCAN_MODE_M                             0x00
#define BT_PAGE_SCAN_MODE_O1                            0x01
#define BT_PAGE_SCAN_MODE_O2                            0x02
#define BT_PAGE_SCAN_MODE_O3                            0x03

#define BT_SCAN_INQUIRY                                 0x01
#define BT_SCAN_PAGE                                    0x02

#define BD_MAXNAME                                      248

#define BT_GIAC                                         0x9e8b33
#define BT_LIAC                                         0x9e8b00

#define BT_HCI_INVALID_HANDLE                           0xffff

#define HCI_MAX_COMMAND_LENGTH                          257

#define HCI_MAX_ERR                                     0

int StatusToError (unsigned char status, int iGeneric);

typedef struct _HCI_EVENT_INDICATION        HCI_EVENT_INDICATION,   *PHCI_EVENT_INDICATION;
typedef struct _HCI_INTERFACE               HCI_INTERFACE,          *PHCI_INTERFACE;
typedef struct _HCI_CALLBACKS               HCI_CALLBACKS,          *PHCI_CALLBACKS;

//
// ReadRemoteExtendedFeaturesCompleteEventData is the structure of the event data indicated
// by the baseband (see BT 2.1 7.7.34)
//
struct HCIReadRemoteExtendedFeaturesCompleteEventData
{
    BYTE Status;
    BYTE ConnectionHandle[2];
    BYTE PageNumber;
    BYTE MaximumPageNumber;
    BYTE LMPFeatures[8];
};

//
// EncryptionKeyRefreshCompleteEventData is the structure of the event data indicated
// by the baseband (see BT 2.1 7.7.39)
//
struct HCIEncryptionKeyRefreshCompleteEventData
{
    BYTE Status;
    BYTE ConnectionHandle[2];
};

typedef int (*HCI_InquiryCompleteEvent)             (void *pUserContext, void *pCallContext, unsigned char status);
typedef int (*HCI_InquiryResultEvent)               (void *pUserContext, void *pCallContext, BD_ADDR *pba, unsigned char page_scan_repetition_mode, unsigned char page_scan_period_mode, unsigned char page_scan_mode, unsigned int class_of_device, unsigned short clock_offset);
typedef int (*HCI_ConnectionCompleteEvent)          (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, BD_ADDR *pba, unsigned char link_type, unsigned char encryption_mode);
typedef int (*HCI_ConnectionRequestEvent)           (void *pUserContext, void *pCallContext, BD_ADDR *pba, unsigned int class_of_device, unsigned char link_type);
typedef int (*HCI_DisconnectionCompleteEvent)       (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned char reason);
typedef int (*HCI_AuthenticationCompleteEvent)      (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle);
typedef int (*HCI_RemoteNameRequestCompleteEvent)   (void *pUserContext, void *pCallContext, unsigned char status, BD_ADDR *pba, unsigned char utf_name[248]);
typedef int (*HCI_EncryptionChangeEvent)            (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned char encryption_enable);
typedef int (*HCI_ChangeConnectionLinkKeyCompleteEvent) (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle);
typedef int (*HCI_MasterLinkKeyCompleteEvent)       (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned char key_flag);
typedef int (*HCI_ReadRemoteSupportedFeaturesCompleteEvent) (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned char lmp_features[8]);
typedef int (*HCI_ReadRemoteExtendedFeaturesCompleteEvent) (void *pUserContext, void *pCallContext, struct HCIReadRemoteExtendedFeaturesCompleteEventData *pEventData);
typedef int (*HCI_ReadRemoteVersionInformationCompleteEvent) (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned char lmp_version, unsigned short manufacturers_name, unsigned short lmp_subversion);
typedef int (*HCI_QoSSetupCompleteEvent)            (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned char flags, unsigned char service_type, unsigned int token_rate, unsigned int peak_bandwidth, unsigned int latency, unsigned int delay_variation);
typedef int (*HCI_CommandCompleteEvent)             (void *pUserContext, void *pCallContext, unsigned char num_hci_command_packets, unsigned short command_opcode, unsigned char *pReturnParameters);   // Not propagated up...
typedef int (*HCI_CommandStatusEvent)               (void *pUserContext, void *pCallContext, unsigned char status, unsigned char num_hci_command_packets, unsigned short command_opcode); // Not propagated up
typedef int (*HCI_HardwareErrorEvent)               (void *pUserContext, void *pCallContext, unsigned char hardware_code);
typedef int (*HCI_FlushOccuredEvent)                (void *pUserContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_EnhancedFlushCompleteEvent)        (void *pUserContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_RoleChangeEvent)                  (void *pUserContext, void *pCallContext, unsigned char status, BD_ADDR *pba, unsigned char new_role);
typedef int (*HCI_NumberOfCompletedPacketsEvent)    (void *pUserContext, void *pCallContext, unsigned short connection_handle, unsigned short num_of_completed_packets);
typedef int (*HCI_ModeChangeEvent)                  (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned char current_mode, unsigned short interval);
typedef int (*HCI_ReturnLinkKeysEvent)              (void *pUserContext, void *pCallContext, BD_ADDR *pba, unsigned char link_key[16]);
typedef int (*HCI_PINCodeRequestEvent)              (void *pUserContext, void *pCallContext, BD_ADDR *pba);
typedef int (*HCI_LinkKeyRequestEvent)              (void *pUserContext, void *pCallContext, BD_ADDR *pba);
typedef int (*HCI_LinkKeyNotificationEvent)         (void *pUserContext, void *pCallContext, BD_ADDR *pba, unsigned char link_key[16], unsigned char key_type, PBYTE pStoredKeyType);
typedef int (*HCI_LoopbackCommandEvent)             (void *pUserContext, void *pCallContext, unsigned char cLength, unsigned char *pHCICommandPacket);
typedef int (*HCI_DataBufferOverflowEvent)          (void *pUserContext, void *pCallContext, unsigned char link_type);
typedef int (*HCI_MaxSlotsChangeEvent)              (void *pUserContext, void *pCallContext, unsigned short connection_handle, unsigned char lmp_max_slots);
typedef int (*HCI_ReadClockOffsetCompleteEvent)     (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned short clock_offset);
typedef int (*HCI_ConnectionPacketTypeChangedEvent) (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned short packet_type);
typedef int (*HCI_QoSViolationEvent)                (void *pUserContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_PageScanModeChangeEvent)          (void *pUserContext, void *pCallContext, BD_ADDR *pba, unsigned char page_scan_mode);
typedef int (*HCI_PageScanRepetitionModeChangeEvent)(void *pUserContext, void *pCallContext, BD_ADDR *pba, unsigned char page_scan_repetition_mode);
typedef int (*HCI_CustomCodeEvent)                  (void *pUserContext, void *pCallContext, unsigned char cEventCode, unsigned char cEventLength, unsigned char *pEvent);
typedef int (*HCI_SynchronousConnectionCompleteEvent) (void *pUserContext, void *pCallContect, unsigned char status, unsigned short connection_handle, BD_ADDR *pba, unsigned char link_type, unsigned char transmission_interval, unsigned char retransmit_window, unsigned short rx_packet_length, unsigned short tx_packet_length, unsigned char air_mode);
typedef int (*HCI_SynchronousConnectionChangedEvent) (void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned char transmission_interval, unsigned char retransmit_window, unsigned short rx_packet_length, unsigned short tx_packet_length);
typedef int (*HCI_ExtendedInquiryResultEvent)       (void* pUserContext, void* pCallContext, BD_ADDR* pba, UCHAR page_scan_repetition_mode, UINT cod, USHORT clock_offset, UCHAR rssi, UCHAR eir[240]);
typedef int (*HCI_EncryptionKeyRefreshCompleteEvent) (void *pCallContext, BYTE status);

// HCI_SSPEvent handles the following Events (specified in the EventCode parameter):
//      HCI_IO_Capability_Request_Event
//      HCI_IO_Capability_Response_Event
//      HCI_User_Confirmation_Request_Event
//      HCI_User_Passkey_Request_Event
//      HCI_Remote_OOB_Data_Request_Event
//      HCI_Simple_Pairing_Complete_Event
//      HCI_User_Passkey_Notification_Event
//      HCI_Keypress_Notification_Event
//
typedef int (*HCI_SSPEvent)(void* pUserContext, void* pCallContext, BYTE EventCode, const struct BTSSPEvent *pEvent);

typedef struct _host_buffer_size {
    unsigned short ACL_Data_Packet_Length;
    unsigned char  SCO_Data_Packet_Length;
    unsigned short Total_Num_ACL_Data_Packets;
    unsigned short Total_Num_SCO_Data_Packets;
} HCI_Buffer_Size;

typedef struct _controller_event_packet {
    int             cSize;
    unsigned char   *pData;
} ControllerEvent;

typedef union _event_context {
    HCI_Buffer_Size     Host_Buffer;
    ControllerEvent     Event;
} HCIEventContext;

//
//  Commands
//
typedef int (*HCI_Inquiry_In)                       (HANDLE hDeviceContext, void *pCallContext, unsigned int LAP, unsigned char length, unsigned char num_responses);
typedef int (*HCI_Inquiry_Out)                      (void *pCallContext, unsigned char status);
typedef int (*HCI_InquiryCancel_In)                 (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_InquiryCancel_Out)                (void *pCallContext, unsigned char status);
typedef int (*HCI_PeriodicInquiryMode_In)           (HANDLE hDeviceContext, void *pCallContext, unsigned short max_period_len, unsigned short min_period_len, unsigned int LAP, unsigned char length, unsigned char num_responses);
typedef int (*HCI_PeriodicInquiryMode_Out)          (void *pCallContext, unsigned char status);
typedef int (*HCI_ExitPeriodicInquiryMode_In)       (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ExitPeriodicInquiryMode_Out)      (void *pCallContext, unsigned char status);
typedef int (*HCI_CreateConnection_In)              (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned short packet_type, unsigned char page_scan_repetition_mode, unsigned char page_scan_mode, unsigned short clock_offset, unsigned char allow_role_switch);
typedef int (*HCI_CreateConnection_Out)             (void *pCallContext, unsigned char status);
typedef int (*HCI_Disconnect_In)                    (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned char reason);
typedef int (*HCI_Disconnect_Out)                   (void *pCallContext, unsigned char status);
typedef int (*HCI_AddSCOConnection_In)              (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned short packet_type);
typedef int (*HCI_AddSCOConnection_Out)             (void *pCallContext, unsigned char status);
typedef int (*HCI_AcceptConnectionRequest_In)       (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned char role);
typedef int (*HCI_AcceptConnectionRequest_Out)      (void *pCallContext, unsigned char status);
typedef int (*HCI_RejectConnectionRequest_In)       (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned char reason);
typedef int (*HCI_RejectConnectionRequest_Out)      (void *pCallContext, unsigned char status);
typedef int (*HCI_LinkKeyRequestReply_In)           (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned char link_key[16], BYTE key_type);
typedef int (*HCI_LinkKeyRequestReply_Out)          (void *pCallContext, unsigned char status, BD_ADDR *pba);
typedef int (*HCI_LinkKeyRequestNegativeReply_In)   (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba);
typedef int (*HCI_LinkKeyRequestNegativeReply_Out)  (void *pCallContext, unsigned char status, BD_ADDR *pba);
typedef int (*HCI_PINCodeRequestReply_In)           (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned char PIN_length, unsigned char *PIN_code);
typedef int (*HCI_PINCodeRequestReply_Out)          (void *pCallContext, unsigned char status, BD_ADDR *pba);
typedef int (*HCI_PINCodeRequestNegativeReply_In)   (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba);
typedef int (*HCI_PINCodeRequestNegativeReply_Out)  (void *pCallContext, unsigned char status, BD_ADDR *pba);
typedef int (*HCI_ChangeConnectionPacketType_In)    (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned short packet_type);
typedef int (*HCI_ChangeConnectionPacketType_Out)   (void *pCallContext, unsigned char status);
typedef int (*HCI_AuthenticationRequested_In)       (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_AuthenticationRequested_Out)      (void *pCallContext, unsigned char status);
typedef int (*HCI_SetConnectionEncryption_In)       (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned char encryption_enable);
typedef int (*HCI_SetConnectionEncryption_Out)      (void *pCallContext, unsigned char status);
typedef int (*HCI_ChangeConnectionLinkKey_In)       (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_ChangeConnectionLinkKey_Out)      (void *pCallContext, unsigned char status);
typedef int (*HCI_MasterLinkKey_In)                 (HANDLE hDeviceContext, void *pCallContext, unsigned char key_flag);
typedef int (*HCI_MasterLinkKey_Out)                (void *pCallContext, unsigned char status);
typedef int (*HCI_RemoteNameRequest_In)             (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned char page_scan_repetition_mode, unsigned char page_scan_mode, unsigned short clock_offset);
typedef int (*HCI_RemoteNameRequest_Out)            (void *pCallContext, unsigned char status);
typedef int (*HCI_RemoteNameRequestCancel_Out)      (void *pCallContext, unsigned char status, BD_ADDR *pba);
typedef int (*HCI_ReadRemoteSupportedFeatures_In)   (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_ReadRemoteSupportedFeatures_Out)  (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadRemoteVersionInformation_In)  (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_ReadRemoteVersionInformation_Out) (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadClockOffset_In)               (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_ReadClockOffset_Out)              (void *pCallContext, unsigned char status);
typedef int (*HCI_HoldMode_In)                      (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned short hold_mode_max_interval, unsigned short hold_mode_min_interval);
typedef int (*HCI_HoldMode_Out)                     (void *pCallContext, unsigned char status);
typedef int (*HCI_SniffMode_In)                     (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned short sniff_max_interval, unsigned short sniff_min_interval, unsigned short sniff_attempt, unsigned short sniff_timeout);
typedef int (*HCI_SniffMode_Out)                    (void *pCallContext, unsigned char status);
typedef int (*HCI_ExitSniffMode_In)                 (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_ExitSniffMode_Out)                (void *pCallContext, unsigned char status);
typedef int (*HCI_SSRMode_In)                       (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned short max_latency, unsigned short min_remote_timeout, unsigned short min_local_timeout);
typedef int (*HCI_SSRMode_Out)                      (void *pCallContext, unsigned char status);
typedef int (*HCI_ParkMode_In)                      (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned short beacon_max_interval, unsigned short beacon_min_interval);
typedef int (*HCI_ParkMode_Out)                     (void *pCallContext, unsigned char status);
typedef int (*HCI_ExitParkMode_In)                  (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_ExitParkMode_Out)                 (void *pCallContext, unsigned char status);
typedef int (*HCI_QoSSetup_In)                      (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned char flags, unsigned char service_type, unsigned int token_rate, unsigned int peak_bandwidth, unsigned int latency, unsigned int delay_variation);
typedef int (*HCI_QoSSetup_Out)                     (void *pCallContext, unsigned char status);
typedef int (*HCI_RoleDiscovery_In)                 (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_RoleDiscovery_Out)                (void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned char current_role);
typedef int (*HCI_SwitchRole_In)                    (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned char role);
typedef int (*HCI_SwitchRole_Out)                   (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadLinkPolicySettings_In)        (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_ReadLinkPolicySettings_Out)       (void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned short link_policy_settings);
typedef int (*HCI_WriteLinkPolicySettings_In)       (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned short link_policy_settings);
typedef int (*HCI_WriteLinkPolicySettings_Out)      (void *pCallContext, unsigned char status, unsigned short connection_handle);
typedef int (*HCI_SetEventMask_In)                  (HANDLE hDeviceContext, void *pCallContext, unsigned char event_mask[8]);
typedef int (*HCI_SetEventMask_Out)                 (void *pCallContext, unsigned char status);
typedef int (*HCI_Reset_In)                         (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_Reset_Out)                        (void *pCallContext, unsigned char status);
typedef int (*HCI_SetEventFilter_In)                (HANDLE hDeviceContext, void *pCallContext, unsigned char filter_type, unsigned char filter_condition_type, unsigned char condition[7]);
typedef int (*HCI_SetEventFilter_Out)               (void *pCallContext, unsigned char status);
typedef int (*HCI_Flush_In)                         (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_Flush_Out)                        (void *pCallContext, unsigned char status, unsigned short connection_handle);
typedef int (*HCI_EnhancedFlush_In)                 (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned short packet_type);
typedef int (*HCI_EnhancedFlush_Out)                (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadPINType_In)                   (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadPINType_Out)                  (void *pCallContext, unsigned char status, unsigned char PIN_type);
typedef int (*HCI_WritePINType_In)                  (HANDLE hDeviceContext, void *pCallContext, char PIN_type);
typedef int (*HCI_WritePINType_Out)                 (void *pCallContext, unsigned char status);
typedef int (*HCI_CreateNewUnitKey_In)              (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_CreateNewUnitKey_Out)             (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadStoredLinkKey_In)             (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned char read_all_flag);
typedef int (*HCI_ReadStoredLinkKey_Out)            (void *pCallContext, unsigned char status, unsigned short max_num_keys, unsigned short num_keys_read);
typedef int (*HCI_WriteStoredLinkKey_In)            (HANDLE hDeviceContext, void *pCallContext, unsigned char num_keys_to_write, BD_ADDR *pba_list, unsigned char *link_key_list_16bytes_each);
typedef int (*HCI_WriteStoredLinkKey_Out)           (void *pCallContext, unsigned char status, unsigned char num_keys_written);
typedef int (*HCI_DeleteStoredLinkKey_In)           (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned char delete_all_flag);
typedef int (*HCI_DeleteStoredLinkKey_Out)          (void *pCallContext, unsigned char status, unsigned short num_keys_deleted);
typedef int (*HCI_ChangeLocalName_In)               (HANDLE hDeviceContext, void *pCallContext, unsigned char utf_name[248]);
typedef int (*HCI_ChangeLocalName_Out)              (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadLocalName_In)                 (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadLocalName_Out)                (void *pCallContext, unsigned char status, unsigned char utf_name[248]);
typedef int (*HCI_ReadConnectionAcceptTimeout_In)   (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadConnectionAcceptTimeout_Out)  (void *pCallContext, unsigned char status, unsigned short conn_accept_timeout);
typedef int (*HCI_WriteConnectionAcceptTimeout_In)  (HANDLE hDeviceContext, void *pCallContext, unsigned short conn_accept_timeout);
typedef int (*HCI_WriteConnectionAcceptTimeout_Out) (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadPageTimeout_In)               (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadPageTimeout_Out)              (void *pCallContext, unsigned char status, unsigned short page_timeout);
typedef int (*HCI_WritePageTimeout_In)              (HANDLE hDeviceContext, void *pCallContext, unsigned short page_timeout);
typedef int (*HCI_WritePageTimeout_Out)             (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadScanEnable_In)                (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadScanEnable_Out)               (void *pCallContext, unsigned char status, unsigned char scan_enable);
typedef int (*HCI_WriteScanEnable_In)               (HANDLE hDeviceContext, void *pCallContext, unsigned char scan_enable);
typedef int (*HCI_WriteScanEnable_Out)              (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadPageScanActivity_In)          (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadPageScanActivity_Out)         (void *pCallContext, unsigned char status, unsigned short page_scan_interval, unsigned short page_scan_window);
typedef int (*HCI_WritePageScanActivity_In)         (HANDLE hDeviceContext, void *pCallContext, unsigned short page_scan_interval, unsigned short page_scan_window);
typedef int (*HCI_WritePageScanActivity_Out)        (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadInquiryScanActivity_In)       (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadInquiryScanActivity_Out)      (void *pCallContext, unsigned char status, unsigned short inquiry_scan_interval, unsigned short inquiry_scan_window);
typedef int (*HCI_WriteInquiryScanActivity_In)      (HANDLE hDeviceContext, void *pCallContext, unsigned short inquiry_scan_interval, unsigned short inquiry_scan_window);
typedef int (*HCI_WriteInquiryScanActivity_Out)     (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadAuthenticationEnable_In)      (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadAuthenticationEnable_Out)     (void *pCallContext, unsigned char status, unsigned char authentication_enable);
typedef int (*HCI_WriteAuthenticationEnable_In)     (HANDLE hDeviceContext, void *pCallContext, unsigned char authentication_enable);
typedef int (*HCI_WriteAuthenticationEnable_Out)    (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadEncryptionMode_In)            (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadEncryptionMode_Out)           (void *pCallContext, unsigned char status, unsigned char encryption_mode);
typedef int (*HCI_WriteEncryptionMode_In)           (HANDLE hDeviceContext, void *pCallContext, unsigned char encryption_mode);
typedef int (*HCI_WriteEncryptionMode_Out)          (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadClassOfDevice_In)             (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadClassOfDevice_Out)            (void *pCallContext, unsigned char status, unsigned int class_of_device);
typedef int (*HCI_WriteClassOfDevice_In)            (HANDLE hDeviceContext, void *pCallContext, unsigned int class_of_device);
typedef int (*HCI_WriteClassOfDevice_Out)           (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadVoiceSetting_In)              (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadVoiceSetting_Out)             (void *pCallContext, unsigned char status, unsigned short voice_channel_setting);
typedef int (*HCI_WriteVoiceSetting_In)             (HANDLE hDeviceContext, void *pCallContext, unsigned short voice_channel_setting);
typedef int (*HCI_WriteVoiceSetting_Out)            (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadAutomaticFlushTimeout_In)     (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_ReadAutomaticFlushTimeout_Out)    (void *pCallContext, unsigned char status, unsigned short connectin_handle, unsigned short flush_timeout);
typedef int (*HCI_WriteAutomaticFlushTimeout_In)    (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned short flush_timeout);
typedef int (*HCI_WriteAutomaticFlushTimeout_Out)   (void *pCallContext, unsigned char status, unsigned short connection_handle);
typedef int (*HCI_ReadNumBroadcastRetransmissions_In)    (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadNumBroadcastRetransmissions_Out)   (void *pCallContext, unsigned char status, unsigned char num_broadcast_retran);
typedef int (*HCI_WriteNumBroadcastRetransmissions_In)   (HANDLE hDeviceContext, void *pCallContext, unsigned char num_broadcast_retran);
typedef int (*HCI_WriteNumBroadcastRetransmissions_Out)  (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadHoldModeActivity_In)          (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadHoldModeActivity_Out)         (void *pCallContext, unsigned char status, unsigned char hold_mode_activity);
typedef int (*HCI_WriteHoldModeActivity_In)         (HANDLE hDeviceContext, void *pCallContext, unsigned char hold_mode_activity);
typedef int (*HCI_WriteHoldModeActivity_Out)        (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadTransmitPowerLevel_In)        (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned char type);
typedef int (*HCI_ReadTransmitPowerLevel_Out)       (void *pCallContext, unsigned char status, unsigned short connection_handle, char power_level);
typedef int (*HCI_ReadSCOFlowControlEnable_In)              (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadSCOFlowControlEnable_Out)             (void *pCallContext, unsigned char status, unsigned char SCO_flow_control_enable);
typedef int (*HCI_WriteSCOFlowControlEnable_In)             (HANDLE hDeviceContext, void *pCallContext, unsigned char SCO_flow_control_enable);
typedef int (*HCI_WriteSCOFlowControlEnable_Out)            (void *pCallContext, unsigned char status);
typedef int (*HCI_SetHostControllerToHostFlowControl_In)     (HANDLE hDeviceContext, void *pCallContext, unsigned char flow_control_enable);
typedef int (*HCI_SetHostControllerToHostFlowControl_Out)    (void *pCallContext, unsigned char status);
typedef int (*HCI_HostBufferSize_In)                (HANDLE hDeviceContext, void *pCallContext, unsigned short host_acl_data_packet_length, unsigned char host_sco_data_packet_length, unsigned short host_total_num_acl_data_packets, unsigned short host_total_num_sco_data_packets);
typedef int (*HCI_HostBufferSize_Out)               (void *pCallContext, unsigned char status);
typedef int (*HCI_HostNumberOfCompletedPackets)     (HANDLE hDeviceContext, void *pCallContext, unsigned char number_of_handles, unsigned short *pconnection_handle_list, unsigned short *phost_num_of_completed_packets);
typedef int (*HCI_ReadLinkSupervisionTimeout_In)    (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_ReadLinkSupervisionTimeout_Out)   (void *pCallContext, unsigned char status, unsigned short link_supervision_timeout);
typedef int (*HCI_WriteLinkSupervisionTimeout_In)   (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, unsigned short link_supervision_timeout);
typedef int (*HCI_WriteLinkSupervisionTimeout_Out)  (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadNumberOfSupportedIAC_In)      (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadNumberOfSupportedIAC_Out)     (void *pCallContext, unsigned char status, unsigned char num_support_iac);
typedef int (*HCI_ReadCurrentIACLAP_In)             (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadCurrentIACLAP_Out)            (void *pCallContext, unsigned char status, unsigned char num_current_iac, unsigned char *piac_lap_list);
typedef int (*HCI_WriteCurrentIACLAP_In)            (HANDLE hDeviceContext, void *pCallContext, unsigned char num_current_iac, unsigned char *piac_lap_list);
typedef int (*HCI_WriteCurrentIACLAP_Out)           (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadPageScanPeriodMode_In)        (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadPageScanPeriodMode_Out)       (void *pCallContext, unsigned char status, unsigned char page_scan_period_mode);
typedef int (*HCI_WritePageScanPeriodMode_In)       (HANDLE hDeviceContext, void *pCallContext, unsigned char page_scan_period_mode);
typedef int (*HCI_WritePageScanPeriodMode_Out)      (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadPageScanMode_In)              (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadPageScanMode_Out)             (void *pCallContext, unsigned char status, unsigned char page_scan_mode);
typedef int (*HCI_WritePageScanMode_In)             (HANDLE hDeviceContext, void *pCallContext, unsigned char page_scan_mode);
typedef int (*HCI_WritePageScanMode_Out)            (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadLocalVersionInformation_In)   (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadLocalVersionInformation_Out)  (void *pCallContext, unsigned char status, unsigned char hci_version, unsigned short hci_revision, unsigned char lmp_version, unsigned short manufacturer_name, unsigned short lmp_subversion);
typedef int (*HCI_ReadLocalSupportedFeatures_In)    (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadLocalSupportedFeatures_Out)   (void *pCallContext, unsigned char status, unsigned char features_mask[8]);
typedef int (*HCI_ReadBufferSize_In)                (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadBufferSize_Out)               (void *pCallContext, unsigned char status, unsigned short hci_acl_data_packet_length, unsigned char hci_sco_data_packet_length, unsigned short hci_total_num_acl_data_packet, unsigned short hci_total_num_sco_data_packets);
typedef int (*HCI_ReadCountryCode_In)               (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadCountryCode_Out)              (void *pCallContext, unsigned char status, unsigned char country_code);
typedef int (*HCI_ReadBDADDR_In)                    (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadBDADDR_Out)                   (void *pCallContext, unsigned char status, BD_ADDR *pba);
typedef int (*HCI_ReadFailedContactCounter_In)      (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_ReadFailedContactCounter_Out)     (void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned short failed_contact_counter);
typedef int (*HCI_ResetFailedContactCounter_In)     (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_ResetFailedContactCounter_Out)    (void *pCallContext, unsigned char status, unsigned short connection_handle);
typedef int (*HCI_GetLinkQuality_In)                (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_GetLinkQuality_Out)               (void *pCallContext, unsigned char status, unsigned short connection_handle, unsigned char link_quality);
typedef int (*HCI_ReadRSSI_In)                      (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle);
typedef int (*HCI_ReadRSSI_Out)                     (void *pCallContext, unsigned char status, unsigned short connection_handle, char RSSI);
typedef int (*HCI_ReadLoopbackMode_In)              (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadLoopbackMode_Out)             (void *pCallContext, unsigned char status, unsigned char loopback_mode);
typedef int (*HCI_WriteLoopbackMode_In)             (HANDLE hDeviceContext, void *pCallContext, unsigned char loopback_mode);
typedef int (*HCI_WriteLoopbackMode_Out)            (void *pCallContext, unsigned char status);
typedef int (*HCI_EnableDeviceUnderTestMode_In)     (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_EnableDeviceUnderTestMode_Out)    (void *pCallContext, unsigned char status);
typedef int (*HCI_WritePageScanType_In)             (HANDLE hDeviceContext, void *pCallContext, unsigned char page_scan_type);
typedef int (*HCI_WritePageScanType_Out)            (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadPageScanType_In)              (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadPageScanType_Out)             (void *pCallContext, unsigned char status, unsigned char page_scan_type);
typedef int (*HCI_WriteInquiryScanType_In)          (HANDLE hDeviceContext, void *pCallContext, unsigned char inquiry_scan_type);
typedef int (*HCI_WriteInquiryScanType_Out)         (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadInquiryScanType_In)           (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadInquiryScanType_Out)          (void *pCallContext, unsigned char status, unsigned char inquiry_scan_type);
typedef int (*HCI_SetupSynchronousConnection_In)    (HANDLE hDeviceContext, void *pCallContext, unsigned short hAcl, unsigned int tx_bandwidth, unsigned int rx_bandwidth, unsigned short max_latency, unsigned short voice_setting, unsigned char retransmission_effort, unsigned short packet_type);
typedef int (*HCI_SetupSynchronousConnection_Out)   (void *pCallContext, unsigned char status); 
typedef int (*HCI_AcceptSynchronousConnectionRequest_In) (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned int tx_bandwidth, unsigned int rx_bandwidth, unsigned short max_latency, unsigned short content_format, unsigned char retransmission_effort, unsigned short packet_type);
typedef int (*HCI_AcceptSynchronousConnectionRequest_Out) (void *pCallContext, unsigned char status);
typedef int (*HCI_RejectSynchronousConnectionRequest_In) (HANDLE hDeviceContext, void *pCallContext, BD_ADDR *pba, unsigned char reason);
typedef int (*HCI_RejectSynchronousConnectionRequest_Out) (void *pCallContext, unsigned char status);
typedef int (*HCI_WriteExtendedInquiryResponse_In)  (HANDLE hDevideContext, void *pCallContext, unsigned char fec_required, unsigned char extended_inquiry_response[240]);
typedef int (*HCI_WriteExtendedInquiryResponse_Out) (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadExtendedInquiryResponse_In)   (HANDLE hDevideContext, void *pCallContext);
typedef int (*HCI_ReadExtendedInquiryResponse_Out)  (void *pCallContext, unsigned char status, unsigned char fec_required, unsigned char extended_inquiry_response[240]);
typedef int (*HCI_WriteInquiryMode_In)              (HANDLE hDeviceContext, void *pCallContext, unsigned char inquiry_mode);
typedef int (*HCI_WriteInquiryMode_Out)             (void *pCallContext, unsigned char status);
typedef int (*HCI_ReadInquiryMode_In)               (HANDLE hDeviceContext, void *pCallContext);
typedef int (*HCI_ReadInquiryMode_Out)              (void *pCallContext, unsigned char status, unsigned char inquiry_mode);
typedef int (*HCI_SSPCommandComplete_Out)           (void *pCallContext, unsigned short usOpCode, unsigned char status, unsigned char *pData, ULONG cbData);
typedef int (*HCI_RefreshEncryptionKeyComplete_Out) (void *pCallContext, unsigned char   status);

#define BTH_MARKER_NONE         0
#define BTH_MARKER_CONNECTION   1
#define BTH_MARKER_ADDRESS      2

typedef struct _packet_marker {
    unsigned int        fMarker;
    union {
        BD_ADDR         ba;
        unsigned short  connection_handle;
    };
} PacketMarker;

//
// HCI_NO_EVENT is only legal if command does not have associated event, not if the layer is simply not interested in processing it.
// If misused, serious mismatch in command/event flow will result. As of this writing, the only HCI command that does not have associated
// event is HCI_Host_Number_Of_Completed_Packets
//
#define HCI_NO_EVENT                                    0xff

typedef int (*HCI_CustomCode_In)                    (HANDLE hDeviceContext, void *pCallContext, unsigned short usOpCode, unsigned short cPacketSize, unsigned char *pPacket, PacketMarker *pMarker, unsigned char cEvent);

typedef int (*HCI_DataPacketUp)                     (void *pUserContext, unsigned short connection_handle, BD_BUFFER *pBuffer);
typedef int (*HCI_DataPacketUpAclUnbuffered)        (void *pUserContext, unsigned short connection_handle, unsigned char boundary, unsigned char broadcast, BD_BUFFER *pBuffer);
typedef int (*HCI_DataPacketDown_In)                (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, BD_BUFFER *pBuffer);
typedef int (*HCI_DataPacketDown_Out)               (void *pCallContext, int iError);
typedef int (*HCI_DataPacketDownEx_In)              (HANDLE hDeviceContext, void *pCallContext, unsigned short connection_handle, BD_BUFFER *pBuffer, BOOL bFlushable);

struct _HCI_EVENT_INDICATION {
    HCI_InquiryCompleteEvent                hci_InquiryCompleteEvent;
    HCI_InquiryResultEvent                  hci_InquiryResultEvent;
    HCI_ConnectionCompleteEvent             hci_ConnectionCompleteEvent;
    HCI_ConnectionRequestEvent              hci_ConnectionRequestEvent;
    HCI_DisconnectionCompleteEvent          hci_DisconnectionCompleteEvent;
    HCI_AuthenticationCompleteEvent         hci_AuthenticationCompleteEvent;
    HCI_RemoteNameRequestCompleteEvent      hci_RemoteNameRequestCompleteEvent;
    HCI_EncryptionChangeEvent               hci_EncryptionChangeEvent;
    HCI_ChangeConnectionLinkKeyCompleteEvent        hci_ChangeConnectionLinkKeyCompleteEvent;
    HCI_MasterLinkKeyCompleteEvent                  hci_MasterLinkKeyCompleteEvent;
    HCI_ReadRemoteSupportedFeaturesCompleteEvent    hci_ReadRemoteSupportedFeaturesCompleteEvent;
    HCI_ReadRemoteExtendedFeaturesCompleteEvent     hci_ReadRemoteExtendedFeaturesCompleteEvent;
    HCI_ReadRemoteVersionInformationCompleteEvent   hci_ReadRemoteVersionInformationCompleteEvent;
    HCI_QoSSetupCompleteEvent               hci_QoSSetupCompleteEvent;
    HCI_CommandCompleteEvent                hci_CommandCompleteEvent;   // Must be NULL; never called
    HCI_CommandStatusEvent                  hci_CommandStatusEvent;     // Must be NULL; never called
    HCI_HardwareErrorEvent                  hci_HardwareErrorEvent; // Propagated up all the stacks
    HCI_FlushOccuredEvent                   hci_FlushOccuredEvent;
    HCI_EnhancedFlushCompleteEvent          hci_EnhancedFlushCompleteEvent; 
    HCI_RoleChangeEvent                     hci_RoleChangeEvent;    // Propagated up all the stacks
    HCI_NumberOfCompletedPacketsEvent       hci_NumberOfCompletedPacketsEvent;
    HCI_ModeChangeEvent                     hci_ModeChangeEvent;
    HCI_ReturnLinkKeysEvent                 hci_ReturnLinkKeysEvent;
    HCI_PINCodeRequestEvent                 hci_PINCodeRequestEvent;
    HCI_LinkKeyRequestEvent                 hci_LinkKeyRequestEvent;
    HCI_LinkKeyNotificationEvent            hci_LinkKeyNotificationEvent;
    HCI_LoopbackCommandEvent                hci_LoopbackCommandEvent;
    HCI_DataBufferOverflowEvent             hci_DataBufferOverflowEvent;
    HCI_MaxSlotsChangeEvent                 hci_MaxSlotsChangeEvent;
    HCI_ReadClockOffsetCompleteEvent        hci_ReadClockOffsetCompleteEvent;
    HCI_ConnectionPacketTypeChangedEvent    hci_ConnectionPacketTypeChangedEvent;
    HCI_QoSViolationEvent                   hci_QoSViolationEvent;
    HCI_PageScanModeChangeEvent             hci_PageScanModeChangeEvent;
    HCI_PageScanRepetitionModeChangeEvent   hci_PageScanRepetitionModeChangeEvent;

    HCI_DataPacketUp                        hci_DataPacketUp;
    HCI_DataPacketUpAclUnbuffered           hci_DataPacketUpAclUnbuffered;

    HCI_CustomCodeEvent                     hci_CustomCodeEvent;

    BT_LAYER_STACK_EVENT_IND                hci_StackEvent;
    
    // V2 members
    
    HCI_SynchronousConnectionCompleteEvent  hci_SynchronousConnectionCompleteEvent;
    HCI_SynchronousConnectionChangedEvent   hci_SynchronousConnectionChangedEvent;

    // V3 members

    HCI_ExtendedInquiryResultEvent          hci_ExtendedInquiryResultEvent;

    HCI_SSPEvent                            hci_SSPEvent; // Handles 8 SSP Event codes

    HCI_EncryptionKeyRefreshCompleteEvent   hci_EncryptionKeyRefreshCompleteEvent;
};

#define HCI_EVENT_IND_V1_SIZE(p) ((char*)&((p)->hci_SynchronousConnectionCompleteEvent) - (char*)p)

struct _HCI_CALLBACKS {
    HCI_Inquiry_Out                         hci_Inquiry_Out;
    HCI_InquiryCancel_Out                   hci_InquiryCancel_Out;
    HCI_PeriodicInquiryMode_Out             hci_PeriodicInquiryMode_Out;
    HCI_ExitPeriodicInquiryMode_Out         hci_ExitPeriodicInquiryMode_Out;
    HCI_CreateConnection_Out                hci_CreateConnection_Out;
    HCI_Disconnect_Out                      hci_Disconnect_Out;
    HCI_AddSCOConnection_Out                hci_AddSCOConnection_Out;
    HCI_AcceptConnectionRequest_Out         hci_AcceptConnectionRequest_Out;
    HCI_RejectConnectionRequest_Out         hci_RejectConnectionRequest_Out;
    HCI_LinkKeyRequestReply_Out             hci_LinkKeyRequestReply_Out;
    HCI_LinkKeyRequestNegativeReply_Out     hci_LinkKeyRequestNegativeReply_Out;
    HCI_PINCodeRequestReply_Out             hci_PINCodeRequestReply_Out;
    HCI_PINCodeRequestNegativeReply_Out     hci_PINCodeRequestNegativeReply_Out;
    HCI_ChangeConnectionPacketType_Out      hci_ChangeConnectionPacketType_Out;
    HCI_AuthenticationRequested_Out         hci_AuthenticationRequested_Out;
    HCI_SetConnectionEncryption_Out         hci_SetConnectionEncryption_Out;
    HCI_ChangeConnectionLinkKey_Out         hci_ChangeConnectionLinkKey_Out;
    HCI_MasterLinkKey_Out                   hci_MasterLinkKey_Out;
    HCI_RemoteNameRequest_Out               hci_RemoteNameRequest_Out;
    HCI_RemoteNameRequestCancel_Out         hci_RemoteNameRequestCancel_Out;       // Called when a remote name request cancel command complete event occurs
    HCI_ReadRemoteSupportedFeatures_Out     hci_ReadRemoteSupportedFeatures_Out;
    HCI_ReadRemoteVersionInformation_Out    hci_ReadRemoteVersionInformation_Out;
    HCI_ReadClockOffset_Out                 hci_ReadClockOffset_Out;
    HCI_HoldMode_Out                        hci_HoldMode_Out;
    HCI_SniffMode_Out                       hci_SniffMode_Out;
    HCI_ExitSniffMode_Out                   hci_ExitSniffMode_Out;
    HCI_SSRMode_Out                         hci_SSRMode_Out;    
    HCI_ParkMode_Out                        hci_ParkMode_Out;
    HCI_ExitParkMode_Out                    hci_ExitParkMode_Out;
    HCI_QoSSetup_Out                        hci_QoSSetup_Out;
    HCI_RoleDiscovery_Out                   hci_RoleDiscovery_Out;
    HCI_SwitchRole_Out                      hci_SwitchRole_Out;
    HCI_ReadLinkPolicySettings_Out          hci_ReadLinkPolicySettings_Out;
    HCI_WriteLinkPolicySettings_Out         hci_WriteLinkPolicySettings_Out;
    HCI_SetEventMask_Out                    hci_SetEventMask_Out;
    HCI_Reset_Out                           hci_Reset_Out;
    HCI_SetEventFilter_Out                  hci_SetEventFilter_Out;
    HCI_Flush_Out                           hci_Flush_Out;
    HCI_EnhancedFlush_Out                   hci_EnhancedFlush_Out;
    HCI_ReadPINType_Out                     hci_ReadPINType_Out;
    HCI_WritePINType_Out                    hci_WritePINType_Out;
    HCI_CreateNewUnitKey_Out                hci_CreateNewUnitKey_Out;
    HCI_ReadStoredLinkKey_Out               hci_ReadStoredLinkKey_Out;
    HCI_WriteStoredLinkKey_Out              hci_WriteStoredLinkKey_Out;
    HCI_DeleteStoredLinkKey_Out             hci_DeleteStoredLinkKey_Out;
    HCI_ChangeLocalName_Out                 hci_ChangeLocalName_Out;
    HCI_ReadLocalName_Out                   hci_ReadLocalName_Out;
    HCI_ReadConnectionAcceptTimeout_Out     hci_ReadConnectionAcceptTimeout_Out;
    HCI_WriteConnectionAcceptTimeout_Out    hci_WriteConnectionAcceptTimeout_Out;
    HCI_ReadPageTimeout_Out                 hci_ReadPageTimeout_Out;
    HCI_WritePageTimeout_Out                hci_WritePageTimeout_Out;
    HCI_ReadScanEnable_Out                  hci_ReadScanEnable_Out;
    HCI_WriteScanEnable_Out                 hci_WriteScanEnable_Out;
    HCI_ReadPageScanActivity_Out            hci_ReadPageScanActivity_Out;
    HCI_WritePageScanActivity_Out           hci_WritePageScanActivity_Out;
    HCI_ReadInquiryScanActivity_Out         hci_ReadInquiryScanActivity_Out;
    HCI_WriteInquiryScanActivity_Out        hci_WriteInquiryScanActivity_Out;
    HCI_ReadAuthenticationEnable_Out        hci_ReadAuthenticationEnable_Out;
    HCI_WriteAuthenticationEnable_Out       hci_WriteAuthenticationEnable_Out;
    HCI_ReadEncryptionMode_Out              hci_ReadEncryptionMode_Out;
    HCI_WriteEncryptionMode_Out             hci_WriteEncryptionMode_Out;
    HCI_ReadClassOfDevice_Out               hci_ReadClassOfDevice_Out;
    HCI_WriteClassOfDevice_Out              hci_WriteClassOfDevice_Out;
    HCI_ReadVoiceSetting_Out                hci_ReadVoiceSetting_Out;
    HCI_WriteVoiceSetting_Out               hci_WriteVoiceSetting_Out;
    HCI_ReadAutomaticFlushTimeout_Out       hci_ReadAutomaticFlushTimeout_Out;
    HCI_WriteAutomaticFlushTimeout_Out      hci_WriteAutomaticFlushTimeout_Out;
    HCI_ReadNumBroadcastRetransmissions_Out hci_ReadNumBroadcastRetransmissions_Out;
    HCI_WriteNumBroadcastRetransmissions_Out hci_WriteNumBroadcastRetransmissions_Out;
    HCI_ReadHoldModeActivity_Out            hci_ReadHoldModeActivity_Out;
    HCI_WriteHoldModeActivity_Out           hci_WriteHoldModeActivity_Out;
    HCI_ReadTransmitPowerLevel_Out          hci_ReadTransmitPowerLevel_Out;
    HCI_ReadSCOFlowControlEnable_Out        hci_ReadSCOFlowControlEnable_Out;
    HCI_WriteSCOFlowControlEnable_Out       hci_WriteSCOFlowControlEnable_Out;
    HCI_SetHostControllerToHostFlowControl_Out hci_SetHostControllerToHostFlowControl_Out;
    HCI_HostBufferSize_Out                  hci_HostBufferSize_Out;
    HCI_ReadLinkSupervisionTimeout_Out      hci_ReadLinkSupervisionTimeout_Out;
    HCI_WriteLinkSupervisionTimeout_Out     hci_WriteLinkSupervisionTimeout_Out;
    HCI_ReadNumberOfSupportedIAC_Out        hci_ReadNumberOfSupportedIAC_Out;
    HCI_ReadCurrentIACLAP_Out               hci_ReadCurrentIACLAP_Out;
    HCI_WriteCurrentIACLAP_Out              hci_WriteCurrentIACLAP_Out;
    HCI_ReadPageScanPeriodMode_Out          hci_ReadPageScanPeriodMode_Out;
    HCI_WritePageScanPeriodMode_Out         hci_WritePageScanPeriodMode_Out;
    HCI_ReadPageScanMode_Out                hci_ReadPageScanMode_Out;
    HCI_WritePageScanMode_Out               hci_WritePageScanMode_Out;
    HCI_ReadLocalVersionInformation_Out     hci_ReadLocalVersionInformation_Out;
    HCI_ReadLocalSupportedFeatures_Out      hci_ReadLocalSupportedFeatures_Out;
    HCI_ReadBufferSize_Out                  hci_ReadBufferSize_Out;
    HCI_ReadCountryCode_Out                 hci_ReadCountryCode_Out;
    HCI_ReadBDADDR_Out                      hci_ReadBDADDR_Out;
    HCI_ReadFailedContactCounter_Out        hci_ReadFailedContactCounter_Out;
    HCI_ResetFailedContactCounter_Out       hci_ResetFailedContactCounter_Out;
    HCI_GetLinkQuality_Out                  hci_GetLinkQuality_Out;
    HCI_ReadRSSI_Out                        hci_ReadRSSI_Out;
    HCI_ReadLoopbackMode_Out                hci_ReadLoopbackMode_Out;
    HCI_WriteLoopbackMode_Out               hci_WriteLoopbackMode_Out;
    HCI_EnableDeviceUnderTestMode_Out       hci_EnableDeviceUnderTestMode_Out;

    HCI_DataPacketDown_Out                  hci_DataPacketDown_Out;

    BT_LAYER_CALL_ABORTED                   hci_CallAborted;
    
    // V2 members
    
    HCI_WritePageScanType_Out               hci_WritePageScanType_Out;
    HCI_WriteInquiryScanType_Out            hci_WriteInquiryScanType_Out;
    HCI_ReadPageScanType_Out                hci_ReadPageScanType_Out;
    HCI_ReadInquiryScanType_Out             hci_ReadInquiryScanType_Out;
    
    HCI_SetupSynchronousConnection_Out      hci_SetupSynchronousConnection_Out;
    HCI_AcceptSynchronousConnectionRequest_Out hci_AcceptSynchronousConnectionRequest_Out;
    HCI_RejectSynchronousConnectionRequest_Out hci_RejectSynchronousConnectionRequest_Out;

    // V3 members

    HCI_WriteExtendedInquiryResponse_Out    hci_WriteExtendedInquiryResponse_Out;
    HCI_ReadExtendedInquiryResponse_Out     hci_ReadExtendedInquiryResponse_Out;
    HCI_WriteInquiryMode_Out                hci_WriteInquiryMode_Out;
    HCI_ReadInquiryMode_Out                 hci_ReadInquiryMode_Out;
    HCI_SSPCommandComplete_Out              hci_SSPCommandComplete_Out;
    HCI_RefreshEncryptionKeyComplete_Out    hci_RefreshEncryptionKeyComplete_Out;

};



#define HCI_CALLBACK_V1_SIZE(p) ((char*)&((p)->hci_WritePageScanType_Out) - (char*)p)

struct _HCI_INTERFACE {
    HCI_Inquiry_In                          hci_Inquiry_In;
    HCI_InquiryCancel_In                    hci_InquiryCancel_In;
    HCI_PeriodicInquiryMode_In              hci_PeriodicInquiryMode_In;
    HCI_ExitPeriodicInquiryMode_In          hci_ExitPeriodicInquiryMode_In;
    HCI_CreateConnection_In                 hci_CreateConnection_In;
    HCI_Disconnect_In                       hci_Disconnect_In;
    HCI_AddSCOConnection_In                 hci_AddSCOConnection_In;
    HCI_AcceptConnectionRequest_In          hci_AcceptConnectionRequest_In;
    HCI_RejectConnectionRequest_In          hci_RejectConnectionRequest_In;
    HCI_LinkKeyRequestReply_In              hci_LinkKeyRequestReply_In;
    HCI_LinkKeyRequestNegativeReply_In      hci_LinkKeyRequestNegativeReply_In;
    HCI_PINCodeRequestReply_In              hci_PINCodeRequestReply_In;
    HCI_PINCodeRequestNegativeReply_In      hci_PINCodeRequestNegativeReply_In;
    HCI_ChangeConnectionPacketType_In       hci_ChangeConnectionPacketType_In;
    HCI_AuthenticationRequested_In          hci_AuthenticationRequested_In;
    HCI_SetConnectionEncryption_In          hci_SetConnectionEncryption_In;
    HCI_ChangeConnectionLinkKey_In          hci_ChangeConnectionLinkKey_In;
    HCI_MasterLinkKey_In                    hci_MasterLinkKey_In;
    HCI_RemoteNameRequest_In                hci_RemoteNameRequest_In;
    HCI_ReadRemoteSupportedFeatures_In      hci_ReadRemoteSupportedFeatures_In;
    HCI_ReadRemoteVersionInformation_In     hci_ReadRemoteVersionInformation_In;
    HCI_ReadClockOffset_In                  hci_ReadClockOffset_In;
    HCI_HoldMode_In                         hci_HoldMode_In;
    HCI_SniffMode_In                        hci_SniffMode_In;
    HCI_ExitSniffMode_In                    hci_ExitSniffMode_In;
    HCI_SSRMode_In                          hci_SSRMode_In;
    HCI_ParkMode_In                         hci_ParkMode_In;
    HCI_ExitParkMode_In                     hci_ExitParkMode_In;
    HCI_QoSSetup_In                         hci_QoSSetup_In;
    HCI_RoleDiscovery_In                    hci_RoleDiscovery_In;
    HCI_SwitchRole_In                       hci_SwitchRole_In;
    HCI_ReadLinkPolicySettings_In           hci_ReadLinkPolicySettings_In;
    HCI_WriteLinkPolicySettings_In          hci_WriteLinkPolicySettings_In;
    HCI_SetEventMask_In                     hci_SetEventMask_In;
    HCI_Reset_In                            hci_Reset_In;
    HCI_SetEventFilter_In                   hci_SetEventFilter_In;
    HCI_Flush_In                            hci_Flush_In;
    HCI_EnhancedFlush_In                    hci_EnhancedFlush_In;   
    HCI_ReadPINType_In                      hci_ReadPINType_In;
    HCI_WritePINType_In                     hci_WritePINType_In;
    HCI_CreateNewUnitKey_In                 hci_CreateNewUnitKey_In;
    HCI_ReadStoredLinkKey_In                hci_ReadStoredLinkKey_In;
    HCI_WriteStoredLinkKey_In               hci_WriteStoredLinkKey_In;
    HCI_DeleteStoredLinkKey_In              hci_DeleteStoredLinkKey_In;
    HCI_ChangeLocalName_In                  hci_ChangeLocalName_In;
    HCI_ReadLocalName_In                    hci_ReadLocalName_In;
    HCI_ReadConnectionAcceptTimeout_In      hci_ReadConnectionAcceptTimeout_In;
    HCI_WriteConnectionAcceptTimeout_In     hci_WriteConnectionAcceptTimeout_In;
    HCI_ReadPageTimeout_In                  hci_ReadPageTimeout_In;
    HCI_WritePageTimeout_In                 hci_WritePageTimeout_In;
    HCI_ReadScanEnable_In                   hci_ReadScanEnable_In;
    HCI_WriteScanEnable_In                  hci_WriteScanEnable_In;
    HCI_ReadPageScanActivity_In             hci_ReadPageScanActivity_In;
    HCI_WritePageScanActivity_In            hci_WritePageScanActivity_In;
    HCI_ReadInquiryScanActivity_In          hci_ReadInquiryScanActivity_In;
    HCI_WriteInquiryScanActivity_In         hci_WriteInquiryScanActivity_In;
    HCI_ReadAuthenticationEnable_In         hci_ReadAuthenticationEnable_In;
    HCI_WriteAuthenticationEnable_In        hci_WriteAuthenticationEnable_In;
    HCI_ReadEncryptionMode_In               hci_ReadEncryptionMode_In;
    HCI_WriteEncryptionMode_In              hci_WriteEncryptionMode_In;
    HCI_ReadClassOfDevice_In                hci_ReadClassOfDevice_In;
    HCI_WriteClassOfDevice_In               hci_WriteClassOfDevice_In;
    HCI_ReadVoiceSetting_In                 hci_ReadVoiceSetting_In;
    HCI_WriteVoiceSetting_In                hci_WriteVoiceSetting_In;
    HCI_ReadAutomaticFlushTimeout_In        hci_ReadAutomaticFlushTimeout_In;
    HCI_WriteAutomaticFlushTimeout_In       hci_WriteAutomaticFlushTimeout_In;
    HCI_ReadNumBroadcastRetransmissions_In  hci_ReadNumBroadcastRetransmissions_In;
    HCI_WriteNumBroadcastRetransmissions_In hci_WriteNumBroadcastRetransmissions_In;
    HCI_ReadHoldModeActivity_In             hci_ReadHoldModeActivity_In;
    HCI_WriteHoldModeActivity_In            hci_WriteHoldModeActivity_In;
    HCI_ReadTransmitPowerLevel_In           hci_ReadTransmitPowerLevel_In;
    HCI_ReadSCOFlowControlEnable_In         hci_ReadSCOFlowControlEnable_In;
    HCI_WriteSCOFlowControlEnable_In        hci_WriteSCOFlowControlEnable_In;
    HCI_SetHostControllerToHostFlowControl_In   hci_SetHostControllerToHostFlowControl_In;
    HCI_HostBufferSize_In                   hci_HostBufferSize_In;
    HCI_HostNumberOfCompletedPackets        hci_HostNumberOfCompletedPackets;
    HCI_ReadLinkSupervisionTimeout_In       hci_ReadLinkSupervisionTimeout_In;
    HCI_WriteLinkSupervisionTimeout_In      hci_WriteLinkSupervisionTimeout_In;
    HCI_ReadNumberOfSupportedIAC_In         hci_ReadNumberOfSupportedIAC_In;
    HCI_ReadCurrentIACLAP_In                hci_ReadCurrentIACLAP_In;
    HCI_WriteCurrentIACLAP_In               hci_WriteCurrentIACLAP_In;
    HCI_ReadPageScanPeriodMode_In           hci_ReadPageScanPeriodMode_In;
    HCI_WritePageScanPeriodMode_In          hci_WritePageScanPeriodMode_In;
    HCI_ReadPageScanMode_In                 hci_ReadPageScanMode_In;
    HCI_WritePageScanMode_In                hci_WritePageScanMode_In;
    HCI_ReadLocalVersionInformation_In      hci_ReadLocalVersionInformation_In;
    HCI_ReadLocalSupportedFeatures_In       hci_ReadLocalSupportedFeatures_In;
    HCI_ReadBufferSize_In                   hci_ReadBufferSize_In;
    HCI_ReadCountryCode_In                  hci_ReadCountryCode_In;
    HCI_ReadBDADDR_In                       hci_ReadBDADDR_In;
    HCI_ReadFailedContactCounter_In         hci_ReadFailedContactCounter_In;
    HCI_ResetFailedContactCounter_In        hci_ResetFailedContactCounter_In;
    HCI_GetLinkQuality_In                   hci_GetLinkQuality_In;
    HCI_ReadRSSI_In                         hci_ReadRSSI_In;
    HCI_ReadLoopbackMode_In                 hci_ReadLoopbackMode_In;
    HCI_WriteLoopbackMode_In                hci_WriteLoopbackMode_In;
    HCI_EnableDeviceUnderTestMode_In        hci_EnableDeviceUnderTestMode_In;

    HCI_CustomCode_In                       hci_CustomCode_In;

    HCI_DataPacketDown_In                   hci_DataPacketDown_In;

    BT_LAYER_IO_CONTROL                     hci_ioctl;
    BT_LAYER_ABORT_CALL                     hci_AbortCall;
    
    // V2 members
    
    HCI_WritePageScanType_In                hci_WritePageScanType_In;
    HCI_WriteInquiryScanType_In             hci_WriteInquiryScanType_In;
    HCI_ReadPageScanType_In                 hci_ReadPageScanType_In;
    HCI_ReadInquiryScanType_In              hci_ReadInquiryScanType_In; 
    
    HCI_SetupSynchronousConnection_In       hci_SetupSynchronousConnection_In;
    HCI_AcceptSynchronousConnectionRequest_In hci_AcceptSynchronousConnectionRequest_In;
    HCI_RejectSynchronousConnectionRequest_In hci_RejectSynchronousConnectionRequest_In;

    // V3 members
    HCI_WriteExtendedInquiryResponse_In     hci_WriteExtendedInquiryResponse_In;
    HCI_ReadExtendedInquiryResponse_In      hci_ReadExtendedInquiryResponse_In;
    HCI_WriteInquiryMode_In                 hci_WriteInquiryMode_In;
    HCI_ReadInquiryMode_In                  hci_ReadInquiryMode_In;
    HCI_DataPacketDownEx_In                 hci_DataPacketDownEx_In;

};

#define HCI_INTERFACE_V1_SIZE(p) ((char*)&((p)->hci_WritePageScanType_In) - (char*)p)
#define HCI_INTERFACE_V2_SIZE(p) ((char*)&((p)->hci_WriteExtendedInquiryResponse_In) - (char*)p)

struct InquiryResultBuffer {
    DWORD                   dwTick;         // When discovered (GetTickCount)

    BD_ADDR                 ba;
    unsigned char           page_scan_repetition_mode;
    unsigned char           page_scan_period_mode;
    unsigned char           page_scan_mode;
    unsigned int            class_of_device;
    unsigned short          clock_offset;
};

typedef struct _BASEBAND_CONNECTION_DATA
{
    USHORT      hConnection;
    BD_ADDR     baAddress;
    int         cDataPacketsPending;
    UCHAR       link_type;
    UCHAR       mode;
    UINT        fEncrypted      : 1;
    UINT        fAuthenticated  : 1;    
} BASEBAND_CONNECTION_DATA, *PBASEBAND_CONNECTION_DATA;

enum HCI_COMMAND_CODE {
    HCI_NOP                             = 0x0000,
    HCI_Inquiry                         = 0x0401,
    HCI_Inquiry_Cancel                  = 0x0402,
    HCI_Periodic_Inquiry_Mode           = 0x0403,
    HCI_Exit_Periodic_Inquiry_Mode      = 0x0404,
    HCI_Create_Connection               = 0x0405,
    HCI_Disconnect                      = 0x0406,
    HCI_Add_SCO_Connection              = 0x0407,
    HCI_Accept_Connection_Request       = 0x0409,
    HCI_Reject_Connection_Request       = 0x040a,
    HCI_Link_Key_Request_Reply          = 0x040b,
    HCI_Link_Key_Request_Negative_Reply = 0x040c,
    HCI_PIN_Code_Request_Reply          = 0x040d,
    HCI_PIN_Code_Request_Negative_Reply = 0x040e,
    HCI_Change_Connection_Packet_Type   = 0x040f,
    HCI_Authentication_Requested        = 0x0411,
    HCI_Set_Connection_Encryption       = 0x0413,
    HCI_Change_Connection_Link_Key      = 0x0415,
    HCI_Master_Link_Key                 = 0x0417,
    HCI_Remote_Name_Request             = 0x0419,
    HCI_Remote_Name_Request_Cancel      = 0x041a,
    HCI_Read_Remote_Supported_Features  = 0x041b,
    HCI_Read_Remote_Extended_Features   = 0x041c,
    HCI_Read_Remote_Version_Information = 0x041d,
    HCI_Read_Clock_Offset               = 0x041f,
    HCI_Setup_Synchronous_Connection    = 0x0428,
    HCI_Accept_Synchronous_Connection_Request   = 0x0429,
    HCI_IO_Capability_Request_Reply                      = 0x042B,
    HCI_User_Confirmation_Request_Reply                  = 0x042C,
    HCI_User_Confirmation_Request_Negative_Reply         = 0x042D,
    HCI_User_Passkey_Request_Reply                       = 0x042E,
    HCI_User_Passkey_Request_Negative_Reply              = 0x042F,
    HCI_Remote_OOB_Data_Request_Reply                    = 0x0430,
    HCI_Remote_OOB_Data_Request_Negative_Reply           = 0x0433,
    HCI_IO_Capability_Request_Negative_Reply             = 0x0434,
    HCI_Reject_Synchronous_Connection_Request   = 0x043a,
    HCI_Hold_Mode                       = 0x0801,
    HCI_Sniff_Mode                      = 0x0803,
    HCI_Exit_Sniff_Mode                 = 0x0804,
    HCI_Park_Mode                       = 0x0805,
    HCI_Exit_Park_Mode                  = 0x0806,
    HCI_QoS_Setup                       = 0x0807,
    HCI_Role_Discovery                  = 0x0809,
    HCI_Switch_Role                     = 0x080b,
    HCI_Read_Link_Policy_Settings       = 0x080c,
    HCI_Write_Link_Policy_Settings      = 0x080d,
    HCI_SSR_Mode                        = 0x0811,
    HCI_Set_Event_Mask                  = 0x0c01,
    HCI_Reset                           = 0x0c03,
    HCI_Set_Event_Filter                = 0x0c05,
    HCI_Flush                           = 0x0c08,
    HCI_Read_PIN_Type                   = 0x0c09,
    HCI_Write_PIN_Type                  = 0x0c0a,
    HCI_Create_New_Unit_Key             = 0x0c0b,
    HCI_Read_Stored_Link_Key            = 0x0c0d,
    HCI_Write_Stored_Link_Key           = 0x0c11,
    HCI_Delete_Stored_Link_Key          = 0x0c12,
    HCI_Change_Local_Name               = 0x0c13,
    HCI_Read_Local_Name                 = 0x0c14,
    HCI_Read_Connection_Accept_Timeout  = 0x0c15,
    HCI_Write_Connection_Accept_Timeout = 0x0c16,
    HCI_Read_Page_Timeout               = 0x0c17,
    HCI_Write_Page_Timeout              = 0x0c18,
    HCI_Read_Scan_Enable                = 0x0c19,
    HCI_Write_Scan_Enable               = 0x0c1a,
    HCI_Read_PageScan_Activity          = 0x0c1b,
    HCI_Write_PageScan_Activity         = 0x0c1c,
    HCI_Read_InquiryScan_Activity       = 0x0c1d,
    HCI_Write_InquiryScan_Activity      = 0x0c1e,
    HCI_Read_Authentication_Enable      = 0x0c1f,
    HCI_Write_Authentication_Enable     = 0x0c20,
    HCI_Read_Encryption_Mode            = 0x0c21,
    HCI_Write_Encryption_Mode           = 0x0c22,
    HCI_Read_Class_Of_Device            = 0x0c23,
    HCI_Write_Class_Of_Device           = 0x0c24,
    HCI_Read_Voice_Setting              = 0x0c25,
    HCI_Write_Voice_Setting             = 0x0c26,
    HCI_Read_Automatic_Flush_Timeout    = 0x0c27,
    HCI_Write_Automatic_Flush_Timeout   = 0x0c28,
    HCI_Read_Num_Broadcast_Retransmissions  = 0x0c29,
    HCI_Write_Num_Broadcast_Retransmissions = 0x0c2a,
    HCI_Read_Hold_Mode_Activity         = 0x0c2b,
    HCI_Write_Hold_Mode_Activity        = 0x0c2c,
    HCI_Read_Transmit_Power_Level       = 0x0c2d,
    HCI_Read_SCO_Flow_Control_Enable    = 0x0c2e,
    HCI_Write_SCO_Flow_Control_Enable    = 0x0c2f,
    HCI_Set_Host_Controller_To_Host_Flow_Control = 0x0c31,
    HCI_Host_Buffer_Size                = 0x0c33,
    HCI_Host_Number_Of_Completed_Packets = 0x0c35,
    HCI_Read_Link_Supervision_Timeout   = 0x0c36,
    HCI_Write_Link_Supervision_Timeout  = 0x0c37,
    HCI_Read_Number_Of_Supported_IAC    = 0x0c38,
    HCI_Read_Current_IAC_LAP            = 0x0c39,
    HCI_Write_Current_IAC_LAP           = 0x0c3a,
    HCI_Read_Page_Scan_Period_Mode      = 0x0c3b,
    HCI_Write_Page_Scan_Period_Mode     = 0x0c3c,
    HCI_Read_Page_Scan_Mode             = 0x0c3d,
    HCI_Write_Page_Scan_Mode            = 0x0c3e,
    HCI_Read_Inquiry_Scan_Type          = 0x0c42,
    HCI_Write_Inquiry_Scan_Type         = 0x0c43,
    HCI_Read_Inquiry_Mode               = 0x0c44,
    HCI_Write_Inquiry_Mode              = 0x0c45,
    HCI_Read_Page_Scan_Type             = 0x0c46,
    HCI_Write_Page_Scan_Type            = 0x0c47,
    HCI_Read_Extended_Inquiry_Response  = 0x0c51,
    HCI_Write_Extended_Inquiry_Response = 0x0c52,
    HCI_Refresh_Encryption_Key          = 0x0C53,
    HCI_Read_Simple_Pairing_Mode        = 0x0C55,
    HCI_Write_Simple_Pairing_Mode       = 0x0C56,
    HCI_Read_Local_OOB_Data             = 0x0C57,
    HCI_EnhancedFlush                   = 0x0C5F,    
    HCI_Send_Keypress_Notification      = 0x0C60,
    HCI_Read_Local_Version_Information  = 0x1001,
    HCI_Read_Local_Supported_Features   = 0x1003,
    HCI_Read_Buffer_Size                = 0x1005,
    HCI_Read_Country_Code               = 0x1007,
    HCI_Read_BD_ADDR                    = 0x1009,
    HCI_Read_Failed_Contact_Counter     = 0x1401,
    HCI_Reset_Failed_Contact_Counter    = 0x1402,
    HCI_Get_Link_Quality                = 0x1403,
    HCI_Read_RSSI                       = 0x1405,
    HCI_Read_Loopback_Mode              = 0x1801,
    HCI_Write_Loopback_Mode             = 0x1802,
    HCI_Enable_Device_Under_Test_Mode   = 0x1803,
    HCI_Write_Simple_Pairing_Debug_Mode = 0x1804
        
};

enum HCI_EVENT_CODE {
    HCI_Inquiry_Complete_Event              = 0x01,
    HCI_Inquiry_Result_Event                = 0x02,
    HCI_Connection_Complete_Event           = 0x03,
    HCI_Connection_Request_Event            = 0x04,
    HCI_Disconnection_Complete_Event        = 0x05,
    HCI_Authentication_Complete_Event       = 0x06,
    HCI_Remote_Name_Request_Complete_Event  = 0x07,
    HCI_Encryption_Change_Event             = 0x08,
    HCI_Change_Connection_Link_Key_Complete_Event = 0x09,
    HCI_Master_Link_Key_Complete_Event      = 0x0a,
    HCI_Read_Remote_Supported_Features_Complete_Event = 0x0b,
    HCI_Read_Remote_Version_Information_Complete_Event = 0x0c,
    HCI_QoS_Setup_Complete_Event            = 0x0d,
    HCI_Command_Complete_Event              = 0x0e,
    HCI_Command_Status_Event                = 0x0f,
    HCI_Hardware_Error_Event                = 0x10,
    HCI_Flush_Occured_Event                 = 0x11,
    HCI_Role_Change_Event                   = 0x12,
    HCI_Number_Of_Completed_Packets_Event   = 0x13,
    HCI_Mode_Change_Event                   = 0x14,
    HCI_Return_Link_Keys_Event              = 0x15,
    HCI_PIN_Code_Request_Event              = 0x16,
    HCI_Link_Key_Request_Event              = 0x17,
    HCI_Link_Key_Notification_Event         = 0x18,
    HCI_Loopback_Command_Event              = 0x19,
    HCI_Data_Buffer_Overflow_Event          = 0x1a,
    HCI_Max_Slots_Change_Event              = 0x1b,
    HCI_Read_Clock_Offset_Complete_Event    = 0x1c,
    HCI_Connection_Packet_Type_Changed_Event= 0x1d,
    HCI_QoS_Violation_Event                 = 0x1e,
    HCI_Page_Scan_Mode_Change_Event         = 0x1f,
    HCI_Page_Scan_Repetition_Mode_Change_Event = 0x20,
    HCI_Inquiry_Result_with_RSSI               = 0x22,
    HCI_Read_Remote_Extended_Features_Complete_Event = 0x23,
    HCI_Synchronous_Connection_Complete_Event  = 0x2c,
    HCI_Synchronous_Connection_Changed_Event   = 0x2d,
    HCI_Sniff_Subrate_Event                    = 0x2e,    
    HCI_Extended_Inquiry_Result_Event          = 0x2f,
    HCI_Encryption_Key_Refresh_Complete        = 0x30,
    HCI_IO_Capability_Request_Event            = 0x31,
    HCI_IO_Capability_Response_Event           = 0x32,
    HCI_User_Confirmation_Request_Event        = 0x33,
    HCI_User_Passkey_Request_Event             = 0x34,
    HCI_Remote_OOB_Data_Request_Event          = 0x35,
    HCI_Simple_Pairing_Complete_Event          = 0x36,
    HCI_Link_Supervision_Timeout_Change_Event  = 0x38,
    HCI_EnhancedFlush_Complete_Event           = 0x39,
    HCI_User_Passkey_Notification_Event        = 0x3B,
    HCI_Keypress_Notification_Event            = 0x3C
};

#if ! defined (__bt_api_H__)
//
//  Attention: also defined in bt_api.h! Keep in sync!
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

enum BT_Link_Key_Type
{
    BT_Link_Key_Type_Combination                 = 0x00,  // Legacy PIN Pairing
    BT_Link_Key_Type_Local_Unit                  = 0x01,  // 
    BT_Link_Key_Type_Remote_Unit                 = 0x02,  // 
    BT_Link_Key_Type_Debug_Combination           = 0x03,  // 
    BT_Link_Key_Type_Unauthenticated_Combination = 0x04,  // Just Works Simple Pairing Procedure
    BT_Link_Key_Type_Authenticated_Combination   = 0x05,  // Numeric Comparison/Passkey/OOB SSP Procedure
    BT_Link_Key_Type_Changed_Combination         = 0x06,  // 
    BT_Link_Key_Type_Reserved                    = 0x07,  // 0x07-0xFF reserved
    BT_Link_Key_Type_No_Link_Key                 = 0xFFFFFFFF // No Link Key present 
};

//
//  More than one stack can register with HCI to receive event callbacks.
//
//  Note that events that result from HCI command will always be transfered
//  ONLY to the stack that originated the command. The following description only concerns
//  callbacks for external events (such as an incoming connection).
//
//  BTH_CONTROL_ROUTE_ALL is a base level that is typically reserved for L2CAP stack.
//      Only one stack can register to accept all notifications.
//      Notification is passed up this stack iff there are no other stacks registered for this event.
//
//  BTH_CONTROL_ROUTE_BY_ADDR - route all callbacks associated with this particular device up this stack.
//      Only one client per BD_ADDR.
//
//  BTH_CONTROL_ROUTE_BY_COD - route connection requests associated with this COD up this stack
//      Only one client per COD.
//
//  BTH_CONTROL_ROUTE_BY_LINKTYPE - route connection requests associated with this link type up this stack.
//      This is used to implement SCO connections, for example (register for particular bluetooth device,
//      then process all SCO data packets here and return all L2CAP packets to L2CAP layer).
//
//  BTH_CONTROL_ROUTE_SECURITY - route all security events up this stack (PIN requests etc)
//      Used to implement security manager. Only one stack is allowed to be handler for security events.
//
//  BTH_CONTROL_ROUTE_HARDWARE - route all hardware events (command status, completion and events)
//
//  BTH_CONTROL_DEVICEONLY - route all local device control packets here.
//      This is used for local device control - i. e. to put device into a particular mode, one can
//      register for this access, use this callback to program the device, and deregister.
//      Only one client at a time.
//
//  Callback routing decision tree:
//  if (this a local device event) {
//     if (have BTH_CONTROL_DEVICEONLY handler) {
//        Execute callback.
//        return; // DONE
//     }
//  }
//  if (this is an event for particular target (connection or BD_ADDR)) {
//     if (have BTH_CONTROL_ROUTE_BY_ADDR for this address) {
//        Execute callback.
//        return; // DONE
//     }
//  }
//
//  if (have BTH_CONTROL_ROUTE_ALL) // Primary handler installed?
//     Execute callback.
//
//  return; // DONE
//  
#define BTH_CONTROL_ROUTE_ALL               0x00000001

#define BTH_CONTROL_ROUTE_BY_ADDR           0x00000010
#define BTH_CONTROL_ROUTE_BY_COD            0x00000020
#define BTH_CONTROL_ROUTE_BY_LINKTYPE       0x00000040
#define BTH_CONTROL_ROUTE_SECURITY          0x00000080
#define BTH_CONTROL_ROUTE_HARDWARE          0x00000100

#define BTH_CONTROL_DEVICEONLY              0x00001000

int HCI_EstablishDeviceContext
(
void                    *pUserContext,      /* IN */
unsigned int            uiControl,          /* IN */
BD_ADDR                 *pba,               /* IN */
unsigned int            class_of_device,    /* IN */
unsigned char           link_type,          /* IN */
HCI_EVENT_INDICATION    *pInd,              /* IN */
HCI_CALLBACKS           *pCall,             /* IN */
HCI_INTERFACE           *pInt,              /* OUT */
int                     *pcDataHeaders,     /* OUT */
int                     *pcDataTrailers,    /* OUT */
HANDLE                  *phDeviceContext    /* OUT */
);

int HCI_EstablishDeviceContextEx
(
void                    *pUserContext,      /* IN */
unsigned int            uiControl,          /* IN */
BD_ADDR                 *pba,               /* IN */
unsigned int            class_of_device,    /* IN */
unsigned char           link_type,          /* IN */
HCI_EVENT_INDICATION    *pInd,              /* IN */
int                     cbInd,              /* IN */
HCI_CALLBACKS           *pCall,             /* IN */
int                     cbCall,             /* IN */
HCI_INTERFACE           *pInt,              /* OUT */
int                     cbInt,              /* IN */
int                     *pcDataHeaders,     /* OUT */
int                     *pcDataTrailers,    /* OUT */
HANDLE                  *phDeviceContext    /* OUT */
);

int HCI_CloseDeviceContext
(
HANDLE                  hDeviceContext      /* IN */
);

int hci_InitializeOnce (void);
int hci_CreateDriverInstance (void);
int hci_CloseDriverInstance (void);
int hci_UninitializeOnce (void);

int hci_ProcessConsoleCommand (WCHAR *pString);

//
//  Device initialization
//
int bth_InitializeOnce (void);
int bth_CreateDriverInstance (void);
int bth_CloseDriverInstance (void);
int bth_UninitializeOnce (void);

int bth_StartConsole (void);
int bth_EndConsole (void);

int btutil_InitializeOnce (void);
int btutil_CreateDriverInstance (void);
int btutil_CloseDriverInstance (void);
int btutil_UninitializeOnce (void);

SVSCookie btutil_ScheduleEvent (LPTHREAD_START_ROUTINE pfn, LPVOID lpParameter, unsigned long ulDelayTime = 0);
BOOL btutil_UnScheduleEvent (SVSCookie ulCookie);

SVSHandle btutil_AllocHandle(LPVOID pvData);
LPVOID btutil_CloseHandle(SVSHandle h);
LPVOID btutil_TranslateHandle(SVSHandle h);

BOOL btutil_IsDisablePolicyEnforced(void);

//
//  This structure is used by a service to specify what option
//  values it will accept during L2CAP connection configuration.
//
struct btutilL2CAPOptionConstraints
{
    USHORT             minAllowedMTU;
    USHORT             maxAllowedMTU;
};

//
//  This structure contains the data from an L2CAP
//  configuration request packet.
//
struct btutilL2CAPConfigRequest
{
    unsigned short     ChannelID;
    unsigned char      ID;
    unsigned short     MTU;
    unsigned short     FlushTimeout;
    struct btFLOWSPEC *pQoS;
    int                cExtendedOptions;
    struct btCONFIGEXTENSION **ppExtendedOptions;
};

static const USHORT L2CAP_DEFAULT_MTU = 672;
static const USHORT L2CAP_DEFAULT_FLUSH_TIMEOUT = 0xFFFF;
static const BYTE   L2CAP_SERVICE_TYPE_BEST_EFFORT = 0x01;

DWORD
btutil_ProcessL2CAPConfigRequest(
    __in  HANDLE                        hL2CAP,
    __in  LPVOID                        hCallContext,
    __in  L2CAP_INTERFACE              *pL2CAPIF,
    __in  btutilL2CAPConfigRequest     *pRequest,
    __in  btutilL2CAPOptionConstraints *pConstraints,
    __out L2CAPConfigResult            *pConfigResult,
    __out USHORT                       *pAcceptedMTU);
//
//  Process received L2CAP Configure Request packet by examining Request option
//  values and sending appropriate L2CAP Config Response packet.
//
//      1. Any non-hint extended options causes an L2CAPConfigResult_UnknownOptions response
//      2. Ignore any hint extended options
//      3. A QoS option other than Best Effort causes an L2CAPConfigResult_UnacceptableParameters response
//      4. An MTU option outside the range [min..max] causes an L2CAPConfigResult_UnacceptableParameters response
//      5. A Flush Timeout other than the default causes an L2CAPConfigResult_UnacceptableParameters response
//  
//  If no options are Unknown or Unacceptable, then a L2CAPConfigResult_Success response is generated.
//
//  *pConfigResult is the ConfigResult sent in the response.
//  If the result is L2CAPConfigResult_Success, then pAcceptedMTU is the MTU value that was accepted.
//

#endif  // __bt_ddi_H__
