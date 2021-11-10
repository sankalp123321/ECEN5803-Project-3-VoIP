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

#ifndef __WEBPROXY_H__
#define __WEBPROXY_H__

#include <winsock.h>

#define PROXY_VERSION	1

#define IOCTL_SERVICE_PRX_SIGNAL_FILTER		1


typedef struct _PROXY_HTTP_REQUEST {
	DWORD dwSize;
	const SOCKADDR_STORAGE* psaClient;
	int cbsaClient;
	const char* szUser;
	int cchUser;
	const char* szURL;
	int cchURL;
	char* szURLOut;
	int cbURLOut;
	const SOCKADDR_STORAGE* psaProxy;
	int cbsaProxy;
} PROXY_HTTP_REQUEST, *PPROXY_HTTP_REQUEST;

typedef struct _PROXY_HTTP_INFORMATION {
	DWORD dwSize;
	DWORD dwProxyVersion;
} PROXY_HTTP_INFORMATION, *PPROXY_HTTP_INFORMATION;
	

#endif
