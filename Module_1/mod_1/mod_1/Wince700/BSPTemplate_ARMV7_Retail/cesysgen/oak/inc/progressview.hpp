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
#ifndef __PROGRESSVIEW_HPP__
#define __PROGRESSVIEW_HPP__
/*


Abstract:

This header file defines the interface to the ProgressBarView_t class
which implements the customizable progress bar user interface.

*/

#include <windows.h>

class ProgressBarView_t
{    

private:
    ProgressBarView_t();                                    //    NOT IMPLEMENTED default constructor
    ProgressBarView_t(const ProgressBarView_t&);            //    NOT IMPLEMENTED default copy constructor
    ProgressBarView_t& operator=(const ProgressBarView_t&);    //    NOT IMPLEMENTED default assignment constructor
    ~ProgressBarView_t();                                    //    NOT IMPLEMENTED default destructor

public:
    
    // draws the entire progress bar
    static
    void
    Draw(
        HWND    hwnd,                // [in]
        HDC     hdcIn,               // [in]
        DWORD   dwStyle,             // [in]
        int     iLow,                // [in] 
        int     iHigh,               // [in]
        int     iPos,                // [in]
        int     iStep,               // [in]
        COLORREF clrHighlight,       // [in]
        int* piHighlightPos          // [in, out]  
        );

    /**********************
    Additional skinning functions
    /**********************/

    // Window style should be either GWL_STYLE | GWL_EXSTYLE
    static
    void SetBorder(
        int* piWndStyle,            // [out]
        LONG* plBorderStyle        // [out]
        );
};

#endif /* __PROGRESSVIEW_HPP__ */
