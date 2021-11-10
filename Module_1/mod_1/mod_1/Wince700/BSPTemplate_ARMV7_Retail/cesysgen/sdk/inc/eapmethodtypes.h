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

#ifndef EAPMETHODAPIS_H
#define EAPMETHODAPIS_H
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// structure that represents EAP packet on the wire
typedef struct tagEapPacket
{
   BYTE Code;
   BYTE Id;
   BYTE Length[2];
   BYTE Data[1];
   // Any additional data following the first byte. The length of
   // the data can be deduced by the length fields.
} EapPacket;

//
// EAP packet codes from EAP spec.
//
typedef
#ifdef __midl
   [v1_enum]
#endif

// possible values for 'code' in EAPPacket
enum tagEapCode
{
   EapCodeMinimum = 1,
   EapCodeRequest = 1,
   EapCodeResponse,
   EapCodeSuccess,
   EapCodeFailure,
   EapCodeMaximum = EapCodeFailure
} EapCode;

// This is a handle to an eap session owned by the individual eap methods.
typedef VOID* EAP_SESSION_HANDLE;

   
#ifdef __cplusplus
}
#endif

#endif // EAPMETHODAPIS_H

