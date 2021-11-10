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


Module Name:

    cedrv_guid.h

Abstract:

    GUID Definitions for Windows CE driver.

Revision History:

--*/

#pragma once

#define CE_DRIVER_POWER_MANAGEABLE_GENERIC_GUID     TEXT("{A32942B7-920C-486b-B0E6-92A702A99B35}")

#define CE_DRIVER_POWER_MANAGEABLE_NDIS_GUID        TEXT("{98C5250D-C29A-4985-AE5F-AFE5367E5006}")

#define CE_DRIVER_BLOCK_GUID                        TEXT("{A4E7EDDA-E575-4252-9D6B-4195D48BB865}")
#define CE_DRIVER_POWER_MANAGEABLE_BLOCK_GUID       TEXT("{8DD679CE-8AB4-43c8-A14A-EA4963FAA715}")

#define CE_DRIVER_POWER_MANAGEABLE_DISPLAY_GUID     TEXT("{EB91C7C9-8BF6-4a2d-9AB8-69724EED97D1}")

#define CE_DRIVER_BACKLIGHT_GUID                    TEXT("{F922DDE3-6A6D-4775-B23C-6842DB4BF094}")
#define CE_DRIVER_POWER_MANAGEABLE_BACKLIGHT_GUID   TEXT("{0007AE3D-413C-4E7E-8786-E2A696E73A6E}")

#define CE_DRIVER_BUS_GUID                          TEXT("{6F40791D-300E-44E4-BC38-E0E63CA8375C}")
#define CE_DRIVER_BUILTIN_BUS_GUID                  TEXT("{B3CC6EBA-5507-4196-8E41-2BF42E4A47C9}")
#define CE_DRIVER_SD_BUS_GUID                       TEXT("{20FA98A8-B298-4b32-8D72-C716AEE2FA84}")
#define CE_DRIVER_USBFN_BUS_GUID                    TEXT("{E2BDC372-598F-4619-BC50-54B3F7848D35}")
#define CE_SERVICE_BUS_GUID                         TEXT("{6D4317A0-B5A2-462c-9C59-1E70D2600522}")

#define CE_DRIVER_USB_HOST_CONTROLLER_GUID          TEXT("{7D96B50A-6BB5-4f64-ACD2-A0C3A45375FA}")

#define CE_DRIVER_GPS_GUID                          TEXT("{5D425811-8668-47bb-9037-BFBAB6DF40B4}")

#define CE_DRIVER_PARALLEL_PORT_GUID                TEXT("{4FE1CEF1-E765-4a1e-B503-5B8C674D7C68}")

#define CE_DRIVER_SERIAL_PORT_GUID                  TEXT("{CC5195AC-BA49-48a0-BE17-DF6D1B0173DD}")
#define CE_DRIVER_SERIAL_MODEM_GUID                 TEXT("{C375C787-B721-4b8e-B67F-A112D5C0A404}")

#define CE_DRIVER_KEYBOARD_GUID                     TEXT("{CBE6DDF2-F5D4-4e16-9F61-4CCC0B6695F3}")
#define CE_DRIVER_HID_MOUSE_GUID                    TEXT("{CF3F6FC3-BBBC-4e49-B74D-540BBF5DC743}")

#define CE_DRIVER_BLUTOOTH_GUID                     TEXT("{54DA86F7-9B78-46d1-8022-51BFA88D7F03}")

#define CE_DRIVER_CAMERA_GUID                       TEXT("{CB998A05-122C-4166-846A-933E4D7E3C86}")

#define CE_DRIVER_WAVEDEV_GUID                      TEXT("{E92BC203-8354-4043-A06F-2A170BF6F227}")
#define CE_DRIVER_WAVEDEV_UNIFIED_GUID              CE_DRIVER_WAVEDEV_GUID
#define CE_DRIVER_MIXERDEV_GUID                     TEXT("{37168569-61C4-45fd-BD54-9442C7DBA46F}")
