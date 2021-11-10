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
#ifndef __ossvcsstubs_h__
#define __ossvcsstubs_h__

#include <windows.h>

typedef enum
{
    SPK_NORMAL,
    SPK_SPEAKER,
    SPK_LAST		// for bounds checking
} SPEAKERMODE;

/* ossvcs/misc */

EXTERN_C DWORD GetDataDirectory( __out_ecount(cchSize) LPTSTR pszBuffer, DWORD cchSize );
EXTERN_C HRESULT SHGetSpeakerMode( SPEAKERMODE *pmode );
EXTERN_C HRESULT SHSetSpeakerMode( SPEAKERMODE mode );

#endif
