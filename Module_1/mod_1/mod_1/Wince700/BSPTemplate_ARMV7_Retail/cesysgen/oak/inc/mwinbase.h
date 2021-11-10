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

Module Name:  

mwinbase.h

Abstract:  

Notes: 


--*/

#ifndef __MWINBASE_H__
#define __MWINBASE_H__

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif  /* __cplusplus */

#ifndef WINCEMACRO
#error WINCEMACRO not defined __FILE__
#endif

/* Win32 Base Dir API Function Indices */

#ifdef KCOREDLL

// kernel 'kcoredll'. call direct
#ifdef BUILDING_FS_STUBS
#define WIN32_FS_CALL(type, api, args)          (*(type (*) args) g_ppfnFysCalls[api])
//#define WIN32_FILE_CALL(type, api, args)        (*(type (*) args)IMPLICIT_CALL(HT_FILE, api))
//#define WIN32_FIND_CALL(type, api, args)        (*(type (*) args)IMPLICIT_CALL(HT_FIND, api))
//#define WIN32_DBFILE_CALL(type, api, args)      (*(type (*) args)IMPLICIT_CALL(HT_DBFILE, api))
//#define WIN32_DBFIND_CALL(type, api, args)      (*(type (*) args)IMPLICIT_CALL(HT_DBFIND, api))
#endif // BUILDING_FS_STUBS
#define PRIV_WIN32_FS_CALL(type, api, args)     ++++ Do Not Use ++++
#define PRIV_WIN32_FILE_CALL(type, api, args)   ++++ Do Not Use ++++
#define WIN32_DEV_CALL(type, api, args)         (*(type (*) args) g_ppfnDevMgrCalls[api])

#else // KCOREDLL

// user mode coredll, trap
#ifdef BUILDING_FS_STUBS
#define WIN32_FS_CALL(type, api, args)          (*(type (*) args)IMPLICIT_CALL(SH_FILESYS_APIS, api))
#define WIN32_FILE_CALL(type, api, args)        (*(type (*) args)IMPLICIT_CALL(HT_FILE, api))
#define WIN32_FIND_CALL(type, api, args)        (*(type (*) args)IMPLICIT_CALL(HT_FIND, api))
#define WIN32_DBFILE_CALL(type, api, args)      (*(type (*) args)IMPLICIT_CALL(HT_DBFILE, api))
#define WIN32_DBFIND_CALL(type, api, args)      (*(type (*) args)IMPLICIT_CALL(HT_DBFIND, api))
#endif // BUILDING_FS_STUBS
#define PRIV_WIN32_FS_CALL(type, api, args)     (*(type (*) args)IMPLICIT_CALL(SH_FILESYS_APIS, api))
#define PRIV_WIN32_FILE_CALL(type, api, args)   (*(type (*) args)IMPLICIT_CALL(HT_FILE, api))
#define WIN32_DEV_CALL(type, api, args)         (*(type (*) args)IMPLICIT_CALL(SH_DEVMGR_APIS, api))

#endif // KCOREDLL

// external exports from filesys
#ifdef WIN32_FS_CALL

#define CreateDirectoryW    +++ Do Not Use +++
#define CreateDirectoryW_Trap    WIN32_FS_CALL(BOOL, 2, (LPCWSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes))

#define RemoveDirectoryW    +++ Do Not Use +++ 
#define RemoveDirectoryW_Trap    WIN32_FS_CALL(BOOL, 3, (LPCWSTR lpPathName))

#define MoveFileW    +++ Do Not Use +++ 
#define MoveFileW_Trap           WIN32_FS_CALL(BOOL, 4, (LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName))

#define SecureWipeAllVolumes    +++ Do Not Use +++
#define SecureWipeAllVolumes_Trap WIN32_FS_CALL(BOOL, 5, ())

#define DeleteFileW    +++ Do Not Use +++ 
#define DeleteFileW_Trap         WIN32_FS_CALL(BOOL, 6, (LPCWSTR lpFileName))

#define GetFileAttributesW    +++ Do Not Use +++ 
#define GetFileAttributesW_Trap  WIN32_FS_CALL(DWORD, 7, (LPCTSTR  lpFileName))

#define FindFirstFileW        +++ Do Not Use +++ 
#define FindFirstFileW_Trap      WIN32_FS_CALL(HANDLE, 8, (LPCWSTR lpFileName, LPWIN32_FIND_DATAW lpFindFileData, DWORD SizeOfFindFileData))

#define CreateFileW           +++ Do Not Use +++ 
#define CreateFileW_Trap         WIN32_FS_CALL(HANDLE, 9, (LPCTSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile))

#define SetFileAttributesW    +++ Do Not Use +++ 
#define SetFileAttributesW_Trap  WIN32_FS_CALL(BOOL, 31, (LPCWSTR lpszName, DWORD dwAttributes))

#define DeleteAndRenameFile           +++ Do Not Use +++ 
#define DeleteAndRenameFile_Trap WIN32_FS_CALL(BOOL, 43, (LPCWSTR lpszOldFile, LPCWSTR lpszNewFile))

#define CheckPassword                 +++ Do Not Use +++ 
#define CheckPassword_Trap       WIN32_FS_CALL(BOOL, 29, (LPWSTR lpszPassword))

#define GetDiskFreeSpaceExW           +++ Do Not Use +++ 
#define GetDiskFreeSpaceExW_Trap WIN32_FS_CALL(BOOL, 54, (LPCTSTR lpDirectoryName, PULARGE_INTEGER lpFreeBytesAvailableToCaller, PULARGE_INTEGER lpTotalNumberOfBytes, PULARGE_INTEGER lpTotalNumberOfFreeBytes))

#define GetTempPathW                  +++ Do Not Use +++ 
#define GetTempPathW_Trap        WIN32_FS_CALL(DWORD, 27, (LPWSTR lpBuffer, DWORD SizeOfBuffer))

#define FindFirstFileExW              +++ Do Not Use +++ 
#define FindFirstFileExW_Trap    WIN32_FS_CALL(HANDLE, 63, (LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, DWORD SizeOfFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags))

#define SignalStarted                 +++ Do Not Use +++ 
#define SignalStarted_Trap       WIN32_FS_CALL(LONG, 66, (DWORD))

#define LoaderVerifierInitialize                +++ Do Not Use +++ 
#define LoaderVerifierInitialize_Trap           WIN32_FS_CALL(HRESULT, 79, (LPCWSTR pszLvModulePath))

#define LoaderVerifierUninitialize              +++ Do Not Use +++ 
#define LoaderVerifierUninitialize_Trap         WIN32_FS_CALL(HRESULT, 80, ())

#define LoaderVerifierAuthenticateFile          +++ Do Not Use +++ 
#define LoaderVerifierAuthenticateFile_Trap     WIN32_FS_CALL(HRESULT, 81, (LPVOID guidAuthClass, DWORD cbGuidAuthClass, HANDLE hFile, LPCWSTR szFilePath, LPCWSTR szHashHint, HANDLE hauthnCatalog, LPHANDLE phslauthnFile))

#define LoaderVerifierAddToBlockList            +++ Do Not Use +++ 
#define LoaderVerifierAddToBlockList_Trap       WIN32_FS_CALL(HRESULT, 82, (enum LV_BLOCKLIST slBlockList, const BYTE* pbItem, DWORD cbItem))

#define LoaderVerifierRemoveFromBlockList       +++ Do Not Use +++ 
#define LoaderVerifierRemoveFromBlockList_Trap  WIN32_FS_CALL(HRESULT, 83, (enum LV_BLOCKLIST slBlockList, const BYTE* pbItem, DWORD cbItem))

#define LoaderVerifierIsInBlockList             +++ Do Not Use +++ 
#define LoaderVerifierIsInBlockList_Trap        WIN32_FS_CALL(HRESULT, 84, (enum LV_BLOCKLIST slBlockList, const BYTE* pbItem, DWORD cbItem, BOOL* pfInBlockList))

#define LoaderVerifierEnumBlockList             +++ Do Not Use +++ 
#define LoaderVerifierEnumBlockList_Trap       WIN32_FS_CALL(HRESULT, 78, (enum LV_BLOCKLIST slBlockList, DWORD iEntry, BYTE* pbItem, DWORD cbItem, DWORD* pcbItem))

#define FindFirstChangeNotificationW    +++ Do Not Use +++ 
#define FindFirstChangeNotificationW_Trap WIN32_FS_CALL(HANDLE, 88, (LPCWSTR lpPath, BOOL bSubTree, DWORD dwFlags))

#define FindNextChangeNotification      +++ Do Not Use +++ 
#define FindNextChangeNotification_Trap  WIN32_FS_CALL(BOOL, 89, (HANDLE hNotify))

#define FindCloseChangeNotification     +++ Do Not Use +++ 
#define FindCloseChangeNotification_Trap WIN32_FS_CALL(BOOL, 90, (HANDLE hNotify))

#define CeGetFileNotificationInfo       +++ Do Not Use +++ 
#define CeGetFileNotificationInfo_Trap WIN32_FS_CALL(BOOL, 91, (HANDLE hNotify, DWORD dwFlags, LPVOID lpBuffer, DWORD nBufferLength, LPDWORD lpBytesReturned, LPDWORD lpBytesAvailable))

#define RequestDeviceNotifications     +++ Do Not Use +++
#define RequestDeviceNotifications_Trap WIN32_FS_CALL(HANDLE, 92, (LPCGUID devclass, HANDLE hMsgQ, BOOL fAll))

#define StopDeviceNotifications        +++ Do Not Use +++
#define StopDeviceNotifications_Trap WIN32_FS_CALL(BOOL, 93, (HANDLE h))

#define AdvertiseInterface             +++ Do Not Use +++
#define AdvertiseInterface_Trap      WIN32_FS_CALL(BOOL, 94, (LPCGUID devclass, LPCWSTR pszName, DWORD dwReserved, BOOL fAll))

// EventLog support
#define ReportEventW              +++ Do Not Use +++
#define ReportEventW_Trap           WIN32_FS_CALL( BOOL, 95, (HANDLE hEventLog, DWORD dwType, DWORD dwCategory, DWORD dwEventID,  PSID lpUserSid, DWORD dwNumStrings, DWORD dwDataSize, LPCWSTR* lpStrings, LPVOID lpRawData))

#define RegisterEventSourceW              +++ Do Not Use +++
#define RegisterEventSourceW_Trap   WIN32_FS_CALL( HANDLE, 96, (LPCWSTR lpUNCServerName,  LPCWSTR lpSourceName))

#define DeregisterEventSource              +++ Do Not Use +++
#define DeregisterEventSource_Trap   WIN32_FS_CALL( BOOL, 97, (HANDLE hEventLog))

#define ClearEventLogW              +++ Do Not Use +++
#define ClearEventLogW_Trap   WIN32_FS_CALL( BOOL, 98, (HANDLE hEventLog, LPCWSTR lpBackupFileName))

#define CeCertVerify_Trap WIN32_FS_CALL(DWORD, 99, (HANDLE hFile, HANDLE * phHandle, LPCWSTR pszFileName, LPWSTR pszAccountName, DWORD cbAccountNameSize, DWORD dwFlags))

#define CvtSDToStr_Trap         WIN32_FS_CALL( BOOL, 102, (PSECURITY_DESCRIPTOR, DWORD, SECURITY_INFORMATION, LPWSTR*, PULONG))
#define CvtStrToSD_Trap         WIN32_FS_CALL( BOOL, 103, (LPCWSTR, DWORD, PSECURITY_DESCRIPTOR*, PULONG))

#define CeFsIoControlW           +++ Do Not Use +++ 
#define CeFsIoControlW_Trap      WIN32_FS_CALL(BOOL, 115, (LPCWSTR pszRootPath, DWORD dwIoctl, LPVOID lpInBuf, DWORD nInBufSize, LPVOID lpOutBuf, DWORD nOutBufSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped))

// Additional event log support
#define OpenEventLogW           +++ Do Not Use +++
#define OpenEventLog_Trap      WIN32_FS_CALL( HANDLE, 116, (LPCTSTR lpUNCServerName, LPCTSTR lpSourceName))

#define CloseEventLog           +++ Do Not Use +++
#define CloseEventLog_Trap     WIN32_FS_CALL( BOOL, 117, (HANDLE hEventLog))

#define BackupEventLogW           +++ Do Not Use +++
#define BackupEventLogW_Trap   WIN32_FS_CALL( BOOL, 118, (HANDLE hEventLog, LPCTSTR szBackupFileName))

#define LockEventLog           +++ Do Not Use +++
#define LockEventLog_Trap      WIN32_FS_CALL( BOOL, 119, (HANDLE hEventLog))

#define UnLockEventLog           +++ Do Not Use +++
#define UnLockEventLog_Trap    WIN32_FS_CALL( BOOL, 120, (HANDLE hEventLog))

#define ReadEventLogRaw           +++ Do Not Use +++
#define ReadEventLogRaw_Trap   WIN32_FS_CALL( BOOL, 121, (HANDLE hEventLog, BYTE *pReadBuffer, DWORD dwReadBufferSize, DWORD *pdwBytesRead))

#define SetFileSecurityW        +++ Do Not Use +++
#define SetFileSecurityW_Trap  WIN32_FS_CALL(BOOL, 147, (LPCWSTR pFileName, SECURITY_INFORMATION SecurityInformation, \
    PSECURITY_DESCRIPTOR pSecurityDescriptor, DWORD Length))

#define GetFileSecurityW        +++ Do Not Use +++
#define GetFileSecurityW_Trap  WIN32_FS_CALL(BOOL, 148, (LPCWSTR pFileName, SECURITY_INFORMATION RequestedInformation, \
    PSECURITY_DESCRIPTOR pSecurityDescriptor, DWORD Length, DWORD* LengthNeeded))

#define ControlTraceByName_Trap WIN32_FS_CALL(ULONG, 151, (LPCWSTR pSessionName, \
    PEVENT_TRACE_PROPERTIES pProperties, DWORD cbProperties, ULONG ControlCode))

#define EnableTraceEx_Trap WIN32_FS_CALL(BOOL, 152, (LPCGUID ProviderId, DWORD cbProviderId, LPCGUID SourceId, \
    DWORD cbSourceId, HANDLE Tracehandle, ULONG IsEnabled, UCHAR Level, ULONGLONG *pMatchAnyKeyword,  \
    ULONGLONG *pMatchAllKeyword, ULONG EnableProperty, PEVENT_FILTER_DESCRIPTOR pEnableFilterDesc, DWORD cbEnableFilterDesc))

#define EnumerateTraceGuidsEx_Trap WIN32_FS_CALL(ULONG, 153, (TRACE_QUERY_INFO_CLASS TraceQueryInfoClass, PVOID InBuffer, \
    ULONG InBufferSize, PVOID OutBuffer, ULONG OutBufferSize, PULONG pReturnLength))

#define StartTraceW_Trap WIN32_FS_CALL(ULONG, 154, (HANDLE *pSessionHandle, LPCTSTR pSessionName, \
    PEVENT_TRACE_PROPERTIES pProperties, DWORD cbProperties,  EventLogFilterMask **ppMask))

#define EventRegister_Trap WIN32_FS_CALL(ULONG, 155, (LPCGUID ProviderId, DWORD cbProviderId, \
    LPVOID Reserved, DWORD cbReserve, PVOID CallbackContext, DWORD cbContext, HANDLE *RegHandle, EventLogFilterMask **ppMask))

#define RegisterTraceGuidsW_Trap WIN32_FS_CALL(ULONG, 156, (PVOID RequestAddress,  \
    PVOID RequestContext, LPCGUID ControlGuid, DWORD cbControlGuid,  \
    PTRACE_GUID_REGISTRATION TraceGuidReg, ULONG GuidCount, LPCWSTR MofImagePath, LPCWSTR MofResourceName, HANDLE *pRegistrationHandle, \
    HANDLE hWaitHandle, HANDLE hThreadHandle))

#define CeEventSubscribe_Trap WIN32_FS_CALL(HANDLE, 157, (LPCWSTR ChannelPath, DWORD SubscribeFlags, \
    DWORD Level, ULONGLONG *pMatchAnyKeywordMask, ULONGLONG *pMatchAllKeywordMask, DWORD *pInternalHandle))


#define ReadFile                      +++ Do Not Use +++ 
#define WriteFile                     +++ Do Not Use +++ 
#define GetFileSize                   +++ Do Not Use +++ 
#define SetFilePointer                +++ Do Not Use +++ 
#define GetFileInformationByHandle    +++ Do Not Use +++ 
#define FlushFileBuffers              +++ Do Not Use +++ 
#define GetFileTime                   +++ Do Not Use +++ 
#define SetFileTime                   +++ Do Not Use +++ 
#define SetEndOfFile                  +++ Do Not Use +++ 
#define DeviceIoControl               +++ Do Not Use +++ 
#define ForwardDeviceIoControl        +++ Do Not Use +++
#define FindClose                     +++ Do Not Use +++ 
#define FindNextFileW                 +++ Do Not Use +++ 

#define FindClose_Trap           +++ Do Not Use +++ Use CloseHandle instead



#ifdef KCOREDLL

#define _DIRECT_FILE_CALL(err, nargs, rt, id, argt, arglist)      _DIRECT_HANDLE_CALL (rt, HT_FILE, id, err, argt, nargs, arglist)
#define _DIRECT_FIND_CALL(err, nargs, rt, id, argt, arglist)      _DIRECT_HANDLE_CALL (rt, HT_FIND, id, err, argt, nargs, arglist)

#define _FORWARD_FILE_CALL(err, nargs, rt, id, argt, arglist)     _FORWARD_HANDLE_CALL (rt, HT_FILE, id, err, argt, nargs, arglist)

// kernel mode, call direct
#define ReadFile_Trap(hf, p, cb, pcb, po)       _DIRECT_FILE_CALL (FALSE, 4, BOOL,  2, (HANDLE, LPVOID, DWORD, LPDWORD, LPOVERLAPPED), (hf, p, cb, pcb, po))
#define WriteFile_Trap(hf, p, cb, pcb, po)      _DIRECT_FILE_CALL (FALSE, 4, BOOL,  3, (HANDLE, LPCVOID, DWORD, LPDWORD, LPOVERLAPPED), (hf, p, cb, pcb, po))
#define GetFileSize_Trap(hf, ph)                _DIRECT_FILE_CALL (-1,    1, DWORD, 4, (HANDLE, LPDWORD), (hf, ph))
#define SetFilePointer_Trap(hf, ll, lh, m)      _DIRECT_FILE_CALL (-1,    3, DWORD, 5, (HANDLE, LONG, PLONG, DWORD), (hf, ll, lh, m))
#define GetFileInformationByHandle_Trap(hf, pi, cb) \
    _DIRECT_FILE_CALL (FALSE, 2, BOOL,  6, (HANDLE, LPBY_HANDLE_FILE_INFORMATION, DWORD), (hf, pi, cb))
#define FlushFileBuffers_Trap(hf)               _DIRECT_FILE_CALL (FALSE, 0, BOOL,  7, (HANDLE), (hf))
#define GetFileTime_Trap(hf, ptc, pta, ptw)     _DIRECT_FILE_CALL (FALSE, 3, BOOL,  8, (HANDLE, LPFILETIME, LPFILETIME, LPFILETIME), (hf, ptc, pta, ptw))
#define SetFileTime_Trap(hf, ptc, pta, ptw)     _DIRECT_FILE_CALL (FALSE, 3, BOOL,  9, (HANDLE, const FILETIME*, const FILETIME*, const FILETIME*), (hf, ptc, pta, ptw))
#define SetEndOfFile_Trap(hf)                   _DIRECT_FILE_CALL (FALSE, 0, BOOL,  10, (HANDLE), (hf))
#define DeviceIoControl_Trap(hf, code, pib, cbi, pob, cbo, pcb, povp)  \
    _DIRECT_FILE_CALL (FALSE, 7, BOOL, 11, (HANDLE, DWORD, LPVOID, DWORD, LPVOID, DWORD, LPDWORD, LPOVERLAPPED), \
                                            (hf, code, pib, cbi, pob, cbo, pcb, povp))
#define ForwardDeviceIoControl_Trap(hf, code, pib, cbi, pob, cbo, pcb, povp)  \
    _FORWARD_FILE_CALL (FALSE, 7, BOOL, 11, (HANDLE, DWORD, LPVOID, DWORD, LPVOID, DWORD, LPDWORD, LPOVERLAPPED), \
                                                (hf, code, pib, cbi, pob, cbo, pcb, povp))

#define FindNextFileW_Trap(hf, pfd, cb)             _DIRECT_FIND_CALL (FALSE, 2, BOOL, 2, (HANDLE, LPWIN32_FIND_DATAW, DWORD), (hf, pfd, cb))


#define EventWrite_Trap(hf, p, cbp, cbc, pud, cbud)  _DIRECT_FILE_CALL (FALSE, 5, ULONG,  2, (HANDLE, PCEVENT_DESCRIPTOR, DWORD, ULONG, PEVENT_DATA_DESCRIPTOR, DWORD), (hf, p, cbp, cbc, pud, cbud))
#define ControlTraceByHandle_Trap(hf, p, cb, cont)   _DIRECT_FILE_CALL (FALSE, 3, ULONG,  3, (HANDLE, PEVENT_TRACE_PROPERTIES, DWORD, ULONG), (hf,  p, cb, cont))
#define CeEventNext_Trap(hf)  _DIRECT_FILE_CALL (FALSE, 0, BOOL,  4, (HANDLE), (hf))
#define CeEventRead_Trap(hf, p, cb, pdata, cbdata, pcbc, pcb)  _DIRECT_FILE_CALL (FALSE, 6, ULONG,  5, (HANDLE, PEVENT_DESCRIPTOR, DWORD, PEVENT_DATA_DESCRIPTOR, ULONG, ULONG *, ULONG *), (hf, p, cb, pdata, cbdata, pcbc, pcb))
#define TraceMessage_Trap(hf, cbf, pguid, cbguid, cbm, pdata, cbdata)  _DIRECT_FILE_CALL (FALSE, 6, ULONG,  6, (HANDLE, DWORD, GUID *, DWORD, DWORD, BYTE *, DWORD), (hf, cbf, pguid, cbguid, cbm, pdata, cbdata))

#else // KCOREDLL

// user mode coredll, trap
#define ReadFile_Trap            WIN32_FILE_CALL(BOOL, 2, (HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped))
#define WriteFile_Trap           WIN32_FILE_CALL(BOOL, 3, (HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite,   LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped))
#define GetFileSize_Trap         WIN32_FILE_CALL(DWORD, 4, (HANDLE hFile, LPDWORD lpFileSizeHigh))
#define SetFilePointer_Trap      WIN32_FILE_CALL(DWORD, 5, (HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod))
#define GetFileInformationByHandle_Trap WIN32_FILE_CALL(DWORD, 6, (HANDLE hFile, LPBY_HANDLE_FILE_INFORMATION lpFileInformation, DWORD SizeOfFileInformation))
#define FlushFileBuffers_Trap    WIN32_FILE_CALL(BOOL, 7, (HANDLE hFile))
#define GetFileTime_Trap         WIN32_FILE_CALL(BOOL, 8, (HANDLE hFile, LPFILETIME lpCreation, LPFILETIME lpLastAccess, LPFILETIME lpLastWrite))
#define SetFileTime_Trap         WIN32_FILE_CALL(BOOL, 9, (HANDLE hFile, CONST FILETIME *lpCreation, CONST FILETIME *lpLastAccess, CONST FILETIME *lpLastWrite))
#define SetEndOfFile_Trap        WIN32_FILE_CALL(BOOL, 10, (HANDLE hFile))
#define DeviceIoControl_Trap     WIN32_FILE_CALL(BOOL, 11, (HANDLE hDevice, DWORD dwIoControlCode, LPVOID lpInBuf, DWORD nInBufSize, LPVOID lpOutBuf, DWORD nOutBufSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped))

// user mode - ForwardDeviceIoControl == DeviceIoControl
#define ForwardDeviceIoControl_Trap DeviceIoControl_Trap

#define FindNextFileW_Trap       WIN32_FIND_CALL(BOOL, 2, (HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData, DWORD SizeOfFindFileData))

#define EventWrite_Trap             WIN32_FILE_CALL(ULONG, 2, (HANDLE RegHandle, PCEVENT_DESCRIPTOR EventDescriptor, \
                                                        DWORD cbEventDescriptor, ULONG UserDataCount, PEVENT_DATA_DESCRIPTOR pUserData, DWORD cbUserData))
#define ControlTraceByHandle_Trap           WIN32_FILE_CALL(ULONG, 3, (HANDLE SessionHandle, \
                                                        PEVENT_TRACE_PROPERTIES pProperties, DWORD cbProperties, ULONG ControlCode))
#define CeEventNext_Trap            WIN32_FILE_CALL(ULONG, 4, (HANDLE hSubscription))
#define CeEventRead_Trap            WIN32_FILE_CALL(ULONG, 5, (HANDLE hSubscription, PEVENT_DESCRIPTOR pEventDescriptor,  DWORD cbEventDescriptor, \
                                                       PEVENT_DATA_DESCRIPTOR pUserData, ULONG UserDataCount, ULONG *pUserDataBytes, ULONG *pUserDataCount))
#define TraceMessage_Trap           WIN32_FILE_CALL(ULONG, 6, (HANDLE hTraceHandle, DWORD dwFlags, GUID *pMessageGuid, DWORD cbMessageGuid,  \
                                                        DWORD dwMessageId, BYTE *pData, DWORD cbData))         

#endif // KCOREDLL


#elif defined(COREDLL) // #ifdef WIN32_FS_CALL

BOOL xxx_CreateDirectoryW (LPCWSTR lpPathName, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
#define CreateDirectoryW xxx_CreateDirectoryW
BOOL xxx_RemoveDirectoryW (LPCWSTR lpPathName);
#define RemoveDirectoryW xxx_RemoveDirectoryW
BOOL xxx_MoveFileW (LPCWSTR lpExistingFileName, LPCWSTR lpNewFileName);
#define MoveFileW xxx_MoveFileW
BOOL xxx_DeleteFileW (LPCWSTR lpFileName);
#define DeleteFileW xxx_DeleteFileW
DWORD xxx_GetFileAttributesW (LPCTSTR  lpFileName);
#define GetFileAttributesW xxx_GetFileAttributesW
HANDLE xxx_FindFirstFileW (LPCWSTR lpFileName, LPWIN32_FIND_DATAW lpFindFileData);
#define FindFirstFileW xxx_FindFirstFileW
HANDLE xxx_CreateFileW (LPCTSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile);
#define CreateFileW xxx_CreateFileW
BOOL xxx_SetFileAttributesW (LPCWSTR lpszName, DWORD dwAttributes);
#define SetFileAttributesW xxx_SetFileAttributesW
BOOL xxx_ReadFile (HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped);
#define ReadFile xxx_ReadFile
BOOL xxx_WriteFile (HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite,   LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped);
#define WriteFile xxx_WriteFile
DWORD xxx_GetFileSize (HANDLE hFile, LPDWORD lpFileSizeHigh);
#define GetFileSize xxx_GetFileSize
DWORD xxx_SetFilePointer (HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod);
#define SetFilePointer xxx_SetFilePointer
DWORD xxx_GetFileInformationByHandle (HANDLE hFile, LPBY_HANDLE_FILE_INFORMATION lpFileInformation);
#define GetFileInformationByHandle xxx_GetFileInformationByHandle
BOOL xxx_FlushFileBuffers (HANDLE hFile);
#define FlushFileBuffers xxx_FlushFileBuffers
BOOL xxx_GetFileTime (HANDLE hFile, LPFILETIME lpCreation, LPFILETIME lpLastAccess, LPFILETIME lpLastWrite);
#define GetFileTime xxx_GetFileTime
BOOL xxx_SetFileTime (HANDLE hFile, CONST FILETIME *lpCreation, CONST FILETIME *lpLastAccess, CONST FILETIME *lpLastWrite);
#define SetFileTime xxx_SetFileTime
BOOL xxx_SetEndOfFile (HANDLE hFile);
#define SetEndOfFile xxx_SetEndOfFile
BOOL xxx_ForwardDeviceIoControl (HANDLE hDevice, DWORD dwIoControlCode, LPVOID lpInBuf, DWORD nInBufSize, LPVOID lpOutBuf, DWORD nOutBufSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped);
#define ForwardDeviceIoControl xxx_ForwardDeviceIoControl
BOOL xxx_DeviceIoControl (HANDLE hDevice, DWORD dwIoControlCode, LPVOID lpInBuf, DWORD nInBufSize, LPVOID lpOutBuf, DWORD nOutBufSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped);
#define DeviceIoControl xxx_DeviceIoControl
BOOL xxx_FindClose (HANDLE hFindFile);
#define FindClose xxx_FindClose
BOOL xxx_FindNextFileW (HANDLE hFindFile, LPWIN32_FIND_DATAW lpFindFileData);
#define FindNextFileW xxx_FindNextFileW
BOOL xxx_DeleteAndRenameFile (LPCWSTR lpszOldFile, LPCWSTR lpszNewFile);
#define DeleteAndRenameFile xxx_DeleteAndRenameFile
BOOL xxx_CheckPassword (LPWSTR lpszPassword);
#define CheckPassword xxx_CheckPassword
BOOL xxx_GetDiskFreeSpaceExW (LPCTSTR lpDirectoryName, PULARGE_INTEGER lpFreeBytesAvailableToCaller, PULARGE_INTEGER lpTotalNumberOfBytes, PULARGE_INTEGER lpTotalNumberOfFreeBytes);
#define GetDiskFreeSpaceExW xxx_GetDiskFreeSpaceExW
DWORD xxx_GetTempPathW (DWORD nBufferLength, LPWSTR lpBuffer);
#define GetTempPathW xxx_GetTempPathW
HANDLE xxx_FindFirstFileExW (LPCWSTR lpFileName, FINDEX_INFO_LEVELS fInfoLevelId, LPVOID lpFindFileData, FINDEX_SEARCH_OPS fSearchOp, LPVOID lpSearchFilter, DWORD dwAdditionalFlags);
#define FindFirstFileExW xxx_FindFirstFileExW
void xxx_SignalStarted(DWORD dw);
#define SignalStarted xxx_SignalStarted
HANDLE xxx_CreateMsgQueue(LPCWSTR lpName, LPMSGQUEUEOPTIONS lpOptions);
#define CreateMsgQueue xxx_CreateMsgQueue
HANDLE xxx_OpenMsgQueue(HANDLE hSrcProc, HANDLE hMsgQ, LPMSGQUEUEOPTIONS lpOptions);
#define OpenMsgQueue xxx_OpenMsgQueue
BOOL xxx_ReadMsgQueue(HANDLE hMsgQ, LPVOID lpBuffer, DWORD cbBufferSize, LPDWORD lpNumberOfBytesRead, DWORD dwTimeout, DWORD *pdwFlags);
#define ReadMsgQueue xxx_ReadMsgQueue
BOOL xxx_WriteMsgQueue(HANDLE hMsgQ, LPVOID lpBuffer, DWORD cbDataSize, DWORD dwTimeout, DWORD dwFlags);
#define WriteMsgQueue xxx_WriteMsgQueue
BOOL xxx_GetMsgQueueInfo(HANDLE hMsgQ, LPMSGQUEUEINFO lpInfo);
#define GetMsgQueueInfo xxx_GetMsgQueueInfo
BOOL xxx_CloseMsgQueue(HANDLE hMsgQ);
#define CloseMsgQueue xxx_CloseMsgQueue
HANDLE xxx_FindFirstChangeNotificationW(LPCWSTR lpPath, BOOL bSubTree, DWORD dwFlags);
#define FindFirstChangeNotificationW xxx_FindFirstChangeNotificationW
BOOL xxx_FindNextChangeNotification(HANDLE hNotify);
#define FindNextChangeNotification  xxx_FindNextChangeNotification
BOOL xxx_FindCloseChangeNotification(HANDLE hNotify);
#define FindCloseChangeNotification xxx_FindCloseChangeNotification
BOOL   xxx_CeGetFileNotificationInfo(HANDLE h, DWORD dwFlags, LPVOID lpBuffer, DWORD nBufferLength, LPDWORD lpBytesReturned, LPDWORD lpBytesAvailable);
#define CeGetFileNotificationInfo xxx_CeGetFileNotificationInfo
HANDLE xxx_RequestDeviceNotifications(const GUID *devclass, HANDLE hMsgQ, BOOL fAll);
#define RequestDeviceNotifications xxx_RequestDeviceNotifications
BOOL xxx_StopDeviceNotifications(HANDLE h);
#define StopDeviceNotifications xxx_StopDeviceNotifications
BOOL xxx_AdvertiseInterface(const GUID *devclass, LPCWSTR name, BOOL fAdd);
#define AdvertiseInterface xxx_AdvertiseInterface

BOOL xxx_ReportEventW (HANDLE hEventLog, WORD wType, WORD wCategory, DWORD dwEventID,  PSID lpUserSid, WORD wNumStrings, DWORD dwDataSize, LPCWSTR* lpStrings, LPVOID lpRawData);
#define ReportEventW xxx_ReportEventW              

HANDLE  xxx_RegisterEventSourceW(LPCWSTR lpUNCServerName,  LPCWSTR lpSourceName);
#define RegisterEventSourceW xxx_RegisterEventSourceW

BOOL    xxx_DeregisterEventSource(HANDLE hEventLog);
#define DeregisterEventSource xxx_DeregisterEventSource

BOOL xxx_ClearEventLogW(HANDLE hEventLog, LPCWSTR lpBackupFileName);
#define ClearEventLogW xxx_ClearEventLogW

BOOL xxx_OpenEventLogW(LPCTSTR lpUNCServerName, LPCTSTR lpSourceName);
#define OpenEventLogW xxx_OpenEventLogW

BOOL xxx_CloseEventLog(HANDLE hEventLog);
#define CloseEventLog xxx_CloseEventLog

BOOL xxx_BackupEventLogW(HANDLE hEventLog, LPCTSTR szBackupFileName);
#define BackupEventLogW xxx_BackupEventLogW

BOOL xxx_LockEventLog(HANDLE hEventLog);
#define LockEventLog xxx_LockEventLog

BOOL xxx_UnLockEventLog(HANDLE hEventLog);
#define UnlockEventLog xxx_UnLockEventLog

BOOL xxx_ReadEventLogRaw(HANDLE hEventLog, BYTE *pReadBuffer, DWORD dwReadBufferSize, DWORD *pdwBytesRead);
#define ReadEventLogRaw xxx_ReadEventLogRaw

// these are stubbed with warnings in CE7
LONG xxx_ADBCreateAccount(IN LPCWSTR pszName, IN DWORD dwAcctFlags, IN DWORD Reserved);
LONG xxx_ADBDeleteAccount(IN LPCWSTR pszName);
LONG xxx_ADBGetAccountProperty(IN PCWSTR pszName, IN DWORD propertyId, IN OUT PDWORD pcbPropertyValue, OUT PVOID pValue);
LONG xxx_ADBSetAccountProperties(IN PCWSTR pszName, IN DWORD cProperties, IN void * rgProperties);
LONG xxx_ADBGetAccountSecurityInfo(IN PCWSTR pszName, IN OUT PDWORD pcbBuf, OUT void * pSecurityInfo);
LONG xxx_ADBAddAccountToGroup(IN PCWSTR pszName, IN PCWSTR pszGroupName);
LONG xxx_ADBRemoveAccountFromGroup(IN PCWSTR pszName, IN PCWSTR pszGroupName);
LONG xxx_ADBEnumAccounts(IN DWORD dwFlags, IN PCWSTR pszPrevName, IN OUT PDWORD pcchNextName, OUT PWSTR pszNextName);

BOOL xxx_CeFsIoControlW(LPCWSTR pszRootPath, DWORD dwIoctl, LPVOID lpInBuf, DWORD nInBufSize, LPVOID lpOutBuf, DWORD nOutBufSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped);
#define CeFsIoControlW xxx_CeFsIoControlW 

DWORD xxx_CeCertVerify (HANDLE hFile, HANDLE * phHandle, LPWSTR pszFileName, LPWSTR pszAccountName, DWORD cbAccountNameSize, DWORD dwFlags);

#endif // #ifdef WIN32_FS_CALL ... #elif defined(COREDLL)

// external exports from device
#define RegisterDevice     +++ Do Not Use +++
#define RegisterDevice_Trap          WIN32_DEV_CALL(HANDLE, 2, (LPCWSTR lpszName, DWORD index, LPCWSTR lpszLib, DWORD dwInfo))

#define DeregisterDevice     +++ Do Not Use +++
#define DeregisterDevice_Trap        WIN32_DEV_CALL(BOOL, 3, (HANDLE hDevice))

#define LoadFSD              +++ Do Not Use +++
#define LoadFSD_Trap                 WIN32_DEV_CALL(BOOL, 6, (HANDLE hDevice, LPCWSTR lpFSDName))

#define LoadFSDEx            +++ Do Not Use +++
#define LoadFSDEx_Trap               WIN32_DEV_CALL(BOOL, 9, (HANDLE hDevice, LPCWSTR lpFSDName, DWORD dwFlag))

#define ActivateDeviceEx     +++ Do Not Use +++
#define ActivateDeviceEx_Trap        WIN32_DEV_CALL(HANDLE, 12, (LPCWSTR lpszDevKey, LPCVOID lpRegEnts, DWORD cRegEnts, LPVOID lpvParam))

#define DeactivateDevice               +++ Do Not Use +++
#define DeactivateDevice_Trap        WIN32_DEV_CALL(BOOL, 8, (HANDLE hDevice))

#define REL_UDriverProcIoControl  +++ Do Not Use +++
#define REL_UDriverProcIoControl_Trap WIN32_DEV_CALL(BOOL,36, (DWORD , LPVOID , DWORD , LPVOID , DWORD , LPDWORD ))

#define CreateAsyncIoHandle  +++ Do Not Use +++
#define CreateAsyncIoHandle_Trap WIN32_DEV_CALL(HANDLE,38, (HANDLE , LPVOID , LPVOID ))

#define SetIoProgress +++ Do Not Use +++
#define SetIoProgress_Trap WIN32_DEV_CALL(BOOL,39, (HANDLE , DWORD ))

#define CompleteAsyncIo +++ Do Not Use +++
#define CompleteAsyncIo_Trap    WIN32_DEV_CALL(BOOL, 40, (HANDLE , DWORD, DWORD ))

#define EnableDeviceDriver +++ Do Not Use +++
#define EnableDeviceDriver_Trap WIN32_DEV_CALL(BOOL, 41, (HANDLE , DWORD ))

#define DisableDeviceDriver +++ Do Not Use +++
#define DisableDeviceDriver_Trap WIN32_DEV_CALL(BOOL, 42, (HANDLE , DWORD ))


#define GetDeviceDriverStatus +++ Do Not Use +++
#define GetDeviceDriverStatus_Trap WIN32_DEV_CALL(BOOL, 43, (HANDLE , LPDWORD ))

#define CeResyncFilesys                +++ Do Not Use +++
#define CeResyncFilesys_Trap         WIN32_DEV_CALL(BOOL, 11, (HANDLE hDevice))

#define GetDeviceInformationByDeviceHandle      +++ Do Not Use +++
#define GetDeviceInformationByDeviceHandle_Trap WIN32_DEV_CALL(BOOL, 34, (HANDLE hDevice, PDEVMGR_DEVICE_INFORMATION pdi))

#define EnumDeviceInterfaces            +++ Do Not Use +++
#define EnumDeviceInterfaces_Trap    WIN32_DEV_CALL(BOOL, 35, (HANDLE h, DWORD dwIndex, GUID *pClass, LPWSTR pszNameBuf, LPDWORD lpdwNameLen))

#define ResourceCreateList             +++ Do Not Use +++
#define ResourceCreateList_Trap      WIN32_DEV_CALL(BOOL, 16, (DWORD dwResId, DWORD dwMinimum, DWORD dwCount))

#define ResourceDestroyList            +++ Do Not Use +++
#define ResourceDestroyList_Trap     WIN32_DEV_CALL(BOOL, 32, (DWORD dwResId))

#define ResourceAdjust                 +++ Do Not Use +++
#define ResourceAdjust_Trap          WIN32_DEV_CALL(BOOL, 17, (DWORD dwResId, DWORD dwId, DWORD dwLen, BOOL fClaim))

#define ResourceRequestEx              +++ Do Not Use +++
#define ResourceRequestEx_Trap       WIN32_DEV_CALL(BOOL, 33, (DWORD dwResId, DWORD dwId, DWORD dwLen, DWORD dwFlags))

#define ResourceMarkAsShareable        +++ Do Not Use +++
#define ResourceMarkAsShareable_Trap WIN32_DEV_CALL(BOOL, 31, (DWORD dwResId, DWORD dwId, DWORD dwLen, BOOL fShareable))


#define GetDeviceInformationByFileHandle      +++ Do Not Use +++
#ifdef KCOREDLL
    // kernel mode, call direct
#define GetDeviceInformationByFileHandle_Trap(hf, pi) _DIRECT_FILE_CALL(FALSE, 1, BOOL, 6, (HANDLE, PDEVMGR_DEVICE_INFORMATION), (hf, pi))
#else
    // user mode, trap
#define GetDeviceInformationByFileHandle_Trap WIN32_FILE_CALL(DWORD, 6, (HANDLE hFile, PDEVMGR_DEVICE_INFORMATION pdi))
#endif // KCOREDLL

#define EnumServices_Trap          WIN32_DEV_CALL(BOOL,37,(PBYTE pServicesEnumInfo))

#ifdef WIN32_FS_CALL

#define FileSystemPowerFunction        +++ Do Not Use +++
#define FileSystemPowerFunction_Trap WIN32_FS_CALL(void, 50, (DWORD flags))

#define CloseAllFileHandles            +++ Do Not Use +++
#define CloseAllFileHandles_Trap     WIN32_FS_CALL(void, 42, ())

#define SetPassword                    +++ Do Not Use +++
#define SetPassword_Trap             WIN32_FS_CALL(BOOL, 30, (LPWSTR lpszOldpassword, LPWSTR lspzNewPassword))

#define GetPasswordActive              +++ Do Not Use +++
#define GetPasswordActive_Trap       WIN32_FS_CALL(BOOL, 47, (void))

#define SetPasswordActive              +++ Do Not Use +++
#define SetPasswordActive_Trap       WIN32_FS_CALL(BOOL, 48, (BOOL bActive, LPWSTR lpszPassword))

#define SetPasswordStatus              +++ Do Not Use +++
#define SetPasswordStatus_Trap       WIN32_FS_CALL(BOOL, 70, (DWORD dwStatus, LPWSTR lpszPassword))

#define GetPasswordStatus              +++ Do Not Use +++
#define GetPasswordStatus_Trap       WIN32_FS_CALL(DWORD, 71, (void))

#define IsSystemFile                   +++ Do Not Use +++
#define IsSystemFile_Trap            WIN32_FS_CALL(BOOL, 55, (LPCWSTR lpszFileName))

#define ReadFileWithSeek               +++ Do Not Use +++
#define WriteFileWithSeek              +++ Do Not Use +++
#define LockFileEx                     +++ Do No Use +++
#define UnlockFileEx                   +++ Do No Use +++
#define CancelIo                       +++ Do No Use +++
#define CancelIoEx                     +++ Do No Use +++

#ifdef KCOREDLL
// kernel mode, call direct
#define ReadFileWithSeek_Trap(hf, pb, cb, pcb, ovp, ofst, oh)   _DIRECT_FILE_CALL (FALSE, 6, BOOL, 12, (HANDLE, LPVOID, DWORD, LPDWORD, LPOVERLAPPED, DWORD, DWORD), (hf, pb, cb, pcb, ovp, ofst, oh))
#define WriteFileWithSeek_Trap(hf, pb, cb, pcb, ovp, ofst, oh)  _DIRECT_FILE_CALL (FALSE, 6, BOOL, 13, (HANDLE, LPCVOID, DWORD, LPDWORD, LPOVERLAPPED, DWORD, DWORD), (hf, pb, cb, pcb, ovp, ofst, oh))
#define LockFileEx_Trap(hf, f, r, cb, cbh, ovp)                 _DIRECT_FILE_CALL (FALSE, 5, BOOL, 14, (HANDLE, DWORD, DWORD, DWORD, DWORD, LPOVERLAPPED), (hf, f, r, cb, cbh, ovp))
#define UnlockFileEx_Trap(hf, r, cb, cbh, ovp)                  _DIRECT_FILE_CALL (FALSE, 4, BOOL, 15, (HANDLE, DWORD, DWORD, DWORD, LPOVERLAPPED), (hf, r, cb, cbh, ovp))
#define CancelIo_Trap(hf)                                       _DIRECT_FILE_CALL (FALSE, 0, BOOL, 16, (HANDLE), (hf))
#define CancelIoEx_Trap(hf, ovp, cb)                            _DIRECT_FILE_CALL (FALSE, 2, BOOL, 17, (HANDLE, LPOVERLAPPED, DWORD), (hf, ovp, cb))

#else // KCOREDLL

// user mode, trap
#define ReadFileWithSeek_Trap        WIN32_FILE_CALL(BOOL, 12, (HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped, DWORD dwLowOffset, DWORD dwHighOffset))
#define WriteFileWithSeek_Trap       WIN32_FILE_CALL(BOOL, 13, (HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite,   LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped, DWORD dwLowOffset, DWORD dwHighOffset))
#define LockFileEx_Trap              WIN32_FILE_CALL(BOOL, 14, (HANDLE hFile, DWORD dwFlags, DWORD dwReserved, DWORD nNumberOfBytesToLockLow, DWORD nNumberOfBytesToLockHigh, LPOVERLAPPED lpOverlapped))
#define UnlockFileEx_Trap            WIN32_FILE_CALL(BOOL, 15, (HANDLE hFile, DWORD dwReserved, DWORD nNumberOfBytesToUnlockLow, DWORD nNumberOfBytesToUnlockHigh, LPOVERLAPPED lpOverlapped))
#define CancelIo_Trap                WIN32_FILE_CALL(BOOL, 16, (HANDLE hFile))
#define CancelIoEx_Trap              WIN32_FILE_CALL(BOOL, 17, (HANDLE hFile, LPOVERLAPPED lpOverlapped, DWORD SizeOfOverlapped))

#endif // KCOREDLL

#elif defined(COREDLL) // #ifdef WIN32_FS_CALL

void xxx_FileSystemPowerFunction (DWORD flags);
#define FileSystemPowerFunction xxx_FileSystemPowerFunction
void xxx_CloseAllFileHandles ();
#define CloseAllFileHandles xxx_CloseAllFileHandles
BOOL xxx_SetPassword (LPWSTR lpszOldpassword, LPWSTR lspzNewPassword);
#define SetPassword xxx_SetPassword
BOOL xxx_GetPasswordActive (void);
#define GetPasswordActive xxx_GetPasswordActive
BOOL xxx_SetPasswordActive (BOOL bActive, LPWSTR lpszPassword);
#define SetPasswordActive xxx_SetPasswordActive
BOOL xxx_ReadFileWithSeek(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped, DWORD dwLowOffset, DWORD dwHighOffset);
#define ReadFileWithSeek xxx_ReadFileWithSeek
BOOL xxx_WriteFileWithSeek(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite,   LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped, DWORD dwLowOffset, DWORD dwHighOffset);
#define WriteFileWithSeek xxx_WriteFileWithSeek
BOOL xxx_SetPasswordStatus (DWORD dwStatus, LPWSTR lpszPassword);
#define SetPasswordStatus xxx_SetPasswordStatus
DWORD xxx_GetPasswordStatus (void);
#define GetPasswordStatus xxx_GetPasswordStatus
BOOL xxx_IsSystemFile (LPCWSTR lpszFileName);
#define IsSystemFile xxx_IsSystemFile

   
#endif // #ifdef WIN32_FS_CALL ... #elif defined(COREDLL)


#define GetDeviceByIndex               +++ Do Not Use +++
#define GetDeviceByIndex_Trap        WIN32_DEV_CALL(BOOL, 10, (DWORD dwIndex, LPWIN32_FIND_DATA lpFindFileData))

#ifdef __cplusplus
}
#endif  /* __cplusplus */


#endif //__MWINBASE_H__

