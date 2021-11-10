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
//  Module Name:  
//  
//      ceperf.h
//  
//  Abstract:  
//
//      Windows CE Performance Measurement API
//      
//------------------------------------------------------------------------------


#ifndef _CEPERF_H_
#define _CEPERF_H_

#ifdef __cplusplus 
extern "C" { 
#endif 

    
#ifndef UNDER_CE
#ifndef GetProcAddressA
#define GetProcAddressA              GetProcAddress
#endif // GetProcAddressA
#endif // UNDER_CE

#ifndef ASSERT
#define ASSERT(x)
#endif // ASSERT


//==============================================================================
// CEPERF RETURN VALUES
//==============================================================================

// CEPERF is disabled
#define CEPERF_HR_DISABLED                  __HRESULT_FROM_WIN32(ERROR_SERVICE_DISABLED)
// The CEPERF DLL is unavailable
#define CEPERF_HR_NO_DLL                    __HRESULT_FROM_WIN32(ERROR_DLL_NOT_FOUND)
// Unsupported feature: No CPU counter library or unimplemented feature
#define CEPERF_HR_NOT_SUPPORTED             __HRESULT_FROM_WIN32(ERROR_NOT_SUPPORTED)
// This HRESULT is returned when a CEPERF API call hits an exception, likely
// due to an invalid parameter
#define CEPERF_HR_EXCEPTION                 __HRESULT_FROM_WIN32(ERROR_INVALID_PARAMETER)
// Invalid parameter passed to one of the APIs
#define CEPERF_HR_INVALID_PARAMETER         __HRESULT_FROM_WIN32(ERROR_INVALID_PARAMETER)
// The session or item does not exist, or is of the wrong type
#define CEPERF_HR_INVALID_HANDLE            __HRESULT_FROM_WIN32(ERROR_INVALID_HANDLE)
// The session name is invalid, or no session by that name exists
#define CEPERF_HR_BAD_SESSION_NAME          __HRESULT_FROM_WIN32(ERROR_BAD_PATHNAME)
// QueryPerformanceCounter failed
#define CEPERF_HR_BAD_PERFCOUNT_DATA        __HRESULT_FROM_WIN32(ERROR_INVALID_DATA)
// LocalStatistic data is an unexpected size or could not be read
#define CEPERF_HR_BAD_LOCALSTATISTIC_DATA   __HRESULT_FROM_WIN32(ERROR_INVALID_DATA)
// CPU Performance Counter data is an unexpected size or could not be read
#define CEPERF_HR_BAD_CPUCOUNTER_DATA       __HRESULT_FROM_WIN32(ERROR_INVALID_DATA)
// Failed to get a required lock: Necessary because all logging calls fail this
// case rather than block
#define CEPERF_HR_SHARING_VIOLATION         __HRESULT_FROM_WIN32(ERROR_SHARING_VIOLATION)
// No data available because recording is disabled
#define CEPERF_HR_RECORDING_DISABLED        __HRESULT_FROM_WIN32(ERROR_NO_DATA)
// No data available because storage is disabled
#define CEPERF_HR_STORAGE_DISABLED          __HRESULT_FROM_WIN32(ERROR_CANCELLED)
// Out of space for holding session or item objects, or their discrete data.
#define CEPERF_HR_NOT_ENOUGH_MEMORY         __HRESULT_FROM_WIN32(ERROR_NOT_ENOUGH_MEMORY)
// The Duration object doesn't have a begin recorded for this thread
#define CEPERF_HR_BEGIN_NOT_FOUND           __HRESULT_FROM_WIN32(ERROR_INVALID_OWNER)
// A duplicate item already exists, with different settings
#define CEPERF_HR_ALREADY_EXISTS            __HRESULT_FROM_WIN32(ERROR_ALREADY_EXISTS)

// BACKWARD-COMPAT WITH OLD VALUES
#define CEPERF_HRDISABLED   CEPERF_HR_DISABLED
#define CEPERF_HRNODLL      CEPERF_HR_NO_DLL
#define CEPERF_HREXCEPTION  CEPERF_HR_EXCEPTION



//==============================================================================
// COMMON FLAGS
//==============================================================================

// Special flag used for session status flags, recording flags, storage flags.
// Used to default to settings in registry, or settings of parent session.
// Search algorithm is documented separately.
#define CEPERF_DEFAULT_FLAGS                0xFFFFFFFF


//------------------------------------------------------------------------------
// SESSION STATUS FLAGS

#define CEPERF_STATUS_RECORDING_ENABLED     0x00000001  // Record data as it is produced.  Discrete data will be recorded to RAM; continuous data will be recorded to storage location (if storage is enabled).
#define CEPERF_STATUS_RECORDING_DISABLED    0x00000002  // Don't record any data as it is produced.  No continuous or discrete data will be recorded, to RAM or to storage location.
#define CEPERF_STATUS_STORAGE_ENABLED       0x00000004  // Output data to storage location.  Discrete data will be output to storage during a flush; continuous data will be output to storage as it is recorded.
#define CEPERF_STATUS_STORAGE_DISABLED      0x00000008  // Don't output data to storage location.  Any continuous data will not be recorded.
#define CEPERF_STATUS_NOT_THREAD_SAFE       0x00000010  // Drop thread safety for extra performance boost


//------------------------------------------------------------------------------
// RECORDING FLAGS
// Divided into 16 bits of common flags and 16 bits of flags for each type of
// tracked item.

// Recording flags common to all tracked item types
#define CEPERF_RECORD_ABSOLUTE_TICKCOUNT    0x00010000  // Track overall running time in tick counts
#define CEPERF_RECORD_THREAD_TICKCOUNT      0x00020000  // Track thread running time in tick counts
#define CEPERF_RECORD_ABSOLUTE_PERFCOUNT    0x00040000  // Track overall running time in high-resolution performance counts
//#define CEPERF_RECORD_THREAD_PERFCOUNT      0x00080000  // Track thread running time in high-resolution performance counts
#define CEPERF_RECORD_ABSOLUTE_CPUPERFCTR   0x00100000  // Track overall change in CPU perf counters (eg. cache hits/misses, if available); may need to be configured before use
//#define CEPERF_RECORD_THREAD_CPUPERFCTR     0x00200000  // Track CPU perf counters while thread was running (eg. cache hits/misses, if available); may need to be configured before use

// Recording flags for Duration items - How to record performance counters
#define CEPERF_DURATION_RECORD_NONE         0x00000001  // Don't record any data
#define CEPERF_DURATION_RECORD_MIN          0x00000002  // (discrete) Record only min/max/average delta
//#define CEPERF_DURATION_RECORD_SHORT        0x00000004  // (continuous) Record list of deltas, to make it possible to calculate std.dev
#define CEPERF_DURATION_RECORD_FULL         0x00000008  // (continuous) Record all entry and exit events
//#define CEPERF_DURATION_RECORD_BUCKET       0x00000010  // (discrete) Record deltas in buckets (definition in extended info)
// Recording flags for Duration items - Begin/End semantics
#define CEPERF_DURATION_RECORD_UNLIMITED    0x00000020  // Unlimited number of "unended begins" at any time
#define CEPERF_DURATION_RECORD_SHARED       0x00000040  // All threads and processes share same "begin" instances,
                                                        // threads can end each other's begins.
#define CEPERF_DURATION_RECORD_TTRACKER     0x00000080  // Turn on the TTracker tool while this duration is in operation.
                                                        // It is only possible to have one TTracker duration in progress at once.
#define CEPERF_DURATION_RECORD_UNIQUE       0x00000100  // Only one active "unended begin" at a time.  Behavior modified by CEPERF_DURATION_UNIQUE_REPLACE_* flags.
#define CEPERF_DURATION_REPLACE_BEGIN       0x00000200  // When RECORD_UNIQUE is set: if REPLACE_BEGIN is set, a subsequent begin replaces the first one; if REPLACE_BEGIN is not set, the first begin is the only one that matters and all subsequent begins are ignored.
//#define CEPERF_DURATION_REPLACE_END         0x00000400  // When RECORD_UNIQUE is set: if REPLACE_END is set, a subsequent end replaces the first one; if REPLACE_END is not set, the first end is the only one that matters and all subsequent ends are ignored.

// Recording flags for Statistic items - How to record value changes
#define CEPERF_STATISTIC_RECORD_NONE        0x00000001  // Don't record any data
#define CEPERF_STATISTIC_RECORD_MIN         0x00000002  // (discrete) Record only current value
#define CEPERF_STATISTIC_RECORD_SHORT       0x00000004  // (discrete) Record min/max/average change
#define CEPERF_STATISTIC_RECORD_FULL        0x00000008  // (continuous) Record all modification events

// Recording flags for Local Statistic items - How to record value
#define CEPERF_LOCALSTATISTIC_RECORD_NONE   0x00000001  // Don't record any data
#define CEPERF_LOCALSTATISTIC_RECORD_MIN    0x00000002  // (discrete) Record only current value


//------------------------------------------------------------------------------
// STORAGE FLAGS

// Output locations.  Continuous data is written to the output location as it
// arrives; discrete data is written to the output location when data is flushed.
//#define CEPERF_STORE_RAM        0x00000001  // binary only; newest or oldest
#define CEPERF_STORE_FILE       0x00000002  // binary, text or CSV; oldest only
#define CEPERF_STORE_CELOG      0x00000004  // binary only; overflow=0
#define CEPERF_STORE_DEBUGOUT   0x00000008  // not binary; overflow=0
#define CEPERF_STORE_REGISTRY   0x00000010  // not binary; overflow=0
//#define CEPERF_STORE_PERFMON    0x00000020  // Remote Performance Monitor
#define CEPERF_STORE_ETW        0x00000040  // binary only; overflow=0

// Output types
#define CEPERF_STORE_BINARY     0x00001000  // Store data in a compact data format (TBD)
#define CEPERF_STORE_TEXT       0x00002000  // Store data as human-readable text
#define CEPERF_STORE_CSV        0x00004000  // Store data as comma-separated text
    
// Control what happens when continuous data overflows the available storage in
// the output location.
//#define CEPERF_STORE_NEWEST     0x00010000  // Keep the newest data and discard the oldest
#define CEPERF_STORE_OLDEST     0x00020000  // Keep the oldest data and discard the newest
    

//------------------------------------------------------------------------------
// CONTROL FLAGS

// Session Control Flags
#define CEPERF_CONTROL_HIERARCHY        0x00000001  // Apply these settings to all sessions registered below the given session in the hierarchy

// CPU Status Flags
#define CEPERF_CPU_ENABLE               0x00000001  // Enable CPU performance counters
#define CEPERF_CPU_DISABLE              0x00000002  // Disable CPU performance counters

// CPU Recording Flags
#define CEPERF_CPU_TLB_MISSES           0x00010000  // Track TLB misses
//#define CEPERF_CPU_TLB_HITS             0x00020000  // Track TLB hits
#define CEPERF_CPU_ICACHE_MISSES        0x00040000  // Track instruction cache misses
#define CEPERF_CPU_ICACHE_HITS          0x00080000  // Track instruction cache hits
#define CEPERF_CPU_DCACHE_MISSES        0x00100000  // Track data cache misses
#define CEPERF_CPU_DCACHE_HITS          0x00200000  // Track data cache hits
#define CEPERF_CPU_INSTRUCTION_COUNT    0x00400000  // Track instruction count
#define CEPERF_CPU_CYCLE_COUNT          0x00800000  // Track cycle count

// Flush Flags
#define CEPERF_FLUSH_HIERARCHY          0x00000001  // Flush all sessions registered below the given session in the hierarchy
#define CEPERF_FLUSH_DESCRIPTORS        0x00000002  // Flush descriptors for all tracked items
//#define CEPERF_FLUSH_NEW_DESCRIPTORS    0x00000004  // Flush descriptors for tracked items that have changed since the previous flush
#define CEPERF_FLUSH_DATA               0x00000008  // Flush data for all tracked items
//#define CEPERF_FLUSH_NEW_DATA           0x00000010  // Flush data for tracked items that have changed since the previous flush
#define CEPERF_FLUSH_AND_CLEAR          0x00000020  // Clear data after it is flushed


//------------------------------------------------------------------------------
// SPECIAL MARKER DEFINITIONS
// These marker handle values may be used with CePerfBeginDuration/CePerfEndDuration,
// without opening a session or registering the marker.

#define CEPERF_MARKER_TEST_SCENARIO     ((HANDLE) 0x00010001)  // Used to denote the beginning/end of a test scenario, for use in post-processing continuous data


//==============================================================================
// DATA TYPES
//==============================================================================

// Each tracked item has one of these types
typedef enum _CEPERF_ITEM_TYPE {
    CEPERF_TYPE_DURATION        = 0,
    CEPERF_TYPE_STATISTIC       = 1,
    CEPERF_TYPE_LOCALSTATISTIC  = 2,
//    CEPERF_TYPE_BUCKET          = 3,      // BUCKETS NYI
    
    //------------------------------------------------------------
    // IMPORTANT NOTE: Any time a new member is added to this
    // list, the version # for CEPERF_SESSION_INFO must be revved!
    //------------------------------------------------------------

    // This entry must always be last!
    CEPERF_NUMBER_OF_TYPES
} CEPERF_ITEM_TYPE;


// Extended control over a session's data production and storage.
typedef struct _CEPERF_SESSION_INFO {
    WORD   wVersion;            // Version of this struct, set to 1
    WORD   wReserved;
    DWORD  dwStorageFlags;      // Flags for controlling data storage
    LPWSTR lpszStoragePath;     // Pointer to path for storing data into, or NULL
    DWORD  rgdwRecordingFlags[CEPERF_NUMBER_OF_TYPES];  // Flags for 
                                // overriding recording mode for each type of 
                                // tracked item in the session (may be
                                // overridden by dynamic session control)
} CEPERF_SESSION_INFO;


#define CEPERF_MAX_ITEM_NAME_LEN  32

// This structure is used to bulk-register tracked items and makes it easy to 
// embed basic data within code.
// Only the most basic information is stored in this structure.
typedef struct _CEPERF_BASIC_ITEM_DESCRIPTOR {
    HANDLE hTrackedItem;        // Will be modified during bulk open/close
    CEPERF_ITEM_TYPE type;      // Type of item
    LPWSTR lpszItemName;        // Pointer to name of item
    DWORD  dwRecordingFlags;    // Flags for default recording mode (may be
                                // overridden by session defaults or dynamic
                                // session control)
} CEPERF_BASIC_ITEM_DESCRIPTOR;

// Helpful definitions for defining inline bulk items
#define CEPERF_DURATION_DESCRIPTOR(szName, dwRecordingFlags)                   \
    { INVALID_HANDLE_VALUE, CEPERF_TYPE_DURATION,  (szName), (dwRecordingFlags) }
#define CEPERF_STATISTIC_DESCRIPTOR(szName, dwRecordingFlags)                  \
    { INVALID_HANDLE_VALUE, CEPERF_TYPE_STATISTIC, (szName), (dwRecordingFlags) }


// Extended information about a tracked item
typedef struct _CEPERF_EXT_ITEM_DESCRIPTOR {
    WORD wVersion;           // Version of this struct, set to 1
    WORD wReserved;

    // Specific information for each item type
    union {
        struct {
            DWORD dwReserved1;  // Not used
            DWORD dwReserved2;  // Not used
        } Duration;

        struct {
            DWORD dwReserved1;  // Not used...  Maybe value size in bytes
            DWORD dwReserved2;  // Not used
        } Statistic;

        struct {
            LPVOID lpValue;     // Pointer to Local Statistic
            DWORD  dwValSize;   // Value size in bytes
        } LocalStatistic;
    
//        struct {              // BUCKETS NYI
//            DWORD dwLowVal;
//            DWORD dwHighVal;
//            DWORD dwNumIntervals;
//        } Bucket;
    };
} CEPERF_EXT_ITEM_DESCRIPTOR;


// Contains all data recorded for a tracked item, or for a single Duration period.
typedef struct _CEPERF_ITEM_DATA {
    WORD  wVersion;             // Version of this struct, set to 1
    WORD  wSize;                // Size of this struct and the CPU counter data following it
    
    union {
        struct {
            LARGE_INTEGER liPerfCount;  // Elapsed time delta from Begin call, in
                                        // high-frequency performance counter
                                        // ticks, if recorded
            LARGE_INTEGER liThreadTicks;// Thread run-time delta from Begin call,
                                        // in millisecond ticks, if recorded
            DWORD dwTickCount;          // Elapsed time delta from Begin call, in
                                        // millisecond ticks, if recorded
        
            // Followed by the CPU counter deltas, as defined in
            // pCPUCounterDescriptor, if the CPU counters are turned on and are
            // being recorded for this particular Duration item.  The item's
            // dwRecordingFlags say which counters are being tracked.  Only
            // those counters will be valid in this struct.
        } Duration;
        
        struct {
            ULARGE_INTEGER ulValue;     // Current value
        } Statistic;
        
        struct {
            DWORD dwReserved;           // Unused
        } LocalStatistic;
    };

} CEPERF_ITEM_DATA;



// Originally CePerf was designed so that you must specifically set CEPERF_ENABLE
// in order to add it to your code.  However as use became widespread, the flag
// was applied inconsistently across various deptrees.  To make usage more
// consistent, the necessity for that flag has been removed.  Now it is always
// enabled unless you explicitly define a new flag, CEPERF_DISABLE, to remove it.
// If you own code that still references CEPERF_ENABLE, you can now remove those
// references and expect the CePerf APIs to always be present.

#ifndef CEPERF_DISABLE

// Make sure CEPERF_ENABLE is defined for any code that includes this header,
// to support legacy code that has #ifdef's
#ifndef CEPERF_ENABLE
#define CEPERF_ENABLE
#endif


//==============================================================================
// GLOBALS
//==============================================================================

// Note: Should probably be "__declspec(selectany)" but that causes build breaks
// in various places - revisit in the future when we can clean the tree up.
extern LPVOID pCePerfInternal;



//==============================================================================
// EXCEPTION HANDLING
//==============================================================================

// You can set CEPERF_UNSAFE to disable exception handling, but do it with
// great caution -- you will be at risk of allowing CePerf.dll to bring your 
// logging application down!  Do not set CEPERF_UNSAFE in shipping code!

#ifdef CEPERF_UNSAFE
#define CEPERF_TRY
#define CEPERF_CATCH
#else
#define CEPERF_TRY      __try
#define CEPERF_CATCH    __except(EXCEPTION_EXECUTE_HANDLER) {;}
#endif // CEPERF_UNSAFE


//==============================================================================
// INTERNAL FUNCTIONS
//==============================================================================

typedef HRESULT (*PFN_CePerfOpenSession) (HANDLE, LPCWSTR, DWORD, const CEPERF_SESSION_INFO* lpInfo);
typedef HRESULT (*PFN_CePerfCloseSession) (HANDLE);
typedef HRESULT (*PFN_CePerfRegisterTrackedItem) (HANDLE, HANDLE*, CEPERF_ITEM_TYPE, LPCWSTR, DWORD, const CEPERF_EXT_ITEM_DESCRIPTOR*);
typedef HRESULT (*PFN_CePerfDeregisterTrackedItem) (HANDLE);
typedef HRESULT (*PFN_CePerfRegisterBulk) (HANDLE, CEPERF_BASIC_ITEM_DESCRIPTOR*, DWORD, DWORD);
typedef HRESULT (*PFN_CePerfDeregisterBulk) (CEPERF_BASIC_ITEM_DESCRIPTOR*, DWORD);
typedef HRESULT (*PFN_CePerfBeginDuration) (HANDLE);
typedef HRESULT (*PFN_CePerfIntermediateDuration) (HANDLE, CEPERF_ITEM_DATA*);
typedef HRESULT (*PFN_CePerfEndDurationWithInformation) (HANDLE, DWORD, const BYTE*, DWORD, CEPERF_ITEM_DATA*);
typedef HRESULT (*PFN_CePerfAddStatistic) (HANDLE, DWORD, CEPERF_ITEM_DATA*);
typedef HRESULT (*PFN_CePerfSetStatistic) (HANDLE, DWORD);
typedef HRESULT (*PFN_CePerfControlSession) (HANDLE, LPCWSTR, DWORD, DWORD, const CEPERF_SESSION_INFO*);
typedef HRESULT (*PFN_CePerfControlCPU) (DWORD, LPVOID, DWORD);
typedef HRESULT (*PFN_CePerfFlushSession) (HANDLE, LPCWSTR, DWORD, DWORD);


#define CEPERF_GLOBALS_VERSION 1

// Private struct that should not be used except within this header file
typedef struct _CePerfGlobals {
    DWORD   dwVersion;                      // Set to CEPERF_GLOBALS_VERSION
    DWORD   dwReserved;  // no longer used
    DWORD   dwCePerfDLLRefcount;

    PFN_CePerfOpenSession                   pCePerfOpenSession;
    PFN_CePerfCloseSession                  pCePerfCloseSession;
    PFN_CePerfRegisterTrackedItem           pCePerfRegisterTrackedItem;
    PFN_CePerfDeregisterTrackedItem         pCePerfDeregisterTrackedItem;
    PFN_CePerfRegisterBulk                  pCePerfRegisterBulk;
    PFN_CePerfDeregisterBulk                pCePerfDeregisterBulk;
    
    PFN_CePerfBeginDuration                 pCePerfBeginDuration;
    PFN_CePerfIntermediateDuration          pCePerfIntermediateDuration;
    PFN_CePerfEndDurationWithInformation    pCePerfEndDurationWithInformation;

    PFN_CePerfAddStatistic                  pCePerfAddStatistic;
    PFN_CePerfSetStatistic                  pCePerfSetStatistic;

    PFN_CePerfControlSession                pCePerfControlSession;
    PFN_CePerfControlCPU                    pCePerfControlCPU;
    PFN_CePerfFlushSession                  pCePerfFlushSession;
} CePerfGlobals;

typedef HRESULT (*PFN_CePerfInit) (CePerfGlobals**);
typedef HRESULT (*PFN_CePerfDeinit) (CePerfGlobals**);


// We only try to load ceperf.dll once per process.  When there are many files
// in ROM, load failures can be especially costly.  You can set
// CEPERF_ALWAYS_RELOAD to always retry the reload, but you take the perf hit
// into your own hands then.
#ifndef CEPERF_ALWAYS_RELOAD
  // Don't keep trying to load the DLL if it's missing
  #define CEPERF_RELOAD_FLAG FALSE
#else
  // If we fail to load, we'll try again next time someone opens a session
  #define CEPERF_RELOAD_FLAG TRUE
#endif

// Only returns non-NULL if the DLL is loaded
#define GetCePerfGlobals() ((CePerfGlobals*) pCePerfInternal)

// Coredll APIs - internal only, not to be called directly
CePerfGlobals* CePerfDLLSetup(LPVOID* ppCePerfInternal, BOOL AlwaysReload);
BOOL CePerfDLLCleanup(LPVOID* ppCePerfInternal);



//==============================================================================
// DATA LOGGING APIS
//==============================================================================

// Open an existing session or create a new one
_inline HRESULT CePerfOpenSession(
    HANDLE* lphSession,         // Will receive handle to open perf session on
                                // success, or INVALID_HANDLE_VALUE on failure
    LPCWSTR lpszSessionPath,    // Name of session (NULL-terminated, limit
                                // MAX_PATH, case-insensitive), or NULL. If two 
                                // applications open the same session name, 
                                // they will share the same session between 
                                // them.  NULL is the global "root" session.  
                                // Use "\\" to create hierarchy.
    DWORD   dwStatusFlags,      // CEPERF_STATUS_* flags, or 0 to default to
                                // settings of existing session (if present),
                                // or to settings of parent session
    const CEPERF_SESSION_INFO* lpInfo  // Pointer to extended information about
                                // session data recording and storage, or NULL
                                // to default to settings of existing session
                                // (if present), or to settings of parent session
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        // Load the DLL if necessary
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (!pGlobals) {
            pGlobals = CePerfDLLSetup(&pCePerfInternal, CEPERF_RELOAD_FLAG);
            
            // Version check
            if (pGlobals && (pGlobals->dwVersion != CEPERF_GLOBALS_VERSION)) {
                // The DLL was found but it's an incorrect version
                CePerfDLLCleanup(&pCePerfInternal);
                pGlobals = NULL;
            }
        }
        
        if (pGlobals) {
            InterlockedIncrement((LPLONG)&(pGlobals->dwCePerfDLLRefcount));
            hr = pGlobals->pCePerfOpenSession(
                lphSession, lpszSessionPath, dwStatusFlags, lpInfo);
            if ((ERROR_SUCCESS != hr)
                && (InterlockedDecrement((LPLONG)&(pGlobals->dwCePerfDLLRefcount)) == 0)) {
                CePerfDLLCleanup(&pCePerfInternal);
            }
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


// Helper wrapper to open a session with default settings.
// A data collector can always change these settings using CePerfControlSession.
_inline HRESULT CePerfOpenStandardSession(
    HANDLE *lphSession,
    LPCWSTR lpszSessionPath
    )
{
    CEPERF_SESSION_INFO info;

    // Session setup
    memset(&info, 0, sizeof(info));
    info.wVersion = 1;
    info.dwStorageFlags = CEPERF_STORE_REGISTRY;

    return CePerfOpenSession(lphSession, lpszSessionPath,
        CEPERF_STATUS_RECORDING_ENABLED | CEPERF_STATUS_STORAGE_ENABLED, &info);
}


// Close an open session handle
_inline HRESULT CePerfCloseSession(
    HANDLE hSession             // Perf session handle to close
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (pGlobals) {
            hr = pGlobals->pCePerfCloseSession(hSession);
            if ((ERROR_SUCCESS == hr)
                && (InterlockedDecrement((LPLONG)&(pGlobals->dwCePerfDLLRefcount)) == 0)) {
                CePerfDLLCleanup(&pCePerfInternal);
            }
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


// Register a perf item within an open session
_inline HRESULT CePerfRegisterTrackedItem(
    HANDLE  hSession,           // Perf session the tracked item belongs to
    HANDLE* lphTrackedItem,     // Will receive handle to identify item with, 
                                // can be NULL; if NULL the item will be tracked
                                // until the last session handle is closed, 
                                // since it cannot be deregistered
    CEPERF_ITEM_TYPE type,      // Type of tracked item
    LPCWSTR lpszItemName,       // Name of tracked item (NULL-terminated, limit
                                // 32 chars, case-insensitive). If the same name
                                // is registered twice in the same session, both
                                // instances will refer to the
                                // same item.
    DWORD   dwRecordingFlags,   // Flags for default recording mode (may be
                                // overridden by session defaults or dynamic
                                // session control)
    const CEPERF_EXT_ITEM_DESCRIPTOR* lpInfo  // Pointer to extended information 
                                // about tracked item, or NULL
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (pGlobals) {
            hr = pGlobals->pCePerfRegisterTrackedItem(
                hSession, lphTrackedItem, type, lpszItemName, dwRecordingFlags,
                lpInfo);
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


// Deregister a previously registered item
_inline HRESULT CePerfDeregisterTrackedItem(
    HANDLE hTrackedItem         // Handle of item being deregistered
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (pGlobals) {
            hr = pGlobals->pCePerfDeregisterTrackedItem(hTrackedItem);
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


// Bulk-register a set of very basic perf items within an open session.
// Handles for all items which succeed will be assigned to their structs.
// Only the most basic information can be registered in bulk.  Any item that
// requires extended settings must be registered individually.
_inline HRESULT CePerfRegisterBulk(
    HANDLE  hSession,           // Perf session the tracked items belong to
    CEPERF_BASIC_ITEM_DESCRIPTOR* lprgItemList, // Array of items to register
    DWORD   dwNumItems,         // Number of descriptors in array
    DWORD   dwReserved          // Not currently used; set to 0
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (pGlobals) {
            hr = pGlobals->pCePerfRegisterBulk(
                hSession, lprgItemList, dwNumItems, dwReserved);
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


// Bulk-deregister a set of very basic perf items.  Handles for all items will
// be set to INVALID_HANDLE_VALUE in their structs.
_inline HRESULT CePerfDeregisterBulk(
    CEPERF_BASIC_ITEM_DESCRIPTOR* lprgItemList, // Array of items to deregister
    DWORD   dwNumItems          // Number of descriptors in array
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (pGlobals) {
            hr = pGlobals->pCePerfDeregisterBulk(lprgItemList, dwNumItems);
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}



//------------------------------------------------------------------------------
// DURATION LOGGING: Records time (or other changes) between entry & exit

// Mark the beginning of the period of interest
_inline HRESULT CePerfBeginDuration(
    HANDLE hTrackedItem         // Handle of Duration item being entered
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (pGlobals) {
            hr = pGlobals->pCePerfBeginDuration(hTrackedItem);
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


// Mark an intermediate point during the period of interest
_inline HRESULT CePerfIntermediateDuration(
    HANDLE hTrackedItem,        // Handle of Duration item being marked
    CEPERF_ITEM_DATA* lpData    // Buffer to receive data changes since the
                                // the beginning of the Duration, or NULL.
                                // wVersion and wSize must be set in the struct.
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (pGlobals) {
            hr = pGlobals->pCePerfIntermediateDuration(hTrackedItem, lpData);
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


// Mark the end of the period of interest
_inline HRESULT CePerfEndDuration(
    HANDLE hTrackedItem,        // Handle of Duration item being exited
    CEPERF_ITEM_DATA* lpData    // Buffer to receive data changes since the
                                // the beginning of the Duration, or NULL.
                                // wVersion and wSize must be set in the struct.
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (pGlobals) {
            hr = pGlobals->pCePerfEndDurationWithInformation(
                hTrackedItem, 0, NULL, 0, lpData);
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


// Mark the end of the period of interest, with or without an error, and attach
// additional information.
// If a non-zero error code is passed:
//   * If the Duration is in minimum record mode, the period that is ending
//     will be regarded as an error and its data (time change, CPU perf counter
//     changes, etc.) will not be recorded.
//   * If the Duration is in short or full record mode, the error code will be
//     logged with the exit event in the data stream.
// If a buffer of additional information is passed:
//   * If the Duration is in minimum record mode, the additional information
//     will not be recorded.
//   * If the Duration is in short or maximum record mode, the end event and 
//     information will be added to the data stream.
_inline HRESULT CePerfEndDurationWithInformation(
    HANDLE hTrackedItem,        // Handle of Duration item being exited
    DWORD  dwErrorCode,         // Error code for the aborted Duration, or 0 for no error
    const BYTE* lpInfoBuf,      // Buffer of additional information to log, or NULL
    DWORD  dwInfoBufSize,       // Size of information buffer, in bytes
    CEPERF_ITEM_DATA* lpData    // Buffer to receive data changes since the
                                // the beginning of the Duration, or NULL.
                                // wVersion and wSize must be set in the struct.
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (pGlobals) {
            hr = pGlobals->pCePerfEndDurationWithInformation(
                hTrackedItem, dwErrorCode, lpInfoBuf, dwInfoBufSize, lpData);
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}



//------------------------------------------------------------------------------
// STATISTIC LOGGING: Maintains counters for important statistics

// Increment a Statistic by 1
_inline HRESULT CePerfIncrementStatistic(
    HANDLE hTrackedItem,        // Handle of Statistic item being incremented
    CEPERF_ITEM_DATA* lpData    // Buffer to receive new value of Statistic, or
                                // NULL (recommend set to NULL for best 
                                // performance).
                                // wVersion and wSize must be set in the struct.
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (pGlobals) {
            hr = pGlobals->pCePerfAddStatistic(hTrackedItem, 1, lpData);
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


// Add a value to a Statistic
_inline HRESULT CePerfAddStatistic(
    HANDLE hTrackedItem,        // Handle of Statistic item being added to
    DWORD  dwValue,             // Value to add to the Statistic
    CEPERF_ITEM_DATA* lpData    // Buffer to receive new value of Statistic, or
                                // NULL (recommend set to NULL for best 
                                // performance).
                                // wVersion and wSize must be set in the struct.
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (pGlobals) {
            hr = pGlobals->pCePerfAddStatistic(hTrackedItem, dwValue, lpData);
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


// Set a Statistic to a specific value
_inline HRESULT CePerfSetStatistic(
    HANDLE hTrackedItem,        // Handle of Statistic item being set
    DWORD  dwValue              // Value to set the Statistic to
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (pGlobals) {
            hr = pGlobals->pCePerfSetStatistic(hTrackedItem, dwValue);
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}



//==============================================================================
// CONTROL APIS
//==============================================================================


// Change session recording and storage settings, or enable/disable recording.
_inline HRESULT CePerfControlSession(
    HANDLE  hSession,           // Handle of session, or INVALID_HANDLE_VALUE
                                // to refer to the session by name
    LPCWSTR lpszSessionPath,    // Name of session, or NULL to refer to the
                                // session by handle
    DWORD   dwControlFlags,     // CEPERF_CONTROL_* flags
    DWORD   dwStatusFlags,      // CEPERF_STATUS_* flags, or 0 to leave unchanged
    const CEPERF_SESSION_INFO* lpInfo  // Pointer to extended information about
                                // session data recording and storage, or NULL
                                // to leave unchanged
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        // Make it possible to call this API without having any sessions open
        // in this module.
        BOOL fNewInstance = FALSE;
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (!pGlobals) {
            pGlobals = CePerfDLLSetup(&pCePerfInternal, CEPERF_RELOAD_FLAG);
            if (pGlobals) {
                // Version check
                if (pGlobals->dwVersion != CEPERF_GLOBALS_VERSION) {
                    // The DLL was found but it's an incorrect version
                    CePerfDLLCleanup(&pCePerfInternal);
                    pGlobals = NULL;
                } else {
                    InterlockedIncrement((LPLONG)&(pGlobals->dwCePerfDLLRefcount));
                    fNewInstance = TRUE;
                }
            }
        }

        if (pGlobals) {
            hr = pGlobals->pCePerfControlSession(
                hSession, lpszSessionPath, dwControlFlags, dwStatusFlags, lpInfo);

            // Clean up the instance data again if no session is open in this module
            if (fNewInstance
                && (InterlockedDecrement((LPLONG)&(pGlobals->dwCePerfDLLRefcount)) == 0)) {
                CePerfDLLCleanup(&pCePerfInternal);
            }
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


// Re-program the perf counters for the CPU.
_inline HRESULT CePerfControlCPU(
    DWORD  dwCPUFlags,          // CEPERF_CPU_* flags
    LPVOID lpCPUControlStruct,  // Control structure defined for this CPU
    DWORD  dwCPUControlSize     // Size of control structure
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        // Make it possible to call this API without having any sessions open
        // in this module.
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (!pGlobals) {
            pGlobals = CePerfDLLSetup(&pCePerfInternal, CEPERF_RELOAD_FLAG);
            if (pGlobals) {
                // Version check
                if (pGlobals->dwVersion != CEPERF_GLOBALS_VERSION) {
                    // The DLL was found but it's an incorrect version
                    CePerfDLLCleanup(&pCePerfInternal);
                    pGlobals = NULL;
                } else {
                    InterlockedIncrement((LPLONG)&(pGlobals->dwCePerfDLLRefcount));
                    // ... Now need to hold the DLL instance open to maintain these settings
                    // BUGBUG basically a leak, how to clean it up??
                }
            }
        }

        if (pGlobals) {
            hr = pGlobals->pCePerfControlCPU(
                dwCPUFlags, lpCPUControlStruct, dwCPUControlSize);
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


// Write data and/or descriptors of discrete tracked items, or descriptors of 
// continuous tracked items, to the storage location.
_inline HRESULT CePerfFlushSession(
    HANDLE  hSession,           // Handle of session, or INVALID_HANDLE_VALUE
                                // to refer to the session by name
    LPCWSTR lpszSessionPath,    // Name of session, or NULL to refer to the
                                // session by handle
    DWORD   dwFlushFlags,       // CEPERF_FLUSH_* flags
    DWORD   dwReserved          // Not currently used; set to 0
    )
{
    HRESULT hr = CEPERF_HR_EXCEPTION;

    CEPERF_TRY {
        // Make it possible to call this API without having any sessions open
        // in this module.
        BOOL fNewInstance = FALSE;
        CePerfGlobals* pGlobals = GetCePerfGlobals();
        if (!pGlobals) {
            pGlobals = CePerfDLLSetup(&pCePerfInternal, CEPERF_RELOAD_FLAG);
            if (pGlobals) {
                // Version check
                if (pGlobals->dwVersion != CEPERF_GLOBALS_VERSION) {
                    // The DLL was found but it's an incorrect version
                    CePerfDLLCleanup(&pCePerfInternal);
                    pGlobals = NULL;
                } else {
                    InterlockedIncrement((LPLONG)&(pGlobals->dwCePerfDLLRefcount));
                    fNewInstance = TRUE;
                }
            }
        }

        if (pGlobals) {
            hr = pGlobals->pCePerfFlushSession(
                hSession, lpszSessionPath, dwFlushFlags, dwReserved);
        
            // Clean up the instance data again if no session is open in this module
            if (fNewInstance
                && (InterlockedDecrement((LPLONG)&(pGlobals->dwCePerfDLLRefcount)) == 0)) {
                CePerfDLLCleanup(&pCePerfInternal);
            }
        } else {
            hr = CEPERF_HR_NO_DLL;
        }
    } CEPERF_CATCH;

    return hr;
}


//==============================================================================


#else // CEPERF_DISABLE


#define CePerfOpenSession(lphSession, lpszSessionPath, dwStatusFlags, lpInfo)  \
    (CEPERF_HR_DISABLED)
#define CePerfCloseSession(hSession)                        (CEPERF_HR_DISABLED)
#define CePerfRegisterTrackedItem(hSession, lphTrackedItem, type, lpszItemName, dwRecordingFlags, lpInfo) \
    (CEPERF_HR_DISABLED)
#define CePerfDeregisterTrackedItem(hTrackedItem)           (CEPERF_HR_DISABLED)
#define CePerfRegisterBulk(hSession, lprgItemList, dwNumItems, dwReserved)     \
    (CEPERF_HR_DISABLED)
#define CePerfDeregisterBulk(lprgItemList, dwNumItems)      (CEPERF_HR_DISABLED)

#define CePerfBeginDuration(hTrackedItem)                   (CEPERF_HR_DISABLED)
#define CePerfIntermediateDuration(hTrackedItem, lpData)    (CEPERF_HR_DISABLED)
#define CePerfEndDuration(hTrackedItem, lpData)             (CEPERF_HR_DISABLED)
#define CePerfEndDurationWithInformation(hTrackedItem, dwErrorCode, lpInfoBuf, dwInfoBufSize, lpData) \
    (CEPERF_HR_DISABLED)

#define CePerfIncrementStatistic(hTrackedItem, lpData)      (CEPERF_HR_DISABLED)
#define CePerfAddStatistic(hTrackedItem, dwValue, lpData)   (CEPERF_HR_DISABLED)
#define CePerfSetStatistic(hTrackedItem, dwValue)           (CEPERF_HR_DISABLED)

#define CePerfControlSession(hSession, lpszSessionPath, dwControlFlags, dwStatusFlags, lpInfo) \
    (CEPERF_HR_DISABLED)
#define CePerfControlCPU(dwCPUFlags, lpCPUControlStruct, dwCPUControlSize)     \
    (CEPERF_HR_DISABLED)
#define CePerfFlushSession(hSession, lpszSessionPath, dwFlushFlags, lpInfo)    \
    (CEPERF_HR_DISABLED)


#endif // CEPERF_DISABLE


#ifdef __cplusplus 
}
#endif 

#endif // _CEPERF_H_

