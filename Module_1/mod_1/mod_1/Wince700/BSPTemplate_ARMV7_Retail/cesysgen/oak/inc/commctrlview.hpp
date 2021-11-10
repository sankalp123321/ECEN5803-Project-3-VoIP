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
#ifndef __COMMCTRLVIEW_HPP_INCLUDED__
#define __COMMCTRLVIEW_HPP_INCLUDED__
/*


Abstract:

This header file defines the interface to the CommCtrlView_t class
which implements the common control OEM-customizable initialization function.  
This function is called every time commctrl.dll is loaded.

*/

#include <windows.h>

class CommCtrlView_t
{
private:
    CommCtrlView_t();									//	NOT IMPLEMENTED default constructor
	CommCtrlView_t(const CommCtrlView_t&);				//	NOT IMPLEMENTED default copy constructor
	CommCtrlView_t& operator=(const CommCtrlView_t&);	//	NOT IMPLEMENTED default assignment constructor
	~CommCtrlView_t();									//	NOT IMPLEMENTED default destructor

public:
	static
	void
	Init(
		HANDLE hinstDLL
		);

    static
    void
    Uninit();
        
};


#endif /* __COMMCTRLVIEW_HPP_INCLUDED__ */