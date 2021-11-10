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

    ifmib.h

Abstract:

    This module contains the public definitions and structures for the
    non-TCP/IP specific parts of MIB-II.  These definitions were previously
    in iprtrmib.h, which now includes this file.

--*/

#ifndef _IFMIB_
#define _IFMIB_
#pragma once

#include <ifdef.h>

#ifndef ANY_SIZE
#define ANY_SIZE 1
#endif

typedef struct _MIB_IFNUMBER
{
    DWORD    dwValue;
} MIB_IFNUMBER, *PMIB_IFNUMBER;


//
// $REVIEW: This has always been defined as 8.  However, this is not 
// sufficient for all media types.
//
#define MAXLEN_PHYSADDR 8

#define MAXLEN_IFDESCR 256

#define MAX_INTERFACE_NAME_LEN 256

typedef struct _MIB_IFROW {
    WCHAR wszName[MAX_INTERFACE_NAME_LEN];
    IF_INDEX dwIndex;
    IFTYPE dwType;
    DWORD dwMtu;
    DWORD dwSpeed;
    DWORD dwPhysAddrLen;
    UCHAR bPhysAddr[MAXLEN_PHYSADDR];
    DWORD dwAdminStatus;
    INTERNAL_IF_OPER_STATUS dwOperStatus;
    DWORD dwLastChange;
    DWORD dwInOctets;
    DWORD dwInUcastPkts;
    DWORD dwInNUcastPkts;
    DWORD dwInDiscards;
    DWORD dwInErrors;
    DWORD dwInUnknownProtos;
    DWORD dwOutOctets;
    DWORD dwOutUcastPkts;
    DWORD dwOutNUcastPkts;
    DWORD dwOutDiscards;
    DWORD dwOutErrors;
    DWORD dwOutQLen;
    DWORD dwDescrLen;
    UCHAR bDescr[MAXLEN_IFDESCR];
} MIB_IFROW, *PMIB_IFROW;

typedef struct _MIB_IFTABLE {
    DWORD dwNumEntries;
    MIB_IFROW table[ANY_SIZE];
} MIB_IFTABLE, *PMIB_IFTABLE;

#define SIZEOF_IFTABLE(X) (FIELD_OFFSET(MIB_IFTABLE,table[0]) + \
                           ((X) * sizeof(MIB_IFROW)) + ALIGN_SIZE)

#endif // _IFMIB_
