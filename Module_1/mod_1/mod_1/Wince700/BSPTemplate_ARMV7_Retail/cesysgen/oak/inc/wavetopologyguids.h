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

#ifndef _WAVETOPOLOGYGUIDS_H_
#define _WAVETOPOLOGYGUIDS_H_

#if (_MSC_VER >= 1000)
#pragma once
#endif

#include <basetyps.h>

#ifdef __cplusplus
extern "C" {
#endif

//
// Device class GUIDs.
//

// {B1A0ACD4-4CEB-4a33-A882-DDE99E7D8B82}
DEFINE_GUID(WAVE_DEVCLASS_SYSTEM_PRIMARY, 
    0xb1a0acd4, 0x4ceb, 0x4a33, 0xa8, 0x82, 0xdd, 0xe9, 0x9e, 0x7d, 0x8b, 0x82);

// {0D4200C3-4600-4fd2-AAAB-7AA451C4CEF9}
DEFINE_GUID(WAVE_DEVCLASS_SYSTEM_AUX, 
    0xd4200c3, 0x4600, 0x4fd2, 0xaa, 0xab, 0x7a, 0xa4, 0x51, 0xc4, 0xce, 0xf9);

// {81AD1ECB-B504-47af-88FF-FFCF664209C8}
DEFINE_GUID(WAVE_DEVCLASS_BTH_A2DP, 
    0x81ad1ecb, 0xb504, 0x47af, 0x88, 0xff, 0xff, 0xcf, 0x66, 0x42, 0x9, 0xc8);

// {20375F48-7756-40dc-9520-28E96DE6B2E3}
DEFINE_GUID(WAVE_DEVCLASS_USBAUDIO, 
    0x20375f48, 0x7756, 0x40dc, 0x95, 0x20, 0x28, 0xe9, 0x6d, 0xe6, 0xb2, 0xe3);

// {1C1940A5-250D-4dd0-8109-3D096FD1B03F}
DEFINE_GUID(WAVE_DEVCLASS_UNKNOWN, 
    0x1c1940a5, 0x250d, 0x4dd0, 0x81, 0x9, 0x3d, 0x9, 0x6f, 0xd1, 0xb0, 0x3f);

//
// Output endpoint GUIDs.
//

// {C851DE85-4CB6-4c98-9450-B9E443B5C0D1}
DEFINE_GUID(WAVEOUT_ENDPOINT_DEFAULT, 
    0xc851de85, 0x4cb6, 0x4c98, 0x94, 0x50, 0xb9, 0xe4, 0x43, 0xb5, 0xc0, 0xd1);

// {28B2E76E-270A-4cde-A06D-98583130BEA9}
DEFINE_GUID(WAVEOUT_ENDPOINT_RECEIVER, 
    0x28b2e76e, 0x270a, 0x4cde, 0xa0, 0x6d, 0x98, 0x58, 0x31, 0x30, 0xbe, 0xa9);

// {F3F62F07-87C1-4d6c-9D15-BA61AF555E58}
DEFINE_GUID(WAVEOUT_ENDPOINT_SPEAKERPHONE, 
    0xf3f62f07, 0x87c1, 0x4d6c, 0x9d, 0x15, 0xba, 0x61, 0xaf, 0x55, 0x5e, 0x58);

// {FB5BE2B0-1B48-4989-99E3-9EB6B13D9E62}
DEFINE_GUID(WAVEOUT_ENDPOINT_HEADSET, 
    0xfb5be2b0, 0x1b48, 0x4989, 0x99, 0xe3, 0x9e, 0xb6, 0xb1, 0x3d, 0x9e, 0x62);

// {3E096A8C-E2FA-4f63-BD59-EE17E5D210BA}
DEFINE_GUID(WAVEOUT_ENDPOINT_HEADPHONES, 
    0x3e096a8c, 0xe2fa, 0x4f63, 0xbd, 0x59, 0xee, 0x17, 0xe5, 0xd2, 0x10, 0xba);

// {AB8DBA34-41EC-4fd6-8AEE-FAE98EE75886}
DEFINE_GUID(WAVEOUT_ENDPOINT_CARKIT, 
    0xab8dba34, 0x41ec, 0x4fd6, 0x8a, 0xee, 0xfa, 0xe9, 0x8e, 0xe7, 0x58, 0x86);

// {C19AB7A1-DF84-4658-BCEA-47DFB833BD44}
DEFINE_GUID(WAVEOUT_ENDPOINT_BTH_SCO, 
    0xc19ab7a1, 0xdf84, 0x4658, 0xbc, 0xea, 0x47, 0xdf, 0xb8, 0x33, 0xbd, 0x44);

// {0B6F0854-6917-4c73-9A62-6B2BA8627F58}
DEFINE_GUID(WAVEOUT_ENDPOINT_EXT, 
    0xb6f0854, 0x6917, 0x4c73, 0x9a, 0x62, 0x6b, 0x2b, 0xa8, 0x62, 0x7f, 0x58);

//
// Input endpoint GUIDs.
//

// {C01CB52D-2A1F-412f-86ED-779D3D7F4D4B}
DEFINE_GUID(WAVEIN_ENDPOINT_DEFAULT, 
    0xc01cb52d, 0x2a1f, 0x412f, 0x86, 0xed, 0x77, 0x9d, 0x3d, 0x7f, 0x4d, 0x4b);

// {0D5F617C-48CF-4868-AE67-7C4018E10397}
DEFINE_GUID(WAVEIN_ENDPOINT_SPEAKERPHONE, 
    0xd5f617c, 0x48cf, 0x4868, 0xae, 0x67, 0x7c, 0x40, 0x18, 0xe1, 0x3, 0x97);

// {5BEBB06C-9FA5-44ab-B089-AD45AB7AD5E9}
DEFINE_GUID(WAVEIN_ENDPOINT_HEADSET, 
    0x5bebb06c, 0x9fa5, 0x44ab, 0xb0, 0x89, 0xad, 0x45, 0xab, 0x7a, 0xd5, 0xe9);

// {0CD3DB20-8358-4d0a-BD86-F1CE37B150A9}
DEFINE_GUID(WAVEIN_ENDPOINT_CARKIT, 
    0xcd3db20, 0x8358, 0x4d0a, 0xbd, 0x86, 0xf1, 0xce, 0x37, 0xb1, 0x50, 0xa9);

// {26B8BCE4-E04D-4edc-A00C-E9DDC8F9BB6D}
DEFINE_GUID(WAVEIN_ENDPOINT_BTH_SCO, 
    0x26b8bce4, 0xe04d, 0x4edc, 0xa0, 0xc, 0xe9, 0xdd, 0xc8, 0xf9, 0xbb, 0x6d);

// {12EA0296-0CA4-450e-B7A1-1CF101A0728E}
DEFINE_GUID(WAVEIN_ENDPOINT_EXT, 
    0x12ea0296, 0xca4, 0x450e, 0xb7, 0xa1, 0x1c, 0xf1, 0x1, 0xa0, 0x72, 0x8e);

#ifdef __cplusplus
}
#endif

#endif // _WAVETOPOLOGYGUIDS_H_
