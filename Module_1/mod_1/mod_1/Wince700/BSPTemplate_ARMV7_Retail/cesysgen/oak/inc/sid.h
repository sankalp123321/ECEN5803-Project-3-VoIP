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

#ifndef __SID_H_INCLUDED__
#define __SID_H_INCLUDED__

#if _MSC_VER > 1000
#pragma once
#endif

//  E l e v a t e d   R i g h t s   C h a m b e r s
#define SID_UDEVICE_ELEVATED                    L"S-1-5-112-0-0X10-0X00000001"


// S t a n d a r d   R i g h t s   C h a m b e r s
#define SID_UDEVICE_STANDARD                    L"S-1-5-112-0-0X20-0X00000001"

//T C B   C h a m b e r s
#define SID_TCB                                 L"S-1-5-112-0-0-1"
#define SID_UDEVICE_TCB                              SID_TCB
 
#endif // __SID_H_INCLUDED__