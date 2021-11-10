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
//------------------------------------------------------------------------------
//
//  THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
//  ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
//  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
//  PARTICULAR PURPOSE.
//
//------------------------------------------------------------------------------
//
//  Module Name:
//
//      celog.h
//
//  Abstract:
//
//      Interface to the CELog event logging infrastructure.
//
//------------------------------------------------------------------------------
#ifndef __CELOG_H__
#define __CELOG_H__

#ifdef __cplusplus
extern "C" {
#endif

#pragma warning(push)
#pragma warning(disable:4200) // nonstandard extensions warning on zero-size array
#pragma warning(disable:4201) // nonstandard extensions warning on unnamed struct/union

// This version number is used to denote significant revisions to the CeLog
// log file format, so that log file parsing tools can distinguish between logs
// from different OS versions.
#define CELOG_VERSION 3
#include <evntprov.h>
#include <evntcons.h>
#include <evntrace.h>

//------------------------------------------------------------------------------
// Common header for all event data
//------------------------------------------------------------------------------

#pragma warning(push)
#pragma warning(disable:4214)  
// Header for CELOG_VERSION=1 & 2
typedef struct  __CEL_HEADER {
    DWORD   Length : 16;                // Length in bytes (excluding 32 bit header and optional 32 bit timestamp)
    DWORD   ID : 14;                    // CELID - See Below
    DWORD   Reserved : 1;               // Reserved - must be zero
    DWORD   fTimeStamp : 1;             // Is there a 32 bit TimeStamp following the header?
} CEL_HEADER, *PCEL_HEADER;

// Header for CELOG_VERSION=3
typedef struct {
    DWORD   Length : 12;                // Length in bytes (excluding 32 bit header and optional 32 bit timestamp)
    DWORD   CPU : 4;                    // CPU#, if <= 16 CPUs
    DWORD   ID : 14;                    // CELID - See Below
    DWORD   Reserved : 1;               // Reserved - must be zero
    DWORD   fTimeStamp : 1;             // Is there a 32 bit TimeStamp following the header?
} CEL_HEADER_V3, *PCEL_HEADER_V3;
#pragma warning(pop)

#define CEL_HEADER_TIMESTAMP   0x80000000
#define CEL_HEADER_CPU_MASK    0x0000F000
#define CEL_HEADER_LENGTH_MASK 0x00000FFF
#define CEL_HEADER_ID_MASK     0x3FFF0000


//-------------------------------------------------------
// Critical Section - Only logged if we block
//
// hCS for each of these is actually the pointer to the CS
#define CELID_CS_INIT                   11
typedef struct  __CEL_CRITSEC_INIT {
    HANDLE  hCS;
} CEL_CRITSEC_INIT, *PCEL_CRITSEC_INIT;

#define CELID_CS_DELETE                 12
typedef struct  __CEL_CRITSEC_DELETE {
    HANDLE  hCS;
} CEL_CRITSEC_DELETE, *PCEL_CRITSEC_DELETE;

#define CELID_CS_ENTER                  1
typedef struct  __CEL_CRITSEC_ENTER {
    HANDLE  hCS;
    HANDLE  hOwnerThread;               // If CS already held, who owns it?
} CEL_CRITSEC_ENTER, *PCEL_CRITSEC_ENTER;

#define CELID_CS_LEAVE                  2
typedef struct  __CEL_CRITSEC_LEAVE {
    HANDLE  hCS;
    HANDLE  hOwnerThread;               // Who gets the CS next?
} CEL_CRITSEC_LEAVE, *PCEL_CRITSEC_LEAVE;


//-------------------------------------------------------
// Events
//
#define CELID_EVENT_CREATE              3
#pragma warning(push)
#pragma warning(disable:4214)  
typedef struct  __CEL_EVENT_CREATE {
    HANDLE  hEvent;
    DWORD   fManual       : 1;          // Boolean - Manual Flag
    DWORD   fInitialState : 1;          // Boolean - Initial State
    DWORD   fCreate       : 1;          // Boolean - Is it a create or just an open?
    DWORD   dwReserved    : 29;
    WCHAR   szName[0];                  // OPTIONAL Name (length inferred from entry length)
} CEL_EVENT_CREATE, *PCEL_EVENT_CREATE;
#pragma warning(pop)

#define CELID_EVENT_SET                 4
typedef struct  __CEL_EVENT_SET {
    HANDLE  hEvent;
} CEL_EVENT_SET, *PCEL_EVENT_SET;

#define CELID_EVENT_RESET               5
typedef struct  __CEL_EVENT_RESET {
    HANDLE  hEvent;
} CEL_EVENT_RESET, *PCEL_EVENT_RESET;

#define CELID_EVENT_PULSE               6
typedef struct  __CEL_EVENT_PULSE {
    HANDLE  hEvent;
} CEL_EVENT_PULSE, *PCEL_EVENT_PULSE;

#define CELID_EVENT_DELETE              8
typedef struct  __CEL_EVENT_DELETE {
    HANDLE  hEvent;
} CEL_EVENT_DELETE, *PCEL_EVENT_DELETE;


//-------------------------------------------------------
// WaitForSingleObject / WaitForMultipleObjects
//

// NOTE: currently calls to WaitForSingleObject are
// logged as calls to WaitForMultipleObjects because
// WaitForSingleObject calls WaitForMultipleObjects.

#define CELID_WAIT_MULTI                9
#pragma warning(push)
#pragma warning(disable:4214)  
typedef struct  __CEL_WAIT_MULTI {
    DWORD   dwTimeout;
    DWORD   fWaitAll   : 1;
    DWORD   dwReserved : 31;
    HANDLE  hHandles[0];                // List of handles, count indicated by length
} CEL_WAIT_MULTI, *PCEL_WAIT_MULTI;     // Max # handles = MAXIMUM_WAIT_OBJECTS
#pragma warning(pop)


//-------------------------------------------------------
// Sleep
//
#define CELID_SLEEP                     10
typedef struct  __CEL_SLEEP {
    DWORD   dwTimeout;
} CEL_SLEEP, *PCEL_SLEEP;


//-------------------------------------------------------
// Semaphores
//
#define CELID_SEM_CREATE                15
typedef struct  __CEL_SEM_CREATE {
    HANDLE  hSem;
    DWORD   dwInitCount;
    DWORD   dwMaxCount;
    WCHAR   szName[0];                  // OPTIONAL Name (length inferred from entry length)
} CEL_SEM_CREATE, *PCEL_SEM_CREATE;

#define CELID_SEM_RELEASE               16
typedef struct  __CEL_SEM_RELEASE {
    HANDLE  hSem;
    DWORD   dwReleaseCount;
    DWORD   dwPreviousCount;
} CEL_SEM_RELEASE, *PCEL_SEM_RELEASE;

#define CELID_SEM_DELETE                18
typedef struct  __CEL_SEM_DELETE {
    HANDLE  hSem;
} CEL_SEM_DELETE, *PCEL_SEM_DELETE;


//-------------------------------------------------------
// Heap
//
#define CELID_HEAP_CREATE               25
typedef struct  __CEL_HEAP_CREATE {
    DWORD   dwOptions;
    DWORD   dwInitSize;
    DWORD   dwMaxSize;
    HANDLE  hHeap;
    DWORD   dwTID;
    DWORD   dwPID;
} CEL_HEAP_CREATE, *PCEL_HEAP_CREATE;

#define CELID_HEAP_ALLOC                26
typedef struct  __CEL_HEAP_ALLOC {
    HANDLE  hHeap;
    DWORD   dwFlags;
    DWORD   dwBytes;
    DWORD   lpMem;
    DWORD   dwTID;
    DWORD   dwPID;
    DWORD   dwCallerPID;
    DWORD   adwStackTrace[0];
} CEL_HEAP_ALLOC, *PCEL_HEAP_ALLOC;

#define CELID_HEAP_REALLOC              27
typedef struct  __CEL_HEAP_REALLOC {
    HANDLE  hHeap;
    DWORD   dwFlags;
    DWORD   dwBytes;
    DWORD   lpMemOld;
    DWORD   lpMem;
    DWORD   dwTID;
    DWORD   dwPID;
    DWORD   dwCallerPID;
    DWORD   adwStackTrace[0];
} CEL_HEAP_REALLOC, *PCEL_HEAP_REALLOC;

#define CELID_HEAP_FREE                 28
typedef struct  __CEL_HEAP_FREE {
    HANDLE  hHeap;
    DWORD   dwFlags;
    DWORD   lpMem;
    DWORD   dwTID;
    DWORD   dwPID;
    DWORD   dwCallerPID;
    DWORD   adwStackTrace[0];
} CEL_HEAP_FREE, *PCEL_HEAP_FREE;

#define CELID_HEAP_DESTROY              29
typedef struct  __CEL_HEAP_DESTROY {
    HANDLE  hHeap;
    DWORD   dwTID;
    DWORD   dwPID;
} CEL_HEAP_DESTROY, *PCEL_HEAP_DESTROY;


//-------------------------------------------------------
// Virtual Memory
//
#define CELID_VIRTUAL_ALLOC_EX          32
typedef struct  __CEL_VIRTUAL_ALLOC_EX {
    HANDLE  hProcess;                   // This is really the process ID
    DWORD   dwResult;
    DWORD   dwAddress;
    DWORD   dwSize;
    DWORD   dwType;
    DWORD   dwProtect;
} CEL_VIRTUAL_ALLOC_EX, *PCEL_VIRTUAL_ALLOC_EX;

#define CELID_VIRTUAL_COPY_EX           33
typedef struct  __CEL_VIRTUAL_COPY_EX {
    HANDLE  hDestProc;                  // This is really the process ID
    DWORD   dwDest;
    HANDLE  hSrcProc;                   // This is really the process ID
    DWORD   dwSource;
    DWORD   dwSize;
    DWORD   dwProtect;
} CEL_VIRTUAL_COPY_EX, *PCEL_VIRTUAL_COPY_EX;

#define CELID_VIRTUAL_FREE_EX           34
typedef struct  __CEL_VIRTUAL_FREE_EX {
    HANDLE  hProcess;                   // This is really the process ID
    DWORD   dwAddress;
    DWORD   dwSize;
    DWORD   dwType;
} CEL_VIRTUAL_FREE_EX, *PCEL_VIRTUAL_FREE_EX;


//-------------------------------------------------------
//  Paging and memory-mapped files

// Page-in event for non-XIP code and for memory-mapped file data.  Used for
// beginning and end of page fault.
#define CELID_SYSTEM_PAGE_IN            111
#pragma warning(push)
#pragma warning(disable:4214)  
typedef struct __CEL_SYSTEM_PAGE_IN {
    DWORD   dwAddress;
    DWORD   fReadWrite : 1;             // 0=read-only, 1=read/write (only used on start of page-in)
    DWORD   fEndPageIn : 1;             // 0=start of page-in, 1=end of page-in
    DWORD   fSuccess   : 1;             // 0=failed, 1=success (only used on end of page-in)
    DWORD   dwReserved : 29;
    HANDLE  hProcess;                   // This is really the process ID
} CEL_SYSTEM_PAGE_IN, *PCEL_SYSTEM_PAGE_IN;
#pragma warning(pop)

// Page-out event: Struct TBD
#define CELID_SYSTEM_PAGE_OUT           79


#define CELID_MAPFILE_CREATE_EX         112
typedef struct {
    HANDLE  hMap;
    DWORD   flProtect;
    DWORD   dwMapFlags;
    DWORD   dwMaxSizeHigh;
    DWORD   dwMaxSizeLow;
    WCHAR   szName[0];                  // OPTIONAL Name (length inferred from entry length)
} CEL_MAPFILE_CREATE_EX, *PCEL_MAPFILE_CREATE_EX;

#define CELID_MAPFILE_DESTROY           39
typedef struct {
    HANDLE  hMap;
} CEL_MAPFILE_DESTROY, *PCEL_MAPFILE_DESTROY;

#define CELID_MAPFILE_VIEW_OPEN_EX      113
typedef struct {
    HANDLE  hMap;
    HANDLE  hProcess;                   // This is really the process ID
    DWORD   dwDesiredAccess;
    DWORD   dwFileOffsetHigh;
    DWORD   dwFileOffsetLow;
    DWORD   dwLen;
    LPVOID  lpBaseAddress;
} CEL_MAPFILE_VIEW_OPEN_EX, *PCEL_MAPFILE_VIEW_OPEN_EX;

#define CELID_MAPFILE_VIEW_CLOSE        41
typedef struct {
    HANDLE  hProcess;                   // This is really the process ID
    LPVOID  lpBaseAddress;
} CEL_MAPFILE_VIEW_CLOSE, *PCEL_MAPFILE_VIEW_CLOSE;

#define CELID_MAPFILE_VIEW_FLUSH        114
typedef struct {
    HANDLE  hProcess;                   // This is really the process ID
    LPVOID  lpBaseAddress;              // Start of range being flushed.
    DWORD   dwLen;                      // Length (bytes) of range being flushed
    DWORD   dwNumPages;                 // Number of dirty pages in view
    WORD    wFlushFlags;                // Flags and flush type, as defined below
} CEL_MAPFILE_VIEW_FLUSH, *PCEL_MAPFILE_VIEW_FLUSH;

// wFlushFlags 
#define CEL_MAPFLUSH_FLAGMASK           ((WORD)0xFFF0)  // 12 bits flags
#define CEL_MAPFLUSH_TYPEMASK           ((WORD)0x000F)  // 4 bits type
typedef enum {
    CEL_INVALID_MAPFLUSH    = 0,  // Reserved value
    CEL_FlushMapSimple      = 1,
    CEL_FlushMapAtomic      = 2,
    CEL_ValidateFile        = 3,
    CEL_FlushMapGather      = 4,

    CEL_NUM_MAPFLUSH_TYPES  // Count of types
} CEL_MAPFLUSH_TYPE;
#define CEL_MAPFLUSH_BEGIN              0x00000010  // clear=end of call; set=begin
#define CEL_MAPFLUSH_FULLDISCARD        0x00000020  // set=FMB_DOFULLDISCARD flag set
#define CEL_MAPFLUSH_NOWRITEOUT         0x00000040  // set=FMB_NOWRITEOUT flag set

#define CELID_CACHE_ALLOCVIEW           115
#define CELID_CACHE_FREEVIEW            116
#define CELID_CACHE_FLUSHVIEW           117


//-------------------------------------------------------
// Scheduler
//
#define CELID_THREAD_SWITCH             45
typedef struct  __CEL_THREAD_SWITCH {
    HANDLE  hThread;                    // This is really the thread ID
} CEL_THREAD_SWITCH, *PCEL_THREAD_SWITCH;

#define CELID_THREAD_MIGRATE            46
typedef struct  __CEL_THREAD_MIGRATE {
    HANDLE  hProcess;                   // This is really the process ID
    DWORD   dwReserved;
} CEL_THREAD_MIGRATE, *PCEL_THREAD_MIGRATE;

#define CELID_THREAD_CREATE             47
typedef struct  __CEL_THREAD_CREATE {
    HANDLE  hThread;                    // This is really the thread ID
    HANDLE  hProcess;                   // This is really the process ID
    HANDLE  hModule;
    DWORD   dwStartAddr;
    int     nPriority;
    WCHAR   szName[0];                  // OPTIONAL Name (length inferred from entry length)
} CEL_THREAD_CREATE, *PCEL_THREAD_CREATE;

#define CELID_THREAD_TERMINATE          49
typedef struct __CEL_THREAD_TERMINATE {
    HANDLE  hThread;                    // This is really the thread ID
} CEL_THREAD_TERMINATE, *PCEL_THREAD_TERMINATE;

#define CELID_THREAD_DELETE             50
typedef struct __CEL_THREAD_DELETE {
    HANDLE  hThread;                    // This is really the thread ID
} CEL_THREAD_DELETE, *PCEL_THREAD_DELETE;

#define CELID_PROCESS_CREATE            51
typedef struct  __CEL_PROCESS_CREATE {
    HANDLE  hProcess;                   // This is really the process ID
    DWORD   dwVMBase;
    WCHAR   szName[0];                  // OPTIONAL Name (length inferred from entry length)
} CEL_PROCESS_CREATE, *PCEL_PROCESS_CREATE;

#define CELID_PROCESS_TERMINATE         53
typedef struct __CEL_PROCESS_TERMINATE {
    HANDLE  hProcess;                   // This is really the process ID
} CEL_PROCESS_TERMINATE, *PCEL_PROCESS_TERMINATE;

#define CELID_PROCESS_DELETE            54
typedef struct __CEL_PROCESS_DELETE {
    HANDLE  hProcess;                   // This is really the process ID
} CEL_PROCESS_DELETE, *PCEL_PROCESS_DELETE;

#define CELID_THREAD_SUSPEND            55
typedef struct __CEL_THREAD_SUSPEND {
    HANDLE  hThread;                    // This is really the thread ID
} CEL_THREAD_SUSPEND, *PCEL_THREAD_SUSPEND;

#define CELID_THREAD_RESUME             56
typedef struct __CEL_THREAD_RESUME {
    HANDLE  hThread;                    // This is really the thread ID
} CEL_THREAD_RESUME, *PCEL_THREAD_RESUME;

#define CELID_THREAD_QUANTUMEXPIRE      57  // No related struct


// Extra information that is not logged in the CEL_PROCESS_CREATE struct
#define CELID_EXTRA_PROCESS_INFO        58
typedef struct  __CEL_EXTRA_PROCESS_INFO {
    HANDLE  hProcess;                   // This is really the process ID
    DWORD   dwCodeBase;                 // Start address where the exe code is loaded
    DWORD   dwVMLen;                    // Length of exe code that starts at dwCodeBase
    DWORD   dwOID;                      // Non-zero if valid file OID, zero if file is not in RAM/ROM file system
    WCHAR   szFullPath[0];              // Full path to exe, if file is not in RAM/ROM file system (length inferred from entry length)
} CEL_EXTRA_PROCESS_INFO, *PCEL_EXTRA_PROCESS_INFO;


#define CELID_SYSTEM_INVERT             82
typedef struct __CEL_SYSTEM_INVERT {
    HANDLE  hThread;                    // This is really the thread ID
    int     nPriority;
} CEL_SYSTEM_INVERT, *PCEL_SYSTEM_INVERT;

#define CELID_THREAD_PRIORITY           83
typedef struct __CEL_THREAD_PRIORITY {
    HANDLE  hThread;                    // This is really the thread ID
    int     nPriority;
} CEL_THREAD_PRIORITY, *PCEL_THREAD_PRIORITY;

#define CELID_THREAD_QUANTUM            84
typedef struct __CEL_THREAD_QUANTUM {
    HANDLE  hThread;                    // This is really the thread ID
    DWORD   dwQuantum;
} CEL_THREAD_QUANTUM, *PCEL_THREAD_QUANTUM;


//-------------------------------------------------------
// Modules / Loader
//

#define CELID_MODULE_LOAD               85
typedef struct __CEL_MODULE_LOAD {
    HANDLE  hProcess;                   // This is really the process ID
    HANDLE  hModule;
    DWORD   dwBase;
    WCHAR   szName[0];                  // OPTIONAL Name (length inferred from entry length)
} CEL_MODULE_LOAD, *PCEL_MODULE_LOAD;

#define CELID_MODULE_FREE               86
typedef struct __CEL_MODULE_FREE {
    HANDLE  hProcess;                   // This is really the process ID
    HANDLE  hModule;
} CEL_MODULE_FREE, *PCEL_MODULE_FREE;

#define CELID_MODULE_FAILED_LOAD        119
// NOTE: the data stored in the file will usually be SMALLER than this struct, because it
// will only contain as many characters as needed for the name - likely less than MAX_PATH.
typedef struct __CEL_MODULE_FAILED_LOAD {
    DWORD dwProcessId;                  // Same as hProcess from other CeLog events
    DWORD dwFlags;
    DWORD dwError;
    WCHAR szName[MAX_PATH];             // Name (length is inferred from entry length - between 0 and MAX_PATH)
} CEL_MODULE_FAILED_LOAD, *PCEL_MODULE_FAILED_LOAD;

// If set, module is being loaded into the kernel; if clear, module is loaded
// into a different process.
#define CEL_MODULE_FLAG_KERNEL          ((DWORD)1)
// If set, module is only being loaded for data, eg. resources; if clear,
// module code is also being executed.
#define CEL_MODULE_FLAG_DATAONLY        ((DWORD)2)

// Extra information that is not logged in the CEL_MODULE_LOAD struct
#define CELID_EXTRA_MODULE_INFO         98
typedef struct  __CEL_EXTRA_MODULE_INFO {
    HANDLE  hModule;
    DWORD   dwVMLen;                    // Code length, to complement dwVMBase from the CEL_MODULE_LOAD struct
    DWORD   dwModuleFlags;              // Bitmask of CEL_MODULE_FLAG_* describing module state
    DWORD   dwOID;                      // Non-zero if valid file OID, zero if file is not in RAM/ROM file system
    WCHAR   szFullPath[0];              // Full path to dll, if file is not in RAM/ROM file system (length inferred from entry length)
} CEL_EXTRA_MODULE_INFO, *PCEL_EXTRA_MODULE_INFO;


typedef struct __CEL_PROCESS_REFCOUNT {
    HANDLE  hProcess;                   // This is really the process ID
    DWORD   dwRefCount;
} CEL_PROCESS_REFCOUNT, *PCEL_PROCESS_REFCOUNT;

// List of process refcounts for a module
#define CELID_MODULE_REFERENCES         97
typedef struct __CEL_MODULE_REFERENCES {
    HANDLE  hModule;
    CEL_PROCESS_REFCOUNT ref[1];        // Array of refcounts (length inferred from entry length)
} CEL_MODULE_REFERENCES, *PCEL_MODULE_REFERENCES;



//-------------------------------------------------------
// Mutexes
//
#define CELID_MUTEX_CREATE              60
typedef struct  __CEL_MUTEX_CREATE {
    HANDLE  hMutex;
    WCHAR   szName[0];                  // OPTIONAL Name (length inferred from entry length)
} CEL_MUTEX_CREATE, *PCEL_MUTEX_CREATE;

#define CELID_MUTEX_RELEASE             61
typedef struct __CEL_MUTEX_RELEASE {
    HANDLE  hMutex;
} CEL_MUTEX_RELEASE, *PCEL_MUTEX_RELEASE;

#define CELID_MUTEX_DELETE              63
typedef struct __CEL_MUTEX_DELETE {
    HANDLE  hMutex;
} CEL_MUTEX_DELETE, *PCEL_MUTEX_DELETE;


//-------------------------------------------------------
// Data types for logging raw data

#define CELID_RAW_LONG                  70
#define CELID_RAW_ULONG                 71
#define CELID_RAW_SHORT                 72
#define CELID_RAW_USHORT                73
#define CELID_RAW_WCHAR                 74
#define CELID_RAW_CHAR                  75
#define CELID_RAW_UCHAR                 76
#define CELID_RAW_FLOAT                 77
#define CELID_RAW_DOUBLE                78

// To log raw data, call CELOGDATA or CELOGDATAFLAGGED directly.  For example:
//
// CELOGDATA(TRUE, CELID_RAW_LONG, &lMyData, (WORD) (iMyDataLen * sizeof(LONG)),
//           1, CELZONE_MISC);
//
// CELOGDATAFLAGGED(TRUE, CELID_RAW_LONG, &lMyData, (WORD) (iMyDataLen * sizeof(LONG)),
//           1, CELZONE_MISC, wMyFlag);
//
// Make sure to include the null character at the end of a string.


//-------------------------------------------------------
// Miscellaneous

#define CELID_SYSTEM_TLB                80
typedef struct __CEL_SYSTEM_TLB {
    DWORD   dwCount;
} CEL_SYSTEM_TLB, *PCEL_SYSTEM_TLB;
                       
#define CELID_INTERRUPTS                87
typedef struct __CEL_INT_DATA {
    DWORD   dwTimeStamp;
    WORD    wSysIntr;
    WORD    wNestingLevel;
} CEL_INT_DATA, *PCEL_INT_DATA;

typedef struct __CEL_INTERRUPTS {
    DWORD   dwDiscarded;                // Number of interrupts not logged.
    CEL_INT_DATA IntData[0];            // variable number of interrupts
} CEL_INTERRUPTS, *PCEL_INTERRUPTS;

// Used to keep track of entry/exit from kcalls (implies a single int of data)
#define CELID_KCALL_ENTER               88
#define CELID_KCALL_LEAVE               89

// Do not log directly using CELID_FLAGGED.  Instead use the CELOGDATAFLAGGED macro.
#define CELID_FLAGGED                   90

//  Callstack data always refers to the previous event in the log
#define CELID_CALLSTACK                 91
// Data will be an array of DWORDs (like adwStackTrace in the memtrack structs)
#define CELID_CALLSTACK_EX              95
// Data will be the output of GetThreadCallStack with STACKSNAP_NEW_VM.

// CePerf events are defined separately.
#define CELID_CEPERF                    92

// For timer events the most important data is the timestamp.  Use flags to 
// distinguish between different timers.  A Unicode string may optionally be
// included as the "data" buffer.
#define CELID_TIMER_START               93
#define CELID_TIMER_STOP                94

// Out of Memory condition detected and signalled by kernel
#define CELID_LOWMEM_SIGNALLED          96
typedef struct __CEL_LOWMEM_DATA {
    long pageFreeCount;
    int  cpNeed;
    long cpLowThreshold;
    long cpCriticalThreshold;
    long cpLowBlockSize;
    long cpCriticalBlockSize;
} CEL_LOWMEM_DATA, *PCEL_LOWMEM_DATA;


//-------------------------------------------------------
//  Memtrack

// Detach is a false process terminate used to terminate the memtrack session
#define CELID_MEMTRACK_DETACHP          99
typedef CEL_PROCESS_TERMINATE CEL_MEMTRACK_DETACHP, *PCEL_MEMTRACK_DETACHP;

#define CELID_MEMTRACK_BASELINE         102
typedef struct __CEL_MEMTRACK_BASELINE {
    DWORD dwReserved;
} CEL_MEMTRACK_BASELINE, *PCEL_MEMTRACK_BASELINE;


//-------------------------------------------------------
// Boot time

#define CELID_BOOT_TIME    103
typedef struct _CEL_BOOT_TIME {
    DWORD dwAction;
        #define BOOT_TIME_LAUNCHING_FS 01
        #define BOOT_TIME_FS_INITED 10
        #define BOOT_TIME_FS_OBJ_STORE_INITIALIZED 11
        #define BOOT_TIME_FS_FILES_INITIALIZED 12
        #define BOOT_TIME_FS_REG_INITIALIZED 13
        #define BOOT_TIME_FS_DB_INITIALIZED 14
        #define BOOT_TIME_FS_LAUNCH 15
        #define BOOT_TIME_DEV_ACTIVATE 20
        #define BOOT_TIME_DEV_FINISHED 21
        #define BOOT_TIME_GWES_FINISHED 30
        #define BOOT_TIME_SYSTEM_STARTED 40
        #define BOOT_TIME_START_DELAYED_WORK 50
    WCHAR szName[0];
} CEL_BOOT_TIME, *PCEL_BOOT_TIME;


//-------------------------------------------------------
// CELog GDI calls
#define CELID_GDI                       104
typedef struct _CEL_GDI_INFO {
    DWORD   dwGDIOp;
#define CEL_GDI_AddFontResource             0
#define CEL_GDI_PatBlt                      1
#define CEL_GDI_BitBlt                      2
#define CEL_GDI_CombineRgn                  3
#define CEL_GDI_CreateBitmap                4
#define CEL_GDI_CreateCompatibleBitmap      5
#define CEL_GDI_CreateCompatibleDC          6
#define CEL_GDI_CreateDIBPatternBrushPt     7
#define CEL_GDI_CreateFontIndirectW         8
#define CEL_GDI_CreateRectRgnIndirect       9
#define CEL_GDI_CreatePenIndirect           10
#define CEL_GDI_CreateSolidBrush            11
#define CEL_GDI_DeleteDC                    12
#define CEL_GDI_DeleteObject                13
#define CEL_GDI_DrawEdge                    14
#define CEL_GDI_DrawFocusRect               15
#define CEL_GDI_DrawTextW                   16
#define CEL_GDI_Ellipse                     17
#define CEL_GDI_EnumFontFamiliesW           18
#define CEL_GDI_EnumFontsW                  19
#define CEL_GDI_ExcludeClipRect             20
#define CEL_GDI_ExtTextOutW                 21
#define CEL_GDI_SetTextAlign                22
#define CEL_GDI_GetTextAlign                23
#define CEL_GDI_FillRect                    24
#define CEL_GDI_GetBkColor                  25
#define CEL_GDI_GetBkMode                   26
#define CEL_GDI_GetClipRgn                  27
#define CEL_GDI_GetClipBox                  28
#define CEL_GDI_GetCurrentObject            29
#define CEL_GDI_GetDeviceCaps               30
#define CEL_GDI_GetNearestColor             31
#define CEL_GDI_GetObjectW                  32
#define CEL_GDI_GetObjectType               33
#define CEL_GDI_GetPixel                    34
#define CEL_GDI_GetRegionData               35
#define CEL_GDI_GetSysColorBrush            36
#define CEL_GDI_GetRgnBox                   37
#define CEL_GDI_GetStockObject              38
#define CEL_GDI_GetTextColor                39
#define CEL_GDI_GetTextExtentExPointW       40
#define CEL_GDI_GetTextFaceW                41
#define CEL_GDI_GetTextMetricsW             42
#define CEL_GDI_GetCharWidth32              43
#define CEL_GDI_IntersectClipRect           44
#define CEL_GDI_MaskBlt                     45
#define CEL_GDI_OffsetRgn                   46
#define CEL_GDI_MoveToEx                    47
#define CEL_GDI_LineTo                      48
#define CEL_GDI_GetCurrentPositionEx        49
#define CEL_GDI_Polygon                     50
#define CEL_GDI_Polyline                    51
#define CEL_GDI_PtInRegion                  52
#define CEL_GDI_Rectangle                   53
#define CEL_GDI_RectInRegion                54
#define CEL_GDI_RemoveFontResourceW         55
#define CEL_GDI_RestoreDC                   56
#define CEL_GDI_RoundRect                   57
#define CEL_GDI_SaveDC                      58
#define CEL_GDI_SelectClipRgn               59
#define CEL_GDI_SelectObject                60
#define CEL_GDI_SetBkColor                  61
#define CEL_GDI_SetBkMode                   62
#define CEL_GDI_SetBrushOrgEx               63
#define CEL_GDI_SetPixel                    64
#define CEL_GDI_SetTextColor                65
#define CEL_GDI_StretchBlt                  66
#define CEL_GDI_StretchDIBits               67
#define CEL_GDI_CloseEnhMetaFile            68
#define CEL_GDI_CreateEnhMetaFileW          69
#define CEL_GDI_DeleteEnhMetaFile           70
#define CEL_GDI_PlayEnhMetaFile             71
#define CEL_GDI_CreatePalette               72
#define CEL_GDI_SelectPalette               73
#define CEL_GDI_RealizePalette              74
#define CEL_GDI_GetPaletteEntries           75
#define CEL_GDI_SetPaletteEntries           76
#define CEL_GDI_GetSystemPaletteEntries     77
#define CEL_GDI_GetNearestPaletteIndex      78
#define CEL_GDI_GetDIBColorTable            79
#define CEL_GDI_SetDIBColorTable            80
#define CEL_GDI_CreatePen                   81
#define CEL_GDI_StartDocW                   82
#define CEL_GDI_EndDoc                      83
#define CEL_GDI_StartPage                   84
#define CEL_GDI_EndPage                     85
#define CEL_GDI_AbortDoc                    86
#define CEL_GDI_SetAbortProc                87
#define CEL_GDI_CreateDCW                   88
#define CEL_GDI_CreateRectRgn               89
#define CEL_GDI_ExtCreateRegion             90
#define CEL_GDI_FillRgn                     91
#define CEL_GDI_SetROP2                     92
#define CEL_GDI_RectVisible                 93
#define CEL_GDI_SetRectRgn                  94
#define CEL_GDI_CreatePatternBrush          95
#define CEL_GDI_CreateBitmapFromPointer     96
#define CEL_GDI_SetViewportOrgEx            97
#define CEL_GDI_TransparentImage            98
#define CEL_GDI_TranslateCharsetInfo        99
#define CEL_GDI_ExtEscape                   100
#define CEL_GDI_SetDIBitsToDevice           101
#define CEL_GDI_GradientFill                102
#define CEL_GDI_InvertRect                  103
#define CEL_GDI_GetCharABCWidths            104
#define CEL_GDI_GetStretchBltMode           105
#define CEL_GDI_SetStretchBltMode           106
#define CEL_GDI_SetLayout                   107
#define CEL_GDI_GetLayout                   108
#define CEL_GDI_BitmapEscape                109

    DWORD   dwEntryTime;    // Entry time is saved in this struct, exit time is logged with event
    DWORD   dwContext;      // Usually dest DC involved.
    DWORD   dwContext2;
    DWORD   dwContext3;
    DWORD   dwContext4;
} CEL_GDI_INFO, *PCEL_GDI_INFO;


//-------------------------------------------------------
// CELog RDP Info
#define CELID_RDP                       105
typedef struct _CEL_RDP_INFO {
    BYTE    bOrderType;
    BYTE    bOrder;
    DWORD   dwTimeSpent;    // If -1 then start of operation.
} CEL_RDP_INFO, *PCEL_RDP_INFO;


//-------------------------------------------------------
//  Kernel Profiler Events

// NOTENOTE the structs that correspond to these events are not exposed to
// applications, see profiler.h in the OAK.

#define CELID_PROFILER_START            106
#define CELID_PROFILER_STOP             107
#define CELID_PROFILER_MARK             125
#define CELID_PROFILER_NAME             126

#define CELID_MONTECARLO_HIT            108
#define CELID_OEMPROFILER_HIT           109
#define CELID_APP_PROFILER_HIT          118

#define CELID_CAP_OVERHEAD              120
#define CELID_CALLCAP_ENTER             121
#define CELID_CALLCAP_EXIT              122
#define CELID_FASTCAP_ENTER             123
#define CELID_FASTCAP_EXIT              124


//-------------------------------------------------------
//  Kernel Debug Events

#define CELID_DEBUG_MSG                 69
typedef struct  _CEL_DEBUG_MSG {
    DWORD pid;
    DWORD tid;
    WCHAR szMessage[0];
} CEL_DEBUG_MSG, *PCEL_DEBUG_MSG;

#define CELID_DEBUG_TRAP                110
typedef struct _CEL_DEBUG_TRAP {
    WORD wFlags;

#define CEL_DEBUG_TRAP_SECONDCHANCE         0x0001

    WORD cbStackTraceOffset;
    EXCEPTION_RECORD er;
    CONTEXT context;
    DWORD adwStackTrace[0];
} CEL_DEBUG_TRAP, *PCEL_DEBUG_TRAP;


//-------------------------------------------------------
//  GWES Events

// Reserved range of events for GWES to log
#define CELID_GWES                      200
#define CELID_GWES_MAX                  299


//-------------------------------------------------------

// Eventlog Events


#define CELID_EVENTLOG_CHANNEL_MSG           300
typedef struct _CEL_EVENTLOG_CHANNEL_MSG {
    GUID ProviderID;
    DWORD CPUType;
    EVENT_DESCRIPTOR EventDescriptor;
    DWORD cbUserData;
    DWORD eUserDataCount;
    DWORD SequenceNumber;
    DWORD AlignmentPadding;
    BYTE UserData[4];
} CEL_EVENTLOG_CHANNEL_MSG, *PCEL_EVENTLOG_CHANNEL_MSG;

#define CELID_EVENTLOG_WPP_HEADER           301

/*  This may be necessary later, so don't delete it immediately.
typedef struct _CEL_EVENTLOG_WPP_CLOSE {
    LARGE_INTEGER StopTime;
}CEL_EVENTLOG_WPP_CLOSE, *PCEL_EVENTLOG_WPP_CLOSE;
*/

//
// The MESSAGE_TRACE_HEADERS and their data will immediately follow this structure
//
#define CELID_EVENTLOG_WPP_MSG           302
typedef struct _CEL_EVENTLOG_WPP_MSG {
    DWORD cMissedEvents;
//    LARGE_INTEGER FlushTime;  Take the flush time from the event. 
    FILETIME KernelTime;
    FILETIME UserTime;
} CEL_EVENTLOG_WPP_MSG, *PCEL_EVENTLOG_WPP_MSG;



//-------------------------------------------------------
// CELog control info

#define CELID_DATA_LOSS                 150
typedef struct  __CEL_DATA_LOSS {
    DWORD  dwBytes;                     // Number of bytes lost
} CEL_DATA_LOSS, *PCEL_DATA_LOSS;

#define CELID_SYNC_END                  0x1FFE      // No struct, just a header

#define CELID_LOG_MARKER                0x1FFF

// Marker for CELOG_VERSION=1 & 2
typedef struct __CEL_LOG_MARKER {
   DWORD   dwFrequency;                 // TimeStamp counter frequency
   DWORD   dwDefaultQuantum;
   DWORD   dwVersion;
} CEL_LOG_MARKER, *PCEL_LOG_MARKER;

// Marker for CELOG_VERSION=3
typedef struct {
   DWORD   dwFrequency;                 // TimeStamp counter frequency
   DWORD   dwDefaultQuantum;
   DWORD   dwVersion;
   DWORD   dwNumCPUs;                   // Number of CPUs on the device
} CEL_LOG_MARKER_V3, *PCEL_LOG_MARKER_V3;

#define CELID_USER                      0x2000      // Min value for User ID
#define CELID_MAX                       0x3FFF      // Max value for User ID


//-------------------------------------------------------
// Deprecated events that are no longer logged by the system.
// These events are only included in celog.h for backward
// compatibility reasons.

// The OS no longer logs the CELID_EVENT_CLOSE event.
#define CELID_EVENT_CLOSE               7
typedef struct  __CEL_EVENT_CLOSE {
    HANDLE  hEvent;
} CEL_EVENT_CLOSE, *PCEL_EVENT_CLOSE;

// The OS no longer logs the CELID_SEM_CLOSE event.
#define CELID_SEM_CLOSE                 17
typedef struct  __CEL_SEM_CLOSE {
    HANDLE  hSem;
} CEL_SEM_CLOSE, *PCEL_SEM_CLOSE;

// The OS no longer logs the CELID_THREAD_CLOSE event.
#define CELID_THREAD_CLOSE              48
typedef struct __CEL_THREAD_CLOSE {
    HANDLE  hThread;
} CEL_THREAD_CLOSE, *PCEL_THREAD_CLOSE;

// The OS no longer logs the CELID_PROCESS_CLOSE event.
#define CELID_PROCESS_CLOSE             52
typedef struct __CEL_PROCESS_CLOSE {
    HANDLE  hProcess;
} CEL_PROCESS_CLOSE, *PCEL_PROCESS_CLOSE;

// The OS no longer logs the CELID_MUTEX_CLOSE event.
#define CELID_MUTEX_CLOSE               62
typedef struct __CEL_MUTEX_CLOSE {
    HANDLE  hMutex;
} CEL_MUTEX_CLOSE, *PCEL_MUTEX_CLOSE;

// The OS now logs CELID_VIRTUAL_ALLOC_EX instead of CELID_VIRTUAL_ALLOC.
#define CELID_VIRTUAL_ALLOC             35
typedef struct  __CEL_VIRTUAL_ALLOC {
    DWORD   dwResult;
    DWORD   dwAddress;
    DWORD   dwSize;
    DWORD   dwType;
    DWORD   dwProtect;
    BYTE    bReserved[0];
} CEL_VIRTUAL_ALLOC, *PCEL_VIRTUAL_ALLOC;

// The OS now logs CELID_VIRTUAL_COPY_EX instead of CELID_VIRTUAL_COPY.
#define CELID_VIRTUAL_COPY              36
typedef struct  __CEL_VIRTUAL_COPY {
    DWORD   dwDest;
    DWORD   dwSource;
    DWORD   dwSize;
    DWORD   dwProtect;
} CEL_VIRTUAL_COPY, *PCEL_VIRTUAL_COPY;

// The OS now logs CELID_VIRTUAL_FREE_EX instead of CELID_VIRTUAL_FREE.
#define CELID_VIRTUAL_FREE              37
typedef struct  __CEL_VIRTUAL_FREE {
    DWORD   dwAddress;
    DWORD   dwSize;
    DWORD   dwType;
    BYTE    bReserved[0];
} CEL_VIRTUAL_FREE, *PCEL_VIRTUAL_FREE;

// The OS now logs CELID_SYSTEM_PAGE_IN instead of CELID_SYSTEM_PAGE.
#define CELID_SYSTEM_PAGE               81
#pragma warning(push)
#pragma warning(disable:4214)  
typedef struct __CEL_SYSTEM_PAGE {
    DWORD   dwAddress;
    DWORD   fReadWrite : 1;             // 0=read-only, 1=read/write (only used on start of page-in)
    DWORD   fEndPageIn : 1;             // 0=start of page-in, 1=end of page-in
    DWORD   fSuccess   : 1;             // 0=failed, 1=success (only used on end of page-in)
    DWORD   dwReserved : 29;
} CEL_SYSTEM_PAGE, *PCEL_SYSTEM_PAGE;
#pragma warning(pop)

// The OS now logs CELID_MAPFILE_CREATE_EX instead of CELID_MAPFILE_CREATE.
#define CELID_MAPFILE_CREATE            38
typedef struct {
    HANDLE  hMap;
    DWORD   flProtect;
    DWORD   dwMapFlags;
    DWORD   dwMaxSize;
    WCHAR   szName[0];                  // OPTIONAL Name (length inferred from entry length)
} CEL_MAPFILE_CREATE, *PCEL_MAPFILE_CREATE;

// The OS now logs CELID_MAPFILE_VIEW_OPEN_EX instead of CELID_MAPFILE_VIEW_OPEN.
#define CELID_MAPFILE_VIEW_OPEN         40
typedef struct {
    HANDLE  hMap;
    HANDLE  hProcess;
    DWORD   dwDesiredAccess;
    DWORD   dwFileOffset;
    DWORD   dwLen;
    LPVOID  lpBaseAddress;
} CEL_MAPFILE_VIEW_OPEN, *PCEL_MAPFILE_VIEW_OPEN;

// The OS now logs CELID_MAPFILE_VIEW_FLUSH instead of CELID_MAPFILE_FLUSH.
#define CELID_MAPFILE_FLUSH             42
typedef struct {
    LPVOID  lpBaseAddress;              // Start of range being flushed.
    DWORD   dwLen;                      // Length (bytes) of range being flushed
    WORD    wFlushFlags;                // Flags and flush type, as defined below
    WORD    wNumPages;                  // Number of dirty pages to flush
} CEL_MAPFILE_FLUSH, *PCEL_MAPFILE_FLUSH;


//-------------------------------------------------------
// Logging zones.
//

// NOTENOTE New zones must be added to AVAILABLE_ZONES in nk\kernel\logger.c
// before they can be used.
#define CELZONE_INTERRUPT    0x00000001
#define CELZONE_RESCHEDULE   0x00000002
#define CELZONE_MIGRATE      0x00000004
#define CELZONE_TLB          0x00000008
#define CELZONE_DEMANDPAGE   0x00000010
#define CELZONE_THREAD       0x00000020
#define CELZONE_PROCESS      0x00000040
#define CELZONE_PRIORITYINV  0x00000080
#define CELZONE_CRITSECT     0x00000100
#define CELZONE_SYNCH        0x00000200
#define CELZONE_PROFILER     0x00000400
#define CELZONE_HEAP         0x00000800
#define CELZONE_VIRTMEM      0x00001000
#define CELZONE_GWES         0x00002000
#define CELZONE_LOADER       0x00004000
#define CELZONE_MEMTRACKING  0x00008000
#define CELZONE_BOOT_TIME    0x00010000
#define CELZONE_GDI          0x00020000
#define CELZONE_LOWMEM       0x00040000
#define CELZONE_KCALL        0x00400000
#define CELZONE_DEBUG        0x00800000

#define CELZONE_RESERVED2    0x10000000 // Reserved for system use, apps cannot turn this zone on
#define CELZONE_RESERVED1    0x20000000 // Reserved for system use, apps cannot turn this zone on
#define CELZONE_ALWAYSON     0x40000000 // Always logged, even if zones are turned off
#define CELZONE_MISC         0x80000000


//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// Shared data access
#define CELOG_DATAMAP_NAME      TEXT("SYSTEM/CeLog Data")
#define CELOG_DATAMAP_SIGNATURE ((DWORD) 0xCE106B7F)  // CELOGBUF
#define CELOG_FILLEVENT_NAME    TEXT("SYSTEM/CeLog Fill")


// Old structs are provided for convenience of supporting interoperability
// between versions.

// Used on CE versions before 6.0
typedef struct {
    DWORD  dwBufSize;   // Size of data buffer (does not include header)
    LPBYTE pWrite;      // Writer moves this pointer
    LPBYTE pRead;       // Reader moves this pointer
    BOOL   fSetEvent;   // OK to set event?  Writer sets to FALSE, reader sets to TRUE
    BYTE   bReserved;   // Padding for DWORD alignment
    DWORD  dwLostBytes; // Total count of lost bytes, set by writer, reader only reads it
} MAPHEADER_V1;


// Used on CE6.0
typedef struct {
    // VERSION 1 DATA
    DWORD  dwBufSize;     // Size of data buffer (does not include header)
    LPBYTE pWrite;        // OBSOLETE -- will be NULL, see dwWriteOffset below
    LPBYTE pRead;         // OBSOLETE -- will be NULL, see dwReadOffset below
    BOOL   fSetEvent;     // OK to set event?  Writer sets to FALSE, reader sets to TRUE
    BYTE   bReserved;     // Unused
    DWORD  dwLostBytes;   // Total count of lost bytes, set by writer, reader only reads it
    
    // VERSION 2 DATA
    DWORD  dwVersion;     // Version of this structure -- should be 2.
    DWORD  dwBufferStart; // Offset of buffer start from the beginning of the map.
    DWORD  dwWriteOffset; // Offset of write pointer from the beginning of the
                          // map.  Writer moves this pointer.
    DWORD  dwReadOffset;  // Offset of read pointer from the beginning of the
                          // map.  Reader moves this pointer.
    
    // Followed by the data buffer, which starts at dwBufferStart from the start
    // of the map and ends dwBufSize bytes beyond that.
} MAPHEADER_V2;


// Post-CE6
typedef struct {
    // VERSION 1 DATA
    DWORD  dwBufSize;     // Size of data buffer (does not include header)
    LPBYTE pWrite;        // OBSOLETE -- will be NULL, see dwWriteOffset below
    LPBYTE pRead;         // OBSOLETE -- will be NULL, see dwReadOffset below
    BOOL   fSetEvent;     // OK to set event?  Writer sets to FALSE, reader sets to TRUE
    BYTE   bReserved;     // Unused
    DWORD  dwLostBytes;   // Total count of lost bytes, set by writer, reader only reads it
    
    // VERSION 2 DATA
    DWORD  dwVersion;     // Version of this structure -- should be 3.
    DWORD  dwBufferStart; // Offset of buffer start from the beginning of the map.
    DWORD  dwWriteOffset; // Offset of write pointer from buffer start.  Writer moves this pointer.
    DWORD  dwReadOffset;  // Offset of read pointer from buffer start.  Reader moves this pointer.
    
    // VERSION 3 DATA
    DWORD  Signature;     // Used to determine if the map persisted across boots
    BOOL   IsLocked;      // Stop logging while locked
    DWORD  dwSyncBufferStart; // Offset of sync buffer start from the beginning of the map.
    DWORD  dwSyncBufferSize;  // Size of sync buffer
    DWORD  dwSyncWriteOffset; // Offset of write pointer from sync buffer start.
    DWORD  dwSyncReadOffset;  // Offset of read pointer from sync buffer start.
    DWORD  dwIntBufferStart;  // Offset of interrupt buffer start from the beginning of the map.
    DWORD  dwIntBufferSize;   // Size of interrupt buffer
    DWORD  dwIntWriteOffset;  // Offset of write pointer from interrupt buffer start.
    DWORD  dwIntReadOffset;   // Offset of read pointer from interrupt buffer start.
    
    // Followed by the data buffer, which starts at dwBufferStart from the start
    // of the map and ends dwBufSize bytes beyond that.
} MAPHEADER_V3;


#ifndef MAPHEADER  // Easy quick-n-dirty replacement
#define MAPHEADER MAPHEADER_V3
#endif
typedef MAPHEADER *PMAPHEADER;


#ifdef UNDER_CE


//------------------------------------------------------------------------------
//
// Functions for performing data logging.  Note that typically you should
// use the macros defined below, rather than calling this function
// directly.  In a ship build, CeLogData normally thunks to a stub, so
// calling the function directly just increasing your code size.
//

// Check if macros were previously defined (building coredll)
#ifndef WIN32_CALL

void CeLogData(BOOL  fTimeStamp, // Should timestamp be used?
               WORD  wID,        // ID of event/data.
               PVOID pData,      // pointer to data buffer
               WORD  wLen,       // Len of data (in bytes)
               DWORD dwZoneUser, // User-defined zone
               DWORD dwZoneCE,   // Predefined zone
               WORD  wFlag,      // data flag
               BOOL  fFlagged);  // Is data flag being used?


void CeLogSetZones(DWORD dwZoneUser,        // User-defined zones
                   DWORD dwZoneCE,          // Predefined zones
                   DWORD dwZoneProcess);    // Process zones


BOOL CeLogGetZones(LPDWORD lpdwZoneUser,    // User-defined zones
                   LPDWORD lpdwZoneCE,      // Predefined zones
                   LPDWORD lpdwZoneProcess, // Process zones
                   LPDWORD lpdwAvailableZones); // Zones supported by this kernel

BOOL CeLogReSync();

__inline static void
CeLogMsg(
    __format_string const WCHAR* szFormat,
    ...
    )
{
    va_list arglist;
    WCHAR   szTemp[MAX_PATH];
    size_t  cchLen;
    HRESULT hr;

    // Compose a single string using the input args
    va_start(arglist, szFormat);
    hr = StringCchVPrintfW(szTemp, MAX_PATH, szFormat, arglist);
    if (SUCCEEDED(hr)) {
        hr = StringCchLengthW(szTemp, MAX_PATH, &cchLen);
        if (SUCCEEDED(hr)) {
            CeLogData(TRUE, CELID_RAW_WCHAR, szTemp, (WORD)((cchLen + 1) * sizeof(WCHAR)),
                      0, CELZONE_ALWAYSON, 0, FALSE);
        }
    }
}

#endif // WIN32_CALL

// Macros for CELogData.
#ifdef SHIP_BUILD

    #define CELOGDATA(Time, ID, Data, Len, Zone1, Zone2)               ((void)0)
    #define CELOGDATAFLAGGED(Time, ID, Data, Len, Zone1, Zone2, Flag)  ((void)0)
    #define RETAILCELOG(Cond, ID, Data, Len)                           ((void)0)
    #define DEBUGCELOG(Cond, ID, Data, Len)                            ((void)0)
    #define RETAILCELOGMSG(Cond, Printf_exp)                           ((void)0)
    #define DEBUGCELOGMSG(Cond, Printf_exp)                            ((void)0)

#else // SHIP_BUILD

    #define CELOGDATA(Time, ID, Data, Len, Zone1, Zone2) \
            CeLogData(Time, ID, Data, Len, Zone1, Zone2, 0, FALSE)

    #define CELOGDATAFLAGGED(Time, ID, Data, Len, Zone1, Zone2, Flag) \
            CeLogData(Time, ID, Data, Len, Zone1, Zone2, Flag, TRUE)

    #define RETAILCELOG(Cond, ID, Data, Len) \
            ((void)((Cond) ? CeLogData(TRUE, ID, Data, Len, 0, CELZONE_ALWAYSON, 0, FALSE), 1 : 0))

    #define RETAILCELOGMSG(Cond, Printf_exp) \
            ((void)((Cond) ? (CeLogMsg Printf_exp), 1 : 0))

#ifdef DEBUG
    #define DEBUGCELOG(Cond, ID, Data, Len) \
            ((void)((Cond) ? CeLogData(TRUE, ID, Data, Len, 0, CELZONE_ALWAYSON, 0, FALSE), 1 : 0))

    #define DEBUGCELOGMSG(Cond, Printf_exp) \
            ((void)((Cond) ? (CeLogMsg Printf_exp), 1 : 0))
#else
    #define DEBUGCELOG(Cond, ID, Data, Len)                            ((void)0)
    #define DEBUGCELOGMSG(Cond, Printf_exp)                            ((void)0)
#endif // DEBUG


#endif // IF/ELSE SHIP_BUILD



//------------------------------------------------------------------------------
//
// Variables to control the logging.  If they are not set during OEMInit, they
// will default to reasonable values.
//

extern DWORD dwCeLogLargeBuf;
extern DWORD dwCeLogSmallBuf;
extern DWORD dwCeLogFlushTimeout;
extern int   nCeLogThreadPrio;


#endif // UNDER_CE


#pragma warning(pop)  // nonstandard extensions warnings


#ifdef __cplusplus
}
#endif

#endif // __CELOG_H__
