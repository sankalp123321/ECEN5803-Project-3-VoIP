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

    kernSdk.h

Abstract:

    Kernel API's needed for Driver \ Server development

--*/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

HRESULT
CeOpenCallerBuffer(
    PVOID* ppDestMarshalled,
    PVOID  pSrcUnmarshalled,
    DWORD  cbSrc,
    DWORD  ArgumentDescriptor,
    BOOL   ForceDuplicate
    );

HRESULT
CeCloseCallerBuffer(
    PVOID  pDestMarshalled,
    PVOID  pSrcUnmarshalled,
    DWORD  cbSrc,
    DWORD  ArgumentDescriptor
    );

//
// In Kernel mode, this following flag can be or'd with ARG_XXX for ArgumentDescriptor in calls to
//      CeAllocAsynchronousBuffer
// to force the source and destination to be aliased instead of copy-in/copy-out.
//
// NOTE: the flag must be included in the calls to
//      CeFreeAsynchronousBuffer
//      CeFlushAsynchronousBuffer
// on the buffer you allocated with the flag.
//
// And the flag has no effect (ignored) if used in any other marshal helper APIs.
// 
#define MARSHAL_FORCE_ALIAS         0x80000000

HRESULT
CeAllocAsynchronousBuffer(
    PVOID* ppDestAsyncMarshalled,
    PVOID  pSrcSyncMarshalled,
    DWORD  cbSrc,
    DWORD  ArgumentDescriptor
    );

HRESULT
CeFreeAsynchronousBuffer(
    PVOID  pDestAsyncMarshalled,
    PVOID  pSrcSyncMarshalled,
    DWORD  cbSrc,
    DWORD  ArgumentDescriptor
    );

HRESULT
CeFlushAsynchronousBuffer(
    PVOID  pDestAsyncMarshalled,
    PVOID  pSrcSyncMarshalled,
    PVOID  pSrcUnmarshalled,
    DWORD  cbSrc,
    DWORD  ArgumentDescriptor
    );

HRESULT
CeAllocDuplicateBuffer(
    PVOID* ppDestDuplicate,
    PVOID  pSrcMarshalled,
    DWORD  cbSrc,
    DWORD  ArgumentDescriptor
    );

HRESULT
CeFreeDuplicateBuffer(
    PVOID  pDestDuplicate,
    PVOID  pSrcMarshalled,
    DWORD  cbSrc,
    DWORD  ArgumentDescriptor
    );


/** Flags for LockPages: */
#define LOCKFLAG_WRITE      0x001   // write access required
#define LOCKFLAG_QUERY_ONLY 0x002   // query only, page in but don't lock
#define LOCKFLAG_READ       0x004   // read access required (as opposed to page present but PAGE_NOACCESS)

BOOL LockPages(LPVOID lpvAddress, DWORD cbSize, PDWORD pPFNs, int fOptions);
BOOL UnlockPages(LPVOID lpvAddress, DWORD cbSize);

//
// GetCallerProcess is ambiguous for it can mean "direct caller" or "caller's VM". For
// now GetCallerProcess is now mapped to "GetDirectCallerProcessId". It's strongly
// recommended that you replace GetCallerProcess with GetDirectCallerProcessId or
// GetCallerVMProcessId
//
HANDLE GetCallerProcess(void);

DWORD GetCallerVMProcessId (void);
DWORD GetDirectCallerProcessId (void);

#ifdef __cplusplus
}
#endif


