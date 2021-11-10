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

#ifndef __CMCSPSHARE_H__
#define __CMCSPSHARE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <CmNet.h>
#include <RmNet.h>

// {A05DC613-E393-40ad-AA89-CCCE04277CD9}
static const CM_CONNECTION_TYPE CM_CSP_GSM_PACKET_TYPE =
{
    0xa05dc613,
    0xe393,
    0x40ad,
    { 0xaa, 0x89, 0xcc, 0xce, 0x4, 0x27, 0x7c, 0xd9 }
};

 // {1D0A197C-B982-4791-BFC1-D8E4B156E0B7}
static const RM_RESOURCE_ID RM_GSM_PACKET_RESOURCE_ID =
{
    0x1d0a197c,
    0xb982,
    0x4791,
    { 0xbf, 0xc1, 0xd8, 0xe4, 0xb1, 0x56, 0xe0, 0xb7 }
};

// {BD09B5B5-98C0-47b9-B3F3-D92555D86BAE}
static const RM_RESOURCE_ID RM_CSD_RESOURCE_ID =
{
    0xbd09b5b5,
    0x98c0,
    0x47b9,
    { 0xb3, 0xf3, 0xd9, 0x25, 0x55, 0xd8, 0x6b, 0xae }
};

// {54075C70-FC1A-4836-8110-602BC41E719B}
static const RM_RESOURCE_ID RM_CDMA_RESOURCE_ID =
{
    0x54075c70,
    0xfc1a,
    0x4836,
    { 0x81, 0x10, 0x60, 0x2b, 0xc4, 0x1e, 0x71, 0x9b }
};


#ifdef __cplusplus
}
#endif

#endif // __CMCSPSHARE_H__
