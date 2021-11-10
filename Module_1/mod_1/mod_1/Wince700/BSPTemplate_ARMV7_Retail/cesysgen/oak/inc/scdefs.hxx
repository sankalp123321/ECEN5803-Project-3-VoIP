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


Module Name:

    scdefs.hxx

Abstract:

    MSMQ global header file / defaults

--*/
#if ! defined (__scdefs_HXX__)
#define __scdefs_HXX__	1

#include <bldver.h>

#define MSMQ_SC_REGISTRY_KEY			L"SOFTWARE\\Microsoft\\MSMQ\\SimpleClient"
#define MSMQ_SC_PORT					1801
#define MSMQ_SC_PING_PORT				3527

#define MSMQ_SC_DEFAULT_OUTGOING_QUOTA	256		// In Kilobytes
#define MSMQ_SC_DEFAULT_INCOMING_QUOTA	1024	// In kilobytes
#define MSMQ_SC_DEFAULT_MACHINE_QUOTA	2048	// In kilobytes

#define MSMQ_SC_DEFAULT_ORDERWINDOW		100
#define MSMQ_SC_DEFAULT_ORDERACKSCALE	5		// relative to seconds
#define MSMQ_SC_DEFAULT_FSTIMEOUT		30		// in seconds
#define MSMQ_SC_DEFAULT_PINGTIMEOUT		1000

#define MSMQ_SC_MAX_HOP_COUNT			8

#define MSMQ_SC_RETRY_MAX				28

#define MSMQ_SC_QUEUE_STORE				L"MSMQ"

#define MSMQ_SC_LOGFILE					L"MQLOGFILE.TXT"
#define MSMQ_SC_LOGSIZE					(256 * 1024)

#define MSMQ_SC_LOCALHOST				L"$localhost$"

#if defined (_DEBUG) || defined (DEBUG)
#define SC_VERBOSE			1
#define SC_DEBUG_FILE		1

#define VERBOSE_MASK_API		0x00000001
#define VERBOSE_MASK_QUEUE		0x00000002
#define VERBOSE_MASK_SESSION	0x00000004
#define VERBOSE_MASK_PACKETS	0x00000008
#define VERBOSE_MASK_CURSORS	0x00000010
#define VERBOSE_MASK_ORDER		0x00000020
#define VERBOSE_MASK_IO			0x00000040
#define VERBOSE_MASK_FILE		0x00000080
#define VERBOSE_MASK_INIT		0x00000100
#define VERBOSE_MASK_WARN		0x00004000
#define VERBOSE_MASK_FATAL		0x00008000
#define VERBOSE_MASK_SRMP       0x00010000

#define VERBOSE_OUTPUT_CONSOLE	0x00000001
#define VERBOSE_OUTPUT_LOGFILE  0x00000002
#define VERBOSE_OUTPUT_DEBUGMSG	0x00000004
#endif

#endif
