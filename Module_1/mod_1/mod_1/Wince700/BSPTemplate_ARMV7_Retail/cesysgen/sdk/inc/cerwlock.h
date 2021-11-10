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
    cerwlock.h

Abstract:
    Shared/Exclusive lock APIs. This implementation supports:
        a) Recursion
            Thread holding the lock calling to acquire the lock again
        b) Fair
            Lock acquire is fair to threads requesting shared or exclusive access
        c) Lock upgrade/downgrade
            A thread can upgrade a lock from shared to exclusive access or vice-versa
        d) Timeouts
            Lock acquire functions take a timeout to wait for the lock to be available if
            the lock cannot be granted immediately.

--*/

#ifndef _CERWLOCK_H
#define _CERWLOCK_H

#if (_MSC_VER >= 1000)
#pragma once
#endif

#ifdef __cplusplus 
extern "C" { 
#endif 

#include <windows.h>

DECLARE_HANDLE(HRWLOCK);

//
// lock type used by APIs
//

///<topic name="CERWLOCK" displayname="Reader Writer Locks">
///<summary>APIs to create and use reader / writer locks</summary>
///</topic>

typedef enum tagCERW_TYPE
{
    CERW_TYPE_SHARED,
    CERW_TYPE_EXCLUSIVE
    
} CERW_TYPE;

///<topic_scope tref="CERWLOCK">

/// <summary>
///     Creates a new shared/exclusive object and returns a handle to the object.
/// </summary>
/// <param name="dwFlags">
///     [in] Currently the only flag supported is CERW_RECURSION. If this flag is
///     passed, lock is created with recursion support; otherwise the lock is created
///     without the recursion support.
/// </param>
/// <returns>
///     If API call is successful, this function will return a handle to the newly created
///     shared/exclusive object. If API call is unsuccessful, this function will return NULL 
///     handle value. In this case, callers can use <c>GetlastError</c> API to find out the 
///     cause of the failure.
/// </returns>
/// <remarks>
///     Locks created with this API call have the following properties:
///     <list type="bullet">
///         <item>
///             <description>
///                 Multiple shared owners: The lock can be acquired in shared mode by more 
///                 than one thread at the same time. When the lock is acquired by at-least 
///                 one thread in shared mode, lock cannot be acquired for exclusive access 
///                 by any other thread.
///             </description>
///         </item>
///         <item>
///             <description>
///                 Single exclusive owner: The lock can be acquired in exclusive mode by at-
///                 most one thread in the process. When the lock is acquired in exclusive mode,
///                 lock cannot be acquired by other threads for shared or exclusive access until 
///                 the thread which owns the lock in exclusive mode releases the ownership of 
///                 the lock.
///             </description>
///         </item>
///         <item>
///             <description>
///                 Fairness: Lock is granted in the order of lock requests and there is no preference 
///                 given to either shared or exclusive lock requests. Note that this assumes that
///                 all the requesting threads are of the same priority. If threads have different
///                 priority then the locks are granted in the order of priority with the highest priority
///                 thread gaining the lock ownership as soon as it is available ahead of any other
///                 waiting threads.
///             </description>
///         </item>
///         <item>
///             <description>
///                 Timeout: Lock acquire APIs take timeout value. Timeout value of 0 means the acquire
///                 call will return immediately even if the lock is not currently avaialble. Timeout value of
///                 INFINITY means the calling thread will block until the lock is acquired in the given mode.
///                 Any other timeout value will block the calling thread for the set timeout value if the lock
///                 is not available immediately.
///             </description>
///         </item>
///         <item>
///             <description>
///                 Recursion support: This implies that a thread which currently owns the lock 
///                 in shared/exclusive mode can acquire the same lock in the same mode again 
///                 without potential for deadlock. Only when the thread recursion count for a given 
///                 lock goes to 0, the lock is considered not owned by that particular thread.
///             </description>
///         </item>
///     </list>
/// </remarks>

HRWLOCK
CeCreateRwLock (
    __in DWORD dwFlags
    );


/// <summary>
///     Deletes the specified shared/exclusive lock object or marks the specified
///     lock object to be deleted when all threads have relinquished ownership of
///     the lock.
/// </summary>
/// <param name="hLock">
///     [in] Handle to the lock.
/// </param>
/// <returns>
///     <list type="bullet">
///         <item>
///             <description>
///                 TRUE: Lock object is successfully deleted or marked for delete.
///             </description>
///         </item>
///         <item>
///             <description>
///                 FALSE: Lock object is not valid.
///             </description>
///         </item>
///     </list>
/// </returns>
/// <remarks>
///     This call releases any resources allocated in <c> CeCreateRwLock </c> API call. It 
///     is possible that there are threads with outstanding ownership on the lock being 
///     deleted or threads waiting on the lock. In this case the lock is marked to be deleted 
///     when the last thread relinquishes ownership of the lock. Once this API is called, any 
///     subsequent calls to acquire this lock by any thread in the process will fail.
/// </remarks>

BOOL
CeDeleteRwLock(
    __in HRWLOCK hLock
    );


/// <summary>
///     Acquire the specified lock in the requested mode (shared or exclusive).
/// </summary>
/// <param name="hLock">
///     [in] Handle to the lock.
/// </param>
/// <param name="type">
///     [in] Specifies the lock type. Lock can be acquired as:
///     <list type="bullet">
///         <item>
///             <description>
///                 CERW_TYPE_SHARED: Acquire shared access to the lock for the calling thread.
///             </description>
///         </item>
///         <item>
///             <description>
///                 CERW_TYPE_EXCLUSIVE: Acquire exclusive access to the lock for the calling thread.
///             </description>
///         </item>
///     </list>
/// </param>
/// <param name="dwTimeout">
///     [in] Time, in milliseconds, to wait for the lock to become available if access cannot be 
///     granted immediately.
/// </param>
/// <returns>
///     <list type="bullet">
///         <item>
///             <description>
///                 TRUE: The calling thread has ownership of the given lock.
///             </description>
///         </item>
///         <item>
///             <description>
///                 FALSE: Lock could not be granted within the given timeout.
///             </description>
///         </item>
///     </list>
/// </returns>
/// <remarks>
///     Passing a value of "0" for the Timeout argument forces the API call to return immediately 
///     whether the lock is granted or not. If the lock is not granted, calling thread can call 
///     <c>GetLastError</c> API to find out the cause of the failure.
///     When acquiring either _SHARED or _EXCLUSIVE, a simple timeout will
///	    result in GetLastError returning WAIT_TIMEOUT.  However, when acquiring
///	    _EXCLUSIVE recursively, it's possible to encounter a deadlock condition.
///	    In this case, locking fails immediately to prevent deadlock, and
///	    GetLastError returns ERROR_LOCK_VIOLATION.
/// </remarks>

BOOL
CeAcquireRwLock(
    __in HRWLOCK hLock,
    __in CERW_TYPE typeLock,
    __in DWORD dwTimeout
    );


/// <summary>
///     Release shared/exclusive access to the specified lock.
/// </summary>
/// <param name="hLock">
///     [in] Handle to the lock.
/// </param>
/// <param name="type">
///     [in] Specifies the lock type. Lock can be released as:
///     <list type="bullet">
///         <item>
///             <description>
///                 CERW_TYPE_SHARED: Release shared access to the lock by the calling thread.
///             </description>
///         </item>
///         <item>
///             <description>
///                 CERW_TYPE_EXCLUSIVE: Release exclusive access to the lock by the calling thread.
///             </description>
///         </item>
///     </list>
/// </param>
/// <returns>
///     <list type="bullet">
///         <item>
///             <description>
///                 TRUE: Thread recursion count for the given lock is decremented by a count of 1. 
///                 It is possible that the calling thread still has ownership of the lock if the 
///                 calling thread recursion count for the lock is non-zero. Calling thread has to 
///                 call <c>CeReleaseRwLock</c> for every call to <c>CeAcquireRwLock</c> for the 
///                 given lock. Only when the calling thread recursion count for the given lock is 
///                 zero, the lock is assumed to be not owned by the calling thread.
///             </description>
///         </item>
///         <item>
///             <description>
///                 FALSE: Lock is invalid or lock is currently not owned by the calling thread.
///             </description>
///         </item>
///     </list>
/// </returns>
/// <remarks>
///     Once the lock is released, any threads currently waiting for the lock to be available become 
///     signalled if current thread does not own the lock anymore (current thread recursion count for 
///     this lock is zero) or lock is being downgraded (exclusive mode on the lock is being downgraded 
///     to shared mode).
/// </remarks>

BOOL
CeReleaseRwLock(
    __in HRWLOCK hLock,
    __in CERW_TYPE typeLock
    );


/// <summary>
///     Checks whether the calling thread holds the lock in the given mode at the time of the call.
/// </summary>
/// <param name="hLock">
///     [in] Handle to the lock.
/// </param>
/// <param name="type">
///     [in] Specifies the type of the lock to check against. This can be:
///     <list type="bullet">
///         <item>
///             <description>
///                 CERW_TYPE_SHARED: lock in shared mode.
///             </description>
///         </item>
///         <item>
///             <description>
///                 CERW_TYPE_EXCLUSIVE: lock in exclusive mode.
///             </description>
///         </item>
///     </list>
/// </param>
/// <returns>
///     <list type="bullet">
///         <item>
///             <description>
///                 TRUE: Lock is valid and either the calling thread holds the lock in given mode (if the lock
///                 is created with recursion support) or lock is valid and lock is held in given mode by
///                 a thread in the system (if the lock is created without recursion support).
///             </description>
///         </item>
///         <item>
///             <description>
///                 FALSE: Lock is invalid or the lock is not held in the given mode either by current thread
///                 (if lock is created with recursion support) or globally by any thread (if the lock is created
///                 with no recursion support). Calling threads can use <c>GetLastError</c> API to figure 
///                 out if there was an error (due to invalid lock handle) during the call.
///             </description>
///         </item>
///     </list>
/// </returns>
/// <remarks>
/// </remarks>

BOOL
CeIsRwLockAcquired(
    __in HRWLOCK     hLock,
    __in CERW_TYPE typeLock
    );

///</topic_scope> //CERWLOCK


#ifdef __cplusplus 
}
#endif 

#endif  // _CERWLOCK_H

