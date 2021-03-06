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

    udpmib.h

Abstract:

    This module contains the public definitions and structures for the
    UDP-specific parts of MIB-II.  These definitions were previously
    in iprtrmib.h, which now includes this file.

Environment:

    user mode or kernel mode

--*/

#ifndef _UDPMIB_
#define _UDPMIB_
#pragma once

#ifndef ANY_SIZE
#define ANY_SIZE 1
#endif

#define TCPIP_OWNING_MODULE_SIZE 16

typedef struct _MIB_UDPROW {
    DWORD dwLocalAddr;
    DWORD dwLocalPort;
} MIB_UDPROW, *PMIB_UDPROW;

typedef struct _MIB_UDPTABLE {
    DWORD dwNumEntries;
    MIB_UDPROW table[ANY_SIZE];
} MIB_UDPTABLE, *PMIB_UDPTABLE;

#define SIZEOF_UDPTABLE(X) (FIELD_OFFSET(MIB_UDPTABLE, table[0]) + \
						    ((X) * sizeof(MIB_UDPROW)) + ALIGN_SIZE)

typedef struct _MIB_UDPROW_OWNER_PID {
    DWORD dwLocalAddr;
    DWORD dwLocalPort;
    DWORD dwOwningPid;
} MIB_UDPROW_OWNER_PID, *PMIB_UDPROW_OWNER_PID;

typedef struct _MIB_UDPTABLE_OWNER_PID
{
    DWORD                   dwNumEntries;
    MIB_UDPROW_OWNER_PID    table[ANY_SIZE];
} MIB_UDPTABLE_OWNER_PID, *PMIB_UDPTABLE_OWNER_PID;

#define SIZEOF_UDPTABLE_OWNER_PID(X) (FIELD_OFFSET(MIB_UDPTABLE_OWNER_PID, table[0]) + \
									  ((X) * sizeof(MIB_UDPROW_OWNER_PID)) + ALIGN_SIZE)

typedef struct _MIB_UDPROW_OWNER_MODULE {
    DWORD           dwLocalAddr;
    DWORD           dwLocalPort;
    DWORD           dwOwningPid;
    LARGE_INTEGER   liCreateTimestamp;
    union {
        struct {
            int     SpecificPortBind : 1;
        };
        int         dwFlags;
    };
    ULONGLONG       OwningModuleInfo[TCPIP_OWNING_MODULE_SIZE];
} MIB_UDPROW_OWNER_MODULE, *PMIB_UDPROW_OWNER_MODULE;

typedef struct _MIB_UDPTABLE_OWNER_MODULE
{
    DWORD                   dwNumEntries;
    MIB_UDPROW_OWNER_MODULE table[ANY_SIZE];
} MIB_UDPTABLE_OWNER_MODULE, *PMIB_UDPTABLE_OWNER_MODULE;

#define SIZEOF_UDPTABLE_OWNER_MODULE(X) (FIELD_OFFSET(MIB_UDPTABLE_OWNER_MODULE, table[0]) + \
										 ((X) * sizeof(MIB_UDPROW_OWNER_MODULE)) + ALIGN_SIZE)

#ifdef _WS2IPDEF_
//
// The following definitions require Winsock2.
//

typedef struct _MIB_UDP6ROW {
    IN6_ADDR dwLocalAddr;
    DWORD dwLocalScopeId;
    DWORD dwLocalPort;
} MIB_UDP6ROW, *PMIB_UDP6ROW;

typedef struct _MIB_UDP6TABLE {
    DWORD dwNumEntries;
    MIB_UDP6ROW table[ANY_SIZE];
} MIB_UDP6TABLE, *PMIB_UDP6TABLE;

#define SIZEOF_UDP6TABLE(X) (FIELD_OFFSET(MIB_UDP6TABLE, table[0]) + \
							 ((X) * sizeof(MIB_UDP6ROW)) + ALIGN_SIZE)

typedef struct _MIB_UDP6ROW_OWNER_PID {
    UCHAR           ucLocalAddr[16];
    DWORD           dwLocalScopeId;
    DWORD           dwLocalPort;
    DWORD           dwOwningPid;
} MIB_UDP6ROW_OWNER_PID, *PMIB_UDP6ROW_OWNER_PID;

typedef struct _MIB_UDP6TABLE_OWNER_PID
{
    DWORD                   dwNumEntries;
    MIB_UDP6ROW_OWNER_PID   table[ANY_SIZE];
} MIB_UDP6TABLE_OWNER_PID, *PMIB_UDP6TABLE_OWNER_PID;

#define SIZEOF_UDP6TABLE_OWNER_PID(X) (FIELD_OFFSET(MIB_UDP6TABLE_OWNER_PID, table[0]) + \
									   ((X) * sizeof(MIB_UDP6ROW_OWNER_PID)) + ALIGN_SIZE)

typedef struct _MIB_UDP6ROW_OWNER_MODULE {
    UCHAR           ucLocalAddr[16];
    DWORD           dwLocalScopeId;
    DWORD           dwLocalPort;
    DWORD           dwOwningPid;
    LARGE_INTEGER   liCreateTimestamp;
    union {
        struct {
            int     SpecificPortBind : 1;
        };
        int         dwFlags;
    };
    ULONGLONG       OwningModuleInfo[TCPIP_OWNING_MODULE_SIZE];
} MIB_UDP6ROW_OWNER_MODULE, *PMIB_UDP6ROW_OWNER_MODULE;

typedef struct _MIB_UDP6TABLE_OWNER_MODULE
{
    DWORD                    dwNumEntries;
    MIB_UDP6ROW_OWNER_MODULE table[ANY_SIZE];
} MIB_UDP6TABLE_OWNER_MODULE, *PMIB_UDP6TABLE_OWNER_MODULE;

#define SIZEOF_UDP6TABLE_OWNER_MODULE(X) (FIELD_OFFSET(MIB_UDP6TABLE_OWNER_MODULE, table[0]) + \
										  ((X) * sizeof(MIB_UDP6ROW_OWNER_MODULE)) + ALIGN_SIZE)

#endif // _WS2IPDEF_

typedef struct _MIB_UDPSTATS {
    DWORD dwInDatagrams;
    DWORD dwNoPorts;
    DWORD dwInErrors;
    DWORD dwOutDatagrams;
    DWORD dwNumAddrs;
} MIB_UDPSTATS,*PMIB_UDPSTATS;

#endif // _UDPMIB_

