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
//
// Contains the definitions of the Resource Manager (RM) interface used to
// coordinate access to establishing data connections through Connection Manager
//

#ifndef _RmNet_h_
#define _RmNet_h_

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#define RM_CURRENT_VERSION (1)

typedef DWORD RM_RESOURCE_HANDLE;

typedef GUID RM_RESOURCE_ID;

/// <summary>
///     Results returned from calls to Resource Manager
/// </summary>
typedef enum RM_RESULT
{
    RMRE_SUCCESS = 0,

    RMRE_CONFLICT,
    RMRE_EXTERNAL_CONFLICT,
    RMRE_NOT_INITIALIZED,
    RMRE_INVALID_PARAMETER,
    RMRE_UNEXPECTED,
    RMRE_INVALID_VERSION,
    RMRE_INSUFFICIENT_BUFFER,
    RMRE_RESOURCE_DOES_NOT_EXIST,

    RMRE_LAST
} RM_RESULT;


/// <summary>
///     Notification types that can be sent by RM to a client through the
///     RM_CALLBACK function passed in to RmInitialize.
/// </summary>
typedef enum RM_NOTIFICATION_TYPE
{
    /// <summary>
    ///     RMNT_REVOKE
    ///     (RM_REVOKE_INFO*) pData
    ///     The revoke notification is sent when an acquired resource is lost.
    ///     This occurs when a resource has been taken and given to another
    ///     application or if a resource is lost due to some change in the state
    ///     of the device.
    ///
    ///     The pData parameter of the callback points to a RM_REVOKE_INFO
    ///     structure containing the resource handle of the acquired resource
    ///     that was revoked plus additional information about the reason of
    ///     the revoke.
    /// </summary>
    RMNT_REVOKE,

    /// <summary>
    ///     RMNT_SUSPEND_RESUME
    ///     (RM_SUSPEND_RESUME_INFO*) pData
    ///     The resource has been suspended or resumed due to external causes.
    ///     In the suspended case, the resource is still allocated exclusively
    ///     for the client that originally acquired it, but it cannot be used
    ///     until a resume notification is received.
    ///
    ///     The resume notification is sent when a previously suspended resource
    ///     is available for use again.
    ///
    ///     For example, a resource for a cellular data connection may receive a
    ///     suspended notification when a voice call is active. Once the voice
    ///     call is disconnected, a resume notification will be sent.
    ///
    ///     The pData parameter of the callback points to a
    ///     RM_SUSPEND_RESUME_INFO structure that contains a resource handle
    ///     returned from a RmAcquire call and a boolean value representing
    ///     if the resource is suspended or not.
    /// </summary>
    RMNT_SUSPEND_RESUME,


    /// <summary>
    ///     RMNT_RESOURCE_AVAILABILITY
    ///     (RM_AVAILABILITY_INFO*) pData
    ///     The resource availability notification is sent when an opened
    ///     resource's status changes due to external conditions that
    ///     causes the resource to be blocked during and acquire and vice versa.
    ///     For example, a resource for a cellular data connection may become
    ///     unavailable when a voice call is active on a non-simultaneous voice
    ///     and data device. Once the voice call was ended, the resource would
    ///     become available again.
    ///
    ///     The pData parameter of the callback points to a RM_AVAILABILITY_INFO
    ///     structure. This structure contains the resource ID,
    ///     a boolean flag marking the resource available or not
    ///     and a reason code containing the primary cause if unavailable.
    ///     The reason code is not valid for resource available notifications.
    /// </summary>
    RMNT_RESOURCE_AVAILABILITY,

    /// <summary>
    ///     RM_NOTIFY_RESOURCE_ROAMING
    ///     (RM_ROAMING_INFO*) pData
    ///     The resource roaming notification is sent when an opened resource
    ///     has went from what is considered a home network area to an outside
    ///     network and vice versa. This generally is a cellular specific
    ///     concept where a cellular device can operate on other networks
    ///     outside of the device's local or issuing network. When operating on
    ///     an outside network (roaming) the cost of using the network may be
    ///     different or have different characteristics.
    ///
    ///     The pData parameter of the callback points to a RM_ROAMING_INFO
    ///     structure. This contains the resource ID of the resource whose
    ///     roaming status has changed, and a boolean flag marking whether the
    ///     resource is roaming or not.
    /// </summary>
    RMNT_RESOURCE_ROAMING,

    /// <summary>
    ///     RM_NOTIFY_NETWORK_TYPE
    ///     (RM_NETWORK_TYPE_INFO*) pData
    ///
    ///     The Network Type notification is sent when an opened resource
    ///     changes the underlying network technology used by the
    ///     resource is changed. Examples of network type are GPRS, EDGE,
    ///     UMTS, HSDPA for cellular GPRS connections, 802.11a/b/g for WiFi,
    ///     or 1xRTT, EVDO, EVDV for CDMA cellular connections.
    ///
    ///     The pData parameter of the callback points to a RM_NETWORK_TYPE_INFO
    ///     structyre representing. This contains the corresponding resource ID
    ///      and the network type. The GUID value is defined by the underlying
    ///     RSP (and usually the corresponding Connection Manager CSP). It is
    ///     common to reuse the Connection Manager CM_CONNECTION_NETWORK_TYPE
    ///     value.
    /// </summary>
    RMNT_RESOURCE_NETWORK_TYPE,

    RMNT_LAST
} RM_NOTIFICATION_TYPE;



/// <summary>
///     Callback function definition for RM notifications. Used in RmInitialize.
/// </summary>
typedef void (*RM_CALLBACK) (
    DWORD dwNotificationParam,
    RM_NOTIFICATION_TYPE notificationCode,
    __in_bcount_opt(cbDataSize) const void* pData,
    DWORD cbDataSize);


/// <summary>
///     Detailed codes explaining the primary reason a resource is unavailable
///     or revoked.
/// </summary>
typedef enum RM_UNAVAILABLE_REASON
{
    RMUR_NO_SPECIFIC_REASON = 0,

    /// <summary>
    ///     The resource is not ready due to problems in the underlying
    ///     hardware. For example, the hardware is powered off or not attached
    ///     to a network.
    /// </summary>
    RMUR_RESOURCE_NOT_READY,

    /// <summary>
    ///     The resource cannot be used because of another activity occurring
    ///     on the device. For example a voice call or CSD connection is
    ///     active.
    /// </summary>
    RMUR_EXTERNAL_IN_USE,

    /// <summary>
    ///     The resource cannot be used because all instances of the resource
    ///     have already been acquired.
    /// </summary>
    RMUR_ALL_RESOURCES_IN_USE,

    /// <summary>
    ///     The resource is being revoked so that it can be acquired by
    ///     another request.
    ///
    ///     Note: The client is expected to have disconnect and clean up all
    ///     associated details of the resource before returning from the
    ///     callback function.
    /// </summary>
    RMUR_RESOURCE_REVOKE,

    /// <summary>
    ///     The resource cannot because of an event specific to the RSP.
    ///     This reason allows for RSP specific causes to be added in the
    ///     future.
    /// </summary>
    RMUR_RSP_SPECIFIC
} RM_UNAVAILABLE_REASON;


/// <summary>
///     Detailed codes explaining the primary reason a resource is unavailable
///     or revoked.
/// </summary>
typedef enum RM_UNAVAILABLE_SPECIFIC_CAUSE
{
        RMUSC_NO_SPECIFIC_CAUSE = 0,

        /// <summary>
        ///     The power to the resource's hardware is off.
        /// </summary>
        RMUSC_POWER_OFF,

        /// <summary>
        ///     The resource's hardware is not registered on a network.
        /// </summary>
        RMUSC_NOT_REGISTERED,

        /// <summary>
        ///     The resource cannot be used because a voice call is in progress.
        /// </summary>
        RMUSC_PHONE_IN_USE,

        /// <summary>
        ///     The resource cannot be used because a CSD connection is in
        ///     progress.
        /// </summary>
        RMUSC_CSD_IN_USE,

        /// <summary>
        ///     Start of the reserved section for RSP specific causes.
        /// </summary>
        RMUSC_RSP_SPECIFIC_START = 0x80000000
} RM_UNAVAILABLE_SPECIFIC_CAUSE;


typedef struct RM_CLIENT_INFO
{
    DWORD dwVersion;
    RM_CALLBACK pfnNotification;
    DWORD dwNotificationParam;

} RM_CLIENT_INFO;

typedef struct RM_AVAILABILITY_INFO
{
    DWORD dwVersion;
    RM_RESOURCE_ID resourceId;
    BOOL fAvailable;
    RM_UNAVAILABLE_REASON reason;
    RM_UNAVAILABLE_SPECIFIC_CAUSE specificCause;
} RM_AVAILABILITY_INFO;

typedef struct RM_ROAMING_INFO
{
    DWORD dwVersion;
    RM_RESOURCE_ID resourceId;
    BOOL fRoaming;
} RM_ROAMING_INFO;

typedef struct RM_NETWORK_TYPE_INFO
{
    DWORD dwVersion;
    RM_RESOURCE_ID resourceId;
    GUID networkType;
} RM_NETWORK_TYPE_INFO;

typedef struct RM_RESOURCE_INFO
{
    DWORD dwVersion;
    RM_AVAILABILITY_INFO availability;
    BOOL fRoaming;
    GUID networkType;
    GUID deviceType;
} RM_RESOURCE_INFO;

typedef struct RM_REVOKE_INFO
{
    DWORD dwVersion;
    RM_RESOURCE_HANDLE hResource;
    RM_UNAVAILABLE_REASON reason;
    RM_UNAVAILABLE_SPECIFIC_CAUSE specificCause;
} RM_REVOKE_INFO;

typedef struct RM_SUSPEND_RESUME_INFO
{
    DWORD dwVersion;
    RM_RESOURCE_HANDLE hResource;
    BOOL fSuspended;
} RM_SUSPEND_RESUME_INFO;

/// <summary>
///     A priority value associated with the acquire request for assigning
///     priorities to separate tasks within an application as well as
///     determining whether the resource will be used for user interactive
///     or background activity.
///
///     Values with their corresponding usage:
///     -2^31 to -1: Background sessions
///     0 to 2^31-1: User Interactive sessions
/// </summary>
typedef int RM_PRIORITY;

/// <summary>
///     RmInitialize must be called by client applications to provider RM time
///     to start internal processes necessary for RM to function. A client
///     must call RmInitialize before any other RM API will succeed.
/// </summary>
/// <param name="pClientInfo">
///     Contains necessary RM client information such as a callback function
///     for RM to send notifications of changes to resources and a client
///     defined value that will be sent with each notification.
///     A notification callback is necessary and
///     RMRE_INVALID_PARAMETER will be returned if this parameter is NULL.
/// </param>
/// <param name="cbClientInfo">
///     Size in bytes of the pClientInfo buffer.
/// </param>
/// <param name="phId">
///     Upon a successful result, a handle is returned to be used in
///     subsequent calls to the RM API.
/// </param>
/// <returns>
///     RMRE_SUCCESS
///     RMRE_INVALID_PARAMETER
///     RMRE_UNEXPECTED
/// </returns>
RM_RESULT RmInitialize(
    __in_bcount(cbClientInfo) const RM_CLIENT_INFO* pClientInfo,
    __in const DWORD cbClientInfo,
    __out HANDLE* phId);



/// <summary>
///     RmDeinitialize allows for a client to inform RM that it no longer is
///     using RM.
/// </summary>
/// <param name="hId">
///     A valid handle returned as a part of a successful call to
///     RmInitialize.
/// </param>
/// <returns>
///     RMRE_SUCCESS
///     RMRE_INVALID_PARAMETER
///     RMRE_UNEXPECTED
/// </returns>
RM_RESULT RmDeinitialize(
    __in HANDLE hId);


/// <summary>
///     RmOpenResource is used by a client to open the resource of the
///     type specified by pResId. Once opened, the application will
///     receive asynchronous notifications about the state of the resource.
/// </summary>
/// <param name="hId">
///     A valid handle returned as a part of a successful call to
///     RmInitialize.
/// </param>
/// <param name="pResId">
///     Pointer to a resource identifier of the type of resource to open.
/// </param>
/// <returns>
///     RMRE_SUCCESS
///     RMRE_INVALID_PARAMETER
///     RMRE_UNEXPECTED
/// </returns>
RM_RESULT RmOpenResource(
    __in HANDLE hId,
    __in const RM_RESOURCE_ID* pResId);


/// <summary>
///     RmCloseResource is called by a client when it no longer needs to
///     receive notifications about the resource.
/// </summary>
/// <param name="hId">
///     A valid handle returned as a part of a successful call to
///     RmInitialize.
/// </param>
/// <param name="pResId">
///     Pointer to a resource identifier of the type of resource to close.
/// </param>
/// <returns>
///     RMRE_SUCCESS
///     RMRE_INVALID_PARAMETER
///     RMRE_UNEXPECTED
/// </returns>
/// <remarks>
///     RmCloseResource does not affect acquired resource handles returned
///     from calls to RmAcquire.
/// </remarks>
RM_RESULT RmCloseResource(
    __in HANDLE hId,
    __in const RM_RESOURCE_ID* pResId);

/// <summary>
///     RmGetResourceInfo allows for a client to retrieve the current state
///     information about a resource.
/// </summary>
/// <param name="hId">
///     A valid handle returned as a part of a successful call to
///     RmInitialize.
/// </param>
/// <param name="pResId">
///     Pointer to the resource identifier for the resource to return current
///     state information about.
/// </param>
/// <param name="pResourceInfo">
///     Buffer to return the resource information in.
/// </param>
/// <param name="cbResourceInfo">
///     Size of buffer passed in pResourceInfo
/// </param>
/// <returns>
///     RMRE_SUCCESS
///     RMRE_UNEXPECTED
///     RMRE_NOT_INITIALIZED
///     RMRE_INVALID_PARAMETER
///     RMRE_INSUFFICIENT_BUFFER
///     RMRE_RESOURCE_DOES_NOT_EXIST
/// </returns>
RM_RESULT RmGetResourceInfo(
    __in HANDLE hId,
    __in const RM_RESOURCE_ID* pResId,
    __out_bcount(cbResourceInfo) RM_RESOURCE_INFO* pResourceInfo,
    DWORD cbResourceInfo);


/// <summary>
///     RmAcquire allows an application to request a resource of the type
///     associated with pResId to be reserved for use and associated with an
///     application name.  A session identifier can also be included to help
///     resolve conflicts between multiple sessions coming from an application.
/// </summary>
/// <param name="hId">
///     A valid handle returned as a part of a successful call to
///     RmInitialize.
/// </param>
/// <param name="pResId">
///     Pointer to the resource identifier of the type of resource to acquire.
/// </param>
/// <param name="Priority">
///     A priority value associated with the acquire request for assigning
///     priorities to separate tasks within an application as well as
///     determining whether the resource will be used for user interactive
///     or background activity.
///
/// </param>
/// <param name="phAcquired">
///     When success is returned, this will contain an handle associated with
///     the acquired resource. This is used when
///     calling RmRelease to release the acquired resource or in
///     calls to RmAddToResource and RmRemoveFromResource.
/// </param>
/// <returns>
///     RMRE_SUCCESS: Returned if the resource was available for the
///     application and was successfully acquired.
///
///     RMRE_CONFLICT: Returned if the resource is in use by a higher
///     priority application.
///
///     RMRE_EXTERNAL_CONFLICT: Returned if the resource is not available due
///     to conflicts caused by external conditions. For example a Cellular Data
///     resource could not be acquired because a voice call was active and
///     simultaneous voice and data is not supported.
///
///     RMRE_INVALID_PARAMETER
///     RMRE_UNEXPECTED
/// </returns>
RM_RESULT RmAcquire(
    __in HANDLE hId,
    __in const RM_RESOURCE_ID* pResId,
    RM_PRIORITY Priority,
    __out RM_RESOURCE_HANDLE* phAcquired);



/// <summary>
///     RmRelease allows for a client to release a resource so that it is free
///     for use by subsequent calls to RmAcquire.
/// </summary>
/// <param name="hId">
///     A valid handle returned as a part of a successful call to
///     RmInitialize.
/// </param>
/// <param name="hAcquired">
///     Resource handle returned from RmAcquire to release.
/// </param>
/// <returns>
///     RMRE_SUCCESS
///     RMRE_INVALID_PARAMETER
///     RMRE_UNEXPECTED
/// </returns>
RM_RESULT RmRelease(
    __in HANDLE hId,
    __in RM_RESOURCE_HANDLE hAcquired);



/// <summary>
///     RmAddToResource allows attaching additional applications to an already
///     acquired resource. This allows for clients to inform RM about multiple
///     applications using a resource so that application resource conflict
///     decisions can be made.
/// </summary>
/// <param name="hId">
///     A valid handle returned as a part of a successful call to
///     RmInitialize.
/// </param>
/// <param name="hAcquired">
///     Resource handle returned from RmAcquire to add the specified
///     application to.
/// </param>
/// <param name="Priority">
///     A priority value associated with the acquire request for assigning
///     priorities to separate tasks within an application as well as
///     determining whether the resource will be used for user interactive
///     or background activity.
///
///     See RmAcquire for details.
/// </param>
/// <returns>
///     RMRE_SUCCESS
///     RMRE_INVALID_PARAMETER
///     RMRE_UNEXPECTED
/// </returns>
RM_RESULT RmAddToResource(
    __in HANDLE hId,
    __in RM_RESOURCE_HANDLE hAcquired,
    RM_PRIORITY Priority);



/// <summary>
///     RmRemoveFromResource allows a way to remove applications from an
///     acquired resource. This allows for clients to inform RM when an
///     applications is no longer using a resource so that application resource
///     conflict decisions can be made.
/// </summary>
/// <param name="hId">
///     A valid handle returned as a part of a successful call to
///     RmInitialize.
/// </param>
/// <param name="hAcquired">
///     Resource handle returned from RmAcquire to remove the specified
///     application from.
/// </param>
/// <param name="Priority">
///     The priority value associated with the account to be removed.
/// </param>
/// <returns>
///     RMRE_SUCCESS
///     RMRE_INVALID_PARAMETER
///     RMRE_UNEXPECTED
/// </returns>
RM_RESULT RmRemoveFromResource(
    __in HANDLE hId,
    __in RM_RESOURCE_HANDLE hAcquired,
    RM_PRIORITY Priority);


#ifdef __cplusplus
}
#endif

#endif // _RmNet_h_

