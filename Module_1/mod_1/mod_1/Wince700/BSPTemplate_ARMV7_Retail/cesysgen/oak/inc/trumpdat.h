//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft
// premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license
// agreement, you are not authorized to use this source code.
// For the terms of the license, please see the license agreement
// signed by you and Microsoft.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//
//#ifndef _TRUMPDAT_H_ // { no!!!  this file is included multiple times!
//***   trumpdat.h -- init various restrump.cpp structures
// DESCRIPTION
//  table-generator macro.  usage is like this:
//      ...
//      #define TRUMPDAT(a1, a2, a3, a4, a5, a6, a7, a8)    a1,
//      const struct MyStruct g_msTab[] = {
//          #include "trumpdat.h"
//      }
//      #undef TRUMPDAT
//      #define TRUMPDAT(a1, a2, a3, a4, a5, a6, a7, a8)    {a2, a3},
//      const struct MyOther g_msOther[] = {
//          #include "trumpdat.h"
//      }
//      #undef TRUMPDAT
//      #define TRUMPDAT(a1, a2, a3, a4, a5, a6, a7, a8)    a7,
//      enum foo_e {
//          #include "trumpdat.h"
//          eMax,
//          eLast = eMax - 1,
//          eFirst = 0,
//      };
//      #undef TRUMPDAT
//      ... etc. ...
// NOTES
//  this file should really live in oak/inc (so that upstream
// can refer to it to debug-check the idsHard values [see comment in
// restrump.cpp]).
//  perf: currently only the ids_number is used in SHIP_BUILD.  think 2x
// before using any of the other stuff for anything other than DEBUG -- it
// will cause bloat.
//  perf: also, make your tables 'const' so you don't waste ROM.

#ifndef TRUMPDAT
#define TRUMPDAT(idsHard, idsDef, szFile, a4, a5, a6, a7, a8)  /*NOTHING*/
#endif

// TRUMPDAT(ids_number, ids_define, szFileDll, a4, a5, a6, a7, a8
// we need ids_number since we live downstream in ossvcs.h
// we have ids_define to help w/ grep's (and hopefully to someday auto-check
// the ids_number's and catch the bug-waiting-to-happen)

// {
// do *not* change the order of existing entries
// the order defines an implicit index, which is what we publish                           Owner:
TRUMPDAT(20295, IDS_VOICEMAIL,                       "phoneres.dll", 0,0,0,0,0) // 0        PHONE
TRUMPDAT(15024, IDS_CDI_RADIO_TELEPHONE_NUMBER,      "tapres.dll",   0,0,0,0,0) // 1
TRUMPDAT(15025, IDS_CDI_RADIO_TELEPHONE_NUMBER_ABBR, "tapres.dll",   0,0,0,0,0) // 2
TRUMPDAT( 8065, IDS_RADIO_NAME,                      "outres.dll",   0,0,0,0,0) // 3
TRUMPDAT( 1220, IDS_RADIO_TELEPHONE_NUMBER_ABBREV,   "outres.dll",   0,0,0,0,0) // 4
TRUMPDAT( 1211, IDS_PHONE_ABBREV,                    "outres.dll",   0,0,0,0,0) // 5
TRUMPDAT( 1240, IDS_ABBR_PROP+15,                    "outres.dll",   0,0,0,0,0) // 6
TRUMPDAT(20613, IDS_CALLALERT_IGNORE,                "phoneres.dll", 0,0,0,0,0) // 7        PHONE
TRUMPDAT(20680, IDS_VOICEMAIL_TITLE,                 "phoneres.dll", 0,0,0,0,0) // 8        PHONE
TRUMPDAT(    0, 0,                                   "",             0,0,0,0,0) // 9
TRUMPDAT(22599, IDS_SIM_FAILURE,                     "phoneres.dll", 0,0,0,0,0) // 10       PHONE
TRUMPDAT(22600, IDS_NOSIM,                           "phoneres.dll", 0,0,0,0,0) // 11       PHONE
TRUMPDAT(22622, IDS_ENTER_PIN1,                      "phoneres.dll", 0,0,0,0,0) // 12       PHONE
TRUMPDAT(22619, IDS_SIMPUKREQUIRED,                  "phoneres.dll", 0,0,0,0,0) // 13       PHONE
TRUMPDAT( 1409, IDS_EARPIECE_VOLUME,                 "tshres.dll",   0,0,0,0,0) // 14 - MUST BE 14 for 02 CDMA compat
TRUMPDAT(    0, 0,                                   "",             0,0,0,0,0) // 15   //No longer used but need to keep entry present to avoid skewing implicit indices
TRUMPDAT(33554, IDS_SMS_SENT_MSG_BODY,               "outres.dll",   0,0,0,0,0) // 16 
TRUMPDAT(16303, IDS_EMERGENCY_MODE_INFO,             "tshres.dll",   0,0,0,0,0) // 17 - KEEP as 17 for Ozone compat
TRUMPDAT(16302, IDS_EMERGENCY_KEYLOCK,               "tshres.dll",   0,0,0,0,0) // 18 - KEEP as 18 for Ozone compat
TRUMPDAT( 9835, IDS_ERROR_SMS_PASSWORD,              "outres.dll",   0,0,0,0,0) // 19
TRUMPDAT( 9836, IDS_ERROR_SMS_SIM_INVALID,           "outres.dll",   0,0,0,0,0) // 20
TRUMPDAT( 9837, IDS_ERROR_SMS_NETWORK,               "outres.dll",   0,0,0,0,0) // 21
TRUMPDAT( 9838, IDS_ERROR_SMS_SERVICE,               "outres.dll",   0,0,0,0,0) // 22
TRUMPDAT( 9839, IDS_ERROR_UNKNOWNSCADDRESS,          "outres.dll",   0,0,0,0,0) // 23
TRUMPDAT( 9840, IDS_ERROR_INVALIDADDRESS,            "outres.dll",   0,0,0,0,0) // 24
TRUMPDAT( 9841, IDS_ERROR_NOSCSUBSCRIPTION,          "outres.dll",   0,0,0,0,0) // 25
TRUMPDAT( 9842, IDS_ERROR_SCBUSY,                    "outres.dll",   0,0,0,0,0) // 26
TRUMPDAT( 9843, IDS_ERROR_MSGCALLBARRED,             "outres.dll",   0,0,0,0,0) // 27
TRUMPDAT(    0, 0,                                   "",             0,0,0,0,0) // 28
TRUMPDAT(    0, 0,                                   "",             0,0,0,0,0) // 29
TRUMPDAT(31717, IDS_INVALID_PHONENUMBER,             "msgres.dll",   0,0,0,0,0) // 30
TRUMPDAT(31718, IDS_INVALID_EMAILADDRESS,            "msgres.dll",   0,0,0,0,0) // 31
TRUMPDAT(33442, IDS_CANT_SEND_SMS_SMTP,              "outres.dll",   0,0,0,0,0) // 32
TRUMPDAT(0,     0,                                   "",             0,0,0,0,0) // 33
TRUMPDAT(0,     0,                                   "",             0,0,0,0,0) // 34
TRUMPDAT(20574, IDS_BTH_HF_ON,                       "phoneres.dll", 0,0,0,0,0) // 35       PHONE
TRUMPDAT(20575, IDS_BTH_HF_OFF,                      "phoneres.dll", 0,0,0,0,0) // 36       PHONE
TRUMPDAT(0,     0,                                   "",             0,0,0,0,0) // 37
TRUMPDAT(1400,  IDS_LOW_STORAGE_CAPTION,             "tshres.dll",   0,0,0,0,0) // 38
TRUMPDAT(1401,  IDS_LOW_STORAGE,                     "tshres.dll",   0,0,0,0,0) // 39  -- Entries here and above need to kept for OzUp compat
TRUMPDAT(14897, IDS_DIRECTDI_EHELP,                  "tapres.dll",   0,0,0,0,0) // 40  -- This entry and below added in Magneto.  When integrating from OzUp, they should be adjusted down to make room for the new OzUp entries.
TRUMPDAT( 8146, IDS_CONTSCD_CALLRADIO,               "outres.dll",   0,0,0,0,0) // 41
TRUMPDAT(0,     0,                                   "",             0,0,0,0,0) // 42
TRUMPDAT(0,     0,                                   "",             0,0,0,0,0) // 43
TRUMPDAT(33321, IDS_NOTIF_SMSMSG_TITLE_PPC,          "outres.dll",   0,0,0,0,0) // 44
TRUMPDAT(33322, IDS_NOTIF_SMSMSGS_TITLE_PPC,         "outres.dll",   0,0,0,0,0) // 45
TRUMPDAT(33323, IDS_NOTIF_MAILMSG_TITLE_PPC,         "outres.dll",   0,0,0,0,0) // 46
TRUMPDAT(33324, IDS_NOTIF_MAILMSGS_TITLE_PPC,        "outres.dll",   0,0,0,0,0) // 47
TRUMPDAT(33327, IDS_NOTIF_SMSADMIN_TITLE_PPC,        "outres.dll",   0,0,0,0,0) // 48
TRUMPDAT(33328, IDS_NOTIF_SISLMSG_TITLE_PPC,         "outres.dll",   0,0,0,0,0) // 49
TRUMPDAT(33559, IDS_SMS_CLASS0_MSG_TITLE,            "outres.dll",   0,0,0,0,0) // 50
TRUMPDAT(33557, IDS_SMS_SENT_MSG_FAILED_TITLE,       "outres.dll",   0,0,0,0,0) // 51
TRUMPDAT(33558, IDS_SMS_SENT_MSG_FAILED_BODY_TEMPLATE, "outres.dll", 0,0,0,0,0) // 52
TRUMPDAT(14481, IDS_MODEM_CELLULARLINE_GPRS,         "shellreswpc.dll", 0,0,0,0,0) // 53
TRUMPDAT(5621,  IDS_KCONN_TYPE_GPRS,                 "shellreswpc.dll", 0,0,0,0,0) // 54
TRUMPDAT(20626, IDS_ERROR_NO_VMAIL_NUMBER,           "phoneres.dll", 0,0,0,0,0) // 55       PHONE
TRUMPDAT(5625,  IDS_KCONN_TYPE_DIALUP,               "shellreswpc.dll", 0,0,0,0,0) // 56
TRUMPDAT(0,     0,                                   "",             0,0,0,0,0) // 57
TRUMPDAT(5598,  IDS_HTML_KCONN_SEARCHING,            "shellreswpc.dll", 0,0,0,0,0) // 58
TRUMPDAT(5603,  IDS_HTML_KCONN_NOSERVICE,            "shellreswpc.dll", 0,0,0,0,0) // 59
TRUMPDAT(5618,  IDS_HTML_KCONN_NOSIM,                "shellreswpc.dll", 0,0,0,0,0) // 60
TRUMPDAT(20551, IDS_ERROR_PHONE_DIAL_VOICE,          "phoneres.dll", 0,0,0,0,0) // 61       PHONE
TRUMPDAT(0,     0,                                   "",             0,0,0,0,0) // 62
TRUMPDAT(0,     0,                                   "",             0,0,0,0,0) // 63
TRUMPDAT(18272, IDS_WRLSMGR_NAME,                    "shellreswpc.dll", 0,0,0,0,0) // 64
TRUMPDAT(18274, IDS_DISCOVERABLE,                    "shellreswpc.dll", 0,0,0,0,0) // 65
TRUMPDAT(18304, IDS_RADIO_ALL,                       "shellreswpc.dll", 0,0,0,0,0) // 66
TRUMPDAT(18305, IDS_RADIO_WIFI,                      "shellreswpc.dll", 0,0,0,0,0) // 67
TRUMPDAT(18306, IDS_RADIO_BTH,                       "shellreswpc.dll", 0,0,0,0,0) // 68
TRUMPDAT(18307, IDS_RADIO_PHONE,                     "shellreswpc.dll", 0,0,0,0,0) // 69
TRUMPDAT(0,     0,                                   "",                0,0,0,0,0) // 70
TRUMPDAT(30319, IDS_WND_TITLE,                       "msgres.dll",   0,0,0,0,0) // 71 (RES_MAILAPP + 319) = 30319
TRUMPDAT(5629,  IDS_KCONN_FRIENDLY_NOSETTINGS,       "shellreswpc.dll", 0,0,0,0,0) // 72
TRUMPDAT(0,     0,                                   "",             0,0,0,0,0) // 73 - No longer used 
TRUMPDAT(20614, IDS_CALLALERT_WAIT,                  "phoneres.dll",    0,0,0,0,0) // 74    PHONE
TRUMPDAT(18281, IDS_DISCONNECT_CELL,                 "shellreswpc.dll", 0,0,0,0,0) // 75
TRUMPDAT(5630, IDS_KCONN_TYPE_EDGE,                  "shellreswpc.dll", 0,0,0,0,0) // 76
TRUMPDAT(5631, IDS_KCONN_TYPE_UMTS,                  "shellreswpc.dll", 0,0,0,0,0) // 77
TRUMPDAT(5633, IDS_KCONN_TYPE_1XEVDO,                "shellreswpc.dll", 0,0,0,0,0) // 78
TRUMPDAT(5622, IDS_KCONN_TYPE_1XRTT,                 "shellreswpc.dll", 0,0,0,0,0) // 79
TRUMPDAT(5634, IDS_KCONN_TYPE_1XEVDV,                "shellreswpc.dll", 0,0,0,0,0) // 80
TRUMPDAT(5635, IDS_KCONN_TYPE_HSDPA,                 "shellreswpc.dll", 0,0,0,0,0) // 81
TRUMPDAT(15368, IDS_ACCESSTYPE_GSM,                  "tapres.dll",      0,0,0,0,0) // 82    PHONE
TRUMPDAT(15369, IDS_ACCESSTYPE_3G,                   "tapres.dll",      0,0,0,0,0) // 83    PHONE
TRUMPDAT(0,     0,                                   "",                0,0,0,0,0) // 84
TRUMPDAT(0,     0,                                   "",                0,0,0,0,0) // 85
TRUMPDAT(14816, IDS_PRIVATE,                         "tapres.dll",   0,0,0,0,0) // 86 (TAPRES_TPCUTIL_BASE + 816) = 14000+816 = 14816
TRUMPDAT( 9858, IDS_ERROR_FDNRESTRICT,               "outres.dll",   0,0,0,0,0) // 87
TRUMPDAT(20627, IDS_ERROR_PHONE_DESTINATIONBARRED,   "phoneres.dll", 0,0,0,0,0) // 88       PHONE
TRUMPDAT(20628, IDS_ERROR_PHONE_FDNRESTRICT,         "phoneres.dll", 0,0,0,0,0) // 89       PHONE
TRUMPDAT(33258, IDS_INBOX_TODAY_NO_MSGS_UNREAD,      "outres.dll",   0,0,0,0,0) // 90 (RES_MAILAPP_PPC+758) = 33258
TRUMPDAT(20294, IDS_EMERGENCY_CALL,                  "phoneres.dll", 0,0,0,0,0) // 91       PHONE
TRUMPDAT(0,     0,                                   "",             0,0,0,0,0) // 92
TRUMPDAT(30331, IDS_COPY_TO_SIM,                     "msgres.dll",   0,0,0,0,0) // 93 (RES_MAILAPP+331) = 30331
TRUMPDAT(0,     0,                                   "",             0,0,0,0,0) // 94
TRUMPDAT(33622, IDS_SIM_CARD_FULL,                   "msgres.dll",   0,0,0,0,0) // 95
TRUMPDAT(33623, IDS_SIM_CARD_FULL_MULTISELE,         "msgres.dll",   0,0,0,0,0) // 96
TRUMPDAT(16462, IDS_SEARCHING,                       "tshres.dll",   0,0,0,0,0) // 97 (IDS_SYSPLUG_FIRST + 4)
TRUMPDAT(16465, IDS_UNREGISTERED,                    "tshres.dll",   0,0,0,0,0) // 98 (IDS_SYSPLUG_FIRST + 7)
TRUMPDAT(16466, IDS_REGISTRATION_DENIED,             "tshres.dll",   0,0,0,0,0) // 99 (IDS_SYSPLUG_FIRST + 8)
TRUMPDAT(106,   IDS_ENTRYPOINT_EMAILONLY,            "msgres.dll",   0,0,0,0,0) // 100
TRUMPDAT(107,   IDS_ENTRYPOINT_SMSONLY,              "msgres.dll",   0,0,0,0,0) // 101
TRUMPDAT(33624, IDS_SIM_SAVE_MULTIPART,              "msgres.dll",   0,0,0,0,0) // 102
TRUMPDAT(33626, IDS_SIM_PHONE_OFF,                   "msgres.dll",   0,0,0,0,0) // 103
TRUMPDAT(20691, IDS_PIVOT_INCOMING_CALL,             "phoneres.dll", 0,0,0,0,0) // 104      PHONE
TRUMPDAT(20645, IDS_PIVOT_CALLER_INFO,               "phoneres.dll", 0,0,0,0,0) // 105      PHONE
TRUMPDAT(20647, IDS_PIVOT_POST_CALL_TASKS,           "phoneres.dll", 0,0,0,0,0) // 106      PHONE
TRUMPDAT(20669, IDS_REDIAL_TASK_TITLE,               "phoneres.dll", 0,0,0,0,0) // 107      PHONE
TRUMPDAT(20667, IDS_CALL_AT_OTHER_NUMBER_TASK_TITLE, "phoneres.dll", 0,0,0,0,0) // 108      PHONE
TRUMPDAT(20668, IDS_SMS_TASK_TITLE,                  "phoneres.dll", 0,0,0,0,0) // 109      PHONE
TRUMPDAT(20666, IDS_SAVE_TASK_TITLE,                 "phoneres.dll", 0,0,0,0,0) // 110      PHONE
TRUMPDAT(20665, IDS_OPEN_CONTACTS_TASK_TITLE,        "phoneres.dll", 0,0,0,0,0) // 111      PHONE
TRUMPDAT(20664, IDS_CREATE_NEW_CONTACT_TASK_TITLE,   "phoneres.dll", 0,0,0,0,0) // 112      PHONE
TRUMPDAT(30370, IDS_CANNOT_SEND_MESSAGE,             "msgres.dll",   0,0,0,0,0) // 113
TRUMPDAT(20681, IDS_VOICEMAIL_COUNTONE,              "phoneres.dll", 0,0,0,0,0) // 114      PHONE
TRUMPDAT(20682, IDS_VOICEMAIL_COUNTMULTIPLE,         "phoneres.dll", 0,0,0,0,0) // 115      PHONE
TRUMPDAT(20683, IDS_VOICEMAIL_COUNTUNKNOWN,          "phoneres.dll", 0,0,0,0,0) // 116      PHONE
TRUMPDAT(55001, IDS_TITLE_OPERATORMSG,               "msgres.dll",   0,0,0,0,0) // 117
TRUMPDAT(55002, IDS_TITLE_SIMMSG,                    "msgres.dll",   0,0,0,0,0) // 118
TRUMPDAT(55003, IDS_TITLE_SMSMSG,                    "msgres.dll",   0,0,0,0,0) // 119
TRUMPDAT(55004, IDS_TITLE_ADMINMSG,                  "msgres.dll",   0,0,0,0,0) // 120
TRUMPDAT(20670, IDS_OPEN_CALL_CONTACT,               "phoneres.dll", 0,0,0,0,0) // 121      PHONE

// add new entries here (at the end)
// }

#undef TRUMPDAT

//#endif // }
