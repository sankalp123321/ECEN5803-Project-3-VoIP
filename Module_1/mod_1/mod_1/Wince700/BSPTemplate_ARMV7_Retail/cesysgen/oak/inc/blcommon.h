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
    blcommon.h
    
Abstract:
    Bootloader common header file. This file contains all the type and
    function definitions used by boot loader.
    
Functions:


Notes: 

--*/
#ifndef _BOOTLOADER_MAIN_H_
#define _BOOTLOADER_MAIN_H_

#include <pehdr.h>
#include <romldr.h>

/////////////////////////////////////////////////////////////////
//
//  Platform independent functions 
//
//  BootloaderMain - entry from bootloader (called after StartUp)
//
/////////////////////////////////////////////////////////////////
void BootloaderMain (void);
BOOL CheckSignature(DWORD dwStoreBase, DWORD dwRunBase, BOOL fTestSignature,
                      OPTIONAL IN BYTE* pbDeviceMakeData, OPTIONAL IN DWORD dwDeviceMakeSize,
                      OPTIONAL IN BYTE* pbDeviceModelData, OPTIONAL IN DWORD dwDeviceModelSize);
/////////////////////////////////////////////////////////////////
//
//  Platform dependent functions, provided by OEM
//
/////////////////////////////////////////////////////////////////

//
// Main control flow of bootloader
//      (1) OEMDebugInit        -- first function called, provide debug support
//      (2) OEMPlatformInit     -- platform initialization
//      (3) OEMPreDownload      -- called before download
//      (4) OEMLaunch           -- final function called, jump to NK

// first function called when bootloader started. OEM should
// initialize debug transport during this call.
BOOL OEMDebugInit (void);

// OEM platform initialization function. OEM should perform platform
// specific initialization like clock, driver, and transport, in this
// function.
BOOL OEMPlatformInit (void);

// call before downloading image. Can be customized to ask user feedback.
DWORD OEMPreDownload (void);
// possible return value from OEMPreDownload
#define BL_DOWNLOAD     0
#define BL_JUMP         1
#define BL_ERROR        -1

// Final function called to launch the image, never returned
//  dwImageStart  - start address of image
//  dwImageLength - length of the image in bytes
//  dwLuanchAddr  - launch address (first instruction of the image)
//  pRomHdr       -
void OEMLaunch (DWORD dwImageStart, DWORD dwImageLength, DWORD dwLaunchAddr, const ROMHDR *pRomHdr);

//
// Download related functions
//
BOOL OEMReadData (DWORD cbData, LPBYTE pbData);
void OEMShowProgress (DWORD dwPacketNum);

//
// Flash related functions:
//      The bootloader try to erase flash while downloading to speed up 
//      the download process. It'll call OEMStartEraseFlash if a flash
//      image is detected. And continue calling ContinueEraseFlash in the
//      course of image download. It'll call OEMFinishEraseFlash when
//      the image download is complete. And OEMWriteFlash aferward.
//
//      If speed is not a concern, OEM can stub StartErase, ContinueErase, 
//      and FinishErase function, then performs all the operations in WriteFlash.
//
BOOL OEMIsFlashAddr (DWORD dwAddr);
BOOL OEMStartEraseFlash (DWORD dwStartAddr, DWORD dwLength);
void OEMContinueEraseFlash (void);
BOOL OEMFinishEraseFlash (void);
BOOL OEMWriteFlash (DWORD dwStartAddr, DWORD dwLength);

//
// Memory mapping related functions
//
LPBYTE OEMMapMemAddr (DWORD dwImageStart, DWORD dwAddr);

//
// Debug related functions
//
void OEMWriteDebugByte (UCHAR ch);

//
// timer releted functions
//
DWORD OEMKitlGetSecs (void);


// optional OEM functions
typedef BOOL (* PFN_OEMVERIFYMEMORY) (DWORD dwStartAddr, DWORD dwLength);
typedef BOOL (* PFN_OEMREPORTERROR) (DWORD dwReason, DWORD dwReserved);
typedef BOOL (* PFN_OEMCHECKSIGNATURE) (DWORD dwImageStart, DWORD dwROMOffset, DWORD dwLaunchAddr, BOOL bDownloaded);

extern PFN_OEMVERIFYMEMORY   g_pOEMVerifyMemory;
extern PFN_OEMCHECKSIGNATURE g_pOEMCheckSignature;

//
// function to report error back to OEM before spinning
//
#define BLERR_KERNELRELOCATE    ((DWORD)(-1))  // KernelRelocate failed
#define BLERR_DBGINIT           ((DWORD)(-2))  // OEMDebugInit failed
#define BLERR_PLATINIT          ((DWORD)(-3))  // OEMPlatformInit failed
#define BLERR_CORRUPTED_DATA    ((DWORD)(-4))  // Downloaded data corrupted
#define BLERR_SIGNATURE         ((DWORD)(-5))  // Invalid BIN file signature
#define BLERR_INVALIDCMD        ((DWORD)(-6))  // OEMPreDownload return invalid value
#define BLERR_CHECKSUM          ((DWORD)(-7))  // package checksum error
#define BLERR_MAGIC             ((DWORD)(-8))  // not a BIN file
#define BLERR_OEMVERIFY         ((DWORD)(-9))  // OEMVerifyMemory failed
#define BLERR_FLASHADDR         ((DWORD)(-10)) // invalid Flash Address
#define BLERR_FLASH_ERASE       ((DWORD)(-11)) // FlashErase failed
#define BLERR_FLASH_WRITE       ((DWORD)(-12)) // FlashWrite failed
#define BLERR_CAT_SIGNATURE     ((DWORD)(-13)) // Failed catalog file signature check

extern PFN_OEMREPORTERROR  g_pOEMReportError;

// The following code supports multiple file and .nb0 file downloads.
//
//////////////////////////////////////////////////////////////////////////////
#define BL_MAX_BIN_REGIONS  25       // Maximum number of files we'll download
                                     // in one session. 

// Download file info (start address, length, filename, etc.).
typedef struct _RegionInfo_
{
    DWORD dwRegionStart;
    DWORD dwRegionLength;
    CHAR  szFileName[MAX_PATH];
} RegionInfo, *PRegionInfo;

// Download manifest.
typedef struct _MultiBINInfo_
{
    DWORD      dwNumRegions;         // Number of files to be downloaded.
    RegionInfo Region[BL_MAX_BIN_REGIONS];
} MultiBINInfo, *PMultiBINInfo;

typedef MultiBINInfo DownloadManifest;
typedef MultiBINInfo *PDownloadManifest;

typedef enum _BL_IMAGE_TYPE
{
    BL_IMAGE_TYPE_MANIFEST = 0,
    BL_IMAGE_TYPE_BIN,
    BL_IMAGE_TYPE_NB0,
    BL_IMAGE_TYPE_SIGNED_BIN,
    BL_IMAGE_TYPE_SIGNED_NB0,
    BL_IMAGE_TYPE_MULTIXIP,
    BL_IMAGE_TYPE_UNKNOWN,
    BL_IMAGE_TYPE_NOT_FOUND,
} BL_IMAGE_TYPE;


// Function pointer to OEM code for mutliple file and .nb0 file notifications.
typedef void (* PFN_OEMMULTIBINNOTIFY) (PMultiBINInfo pInfo);
extern PFN_OEMMULTIBINNOTIFY g_pOEMMultiBINNotify;
//////////////////////////////////////////////////////////////////////////////

#endif // _BOOTLOADER_MAIN_H_
