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
// Resource service provider interface for Resource Manager.
//

#ifndef _Rsp_h_
#define _Rsp_h_

#include <windows.h>
#include <RmNet.h>

#ifdef __cplusplus
extern "C" {
#endif

/// <summary>
///     Callback function definition for RSP notifications.
/// </summary>
typedef void (*RSP_CALLBACK) (
    RM_NOTIFICATION_TYPE notificationCode,
    __in DWORD dwNotificationParam,
    __in_bcount_opt(cbDataSize) const void* pData,
    DWORD cbDataSize);

typedef struct RSP_HOST_INFO
{
    DWORD dwVersion;
    RSP_CALLBACK pfnNotification;
    DWORD dwNotificationParam;
} RSP_HOST_INFO;

typedef struct RSP_PROVIDER_INFO
{
    DWORD dwVersion;
    WCHAR wszName[MAX_PATH];
    DWORD cResourceId;
    RM_RESOURCE_ID resourceId[1];
} RSP_PROVIDER_INFO;

/*
    RSP Notifications re-use the RM notification enumerations and data
    structures. Please see Rm.h for the details.

    Specifically the following structures and enums apply:

    RM_NOTIFICATION_TYPE enum
    RM_UNAVAILABLE_REASON enum
    RM_AVAILABILITY_INFO structure
    RM_ROAMING_INFO structure
    RM_RESOURCE_INFO structure
    RM_REVOKE_INFO structure

*/



/// <summary>
///     Called by RM to initialize a RSP. Upon a successful result, an RSP
///     should be capable or responding to all other RSP API's, provide
///     notifications for the supported resource types, and return a list of
///     resource types supported by the RSP.
/// </summary>
/// <param name="pHostInfo">
///     Contains the RM information needed by the RSP to send notifications.
/// </param>
/// <param name="cbHostInfo">
///     Size in bytes of the buffer passed in to pHostInfo.
/// </param>
/// <param name="pProviderInfo">
///     Buffer containing the provider information upon a successful return.
/// </param>
/// <param name="pcbProviderInfo">
///     Pointer to a buffer containing the size of the pProviderInfo buffer in
///     bytes.
///     Upon a RMRE_INSUFFICIENT_BUFFER result, this will containg the needed
///     size in bytes to properly fill out pProviderInfo.
/// </param>
/// <returns>
///     RMRE_SUCCESS
///     RMRE_INVALID_PARAMETER
///     Returned if pHostInfo is invalid or cbHostInfo is incorrect size.
///     RMRE_INVALID_VERSION
///     Returned when pHostInfo version is incorrect.
///     RMRE_INSUFFICIENT_BUFFER
///     Returned when pProviderInfo buffer is not sufficient size to contain
///     the provider structure and list of resource ID's.
///     RMRE_UNEXPECTED
/// </returns>
RM_RESULT RspInitialize(
    __in_bcount(cbHostInfo) const RSP_HOST_INFO* pHostInfo,
    __in DWORD const cbHostInfo,
    __out_bcount(*pcbProviderInfo) RSP_PROVIDER_INFO* pProviderInfo,
    __inout DWORD* pcbProviderInfo);

typedef RM_RESULT (*RSP_INITIALIZE)(
    __in_bcount(cbHostInfo) const RSP_HOST_INFO* pHostInfo,
    __in DWORD const cbHostInfo,
    __out_bcount(*pcbProviderInfo) RSP_PROVIDER_INFO* pProviderInfo,
    __inout DWORD* pcbProviderInfo);


/// <summary>
///     Called by RM to deinitialize an RSP before exiting.
/// </summary>
/// <returns>
///     void
/// </returns>
void RspDeinitialize();

typedef RM_RESULT (*RSP_DEINITIALIZE)();


/// <summary>
///     RM calls RspAcquire to lock an instance of a resource. The RSP is
///     responsible for checking if there is an available resource
///     and that access to a resource is not blocked by some state of the
///     device. For example, an active voice call that would block establishing
///     a cellular data connection.
/// </summary>
/// <param name="resourceId">
///     ID for the resource to acquire.
/// </param>
/// <param name="phResource">
///     When success is returned, this will contain an handle associated with
///     the acquired resource. This is used when
///     calling RspRelease and in notifications from the RSP.
/// </param>
/// <returns>
///     RMRE_SUCCESS: Returned if the resource was available.
///
///     RMRE_CONFLICT: Returned if all instances of the resource are in use.
///
///     RMRE_EXTERNAL_CONFLICT: Returned if the resource is not available due
///     to conflicts caused by external conditions.
///
///     RMRE_UNEXPECTED
/// </returns>
RM_RESULT RspAcquire(
    __in const RM_RESOURCE_ID* pResId,
    __deref_out RM_RESOURCE_HANDLE* phResource);

typedef RM_RESULT (*RSP_ACQUIRE)(
    __in const RM_RESOURCE_ID* pResId,
    __deref_out RM_RESOURCE_HANDLE* phResource);


/// <summary>
///     RspRelease allows for a RM to release an acquired resource to free it up
///     for further use.
/// </summary>
/// <param name="hResource">
///     Resource handle returned from RspAcquire to release.
/// </param>
/// <returns>
///     RMRE_SUCCESS
///     RMRE_UNEXPECTED
/// </returns>
RM_RESULT RspRelease(
    RM_RESOURCE_HANDLE hResource);

typedef RM_RESULT (*RSP_RELEASE)(
    RM_RESOURCE_HANDLE hResource);


/// <summary>
///     RspGetResourceInfo allows for RM to retrieve the current state
///     information about a resource.
/// </summary>
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
/// </returns>
RM_RESULT RspGetResourceInfo(
    __in const RM_RESOURCE_ID* pResId,
    __out RM_RESOURCE_INFO* pResourceInfo,
    DWORD cbResourceInfo);

typedef RM_RESULT (*RSP_GET_RESOURCE_INFO)(
    __in const RM_RESOURCE_ID* pResId,
    __out RM_RESOURCE_INFO* pResourceInfo,
    DWORD cbResourceInfo);

#ifdef __cplusplus
}
#endif

#endif // _Rsp_h_

