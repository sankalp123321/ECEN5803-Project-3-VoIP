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
EXTERN_C __declspec(selectany) const GUID WINDOWSMOBILE_CELLCORELOG_PUBLISHER = {0x6cfd3e24, 0xa2cc, 0x4c2c, {0x94, 0x96,0x00,0xc3,0xbf,0x31,0xdd,0x9c}};
#define CELLULARLOGCHANNEL 0x3d
#define WINDOWSMOBILE_CELLCORELOG_PUBLISHER_KEYWORD_INFO 0x1
#define WINDOWSMOBILE_CELLCORELOG_PUBLISHER_KEYWORD_ERROR 0x2
#define WINDOWSMOBILE_CELLCORELOG_PUBLISHER_KEYWORD_SMS 0x10000
#define WINDOWSMOBILE_CELLCORELOG_PUBLISHER_KEYWORD_VOICE 0x20000
#define WINDOWSMOBILE_CELLCORELOG_PUBLISHER_KEYWORD_SUPSVC 0x40000
#define WINDOWSMOBILE_CELLCORELOG_PUBLISHER_KEYWORD_SIM 0x80000
#define WINDOWSMOBILE_CELLCORELOG_PUBLISHER_KEYWORD_DATA 0x100000
#define WINDOWSMOBILE_CELLCORELOG_PUBLISHER_KEYWORD_NETWORK 0x200000
#define WINDOWSMOBILE_CELLCORELOG_PUBLISHER_KEYWORD_WAP 0x400000
#define WINDOWSMOBILE_CELLCORELOG_PUBLISHER_KEYWORD_RADIO 0x800000
#define WINDOWSMOBILE_CELLCORELOG_PUBLISHER_KEYWORD_RIL 0x1000000
#define WINDOWSMOBILE_CELLCORELOG_PUBLISHER_KEYWORD_MISC 0x2000000
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR FUNCTION_TRACE_EVENT = {0x3e8, 0x0, 0x3d, 0x4, 0x0, 0x0, 0x8000000000000000};
#define FUNCTION_TRACE_EVENT_value 0x3e8
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR SMS_INFO_EVENT = {0x3e9, 0x0, 0x3d, 0x4, 0x0, 0x0, 0x8000000000000000};
#define SMS_INFO_EVENT_value 0x3e9
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR SMS_ERROR_EVENT = {0x3ea, 0x0, 0x3d, 0x2, 0x0, 0x0, 0x8000000000000000};
#define SMS_ERROR_EVENT_value 0x3ea
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR VOICE_INFO_EVENT = {0x3eb, 0x0, 0x3d, 0x4, 0x0, 0x0, 0x8000000000000000};
#define VOICE_INFO_EVENT_value 0x3eb
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR VOICE_ERROR_EVENT = {0x3ec, 0x0, 0x3d, 0x2, 0x0, 0x0, 0x8000000000000000};
#define VOICE_ERROR_EVENT_value 0x3ec
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR SUPSVC_INFO_EVENT = {0x3ed, 0x0, 0x3d, 0x4, 0x0, 0x0, 0x8000000000000000};
#define SUPSVC_INFO_EVENT_value 0x3ed
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR SUPSVC_ERROR_EVENT = {0x3ee, 0x0, 0x3d, 0x2, 0x0, 0x0, 0x8000000000000000};
#define SUPSVC_ERROR_EVENT_value 0x3ee
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR SIM_INFO_EVENT = {0x3ef, 0x0, 0x3d, 0x4, 0x0, 0x0, 0x8000000000000000};
#define SIM_INFO_EVENT_value 0x3ef
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR SIM_ERROR_EVENT = {0x3f0, 0x0, 0x3d, 0x2, 0x0, 0x0, 0x8000000000000000};
#define SIM_ERROR_EVENT_value 0x3f0
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR DATA_INFO_EVENT = {0x3f1, 0x0, 0x3d, 0x4, 0x0, 0x0, 0x8000000000000000};
#define DATA_INFO_EVENT_value 0x3f1
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR DATA_ERROR_EVENT = {0x3f2, 0x0, 0x3d, 0x2, 0x0, 0x0, 0x8000000000000000};
#define DATA_ERROR_EVENT_value 0x3f2
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR NETWORK_INFO_EVENT = {0x3f3, 0x0, 0x3d, 0x4, 0x0, 0x0, 0x8000000000000000};
#define NETWORK_INFO_EVENT_value 0x3f3
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR NETWORK_ERROR_EVENT = {0x3f4, 0x0, 0x3d, 0x2, 0x0, 0x0, 0x8000000000000000};
#define NETWORK_ERROR_EVENT_value 0x3f4
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR WAP_INFO_EVENT = {0x3f5, 0x0, 0x3d, 0x4, 0x0, 0x0, 0x8000000000000000};
#define WAP_INFO_EVENT_value 0x3f5
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR WAP_ERROR_EVENT = {0x3f6, 0x0, 0x3d, 0x2, 0x0, 0x0, 0x8000000000000000};
#define WAP_ERROR_EVENT_value 0x3f6
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR RADIO_INFO_EVENT = {0x3f7, 0x0, 0x3d, 0x4, 0x0, 0x0, 0x8000000000000000};
#define RADIO_INFO_EVENT_value 0x3f7
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR RADIO_ERROR_EVENT = {0x3f8, 0x0, 0x3d, 0x2, 0x0, 0x0, 0x8000000000000000};
#define RADIO_ERROR_EVENT_value 0x3f8
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR RIL_INFO_EVENT = {0x3f9, 0x0, 0x3d, 0x4, 0x0, 0x0, 0x8000000000000000};
#define RIL_INFO_EVENT_value 0x3f9
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR RIL_ERROR_EVENT = {0x3fa, 0x0, 0x3d, 0x2, 0x0, 0x0, 0x8000000000000000};
#define RIL_ERROR_EVENT_value 0x3fa
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR MISC_INFO_EVENT = {0x3fb, 0x0, 0x3d, 0x4, 0x0, 0x0, 0x8000000000000000};
#define MISC_INFO_EVENT_value 0x3fb
EXTERN_C __declspec(selectany) const EVENT_DESCRIPTOR MISC_ERROR_EVENT = {0x3fc, 0x0, 0x3d, 0x2, 0x0, 0x0, 0x8000000000000000};
#define MISC_ERROR_EVENT_value 0x3fc
