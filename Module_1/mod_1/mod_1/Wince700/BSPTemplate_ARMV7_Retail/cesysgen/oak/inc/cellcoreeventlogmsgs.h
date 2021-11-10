//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft end-user
// license agreement (EULA) under which you licensed this SOFTWARE PRODUCT.
// If you did not accept the terms of the EULA, you are not authorized to use
// this source code. For a copy of the EULA, please see the LICENSE.RTF on your
// install media.
//
//
//  Messages for Windows CE Event logging
//
//
// Cellcore RIL Driver Event Log messages
//
// ReportEventFormat() uses this message ID with an sprintf format identifier to allow
// applications to pass in sprintf style strings to eventlog                           
//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//
#define CELLCORE_FACILITY_EVENT_LOG      0x100


//
// Define the severity codes
//


//
// MessageId: RILLOG_EVENT_FREEFORM_MSG
//
// MessageText:
//
// %1%0
//
#define RILLOG_EVENT_FREEFORM_MSG        0x41000001L

//
// MessageId: RILLOG_EVENT_SENDINGCMD
//
// MessageText:
//
// RIL send command: %1%0
//
#define RILLOG_EVENT_SENDINGCMD          0x41000002L

//
// MessageId: RILLOG_EVENT_SENDINGCMDSUPPRESSED
//
// MessageText:
//
// RIL send command suppressed: %1%0
//
#define RILLOG_EVENT_SENDINGCMDSUPPRESSED 0x41000003L

//
// MessageId: RILLOG_EVENT_PARSERSPOK
//
// MessageText:
//
// RIL parse OK: %1%0
//
#define RILLOG_EVENT_PARSERSPOK          0x41000004L

//
// MessageId: RILLOG_EVENT_PARSERSPFAILED
//
// MessageText:
//
// RIL parse failed: %1 hr: %2%0
//
#define RILLOG_EVENT_PARSERSPFAILED      0x41000005L

//
// MessageId: RILLOG_EVENT_RADIOPRESENT
//
// MessageText:
//
// RIL radio present%0
//
#define RILLOG_EVENT_RADIOPRESENT        0x41000006L

//
// MessageId: RILLOG_EVENT_RADIOREMOVED
//
// MessageText:
//
// RIL radio removed%0
//
#define RILLOG_EVENT_RADIOREMOVED        0x41000007L

//
// MessageId: RILLOG_EVENT_DRVINITFAILED
//
// MessageText:
//
// RIL driver init failed%0
//
#define RILLOG_EVENT_DRVINITFAILED       0x41000008L

//
// MessageId: RILLOG_EVENT_COMMANDTHREADEXIT
//
// MessageText:
//
// RIL command thread has exited%0
//
#define RILLOG_EVENT_COMMANDTHREADEXIT   0x41000009L

//
// MessageId: RILLOG_EVENT_PARSEDGARBAGE
//
// MessageText:
//
// RIL parsed garbage: %1%0
//
#define RILLOG_EVENT_PARSEDGARBAGE       0x4100000AL

//
// MessageId: RILLOG_EVENT_PARSEDNOTIFICATION
//
// MessageText:
//
// RIL parse notification: %1%0
//
#define RILLOG_EVENT_PARSEDNOTIFICATION  0x4100000BL

//
// MessageId: RILLOG_EVENT_USSDRECEIVED
//
// MessageText:
//
// RIL USSD received%0
//
#define RILLOG_EVENT_USSDRECEIVED        0x4100000CL

//
// MessageId: RILLOG_EVENT_CMDTIMEDOUT
//
// MessageText:
//
// RIL command timeout: %1%0
//
#define RILLOG_EVENT_CMDTIMEDOUT         0x4100000DL

//
// MessageId: RILLOG_EVENT_CMDTIMEDOUTSUPPRESSED
//
// MessageText:
//
// RIL command timeout suppressed: %1%0
//
#define RILLOG_EVENT_CMDTIMEDOUTSUPPRESSED 0x4100000EL

//
// MessageId: RILLOG_EVENT_NOONEWAITING
//
// MessageText:
//
// RIL no one waiting for response: %1%0
//
#define RILLOG_EVENT_NOONEWAITING        0x4100000FL

//
// MessageId: RILLOG_EVENT_UNRECOGNIZEDRSP
//
// MessageText:
//
// RIL unrecognized response: %1%0
//
#define RILLOG_EVENT_UNRECOGNIZEDRSP     0x41000010L

//
// MessageId: RILLOG_EVENT_CMDRSPOK
//
// MessageText:
//
// RIL parsed OK%0
//
#define RILLOG_EVENT_CMDRSPOK            0x41000011L

//
// MessageId: RILLOG_EVENT_CMDRSPERROR
//
// MessageText:
//
// RIL parse error%0
//
#define RILLOG_EVENT_CMDRSPERROR         0x41000012L

//
// MessageId: RILLOG_EVENT_PRSRSPOKSUPPRESSED
//
// MessageText:
//
// RIL parse OK suppressed: %1%0
//
#define RILLOG_EVENT_PRSRSPOKSUPPRESSED  0x41000013L

//
// MessageId: RILLOG_EVENT_PRSRSPFAILEDSUPPRESSED
//
// MessageText:
//
// RIL parse failed suppressed: %1%0
//
#define RILLOG_EVENT_PRSRSPFAILEDSUPPRESSED 0x41000014L

//
// MessageId: RILLOG_EVENT_LOWMEMORY
//
// MessageText:
//
// RIL low memory reinit%0
//
#define RILLOG_EVENT_LOWMEMORY           0x41000015L

//
// MessageId: RILLOG_EVENT_TOOMANYTIMEOUTS
//
// MessageText:
//
// RIL too many timeouts reinit%0
//
#define RILLOG_EVENT_TOOMANYTIMEOUTS     0x41000016L

//
// MessageId: RILLOG_EVENT_GENERALREINIT
//
// MessageText:
//
// RIL general reinit%0
//
#define RILLOG_EVENT_GENERALREINIT       0x41000017L

//
// MessageId: RILLOG_EVENT_GPRSFATALERROR
//
// MessageText:
//
// RIL GPRS reinit%0
//
#define RILLOG_EVENT_GPRSFATALERROR      0x41000018L

//
// MessageId: RILLOG_EVENT_COULDNTSENDINIT
//
// MessageText:
//
// RIL could not send reinit%0
//
#define RILLOG_EVENT_COULDNTSENDINIT     0x41000019L

