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
#ifndef _SHSDKSTC_H_
#define _SHSDKSTC_H_

#include <changeinfo.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct tagFILECHANGENOTIFY {
    DWORD dwRefCount;
    FILECHANGEINFO fci;
} FILECHANGENOTIFY;

typedef struct tagSHCHANGENOTIFYENTRY {
    DWORD   dwEventMask;    // Events to watch
    LPTSTR  pszWatchDir;    // Directory or root for the events we want. NULL means all.
    BOOL    fRecursive;     // Indicates whether look just for pszWatchDir or recursively.
} SHCHANGENOTIFYENTRY;

#include <wtypes.h>

// notification priority
typedef enum _SHNP
{
    SHNP_INFORM = 0x1B1,      // bubble shown for duration, then goes away
    SHNP_ICONIC,              // no bubble, icon shown for duration then goes away
} SHNP;

// notification data

typedef struct _SHNOTIFICATIONDATA
{
    DWORD        cbStruct;     // for verification and versioning
    DWORD        dwID;         // identifier for this particular notification
    SHNP         npPriority;   // priority
    DWORD        csDuration;   // duration of the notification (usage depends on prio)
    HICON        hicon;        // the icon for the notification
    DWORD        grfFlags;     // flags
    CLSID        clsid;        // unique identifier for the notification class
    HWND         hwndSink;     // window to receive command choices, dismiss, etc.
    LPCTSTR      pszHTML;      // HTML content for the bubble
    LPCTSTR      pszTitle;     // Optional title for bubble
    LPARAM       lParam;       // User-defined parameter
} SHNOTIFICATIONDATA, *PSHNOTIFICATIONDATA;


#ifdef __cplusplus
}
#endif

#endif // _SHSDKSTC_H_
