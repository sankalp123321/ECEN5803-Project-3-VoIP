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
//  *************************************************************************
//
//  ccoresvcs.h
//
//  Cellcore Services API declarations
//
//  *************************************************************************

#pragma once

#include <windows.h>
#include "tapi.h"
#include "msxml.h"
#include "prmacros.h"

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

//
// We are relying on the bonus behavior of RegQueryValueEx under WinCE: you
// can pass a relative path in the lpReserved parameter.  If this isn't
// available, we need to redefine calls to SHRegQueryValueEx to point to a
// function which does this for us, then calls the normal ReqQueryValueEx.
//
#define SHRegQueryValueEx   RegQueryValueEx

//  *************************************************************************
//  RestoreLastRadioTransmitReceiveState
//
//  Purpose:
//      Restores the last transmit/receive state of the device's radio module.
//
//  Details:
//      If the user turns the device off with the radio in full power mode,
//      he/she turns the device back on, the shell should call this API to
//      restore that state.  Note that before calling this API, the radio
//      will be powered off for safety.
//
//  Parameters:
//      rlrtrsoOption  [in]  One of:
//                           RLRTRS_DEFAULT
//                              Default behavior
//                           RLRTRS_FORCE_RADIO_POWER_OFF
//                              For reasons of safety, ensure that the
//                              radio power remains off (e.g., user powers
//                              device on in an airplane).
//
//  Returns:
//      HRESULT
//
//  Side Effects:
//      This API will also register the radio module on the network if it is
//      possible to do so.
//  *************************************************************************
typedef enum
{
    RLRTRS_DEFAULT = 0,
    RLRTRS_FORCE_RADIO_POWER_OFF,
    RLRTRS_FORCE_RADIO_POWER_ON,
    RLRTRS_RADIO_REGISTER,
    RLRTRS_DEVICE_POWER_OFF,
    RLRTRS_DEVICE_POWER_ON,
} RLRTRS_OPTION;
HRESULT RestoreLastRadioTransmitReceiveState(RLRTRS_OPTION rlrtrsoOption);
HRESULT RestoreLastRadioTransmitReceiveStateSync(RLRTRS_OPTION rlrtrsoOption);
HRESULT CfgUtilCreateCharacteristic(IXMLDOMNode *nodeXML, LPCTSTR szNodeType, IXMLDOMElement **pNewElement);
HRESULT CfgUtilCreateParm(IXMLDOMNode *nodeXML, LPCTSTR szNodeName, LPCTSTR szNodeValue, IXMLDOMElement **pNewElement);

// *************************************************************************
// Unsupported helper functions that you shouldn't use unless you know
// exactly what they do.
//
// *************************************************************************
int wcsncpyX(__out_ecount_opt(cchMax) TCHAR *pszDst, const TCHAR *pszSrc, int cchMax);

//*** LoadLibraryRes -- load a .res file (w/o calling DllMain, etc.)
//
#if 1 // FEAT_DATALESS
#define LoadLibraryRes(p) LoadLibraryEx((p), NULL, LOAD_LIBRARY_AS_DATAFILE)
#else
#define LoadLibraryRes(p) LoadLibrary((p))
#endif

BOOL IsSuspendResumeConnection(const TCHAR* pszAddress, BOOL fIsGPRS);
BOOL IsAlwaysOnConnection(const TCHAR* pszAddress, BOOL fIsGPRS);

//Security Namespace for Cellcore Components, CCA stands for CellCore Assets
#define CCA_RIL                     L"RIL"

#define CCA_CALL                    L"CN_CALL"
#define CCA_NETWORK                 L"CN_NETWORK"
#define CCA_SUPPLEMTARY_SERVICE     L"CN_SUPP"
#define CCA_RADIO_DEVICE            L"CN_RADIO"
#define CCA_WAP_MESSAGE             L"CN_WAP"
#define CCA_PACKET_DATA             L"CN_PACKET"

#define CCA_SMS_MESSAGE             L"SMS_MESSAGE"

#define CCA_SIM_PHONEBOOK           L"SIM_PHONEBOOK"
#define CCA_SIM_MESSAGE             L"SIM_MESSAGE"
#define CCA_SIM_FILE                L"SIM_FILE"
#define CCA_SIM_PIN                 L"SIM_PIN"
#define CCA_SIM_INFO                L"SIM_INFO"


//Security Access Mask for Cellcore Components
#define CN_MESSAGE_ACCESS_SEND      0x00000001
#define CN_MESSAGE_ACCESS_RECEIVE   0x00000002

HRESULT CUtlSetRadioState(DWORD dwRadioIndex, RLRTRS_OPTION rlrtrsoOption, BOOL bSynchronous);

#ifdef __cplusplus
};
#endif // __cplusplus
