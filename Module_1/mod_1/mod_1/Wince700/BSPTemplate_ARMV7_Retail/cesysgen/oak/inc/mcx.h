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
/*++
THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
PARTICULAR PURPOSE.

Module Name:  

mcx.h

Abstract:  

This module defines the 32-Bit Windows MCX APIs

Notes: 


--*/

#ifndef _MCX_H_
#define _MCX_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _MODEMDEVCAPS {
    DWORD   dwActualSize;
    DWORD   dwRequiredSize;
    DWORD   dwDevSpecificOffset;
    DWORD   dwDevSpecificSize;

    // product and version identification
    DWORD   dwModemProviderVersion;
    DWORD   dwModemManufacturerOffset;
    DWORD   dwModemManufacturerSize;
    DWORD   dwModemModelOffset;
    DWORD   dwModemModelSize;
    DWORD   dwModemVersionOffset;
    DWORD   dwModemVersionSize;

    // local option capabilities
    DWORD   dwDialOptions;          // bitmap of supported values
    DWORD   dwCallSetupFailTimer;   // maximum in seconds
    DWORD   dwInactivityTimeout;    // maximum in seconds
    DWORD   dwSpeakerVolume;        // bitmap of supported values
    DWORD   dwSpeakerMode;          // bitmap of supported values
    DWORD   dwModemOptions;         // bitmap of supported values
    DWORD   dwMaxDTERate;           // maximum value in bit/s
    DWORD   dwMaxDCERate;           // maximum value in bit/s

    // Variable portion for proprietary expansion
    BYTE    abVariablePortion [1];
} MODEMDEVCAPS, *PMODEMDEVCAPS, *LPMODEMDEVCAPS;

typedef struct _MODEMSETTINGS {
    DWORD   dwActualSize;
    DWORD   dwRequiredSize;
    DWORD   dwDevSpecificOffset;
    DWORD   dwDevSpecificSize;

    // static local options (read/write)
    DWORD   dwCallSetupFailTimer;       // seconds
    DWORD   dwInactivityTimeout;        // seconds
    DWORD   dwSpeakerVolume;            // level
    DWORD   dwSpeakerMode;              // mode
    DWORD   dwPreferredModemOptions;    // bitmap
    
    // negotiated options (read only) for current or last call
    DWORD   dwNegotiatedModemOptions;   // bitmap
    DWORD   dwNegotiatedDCERate;        // bit/s

    // Variable portion for proprietary expansion
    BYTE    abVariablePortion [1];
} MODEMSETTINGS, *PMODEMSETTINGS, *LPMODEMSETTINGS;

// Dial Options
#define DIALOPTION_BILLING  0x00000040  // Supports wait for bong "$"
#define DIALOPTION_QUIET    0x00000080  // Supports wait for quiet "@"
#define DIALOPTION_DIALTONE 0x00000100  // Supports wait for dial tone "W"

// SpeakerVolume for MODEMDEVCAPS
#define MDMVOLFLAG_LOW      0x00000001
#define MDMVOLFLAG_MEDIUM   0x00000002 
#define MDMVOLFLAG_HIGH     0x00000004 

// SpeakerVolume for MODEMSETTINGS
#define MDMVOL_LOW          0x00000000
#define MDMVOL_MEDIUM       0x00000001 
#define MDMVOL_HIGH         0x00000002

// SpeakerMode for MODEMDEVCAPS
#define MDMSPKRFLAG_OFF         0x00000001 
#define MDMSPKRFLAG_DIAL        0x00000002 
#define MDMSPKRFLAG_ON          0x00000004 
#define MDMSPKRFLAG_CALLSETUP   0x00000008

// SpeakerMode for MODEMSETTINGS
#define MDMSPKR_OFF         0x00000000 
#define MDMSPKR_DIAL        0x00000001 
#define MDMSPKR_ON          0x00000002 
#define MDMSPKR_CALLSETUP   0x00000003 
 
// Modem Options
#define MDM_COMPRESSION      0x00000001
#define MDM_ERROR_CONTROL    0x00000002
#define MDM_FORCED_EC        0x00000004
#define MDM_CELLULAR         0x00000008
#define MDM_FLOWCONTROL_HARD 0x00000010
#define MDM_FLOWCONTROL_SOFT 0x00000020
#define MDM_CCITT_OVERRIDE   0x00000040
#define MDM_SPEED_ADJUST     0x00000080
#define MDM_TONE_DIAL        0x00000100
#define MDM_BLIND_DIAL       0x00000200
#define MDM_V23_OVERRIDE     0x00000400

#ifdef __cplusplus
}
#endif

#endif /* _MCX_H_ */
