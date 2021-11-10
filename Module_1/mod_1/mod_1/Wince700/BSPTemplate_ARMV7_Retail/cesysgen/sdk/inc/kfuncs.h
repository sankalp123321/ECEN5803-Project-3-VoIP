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


Module Name: kfuncs.h

++*/

#ifndef __KFUNCS_H__
#define __KFUNCS_H__

#define NUM_SYS_HANDLES         32

#define SYS_HANDLE_BASE         64

//
// We now support 128 API sets. Where the API numbers are defined as follows
// 
//      0:      kernel WIN32 API set
//      1-63:   OS reserved Handle based API sets
//      64-79:  partner defined Handle based API sets
//      80-111: OS reserved non-handle based API sets
//      112-127:partner defined non-hnadle based API sets
//
// non-handle-based APIs (API set 80-127) will receive PSL notifications.
//
//
#define SH_FIRST_OS_HAPI_SET    1       // 1st OS, handle based API set
#define SH_FIRST_EXT_HAPI_SET   64      // 1st partner defined handle based API set
#define SH_FIRST_OS_API_SET     80      // 1st OS non-handle based API set
#define SH_FIRST_EXT_API_SET    112     // 1st partner defined non-handle based API set

#define SH_WIN32                0

#define SH_CURTHREAD            1
#define SH_CURPROC              2
//#define SH_CURTOKEN             3     // Does not exist in CE7

// Special handle indicies used for "typed" handle calls
#define HT_EVENT                4       // Event handle type
#define HT_MUTEX                5       // Mutex handle type
#define HT_APISET               6       // kernel API set handle type
#define HT_FILE                 7       // open file handle type
#define HT_FIND                 8       // FindFirst handle type
#define HT_DBFILE               9       // open database handle type
#define HT_DBFIND               10      // database find handle type
#define HT_SOCKET               11      // WinSock open socket handle type
#define HT_CRITSEC              12      // Critical section
#define HT_SEMAPHORE            13      // Semaphore handle type
#define HT_FSMAP                14      // mapped files
#define HT_WNETENUM             15      // Net Resource Enumeration
#define HT_AFSVOLUME            16      // file system volume handle type
#define HT_NAMESPACE            17      // namespace type
#define HT_POLICY               18      // policy type
#define HT_SECLOADER            19      // secure loader type

#define SH_LAST_NOTIFY          SH_FIRST_OS_API_SET    // Last set notified on Thread/Process Termination

#define SH_GDI                  (SH_LAST_NOTIFY+0)
#define SH_WMGR                 (SH_LAST_NOTIFY+1)
#define SH_WNET                 (SH_LAST_NOTIFY+2)      // WNet APIs for network redirector
#define SH_COMM                 (SH_LAST_NOTIFY+3)      // Communications not "COM"
#define SH_FILESYS_APIS         (SH_LAST_NOTIFY+4)      // File system APIS
#define SH_SHELL                (SH_LAST_NOTIFY+5)
#define SH_DEVMGR_APIS          (SH_LAST_NOTIFY+6)      // File system device manager
#define SH_TAPI                 (SH_LAST_NOTIFY+7)
#define SH_CPROG                (SH_LAST_NOTIFY+8)      // Cprog APIS
#define SH_SERVICES             (SH_LAST_NOTIFY+10)
#define SH_DDRAW                (SH_LAST_NOTIFY+11)
#define SH_GWEUSER              (SH_LAST_NOTIFY+13)
#define SH_CONNMGR_LEGACY       (SH_LAST_NOTIFY+14)     // ConnMgr legacy API
#define SH_DMSRV                (SH_LAST_NOTIFY+15)     // Device Management APIs
#define SH_INPUT                (SH_LAST_NOTIFY+16)     // Input API
#define SH_COMPOSITOR           (SH_LAST_NOTIFY+17)     // Window Composition
#define SH_NETCF                (SH_LAST_NOTIFY+18)     // .NET Compact Framework sever
#define SH_LASTRESERVED         (SH_FIRST_EXT_API_SET-1)

#ifdef WINCEOEM
#include <psyscall.h>    // change to include only defines required by OEMs
#endif

// NOTE: only kernel and coredll should access PUserKData directly
//       or potentially BC Break once we move on to the next OS.
#if defined(_ARM_)
    #define PUserKData        ((LPBYTE)0xFFFFC800)
#else
    #define PUserKData        ((LPBYTE)0x00005800)
#endif

DWORD __GetUserKData (DWORD dwOfst);

#define SYSHANDLE_OFFSET                0x004

// offsets in kdata/PCB to find #processors and current processor
#define PCB_CURRENT_PROCESSOR_OFFSET    0x040
#define KDATA_TOTAL_PROCESSOR_OFFSET    0x088

// offsets in PCB to find current thread owner process id
#define PCB_OWNER_PROCESS_OFFSET 0x070

#ifdef WINCEOEM
#include <pkfuncs.h>    // change to include only defines required by OEMs
#ifdef WINCEMACRO
#include <mkfuncs.h>
#endif
#endif

#ifndef EventModify
BOOL WINAPI EventModify(HANDLE hEvent, DWORD func);
#endif

#if defined(_M_MRX000) // MIPS

#if (_M_MRX000 == 16) && !defined(NOMIPS16CODE)

extern void __asm(char[], ...);
#ifdef __cplusplus
extern "C" {
#endif
  void __emit(const unsigned __int32 a);
#ifdef __cplusplus
}
#endif
#pragma intrinsic (__emit)
#if _MSC_VER < 1300
extern void DebugBreak();
#pragma intrinsic (DebugBreak)
#else
#define DebugBreak() __debugbreak()
#endif

#else

#if _MSC_VER <= 1200
#pragma warning(disable:4052)
extern void __asm(char[], ...);
_inline void DebugBreak() {
    __asm("break 1");
}
#pragma warning(default:4052)
#else
#pragma warning(disable:4052)
extern void __asm(char[], ...);
#if _MSC_VER < 1300
extern void DebugBreak();
#pragma warning(default:4052)
#else
#define DebugBreak() __debugbreak()
#endif
#endif

#endif

#elif defined(_M_IX86)

#if _MSC_VER < 1300
_inline void DebugBreak() {
    __asm int 3
}
#else
#define DebugBreak() __debugbreak()
#endif

#elif defined(_M_SH)

extern void __asm(const char *, ...);
#if _MSC_VER < 1300
#define DebugBreak() __asm("trapa #1")
#else
#define DebugBreak() __debugbreak()
#endif

#elif defined(_M_ARM)

#ifdef __cplusplus
extern "C" {
#endif
#if _MSC_VER < 1300
void DebugBreak(void);
#else
#define DebugBreak() __debugbreak()
#endif
void __emit(unsigned const __int32);
#ifdef __cplusplus
}
#endif

#else

extern void DebugBreak();

#endif

#define EVENT_PULSE     1
#define EVENT_RESET     2
#define EVENT_SET       3

/*
    @doc BOTH EXTERNAL

    @func BOOL | PulseEvent | Provides a single operation that sets (to signaled) the state 
    of the specified event object and then resets it (to nonsignaled) after releasing the 
    appropriate number of waiting threads. 
    @parm HANDLE | hEvent | handle of event object 

    @comm Follows the Win32 reference description with the following exception:
*/
_inline BOOL PulseEvent(HANDLE h) {
    return EventModify(h,EVENT_PULSE);
}

/*
    @doc BOTH EXTERNAL

    @func BOOL | ResetEvent | Sets the state of the specified event object to nonsignaled. 
    @parm HANDLE | hEvent | handle of event object 

    @comm Follows the Win32 reference description with the following exception:
*/
_inline BOOL ResetEvent(HANDLE h) {
    return EventModify(h,EVENT_RESET);
}

/*
    @doc BOTH EXTERNAL

    @func BOOL | SetEvent | Sets the state of the specified event object to signaled. 
    @parm HANDLE | hEvent | handle of event object 

    @comm Follows the Win32 reference description with the following exception:
*/
_inline BOOL SetEvent(HANDLE h) {
    return EventModify(h,EVENT_SET);
}

/*
    @doc BOTH EXTERNAL
    @func HANDLE | CreateEvent | Creates a named or unnamed event object. 
    @parm LPSECURITY_ATTRIBUTES | lpEventAttributes | address of security attributes (<p must be NULL>). 
    @parm BOOL | bManualReset | flag for manual-reset event 
    @parm BOOL | bInitialState | flag for initial state 
    @parm LPTSTR | lpName | address of event-object name
    @comm Follows the Win32 reference description with these restrictions:
    Only default security attributes are available and existing object names are not supported. 
    The <p lpEventAttributes> parameter must be set to NULL. 
*/

/*
    @doc BOTH EXTERNAL
    @func HANDLE | OpenEvent | Opens an existing named event object. 
    @parm DWORD | dwDesiredAccess | requested access to the event object (<p must be EVENT_ALL_ACCESS>)
    @parm BOOL | bInheritHandle | specifies whether the returned handle is inheritable (<p must be FALSE>)
    @parm LPTSTR | lpName | address of event-object name
    @comm Follows the Win32 reference description with these restrictions:
    The <p dwDesiredAccess> parameter may only be EVENT_ALL_ACCESS.
    The <p bInheritHandle> parameter must be FALSE.
    The <p lpName> parameter may not be NULL. 
*/

/*
    @doc BOTH EXTERNAL
    @func VOID | Sleep | Suspends the execution of the current thread for a specified interval. 
    @parm DWORD | cMilliseconds | sleep time in milliseconds 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func DWORD | WaitForSingleObject | Returns when the specified object is in the 
    signaled state or when the time-out interval elapses. 
    @parm HANDLE | hObject | <p See restrictions below> Handle of object to wait for 
    @parm DWORD | dwTimeout | time-out interval in milliseconds  
    @comm Follows the Win32 reference description without restriction
*/

/*
    @doc BOTH EXTERNAL
    @func DWORD | WaitForMultipleObjects | Returns when one of the specified objects is in the 
    signaled state or when the time-out interval elapses.
    @parm DWORD | cObjects | number of objects to wait on, must be less than MAXIMUM_WAIT_OBJECTS
    @parm const HANDLE* | lphObjects | array of handles to wait on
    @parm BOOL | fWaitAll | must be FALSE
    @parm DWORD | dwTimeout | time-out interval in milliseconds  
    @comm Follows the Win32 reference description with these restrictions:
        bWaitAll must be FALSE
*/

/*
    @doc BOTH EXTERNAL
    @func DWORD | SuspendThread | Suspends the specified thread. 
    @parm HANDLE | hThread | handle to the thread 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func DWORD | ResumeThread | Decrements a thread's suspend count. When the suspend count 
        is decremented to zero, the execution of the thread is resumed. 
    @parm HANDLE | hThread | identifies thread to restart 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func BOOL | SetThreadPriority | Sets the priority value for the specified thread. 
    This value, together with the priority class of the thread's process, determines 
    the thread's base priority level.
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func int | GetThreadPriority | Returns the priority value for the specified thread.
    @parm HANDLE | hThread | handle to thread 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/


/*
    @doc BOTH EXTERNAL
    @func DWORD | GetLastError | Returns the calling thread's last-error code value. 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func VOID | SetLastError | Sets the last-error code for the calling thread. 
    @parm DWORD | fdwError | per-thread error code  
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func BOOL | GetExitCodeThread | Retrieves the termination status of the specified thread. 
    @parm HANDLE | hThread | handle to the thread 
    @parm LPDWORD |lpdwExitCode | address to receive termination status 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

#ifndef _CRTBLD

/*
    @doc BOTH EXTERNAL
    @func HANDLE | GetCurrentThread | Returns a pseudohandle for the current thread. 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

_inline HANDLE GetCurrentThread(void) {
    return ((HANDLE)(SH_CURTHREAD+SYS_HANDLE_BASE));
}

/*
    @doc BOTH EXTERNAL
    @func HANDLE | GetCurrentProcess | Returns a pseudohandle for the current process. 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

_inline HANDLE GetCurrentProcess(void) {
    return ((HANDLE)(SH_CURPROC+SYS_HANDLE_BASE));
}

_inline DWORD GetCurrentThreadId(void) {
    return __GetUserKData (SYSHANDLE_OFFSET + (SH_CURTHREAD * sizeof(HANDLE)));
}

_inline DWORD GetCurrentProcessId(void) {
    return __GetUserKData (SYSHANDLE_OFFSET + (SH_CURPROC * sizeof(HANDLE)));
}

#else // _CRTBLD

HANDLE GetCurrentThread(void);
HANDLE GetCurrentProcess(void);
DWORD GetCurrentThreadId(void);
DWORD GetCurrentProcessId(void);

#endif // _CRTBLD

#define TLS_FUNCALLOC   0
#define TLS_FUNCFREE    1
#define CETLS_FUNCALLOC 2
#define CETLS_FUNCFREE  3

// Error return value for TlsAlloc
#define TLS_OUT_OF_INDEXES          ((DWORD)0xFFFFFFFF)

#ifndef TlsCall
DWORD WINAPI TlsCall (DWORD p1, DWORD p2);
#endif

/*
    @doc BOTH EXTERNAL
    @func DWORD | TlsAlloc | Allocates a thread local storage (TLS) index. Any thread 
    of the process can subsequently use this index to store and retrieve values that 
    are local to the thread.
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

_inline DWORD WINAPI TlsAlloc (void) {
    return TlsCall(TLS_FUNCALLOC, 0);
}

/*
    @doc BOTH EXTERNAL
    @func BOOL | TlsFree | Releases a thread local storage (TLS) index, making it available 
    for reuse. 
    @parm DWORD | dwTlsIndex | TLS index to free  
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/
_inline BOOL WINAPI TlsFree (DWORD dwTlsIndex) {
    return TlsCall(TLS_FUNCFREE, dwTlsIndex);
}

/* TLS cleanup function prototype */
typedef void (*PFN_CETLSFREE) (DWORD ThreadId, LPVOID SlotValue);

/*
    @func DWORD | CeTlsAlloc | Allocate a new slot and set a cleanup function for the slot. 
    @parm DWORD | pfnCleanup | Cleanup function to associate with the given slot.      
    @comm returns a valid slot and associates the cleanup function with the new slot.
    Modules should call this function in their DLL_PROCESS_ATTACH to create a new
    slot and assign a custom cleanup function for this slot. The custom cleanup function
    will be called when a thread using this TLS slot exits or when the slot is cleared
    using TlsFree API call.
*/
_inline DWORD WINAPI CeTlsAlloc (PFN_CETLSFREE pfnCleanup) {
    return TlsCall(CETLS_FUNCALLOC, (DWORD)pfnCleanup);
}

/*
    @func BOOL | CeTlsFree | free the slot value in the current thread; if there is a 
    cleanup function for this slot, call the cleanup function. This should be called by 
    modules in their DLL_THREAD_DETACH code to properly cleanup any TLS value 
    stored for the given slot in the thread which is exiting. It is assumed that this call 
    is always made from DLL_THREAD_DETACH code as the cleanup function 
    associated with this slot index is called without holding any locks.
*/
_inline BOOL WINAPI CeTlsFree (DWORD dwTlsIndex) {
    return TlsCall(CETLS_FUNCFREE, dwTlsIndex);
}


#define VERIFY_READ_FLAG    0
#define VERIFY_EXECUTE_FLAG 0
#define VERIFY_WRITE_FLAG   1
#define VERIFY_KERNEL_OK    2

/*
    @doc BOTH EXTERNAL
    @func BOOL | IsBadReadPtr | Verifies that the calling process 
    has read access to the specified range of memory. 
    @parm CONST VOID | *lpvPtr | address of memory block 
    @parm UINT | cbBytes | size of block 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func BOOL | IsBadWritePtr | Verifies that the calling process has write access 
    to the specified range of memory. 
    @parm LPVOID | lpvPtr | address of memory block  
    @parm UINT | cbBytes | size of block 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func LPVOID | VirtualAlloc | Reserves or commits a region of pages in the virtual 
    address space of the calling process. Memory allocated by this function is automatically 
    initialized to zero. 
    @parm LPVOID | lpvAddress | address of region to reserve or commit  
    @parm DWORD | cbSize | size of region 
    @parm DWORD | fdwAllocationType | type of allocation 
    @parm DWORD | fdwProtect | type of access protection 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func BOOL | VirtualFree | Releases or decommits (or both) a region of pages 
    within the virtual address space of the calling process. 
    @parm LPVOID | lpvAddress | address of region of committed pages  
    @parm DWORD | cbSize | size of region 
    @parm DWORD | fdwFreeType | type of free operation 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func BOOL | VirtualProtect | Changes the access protection on a region of committed 
    pages in the virtual address space of the calling process. This function differs 
    from VirtualProtectEx, which changes the access protection of any process.
    @parm LPVOID | lpvAddress | address of region of committed pages 
    @parm DWORD | cbSize | size of the region 
    @parm DWORD | fdwNewProtect | desired access protection 
    @parm PDWORD | pfdwOldProtect | address of variable to get old protection  
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func DWORD | VirtualQuery | Information about a range of pages in the virtual 
    address space of the calling process. 
    @parm LPCVOID | lpvAddress | address of region 
    @parm MEMORY_BASIC_INFORMATION | pmbiBuffer | address of information buffer  
    @parm DWORD | cbLength | size of buffer 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/
    
/*
    @doc BOTH EXTERNAL
    @func HINSTANCE | LoadLibrary | Maps the specified executable module into the address 
    space of the calling process.
    @parm LPTSTR | lpszLibFile | address of filename of executable module 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL

    @func BOOL | FreeLibrary | Decrements the reference count of the loaded dynamic-link 
    library (DLL) module
    @parm HMODULE |hLibModule | handle of loaded library module  
    @comm Follows the Win32 reference description without restrictions or modifications. 
    @devnote Follows the Win32 reference description without restrictions or modifications
*/

/*
    @doc BOTH EXTERNAL
    @func FARPROC | GetProcAddress | Returns the address of the specified exported dynamic-link 
    library (DLL) function. 
    @parm HMODULE | hModule | handle to DLL module  
    @parm LPSTR | lpszProc | name of function 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func HRSRC | FindResource | Determines the location of a resource with the specified 
    type and name in the specified module. 
    @parm HMODULE |hModule | resource-module handle 
    @parm LPTSTR | lpName | address of resource name  
    @parm LPTSTR | lpType | address of resource type 
    @comm Follows the Win32 reference description with the exception that we don't support
    the resource id 0 (ie: FindResource(h,0,t) will not work as expected).
*/

/*
    @doc BOTH EXTERNAL
    @func HGLOBAL| LoadResource | Loads the specified resource into global memory. 
    @parm HINSTANCE | hModule | resource-module handle  
    @parm HRSRC | hResInfo | resource handle 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func LPVOID| LockResource | Locks a loaded resource
    @parm HGLOBAL | hGlob | Locked resource's handle
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

_inline LPVOID LockResource(HGLOBAL hResData) {
    return ((LPVOID)hResData);
}

/*
    @doc BOTH EXTERNAL
    @func DWORD | GetTickCount | Retrieves the number of milliseconds that have 
    elapsed since Windows was started. 
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

/*
    @doc BOTH EXTERNAL
    @func VOID | OutputDebugString| Sends a string to the debugger for the current application. 
    @parm LPTSTR | lpszOutputString | address of string to be displayed  
    @comm Follows the Win32 reference description with these restrictions:
    @comm Supports only the Unicode version of this function.
*/

/*
    @doc BOTH EXTERNAL
    @func VOID | GetSystemInfo | Returns information about the current system. 
    @parm LPSYSTEM_INFO | lpSystemInfo | address of system information structure  
    @comm Follows the Win32 reference description without restrictions or modifications. 
*/

#ifndef CeGetCurrentTrust
DWORD CeGetCurrentTrust(void);
#endif

#ifndef CeGetCallerTrust
DWORD CeGetCallerTrust(void);
#endif

#ifndef CeGetProcessTrust
DWORD CeGetProcessTrust(HANDLE hProc);
#endif

/*
 * MP Support functions
 */


/*
    @doc BOTH EXTERNAL
    @func BOOL | CeSetThreadAffinity | Returns nonzero if success, zero if failed. 
    @parm HANDLE | hThread | handle to thread
    @parm DWORD | dwProcessor | which processor to set affinity to
*/
BOOL WINAPI CeSetThreadAffinity (  
    HANDLE hThread,
    DWORD  dwProcessor
    );
    
/*
    @doc BOTH EXTERNAL
    @func DWORD | CeGetThreadAffinity | Returns the current thread affinity (processor number). 
    @parm HANDLE | hThread | handle to thread
*/
BOOL WINAPI CeGetThreadAffinity (  
    HANDLE hThread,
    LPDWORD pdwAffinity
);

/*
    @doc BOTH EXTERNAL
    @func BOOL | CeSetProcessAffinity | Returns nonzero if success, zero if failed. 
    @parm HANDLE | hProc | handle to process
    @parm DWORD | dwProcessor | which processor to set affinity to
*/
BOOL WINAPI CeSetProcessAffinity (  
    HANDLE hProc,
    DWORD  dwProcessor
    );

/*
    @doc BOTH EXTERNAL
    @func DWORD | CeGetProcessAffinity | Returns the current process affinity (processor number). 
    @parm HANDLE | hProc | handle to process
*/
BOOL WINAPI CeGetProcessAffinity (  
    HANDLE hProc,
    LPDWORD pdwAffinity
);


/*
    @doc BOTH EXTERNAL
    @func DWORD | CeGetIdleTimeEx | Returns the idle time of a processor. 
    @parm DWORD | dwProcessor | which processor
*/
BOOL WINAPI CeGetIdleTimeEx (  
    DWORD  dwProcessor,
    LPDWORD pdwIdleTime
);

/*
    @doc BOTH EXTERNAL
    @func DWORD | CeGetProcessorState | Returns the state of a processor. 
    @parm DWORD | dwProcessor | which processor
*/
#define CE_PROCESSOR_STATE_POWERED_OFF      1
#define CE_PROCESSOR_STATE_POWERED_ON       2
#define CE_PROCESSOR_STATE_IN_TRANSITION    3
DWORD WINAPI CeGetProcessorState (  
    DWORD  dwProcessor
    );

/*
    @doc BOTH EXTERNAL
    @func DWORD | CeGetTotalProcessors | Returns the number of processors. 
*/
_inline DWORD WINAPI CeGetTotalProcessors (void)
{
    return __GetUserKData (KDATA_TOTAL_PROCESSOR_OFFSET);
}

/*
    @doc BOTH EXTERNAL
    @func DWORD | GetCurrentProcessorNumber | Returns the current processor. 
    @comm Should only be used for debug, for a thread can be rescheduled to run on another
    processor right after the call. 
*/
_inline DWORD WINAPI GetCurrentProcessorNumber (void)
{
    return __GetUserKData (PCB_CURRENT_PROCESSOR_OFFSET);
}

#endif

