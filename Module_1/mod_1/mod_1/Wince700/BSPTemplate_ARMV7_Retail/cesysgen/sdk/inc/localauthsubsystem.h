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
/* 
   localauthsubsystem.h -- Defines service routines that LASS exposes to third party applications.
*/

#ifndef __LOCAL_AUTH_SUBSYSTEM_H__
#define __LOCAL_AUTH_SUBSYSTEM_H__

#include <windows.h>
#include <lasscommonerrors.h>

const WCHAR gc_wszLASSReadyEventName[] = L"bfa35121-6197-422a-a7e0-8ac90796a626";

//GUID of SHELL AE: {224F6999-B798-45C3-8EA1-B18A3B030840}
DEFINE_GUID( GUID_SHELL, 0x224f6999, 0xb798, 0x45c3, 0x8e, 0xa1, 0xb1, 0x8a, 0x3b, 0x03, 0x08, 0x40 );

const DWORD LOCKOUTTIMEINFINITE = 0;

class CLASSUserRequest
{
private:
    ULONGLONG m_ullUserRequestToken;
    HANDLE m_hNotification;
    DWORD m_dwLASSTerminateNotificationToken;

public:
    CLASSUserRequest( ULONGLONG ullUserRequestToken, DWORD dwLASSTerminateNotificationToken, HANDLE hUserRequestNotification );
    ~CLASSUserRequest();
    
    ULONGLONG GetUserRequestToken() const;
    HRESULT GetUserRequestNotificationHandle( __out LPHANDLE ph );
    HRESULT GetLASSShutdownNotificationHandle( __out LPHANDLE ph );
};

typedef enum __AELOCKABLESTATE
{
    AEAUTH_LOCKSTATEUNKNOWN = 0,
    AEAUTH_FORCEENROLLREQUIRED,
    AEAUTH_CREDENTIALLOCKENABLED,
    AEAUTH_KEYLOCKENABLED,
    AEAUTH_NONE
} AELockableState;

typedef enum __AESTATEIDENTIFIER
{
    AESTATE_CURRENTLOCKOUTTIME = 0,
    AESTATE_AUTHENTICATIONENABLED

} AEStateID;

/// <summary>
///     This function updates both LASS and (optionally) LAP settings on end user's request
/// </summary>
/// <param name="guidAE">
///     GUID of the AE to show control panel for.
/// </param>
/// <param name="ppUserRequest">
///     pointer to receive CLASSUserRequest object which uniquelly representing the DisplayAEConfiguration 
///   request across device, user should wait until the handle returned by this object's GetUserRequestNotificationHandle
///   to be signalled before issueing LASS_GET_DISPLAYAECONFIG_RESULT to acquire the result.
/// </param>
/// <returns>
///     Return S_OK if settings has been updated successfully, return proper error code 
///   otherwise.
/// </returns>
/// <remark>
///     Shows AE control panel setting UI, optionally also exposes entry point for LAP 
///   enrollment UI. In "7" this is the only way that end user can change settings on how
///   device lock works. 
/// </remark>
HRESULT DisplayAEConfigurationUIAsync( GUID guidAE, __deref_out_opt CLASSUserRequest** ppUserRequest );

/// <summary>
///   This function acquire result of DisplayAEConfiguration request identified by the handle passed in.
/// </summary>
/// <param name="pUserRequest">
///   Pointer to CLASSUserRequest object which uniquely identifies the DisplayAEConfiguration request across 
///  device, user should wait until handle acquired from this object's GetUserRequestNotificationHandle method
///  to be signalled before issueing LASS_GET_DISPLAYAECONFIG_RESULT to acquire verify user result.
/// </param>
/// <returns>
///   The result of DisplayAEConfiguration request, user should check the return to get result/error 
///  status of this DisplayAEConfiguration request.
/// </returns>
HRESULT GetDisplayAEConfigurationUIResult( __in CLASSUserRequest* pUserRequest );

/// <summary>
///   This function perform DisplayAEConfiguration task in synchronized way. caller's thread will be
///  suspended until this DisplayAEConfiguration request has been processed and returned.
/// </summary>
/// <param name="guidAE">
///     guid of AE which is used by this DisplayAEConfiguration request.
/// </param>
/// <returns>
///     Return S_OK if DisplayAEConfiguration request has been successfully created and recorded, return 
///   proper error code otherwise.
/// </returns>
/// <remark>
///     This function combines DisplayAEConfigurationUIAsync and GetDisplayAEConfigurationUIResult in one function.
///   This is a helper function to make caller's code simply.
/// </remark>
HRESULT DisplayAEConfigurationUISync( GUID guidAE );

/// <summary>
///   This function do the real and sole work of LASS system, Verify User.
/// </summary>
/// <param name="guidAE">
///     guid of AE which is used by this VerifyUser request.
/// </param>
/// <param name="ppUserRequest">
///     pointer to CLASSUserRequest object to uniquely identify the VerifyUser request across device, 
///  user should wait until handle acquired from the object's GetUserRequestNotificationHandle method to
///  be signalled before issueing LASS_GET_VU_RESULT to acquire verify user result.
/// </param>
/// <returns>
///     Return S_OK if Verify User request has been successfully created and recorded, return 
///   proper error code otherwise.
/// </returns>
/// <remark>
/// </remark>
HRESULT VerifyUserAsync( GUID guidAE, __deref_out_opt CLASSUserRequest** ppUserRequest );

/// <summary>
///   This function acquire result of VerifyUser request identified by the handle passed in.
/// </summary>
/// <param name="pUserRequest">
///   Pointer to CLASSUserRequest object to uniquely identify the VerifyUser request across device, 
///  user should wait until handle acquired from his object's GetUserRequestNotificationHandle method
///  to be signalled before issueing LASS_GET_VU_RESULT to acquire verify user result.
/// </param>
/// <returns>
///   The result of VerifyUser request, user should check the return to get result/error 
///  status of this VerifyUser request.
/// </returns>
HRESULT GetVerifyUserResult( __in CLASSUserRequest* pUserRequest );

/// <summary>
///   This function remove specified Verify User request from waiting list.
/// </summary>
/// <param name="pUserRequest">
///   Pointer to CLASSUserRequest object to uniquely identify the VerifyUser request to be cancelled across
///  device. 
/// </param>
/// <returns>
///   Return S_OK if Cancel VU request has been processed successfully. Return appropriate
///  error code otherwise.
/// </returns>
/// <remark>
///   If the VerifyUser request has been under processing, Cancel the request can cause the
///  UI to shutdown immediately. and caller should treat this request as if it never existed.
///  If two apps call VerifyUser and one calls CancelVerifyUser we will keep the existing UI
///  up to serve the second request. The caller of CancelVeifyUser does not need to know that
///  the VerifyUser is still shown, and caller should not reference to the Verify User request
///  handler anymore.
/// </remark>
HRESULT CancelVerifyUserRequest( __in CLASSUserRequest* pUserRequest );

/// <summary>
///   This function perform VerifyUser task in synchronized way. caller's thread will be
///  suspended until this verify user request has been processed and returned.
/// </summary>
/// <param name="guidAE">
///     guid of AE which is used by this VerifyUser request.
/// </param>
/// <returns>
///     Return S_OK if Verify User request has been successfully created and recorded, return 
///   proper error code otherwise.
/// </returns>
/// <remark>
///     This function combines VerifyUserAsync and GetVerifyUserResult in one function. This is 
///   a helper function to make caller's code simply.
/// </remark>
HRESULT VerifyUserSync ( GUID guidAE );

/// <summary>
///   This function inform LASS that caller believe some prerequisit for ARC to set up its
///  credential has been met and ARC can take this window to perform credential set up.
/// </summary>
/// <param name="guidARC">
///   guid of ARC that should perform credential setting up if needed.
/// </param>
/// <returns>
///   This is a windows message style notification, no return value is required, which 
///  implies caller does not need to care about what happened inside LASS.
/// </returns>
/// <returns>
///   S_OK indicates LASS has received the request and will schedule to process it on appropriate time.
///  return appropriate error code otherwise.
/// </returns>
/// <remark>
///   This function usually called when OMDA session or active sync session with is 
///  about or ready to up. 
/// </remark>
HRESULT DoARCSetupIfNeeded( GUID guidARC );

/// <summary>
///   This function register with LASS to receive notification through event handler returned
///  as third argument when AE state or configuration settings has changed. It is user's responsibility
///  to call appropriate method to acquire updated information about these AE state and configuration
///  settings.
/// </summary>
/// <param name="guidAE">
///   guid of AE whose state and configuration setting changes caller is interested to know.
/// </param>
/// <param name="ppUserRequest">
///   Pointer receive CLASSUserRequest object. Caller should listen to handle returned from this object's
///  GetUserRequestNotificationHandle mthod from now on to receive AE settings change notification. Also, 
///  this pointer should be passed into UnregisterAESettingChangeNotificationListner as first argument.
/// </param>
/// <returns>
///   S_OK indicates the registration goes well and the handler returned is valid. Otherwise, appropriate
///  error code will be returned and the content of ph is undefined.
/// </returns>
/// <remark>
///   Caller need to call UnregisterAESettingChangeNotificationListener after it is no longer 
///  interested in the AE's setting change. and then call ReleaseHLASS to release the HLASS handle
/// </remark>
HRESULT RegisterAESettingChangeNotificationListener( GUID guidAE, __deref_out_opt CLASSUserRequest** ppUserRequest );

/// <summary>
///   This function unregister with LASS to stop listner to AE state and configuration change.
/// </summary>
/// <param name="pUserRequest">
///   Pointer to CLASSUserRequest object caller received from registerAESettingChangeNotificationListener
/// </param>
/// <returns>
///   S_OK indicates the unregistration goes well. Otherwise, appropriate
///  error code will be returned and the content of ph is undefined.
/// </returns>
HRESULT UnregisterAESettingChangeNotificationListener( __in CLASSUserRequest* pUserRequest );

/// <summary>
///   This function retrieve current lockout time on AE under question.
/// </summary>
/// <param name="guidAE">
///   guid of AE whose Lockout time will be queried. 
/// </param>
/// <param name="lpdwCurrentLockoutTime">
///   Pointer to a DWORD receives the resulting lock out time
/// </param>
/// <returns>
///   S_OK indicates the operation goes well and the current lock out time returned is valid. Otherwise, 
///  appropriate error code will be returned and the content of lpdwCurrentLockoutTime is undefined.
/// </returns>
/// <remark>
///   Currently, only shell AE support this setting. This function internally calls GetAEState function with
///  AESTATE_CURRENTLOCKOUTTIME as second argument
/// </remark>
HRESULT GetAECurrentLockoutTime( GUID guidAE, __out LPDWORD lpdwCurrentLockoutTime );

/// <summary>
///   This function retrieve various current AE state information.
/// </summary>
///  target AE
/// <param name="guidAE">
///   guid of AE whose state information will be queried. 
/// </param>
/// <param name="eAEStateID">
///   enumeration value indicating which piece of information caller is interested in. 
/// </param>
/// <param name="lpdwAEState">
///   Pointer to a DWORD representing AE state information returned from LASS
/// </param>
/// <returns>
///   S_OK indicates the operation goes well and the current authentication requiring status is returned 
///  in the boolean value referenced by lpfAuthenticationRequired pointer, Otherwise, appropriate error 
///  code will be returned and the content of lpfAuthenticationRequired is undefined.
/// </returns>
HRESULT GetAEState( GUID guidAE, AEStateID eAEStateID, __out LPDWORD lpdwAEState );

#endif //__LOCAL_AUTH_SUBSYSTEM_H__