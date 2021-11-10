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
THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
PARTICULAR PURPOSE.

Module Name:  

updatevalidator.h

Abstract:  

Function Prototypes for the PackageValidator functionality

Notes: 


--*/
#ifndef PKGVALIDATOR_H
#define PKGVALIDATOR_H

#include "PackageInfoAPI.h"

#ifdef __cplusplus
extern "C" {
#endif // __CPLUSPLUS


#define PARTITION_MASK      (NK_PACKAGE | IMGFS_PACKAGE)


#define HEAVY_NODE          0x7FFFFFFF
#define LIGHT_NODE          0x00000001
#define MAXULONG    0xffffffff  // winnt

typedef struct _BADPACKAGE {
    HRESULT hr;
    GUID        guid; // May or may not be valid. Depends on what was the source of the failure.
    VersionInfo Version; // The version of this package.
    ce::wstring wName;
}BADPACKAGE,*PBADPACKAGE;


typedef struct _GOODPACKAGE {
    DWORD       dwFlags; // Which partition does this belong to?
    HCAB        hCAB;    // The HCAB (CABAPI)
    VersionInfo Version; // The version of this package.
    ce::wstring wName; // Fully qualified name of the package.
    GUID        guid;
}GOODPACKAGE,*PGOODPACKAGE;

typedef struct _PKGORDER {
    DWORD       dwFlags; // File flags.
    DWORD       dwVBase; // Virtual base of the file
    DWORD       cbRawSize; // Size of the file in bytes.
    VersionInfo Version; // Tag for the Package Version
    ce::wstring wName; // name of the package or file.
    GUID        guid;     // GUID of the package that the file belongs to.
}PKGORDER,*PPKGORDER;

typedef PKGORDER const * PCPKGORDER;

typedef struct _VALIDATOROUTPUT{
    unsigned int cbTotalFreeSpace;
    unsigned int cbRequiredFreeSpace;
    ULONGLONG uLongErrorAccumulator;
}VALIDATOROUTPUT, *PVALIDATOROUTPUT;

void DisableSignatureChecks();

// Directory to obtain the baseline package information.
// Primarily here for testing purposes.
HRESULT SetBaselineDirectory(
            __in_z LPCTSTR szBaseline,
            __in  size_t cchBuffer = -1
            );

// Set the temp dir that the Validator and PkgInfo uses to extract CAB files
HRESULT SetTempDirectory(
            __in_z LPCTSTR szTemp
            );

// Set the persistent root, so the Validator can do backup space validation
HRESULT SetPersistentRoot(
            __in_z LPCTSTR szRoot
            );



HRESULT UpdateOrderFromFileList(
            __in  LPCTSTR szFileList,
            __deref_out ce::vector<GOODPACKAGE*>  **pGoodPackages,
            __deref_out ce::vector<BADPACKAGE*>   **pBadPackages,
            __deref_out_opt ce::vector<PKGORDER*> **pFiles
            );

HRESULT UpdateOrderFromPaths(
            __in  LPCTSTR szPackageRoot,
            __deref_out ce::vector<GOODPACKAGE*> **pGoodPackages, 
            __deref_out ce::vector<BADPACKAGE*>  **pBadPackages,
            __deref_out ce::vector<PKGORDER*>    **pFiles
            );

HRESULT UpdateOrderFromFileListEx(
            __in  LPCTSTR szFileList,
            __deref_out ce::vector<GOODPACKAGE*>  **pGoodPackages, 
            __deref_out ce::vector<BADPACKAGE*>   **pBadPackages,
            __deref_out_opt ce::vector<PKGORDER*> **pFiles,
            __deref_out VALIDATOROUTPUT           **ppValidatorOutput
            );

HRESULT UpdateOrderFromPathsEx(
            __in  LPCTSTR                         szPackageRoot,
            __deref_out ce::vector<GOODPACKAGE*> **pGoodPackages, 
            __deref_out ce::vector<BADPACKAGE*>  **pBadPackages,
            __deref_out ce::vector<PKGORDER*>    **pFiles,
            __deref_out VALIDATOROUTPUT          **ppValidatorOutput
            );

HRESULT CloseValidator();

#define UVDEBUGZONE(n) (1<<n)

#define UVZONE_INIT UVDEBUGZONE(0) // 0x00000001
#define UVZONE_MAJOR_ERROR UVDEBUGZONE(1)
#define UVZONE_03 UVDEBUGZONE(2)
#define UVZONE_04 UVDEBUGZONE(3)
#define UVZONE_05 UVDEBUGZONE(4)
#define UVZONE_06 UVDEBUGZONE(5)
#define UVZONE_FUNCRET UVDEBUGZONE(6)
#define UVRESULTS_GEN UVDEBUGZONE(7)

#define UVZONE_FILEGROUP UVDEBUGZONE(9)
#define UVZONE_GRAPHINFO UVDEBUGZONE(10)
#define UVZONE_PATHINFO UVDEBUGZONE(11)
#define UVZONE_FUNCTION UVDEBUGZONE(13)
#define UVZONE_WARNING UVDEBUGZONE(14)
#define UVZONE_ERROR UVDEBUGZONE(15)

#define WARNERR (UVZONE_ERROR | UVZONE_WARNING | UVZONE_MAJOR_ERROR)


void SetLoggingFlags(
    __in  DWORD dwFlags
    );

#define LOGERRORCODEBASE 0x0000000000000001
#define LOGERRORCODES(n) (LOGERRORCODEBASE<<n)

#define LOG_E_INVALID_SIGNATURE             LOGERRORCODES(1)
#define LOG_E_MISSING_CERTIFICATE           LOGERRORCODES(2)
#define LOG_E_MISSING_SIGNATURE             LOGERRORCODES(3)
#define LOG_E_GENERAL_FILE_COLLISION        LOGERRORCODES(4)
#define LOG_E_INCORRECT_VERSION_DEP         LOGERRORCODES(5)
#define LOG_E_DEPENDENCY_ON_DELETED_PKG     LOGERRORCODES(6)
#define LOG_E_MISSING_DEPENDENCY            LOGERRORCODES(7)
#define LOG_E_NO_PACKAGES                   LOGERRORCODES(8)
#define LOG_E_OUTOFMEMORY                   LOGERRORCODES(9)
#define LOG_E_INSUFFICIENT_SPACE            LOGERRORCODES(10)
#define LOG_E_RESERVED_FILE_NAME_COLLISION  LOGERRORCODES(11)
#define LOG_E_NO_RESERVED_SECTION_PRESENT   LOGERRORCODES(12)
#define LOG_E_UNKNOWN_RESERVED_SECTION      LOGERRORCODES(13)
#define LOG_E_INCORRECT_DELETE_PKG          LOGERRORCODES(14)
#define LOG_E_INVALID_DELETE_PKG            LOGERRORCODES(15)
#define LOG_E_NONSINGULAR_ULDR_UPDATE       LOGERRORCODES(16)
#define LOG_E_INVALID_DELETE_AUTHORITY      LOGERRORCODES(17)
#define LOG_E_UNSUPPORTED_COMPRESSION       LOGERRORCODES(18)
#define LOG_E_FATAL_FILE_COLLISION          LOGERRORCODES(19)
#define LOG_E_INVALID_DSM                   LOGERRORCODES(20)
#define LOG_E_GENERAL_GRAPH_FAILURE         LOGERRORCODES(21)
#define LOG_E_INVALID_CPU                   LOGERRORCODES(22)
#define LOG_E_NOT_CAB                       LOGERRORCODES(23)
#define LOG_E_INVALID_DELETE_PATH           LOGERRORCODES(24)
#define LOG_E_INVALIDARG                    LOGERRORCODES(25)
#define LOG_E_MISSING_DSM                   LOGERRORCODES(26) 
#define LOG_E_MISSING_DEFAULT_CERT_STORE    LOGERRORCODES(27)
#define LOG_E_NO_CERT_IN_BASE_PKG           LOGERRORCODES(28)
                                            
#if 0
HRESULT UpdateOrder(
    LPCTSTR                         szPackageRoot, // Path(s) to the packages to be processed.
    ce::vector<GOODPACKAGE*>        **pGoodPackages, // vector list of the packages that passed process. In install order.
    ce::vector<BADPACKAGE*>         **pBadPackages, // vector list of the packages that failed processing. With HRESULT for cause failure.
    ce::vector<PKGORDER*>           **pFiles              // vector list of the files to install, in install order.
  );
#endif 

// Defines for package flags
#define PKG_VALID                0x00000000
#define PKG_BAD_SIGNATURE       0x00000001
#define PKG_BAD_DEPENDENCY      0x00000002
#define PKG_BAD_FILEENTRY       0x00000004
#define PKG_REDUNDANT_UPDATE    0x00000008
#define PKG_BAD_CAB_HEADER      0x00000010
#define PKG_MISSING_DSM         0x00000020
#define PKG_INVALID_DSM         0x00000040
#define PKG_GENERAL_CERT_ERROR 0x00000080
#define PKG_BAD_CAB_STRUCTURE  0x00000100
#define PKG_INVALID_BASE_DIR    0x00000200

#ifdef __cplusplus
}
#endif // __CPLUSPLUS

#endif // PKGVALIDATOR_H

