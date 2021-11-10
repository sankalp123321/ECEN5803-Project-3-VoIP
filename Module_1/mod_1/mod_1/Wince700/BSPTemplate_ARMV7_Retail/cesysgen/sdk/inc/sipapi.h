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
#ifndef __INCLUDE_SIP__
#define __INCLUDE_SIP__

#ifdef __cplusplus
extern "C" {
#endif

DWORD WINAPI SipStatus();

#define SIP_STATUS_UNAVAILABLE    0
#define SIP_STATUS_AVAILABLE    1

BOOL WINAPI    SipSetDefaultRect(RECT *);
BOOL WINAPI    SipRegisterNotification(HWND);

BOOL WINAPI SipShowIM(DWORD);

#define SIPF_OFF    0x00000000
#define SIPF_ON     0x00000001
#define SIPF_DOCKED    0x00000002
#define SIPF_LOCKED    0x00000004

#define SPI_SETCOMPLETIONINFO    223
#define SPI_SETSIPINFO            224
#define SPI_GETSIPINFO            225
#define SPI_SETCURRENTIM        226
#define SPI_GETCURRENTIM        227
#define SPI_SIPMOVE            250

typedef struct    tagSIPINFO
{
    DWORD   cbSize;
    DWORD   fdwFlags;
    RECT    rcVisibleDesktop;
    RECT    rcSipRect;
    DWORD   dwImDataSize;
    void   *pvImData;
} SIPINFO;

BOOL WINAPI SipGetInfo(SIPINFO *);
BOOL WINAPI SipSetInfo(SIPINFO *);

typedef struct tagIMENUMINFO
{
    TCHAR   szName[MAX_PATH];
    CLSID   clsid;
} IMENUMINFO, *PIMENUMINFO;

typedef int (* IMENUMPROC)(IMENUMINFO *);

int WINAPI SipEnumIM(IMENUMPROC);
BOOL WINAPI SipGetCurrentIM(CLSID *);
BOOL WINAPI SipSetCurrentIM(CLSID *);

typedef struct    tagIMWINDOWPOS
{
    int     x;        // Screen coordinate
    int     y;        // Screen coordinate
    int     cx;     // Screen coordinate
    int     cy;     // Screen coordinate
} IMWINDOWPOS;

// The following defines are for the WPARAM value in WM_IM_INFO.

#define IM_POSITION            0
#define IM_WIDEIMAGE        1
#define IM_NARROWIMAGE        2
#define IM_HWND_CONTEXT        3
#define IM_CONVERSION_MODE    4
#define IM_SENTENCE_MODE    5
#define IM_KEYBOARD_LAYOUT    6

HRESULT WINAPI SipGetSupportedInputLanguages(const CLSID*,DWORD*,LCID*);

//
// String used for SHSipSetAutoDeploy
//
#define STRING_SIP_AUTODEPLOY_PROPERTY  TEXT("SIP Wnd Auto-Deploy Status")

//+++++++
//
// SIP_AUTODEPLOY_STATE
//

typedef enum tagSIP_AUTODEPLOY_STATE
{
    SIP_AUTODEPLOY_INHERIT = 0, //inherit the behavior of parent window
    SIP_AUTODEPLOY_DISABLE,     //disable auto-deploy
    SIP_AUTODEPLOY_ENABLE,      //enable auto-deploy
}SIP_AUTODEPLOY_STATE;


//////////////////////////////////////////////////////////////////////////////
//
// SHSipSetAutoDeploy
//
//   Set the status of sip auto-deploy for a certain window.
//
// Parameters:
//    hWnd
//        [in] Handle to the window whose SIP auto-deploy enalbe/disable status 
//        is to be changed.
//    st
//        [in] Specifies window SIP_AUTODEPLOY_STATE value. This parameter must 
//        be one of the following values:
//
//        SIP_AUTODEPLOY_ENABLE 
//            Indicates that SIP auto-deploy is enabled for the window.
//        SIP_AUTODEPLOY_DISABLE 
//            Indicates that SIP auto-deploy is disabled for the window. 
//        SIP_AUTODEPLOY_INHERIT
//            Indicates that SIP auto-deploy status is determined by the parent's
//            or ancestor's SIP auto-deploy status.
//
// Return value:
//    If the function succeeds, the return value is S_OK.
//    If the function fails, the return value is one of the following values:
// 
//    Value                       Description
//    ------------------------------------------------------------------------
//    E_INVALIDARG                The input parameter is incorrect. hWnd is 
//                                invalid or state is beyond the 3 values defined.
//    E_FAIL                      Error occurs when setting window property.
//    E_OUTOFMEMORY               Fail to allocate memory for window property.
// 
// Remarks
//    The SIP status will not be changed when user call this API. 
//    To change current SIP status, please call SipSetInfo() or SipShowIM().
// 
//
HRESULT SHSipSetAutoDeploy(HWND hWnd, SIP_AUTODEPLOY_STATE st);

//////////////////////////////////////////////////////////////////////////////
//
// SHSipGetAutoDeploy
//
//   Get the status of sip auto-deploy for a certain window.
//
// Parameters:
//    hWnd
//        [in] Handle to the window whose SIP auto-deploy enable/disable status 
//        is to be get.
//    pst
//        [out] Pointer to the SIP_AUTODEPLOY_STATE that presents for the current
//        state of the window for SIP auto-deploy. 
//        It can be one of the following values:
//
//        SIP_AUTODEPLOY_ENABLE 
//            Indicates that SIP auto-deploy is enabled for the window.
//        SIP_AUTODEPLOY_DISABLE 
//            Indicates that SIP auto-deploy is disabled for the window. 
//        SIP_AUTODEPLOY_INHERIT
//            Indicates that SIP auto-deploy status is determined by the parent's
//            or ancestor's SIP auto-deploy status.
//
// Return value:
//    If the function succeeds, the return value is S_OK.
//    If the function fails, the return value is one of the following values:
// 
//    Value                       Description
//    ------------------------------------------------------------------------
//    E_INVALIDARG                The input parameter is incorrect. hWnd is 
//                                invalid or pst is NULL.
//    E_FAIL                      Error occurs when getting window property.
// 
// Remarks
//    If the SIP auto-deploy status is not set for a given window before, 
//    the return value is SIP_AUTODEPLOY_INHERIT. 
// 
//
HRESULT SHSipGetAutoDeploy(HWND hWnd, SIP_AUTODEPLOY_STATE* pst);

typedef struct _SIP_PREFERENCE_ARG
{
    HWND hwnd;
    SIPSTATE st;
}SIP_PREFERENCE_ARG, *PSIP_PREFERENCE_ARG;

BOOL WINAPI SipPreference(HWND hwnd, SIPSTATE st);

#ifdef __cplusplus
}
#endif

#endif//__INCLUDE_SIP__
