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

#ifdef __cplusplus
extern "C" {
#endif

#define IPSEC_HANDLE_NAME 			L"IKE"

#define IPSEC_IOCTL_BASE 			0

#define IPSEC_IOCTL(x) 				((x) + IPSEC_IOCTL_BASE)

#define IPSEC_IOCTL_API 				IPSEC_IOCTL(1)

// More control codes are defined in int_ipsec_ioctl.h
// Check that before adding new ones to prevent conflicts

#define IPSEC_PUBLIC_CODE_BASE 0

#define IPSEC_PUBLIC_CODE(x) ((x)+IPSEC_PUBLIC_CODE_BASE)

#define    IPSEC_API_IS_IPSEC_RUNNING 	IPSEC_PUBLIC_CODE(1)
#define    IPSEC_API_START_IPSEC 		IPSEC_PUBLIC_CODE(2)
#define    IPSEC_API_STOP_IPSEC 			IPSEC_PUBLIC_CODE(3)
#define 	 IPSEC_API_SET_MODE 			IPSEC_PUBLIC_CODE(4)
#define    IPSEC_API_RESET_MODE 		IPSEC_PUBLIC_CODE(5)
#define 	 IPSEC_API_SET_CONFIG		 	IPSEC_PUBLIC_CODE(6)

typedef struct {
    DWORD code;
    HRESULT hr;
} IPSEC_API_BASIC_CONTEXT, *PIPSEC_API_BASIC_CONTEXT;

typedef struct {
	DWORD code;
	HRESULT hr;
	IPSEC_API_MODE_INFO modeInfo;
	DWORD flags;
} IPSEC_API_SET_MODE_CONTEXT, *PIPSEC_API_SET_MODE_CONTEXT;

typedef struct {
	DWORD code;
	HRESULT hr;
	DWORD srcIP;
	DWORD flags;
} IPSEC_API_RESET_MODE_CONTEXT, *PIPSEC_API_RESET_MODE_CONTEXT;

typedef struct {
	DWORD code;
	HRESULT hr;
	IPSEC_API_PARAM param;
	DWORD flags;
} IPSEC_API_SET_CONFIG_CONTEXT, *PIPSEC_API_SET_CONFIG_CONTEXT;

#ifdef __cplusplus
}
#endif


