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

#ifndef _M_PWRMGR_H_
#define _M_PWRMGR_H_

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

#ifndef WINCEMACRO
#error WINCEMACRO not defined __FILE__
#endif

#include <kfuncs.h>

/* CE Power Manager API */
#define GetSystemPowerState         WIN32_DEV_CALL(DWORD,  18,  (LPCWSTR pBuffer, DWORD Length, PDWORD pFlags))
#define SetSystemPowerState         WIN32_DEV_CALL(DWORD,  19,  (LPCWSTR pState, DWORD StateFlags, DWORD Options))
#define SetPowerRequirement         WIN32_DEV_CALL(HANDLE, 20,  (PVOID pvDevice, CEDEVICE_POWER_STATE DeviceState, DWORD DeviceFlags, PVOID pvSystemState, DWORD SystemFlags))
#define ReleasePowerRequirement     WIN32_DEV_CALL(DWORD,  21,  (HANDLE hPowerReq))
#define RequestPowerNotifications   WIN32_DEV_CALL(HANDLE, 22,  (HANDLE hMsgQ, DWORD Flags))
#define StopPowerNotifications      WIN32_DEV_CALL(DWORD,  23,  (HANDLE h))
#define DevicePowerNotify           WIN32_DEV_CALL(DWORD,  25,  (PVOID pvDevice, CEDEVICE_POWER_STATE DeviceState, DWORD Flags))
#define RegisterPowerRelationship   WIN32_DEV_CALL(HANDLE, 26, (PVOID pvParent, PVOID pvChild, PPOWER_CAPABILITIES pCaps, DWORD Flags))
#define ReleasePowerRelationship    WIN32_DEV_CALL(DWORD,  27, (HANDLE h))
#define SetDevicePower              WIN32_DEV_CALL(DWORD,  28, (PVOID pvDevice, DWORD dwDeviceFlags, CEDEVICE_POWER_STATE dwState))
#define GetDevicePower              WIN32_DEV_CALL(DWORD,  29, (PVOID pvDevice, DWORD dwDeviceFlags, PCEDEVICE_POWER_STATE pdwState))

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif // _M_PWRMGR_H_

// EOF
