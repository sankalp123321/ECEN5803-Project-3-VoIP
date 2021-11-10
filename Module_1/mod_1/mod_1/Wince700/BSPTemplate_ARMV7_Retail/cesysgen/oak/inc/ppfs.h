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

ppfs.h

Abstract:  

    These are the constants used for ppfs internally
    
Notes: 


--*/
#ifndef _PPFS_H_
#define _PPFS_H_

#ifdef __cplusplus
extern "C" {
#endif

#define BOOT_TYPE_SH3       -1
#define BOOT_TYPE_R4200     -2
#define BOOT_TYPE_R4100     -3
#define BOOT_TYPE_X86       -4
#define BOOT_TYPE_R3000     -5
#define BOOT_TYPE_UNKNOWN   -10000

//
// Registry keys
//
#define REG_KEY_BASE                "SYSTEM\\CurrentControlSet\\Services"
#define REG_KEY_PPFS                "ppfs"
#define REG_KEY_PARMS               "Parameters"

// generic input struct for RELFSD registry operation
typedef struct {
    DWORD  hKey;
    CHAR  szName[MAX_PATH]; 
} CEFSINPUTSTRUCT, *PCEFSINPUTSTRUCT;

// output struct for reading RELFSD registry
typedef struct {
    DWORD dwType;
    DWORD dwSize;
    BYTE  data[MAX_PATH];
} CEFSOUTPUTSTRUCT, *PCEFSOUTPUTSTRUCT; 

enum {IOCTL_REG_OPEN, IOCTL_REG_CLOSE, IOCTL_REG_GET, IOCTL_REG_ENUM, IOCTL_WRITE_DEBUG};

#ifdef __cplusplus
}
#endif

#endif  // #ifndef  _PPFS_H_
