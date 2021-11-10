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
#ifndef __SCROLLVIEW_HPP__
#define __SCROLLVIEW_HPP__
/*


Abstract:

This header file defines the interface to the GWE component "sbcmnview".
This component implements the customizable nonclient scrollbar and
user control scrollbar user interfaces. 

The "sbcmnview" component works in conjunction with the "sbcmn" component.

*/

//    The order of the values is important.
enum SCROLL_STATE
    {
    SCROLL_NO_PRESS,
    SCROLL_UP_PRESS,
    SCROLL_DN_PRESS,
    SCROLL_PGUP_PRESS,
    SCROLL_PGDN_PRESS,
    SCROLL_SLIDE_PRESS,
    SCROLL_UNAVAIL,
    SCROLL_NEXT_FREE,
    SCROLL_SHOW, // Scroll bar appearing
    SCROLL_HIDE  // Scroll bar disappearing
    };

struct ScrollBarInfoInternal
    {
    SCROLLINFO      si;
    BOOL            bInSetSBInfo;
    int             nThumbPos;      // pixel position of top of thumb
    SCROLL_STATE    dwState;        // internal scrollbar state
    UINT            nTrackStart;    // used during tracking. top of thumb
    UINT            fnBar;          // indicates whether non-client or control
    UINT            idTimer;        // timer id
    HWND            hwnd;           // Scrollbar indicator control.
                                    // Valid only if SB_CTL_HORZ or SB_CTL_VERT set in fnBar.
    UINT            idIndicatorTimer; // Timer for hiding scrollbar indicator control.
                                      // Valid only if SB_CTL_HORZ or SB_CTL_VERT set in fnBar.
    };

typedef void (*PFN_ACTIONCALLBACK)(INT_PTR pUserParam);

class ScrollBarView_t
{
private:
    ScrollBarView_t();                                //    NOT IMPLEMENTED default constructor
    ScrollBarView_t(const ScrollBarView_t&);            //    NOT IMPLEMENTED default copy constructor
    ScrollBarView_t& operator=(const ScrollBarView_t&);    //    NOT IMPLEMENTED default assignment constructor
    ~ScrollBarView_t();                                //    NOT IMPLEMENTED default destructor

public:

    static
    BOOL
    UseScrollIndicators();
    
    static
    void
    DrawScrollBar(
        HDC                    hdc,         // [in]
        HWND                   hwnd,        // [in]
        BOOL                   fVert,       // [in]
        SCROLL_STATE           State,       // [in]
        UINT32                 WindowState, // [in]
        UINT32                 WindowSyle,  // [in]
        ScrollBarInfoInternal* psbii,       // [in]
	    __in_opt PFN_ACTIONCALLBACK pfnCallback, // [in] 
	    INT_PTR pUserParam                  // [in] 
        );
    
    static
    int
    GetScrollRects(
        HWND     hwnd,                    // [in]
        RECT*    prcBounds,               // [out]
        RECT*    prcUp,                   // [out]
        RECT*    prcDn,                   // [out]
        RECT*    prcThumb,                // [out]
        BOOL     fVert,                   // [in]
        ScrollBarInfoInternal*    psbii   // [in]    
        );
    
    static
    SCROLL_STATE
    ScrollHitTest(
        HWND     hwnd,                     // [in]
        POINT    pt,                       // [in]
        BOOL     fVert,                    // [in]
        ScrollBarInfoInternal*    psbii    // [in]
        );
    
    // returns top thumb coordinate for vertical scrollbar
    // and left thumb coordinate for horizontal scrollbar
    static
    LONG
    GetThumbPixel(
        HWND    hwnd,                      // [in]
        BOOL    fVert,                     // [in]
        ScrollBarInfoInternal*    psbii    // [in]
        );
    
    //  Determines where the scroll thumb should be positioned
    //  given the specified pt and then redraws the thumb at that location.
    //  We also send the appropriate scroll message to the app.
    static
    void
    TrackThumb(
        HWND    hwnd,                      // [in]
        HDC     hdc,                       // [in]
        POINT   pt,                        // [in]
        BOOL    fVert,                     // [in]
        ScrollBarInfoInternal    *psbii    // [in]
        );
};
          
          
          

#endif // __SCROLLVIEW_H__

