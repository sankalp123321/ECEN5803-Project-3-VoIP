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

#ifndef _CmCsp_h_
#define _CmCsp_h_

#include <CmNet.h>
#include <RmNet.h>

#ifdef __cplusplus
extern "C" {
#endif

/*! \file CmCsp.h */

//! Notification type and structure used by CSP to send to CM.
//!
typedef enum CM_CSP_NOTIFICATION_TYPE
{
    CMPN_CONNECTION_STATE_CHANGE,
    CMPN_CONNECTION_NETWORK_TYPE_CHANGE,
    CMPN_CHARACTERISTIC_VALUE_CHANGE,
    CMPN_TYPE_SPECIFIC_NOTIFICATION

} CM_CSP_NOTIFICATION_TYPE;

typedef struct CM_CSP_NOTIFICATION
{
    DWORD Version;
    WCHAR ConnectionName[CM_CONNECTION_NAME_LENGTH];

    CM_CSP_NOTIFICATION_TYPE Type;
    union
    {
        // Used for CMPN_CONNECTION_STATE_CHANGE.
        struct
        {
            CM_CONNECTION_STATE State;
            
        } State;

        // Used for CMPN_CONNECTION_NETWORK_TYPE_CHANGE.
        struct
        {
            CM_CONNECTION_NETWORK_TYPE Network;
            
        } NetworkType;

        // Used for CMPN_CHARACTERISTIC_VALUE_CHANGE.
        struct
        {
            CM_CHARACTERISTIC Characteristic;
            DWORD Value;
            
        } Characteristic;

        // Used for CMPN_TYPE_SPECIFIC_NOTIFICATION.
        struct
        {
            DWORD cbData;
            BYTE Data[1];
            
        } TypeSpecific;
    };

} CM_CSP_NOTIFICATION;

//! Function used by CSP to notify CM of connection status changes.
//!
typedef void (*CM_CSP_ASYNC_NOTIFICATION)(
    __in_bcount(cbNotification) const CM_CSP_NOTIFICATION* const pNotification,
    __in DWORD cbNotification,
    __in DWORD NotificationParam);

//! Information provided by CM to CSP at initialization.
//!
typedef struct CM_CSP_HOST_INFO
{
    DWORD Version;
    CM_CSP_ASYNC_NOTIFICATION pfnNotification;
    DWORD NotificationParam;

} CM_CSP_HOST_INFO;

//! Information provided by CSP to CM at initialization.
//!
typedef struct CM_CSP_PROVIDER_INFO
{
    DWORD Version;
    DWORD cConnectionType;
    CM_CONNECTION_TYPE ConnectionType[1];

} CM_CSP_PROVIDER_INFO;

//! Connection information available at the CSP.
//!
typedef struct CM_CSP_CONNECTION_INFO
{
    DWORD Version;
    WCHAR szAdapter[CM_CONNECTION_ADAPTER_NAME_LENGTH];
    CM_CONNECTION_TYPE Type;
    CM_CONNECTION_DEVICE_TYPE Device;
    CM_CONNECTION_NETWORK_TYPE Network;
    CM_CONNECTION_STATE State;
    DWORD Characteristic[CMCH_LAST];

} CM_CSP_CONNECTION_INFO;

//! Called by CM Service to initialize CSP.  The intent of the call is to:
//! 1. Initialize CSP, such that it is ready to handle other API calls.
//! 2. Register connection types handled by the CSP with CM.
//! 3. Register an asynchronous method of message passing between CSP and CM.
//!
//! If initialization succeeds, function returns CMRE_SUCCEEDED.  Possible
//! results indicating failure are:
//!
//! CMRE_INVALID_VERSION indicates that CSP cannot handle the CM version.  This
//!     may happen if CM is of a lower version than CSP, and the CSP requires
//!     CM functionality that is not available in the indicated version.
//! CMRE_INSUFFICIENT_BUFFER indicates that the output buffer is too small.
//! CMRE_INVALID_PARAMETER indicates that one or more of input and/or output
//!     parameters are invalid.
//! CMRE_UNEXPECTED indicates any other failure to initialize.
//!
CM_RESULT CmCspInitialize(
    __in_bcount(cbHostInfo) const CM_CSP_HOST_INFO* pHostInfo,
    __in DWORD const cbHostInfo,
    __out_bcount(*pcbProviderInfo) CM_CSP_PROVIDER_INFO* pProviderInfo,
    __inout DWORD* pcbProviderInfo);

typedef CM_RESULT (*CM_CSP_INITIALIZE)(
    __in_bcount(cbHostInfo) const CM_CSP_HOST_INFO* pHostInfo,
    __in const DWORD cbHostInfo,
    __out_bcount(*pcbProviderInfo) CM_CSP_PROVIDER_INFO* pProviderInfo,
    __inout DWORD* pcbProviderInfo);

//! Called by CM Service to deinitialize CSP prior to unloading it.
//!
void CmCspDeinitialize();

typedef void (*CM_CSP_DEINITIALIZE)();

//! Called by CM Service to configure a new named connection with CSP.
//! The connection name is guaranteed to be unique.
//!
CM_RESULT CmCspAddConnectionConfig(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection,
    __in CM_CONNECTION_TYPE Type,
    __in_bcount(cbTypeSpecificInfo) const BYTE* pTypeSpecificInfo,
    __in DWORD cbTypeSpecificInfo);

typedef CM_RESULT (*CM_CSP_ADD_CONNECTION_CONFIG)(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection,
    __in CM_CONNECTION_TYPE Type,
    __in_bcount(cbTypeSpecificInfo) const BYTE* pTypeSpecificInfo,
    __in DWORD cbTypeSpecificInfo);

//! Called by CM Service to get configuration associated with the named
//! connection.
//!
//! If configuration has been retrieved, function returns CMRE_SUCCEEDED.
//! Possible results indicating failure are:
//!
//! CMRE_INVALID_CONNECTION indicates that the connection doesn't exist.
//! CMRE_INVALID_PARAMETER indicates that one or more of input and/or output
//!     parameters other than the name of the connection are invalid.
//! CMRE_INSUFFICIENT_BUFFER indicates that the configuration requires a larger
//!     output buffer.  pcbTypeSpecificInfo will be set to point to size of
//!     required buffer.
//! CMRE_UNEXPECTED indicates any other failure to delete the connection.
//!
CM_RESULT CmCspGetConnectionConfig(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection,
    __inout_bcount(*pcbTypeSpecificInfo) BYTE* pTypeSpecificInfo,
    __inout DWORD* pcbTypeSpecificInfo);

typedef CM_RESULT (*CM_CSP_GET_CONNECTION_CONFIG)(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection,
    __inout_bcount(pcbTypeSpecificInfo) BYTE* pTypeSpecificInfo,
    __inout DWORD* pcbTypeSpecificInfo);

//! Called by CM Service to update configuration settings associated with the
//! named connection.  The two configuration structures, "previous" and "new",
//! allow the CSP to determine which parts of the configuration structure were
//! updated (the delta) and make decisions in how to apply the updates (ex.
//! does connection need to be disconnected for settings to take effect?), or
//! whether to fail the call (ex. an earlier configuration change, possibly
//! from another application, modified part or parts of the structure described
//! by the delta between "previous" and "new" and contents of "previous" are
//! not the same as current; application of such delta could have unintended
//! effect on the configuration and produce inconsistent configuration).
//!
//! If configuration update succeeds, function returns CMRE_SUCCEEDED.  Possible
//! results indicating failure are:
//!
//! CMRE_INVALID_CONNECTION indicates that the connection to be updated doesn't
//!     exist.
//! CMRE_INVALID_PARAMETER indicates that one or more of input and/or output
//!     parameters other than the name of the connection are invalid.
//! CMRE_INCONSISTENT_CONFIGURATION indicates that application of delta would
//!     cause configuration to be inconsistent so it has been rejected.
//! CMRE_UNEXPECTED indicates any other failure to update configuration.
//
CM_RESULT CmCspUpdateConnectionConfig(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection,
    __in_bcount(cbTypeSpecificInfoPrevious) const BYTE* pTypeSpecificInfoPrevious,
    __in DWORD cbTypeSpecificInfoPrevious,
    __in_bcount(cbTypeSpecificInfoNew) const BYTE* pTypeSpecificInfoNew,
    __in DWORD cbTypeSpecificInfoNew,
    __out BOOL* pfDisconnectToApplyChanges);

typedef CM_RESULT (*CM_CSP_UPDATE_CONNECTION_CONFIG)(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection,
    __in_bcount(cbTypeSpecificInfoPrevious) const BYTE* pTypeSpecificInfoPrevious,
    __in DWORD cbTypeSpecificInfoPrevious,
    __in_bcount(cbTypeSpecificInfoNew) const BYTE* pTypeSpecificInfoNew,
    __in DWORD cbTypeSpecificInfoNew,
    __out BOOL* pfDisconnectToApplyChanges);

//! Called by CM Service to delete the named connection.
//!
//! If configuration delete succeeds, function returns CMRE_SUCCEEDED.  Possible
//! results indicating failure are:
//!
//! CMRE_INVALID_CONNECTION indicates that the connection to be deleted doesn't
//!     exist.
//! CMRE_UNEXPECTED indicates any other failure to delete the connection.
//!
CM_RESULT CmCspDeleteConnectionConfig(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection);

typedef CM_RESULT (*CM_CSP_DELETE_CONNECTION_CONFIG)(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection);

//! Called by CM Service to get resource(s) required to be reserved for the
//! named connection prior to connecting it.  The values that the function
//! returns depend on the case that the connection falls into:
//!
//! 1. The connection needs one specific resource to be acquired before it can
//!    be connected, in which case it returns the resource ID in pResourceId,
//!    and sets pcbResourceId to the sizeof RM_RESOURCE_ID.
//! 2. The connection can use any one of N resources (R_1 or R_2 or ... R_N),
//!    in which case it populates array of RM_RESOURCE_IDs pointed by
//!    pResourceId with the possible resources, and sets pcbResourceId to
//!    N * sizeof RM_RESOURCE_ID.
//! 3. If the connection has the same connection type specific information as
//!    another one that is already connected, then CSP should set phResource to
//!    resource handle associated with the already connected connection.  Note
//!    that CmCspConnect will pass-in the resource handle of the acquired
//!    resource ID.
//!
//! If the call succeeds, the function returns CMRE_SUCCEEDED.  Possible results
//! indicating failures are:
//!
//! CMRE_INVALID_CONNECTION indicates that the connection to be updated doesn't
//!     exist.
//! CMRE_INVALID_PARAMETER indicates that one or more of input and/or output
//!     parameters other than the name of the connection are invalid.
//! CMRE_INSUFFICIENT_BUFFER indicates that the pResourceId requires a larger
//!     output buffer.  pcbResourceId is set to point to size of required
//!     buffer.
//! CMRE_UNEXPECTED indicates an unexpected failure.
//!
CM_RESULT CmCspGetResource(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) WCHAR* szConnection,
    __out_bcount(*pcbResourceId) RM_RESOURCE_ID* pResourceId,
    __out DWORD* pcbResourceId,
    __out RM_RESOURCE_HANDLE* phResource);

typedef CM_RESULT (*CM_CSP_GET_RESOURCE)(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) WCHAR* szConnection,
    __out_bcount(*pcbResourceId) RM_RESOURCE_ID* pResourceId,
    __out DWORD* pcbResourceId,
    __out RM_RESOURCE_HANDLE* phResource);

//! Called by CM Service to connect the named connection after successfully
//! allocating the required resource.  The resource handle corresponding to
//! the acquired resource is passed in hResource parameter.
//!
//! This API must return only when attempt to connect connection has succeeded
//! (CMRE_SUCCESS) or failed (result other than CMRE_SUCCESS).  Success 
//! indicates that connection is ready to be used to send and receive data, that
//! is, IP interface that corresponds to the CM connection is available and has
//! been assigned a valid IP address.  The name of the adapter returned in
//! szAdapter parameter is case sensitive and must correspond to adapter
//! indicated by the TCP/IP stack.
//!
//! Prior to calling this API, CM automatically transitions connection state to
//! CMCS_CONNECTING.  When this API returns with success CM automatically
//! transitions state to CMCS_CONNECTED, otherwise to CMCS_DISCONNECTED.
//!
//! It is important that this API returns as soon as possible.  Delays in
//! returning will cause delays in applications attempting to use the
//! connection and potentially lead to bad user experience.
//!
//! CM will serialize calls to CmCspConnect, CmCspDisconnect and
//! CmCspGetConnectionInfo.
//!
//! Possible results are:
//!
//! CMRE_SUCCESS indicates that the connection has been successfully connected.
//! CMRE_INVALID_CONNECTION indicates that the connection doesn't exist.
//! CMRE_UNEXPECTED indicates an unexpected failure, such as connection or
//!     underlying device is in a state that is not able to handle a connection
//!     attempt.
//!
CM_RESULT CmCspConnect(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) WCHAR* szConnection,
    __in RM_RESOURCE_HANDLE hResource,
    __out_bcount(cbAdapter) WCHAR* szAdapter,
    __in DWORD cbAdapter);

typedef CM_RESULT (*CM_CSP_CONNECT)(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) WCHAR* szConnection,
    __in RM_RESOURCE_HANDLE hResource,
    __out_bcount(cbAdapter) WCHAR* szAdapter,
    __in DWORD cbAdapter);

//! Called by CM Service to disconnect the named connection.  This call
//! notifies CSP that the connection is no longer needed by any application.
//! Immediately after the call returns CM will free the resources associated
//! with the connection, so it is important that the CSP implementation of
//! this API doesn't return until the disconnection was completed.
//!
//! This API must return only when connection has been completely disconnected
//! and the IP address of the interface has been released.  Prior to calling
//! this API, CM automatically transitions connection state to
//! CMCS_DISCONNECTING.  When this API returns transitions state to
//! CMCS_DISCONNECTED.
//!
//! It is important that this API returns as soon as possible.  Delays in
//! returning will cause delays in attempts to reconnect the connection.  This
//! will impact waiting application and potentially lead to bad user experience.
//!
//! CM will serialize calls to CmCspConnect, CmCspDisconnect and
//! CmCspGetConnectionInfo.
//!
//! Any result returned from this API indicates that the named connection is 
//! disconnected.
//!
//! Possible results are:
//!
//! CMRE_SUCCEEDED indicates that the connection was successfully disconnected.
//! CMRE_INVALID_CONNECTION indicates that the connection with specified name
//!     does not exist.
//! CMRE_UNEXPECTED indicates any other failure.
//!
CM_RESULT CmCspDisconnect(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) WCHAR* szConnection);

typedef CM_RESULT (*CM_CSP_DISCONNECT)(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) WCHAR* szConnection);

//! Called by CM Service to query connection information as seen by the CSP.
//! The passed-in pInfo will contain info that CM knows about the connection.
//! The CSP can update this info with more accurate values.  For example, if
//! value of one of the characteristics is unknown
//! (CM_UNKNOWN_CHARACTERISTIC_VALUE), CSP can update this value with an actual
//! value.  If CSP doesn't have a value for one or more of the attributes, it
//! it should leave it unchanged.
//!
//! Possible results are:
//!
//! CMRE_SUCCEEDED indicates that the connection information has been
//!     successfully retrieved.
//! CMRE_INVALID_CONNECTION indicates that the connection with specified name
//!     does not exist.
//! CMRE_INSUFFICIENT_BUFFER indicates that the buffer pInfo is of insufficient 
//!     size to return connection info.  Needed buffer size is returned in
//!     *pcbInfo.
//! CMRE_UNEXPECTED indicates any other failure to get connection info.
//!
CM_RESULT CmCspGetConnectionInfo(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) WCHAR* szConnection,
    __inout_bcount(*pcbInfo) CM_CSP_CONNECTION_INFO* pInfo,
    __inout DWORD* pcbInfo);

typedef CM_RESULT (*CM_CSP_GET_CONNECTION_INFO)(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) WCHAR* szConnection,
    __out_bcount(*cbInfo) CM_CSP_CONNECTION_INFO* pInfo,
    __inout DWORD* pcbInfo);

//! Called by CM Service when an application calls
//! CmGetTypeSpecificInfoByConnectionName
//!
//! Possible results are:
//!
//! CMRE_SUCCEEDED indicates that type specific information has been
//!     successfully retrieved.
//! CMRE_INVALID_CONNECTION indicates that the connection with the specified
//!     name does not exist.
//! CMRE_INSUFFICIENT_BUFFER indicates that the buffer pInfo is of insufficient
//!     size to return type specific info.  Needed buffer size is returned in
//!     *pcbInfo.
//! CMRE_UNEXPECTED indicates any other failure to get type specific info.
//!
CM_RESULT CmCspGetTypeSpecificInfo(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection,
    __in DWORD                           TypeSpecificOperationCode,
    __out_bcount(*pcbInfo) VOID         *pInfo,
    __inout DWORD                       *pcbInfo);

typedef CM_RESULT (*CM_CSP_GET_TYPE_SPECIFIC_INFO)(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection,
    __in DWORD                           TypeSpecificOperationCode,
    __out_bcount(*pcbInfo) VOID         *pInfo,
    __inout DWORD                       *pcbInfo);

//! Called by CM Service after an application calls CmSetDataActivityState
//!
//! If State is CMDS_DORMANT, then DormantCancelOnActivityMs is a hint as
//! to how long the CSP/driver should wait before going dormant. Any send
//! activity should cancel the dormancy request as it means that some other
//! application is still actively using the connection.
//!
//! Possible results are:
//!
//! CMRE_SUCCEEDED indicates that the data activity state was successfully set.
//! CMRE_NOT_SUPPORTED indicates that the API is not supported by the CSP.
//! CMRE_INVALID_CONNECTION indicates that the connection with the specified
//!     name does not exist.
//! CMRE_UNEXPECTED indicates any other failure.
//!
CM_RESULT CmCspSetDataActivityState(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection,
    __in CM_DATA_ACTIVITY_STATE                         State,
    __in                                         ULONG  DormantCancelOnActivityMs);

typedef CM_RESULT (*CM_CSP_SET_DATA_ACTIVITY_STATE)(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection,
    __in CM_DATA_ACTIVITY_STATE                         State,
    __in                                         ULONG  DormantCancelOnActivityMs);


//! Called by CM Service to decide if type specific configuration of two
//! configured connections is the same.  If the configurations are the same,
//! then CM will apply the same state between the two connections.  For example,
//! if one connection is connected, and there is a request to connect another
//! that has the same type specific configuration, then CM will automatically
//! connect it without calling CmCspConnect.
//!
//! Possible results are:
//!
//! TRUE indicates that type specific configuration of the two connection is
//!     the same.
//! FALSE indicates that the configurations are different, or the two
//!     configurations could not be compared.
//!
BOOL CmCspCompareConnectionConfig(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection1,
    __in CM_CONNECTION_TYPE TypeConnection2,
    __in_bcount(cbTypeSpecificConnection2) const BYTE* pTypeSpecificConnection2,
    __in DWORD cbTypeSpecificConnection2);

typedef BOOL (*CM_CSP_COMPARE_CONNECTION_CONFIG)(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* szConnection1,
    __in CM_CONNECTION_TYPE TypeConnection2,
    __in_bcount(cbTypeSpecificConnection2) const BYTE* pTypeSpecificConnection2,
    __in DWORD cbTypeSpecificConnection2);

//! Called by CM Service when it discovers an IP adapter that is not managed
//! by any of the CSPs.  A typical scenario of this is when an IP connection
//! has been activated out-of-band.  The CSP should handle this call by:
//!
//!     IF CSP can handle out-of-band connections AND
//!             recognizes the given adapter as one that would be created
//!             as a result of connecting one of its connection that it has
//!             configured THEN
//!         Accept connection by returning CMRE_SUCCESS and configured
//!         connection name associated with the adapter.
//!         Subsequently, the CSP should not allow this connection to be
//!         disconnected by CM.  That is, it should fail calls to
//!         CmCspDisconnect on this connection.
//!     ELSE
//!         reject connection by returning CMRE_INVALID_CONNECTION.
//!
//! Possible results are:
//!
//! CMRE_SUCCEEDED indicates that the connection was successfully claimed.
//! CMRE_NOT_SUPPORTED indicates that the API is not supported by the CSP.
//! CMRE_UNEXPECTED indicates any other failure.
//!
CM_RESULT CmCspClaimConnection(
    __in WCHAR* szAdapter,
    __inout_bcount(CM_CONNECTION_NAME_LENGTH) WCHAR* szConnection);

typedef CM_RESULT (*CM_CSP_CLAIM_CONNECTION)(
    __in WCHAR* szAdapter,
    __inout_bcount(CM_CONNECTION_NAME_LENGTH) WCHAR* szConnection);

#ifdef __cplusplus
}
#endif

#endif // _CmCsp_h_

