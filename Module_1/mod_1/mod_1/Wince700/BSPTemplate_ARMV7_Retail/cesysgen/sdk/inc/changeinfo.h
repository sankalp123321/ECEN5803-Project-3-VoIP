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
#ifndef _CHANGEINFO_H_
#define _CHANGEINFO_H_


#ifdef __cplusplus
extern "C" {
#endif

typedef struct _FILECHANGEINFO {
    DWORD cbSize;              //  Size of this structure
    LONG wEventId;             //  File System Notification flags
    ULONG uFlags;              //  Flags
    DWORD dwItem1;            
    DWORD dwItem2;
    DWORD dwAttributes;        //  File attributes
    FILETIME ftModified;       //  Modified time
    ULONG nFileSize;           
} FILECHANGEINFO, * LPFILECHANGEINFO;
typedef const FILECHANGEINFO * LPCFILECHANGEINFO;

#ifdef __cplusplus
}
#endif

#endif // _CHANGEINFO_H_
