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
#ifndef __cellcoreregshared_h__
#define __cellcoreregshared_h__

//**********************************************************
//
// Registry strings shared among various cellcore components.
//
//*********************************************************/
#define REG_szPhoneSettingsRegKey                           TEXT("ControlPanel\\Phone") // HKEY_CURRENT_USER
#define REG_szPhoneSettingsSecureRegKey                     TEXT("Security\\Phone")     // HKEY_LOCAL_MACHINE
#define REG_szPhoneSettings_Features                        TEXT("Features")
#define REG_szPhoneSettings_FeaturesAlternative             TEXT("FeaturesAlternative") // Added for WordMode
#define REG_szPhoneSettings_Flags2                          TEXT("Flags2")
#define REG_szPhoneSettings_DefaultAddressID                TEXT("DefaultAddressID")
#define REG_szPhoneSettings_Multiline                       TEXT("ML")
#define REG_szPhoneSettings_MultilineFeatures               TEXT("MLFeatures")

#define PSF2_LOG_SR_CALLS   0x0010 // call timers: log suspend resume calls

#define REG_szPhoneNetSettingsRegKey                        TEXT("ControlPanel\\PhoneNetSelMode")
#define REG_szPhoneNetSettings_Option                       TEXT("Option")
// PHONENETOPTION_xxx == RIL_OPSELMODE_xxx - 1
    #define PHONENETOPTION_AUTOMATIC                        0x00
    #define PHONENETOPTION_MANUAL                           0x01
    #define PHONENETOPTION_MANUALAUTOMATIC                  0x02
    #define PHONENETOPTION_AUTOMATIC_GSM                    0x03
    #define PHONENETOPTION_MANUAL_GSM                       0x04
    #define PHONENETOPTION_AUTOMATIC_CDMA                   0x05
    #define PHONENETOPTION_MANUAL_CDMA                      0x06

#define REG_szPhoneNetSettings_ManualNet                    TEXT("ManualNet")
#define REG_szPhoneNetSettings_ManualNetAcT                 TEXT("ManualNetAcT")

//**********************************************************
// Registry settings for StatStore SDIDs
//*********************************************************/

/* SDID_APN_INFO */
#define REG_SDID_APN_INFO_REGISTRY_ROOT                     HKEY_LOCAL_MACHINE
#define REG_SDID_APN_INFO_REGISTRY_KEY                      TEXT("System\\State\\Connectivity")
#define REG_SDID_APN_INFO_REGISTRY_VALUE                    TEXT("APN Info")
#define REG_SDID_APN_INFO_REGISTRY_TYPE                     REG_BINARY

/* SDID_MULTILINE_CAPS */
#define REG_SDID_MULTILINE_CAPS_ROOT                        HKEY_LOCAL_MACHINE
#define REG_SDID_MULTILINE_CAPS_KEY                         TEXT("System\\State\\Phone")
#define REG_SDID_MULTILINE_CAPS_VALUE                       TEXT("MultiLine Capabilities")
#define REG_SDID_MULTILINE_CAPS_TYPE                        REG_DWORD

/* SDID_PHONE_STATUS_FLAGS */
#define REG_SDID_PHONE_STATUS_FLAGS_ROOT                    HKEY_LOCAL_MACHINE
#define REG_SDID_PHONE_STATUS_FLAGS_KEY                     TEXT("System\\State\\Phone")
#define REG_SDID_PHONE_STATUS_FLAGS_VALUE                   TEXT("Status")
#define REG_SDID_PHONE_STATUS_FLAGS_TYPE                    REG_DWORD

/* SDID_SIMTKIT_IDLE */
#define REG_SDID_SIMTKIT_IDLE_ROOT                          HKEY_LOCAL_MACHINE
#define REG_SDID_SIMTKIT_IDLE_KEY                           TEXT("System\\State\\Phone")
#define REG_SDID_SIMTKIT_IDLE_VALUE                         TEXT("Simtkit Idle")
#define REG_SDID_SIMTKIT_IDLE_TYPE                          REG_SZ

#endif
