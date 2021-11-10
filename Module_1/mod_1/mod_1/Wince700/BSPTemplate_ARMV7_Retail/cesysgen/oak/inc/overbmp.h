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

Replacing bitmaps and icons:


Registry settings (common to PPC and SP):

[HKEY_LOCAL_MACHINE\Security\ResOver\Bitmaps]
"BaseDll"="tv.dll"
"BaseId"=dword:4a37

+    "Basedll" defines the location of the dll with the icon and/or bitmap resources
+    The dll should include as many custom icons and/or bitmaps as needed to replace the defaults that are intended  to be replaced.
+    The dll should respect the identifiers at the enum for each case.
+    "BaseId: defines a hex value which is added to the resource number to help ensure there aren't any conflicts with other resources in the same dll.
+    This registry setting is optional (an example hex value '4a37' is shown)
*/

// Resource IDs we currently allow for overriding bitmaps.
/*
SHELL32
Location services icons:  Note that these icons require the following RIL notification:

    RIL_NOTIFY_LOCATION requires a single DWORD parameter
    +    0 - Location Off
    +    1 - Location On
    +    all other values reserved

OEMs are able to replace the default location icon with a custom icon for a specific Operator.
*/
#define IDB_OVERRIDE_LOCATION_SVCS_ON                  0x0001 // "Location Services on"                - SP icon
#define IDB_OVERRIDE_LOCATION_SVCS_OFF                 0x0002 // "Location Services off"               - SP icon

   
// SHELLRESWPC bitmaps in bubble

#define IDB_OVERRIDE_ALARM_PENDING                      0x00b2 // Alarm Pending                        - PPC/SP bitmap

// Auxiliary Display Bitmaps
#define IDB_OVERRIDE_INCOMINGCALL                       0x00b9
#define IDB_OVERRIDE_STATUSICONS                        0x00ba
#define IDB_OVERRIDE_TICK                               0x00bb
#define IDB_OVERRIDE_OPENANIM                           0x00bc
#define IDB_OVERRIDE_CALLENDED                          0x00bd
#define IDB_OVERRIDE_VOLUME                             0x00be
#define IDB_OVERRIDE_LOCK                               0x00bf
#define IDB_OVERRIDE_CLOCK_SPECIAL_ONE                  0x00c0
#define IDB_OVERRIDE_ERROR                              0x00c1
#define IDB_OVERRIDE_APPOINTMENT                        0x00c2
#define IDB_OVERRIDE_CLOCK_DIGITS                       0x00c3
#define IDB_OVERRIDE_CLOCK_COLON                        0x00c4
#define IDB_OVERRIDE_VOICEMAIL                          0x00c5
#define IDB_OVERRIDE_MESSAGE                            0x00c6
#define IDB_OVERRIDE_MISSEDCALL                         0x00c7

// 0x0113 - 0x0116 are used by Callhistory Roaming icons.

#define ID_RESOVER_OVERRIDE_MAX                         0x0117

