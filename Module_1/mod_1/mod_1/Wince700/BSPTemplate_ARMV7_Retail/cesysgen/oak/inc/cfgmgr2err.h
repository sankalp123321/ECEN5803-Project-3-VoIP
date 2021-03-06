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
    Do not modify this file, it was generated.
*/



#pragma once


//
//  CFGMGR_E_INVALIDNODEOPTIONS
//      "The node options provided are invalid."
//

#define    CFGMGR_E_INVALIDNODEOPTIONS                        ((HRESULT)0x86000000)


//
//  CFGMGR_E_INVALIDDATATYPE
//      "The data type is invalid."
//

#define    CFGMGR_E_INVALIDDATATYPE                           ((HRESULT)0x86000001)


//
//  CFGMGR_E_NODENOTFOUND
//      "The specified node doesn't exist."
//

#define    CFGMGR_E_NODENOTFOUND                              ((HRESULT)0x86000002)


//
//  CFGMGR_E_ILLEGALOPERATIONINATRANSACTION
//      "The operation is illegal inside of a transaction."
//

#define    CFGMGR_E_ILLEGALOPERATIONINATRANSACTION            ((HRESULT)0x86000003)


//
//  CFGMGR_E_ILLEGALOPERATIONOUTSIDEATRANSACTION
//      "The operation is illegal outside of a transaction."
//

#define    CFGMGR_E_ILLEGALOPERATIONOUTSIDEATRANSACTION       ((HRESULT)0x86000004)


//
//  CFGMGR_E_ONEORMOREEXECUTIONFAILURES
//      "One or more commands failed to Execute."
//

#define    CFGMGR_E_ONEORMOREEXECUTIONFAILURES                ((HRESULT)0x86000005)


//
//  CFGMGR_E_ONEORMORECANCELFAILURES
//      "One or more commands failed to revert during the cancel."
//

#define    CFGMGR_E_ONEORMORECANCELFAILURES                   ((HRESULT)0x86000006)


//
//  CFGMGR_S_COMMANDFAILEDDUETOTRANSACTIONROLLBACK
//      "The command was executed, but the transaction failed so the command was rolled back successfully."
//

#define    CFGMGR_S_COMMANDFAILEDDUETOTRANSACTIONROLLBACK     ((HRESULT)0x06000007)


//
//  CFGMGR_E_COMMITFAILURE
//      "The transaction failed during the commit phase."
//

#define    CFGMGR_E_COMMITFAILURE                             ((HRESULT)0x86000008)


//
//  CFGMGR_E_ROLLBACKFAILURE
//      "The transaction failed during the rollback phase."
//

#define    CFGMGR_E_ROLLBACKFAILURE                           ((HRESULT)0x86000009)


//
//  CFGMGR_E_ONEORMORECLEANUPFAILURES
//      "One or more commands failed during the cleanup phase after the transactions were committed."
//

#define    CFGMGR_E_ONEORMORECLEANUPFAILURES                  ((HRESULT)0x8600000A)


//
//  CFGMGR_E_CONFIGNODESTATEOBJECTNOLONGERVALID
//      "The IConfigNodeState interface may not be used after the validation call."
//

#define    CFGMGR_E_CONFIGNODESTATEOBJECTNOLONGERVALID        ((HRESULT)0x8600000B)


//
//  CFGMGR_E_CSPREGISTRATIONCORRUPT
//      "The CSP registration in the registry is corrupted."
//

#define    CFGMGR_E_CSPREGISTRATIONCORRUPT                    ((HRESULT)0x8600000C)


//
//  CFGMGR_E_NODEFAILEDTOCANCEL
//      "The cancel operation failed on the node."
//

#define    CFGMGR_E_NODEFAILEDTOCANCEL                        ((HRESULT)0x8600000D)


//
//  CFGMGR_E_DEPENDENTOPERATIONFAILURE
//      "The operation failed on the node because of a prior operation failure."
//

#define    CFGMGR_E_DEPENDENTOPERATIONFAILURE                 ((HRESULT)0x8600000E)


//
//  CFGMGR_E_CSPNODEILLEGALSTATE
//      "The requested command failed because the node is in an invalid state."
//

#define    CFGMGR_E_CSPNODEILLEGALSTATE                       ((HRESULT)0x8600000F)


//
//  CFGMGR_E_REQUIRESINTERNALTRANSACTIONING
//      "The node must be internally transactioned to call this command."
//

#define    CFGMGR_E_REQUIRESINTERNALTRANSACTIONING            ((HRESULT)0x86000010)


//
//  CFGMGR_E_COMMANDNOTALLOWED
//      "The requested command is not allowed on the target."
//

#define    CFGMGR_E_COMMANDNOTALLOWED                         ((HRESULT)0x86000011)


//
//  CFGMGR_E_INTERCSPOPERATION
//      "Inter-CSP copy and move operations are illegal."
//

#define    CFGMGR_E_INTERCSPOPERATION                         ((HRESULT)0x86000012)


//
//  CFGMGR_E_PROPERTYNOTSUPPORTED
//      "The requested property is not supported by the node."
//

#define    CFGMGR_E_PROPERTYNOTSUPPORTED                      ((HRESULT)0x86000013)


//
//  CFGMGR_E_INVALIDSEMANTICTYPE
//      "The semantic type is invalid."
//

#define    CFGMGR_E_INVALIDSEMANTICTYPE                       ((HRESULT)0x86000014)


//
//  CFGMGR_E_FORBIDDENURISEGMENT
//      "The URI contains a forbidden segment."
//

#define    CFGMGR_E_FORBIDDENURISEGMENT                       ((HRESULT)0x86000015)


//
//  CFGMGR_E_READWRITEACCESSDENIED
//      "The requested read/write permission was not allowed."
//

#define    CFGMGR_E_READWRITEACCESSDENIED                     ((HRESULT)0x86000016)


//
//  CFGMGR_E_SECRETDATAACCESSDENIED
//      "The requested read permission was not allowed because the data is secret."
//

#define    CFGMGR_E_SECRETDATAACCESSDENIED                    ((HRESULT)0x86000017)


