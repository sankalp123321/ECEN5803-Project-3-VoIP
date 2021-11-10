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

    wsamsg.h

Abstract:
 
    This file contains the core definitions for the Winsock2
    specification that can be used by both user-mode and 
    kernel mode modules.

    This file is included in WINSOCK2.H. User mode applications
    should include WINSOCK2.H rather than including this file
    directly. This file can not be included by a module that also
    includes WINSOCK.H.
 
Environment:

    user mode or kernel mode

--*/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/*
 * WSAMSG -- for WSASendMsg 
 */

typedef struct _WSAMSG {
    __field_bcount(namelen) LPSOCKADDR       name;              /* Remote address */
    INT              namelen;           /* Remote address length */
    LPWSABUF         lpBuffers;         /* Data buffer array */

#if(_WIN32_WINNT >= 0x0600)
    ULONG            dwBufferCount;     /* Number of elements in the array */
#else
    DWORD            dwBufferCount;     /* Number of elements in the array */
#endif //(_WIN32_WINNT>=0x0600)

    WSABUF           Control;           /* Control buffer */

#if(_WIN32_WINNT >= 0x0600)
    ULONG            dwFlags;           /* Flags */
#else
    DWORD            dwFlags;           /* Flags */
#endif //(_WIN32_WINNT>=0x0600)

} WSAMSG, *PWSAMSG, * FAR LPWSAMSG;

/*
 * Layout of ancillary data objects in the control buffer (RFC 2292).
 */
#if(_WIN32_WINNT >= 0x0600) 
#define _WSACMSGHDR cmsghdr
#endif //(_WIN32_WINNT>=0x0600)

typedef struct _WSACMSGHDR {
    SIZE_T      cmsg_len;
    INT         cmsg_level;
    INT         cmsg_type;
    /* followed by UCHAR cmsg_data[] */
} WSACMSGHDR, *PWSACMSGHDR, FAR *LPWSACMSGHDR;

#if(_WIN32_WINNT >= 0x0600)
typedef WSACMSGHDR CMSGHDR, *PCMSGHDR;
#endif //(_WIN32_WINNT>=0x0600)

/*
 * Alignment macros for header and data members of
 * the control buffer.
 */
#define WSA_CMSGHDR_ALIGN(length)                           \
            ( ((length) + TYPE_ALIGNMENT(WSACMSGHDR)-1) &   \
                (~(TYPE_ALIGNMENT(WSACMSGHDR)-1)) )         \

#define WSA_CMSGDATA_ALIGN(length)                          \
            ( ((length) + MAX_NATURAL_ALIGNMENT-1) &        \
                (~(MAX_NATURAL_ALIGNMENT-1)) )

#if(_WIN32_WINNT >= 0x0600)
#define CMSGHDR_ALIGN WSA_CMSGHDR_ALIGN
#define CMSGDATA_ALIGN WSA_CMSGDATA_ALIGN
#endif //(_WIN32_WINNT>=0x0600)

/*
 *  WSA_CMSG_FIRSTHDR
 *
 *  Returns a pointer to the first ancillary data object, 
 *  or a null pointer if there is no ancillary data in the 
 *  control buffer of the WSAMSG structure.
 *
 *  LPCMSGHDR 
 *  WSA_CMSG_FIRSTHDR (
 *      LPWSAMSG    msg
 *      );
 */
#define WSA_CMSG_FIRSTHDR(msg) \
    ( ((msg)->Control.len >= sizeof(WSACMSGHDR))            \
        ? (LPWSACMSGHDR)(msg)->Control.buf                  \
        : (LPWSACMSGHDR)NULL )

#if(_WIN32_WINNT >= 0x0600)
#define CMSG_FIRSTHDR WSA_CMSG_FIRSTHDR
#endif //(_WIN32_WINNT>=0x0600)

/* 
 *  WSA_CMSG_NXTHDR
 *
 *  Returns a pointer to the next ancillary data object,
 *  or a null if there are no more data objects.
 *
 *  LPCMSGHDR 
 *  WSA_CMSG_NEXTHDR (
 *      LPWSAMSG        msg,
 *      LPWSACMSGHDR    cmsg
 *      );
 */
#define WSA_CMSG_NXTHDR(msg, cmsg)                          \
    ( ((cmsg) == NULL)                                      \
        ? WSA_CMSG_FIRSTHDR(msg)                            \
        : ( ( ((PUCHAR)(cmsg) +                             \
                    WSA_CMSGHDR_ALIGN((cmsg)->cmsg_len) +   \
                    sizeof(WSACMSGHDR) ) >                  \
                (PUCHAR)((msg)->Control.buf) +              \
                    (msg)->Control.len )                    \
            ? (LPWSACMSGHDR)NULL                            \
            : (LPWSACMSGHDR)((PUCHAR)(cmsg) +               \
                WSA_CMSGHDR_ALIGN((cmsg)->cmsg_len)) ) )

#if(_WIN32_WINNT >= 0x0600)
#define CMSG_NXTHDR WSA_CMSG_NXTHDR
#endif //(_WIN32_WINNT>=0x0600)

/* 
 *  WSA_CMSG_DATA
 *
 *  Returns a pointer to the first byte of data (what is referred 
 *  to as the cmsg_data member though it is not defined in 
 *  the structure).
 *
 *  Note that RFC 2292 defines this as CMSG_DATA, but that name
 *  is already used by wincrypt.h, and so Windows has used WSA_CMSG_DATA.
 *
 *  PUCHAR
 *  WSA_CMSG_DATA (
 *      LPWSACMSGHDR   pcmsg
 *      );
 */
#define WSA_CMSG_DATA(cmsg)             \
            ( (PUCHAR)(cmsg) + WSA_CMSGDATA_ALIGN(sizeof(WSACMSGHDR)) )

/*
 *  WSA_CMSG_SPACE
 *
 *  Returns total size of an ancillary data object given 
 *  the amount of data. Used to allocate the correct amount 
 *  of space.
 *
 *  SIZE_T
 *  WSA_CMSG_SPACE (
 *      SIZE_T length
 *      );
 */
#define WSA_CMSG_SPACE(length)  \
        (WSA_CMSGDATA_ALIGN(sizeof(WSACMSGHDR) + WSA_CMSGHDR_ALIGN(length)))

#if(_WIN32_WINNT >= 0x0600)
#define CMSG_SPACE WSA_CMSG_SPACE
#endif //(_WIN32_WINNT>=0x0600)

/*
 *  WSA_CMSG_LEN
 *
 *  Returns the value to store in cmsg_len given the amount of data.
 *
 *  SIZE_T
 *  WSA_CMSG_LEN (
 *      SIZE_T length
 *  );
 */
#define WSA_CMSG_LEN(length)    \
         (WSA_CMSGDATA_ALIGN(sizeof(WSACMSGHDR)) + length)

#if(_WIN32_WINNT >= 0x0600)
#define CMSG_LEN WSA_CMSG_LEN
#endif //(_WIN32_WINNT>=0x0600)

/*
 * Definition for flags member of the WSAMSG structure
 * This is in addition to other MSG_xxx flags defined
 * for recv/recvfrom/send/sendto.
 */
#define MSG_TRUNC       0x0100
#define MSG_CTRUNC      0x0200
#define MSG_BCAST       0x0400
#define MSG_MCAST       0x0800

#ifdef __cplusplus
}
#endif

