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



File Name:    nled.h

Abstract:   Notification LED interface.

Notes:

The notification LED is distinguished from other LED's which may be on the system
in that it can be on or blinking even if the rest of the system is powered down.  This
implies a certain level of hardware support for this functionality.

--*/
#ifndef __NLED_H__
#define __NLED_H__

#ifdef __cplusplus
extern "C" {
#endif

//=============================================================================
typedef BOOL (WINAPI *PFN_NLED_SET_DEVICE)( UINT nDeviceId, PVOID pInput );
typedef BOOL (WINAPI *PFN_NLED_GET_DEVICE_INFO)( UINT nInfoId, PVOID pOutput );
BOOL WINAPI NLedGetDeviceInfo( UINT nInfoId, PVOID pOutput );
BOOL WINAPI NLedSetDevice( UINT nDeviceId, PVOID pInput );
//=============================================================================

// This type of function implments the optional PDD ioctl interface.  It
// returns a Win32 error code, NOT a BOOL.
typedef DWORD (*PFN_NLED_PDD_IOCONTROL)(
              DWORD  dwContext,
              DWORD  Ioctl,
              PUCHAR pInBuf,
              DWORD  InBufLen, 
              PUCHAR pOutBuf,
              DWORD  OutBufLen,
              PDWORD pdwBytesTransferred);

extern CRITICAL_SECTION gcsNLed;
extern PFN_NLED_PDD_IOCONTROL gpfnNLedPddIOControl;
extern BOOL gfDriverLoaded;
extern LPCWSTR gpszInitContext;        // this value is only valid during NLedDriverInitialize()

//=============================================================================
//nleddrvr registry-related settings
//=============================================================================
#define REG_CONFIG_KEY_PATH TEXT("Config")
#define REG_POWER_MANAGED_VALUE TEXT("MddPowerManaged")
#define REG_LED_NUM_VALUE TEXT("LedNum")
#define REG_LED_GROUP_VALUE TEXT("LedGroup")
#define REG_LED_TYPE_VALUE TEXT("LedType")
#define REG_SWBLINKCTRL_VALUE TEXT("SWBlinkCtrl")
#define REG_CYCLEADJUST_VALUE TEXT("CycleAdjust")
#define REG_BLINKABLE_VALUE TEXT("Blinkable")
#define REG_ADJUSTTYPE_VALUE TEXT("AdjustType")
#define REG_METACYCLE_VALUE TEXT("MetaCycle")
#define REG_D4STATE_VALUE TEXT("D4State")
//Maximum string length for the key of Led Name
static const DWORD gc_dwMaxKeyNameLength = 255;
static const DWORD gc_dwInvalidGroupNum = 0;
//=============================================================================
enum 
{
    NLED_OFF = 0,
    NLED_ON = 1,
    NLED_BLINK = 2
};
//=============================================================================
///NLedDriverGetDeviceInfo query definitions
//=============================================================================
/// Id for <f NLedDriverGetDeviceInfo> to get count of notification LED's
#define NLED_COUNT_INFO_ID    0
/// struct that contains the LED count
/// A device will usually have at least one notification LED.
/// Some devices may have none however.
typedef struct NLED_COUNT_INFO
{
    UINT cLeds;                // Count of LED's
} NLED_COUNT_INFO, *PNLED_COUNT_INFO;
//-----------------------------------------------------------------------------
/// Id for <f NLedDriverGetDeviceInfo> to get supported capabilities of a 
/// notification LED.  
#define NLED_SUPPORTS_INFO_ID    1
/// Info about what a notification LED supports.
/// Caller should first get the number of notification LED's on the system.  
/// This is usually one but may be 0 and could be greater than 1.  Caller 
/// should fill in the LedNum and then call <f NLedDriverGetDeviceInfo>.  Led 
/// numbering starts at 0.
/// The lCycleAdjust field is the granularity to which cycle time adjustments 
/// can be made.  E.g., if the granularity is 1/16 second, lCycleAdjust = 
/// 62500 microseconds.  If the LED does not support blinking, this value 
/// should be 0.
/// Values are given in microseconds only to deal with computations involving 
/// fractional milliseconds.  Usually only settings in the milliseconds range 
/// are meaningful.  
/// A device MUST report one of the following:
///     1. The cycle time is not adjustable:
///         fAdjustTotalCycleTime == FALSE
///         fAdjustOnTime == FALSE
///         fAdjustOffTime == FALSE
///     2. Only the overall cycle time is adjustable:
///         fAdjustTotalCycleTime == TRUE
///         fAdjustOnTime == FALSE
///         fAdjustOffTime == FALSE
///     3. The on and off times are independently adjustable.
///         fAdjustTotalCycleTime == FALSE
///         fAdjustOnTime == TRUE
///         fAdjustOffTime == TRUE
typedef struct NLED_SUPPORTS_INFO
{
    UINT LedNum;                        // LED number, 0 is first LED
    // The following settings are related to blinking
    LONG lCycleAdjust;                // Granularity of cycle time adjustments (microseconds)
    BOOL fAdjustTotalCycleTime;        // LED has an adjustable total cycle time
    BOOL fAdjustOnTime;                // LED has separate on time
    BOOL fAdjustOffTime;                // LED has separate off time
    BOOL fMetaCycleOn;                // LED can do blink n, pause, blink n, ...
    BOOL fMetaCycleOff;                // LED can do blink n, pause n, blink n, ...
} NLED_SUPPORTS_INFO, *PNLED_SUPPORTS_INFO;
//-----------------------------------------------------------------------------
/// Id for <f NLedDriverGetDeviceInfo> to get current settings of a NLED.  
#define NLED_SETTINGS_INFO_ID    2
/// Info about the current settings of a notification LED.
/// Caller should first get the number of notification LED's on the system.  
/// This is usually one but may be 0 and could be greater than 1.  Caller 
/// should fill in the LedNum and then call <f NLedDriverGetDeviceInfo>.  Led 
/// numbering starts at 0.
typedef struct NLED_SETTINGS_INFO
{
    UINT LedNum;                 //   LED number, 0 is first LED
    INT OffOnBlink;             //   0 == off, 1 == on, 2 == blink
    // The following settings are related to blinking. Depending on what the device
    // supports, only OnTime and Offtime OR TotalCycleTime has to be filled
    LONG TotalCycleTime;         //   total cycle time of a blink in microseconds
    LONG OnTime;                 //   on time of a cycle in microseconds
    LONG OffTime;                //   off time of a cycle in microseconds
    INT MetaCycleOn;            //   number of on blink cycles
    INT MetaCycleOff;           //   number of off blink cycles
} NLED_SETTINGS_INFO, *PNLED_SETTINGS_INFO;
//-----------------------------------------------------------------------------
/// Id for <f NLedDriverGetDeviceInfo> to get the type of a NLED.  
#define NLED_TYPE_INFO_ID   4
typedef enum
{
    NLED_UNKNOWN = 0,
    NLED_LED = 1,
    NLED_VIBRATOR = 2,
} NLED_LEDTYPE;

typedef struct NLED_TYPE_INFO
{
    UINT LedNum;                   //   LED number, 0 is first LED
    NLED_LEDTYPE LedType;          // LED Type
} NLED_TYPE_INFO, *PNLED_TYPE_INFO;

//=============================================================================
// NLED driver IOCTL codes
//=============================================================================
#define IOCTL_NLED_GETDEVICEINFO            \
    CTL_CODE(FILE_DEVICE_NLED, 0x100, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_NLED_SETDEVICE                \
    CTL_CODE(FILE_DEVICE_NLED, 0x101, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_NLED_POSTINIT                \
    CTL_CODE(FILE_DEVICE_NLED, 0x102, METHOD_BUFFERED, FILE_ANY_ACCESS)

//=============================================================================
// NLED driver interface GUID (used with AdvertiseInterface())
//=============================================================================
#define NLED_DRIVER_CLASS        _T("{CBB4F234-F35F-485b-A490-ADC7804A4EF3}")
// API event name for the NLED interface.  If calling OpenEvent() on this name returns a valid
// handle, the NLED APIs exist on the platform.  The handle will be signaled when the APIs become
// ready.
#define NLED_API_EVENT_NAME     _T("SYSTEM/NLedAPIsReady")

#ifdef __cplusplus
}
#endif

#endif
