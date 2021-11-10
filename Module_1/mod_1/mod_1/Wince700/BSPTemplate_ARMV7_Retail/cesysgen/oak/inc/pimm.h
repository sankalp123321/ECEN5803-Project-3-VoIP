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
#ifndef _PRIV_IMM_
#define _PRIV_IMM_

#ifdef __cplusplus
extern "C"  {
#endif

#define IGSC_DEFIMCFALLBACK		0x0002
HIMC
WINAPI
ImmGetContextFromWindowGwe(
	HWND	hWnd
	);

DWORD
WINAPI
ImmAssociateValueWithGwesMessageQueue(
	DWORD dwValue,
	UINT Flags
	);

BOOL
WINAPI
ImmAssociateContextWithWindowGwe(
	HWND	hwnd,
	HIMC	himc,
	DWORD	dwFlags,
	__out_opt HIMC	*phimcPrev,
	__out_opt HWND	*phwndFocus,
	__out_opt HIMC	*phimcFocusPrev,
	__out_opt HIMC	*phimcFocusNew
	);



void
WINAPI
ImmSetImeWndIMC(
	HIMC	hImc,
	HWND	hImeWnd
	);

#ifdef __cplusplus
}
#endif /*__cplusplus*/

#endif
