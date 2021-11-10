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


Module Name: optimizer.h

--*/

//
//	#define or -D__OPT_DISABLE to disable optimization tuning
//
//	#define __OPT_PLAT_FLAG for the particular architecture you are
//	having trouble with.  For example:
//		#define __OPT_PLAT_FLAG (defined(ARMV5))
//	This flag is cleared automatically.
//
//	You must #define __OPT_VER_OFF and include this file to turn
//  off optimization and #define __OPT_VER_RESTORE and include this
//	file to turn it back on.  These flags are cleared automatically.
//
//	You must #define __OPT_BUGNUMSTRING to the string representing
//	the compiler bug number.  For example:
//		#define	__OPT_BUGNUMSTRING "12345"
//	If you don't define this macro, you will get a compiler error.
//

#ifndef __OPT_DISABLE

#if __OPT_PLAT_FLAG

//
//	If __OPT_VER_OFF, disable optimization.  This flag is cleared
//	once it has been detected as set.
//
#if defined (__OPT_VER_OFF)

//
#ifndef __OPT_BUGNUMSTRING
#error Please specify a compiler bug number.
#endif	// __OPT_BUGNUMSTRING

#pragma optimize ("", off)
#pragma message ("Optimization turned off - bug " __OPT_BUGNUMSTRING)

#undef __OPT_VER_OFF

#endif 	// __OPT_VER_OFF

//
//	If __OPT_VER_RESTORE, restore optimization to default
//	settings, but only for specified version. We need
//	to revisit optimization structure for the next version.
//
#if defined (__OPT_VER_RESTORE)

#ifndef __OPT_BUGNUMSTRING
#error Please specify a compiler bug number.
#endif	// __OPT_BUGNUMSTRING

#pragma optimize ("", on)
#pragma message ("Optimization settings restored - bug " __OPT_BUGNUMSTRING)

#undef __OPT_VER_RESTORE

#endif 	// __OPT_VER_RESTORE

#endif	// __OPT_PLAT_FLAG

// clear this flag to avoid confusion if we have to suppress optimization 
// for multiple architectures.
#undef __OPT_PLAT_FLAG

#endif // _OPTIMIZER_H_
