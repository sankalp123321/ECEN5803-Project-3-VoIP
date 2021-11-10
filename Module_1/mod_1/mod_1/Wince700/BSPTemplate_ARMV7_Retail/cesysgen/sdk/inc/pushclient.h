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
////////////////////////////////////////////////////////////////////////////////
//                      Copyright © 2002, Microsoft Corporation
////////////////////////////////////////////////////////////////////////////////
//
// 
//
//       pushclient.h | 
//                      Push Router Client Interface
//
//     There are six methods in the Push Router Client Interface. 
//          They are defined in pushclient.h. These are APIs on the Push Router proxy dll. 
//          Push Router clients call these APIs. 
//
//          A push router client is a standalone executable that gets registered 
//          with the Push Router and then gets launched if an incoming message matches the  
//          application ID/content-type combination that is registered for that particular client.  
//          Once lauched, the client must call PushRouter_Open to get a handle to Push Router and an event  
//          handle that the client uses to determine when messages arrive for the client. When the event 
//          handle is signaled, the client calls PushRouter_GetMessage to retrieve the message. 
//          Note that, in addition to returning standard Windows HRESULTS, these API's can 
//          also return Push Router-specific HRESULTS, defined in pushclient.h and prefixed by PUSHRTR_.
//
//       The following client example shows how to use these APIs to retrieve 
//          a push message from the Push Router. |
/*

#include "windows.h"
#include "pushclient.h"         

TCHAR const c_szAppId[] = TEXT("TestAppId");
TCHAR const c_szPath[] = TEXT("pushclnt.exe");
TCHAR const c_szContentType[] = TEXT("text/xml");
TCHAR const c_szParams[] = TEXT("/c");

HRESULT
HandleMessage(PUSHMSG *pPushMsg)
{
    // Handle the message here
    return S_OK;

}

int 
WINAPI
WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, LPTSTR szCmdLine, int nCmdShow)
{
    HRESULT         hr              = NOERROR;
    HANDLE          hevtMsgAvailable= NULL;
    HPUSHROUTER     hPushRouter     = NULL;
    PUSHMSG         PushMsg;

    memset(&PushMsg, 0, sizeof(PUSHMSG));

    if (!_tcsicmp(szCmdLine, TEXT("/register"))) 
    {
        hr = PushRouter_RegisterClient(c_szContentType, c_szAppId, c_szPath, c_szParams);
        goto Exit;
    } 
    else if (!_tcsicmp(szCmdLine, TEXT("/unregister"))) 
    {
        hr = PushRouter_UnRegisterClient(c_szContentType, c_szAppId);
        goto Exit;
    }
    else if (!_tcsicmp(szCmdLine, TEXT("/c")))
    {
        // Handle the "/c" parameter here.
    }

    hr = PushRouter_Open(c_szContentType, c_szAppId, &hevtMsgAvailable, &hPushRouter);
    if (FAILED(hr))
    {
        goto Exit;
    }

    while (WaitForSingleObject(hevtMsgAvailable, 10000) != WAIT_TIMEOUT) 
    {
        // Inner loop gets and processes available messages.
        for (;;)
        {
            memset(&PushMsg, 0, sizeof(PUSHMSG));
            PushMsg.cbSize = sizeof(PUSHMSG);

            hr = PushRouter_GetMessage(hPushRouter, &PushMsg);
            if (PUSHRTR_S_NOMESSAGESPENDING == hr)
            {
                // No more pending message. Exit inner loop and wait for message.
                break;
            }
            else if (FAILED(hr))
            {
                goto Exit;
            }
            
            hr = HandleMessage(&PushMsg);
            if (FAILED(hr)) 
            {
                goto Exit;
            }

            PushRouter_FreeMessage(&PushMsg);
        }
    }

Exit:
    hr = PushRouter_Close(hPushRouter);
    PushRouter_FreeMessage(&PushMsg);
    return 0;
}

*/
////////////////////////////////////////////////////////////////////////////////

#pragma once

#ifdef __cplusplus
extern "C" { 
#endif // __cplusplus

#ifndef PUSHROUTERAPI
#define PUSHROUTERAPI
#endif  

// type HPUSHROUTER | Handle to the Push Router.
typedef DWORD HPUSHROUTER;

//
// Push Router-specific Error Return values
// 

// Another client is already opened with same application id/content-type combination.
#define PUSHRTR_E_ALREADYOPENED         0x80530001

// No messages are pending in client's queue.
#define PUSHRTR_S_NOMESSAGESPENDING     0x00530002

// Another client is already registered with same application id/content-type combination.
#define PUSHRTR_E_ALREADYREGISTERED     0x80530003

// No registration exists for the client to be opened or unregistered.
#define PUSHRTR_E_NOTFOUND              0x80530004

// An exception occurred in a pushrouter API.
#define PUSHRTR_E_EXCEPTION             0x80530005
//
// Push Router Structures
//

////////////////////////////////////////////////////////////////////////////////
//
//       PUSHMSG |
//                      Message structure returned to the client from PushRouter_GetMessage 
//
//     The cbSize member needs to be initialized by the push client to be the size of the 
//          PUSHMSG structure before the PUSHMSG structure can be passed into 
//          PushRouter_GetMessage.
////////////////////////////////////////////////////////////////////////////////

typedef struct tagPushMsg
{
    DWORD   cbSize;             //  size of PUSHMSG structure
    LPTSTR  szHeaders;          //  RFC 822 headers
    LPBYTE  pbBody;             //  push message body
    DWORD   cbBodyLength;       //  size of the message body (in bytes)
    DWORD   dwSecurityRole;     //  Security role(s) assigned to the message by Push Router
    DWORD   dwReserved1;        //  Reserved; set to 0
    DWORD   dwReserved2;        //  Reserved; set to 0
} PUSHMSG, *LPPUSHMSG;

//
// Push Router Functions
//

////////////////////////////////////////////////////////////////////////////////
//
//         HRESULT | PushRouter_RegisterClient |
//                      This method registers a client in the Push Router's Registration 
//          Table. All clients that require any interaction with the Push Router 
//          must register using this method.
//
//   PushRouter_RegisterClient(LPCTSTR szContentType, LPCTSTR szAppId, LPCTSTR szPath, LPCTSTR szParams);
//
//         LPCTSTR | szContentType |
//                      Content-type of messages routed to the client
//
//         LPCTSTR | szAppId |
//                      Application ID of the client
//
//         LPCTSTR | szPath |
//                      Path to the client's executable file
//
//         LPCTSTR | szParams |
//                      Command-line parameters to be passed to the client upon launch
//
//       S_OK | Success.
//       PUSHRTR_E_ALREADYREGISTERED | Another client is already registered with same application id/content-type combination.
//       PUSHRTR_E_EXCEPTION | An exception occurred in a pushrouter API.
//
//        HRESULT: An HRESULT describing any errors that occurred.
//
////////////////////////////////////////////////////////////////////////////////

HRESULT PUSHROUTERAPI PushRouter_RegisterClient
(
    LPCTSTR szContentType,
    LPCTSTR szAppId,
    LPCTSTR szPath,
    LPCTSTR szParams
);

////////////////////////////////////////////////////////////////////////////////
//
//         HRESULT | PushRouter_UnRegisterClient |
//                      This method deletes a client entry from the Registration table in the 
//          Push Router. If the client no longer wants to receive push messages 
//          from push router, the client should use this method to unregister itself.
//
//     This API needs to be called once per Application ID/Content-Type combination.
//
//   PushRouter_UnRegisterClient(LPCTSTR szContentType, LPCTSTR szAppId);
//
//         LPCTSTR | szContentType |
//                      Content-type of messages routed to the client
//
//         LPCTSTR | szAppId |
//                      Application ID of the client
//
//       S_OK | Success.
//       PUSHRTR_E_NOTFOUND | No registration exists for the client to be unregistered.
//       PUSHRTR_E_EXCEPTION | An exception occurred in a pushrouter API.
//
//        HRESULT: An HRESULT describing any errors that occurred.
//
////////////////////////////////////////////////////////////////////////////////

HRESULT PUSHROUTERAPI PushRouter_UnRegisterClient
(
    LPCTSTR szContentType,
    LPCTSTR szAppId
);


////////////////////////////////////////////////////////////////////////////////
//
//         HRESULT | PushRouter_Open |
//                      This method opens a communication channel to a client through which 
//          a push message can be passed.  
//
//     CloseHandle should not be called on the message handle returned by PushRouter_Open.
//
//   PushRouter_Open(LPCTSTR szContentType, LPCTSTR szAppId, HANDLE *pMsgAvailableEvent, HPUSHROUTER *phPushRouter);
//
//         LPCTSTR | szContentType |
//                      Content-type of messages routed to the client
//
//         LPCTSTR | szAppId |
//                      Application ID of the client
//
//         HANDLE | *pMsgAvailableEvent |
//                      Handle to event signaled by the Push Router when a message is available
//
//         HPUSHROUTER | *phPushRouter |
//                      Handle to the Push Router
//
//       S_OK | Success.
//       PUSHRTR_E_NOTFOUND | No registration exists for the client to be opened.
//       PUSHRTR_E_ALREADYOPENED | Another client is already opened with same application id/content-type combination.
//       PUSHRTR_E_EXCEPTION | An exception occurred in a pushrouter API.
//
//        HRESULT: An HRESULT describing any errors that occurred.
//
////////////////////////////////////////////////////////////////////////////////

HRESULT PUSHROUTERAPI PushRouter_Open
(
    LPCTSTR      szContentType,
    LPCTSTR      szAppId,
    HANDLE*      pMsgAvailableEvent,
    HPUSHROUTER* phPushRouter
);


////////////////////////////////////////////////////////////////////////////////
//
//         HRESULT | PushRouter_Close |
//                      This method closes the communication with the client.
//
//   PushRouter_Close(HPUSHROUTER hPushRouter);
//
//         HPUSHROUTER | hPushRouter |
//                      Handle to the Push Router
//
//       S_OK | Success.
//       PUSHRTR_E_EXCEPTION | An exception occurred in a pushrouter API.
//
//        HRESULT: An HRESULT describing any errors that occurred.
//
////////////////////////////////////////////////////////////////////////////////

HRESULT PUSHROUTERAPI PushRouter_Close(HPUSHROUTER hPushRouter);


////////////////////////////////////////////////////////////////////////////////
//
//         HRESULT | PushRouter_GetMessage |
//                      This method passes the message from the Push Router to the client.
//
//     The cbSize member needs to be initialized by the push client to be the size of the 
//          PUSHMSG structure before the PUSHMSG structure can be passed into 
//          PushRouter_GetMessage.
//
//   PushRouter_GetMessage(HPUSHROUTER hPushRouter, LPPUSHMSG pPushMsg);
//
//         HPUSHROUTER | hPushRouter |
//                      Handle to the Push Router
//
//         LPPUSHMSG | pPushMsg |
//                      Message structure filled out by the Push Router
//
//       S_OK | Success.
//       PUSHRTR_S_NOMESSAGESPENDING | No messages are pending in client's queue.
//       PUSHRTR_E_EXCEPTION | An exception occurred in a pushrouter API.
//
//        HRESULT: An HRESULT describing any errors that occurred.
//
////////////////////////////////////////////////////////////////////////////////

HRESULT PUSHROUTERAPI PushRouter_GetMessage
(
    HPUSHROUTER hPushRouter,
    LPPUSHMSG pPushMsg
);


////////////////////////////////////////////////////////////////////////////////
//
//  HRESULT | PushRouter_FreeMessage |
//  This method frees up the memory allocated in the client process space 
//  by the Push Router.
//
//  If pMsg is NULL, nothing is done.  
//
//  PushRouter_FreeMessage(LPPUSHMSG pPushMsg);
//
//  LPPUSHMSG | pPushMsg |
//  Message structure filled out by the Push Router
//
//  S_OK | Success.
//
//  HRESULT: An HRESULT describing any errors that occurred.
//
////////////////////////////////////////////////////////////////////////////////

HRESULT PUSHROUTERAPI PushRouter_FreeMessage(__in_opt LPPUSHMSG pPushMsg);


#ifdef __cplusplus
};
#endif // __cplusplus
