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


Module Name: windows.h

Purpose: Master include file for Windows applications.

--*/

#pragma once

#ifndef __WINDOWS__
#define __WINDOWS__

#if !defined(_ARM_) && !defined(_MIPS_) && !defined(_SHX_) && !defined(_X86_)

#if defined(_M_ARM)
#define _ARM_

#elif defined(_M_MRX000)
#define _MIPS_
#if (_M_MRX000 >= 4000)
#define _MIPS64
#endif

#elif defined(_M_SH)
#define _SHX_

#elif defined(_M_IX86)
#define _X86_

#endif

#endif // !defined(_ARM_) && !defined(_MIPS_) && !defined(_SHX_) && !defined(_X86_)

#if defined (_MSC_VER)
#pragma warning(disable:4116)       // TYPE_ALIGNMENT generates this - move it
                                    // outside the warning push/pop scope.
#endif

#ifndef RC_INVOKED
#pragma warning(disable:4514)
#ifndef __WINDOWS_DONT_DISABLE_PRAGMA_PACK_WARNING__
#pragma warning(disable:4103)
#endif
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4001)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#endif /* RC_INVOKED */

#include <windef.h>
#include <types.h>
#include <winbase.h>
#include <wingdi.h>
#include <winuser.h>
#include <winreg.h>
#include <shellapi.h>
#if !defined(WINCEMACRO) && !defined(WIN32_NO_OLE)
// Stop the infinite inclusion of header files
#define COM_NO_WINDOWS_H
#include <ole2.h>
#endif

#include <imm.h>

#include <tchar.h>
#include <excpt.h>

#ifndef RC_INVOKED
#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4001)
#pragma warning(default:4201)
#pragma warning(default:4214)
/* Leave 4514 disabled.  It's an unneeded warning anyway. */
#endif
#endif /* RC_INVOKED */

// On CE force the functions to be linked instead of inline and
// turn off auto deprecate
#ifdef UNDER_CE
#define STRSAFE_LIB
#define STRSAFE_NO_DEPRECATE
#endif
#include <strsafe.h>

#endif /* __WINDOWS__ */

