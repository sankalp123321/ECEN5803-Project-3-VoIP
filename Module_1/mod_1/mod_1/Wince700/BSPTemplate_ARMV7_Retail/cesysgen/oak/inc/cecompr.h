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

// Generic CE Compressor/Decompressor DLL exports

// typedefs for memory alloc/free functions to be provided by the caller
typedef LPVOID ( *PFNALLOC ) ( DWORD dwBytes );
typedef VOID ( *PFNFREE ) ( LPVOID pMem );

// compressor/decompressor context pseudo-handles
#define HCOMPRESS    DWORD
#define HDECOMPRESS  DWORD

#define INVALID_HCOMPRESS    0
#define INVALID_HDECOMPRESS  0

// encode/decode error return values
#define COMPRESS_FAILED	    0xFFFFFFFF
#define DECOMPRESS_FAILED	0xFFFFFFFF

// prefixes for dll exports
#define LZX_COMPRESSOR_PREFIX	  L"LZX"
#define XPRESS_COMPRESSOR_PREFIX  L"XPR"

// typedefs for dll exports

typedef HCOMPRESS ( *PFNCOMPRESS_OPEN ) ( DWORD dwWindowSize, DWORD dwMaxBlockSize, PFNALLOC pfnAlloc, PFNFREE pfnFree, PVOID pReserved );
typedef DWORD ( *PFNCOMPRESS_ENCODE ) ( HCOMPRESS hContext, PVOID pCompData, DWORD dwCompBytes, PVOID pOrigData, DWORD dwOrigBytes );
typedef BOOL ( *PFNCOMPRESS_CLOSE ) ( HCOMPRESS hContext );

typedef HDECOMPRESS ( *PFNDECOMPRESS_OPEN ) ( DWORD dwWindowSize, DWORD dwMaxBlockSize, PFNALLOC pfnAlloc, PFNFREE pfnFree, PVOID pReserved );
typedef DWORD ( *PFNDECOMPRESS_DECODE ) ( HDECOMPRESS hContext, PVOID pOrigData, DWORD dwOrigBytes, PVOID pCompData, DWORD dwCompBytes );
typedef BOOL ( *PFNDECOMPRESS_CLOSE ) ( HDECOMPRESS hContext );

#ifdef __cplusplus
extern "C" {
#endif

// @CESYSGEN IF CE_MODULES_COMPRESS
// @CESYSGEN IF CECOMPRESS_COMPONENTS_LZX
// @CESYSGEN ENDIF 
// @CESYSGEN IF CECOMPRESS_COMPONENTS_XPRESS
// @CESYSGEN ENDIF
// @CESYSGEN ENDIF

#ifdef __cplusplus
}; // extern "C"
#endif
