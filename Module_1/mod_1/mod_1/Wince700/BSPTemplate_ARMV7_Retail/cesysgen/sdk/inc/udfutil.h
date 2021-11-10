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
#pragma once

#include <windows.h>

//
// Definition of callback indicating progress of format
//
typedef VOID (*PFN_PROGRESS)( DWORD dwPercent );

//
// This is used for formats that have different phases.
// Physical Format
// Logical Format
//
typedef VOID (*PFN_UDFPROGRESS)( DWORD dwPercent, const WCHAR* strPhase );

//
// Definition of callback to display a message or to prompt user
//
typedef BOOL (*PFN_MESSAGE)( LPTSTR szMessage, LPTSTR szCaption, BOOL fYesNo );

typedef struct
{
    BOOL fAllowFullFormat;
    BOOL fForceFullFormat;
    BOOL fMirrorMetadataFile;
    USHORT MajorRevision;
    USHORT MinorRevision;
    ULONG MetadataFileSize;
    ULONG SparingTableSize;
} UDF_FORMAT_OPTIONS, *PUDF_FORMAT_OPTIONS;

typedef struct
{
    UDF_FORMAT_OPTIONS FormatOptions;
    HANDLE hStore;
    HANDLE hPartition;
    PFN_UDFPROGRESS pfnProgress;
    PFN_MESSAGE pfnMessage;
} UDF_FORMATEX_PARAMS, *PUDF_FORMATEX_PARAMS;

//
// hPartition is not used on optical media.  In that case, it should be NULL.
//
typedef DWORD (*PFN_UDFFORMATVOLUME)( HANDLE hStore,
                                      HANDLE hPartition,
                                      PUDF_FORMAT_OPTIONS pFormatOptions,
                                      PFN_UDFPROGRESS pfnProgress,
                                      PFN_MESSAGE pfnMessage );

//
// This is required if a UDF volume calls FSDMGR_FormatVolume.
//
typedef DWORD (*PFN_UDFFORMATVOLUMEEX)( HANDLE hVolume,
                                        UDF_FORMATEX_PARAMS* pFormatParameters );

