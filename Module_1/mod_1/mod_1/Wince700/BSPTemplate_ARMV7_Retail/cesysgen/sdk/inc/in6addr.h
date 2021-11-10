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

    in6addr.h

Environment:

    user mode or kernel mode

--*/

#ifndef s6_addr
#pragma once

//
// IPv6 Internet address (RFC 2553)
// This is an 'on-wire' format structure.
//
typedef struct in6_addr {
    union {
        UCHAR       Byte[16];
        USHORT      Word[8];
    } u;
} IN6_ADDR, *PIN6_ADDR, FAR *LPIN6_ADDR;

#define in_addr6 in6_addr

//
// Defines to match RFC 2553.
//
#define _S6_un      u
#define _S6_u8      Byte
#define s6_addr     _S6_un._S6_u8

//
// Defines for our implementation.
//
#define s6_bytes    u.Byte
#define s6_words    u.Word

#endif
