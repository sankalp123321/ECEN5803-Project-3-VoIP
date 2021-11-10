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

#pragma once

// actions sent with the WM_SELECTION message indicating what action the Selection Facilitator would like the control 
// to perform.
enum SELECTION_ACTION
{
    SELECTION_ACTION_DISABLE = 0,
    SELECTION_ACTION_ENABLE,
    SELECTION_ACTION_SETANCHOR,
    SELECTION_ACTION_SELECTALL,
    SELECTION_ACTION_UNSELECT
};

// notification/state of selection.  sent by the control when selection mode is updated or ended
enum SELECTION_STATE
{
    SELECTION_STATE_CANCELLED,
    SELECTION_STATE_ANCHORNOTSET,
    SELECTION_STATE_ANCHORSET,
    SELECTION_STATE_COPIED,
    SELECTION_STATE_CUT, 
    SELECTION_STATE_DELETED
};



// handle to the selection facilitator
DECLARE_HANDLE(HCCP);


extern "C"
{
/// <summary>
/// Entry point to Selection Mode.  Used by an application to allow the user to select content from a control.
/// </summary>
/// <param name="hwndMenuOwner">handle to the application's main window that is currently in view and owns the softkey bar</param>
/// <param name="hwndSelection">handle to the control that is to be put into a selection context</param>
/// <param name="pssResult">result of selection mode.  Can be NULL</param>
/// <returns>
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI EnterSelectMode(HWND hwndMenuOwner, HWND hwndSelection, __out SELECTION_STATE* pss);

/// <summary>
/// API used to report back to the Selection facilitator an updated selection status
/// </summary>
/// <param name="hccp">handle to the selection facilitator</param>
/// <param name="hwndSender">control that is sending the update</param>
/// <param name="ss">notification to give the faciliator</param>
/// <returns>
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI UpdateSelectionState(HCCP hccp, HWND hwndControl, SELECTION_STATE ss);

/// <summary>
/// API used to exit selection mode and report the reason why
/// </summary>
/// <param name="hccp">handle to the selection facilitator</param>
/// <param name="hwndSender">control that is sending the update</param>
/// <param name="ss">reason for exiting</param>
/// <returns>
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI EndSelection(HCCP hccp, HWND hwndControl, SELECTION_STATE ss);
}
