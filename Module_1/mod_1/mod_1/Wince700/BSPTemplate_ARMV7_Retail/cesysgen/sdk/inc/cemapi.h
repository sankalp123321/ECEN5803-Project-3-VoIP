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
/*
    Copyright (c) Microsoft Corporation. All rights reserved.
*/

#ifndef __cemapi_MAPI_H__
#define __cemapi_MAPI_H__

#include <mapidefs.h>
#include <mapicode.h>
#include <mapitags.h>
#include <mapispi.h>
#include <mapix.h>

#ifndef _PURE
#define _PURE =0
#endif // _PURE





const LPCTSTR kszAppInbox = TEXT ("tmail.exe");





const int g_knMaxSvcs   = 8;         // Max # of services
const int g_knMaxSvcLen = 32;       // Max length of a service name





//----------------------------------------------------------------------------
// MAIL SYNC HANDLER Interfaces
//----------------------------------------------------------------------------

#define SYNCPROGRESSITEM_STATUSTEXT                 0x0001
#define SYNCPROGRESSITEM_STATUSTYPE                 0x0002
#define SYNCPROGRESSITEM_PROGVALUE                  0x0004
#define SYNCPROGRESSITEM_MAXVALUE                   0x0008
#define SYNCPROGRESSITEM_DISCONNECTED               0x0010
#define SYNCPROGRESSITEM_TOTAL_NEW_MAIL             0x0020
#define SYNCPROGRESSITEM_NEW_MESSAGE                0x0040
#define SYNCPROGRESSITEM_DISMISS_STATUSTYPE         0x0080

typedef struct _SYNCPROGRESSITEM
{
    ULONG       cbSize;

    DWORD       mask;

    LPCWSTR     pwszStatusText;
    DWORD       dwStatusType;
    ULONG       ulProgValue;
    ULONG       ulMaxValue;

    ULONG       ulTotalNewMail;

    ULONG       cbIdNewMsg;
    LPENTRYID   pidNewMsg;

} SYNCPROGRESSITEM;

#define SYNC_NORMAL         0
#define SYNC_HIERARCHY      1
#define SYNC_CREATE_FOLDER  2
#define SYNC_RENAME_FOLDER  3
#define SYNC_DELETE_FOLDER  4
#define SYNC_RESETHIERARCHY  5
#define SYNC_FOLDER          6
#define SYNC_SENDONLY        7

typedef struct _MAILSYNCREQUEST
{
    DWORD       cbSize;
    DWORD       cbBufSize;

    DWORD       cbCookie;
    LPBYTE      pbCookie;

    ULONG       ffFlags;

    ULONG       objType;
    LPENTRYID   pid;
    DWORD       cbId;

    LPSPropValue  pval;

} MAILSYNCREQUEST;

typedef struct _SYNCCREDENTIALS
{
    DWORD       cbSize;
    DWORD       cbBufSize;
    LPTSTR      pszUsername;
    LPTSTR      pszDomain;
    LPTSTR      pszPassword;
} SYNCCREDENTIALS;

typedef struct _TRANSPORTEVENT
{
    LPCWSTR pszSourceDLL;
    LPCWSTR pszSourceProfile;
    HRESULT hr;
    DWORD   dwSeverity;
    DWORD   cbData;
    LPBYTE  pbData;
} TRANSPORTEVENT;

typedef struct _MESSAGEFIELDS
{
    LPCWSTR pszwTo;
    LPCWSTR pszwCc;
    LPCWSTR pszwBcc;
    LPCWSTR pszwSubject;
    LPCWSTR pszwBody;
    DWORD flags;
} MESSAGEFIELDS;


typedef enum
{
    MSG_FORMAT_UNKNOWN = 0,
    MSG_FORMAT_TEXT,
    MSG_FORMAT_HTML,
    MSG_FORMAT_RTF,
} MESSAGEFORMAT;


const DWORD kdwOptionValueNone = 0;
const DWORD kdwOptionValueAll  = 0xFFFFFFFF;


const WCHAR kszCapHTMLMail[]                    = L"HTMLMail";
const WCHAR kszCapAutoPostMeetingResponse[]     = L"AutoPostMeetingResponse";
const WCHAR kszCapAmountToFetch[]               = L"FetchSize";
const WCHAR kszCapAttachAmount[]                = L"AttachFetchSize";
const WCHAR kszCapAgeFilter[]                   = L"AgeFilter";
const WCHAR kszCapSaveSent[]                    = L"SaveSent";
const WCHAR kszCapSMSUnicode[]                  = L"SMSUnicode";
const WCHAR kszCapSMSDeliveryNotify[]           = L"SMSDeliveryNotify";
const WCHAR kszCapSMTPAuthenticate[]            = L"SMTPAuthenticate";
const WCHAR kszCapIncludeOriginal[]             = L"IncludeOriginal";
const WCHAR kszCapIndentBody[]                  = L"IndentBody";
const WCHAR kszCapAddLeading[]                  = L"AddLeading";
const WCHAR kszCapLeadChar[]                    = L"LeadChar";
const WCHAR kszCapSyncMsgClasses[]              = L"SyncMsgClasses";
const WCHAR kszCapSyncMsgClassDef[]             = L"SyncMsgClassDef";
const WCHAR kszCapPropDialog[]                  = L"PropDialog";                    // default: FALSE
const WCHAR kszCapSyncHierarchy[]               = L"SyncHierarchy";
const WCHAR kszCapDeleteAction[]                = L"DeleteAction";
const WCHAR kszCapMoveToTrash[]                 = L"TrashMoves";

const WCHAR kszCapReturnAddress[]               = L"ReturnAddress";
const WCHAR kszCapCurrentService[]              = L"CurrentService";
const WCHAR kszCapCreateSpecialFldrs[]          = L"CreateSpecialFolders";

// Boolean service capabilities which have default values.
// Override the default in GetCapability().
const WCHAR kszCapFolders[]                     = L"Folders";                       // default: TRUE
const WCHAR kszCapFolderNotifications[]         = L"FolderNotifications";           // default: FALSE

// New for 2003 devices
const WCHAR kszCapClearAll[]                    = L"ClearAll";                      // default: TRUE
const WCHAR kszCapEmptyDeleteItem[]             = L"EmptyDeleteItem";               // default: TRUE
const WCHAR kszCapEditProperties[]              = L"EditProperties";                // default: TRUE
const WCHAR kszCapFolderOptions[]               = L"EmptyFolderOptions";            // default: TRUE
const WCHAR kszCapMgmtFolder[]                  = L"MgmtFolder";                    // default: TRUE
const WCHAR kszCapSync[]                        = L"Sync";                          // default: TRUE
const WCHAR kszCapSyncOnDockEvent[]             = L"SyncOnDockEvent";               // default: TRUE
const WCHAR kszCapConnect[]                     = L"Connect";                       // default: TRUE
const WCHAR kszCapRequireRadio[]                = L"RequireRadio";                  // default: FALSE
const WCHAR kszCapMarkAttachments[]             = L"MarkAttachments";               // default: FALSE
const WCHAR kszCapReplyAll[]                    = L"ReplyAll";                      // default: TRUE (can't be TRUE if no compose capability)
const WCHAR kszCapAlwaysIncludeOriginal[]       = L"AlwaysIncludeOriginal";         // default: FALSE
const WCHAR kszCapCompose[]                     = L"Compose";                       // default: TRUE
const WCHAR kszCapOfflineStatus[]               = L"OfflineStatus";                 // default: TRUE
const WCHAR kszCapCallSender[]                  = L"CallSender";                    // default: FALSE
const WCHAR kszCapLanguage[]                    = L"Language";                      // default: TRUE
const WCHAR kszCapAttachments[]                 = L"Attachments";                   // default: TRUE
const WCHAR kszCapFolderManagementAllowCreate[] = L"FolderManagementAllowCreate";   // default: TRUE
const WCHAR kszCapFolderManagementAllowRename[] = L"FolderManagementAllowRename";   // default: TRUE
const WCHAR kszCapFolderManagementAllowDelete[] = L"FolderManagementAllowDelete";   // default: TRUE

const WCHAR kszCapSMIME[]                       = L"SMIME";                         // default: FALSE
const WCHAR kszCapCannotSendMeetingRequests[]   = L"CannotSendMeetingRequests";     // default: FALSE
const WCHAR kszCapClearAllOnServer[]            = L"ClearAllDeletesFromServer";     // default: TRUE
const WCHAR kszCapServiceFromMessage[]          = L"ServiceFromMessage";            // Only used in GetGlobalSetting
const WCHAR kszCapPolicyEnabled[]               = L"PolicyEnabled";                 // Only used in GetGlobalSetting


const WCHAR kszCapFollowUpFlags[]               = L"FollowUpFlags";                 // default: FALSE

// Fetch / AUTD
const WCHAR kszCapImmediateDownload[]           = L"ImmediateDownload";             // default: FALSE
const WCHAR kszCapSwitchFormat[]                = L"SwitchFormat";                  // default: FALSE
const WCHAR kszCapConnectHomeNetwork[]          = L"ConnectHomeNetwork";            // default: TRUE

// Sync outgoing mail
const WCHAR kszCapSyncSendOnly[]                = L"SyncSendOnly";                  // default: FALSE

// kszCapDeleteAction above allows the user to specify
// what delete options should be taken during laster syncs...
#define DELACTION_IMMEDIATELY            0x00000000
#define DELACTION_MANUALLY               0x00000001


// {96D2552D-B83B-4b48-8E89-DCC26512DBA4}
static const GUID IID_IMailRuleClient =
{ 0x96d2552d, 0xb83b, 0x4b48, { 0x8e, 0x89, 0xdc, 0xc2, 0x65, 0x12, 0xdb, 0xa4 } };

typedef enum _MRCACCESS
{
    MRC_ACCESS_NONE = 0,         // Client isn't interested in this message
    MRC_ACCESS_READ_ONLY = 1,    // Client is only interested in read access for messages
    MRC_ACCESS_WRITE = 2         // Client wants write access for messages
} MRCACCESS;

typedef enum _MRCHANDLED {
    MRC_NOT_HANDLED = 0,         // Client didn't handle the message
    MRC_HANDLED_CONTINUE = 1,    // Client handled message, let others handle too
    MRC_HANDLED_DONTCONTINUE = 2 // Client handled message, don't let others handle
} MRCHANDLED;

interface IMailRuleClient : public IUnknown
{
public:
    MAPIMETHOD(Initialize)(
            IMsgStore *pMsgStore,
            MRCACCESS *pmaDesired
            ) _PURE;

    MAPIMETHOD(ProcessMessage)(
            IMsgStore *pMsgStore,
            ULONG cbMsg,
            LPENTRYID lpMsg,
            ULONG cbDestFolder,
            LPENTRYID lpDestFolder,
            ULONG *pulEventType,
            MRCHANDLED *pHandled
            ) _PURE;
};


// forward declaration
class IMailSyncHandler;



// {447DAA3A-E420-4e87-B440-0045B9FE73BC}
static const GUID IID_IMailSyncCallBack =
{ 0x447daa3a, 0xe420, 0x4e87, { 0xb4, 0x40, 0x0, 0x45, 0xb9, 0xfe, 0x73, 0xbc } };

class IMailSyncCallBack : public IUnknown
{
public:
    MAPIMETHOD(RequestSync)(
            LPCWSTR pszProfile,
            DWORD cbCookie,
            LPBYTE pbCookie
            ) _PURE;

    MAPIMETHOD(Progress)(
            LPCWSTR pszProfile,
            SYNCPROGRESSITEM* pinfo
            ) _PURE;

    MAPIMETHOD(GetGlobalSetting)(
            LPCWSTR pszSetting,
            LPSPropValue pval
            ) _PURE;

    MAPIMETHOD_(UINT, DisplayMessageBox)(
            LPCWSTR pszProfile,
            LPCWSTR pszTitle,
            LPCWSTR pszMessage,
            UINT uType
            ) _PURE;

    MAPIMETHOD(RequestCredentials)(
            LPCWSTR pszProfile,
            SYNCCREDENTIALS*  ppcredsSource,
            SYNCCREDENTIALS** ppcreds
            ) _PURE;

    MAPIMETHOD(LogEvent)(
            TRANSPORTEVENT* pevt
            ) _PURE;

    MAPIMETHOD(AllocateMem)(
            DWORD cbSize,
            LPBYTE* ppb
            ) _PURE;

    MAPIMETHOD(FreeMem)(
            LPVOID pvmem
            ) _PURE;
};

#define FOLDER_HIDE             0x00010000
#define FOLDER_SPECIAL          0x00020000
#define FOLDER_INBOX            0x00040000
#define FOLDER_DELETED_ITEMS    0x00080000
#define FOLDER_SENT_ITEMS       0x00100000
#define FOLDER_OUTBOX           0x00200000
#define FOLDER_DRAFTS           0x00400000
#define FOLDER_IPM              0x00800000
#define FOLDER_SEARCH_ROOT      0x01000000

typedef struct _FOLDERNODE {
    _FOLDERNODE*    pSibbling;
    _FOLDERNODE*    pChild;
    _FOLDERNODE*    pParent;
    DWORD           ffFlags;
    LPWSTR          szName;
} FOLDERNODE;


// flag for Shutdown function
#define SHUTDOWNFLAG_LOSTCONNECTION     0x0001

class IMailSyncHandler : public IUnknown
{
public:
    MAPIMETHOD(Initialize)(
            IMailSyncCallBack* pCallBack,
            LPCWSTR pszProfileName,
            IMsgStore* pMsgStore
            ) _PURE;

    MAPIMETHOD(ShutDown)(
            DWORD dwReserved
            ) _PURE;

    MAPIMETHOD(Synchronize)(
            MAILSYNCREQUEST* pRqst
            ) _PURE;

    MAPIMETHOD(DoProperties)(
            HWND hwndParent
            ) _PURE;

    MAPIMETHOD(GetCapability)(
            LPCWSTR pszName,
            LPSPropValue pval
            ) _PURE;

    MAPIMETHOD(SetCapability)(
            LPCWSTR pszName,
            LPSPropValue pval
            ) _PURE;

    MAPIMETHOD(Install)(
            LPCWSTR pszProfileName,
            LPCWSTR pszIncomingServer,
            LPCWSTR pszOutgoingServer,
            GUID*   pidNetwork
            ) _PURE;

    MAPIMETHOD(UnInstall)(
            ) _PURE;

    MAPIMETHOD(DecodeEvent)(
            TRANSPORTEVENT* pevt,
            LPWSTR* ppszEvent
            ) _PURE;

    MAPIMETHOD(GetFolderHierarchy)(
            FOLDERNODE** ppRootNode
            ) _PURE;

    enum FOLDEROPTIONS {
        koptNA = 0,
        koptDownload,
        koptQueryDownload,
        koptNotifications,
        koptQueryNotifications,
        koptGetRemotePath,
        koptCreate,
        koptQueryCreate,
        koptSetAge,
        koptSetBodyFetchSize,
        koptSetAttachFetchSize,
        koptGetAge,
        koptGetBodyFetchSize,
        koptGetAttachFetchSize,
    };

    MAPIMETHOD(SetFolderOptions)(
            IMAPIFolder*    pfldr,
            FOLDERNODE*     pnode,
            FOLDEROPTIONS   opts,
            LPSPropValue    pval
            ) _PURE;

    MAPIMETHOD(Connect)(
            DWORD dwReserved,
            SYNCCREDENTIALS* pCredentials
            ) _PURE;

    MAPIMETHOD(Disconnect)(
            DWORD dwReserved
            ) _PURE;
};

#define MAX_ONESTOP_TYPE_NAME   32
#define MAX_MESSAGE_CLASS_NAME   64
#define MAX_MESSAGE_CLASS_DISPLAY_NAME      64
#define MAX_MESSAGE_CLASSES_SUPPORTED_STRING    1024

typedef HRESULT (WINAPI *ONESTOPFACTORYFUNC)(LPCWSTR pszType, IMailSyncHandler** ppObj);




typedef enum tagSMIME_SENDFLAG
{
    SMIME_SENDFLAG_SIGN    = 0x00000001,
    SMIME_SENDFLAG_ENCRYPT = 0x00000002
} SMIME_SENDFLAG;


//----------------------------------------------------------------------------
// ICEMAPISession Interface
//----------------------------------------------------------------------------

#define MAPI_ICEMAPISESSION_METHODS(IPURE)                              \
    MAPIMETHOD(CreateMsgStore)                                          \
        (THIS_  LPCWSTR                     pszDisplayName,             \
                IMsgStore**                 ppMsgStore) IPURE;          \
    MAPIMETHOD(DeleteMsgStore)                                          \
        (THIS_  ULONG                       cbEntryID,                  \
                LPENTRYID                   lpEntryID) IPURE;           \


#undef       INTERFACE
#define      INTERFACE  ICEMAPISession
DECLARE_MAPI_INTERFACE_(ICEMAPISession, IMAPISession)
{
public:
    BEGIN_INTERFACE
    MAPI_IUNKNOWN_METHODS(PURE)
    MAPI_IMAPISESSION_METHODS(PURE)
    MAPI_ICEMAPISESSION_METHODS(PURE)
};

//----------------------------------------------------------------------------
// Custom CE Property Tags
//----------------------------------------------------------------------------

#define PR_CE_IMAP_UID                      PROP_TAG(PT_LONG,    0x8100)
#define PR_CE_MIME_TEXT                     PROP_TAG(PT_BINARY,  0x8103)    // This is CHAR text
#define PR_CE_IPM_DRAFTS_ENTRYID            PROP_TAG(PT_BINARY,  0x8104)
#define PR_CE_IPM_SEARCH_ENTRYID            PROP_TAG(PT_BINARY,  0x8105)
#define PR_CE_IPM_INBOX_ENTRYID             PROP_TAG(PT_BINARY,  0x8106)
#define PR_CONTENT_LENGTH_EX                PROP_TAG(PT_LONG,    0x8108)    // Full size of the message on the server.

#define PR_CE_XPRT_MSG_STATUS               PROP_TAG(PT_LONG,    0x8102)    // For transport flags.
#define PR_CE_XPRT_MESSAGE_FLAGS            PROP_TAG(PT_LONG,    0x810b)

#define PR_CE_ITEM_GENERATION               PROP_TAG(PT_LONG,    0x810c)    // Item generation

// This is the index of the item in a sorted folder list.  It's
// only returned from a IMAPITable::QueryRows() call.
#define PR_CE_ITEM_INDEX                    PROP_TAG(PT_LONG,    0x810d)

// This property contains a single wide string
// for all x-headers, (including all the \r\n).
#define PR_CE_XHEADERS                      PROP_TAG(PT_UNICODE, 0x8110)

#ifndef PR_MESSAGE_SIZE_EX
#define PR_MESSAGE_SIZE_EX                  PROP_TAG(PT_LONG,    0x8111)
#endif

// This property, when set, suppresses pop-up notification of the message's arrival
#define PR_CE_NO_NOTIFICATION               PROP_TAG(PT_BOOLEAN, 0x8112)

// This property is to uniquely identify a store. It's a guid.
#define PR_CE_UNIQUE_STORE_ID               PROP_TAG(PT_CLSID, 0x8113)

// This property is for storing EMS header data that comes with a SMS message
#define PR_CE_EMS_HEADER_DATA               PROP_TAG(PT_BINARY, 0x8114)

// Set this property on a message store to prevent it from being shown on the today page/homescreen unread counts
#define PR_CE_HIDE_FROM_TODAY_PAGE          PROP_TAG(PT_BOOLEAN, 0x8115)

// a property to determine if a folder is a search folder or not
#define PR_CE_IS_SEARCH_FOLDER              PROP_TAG(PT_BOOLEAN, 0x8116)

// This property is the name of the transport used for an account (e.g. SMS, POP3)
// This name is not localized
#define PR_CE_TRANSPORT_NAME                PROP_TAG (PT_UNICODE, 0x8117)

// Set this property on a message to indicate that various menu commands should be greyed out
#define PR_CE_CONTEXT_FLAGS                 PROP_TAG (PT_LONG, 0x8118)
#define CE_CONTEXT_DISABLE_REPLY            0x00000001  // The Reply and Reply All menu item should be disabled for this message
#define CE_CONTEXT_DISABLE_FORWARD          0x00000002  // The Forward menu item should be disabled for this message
#define CE_CONTEXT_DISABLE_DELETE           0x00000004  // The Delete menu item should be disabled for this message
#define CE_CONTEXT_DISABLE_MOVE             0x00000008  // The Move menu item should be disabled for this message
#define CE_CONTEXT_DISABLE_FLAG             0x00000010  // The Flag-related menu items should be disabled for this message
#define CE_CONTEXT_DISABLE_MARKREAD         0x00000020  // The Mark as Read/Unread menu items should be disabled for this message

// Account signature
#define PR_CE_SIGNATURE                     PROP_TAG (PT_UNICODE, 0x8119)

// Indicates whether the signature should be used for new messages
#define PR_CE_USE_SIGNATURE                 PROP_TAG (PT_BOOLEAN, 0x811A)

// Indicates whether the signature should be included in replies
#define PR_CE_USE_SIGNATURE_REPLY_FORWARD   PROP_TAG (PT_BOOLEAN, 0x811B)

// Account domain
#define PR_CE_DOMAIN                PROP_TAG (PT_UNICODE, 0x811F)

// Number of minutes between syncs
#define PR_CE_CHECK_INTERVAL        PROP_TAG (PT_I4,      0x8120)

// Number of bytes to download for a message
#define PR_CE_FETCH_SIZE            PROP_TAG (PT_I4,      0x8121)

// Maximum attachment size
#define PR_CE_ATTACH_FETCH_SIZE     PROP_TAG (PT_I4,      0x8122)

// Number of days to display
#define PR_CE_AGE_FILTER            PROP_TAG (PT_I4,      0x8123)

// Indicates whether the SMTP server requires authentication
#define PR_CE_SMTP_AUTHENTICATION   PROP_TAG (PT_BOOLEAN, 0x8124)

// Mail server for receiving mail
#define PR_CE_INCOMING_SERVER       PROP_TAG (PT_UNICODE, 0x8125)

// Mail server for sending mail
#define PR_CE_OUTGOING_SERVER       PROP_TAG (PT_UNICODE, 0x8126)

// Connection used to connect to servers
#define PR_CE_CONNECTION_GUID       PROP_TAG (PT_CLSID,   0x8127)

// Account requires SSL
#define PR_CE_REQUIRE_SSL           PROP_TAG (PT_BOOLEAN, 0x8128)

// What is the alternative SMTP account name?
#define PR_CE_SMTPALT_ACCOUNT       PROP_TAG (PT_UNICODE, 0x8129)

// What is the alternative SMTP domain?
#define PR_CE_SMTPALT_DOMAIN        PROP_TAG (PT_UNICODE, 0x812A)

// Are alternative creds needed for SMTP server?
#define PR_CE_SMTPALT_ENABLED       PROP_TAG (PT_BOOLEAN, 0x812B)

// Does SMTP server require SSL?
#define PR_CE_SMTPALT_SSL           PROP_TAG (PT_BOOLEAN, 0x812C)

// The SMS callback number for a message (on networks supporting SMS callback)
#define PR_CE_SMS_CALLBACK          PROP_TAG (PT_UNICODE, 0x812D)


// Message Format properties
// -------------------------
// (legal values are members of the MESSAGEFORMAT enumeration)

// The message format that a transport should prefer to retrieve if available,
// unless overriden on a particular message by PR_CE_PENDING_BODY_FORMAT.
//
// Set and read on message stores.
#define PR_CE_PREFERRED_DOWNLOAD_FORMAT PROP_TAG (PT_I4, 0x812E)

// The message format that should be fetched on either the next out of band fetch
// or the next mark for download.
//
// Set and read on messages.
#define PR_CE_PENDING_BODY_FORMAT       PROP_TAG (PT_I4,      0x812F)

// The original message format as it exists on the server, since we can download
// a different format than the native. (Used only for messages sync'ed from a transport,
// not messages authored on the device for sending.)
//
// Set and read on received messages.
#define PR_CE_NATIVE_MESSAGE_FORMAT     PROP_TAG (PT_I4,      0x8130)

// Raw binary data from a raw SMS message
#define PR_CE_SMS_RAW_HEADER            PROP_TAG (PT_BINARY,  0x8131)
#define PR_CE_SMS_RAW_BODY              PROP_TAG (PT_BINARY,  0x8132)

// Fetch Failure Indication properties
// -----------------------------------
//
// Used in conjunction with kszCapImmediateDownload. These properties
// indicate via MAPI notifications whether an attempt to retrieve a
// message outside of the normal send/receive flow has failed.

// Indicates via notification that the attempt to retrieve the message
// body has failed. The value of this property is not used.
#define PR_CE_FETCH_BODY_FAILURE        PROP_TAG (PT_LONG,      0x8133)

// Indicates via notification that the attempt to retrieve attachments
// for the message has failed. The binary value is an array of ULONG
// indices of attachments that failed. The size of the array can be
// found by dividing the total binary size by sizeof(ULONG).
// The value is valid only until the next attachment failure.
#define PR_CE_FETCH_ATTACHMENT_FAILURE  PROP_TAG (PT_BINARY,    0x8134)


// An account property that indicates that the application should
// automatically invoke a Send/Receive when a message is sent to the Outbox.
#define PR_CE_SYNC_ON_SEND              PROP_TAG (PT_BOOLEAN,   0x8135)

// Indicates that the MAPI notification should not initiate
// an immediate download (fetch) of the modified object.
#define PR_CE_SUPPRESS_FETCH                    PROP_TAG (PT_LONG,  0x8136)

// Prevents an account from automatically connecting while roaming
#define PR_CE_SYNC_MANUALLY_WHEN_ROAMING        PROP_TAG (PT_LONG,  0x8137)


// For quick recognition of the recipient types for a message.
#define MSGSTATUS_RECTYPE_SMTP                  0x00020000
#define MSGSTATUS_RECTYPE_SMS                   0x00040000

// Re-use the above flags for incoming SMS status messages
// which are mutually exclusive from outgoing messages.
#define MSGSTATUS_SMSSTATUS_SUCCESS             0x00020000

// To determine if any transport still needs to send the message...
#define MSGSTATUS_RECTYPE_ALLTYPES              (MSGSTATUS_RECTYPE_SMTP | MSGSTATUS_RECTYPE_SMS)

// This flag should be set if only the header has been downloaded.
#define MSGSTATUS_HEADERONLY                    0x00010000

// This flag is set if the item should be partially downloaded.
#define MSGSTATUS_PARTIAL_DOWNLOAD              0x00080000

// This flag is set if the item is only partially downloaded.
#define MSGSTATUS_PARTIAL                       0x00100000

// This flag is set if the message has at least one attachment marked for downloaded.
#define MSGSTATUS_REMOTE_DOWNLOAD_ATTACH        0x00200000

// This flag is set if the MIME header needs to be downloaded.
#define MSGSTATUS_REMOTE_DOWNLOAD_HEADER        0x00400000

// This flag is set if the message has a TNEF blob attached.
#define MSGSTATUS_HAS_TNEF                      0x00800000

// This flag is set if the TNEF of a message needs to be downloaded.
#define MSGSTATUS_REMOTE_DOWNLOAD_TNEF          0x01000000

// This flag is set if the attachment has a copy on the server.
#define MSGSTATUS_GHOSTED_ATTACH                0x02000000

// This flag is set if there are attachments on the message that
// have not yet been downloaded.
#define MSGSTATUS_PENDING_ATTACHMENTS           0x04000000

// This flag is set if the message has PR_CE_MIME_TEXT property
#define MSGSTATUS_HAS_PR_CE_MIME_TEXT           0x08000000

// This flag is set if the message has PR_BODY property
#define MSGSTATUS_HAS_PR_BODY                   0x10000000

// This flag is set if the message has PR_CE_SMIME_TEXT property
#define MSGSTATUS_HAS_PR_CE_SMIME_TEXT          0x20000000

// This flag is set if the message has PR_CE_CRYPT_MIME_TEXT property
#define MSGSTATUS_HAS_PR_CE_CRYPT_MIME_TEXT     0x40000000

// This flag is set if the message has PR_BODY_HTML property
#define MSGSTATUS_HAS_PR_BODY_HTML              0x80000000




//===========================================================================
// Mail application functions
//===========================================================================

// MAILCOMPOSEFIELDS flag values
#define MCF_ACCOUNT_IS_NAME             0x01
#define MCF_ACCOUNT_IS_TRANSPORT        0x02
#define MCF_MAILTO_FORMAT               0x04  // pszTo is in "mailto" format
#define MCF_RUN_IN_BACKGROUND           0x08  // App should run in background, used with MailSyncMessages

// Structure of flags used for composing a new message
typedef struct _MAILCOMPOSEFIELDS
{
    DWORD cbSize;                    // Set to structure size
    DWORD dwFlags;                   // Combination of MCF_ flags above
    LPCTSTR pszTo;                   // To address
    LPCTSTR pszCc;                   // Cc address
    LPCTSTR pszBcc;                  // Bcc address
    LPCTSTR pszSubject;              // Message subject
    LPCTSTR pszBody;                 // Message body
    LPCTSTR pszAttachments;          // NULL-separated list of attachment file names
    UINT cAttachments;               // Number of attachments in pszAttachFiles
    LPCTSTR pszAccount;              // Name of account to use (whether is name of account or transport name is determined by dwFlags)
    LPCTSTR pszMsgClass;             // Name of message class to use (default if NULL)
} MAILCOMPOSEFIELDS;


extern "C"
{
 
// Displays a new message, determined by the information in MAILCOMPOSEFIELDS.  pmcf can be NULL.
HRESULT WINAPI MailComposeMessage(MAILCOMPOSEFIELDS *pmcf);
 
// Displays an existing message as opposed to creating a new one.  Message is determined by ENTRYID.
HRESULT WINAPI MailDisplayMessage(LPENTRYID lpEntryID, ULONG cbEntryID);

// Switches to a folder.  lpEntryID is the ENTRYID of the folder we want to switch to in listview, cbEntryID is the size of the ENTRYID.
HRESULT WINAPI MailSwitchToFolder(LPENTRYID lpEntryID, ULONG cbEntryID);

// Switches to an account.  Specify the account by name or transport (determined by dwFlags which takes an MCF_ value).
HRESULT WINAPI MailSwitchToAccount(LPCTSTR pszAccount, DWORD dwFlags);

// Syncs mail.  Specify the account by name or transport (determined by dwFlags which takes an MCF_ value).  
// If pszAccount is NULL, the current account is synced.
HRESULT WINAPI MailSyncMessages(LPCTSTR pszAccount, DWORD dwFlags);

// Launches the Messaging application and invokes the new account wizard. Returns immediately.
//
// return values - S_OK for success, error code if failure
HRESULT WINAPI MailLaunchNewAccountWizard();

}


class IMessageCard;


///<summary>
///     IMessageCardHost contains methods an messaging card host must implement. 
///</summary>

// {8ac886b4-7482-4f0d-9b20-4847d086d1bd}
static const GUID IID_IMessageCardHost =
{ 0x8ac886b4, 0x7482, 0x4f0d, { 0x9b, 0x20, 0x48, 0x47, 0xd0, 0x86, 0xd1, 0xbd } };

class __declspec(uuid("8ac886b4-7482-4f0d-9b20-4847d086d1bd"))
IMessageCardHost 
{
public:
    
    /// <summary>
    ///     A set of actions a Card expects the host may be able to do.  Those
    ///     actions enums should be used as the passed-in value when the Card 
    ///     calling DoAction() and CanDoAction(). 
    /// </summary>
    enum HOST_ACTION
    {
       HOST_ACTION_FIRST                    = 0,
        
       HOST_ACTION_REPLY                    = 0,
       HOST_ACTION_REPLYALL                 = 1,
       HOST_ACTION_REPLYWITH                = 2,
       HOST_ACTION_FORWARD                  = 3,
       HOST_ACTION_COMPOSENEW               = 4,
       HOST_ACTION_SHOWMESSAGE              = 5,
       // HOST_ACTION_DELETE: Additional param needed to specify the deletion flag.
       HOST_ACTION_DELETE                   = 6,           
       HOST_ACTION_LOADNEXTMESSAGE          = 7,  
       HOST_ACTION_LOADPREVMESSAGE          = 8,  
       HOST_ACTION_MOVETOFOLDER             = 9,
       HOST_ACTION_MARKASUNREAD             = 10,
       HOST_ACTION_ACCEPTVCARD              = 11,
       HOST_ACTION_DOWNLOADMESSAGE          = 12,
       HOST_ACTION_CANCELDOWNLOADMESSAGE    = 13,
       HOST_ACTION_TOGGLEDOWNLOADMESSAGE    = 14,
       HOST_ACTION_TOGGLESENDRECEIVE        = 15,
       // HOST_ACTION_TOGGLEATTACHMENTDOWNLOAD: Additional param needed to 
       // specify attachment index.
       HOST_ACTION_TOGGLEATTACHMENTDOWNLOAD = 16,  
       HOST_ACTION_SETFOLLOWUP              = 17, 
       HOST_ACTION_COMPLETEFOLLOWUP         = 18,
       HOST_ACTION_CLEARFOLLOWUP            = 19,
       HOST_ACTION_TOGGLEFOLLOWUP           = 20,
       HOST_ACTION_SIM_COPYTOSIM            = 21,    
       HOST_ACTION_SIM_COPYTOINBOX          = 22,  
       HOST_ACTION_CLOSECARD                = 23,
       
       HOST_ACTION_LAST
    };


    /// <summary>
    ///     Determine the state of the queried action item.
    ///     ACTION_STATE_INVALID:  The action is not supported by the card host. 
    ///                            The card should not present the invalid action 
    ///                            in the menu or to the user.
    ///     ACTION_STATE_DISABLED: The action can not be performed at this point
    ///                            and should be disabled by the card.
    ///     ACTION_STATE_ENABLED:  The action can be performed currently and 
    ///                            should be enabled by the card.
    /// </summary>
    enum ACTION_STATE {
        ACTION_STATE_INVALID  = -1,
        ACTION_STATE_DISABLED = 0,
        ACTION_STATE_ENABLED  = 1,
    };

    /// <summary>
    ///     Flags to be passed in when a card requesting to delete a message.
    ///     ACTION_DELETE_FLAG_DISPLAYPROMPT: The host displays a confirmation
    ///                                       dialog asking a user's permission
    ///                                       before deleting the message.
    ///     ACTION_DELETE_FLAG_NOPROMPT: The host can delete the message without
    ///                                  prompting to the user for confirmation.
    /// </summary>
    enum ACTION_DELETE_FLAG {
        ACTION_DELETE_FLAG_DISPLAYPROMPT = 0,
        ACTION_DELETE_FLAG_NOPROMPT = 1,
    };


    /// <summary>
    ///     A list of settings that a card can query from the host.
    /// </summary>
    enum HOST_SETTING {
        HOST_SETTING_ISMESSAGEDOWNLOADING       = 0,
        HOST_SETTING_ISATTACHMENTDOWNLOADING    = 1,
        HOST_SETTING_ISSYNCINPROGRESS           = 2,
        HOST_SETTING_PREFEREDDOWNLOADFORMAT     = 3,
        HOST_SETTING_INCLUDEORIGINAL            = 4,
        HOST_SETTING_CANSMIME                   = 5,
        HOST_SETTING_RETURNADDRESS              = 6,
        HOST_SETTING_CURRENTSERVICENAME         = 7,
        HOST_SETTING_CAPABILITYCOMPOSE          = 8,
    };


    /// <summary>
    ///     Query the state of an action to determine whether this action can
    ///     be performed currently.
    /// </summary>
    /// <param name="pMessage">
    ///     [in]Reference to the IMessage object displaying in the card. 
    /// </param>
    /// <param name="pMessageCard">
    ///     [in] Reference to the IMessageCard object
    /// </param>
    /// <param name="dwAction">
    ///     [in] The action specified by the <see cref="HOST_ACTION"/> enumeration.
    /// </param>
    /// <param name="pdwActionState">
    ///     [out] The action state returned by the function. The value should be
    ///           one of the <see cref="ACTION_STATE"/> enumeration.
    /// </param>
    /// <returns>
    ///     S_OK on success, 
    ///     E_NOTIMPL if the action is not one of the enums defined in 
    ///               <see cref="HOST_ACTION"/>.
    ///     otherwise standard HRESULT error code.
    /// </returns>
    MAPIMETHOD(CanDoAction)(
        IMessage*       pMessage,
        IMessageCard*   pMessageCard, 
        DWORD           dwAction,
        DWORD*          pdwActionState 
    ) _PURE;


    /// <summary>
    ///     This is called to have the card host perform a messaging 
    ///     action (command).
    /// </summary>
    /// <param name="pMessage">
    ///     [in] Reference to the IMessage object displaying in the card. 
    /// </param>
    /// <param name="pMessageCard">
    ///     [in] Reference to the IMessageCard object
    /// </param>
    /// <param name="dwAction">
    ///     [in] The action specified by the <see cref="HOST_ACTION"/> enumeration.
    /// </param>
    /// <param name="dwActionParam">
    ///     [in] Depending on different actions, this might or might not be used.
    ///          Currently it is used by the following actions:
    ///          HOST_ACTION_TOGGLEATTACHMENTSYNC: specifying the index of an 
    ///          attachment to download/undownload.
    ///          HOST_ACTION_DELETE: specifying one of the deletion flags. The
    ///                              value should be one of the 
    ///                              <see cref="ACTION_DELETE_FLAG"/> enumeration.
    /// </param>
    /// <returns>
    ///     S_OK on success, 
    ///     S_FALSE if dwAction is HOST_ACTION_DELETE, dwActionParam is 
    ///             ACTION_DELETE_FLAG_DISPLAYPROMPT, and a user has chosen 
    ///             cancel on deletion.
    ///     E_NOTIMPL if the action is not one of the enums defined in 
    ///               <see cref="HOST_ACTION"/>.
    ///     otherwise standard HRESULT error code.
    /// </returns>
    MAPIMETHOD(DoAction)(
        IMessage* pMessage,
        IMessageCard* pMessageCard, 
        DWORD dwAction,
        DWORD dwActionParam
    ) _PURE;


    /// <summary>
    ///     This is called to query one of messaging application settings.
    /// </summary>
    /// <param name="pMessage">
    ///     [in] Reference to the IMessage object displaying in the card. 
    /// </param>
    /// <param name="dwSetting">
    ///     [in] The setting specified by the <see cref="HOST_SETTING"/> 
    ///     enumeration.
    /// </param>
    /// <param name="pVal">
    ///     [out] Pointer to a caller provided SPropValue structure to store 
    ///     the data of the queried setting.
    /// </param>
    /// <returns>
    ///     S_OK on success, 
    ///     E_NOTIMPL if the setting is not implemented by the host.
    ///     otherwise standard HRESULT error code.
    /// </returns>
    MAPIMETHOD(GetSetting)(
        IMessage*       pMessage,
        IMessageCard*   pMessageCard, 
        DWORD           dwSetting,
        LPSPropValue    pVal
    ) _PURE;
};



///<summary>
///     IMessageCard contains methods a messaging card must implement so that
///     it can be plugged into the messaging application.
///</summary>

// {eea2a286-ddc5-4827-a55d-96b8736dcb27}
static const GUID IID_IMessageCard =
{ 0xeea2a286, 0xddc5, 0x4827, { 0xa5, 0x5d, 0x96, 0xb8, 0x73, 0x6d, 0xcb, 0x27 } };

class __declspec(uuid("eea2a286-ddc5-4827-a55d-96b8736dcb27"))
IMessageCard : public IUnknown
{
public:

    /// <summary>
    ///     A set of actions indicating the purpose of SetMessage().  They
    ///     are used as the passed-in value when a card host calls SetMessage(). 
    /// </summary>
    enum MESSAGEACTION
    {
        MESSAGEACTION_UNKNOWN          = -1,

        MESSAGEACTION_FIRST            = 0,            

        MESSAGEACTION_READ             = 0,
        MESSAGEACTION_NEW              = 1, 
        MESSAGEACTION_REPLY            = 2,
        MESSAGEACTION_REPLYALL         = 3, 
        MESSAGEACTION_REPLYWITH        = 4,
        MESSAGEACTION_FORWARD          = 5,
        MESSAGEACTION_LOADFROMDRAFTS   = 6,

        MESSAGEACTION_LAST
    };
   
 
    /// <summary> 
    ///     Initialize a card object.
    /// </summary> 
    /// <param name="pHost">
    ///     [in] Reference to a IMessageCardHost object. 
    /// </param>
    /// <param name="hwndParent">
    ///     [in] The parent Window for the card window.
    /// </param>
    /// <remarks>
    ///     Initialize() should be called after CoCreateInstance(). No other 
    ///     IMessageCard methods succeed if the card object is not yet
    ///     initialized.
    /// </remarks>
    /// <returns>
    ///     S_OK on success, otherwise standard HRESULT error code.
    /// </returns>
    MAPIMETHOD(Initialize)(
            IMessageCardHost* pHost, 
            HWND              hwndParent
    ) _PURE;

    

    /// <summary> 
    ///     The host calls TranslateAccelerator() and passes the current
    ///     Window Message to the Card _prior_ to call TranslateMessage().  
    ///     This allows the Card to handle accelerator keys and other key 
    ///     strokes before the host does. This is analogous to 
    ///     IOleInPlaceActiveObject::TranslateAccelerator 
    /// </summary> 
    /// <param name="pWinMsg">
    ///     [in] Pointer to the window message that might need to be translated.
    /// </param>
    /// <returns>
    ///     S_OK 
    ///         The message was translated successfully
    ///     S_FALSE
    ///         The message was not translated.
    ///     E_ABORT
    ///         The card object is not yet initialized.
    ///     Otherwise, standard HRESULT error code.
    /// </returns>

    MAPIMETHOD(TranslateAccelerator)(
            LPMSG   pWinMsg
    ) _PURE; 



    /// <summary>
    ///     Returns the card's current window.  
    /// </summary>
    /// <remarks>
    ///     The caller should NEVER cache this value, NOR assume the window is 
    ///     valid. The returned handle is the window handle to the current card
    ///     view. It should be called after SetMessage() is called.
    /// </remarks>
    /// <returns>
    ///     Handle of the current card window.
    /// </returns>

    MAPIMETHOD_(HWND, GetHwnd)() _PURE;

    

    /// <summary>
    ///     Called by a card host to close the card. This does not imply card 
    ///     destruction since the host or other object may still hold a ref 
    ///     count to this.
    /// </summary>  
    /// <returns>
    ///     S_OK 
    ///         The card is closed successfully. 
    ///     E_ABORT
    ///         The card object is not yet initialized.
    ///     Otherwise, standard HRESULT error code.
    /// </returns>
    
    MAPIMETHOD(Close)() _PURE;


    /// <summary>
    ///     Called by a card host to set the message for various card actions.
    /// </summary>  
    /// <param name="dwActionType">
    ///     [in] Specified by the <see cref="MESSAGEACTION"/> enumeration. 
    ///          Depending on the message class of the message, if it is
    ///          MESSAGEACTION_READ, a corresponding read card view is 
    ///          displayed. Otherwise, a corresponding compose card view  
    ///          be displayed.
    /// </param>
    /// <param name="pMessage">
    ///     [in] The message to view or compose.
    /// </param>
    /// <param name="pBaseMessage">
    ///     [in] When the dwActionType is MESSAGEACTION_REPLY, 
    ///          MESSAGEACTION_REPLYALL, MESSAGEACTION_REPLYWITH, or
    ///          MESSAGEACTION_FORWARD, a base message should also provided.
    /// </param>
    /// <returns>
    ///     S_OK 
    ///         The card is closed successfully. 
    ///     E_ABORT
    ///         The card object is not yet initialized.
    ///     Otherwise, standard HRESULT error code.
    /// </returns>
    
    MAPIMETHOD(SetMessage)(
            DWORD           dwActionType,
            LPMESSAGE       pMessage,
            LPMESSAGE       pBaseMessage
    ) _PURE;


    /// <summary>
    ///     Called by a card host when the messaging application requests the
    ///     card to close all of its child windows. 
    /// </summary>  
    /// <returns>
    ///     S_OK 
    ///         The card is closed successfully. 
    ///     E_ABORT
    ///         The card object is not yet initialized.
    ///     Otherwise, standard HRESULT error code.
    /// </returns>
    
    MAPIMETHOD(CloseChildWindows)() _PURE;

};



// Menu extensions -- see appext.h for the definition of ItemRef
// Within the ItemRef array, pType will point to one of these GUIDs
// The value of pType determines what pRef points to as noted

// pRef will point to an SBinary structure containing the ENTRYID of a message and the size of that ENTRYID
// {412F24E9-87E6-4bd5-9820-23E9230D6E8D}
static const GUID ITI_MessageItemRef = 
{ 0x412f24e9, 0x87e6, 0x4bd5, { 0x98, 0x20, 0x23, 0xe9, 0x23, 0xd, 0x6e, 0x8d } };

// pRef will point to an SBinary structure containing the ENTRYID of a folder and the size of that ENTRYID
// {1477399E-B31D-4d3d-AFFA-070E71CA8719}
static const GUID ITI_FolderItemRef = 
{ 0x1477399e, 0xb31d, 0x4d3d, { 0xaf, 0xfa, 0x7, 0xe, 0x71, 0xca, 0x87, 0x19 } };

// pRef will point to an SBinary structure containing the ENTRYID of a store and the size of that ENTRYID
// {258E8499-B7C5-49a0-9A82-8B346D1E3976}
static const GUID ITI_StoreItemRef = 
{ 0x258e8499, 0xb7c5, 0x49a0, { 0x9a, 0x82, 0x8b, 0x34, 0x6d, 0x1e, 0x39, 0x76 } };

// pRef will point to the IMessageCard pointer of the active card
// {ddb73820-4f13-4f47-959e-0feb4c809ed1}
static const GUID ITI_MessageCardItemRef = 
{ 0xddb73820, 0x4f13, 0x4f47, { 0x95, 0x9e, 0x0f, 0xeb, 0x4c, 0x80, 0x9e, 0xd1 } };


// Error codes...

#define CEMAPI_E_PLAINTEXT_NOTSUPPORTED         MAKE_MAPI_E(0x901)
#define CEMAPI_E_PROTOCOL_ERROR                 MAKE_MAPI_E(0x902)
#define CEMAPI_E_NO_ACCOUNT_INFO                MAKE_MAPI_E(0x903)
#define CEMAPI_E_NEED_TO_CONNECT                MAKE_MAPI_E(0x904)
#define CEMAPI_E_MUST_SYNC_ONCE                 MAKE_MAPI_E(0x905)
#define CEMAPI_E_STORE_UNAVAILABLE              MAKE_MAPI_E(0x906)


#endif // eof...
