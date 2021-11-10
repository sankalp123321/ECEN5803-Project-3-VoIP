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

    fsioctl.h

Abstract:

    This module contains the constant, type and structure definitions for
    WINCE file system control codes.

Notes: 


--*/
#include <winioctl.h>

#ifndef _FSIOCTL_H_
#define _FSIOCTL_H_

////////////////////////////////////////////////////////////////////////////////////////
//
// Last FSIOCTL code used: 56 (FSCTL_GET_LOGICAL_SECTOR_LIST)
//
// NOTE: Make sure you update both fsioctl.h and pfsioctl.h for the last FSIOCTL used
//       if adding new FSIOCTL code.
//
////////////////////////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
extern "C" {
#endif

//
// The following fsctl codes are for object store file system
//
#define FSCTL_NOTIFY_AFS_MOUNT_COMPLETE \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 9, METHOD_BUFFERED, FILE_ANY_ACCESS)

//
// The following fsctl code is for copy external
//
#define FSCTL_COPY_EXTERNAL_START \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 19, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_COPY_EXTERNAL_COMPLETE \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 20, METHOD_BUFFERED, FILE_ANY_ACCESS)

#ifndef UNDER_NT
//
// fsctl codes defined elsewhere in the NT sdk
//

//
// The following fsctl codes are for file compression
//
#define FSCTL_GET_COMPRESSION \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 15, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SET_COMPRESSION \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 16, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA)

//
// The following fsctl codes for file encryption
//
#define FSCTL_SET_ENCRYPTION \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 53,  METHOD_NEITHER, FILE_ANY_ACCESS) // ENCRYPTION_BUFFER, DECRYPTION_STATUS_BUFFER

#define FSCTL_REFRESH_ENCRYPTION_POLICY \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 54,  METHOD_NEITHER, FILE_ANY_ACCESS) 

#define FSCTL_LOAD_ENCRYPTION_POLICY \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 55,  METHOD_NEITHER, FILE_ANY_ACCESS) 

#define FSCTL_ENCRYPTION_POLICY_CONVERSION \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 56,  METHOD_NEITHER, FILE_ANY_ACCESS)

//
// The following fsctl codes are for sparse files
//
#define FSCTL_SET_SPARSE \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 49, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_SET_ZERO_DATA \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 50, METHOD_BUFFERED, FILE_WRITE_DATA) // FILE_ZERO_DATA_INFORMATION,
#define FSCTL_QUERY_ALLOCATED_RANGES \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 51,  METHOD_NEITHER, FILE_READ_DATA)  // FILE_ALLOCATED_RANGE_BUFFER, FILE_ALLOCATED_RANGE_BUFFER
#endif // !UNDER_NT

//
// The following fsctl codes are for extended flags
//
#define FSCTL_SET_EXTENDED_FLAGS \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 13, METHOD_BUFFERED, FILE_ANY_ACCESS)

// 
// The following fsctl codes are for file streams
//
#define FSCTL_GET_STREAM_INFORMATION \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 14, METHOD_BUFFERED, FILE_READ_DATA)

//
// The following fsctl codes are for mounted file system volumes
// 
#define FSCTL_REFRESH_VOLUME \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 31, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_GET_VOLUME_INFO \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 32, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_FLUSH_BUFFERS \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 33, METHOD_BUFFERED, FILE_ANY_ACCESS)
// Legacy typo
#define FSSCTL_FLUSH_BUFFERS FSCTL_FLUSH_BUFFERS

#define FSCTL_SET_SIMULATION_MODE \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 34, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_GET_REGISTRY_INFO \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 35, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_SET_FILE_CACHE \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 36, METHOD_BUFFERED, FILE_ANY_ACCESS)

//
// FSCTL_READ_OR_WRITE_SECURITY_DESCRIPTOR 
//
// Associate a new, persistent security descriptor with a file or directory
// on a file system, or return the existing security descriptor associated with
// the specified file or directory. If writing a new security descriptor, the
// existing security descriptor is replaced.
//
// lpInBuffer
// 
//     [in]  If writing a new security descriptor: a pointer to a buffer
//           containing the new descriptor. 
//          
//           If reading the existing security descriptor: set to NULL.
//
//           If querying the existing security descriptor size: set to NULL.
//
// nInBufferSize
// 
//     [in]  Set to the size of the buffer referenced by lpInBuffer or 0 if
//           lpInBuffer is NULL.
//     
// lpOutBuffer
//
//     [out] If writing a new security descriptor: set to NULL.
//          
//           If reading the existing security descriptor: a buffer to receive
//           the existing descriptor data.
//
//           If querying the existing security descriptor size: set to NULL.
//
// nOutBufferSize
// 
//     [in] Set to the size of the buffer referenced by lpOutBuffer or 0
//          if lpOutBuffer is NULL.
//     
// lpBytesReturned
//
//     [out] If writing a new security descriptor: set to NULL.
//              
//           If reading the existing security descriptor: a pointer to a DWORD
//           to receive the total number of bytes returned in lpOutBuffer.
//
//           If querying the size of the existing security descriptor: a
//           pointer to a DWORD to receive the size of the existing security
//           descriptor.
//           
//     [out] Pointer to a DWORD to receive the total number of bytes returned
//           in lpOutBuffer. If lpOutBuffer is NULL and nOutBufferSize is 0,
//           receives the size, in bytes, of the security descriptor.
//
// Remarks:
//
//     Returns TRUE on success, FALSE on failure. Use GetLastError to retrieve
//     extended error information on failure:
//
//         ERROR_NOT_SUPPORTED if the file system does not support persistent 
//         security descriptors.
//
//         ERROR_FILE_NOT_FOUND if the named file or directory does not exist
//         on the file system.
//
//         ERROR_NO_SECURITY_ON_OBJECT if the file or directory exists but has
//         no associated security descriptor.
//
//         ERROR_INSUFFICIENT_BUFFER if the buffer referenced by lpOutBuffer is
//         not large enough to contain the entire security descriptor. In this
//         case, the actual required size will be returned in lpBytesReturned.
//

#define FSCTL_READ_OR_WRITE_SECURITY_DESCRIPTOR \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 42, METHOD_BUFFERED, FILE_ANY_ACCESS)

// FSCTL code passed to an FSD's FSD_FsIoControl export when a
// media change event occurs.
//
#define FSCTL_STORAGE_MEDIA_CHANGE_EVENT \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 43, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_DISABLE_COMMIT_TRANSACTIONS \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 44, METHOD_BUFFERED, FILE_ANY_ACCESS)

// FSCTL to get or set reboot flags, which specify an action to perform
// when the file system is mounted after reboot.  If lpInBuffer is set
// and points to a DWORD, then those flags are set.  If lpOutBuffer is
// set and points to a DWORD, then those flags are returned.
//
#define FSCTL_GET_OR_SET_REBOOT_FLAGS \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 45, METHOD_BUFFERED, FILE_ANY_ACCESS)

// FSCTL to retrieve Device Provisioning data.  The data is in the 
// DPP partititon.  lpInBuffer should point to the GUID of the particular
// provisioning data that is to be retrieved.    
// 
#define FSCTL_QUERY_DEVICE_PROVISIONING_DATA \
    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 46, METHOD_BUFFERED, FILE_ANY_ACCESS)
// 
// Specified so that file system drivers can implement their own ioctl's without
// fear of overlapping with OS defined codes.
//
#define FSCTL_USER_START 0x7E0
#define FSCTL_USER_END   0x7FF
#define FSCTL_USER(Function) \
    CTL_CODE( FILE_DEVICE_FILE_SYSTEM, FSCTL_USER_START+Function, METHOD_BUFFERED, FILE_ANY_ACCESS)

// 
// Flags for set extended flags
//
#define CE_FILE_FLAG_TRANS_DATA             0x1
#define CE_FILE_FLAG_DISABLE_WRITE_TIME     0x2
// Setting of this flag to RELFSD driver disables open of new files in "release" directory.
#define CE_FILE_FLAG_DISABLE_RELFSD         0x4

//
// Structures for copy external
//
#define COPY_EXTERNAL_READ  1
#define COPY_EXTERNAL_WRITE 2 

typedef struct _FILE_COPY_EXTERNAL {
    DWORD cbSize; 
    DWORD dwDirection;
    PVOID pUserData;
    DWORD cbUserDataSize;
    TCHAR szCancelEventName[MAX_PATH];
} FILE_COPY_EXTERNAL, *PFILE_COPY_EXTERNAL;    

#ifndef UNDER_NT
//
// fsctl structures defined elsewhere in the NT sdk
//

//
// Structure for FSCTL_SET_ZERO_DATA
//

typedef struct _FILE_ZERO_DATA_INFORMATION {

    LARGE_INTEGER FileOffset;
    LARGE_INTEGER BeyondFinalZero;

} FILE_ZERO_DATA_INFORMATION, *PFILE_ZERO_DATA_INFORMATION;
//
// Structures for FSCTL_SET_ENCRYPTION
//

//
//  The input buffer to set encryption indicates whether we are to encrypt/decrypt a file
//  or an individual stream.
//

typedef struct _ENCRYPTION_BUFFER {

    DWORD EncryptionOperation;
    BYTE  Private[1];

} ENCRYPTION_BUFFER, *PENCRYPTION_BUFFER;

#define FILE_SET_ENCRYPTION         0x00000001
#define FILE_CLEAR_ENCRYPTION       0x00000002
#define STREAM_SET_ENCRYPTION       0x00000003
#define STREAM_CLEAR_ENCRYPTION     0x00000004

#define MAXIMUM_ENCRYPTION_VALUE    0x00000004

//
// Structure for FSCTL_QUERY_ALLOCATED_RANGES
//

//
// Querying the allocated ranges requires an output buffer to store the
// allocated ranges and an input buffer to specify the range to query.
// The input buffer contains a single entry, the output buffer is an
// array of the following structure.
//

typedef struct _FILE_ALLOCATED_RANGE_BUFFER {

    LARGE_INTEGER FileOffset;
    LARGE_INTEGER Length;

} FILE_ALLOCATED_RANGE_BUFFER, *PFILE_ALLOCATED_RANGE_BUFFER;
#endif // !UNDER_NT

//
// Structure for FSCTL_NOTIFY_AFS_MOUNT_COMPLETE
//
typedef struct _AFS_MOUNT_INFO {

    DWORD cbSize;
    int iAFSIndex;
    DWORD dwVolume;
    DWORD dwMountFlags;
    
} AFS_MOUNT_INFO, *PAFS_MOUNT_INFO;


//
// Structure for FSCTL_SET_SIMULATION_MODE
//
typedef struct _FS_SIMULATION_MODE_INFO {
    
    DWORD cbSize; // set to sizeof(FS_SIMULATION_MODE_INFO)
    DWORD dwSimulationMode; // set to 0 to disable, 1 to enable

} FS_SIMULATION_MODE_INFO, *PFS_SIMULATION_MODE_INFO;


//
// Structure for FSCTL_SET_FILE_CACHE
//
typedef enum _FILE_CACHE_INFO_LEVELS {

    FileCacheEnableStandard,
    FileCacheDiscardStandard,
    FileCacheDisableStandard
        
} FILE_CACHE_INFO_LEVELS;

typedef struct _FILE_CACHE_INFO {
    
    // set fInfoLevelId to FileCacheEnableStandard or FileCacheDisableStandard
    FILE_CACHE_INFO_LEVELS fInfoLevelId; 

} FILE_CACHE_INFO, *PFILE_CACHE_INFO;

//
// Structure and defines for FSCTL_GET_STREAM_INFORMATION
//

//
// CE Attributes for FSCTL_GET_STREAM_INFORMATION 
//
#define CE_FILE_ATTRIBUTE_ENCRYPTED     0x1

// Information levels supported by FSCTL_GET_STREAM_INFORMATION
//
typedef enum _FILE_STREAM_INFO_LEVELS {

    FileStreamInfoStandard

} FILE_STREAM_INFO_LEVELS;

// Standard file stream info structure. This structure is associated with 
// the FileStreamInfoStandard info level.
//
typedef struct _FILE_STREAM_INFO_STANDARD {

    DWORD dwAttributes;                 // standard Win32 file attributes
    DWORD dwExtendedAttributes;         // extended CE file attributes
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    LARGE_INTEGER logicalStreamSize;    // reported size
    LARGE_INTEGER physicalStreamSize;   // physical size on disk

} FILE_STREAM_INFO_STANDARD, *PFILE_STREAM_INFO_STANDARD;

// File stream info structure passed to FSCTL_GET_STREAM_INFORMATION
// 

#pragma warning (push)
#pragma warning (disable:4201) // disabling warning regarding unnamed structs/unions
typedef struct _FILE_STREAM_INFO {

    FILE_STREAM_INFO_LEVELS fInfoLevelId;
    union {
        FILE_STREAM_INFO_STANDARD infoStandard;
        // additional info level structures go here
    };

} FILE_STREAM_INFO, *PFILE_STREAM_INFO;
#pragma warning (pop)

// Input buffer for FSCTL_STORAGE_MEDIA_CHANGE_EVENT is a pointer
// to a STORAGE_MEDIA_CHANGE_EVENT_TYPE value.
//
typedef enum _STORAGE_MEDIA_CHANGE_EVENT_TYPE {

    StorageMediaChangeEventDetached,
    StorageMediaChangeEventAttached

} STORAGE_MEDIA_CHANGE_EVENT_TYPE;

// Output buffer for FSCTL_STORAGE_MEDIA_CHANGE_EVENT is a
// pointer to a STORAGE_MEDIA_ATTACH_RESULT value when the 
// input value is StorageMediaAttached. The FSD should set the
// output value to StorageMediaUnchanged if it determines the
// media to be the same as it was before the eject notification
// or return StorageMediaChanged if the media has not changed.
//
typedef enum _STORAGE_MEDIA_ATTACH_RESULT {

    StorageMediaAttachResultUnchanged,
    StorageMediaAttachResultChanged

} STORAGE_MEDIA_ATTACH_RESULT;

// Reboot flags for FSCTL_GET_OR_SET_REBOOT_FLAGS
//
typedef enum _FILE_SYSTEM_REBOOT_FLAGS {

    RebootFlagCleanVolume =     0x1,
    RebootFlagFormatVolume =    0x2,
    RebootFlagSecureDelete =    0x4

} FILE_SYSTEM_REBOOT_FLAGS;

#ifdef __cplusplus
}
#endif

#endif // _FSIOCTL_H_
