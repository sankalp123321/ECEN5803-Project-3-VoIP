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

#ifndef DEVNOTIFY_H
#define DEVNOTIFY_H

//
// The followoing IOCTLs for headset, speakerphone,and car kit notifications
// are deprecated.  To notify the Shell of headset and car kit states, set
// these values in the registry.
//
//  [HKEY_LOCAL_MACHINE\System\State\Hardware]
//      "Headset"=dword:0
//      "Car Kit"=dword:0
//
// Note: Speakerphone state is now maintained internally.  Do not set the
// registry value for speakerphone.
//
#define FILE_DEVICE_HEADSET                 32768
#define IOCTL_HEADSET_ADD_NOTIFY_HWND       CTL_CODE( FILE_DEVICE_HEADSET, 2048, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_HEADSET_REMOVE_NOTIFY_HWND    CTL_CODE( FILE_DEVICE_HEADSET, 2049, METHOD_BUFFERED, FILE_ANY_ACCESS )

#define FILE_DEVICE_CARKIT                  32769
#define IOCTL_CARKIT_ADD_NOTIFY_HWND        CTL_CODE( FILE_DEVICE_CARKIT, 2050, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_CARKIT_REMOVE_NOTIFY_HWND     CTL_CODE( FILE_DEVICE_CARKIT, 2051, METHOD_BUFFERED, FILE_ANY_ACCESS )

#define FILE_DEVICE_SPEAKER                 32770
#define IOCTL_SPEAKER_ADD_NOTIFY_HWND       CTL_CODE( FILE_DEVICE_SPEAKER, 2052, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_SPEAKER_REMOVE_NOTIFY_HWND    CTL_CODE( FILE_DEVICE_SPEAKER, 2053, METHOD_BUFFERED, FILE_ANY_ACCESS )

// Deprecated.
#define IOCTL_SPEAKER_GETMODE               CTL_CODE( FILE_DEVICE_SPEAKER, 2054, METHOD_BUFFERED, FILE_ANY_ACCESS )
#define IOCTL_SPEAKER_SETMODE               CTL_CODE( FILE_DEVICE_SPEAKER, 2055, METHOD_BUFFERED, FILE_ANY_ACCESS )

// Used with SHGetSpeakerMode/SHSetSpeakerMode.
typedef enum
{
    SPK_NORMAL,
    SPK_SPEAKER,
    
    SPK_LAST // for bounds checking
} SPEAKERMODE;

// Deprecated.
typedef struct tag_DEVNOTIFY_EVENT
{
    HWND hWndNotify;
    UINT Msg;
}DEVNOTIFY_EVENT, *PDEVNOTIFY_EVENT;

#endif //DEVNOTIFY_H
