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
/*-------------------------------------------------------------------------------


Module Name:

cmthread.h

Description:
Declare mini thread object

-------------------------------------------------------------------------------*/
#ifndef __CMTHREAD_H_
#define __CMTHREAD_H_
class CMiniThread
{
public :
    CMiniThread( DWORD dwStackSize = 0, BOOL bSuspended = FALSE )
    {
        m_bTerminated = FALSE;
        m_dwExitCode = ( DWORD ) - 1;
        m_hThreadHandle = ::CreateThread( NULL,
                                          dwStackSize,
                                          CMiniThread::ThreadProc,
                                          ( LPVOID )this,
                                          bSuspended ? CREATE_SUSPENDED : 0,
                                          &m_dwThreadId );
        m_bSuspendFlag = bSuspended;
    };

        
    virtual ~CMiniThread()
    {
        ForceTerminated();
    }

    BOOL    ThreadStart()
    {
        if( m_bSuspendFlag )
        {
            if( ResumeThread( m_hThreadHandle ) == ( DWORD ) ( -1 ) )
            {
                // failure for resume somehow
                return FALSE;
            };
            m_bSuspendFlag = FALSE;
        }
        return TRUE;
    }

    BOOL    ThreadStop()
    {
        if( !m_bSuspendFlag )
        {
            if( SuspendThread( m_hThreadHandle ) == ( DWORD ) ( -1 ) )
            {
                // failure
                return FALSE;
            }
            m_bSuspendFlag = TRUE;
        }
        return TRUE;
    }
    
    BOOL    CeSetPriority( int nPriority )
    {
        if( m_hThreadHandle )
        {
            return CeSetThreadPriority( m_hThreadHandle, nPriority );
        }
        return FALSE;
    }
    
    BOOL    ThreadTerminated( DWORD dwMilliSeconds )
    {
        m_bTerminated = TRUE;
        return WaitThreadComplete( dwMilliSeconds  );
    }
    
    BOOL    WaitThreadComplete( DWORD dwMilliSeconds )
    {
        if( !m_hThreadHandle )
        {
            return FALSE;
        };

        if( ThreadStart() )
        {
            if( ::WaitForSingleObject( m_hThreadHandle, dwMilliSeconds ) ==
                WAIT_OBJECT_0 )
            {
                // thread dead
                ::CloseHandle( m_hThreadHandle );
                m_hThreadHandle = NULL;
                return TRUE;
            }
        }
        return FALSE;
    }

    BOOL    ForceTerminated()
    {
        if( m_hThreadHandle )
        {
#pragma prefast(suppress: 6258, "Using TerminateThread does not allow proper thread clean up")
            BOOL bReturn = ::TerminateThread( m_hThreadHandle, ( DWORD ) - 1 ); // terminate abnormal
            m_dwExitCode = (DWORD)-1;
            ::CloseHandle( m_hThreadHandle );
            m_hThreadHandle = NULL;
            return bReturn;
        };
        return TRUE;
    }

    DWORD GetThreadId() const
    {
        return m_dwThreadId;
    };
    BOOL IsTerminated() const
    {
        return m_bTerminated;
    };
    HANDLE GetThreadHandle()
    {
        return m_hThreadHandle;
    };
    BOOL GetExitCodeThread( LPDWORD lpExitCode ) const
    {
        if( !m_hThreadHandle )
        {
            *lpExitCode = m_dwExitCode;
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    };
private:
    virtual DWORD       ThreadRun() = 0; // User have to implement this function.
    
    static DWORD WINAPI ThreadProc( LPVOID dParam )
    {
        CMiniThread* pThreadPtr = ( CMiniThread* ) dParam;
        pThreadPtr->m_dwExitCode = pThreadPtr->ThreadRun();
        ::ExitThread( pThreadPtr->m_dwExitCode );
        return pThreadPtr->m_dwExitCode;
    };
    
protected:
    BOOL                m_bTerminated;
private:
    HANDLE              m_hThreadHandle;
    DWORD               m_dwThreadId;
    BOOL                m_bSuspendFlag;
    DWORD               m_dwExitCode;
};

#endif

