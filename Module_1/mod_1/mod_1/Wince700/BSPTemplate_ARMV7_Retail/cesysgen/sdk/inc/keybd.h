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

// Non Win32 defines and structs for WinCE keyboard.

#pragma once
#define __KEYBD_H__ // needed to not break WinMo, as they have a duplicate header

#ifdef __cplusplus
extern "C" {
#endif

///<file_doc_scope tref="Keyboard" visibility="SDK"/>


/// <summary>
/// Flags for keyboard events and shift state.
/// </summary>
/// <remarks>
/// These flags perform a number of functions:
///
/// The low order bits are used to keep track of a key state.  This
/// allows using 256 UINT8's for the key state array just like Windows does
/// already.
///
/// The upper bits keep track of shift state on a per key basis.  Since
/// we are not maintaining a complete key state array for each task, this
/// gives us some extra info without a big memory penalty.
///
/// The KeyStateDownFlag does double duty internal to the driver to
/// identify key up or key down events.
///
/// KeyShiftDeadFlag is set by the <see cref="KeybdDriverVKeyToUnicode" /> function
/// to signify that the character generated is a dead character.
///
/// KeyShiftNoCharacterFlag is set by the <see cref="KeybdDriverVKeyToUnicode" />
/// function to signify that there is no valid character to generate for the
/// given virtual key event.  This may be the case on a key up event or a key
/// which only changes the shift state.
///
/// The control, alt, shift and capital flags are set by the 
/// <see cref="KeybdDriverVKeyToUnicode" /> function to encapsulate the shift state when the
/// character was generated.
/// </remarks>
/// <seealso cref="KeybdDriverVKeyToUnicode"/>
/// <seealso cref="KeybdEventCallback"/>
typedef UINT32  KEY_STATE_FLAGS;

#define KeyStateToggledFlag         0x0001  //  Key is toggled.
#define KeyStateGetAsyncDownFlag    0x0002  //  Key went down since last GetAsyncKey call.
#define KeyStateReserved4           0x0004
#define KeyStateReserved8           0x0008
#define KeyStateReserved10          0x0010
#define KeyStateReserved20          0x0020
#define KeyStatePrevDownFlag        0x0040  //  Key was previously down.
#define KeyStateDownFlag            0x0080  //  Key is currently down.

#define KeyStateKeyEventFlag        0x80000000  //  Internal
#define KeyShiftAnyCtrlFlag         0x40000000  //  L or R control is down.
#define KeyShiftAnyShiftFlag        0x20000000  //  L or R shift is down.
#define KeyShiftAnyAltFlag          0x10000000  //  L or R alt is down.
#define KeyShiftCapitalFlag         0x08000000  //  VK_CAPITAL is toggled.
#define KeyShiftLeftCtrlFlag        0x04000000  //  L control is down.
#define KeyShiftLeftShiftFlag       0x02000000  //  L shift is down.
#define KeyShiftLeftAltFlag         0x01000000  //  L alt is down.
#define KeyShiftLeftWinFlag         0x00800000  //  L Win key is down.
#define KeyShiftRightCtrlFlag       0x00400000  //  R control is down.
#define KeyShiftRightShiftFlag      0x00200000  //  R shift is down.
#define KeyShiftRightAltFlag        0x00100000  //  R alt is down.
#define KeyShiftRightWinFlag        0x00080000  //  R Win key is down.
#define KeyShiftReserved40000       0x00040000  //  Reserved.
#define KeyShiftDeadFlag            0x00020000  //  Corresponding char is dead char.
#define KeyShiftNoCharacterFlag     0x00010000  //  No corresponding char.

#define KeyShiftLanguageFlag1       0x00008000  //  Use for language specific shifts.
#define KeyShiftKeybdEventFlag      0x00004000  //  Not for external use.

#define KeyShiftUseVKNullFlag       0x00002000  //  Not for external use.
#define KeyShiftNumLockFlag         0x00001000  //  NumLock toggled state.
#define KeyShiftScrollLockFlag      0x00000800  //  ScrollLock toggled state.
#define KeyShiftReserved400         0x00000400  //  Reserved.
#define KeyShiftReserved200         0x00000200  //  Reserved.
#define KeyShiftReserved100         0x00000100  //  Reserved.

// Japanese keyboard
#define KeyShiftKanaFlag            KeyShiftLanguageFlag1  //  Kana lock is toggled.


#define KeyStateIsDown(Flags)           (Flags&KeyStateDownFlag)
#define KeyStateIsPrevDown(Flags)       (Flags&KeyStatePrevDownFlag)
#define KeyStateIsToggled(Flags)        (Flags&KeyStateToggledFlag)
#define KeyStateIsDownTransition(Flags) ( KeyStateIsDown(Flags) && !KeyStateIsPrevDown(Flags) )


#define COUNT_VKEYS     256


/// <summary>
/// Array of virtual key states.
/// </summary>
typedef UINT8   KEY_STATE[COUNT_VKEYS];




//
// KeyboardDriverGetDeviceInfo query capability definitions
//


/// <summary>
/// Id for KeybdDriverGetInfo to get Unicode conversion info.
/// </summary>
/// <seealso cref="KeybdDriverGetInfo" />
/// <seealso cref="KBDI_VKEY_TO_UNICODE_INFO" />
/// <seealso cref="KeybdDriverVKeyToUnicode" />
#define KBDI_VKEY_TO_UNICODE_INFO_ID    0


/// <summary>
/// Info required to set up for Unicode conversion.
/// </summary>
/// <remarks>
/// cbToUnicodeState is the number of bytes necessary to store the
/// driver specific state which is required to generate characters from a
/// virtual key.  For example, a French keyboard driver may need to remember
/// that an accent key was previously pressed in order to decide on a specific
/// Unicode character to generate for a virtual key.  This value may be 0 if
/// no other state besides <see cref="KEY_STATE" /> is required to generate characters,
/// e.g., English keyboard drivers.
///
/// cMaxToUnicodeCharacters is the maximum number of characters that may
/// be generated by a call to KeybdDriverVKeyToUnicode.  For example, if a
/// user presses the '^' key and then the 'b' key, a French keyboard driver
/// would generate the two characters, '^' 'b', when the second key is
/// pressed.  Note that this is not the count of bytes required to store the
/// characters, it is just the number of characters.
/// </remarks>
/// <seealso cref="KeybdDriverGetInfo" />
/// <seealso cref="KBDI_VKEY_TO_UNICODE_INFO_ID" />
/// <seealso cref="KeybdDriverVKeyToUnicode" />
/// <seealso cref="TO_UNICODE_STATE" />
struct KBDI_VKEY_TO_UNICODE_INFO
{
    UINT32  cbToUnicodeState;               // Count of bytes required
                                            // for state info for Unicode
                                            // character generation.
    UINT32  cMaxToUnicodeCharacters;        // Maximum number of characters
                                            // generated for a single virtual key.
};




/// <summary>
/// Id for KeybdDriverGetInfo to get keyboard auto-repeat info.
/// </summary>
/// <seealso cref="KeybdDriverGetInfo" />
/// <seealso cref="KBDI_AUTOREPEAT_INFO" />
/// <seealso cref="KBDI_AUTOREPEAT_SELECTIONS_INFO_ID" />
#define KBDI_AUTOREPEAT_INFO_ID 1



/// <summary>
/// Info about the keyboard autorepeat capabilities and settings.
/// </summary>
/// <remarks>
/// cInitialDelaysSelectable gives the number of initial delays which
/// may be set.  Query again using <see cref="KBDI_AUTOREPEAT_SELECTIONS_INFO_ID" /> to
/// get the actual values available.
///
/// cRepeatRatesSelectable is similar to cInitialDelaysSelectable except
/// that it gives the number of repeat rates available.
/// </remarks>
/// <seealso cref="KeybdDriverGetInfo" />
/// <seealso cref="KBDI_AUTOREPEAT_INFO_ID" />
/// <seealso cref="KBDI_AUTOREPEAT_SELECTIONS_INFO_ID" />
struct KBDI_AUTOREPEAT_INFO
{
    INT32   CurrentInitialDelay;        // Current initial delay in milliseconds.
    INT32   CurrentRepeatRate;          // Current repeat rate in keys per second.
    INT32   cInitialDelaysSelectable;   // Number of initial delays selectable.
    INT32   cRepeatRatesSelectable;     // Number of repeat rates supported.
};

#define KBD_AUTO_REPEAT_INITIAL_DELAY_DEFAULT    500
#define KBD_AUTO_REPEAT_INITIAL_DELAY_MIN        250
#define KBD_AUTO_REPEAT_INITIAL_DELAY_MAX       1000

#define KBD_AUTO_REPEAT_KEYS_PER_SEC_DEFAULT      20
#define KBD_AUTO_REPEAT_KEYS_PER_SEC_MIN           2
#define KBD_AUTO_REPEAT_KEYS_PER_SEC_MAX          30


/// <summary>
/// Id for <see cref="KeybdDriverGetInfo" /> to get keyboard auto-repeat selections info.
/// </summary>
/// <remarks>
/// When <see cref="KeybdDriverGetInfo" /> is called with this value, the lpOutput
/// parameter should be a pointer to an array of INT32's to hold the selection
/// info.  The initial delays will be put at the beginning of the array
/// followed by the repeat rate selections.  The number of initial delay
/// values is determined by calling <see cref="KeybdDriverGetInfo" /> using 
/// <see cref="KBDI_AUTOREPEAT_INFO_ID" /> and looking at the returned
/// cInitialDelaysSelectable field.  If this value is -1, there will be two
/// (2) values, the min and max and the initial delay may be set to any value
/// in this range.  This value may be 0 if the initial delay is not settable.
/// Similarly, if cRepeatRatesSelectable is 0, there will be no repeat rate
/// information.  If it is -1, there will be two (2) values, the min and max.
/// 
/// Initial delay values are in milliseconds.  Repeat rates are in keys per
/// second.
/// </remarks>
/// <seealso cref="KeybdDriverGetInfo" />
/// <seealso cref="KBDI_AUTOREPEAT_INFO_ID" />
/// <seealso cref="KBDI_AUTOREPEAT_INFO" />
#define KBDI_AUTOREPEAT_SELECTIONS_INFO_ID  2

// INTERNATIONAL
#define KBDI_KEYBOARD_STATUS_ID 3


#define KBDI_KEYBOARD_PRESENT   0x0001  
#define KBDI_KEYBOARD_ENABLED   0x0002
#define KBDI_KEYBOARD_ENTER_ESC 0x0004
#define KBDI_KEYBOARD_ALPHA_NUM 0x0008

// Reserve for SHIME_MODE.
// Pass in the SHIME_MODE as the input parameter.
#define KBDI_SHIME_MODE_ID 4

// Reserve for SHIME_MODE.
// Pass in the SHIME_MODE as the input parameter.
#define KBDI_SHIME_MODE_ID 4

#define KBDI_SHIME_MODE_NONE                0x0000
#define KBDI_SHIME_MODE_SPELL               0x0001
#define KBDI_SHIME_MODE_SPELL_CAPS          0x0002
#define KBDI_SHIME_MODE_SPELL_CAPS_LOCK     0x0003
#define KBDI_SHIME_MODE_AMBIGUOUS           0x0004
#define KBDI_SHIME_MODE_AMBIGUOUS_CAPS      0x0005
#define KBDI_SHIME_MODE_AMBIGUOUS_CAPS_LOCK 0x0006
#define KBDI_SHIME_MODE_NUMBERS             0x0007
#define KBDI_SHIME_MODE_CUSTOM              0x0008


// External keyboard interface
#define DEVCLASS_KEYBOARD_STRING _T("{CBE6DDF2-F5D4-4e16-9F61-4CCC0B6695F3}")
#define DEVCLASS_KEYBOARD_GUID   { 0xcbe6ddf2, 0xf5d4, 0x4e16, { 0x9f, 0x61, 0x4c, 0xcc, 0xb, 0x66, 0x95, 0xf3 } }


// Pass in the KEY_STATE_FLAGS as the input parameter.
#define IOCTL_KBD_SET_MODIFIERS \
                     CTL_CODE(FILE_DEVICE_KEYBOARD,  \
                     1,                     \
                     METHOD_BUFFERED,       \
                     FILE_ANY_ACCESS)
#define IOCTL_HID_SET_MODIFIERS IOCTL_KBD_SET_MODIFIERS

// Pass in the KBDI_AUTOREPEAT_INFO as the input parameter.
#define IOCTL_KBD_SET_AUTOREPEAT \
                     CTL_CODE(FILE_DEVICE_KEYBOARD,  \
                     2,                     \
                     METHOD_BUFFERED,       \
                     FILE_ANY_ACCESS)
#define IOCTL_HID_SET_AUTOREPEAT IOCTL_KBD_SET_AUTOREPEAT

// Pass in the Input Language's fLocaleFlags as the input parameter.
#define IOCTL_KBD_SET_LOCALE_FLAGS \
                     CTL_CODE(FILE_DEVICE_KEYBOARD,  \
                     3,                     \
                     METHOD_BUFFERED,       \
                     FILE_ANY_ACCESS)

#define IOCTL_KBD_SET_DEVICE_LAYOUT \
                     CTL_CODE(FILE_DEVICE_KEYBOARD,  \
                     4,                     \
                     METHOD_BUFFERED,       \
                     FILE_ANY_ACCESS)

#define IOCTL_KBD_SET_SHIME_MODE_ID \
                     CTL_CODE(FILE_DEVICE_KEYBOARD,  \
                     5,                     \
                     METHOD_BUFFERED,       \
                     FILE_ANY_ACCESS)

#define IOCTL_KBD_GET_SHIME_MODE_ID \
                     CTL_CODE(FILE_DEVICE_KEYBOARD,  \
                     6,                     \
                     METHOD_BUFFERED,       \
                     FILE_ANY_ACCESS)

#ifdef __cplusplus
}
#endif
