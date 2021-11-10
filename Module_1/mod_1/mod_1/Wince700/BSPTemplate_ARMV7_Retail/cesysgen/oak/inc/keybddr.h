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

keybddr.h

Abstract:

Interface to the Windows CE keyboard driver.

Notes:


--*/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <windows.h>
#include <types.h>
#include <keybd.h>
#include <pm.h>


/*  KEYBOARD DRIVER INTERFACE */

/*  VirtualKey argument layout.

    33222222 22221111 11111100 00000000
    10987654 32109876 54321098 76543210
          RS II  EEEE          VVVVVVVV

    S = Silent, no key click sound
    R = Repeat Silent, no key click on an autorepeat
    E = Event Code
    I = Id of Keyboard
    V = Virtual key code
*/

//  More flags that aren't needed in key state information.
#define KEYBD_DEVICE_SILENT         0x01000000
#define KEYBD_DEVICE_SILENT_REPEAT  0x02000000

//  Keyboard identifier.
#define KEYBD_DEVICE_ID_MASK        0x00C00000
#define KEYBD_DEVICE_ID0            0x00000000
#define KEYBD_DEVICE_ID1            0x00400000
#define KEYBD_DEVICE_ID2            0x00800000
#define KEYBD_DEVICE_ID3            0x00C00000

//  Non-virtual-key events which must be signaled to the user input system.
//  This field is 0 for both virtual key press and virtual key release events.
#define KEYBD_VKEY_EVENT_MASK       0x000f0000
#define KEYBD_DEVICE_CONNECT        0x00010000
#define KEYBD_DEVICE_DISCONNECT     0x00020000
#define KEYBD_DEVICE_CONTRAST_LESS  0x00030000
#define KEYBD_DEVICE_CONTRAST_MORE  0x00040000


typedef BOOL    (*PFN_KEYBD_EVENT_CALLBACK)(
                    UINT32          VirtualKey,
                    KEY_STATE_FLAGS KeyEvent
                    );

void    
KeybdDriverInitialize(
    PFN_KEYBD_EVENT_CALLBACK    pfnKeybdEventCallback
    );

typedef void    (*PFN_KEYBD_DRIVER_INITIALIZE)(
                    PFN_KEYBD_EVENT_CALLBACK    pfnKeybdEventCallback
                    );

typedef BOOL    (*PFN_KEYBD_EVENT_CALLBACK_EX)(
                    UINT32          VirtualKey,
                    UINT32          ScanCode,
                    KEY_STATE_FLAGS KeyEvent
                    );

typedef BOOL    (*PFN_KEYBD_EVENT_CALLBACK_EX2)(
                    UINT32          VirtualKey,
                    UINT32          ScanCode,
                    KEY_STATE_FLAGS KeyEvent,
                    const GUID              *guidKeyboard
                    );

void    
KeybdDriverInitializeEx(
    __in_opt PFN_KEYBD_EVENT_CALLBACK_EX pfnKeybdEventCallbackEx
    );

typedef void    (*PFN_KEYBD_DRIVER_INITIALIZE_EX)(
                    PFN_KEYBD_EVENT_CALLBACK_EX pfnKeybdEventCallbackEx
                    );

void    
KeybdDriverInitializeEx2(
    __in PFN_KEYBD_EVENT_CALLBACK_EX2    pfnKeybdEventCallbackEx2
    );

typedef void    (*PFN_KEYBD_DRIVER_INITIALIZE_EX2)(
                    PFN_KEYBD_EVENT_CALLBACK_EX2    pfnKeybdEventCallbackEx2
                    );

void
KeybdDriverDeinitializeEx(
    );

void
KeybdDriverPowerHandler(
    BOOL    bOff
    );

typedef void    (*PFN_KEYBD_DRIVER_POWER_HANDLER)(
                    BOOL    bOff
                    );

BOOL 
KeybdDriverGetInfo(
    int         iPddId,
    int         iIndex,
    __out void* lpOutput
    );

typedef BOOL    (*PFN_KEYBD_DRIVER_GET_INFO)(
                    INT     iKeybdId,
                    INT     iIndex,
                    LPVOID  lpOutput
                    );

BOOL 
KeybdDriverSetMode(
    int         iPddId,
    int         iIndex,
    __in void*  lpInput
    );

typedef  BOOL   (*PFN_KEYBD_DRIVER_SET_MODE)(
                    INT     iKeybdId,
                    INT     iIndex,
                    LPVOID  lpInput
                    );

BOOL
KeybdDriverInitStates(
    INT             iKeybdId,
    KEY_STATE       KeyState,
    void            *pKeybdDriverState
    );

typedef BOOL  (*PFN_KEYBD_DRIVER_INIT_STATES)(
                    INT             iKeybdId,
                    KEY_STATE       KeyState,
                    void            *pKeybdDriverState
                    );

UINT32
KeybdDriverVKeyToUnicode(
    UINT32                                         VirtualKey,
    KEY_STATE_FLAGS                                KeyEvent,
    __in_ecount_opt(256) KEY_STATE                 KeyState,
    __in_opt void                                 *pKeybdDriverToUnicodeState,
    UINT32                                         cBufferSize,
    __out_opt UINT32                              *pcCharacters,
    __out_ecount_opt(cBufferSize) KEY_STATE_FLAGS *pShiftStateBuffer,
    __out_ecount_opt(cBufferSize) UINT32          *pCharacterBuffer);

typedef UINT32  (*PFN_KEYBD_DRIVER_VKEY_TO_UNICODE)(
                    UINT32          VKey,
                    KEY_STATE_FLAGS KeyEventFlags,
                    KEY_STATE       KeyState,
                    void            *KeybdDriverState,
                    UINT32          cBufferSize,
                    UINT32          *pcCharacters,
                    KEY_STATE_FLAGS *pShiftStateBuffer,
                    UINT32          *pCharacterBuffer
                    );


UINT32
KeybdDriverMapVirtualKey(
    UINT32  uCode,
    UINT32  uMapType
    );

typedef UINT32 (*PFN_KEYBD_DRIVER_MAP_VIRTUAL_KEY)(
                    UINT32  uCode,
                    UINT32  uMapType
                    );

BOOL
KeybdDriverIOControl(
    DWORD  dwCode, 
    PVOID  pvBufIn,
    DWORD  dwLenIn, 
    PDWORD pdwBufOut, 
    DWORD  dwLenOut,
    PDWORD pdwActualOut
    );


UCHAR
KeybdDriverGetPowerCaps();


void
KeybdDriverSetPowerState(CEDEVICE_POWER_STATE State);


#define KEYBOARD_DRIVER_KEY            __TEXT("HARDWARE\\DEVICEMAP\\KEYBOARD")


int
LayoutMgrGetKeyboardType(
    int nTypeFlag
    );

typedef int (*PFN_LAYOUT_MGR_GET_KEYBOARD_TYPE)(
                    int nTypeFlag
                    );


BOOL
LayoutMgrGetKeyboardLayoutName(
    __out_ecount(KL_NAMELENGTH) WCHAR *pNameBuf
    );


typedef BOOL (*PFN_LAYOUT_MGR_GET_KEYBOARD_LAYOUT_NAME)(
                    WCHAR   *pNameBuf
                    );

HKL
LayoutMgrGetKeyboardLayout(
    DWORD idThread
    );

typedef HKL (*PFN_LAYOUT_MGR_GET_KEYBOARD_LAYOUT)(
                    DWORD idThread
                    );

UINT
LayoutMgrGetKeyboardLayoutList(
    int     nBuf,
    __out_ecount(nBuf) HKL FAR *lpList
    );

typedef UINT (*PFN_LAYOUT_MGR_GET_KEYBOARD_LAYOUT_LIST)(
                                int     nBuf,
                                HKL FAR *lpList
                                );

HKL
LayoutMgrLoadKeyboardLayout(
    __in_z LPCWSTR pwszKLID,
    UINT    Flags
    );

typedef HKL (*PFN_LAYOUT_MGR_LOAD_KEYBOARD_LAYOUT)(
                                    LPCWSTR pwszKLID,
                                    UINT    Flags
                                    );

HKL
LayoutMgrActivateKeyboardLayout(
    HKL  hkl,
    UINT Flags
    );

typedef HKL (*PFN_LAYOUT_MGR_ACTIVATE_KEYBOARD_LAYOUT)(
                                    HKL  hkl,
                                    UINT Flags
                                    );

#ifdef __cplusplus
}
#endif
