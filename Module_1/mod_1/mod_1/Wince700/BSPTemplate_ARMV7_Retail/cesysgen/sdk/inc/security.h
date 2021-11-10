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


Module Name: security.h

Purpose: Top-level include file for security aware components.

--*/

// This file will go out and pull in all the header files that you need,
// based on defines that you issue.  The following macros are used.

// NOTE:  Update this section if you add new files:
//
// SECURITY_KERNEL      Use the kernel interface, not the usermode
// SECURITY_PACKAGE     Include defines necessary for security packages
// SECURITY_KERBEROS    Include everything needed to talk to the kerberos pkg.
// SECURITY_NTLM        Include everything to talk to ntlm package.
// SECURITY_OBJECTS     Include all Security Admin Object definitions.

//
// Each of the files included here are surrounded by guards, so you don't
// need to worry about including this file multiple times with different
// flags defined
//

#ifdef __cplusplus
extern "C"
{
#endif

#ifndef SSPI_PROXY_CLASS
#define SSPI_PROXY_CLASS    PROXY_CLASS
#endif

//
// These are name that can be used to refer to the builtin packages
//

#ifndef NTLMSP_NAME_A
#define NTLMSP_NAME_A            "NTLM"
#define NTLMSP_NAME              L"NTLM"        // ntifs
#endif // NTLMSP_NAME

#ifndef MICROSOFT_KERBEROS_NAME_A
#define MICROSOFT_KERBEROS_NAME_A   "Kerberos"
#define MICROSOFT_KERBEROS_NAME_W   L"Kerberos"
#ifdef WIN32_CHICAGO
#define MICROSOFT_KERBEROS_NAME MICROSOFT_KERBEROS_NAME_A
#else
#define MICROSOFT_KERBEROS_NAME MICROSOFT_KERBEROS_NAME_W
#endif
#endif  // MICROSOFT_KERBEROS_NAME_A


#ifndef NEGOSSP_NAME
#define NEGOSSP_NAME_W  L"Negotiate"
#define NEGOSSP_NAME_A  "Negotiate"

#ifdef UNICODE
#define NEGOSSP_NAME    NEGOSSP_NAME_W
#else
#define NEGOSSP_NAME    NEGOSSP_NAME_A
#endif
#endif // NEGOSSP_NAME

#include <windows.h>

#include <sspi.h>

//#include <secext.h>

//
// Include the error codes:
//

//#include <issperr.h>


// Include security package headers:


#ifdef SECURITY_NTLM

// #include <ntlmsp.h>

#endif // SECURITY_NTLM


// Include security object definitions


#ifdef __cplusplus
}
#endif

