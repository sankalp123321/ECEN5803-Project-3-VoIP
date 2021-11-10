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
   LASS_COMMONERRORS.H -- Defines common error codes for Device Lock in "7".
*/
#pragma once

#ifndef __LASS_COMMONERRORS_H__
#define __LASS_COMMONERRORS_H__

#include <winerror.h>

//This Error code will be returned by LASS to external caller indicating that his request can 
//not be completed due to some LASS internal error, all error codes defined in lasserror.h will 
//be map to this one before they are throw to end user.
//Hex value: 0x80181500
#define E_LASSINTERNALERROR      MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0x0 ) )

//This error code indicating LASS subsystem is shutting down when a function
//is in the middle of processing. Although this is an extreme case, but this
//error code can be return from any exposed functions.
//Hex value: 0x80181501
#define E_LASSSHUTDOWN         MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0x1 ) )

//Return to external application indicating that the LAP, ARC or AE on which current request is based upon can 
//not be recognized by LASS.
//Hex value: 0x80181502
#define E_LASSOBJNOTREGISTERED     MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0x2 ) )

//Return to external application indicating that LASS cannot load the designated LAP, ARC or AE.
//Hex value: 0x80181503
#define E_LOADLASSOBJFAILED      MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0x3 ) )

//Return to external application by GetVerifyUserResult indicating that the VerifyUser request has been cancelled 
//by end user.
//Hex value: 0x80181504
#define E_VERIFYUSERCANCELLED MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0x4 ) )

//Returned by GetVerifyUserResult and VerifyUserSync indicating the VerifyUser request has failed most likely 
//due to end user input wrong credential.
//Hex value: 0x80181505
#define E_VERIFYUSERFAILED     MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0x5 ) )

//Returned by GetDisplayAEConfigurationUIResult indicating that the request has been cancelled
//by end user.
//Hex value: 0x80181506
#define E_DISAPLYAECONFIGCANCELLED MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0x6 ) )

//Returned by GetDisplayAEConfigurationUIResult and DisplayAEConfigurationUISync indicating
//the configuration request has failed.
//Hex value: 0x80181507
#define E_DISAPLYAECONFIGFAILED     MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0x7 ) )

//Returned by DisplayAEConfigurationUIAsync or GetDisplayAEConfigurationUIResult indicating error happen while contact
//with LASS to construct a HLASS handle which identifes this VU or UpdateAESetting user request
//Hex value: 0x80181508
#define E_CONSTRUCTCLIENTSIDEHLASSFAILED     MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0x8 ) )

//Returned by CUserRequest::GetUserRequestStatus when given UserRequestToken does not match any registered user request for 
//current CUserRequest's AE.
//Hex value: 0x80181509
#define E_INVALIDUSERREQUESTTOKEN MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0x9 ) )

//Returned by DoARCSetupIfNeeded indicating that the ARC given by GUID is not a valid ARC or not used by any active AE. 
//Therefore no ARC credential setup task will be scheduled.
//Hex value: 0x8018150A
#define E_UNUSEDARC         MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0xA ) )

/*
  Following two error code is for APIs defined in localauthsubsystem_csp.h header file ONLY:
*/
//Returned by 
//    SetLAPCustomConfig,
//    GetLAPCustomConfig,
//    SetARCCustomConfig,
//    GetARCCustomConfig,
//    SetAEConfig,
//    GetAEConfig,
// indicates the ConfigSetting name passed in is not valid.
//Hex value: 0x80181550
#define E_OBJECTPROPERTYNOTEXISTS     MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0x50 ) )

///Returned by
///    SetLAPCustomConfig,
///    GetLAPCustomCofnig,
///    SetARCCustomConfig,
///    GetARCCustomConfig,
///    SetAEConfig,
///    GetAEConfig,
///    SetARCWelcomeMessage,
///    GetARCWelcomeMessage,
///    CommitConfigTransaction,
///    RollbackConfigTransaction 
//which contains a dwTransactionID as its argument. This error code indicates that the transactionID passed
//in is invalid for current context. This can be caused by mistake like using a random, not-lass-allocated
//transaction ID, reuse a transactionID of a transaction that has already finished.
//Hex value: 0x80181551
#define E_TRANSACTIONALREADYFINISHEDORNOTEXIST        MAKE_HRESULT( SEVERITY_ERROR, FACILITY_WINDOWS_CE, ( LASS_BASE + 0x51 ) )

#endif //__LASS_COMMONERRORS_H__