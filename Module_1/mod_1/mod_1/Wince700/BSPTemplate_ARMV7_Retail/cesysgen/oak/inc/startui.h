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

File:

	startui.h

Abstract:  

This header file defines the "startui" interface.  The startui component 
implements the user interface of the startup dialog, i.e., the dialog that 
appears when the user wakes up the device.  This may be a password 
request, owner information, etc.  It should not be confused with the 
Welcome application which displays on cold boot.  

The startui component is driven by the "startup" component.  The startup 
component is not replaceable but it is removeable if you do not want any 
startup dialog at all.  

The startui component implements the following:

	Startup_Initialize
	Startup_DlgProc
	Startup_WantStartupScreen
	Startup_PowerOnNotification
	Startup_PowerOffWhileStartupActiveNotification

	Startup_CreateDialog (optional) 
	Startup_InitializeBackground (optional)
	Startup_CleanupBackground (optional)

The startup component implements the following:

	Startup_DestroyDialogCallback


--*/



#ifdef __cplusplus
extern "C" {
#endif

/*++

	IDD_STARTUP_DIALOG:

The resource identifier for the startup dialog.


--*/
#define IDD_STARTUP_DIALOG	0x200


/*++

	Startup_Initialize:

Called only once.  It gives the startui component a chance to do any 
initialization it needs to do.  It also tells the startui component what 
HINSTANCE it can use to load resources from GWE.  


--*/
void
Startup_Initialize(
	HINSTANCE hinst
	);


/*++

Startup_DlgProc

The dialog procedure for the startup dialog.


--*/
BOOL
Startup_DlgProc(
	HWND	hDlg,
	UINT	message,
	WPARAM	wParam,
	LPARAM	lParam
	);




/*++

	Startup_WantStartupScreen:


Called to find out if the startup screen should be displayed.  Returns 
TRUE if the startup dialog should appear and FALSE otherwise.  This 
function usually reads registry settings controlled by the user to decide 
whether a startup dialog should appear.  

Note that this function may actually be called when powering off so that the 
system can display the startup screen faster at power on.  


--*/
BOOL
Startup_WantStartupScreen(
	void
	);


/*++

	Startup_PowerOnNotification:

Called when the device is powered on.  This is simply a notification and 
this function is not required to do anything.  

This is running in a normal thread context so posting messages, etc., is 
OK.  


--*/
void
Startup_PowerOnNotification(
	HWND hwndDlg
	);


/*++

	Startup_PowerOffWhileStartupActiveNotification:

Called when power is being turned off while the startup dialog is active 
(visible).  This notification gives the dialog a chance to hide any 
controls which are displaying data that will be stale when the power comes 
back on.  This function is simply a notification and this function is not 
required to do anything.  


--*/
void
Startup_PowerOffWhileStartupActiveNotification(
	HWND hwndDlg
	);


/*++

	Startup_DestroyDialogCallback:

This function is NOT implemented by the startui component.  Rather, it is 
a function which the startui component must call instead of calling 
DestoyWindow when it is ready to bring down its dialog.  


--*/
void
Startup_DestroyDialogCallback(
	void
	);


/*++

	Startup_CreateDialog:

Called to let startui component create startup-dialog box & return its the hwnd

--*/

HWND
Startup_CreateDialog(
	void
	);



/*++

	Startup_InitializeBackground:

Sometimes startup dialog doesnt occupy the whole screen & one might want to have a background covering 
the rest of the screen. startui code can take full responsibility of managing the background or create a window 
which should act as the background and set the value to out-param phwndBackgroundWindow which will be 
made background by startui framework. 

If startui doesn't provide this method, we default to creating a grey full screen static window.

Called to let startui component create background (window/dialog) & return its hwnd

--*/

BOOL
Startup_InitializeBackground(
    HWND* phwndBackgroundWindow
    );


/*++

	Startup_CleanupBackground:

Called to let startui component destroy the background created using Startup_InitializeBackground

--*/

void
Startup_CleanupBackground(
	void
    );


#ifdef __cplusplus
}
#endif
