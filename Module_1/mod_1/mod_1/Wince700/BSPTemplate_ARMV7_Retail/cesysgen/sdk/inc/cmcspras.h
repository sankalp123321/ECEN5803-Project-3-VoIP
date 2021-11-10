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

#include <CmNet.h>
#include <ras.h>

// {59B09E94-9E0E-456b-A02B-F73AED543130}
static const CM_CONNECTION_TYPE CM_CSP_RAS_TYPE = 
{ 0x59b09e94, 0x9e0e, 0x456b, { 0xa0, 0x2b, 0xf7, 0x3a, 0xed, 0x54, 0x31, 0x30 } };

//
// This data structure describes the format of type specific configuration
// data used by CSPRAS.
//
struct CspRasSpecificInfo
{
    DWORD         Version;
#define CSP_RAS_SPECIFIC_INFO_VERSION_1     1
    RASENTRY      RasEntry;
    RASDIALPARAMS RasDialParams;
    DWORD         cbDevConfig;
    BYTE          DevConfig[1];   // Variable length array, actual length is cbDevConfig bytes
};


