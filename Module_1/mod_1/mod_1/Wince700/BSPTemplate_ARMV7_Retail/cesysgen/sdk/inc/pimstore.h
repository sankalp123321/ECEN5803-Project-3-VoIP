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

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0543 */
/* Compiler settings for pimstore.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __pimstore_h__
#define __pimstore_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IChangeEventSink_FWD_DEFINED__
#define __IChangeEventSink_FWD_DEFINED__
typedef interface IChangeEventSink IChangeEventSink;
#endif  /* __IChangeEventSink_FWD_DEFINED__ */


#ifndef __ICustomEventSink_FWD_DEFINED__
#define __ICustomEventSink_FWD_DEFINED__
typedef interface ICustomEventSink ICustomEventSink;
#endif  /* __ICustomEventSink_FWD_DEFINED__ */


#ifndef __IException_FWD_DEFINED__
#define __IException_FWD_DEFINED__
typedef interface IException IException;
#endif  /* __IException_FWD_DEFINED__ */


#ifndef __IExceptions_FWD_DEFINED__
#define __IExceptions_FWD_DEFINED__
typedef interface IExceptions IExceptions;
#endif  /* __IExceptions_FWD_DEFINED__ */


#ifndef __ITimeZone_FWD_DEFINED__
#define __ITimeZone_FWD_DEFINED__
typedef interface ITimeZone ITimeZone;
#endif  /* __ITimeZone_FWD_DEFINED__ */


#ifndef __IRecurrencePattern_FWD_DEFINED__
#define __IRecurrencePattern_FWD_DEFINED__
typedef interface IRecurrencePattern IRecurrencePattern;
#endif  /* __IRecurrencePattern_FWD_DEFINED__ */


#ifndef __IRecurrencePattern2_FWD_DEFINED__
#define __IRecurrencePattern2_FWD_DEFINED__
typedef interface IRecurrencePattern2 IRecurrencePattern2;
#endif  /* __IRecurrencePattern2_FWD_DEFINED__ */


#ifndef __IRecipient_FWD_DEFINED__
#define __IRecipient_FWD_DEFINED__
typedef interface IRecipient IRecipient;
#endif  /* __IRecipient_FWD_DEFINED__ */


#ifndef __IPOlRecipient_FWD_DEFINED__
#define __IPOlRecipient_FWD_DEFINED__
typedef interface IPOlRecipient IPOlRecipient;
#endif  /* __IPOlRecipient_FWD_DEFINED__ */


#ifndef __IRecipient2_FWD_DEFINED__
#define __IRecipient2_FWD_DEFINED__
typedef interface IRecipient2 IRecipient2;
#endif  /* __IRecipient2_FWD_DEFINED__ */


#ifndef __IRecipients_FWD_DEFINED__
#define __IRecipients_FWD_DEFINED__
typedef interface IRecipients IRecipients;
#endif  /* __IRecipients_FWD_DEFINED__ */


#ifndef __IRecipients2_FWD_DEFINED__
#define __IRecipients2_FWD_DEFINED__
typedef interface IRecipients2 IRecipients2;
#endif  /* __IRecipients2_FWD_DEFINED__ */


#ifndef __IPOutlookItemCollection_FWD_DEFINED__
#define __IPOutlookItemCollection_FWD_DEFINED__
typedef interface IPOutlookItemCollection IPOutlookItemCollection;
#endif  /* __IPOutlookItemCollection_FWD_DEFINED__ */


#ifndef __IPOutlookItemCollection2_FWD_DEFINED__
#define __IPOutlookItemCollection2_FWD_DEFINED__
typedef interface IPOutlookItemCollection2 IPOutlookItemCollection2;
#endif  /* __IPOutlookItemCollection2_FWD_DEFINED__ */


#ifndef __IPOutlookFolderCollection_FWD_DEFINED__
#define __IPOutlookFolderCollection_FWD_DEFINED__
typedef interface IPOutlookFolderCollection IPOutlookFolderCollection;
#endif  /* __IPOutlookFolderCollection_FWD_DEFINED__ */


#ifndef __IPOutlookStoreCollection_FWD_DEFINED__
#define __IPOutlookStoreCollection_FWD_DEFINED__
typedef interface IPOutlookStoreCollection IPOutlookStoreCollection;
#endif  /* __IPOutlookStoreCollection_FWD_DEFINED__ */


#ifndef __IPOlItems_FWD_DEFINED__
#define __IPOlItems_FWD_DEFINED__
typedef interface IPOlItems IPOlItems;
#endif  /* __IPOlItems_FWD_DEFINED__ */


#ifndef __IContact_FWD_DEFINED__
#define __IContact_FWD_DEFINED__
typedef interface IContact IContact;
#endif  /* __IContact_FWD_DEFINED__ */


#ifndef __IContact2_FWD_DEFINED__
#define __IContact2_FWD_DEFINED__
typedef interface IContact2 IContact2;
#endif  /* __IContact2_FWD_DEFINED__ */


#ifndef __ITask_FWD_DEFINED__
#define __ITask_FWD_DEFINED__
typedef interface ITask ITask;
#endif  /* __ITask_FWD_DEFINED__ */


#ifndef __ITask2_FWD_DEFINED__
#define __ITask2_FWD_DEFINED__
typedef interface ITask2 ITask2;
#endif  /* __ITask2_FWD_DEFINED__ */


#ifndef __IAppointment_FWD_DEFINED__
#define __IAppointment_FWD_DEFINED__
typedef interface IAppointment IAppointment;
#endif  /* __IAppointment_FWD_DEFINED__ */


#ifndef __IAppointment2_FWD_DEFINED__
#define __IAppointment2_FWD_DEFINED__
typedef interface IAppointment2 IAppointment2;
#endif  /* __IAppointment2_FWD_DEFINED__ */


#ifndef __ICity_FWD_DEFINED__
#define __ICity_FWD_DEFINED__
typedef interface ICity ICity;
#endif  /* __ICity_FWD_DEFINED__ */


#ifndef __IFolder_FWD_DEFINED__
#define __IFolder_FWD_DEFINED__
typedef interface IFolder IFolder;
#endif  /* __IFolder_FWD_DEFINED__ */


#ifndef __IFolder2_FWD_DEFINED__
#define __IFolder2_FWD_DEFINED__
typedef interface IFolder2 IFolder2;
#endif  /* __IFolder2_FWD_DEFINED__ */


#ifndef __IPOutlookApp_FWD_DEFINED__
#define __IPOutlookApp_FWD_DEFINED__
typedef interface IPOutlookApp IPOutlookApp;
#endif  /* __IPOutlookApp_FWD_DEFINED__ */


#ifndef __IPOutlookApp2_FWD_DEFINED__
#define __IPOutlookApp2_FWD_DEFINED__
typedef interface IPOutlookApp2 IPOutlookApp2;
#endif  /* __IPOutlookApp2_FWD_DEFINED__ */


#ifndef __IPOutlookApp3_FWD_DEFINED__
#define __IPOutlookApp3_FWD_DEFINED__
typedef interface IPOutlookApp3 IPOutlookApp3;
#endif  /* __IPOutlookApp3_FWD_DEFINED__ */


#ifndef __IStore_FWD_DEFINED__
#define __IStore_FWD_DEFINED__
typedef interface IStore IStore;
#endif  /* __IStore_FWD_DEFINED__ */


#ifndef __IItem_FWD_DEFINED__
#define __IItem_FWD_DEFINED__
typedef interface IItem IItem;
#endif  /* __IItem_FWD_DEFINED__ */


#ifndef __IItem2_FWD_DEFINED__
#define __IItem2_FWD_DEFINED__
typedef interface IItem2 IItem2;
#endif  /* __IItem2_FWD_DEFINED__ */


#ifndef __IRecipient3_FWD_DEFINED__
#define __IRecipient3_FWD_DEFINED__
typedef interface IRecipient3 IRecipient3;
#endif  /* __IRecipient3_FWD_DEFINED__ */


#ifndef __IPOutlookRecipientCollection_FWD_DEFINED__
#define __IPOutlookRecipientCollection_FWD_DEFINED__
typedef interface IPOutlookRecipientCollection IPOutlookRecipientCollection;
#endif  /* __IPOutlookRecipientCollection_FWD_DEFINED__ */


#ifndef __IPOlItems2_FWD_DEFINED__
#define __IPOlItems2_FWD_DEFINED__
typedef interface IPOlItems2 IPOlItems2;
#endif  /* __IPOlItems2_FWD_DEFINED__ */


#ifndef __Exception_FWD_DEFINED__
#define __Exception_FWD_DEFINED__

#ifdef __cplusplus
typedef class Exception Exception;
#else
typedef struct Exception Exception;
#endif /* __cplusplus */

#endif  /* __Exception_FWD_DEFINED__ */


#ifndef __TimeZone_FWD_DEFINED__
#define __TimeZone_FWD_DEFINED__

#ifdef __cplusplus
typedef class TimeZone TimeZone;
#else
typedef struct TimeZone TimeZone;
#endif /* __cplusplus */

#endif  /* __TimeZone_FWD_DEFINED__ */


#ifndef __RecurrencePattern_FWD_DEFINED__
#define __RecurrencePattern_FWD_DEFINED__

#ifdef __cplusplus
typedef class RecurrencePattern RecurrencePattern;
#else
typedef struct RecurrencePattern RecurrencePattern;
#endif /* __cplusplus */

#endif  /* __RecurrencePattern_FWD_DEFINED__ */


#ifndef __Recipient_FWD_DEFINED__
#define __Recipient_FWD_DEFINED__

#ifdef __cplusplus
typedef class Recipient Recipient;
#else
typedef struct Recipient Recipient;
#endif /* __cplusplus */

#endif  /* __Recipient_FWD_DEFINED__ */


#ifndef __Recipients_FWD_DEFINED__
#define __Recipients_FWD_DEFINED__

#ifdef __cplusplus
typedef class Recipients Recipients;
#else
typedef struct Recipients Recipients;
#endif /* __cplusplus */

#endif  /* __Recipients_FWD_DEFINED__ */


#ifndef __Items_FWD_DEFINED__
#define __Items_FWD_DEFINED__

#ifdef __cplusplus
typedef class Items Items;
#else
typedef struct Items Items;
#endif /* __cplusplus */

#endif  /* __Items_FWD_DEFINED__ */


#ifndef __ContactItem_FWD_DEFINED__
#define __ContactItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class ContactItem ContactItem;
#else
typedef struct ContactItem ContactItem;
#endif /* __cplusplus */

#endif  /* __ContactItem_FWD_DEFINED__ */


#ifndef __TaskItem_FWD_DEFINED__
#define __TaskItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class TaskItem TaskItem;
#else
typedef struct TaskItem TaskItem;
#endif /* __cplusplus */

#endif  /* __TaskItem_FWD_DEFINED__ */


#ifndef __AppointmentItem_FWD_DEFINED__
#define __AppointmentItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class AppointmentItem AppointmentItem;
#else
typedef struct AppointmentItem AppointmentItem;
#endif /* __cplusplus */

#endif  /* __AppointmentItem_FWD_DEFINED__ */


#ifndef __CityItem_FWD_DEFINED__
#define __CityItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class CityItem CityItem;
#else
typedef struct CityItem CityItem;
#endif /* __cplusplus */

#endif  /* __CityItem_FWD_DEFINED__ */


#ifndef __Application_FWD_DEFINED__
#define __Application_FWD_DEFINED__

#ifdef __cplusplus
typedef class Application Application;
#else
typedef struct Application Application;
#endif /* __cplusplus */

#endif  /* __Application_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_pimstore_0000_0000 */
/* [local] */ 

#ifndef MIDL_PASS
#include <windows.h>
#include <ole2.h>
#endif
#ifdef MIDL_PASS
typedef DWORD CEPROPID;

typedef DWORD CEOID;

typedef /* [v1_enum] */ 
enum WINCONST
    {   WM_APP  = 0x8000
    }   WINCONST;

typedef struct _TIME_ZONE_INFORMATION
    {
    LONG Bias;
    WCHAR StandardName[ 32 ];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
    }   TIME_ZONE_INFORMATION;

typedef struct _TIME_ZONE_INFORMATION *PTIME_ZONE_INFORMATION;

typedef struct _CEBLOB
    {
    DWORD dwCount;
    BYTE *lpb;
    }   CEBLOB;

typedef /* [v1_enum] */ 
enum CEVT_TYPE
    {   CEVT_UNSPECIFIED    = 0,
    CEVT_I2 = 0x2,
    CEVT_I4 = 0x3,
    CEVT_R8 = 0x5,
    CEVT_ERROR  = 0xa,
    CEVT_BOOL   = 0xb,
    CEVT_UI2    = 0x12,
    CEVT_UI4    = 0x13,
    CEVT_LPWSTR = 0x1f,
    CEVT_FILETIME   = 0x40,
    CEVT_BLOB   = 0x41,
    CEVT_STREAM = 0x64,
    CEVT_RECID  = 0x65,
    CEVT_AUTO_I4    = 0x66,
    CEVT_AUTO_I8    = 0x67
    }   CEVT_TYPE;

typedef /* [switch_type] */ union __CEVALUNION
    {
    short iVal;
    USHORT uiVal;
    long lVal;
    ULONG ulVal;
    FILETIME filetime;
    WCHAR *lpwstr;
    CEBLOB blob;
    BOOL boolVal;
    double dblVal;
    }   _CEVALUNION;

typedef struct _CEPROPVAL
    {
    DWORD propid;
    WORD wLenData;
    WORD wFlags;
    _CEVALUNION val;
    }   CEPROPVAL;

#endif
#define PIMFOLDERNOTIFICATION_REMOTE    (0x01)    // Notification for changes from other processes
#define PIMFOLDERNOTIFICATION_LOCAL     (0x02)    // Notification for changes from this process
#define PIMFOLDERNOTIFICATION_ALL       (PIMFOLDERNOTIFICATION_REMOTE | PIMFOLDERNOTIFICATION_LOCAL)
typedef struct OLITEMID
    {
    BYTE data[ 12 ];
    }   OLITEMID;

typedef struct OLITEMID *LPOLITEMID;

typedef /* [v1_enum] */ 
enum PIMITEMNOTIFICATION
    {   PIM_ITEM_CREATED_LOCAL  = ( WM_APP + 0x100 ) ,
    PIM_ITEM_DELETED_LOCAL  = ( WM_APP + 0x101 ) ,
    PIM_ITEM_CHANGED_LOCAL  = ( WM_APP + 0x102 ) ,
    PIM_ITEM_CREATED_REMOTE = ( WM_APP + 0x105 ) ,
    PIM_ITEM_DELETED_REMOTE = ( WM_APP + 0x106 ) ,
    PIM_ITEM_CHANGED_REMOTE = ( WM_APP + 0x107 ) 
    }   PIMITEMNOTIFICATION;













typedef /* [v1_enum] */ 
enum OlImportance
    {   olImportanceLow = 0,
    olImportanceNormal  = 1,
    olImportanceHigh    = 2
    }   OlImportance;

typedef /* [v1_enum] */ 
enum OlDefaultFolders
    {   olFolderUndefined   = 0,
    olFolderCalendar    = 9,
    olFolderContacts    = 10,
    olFolderTasks   = 13,
    olFolderNotes   = 14,
    olFolderInbox   = 15,
    olFolderCities  = 101,
    olFolderInfrared    = 102
    }   OlDefaultFolders;

typedef /* [v1_enum] */ 
enum OlItemType
    {   olUndefinedItem = 0,
    olAppointmentItem   = 1,
    olContactItem   = 2,
    olTaskItem  = 3,
    olNoteItem  = 4,
    olMailItem  = 5,
    olCityItem  = 102
    }   OlItemType;

#define OlItemMaskNone  ( 0 )

#define OlItemMaskContact   ( 0x1 )

#define OlItemMaskMail  ( 0x2 )

#define OlItemMaskAppointment   ( 0x4 )

#define OlItemMaskTask  ( 0x8 )

#define OlItemMaskNote  ( 0x10 )

#define OlItemMaskALL   ( 0xffffffff )

#define FOLDERISEMPTY_ITEMS ( 0x1 )

#define FOLDERISEMPTY_FOLDERS   ( 0x2 )

typedef /* [v1_enum] */ 
enum OlReminderOptions
    {   olLED   = 1,
    olVibrate   = 2,
    olDialog    = 4,
    olSound = 8,
    olRepeat    = 16
    }   OlReminderOptions;

typedef /* [v1_enum] */ 
enum OlBusyStatus
    {   olFree  = 0,
    olTentative = 1,
    olBusy  = 2,
    olOutOfOffice   = 3
    }   OlBusyStatus;

typedef /* [v1_enum] */ 
enum OlMeetingStatusFlags
    {   olMeetingFlag   = 1,
    olReceivedFlag  = 2,
    olCanceledFlag  = 4,
    olForwardedFlag = 8
    }   OlMeetingStatusFlags;

typedef /* [v1_enum] */ 
enum OlMeetingStatus
    {   olNonMeeting    = 0,
    olMeeting   = olMeetingFlag,
    olMeetingAccepted   = ( olMeetingFlag | olReceivedFlag ) ,
    olMeetingCanceled   = ( ( olMeetingFlag | olReceivedFlag )  | olCanceledFlag ) 
    }   OlMeetingStatus;

typedef /* [v1_enum] */ 
enum OlCurrentCity
    {   olHomeCity  = 0,
    olVisitingCity  = 1
    }   OlCurrentCity;

typedef /* [v1_enum] */ 
enum OlRecurrenceType
    {   olRecursDaily   = 0,
    olRecursWeekly  = 1,
    olRecursMonthly = 2,
    olRecursMonthNth    = 3,
    olRecursYearly  = 5,
    olRecursYearNth = 6,
    olRecursOnce    = -1
    }   OlRecurrenceType;

typedef /* [v1_enum] */ 
enum OlDaysOfWeek
    {   olSunday    = 1,
    olMonday    = 2,
    olTuesday   = 4,
    olWednesday = 8,
    olThursday  = 16,
    olFriday    = 32,
    olSaturday  = 64
    }   OlDaysOfWeek;

typedef /* [v1_enum] */ 
enum OlSensitivity
    {   olNormal    = 0,
    olPersonal  = 1,
    olPrivate   = 2,
    olConfidential  = 3
    }   OlSensitivity;

typedef /* [v1_enum] */ 
enum OlObjectType
    {   olUndefinedObject   = 0,
    olStoreObject   = 1,
    olFolderObject  = 2,
    olAppointmentObject = 3,
    olContactObject = 4,
    olTaskObject    = 5,
    olNoteObject    = 6,
    olMailObject    = 7
    }   OlObjectType;

typedef /* [v1_enum] */ 
enum OlEventType
    {   olEventCreated  = 0x4,
    olEventDeleted  = 0x8,
    olEventModified = 0x10,
    olEventMoved    = 0x20,
    olEventCopied   = 0x40,
    olEventAll  = 0xffffffff
    }   OlEventType;

typedef /* [v1_enum] */ 
enum OlEventFlags
    {   olEventFlagSynchronous  = 0x1,
    olEventFlagLocal    = 0x2,
    olEventFlagRemote   = 0x4,
    olEventFlagLostEvents   = 0x8
    }   OlEventFlags;

typedef /* [v1_enum] */ 
enum OlRecurrenceEndType
    {   olEndTypeDate   = 0,
    olEndTypeOccurrences    = 1,
    olEndTypeNone   = 2
    }   OlRecurrenceEndType;

typedef struct PIMEVENT
    {
    OlEventType olEventType;
    OlObjectType olObjectType;
    OLITEMID olItemId;
    OLITEMID olOldItemId;
    OLITEMID olParentId;
    OLITEMID olOldParentId;
    ULONG cProps;
    CEPROPID *rgProps;
    }   PIMEVENT;

typedef struct PIMCUSTOMEVENT
    {
    GUID guid;
    CEBLOB blob;
    }   PIMCUSTOMEVENT;

DEFINE_GUID(IID_IChangeEventSink, 0xc93a09c4, 0x5faf, 0x4688, 0xbf, 0xe6, 0x7d, 0x1b, 0x60, 0x92, 0xd4, 0xe9);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0000_v0_0_s_ifspec;

#ifndef __IChangeEventSink_INTERFACE_DEFINED__
#define __IChangeEventSink_INTERFACE_DEFINED__

/* interface IChangeEventSink */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IChangeEventSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c93a09c4-5faf-4688-bfe6-7d1b6092d4e9")
    IChangeEventSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnEvent( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ ULONG cEvents,
            /* [size_is][in] */ const PIMEVENT *rgEvents) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IChangeEventSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChangeEventSink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChangeEventSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChangeEventSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnEvent )( 
            IChangeEventSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ ULONG cEvents,
            /* [size_is][in] */ const PIMEVENT *rgEvents);
        
        END_INTERFACE
    } IChangeEventSinkVtbl;

    interface IChangeEventSink
    {
        CONST_VTBL struct IChangeEventSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChangeEventSink_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChangeEventSink_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChangeEventSink_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define IChangeEventSink_OnEvent(This,dwFlags,cEvents,rgEvents) \
    ( (This)->lpVtbl -> OnEvent(This,dwFlags,cEvents,rgEvents) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IChangeEventSink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0001 */
/* [local] */ 

DEFINE_GUID(IID_ICustomEventSink, 0x666eceda, 0x91c1, 0x4ba5, 0xb4, 0x1c, 0x6e, 0x45, 0xb8, 0xb9, 0x37, 0x49);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0001_v0_0_s_ifspec;

#ifndef __ICustomEventSink_INTERFACE_DEFINED__
#define __ICustomEventSink_INTERFACE_DEFINED__

/* interface ICustomEventSink */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ICustomEventSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("666ECEDA-91C1-4ba5-B41C-6E45B8B93749")
    ICustomEventSink : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnEvent( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ ULONG cEvents,
            /* [size_is][in] */ const PIMCUSTOMEVENT *rgEvents) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct ICustomEventSinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICustomEventSink * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICustomEventSink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICustomEventSink * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnEvent )( 
            ICustomEventSink * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ ULONG cEvents,
            /* [size_is][in] */ const PIMCUSTOMEVENT *rgEvents);
        
        END_INTERFACE
    } ICustomEventSinkVtbl;

    interface ICustomEventSink
    {
        CONST_VTBL struct ICustomEventSinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICustomEventSink_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICustomEventSink_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICustomEventSink_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define ICustomEventSink_OnEvent(This,dwFlags,cEvents,rgEvents) \
    ( (This)->lpVtbl -> OnEvent(This,dwFlags,cEvents,rgEvents) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __ICustomEventSink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0002 */
/* [local] */ 

DEFINE_GUID(IID_IException, 0xb47398d0, 0x3b73, 0x11d2, 0x8f, 0x1b, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0002_v0_0_s_ifspec;

#ifndef __IException_INTERFACE_DEFINED__
#define __IException_INTERFACE_DEFINED__

/* interface IException */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IException;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b47398d0-3b73-11d2-8f1b-0000f87a4335")
    IException : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AppointmentItem( 
            /* [retval][out] */ IAppointment **ppAppt) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OriginalDate( 
            /* [retval][out] */ DATE *pdate) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Deleted( 
            /* [retval][out] */ VARIANT_BOOL *pfDeleted) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IExceptionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IException * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IException * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IException * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IException * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IException * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IException * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IException * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppointmentItem )( 
            IException * This,
            /* [retval][out] */ IAppointment **ppAppt);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OriginalDate )( 
            IException * This,
            /* [retval][out] */ DATE *pdate);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Deleted )( 
            IException * This,
            /* [retval][out] */ VARIANT_BOOL *pfDeleted);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IException * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        END_INTERFACE
    } IExceptionVtbl;

    interface IException
    {
        CONST_VTBL struct IExceptionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IException_QueryInterface(This,riid,ppvObject)  \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IException_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IException_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IException_GetTypeInfoCount(This,pctinfo)   \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IException_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IException_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)  \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IException_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IException_get_AppointmentItem(This,ppAppt) \
    ( (This)->lpVtbl -> get_AppointmentItem(This,ppAppt) ) 

#define IException_get_OriginalDate(This,pdate) \
    ( (This)->lpVtbl -> get_OriginalDate(This,pdate) ) 

#define IException_get_Deleted(This,pfDeleted)  \
    ( (This)->lpVtbl -> get_Deleted(This,pfDeleted) ) 

#define IException_get_Application(This,polApp) \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IException_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0003 */
/* [local] */ 

DEFINE_GUID(IID_IExceptions, 0xb47398d1, 0x3b73, 0x11d2, 0x8f, 0x1b, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0003_v0_0_s_ifspec;

#ifndef __IExceptions_INTERFACE_DEFINED__
#define __IExceptions_INTERFACE_DEFINED__

/* interface IExceptions */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IExceptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b47398d1-3b73-11d2-8f1b-0000f87a4335")
    IExceptions : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ int iIndex,
            /* [retval][out] */ IException **ppException) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ int *pnCount) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnumerator) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IExceptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExceptions * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExceptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExceptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IExceptions * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IExceptions * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IExceptions * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IExceptions * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Item )( 
            IExceptions * This,
            /* [in] */ int iIndex,
            /* [retval][out] */ IException **ppException);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IExceptions * This,
            /* [retval][out] */ int *pnCount);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IExceptions * This,
            /* [retval][out] */ IUnknown **ppEnumerator);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IExceptions * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        END_INTERFACE
    } IExceptionsVtbl;

    interface IExceptions
    {
        CONST_VTBL struct IExceptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExceptions_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExceptions_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExceptions_Release(This)   \
    ( (This)->lpVtbl -> Release(This) ) 


#define IExceptions_GetTypeInfoCount(This,pctinfo)  \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IExceptions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)   \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IExceptions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IExceptions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)   \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IExceptions_Item(This,iIndex,ppException)   \
    ( (This)->lpVtbl -> Item(This,iIndex,ppException) ) 

#define IExceptions_get_Count(This,pnCount) \
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IExceptions_get__NewEnum(This,ppEnumerator) \
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumerator) ) 

#define IExceptions_get_Application(This,polApp)    \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IExceptions_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0004 */
/* [local] */ 

DEFINE_GUID(IID_ITimeZone, 0x78b27290, 0x5256, 0x11d2, 0x8f, 0x1b, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0004_v0_0_s_ifspec;

#ifndef __ITimeZone_INTERFACE_DEFINED__
#define __ITimeZone_INTERFACE_DEFINED__

/* interface ITimeZone */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITimeZone;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("78b27290-5256-11d2-8f1b-0000f87a4335")
    ITimeZone : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Bias( 
            /* [retval][out] */ long *plBias) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SupportsDST( 
            /* [retval][out] */ VARIANT_BOOL *pfSupportsDST) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsStandardAbsoluteDate( 
            /* [retval][out] */ VARIANT_BOOL *pfAbsolute) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsDaylightAbsoluteDate( 
            /* [retval][out] */ VARIANT_BOOL *pfAbsolute) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StandardBias( 
            /* [retval][out] */ long *plBias) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StandardName( 
            /* [retval][out] */ BSTR *ppwsz) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StandardDate( 
            /* [retval][out] */ DATE *pDate) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StandardDayOfWeekMask( 
            /* [retval][out] */ long *plMask) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StandardInstance( 
            /* [retval][out] */ long *plInstance) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StandardMonthOfYear( 
            /* [retval][out] */ long *plMonth) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DaylightBias( 
            /* [retval][out] */ long *plBias) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DaylightName( 
            /* [retval][out] */ BSTR *ppwsz) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DaylightDate( 
            /* [retval][out] */ DATE *pDate) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DaylightDayOfWeekMask( 
            /* [retval][out] */ long *plMask) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DaylightInstance( 
            /* [retval][out] */ long *plInstance) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DaylightMonthOfYear( 
            /* [retval][out] */ long *plMonth) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct ITimeZoneVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITimeZone * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITimeZone * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITimeZone * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITimeZone * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITimeZone * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITimeZone * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITimeZone * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Bias )( 
            ITimeZone * This,
            /* [retval][out] */ long *plBias);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportsDST )( 
            ITimeZone * This,
            /* [retval][out] */ VARIANT_BOOL *pfSupportsDST);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsStandardAbsoluteDate )( 
            ITimeZone * This,
            /* [retval][out] */ VARIANT_BOOL *pfAbsolute);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDaylightAbsoluteDate )( 
            ITimeZone * This,
            /* [retval][out] */ VARIANT_BOOL *pfAbsolute);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardBias )( 
            ITimeZone * This,
            /* [retval][out] */ long *plBias);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardName )( 
            ITimeZone * This,
            /* [retval][out] */ BSTR *ppwsz);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardDate )( 
            ITimeZone * This,
            /* [retval][out] */ DATE *pDate);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardDayOfWeekMask )( 
            ITimeZone * This,
            /* [retval][out] */ long *plMask);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardInstance )( 
            ITimeZone * This,
            /* [retval][out] */ long *plInstance);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StandardMonthOfYear )( 
            ITimeZone * This,
            /* [retval][out] */ long *plMonth);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DaylightBias )( 
            ITimeZone * This,
            /* [retval][out] */ long *plBias);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DaylightName )( 
            ITimeZone * This,
            /* [retval][out] */ BSTR *ppwsz);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DaylightDate )( 
            ITimeZone * This,
            /* [retval][out] */ DATE *pDate);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DaylightDayOfWeekMask )( 
            ITimeZone * This,
            /* [retval][out] */ long *plMask);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DaylightInstance )( 
            ITimeZone * This,
            /* [retval][out] */ long *plInstance);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DaylightMonthOfYear )( 
            ITimeZone * This,
            /* [retval][out] */ long *plMonth);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ITimeZone * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        END_INTERFACE
    } ITimeZoneVtbl;

    interface ITimeZone
    {
        CONST_VTBL struct ITimeZoneVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITimeZone_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITimeZone_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITimeZone_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define ITimeZone_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITimeZone_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITimeZone_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)   \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITimeZone_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITimeZone_get_Bias(This,plBias) \
    ( (This)->lpVtbl -> get_Bias(This,plBias) ) 

#define ITimeZone_get_SupportsDST(This,pfSupportsDST)   \
    ( (This)->lpVtbl -> get_SupportsDST(This,pfSupportsDST) ) 

#define ITimeZone_get_IsStandardAbsoluteDate(This,pfAbsolute)   \
    ( (This)->lpVtbl -> get_IsStandardAbsoluteDate(This,pfAbsolute) ) 

#define ITimeZone_get_IsDaylightAbsoluteDate(This,pfAbsolute)   \
    ( (This)->lpVtbl -> get_IsDaylightAbsoluteDate(This,pfAbsolute) ) 

#define ITimeZone_get_StandardBias(This,plBias) \
    ( (This)->lpVtbl -> get_StandardBias(This,plBias) ) 

#define ITimeZone_get_StandardName(This,ppwsz)  \
    ( (This)->lpVtbl -> get_StandardName(This,ppwsz) ) 

#define ITimeZone_get_StandardDate(This,pDate)  \
    ( (This)->lpVtbl -> get_StandardDate(This,pDate) ) 

#define ITimeZone_get_StandardDayOfWeekMask(This,plMask)    \
    ( (This)->lpVtbl -> get_StandardDayOfWeekMask(This,plMask) ) 

#define ITimeZone_get_StandardInstance(This,plInstance) \
    ( (This)->lpVtbl -> get_StandardInstance(This,plInstance) ) 

#define ITimeZone_get_StandardMonthOfYear(This,plMonth) \
    ( (This)->lpVtbl -> get_StandardMonthOfYear(This,plMonth) ) 

#define ITimeZone_get_DaylightBias(This,plBias) \
    ( (This)->lpVtbl -> get_DaylightBias(This,plBias) ) 

#define ITimeZone_get_DaylightName(This,ppwsz)  \
    ( (This)->lpVtbl -> get_DaylightName(This,ppwsz) ) 

#define ITimeZone_get_DaylightDate(This,pDate)  \
    ( (This)->lpVtbl -> get_DaylightDate(This,pDate) ) 

#define ITimeZone_get_DaylightDayOfWeekMask(This,plMask)    \
    ( (This)->lpVtbl -> get_DaylightDayOfWeekMask(This,plMask) ) 

#define ITimeZone_get_DaylightInstance(This,plInstance) \
    ( (This)->lpVtbl -> get_DaylightInstance(This,plInstance) ) 

#define ITimeZone_get_DaylightMonthOfYear(This,plMonth) \
    ( (This)->lpVtbl -> get_DaylightMonthOfYear(This,plMonth) ) 

#define ITimeZone_get_Application(This,polApp)  \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __ITimeZone_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0005 */
/* [local] */ 

DEFINE_GUID(IID_IRecurrencePattern, 0x38f47300, 0x270f, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0005_v0_0_s_ifspec;

#ifndef __IRecurrencePattern_INTERFACE_DEFINED__
#define __IRecurrencePattern_INTERFACE_DEFINED__

/* interface IRecurrencePattern */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRecurrencePattern;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38f47300-270f-11d2-8f18-0000f87a4335")
    IRecurrencePattern : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RecurrenceType( 
            /* [retval][out] */ long *plRecType) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PatternStartDate( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StartTime( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EndTime( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PatternEndDate( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NoEndDate( 
            /* [retval][out] */ VARIANT_BOOL *pfNoEndDate) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Occurrences( 
            /* [retval][out] */ long *plOccurrences) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Interval( 
            /* [retval][out] */ long *plInterval) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DayOfWeekMask( 
            /* [retval][out] */ long *plMask) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DayOfMonth( 
            /* [retval][out] */ long *plDay) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Instance( 
            /* [retval][out] */ long *plInstance) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Duration( 
            /* [retval][out] */ long *plDuration) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MonthOfYear( 
            /* [retval][out] */ long *plMonth) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RecurrenceType( 
            /* [in] */ long lRecType) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PatternStartDate( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StartTime( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_EndTime( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PatternEndDate( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NoEndDate( 
            /* [in] */ VARIANT_BOOL fNoEndDate) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Occurrences( 
            /* [in] */ long lOccurrences) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Interval( 
            /* [in] */ long lInterval) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DayOfWeekMask( 
            /* [in] */ long lMask) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DayOfMonth( 
            /* [in] */ long lDay) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Instance( 
            /* [in] */ long lInstance) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Duration( 
            /* [in] */ long lDuration) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MonthOfYear( 
            /* [in] */ long lMonth) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Exceptions( 
            /* [retval][out] */ IExceptions **ppExceptions) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOccurrence( 
            /* [in] */ DATE date,
            /* [retval][out] */ IAppointment **ppAppt) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IRecurrencePatternVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRecurrencePattern * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRecurrencePattern * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRecurrencePattern * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRecurrencePattern * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRecurrencePattern * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRecurrencePattern * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRecurrencePattern * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecurrenceType )( 
            IRecurrencePattern * This,
            /* [retval][out] */ long *plRecType);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PatternStartDate )( 
            IRecurrencePattern * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartTime )( 
            IRecurrencePattern * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndTime )( 
            IRecurrencePattern * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PatternEndDate )( 
            IRecurrencePattern * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NoEndDate )( 
            IRecurrencePattern * This,
            /* [retval][out] */ VARIANT_BOOL *pfNoEndDate);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Occurrences )( 
            IRecurrencePattern * This,
            /* [retval][out] */ long *plOccurrences);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Interval )( 
            IRecurrencePattern * This,
            /* [retval][out] */ long *plInterval);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DayOfWeekMask )( 
            IRecurrencePattern * This,
            /* [retval][out] */ long *plMask);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DayOfMonth )( 
            IRecurrencePattern * This,
            /* [retval][out] */ long *plDay);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Instance )( 
            IRecurrencePattern * This,
            /* [retval][out] */ long *plInstance);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            IRecurrencePattern * This,
            /* [retval][out] */ long *plDuration);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MonthOfYear )( 
            IRecurrencePattern * This,
            /* [retval][out] */ long *plMonth);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RecurrenceType )( 
            IRecurrencePattern * This,
            /* [in] */ long lRecType);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PatternStartDate )( 
            IRecurrencePattern * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartTime )( 
            IRecurrencePattern * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EndTime )( 
            IRecurrencePattern * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PatternEndDate )( 
            IRecurrencePattern * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NoEndDate )( 
            IRecurrencePattern * This,
            /* [in] */ VARIANT_BOOL fNoEndDate);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Occurrences )( 
            IRecurrencePattern * This,
            /* [in] */ long lOccurrences);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Interval )( 
            IRecurrencePattern * This,
            /* [in] */ long lInterval);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DayOfWeekMask )( 
            IRecurrencePattern * This,
            /* [in] */ long lMask);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DayOfMonth )( 
            IRecurrencePattern * This,
            /* [in] */ long lDay);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Instance )( 
            IRecurrencePattern * This,
            /* [in] */ long lInstance);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Duration )( 
            IRecurrencePattern * This,
            /* [in] */ long lDuration);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MonthOfYear )( 
            IRecurrencePattern * This,
            /* [in] */ long lMonth);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exceptions )( 
            IRecurrencePattern * This,
            /* [retval][out] */ IExceptions **ppExceptions);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IRecurrencePattern * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        HRESULT ( STDMETHODCALLTYPE *GetOccurrence )( 
            IRecurrencePattern * This,
            /* [in] */ DATE date,
            /* [retval][out] */ IAppointment **ppAppt);
        
        END_INTERFACE
    } IRecurrencePatternVtbl;

    interface IRecurrencePattern
    {
        CONST_VTBL struct IRecurrencePatternVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecurrencePattern_QueryInterface(This,riid,ppvObject)  \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRecurrencePattern_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRecurrencePattern_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IRecurrencePattern_GetTypeInfoCount(This,pctinfo)   \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRecurrencePattern_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRecurrencePattern_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)  \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRecurrencePattern_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRecurrencePattern_get_RecurrenceType(This,plRecType)   \
    ( (This)->lpVtbl -> get_RecurrenceType(This,plRecType) ) 

#define IRecurrencePattern_get_PatternStartDate(This,pst)   \
    ( (This)->lpVtbl -> get_PatternStartDate(This,pst) ) 

#define IRecurrencePattern_get_StartTime(This,pst)  \
    ( (This)->lpVtbl -> get_StartTime(This,pst) ) 

#define IRecurrencePattern_get_EndTime(This,pst)    \
    ( (This)->lpVtbl -> get_EndTime(This,pst) ) 

#define IRecurrencePattern_get_PatternEndDate(This,pst) \
    ( (This)->lpVtbl -> get_PatternEndDate(This,pst) ) 

#define IRecurrencePattern_get_NoEndDate(This,pfNoEndDate)  \
    ( (This)->lpVtbl -> get_NoEndDate(This,pfNoEndDate) ) 

#define IRecurrencePattern_get_Occurrences(This,plOccurrences)  \
    ( (This)->lpVtbl -> get_Occurrences(This,plOccurrences) ) 

#define IRecurrencePattern_get_Interval(This,plInterval)    \
    ( (This)->lpVtbl -> get_Interval(This,plInterval) ) 

#define IRecurrencePattern_get_DayOfWeekMask(This,plMask)   \
    ( (This)->lpVtbl -> get_DayOfWeekMask(This,plMask) ) 

#define IRecurrencePattern_get_DayOfMonth(This,plDay)   \
    ( (This)->lpVtbl -> get_DayOfMonth(This,plDay) ) 

#define IRecurrencePattern_get_Instance(This,plInstance)    \
    ( (This)->lpVtbl -> get_Instance(This,plInstance) ) 

#define IRecurrencePattern_get_Duration(This,plDuration)    \
    ( (This)->lpVtbl -> get_Duration(This,plDuration) ) 

#define IRecurrencePattern_get_MonthOfYear(This,plMonth)    \
    ( (This)->lpVtbl -> get_MonthOfYear(This,plMonth) ) 

#define IRecurrencePattern_put_RecurrenceType(This,lRecType)    \
    ( (This)->lpVtbl -> put_RecurrenceType(This,lRecType) ) 

#define IRecurrencePattern_put_PatternStartDate(This,st)    \
    ( (This)->lpVtbl -> put_PatternStartDate(This,st) ) 

#define IRecurrencePattern_put_StartTime(This,st)   \
    ( (This)->lpVtbl -> put_StartTime(This,st) ) 

#define IRecurrencePattern_put_EndTime(This,st) \
    ( (This)->lpVtbl -> put_EndTime(This,st) ) 

#define IRecurrencePattern_put_PatternEndDate(This,st)  \
    ( (This)->lpVtbl -> put_PatternEndDate(This,st) ) 

#define IRecurrencePattern_put_NoEndDate(This,fNoEndDate)   \
    ( (This)->lpVtbl -> put_NoEndDate(This,fNoEndDate) ) 

#define IRecurrencePattern_put_Occurrences(This,lOccurrences)   \
    ( (This)->lpVtbl -> put_Occurrences(This,lOccurrences) ) 

#define IRecurrencePattern_put_Interval(This,lInterval) \
    ( (This)->lpVtbl -> put_Interval(This,lInterval) ) 

#define IRecurrencePattern_put_DayOfWeekMask(This,lMask)    \
    ( (This)->lpVtbl -> put_DayOfWeekMask(This,lMask) ) 

#define IRecurrencePattern_put_DayOfMonth(This,lDay)    \
    ( (This)->lpVtbl -> put_DayOfMonth(This,lDay) ) 

#define IRecurrencePattern_put_Instance(This,lInstance) \
    ( (This)->lpVtbl -> put_Instance(This,lInstance) ) 

#define IRecurrencePattern_put_Duration(This,lDuration) \
    ( (This)->lpVtbl -> put_Duration(This,lDuration) ) 

#define IRecurrencePattern_put_MonthOfYear(This,lMonth) \
    ( (This)->lpVtbl -> put_MonthOfYear(This,lMonth) ) 

#define IRecurrencePattern_get_Exceptions(This,ppExceptions)    \
    ( (This)->lpVtbl -> get_Exceptions(This,ppExceptions) ) 

#define IRecurrencePattern_get_Application(This,polApp) \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#define IRecurrencePattern_GetOccurrence(This,date,ppAppt)  \
    ( (This)->lpVtbl -> GetOccurrence(This,date,ppAppt) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IRecurrencePattern_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0006 */
/* [local] */ 

DEFINE_GUID(IID_IRecurrencePattern2, 0x86d50e13, 0x9c2a, 0x4e46, 0x8a, 0x90, 0xc9, 0x2e, 0x31, 0xc4, 0xc4, 0xf9);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0006_v0_0_s_ifspec;

#ifndef __IRecurrencePattern2_INTERFACE_DEFINED__
#define __IRecurrencePattern2_INTERFACE_DEFINED__

/* interface IRecurrencePattern2 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRecurrencePattern2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("86D50E13-9C2A-4e46-8A90-C92E31C4C4F9")
    IRecurrencePattern2 : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RecurrenceType( 
            /* [retval][out] */ long *plRecType) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PatternStartDate( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StartTime( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EndTime( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EndType( 
            /* [retval][out] */ OlRecurrenceEndType *pEndType) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PatternEndDate( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NoEndDate( 
            /* [retval][out] */ VARIANT_BOOL *pfNoEndDate) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Occurrences( 
            /* [retval][out] */ long *plOccurrences) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Interval( 
            /* [retval][out] */ long *plInterval) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DayOfWeekMask( 
            /* [retval][out] */ long *plMask) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DayOfMonth( 
            /* [retval][out] */ long *plDay) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Instance( 
            /* [retval][out] */ long *plInstance) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Duration( 
            /* [retval][out] */ long *plDuration) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MonthOfYear( 
            /* [retval][out] */ long *plMonth) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RecurrenceType( 
            /* [in] */ long lRecType) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PatternStartDate( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StartTime( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PatternEndDate( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NoEndDate( 
            /* [in] */ VARIANT_BOOL fNoEndDate) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Occurrences( 
            /* [in] */ long lOccurrences) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Interval( 
            /* [in] */ long lInterval) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DayOfWeekMask( 
            /* [in] */ long lMask) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DayOfMonth( 
            /* [in] */ long lDay) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Instance( 
            /* [in] */ long lInstance) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Duration( 
            /* [in] */ long lDuration) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MonthOfYear( 
            /* [in] */ long lMonth) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOccurrence( 
            /* [in] */ DATE date,
            /* [retval][out] */ IAppointment2 **ppAppt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOccurrenceByIndex( 
            /* [in] */ UINT uiIndex,
            /* [retval][out] */ IAppointment2 **ppAppt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasExceptions( 
            /* [retval][out] */ VARIANT_BOOL *pfHasExceptions) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Exceptions( 
            /* [retval][out] */ IExceptions **ppExceptions) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IRecurrencePattern2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRecurrencePattern2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRecurrencePattern2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRecurrencePattern2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRecurrencePattern2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRecurrencePattern2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRecurrencePattern2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRecurrencePattern2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RecurrenceType )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ long *plRecType);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PatternStartDate )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartTime )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndTime )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EndType )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ OlRecurrenceEndType *pEndType);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PatternEndDate )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NoEndDate )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNoEndDate);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Occurrences )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ long *plOccurrences);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Interval )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ long *plInterval);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DayOfWeekMask )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ long *plMask);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DayOfMonth )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ long *plDay);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Instance )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ long *plInstance);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ long *plDuration);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MonthOfYear )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ long *plMonth);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RecurrenceType )( 
            IRecurrencePattern2 * This,
            /* [in] */ long lRecType);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PatternStartDate )( 
            IRecurrencePattern2 * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartTime )( 
            IRecurrencePattern2 * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PatternEndDate )( 
            IRecurrencePattern2 * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NoEndDate )( 
            IRecurrencePattern2 * This,
            /* [in] */ VARIANT_BOOL fNoEndDate);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Occurrences )( 
            IRecurrencePattern2 * This,
            /* [in] */ long lOccurrences);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Interval )( 
            IRecurrencePattern2 * This,
            /* [in] */ long lInterval);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DayOfWeekMask )( 
            IRecurrencePattern2 * This,
            /* [in] */ long lMask);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DayOfMonth )( 
            IRecurrencePattern2 * This,
            /* [in] */ long lDay);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Instance )( 
            IRecurrencePattern2 * This,
            /* [in] */ long lInstance);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Duration )( 
            IRecurrencePattern2 * This,
            /* [in] */ long lDuration);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MonthOfYear )( 
            IRecurrencePattern2 * This,
            /* [in] */ long lMonth);
        
        HRESULT ( STDMETHODCALLTYPE *GetOccurrence )( 
            IRecurrencePattern2 * This,
            /* [in] */ DATE date,
            /* [retval][out] */ IAppointment2 **ppAppt);
        
        HRESULT ( STDMETHODCALLTYPE *GetOccurrenceByIndex )( 
            IRecurrencePattern2 * This,
            /* [in] */ UINT uiIndex,
            /* [retval][out] */ IAppointment2 **ppAppt);
        
        HRESULT ( STDMETHODCALLTYPE *HasExceptions )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfHasExceptions);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Exceptions )( 
            IRecurrencePattern2 * This,
            /* [retval][out] */ IExceptions **ppExceptions);
        
        END_INTERFACE
    } IRecurrencePattern2Vtbl;

    interface IRecurrencePattern2
    {
        CONST_VTBL struct IRecurrencePattern2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecurrencePattern2_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRecurrencePattern2_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRecurrencePattern2_Release(This)   \
    ( (This)->lpVtbl -> Release(This) ) 


#define IRecurrencePattern2_GetTypeInfoCount(This,pctinfo)  \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRecurrencePattern2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)   \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRecurrencePattern2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRecurrencePattern2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)   \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRecurrencePattern2_get_RecurrenceType(This,plRecType)  \
    ( (This)->lpVtbl -> get_RecurrenceType(This,plRecType) ) 

#define IRecurrencePattern2_get_PatternStartDate(This,pst)  \
    ( (This)->lpVtbl -> get_PatternStartDate(This,pst) ) 

#define IRecurrencePattern2_get_StartTime(This,pst) \
    ( (This)->lpVtbl -> get_StartTime(This,pst) ) 

#define IRecurrencePattern2_get_EndTime(This,pst)   \
    ( (This)->lpVtbl -> get_EndTime(This,pst) ) 

#define IRecurrencePattern2_get_EndType(This,pEndType)  \
    ( (This)->lpVtbl -> get_EndType(This,pEndType) ) 

#define IRecurrencePattern2_get_PatternEndDate(This,pst)    \
    ( (This)->lpVtbl -> get_PatternEndDate(This,pst) ) 

#define IRecurrencePattern2_get_NoEndDate(This,pfNoEndDate) \
    ( (This)->lpVtbl -> get_NoEndDate(This,pfNoEndDate) ) 

#define IRecurrencePattern2_get_Occurrences(This,plOccurrences) \
    ( (This)->lpVtbl -> get_Occurrences(This,plOccurrences) ) 

#define IRecurrencePattern2_get_Interval(This,plInterval)   \
    ( (This)->lpVtbl -> get_Interval(This,plInterval) ) 

#define IRecurrencePattern2_get_DayOfWeekMask(This,plMask)  \
    ( (This)->lpVtbl -> get_DayOfWeekMask(This,plMask) ) 

#define IRecurrencePattern2_get_DayOfMonth(This,plDay)  \
    ( (This)->lpVtbl -> get_DayOfMonth(This,plDay) ) 

#define IRecurrencePattern2_get_Instance(This,plInstance)   \
    ( (This)->lpVtbl -> get_Instance(This,plInstance) ) 

#define IRecurrencePattern2_get_Duration(This,plDuration)   \
    ( (This)->lpVtbl -> get_Duration(This,plDuration) ) 

#define IRecurrencePattern2_get_MonthOfYear(This,plMonth)   \
    ( (This)->lpVtbl -> get_MonthOfYear(This,plMonth) ) 

#define IRecurrencePattern2_put_RecurrenceType(This,lRecType)   \
    ( (This)->lpVtbl -> put_RecurrenceType(This,lRecType) ) 

#define IRecurrencePattern2_put_PatternStartDate(This,st)   \
    ( (This)->lpVtbl -> put_PatternStartDate(This,st) ) 

#define IRecurrencePattern2_put_StartTime(This,st)  \
    ( (This)->lpVtbl -> put_StartTime(This,st) ) 

#define IRecurrencePattern2_put_PatternEndDate(This,st) \
    ( (This)->lpVtbl -> put_PatternEndDate(This,st) ) 

#define IRecurrencePattern2_put_NoEndDate(This,fNoEndDate)  \
    ( (This)->lpVtbl -> put_NoEndDate(This,fNoEndDate) ) 

#define IRecurrencePattern2_put_Occurrences(This,lOccurrences)  \
    ( (This)->lpVtbl -> put_Occurrences(This,lOccurrences) ) 

#define IRecurrencePattern2_put_Interval(This,lInterval)    \
    ( (This)->lpVtbl -> put_Interval(This,lInterval) ) 

#define IRecurrencePattern2_put_DayOfWeekMask(This,lMask)   \
    ( (This)->lpVtbl -> put_DayOfWeekMask(This,lMask) ) 

#define IRecurrencePattern2_put_DayOfMonth(This,lDay)   \
    ( (This)->lpVtbl -> put_DayOfMonth(This,lDay) ) 

#define IRecurrencePattern2_put_Instance(This,lInstance)    \
    ( (This)->lpVtbl -> put_Instance(This,lInstance) ) 

#define IRecurrencePattern2_put_Duration(This,lDuration)    \
    ( (This)->lpVtbl -> put_Duration(This,lDuration) ) 

#define IRecurrencePattern2_put_MonthOfYear(This,lMonth)    \
    ( (This)->lpVtbl -> put_MonthOfYear(This,lMonth) ) 

#define IRecurrencePattern2_GetOccurrence(This,date,ppAppt) \
    ( (This)->lpVtbl -> GetOccurrence(This,date,ppAppt) ) 

#define IRecurrencePattern2_GetOccurrenceByIndex(This,uiIndex,ppAppt)   \
    ( (This)->lpVtbl -> GetOccurrenceByIndex(This,uiIndex,ppAppt) ) 

#define IRecurrencePattern2_HasExceptions(This,pfHasExceptions) \
    ( (This)->lpVtbl -> HasExceptions(This,pfHasExceptions) ) 

#define IRecurrencePattern2_get_Exceptions(This,ppExceptions)   \
    ( (This)->lpVtbl -> get_Exceptions(This,ppExceptions) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IRecurrencePattern2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0007 */
/* [local] */ 

DEFINE_GUID(IID_IRecipient, 0x7e136be0, 0x5240, 0x11d2, 0x8f, 0x1b, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0007_v0_0_s_ifspec;

#ifndef __IRecipient_INTERFACE_DEFINED__
#define __IRecipient_INTERFACE_DEFINED__

/* interface IRecipient */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRecipient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7e136be0-5240-11d2-8f1b-0000f87a4335")
    IRecipient : public IDispatch
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Address( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Address( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IRecipientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRecipient * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRecipient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRecipient * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRecipient * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRecipient * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRecipient * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRecipient * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Address )( 
            IRecipient * This,
            /* [in] */ BSTR bstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Address )( 
            IRecipient * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IRecipient * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IRecipient * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        END_INTERFACE
    } IRecipientVtbl;

    interface IRecipient
    {
        CONST_VTBL struct IRecipientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecipient_QueryInterface(This,riid,ppvObject)  \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRecipient_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRecipient_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IRecipient_GetTypeInfoCount(This,pctinfo)   \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRecipient_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRecipient_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)  \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRecipient_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRecipient_put_Address(This,bstr)   \
    ( (This)->lpVtbl -> put_Address(This,bstr) ) 

#define IRecipient_get_Address(This,pbstr)  \
    ( (This)->lpVtbl -> get_Address(This,pbstr) ) 

#define IRecipient_get_Name(This,pbstr) \
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IRecipient_get_Application(This,polApp) \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IRecipient_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0008 */
/* [local] */ 

DEFINE_GUID(IID_IPOlRecipient, 0xA11C6E30, 0x51B5, 0x11d3, 0x8f, 0x39, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0008_v0_0_s_ifspec;

#ifndef __IPOlRecipient_INTERFACE_DEFINED__
#define __IPOlRecipient_INTERFACE_DEFINED__

/* interface IPOlRecipient */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPOlRecipient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a11c6e30-51b5-11d3-8f39-0000f87a4335")
    IPOlRecipient : public IRecipient
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Resolve( 
            /* [in] */ VARIANT_BOOL fShowDialog,
            /* [retval][out] */ VARIANT_BOOL *pfResolved) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IPOlRecipientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOlRecipient * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOlRecipient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOlRecipient * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPOlRecipient * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPOlRecipient * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPOlRecipient * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPOlRecipient * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Address )( 
            IPOlRecipient * This,
            /* [in] */ BSTR bstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Address )( 
            IPOlRecipient * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IPOlRecipient * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IPOlRecipient * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        HRESULT ( STDMETHODCALLTYPE *Resolve )( 
            IPOlRecipient * This,
            /* [in] */ VARIANT_BOOL fShowDialog,
            /* [retval][out] */ VARIANT_BOOL *pfResolved);
        
        END_INTERFACE
    } IPOlRecipientVtbl;

    interface IPOlRecipient
    {
        CONST_VTBL struct IPOlRecipientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOlRecipient_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOlRecipient_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOlRecipient_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOlRecipient_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPOlRecipient_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPOlRecipient_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)   \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPOlRecipient_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPOlRecipient_put_Address(This,bstr)    \
    ( (This)->lpVtbl -> put_Address(This,bstr) ) 

#define IPOlRecipient_get_Address(This,pbstr)   \
    ( (This)->lpVtbl -> get_Address(This,pbstr) ) 

#define IPOlRecipient_get_Name(This,pbstr)  \
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IPOlRecipient_get_Application(This,polApp)  \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 


#define IPOlRecipient_Resolve(This,fShowDialog,pfResolved)  \
    ( (This)->lpVtbl -> Resolve(This,fShowDialog,pfResolved) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IPOlRecipient_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0009 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum OlRecipientType
    {   olRecipientTypeUnknown  = 0,
    olRecipientTypeRequired = 1,
    olRecipientTypeOptional = 2,
    olRecipientTypeResource = 3,
    olRecipientTypeOrganizer    = 4
    }   OlRecipientType;

typedef /* [v1_enum] */ 
enum OlRecipientStatus
    {   olRecipientStatusUnknown    = 0,
    olRecipientStatusAccepted   = 1,
    olRecipientStatusDeclined   = 2,
    olRecipientStatusTentative  = 3,
    olRecipientStatusNoResponse = 4
    }   OlRecipientStatus;

DEFINE_GUID(IID_IRecipient2, 0x13a73d92, 0xc9ce, 0x4904, 0xa3, 0x48, 0xcb, 0xa3, 0x24, 0x6f, 0x2f, 0x8c);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0009_v0_0_s_ifspec;

#ifndef __IRecipient2_INTERFACE_DEFINED__
#define __IRecipient2_INTERFACE_DEFINED__

/* interface IRecipient2 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRecipient2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("13a73d92-c9ce-4904-a348-cba3246f2f8c")
    IRecipient2 : public IPOlRecipient
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ OlRecipientType rtType) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Status( 
            /* [in] */ OlRecipientStatus rtStatus) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ OlRecipientType *prtType) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ OlRecipientStatus *prtStatus) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IRecipient2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRecipient2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRecipient2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRecipient2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRecipient2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRecipient2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRecipient2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRecipient2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Address )( 
            IRecipient2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Address )( 
            IRecipient2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IRecipient2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IRecipient2 * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        HRESULT ( STDMETHODCALLTYPE *Resolve )( 
            IRecipient2 * This,
            /* [in] */ VARIANT_BOOL fShowDialog,
            /* [retval][out] */ VARIANT_BOOL *pfResolved);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IRecipient2 * This,
            /* [in] */ OlRecipientType rtType);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Status )( 
            IRecipient2 * This,
            /* [in] */ OlRecipientStatus rtStatus);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IRecipient2 * This,
            /* [retval][out] */ OlRecipientType *prtType);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IRecipient2 * This,
            /* [retval][out] */ OlRecipientStatus *prtStatus);
        
        END_INTERFACE
    } IRecipient2Vtbl;

    interface IRecipient2
    {
        CONST_VTBL struct IRecipient2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecipient2_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRecipient2_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRecipient2_Release(This)   \
    ( (This)->lpVtbl -> Release(This) ) 


#define IRecipient2_GetTypeInfoCount(This,pctinfo)  \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRecipient2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)   \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRecipient2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRecipient2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)   \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRecipient2_put_Address(This,bstr)  \
    ( (This)->lpVtbl -> put_Address(This,bstr) ) 

#define IRecipient2_get_Address(This,pbstr) \
    ( (This)->lpVtbl -> get_Address(This,pbstr) ) 

#define IRecipient2_get_Name(This,pbstr)    \
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IRecipient2_get_Application(This,polApp)    \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 


#define IRecipient2_Resolve(This,fShowDialog,pfResolved)    \
    ( (This)->lpVtbl -> Resolve(This,fShowDialog,pfResolved) ) 


#define IRecipient2_put_Type(This,rtType)   \
    ( (This)->lpVtbl -> put_Type(This,rtType) ) 

#define IRecipient2_put_Status(This,rtStatus)   \
    ( (This)->lpVtbl -> put_Status(This,rtStatus) ) 

#define IRecipient2_get_Type(This,prtType)  \
    ( (This)->lpVtbl -> get_Type(This,prtType) ) 

#define IRecipient2_get_Status(This,prtStatus)  \
    ( (This)->lpVtbl -> get_Status(This,prtStatus) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IRecipient2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0010 */
/* [local] */ 

DEFINE_GUID(IID_IRecipients, 0x76065ae0, 0x2347, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0010_v0_0_s_ifspec;

#ifndef __IRecipients_INTERFACE_DEFINED__
#define __IRecipients_INTERFACE_DEFINED__

/* interface IRecipients */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRecipients;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("76065ae0-2347-11d2-8f18-0000f87a4335")
    IRecipients : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IRecipient **ppRecipient) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ int iIndex,
            /* [retval][out] */ IRecipient **ppRecipient) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ int iIndex) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ int *pnCount) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnumerator) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IRecipientsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRecipients * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRecipients * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRecipients * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRecipients * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRecipients * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRecipients * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRecipients * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            IRecipients * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IRecipient **ppRecipient);
        
        HRESULT ( STDMETHODCALLTYPE *Item )( 
            IRecipients * This,
            /* [in] */ int iIndex,
            /* [retval][out] */ IRecipient **ppRecipient);
        
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IRecipients * This,
            /* [in] */ int iIndex);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IRecipients * This,
            /* [retval][out] */ int *pnCount);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IRecipients * This,
            /* [retval][out] */ IUnknown **ppEnumerator);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IRecipients * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        END_INTERFACE
    } IRecipientsVtbl;

    interface IRecipients
    {
        CONST_VTBL struct IRecipientsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecipients_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRecipients_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRecipients_Release(This)   \
    ( (This)->lpVtbl -> Release(This) ) 


#define IRecipients_GetTypeInfoCount(This,pctinfo)  \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRecipients_GetTypeInfo(This,iTInfo,lcid,ppTInfo)   \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRecipients_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRecipients_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)   \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRecipients_Add(This,bstrName,ppRecipient)  \
    ( (This)->lpVtbl -> Add(This,bstrName,ppRecipient) ) 

#define IRecipients_Item(This,iIndex,ppRecipient)   \
    ( (This)->lpVtbl -> Item(This,iIndex,ppRecipient) ) 

#define IRecipients_Remove(This,iIndex) \
    ( (This)->lpVtbl -> Remove(This,iIndex) ) 

#define IRecipients_get_Count(This,pnCount) \
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IRecipients_get__NewEnum(This,ppEnumerator) \
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumerator) ) 

#define IRecipients_get_Application(This,polApp)    \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IRecipients_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0011 */
/* [local] */ 

DEFINE_GUID(IID_IRecipients2, 0x463dfb6e, 0xede9, 0x48bf, 0x84, 0x5e, 0x52, 0xb1, 0xf, 0x8f, 0xba, 0x9b);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0011_v0_0_s_ifspec;

#ifndef __IRecipients2_INTERFACE_DEFINED__
#define __IRecipients2_INTERFACE_DEFINED__

/* interface IRecipients2 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRecipients2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("463DFB6E-EDE9-48bf-845E-52B10F8FBA9B")
    IRecipients2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IRecipient3 **ppRecipient) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ int iIndex,
            /* [retval][out] */ IRecipient3 **ppRecipient) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ int iIndex) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ int *pnCount) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnumerator) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp3 **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IRecipients2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRecipients2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRecipients2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRecipients2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            IRecipients2 * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ IRecipient3 **ppRecipient);
        
        HRESULT ( STDMETHODCALLTYPE *Item )( 
            IRecipients2 * This,
            /* [in] */ int iIndex,
            /* [retval][out] */ IRecipient3 **ppRecipient);
        
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IRecipients2 * This,
            /* [in] */ int iIndex);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IRecipients2 * This,
            /* [retval][out] */ int *pnCount);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IRecipients2 * This,
            /* [retval][out] */ IUnknown **ppEnumerator);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IRecipients2 * This,
            /* [retval][out] */ IPOutlookApp3 **polApp);
        
        END_INTERFACE
    } IRecipients2Vtbl;

    interface IRecipients2
    {
        CONST_VTBL struct IRecipients2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecipients2_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRecipients2_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRecipients2_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define IRecipients2_Add(This,bstrName,ppRecipient) \
    ( (This)->lpVtbl -> Add(This,bstrName,ppRecipient) ) 

#define IRecipients2_Item(This,iIndex,ppRecipient)  \
    ( (This)->lpVtbl -> Item(This,iIndex,ppRecipient) ) 

#define IRecipients2_Remove(This,iIndex)    \
    ( (This)->lpVtbl -> Remove(This,iIndex) ) 

#define IRecipients2_get_Count(This,pnCount)    \
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IRecipients2_get__NewEnum(This,ppEnumerator)    \
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumerator) ) 

#define IRecipients2_get_Application(This,polApp)   \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IRecipients2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0012 */
/* [local] */ 

DEFINE_GUID(IID_IPOutlookItemCollection, 0xf06748c0, 0x21a5, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0012_v0_0_s_ifspec;

#ifndef __IPOutlookItemCollection_INTERFACE_DEFINED__
#define __IPOutlookItemCollection_INTERFACE_DEFINED__

/* interface IPOutlookItemCollection */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPOutlookItemCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f06748c0-21a5-11d2-8f18-0000f87a4335")
    IPOutlookItemCollection : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [retval][out] */ IDispatch **ppolItem) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ int *pnCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IDispatch **ppItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindNext( 
            /* [retval][out] */ IDispatch **ppItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ int index,
            /* [retval][out] */ IDispatch **polItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ int iIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Restrict( 
            /* [in] */ BSTR pwszRestriction,
            /* [retval][out] */ IPOutlookItemCollection **ppolItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Sort( 
            /* [in] */ BSTR pwszProperty,
            /* [in] */ VARIANT_BOOL fDescending) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IncludeRecurrences( 
            /* [retval][out] */ VARIANT_BOOL *pfIncludeRecurrences) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IncludeRecurrences( 
            /* [in] */ VARIANT_BOOL fIncludeRecurrences) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnumerator) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IPOutlookItemCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOutlookItemCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOutlookItemCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOutlookItemCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPOutlookItemCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPOutlookItemCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPOutlookItemCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPOutlookItemCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            IPOutlookItemCollection * This,
            /* [retval][out] */ IDispatch **ppolItem);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IPOutlookItemCollection * This,
            /* [retval][out] */ int *pnCount);
        
        HRESULT ( STDMETHODCALLTYPE *Find )( 
            IPOutlookItemCollection * This,
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IDispatch **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *FindNext )( 
            IPOutlookItemCollection * This,
            /* [retval][out] */ IDispatch **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *Item )( 
            IPOutlookItemCollection * This,
            /* [in] */ int index,
            /* [retval][out] */ IDispatch **polItem);
        
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IPOutlookItemCollection * This,
            /* [in] */ int iIndex);
        
        HRESULT ( STDMETHODCALLTYPE *Restrict )( 
            IPOutlookItemCollection * This,
            /* [in] */ BSTR pwszRestriction,
            /* [retval][out] */ IPOutlookItemCollection **ppolItems);
        
        HRESULT ( STDMETHODCALLTYPE *Sort )( 
            IPOutlookItemCollection * This,
            /* [in] */ BSTR pwszProperty,
            /* [in] */ VARIANT_BOOL fDescending);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeRecurrences )( 
            IPOutlookItemCollection * This,
            /* [retval][out] */ VARIANT_BOOL *pfIncludeRecurrences);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IncludeRecurrences )( 
            IPOutlookItemCollection * This,
            /* [in] */ VARIANT_BOOL fIncludeRecurrences);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IPOutlookItemCollection * This,
            /* [retval][out] */ IUnknown **ppEnumerator);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IPOutlookItemCollection * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        END_INTERFACE
    } IPOutlookItemCollectionVtbl;

    interface IPOutlookItemCollection
    {
        CONST_VTBL struct IPOutlookItemCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOutlookItemCollection_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOutlookItemCollection_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOutlookItemCollection_Release(This)   \
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOutlookItemCollection_GetTypeInfoCount(This,pctinfo)  \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPOutlookItemCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)   \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPOutlookItemCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPOutlookItemCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)   \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPOutlookItemCollection_Add(This,ppolItem)  \
    ( (This)->lpVtbl -> Add(This,ppolItem) ) 

#define IPOutlookItemCollection_get_Count(This,pnCount) \
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IPOutlookItemCollection_Find(This,bstrRestriction,ppItem)   \
    ( (This)->lpVtbl -> Find(This,bstrRestriction,ppItem) ) 

#define IPOutlookItemCollection_FindNext(This,ppItem)   \
    ( (This)->lpVtbl -> FindNext(This,ppItem) ) 

#define IPOutlookItemCollection_Item(This,index,polItem)    \
    ( (This)->lpVtbl -> Item(This,index,polItem) ) 

#define IPOutlookItemCollection_Remove(This,iIndex) \
    ( (This)->lpVtbl -> Remove(This,iIndex) ) 

#define IPOutlookItemCollection_Restrict(This,pwszRestriction,ppolItems)    \
    ( (This)->lpVtbl -> Restrict(This,pwszRestriction,ppolItems) ) 

#define IPOutlookItemCollection_Sort(This,pwszProperty,fDescending) \
    ( (This)->lpVtbl -> Sort(This,pwszProperty,fDescending) ) 

#define IPOutlookItemCollection_get_IncludeRecurrences(This,pfIncludeRecurrences)   \
    ( (This)->lpVtbl -> get_IncludeRecurrences(This,pfIncludeRecurrences) ) 

#define IPOutlookItemCollection_put_IncludeRecurrences(This,fIncludeRecurrences)    \
    ( (This)->lpVtbl -> put_IncludeRecurrences(This,fIncludeRecurrences) ) 

#define IPOutlookItemCollection_get__NewEnum(This,ppEnumerator) \
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumerator) ) 

#define IPOutlookItemCollection_get_Application(This,polApp)    \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IPOutlookItemCollection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0013 */
/* [local] */ 

DEFINE_GUID(IID_IPOutlookItemCollection2, 0xe6a4c648, 0x414c, 0x453c, 0xbe, 0x7, 0x79, 0x43, 0xb, 0x4a, 0xdc, 0xda);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0013_v0_0_s_ifspec;

#ifndef __IPOutlookItemCollection2_INTERFACE_DEFINED__
#define __IPOutlookItemCollection2_INTERFACE_DEFINED__

/* interface IPOutlookItemCollection2 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPOutlookItemCollection2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E6A4C648-414C-453c-BE07-79430B4ADCDA")
    IPOutlookItemCollection2 : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IItem2 **ppItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindNext( 
            /* [retval][out] */ IItem2 **ppItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ int index,
            /* [retval][out] */ IItem2 **ppItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ItemId( 
            /* [in] */ int index,
            /* [out] */ OLITEMID *pOlItemId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Restrict( 
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IPOutlookItemCollection2 **ppItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Sort( 
            /* [in] */ DWORD cSorts,
            /* [in] */ BSTR *rgbstrProperty,
            /* [in] */ VARIANT_BOOL *rgfDescending) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ int *pnCount) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnumerator) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp3 **polApp) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IncludeRecurrences( 
            /* [retval][out] */ VARIANT_BOOL *pfIncludeRecurrences) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IncludeRecurrences( 
            /* [in] */ VARIANT_BOOL fIncludeRecurrences) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIndexFromId( 
            /* [in] */ OLITEMID *pItemId,
            /* [out] */ DWORD *pdwIndex) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IPOutlookItemCollection2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOutlookItemCollection2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOutlookItemCollection2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOutlookItemCollection2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPOutlookItemCollection2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPOutlookItemCollection2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPOutlookItemCollection2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPOutlookItemCollection2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Find )( 
            IPOutlookItemCollection2 * This,
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IItem2 **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *FindNext )( 
            IPOutlookItemCollection2 * This,
            /* [retval][out] */ IItem2 **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *Item )( 
            IPOutlookItemCollection2 * This,
            /* [in] */ int index,
            /* [retval][out] */ IItem2 **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *ItemId )( 
            IPOutlookItemCollection2 * This,
            /* [in] */ int index,
            /* [out] */ OLITEMID *pOlItemId);
        
        HRESULT ( STDMETHODCALLTYPE *Restrict )( 
            IPOutlookItemCollection2 * This,
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IPOutlookItemCollection2 **ppItems);
        
        HRESULT ( STDMETHODCALLTYPE *Sort )( 
            IPOutlookItemCollection2 * This,
            /* [in] */ DWORD cSorts,
            /* [in] */ BSTR *rgbstrProperty,
            /* [in] */ VARIANT_BOOL *rgfDescending);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IPOutlookItemCollection2 * This,
            /* [retval][out] */ int *pnCount);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IPOutlookItemCollection2 * This,
            /* [retval][out] */ IUnknown **ppEnumerator);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IPOutlookItemCollection2 * This,
            /* [retval][out] */ IPOutlookApp3 **polApp);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeRecurrences )( 
            IPOutlookItemCollection2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfIncludeRecurrences);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IncludeRecurrences )( 
            IPOutlookItemCollection2 * This,
            /* [in] */ VARIANT_BOOL fIncludeRecurrences);
        
        HRESULT ( STDMETHODCALLTYPE *GetIndexFromId )( 
            IPOutlookItemCollection2 * This,
            /* [in] */ OLITEMID *pItemId,
            /* [out] */ DWORD *pdwIndex);
        
        END_INTERFACE
    } IPOutlookItemCollection2Vtbl;

    interface IPOutlookItemCollection2
    {
        CONST_VTBL struct IPOutlookItemCollection2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOutlookItemCollection2_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOutlookItemCollection2_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOutlookItemCollection2_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOutlookItemCollection2_GetTypeInfoCount(This,pctinfo) \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPOutlookItemCollection2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)  \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPOutlookItemCollection2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPOutlookItemCollection2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)  \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPOutlookItemCollection2_Find(This,bstrRestriction,ppItem)  \
    ( (This)->lpVtbl -> Find(This,bstrRestriction,ppItem) ) 

#define IPOutlookItemCollection2_FindNext(This,ppItem)  \
    ( (This)->lpVtbl -> FindNext(This,ppItem) ) 

#define IPOutlookItemCollection2_Item(This,index,ppItem)    \
    ( (This)->lpVtbl -> Item(This,index,ppItem) ) 

#define IPOutlookItemCollection2_ItemId(This,index,pOlItemId)   \
    ( (This)->lpVtbl -> ItemId(This,index,pOlItemId) ) 

#define IPOutlookItemCollection2_Restrict(This,bstrRestriction,ppItems) \
    ( (This)->lpVtbl -> Restrict(This,bstrRestriction,ppItems) ) 

#define IPOutlookItemCollection2_Sort(This,cSorts,rgbstrProperty,rgfDescending) \
    ( (This)->lpVtbl -> Sort(This,cSorts,rgbstrProperty,rgfDescending) ) 

#define IPOutlookItemCollection2_get_Count(This,pnCount)    \
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IPOutlookItemCollection2_get__NewEnum(This,ppEnumerator)    \
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumerator) ) 

#define IPOutlookItemCollection2_get_Application(This,polApp)   \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#define IPOutlookItemCollection2_get_IncludeRecurrences(This,pfIncludeRecurrences)  \
    ( (This)->lpVtbl -> get_IncludeRecurrences(This,pfIncludeRecurrences) ) 

#define IPOutlookItemCollection2_put_IncludeRecurrences(This,fIncludeRecurrences)   \
    ( (This)->lpVtbl -> put_IncludeRecurrences(This,fIncludeRecurrences) ) 

#define IPOutlookItemCollection2_GetIndexFromId(This,pItemId,pdwIndex)  \
    ( (This)->lpVtbl -> GetIndexFromId(This,pItemId,pdwIndex) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IPOutlookItemCollection2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0014 */
/* [local] */ 

DEFINE_GUID(IID_IPOutlookFolderCollection, 0xa8235f22, 0xe980, 0x4633, 0x82, 0xec, 0x81, 0x18, 0xd8, 0xb3, 0x7c, 0xb5);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0014_v0_0_s_ifspec;

#ifndef __IPOutlookFolderCollection_INTERFACE_DEFINED__
#define __IPOutlookFolderCollection_INTERFACE_DEFINED__

/* interface IPOutlookFolderCollection */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPOutlookFolderCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A8235F22-E980-4633-82EC-8118D8B37CB5")
    IPOutlookFolderCollection : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ int *pnCount) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnumerator) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp3 **ppolApp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IFolder2 **ppFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindNext( 
            /* [retval][out] */ IFolder2 **ppFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolder( 
            /* [in] */ int index,
            /* [retval][out] */ IFolder2 **ppFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Restrict( 
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IPOutlookFolderCollection **ppFolders) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Sort( 
            /* [in] */ DWORD cSorts,
            /* [in] */ BSTR *rgbstrProperty,
            /* [in] */ VARIANT_BOOL *rgfDescending) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IPOutlookFolderCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOutlookFolderCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOutlookFolderCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOutlookFolderCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPOutlookFolderCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPOutlookFolderCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPOutlookFolderCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPOutlookFolderCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IPOutlookFolderCollection * This,
            /* [retval][out] */ int *pnCount);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IPOutlookFolderCollection * This,
            /* [retval][out] */ IUnknown **ppEnumerator);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IPOutlookFolderCollection * This,
            /* [retval][out] */ IPOutlookApp3 **ppolApp);
        
        HRESULT ( STDMETHODCALLTYPE *Find )( 
            IPOutlookFolderCollection * This,
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IFolder2 **ppFolder);
        
        HRESULT ( STDMETHODCALLTYPE *FindNext )( 
            IPOutlookFolderCollection * This,
            /* [retval][out] */ IFolder2 **ppFolder);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolder )( 
            IPOutlookFolderCollection * This,
            /* [in] */ int index,
            /* [retval][out] */ IFolder2 **ppFolder);
        
        HRESULT ( STDMETHODCALLTYPE *Restrict )( 
            IPOutlookFolderCollection * This,
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IPOutlookFolderCollection **ppFolders);
        
        HRESULT ( STDMETHODCALLTYPE *Sort )( 
            IPOutlookFolderCollection * This,
            /* [in] */ DWORD cSorts,
            /* [in] */ BSTR *rgbstrProperty,
            /* [in] */ VARIANT_BOOL *rgfDescending);
        
        END_INTERFACE
    } IPOutlookFolderCollectionVtbl;

    interface IPOutlookFolderCollection
    {
        CONST_VTBL struct IPOutlookFolderCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOutlookFolderCollection_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOutlookFolderCollection_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOutlookFolderCollection_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOutlookFolderCollection_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPOutlookFolderCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPOutlookFolderCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)   \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPOutlookFolderCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPOutlookFolderCollection_get_Count(This,pnCount)   \
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IPOutlookFolderCollection_get__NewEnum(This,ppEnumerator)   \
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumerator) ) 

#define IPOutlookFolderCollection_get_Application(This,ppolApp) \
    ( (This)->lpVtbl -> get_Application(This,ppolApp) ) 

#define IPOutlookFolderCollection_Find(This,bstrRestriction,ppFolder)   \
    ( (This)->lpVtbl -> Find(This,bstrRestriction,ppFolder) ) 

#define IPOutlookFolderCollection_FindNext(This,ppFolder)   \
    ( (This)->lpVtbl -> FindNext(This,ppFolder) ) 

#define IPOutlookFolderCollection_GetFolder(This,index,ppFolder)    \
    ( (This)->lpVtbl -> GetFolder(This,index,ppFolder) ) 

#define IPOutlookFolderCollection_Restrict(This,bstrRestriction,ppFolders)  \
    ( (This)->lpVtbl -> Restrict(This,bstrRestriction,ppFolders) ) 

#define IPOutlookFolderCollection_Sort(This,cSorts,rgbstrProperty,rgfDescending)    \
    ( (This)->lpVtbl -> Sort(This,cSorts,rgbstrProperty,rgfDescending) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IPOutlookFolderCollection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0015 */
/* [local] */ 

DEFINE_GUID(IID_IPOutlookStoreCollection, 0xeb5200a8, 0x727b, 0x4aee, 0xb4, 0x15, 0x6c, 0xa4, 0xfb, 0x85, 0x57, 0xf7);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0015_v0_0_s_ifspec;

#ifndef __IPOutlookStoreCollection_INTERFACE_DEFINED__
#define __IPOutlookStoreCollection_INTERFACE_DEFINED__

/* interface IPOutlookStoreCollection */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPOutlookStoreCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EB5200A8-727B-4aee-B415-6CA4FB8557F7")
    IPOutlookStoreCollection : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ int *pnCount) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnumerator) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp3 **ppolApp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IStore **ppStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindNext( 
            /* [retval][out] */ IStore **ppStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStore( 
            /* [in] */ int index,
            /* [retval][out] */ IStore **ppStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Restrict( 
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IPOutlookStoreCollection **ppStores) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Sort( 
            /* [in] */ DWORD cSorts,
            /* [in] */ BSTR *rgbstrProperty,
            /* [in] */ VARIANT_BOOL *rgfDescending) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IPOutlookStoreCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOutlookStoreCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOutlookStoreCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOutlookStoreCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPOutlookStoreCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPOutlookStoreCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPOutlookStoreCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPOutlookStoreCollection * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IPOutlookStoreCollection * This,
            /* [retval][out] */ int *pnCount);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IPOutlookStoreCollection * This,
            /* [retval][out] */ IUnknown **ppEnumerator);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IPOutlookStoreCollection * This,
            /* [retval][out] */ IPOutlookApp3 **ppolApp);
        
        HRESULT ( STDMETHODCALLTYPE *Find )( 
            IPOutlookStoreCollection * This,
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IStore **ppStore);
        
        HRESULT ( STDMETHODCALLTYPE *FindNext )( 
            IPOutlookStoreCollection * This,
            /* [retval][out] */ IStore **ppStore);
        
        HRESULT ( STDMETHODCALLTYPE *GetStore )( 
            IPOutlookStoreCollection * This,
            /* [in] */ int index,
            /* [retval][out] */ IStore **ppStore);
        
        HRESULT ( STDMETHODCALLTYPE *Restrict )( 
            IPOutlookStoreCollection * This,
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IPOutlookStoreCollection **ppStores);
        
        HRESULT ( STDMETHODCALLTYPE *Sort )( 
            IPOutlookStoreCollection * This,
            /* [in] */ DWORD cSorts,
            /* [in] */ BSTR *rgbstrProperty,
            /* [in] */ VARIANT_BOOL *rgfDescending);
        
        END_INTERFACE
    } IPOutlookStoreCollectionVtbl;

    interface IPOutlookStoreCollection
    {
        CONST_VTBL struct IPOutlookStoreCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOutlookStoreCollection_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOutlookStoreCollection_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOutlookStoreCollection_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOutlookStoreCollection_GetTypeInfoCount(This,pctinfo) \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPOutlookStoreCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)  \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPOutlookStoreCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPOutlookStoreCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)  \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPOutlookStoreCollection_get_Count(This,pnCount)    \
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IPOutlookStoreCollection_get__NewEnum(This,ppEnumerator)    \
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumerator) ) 

#define IPOutlookStoreCollection_get_Application(This,ppolApp)  \
    ( (This)->lpVtbl -> get_Application(This,ppolApp) ) 

#define IPOutlookStoreCollection_Find(This,bstrRestriction,ppStore) \
    ( (This)->lpVtbl -> Find(This,bstrRestriction,ppStore) ) 

#define IPOutlookStoreCollection_FindNext(This,ppStore) \
    ( (This)->lpVtbl -> FindNext(This,ppStore) ) 

#define IPOutlookStoreCollection_GetStore(This,index,ppStore)   \
    ( (This)->lpVtbl -> GetStore(This,index,ppStore) ) 

#define IPOutlookStoreCollection_Restrict(This,bstrRestriction,ppStores)    \
    ( (This)->lpVtbl -> Restrict(This,bstrRestriction,ppStores) ) 

#define IPOutlookStoreCollection_Sort(This,cSorts,rgbstrProperty,rgfDescending) \
    ( (This)->lpVtbl -> Sort(This,cSorts,rgbstrProperty,rgfDescending) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IPOutlookStoreCollection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0016 */
/* [local] */ 

DEFINE_GUID(IID_IPOlItems, 0x6E3DBE90, 0x5411, 0x11d3, 0x8F, 0x39, 0x0, 0x0, 0xF8, 0x7A, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0016_v0_0_s_ifspec;

#ifndef __IPOlItems_INTERFACE_DEFINED__
#define __IPOlItems_INTERFACE_DEFINED__

/* interface IPOlItems */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPOlItems;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6e3dbe90-5411-11d3-8f39-0000f87a4335")
    IPOlItems : public IPOutlookItemCollection
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetColumns( 
            /* [in] */ BSTR bstrColumns) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IPOlItemsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOlItems * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOlItems * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOlItems * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPOlItems * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPOlItems * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPOlItems * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPOlItems * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            IPOlItems * This,
            /* [retval][out] */ IDispatch **ppolItem);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IPOlItems * This,
            /* [retval][out] */ int *pnCount);
        
        HRESULT ( STDMETHODCALLTYPE *Find )( 
            IPOlItems * This,
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IDispatch **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *FindNext )( 
            IPOlItems * This,
            /* [retval][out] */ IDispatch **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *Item )( 
            IPOlItems * This,
            /* [in] */ int index,
            /* [retval][out] */ IDispatch **polItem);
        
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IPOlItems * This,
            /* [in] */ int iIndex);
        
        HRESULT ( STDMETHODCALLTYPE *Restrict )( 
            IPOlItems * This,
            /* [in] */ BSTR pwszRestriction,
            /* [retval][out] */ IPOutlookItemCollection **ppolItems);
        
        HRESULT ( STDMETHODCALLTYPE *Sort )( 
            IPOlItems * This,
            /* [in] */ BSTR pwszProperty,
            /* [in] */ VARIANT_BOOL fDescending);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeRecurrences )( 
            IPOlItems * This,
            /* [retval][out] */ VARIANT_BOOL *pfIncludeRecurrences);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IncludeRecurrences )( 
            IPOlItems * This,
            /* [in] */ VARIANT_BOOL fIncludeRecurrences);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IPOlItems * This,
            /* [retval][out] */ IUnknown **ppEnumerator);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IPOlItems * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        HRESULT ( STDMETHODCALLTYPE *SetColumns )( 
            IPOlItems * This,
            /* [in] */ BSTR bstrColumns);
        
        END_INTERFACE
    } IPOlItemsVtbl;

    interface IPOlItems
    {
        CONST_VTBL struct IPOlItemsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOlItems_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOlItems_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOlItems_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOlItems_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPOlItems_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPOlItems_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)   \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPOlItems_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPOlItems_Add(This,ppolItem)    \
    ( (This)->lpVtbl -> Add(This,ppolItem) ) 

#define IPOlItems_get_Count(This,pnCount)   \
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IPOlItems_Find(This,bstrRestriction,ppItem) \
    ( (This)->lpVtbl -> Find(This,bstrRestriction,ppItem) ) 

#define IPOlItems_FindNext(This,ppItem) \
    ( (This)->lpVtbl -> FindNext(This,ppItem) ) 

#define IPOlItems_Item(This,index,polItem)  \
    ( (This)->lpVtbl -> Item(This,index,polItem) ) 

#define IPOlItems_Remove(This,iIndex)   \
    ( (This)->lpVtbl -> Remove(This,iIndex) ) 

#define IPOlItems_Restrict(This,pwszRestriction,ppolItems)  \
    ( (This)->lpVtbl -> Restrict(This,pwszRestriction,ppolItems) ) 

#define IPOlItems_Sort(This,pwszProperty,fDescending)   \
    ( (This)->lpVtbl -> Sort(This,pwszProperty,fDescending) ) 

#define IPOlItems_get_IncludeRecurrences(This,pfIncludeRecurrences) \
    ( (This)->lpVtbl -> get_IncludeRecurrences(This,pfIncludeRecurrences) ) 

#define IPOlItems_put_IncludeRecurrences(This,fIncludeRecurrences)  \
    ( (This)->lpVtbl -> put_IncludeRecurrences(This,fIncludeRecurrences) ) 

#define IPOlItems_get__NewEnum(This,ppEnumerator)   \
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumerator) ) 

#define IPOlItems_get_Application(This,polApp)  \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 


#define IPOlItems_SetColumns(This,bstrColumns)  \
    ( (This)->lpVtbl -> SetColumns(This,bstrColumns) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IPOlItems_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0017 */
/* [local] */ 

DEFINE_GUID(IID_IContact, 0x7f804e40, 0x2010, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0017_v0_0_s_ifspec;

#ifndef __IContact_INTERFACE_DEFINED__
#define __IContact_INTERFACE_DEFINED__

/* interface IContact */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IContact;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7f804e40-2010-11d2-8f18-0000f87a4335")
    IContact : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Birthday( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Anniversary( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessFaxNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CompanyName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Department( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Email1Address( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MobileTelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OfficeLocation( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PagerNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessTelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_JobTitle( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeTelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Email2Address( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Spouse( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Email3Address( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Home2TelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeFaxNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CarTelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AssistantName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AssistantTelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Children( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Categories( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WebPage( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Business2TelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FirstName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MiddleName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LastName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Suffix( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeAddressStreet( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeAddressCity( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeAddressState( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeAddressPostalCode( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeAddressCountry( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OtherAddressStreet( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OtherAddressCity( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OtherAddressState( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OtherAddressPostalCode( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OtherAddressCountry( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessAddressStreet( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessAddressCity( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessAddressState( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessAddressPostalCode( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessAddressCountry( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RadioTelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FileAs( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_YomiCompanyName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_YomiFirstName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_YomiLastName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Birthday( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Anniversary( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessFaxNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CompanyName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Department( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Email1Address( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MobileTelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OfficeLocation( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PagerNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessTelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_JobTitle( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeTelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Email2Address( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Spouse( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Email3Address( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Home2TelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeFaxNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CarTelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AssistantName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AssistantTelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Children( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Categories( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_WebPage( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Business2TelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Title( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FirstName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MiddleName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LastName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Suffix( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeAddressStreet( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeAddressCity( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeAddressState( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeAddressPostalCode( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeAddressCountry( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OtherAddressStreet( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OtherAddressCity( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OtherAddressState( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OtherAddressPostalCode( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OtherAddressCountry( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessAddressStreet( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessAddressCity( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessAddressState( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessAddressPostalCode( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessAddressCountry( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RadioTelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FileAs( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Body( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_YomiCompanyName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_YomiFirstName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_YomiLastName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            /* [retval][out] */ IContact **ppolCopy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Display( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Oid( 
            /* [retval][out] */ long *poid) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BodyInk( 
            /* [in] */ CEBLOB *pcebl) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BodyInk( 
            /* [retval][out] */ CEBLOB *pcebl) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IContactVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IContact * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IContact * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IContact * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IContact * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IContact * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IContact * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IContact * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Birthday )( 
            IContact * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Anniversary )( 
            IContact * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessFaxNumber )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CompanyName )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Department )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Email1Address )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MobileTelephoneNumber )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OfficeLocation )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PagerNumber )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessTelephoneNumber )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_JobTitle )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeTelephoneNumber )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Email2Address )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Spouse )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Email3Address )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Home2TelephoneNumber )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeFaxNumber )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CarTelephoneNumber )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AssistantName )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AssistantTelephoneNumber )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Children )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WebPage )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Business2TelephoneNumber )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FirstName )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MiddleName )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastName )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Suffix )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeAddressStreet )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeAddressCity )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeAddressState )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeAddressPostalCode )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeAddressCountry )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OtherAddressStreet )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OtherAddressCity )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OtherAddressState )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OtherAddressPostalCode )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OtherAddressCountry )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessAddressStreet )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessAddressCity )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessAddressState )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessAddressPostalCode )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessAddressCountry )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RadioTelephoneNumber )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileAs )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_YomiCompanyName )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_YomiFirstName )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_YomiLastName )( 
            IContact * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Birthday )( 
            IContact * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Anniversary )( 
            IContact * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessFaxNumber )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CompanyName )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Department )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Email1Address )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MobileTelephoneNumber )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OfficeLocation )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PagerNumber )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessTelephoneNumber )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_JobTitle )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeTelephoneNumber )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Email2Address )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Spouse )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Email3Address )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Home2TelephoneNumber )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeFaxNumber )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CarTelephoneNumber )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AssistantName )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AssistantTelephoneNumber )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Children )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Categories )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_WebPage )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Business2TelephoneNumber )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Title )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FirstName )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MiddleName )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LastName )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Suffix )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeAddressStreet )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeAddressCity )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeAddressState )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeAddressPostalCode )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeAddressCountry )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OtherAddressStreet )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OtherAddressCity )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OtherAddressState )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OtherAddressPostalCode )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OtherAddressCountry )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessAddressStreet )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessAddressCity )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessAddressState )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessAddressPostalCode )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessAddressCountry )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RadioTelephoneNumber )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FileAs )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Body )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_YomiCompanyName )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_YomiFirstName )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_YomiLastName )( 
            IContact * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            IContact * This);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IContact * This);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IContact * This,
            /* [retval][out] */ IContact **ppolCopy);
        
        HRESULT ( STDMETHODCALLTYPE *Display )( 
            IContact * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Oid )( 
            IContact * This,
            /* [retval][out] */ long *poid);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BodyInk )( 
            IContact * This,
            /* [in] */ CEBLOB *pcebl);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyInk )( 
            IContact * This,
            /* [retval][out] */ CEBLOB *pcebl);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IContact * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        END_INTERFACE
    } IContactVtbl;

    interface IContact
    {
        CONST_VTBL struct IContactVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContact_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContact_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContact_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define IContact_GetTypeInfoCount(This,pctinfo) \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IContact_GetTypeInfo(This,iTInfo,lcid,ppTInfo)  \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IContact_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IContact_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)  \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IContact_get_Birthday(This,pst) \
    ( (This)->lpVtbl -> get_Birthday(This,pst) ) 

#define IContact_get_Anniversary(This,pst)  \
    ( (This)->lpVtbl -> get_Anniversary(This,pst) ) 

#define IContact_get_BusinessFaxNumber(This,pbstr)  \
    ( (This)->lpVtbl -> get_BusinessFaxNumber(This,pbstr) ) 

#define IContact_get_CompanyName(This,pbstr)    \
    ( (This)->lpVtbl -> get_CompanyName(This,pbstr) ) 

#define IContact_get_Department(This,pbstr) \
    ( (This)->lpVtbl -> get_Department(This,pbstr) ) 

#define IContact_get_Email1Address(This,pbstr)  \
    ( (This)->lpVtbl -> get_Email1Address(This,pbstr) ) 

#define IContact_get_MobileTelephoneNumber(This,pbstr)  \
    ( (This)->lpVtbl -> get_MobileTelephoneNumber(This,pbstr) ) 

#define IContact_get_OfficeLocation(This,pbstr) \
    ( (This)->lpVtbl -> get_OfficeLocation(This,pbstr) ) 

#define IContact_get_PagerNumber(This,pbstr)    \
    ( (This)->lpVtbl -> get_PagerNumber(This,pbstr) ) 

#define IContact_get_BusinessTelephoneNumber(This,pbstr)    \
    ( (This)->lpVtbl -> get_BusinessTelephoneNumber(This,pbstr) ) 

#define IContact_get_JobTitle(This,pbstr)   \
    ( (This)->lpVtbl -> get_JobTitle(This,pbstr) ) 

#define IContact_get_HomeTelephoneNumber(This,pbstr)    \
    ( (This)->lpVtbl -> get_HomeTelephoneNumber(This,pbstr) ) 

#define IContact_get_Email2Address(This,pbstr)  \
    ( (This)->lpVtbl -> get_Email2Address(This,pbstr) ) 

#define IContact_get_Spouse(This,pbstr) \
    ( (This)->lpVtbl -> get_Spouse(This,pbstr) ) 

#define IContact_get_Email3Address(This,pbstr)  \
    ( (This)->lpVtbl -> get_Email3Address(This,pbstr) ) 

#define IContact_get_Home2TelephoneNumber(This,pbstr)   \
    ( (This)->lpVtbl -> get_Home2TelephoneNumber(This,pbstr) ) 

#define IContact_get_HomeFaxNumber(This,pbstr)  \
    ( (This)->lpVtbl -> get_HomeFaxNumber(This,pbstr) ) 

#define IContact_get_CarTelephoneNumber(This,pbstr) \
    ( (This)->lpVtbl -> get_CarTelephoneNumber(This,pbstr) ) 

#define IContact_get_AssistantName(This,pbstr)  \
    ( (This)->lpVtbl -> get_AssistantName(This,pbstr) ) 

#define IContact_get_AssistantTelephoneNumber(This,pbstr)   \
    ( (This)->lpVtbl -> get_AssistantTelephoneNumber(This,pbstr) ) 

#define IContact_get_Children(This,pbstr)   \
    ( (This)->lpVtbl -> get_Children(This,pbstr) ) 

#define IContact_get_Categories(This,pbstr) \
    ( (This)->lpVtbl -> get_Categories(This,pbstr) ) 

#define IContact_get_WebPage(This,pbstr)    \
    ( (This)->lpVtbl -> get_WebPage(This,pbstr) ) 

#define IContact_get_Business2TelephoneNumber(This,pbstr)   \
    ( (This)->lpVtbl -> get_Business2TelephoneNumber(This,pbstr) ) 

#define IContact_get_Title(This,pbstr)  \
    ( (This)->lpVtbl -> get_Title(This,pbstr) ) 

#define IContact_get_FirstName(This,pbstr)  \
    ( (This)->lpVtbl -> get_FirstName(This,pbstr) ) 

#define IContact_get_MiddleName(This,pbstr) \
    ( (This)->lpVtbl -> get_MiddleName(This,pbstr) ) 

#define IContact_get_LastName(This,pbstr)   \
    ( (This)->lpVtbl -> get_LastName(This,pbstr) ) 

#define IContact_get_Suffix(This,pbstr) \
    ( (This)->lpVtbl -> get_Suffix(This,pbstr) ) 

#define IContact_get_HomeAddressStreet(This,pbstr)  \
    ( (This)->lpVtbl -> get_HomeAddressStreet(This,pbstr) ) 

#define IContact_get_HomeAddressCity(This,pbstr)    \
    ( (This)->lpVtbl -> get_HomeAddressCity(This,pbstr) ) 

#define IContact_get_HomeAddressState(This,pbstr)   \
    ( (This)->lpVtbl -> get_HomeAddressState(This,pbstr) ) 

#define IContact_get_HomeAddressPostalCode(This,pbstr)  \
    ( (This)->lpVtbl -> get_HomeAddressPostalCode(This,pbstr) ) 

#define IContact_get_HomeAddressCountry(This,pbstr) \
    ( (This)->lpVtbl -> get_HomeAddressCountry(This,pbstr) ) 

#define IContact_get_OtherAddressStreet(This,pbstr) \
    ( (This)->lpVtbl -> get_OtherAddressStreet(This,pbstr) ) 

#define IContact_get_OtherAddressCity(This,pbstr)   \
    ( (This)->lpVtbl -> get_OtherAddressCity(This,pbstr) ) 

#define IContact_get_OtherAddressState(This,pbstr)  \
    ( (This)->lpVtbl -> get_OtherAddressState(This,pbstr) ) 

#define IContact_get_OtherAddressPostalCode(This,pbstr) \
    ( (This)->lpVtbl -> get_OtherAddressPostalCode(This,pbstr) ) 

#define IContact_get_OtherAddressCountry(This,pbstr)    \
    ( (This)->lpVtbl -> get_OtherAddressCountry(This,pbstr) ) 

#define IContact_get_BusinessAddressStreet(This,pbstr)  \
    ( (This)->lpVtbl -> get_BusinessAddressStreet(This,pbstr) ) 

#define IContact_get_BusinessAddressCity(This,pbstr)    \
    ( (This)->lpVtbl -> get_BusinessAddressCity(This,pbstr) ) 

#define IContact_get_BusinessAddressState(This,pbstr)   \
    ( (This)->lpVtbl -> get_BusinessAddressState(This,pbstr) ) 

#define IContact_get_BusinessAddressPostalCode(This,pbstr)  \
    ( (This)->lpVtbl -> get_BusinessAddressPostalCode(This,pbstr) ) 

#define IContact_get_BusinessAddressCountry(This,pbstr) \
    ( (This)->lpVtbl -> get_BusinessAddressCountry(This,pbstr) ) 

#define IContact_get_RadioTelephoneNumber(This,pbstr)   \
    ( (This)->lpVtbl -> get_RadioTelephoneNumber(This,pbstr) ) 

#define IContact_get_FileAs(This,pbstr) \
    ( (This)->lpVtbl -> get_FileAs(This,pbstr) ) 

#define IContact_get_Body(This,pbstr)   \
    ( (This)->lpVtbl -> get_Body(This,pbstr) ) 

#define IContact_get_YomiCompanyName(This,pbstr)    \
    ( (This)->lpVtbl -> get_YomiCompanyName(This,pbstr) ) 

#define IContact_get_YomiFirstName(This,pbstr)  \
    ( (This)->lpVtbl -> get_YomiFirstName(This,pbstr) ) 

#define IContact_get_YomiLastName(This,pbstr)   \
    ( (This)->lpVtbl -> get_YomiLastName(This,pbstr) ) 

#define IContact_put_Birthday(This,st)  \
    ( (This)->lpVtbl -> put_Birthday(This,st) ) 

#define IContact_put_Anniversary(This,st)   \
    ( (This)->lpVtbl -> put_Anniversary(This,st) ) 

#define IContact_put_BusinessFaxNumber(This,bstr)   \
    ( (This)->lpVtbl -> put_BusinessFaxNumber(This,bstr) ) 

#define IContact_put_CompanyName(This,bstr) \
    ( (This)->lpVtbl -> put_CompanyName(This,bstr) ) 

#define IContact_put_Department(This,bstr)  \
    ( (This)->lpVtbl -> put_Department(This,bstr) ) 

#define IContact_put_Email1Address(This,bstr)   \
    ( (This)->lpVtbl -> put_Email1Address(This,bstr) ) 

#define IContact_put_MobileTelephoneNumber(This,bstr)   \
    ( (This)->lpVtbl -> put_MobileTelephoneNumber(This,bstr) ) 

#define IContact_put_OfficeLocation(This,bstr)  \
    ( (This)->lpVtbl -> put_OfficeLocation(This,bstr) ) 

#define IContact_put_PagerNumber(This,bstr) \
    ( (This)->lpVtbl -> put_PagerNumber(This,bstr) ) 

#define IContact_put_BusinessTelephoneNumber(This,bstr) \
    ( (This)->lpVtbl -> put_BusinessTelephoneNumber(This,bstr) ) 

#define IContact_put_JobTitle(This,bstr)    \
    ( (This)->lpVtbl -> put_JobTitle(This,bstr) ) 

#define IContact_put_HomeTelephoneNumber(This,bstr) \
    ( (This)->lpVtbl -> put_HomeTelephoneNumber(This,bstr) ) 

#define IContact_put_Email2Address(This,bstr)   \
    ( (This)->lpVtbl -> put_Email2Address(This,bstr) ) 

#define IContact_put_Spouse(This,bstr)  \
    ( (This)->lpVtbl -> put_Spouse(This,bstr) ) 

#define IContact_put_Email3Address(This,bstr)   \
    ( (This)->lpVtbl -> put_Email3Address(This,bstr) ) 

#define IContact_put_Home2TelephoneNumber(This,bstr)    \
    ( (This)->lpVtbl -> put_Home2TelephoneNumber(This,bstr) ) 

#define IContact_put_HomeFaxNumber(This,bstr)   \
    ( (This)->lpVtbl -> put_HomeFaxNumber(This,bstr) ) 

#define IContact_put_CarTelephoneNumber(This,bstr)  \
    ( (This)->lpVtbl -> put_CarTelephoneNumber(This,bstr) ) 

#define IContact_put_AssistantName(This,bstr)   \
    ( (This)->lpVtbl -> put_AssistantName(This,bstr) ) 

#define IContact_put_AssistantTelephoneNumber(This,bstr)    \
    ( (This)->lpVtbl -> put_AssistantTelephoneNumber(This,bstr) ) 

#define IContact_put_Children(This,bstr)    \
    ( (This)->lpVtbl -> put_Children(This,bstr) ) 

#define IContact_put_Categories(This,bstr)  \
    ( (This)->lpVtbl -> put_Categories(This,bstr) ) 

#define IContact_put_WebPage(This,bstr) \
    ( (This)->lpVtbl -> put_WebPage(This,bstr) ) 

#define IContact_put_Business2TelephoneNumber(This,bstr)    \
    ( (This)->lpVtbl -> put_Business2TelephoneNumber(This,bstr) ) 

#define IContact_put_Title(This,bstr)   \
    ( (This)->lpVtbl -> put_Title(This,bstr) ) 

#define IContact_put_FirstName(This,bstr)   \
    ( (This)->lpVtbl -> put_FirstName(This,bstr) ) 

#define IContact_put_MiddleName(This,bstr)  \
    ( (This)->lpVtbl -> put_MiddleName(This,bstr) ) 

#define IContact_put_LastName(This,bstr)    \
    ( (This)->lpVtbl -> put_LastName(This,bstr) ) 

#define IContact_put_Suffix(This,bstr)  \
    ( (This)->lpVtbl -> put_Suffix(This,bstr) ) 

#define IContact_put_HomeAddressStreet(This,bstr)   \
    ( (This)->lpVtbl -> put_HomeAddressStreet(This,bstr) ) 

#define IContact_put_HomeAddressCity(This,bstr) \
    ( (This)->lpVtbl -> put_HomeAddressCity(This,bstr) ) 

#define IContact_put_HomeAddressState(This,bstr)    \
    ( (This)->lpVtbl -> put_HomeAddressState(This,bstr) ) 

#define IContact_put_HomeAddressPostalCode(This,bstr)   \
    ( (This)->lpVtbl -> put_HomeAddressPostalCode(This,bstr) ) 

#define IContact_put_HomeAddressCountry(This,bstr)  \
    ( (This)->lpVtbl -> put_HomeAddressCountry(This,bstr) ) 

#define IContact_put_OtherAddressStreet(This,bstr)  \
    ( (This)->lpVtbl -> put_OtherAddressStreet(This,bstr) ) 

#define IContact_put_OtherAddressCity(This,bstr)    \
    ( (This)->lpVtbl -> put_OtherAddressCity(This,bstr) ) 

#define IContact_put_OtherAddressState(This,bstr)   \
    ( (This)->lpVtbl -> put_OtherAddressState(This,bstr) ) 

#define IContact_put_OtherAddressPostalCode(This,bstr)  \
    ( (This)->lpVtbl -> put_OtherAddressPostalCode(This,bstr) ) 

#define IContact_put_OtherAddressCountry(This,bstr) \
    ( (This)->lpVtbl -> put_OtherAddressCountry(This,bstr) ) 

#define IContact_put_BusinessAddressStreet(This,bstr)   \
    ( (This)->lpVtbl -> put_BusinessAddressStreet(This,bstr) ) 

#define IContact_put_BusinessAddressCity(This,bstr) \
    ( (This)->lpVtbl -> put_BusinessAddressCity(This,bstr) ) 

#define IContact_put_BusinessAddressState(This,bstr)    \
    ( (This)->lpVtbl -> put_BusinessAddressState(This,bstr) ) 

#define IContact_put_BusinessAddressPostalCode(This,bstr)   \
    ( (This)->lpVtbl -> put_BusinessAddressPostalCode(This,bstr) ) 

#define IContact_put_BusinessAddressCountry(This,bstr)  \
    ( (This)->lpVtbl -> put_BusinessAddressCountry(This,bstr) ) 

#define IContact_put_RadioTelephoneNumber(This,bstr)    \
    ( (This)->lpVtbl -> put_RadioTelephoneNumber(This,bstr) ) 

#define IContact_put_FileAs(This,bstr)  \
    ( (This)->lpVtbl -> put_FileAs(This,bstr) ) 

#define IContact_put_Body(This,bstr)    \
    ( (This)->lpVtbl -> put_Body(This,bstr) ) 

#define IContact_put_YomiCompanyName(This,bstr) \
    ( (This)->lpVtbl -> put_YomiCompanyName(This,bstr) ) 

#define IContact_put_YomiFirstName(This,bstr)   \
    ( (This)->lpVtbl -> put_YomiFirstName(This,bstr) ) 

#define IContact_put_YomiLastName(This,bstr)    \
    ( (This)->lpVtbl -> put_YomiLastName(This,bstr) ) 

#define IContact_Save(This) \
    ( (This)->lpVtbl -> Save(This) ) 

#define IContact_Delete(This)   \
    ( (This)->lpVtbl -> Delete(This) ) 

#define IContact_Copy(This,ppolCopy)    \
    ( (This)->lpVtbl -> Copy(This,ppolCopy) ) 

#define IContact_Display(This)  \
    ( (This)->lpVtbl -> Display(This) ) 

#define IContact_get_Oid(This,poid) \
    ( (This)->lpVtbl -> get_Oid(This,poid) ) 

#define IContact_put_BodyInk(This,pcebl)    \
    ( (This)->lpVtbl -> put_BodyInk(This,pcebl) ) 

#define IContact_get_BodyInk(This,pcebl)    \
    ( (This)->lpVtbl -> get_BodyInk(This,pcebl) ) 

#define IContact_get_Application(This,polApp)   \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IContact_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0018 */
/* [local] */ 

DEFINE_GUID(IID_IContact2, 0x0130d8d2, 0x5961, 0x4655, 0xa2, 0x9e, 0x58, 0x89, 0x5a, 0x8c, 0x2f, 0xda);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0018_v0_0_s_ifspec;

#ifndef __IContact2_INTERFACE_DEFINED__
#define __IContact2_INTERFACE_DEFINED__

/* interface IContact2 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IContact2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0130d8d2-5961-4655-a29e-58895a8c2fda")
    IContact2 : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ OLITEMID *pOlItemId) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IFolder2 **ppParent) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Store( 
            /* [retval][out] */ IStore **ppStore) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Birthday( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Anniversary( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessFaxNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CompanyName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Department( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Email1Address( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MobileTelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OfficeLocation( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PagerNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessTelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_JobTitle( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeTelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Email2Address( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Spouse( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Email3Address( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Home2TelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeFaxNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CarTelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AssistantName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AssistantTelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Children( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Categories( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WebPage( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Business2TelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FirstName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MiddleName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LastName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Suffix( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeAddressStreet( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeAddressCity( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeAddressState( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeAddressPostalCode( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeAddressCountry( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OtherAddressStreet( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OtherAddressCity( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OtherAddressState( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OtherAddressPostalCode( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OtherAddressCountry( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessAddressStreet( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessAddressCity( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessAddressState( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessAddressPostalCode( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusinessAddressCountry( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RadioTelephoneNumber( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FileAs( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_YomiCompanyName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_YomiFirstName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_YomiLastName( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Birthday( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Anniversary( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessFaxNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CompanyName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Department( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Email1Address( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MobileTelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OfficeLocation( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_PagerNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessTelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_JobTitle( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeTelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Email2Address( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Spouse( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Email3Address( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Home2TelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeFaxNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CarTelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AssistantName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AssistantTelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Children( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Categories( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_WebPage( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Business2TelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Title( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FirstName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MiddleName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_LastName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Suffix( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeAddressStreet( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeAddressCity( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeAddressState( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeAddressPostalCode( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeAddressCountry( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OtherAddressStreet( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OtherAddressCity( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OtherAddressState( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OtherAddressPostalCode( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OtherAddressCountry( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessAddressStreet( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessAddressCity( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessAddressState( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessAddressPostalCode( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusinessAddressCountry( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_RadioTelephoneNumber( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_FileAs( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Body( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_YomiCompanyName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_YomiFirstName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_YomiLastName( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            /* [retval][out] */ IContact2 **ppolCopy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Display( void) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BodyInk( 
            /* [in] */ CEBLOB *pcebl) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BodyInk( 
            /* [retval][out] */ CEBLOB *pcebl) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp3 **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IContact2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IContact2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IContact2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IContact2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IContact2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IContact2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IContact2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IContact2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IContact2 * This,
            /* [retval][out] */ OLITEMID *pOlItemId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IContact2 * This,
            /* [retval][out] */ IFolder2 **ppParent);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Store )( 
            IContact2 * This,
            /* [retval][out] */ IStore **ppStore);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Birthday )( 
            IContact2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Anniversary )( 
            IContact2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessFaxNumber )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CompanyName )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Department )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Email1Address )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MobileTelephoneNumber )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OfficeLocation )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PagerNumber )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessTelephoneNumber )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_JobTitle )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeTelephoneNumber )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Email2Address )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Spouse )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Email3Address )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Home2TelephoneNumber )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeFaxNumber )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CarTelephoneNumber )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AssistantName )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AssistantTelephoneNumber )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Children )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WebPage )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Business2TelephoneNumber )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FirstName )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MiddleName )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LastName )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Suffix )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeAddressStreet )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeAddressCity )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeAddressState )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeAddressPostalCode )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeAddressCountry )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OtherAddressStreet )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OtherAddressCity )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OtherAddressState )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OtherAddressPostalCode )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OtherAddressCountry )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessAddressStreet )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessAddressCity )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessAddressState )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessAddressPostalCode )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusinessAddressCountry )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RadioTelephoneNumber )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileAs )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_YomiCompanyName )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_YomiFirstName )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_YomiLastName )( 
            IContact2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Birthday )( 
            IContact2 * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Anniversary )( 
            IContact2 * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessFaxNumber )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CompanyName )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Department )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Email1Address )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MobileTelephoneNumber )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OfficeLocation )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_PagerNumber )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessTelephoneNumber )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_JobTitle )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeTelephoneNumber )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Email2Address )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Spouse )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Email3Address )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Home2TelephoneNumber )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeFaxNumber )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CarTelephoneNumber )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AssistantName )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AssistantTelephoneNumber )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Children )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Categories )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_WebPage )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Business2TelephoneNumber )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Title )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FirstName )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MiddleName )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_LastName )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Suffix )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeAddressStreet )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeAddressCity )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeAddressState )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeAddressPostalCode )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeAddressCountry )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OtherAddressStreet )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OtherAddressCity )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OtherAddressState )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OtherAddressPostalCode )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OtherAddressCountry )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessAddressStreet )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessAddressCity )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessAddressState )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessAddressPostalCode )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusinessAddressCountry )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_RadioTelephoneNumber )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_FileAs )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Body )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_YomiCompanyName )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_YomiFirstName )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_YomiLastName )( 
            IContact2 * This,
            /* [in] */ BSTR bstr);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            IContact2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IContact2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IContact2 * This,
            /* [retval][out] */ IContact2 **ppolCopy);
        
        HRESULT ( STDMETHODCALLTYPE *Display )( 
            IContact2 * This);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BodyInk )( 
            IContact2 * This,
            /* [in] */ CEBLOB *pcebl);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyInk )( 
            IContact2 * This,
            /* [retval][out] */ CEBLOB *pcebl);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IContact2 * This,
            /* [retval][out] */ IPOutlookApp3 **polApp);
        
        END_INTERFACE
    } IContact2Vtbl;

    interface IContact2
    {
        CONST_VTBL struct IContact2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IContact2_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IContact2_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IContact2_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define IContact2_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IContact2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IContact2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)   \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IContact2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IContact2_get_Id(This,pOlItemId)    \
    ( (This)->lpVtbl -> get_Id(This,pOlItemId) ) 

#define IContact2_get_Parent(This,ppParent) \
    ( (This)->lpVtbl -> get_Parent(This,ppParent) ) 

#define IContact2_get_Store(This,ppStore)   \
    ( (This)->lpVtbl -> get_Store(This,ppStore) ) 

#define IContact2_get_Birthday(This,pst)    \
    ( (This)->lpVtbl -> get_Birthday(This,pst) ) 

#define IContact2_get_Anniversary(This,pst) \
    ( (This)->lpVtbl -> get_Anniversary(This,pst) ) 

#define IContact2_get_BusinessFaxNumber(This,pbstr) \
    ( (This)->lpVtbl -> get_BusinessFaxNumber(This,pbstr) ) 

#define IContact2_get_CompanyName(This,pbstr)   \
    ( (This)->lpVtbl -> get_CompanyName(This,pbstr) ) 

#define IContact2_get_Department(This,pbstr)    \
    ( (This)->lpVtbl -> get_Department(This,pbstr) ) 

#define IContact2_get_Email1Address(This,pbstr) \
    ( (This)->lpVtbl -> get_Email1Address(This,pbstr) ) 

#define IContact2_get_MobileTelephoneNumber(This,pbstr) \
    ( (This)->lpVtbl -> get_MobileTelephoneNumber(This,pbstr) ) 

#define IContact2_get_OfficeLocation(This,pbstr)    \
    ( (This)->lpVtbl -> get_OfficeLocation(This,pbstr) ) 

#define IContact2_get_PagerNumber(This,pbstr)   \
    ( (This)->lpVtbl -> get_PagerNumber(This,pbstr) ) 

#define IContact2_get_BusinessTelephoneNumber(This,pbstr)   \
    ( (This)->lpVtbl -> get_BusinessTelephoneNumber(This,pbstr) ) 

#define IContact2_get_JobTitle(This,pbstr)  \
    ( (This)->lpVtbl -> get_JobTitle(This,pbstr) ) 

#define IContact2_get_HomeTelephoneNumber(This,pbstr)   \
    ( (This)->lpVtbl -> get_HomeTelephoneNumber(This,pbstr) ) 

#define IContact2_get_Email2Address(This,pbstr) \
    ( (This)->lpVtbl -> get_Email2Address(This,pbstr) ) 

#define IContact2_get_Spouse(This,pbstr)    \
    ( (This)->lpVtbl -> get_Spouse(This,pbstr) ) 

#define IContact2_get_Email3Address(This,pbstr) \
    ( (This)->lpVtbl -> get_Email3Address(This,pbstr) ) 

#define IContact2_get_Home2TelephoneNumber(This,pbstr)  \
    ( (This)->lpVtbl -> get_Home2TelephoneNumber(This,pbstr) ) 

#define IContact2_get_HomeFaxNumber(This,pbstr) \
    ( (This)->lpVtbl -> get_HomeFaxNumber(This,pbstr) ) 

#define IContact2_get_CarTelephoneNumber(This,pbstr)    \
    ( (This)->lpVtbl -> get_CarTelephoneNumber(This,pbstr) ) 

#define IContact2_get_AssistantName(This,pbstr) \
    ( (This)->lpVtbl -> get_AssistantName(This,pbstr) ) 

#define IContact2_get_AssistantTelephoneNumber(This,pbstr)  \
    ( (This)->lpVtbl -> get_AssistantTelephoneNumber(This,pbstr) ) 

#define IContact2_get_Children(This,pbstr)  \
    ( (This)->lpVtbl -> get_Children(This,pbstr) ) 

#define IContact2_get_Categories(This,pbstr)    \
    ( (This)->lpVtbl -> get_Categories(This,pbstr) ) 

#define IContact2_get_WebPage(This,pbstr)   \
    ( (This)->lpVtbl -> get_WebPage(This,pbstr) ) 

#define IContact2_get_Business2TelephoneNumber(This,pbstr)  \
    ( (This)->lpVtbl -> get_Business2TelephoneNumber(This,pbstr) ) 

#define IContact2_get_Title(This,pbstr) \
    ( (This)->lpVtbl -> get_Title(This,pbstr) ) 

#define IContact2_get_FirstName(This,pbstr) \
    ( (This)->lpVtbl -> get_FirstName(This,pbstr) ) 

#define IContact2_get_MiddleName(This,pbstr)    \
    ( (This)->lpVtbl -> get_MiddleName(This,pbstr) ) 

#define IContact2_get_LastName(This,pbstr)  \
    ( (This)->lpVtbl -> get_LastName(This,pbstr) ) 

#define IContact2_get_Suffix(This,pbstr)    \
    ( (This)->lpVtbl -> get_Suffix(This,pbstr) ) 

#define IContact2_get_HomeAddressStreet(This,pbstr) \
    ( (This)->lpVtbl -> get_HomeAddressStreet(This,pbstr) ) 

#define IContact2_get_HomeAddressCity(This,pbstr)   \
    ( (This)->lpVtbl -> get_HomeAddressCity(This,pbstr) ) 

#define IContact2_get_HomeAddressState(This,pbstr)  \
    ( (This)->lpVtbl -> get_HomeAddressState(This,pbstr) ) 

#define IContact2_get_HomeAddressPostalCode(This,pbstr) \
    ( (This)->lpVtbl -> get_HomeAddressPostalCode(This,pbstr) ) 

#define IContact2_get_HomeAddressCountry(This,pbstr)    \
    ( (This)->lpVtbl -> get_HomeAddressCountry(This,pbstr) ) 

#define IContact2_get_OtherAddressStreet(This,pbstr)    \
    ( (This)->lpVtbl -> get_OtherAddressStreet(This,pbstr) ) 

#define IContact2_get_OtherAddressCity(This,pbstr)  \
    ( (This)->lpVtbl -> get_OtherAddressCity(This,pbstr) ) 

#define IContact2_get_OtherAddressState(This,pbstr) \
    ( (This)->lpVtbl -> get_OtherAddressState(This,pbstr) ) 

#define IContact2_get_OtherAddressPostalCode(This,pbstr)    \
    ( (This)->lpVtbl -> get_OtherAddressPostalCode(This,pbstr) ) 

#define IContact2_get_OtherAddressCountry(This,pbstr)   \
    ( (This)->lpVtbl -> get_OtherAddressCountry(This,pbstr) ) 

#define IContact2_get_BusinessAddressStreet(This,pbstr) \
    ( (This)->lpVtbl -> get_BusinessAddressStreet(This,pbstr) ) 

#define IContact2_get_BusinessAddressCity(This,pbstr)   \
    ( (This)->lpVtbl -> get_BusinessAddressCity(This,pbstr) ) 

#define IContact2_get_BusinessAddressState(This,pbstr)  \
    ( (This)->lpVtbl -> get_BusinessAddressState(This,pbstr) ) 

#define IContact2_get_BusinessAddressPostalCode(This,pbstr) \
    ( (This)->lpVtbl -> get_BusinessAddressPostalCode(This,pbstr) ) 

#define IContact2_get_BusinessAddressCountry(This,pbstr)    \
    ( (This)->lpVtbl -> get_BusinessAddressCountry(This,pbstr) ) 

#define IContact2_get_RadioTelephoneNumber(This,pbstr)  \
    ( (This)->lpVtbl -> get_RadioTelephoneNumber(This,pbstr) ) 

#define IContact2_get_FileAs(This,pbstr)    \
    ( (This)->lpVtbl -> get_FileAs(This,pbstr) ) 

#define IContact2_get_Body(This,pbstr)  \
    ( (This)->lpVtbl -> get_Body(This,pbstr) ) 

#define IContact2_get_YomiCompanyName(This,pbstr)   \
    ( (This)->lpVtbl -> get_YomiCompanyName(This,pbstr) ) 

#define IContact2_get_YomiFirstName(This,pbstr) \
    ( (This)->lpVtbl -> get_YomiFirstName(This,pbstr) ) 

#define IContact2_get_YomiLastName(This,pbstr)  \
    ( (This)->lpVtbl -> get_YomiLastName(This,pbstr) ) 

#define IContact2_put_Birthday(This,st) \
    ( (This)->lpVtbl -> put_Birthday(This,st) ) 

#define IContact2_put_Anniversary(This,st)  \
    ( (This)->lpVtbl -> put_Anniversary(This,st) ) 

#define IContact2_put_BusinessFaxNumber(This,bstr)  \
    ( (This)->lpVtbl -> put_BusinessFaxNumber(This,bstr) ) 

#define IContact2_put_CompanyName(This,bstr)    \
    ( (This)->lpVtbl -> put_CompanyName(This,bstr) ) 

#define IContact2_put_Department(This,bstr) \
    ( (This)->lpVtbl -> put_Department(This,bstr) ) 

#define IContact2_put_Email1Address(This,bstr)  \
    ( (This)->lpVtbl -> put_Email1Address(This,bstr) ) 

#define IContact2_put_MobileTelephoneNumber(This,bstr)  \
    ( (This)->lpVtbl -> put_MobileTelephoneNumber(This,bstr) ) 

#define IContact2_put_OfficeLocation(This,bstr) \
    ( (This)->lpVtbl -> put_OfficeLocation(This,bstr) ) 

#define IContact2_put_PagerNumber(This,bstr)    \
    ( (This)->lpVtbl -> put_PagerNumber(This,bstr) ) 

#define IContact2_put_BusinessTelephoneNumber(This,bstr)    \
    ( (This)->lpVtbl -> put_BusinessTelephoneNumber(This,bstr) ) 

#define IContact2_put_JobTitle(This,bstr)   \
    ( (This)->lpVtbl -> put_JobTitle(This,bstr) ) 

#define IContact2_put_HomeTelephoneNumber(This,bstr)    \
    ( (This)->lpVtbl -> put_HomeTelephoneNumber(This,bstr) ) 

#define IContact2_put_Email2Address(This,bstr)  \
    ( (This)->lpVtbl -> put_Email2Address(This,bstr) ) 

#define IContact2_put_Spouse(This,bstr) \
    ( (This)->lpVtbl -> put_Spouse(This,bstr) ) 

#define IContact2_put_Email3Address(This,bstr)  \
    ( (This)->lpVtbl -> put_Email3Address(This,bstr) ) 

#define IContact2_put_Home2TelephoneNumber(This,bstr)   \
    ( (This)->lpVtbl -> put_Home2TelephoneNumber(This,bstr) ) 

#define IContact2_put_HomeFaxNumber(This,bstr)  \
    ( (This)->lpVtbl -> put_HomeFaxNumber(This,bstr) ) 

#define IContact2_put_CarTelephoneNumber(This,bstr) \
    ( (This)->lpVtbl -> put_CarTelephoneNumber(This,bstr) ) 

#define IContact2_put_AssistantName(This,bstr)  \
    ( (This)->lpVtbl -> put_AssistantName(This,bstr) ) 

#define IContact2_put_AssistantTelephoneNumber(This,bstr)   \
    ( (This)->lpVtbl -> put_AssistantTelephoneNumber(This,bstr) ) 

#define IContact2_put_Children(This,bstr)   \
    ( (This)->lpVtbl -> put_Children(This,bstr) ) 

#define IContact2_put_Categories(This,bstr) \
    ( (This)->lpVtbl -> put_Categories(This,bstr) ) 

#define IContact2_put_WebPage(This,bstr)    \
    ( (This)->lpVtbl -> put_WebPage(This,bstr) ) 

#define IContact2_put_Business2TelephoneNumber(This,bstr)   \
    ( (This)->lpVtbl -> put_Business2TelephoneNumber(This,bstr) ) 

#define IContact2_put_Title(This,bstr)  \
    ( (This)->lpVtbl -> put_Title(This,bstr) ) 

#define IContact2_put_FirstName(This,bstr)  \
    ( (This)->lpVtbl -> put_FirstName(This,bstr) ) 

#define IContact2_put_MiddleName(This,bstr) \
    ( (This)->lpVtbl -> put_MiddleName(This,bstr) ) 

#define IContact2_put_LastName(This,bstr)   \
    ( (This)->lpVtbl -> put_LastName(This,bstr) ) 

#define IContact2_put_Suffix(This,bstr) \
    ( (This)->lpVtbl -> put_Suffix(This,bstr) ) 

#define IContact2_put_HomeAddressStreet(This,bstr)  \
    ( (This)->lpVtbl -> put_HomeAddressStreet(This,bstr) ) 

#define IContact2_put_HomeAddressCity(This,bstr)    \
    ( (This)->lpVtbl -> put_HomeAddressCity(This,bstr) ) 

#define IContact2_put_HomeAddressState(This,bstr)   \
    ( (This)->lpVtbl -> put_HomeAddressState(This,bstr) ) 

#define IContact2_put_HomeAddressPostalCode(This,bstr)  \
    ( (This)->lpVtbl -> put_HomeAddressPostalCode(This,bstr) ) 

#define IContact2_put_HomeAddressCountry(This,bstr) \
    ( (This)->lpVtbl -> put_HomeAddressCountry(This,bstr) ) 

#define IContact2_put_OtherAddressStreet(This,bstr) \
    ( (This)->lpVtbl -> put_OtherAddressStreet(This,bstr) ) 

#define IContact2_put_OtherAddressCity(This,bstr)   \
    ( (This)->lpVtbl -> put_OtherAddressCity(This,bstr) ) 

#define IContact2_put_OtherAddressState(This,bstr)  \
    ( (This)->lpVtbl -> put_OtherAddressState(This,bstr) ) 

#define IContact2_put_OtherAddressPostalCode(This,bstr) \
    ( (This)->lpVtbl -> put_OtherAddressPostalCode(This,bstr) ) 

#define IContact2_put_OtherAddressCountry(This,bstr)    \
    ( (This)->lpVtbl -> put_OtherAddressCountry(This,bstr) ) 

#define IContact2_put_BusinessAddressStreet(This,bstr)  \
    ( (This)->lpVtbl -> put_BusinessAddressStreet(This,bstr) ) 

#define IContact2_put_BusinessAddressCity(This,bstr)    \
    ( (This)->lpVtbl -> put_BusinessAddressCity(This,bstr) ) 

#define IContact2_put_BusinessAddressState(This,bstr)   \
    ( (This)->lpVtbl -> put_BusinessAddressState(This,bstr) ) 

#define IContact2_put_BusinessAddressPostalCode(This,bstr)  \
    ( (This)->lpVtbl -> put_BusinessAddressPostalCode(This,bstr) ) 

#define IContact2_put_BusinessAddressCountry(This,bstr) \
    ( (This)->lpVtbl -> put_BusinessAddressCountry(This,bstr) ) 

#define IContact2_put_RadioTelephoneNumber(This,bstr)   \
    ( (This)->lpVtbl -> put_RadioTelephoneNumber(This,bstr) ) 

#define IContact2_put_FileAs(This,bstr) \
    ( (This)->lpVtbl -> put_FileAs(This,bstr) ) 

#define IContact2_put_Body(This,bstr)   \
    ( (This)->lpVtbl -> put_Body(This,bstr) ) 

#define IContact2_put_YomiCompanyName(This,bstr)    \
    ( (This)->lpVtbl -> put_YomiCompanyName(This,bstr) ) 

#define IContact2_put_YomiFirstName(This,bstr)  \
    ( (This)->lpVtbl -> put_YomiFirstName(This,bstr) ) 

#define IContact2_put_YomiLastName(This,bstr)   \
    ( (This)->lpVtbl -> put_YomiLastName(This,bstr) ) 

#define IContact2_Save(This)    \
    ( (This)->lpVtbl -> Save(This) ) 

#define IContact2_Delete(This)  \
    ( (This)->lpVtbl -> Delete(This) ) 

#define IContact2_Copy(This,ppolCopy)   \
    ( (This)->lpVtbl -> Copy(This,ppolCopy) ) 

#define IContact2_Display(This) \
    ( (This)->lpVtbl -> Display(This) ) 

#define IContact2_put_BodyInk(This,pcebl)   \
    ( (This)->lpVtbl -> put_BodyInk(This,pcebl) ) 

#define IContact2_get_BodyInk(This,pcebl)   \
    ( (This)->lpVtbl -> get_BodyInk(This,pcebl) ) 

#define IContact2_get_Application(This,polApp)  \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IContact2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0019 */
/* [local] */ 

DEFINE_GUID(IID_ITask, 0x37c78ce0, 0x202c, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0019_v0_0_s_ifspec;

#ifndef __ITask_INTERFACE_DEFINED__
#define __ITask_INTERFACE_DEFINED__

/* interface ITask */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITask;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("37c78ce0-202c-11d2-8f18-0000f87a4335")
    ITask : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ClearRecurrencePattern( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecurrencePattern( 
            /* [retval][out] */ IRecurrencePattern **ppRecPattern) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsRecurring( 
            /* [retval][out] */ VARIANT_BOOL *pfIsRecurring) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Subject( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Categories( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StartDate( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DueDate( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DateCompleted( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Importance( 
            /* [retval][out] */ long *pdwPriority) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Complete( 
            /* [retval][out] */ VARIANT_BOOL *pfCompleted) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Sensitivity( 
            /* [retval][out] */ long *plSensitivity) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TeamTask( 
            /* [retval][out] */ VARIANT_BOOL *pfTeamTask) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderSet( 
            /* [retval][out] */ VARIANT_BOOL *pfReminderSet) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderSoundFile( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderTime( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderOptions( 
            /* [retval][out] */ long *pdwOptions) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Subject( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Categories( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StartDate( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DueDate( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Importance( 
            /* [in] */ long dwPriority) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Complete( 
            /* [in] */ VARIANT_BOOL fCompleted) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Sensitivity( 
            /* [in] */ long lSensitivity) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TeamTask( 
            /* [in] */ VARIANT_BOOL fTeamTask) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Body( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderSet( 
            /* [in] */ VARIANT_BOOL fReminderSet) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderSoundFile( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderTime( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderOptions( 
            /* [in] */ long dwOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SkipRecurrence( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            /* [retval][out] */ ITask **ppolCopy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Display( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Oid( 
            /* [retval][out] */ long *poid) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BodyInk( 
            /* [in] */ CEBLOB *pcebl) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BodyInk( 
            /* [retval][out] */ CEBLOB *pcebl) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct ITaskVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITask * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITask * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITask * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITask * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITask * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITask * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITask * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *ClearRecurrencePattern )( 
            ITask * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRecurrencePattern )( 
            ITask * This,
            /* [retval][out] */ IRecurrencePattern **ppRecPattern);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsRecurring )( 
            ITask * This,
            /* [retval][out] */ VARIANT_BOOL *pfIsRecurring);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Subject )( 
            ITask * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            ITask * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartDate )( 
            ITask * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DueDate )( 
            ITask * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DateCompleted )( 
            ITask * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Importance )( 
            ITask * This,
            /* [retval][out] */ long *pdwPriority);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Complete )( 
            ITask * This,
            /* [retval][out] */ VARIANT_BOOL *pfCompleted);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sensitivity )( 
            ITask * This,
            /* [retval][out] */ long *plSensitivity);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TeamTask )( 
            ITask * This,
            /* [retval][out] */ VARIANT_BOOL *pfTeamTask);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            ITask * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderSet )( 
            ITask * This,
            /* [retval][out] */ VARIANT_BOOL *pfReminderSet);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderSoundFile )( 
            ITask * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderTime )( 
            ITask * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderOptions )( 
            ITask * This,
            /* [retval][out] */ long *pdwOptions);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Subject )( 
            ITask * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Categories )( 
            ITask * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartDate )( 
            ITask * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DueDate )( 
            ITask * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Importance )( 
            ITask * This,
            /* [in] */ long dwPriority);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Complete )( 
            ITask * This,
            /* [in] */ VARIANT_BOOL fCompleted);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Sensitivity )( 
            ITask * This,
            /* [in] */ long lSensitivity);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TeamTask )( 
            ITask * This,
            /* [in] */ VARIANT_BOOL fTeamTask);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Body )( 
            ITask * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderSet )( 
            ITask * This,
            /* [in] */ VARIANT_BOOL fReminderSet);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderSoundFile )( 
            ITask * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderTime )( 
            ITask * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderOptions )( 
            ITask * This,
            /* [in] */ long dwOptions);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            ITask * This);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ITask * This);
        
        HRESULT ( STDMETHODCALLTYPE *SkipRecurrence )( 
            ITask * This);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            ITask * This,
            /* [retval][out] */ ITask **ppolCopy);
        
        HRESULT ( STDMETHODCALLTYPE *Display )( 
            ITask * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Oid )( 
            ITask * This,
            /* [retval][out] */ long *poid);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BodyInk )( 
            ITask * This,
            /* [in] */ CEBLOB *pcebl);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyInk )( 
            ITask * This,
            /* [retval][out] */ CEBLOB *pcebl);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ITask * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        END_INTERFACE
    } ITaskVtbl;

    interface ITask
    {
        CONST_VTBL struct ITaskVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITask_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITask_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITask_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define ITask_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITask_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITask_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)   \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITask_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITask_ClearRecurrencePattern(This)  \
    ( (This)->lpVtbl -> ClearRecurrencePattern(This) ) 

#define ITask_GetRecurrencePattern(This,ppRecPattern)   \
    ( (This)->lpVtbl -> GetRecurrencePattern(This,ppRecPattern) ) 

#define ITask_get_IsRecurring(This,pfIsRecurring)   \
    ( (This)->lpVtbl -> get_IsRecurring(This,pfIsRecurring) ) 

#define ITask_get_Subject(This,pbstr)   \
    ( (This)->lpVtbl -> get_Subject(This,pbstr) ) 

#define ITask_get_Categories(This,pbstr)    \
    ( (This)->lpVtbl -> get_Categories(This,pbstr) ) 

#define ITask_get_StartDate(This,pst)   \
    ( (This)->lpVtbl -> get_StartDate(This,pst) ) 

#define ITask_get_DueDate(This,pst) \
    ( (This)->lpVtbl -> get_DueDate(This,pst) ) 

#define ITask_get_DateCompleted(This,pst)   \
    ( (This)->lpVtbl -> get_DateCompleted(This,pst) ) 

#define ITask_get_Importance(This,pdwPriority)  \
    ( (This)->lpVtbl -> get_Importance(This,pdwPriority) ) 

#define ITask_get_Complete(This,pfCompleted)    \
    ( (This)->lpVtbl -> get_Complete(This,pfCompleted) ) 

#define ITask_get_Sensitivity(This,plSensitivity)   \
    ( (This)->lpVtbl -> get_Sensitivity(This,plSensitivity) ) 

#define ITask_get_TeamTask(This,pfTeamTask) \
    ( (This)->lpVtbl -> get_TeamTask(This,pfTeamTask) ) 

#define ITask_get_Body(This,pbstr)  \
    ( (This)->lpVtbl -> get_Body(This,pbstr) ) 

#define ITask_get_ReminderSet(This,pfReminderSet)   \
    ( (This)->lpVtbl -> get_ReminderSet(This,pfReminderSet) ) 

#define ITask_get_ReminderSoundFile(This,pbstr) \
    ( (This)->lpVtbl -> get_ReminderSoundFile(This,pbstr) ) 

#define ITask_get_ReminderTime(This,pst)    \
    ( (This)->lpVtbl -> get_ReminderTime(This,pst) ) 

#define ITask_get_ReminderOptions(This,pdwOptions)  \
    ( (This)->lpVtbl -> get_ReminderOptions(This,pdwOptions) ) 

#define ITask_put_Subject(This,bstr)    \
    ( (This)->lpVtbl -> put_Subject(This,bstr) ) 

#define ITask_put_Categories(This,bstr) \
    ( (This)->lpVtbl -> put_Categories(This,bstr) ) 

#define ITask_put_StartDate(This,st)    \
    ( (This)->lpVtbl -> put_StartDate(This,st) ) 

#define ITask_put_DueDate(This,st)  \
    ( (This)->lpVtbl -> put_DueDate(This,st) ) 

#define ITask_put_Importance(This,dwPriority)   \
    ( (This)->lpVtbl -> put_Importance(This,dwPriority) ) 

#define ITask_put_Complete(This,fCompleted) \
    ( (This)->lpVtbl -> put_Complete(This,fCompleted) ) 

#define ITask_put_Sensitivity(This,lSensitivity)    \
    ( (This)->lpVtbl -> put_Sensitivity(This,lSensitivity) ) 

#define ITask_put_TeamTask(This,fTeamTask)  \
    ( (This)->lpVtbl -> put_TeamTask(This,fTeamTask) ) 

#define ITask_put_Body(This,bstr)   \
    ( (This)->lpVtbl -> put_Body(This,bstr) ) 

#define ITask_put_ReminderSet(This,fReminderSet)    \
    ( (This)->lpVtbl -> put_ReminderSet(This,fReminderSet) ) 

#define ITask_put_ReminderSoundFile(This,bstr)  \
    ( (This)->lpVtbl -> put_ReminderSoundFile(This,bstr) ) 

#define ITask_put_ReminderTime(This,st) \
    ( (This)->lpVtbl -> put_ReminderTime(This,st) ) 

#define ITask_put_ReminderOptions(This,dwOptions)   \
    ( (This)->lpVtbl -> put_ReminderOptions(This,dwOptions) ) 

#define ITask_Save(This)    \
    ( (This)->lpVtbl -> Save(This) ) 

#define ITask_Delete(This)  \
    ( (This)->lpVtbl -> Delete(This) ) 

#define ITask_SkipRecurrence(This)  \
    ( (This)->lpVtbl -> SkipRecurrence(This) ) 

#define ITask_Copy(This,ppolCopy)   \
    ( (This)->lpVtbl -> Copy(This,ppolCopy) ) 

#define ITask_Display(This) \
    ( (This)->lpVtbl -> Display(This) ) 

#define ITask_get_Oid(This,poid)    \
    ( (This)->lpVtbl -> get_Oid(This,poid) ) 

#define ITask_put_BodyInk(This,pcebl)   \
    ( (This)->lpVtbl -> put_BodyInk(This,pcebl) ) 

#define ITask_get_BodyInk(This,pcebl)   \
    ( (This)->lpVtbl -> get_BodyInk(This,pcebl) ) 

#define ITask_get_Application(This,polApp)  \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __ITask_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0020 */
/* [local] */ 

DEFINE_GUID(IID_ITask2, 0x78d1d01a, 0xf0f9, 0x4559, 0xbb, 0x0e, 0x2e, 0x72, 0x49, 0x13, 0xf3, 0xf6);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0020_v0_0_s_ifspec;

#ifndef __ITask2_INTERFACE_DEFINED__
#define __ITask2_INTERFACE_DEFINED__

/* interface ITask2 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ITask2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("78d1d01a-f0f9-4559-bb0e-2e724913f3f6")
    ITask2 : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ OLITEMID *pOlItemId) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IFolder2 **ppParent) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Store( 
            /* [retval][out] */ IStore **ppStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearRecurrencePattern( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecurrencePattern( 
            /* [retval][out] */ IRecurrencePattern2 **ppRecPattern) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsRecurring( 
            /* [retval][out] */ VARIANT_BOOL *pfIsRecurring) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Subject( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Categories( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_StartDate( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DueDate( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DateCompleted( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Importance( 
            /* [retval][out] */ long *pdwPriority) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Complete( 
            /* [retval][out] */ VARIANT_BOOL *pfCompleted) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Sensitivity( 
            /* [retval][out] */ long *plSensitivity) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TeamTask( 
            /* [retval][out] */ VARIANT_BOOL *pfTeamTask) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderSet( 
            /* [retval][out] */ VARIANT_BOOL *pfReminderSet) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderSoundFile( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderTime( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderOptions( 
            /* [retval][out] */ long *pdwOptions) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Subject( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Categories( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_StartDate( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DueDate( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Importance( 
            /* [in] */ long dwPriority) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Complete( 
            /* [in] */ VARIANT_BOOL fCompleted) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Sensitivity( 
            /* [in] */ long lSensitivity) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TeamTask( 
            /* [in] */ VARIANT_BOOL fTeamTask) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Body( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderSet( 
            /* [in] */ VARIANT_BOOL fReminderSet) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderSoundFile( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderTime( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderOptions( 
            /* [in] */ long dwOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SkipRecurrence( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            /* [retval][out] */ ITask2 **ppolCopy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Display( void) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BodyInk( 
            /* [in] */ CEBLOB *pcebl) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BodyInk( 
            /* [retval][out] */ CEBLOB *pcebl) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp3 **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct ITask2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITask2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITask2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITask2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITask2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITask2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITask2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITask2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            ITask2 * This,
            /* [retval][out] */ OLITEMID *pOlItemId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            ITask2 * This,
            /* [retval][out] */ IFolder2 **ppParent);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Store )( 
            ITask2 * This,
            /* [retval][out] */ IStore **ppStore);
        
        HRESULT ( STDMETHODCALLTYPE *ClearRecurrencePattern )( 
            ITask2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRecurrencePattern )( 
            ITask2 * This,
            /* [retval][out] */ IRecurrencePattern2 **ppRecPattern);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsRecurring )( 
            ITask2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfIsRecurring);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Subject )( 
            ITask2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            ITask2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_StartDate )( 
            ITask2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DueDate )( 
            ITask2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DateCompleted )( 
            ITask2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Importance )( 
            ITask2 * This,
            /* [retval][out] */ long *pdwPriority);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Complete )( 
            ITask2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCompleted);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sensitivity )( 
            ITask2 * This,
            /* [retval][out] */ long *plSensitivity);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TeamTask )( 
            ITask2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfTeamTask);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            ITask2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderSet )( 
            ITask2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfReminderSet);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderSoundFile )( 
            ITask2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderTime )( 
            ITask2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderOptions )( 
            ITask2 * This,
            /* [retval][out] */ long *pdwOptions);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Subject )( 
            ITask2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Categories )( 
            ITask2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_StartDate )( 
            ITask2 * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DueDate )( 
            ITask2 * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Importance )( 
            ITask2 * This,
            /* [in] */ long dwPriority);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Complete )( 
            ITask2 * This,
            /* [in] */ VARIANT_BOOL fCompleted);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Sensitivity )( 
            ITask2 * This,
            /* [in] */ long lSensitivity);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TeamTask )( 
            ITask2 * This,
            /* [in] */ VARIANT_BOOL fTeamTask);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Body )( 
            ITask2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderSet )( 
            ITask2 * This,
            /* [in] */ VARIANT_BOOL fReminderSet);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderSoundFile )( 
            ITask2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderTime )( 
            ITask2 * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderOptions )( 
            ITask2 * This,
            /* [in] */ long dwOptions);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            ITask2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ITask2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SkipRecurrence )( 
            ITask2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            ITask2 * This,
            /* [retval][out] */ ITask2 **ppolCopy);
        
        HRESULT ( STDMETHODCALLTYPE *Display )( 
            ITask2 * This);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BodyInk )( 
            ITask2 * This,
            /* [in] */ CEBLOB *pcebl);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyInk )( 
            ITask2 * This,
            /* [retval][out] */ CEBLOB *pcebl);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ITask2 * This,
            /* [retval][out] */ IPOutlookApp3 **polApp);
        
        END_INTERFACE
    } ITask2Vtbl;

    interface ITask2
    {
        CONST_VTBL struct ITask2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITask2_QueryInterface(This,riid,ppvObject)  \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITask2_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITask2_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define ITask2_GetTypeInfoCount(This,pctinfo)   \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITask2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITask2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)  \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITask2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITask2_get_Id(This,pOlItemId)   \
    ( (This)->lpVtbl -> get_Id(This,pOlItemId) ) 

#define ITask2_get_Parent(This,ppParent)    \
    ( (This)->lpVtbl -> get_Parent(This,ppParent) ) 

#define ITask2_get_Store(This,ppStore)  \
    ( (This)->lpVtbl -> get_Store(This,ppStore) ) 

#define ITask2_ClearRecurrencePattern(This) \
    ( (This)->lpVtbl -> ClearRecurrencePattern(This) ) 

#define ITask2_GetRecurrencePattern(This,ppRecPattern)  \
    ( (This)->lpVtbl -> GetRecurrencePattern(This,ppRecPattern) ) 

#define ITask2_get_IsRecurring(This,pfIsRecurring)  \
    ( (This)->lpVtbl -> get_IsRecurring(This,pfIsRecurring) ) 

#define ITask2_get_Subject(This,pbstr)  \
    ( (This)->lpVtbl -> get_Subject(This,pbstr) ) 

#define ITask2_get_Categories(This,pbstr)   \
    ( (This)->lpVtbl -> get_Categories(This,pbstr) ) 

#define ITask2_get_StartDate(This,pst)  \
    ( (This)->lpVtbl -> get_StartDate(This,pst) ) 

#define ITask2_get_DueDate(This,pst)    \
    ( (This)->lpVtbl -> get_DueDate(This,pst) ) 

#define ITask2_get_DateCompleted(This,pst)  \
    ( (This)->lpVtbl -> get_DateCompleted(This,pst) ) 

#define ITask2_get_Importance(This,pdwPriority) \
    ( (This)->lpVtbl -> get_Importance(This,pdwPriority) ) 

#define ITask2_get_Complete(This,pfCompleted)   \
    ( (This)->lpVtbl -> get_Complete(This,pfCompleted) ) 

#define ITask2_get_Sensitivity(This,plSensitivity)  \
    ( (This)->lpVtbl -> get_Sensitivity(This,plSensitivity) ) 

#define ITask2_get_TeamTask(This,pfTeamTask)    \
    ( (This)->lpVtbl -> get_TeamTask(This,pfTeamTask) ) 

#define ITask2_get_Body(This,pbstr) \
    ( (This)->lpVtbl -> get_Body(This,pbstr) ) 

#define ITask2_get_ReminderSet(This,pfReminderSet)  \
    ( (This)->lpVtbl -> get_ReminderSet(This,pfReminderSet) ) 

#define ITask2_get_ReminderSoundFile(This,pbstr)    \
    ( (This)->lpVtbl -> get_ReminderSoundFile(This,pbstr) ) 

#define ITask2_get_ReminderTime(This,pst)   \
    ( (This)->lpVtbl -> get_ReminderTime(This,pst) ) 

#define ITask2_get_ReminderOptions(This,pdwOptions) \
    ( (This)->lpVtbl -> get_ReminderOptions(This,pdwOptions) ) 

#define ITask2_put_Subject(This,bstr)   \
    ( (This)->lpVtbl -> put_Subject(This,bstr) ) 

#define ITask2_put_Categories(This,bstr)    \
    ( (This)->lpVtbl -> put_Categories(This,bstr) ) 

#define ITask2_put_StartDate(This,st)   \
    ( (This)->lpVtbl -> put_StartDate(This,st) ) 

#define ITask2_put_DueDate(This,st) \
    ( (This)->lpVtbl -> put_DueDate(This,st) ) 

#define ITask2_put_Importance(This,dwPriority)  \
    ( (This)->lpVtbl -> put_Importance(This,dwPriority) ) 

#define ITask2_put_Complete(This,fCompleted)    \
    ( (This)->lpVtbl -> put_Complete(This,fCompleted) ) 

#define ITask2_put_Sensitivity(This,lSensitivity)   \
    ( (This)->lpVtbl -> put_Sensitivity(This,lSensitivity) ) 

#define ITask2_put_TeamTask(This,fTeamTask) \
    ( (This)->lpVtbl -> put_TeamTask(This,fTeamTask) ) 

#define ITask2_put_Body(This,bstr)  \
    ( (This)->lpVtbl -> put_Body(This,bstr) ) 

#define ITask2_put_ReminderSet(This,fReminderSet)   \
    ( (This)->lpVtbl -> put_ReminderSet(This,fReminderSet) ) 

#define ITask2_put_ReminderSoundFile(This,bstr) \
    ( (This)->lpVtbl -> put_ReminderSoundFile(This,bstr) ) 

#define ITask2_put_ReminderTime(This,st)    \
    ( (This)->lpVtbl -> put_ReminderTime(This,st) ) 

#define ITask2_put_ReminderOptions(This,dwOptions)  \
    ( (This)->lpVtbl -> put_ReminderOptions(This,dwOptions) ) 

#define ITask2_Save(This)   \
    ( (This)->lpVtbl -> Save(This) ) 

#define ITask2_Delete(This) \
    ( (This)->lpVtbl -> Delete(This) ) 

#define ITask2_SkipRecurrence(This) \
    ( (This)->lpVtbl -> SkipRecurrence(This) ) 

#define ITask2_Copy(This,ppolCopy)  \
    ( (This)->lpVtbl -> Copy(This,ppolCopy) ) 

#define ITask2_Display(This)    \
    ( (This)->lpVtbl -> Display(This) ) 

#define ITask2_put_BodyInk(This,pcebl)  \
    ( (This)->lpVtbl -> put_BodyInk(This,pcebl) ) 

#define ITask2_get_BodyInk(This,pcebl)  \
    ( (This)->lpVtbl -> get_BodyInk(This,pcebl) ) 

#define ITask2_get_Application(This,polApp) \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __ITask2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0021 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum enumOlResponseType
    {   OlResponseTypeAccept    = 0,
    OlResponseTypeDecline   = 1,
    OlResponseTypeTentative = 2
    }   OlResponseType;

DEFINE_GUID(IID_IAppointment, 0x5b43f691, 0x202c, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0021_v0_0_s_ifspec;

#ifndef __IAppointment_INTERFACE_DEFINED__
#define __IAppointment_INTERFACE_DEFINED__

/* interface IAppointment */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAppointment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5b43f691-202c-11d2-8f18-0000f87a4335")
    IAppointment : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ClearRecurrencePattern( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecurrencePattern( 
            /* [retval][out] */ IRecurrencePattern **ppRecPattern) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsRecurring( 
            /* [retval][out] */ VARIANT_BOOL *pfIsRecurring) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Subject( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Location( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Categories( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Duration( 
            /* [retval][out] */ long *pnLen) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_End( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AllDayEvent( 
            /* [retval][out] */ VARIANT_BOOL *pfAllDay) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusyStatus( 
            /* [retval][out] */ long *pnState) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Sensitivity( 
            /* [retval][out] */ long *plSensitivity) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Recipients( 
            /* [retval][out] */ IRecipients **ppRecipients) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MeetingStatus( 
            /* [retval][out] */ long *pnStatus) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderSet( 
            /* [retval][out] */ VARIANT_BOOL *pfReminderSet) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderSoundFile( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderMinutesBeforeStart( 
            /* [retval][out] */ long *plMinutes) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderOptions( 
            /* [retval][out] */ long *pdwOptions) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Subject( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Location( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Categories( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Duration( 
            /* [in] */ long nLen) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_End( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AllDayEvent( 
            /* [in] */ VARIANT_BOOL fAllDay) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusyStatus( 
            /* [in] */ long nState) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Sensitivity( 
            /* [in] */ long lSensitivity) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Body( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderSet( 
            /* [in] */ VARIANT_BOOL fReminderSet) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderSoundFile( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderMinutesBeforeStart( 
            /* [in] */ long lMinutes) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderOptions( 
            /* [in] */ long dwOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Send( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            /* [retval][out] */ IAppointment **ppolCopy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Display( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Oid( 
            /* [retval][out] */ long *poid) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BodyInk( 
            /* [in] */ CEBLOB *pcebl) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BodyInk( 
            /* [retval][out] */ CEBLOB *pcebl) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IAppointmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppointment * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppointment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppointment * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppointment * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppointment * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppointment * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppointment * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *ClearRecurrencePattern )( 
            IAppointment * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRecurrencePattern )( 
            IAppointment * This,
            /* [retval][out] */ IRecurrencePattern **ppRecPattern);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsRecurring )( 
            IAppointment * This,
            /* [retval][out] */ VARIANT_BOOL *pfIsRecurring);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Subject )( 
            IAppointment * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IAppointment * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            IAppointment * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IAppointment * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            IAppointment * This,
            /* [retval][out] */ long *pnLen);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_End )( 
            IAppointment * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllDayEvent )( 
            IAppointment * This,
            /* [retval][out] */ VARIANT_BOOL *pfAllDay);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusyStatus )( 
            IAppointment * This,
            /* [retval][out] */ long *pnState);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sensitivity )( 
            IAppointment * This,
            /* [retval][out] */ long *plSensitivity);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            IAppointment * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Recipients )( 
            IAppointment * This,
            /* [retval][out] */ IRecipients **ppRecipients);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MeetingStatus )( 
            IAppointment * This,
            /* [retval][out] */ long *pnStatus);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderSet )( 
            IAppointment * This,
            /* [retval][out] */ VARIANT_BOOL *pfReminderSet);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderSoundFile )( 
            IAppointment * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderMinutesBeforeStart )( 
            IAppointment * This,
            /* [retval][out] */ long *plMinutes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderOptions )( 
            IAppointment * This,
            /* [retval][out] */ long *pdwOptions);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Subject )( 
            IAppointment * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Location )( 
            IAppointment * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Categories )( 
            IAppointment * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IAppointment * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Duration )( 
            IAppointment * This,
            /* [in] */ long nLen);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_End )( 
            IAppointment * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllDayEvent )( 
            IAppointment * This,
            /* [in] */ VARIANT_BOOL fAllDay);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusyStatus )( 
            IAppointment * This,
            /* [in] */ long nState);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Sensitivity )( 
            IAppointment * This,
            /* [in] */ long lSensitivity);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Body )( 
            IAppointment * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderSet )( 
            IAppointment * This,
            /* [in] */ VARIANT_BOOL fReminderSet);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderSoundFile )( 
            IAppointment * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderMinutesBeforeStart )( 
            IAppointment * This,
            /* [in] */ long lMinutes);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderOptions )( 
            IAppointment * This,
            /* [in] */ long dwOptions);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAppointment * This);
        
        HRESULT ( STDMETHODCALLTYPE *Send )( 
            IAppointment * This);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IAppointment * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IAppointment * This);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IAppointment * This,
            /* [retval][out] */ IAppointment **ppolCopy);
        
        HRESULT ( STDMETHODCALLTYPE *Display )( 
            IAppointment * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Oid )( 
            IAppointment * This,
            /* [retval][out] */ long *poid);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BodyInk )( 
            IAppointment * This,
            /* [in] */ CEBLOB *pcebl);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyInk )( 
            IAppointment * This,
            /* [retval][out] */ CEBLOB *pcebl);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IAppointment * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        END_INTERFACE
    } IAppointmentVtbl;

    interface IAppointment
    {
        CONST_VTBL struct IAppointmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppointment_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppointment_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppointment_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppointment_GetTypeInfoCount(This,pctinfo) \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppointment_GetTypeInfo(This,iTInfo,lcid,ppTInfo)  \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppointment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppointment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)  \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppointment_ClearRecurrencePattern(This)   \
    ( (This)->lpVtbl -> ClearRecurrencePattern(This) ) 

#define IAppointment_GetRecurrencePattern(This,ppRecPattern)    \
    ( (This)->lpVtbl -> GetRecurrencePattern(This,ppRecPattern) ) 

#define IAppointment_get_IsRecurring(This,pfIsRecurring)    \
    ( (This)->lpVtbl -> get_IsRecurring(This,pfIsRecurring) ) 

#define IAppointment_get_Subject(This,pbstr)    \
    ( (This)->lpVtbl -> get_Subject(This,pbstr) ) 

#define IAppointment_get_Location(This,pbstr)   \
    ( (This)->lpVtbl -> get_Location(This,pbstr) ) 

#define IAppointment_get_Categories(This,pbstr) \
    ( (This)->lpVtbl -> get_Categories(This,pbstr) ) 

#define IAppointment_get_Start(This,pst)    \
    ( (This)->lpVtbl -> get_Start(This,pst) ) 

#define IAppointment_get_Duration(This,pnLen)   \
    ( (This)->lpVtbl -> get_Duration(This,pnLen) ) 

#define IAppointment_get_End(This,pst)  \
    ( (This)->lpVtbl -> get_End(This,pst) ) 

#define IAppointment_get_AllDayEvent(This,pfAllDay) \
    ( (This)->lpVtbl -> get_AllDayEvent(This,pfAllDay) ) 

#define IAppointment_get_BusyStatus(This,pnState)   \
    ( (This)->lpVtbl -> get_BusyStatus(This,pnState) ) 

#define IAppointment_get_Sensitivity(This,plSensitivity)    \
    ( (This)->lpVtbl -> get_Sensitivity(This,plSensitivity) ) 

#define IAppointment_get_Body(This,pbstr)   \
    ( (This)->lpVtbl -> get_Body(This,pbstr) ) 

#define IAppointment_get_Recipients(This,ppRecipients)  \
    ( (This)->lpVtbl -> get_Recipients(This,ppRecipients) ) 

#define IAppointment_get_MeetingStatus(This,pnStatus)   \
    ( (This)->lpVtbl -> get_MeetingStatus(This,pnStatus) ) 

#define IAppointment_get_ReminderSet(This,pfReminderSet)    \
    ( (This)->lpVtbl -> get_ReminderSet(This,pfReminderSet) ) 

#define IAppointment_get_ReminderSoundFile(This,pbstr)  \
    ( (This)->lpVtbl -> get_ReminderSoundFile(This,pbstr) ) 

#define IAppointment_get_ReminderMinutesBeforeStart(This,plMinutes) \
    ( (This)->lpVtbl -> get_ReminderMinutesBeforeStart(This,plMinutes) ) 

#define IAppointment_get_ReminderOptions(This,pdwOptions)   \
    ( (This)->lpVtbl -> get_ReminderOptions(This,pdwOptions) ) 

#define IAppointment_put_Subject(This,bstr) \
    ( (This)->lpVtbl -> put_Subject(This,bstr) ) 

#define IAppointment_put_Location(This,bstr)    \
    ( (This)->lpVtbl -> put_Location(This,bstr) ) 

#define IAppointment_put_Categories(This,bstr)  \
    ( (This)->lpVtbl -> put_Categories(This,bstr) ) 

#define IAppointment_put_Start(This,st) \
    ( (This)->lpVtbl -> put_Start(This,st) ) 

#define IAppointment_put_Duration(This,nLen)    \
    ( (This)->lpVtbl -> put_Duration(This,nLen) ) 

#define IAppointment_put_End(This,st)   \
    ( (This)->lpVtbl -> put_End(This,st) ) 

#define IAppointment_put_AllDayEvent(This,fAllDay)  \
    ( (This)->lpVtbl -> put_AllDayEvent(This,fAllDay) ) 

#define IAppointment_put_BusyStatus(This,nState)    \
    ( (This)->lpVtbl -> put_BusyStatus(This,nState) ) 

#define IAppointment_put_Sensitivity(This,lSensitivity) \
    ( (This)->lpVtbl -> put_Sensitivity(This,lSensitivity) ) 

#define IAppointment_put_Body(This,bstr)    \
    ( (This)->lpVtbl -> put_Body(This,bstr) ) 

#define IAppointment_put_ReminderSet(This,fReminderSet) \
    ( (This)->lpVtbl -> put_ReminderSet(This,fReminderSet) ) 

#define IAppointment_put_ReminderSoundFile(This,bstr)   \
    ( (This)->lpVtbl -> put_ReminderSoundFile(This,bstr) ) 

#define IAppointment_put_ReminderMinutesBeforeStart(This,lMinutes)  \
    ( (This)->lpVtbl -> put_ReminderMinutesBeforeStart(This,lMinutes) ) 

#define IAppointment_put_ReminderOptions(This,dwOptions)    \
    ( (This)->lpVtbl -> put_ReminderOptions(This,dwOptions) ) 

#define IAppointment_Save(This) \
    ( (This)->lpVtbl -> Save(This) ) 

#define IAppointment_Send(This) \
    ( (This)->lpVtbl -> Send(This) ) 

#define IAppointment_Delete(This)   \
    ( (This)->lpVtbl -> Delete(This) ) 

#define IAppointment_Cancel(This)   \
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IAppointment_Copy(This,ppolCopy)    \
    ( (This)->lpVtbl -> Copy(This,ppolCopy) ) 

#define IAppointment_Display(This)  \
    ( (This)->lpVtbl -> Display(This) ) 

#define IAppointment_get_Oid(This,poid) \
    ( (This)->lpVtbl -> get_Oid(This,poid) ) 

#define IAppointment_put_BodyInk(This,pcebl)    \
    ( (This)->lpVtbl -> put_BodyInk(This,pcebl) ) 

#define IAppointment_get_BodyInk(This,pcebl)    \
    ( (This)->lpVtbl -> get_BodyInk(This,pcebl) ) 

#define IAppointment_get_Application(This,polApp)   \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IAppointment_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0022 */
/* [local] */ 

DEFINE_GUID(IID_IAppointment2, 0xaf57f7f5, 0x0503, 0x44b4, 0xbf, 0x19, 0x52, 0x1e, 0x04, 0xf6, 0xa8, 0xeb);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0022_v0_0_s_ifspec;

#ifndef __IAppointment2_INTERFACE_DEFINED__
#define __IAppointment2_INTERFACE_DEFINED__

/* interface IAppointment2 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IAppointment2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("af57f7f5-0503-44b4-bf19-521e04f6a8eb")
    IAppointment2 : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsException( 
            /* [retval][out] */ VARIANT_BOOL *pfIsException) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsInstance( 
            /* [retval][out] */ VARIANT_BOOL *pfIsInstance) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Respond( 
            /* [in] */ OlResponseType resp,
            /* [in] */ BSTR bstrResponseBody) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ OLITEMID *pOlItemId) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IFolder2 **ppParent) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Store( 
            /* [retval][out] */ IStore **ppStore) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NoResponseRequested( 
            /* [retval][out] */ VARIANT_BOOL *pfNoResponseRequested) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NoResponseRequested( 
            /* [in] */ VARIANT_BOOL fNoResponseRequested) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NoNewTimeProposals( 
            /* [retval][out] */ VARIANT_BOOL *pfNoNewTimeProposals) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NoNewTimeProposals( 
            /* [in] */ VARIANT_BOOL fNoNewTimeProposals) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Organizer( 
            /* [retval][out] */ BSTR *pbstrOrganizer) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Organizer( 
            /* [in] */ BSTR bstrOrganizer) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OrganizerEmail( 
            /* [retval][out] */ BSTR *pbstrOrganizerEmail) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_OrganizerEmail( 
            /* [in] */ BSTR bstrOrganizerEmail) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearRecurrencePattern( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecurrencePattern( 
            /* [retval][out] */ IRecurrencePattern2 **ppRecPattern) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsRecurring( 
            /* [retval][out] */ VARIANT_BOOL *pfIsRecurring) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Subject( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Location( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Categories( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Start( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Duration( 
            /* [retval][out] */ long *pnLen) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_End( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AllDayEvent( 
            /* [retval][out] */ VARIANT_BOOL *pfAllDay) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BusyStatus( 
            /* [retval][out] */ long *pnState) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Sensitivity( 
            /* [retval][out] */ long *plSensitivity) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Recipients( 
            /* [retval][out] */ IRecipients2 **ppRecipients) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MeetingStatus( 
            /* [retval][out] */ long *pnStatus) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderSet( 
            /* [retval][out] */ VARIANT_BOOL *pfReminderSet) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderSoundFile( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderMinutesBeforeStart( 
            /* [retval][out] */ long *plMinutes) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReminderOptions( 
            /* [retval][out] */ long *pdwOptions) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ReplyTime( 
            /* [retval][out] */ DATE *pst) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ResponseType( 
            /* [retval][out] */ OlRecipientStatus *polResponse) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Subject( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Location( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Categories( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Start( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Duration( 
            /* [in] */ long nLen) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_End( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AllDayEvent( 
            /* [in] */ VARIANT_BOOL fAllDay) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BusyStatus( 
            /* [in] */ long nState) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Sensitivity( 
            /* [in] */ long lSensitivity) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Body( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_MeetingStatus( 
            /* [in] */ long nStatus) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderSet( 
            /* [in] */ VARIANT_BOOL fReminderSet) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderSoundFile( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderMinutesBeforeStart( 
            /* [in] */ long lMinutes) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReminderOptions( 
            /* [in] */ long dwOptions) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ReplyTime( 
            /* [in] */ DATE st) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ResponseType( 
            /* [in] */ OlRecipientStatus olResponse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Send( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            /* [retval][out] */ IAppointment2 **ppolCopy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Display( void) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BodyInk( 
            /* [in] */ CEBLOB *pcebl) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BodyInk( 
            /* [retval][out] */ CEBLOB *pcebl) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp3 **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IAppointment2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppointment2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppointment2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppointment2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAppointment2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAppointment2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAppointment2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAppointment2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsException )( 
            IAppointment2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfIsException);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsInstance )( 
            IAppointment2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfIsInstance);
        
        HRESULT ( STDMETHODCALLTYPE *Respond )( 
            IAppointment2 * This,
            /* [in] */ OlResponseType resp,
            /* [in] */ BSTR bstrResponseBody);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IAppointment2 * This,
            /* [retval][out] */ OLITEMID *pOlItemId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IAppointment2 * This,
            /* [retval][out] */ IFolder2 **ppParent);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Store )( 
            IAppointment2 * This,
            /* [retval][out] */ IStore **ppStore);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NoResponseRequested )( 
            IAppointment2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNoResponseRequested);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NoResponseRequested )( 
            IAppointment2 * This,
            /* [in] */ VARIANT_BOOL fNoResponseRequested);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NoNewTimeProposals )( 
            IAppointment2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfNoNewTimeProposals);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NoNewTimeProposals )( 
            IAppointment2 * This,
            /* [in] */ VARIANT_BOOL fNoNewTimeProposals);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Organizer )( 
            IAppointment2 * This,
            /* [retval][out] */ BSTR *pbstrOrganizer);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Organizer )( 
            IAppointment2 * This,
            /* [in] */ BSTR bstrOrganizer);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OrganizerEmail )( 
            IAppointment2 * This,
            /* [retval][out] */ BSTR *pbstrOrganizerEmail);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_OrganizerEmail )( 
            IAppointment2 * This,
            /* [in] */ BSTR bstrOrganizerEmail);
        
        HRESULT ( STDMETHODCALLTYPE *ClearRecurrencePattern )( 
            IAppointment2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRecurrencePattern )( 
            IAppointment2 * This,
            /* [retval][out] */ IRecurrencePattern2 **ppRecPattern);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsRecurring )( 
            IAppointment2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfIsRecurring);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Subject )( 
            IAppointment2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Location )( 
            IAppointment2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Categories )( 
            IAppointment2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Start )( 
            IAppointment2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Duration )( 
            IAppointment2 * This,
            /* [retval][out] */ long *pnLen);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_End )( 
            IAppointment2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllDayEvent )( 
            IAppointment2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfAllDay);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BusyStatus )( 
            IAppointment2 * This,
            /* [retval][out] */ long *pnState);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sensitivity )( 
            IAppointment2 * This,
            /* [retval][out] */ long *plSensitivity);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            IAppointment2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Recipients )( 
            IAppointment2 * This,
            /* [retval][out] */ IRecipients2 **ppRecipients);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MeetingStatus )( 
            IAppointment2 * This,
            /* [retval][out] */ long *pnStatus);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderSet )( 
            IAppointment2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfReminderSet);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderSoundFile )( 
            IAppointment2 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderMinutesBeforeStart )( 
            IAppointment2 * This,
            /* [retval][out] */ long *plMinutes);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReminderOptions )( 
            IAppointment2 * This,
            /* [retval][out] */ long *pdwOptions);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReplyTime )( 
            IAppointment2 * This,
            /* [retval][out] */ DATE *pst);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResponseType )( 
            IAppointment2 * This,
            /* [retval][out] */ OlRecipientStatus *polResponse);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Subject )( 
            IAppointment2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Location )( 
            IAppointment2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Categories )( 
            IAppointment2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Start )( 
            IAppointment2 * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Duration )( 
            IAppointment2 * This,
            /* [in] */ long nLen);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_End )( 
            IAppointment2 * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllDayEvent )( 
            IAppointment2 * This,
            /* [in] */ VARIANT_BOOL fAllDay);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BusyStatus )( 
            IAppointment2 * This,
            /* [in] */ long nState);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Sensitivity )( 
            IAppointment2 * This,
            /* [in] */ long lSensitivity);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Body )( 
            IAppointment2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_MeetingStatus )( 
            IAppointment2 * This,
            /* [in] */ long nStatus);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderSet )( 
            IAppointment2 * This,
            /* [in] */ VARIANT_BOOL fReminderSet);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderSoundFile )( 
            IAppointment2 * This,
            /* [in] */ BSTR bstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderMinutesBeforeStart )( 
            IAppointment2 * This,
            /* [in] */ long lMinutes);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReminderOptions )( 
            IAppointment2 * This,
            /* [in] */ long dwOptions);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReplyTime )( 
            IAppointment2 * This,
            /* [in] */ DATE st);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResponseType )( 
            IAppointment2 * This,
            /* [in] */ OlRecipientStatus olResponse);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            IAppointment2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Send )( 
            IAppointment2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IAppointment2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IAppointment2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IAppointment2 * This,
            /* [retval][out] */ IAppointment2 **ppolCopy);
        
        HRESULT ( STDMETHODCALLTYPE *Display )( 
            IAppointment2 * This);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BodyInk )( 
            IAppointment2 * This,
            /* [in] */ CEBLOB *pcebl);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyInk )( 
            IAppointment2 * This,
            /* [retval][out] */ CEBLOB *pcebl);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IAppointment2 * This,
            /* [retval][out] */ IPOutlookApp3 **polApp);
        
        END_INTERFACE
    } IAppointment2Vtbl;

    interface IAppointment2
    {
        CONST_VTBL struct IAppointment2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppointment2_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppointment2_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppointment2_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppointment2_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAppointment2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAppointment2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)   \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAppointment2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IAppointment2_get_IsException(This,pfIsException)   \
    ( (This)->lpVtbl -> get_IsException(This,pfIsException) ) 

#define IAppointment2_get_IsInstance(This,pfIsInstance)    \
    ( (This)->lpVtbl -> get_IsInstance(This,pfIsInstance) ) 

#define IAppointment2_Respond(This,resp,bstrResponseBody)   \
    ( (This)->lpVtbl -> Respond(This,resp,bstrResponseBody) ) 

#define IAppointment2_get_Id(This,pOlItemId)    \
    ( (This)->lpVtbl -> get_Id(This,pOlItemId) ) 

#define IAppointment2_get_Parent(This,ppParent) \
    ( (This)->lpVtbl -> get_Parent(This,ppParent) ) 

#define IAppointment2_get_Store(This,ppStore)   \
    ( (This)->lpVtbl -> get_Store(This,ppStore) ) 

#define IAppointment2_get_NoResponseRequested(This,pfNoResponseRequested)   \
    ( (This)->lpVtbl -> get_NoResponseRequested(This,pfNoResponseRequested) ) 

#define IAppointment2_put_NoResponseRequested(This,fNoResponseRequested)    \
    ( (This)->lpVtbl -> put_NoResponseRequested(This,fNoResponseRequested) ) 

#define IAppointment2_get_NoNewTimeProposals(This,pfNoNewTimeProposals) \
    ( (This)->lpVtbl -> get_NoNewTimeProposals(This,pfNoNewTimeProposals) ) 

#define IAppointment2_put_NoNewTimeProposals(This,fNoNewTimeProposals)  \
    ( (This)->lpVtbl -> put_NoNewTimeProposals(This,fNoNewTimeProposals) ) 

#define IAppointment2_get_Organizer(This,pbstrOrganizer)    \
    ( (This)->lpVtbl -> get_Organizer(This,pbstrOrganizer) ) 

#define IAppointment2_put_Organizer(This,bstrOrganizer) \
    ( (This)->lpVtbl -> put_Organizer(This,bstrOrganizer) ) 

#define IAppointment2_get_OrganizerEmail(This,pbstrOrganizerEmail)  \
    ( (This)->lpVtbl -> get_OrganizerEmail(This,pbstrOrganizerEmail) ) 

#define IAppointment2_put_OrganizerEmail(This,bstrOrganizerEmail)   \
    ( (This)->lpVtbl -> put_OrganizerEmail(This,bstrOrganizerEmail) ) 

#define IAppointment2_ClearRecurrencePattern(This)  \
    ( (This)->lpVtbl -> ClearRecurrencePattern(This) ) 

#define IAppointment2_GetRecurrencePattern(This,ppRecPattern)   \
    ( (This)->lpVtbl -> GetRecurrencePattern(This,ppRecPattern) ) 

#define IAppointment2_get_IsRecurring(This,pfIsRecurring)   \
    ( (This)->lpVtbl -> get_IsRecurring(This,pfIsRecurring) ) 

#define IAppointment2_get_Subject(This,pbstr)   \
    ( (This)->lpVtbl -> get_Subject(This,pbstr) ) 

#define IAppointment2_get_Location(This,pbstr)  \
    ( (This)->lpVtbl -> get_Location(This,pbstr) ) 

#define IAppointment2_get_Categories(This,pbstr)    \
    ( (This)->lpVtbl -> get_Categories(This,pbstr) ) 

#define IAppointment2_get_Start(This,pst)   \
    ( (This)->lpVtbl -> get_Start(This,pst) ) 

#define IAppointment2_get_Duration(This,pnLen)  \
    ( (This)->lpVtbl -> get_Duration(This,pnLen) ) 

#define IAppointment2_get_End(This,pst) \
    ( (This)->lpVtbl -> get_End(This,pst) ) 

#define IAppointment2_get_AllDayEvent(This,pfAllDay)    \
    ( (This)->lpVtbl -> get_AllDayEvent(This,pfAllDay) ) 

#define IAppointment2_get_BusyStatus(This,pnState)  \
    ( (This)->lpVtbl -> get_BusyStatus(This,pnState) ) 

#define IAppointment2_get_Sensitivity(This,plSensitivity)   \
    ( (This)->lpVtbl -> get_Sensitivity(This,plSensitivity) ) 

#define IAppointment2_get_Body(This,pbstr)  \
    ( (This)->lpVtbl -> get_Body(This,pbstr) ) 

#define IAppointment2_get_Recipients(This,ppRecipients) \
    ( (This)->lpVtbl -> get_Recipients(This,ppRecipients) ) 

#define IAppointment2_get_MeetingStatus(This,pnStatus)  \
    ( (This)->lpVtbl -> get_MeetingStatus(This,pnStatus) ) 

#define IAppointment2_get_ReminderSet(This,pfReminderSet)   \
    ( (This)->lpVtbl -> get_ReminderSet(This,pfReminderSet) ) 

#define IAppointment2_get_ReminderSoundFile(This,pbstr) \
    ( (This)->lpVtbl -> get_ReminderSoundFile(This,pbstr) ) 

#define IAppointment2_get_ReminderMinutesBeforeStart(This,plMinutes)    \
    ( (This)->lpVtbl -> get_ReminderMinutesBeforeStart(This,plMinutes) ) 

#define IAppointment2_get_ReminderOptions(This,pdwOptions)  \
    ( (This)->lpVtbl -> get_ReminderOptions(This,pdwOptions) ) 

#define IAppointment2_get_ReplyTime(This,pst)   \
    ( (This)->lpVtbl -> get_ReplyTime(This,pst) ) 

#define IAppointment2_get_ResponseType(This,polResponse)    \
    ( (This)->lpVtbl -> get_ResponseType(This,polResponse) ) 

#define IAppointment2_put_Subject(This,bstr)    \
    ( (This)->lpVtbl -> put_Subject(This,bstr) ) 

#define IAppointment2_put_Location(This,bstr)   \
    ( (This)->lpVtbl -> put_Location(This,bstr) ) 

#define IAppointment2_put_Categories(This,bstr) \
    ( (This)->lpVtbl -> put_Categories(This,bstr) ) 

#define IAppointment2_put_Start(This,st)    \
    ( (This)->lpVtbl -> put_Start(This,st) ) 

#define IAppointment2_put_Duration(This,nLen)   \
    ( (This)->lpVtbl -> put_Duration(This,nLen) ) 

#define IAppointment2_put_End(This,st)  \
    ( (This)->lpVtbl -> put_End(This,st) ) 

#define IAppointment2_put_AllDayEvent(This,fAllDay) \
    ( (This)->lpVtbl -> put_AllDayEvent(This,fAllDay) ) 

#define IAppointment2_put_BusyStatus(This,nState)   \
    ( (This)->lpVtbl -> put_BusyStatus(This,nState) ) 

#define IAppointment2_put_Sensitivity(This,lSensitivity)    \
    ( (This)->lpVtbl -> put_Sensitivity(This,lSensitivity) ) 

#define IAppointment2_put_Body(This,bstr)   \
    ( (This)->lpVtbl -> put_Body(This,bstr) ) 

#define IAppointment2_put_MeetingStatus(This,nStatus)   \
    ( (This)->lpVtbl -> put_MeetingStatus(This,nStatus) ) 

#define IAppointment2_put_ReminderSet(This,fReminderSet)    \
    ( (This)->lpVtbl -> put_ReminderSet(This,fReminderSet) ) 

#define IAppointment2_put_ReminderSoundFile(This,bstr)  \
    ( (This)->lpVtbl -> put_ReminderSoundFile(This,bstr) ) 

#define IAppointment2_put_ReminderMinutesBeforeStart(This,lMinutes) \
    ( (This)->lpVtbl -> put_ReminderMinutesBeforeStart(This,lMinutes) ) 

#define IAppointment2_put_ReminderOptions(This,dwOptions)   \
    ( (This)->lpVtbl -> put_ReminderOptions(This,dwOptions) ) 

#define IAppointment2_put_ReplyTime(This,st)    \
    ( (This)->lpVtbl -> put_ReplyTime(This,st) ) 

#define IAppointment2_put_ResponseType(This,olResponse) \
    ( (This)->lpVtbl -> put_ResponseType(This,olResponse) ) 

#define IAppointment2_Save(This)    \
    ( (This)->lpVtbl -> Save(This) ) 

#define IAppointment2_Send(This)    \
    ( (This)->lpVtbl -> Send(This) ) 

#define IAppointment2_Delete(This)  \
    ( (This)->lpVtbl -> Delete(This) ) 

#define IAppointment2_Cancel(This)  \
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IAppointment2_Copy(This,ppolCopy)   \
    ( (This)->lpVtbl -> Copy(This,ppolCopy) ) 

#define IAppointment2_Display(This) \
    ( (This)->lpVtbl -> Display(This) ) 

#define IAppointment2_put_BodyInk(This,pcebl)   \
    ( (This)->lpVtbl -> put_BodyInk(This,pcebl) ) 

#define IAppointment2_get_BodyInk(This,pcebl)   \
    ( (This)->lpVtbl -> get_BodyInk(This,pcebl) ) 

#define IAppointment2_get_Application(This,polApp)  \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IAppointment2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0023 */
/* [local] */ 

DEFINE_GUID(IID_ICity, 0xc83c5e90, 0x3d1b, 0x11d2, 0x8f, 0x1b, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0023_v0_0_s_ifspec;

#ifndef __ICity_INTERFACE_DEFINED__
#define __ICity_INTERFACE_DEFINED__

/* interface ICity */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ICity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c83c5e90-3d1b-11d2-8f1b-0000f87a4335")
    ICity : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Longitude( 
            /* [retval][out] */ long *pcLongitude) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Latitude( 
            /* [retval][out] */ long *pcLatitude) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TimezoneIndex( 
            /* [retval][out] */ long *pcTimezone) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AirportCode( 
            /* [retval][out] */ BSTR *pbstrAirportCode) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CountryPhoneCode( 
            /* [retval][out] */ BSTR *pbstrCountryPhoneCode) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AreaCode( 
            /* [retval][out] */ BSTR *pbstrAreaCode) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Country( 
            /* [retval][out] */ BSTR *pbstrCountry) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_InROM( 
            /* [retval][out] */ VARIANT_BOOL *pfInROM) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Longitude( 
            /* [in] */ long cLongitude) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Latitude( 
            /* [in] */ long cLatitude) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TimezoneIndex( 
            /* [in] */ long cTimezone) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AirportCode( 
            /* [in] */ BSTR bstrAirportCode) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CountryPhoneCode( 
            /* [in] */ BSTR bstrCountryPhoneCode) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AreaCode( 
            /* [in] */ BSTR bstrAreaCode) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Country( 
            /* [in] */ BSTR bstrCountry) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            /* [retval][out] */ ICity **ppolCopy) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct ICityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICity * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICity * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICity * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICity * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICity * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICity * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Longitude )( 
            ICity * This,
            /* [retval][out] */ long *pcLongitude);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Latitude )( 
            ICity * This,
            /* [retval][out] */ long *pcLatitude);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TimezoneIndex )( 
            ICity * This,
            /* [retval][out] */ long *pcTimezone);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AirportCode )( 
            ICity * This,
            /* [retval][out] */ BSTR *pbstrAirportCode);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CountryPhoneCode )( 
            ICity * This,
            /* [retval][out] */ BSTR *pbstrCountryPhoneCode);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AreaCode )( 
            ICity * This,
            /* [retval][out] */ BSTR *pbstrAreaCode);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ICity * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Country )( 
            ICity * This,
            /* [retval][out] */ BSTR *pbstrCountry);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_InROM )( 
            ICity * This,
            /* [retval][out] */ VARIANT_BOOL *pfInROM);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Longitude )( 
            ICity * This,
            /* [in] */ long cLongitude);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Latitude )( 
            ICity * This,
            /* [in] */ long cLatitude);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TimezoneIndex )( 
            ICity * This,
            /* [in] */ long cTimezone);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AirportCode )( 
            ICity * This,
            /* [in] */ BSTR bstrAirportCode);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CountryPhoneCode )( 
            ICity * This,
            /* [in] */ BSTR bstrCountryPhoneCode);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AreaCode )( 
            ICity * This,
            /* [in] */ BSTR bstrAreaCode);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            ICity * This,
            /* [in] */ BSTR bstrName);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Country )( 
            ICity * This,
            /* [in] */ BSTR bstrCountry);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            ICity * This);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            ICity * This);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            ICity * This,
            /* [retval][out] */ ICity **ppolCopy);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            ICity * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        END_INTERFACE
    } ICityVtbl;

    interface ICity
    {
        CONST_VTBL struct ICityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICity_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICity_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICity_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define ICity_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICity_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICity_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)   \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICity_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICity_get_Longitude(This,pcLongitude)   \
    ( (This)->lpVtbl -> get_Longitude(This,pcLongitude) ) 

#define ICity_get_Latitude(This,pcLatitude) \
    ( (This)->lpVtbl -> get_Latitude(This,pcLatitude) ) 

#define ICity_get_TimezoneIndex(This,pcTimezone)    \
    ( (This)->lpVtbl -> get_TimezoneIndex(This,pcTimezone) ) 

#define ICity_get_AirportCode(This,pbstrAirportCode)    \
    ( (This)->lpVtbl -> get_AirportCode(This,pbstrAirportCode) ) 

#define ICity_get_CountryPhoneCode(This,pbstrCountryPhoneCode)  \
    ( (This)->lpVtbl -> get_CountryPhoneCode(This,pbstrCountryPhoneCode) ) 

#define ICity_get_AreaCode(This,pbstrAreaCode)  \
    ( (This)->lpVtbl -> get_AreaCode(This,pbstrAreaCode) ) 

#define ICity_get_Name(This,pbstrName)  \
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define ICity_get_Country(This,pbstrCountry)    \
    ( (This)->lpVtbl -> get_Country(This,pbstrCountry) ) 

#define ICity_get_InROM(This,pfInROM)   \
    ( (This)->lpVtbl -> get_InROM(This,pfInROM) ) 

#define ICity_put_Longitude(This,cLongitude)    \
    ( (This)->lpVtbl -> put_Longitude(This,cLongitude) ) 

#define ICity_put_Latitude(This,cLatitude)  \
    ( (This)->lpVtbl -> put_Latitude(This,cLatitude) ) 

#define ICity_put_TimezoneIndex(This,cTimezone) \
    ( (This)->lpVtbl -> put_TimezoneIndex(This,cTimezone) ) 

#define ICity_put_AirportCode(This,bstrAirportCode) \
    ( (This)->lpVtbl -> put_AirportCode(This,bstrAirportCode) ) 

#define ICity_put_CountryPhoneCode(This,bstrCountryPhoneCode)   \
    ( (This)->lpVtbl -> put_CountryPhoneCode(This,bstrCountryPhoneCode) ) 

#define ICity_put_AreaCode(This,bstrAreaCode)   \
    ( (This)->lpVtbl -> put_AreaCode(This,bstrAreaCode) ) 

#define ICity_put_Name(This,bstrName)   \
    ( (This)->lpVtbl -> put_Name(This,bstrName) ) 

#define ICity_put_Country(This,bstrCountry) \
    ( (This)->lpVtbl -> put_Country(This,bstrCountry) ) 

#define ICity_Save(This)    \
    ( (This)->lpVtbl -> Save(This) ) 

#define ICity_Delete(This)  \
    ( (This)->lpVtbl -> Delete(This) ) 

#define ICity_Copy(This,ppolCopy)   \
    ( (This)->lpVtbl -> Copy(This,ppolCopy) ) 

#define ICity_get_Application(This,polApp)  \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __ICity_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0024 */
/* [local] */ 
DEFINE_GUID(IID_IFolder, 0x5058f20, 0x20be, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0024_v0_0_s_ifspec;

#ifndef __IFolder_INTERFACE_DEFINED__
#define __IFolder_INTERFACE_DEFINED__

/* interface IFolder */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IFolder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05058f20-20be-11d2-8f18-0000f87a4335")
    IFolder : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Items( 
            /* [retval][out] */ IPOutlookItemCollection **ppolItems) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DefaultItemType( 
            /* [retval][out] */ int *polItem) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddItemToInfraredFolder( 
            /* [in] */ int olItem,
            /* [in] */ IDispatch *polItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendToInfrared( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReceiveFromInfrared( 
            /* [retval][out] */ IPOutlookItemCollection **ppItems) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IFolderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFolder * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFolder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFolder * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFolder * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFolder * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFolder * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Items )( 
            IFolder * This,
            /* [retval][out] */ IPOutlookItemCollection **ppolItems);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultItemType )( 
            IFolder * This,
            /* [retval][out] */ int *polItem);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IFolder * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        HRESULT ( STDMETHODCALLTYPE *AddItemToInfraredFolder )( 
            IFolder * This,
            /* [in] */ int olItem,
            /* [in] */ IDispatch *polItem);
        
        HRESULT ( STDMETHODCALLTYPE *SendToInfrared )( 
            IFolder * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReceiveFromInfrared )( 
            IFolder * This,
            /* [retval][out] */ IPOutlookItemCollection **ppItems);
        
        END_INTERFACE
    } IFolderVtbl;

    interface IFolder
    {
        CONST_VTBL struct IFolderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolder_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolder_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolder_Release(This)   \
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolder_GetTypeInfoCount(This,pctinfo)  \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFolder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)   \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFolder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFolder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)   \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFolder_get_Items(This,ppolItems)   \
    ( (This)->lpVtbl -> get_Items(This,ppolItems) ) 

#define IFolder_get_DefaultItemType(This,polItem)   \
    ( (This)->lpVtbl -> get_DefaultItemType(This,polItem) ) 

#define IFolder_get_Application(This,polApp)    \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#define IFolder_AddItemToInfraredFolder(This,olItem,polItem)    \
    ( (This)->lpVtbl -> AddItemToInfraredFolder(This,olItem,polItem) ) 

#define IFolder_SendToInfrared(This)    \
    ( (This)->lpVtbl -> SendToInfrared(This) ) 

#define IFolder_ReceiveFromInfrared(This,ppItems)   \
    ( (This)->lpVtbl -> ReceiveFromInfrared(This,ppItems) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IFolder_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0025 */
/* [local] */ 

DEFINE_GUID(IID_IFolder2, 0x3382bed9, 0xe18f, 0x4e32, 0xb3, 0xe6, 0x50, 0x31, 0x92, 0xc8, 0xa5, 0x8e);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0025_v0_0_s_ifspec;

#ifndef __IFolder2_INTERFACE_DEFINED__
#define __IFolder2_INTERFACE_DEFINED__

/* interface IFolder2 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IFolder2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3382BED9-E18F-4e32-B3E6-503192C8A58E")
    IFolder2 : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ OLITEMID *pItemId) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Items( 
            /* [retval][out] */ IPOutlookItemCollection2 **ppolItems) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ItemType( 
            /* [retval][out] */ OlItemType *polItem) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp3 **polApp) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IFolder2 **ppParent) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Store( 
            /* [retval][out] */ IStore **ppStore) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DisplayName( 
            /* [retval][out] */ BSTR *pbstrDisplayName) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DisplayName( 
            /* [in] */ BSTR bstrDisplayName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Folders( 
            /* [retval][out] */ IPOutlookFolderCollection **ppFolders) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsEmpty( 
            DWORD dwFlag,
            BOOL *pfEmpty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveToFolder( 
            /* [in] */ IFolder2 *pFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateFolder( 
            /* [in] */ BSTR bstrName,
            /* [in] */ OlItemType olItem,
            /* [retval][out] */ IFolder2 **ppFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateItem( 
            /* [in] */ OlItemType olItemType,
            /* [retval][out] */ IItem2 **ppItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendToInfrared( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReceiveFromInfrared( 
            /* [retval][out] */ IPOutlookItemCollection2 **ppItems) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IFolder2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFolder2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFolder2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFolder2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFolder2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFolder2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFolder2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFolder2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IFolder2 * This,
            /* [retval][out] */ OLITEMID *pItemId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Items )( 
            IFolder2 * This,
            /* [retval][out] */ IPOutlookItemCollection2 **ppolItems);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemType )( 
            IFolder2 * This,
            /* [retval][out] */ OlItemType *polItem);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IFolder2 * This,
            /* [retval][out] */ IPOutlookApp3 **polApp);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IFolder2 * This,
            /* [retval][out] */ IFolder2 **ppParent);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Store )( 
            IFolder2 * This,
            /* [retval][out] */ IStore **ppStore);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            IFolder2 * This,
            /* [retval][out] */ BSTR *pbstrDisplayName);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayName )( 
            IFolder2 * This,
            /* [in] */ BSTR bstrDisplayName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Folders )( 
            IFolder2 * This,
            /* [retval][out] */ IPOutlookFolderCollection **ppFolders);
        
        HRESULT ( STDMETHODCALLTYPE *IsEmpty )( 
            IFolder2 * This,
            DWORD dwFlag,
            BOOL *pfEmpty);
        
        HRESULT ( STDMETHODCALLTYPE *MoveToFolder )( 
            IFolder2 * This,
            /* [in] */ IFolder2 *pFolder);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFolder )( 
            IFolder2 * This,
            /* [in] */ BSTR bstrName,
            /* [in] */ OlItemType olItem,
            /* [retval][out] */ IFolder2 **ppFolder);
        
        HRESULT ( STDMETHODCALLTYPE *CreateItem )( 
            IFolder2 * This,
            /* [in] */ OlItemType olItemType,
            /* [retval][out] */ IItem2 **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            IFolder2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IFolder2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SendToInfrared )( 
            IFolder2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReceiveFromInfrared )( 
            IFolder2 * This,
            /* [retval][out] */ IPOutlookItemCollection2 **ppItems);
        
        END_INTERFACE
    } IFolder2Vtbl;

    interface IFolder2
    {
        CONST_VTBL struct IFolder2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFolder2_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFolder2_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFolder2_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define IFolder2_GetTypeInfoCount(This,pctinfo) \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFolder2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)  \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFolder2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFolder2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)  \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFolder2_get_Id(This,pItemId)   \
    ( (This)->lpVtbl -> get_Id(This,pItemId) ) 

#define IFolder2_get_Items(This,ppolItems)  \
    ( (This)->lpVtbl -> get_Items(This,ppolItems) ) 

#define IFolder2_get_ItemType(This,polItem) \
    ( (This)->lpVtbl -> get_ItemType(This,polItem) ) 

#define IFolder2_get_Application(This,polApp)   \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#define IFolder2_get_Parent(This,ppParent)  \
    ( (This)->lpVtbl -> get_Parent(This,ppParent) ) 

#define IFolder2_get_Store(This,ppStore)    \
    ( (This)->lpVtbl -> get_Store(This,ppStore) ) 

#define IFolder2_get_DisplayName(This,pbstrDisplayName) \
    ( (This)->lpVtbl -> get_DisplayName(This,pbstrDisplayName) ) 

#define IFolder2_put_DisplayName(This,bstrDisplayName)  \
    ( (This)->lpVtbl -> put_DisplayName(This,bstrDisplayName) ) 

#define IFolder2_get_Folders(This,ppFolders)    \
    ( (This)->lpVtbl -> get_Folders(This,ppFolders) ) 

#define IFolder2_IsEmpty(This,dwFlag,pfEmpty)   \
    ( (This)->lpVtbl -> IsEmpty(This,dwFlag,pfEmpty) ) 

#define IFolder2_MoveToFolder(This,pFolder) \
    ( (This)->lpVtbl -> MoveToFolder(This,pFolder) ) 

#define IFolder2_CreateFolder(This,bstrName,olItem,ppFolder)    \
    ( (This)->lpVtbl -> CreateFolder(This,bstrName,olItem,ppFolder) ) 

#define IFolder2_CreateItem(This,olItemType,ppItem) \
    ( (This)->lpVtbl -> CreateItem(This,olItemType,ppItem) ) 

#define IFolder2_Save(This) \
    ( (This)->lpVtbl -> Save(This) ) 

#define IFolder2_Delete(This)   \
    ( (This)->lpVtbl -> Delete(This) ) 

#define IFolder2_SendToInfrared(This)   \
    ( (This)->lpVtbl -> SendToInfrared(This) ) 

#define IFolder2_ReceiveFromInfrared(This,ppItems)  \
    ( (This)->lpVtbl -> ReceiveFromInfrared(This,ppItems) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IFolder2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0026 */
/* [local] */ 

DEFINE_GUID(IID_IPOutlookApp, 0x05058F22, 0x20BE, 0x11d2, 0x8F, 0x18, 0x00, 0x00, 0xF8, 0x7A, 0x43, 0x35);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0026_v0_0_s_ifspec;

#ifndef __IPOutlookApp_INTERFACE_DEFINED__
#define __IPOutlookApp_INTERFACE_DEFINED__

/* interface IPOutlookApp */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPOutlookApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05058f22-20be-11d2-8f18-0000f87a4335")
    IPOutlookApp : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Logon( 
            /* [in] */ long hWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Logoff( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [out][retval] */ BSTR *pbstrVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultFolder( 
            /* [in] */ int olFolder,
            /* [retval][out] */ IFolder **ppIFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateItem( 
            /* [in] */ int olItem,
            /* [retval][out] */ IDispatch **ppPOutlookItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemFromOid( 
            /* [in] */ long oid,
            /* [retval][out] */ IDispatch **ppPOutlookItem) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HomeCity( 
            /* [retval][out] */ ICity **ppHomeCity) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_HomeCity( 
            /* [in] */ ICity *pHomeCity) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_VisitingCity( 
            /* [retval][out] */ ICity **ppHomeCity) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_VisitingCity( 
            /* [in] */ ICity *pHomeCity) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CurrentCityIndex( 
            /* [retval][out] */ long *pnolCity) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CurrentCityIndex( 
            /* [in] */ long olCity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReceiveFromInfrared( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OutlookCompatible( 
            /* [retval][out] */ VARIANT_BOOL *pfCompat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTimeZoneFromIndex( 
            /* [in] */ int cTimezone,
            /* [retval][out] */ ITimeZone **ppTz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTimeZoneInformationFromIndex( 
            /* [in] */ int cTimezone,
            /* [retval][out] */ TIME_ZONE_INFORMATION *ptzInfo) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
        virtual /* [hidden] */ HRESULT STDMETHODCALLTYPE SysFreeString( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [hidden] */ HRESULT STDMETHODCALLTYPE VariantTimeToSystemTime( 
            /* [in] */ DATE date,
            /* [out] */ SYSTEMTIME *pst) = 0;
        
        virtual /* [hidden] */ HRESULT STDMETHODCALLTYPE SystemTimeToVariantTime( 
            /* [in] */ SYSTEMTIME *pst,
            /* [out] */ DATE *pdate) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IPOutlookAppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOutlookApp * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOutlookApp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOutlookApp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPOutlookApp * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPOutlookApp * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPOutlookApp * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPOutlookApp * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Logon )( 
            IPOutlookApp * This,
            /* [in] */ long hWnd);
        
        HRESULT ( STDMETHODCALLTYPE *Logoff )( 
            IPOutlookApp * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IPOutlookApp * This,
            /* [out][retval] */ BSTR *pbstrVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultFolder )( 
            IPOutlookApp * This,
            /* [in] */ int olFolder,
            /* [retval][out] */ IFolder **ppIFolder);
        
        HRESULT ( STDMETHODCALLTYPE *CreateItem )( 
            IPOutlookApp * This,
            /* [in] */ int olItem,
            /* [retval][out] */ IDispatch **ppPOutlookItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemFromOid )( 
            IPOutlookApp * This,
            /* [in] */ long oid,
            /* [retval][out] */ IDispatch **ppPOutlookItem);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeCity )( 
            IPOutlookApp * This,
            /* [retval][out] */ ICity **ppHomeCity);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeCity )( 
            IPOutlookApp * This,
            /* [in] */ ICity *pHomeCity);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_VisitingCity )( 
            IPOutlookApp * This,
            /* [retval][out] */ ICity **ppHomeCity);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_VisitingCity )( 
            IPOutlookApp * This,
            /* [in] */ ICity *pHomeCity);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCityIndex )( 
            IPOutlookApp * This,
            /* [retval][out] */ long *pnolCity);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentCityIndex )( 
            IPOutlookApp * This,
            /* [in] */ long olCity);
        
        HRESULT ( STDMETHODCALLTYPE *ReceiveFromInfrared )( 
            IPOutlookApp * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutlookCompatible )( 
            IPOutlookApp * This,
            /* [retval][out] */ VARIANT_BOOL *pfCompat);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimeZoneFromIndex )( 
            IPOutlookApp * This,
            /* [in] */ int cTimezone,
            /* [retval][out] */ ITimeZone **ppTz);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimeZoneInformationFromIndex )( 
            IPOutlookApp * This,
            /* [in] */ int cTimezone,
            /* [retval][out] */ TIME_ZONE_INFORMATION *ptzInfo);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IPOutlookApp * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        /* [hidden] */ HRESULT ( STDMETHODCALLTYPE *SysFreeString )( 
            IPOutlookApp * This,
            /* [in] */ BSTR bstr);
        
        /* [hidden] */ HRESULT ( STDMETHODCALLTYPE *VariantTimeToSystemTime )( 
            IPOutlookApp * This,
            /* [in] */ DATE date,
            /* [out] */ SYSTEMTIME *pst);
        
        /* [hidden] */ HRESULT ( STDMETHODCALLTYPE *SystemTimeToVariantTime )( 
            IPOutlookApp * This,
            /* [in] */ SYSTEMTIME *pst,
            /* [out] */ DATE *pdate);
        
        END_INTERFACE
    } IPOutlookAppVtbl;

    interface IPOutlookApp
    {
        CONST_VTBL struct IPOutlookAppVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOutlookApp_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOutlookApp_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOutlookApp_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOutlookApp_GetTypeInfoCount(This,pctinfo) \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPOutlookApp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)  \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPOutlookApp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPOutlookApp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)  \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPOutlookApp_Logon(This,hWnd)   \
    ( (This)->lpVtbl -> Logon(This,hWnd) ) 

#define IPOutlookApp_Logoff(This)   \
    ( (This)->lpVtbl -> Logoff(This) ) 

#define IPOutlookApp_get_Version(This,pbstrVersion) \
    ( (This)->lpVtbl -> get_Version(This,pbstrVersion) ) 

#define IPOutlookApp_GetDefaultFolder(This,olFolder,ppIFolder)  \
    ( (This)->lpVtbl -> GetDefaultFolder(This,olFolder,ppIFolder) ) 

#define IPOutlookApp_CreateItem(This,olItem,ppPOutlookItem) \
    ( (This)->lpVtbl -> CreateItem(This,olItem,ppPOutlookItem) ) 

#define IPOutlookApp_GetItemFromOid(This,oid,ppPOutlookItem)    \
    ( (This)->lpVtbl -> GetItemFromOid(This,oid,ppPOutlookItem) ) 

#define IPOutlookApp_get_HomeCity(This,ppHomeCity)  \
    ( (This)->lpVtbl -> get_HomeCity(This,ppHomeCity) ) 

#define IPOutlookApp_put_HomeCity(This,pHomeCity)   \
    ( (This)->lpVtbl -> put_HomeCity(This,pHomeCity) ) 

#define IPOutlookApp_get_VisitingCity(This,ppHomeCity)  \
    ( (This)->lpVtbl -> get_VisitingCity(This,ppHomeCity) ) 

#define IPOutlookApp_put_VisitingCity(This,pHomeCity)   \
    ( (This)->lpVtbl -> put_VisitingCity(This,pHomeCity) ) 

#define IPOutlookApp_get_CurrentCityIndex(This,pnolCity)    \
    ( (This)->lpVtbl -> get_CurrentCityIndex(This,pnolCity) ) 

#define IPOutlookApp_put_CurrentCityIndex(This,olCity)  \
    ( (This)->lpVtbl -> put_CurrentCityIndex(This,olCity) ) 

#define IPOutlookApp_ReceiveFromInfrared(This)  \
    ( (This)->lpVtbl -> ReceiveFromInfrared(This) ) 

#define IPOutlookApp_get_OutlookCompatible(This,pfCompat)   \
    ( (This)->lpVtbl -> get_OutlookCompatible(This,pfCompat) ) 

#define IPOutlookApp_GetTimeZoneFromIndex(This,cTimezone,ppTz)  \
    ( (This)->lpVtbl -> GetTimeZoneFromIndex(This,cTimezone,ppTz) ) 

#define IPOutlookApp_GetTimeZoneInformationFromIndex(This,cTimezone,ptzInfo)    \
    ( (This)->lpVtbl -> GetTimeZoneInformationFromIndex(This,cTimezone,ptzInfo) ) 

#define IPOutlookApp_get_Application(This,polApp)   \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#define IPOutlookApp_SysFreeString(This,bstr)   \
    ( (This)->lpVtbl -> SysFreeString(This,bstr) ) 

#define IPOutlookApp_VariantTimeToSystemTime(This,date,pst) \
    ( (This)->lpVtbl -> VariantTimeToSystemTime(This,date,pst) ) 

#define IPOutlookApp_SystemTimeToVariantTime(This,pst,pdate)    \
    ( (This)->lpVtbl -> SystemTimeToVariantTime(This,pst,pdate) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IPOutlookApp_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0027 */
/* [local] */ 

DEFINE_GUID(IID_IPOutlookApp2, 0xaf7d0dc7, 0x3d35, 0x424b, 0xaa, 0x60, 0x27, 0xa3, 0x8b, 0x8b, 0x62, 0x9e);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0027_v0_0_s_ifspec;

#ifndef __IPOutlookApp2_INTERFACE_DEFINED__
#define __IPOutlookApp2_INTERFACE_DEFINED__

/* interface IPOutlookApp2 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPOutlookApp2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("af7d0dc7-3d35-424b-aa60-27a38b8b629e")
    IPOutlookApp2 : public IPOutlookApp
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIDsFromNames( 
            /* [in] */ ULONG cPropNames,
            /* [size_is][in] */ const LPCWSTR *rgszPropNames,
            /* [in] */ ULONG ulFlags,
            /* [size_is][retval][out] */ CEPROPID *rgPropIds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemFromOidEx( 
            /* [in] */ ULONG oidPIM,
            /* [in] */ ULONG ulFlags,
            /* [retval][out] */ IItem **ppItem) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IPOutlookApp2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOutlookApp2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOutlookApp2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOutlookApp2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPOutlookApp2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPOutlookApp2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPOutlookApp2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPOutlookApp2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Logon )( 
            IPOutlookApp2 * This,
            /* [in] */ long hWnd);
        
        HRESULT ( STDMETHODCALLTYPE *Logoff )( 
            IPOutlookApp2 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IPOutlookApp2 * This,
            /* [out][retval] */ BSTR *pbstrVersion);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultFolder )( 
            IPOutlookApp2 * This,
            /* [in] */ int olFolder,
            /* [retval][out] */ IFolder **ppIFolder);
        
        HRESULT ( STDMETHODCALLTYPE *CreateItem )( 
            IPOutlookApp2 * This,
            /* [in] */ int olItem,
            /* [retval][out] */ IDispatch **ppPOutlookItem);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemFromOid )( 
            IPOutlookApp2 * This,
            /* [in] */ long oid,
            /* [retval][out] */ IDispatch **ppPOutlookItem);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HomeCity )( 
            IPOutlookApp2 * This,
            /* [retval][out] */ ICity **ppHomeCity);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_HomeCity )( 
            IPOutlookApp2 * This,
            /* [in] */ ICity *pHomeCity);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_VisitingCity )( 
            IPOutlookApp2 * This,
            /* [retval][out] */ ICity **ppHomeCity);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_VisitingCity )( 
            IPOutlookApp2 * This,
            /* [in] */ ICity *pHomeCity);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentCityIndex )( 
            IPOutlookApp2 * This,
            /* [retval][out] */ long *pnolCity);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentCityIndex )( 
            IPOutlookApp2 * This,
            /* [in] */ long olCity);
        
        HRESULT ( STDMETHODCALLTYPE *ReceiveFromInfrared )( 
            IPOutlookApp2 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OutlookCompatible )( 
            IPOutlookApp2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfCompat);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimeZoneFromIndex )( 
            IPOutlookApp2 * This,
            /* [in] */ int cTimezone,
            /* [retval][out] */ ITimeZone **ppTz);
        
        HRESULT ( STDMETHODCALLTYPE *GetTimeZoneInformationFromIndex )( 
            IPOutlookApp2 * This,
            /* [in] */ int cTimezone,
            /* [retval][out] */ TIME_ZONE_INFORMATION *ptzInfo);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IPOutlookApp2 * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        /* [hidden] */ HRESULT ( STDMETHODCALLTYPE *SysFreeString )( 
            IPOutlookApp2 * This,
            /* [in] */ BSTR bstr);
        
        /* [hidden] */ HRESULT ( STDMETHODCALLTYPE *VariantTimeToSystemTime )( 
            IPOutlookApp2 * This,
            /* [in] */ DATE date,
            /* [out] */ SYSTEMTIME *pst);
        
        /* [hidden] */ HRESULT ( STDMETHODCALLTYPE *SystemTimeToVariantTime )( 
            IPOutlookApp2 * This,
            /* [in] */ SYSTEMTIME *pst,
            /* [out] */ DATE *pdate);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsFromNames )( 
            IPOutlookApp2 * This,
            /* [in] */ ULONG cPropNames,
            /* [size_is][in] */ const LPCWSTR *rgszPropNames,
            /* [in] */ ULONG ulFlags,
            /* [size_is][retval][out] */ CEPROPID *rgPropIds);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemFromOidEx )( 
            IPOutlookApp2 * This,
            /* [in] */ ULONG oidPIM,
            /* [in] */ ULONG ulFlags,
            /* [retval][out] */ IItem **ppItem);
        
        END_INTERFACE
    } IPOutlookApp2Vtbl;

    interface IPOutlookApp2
    {
        CONST_VTBL struct IPOutlookApp2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOutlookApp2_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOutlookApp2_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOutlookApp2_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOutlookApp2_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPOutlookApp2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPOutlookApp2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)   \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPOutlookApp2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPOutlookApp2_Logon(This,hWnd)  \
    ( (This)->lpVtbl -> Logon(This,hWnd) ) 

#define IPOutlookApp2_Logoff(This)  \
    ( (This)->lpVtbl -> Logoff(This) ) 

#define IPOutlookApp2_get_Version(This,pbstrVersion)    \
    ( (This)->lpVtbl -> get_Version(This,pbstrVersion) ) 

#define IPOutlookApp2_GetDefaultFolder(This,olFolder,ppIFolder) \
    ( (This)->lpVtbl -> GetDefaultFolder(This,olFolder,ppIFolder) ) 

#define IPOutlookApp2_CreateItem(This,olItem,ppPOutlookItem)    \
    ( (This)->lpVtbl -> CreateItem(This,olItem,ppPOutlookItem) ) 

#define IPOutlookApp2_GetItemFromOid(This,oid,ppPOutlookItem)   \
    ( (This)->lpVtbl -> GetItemFromOid(This,oid,ppPOutlookItem) ) 

#define IPOutlookApp2_get_HomeCity(This,ppHomeCity) \
    ( (This)->lpVtbl -> get_HomeCity(This,ppHomeCity) ) 

#define IPOutlookApp2_put_HomeCity(This,pHomeCity)  \
    ( (This)->lpVtbl -> put_HomeCity(This,pHomeCity) ) 

#define IPOutlookApp2_get_VisitingCity(This,ppHomeCity) \
    ( (This)->lpVtbl -> get_VisitingCity(This,ppHomeCity) ) 

#define IPOutlookApp2_put_VisitingCity(This,pHomeCity)  \
    ( (This)->lpVtbl -> put_VisitingCity(This,pHomeCity) ) 

#define IPOutlookApp2_get_CurrentCityIndex(This,pnolCity)   \
    ( (This)->lpVtbl -> get_CurrentCityIndex(This,pnolCity) ) 

#define IPOutlookApp2_put_CurrentCityIndex(This,olCity) \
    ( (This)->lpVtbl -> put_CurrentCityIndex(This,olCity) ) 

#define IPOutlookApp2_ReceiveFromInfrared(This) \
    ( (This)->lpVtbl -> ReceiveFromInfrared(This) ) 

#define IPOutlookApp2_get_OutlookCompatible(This,pfCompat)  \
    ( (This)->lpVtbl -> get_OutlookCompatible(This,pfCompat) ) 

#define IPOutlookApp2_GetTimeZoneFromIndex(This,cTimezone,ppTz) \
    ( (This)->lpVtbl -> GetTimeZoneFromIndex(This,cTimezone,ppTz) ) 

#define IPOutlookApp2_GetTimeZoneInformationFromIndex(This,cTimezone,ptzInfo)   \
    ( (This)->lpVtbl -> GetTimeZoneInformationFromIndex(This,cTimezone,ptzInfo) ) 

#define IPOutlookApp2_get_Application(This,polApp)  \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#define IPOutlookApp2_SysFreeString(This,bstr)  \
    ( (This)->lpVtbl -> SysFreeString(This,bstr) ) 

#define IPOutlookApp2_VariantTimeToSystemTime(This,date,pst)    \
    ( (This)->lpVtbl -> VariantTimeToSystemTime(This,date,pst) ) 

#define IPOutlookApp2_SystemTimeToVariantTime(This,pst,pdate)   \
    ( (This)->lpVtbl -> SystemTimeToVariantTime(This,pst,pdate) ) 


#define IPOutlookApp2_GetIDsFromNames(This,cPropNames,rgszPropNames,ulFlags,rgPropIds)  \
    ( (This)->lpVtbl -> GetIDsFromNames(This,cPropNames,rgszPropNames,ulFlags,rgPropIds) ) 

#define IPOutlookApp2_GetItemFromOidEx(This,oidPIM,ulFlags,ppItem)  \
    ( (This)->lpVtbl -> GetItemFromOidEx(This,oidPIM,ulFlags,ppItem) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IPOutlookApp2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0028 */
/* [local] */ 

DEFINE_GUID(IID_IPOutlookApp3, 0xa65ccaeb, 0x6558, 0x4656, 0xad, 0x3d, 0xec, 0xcc, 0x00, 0xd0, 0x0f, 0x0d);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0028_v0_0_s_ifspec;

#ifndef __IPOutlookApp3_INTERFACE_DEFINED__
#define __IPOutlookApp3_INTERFACE_DEFINED__

/* interface IPOutlookApp3 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPOutlookApp3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a65ccaeb-6558-4656-ad3d-eccc00d00f0d")
    IPOutlookApp3 : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Logon( 
            /* [in] */ long hWnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Logoff( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DefaultStore( 
            /* [retval][out] */ IStore **ppStore) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DefaultStoreId( 
            /* [out] */ OLITEMID *pStoreId) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Stores( 
            /* [retval][out] */ IPOutlookStoreCollection **ppStores) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStoreFromId( 
            /* [in] */ OLITEMID *pStoreId,
            /* [retval][out] */ IStore **ppStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemFromItemId( 
            /* [in] */ OLITEMID *pItemId,
            /* [retval][out] */ IItem2 **ppItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateStore( 
            /* [in] */ BSTR bstrStoreName,
            /* [in] */ DWORD dwSupportedTypes,
            /* [retval][out] */ IStore **ppStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ OlObjectType olType,
            /* [in] */ DWORD dwEventTypes,
            /* [in] */ DWORD dwEventFlags,
            /* [in] */ IChangeEventSink *pSink,
            /* [out] */ DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdviseCustomEvent( 
            /* [in] */ const GUID *pGuid,
            /* [in] */ DWORD dwEventFlags,
            /* [in] */ ICustomEventSink *pSink,
            /* [out] */ DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendCustomEvent( 
            /* [in] */ const PIMCUSTOMEVENT *pEvent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDsFromNames( 
            /* [in] */ ULONG cPropNames,
            /* [size_is][in] */ const LPCWSTR *rgszPropNames,
            /* [in] */ ULONG ulFlags,
            /* [size_is][retval][out] */ CEPROPID *rgPropIds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlushEvents( void) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IPOutlookApp3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOutlookApp3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOutlookApp3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOutlookApp3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPOutlookApp3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPOutlookApp3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPOutlookApp3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPOutlookApp3 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Logon )( 
            IPOutlookApp3 * This,
            /* [in] */ long hWnd);
        
        HRESULT ( STDMETHODCALLTYPE *Logoff )( 
            IPOutlookApp3 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultStore )( 
            IPOutlookApp3 * This,
            /* [retval][out] */ IStore **ppStore);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultStoreId )( 
            IPOutlookApp3 * This,
            /* [out] */ OLITEMID *pStoreId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Stores )( 
            IPOutlookApp3 * This,
            /* [retval][out] */ IPOutlookStoreCollection **ppStores);
        
        HRESULT ( STDMETHODCALLTYPE *GetStoreFromId )( 
            IPOutlookApp3 * This,
            /* [in] */ OLITEMID *pStoreId,
            /* [retval][out] */ IStore **ppStore);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemFromItemId )( 
            IPOutlookApp3 * This,
            /* [in] */ OLITEMID *pItemId,
            /* [retval][out] */ IItem2 **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *CreateStore )( 
            IPOutlookApp3 * This,
            /* [in] */ BSTR bstrStoreName,
            /* [in] */ DWORD dwSupportedTypes,
            /* [retval][out] */ IStore **ppStore);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            IPOutlookApp3 * This,
            /* [in] */ OlObjectType olType,
            /* [in] */ DWORD dwEventTypes,
            /* [in] */ DWORD dwEventFlags,
            /* [in] */ IChangeEventSink *pSink,
            /* [out] */ DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            IPOutlookApp3 * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *AdviseCustomEvent )( 
            IPOutlookApp3 * This,
            /* [in] */ const GUID *pGuid,
            /* [in] */ DWORD dwEventFlags,
            /* [in] */ ICustomEventSink *pSink,
            /* [out] */ DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *SendCustomEvent )( 
            IPOutlookApp3 * This,
            /* [in] */ const PIMCUSTOMEVENT *pEvent);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsFromNames )( 
            IPOutlookApp3 * This,
            /* [in] */ ULONG cPropNames,
            /* [size_is][in] */ const LPCWSTR *rgszPropNames,
            /* [in] */ ULONG ulFlags,
            /* [size_is][retval][out] */ CEPROPID *rgPropIds);
        
        HRESULT ( STDMETHODCALLTYPE *FlushEvents )( 
            IPOutlookApp3 * This);
        
        END_INTERFACE
    } IPOutlookApp3Vtbl;

    interface IPOutlookApp3
    {
        CONST_VTBL struct IPOutlookApp3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOutlookApp3_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOutlookApp3_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOutlookApp3_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOutlookApp3_GetTypeInfoCount(This,pctinfo)    \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPOutlookApp3_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPOutlookApp3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)   \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPOutlookApp3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPOutlookApp3_Logon(This,hWnd)  \
    ( (This)->lpVtbl -> Logon(This,hWnd) ) 

#define IPOutlookApp3_Logoff(This)  \
    ( (This)->lpVtbl -> Logoff(This) ) 

#define IPOutlookApp3_get_DefaultStore(This,ppStore)    \
    ( (This)->lpVtbl -> get_DefaultStore(This,ppStore) ) 

#define IPOutlookApp3_get_DefaultStoreId(This,pStoreId) \
    ( (This)->lpVtbl -> get_DefaultStoreId(This,pStoreId) ) 

#define IPOutlookApp3_get_Stores(This,ppStores) \
    ( (This)->lpVtbl -> get_Stores(This,ppStores) ) 

#define IPOutlookApp3_GetStoreFromId(This,pStoreId,ppStore) \
    ( (This)->lpVtbl -> GetStoreFromId(This,pStoreId,ppStore) ) 

#define IPOutlookApp3_GetItemFromItemId(This,pItemId,ppItem)    \
    ( (This)->lpVtbl -> GetItemFromItemId(This,pItemId,ppItem) ) 

#define IPOutlookApp3_CreateStore(This,bstrStoreName,dwSupportedTypes,ppStore)  \
    ( (This)->lpVtbl -> CreateStore(This,bstrStoreName,dwSupportedTypes,ppStore) ) 

#define IPOutlookApp3_Advise(This,olType,dwEventTypes,dwEventFlags,pSink,pdwCookie) \
    ( (This)->lpVtbl -> Advise(This,olType,dwEventTypes,dwEventFlags,pSink,pdwCookie) ) 

#define IPOutlookApp3_Unadvise(This,dwCookie)   \
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#define IPOutlookApp3_AdviseCustomEvent(This,pGuid,dwEventFlags,pSink,pdwCookie)    \
    ( (This)->lpVtbl -> AdviseCustomEvent(This,pGuid,dwEventFlags,pSink,pdwCookie) ) 

#define IPOutlookApp3_SendCustomEvent(This,pEvent)  \
    ( (This)->lpVtbl -> SendCustomEvent(This,pEvent) ) 

#define IPOutlookApp3_GetIDsFromNames(This,cPropNames,rgszPropNames,ulFlags,rgPropIds)  \
    ( (This)->lpVtbl -> GetIDsFromNames(This,cPropNames,rgszPropNames,ulFlags,rgPropIds) ) 

#define IPOutlookApp3_FlushEvents(This) \
    ( (This)->lpVtbl -> FlushEvents(This) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IPOutlookApp3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0029 */
/* [local] */ 

DEFINE_GUID(IID_IStore, 0x1447dc2b, 0x55c3, 0x443d, 0x8c, 0x82, 0x30, 0x2e, 0x77, 0x2f, 0x58, 0x23);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0029_v0_0_s_ifspec;

#ifndef __IStore_INTERFACE_DEFINED__
#define __IStore_INTERFACE_DEFINED__

/* interface IStore */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1447DC2B-55C3-443d-8C82-302E772F5823")
    IStore : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ OLITEMID *pStoreId) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DisplayName( 
            /* [retval][out] */ BSTR *pbstrStoreName) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp3 **ppolApp) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetProps( 
            /* [size_is][in] */ const CEPROPID *rgPropID,
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][out] */ CEPROPVAL **prgVals,
            /* [out] */ ULONG *pcbBuffer,
            /* [in] */ HANDLE hHeap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProps( 
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][in] */ CEPROPVAL *rgVals) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDefaultFolder( 
            /* [in] */ OlDefaultFolders olFolder,
            /* [retval][out] */ IFolder2 **ppFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDefaultFolder( 
            /* [in] */ IFolder2 *pFolder) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Folders( 
            /* [retval][out] */ IPOutlookFolderCollection **ppFolders) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderFromId( 
            /* [in] */ OLITEMID *pFolderId,
            /* [retval][out] */ IFolder2 **ppFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateFolder( 
            /* [in] */ BSTR bstrFolderName,
            /* [in] */ OlItemType olItem,
            /* [retval][out] */ IFolder2 **ppFolder) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Items( 
            /* [in] */ OlItemType olItemType,
            /* [retval][out] */ IPOutlookItemCollection2 **ppItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItemFromItemId( 
            /* [in] */ OLITEMID *pItemId,
            /* [retval][out] */ IItem2 **ppItem) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_Recipients( 
            /* [in] */ OlItemType olItemType,
            /* [retval][out] */ IPOutlookRecipientCollection **ppRecipients) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Advise( 
            /* [in] */ OlObjectType olType,
            /* [in] */ DWORD dwEventTypes,
            /* [in] */ DWORD dwEventFlags,
            /* [in] */ IChangeEventSink *pSink,
            /* [out] */ DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unadvise( 
            /* [in] */ DWORD dwCookie) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStore * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IStore * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IStore * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IStore * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IStore * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IStore * This,
            /* [retval][out] */ OLITEMID *pStoreId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            IStore * This,
            /* [retval][out] */ BSTR *pbstrStoreName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IStore * This,
            /* [retval][out] */ IPOutlookApp3 **ppolApp);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetProps )( 
            IStore * This,
            /* [size_is][in] */ const CEPROPID *rgPropID,
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][out] */ CEPROPVAL **prgVals,
            /* [out] */ ULONG *pcbBuffer,
            /* [in] */ HANDLE hHeap);
        
        HRESULT ( STDMETHODCALLTYPE *SetProps )( 
            IStore * This,
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][in] */ CEPROPVAL *rgVals);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultFolder )( 
            IStore * This,
            /* [in] */ OlDefaultFolders olFolder,
            /* [retval][out] */ IFolder2 **ppFolder);
        
        HRESULT ( STDMETHODCALLTYPE *SetDefaultFolder )( 
            IStore * This,
            /* [in] */ IFolder2 *pFolder);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Folders )( 
            IStore * This,
            /* [retval][out] */ IPOutlookFolderCollection **ppFolders);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderFromId )( 
            IStore * This,
            /* [in] */ OLITEMID *pFolderId,
            /* [retval][out] */ IFolder2 **ppFolder);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFolder )( 
            IStore * This,
            /* [in] */ BSTR bstrFolderName,
            /* [in] */ OlItemType olItem,
            /* [retval][out] */ IFolder2 **ppFolder);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Items )( 
            IStore * This,
            /* [in] */ OlItemType olItemType,
            /* [retval][out] */ IPOutlookItemCollection2 **ppItems);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemFromItemId )( 
            IStore * This,
            /* [in] */ OLITEMID *pItemId,
            /* [retval][out] */ IItem2 **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            IStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *get_Recipients )( 
            IStore * This,
            /* [in] */ OlItemType olItemType,
            /* [retval][out] */ IPOutlookRecipientCollection **ppRecipients);
        
        HRESULT ( STDMETHODCALLTYPE *Advise )( 
            IStore * This,
            /* [in] */ OlObjectType olType,
            /* [in] */ DWORD dwEventTypes,
            /* [in] */ DWORD dwEventFlags,
            /* [in] */ IChangeEventSink *pSink,
            /* [out] */ DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *Unadvise )( 
            IStore * This,
            /* [in] */ DWORD dwCookie);
        
        END_INTERFACE
    } IStoreVtbl;

    interface IStore
    {
        CONST_VTBL struct IStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStore_QueryInterface(This,riid,ppvObject)  \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStore_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStore_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IStore_GetTypeInfoCount(This,pctinfo)   \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IStore_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IStore_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)  \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IStore_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IStore_get_Id(This,pStoreId)    \
    ( (This)->lpVtbl -> get_Id(This,pStoreId) ) 

#define IStore_get_DisplayName(This,pbstrStoreName) \
    ( (This)->lpVtbl -> get_DisplayName(This,pbstrStoreName) ) 

#define IStore_get_Application(This,ppolApp)    \
    ( (This)->lpVtbl -> get_Application(This,ppolApp) ) 

#define IStore_GetProps(This,rgPropID,ulFlags,cProps,prgVals,pcbBuffer,hHeap)   \
    ( (This)->lpVtbl -> GetProps(This,rgPropID,ulFlags,cProps,prgVals,pcbBuffer,hHeap) ) 

#define IStore_SetProps(This,ulFlags,cProps,rgVals) \
    ( (This)->lpVtbl -> SetProps(This,ulFlags,cProps,rgVals) ) 

#define IStore_GetDefaultFolder(This,olFolder,ppFolder) \
    ( (This)->lpVtbl -> GetDefaultFolder(This,olFolder,ppFolder) ) 

#define IStore_SetDefaultFolder(This,pFolder)   \
    ( (This)->lpVtbl -> SetDefaultFolder(This,pFolder) ) 

#define IStore_get_Folders(This,ppFolders)  \
    ( (This)->lpVtbl -> get_Folders(This,ppFolders) ) 

#define IStore_GetFolderFromId(This,pFolderId,ppFolder) \
    ( (This)->lpVtbl -> GetFolderFromId(This,pFolderId,ppFolder) ) 

#define IStore_CreateFolder(This,bstrFolderName,olItem,ppFolder)    \
    ( (This)->lpVtbl -> CreateFolder(This,bstrFolderName,olItem,ppFolder) ) 

#define IStore_get_Items(This,olItemType,ppItems)   \
    ( (This)->lpVtbl -> get_Items(This,olItemType,ppItems) ) 

#define IStore_GetItemFromItemId(This,pItemId,ppItem)   \
    ( (This)->lpVtbl -> GetItemFromItemId(This,pItemId,ppItem) ) 

#define IStore_Save(This)   \
    ( (This)->lpVtbl -> Save(This) ) 

#define IStore_Delete(This) \
    ( (This)->lpVtbl -> Delete(This) ) 

#define IStore_get_Recipients(This,olItemType,ppRecipients) \
    ( (This)->lpVtbl -> get_Recipients(This,olItemType,ppRecipients) ) 

#define IStore_Advise(This,olType,dwEventTypes,dwEventFlags,pSink,pdwCookie)    \
    ( (This)->lpVtbl -> Advise(This,olType,dwEventTypes,dwEventFlags,pSink,pdwCookie) ) 

#define IStore_Unadvise(This,dwCookie)  \
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IStore_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0030 */
/* [local] */ 

DEFINE_GUID(IID_IItem, 0xfb8998d0, 0x38f0, 0x4d12, 0xac, 0x56, 0x4e, 0xc8, 0xfc, 0xe9, 0xf3, 0xd5);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0030_v0_0_s_ifspec;

#ifndef __IItem_INTERFACE_DEFINED__
#define __IItem_INTERFACE_DEFINED__

/* interface IItem */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fb8998d0-38f0-4d12-ac56-4ec8fce9f3d5")
    IItem : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetProps( 
            /* [size_is][in] */ const CEPROPID *rgPropID,
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][out] */ CEPROPVAL **prgVals,
            /* [out] */ ULONG *pcbBuffer,
            /* [in] */ HANDLE hHeap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProps( 
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][in] */ CEPROPVAL *rgVals) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Display( 
            /* [in] */ HWND hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Edit( 
            /* [in] */ HWND hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            /* [retval][out] */ IItem **ppolCopy) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Oid( 
            /* [retval][out] */ long *poid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenProperty( 
            /* [in] */ CEPROPID propID,
            /* [in] */ DWORD dwMode,
            /* [retval][out] */ IStream **ppStream) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DefaultItemType( 
            /* [retval][out] */ int *polItem) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp **polApp) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IFolder **ppIFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCategory( 
            /* [in] */ LPCWSTR pszwCategory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCategory( 
            /* [in] */ LPCWSTR pszwCategory) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IItem * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IItem * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetProps )( 
            IItem * This,
            /* [size_is][in] */ const CEPROPID *rgPropID,
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][out] */ CEPROPVAL **prgVals,
            /* [out] */ ULONG *pcbBuffer,
            /* [in] */ HANDLE hHeap);
        
        HRESULT ( STDMETHODCALLTYPE *SetProps )( 
            IItem * This,
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][in] */ CEPROPVAL *rgVals);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            IItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *Display )( 
            IItem * This,
            /* [in] */ HWND hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *Edit )( 
            IItem * This,
            /* [in] */ HWND hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IItem * This,
            /* [retval][out] */ IItem **ppolCopy);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Oid )( 
            IItem * This,
            /* [retval][out] */ long *poid);
        
        HRESULT ( STDMETHODCALLTYPE *OpenProperty )( 
            IItem * This,
            /* [in] */ CEPROPID propID,
            /* [in] */ DWORD dwMode,
            /* [retval][out] */ IStream **ppStream);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultItemType )( 
            IItem * This,
            /* [retval][out] */ int *polItem);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IItem * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IItem * This,
            /* [retval][out] */ IFolder **ppIFolder);
        
        HRESULT ( STDMETHODCALLTYPE *AddCategory )( 
            IItem * This,
            /* [in] */ LPCWSTR pszwCategory);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCategory )( 
            IItem * This,
            /* [in] */ LPCWSTR pszwCategory);
        
        END_INTERFACE
    } IItemVtbl;

    interface IItem
    {
        CONST_VTBL struct IItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IItem_QueryInterface(This,riid,ppvObject)   \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IItem_AddRef(This)  \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IItem_Release(This) \
    ( (This)->lpVtbl -> Release(This) ) 


#define IItem_GetProps(This,rgPropID,ulFlags,cProps,prgVals,pcbBuffer,hHeap)    \
    ( (This)->lpVtbl -> GetProps(This,rgPropID,ulFlags,cProps,prgVals,pcbBuffer,hHeap) ) 

#define IItem_SetProps(This,ulFlags,cProps,rgVals)  \
    ( (This)->lpVtbl -> SetProps(This,ulFlags,cProps,rgVals) ) 

#define IItem_Save(This)    \
    ( (This)->lpVtbl -> Save(This) ) 

#define IItem_Delete(This)  \
    ( (This)->lpVtbl -> Delete(This) ) 

#define IItem_Display(This,hwndParent)  \
    ( (This)->lpVtbl -> Display(This,hwndParent) ) 

#define IItem_Edit(This,hwndParent) \
    ( (This)->lpVtbl -> Edit(This,hwndParent) ) 

#define IItem_Copy(This,ppolCopy)   \
    ( (This)->lpVtbl -> Copy(This,ppolCopy) ) 

#define IItem_get_Oid(This,poid)    \
    ( (This)->lpVtbl -> get_Oid(This,poid) ) 

#define IItem_OpenProperty(This,propID,dwMode,ppStream) \
    ( (This)->lpVtbl -> OpenProperty(This,propID,dwMode,ppStream) ) 

#define IItem_get_DefaultItemType(This,polItem) \
    ( (This)->lpVtbl -> get_DefaultItemType(This,polItem) ) 

#define IItem_get_Application(This,polApp)  \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 

#define IItem_get_Parent(This,ppIFolder)    \
    ( (This)->lpVtbl -> get_Parent(This,ppIFolder) ) 

#define IItem_AddCategory(This,pszwCategory)    \
    ( (This)->lpVtbl -> AddCategory(This,pszwCategory) ) 

#define IItem_RemoveCategory(This,pszwCategory) \
    ( (This)->lpVtbl -> RemoveCategory(This,pszwCategory) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IItem_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0031 */
/* [local] */ 

DEFINE_GUID(IID_IItem2, 0x7268d1d3, 0xd871, 0x4b70, 0xb1, 0xc0, 0x79, 0xae, 0xfc, 0x11, 0xc9, 0xdf);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0031_v0_0_s_ifspec;

#ifndef __IItem2_INTERFACE_DEFINED__
#define __IItem2_INTERFACE_DEFINED__

/* interface IItem2 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IItem2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7268d1d3-d871-4b70-b1c0-79aefc11c9df")
    IItem2 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ OLITEMID *pOlItemId) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetProps( 
            /* [size_is][in] */ const CEPROPID *rgPropID,
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][out] */ CEPROPVAL **prgVals,
            /* [out] */ ULONG *pcbBuffer,
            /* [in] */ HANDLE hHeap) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProps( 
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][in] */ CEPROPVAL *rgVals) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Display( 
            /* [in] */ HWND hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Edit( 
            /* [in] */ HWND hwndParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            /* [retval][out] */ IItem2 **ppCopy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenProperty( 
            /* [in] */ CEPROPID propID,
            /* [in] */ DWORD dwMode,
            /* [retval][out] */ IStream **ppStream) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ItemType( 
            /* [retval][out] */ OlItemType *polItem) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Application( 
            /* [retval][out] */ IPOutlookApp3 **ppolApp) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IFolder2 **ppFolder) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Store( 
            /* [retval][out] */ IStore **ppStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddCategory( 
            /* [in] */ LPCWSTR pszwCategory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveCategory( 
            /* [in] */ LPCWSTR pszwCategory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveToFolder( 
            /* [in] */ IFolder2 *pFolder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyToFolder( 
            /* [in] */ IFolder2 *pFolder,
            /* [out] */ IItem2 **ppItemCopy) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IItem2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IItem2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IItem2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IItem2 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IItem2 * This,
            /* [retval][out] */ OLITEMID *pOlItemId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetProps )( 
            IItem2 * This,
            /* [size_is][in] */ const CEPROPID *rgPropID,
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][out] */ CEPROPVAL **prgVals,
            /* [out] */ ULONG *pcbBuffer,
            /* [in] */ HANDLE hHeap);
        
        HRESULT ( STDMETHODCALLTYPE *SetProps )( 
            IItem2 * This,
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][in] */ CEPROPVAL *rgVals);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            IItem2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            IItem2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Display )( 
            IItem2 * This,
            /* [in] */ HWND hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *Edit )( 
            IItem2 * This,
            /* [in] */ HWND hwndParent);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            IItem2 * This,
            /* [retval][out] */ IItem2 **ppCopy);
        
        HRESULT ( STDMETHODCALLTYPE *OpenProperty )( 
            IItem2 * This,
            /* [in] */ CEPROPID propID,
            /* [in] */ DWORD dwMode,
            /* [retval][out] */ IStream **ppStream);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ItemType )( 
            IItem2 * This,
            /* [retval][out] */ OlItemType *polItem);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IItem2 * This,
            /* [retval][out] */ IPOutlookApp3 **ppolApp);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            IItem2 * This,
            /* [retval][out] */ IFolder2 **ppFolder);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Store )( 
            IItem2 * This,
            /* [retval][out] */ IStore **ppStore);
        
        HRESULT ( STDMETHODCALLTYPE *AddCategory )( 
            IItem2 * This,
            /* [in] */ LPCWSTR pszwCategory);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveCategory )( 
            IItem2 * This,
            /* [in] */ LPCWSTR pszwCategory);
        
        HRESULT ( STDMETHODCALLTYPE *MoveToFolder )( 
            IItem2 * This,
            /* [in] */ IFolder2 *pFolder);
        
        HRESULT ( STDMETHODCALLTYPE *CopyToFolder )( 
            IItem2 * This,
            /* [in] */ IFolder2 *pFolder,
            /* [out] */ IItem2 **ppItemCopy);
        
        END_INTERFACE
    } IItem2Vtbl;

    interface IItem2
    {
        CONST_VTBL struct IItem2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IItem2_QueryInterface(This,riid,ppvObject)  \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IItem2_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IItem2_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IItem2_get_Id(This,pOlItemId)   \
    ( (This)->lpVtbl -> get_Id(This,pOlItemId) ) 

#define IItem2_GetProps(This,rgPropID,ulFlags,cProps,prgVals,pcbBuffer,hHeap)   \
    ( (This)->lpVtbl -> GetProps(This,rgPropID,ulFlags,cProps,prgVals,pcbBuffer,hHeap) ) 

#define IItem2_SetProps(This,ulFlags,cProps,rgVals) \
    ( (This)->lpVtbl -> SetProps(This,ulFlags,cProps,rgVals) ) 

#define IItem2_Save(This)   \
    ( (This)->lpVtbl -> Save(This) ) 

#define IItem2_Delete(This) \
    ( (This)->lpVtbl -> Delete(This) ) 

#define IItem2_Display(This,hwndParent) \
    ( (This)->lpVtbl -> Display(This,hwndParent) ) 

#define IItem2_Edit(This,hwndParent)    \
    ( (This)->lpVtbl -> Edit(This,hwndParent) ) 

#define IItem2_Copy(This,ppCopy)    \
    ( (This)->lpVtbl -> Copy(This,ppCopy) ) 

#define IItem2_OpenProperty(This,propID,dwMode,ppStream)    \
    ( (This)->lpVtbl -> OpenProperty(This,propID,dwMode,ppStream) ) 

#define IItem2_get_ItemType(This,polItem)   \
    ( (This)->lpVtbl -> get_ItemType(This,polItem) ) 

#define IItem2_get_Application(This,ppolApp)    \
    ( (This)->lpVtbl -> get_Application(This,ppolApp) ) 

#define IItem2_get_Parent(This,ppFolder)    \
    ( (This)->lpVtbl -> get_Parent(This,ppFolder) ) 

#define IItem2_get_Store(This,ppStore)  \
    ( (This)->lpVtbl -> get_Store(This,ppStore) ) 

#define IItem2_AddCategory(This,pszwCategory)   \
    ( (This)->lpVtbl -> AddCategory(This,pszwCategory) ) 

#define IItem2_RemoveCategory(This,pszwCategory)    \
    ( (This)->lpVtbl -> RemoveCategory(This,pszwCategory) ) 

#define IItem2_MoveToFolder(This,pFolder)   \
    ( (This)->lpVtbl -> MoveToFolder(This,pFolder) ) 

#define IItem2_CopyToFolder(This,pFolder,ppItemCopy)    \
    ( (This)->lpVtbl -> CopyToFolder(This,pFolder,ppItemCopy) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IItem2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0032 */
/* [local] */ 

DEFINE_GUID(IID_IRecipient3, 0xd4e60ec9, 0xe61a, 0x48a5, 0xad, 0xec, 0x55, 0x4a, 0xbf, 0xc, 0x82, 0x27);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0032_v0_0_s_ifspec;

#ifndef __IRecipient3_INTERFACE_DEFINED__
#define __IRecipient3_INTERFACE_DEFINED__

/* interface IRecipient3 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRecipient3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D4E60EC9-E61A-48a5-ADEC-554ABF0C8227")
    IRecipient3 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Address( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Address( 
            /* [in] */ BSTR bstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Alias( 
            /* [retval][out] */ BSTR *pbstr) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ OlRecipientType *polType) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ OlRecipientType olType) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ OlRecipientStatus *polStatus) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Status( 
            /* [in] */ OlRecipientStatus olStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetItem( 
            /* [retval][out] */ IItem2 **ppItem) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IRecipient3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRecipient3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRecipient3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRecipient3 * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Address )( 
            IRecipient3 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Address )( 
            IRecipient3 * This,
            /* [in] */ BSTR bstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IRecipient3 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Alias )( 
            IRecipient3 * This,
            /* [retval][out] */ BSTR *pbstr);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IRecipient3 * This,
            /* [retval][out] */ OlRecipientType *polType);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            IRecipient3 * This,
            /* [in] */ OlRecipientType olType);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IRecipient3 * This,
            /* [retval][out] */ OlRecipientStatus *polStatus);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Status )( 
            IRecipient3 * This,
            /* [in] */ OlRecipientStatus olStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetItem )( 
            IRecipient3 * This,
            /* [retval][out] */ IItem2 **ppItem);
        
        END_INTERFACE
    } IRecipient3Vtbl;

    interface IRecipient3
    {
        CONST_VTBL struct IRecipient3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRecipient3_QueryInterface(This,riid,ppvObject) \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRecipient3_AddRef(This)    \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRecipient3_Release(This)   \
    ( (This)->lpVtbl -> Release(This) ) 


#define IRecipient3_get_Address(This,pbstr) \
    ( (This)->lpVtbl -> get_Address(This,pbstr) ) 

#define IRecipient3_put_Address(This,bstr)  \
    ( (This)->lpVtbl -> put_Address(This,bstr) ) 

#define IRecipient3_get_Name(This,pbstr)    \
    ( (This)->lpVtbl -> get_Name(This,pbstr) ) 

#define IRecipient3_get_Alias(This,pbstr)   \
    ( (This)->lpVtbl -> get_Alias(This,pbstr) ) 

#define IRecipient3_get_Type(This,polType)  \
    ( (This)->lpVtbl -> get_Type(This,polType) ) 

#define IRecipient3_put_Type(This,olType)   \
    ( (This)->lpVtbl -> put_Type(This,olType) ) 

#define IRecipient3_get_Status(This,polStatus)  \
    ( (This)->lpVtbl -> get_Status(This,polStatus) ) 

#define IRecipient3_put_Status(This,olStatus)   \
    ( (This)->lpVtbl -> put_Status(This,olStatus) ) 

#define IRecipient3_GetItem(This,ppItem)    \
    ( (This)->lpVtbl -> GetItem(This,ppItem) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IRecipient3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0033 */
/* [local] */ 

DEFINE_GUID(IID_IIPOutlookRecipientCollection, 0x49048079, 0x6fe1, 0x4cbc, 0xac, 0x12, 0x90, 0x3e, 0x18, 0xcd, 0xbe, 0x73);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0033_v0_0_s_ifspec;

#ifndef __IPOutlookRecipientCollection_INTERFACE_DEFINED__
#define __IPOutlookRecipientCollection_INTERFACE_DEFINED__

/* interface IPOutlookRecipientCollection */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPOutlookRecipientCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49048079-6FE1-4cbc-AC12-903E18CDBE73")
    IPOutlookRecipientCollection : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ int *pnCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Restrict( 
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IPOutlookRecipientCollection **ppRestrictedRecipients) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Sort( 
            /* [in] */ DWORD cSorts,
            /* [in] */ BSTR *rgbstrProperty,
            /* [in] */ VARIANT_BOOL *rgfDescending) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRecipient( 
            /* [in] */ DWORD index,
            /* [retval][out] */ IRecipient3 **ppEntry) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IPOutlookRecipientCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOutlookRecipientCollection * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOutlookRecipientCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOutlookRecipientCollection * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IPOutlookRecipientCollection * This,
            /* [retval][out] */ int *pnCount);
        
        HRESULT ( STDMETHODCALLTYPE *Restrict )( 
            IPOutlookRecipientCollection * This,
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IPOutlookRecipientCollection **ppRestrictedRecipients);
        
        HRESULT ( STDMETHODCALLTYPE *Sort )( 
            IPOutlookRecipientCollection * This,
            /* [in] */ DWORD cSorts,
            /* [in] */ BSTR *rgbstrProperty,
            /* [in] */ VARIANT_BOOL *rgfDescending);
        
        HRESULT ( STDMETHODCALLTYPE *GetRecipient )( 
            IPOutlookRecipientCollection * This,
            /* [in] */ DWORD index,
            /* [retval][out] */ IRecipient3 **ppEntry);
        
        END_INTERFACE
    } IPOutlookRecipientCollectionVtbl;

    interface IPOutlookRecipientCollection
    {
        CONST_VTBL struct IPOutlookRecipientCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOutlookRecipientCollection_QueryInterface(This,riid,ppvObject)    \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOutlookRecipientCollection_AddRef(This)   \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOutlookRecipientCollection_Release(This)  \
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOutlookRecipientCollection_get_Count(This,pnCount)    \
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IPOutlookRecipientCollection_Restrict(This,bstrRestriction,ppRestrictedRecipients)  \
    ( (This)->lpVtbl -> Restrict(This,bstrRestriction,ppRestrictedRecipients) ) 

#define IPOutlookRecipientCollection_Sort(This,cSorts,rgbstrProperty,rgfDescending) \
    ( (This)->lpVtbl -> Sort(This,cSorts,rgbstrProperty,rgfDescending) ) 

#define IPOutlookRecipientCollection_GetRecipient(This,index,ppEntry)   \
    ( (This)->lpVtbl -> GetRecipient(This,index,ppEntry) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IPOutlookRecipientCollection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0034 */
/* [local] */ 

DEFINE_GUID(IID_IPOlItems2, 0xCB52F880, 0x4CB0, 0x4a23, 0xAA, 0x09, 0x82, 0x32, 0x6C, 0x98, 0x92, 0x9F);


extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0034_v0_0_s_ifspec;

#ifndef __IPOlItems2_INTERFACE_DEFINED__
#define __IPOlItems2_INTERFACE_DEFINED__

/* interface IPOlItems2 */
/* [dual][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPOlItems2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CB52F880-4CB0-4a23-AA09-82326C98929F")
    IPOlItems2 : public IPOlItems
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetProps( 
            /* [in] */ int iIndex,
            /* [size_is][in] */ const CEPROPID *rgPropID,
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][out] */ CEPROPVAL **prgVals,
            /* [out] */ ULONG *pcbBuffer,
            /* [in] */ HANDLE hHeap) = 0;
        
    };
    
#else   /* C style interface */

    typedef struct IPOlItems2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPOlItems2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPOlItems2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPOlItems2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPOlItems2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPOlItems2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPOlItems2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPOlItems2 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            IPOlItems2 * This,
            /* [retval][out] */ IDispatch **ppolItem);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IPOlItems2 * This,
            /* [retval][out] */ int *pnCount);
        
        HRESULT ( STDMETHODCALLTYPE *Find )( 
            IPOlItems2 * This,
            /* [in] */ BSTR bstrRestriction,
            /* [retval][out] */ IDispatch **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *FindNext )( 
            IPOlItems2 * This,
            /* [retval][out] */ IDispatch **ppItem);
        
        HRESULT ( STDMETHODCALLTYPE *Item )( 
            IPOlItems2 * This,
            /* [in] */ int index,
            /* [retval][out] */ IDispatch **polItem);
        
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IPOlItems2 * This,
            /* [in] */ int iIndex);
        
        HRESULT ( STDMETHODCALLTYPE *Restrict )( 
            IPOlItems2 * This,
            /* [in] */ BSTR pwszRestriction,
            /* [retval][out] */ IPOutlookItemCollection **ppolItems);
        
        HRESULT ( STDMETHODCALLTYPE *Sort )( 
            IPOlItems2 * This,
            /* [in] */ BSTR pwszProperty,
            /* [in] */ VARIANT_BOOL fDescending);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeRecurrences )( 
            IPOlItems2 * This,
            /* [retval][out] */ VARIANT_BOOL *pfIncludeRecurrences);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IncludeRecurrences )( 
            IPOlItems2 * This,
            /* [in] */ VARIANT_BOOL fIncludeRecurrences);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IPOlItems2 * This,
            /* [retval][out] */ IUnknown **ppEnumerator);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Application )( 
            IPOlItems2 * This,
            /* [retval][out] */ IPOutlookApp **polApp);
        
        HRESULT ( STDMETHODCALLTYPE *SetColumns )( 
            IPOlItems2 * This,
            /* [in] */ BSTR bstrColumns);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetProps )( 
            IPOlItems2 * This,
            /* [in] */ int iIndex,
            /* [size_is][in] */ const CEPROPID *rgPropID,
            /* [in] */ ULONG ulFlags,
            /* [in] */ WORD cProps,
            /* [size_is][out] */ CEPROPVAL **prgVals,
            /* [out] */ ULONG *pcbBuffer,
            /* [in] */ HANDLE hHeap);
        
        END_INTERFACE
    } IPOlItems2Vtbl;

    interface IPOlItems2
    {
        CONST_VTBL struct IPOlItems2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPOlItems2_QueryInterface(This,riid,ppvObject)  \
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPOlItems2_AddRef(This) \
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPOlItems2_Release(This)    \
    ( (This)->lpVtbl -> Release(This) ) 


#define IPOlItems2_GetTypeInfoCount(This,pctinfo)   \
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPOlItems2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    \
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPOlItems2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)  \
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPOlItems2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    \
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPOlItems2_Add(This,ppolItem)   \
    ( (This)->lpVtbl -> Add(This,ppolItem) ) 

#define IPOlItems2_get_Count(This,pnCount)  \
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IPOlItems2_Find(This,bstrRestriction,ppItem)    \
    ( (This)->lpVtbl -> Find(This,bstrRestriction,ppItem) ) 

#define IPOlItems2_FindNext(This,ppItem)    \
    ( (This)->lpVtbl -> FindNext(This,ppItem) ) 

#define IPOlItems2_Item(This,index,polItem) \
    ( (This)->lpVtbl -> Item(This,index,polItem) ) 

#define IPOlItems2_Remove(This,iIndex)  \
    ( (This)->lpVtbl -> Remove(This,iIndex) ) 

#define IPOlItems2_Restrict(This,pwszRestriction,ppolItems) \
    ( (This)->lpVtbl -> Restrict(This,pwszRestriction,ppolItems) ) 

#define IPOlItems2_Sort(This,pwszProperty,fDescending)  \
    ( (This)->lpVtbl -> Sort(This,pwszProperty,fDescending) ) 

#define IPOlItems2_get_IncludeRecurrences(This,pfIncludeRecurrences)    \
    ( (This)->lpVtbl -> get_IncludeRecurrences(This,pfIncludeRecurrences) ) 

#define IPOlItems2_put_IncludeRecurrences(This,fIncludeRecurrences) \
    ( (This)->lpVtbl -> put_IncludeRecurrences(This,fIncludeRecurrences) ) 

#define IPOlItems2_get__NewEnum(This,ppEnumerator)  \
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumerator) ) 

#define IPOlItems2_get_Application(This,polApp) \
    ( (This)->lpVtbl -> get_Application(This,polApp) ) 


#define IPOlItems2_SetColumns(This,bstrColumns) \
    ( (This)->lpVtbl -> SetColumns(This,bstrColumns) ) 


#define IPOlItems2_GetProps(This,iIndex,rgPropID,ulFlags,cProps,prgVals,pcbBuffer,hHeap)    \
    ( (This)->lpVtbl -> GetProps(This,iIndex,rgPropID,ulFlags,cProps,prgVals,pcbBuffer,hHeap) ) 

#endif /* COBJMACROS */


#endif  /* C style interface */




#endif  /* __IPOlItems2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_pimstore_0000_0035 */
/* [local] */ 

#define CAL_MAXDATE     ((DATE) 401768)     // 12/31/2999
#define CAL_MINDATE     ((DATE) 0)          // 12/30/1899
#define DATE_NONE       ((DATE) 949998)     // 1/1/4501
#define E_CLOCKRUNNING          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 100)
#define E_CITYINROM             MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 101)
#define E_FIELDTOOLARGE         MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 102)
#define E_INVALIDREMINDERTIME   MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 103)
#define E_INVALIDDATES          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 104)
#define E_ALLDAYMEETING         MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 105)
#define E_OVERLAPPINGEXCEPTION  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 106)
#define E_CANTCHANGEDATE        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 107)
#define E_EXCEPTIONSAMEDAY      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 108)
#define E_UNWANTEDITEM          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 109)
#define S_AUTO_CLOSED           MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 150)
DEFINE_GUID(ITI_ContactItemRef, 0x18103fdf, 0xcaec, 0x42eb, 0x90, 0xe7, 0x1c, 0x76, 0xd6, 0xe6, 0xd, 0x24);
DEFINE_GUID(ITI_ContactItemRef2, 0x18103fdf, 0xcaec, 0x42eb, 0x90, 0xe7, 0x1c, 0x76, 0xd6, 0xe6, 0xd, 0x23);
#define ITI_PimItemRef  ITI_ContactItemRef  // back-compat w/ old clients
#define ITI_PimItemRef2  ITI_ContactItemRef2  // back-compat w/ old clients
DEFINE_GUID(CLSID_Exception, 0xb47398d2, 0x3b73, 0x11d2, 0x8f, 0x1b, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
DEFINE_GUID(CLSID_Exceptions, 0xb47398d3, 0x3b73, 0x11d2, 0x8f, 0x1b, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
DEFINE_GUID(CLSID_TimeZone, 0x78b27291, 0x5256, 0x11d2, 0x8f, 0x1b, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
DEFINE_GUID(CLSID_RecurrencePattern, 0x38f47301, 0x270f, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
DEFINE_GUID(CLSID_Recipient, 0x7e136be1, 0x5240, 0x11d2, 0x8f, 0x1b, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
DEFINE_GUID(CLSID_Recipients, 0x76065ae1, 0x2347, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
DEFINE_GUID(CLSID_Items, 0xf06748c1, 0x21a5, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
DEFINE_GUID(CLSID_ContactItem, 0x430539d0, 0x2017, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
DEFINE_GUID(CLSID_TaskItem, 0x5b43f690, 0x202c, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
DEFINE_GUID(CLSID_AppointmentItem, 0x5b43f692, 0x202c, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
DEFINE_GUID(CLSID_CityItem, 0xc83c5e91, 0x3d1b, 0x11d2, 0x8f, 0x1b, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
DEFINE_GUID(CLSID_Folder, 0x5058f21, 0x20be, 0x11d2, 0x8f, 0x18, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
DEFINE_GUID(CLSID_Application, 0x05058F23, 0x20BE, 0x11d2, 0x8F, 0x18, 0x00, 0x00, 0xF8, 0x7A, 0x43, 0x35);
DEFINE_GUID(LIBID_PocketOutlook, 0x4e130e40, 0x7dbe, 0x11d2, 0x8f, 0x23, 0x0, 0x0, 0xf8, 0x7a, 0x43, 0x35);
typedef /* [v1_enum] */ 
enum MEPIVOTTYPE
    {   MEPIVOTTYPE_INVALID = 0,
    MEPIVOTTYPE_CONTACTMAIN_ALL = 0x100,
    MEPIVOTTYPE_CONTACTMAIN_STORE   = 0x101,
    MEPIVOTTYPE_CONTACTMAIN_SIM = 0x102,
    MEPIVOTTYPE_CONTACTSUMMARY_GENERALINFO  = 0x200,
    MEPIVOTTYPE_CONTACTSUMMARY_COMMUNICATION    = 0x201,
    MEPIVOTTYPE_CONTACTSUMMARY_CALLHISTORY  = 0x202,
    MEPIVOTTYPE_CONTACTSUMMARY_NOTES    = 0x203,
    MEPIVOTTYPE_CONTACTSUMMARY_CUSTOM   = 0x204,
    MEPIVOTTYPE_CALENDARSUMMARY_GENERALINFO = 0x300,
    MEPIVOTTYPE_CALENDARSUMMARY_ATTENDEES   = 0x301
    }   MEPIVOTTYPE;

typedef struct PIMMENUCONTEXTINFO
    {
    DWORD cbSize;
    OLITEMID storeId;
    OLITEMID itemId;
    CEPROPID propId;
    MEPIVOTTYPE pivotType;
    }   PIMMENUCONTEXTINFO;

typedef /* [v1_enum] */ 
enum CCF
    {   CCF_DEFAULT = 0,
    CCF_HIDENEW = 0x1,
    CCF_CHOOSECONTACTONLY   = 0x2,
    CCF_CHOOSEPROPERTYONLY  = 0x4,
    CCF_RETURNCONTACTNAME   = 0x8,
    CCF_RETURNPROPERTYVALUE = 0x10,
    CCF_FILTERREQUIREDPROPERTIES    = 0x20,
    CCF_NOUIONSINGLEORNOMATCH   = 0x40,
    CCF_NOUI    = 0x80,
    CCF_ENABLEGAL   = 0x100,
    CCF_ALLOWNEWCONTACTSELECTION    = 0x200
    }   CCF;

typedef /* [public] */ struct __MIDL___MIDL_itf_pimstore_0000_0035_0001
    {
    UINT cbSize;
    HWND hwndOwner;
    DWORD dwFlags;
    LPCWSTR lpstrTitle;
    LPCWSTR lpstrChoosePropertyText;
    LPCWSTR lpstrRestrictContacts;
    LPCWSTR lpstrIncrementalFilter;
    UINT cRequiredProperties;
    const CEPROPID *rgpropidRequiredProperties;
    CEOID oidContactID;
    BSTR bstrContactName;
    CEPROPID propidSelected;
    BSTR bstrPropertyValueSelected;
    }   CHOOSECONTACT;

typedef struct __MIDL___MIDL_itf_pimstore_0000_0035_0001 *LPCHOOSECONTACT;

typedef /* [public] */ struct __MIDL___MIDL_itf_pimstore_0000_0035_0002
    {
    UINT cbSize;
    HWND hwndOwner;
    DWORD dwFlags;
    LPCWSTR lpstrTitle;
    LPCWSTR lpstrChoosePropertyText;
    LPCWSTR lpstrRestrictContacts;
    LPCWSTR lpstrIncrementalFilter;
    UINT cRequiredProperties;
    const CEPROPID *rgpropidRequiredProperties;
    OLITEMID olItemId;
    BSTR bstrContactName;
    CEPROPID propidSelected;
    BSTR bstrPropertyValueSelected;
    }   CHOOSECONTACTEX;

typedef struct __MIDL___MIDL_itf_pimstore_0000_0035_0002 *LPCHOOSECONTACTEX;



extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pimstore_0000_0035_v0_0_s_ifspec;

#ifndef __IPimAPIs_INTERFACE_DEFINED__
#define __IPimAPIs_INTERFACE_DEFINED__

/* interface IPimAPIs */
/* [local][uuid] */ 

HRESULT __stdcall ChooseContact( 
    /* [in] */ LPCHOOSECONTACT lpcc);

HRESULT __stdcall ChooseContactEx( 
    /* [in] */ LPCHOOSECONTACTEX lpccex);

HRESULT __stdcall FindMatchingContact( 
    /* [in] */ IPOutlookApp *pPOOM,
    /* [in] */ LPCWSTR pszFind,
    /* [in] */ DWORD dwFlags,
    /* [out] */ IItem **ppContact,
    /* [out] */ CEPROPID *ppropid);

HRESULT __stdcall FindMatchingContactEx( 
    /* [in] */ IPOutlookApp3 *pPOOM,
    /* [in] */ LPCWSTR pszFind,
    /* [in] */ DWORD dwFlags,
    /* [in] */ IStore *pStore,
    /* [out] */ IItem2 **ppContact,
    /* [out] */ CEPROPID *ppropid);

HRESULT __stdcall GetItemIndexFromOid( 
    /* [in] */ IPOutlookItemCollection *pItems,
    /* [in] */ CEOID oidPIM,
    /* [out] */ DWORD *pdwIndex);

HRESULT __stdcall OLITEMIDToString( 
    /* [in] */ OLITEMID *pItemId,
    /* [out] */ BSTR *pbstrItemId);

HRESULT __stdcall StringToOLITEMID( 
    /* [in] */ BSTR bstrItemId,
    /* [out] */ OLITEMID *pItemId);

HRESULT __stdcall OlItemTypeFromOLITEMID( 
    /* [in] */ OLITEMID *pItemId,
    /* [out] */ OlItemType *polItemType);



extern RPC_IF_HANDLE IPimAPIs_v0_0_c_ifspec;
extern RPC_IF_HANDLE IPimAPIs_v0_0_s_ifspec;
#endif /* __IPimAPIs_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_pimstore_0000_0036 */
/* [local] */ 

#define FMCF_FINDPHONE      0x00000001
#define FMCF_FINDEMAIL      0x00000002
#define FMCF_FINDFILEAS     0x00000004
#define PIM_PROP_TAG(ulPropType,ulPropID)   ((((ULONG)(ulPropID))<<16)|((ULONG)(ulPropType)))
typedef /* [v1_enum] */ 
enum CEVT_PIM
    {   CEVT_PIM_STREAM = 100,
    CEVT_PIM_AUTO_I4    = 102
    }   CEVT_PIM;

typedef /* [v1_enum] */ 
enum PIM_GETIDSFROMNAMES
    {   PIM_CREATE  = 0x10000,
    PIM_INDEXED = 0x200000,
    PIM_DONTREPLICATE   = 0x400000
    }   PIM_GETIDSFROMNAMES;

#define PIMPR_INVALID_ID    ( ( 0xffff0000 | CEVT_I2 )  )

#define PIMPR_ALL_PHONE ( ( 0x18000000 | CEVT_LPWSTR )  )

#define PIMPR_ALL_EMAIL ( ( 0x18010000 | CEVT_LPWSTR )  )

#define PIMPR_ALL_TEXT_MESSAGING    ( ( 0x18020000 | CEVT_LPWSTR )  )

#define PIMPR_ALL_INSTANT_MESSAGING ( ( 0x18030000 | CEVT_LPWSTR )  )

#define PIMPR_ALL_COMMUNICATION_METHODS ( ( 0x18040000 | CEVT_LPWSTR )  )

#define PIMPR_ALL_VOICE ( ( 0x18050000 | CEVT_LPWSTR )  )

#define PIMPR_ALL_PHONE_AND_SIM ( ( 0x18060000 | CEVT_LPWSTR )  )

#define PIMPR_OID   ( ( 0x10000000 | CEVT_PIM_AUTO_I4 )  )

#define PIMPR_FOLDERNOTIFICATIONS   ( ( 0x10010000 | CEVT_UI4 )  )

#define PIMPR_ITEMID    ( ( 0x10020000 | CEVT_BLOB )  )

#define PIMPR_FOLDER_CATEGORIES ( ( 0x101a0000 | CEVT_LPWSTR )  )

#define PIMPR_SOURCE_ID ( ( 0x1b0000 | CEVT_UI4 )  )

#define PIMPR_RECENT    ( ( 0x101c0000 | CEVT_BOOL )  )

#define PIMPR_CATEGORIES    ( ( 0x101d0000 | CEVT_LPWSTR )  )

#define PIMPR_BODY_BINARY   ( ( 0x1e0000 | CEVT_PIM_STREAM )  )

#define PIMPR_BODY_TEXT ( ( 0x101f0000 | CEVT_LPWSTR )  )

#define PIMPR_DO_NOT_SYNC   ( ( 0x10100000 | CEVT_UI4 )  )

#define PIMPR_SUBJECT   ( ( 0x200000 | CEVT_LPWSTR )  )

#define PIMPR_SENSITIVITY   ( ( 0x210000 | CEVT_UI4 )  )

#define PIMPR_IS_RECURRING  ( ( 0x220000 | CEVT_BOOL )  )

#define PIMPR_REMINDER_SET  ( ( 0x280000 | CEVT_BOOL )  )

#define PIMPR_REMINDER_SOUND_FILE   ( ( 0x290000 | CEVT_LPWSTR )  )

#define PIMPR_REMINDER_OPTIONS  ( ( 0x2a0000 | CEVT_UI4 )  )

#define PIMPR_RECURRING_TYPE    ( ( 0x10300000 | CEVT_UI4 )  )

#define PIMPR_RECURRING_PATTERNSTARTDATE    ( ( 0x10310000 | CEVT_FILETIME )  )

#define PIMPR_RECURRING_PATTERNENDDATE  ( ( 0x10320000 | CEVT_FILETIME )  )

#define PIMPR_RECURRING_STARTTIME   ( ( 0x10330000 | CEVT_FILETIME )  )

#define PIMPR_RECURRING_ENDTIME ( ( 0x10340000 | CEVT_FILETIME )  )

#define PIMPR_RECURRING_NOEND   ( ( 0x10350000 | CEVT_BOOL )  )

#define PIMPR_RECURRING_OCCURRENCES ( ( 0x10360000 | CEVT_UI4 )  )

#define PIMPR_RECURRING_INTERVAL    ( ( 0x10370000 | CEVT_UI4 )  )

#define PIMPR_RECURRING_DAYOFWEEKMASK   ( ( 0x10380000 | CEVT_UI4 )  )

#define PIMPR_RECURRING_DAYOFMONTH  ( ( 0x10390000 | CEVT_UI4 )  )

#define PIMPR_RECURRING_INSTANCE    ( ( 0x103a0000 | CEVT_UI4 )  )

#define PIMPR_RECURRING_DURATION    ( ( 0x103b0000 | CEVT_UI4 )  )

#define PIMPR_RECURRING_MONTHOFYEAR ( ( 0x103c0000 | CEVT_UI4 )  )

#define PIMPR_RECURRING_ENDTYPE ( ( 0x103d0000 | CEVT_UI4 )  )

#define PIMPR_DURATION  ( ( 0x10400000 | CEVT_UI4 )  )

#define PIMPR_LOCATION  ( ( 0x410000 | CEVT_LPWSTR )  )

#define PIMPR_START ( ( 0x10420000 | CEVT_FILETIME )  )

#define PIMPR_END   ( ( 0x10430000 | CEVT_FILETIME )  )

#define PIMPR_REPLY_TIME    ( ( 0x10440000 | CEVT_FILETIME )  )

#define PIMPR_RESPONSE_TYPE ( ( 0x10450000 | CEVT_UI4 )  )

#define PIMPR_ALL_DAY_EVENT ( ( 0x440000 | CEVT_BOOL )  )

#define PIMPR_BUSY_STATUS   ( ( 0x450000 | CEVT_UI4 )  )

#define PIMPR_REMINDER_MINUTES_BEFORE_START ( ( 0x460000 | CEVT_UI4 )  )

#define PIMPR_GLOBAL_OBJECT_ID  ( ( 0x470000 | CEVT_BLOB )  )

#define PIMPR_TIMEZONE  ( ( 0x480000 | CEVT_BLOB )  )

#define PIMPR_MEETING_STATUS    ( ( 0x500000 | CEVT_UI4 )  )

#define PIMPR_MEETING_ORGANIZER_NAME    ( ( 0x510000 | CEVT_LPWSTR )  )

#define PIMPR_MEETING_OWNER_CRITICAL_CHANGE ( ( 0x520000 | CEVT_FILETIME )  )

#define PIMPR_ATTENDEES_CRITICAL_CHANGE ( ( 0x530000 | CEVT_FILETIME )  )

#define PIMPR_NO_RESPONSE_REQUESTED ( ( 0x540000 | CEVT_BOOL )  )

#define PIMPR_MEETING_ORGANIZER_EMAIL   ( ( 0x550000 | CEVT_LPWSTR )  )

#define PIMPR_NO_NEW_TIME_PROPOSALS ( ( 0x560000 | CEVT_BOOL )  )

#define PIMPR_IMPORTANCE    ( ( 0x600000 | CEVT_UI4 )  )

#define PIMPR_TEAM_TASK ( ( 0x610000 | CEVT_BOOL )  )

#define PIMPR_START_DATE    ( ( 0x620000 | CEVT_FILETIME )  )

#define PIMPR_DUE_DATE  ( ( 0x630000 | CEVT_FILETIME )  )

#define PIMPR_DATE_COMPLETED    ( ( 0x640000 | CEVT_FILETIME )  )

#define PIMPR_COMPLETE  ( ( 0x10650000 | CEVT_BOOL )  )

#define PIMPR_REMINDER_TIME ( ( 0x10660000 | CEVT_FILETIME )  )

#define PIMPR_RECURRING_REGENERATING    ( ( 0x10670000 | CEVT_BOOL )  )

#define PIMPR_FILEAS    ( ( 0x800000 | CEVT_LPWSTR )  )

#define PIMPR_TITLE ( ( 0x810000 | CEVT_LPWSTR )  )

#define PIMPR_FIRST_NAME    ( ( 0x820000 | CEVT_LPWSTR )  )

#define PIMPR_MIDDLE_NAME   ( ( 0x830000 | CEVT_LPWSTR )  )

#define PIMPR_LAST_NAME ( ( 0x840000 | CEVT_LPWSTR )  )

#define PIMPR_SUFFIX    ( ( 0x850000 | CEVT_LPWSTR )  )

#define PIMPR_NICKNAME  ( ( 0x860000 | CEVT_LPWSTR )  )

#define PIMPR_YOMI_FIRSTNAME    ( ( 0x870000 | CEVT_LPWSTR )  )

#define PIMPR_YOMI_LASTNAME ( ( 0x880000 | CEVT_LPWSTR )  )

#define PIMPR_YOMI_COMPANY  ( ( 0x890000 | CEVT_LPWSTR )  )

#define PIMPR_COMPANY_NAME  ( ( 0x8a0000 | CEVT_LPWSTR )  )

#define PIMPR_DEPARTMENT    ( ( 0x8b0000 | CEVT_LPWSTR )  )

#define PIMPR_JOB_TITLE ( ( 0x8c0000 | CEVT_LPWSTR )  )

#define PIMPR_MANAGER   ( ( 0x8d0000 | CEVT_LPWSTR )  )

#define PIMPR_OFFICE_LOCATION   ( ( 0x8e0000 | CEVT_LPWSTR )  )

#define PIMPR_ASSISTANT_NAME    ( ( 0x8f0000 | CEVT_LPWSTR )  )

#define PIMPR_EMAIL1_ADDRESS    ( ( 0x900000 | CEVT_LPWSTR )  )

#define PIMPR_EMAIL2_ADDRESS    ( ( 0x910000 | CEVT_LPWSTR )  )

#define PIMPR_EMAIL3_ADDRESS    ( ( 0x920000 | CEVT_LPWSTR )  )

#define PIMPR_IM1_ADDRESS   ( ( 0x930000 | CEVT_LPWSTR )  )

#define PIMPR_IM2_ADDRESS   ( ( 0x940000 | CEVT_LPWSTR )  )

#define PIMPR_IM3_ADDRESS   ( ( 0x950000 | CEVT_LPWSTR )  )

#define PIMPR_MOBILE_TELEPHONE_NUMBER   ( ( 0x960000 | CEVT_LPWSTR )  )

#define PIMPR_BUSINESS_TELEPHONE_NUMBER ( ( 0x970000 | CEVT_LPWSTR )  )

#define PIMPR_BUSINESS2_TELEPHONE_NUMBER    ( ( 0x980000 | CEVT_LPWSTR )  )

#define PIMPR_HOME_TELEPHONE_NUMBER ( ( 0x990000 | CEVT_LPWSTR )  )

#define PIMPR_HOME2_TELEPHONE_NUMBER    ( ( 0x9a0000 | CEVT_LPWSTR )  )

#define PIMPR_BUSINESS_FAX_NUMBER   ( ( 0x9b0000 | CEVT_LPWSTR )  )

#define PIMPR_HOME_FAX_NUMBER   ( ( 0x9c0000 | CEVT_LPWSTR )  )

#define PIMPR_PAGER_NUMBER  ( ( 0x9d0000 | CEVT_LPWSTR )  )

#define PIMPR_CAR_TELEPHONE_NUMBER  ( ( 0x9e0000 | CEVT_LPWSTR )  )

#define PIMPR_RADIO_TELEPHONE_NUMBER    ( ( 0x9f0000 | CEVT_LPWSTR )  )

#define PIMPR_COMPANY_TELEPHONE_NUMBER  ( ( 0xa00000 | CEVT_LPWSTR )  )

#define PIMPR_ASSISTANT_TELEPHONE_NUMBER    ( ( 0xa10000 | CEVT_LPWSTR )  )

#define PIMPR_SMS   ( ( 0x10a20000 | CEVT_LPWSTR )  )

#define PIMPR_MMS   ( ( 0x10a30000 | CEVT_LPWSTR )  )

#define PIMPR_DISPLAY_NAME  ( ( 0x10a40000 | CEVT_LPWSTR )  )

#define PIMPR_YOMI_DISPLAYNAME  ( ( 0x10a50000 | CEVT_LPWSTR )  )

#define PIMPR_SPOUSE    ( ( 0xa50000 | CEVT_LPWSTR )  )

#define PIMPR_CHILDREN  ( ( 0xa60000 | CEVT_LPWSTR )  )

#define PIMPR_WEB_PAGE  ( ( 0xa70000 | CEVT_LPWSTR )  )

#define PIMPR_RINGTONE  ( ( 0xa80000 | CEVT_LPWSTR )  )

#define PIMPR_CUSTOMERID    ( ( 0xa90000 | CEVT_LPWSTR )  )

#define PIMPR_GOVERNMENTID  ( ( 0xaa0000 | CEVT_LPWSTR )  )

#define PIMPR_ACCOUNT_NAME  ( ( 0xab0000 | CEVT_LPWSTR )  )

#define PIMPR_BUSINESS_ADDRESS  ( ( 0x10c00000 | CEVT_LPWSTR )  )

#define PIMPR_BUSINESS_ADDRESS_STREET   ( ( 0xc10000 | CEVT_LPWSTR )  )

#define PIMPR_BUSINESS_ADDRESS_CITY ( ( 0xc20000 | CEVT_LPWSTR )  )

#define PIMPR_BUSINESS_ADDRESS_STATE    ( ( 0xc30000 | CEVT_LPWSTR )  )

#define PIMPR_BUSINESS_ADDRESS_POSTAL_CODE  ( ( 0xc40000 | CEVT_LPWSTR )  )

#define PIMPR_BUSINESS_ADDRESS_COUNTRY  ( ( 0xc50000 | CEVT_LPWSTR )  )

#define PIMPR_HOME_ADDRESS  ( ( 0x10d00000 | CEVT_LPWSTR )  )

#define PIMPR_HOME_ADDRESS_STREET   ( ( 0xd10000 | CEVT_LPWSTR )  )

#define PIMPR_HOME_ADDRESS_CITY ( ( 0xd20000 | CEVT_LPWSTR )  )

#define PIMPR_HOME_ADDRESS_STATE    ( ( 0xd30000 | CEVT_LPWSTR )  )

#define PIMPR_HOME_ADDRESS_POSTAL_CODE  ( ( 0xd40000 | CEVT_LPWSTR )  )

#define PIMPR_HOME_ADDRESS_COUNTRY  ( ( 0xd50000 | CEVT_LPWSTR )  )

#define PIMPR_OTHER_ADDRESS ( ( 0x10e00000 | CEVT_LPWSTR )  )

#define PIMPR_OTHER_ADDRESS_STREET  ( ( 0xe10000 | CEVT_LPWSTR )  )

#define PIMPR_OTHER_ADDRESS_CITY    ( ( 0xe20000 | CEVT_LPWSTR )  )

#define PIMPR_OTHER_ADDRESS_STATE   ( ( 0xe30000 | CEVT_LPWSTR )  )

#define PIMPR_OTHER_ADDRESS_POSTAL_CODE ( ( 0xe40000 | CEVT_LPWSTR )  )

#define PIMPR_OTHER_ADDRESS_COUNTRY ( ( 0xe50000 | CEVT_LPWSTR )  )

#define PIMPR_BIRTHDAY  ( ( 0xf00000 | CEVT_FILETIME )  )

#define PIMPR_ANNIVERSARY   ( ( 0xf10000 | CEVT_FILETIME )  )

#define PIMPR_SMARTPROP ( ( 0xf80000 | CEVT_UI4 )  )

#define PIMPR_SMARTPROP_VALUE   ( ( 0xf90000 | CEVT_LPWSTR )  )

#define PIMPR_PICTURE   ( ( 0xff0000 | CEVT_PIM_STREAM )  )

#define PIMPR_YOMI_FILEAS   ( ( 0x1010000 | CEVT_LPWSTR )  )

#define PIMPR_CONTACT_TYPE  ( ( 0x1020000 | CEVT_UI4 )  )

#define PIMPR_HAS_PICTURE   ( ( 0xfe0000 | CEVT_BOOL )  )

#define PIMPR_ACCOUNT_ICON  ( ( 0x82600000 | CEVT_LPWSTR )  )

#define PIMPR_SIM_PHONE ( ( 0x30000 | CEVT_LPWSTR )  )

#define PIMPR_NAME  ( ( 0x30010000 | CEVT_LPWSTR )  )

#define PIMPR_DEFAULT_ITEM_TYPE ( ( 0x11030000 | CEVT_UI4 )  )

#define PIMPR_FOLDER_ISNOTEDITABLEFROMUI    ( ( 0x11040000 | CEVT_BOOL )  )

#define PIMPR_FOLDER_ISHIDDEN   ( ( 0x11050000 | CEVT_BOOL )  )

#define PIMPR_MESSAGE_CLASS ( ( 0x4b0000 | CEVT_LPWSTR )  )

#define PIMPR_BODY_CONTENT_TYPE ( ( 0x20110000 | CEVT_LPWSTR )  )

#define PIMPR_BODY_CONTENT_DATA ( ( 0x20120000 | CEVT_PIM_STREAM )  )

#define PIMPR_LAST_MODIFIED_DATE    ( ( 0x20130000 | CEVT_FILETIME )  )

#define PIMPR_EMAIL_ADDRESS ( ( 0x30030000 | CEVT_LPWSTR )  )

#define PIMPR_STORE_SYNC_ENGINE_GUID    ( ( 0x34160000 | CEVT_BLOB )  )

#define PIMPR_STORE_SYNC_PARTNER_GUID   ( ( 0x34170000 | CEVT_BLOB )  )

#define PIMPR_STORE_SUPPORTEDTYPES  ( ( 0x37150000 | CEVT_UI4 )  )

#define PIMPR_ALL_EMAIL_ADDRESSES   ( ( 0x825d0000 | CEVT_LPWSTR )  )

typedef /* [v1_enum] */ 
enum PIMPR_CONTACTTYPE
    {   PIMPR_CONTACTTYPE_DEVICE    = 0,
    PIMPR_CONTACTTYPE_SIM   = 1
    }   PIMPR_CONTACTTYPE;

#define PIMSRC_REGHKEY HKEY_LOCAL_MACHINE
#define PIMSRC_REGPATH_COLORS           L"Colors"
#define PIMSRC_REGPATH_ROOT             L"System\\PIMSources"
#define PIMSRC_REGVALUE_CLSID           L"CLSID"
#define PIMSRC_REGVALUE_CUSTOMIZATIONS  L"Customizations"
#define PIMSRC_REGVALUE_TYPE            L"Type"
#define PIMSRC_REGVALUE_DISPLAYNAME     L"DisplayName"
#define PIMSRC_REGVALUE_ICON            L"Icon"
typedef /* [v1_enum] */ 
enum PIMSRC_TYPE
    {   PIMSRC_TYPE_CONTACTS    = 0x1,
    PIMSRC_TYPE_APPOINTMENTS    = 0x2,
    PIMSRC_TYPE_TASKS   = 0x4,
    PIMSRC_TYPE_VALIDMASK   = ( ( PIMSRC_TYPE_CONTACTS | PIMSRC_TYPE_APPOINTMENTS )  | PIMSRC_TYPE_TASKS ) 
    }   PIMSRC_TYPE;

typedef /* [v1_enum] */ 
enum PIMSRC_CUSTOM
    {   PIMSRC_CUSTOM_CONTACTS_SUMMARY_CARD = 0x1,
    PIMSRC_CUSTOM_CONTACTS_PAINT_LIST_ICON  = 0x4,
    PIMSRC_CUSTOM_CONTACTS_NEW  = 0x8,
    PIMSRC_CUSTOM_APPOINTMENTS_SUMMARY_CARD = 0x100,
    PIMSRC_CUSTOM_APPOINTMENTS_NEW  = 0x200,
    PIMSRC_CUSTOM_APPOINTMENTS_COLORS   = 0x800,
    PIMSRC_CUSTOM_TASKS_SUMMARY_CARD    = 0x10000,
    PIMSRC_CUSTOM_TASKS_NEW = 0x20000,
    PIMSRC_CUSTOM_VALIDMASK = ( ( ( ( ( ( ( PIMSRC_CUSTOM_CONTACTS_SUMMARY_CARD | PIMSRC_CUSTOM_CONTACTS_PAINT_LIST_ICON )  | PIMSRC_CUSTOM_CONTACTS_NEW )  | PIMSRC_CUSTOM_APPOINTMENTS_SUMMARY_CARD )  | PIMSRC_CUSTOM_APPOINTMENTS_NEW )  | PIMSRC_CUSTOM_APPOINTMENTS_COLORS )  | PIMSRC_CUSTOM_TASKS_SUMMARY_CARD )  | PIMSRC_CUSTOM_TASKS_NEW ) 
    }   PIMSRC_CUSTOM;

typedef /* [v1_enum] */ 
enum PIMSRC_COLOR
    {   PIMSRC_COLOR_APPOINTMENTS_BACKGROUND    = 1
    }   PIMSRC_COLOR;

#define PIMSRC_SCDS_SELECTED    0x00000001
#define PIMSRC_SCDS_FOCUS       0x00000010
typedef struct _SRCCUSTOMDRAW
    {
    HDC hdc;
    RECT rc;
    DWORD grfItemState;
    }   SRCCUSTOMDRAW;


#ifndef __PocketOutlook_LIBRARY_DEFINED__
#define __PocketOutlook_LIBRARY_DEFINED__

/* library PocketOutlook */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_PocketOutlook;

EXTERN_C const CLSID CLSID_Exception;

#ifdef __cplusplus

class DECLSPEC_UUID("b47398d2-3b73-11d2-8f1b-0000f87a4335")
Exception;
#endif

EXTERN_C const CLSID CLSID_TimeZone;

#ifdef __cplusplus

class DECLSPEC_UUID("78b27291-5256-11d2-8f1b-0000f87a4335")
TimeZone;
#endif

EXTERN_C const CLSID CLSID_RecurrencePattern;

#ifdef __cplusplus

class DECLSPEC_UUID("38f47301-270f-11d2-8f18-0000f87a4335")
RecurrencePattern;
#endif

EXTERN_C const CLSID CLSID_Recipient;

#ifdef __cplusplus

class DECLSPEC_UUID("7e136be1-5240-11d2-8f1b-0000f87a4335")
Recipient;
#endif

EXTERN_C const CLSID CLSID_Recipients;

#ifdef __cplusplus

class DECLSPEC_UUID("76065ae1-2347-11d2-8f18-0000f87a4335")
Recipients;
#endif

EXTERN_C const CLSID CLSID_Items;

#ifdef __cplusplus

class DECLSPEC_UUID("f06748c1-21a5-11d2-8f18-0000f87a4335")
Items;
#endif

EXTERN_C const CLSID CLSID_ContactItem;

#ifdef __cplusplus

class DECLSPEC_UUID("430539d0-2017-11d2-8f18-0000f87a4335")
ContactItem;
#endif

EXTERN_C const CLSID CLSID_TaskItem;

#ifdef __cplusplus

class DECLSPEC_UUID("5b43f690-202c-11d2-8f18-0000f87a4335")
TaskItem;
#endif

EXTERN_C const CLSID CLSID_AppointmentItem;

#ifdef __cplusplus

class DECLSPEC_UUID("5b43f692-202c-11d2-8f18-0000f87a4335")
AppointmentItem;
#endif

EXTERN_C const CLSID CLSID_CityItem;

#ifdef __cplusplus

class DECLSPEC_UUID("c83c5e91-3d1b-11d2-8f1b-0000f87a4335")
CityItem;
#endif

EXTERN_C const CLSID CLSID_Application;

#ifdef __cplusplus

class DECLSPEC_UUID("05058f23-20be-11d2-8f18-0000f87a4335")
Application;
#endif
#endif /* __PocketOutlook_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  HWND_UserSize(     unsigned long *, unsigned long            , HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  unsigned long *, unsigned char *, HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * ); 
void                      __RPC_USER  HWND_UserFree(     unsigned long *, HWND * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


