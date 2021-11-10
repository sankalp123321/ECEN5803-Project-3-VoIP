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
#ifndef _CRED_H

#define _CRED_H

#ifdef __cplusplus
extern "C" {
#endif

// Pre defined Credential Types
// 32 bit unsigned number
// Reserved range 0x00010000 - 0xffffffff

// Primitive
// LSB bit should be zero [even numbers]

#define CRED_TYPE_NTLM                      0x00010002  // 65538
#define CRED_TYPE_KERBEROS                  0x00010004  // 65540
#define CRED_TYPE_PLAINTEXT_PASSWORD        0x00010006  // 65542
#define CRED_TYPE_CERTIFICATE               0x00010008  // 65544
#define CRED_TYPE_GENERIC                   0x0001000a  // 65546

// Virtual
// LSB bit should be one [odd numbers]

#define CRED_TYPE_DOMAIN_PASSWORD           0x00010001  // 65537

// Cred flags
// 0x00000008, 0x00000080, 0x00000100, 0x00000200 have been reservered.
// These values can't be used for a new flag

#define CRED_FLAG_PERSIST                   0x00000001
#define CRED_FLAG_DEFAULT                   0x00000002
#define CRED_FLAG_TRUSTED                   0x00000010

// CredRead Flags
#define CRED_FLAG_IMPLICIT_DEFAULT          0x00000020

// CredWrite Flags
#define CRED_FLAG_NO_BLOB_HANDLING          0x00000040
#define CRED_FLAG_FAIL_IF_EXISTING          0x00000400

// CredRead Flags
#define CRED_FLAG_NO_DEFAULT                0x00000800
#pragma deprecated ("CRED_FLAG_NO_IMPLICIT_DEFAULT")
#define CRED_FLAG_NO_IMPLICIT_DEFAULT       0x00001000

// Magic constants

#define CRED_VER_1                          1

// Length includes terminating null
#define CRED_MAX_TARGET_LEN                 255

// UNLEN=256 + 1 (terminating null)
#define CRED_MAX_USERNAME_LEN               257

// DNS_MAX_NAME_LENGTH=255 + 1(terminating null)
#define CRED_MAX_DOMAINNAME_LEN             256

// domain/user (includes terminating null)
#define CRED_MAX_USER_LEN                   CRED_MAX_USERNAME_LEN + \
                                            CRED_MAX_DOMAINNAME_LEN

#define CRED_MAX_DOMAINUSERNAME_LEN         CRED_MAX_USER_LEN

// Assuming max password length of PWLEN (lmcons.h) = 256
// Our length includes NULL character hence adding space for 1 more character
// Also our lengths are byte size, hence doubling by 2 for WCHAR
// 2050 = (1024+1)*2
#define CRED_MAX_BLOB_SIZE                  2050

// Error codes
// 16000-17999

#define ERROR_CREDMAN_ALL_FAILED            16001L
#define ERROR_CREDMAN_SOME_FAILED           16002L

// Structures

typedef struct _CRED {
    DWORD       dwVersion;
    DWORD       dwType;
    PWCHAR      wszUser;
    DWORD       dwUserLen;
    PWCHAR      wszTarget;
    DWORD       dwTargetLen;
    PBYTE       pBlob;
    DWORD       dwBlobSize;
    DWORD       dwFlags;
} CRED, *PCRED, **PPCRED;

#define CRED_MAX_CRED_SIZE (sizeof(CRED) + \
                (CRED_MAX_USER_LEN+CRED_MAX_TARGET_LEN)*sizeof(WCHAR) + \
                CRED_MAX_BLOB_SIZE)

// Functions
DWORD
CredWrite(
    __in const PCRED pCred,
         DWORD       dwFlags
);

DWORD
CredRead(
    __in            PCWCHAR     wszTarget,
                    DWORD       dwTargetLen,
                    DWORD       dwType,
                    DWORD       dwFlags,
    __deref_out_opt PPCRED      ppCred
);

DWORD
CredDelete(
    __in PCWCHAR     wszTarget,
         DWORD       dwTargetLen,
         DWORD       dwType,
         DWORD       dwFlags
);

DWORD
CredFree(
    __in PBYTE       pbBuffer
);

#ifdef __cplusplus
}
#endif

#endif

