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

#ifndef __TASKSCHEDULER_H__
#define __TASKSCHEDULER_H__

#include <windows.h>
#include <notify.h>
#include <regext.h>
#include <cmnet.h>


#include <winerror.h>

#define MAKE_TSKSCH_SCODE(sev,fac,code) \
    ((SCODE) (((unsigned long)(sev)<<31) | ((unsigned long)(fac)<<16) | ((unsigned long)(code))) )

#define MAKE_TSKSCH_E( err )  (MAKE_TSKSCH_SCODE( 1, FACILITY_ITF, err ))
#define MAKE_TSKSCH_S( warn ) (MAKE_TSKSCH_SCODE( 0, FACILITY_ITF, warn ))

#define E_TSKSCH_NOT_INITIALIZED                                MAKE_TSKSCH_E(0x100)
#define E_TSKSCH_SCHEDULE_NOT_FOUND                             MAKE_TSKSCH_E(0x101)
#define E_TSKSCH_GROUP_NOT_FOUND                                MAKE_TSKSCH_E(0x102)
#define E_TSKSCH_SCHEDULE_MISMATCH                              MAKE_TSKSCH_E(0x103)
#define E_TSKSCH_SCHEDULE_PRIORITY_NOT_UNIQUE                   MAKE_TSKSCH_E(0x104)

#define E_TSKSCH_API_NOT_READY                                  MAKE_TSKSCH_E(0x200)
#define E_TSKSCH_SERVICE_ERROR                                  MAKE_TSKSCH_E(0x201)

#define E_TSKSCH_INVALID_STRUCT_SIZE                            MAKE_TSKSCH_E(0x400)
#define E_TSKSCH_INVALID_SCHEDULE_ID                            MAKE_TSKSCH_E(0x401)
#define E_TSKSCH_INVALID_RECURRENCE_TYPE                        MAKE_TSKSCH_E(0x402)
#define E_TSKSCH_INVALID_PROGRESSION_TYPE                       MAKE_TSKSCH_E(0x403)
#define E_TSKSCH_INVALID_CONDITIONS                             MAKE_TSKSCH_E(0x404)
#define E_TSKSCH_INVALID_ACTIONS                                MAKE_TSKSCH_E(0x405)
#define E_TSKSCH_INVALID_STARTTIME_RELATIVESTARTTIME            MAKE_TSKSCH_E(0x406)
#define E_TSKSCH_INVALID_STARTTIME_LATER_ENDTIME                MAKE_TSKSCH_E(0x407)
                                                             // MAKE_TSKSCH_E(0x408)
#define E_TSKSCH_INVALID_BOOTUP_SCHEDULE_PROPERTY               MAKE_TSKSCH_E(0x409)
#define E_TSKSCH_INVALID_RUN_EARLY_TIME                         MAKE_TSKSCH_E(0x40A)
#define E_TSKSCH_INVALID_GROUP_ID                               MAKE_TSKSCH_E(0x40B)
#define E_TSKSCH_INVALID_INTERVAL_DURATION                      MAKE_TSKSCH_E(0x40C)
#define E_TSKSCH_INVALID_ACTUAL_RUN_COUNT                       MAKE_TSKSCH_E(0x40D)
#define E_TSKSCH_INVALID_MAX_INTERVAL                           MAKE_TSKSCH_E(0x40E)
#define E_TSKSCH_INVALID_NEXT_RUN_TIME                          MAKE_TSKSCH_E(0x40F)
#define E_TSKSCH_INVALID_LAST_RUN_TIME                          MAKE_TSKSCH_E(0x410)

#define E_TSKSCH_DB_ERROR_ACTIONS                               MAKE_TSKSCH_E(0x500)
#define E_TSKSCH_DB_ERROR_CONDITIONS                            MAKE_TSKSCH_E(0x501)

#define E_TSKSCH_GROUP_HAS_NO_ACTIVE_SCHEDULE                   MAKE_TSKSCH_E(0x600)

#define S_TSKSCH_GROUP_HAS_NO_SCHEDULES                         MAKE_TSKSCH_S(0x800)

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

typedef enum
{
    CE_TASK_SCHEDULE_RECURRENCE_INTERVAL = 0,
    CE_TASK_SCHEDULE_RECURRENCE_ON_BOOT,
    CE_TASK_SCHEDULE_RECURRENCE_AVERAGE
} CE_TASK_SCHEDULE_RECURRENCE_TYPE;

typedef enum
{
    CE_TASK_SCHEDULE_PROGRESSION_NONE = 0,
    CE_TASK_SCHEDULE_PROGRESSION_LINEAR,
    CE_TASK_SCHEDULE_PROGRESSION_EXPONENTIAL
} CE_TASK_SCHEDULE_PROGRESSION_TYPE;

#define MAX_PATH_LEN MAX_PATH

typedef struct
{
    DWORD cbSize;
    WCHAR szId[ MAX_PATH_LEN ];
    WCHAR szApplication[ NAMED_EVENT_PREFIX_LEN+MAX_PATH_LEN ];
    LPWSTR pszCommandLine;
} CETASKSCHEDULEACTION;

typedef struct
{
    DWORD cbSize;
    WCHAR szId[ MAX_PATH_LEN ];
    HKEY hKey;
    LPWSTR pszSubkey;
    LPWSTR pszValueName;
    NOTIFICATIONCONDITION NotificationCondition;
} CETASKSCHEDULECONDITION;

typedef struct
{
    DWORD cbSize;
    GUID guidGroupId;
    WCHAR szScheduleId[ MAX_PATH_LEN ];
    CE_TASK_SCHEDULE_RECURRENCE_TYPE eRecurrenceType;
    CE_TASK_SCHEDULE_PROGRESSION_TYPE eProgressionType;
    DWORD dwIntervalDuration;
    SYSTEMTIME stStartTime;
    SYSTEMTIME stEndTime;
    DWORD dwRelativeStartTime;
    BOOL fDeleteWhenExpired;
    BOOL fPersist;
    DWORD dwMaximumRunCount;
    DWORD dwActualRunCount;
    DWORD dwRunEarlyTime;
    DWORD cConditionCount;
    CETASKSCHEDULECONDITION *pConditions;
    DWORD dwSchedulePriority;
    DWORD cActionCount;
    CETASKSCHEDULEACTION *pActions;
    DWORD dwMaxInterval;
    CM_SESSION_HANDLE hCmSession;
    BOOL fUsingNetwork;
    SYSTEMTIME stNextRunTime;
    SYSTEMTIME stLastRunTime;
    BOOL fSpecifyRunEarlyTime;
    BOOL fScheduleActive;
    BOOL fScheduleEnabled;
} CETASKSCHEDULE;

typedef void *HCETASKSCHEDULE;

HRESULT CeTaskSchedulerInit();

HRESULT CeTaskSchedulerCleanup();

HRESULT CeTaskSchedulerCreateSchedule(__in const CETASKSCHEDULE* pSchedule);

HRESULT CeTaskSchedulerDeleteSchedule(__in REFGUID guidScheduleGroupId,
                                        __in_opt const WCHAR* const wszScheduleId);

HRESULT CeTaskSchedulerGetSchedule(__in REFGUID guidScheduleGroupId,
                                        __in const WCHAR* const wszScheduleId,
                                        __deref_out CETASKSCHEDULE** ppSchedule);

void CeTaskSchedulerFreeSchedule(__in CETASKSCHEDULE* pSchedule);

HRESULT CeTaskSchedulerFirstSchedule(__in REFGUID guidScheduleGroupId,
                                        __out HCETASKSCHEDULE *phSchedule,
                                        __deref_out CETASKSCHEDULE **ppSchedule);

HRESULT CeTaskSchedulerNextSchedule(__in HCETASKSCHEDULE hSchedule,
                                        __deref_out CETASKSCHEDULE **ppSchedule);

void CeTaskSchedulerCloseHandle(__in HCETASKSCHEDULE hSchedule);

HRESULT CeTaskSchedulerEnableSchedule(__in REFGUID guidScheduleGroupId,
                                        __in_opt const WCHAR* const wszScheduleId,
                                        __in BOOL fEnable);

HRESULT CeTaskSchedulerExecuteSchedule(__in REFGUID guidScheduleGroupId,
                                        __in BOOL fAdvanceSchedule);

HRESULT CeTaskSchedulerAdvanceSchedule(__in REFGUID guidScheduleGroupId);


#ifdef __cplusplus
}   // extern "C"
#endif  // __cplusplus

#endif
