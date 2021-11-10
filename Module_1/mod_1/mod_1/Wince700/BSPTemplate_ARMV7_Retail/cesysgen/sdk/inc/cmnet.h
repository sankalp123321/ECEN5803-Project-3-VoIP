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

#ifndef _CmNet_h_
#define _CmNet_h_

#include <basetyps.h>
#include <winsock2.h>
#include <winnt.h>
#include <windns.h>
#include <ipexport.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#define CM_CONST(name, value) \
        const DWORD name = DWORD(value)
#else
#define CM_CONST(name, value) \
        enum { name = value }
#endif

/*! \file CmNet.h */

//
// Connection selection data structures and APIs.
//

//! Version parameter for all structures.
//!
CM_CONST(CM_CURRENT_VERSION, 1);

//
// Connectivity data structures and APIs.
//

//! Captures all possible results in calls to CM client APIs.
//!
CM_CONST(CM_RESULT_BASE, 13000);

typedef enum CM_RESULT
{
    CMRE_SUCCESS = 0,

    CMRE_INVALID_REQUIREMENTS = CM_RESULT_BASE,
    CMRE_INVALID_PREFERENCES,
    CMRE_INVALID_SESSION,
    CMRE_INVALID_CONNECTION,
    CMRE_INVALID_CONNECTION_TYPE,
    CMRE_INVALID_DEVICE,
    CMRE_INVALID_PARAMETER,
    CMRE_INVALID_VERSION,
    CMRE_INVALID_HOST,
    CMRE_INCONSISTENT_CONFIGURATION,
    CMRE_INSUFFICIENT_BUFFER,
    CMRE_CONNECTION_ITERATION_NOT_STARTED,
    CMRE_NO_CONNECTIONS,
    CMRE_HOST_ADDRESS_ITERATION_NOT_STARTED,
    CMRE_NO_HOST_ADDRESSES,
    CMRE_CONNECTION_ACQUIRE_FAILED,
    CMRE_CONNECTION_ALREADY_ACQUIRED,
    CMRE_CONNECTION_NOT_ACQUIRED,
    CMRE_CONNECTION_RELEASE_FAILED,
    CMRE_CONNECTION_ALREADY_EXISTS,
    CMRE_CONNECTION_DOES_NOT_EXIST,
    CMRE_NOT_ALLOWED,
    CMRE_NO_NOTIFICATIONS,
    CMRE_NO_POLICIES,
    CMRE_OUT_OF_MEMORY,
    CMRE_PENDING,
    CMRE_ACCESS_DENIED,
    CMRE_NOT_SUPPORTED,
    CMRE_NOT_IMPLEMENTED,
    CMRE_UNEXPECTED,

    CMRE_LAST

} CM_RESULT;

//! Used by an application to set its connection requirements, preferences and
//! priority.
//!
DECLARE_HANDLE(CM_SESSION_HANDLE);

//! Attributes of a connection that can be used by an application to select
//! connections using requirements and preferences.
//!
typedef enum CM_CHARACTERISTIC
{
    CMCH_BANDWIDTH_KBITPS,          //! Network device bandwidth in Kbits/s.
    CMCH_SUPPORTS_WAKE_ON_INCOMING, //! Able to wake device on incoming traffic.
    CMCH_ROAMING,                   //! Registered on network other than home.
    
    CMCH_LAST

} CM_CHARACTERISTIC;

//! Used to compare connection characteristic against a required value.
//!
typedef enum CM_REQUIREMENT_OPERATOR
{
    CMRO_LESS_OR_EQUAL,
    CMRO_GREATER_OR_EQUAL,
    CMRO_EQUAL,
    CMRO_NOT_EQUAL,
    
    CMRO_LAST

} CM_REQUIREMENT_OPERATOR;

//! Describes connections that can be used by an application.
//! 
typedef struct CM_REQUIREMENTS
{
    DWORD Version;
    DWORD cRequirement;
    struct
    {
        CM_CHARACTERISTIC Characteristic;
        CM_REQUIREMENT_OPERATOR Operator;
        DWORD Value;

    } Requirement[1];

} CM_REQUIREMENTS;

FORCEINLINE DWORD CmGetRequirementsNeededSize(DWORD cRequirement)
{
    return (sizeof(CM_REQUIREMENTS) - offsetof(CM_REQUIREMENTS, Requirement))
            * cRequirement + offsetof(CM_REQUIREMENTS, Requirement);
}

//! Used to describe the preference order for connections.
//!
typedef enum CM_PREFERENCE_OPERATOR
{
    //! Unary.
    //!
    CMPO_LOWEST,
    CMPO_HIGHEST,

    //! Binary.
    //!
    CMPO_LESS_OR_EQUAL,
    CMPO_GREATER_OR_EQUAL,
    CMPO_EQUAL,
    CMPO_NOT_EQUAL,

    CMPO_LAST

} CM_PREFERENCE_OPERATOR;

//! Describe the order in which connections will be tried to connect an
//! application.
//!
typedef struct CM_PREFERENCES
{
    DWORD Version;
    DWORD cPreference;
    struct
    {
        CM_CHARACTERISTIC Characteristic;
        CM_PREFERENCE_OPERATOR Operator;
        DWORD Value; 

    } Preference[1];

} CM_PREFERENCES;

FORCEINLINE DWORD CmGetPreferencesNeededSize(DWORD cPreference)
{
    return (sizeof(CM_PREFERENCES) - offsetof(CM_PREFERENCES, cPreference))
            * cPreference + offsetof(CM_PREFERENCES, cPreference);
}

//! Describes priority of obtaining a suitable connection for an application
//! between its multiple requests used simultaneously.
//!
typedef int CM_PRIORITY;
//!
//! The priority is subdivided into user interactive and background.  The user
//! interactive priority range is intended to be used for cases where a
//! connection is acquired as a result of explicit request from user.  The
//! background priority is intended for acquiring connections
//! for background tasks.

//! User interactive priority ranges from 0 (lowest) to 2^31-1 (highest).
//! By default, connections are acquired with priority 0.
//!
CM_CONST(CM_PRIORITY_USER_INTERACTIVE_LOWEST, 0);
CM_CONST(CM_PRIORITY_USER_INTERACTIVE_HIGHEST, 0x7FFFFFFF);

//! User background priority starts from -1 (highest) to -2^31 (lowest).
//!
CM_CONST(CM_PRIORITY_BACKGROUND_LOWEST, 0x80000000);
CM_CONST(CM_PRIORITY_BACKGROUND_HIGHEST, -1);

//! Identifies an instance of a connection that can be used by an application;
//! application uses connection handle to acquire connection for its use, and
//! other operations.
//!
DECLARE_HANDLE(CM_CONNECTION_HANDLE);

CM_CONST(CM_HOST_NAME_LENGTH, DNS_MAX_NAME_BUFFER_LENGTH);

//! A pair of addresses: the source address and destination address, additional
//! information included in the name resolution response. The source address specifies 
//! the address to which a socket needs to be bound in order to reach the destination.
//! 
typedef struct CM_ADDRESS_PAIR
{
    DWORD Version;
    SOCKADDR_STORAGE Src;
    SOCKADDR_STORAGE Dst;

    //! Additional information in name resolution response.
    //!
    WCHAR szDstHostFqdn[CM_HOST_NAME_LENGTH];

} CM_ADDRESS_PAIR;

//! Defines option to select modifiers used in connection selection.
//!
typedef enum CM_CONNECTION_SELECTION_OPTION
{
    //! Default connection selection algorithm.
    //!
    CMSO_DEFAULT = 0,

    CMSO_LAST

} CM_CONNECTION_SELECTION_OPTION;

//
// CM_DATA_ACTIVITY_STATE is used with CmSetDataActivityState to inform
// CM about whether an application expects to send data soon.
//
typedef enum CM_DATA_ACTIVITY_STATE
{
    CMDS_UNKNOWN,          
    CMDS_DORMANT,          // Application does not expect to send any data soon
    CMDS_ACTIVE,           // Application sending now or expects to send soon
    CMDS_LAST
} CM_DATA_ACTIVITY_STATE;

//! Initializes CM Client APIs.
//!
//! Note: This API must not be called in client DllMain.
//!
//! Returns:
//! TRUE on success.
//!
BOOL CmApiInit();

//! De-initializes CM Client APIs.
//!
//! Note: This API must not be called in client DllMain.
//!
void CmApiDeinit();

//! Creates CM session for the purpose of selecting and acquiring a connection
//! for use.
//!
CM_SESSION_HANDLE CmCreateSession();

//! Closes the CM session.  Note that for applications that use Winsock
//! and WinInet, an existing session is closed implicitly as a result of
//! closing SOCKET or releasing HINTERNET handle, respectively.
//! However, if an application gets CM session associated with SOCKET or
//! HINTERNET handle, it must close it explicitly.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_SESSION if passed in session is not valid.
//!
CM_RESULT CmCloseSession(CM_SESSION_HANDLE hSession);

//! Associates connection requirements with a session that will be used to
//! select a connection for an application.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_SESSION if passed in session is not valid.
//! CMRE_OUT_OF_MEMORY if memory could not be allocated to complete operation.
//! CMRE_INVALID_VERSION if passed in version is not supported.
//!
CM_RESULT CmSetRequirements(
    __in CM_SESSION_HANDLE hSession,
    __in_bcount(cbRequirements) const CM_REQUIREMENTS* pRequirements,
    __in DWORD cbRequirements);

//! Associates connection preferences with a session that will be used to
//! influence the order in which connections are tried.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_SESSION if passed in session is not valid.
//! CMRE_OUT_OF_MEMORY if memory could not be allocated to complete operation.
//! CMRE_INVALID_VERSION if passed in version is not supported.
//!
CM_RESULT CmSetPreferences(
    __in CM_SESSION_HANDLE hSession,
    __in_bcount(cbPreferences) const CM_PREFERENCES* pPreferences,
    __in DWORD cbPreferences);

//! Associates a priority with a session.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_SESSION if passed in session is not valid.
//!
CM_RESULT CmSetPriority(
    __in CM_SESSION_HANDLE hSession,
    __in CM_PRIORITY Priority);

//! Informs CM whether the application intends to use hSession to send data soon.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_SESSION if passed in session is not valid.
//! CMRE_INVALID_PARAMETER if State is not CMDS_DORMANT or CMDS_ACTIVE.
//! CMRE_INVALID_CONNECTION if no connection has been acquired for hSession.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//!
CM_RESULT CmSetDataActivityState(
    __in CM_SESSION_HANDLE      hSession,
    __in CM_DATA_ACTIVITY_STATE State);

//! Gets the first candidate connection that can be used by an application to
//! try to connect to the wanted destination host.  Note that selected Winsock
//! and WinInet APIs can automatically connect SOCKET or HINTERNET handle to the
//! requested destination host.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_SESSION if passed in session is not valid.
//! CMRE_INVALID_PARAMETER if passed in parameter, other than session, is not 
//!   valid.
//! CMRE_INVALID_HOST if passed in hostname is not valid.
//! CMRE_OUT_OF_MEMORY if memory could not be allocated to complete operation.
//! CMRE_NO_CONNECTIONS if list of candidate connections is empty, that is,
//!   no connections are configured, meet requirements and/or policy of the
//!   caller.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//!
CM_RESULT CmGetFirstCandidateConnection(
    __in CM_SESSION_HANDLE hSession,
    __in const WCHAR* pszHost,
    __in CM_CONNECTION_SELECTION_OPTION Option,
    __out CM_CONNECTION_HANDLE* phConnection);

//! Gets the next candidate connection.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_SESSION if passed in session is not valid.
//! CMRE_INVALID_PARAMETER if passed in parameter, other than session, is not 
//!   valid.
//! CMRE_CONNECTION_ITERATION_NOT_STARTED if connection iteration has not
//!   been started with CmGetFirstCandidateConnection.
//! CMRE_NO_CONNECTIONS if list of candidate connections has been exhausted.
//! 
CM_RESULT CmGetNextCandidateConnection(
    __in CM_SESSION_HANDLE hSession,
    __out CM_CONNECTION_HANDLE* phConnection);

//! Acquires connection for use.  Only one connection can be acquired in
//! context of a single session.  Note that selected Winsock and WinInet APIs
//! will automatically acquire connection as needed.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_CONNECTION if passed in connection is not valid.
//! CMRE_CONNECTION_ALREADY_ACQUIRED if this or any other connection has been
//!   already acquired in the context of this session.
//! CMRE_ACCESS_DENIED if caller doesn't have sufficient permissions to acquire
//!   connection.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//!
CM_RESULT CmAcquireConnection(
    __in CM_CONNECTION_HANDLE hConnection);

//! Releases connection that was previously acquired and is no longer needed.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_CONNECTION if passed in connection is not valid.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//!
CM_RESULT CmReleaseConnection(
    __in CM_CONNECTION_HANDLE hConnection);

//! Gets the first address associated with the wanted destination host.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_CONNECTION if passed in connection is not valid.
//! CMRE_CONNECTION_NOT_ACQUIRED if passed in connection is not acquired.
//! CMRE_NO_HOST_ADDRESSES if list of addresses is empty, that is, the passed in
//!   host name could not be resolved using the connection.
//! CMRE_INSUFFICIENT_BUFFER if pAddressPair is too small to hold the address
//!   pair.  Required size is returned in pcbAddressPair.
//! CMRE_NOT_SUPPORTED if passed in address family is not supported.
//! CMRE_OUT_OF_MEMORY if memory could not be allocated to complete operation.
//! CMRE_INVALID_VERSION if passed in version of address pair is not supported.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//!
CM_RESULT CmGetFirstIpAddr(
    __in CM_CONNECTION_HANDLE hConnection,
    __in const WCHAR* pszHost,
    __in ADDRESS_FAMILY AddrFamily,
    __in USHORT SrcPort,
    __in USHORT DstPort,
    __inout_bcount(*pcbAddressPair) CM_ADDRESS_PAIR* pAddressPair,
    __inout DWORD* pcbAddressPair);

//! Gets next address associated with the wanted destination host.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_CONNECTION if passed in connection is not valid.
//! CMRE_HOST_ADDRESS_ITERATION_NOT_STARTED if host address iteration has not
//!   been started with CmGetFirstIpAddr.
//! CMRE_NO_HOST_ADDRESSES if list of addresses has been exhausted.
//! CMRE_INSUFFICIENT_BUFFER if pAddressPair is too small to hold the address
//!   pair.  Required size is returned in pcbAddressPair.
//! CMRE_INVALID_VERSION if passed in version of address pair is not supported.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//!
CM_RESULT CmGetNextIpAddr(
    __in CM_CONNECTION_HANDLE hConnection,
    __inout_bcount(*pcbAddressPair) CM_ADDRESS_PAIR* pAddressPair,
    __inout DWORD* pcbAddressPair);

//! Gets the best CM result from the last connection selection. This API is
//! designed to be used by applications that depend on Winsock or WinInet for
//! connection selection, but need visibility into the CM result encountered by
//! those APIs during connection selection.  This API should be called only once
//! the Winsock or WinInet API returns.
//!
//! Returns:
//! CMRE_SUCCESS if at least one connection during the last connection iteration
//!   was successfully acquired and at least one IP address pair was found for
//!   for the required destination host.
//! Any other result indicates the best result in an attempt to acquire
//!   connection and find IP address pair.
//!
CM_RESULT CmGetConnectionSelectionResult(
    __in CM_SESSION_HANDLE hSession);

//
// Connection configuration data structures and APIs.
//

CM_CONST(CM_CONNECTION_NAME_LENGTH, 64);
CM_CONST(CM_CONNECTION_DESCRIPTION_LENGTH, 128);

//! The type of a connection.
//!
typedef GUID CM_CONNECTION_TYPE;

DEFINE_GUID(CMCT_UNKNOWN,   0x72fc7dc, 0x1d93, 0x40d1, 0x9b, 0xb0, 0x21, 0x14, 0xd7, 0xd7, 0x34, 0x34); // {072FC7DC-1D93-40d1-9BB0-2114D7D73434}

//! The unknown value of a characteristic can be used when a precise value is
//! not available at the time of connection configuration.  The value may be
//! dynamically updated by Connection Manager.
//!
CM_CONST(CM_UNKNOWN_CHARACTERISTIC_VALUE, 0xffffffff);

//! The connection configuration structure consists of two parts:  the
//! generic connection description and type specific connection information.
//!
typedef enum CM_TIME_BASED_AUTO_RECONNECT_ALGORITHM
{
    CMTR_DEFAULT,
    CMTR_NONE,
    CMTR_LINEAR,
    CMTR_EXPONENTIAL_RANDOMIZED_BACKOFF,

    CMTR_LAST

} CM_TIME_BASED_AUTO_RECONNECT_ALGORITHM;

//! Describes when connection is connected.
//!
typedef enum CM_CONNECTION_CONNECT_BEHAVIOR
{
    //! Default connect behavior, typically CMCB_ALWAYS_CONNECTED.
    //!
    CMCB_DEFAULT,

    //! Connection is connected whenever possible without need for outstanding
    //! request from application.
    //!
    CMCB_ALWAYS_CONNECTED,

    //! Connection is connected only on demand and disconnected if not being
    //! used.  Once an on demand connection is connected it can be shared by
    //! any other application permitted by security policy.
    //!
    CMCB_ON_DEMAND,

    //! Connection is CMCB_ALWAYS_CONNECTED when not roaming and CMCB_ON_DEMAND
    //! when roaming.
    //!
    CMCB_ON_DEMAND_WHEN_ROAMING,

    //! Connection requires policy to be connected and subsequently follows
    //! the same bahavior as CMCB_ON_DEMAND.
    //!
    CMCB_PER_POLICY,

    CMCB_LAST

} CM_CONNECTION_CONNECT_BEHAVIOR;

//! Infinite value can be used in specification of delays and timeouts.
//! 
CM_CONST(CM_INFINITE, 0xFFFFFFFF);

//! Default Idle Disconnect timeout value (in secs) for 
//! CMCB_ON_DEMAND connections. The default value will be mapped
//! to 30 secs.
//! 
CM_CONST(CM_DEFAULT_IDLE_DISCONNECT_TIMEOUT, 0xFFFFFFFF);

//! Describes configuration of every CM connection.
//!
typedef struct CM_CONNECTION_CONFIG
{
    DWORD Version;
    WCHAR szDescription[CM_CONNECTION_DESCRIPTION_LENGTH];
    CM_CONNECTION_TYPE Type;

    //! Initial values of characteristics.
    //!
    DWORD Characteristic[CMCH_LAST];

    CM_CONNECTION_CONNECT_BEHAVIOR ConnectBehavior;
    union
    {
        //! For CMCB_ON_DEMAND connections or other types that borrow from
        //! this model.
        //!
        DWORD IdleDisconnectTimeoutSec;

        //! For CMCB_ALWAYS_CONNECTED connections.
        //!
        struct
        {
            CM_TIME_BASED_AUTO_RECONNECT_ALGORITHM ReconnectAlg;
            DWORD DelaySec;
            DWORD Attempts;
            DWORD AttemptsExceededDelaySec;

        } AutoReconnect;
    };

    //! Connection will be connected only when enabled, otherwise it will
    //! remain disconnected.
    //!
    BOOL fEnabled;

    //! Connection type specific.
    //!
    DWORD cbTypeSpecificInfo;
    BYTE TypeSpecificInfo[1];

} CM_CONNECTION_CONFIG;

FORCEINLINE DWORD CmGetConnectionConfigNeededSize(DWORD cbTypeSpecificInfo)
{
    return offsetof(CM_CONNECTION_CONFIG, TypeSpecificInfo)
            + cbTypeSpecificInfo;
}

typedef enum CM_CONFIG_OPTION
{
    //! Causes the new configuration to be applied immediately, possibly
    //! affecting the state of the target (connection or policy).
    //!
    CMCO_IMMEDIATE_APPLY,

    //! Causes the new configuration to be applied opportunistically possibly
    //! avoiding affecting the state of the target if it is being used.
    //!
    CMCO_NON_IMMEDIATE_APPLY,

    CMCO_LAST

} CM_CONFIG_OPTION;

typedef struct CM_CONNECTION_NAME_LIST
{
    DWORD Version;
    DWORD cConnection;
    struct
    {
        WCHAR szName[CM_CONNECTION_NAME_LENGTH];

    } Connection[1];

} CM_CONNECTION_NAME_LIST;

DECLARE_HANDLE(CM_CONFIG_CHANGE_HANDLE);

//! Adds a new connection along with its settings.  The name of the connection
//! must be unique.
//!
//! Returns:
//! CMRE_INVALID_CONNECTION if name of connection is not valid.
//! CMRE_INVALID_PARAMETER if passed in parameter, other than connection, is not 
//!   valid.
//! CMRE_INVALID_CONNECTION_TYPE if type of connection is not handled by any of
//!   the loaded Connection Service Providers (CSPs).
//! CMRE_CONNECTION_ALREADY_EXISTS if connection of the same name already
//!   exists.
//! CMRE_OUT_OF_MEMORY if memory could not be allocated to complete operation.
//! CMRE_INVALID_VERSION if passed in version of connection configuration not
//!   supported.
//! CMRE_ACCESS_DENIED if caller doesn't have sufficient permissions to add
//!   connection configuration.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//! 
CM_RESULT CmAddConnectionConfig(
    __in const WCHAR* pszConnection,
    __in_bcount(cbConfig) CM_CONNECTION_CONFIG* pConfig,
    __in DWORD cbConfig);

//! Retrieves settings associated with an earlier configured connection.
//!
//! Returns:
// TODO: Document other possible returned results.
//! CMRE_ACCESS_DENIED if caller doesn't have sufficient permissions to add
//!   connection configuration.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//!
CM_RESULT CmGetConnectionConfig(
    __in const WCHAR* pszConnection,
    __inout_bcount(*pcbConfig) CM_CONNECTION_CONFIG* pConfig,
    __inout DWORD* pcbConfig);

//! Retrieves settings associated with an earlier configured connection
//! with the intention of updating them.  The returned change handle is
//! freed in the subsequent call to CmUpdateConnectionConfig.
//!
//! Returns:
// TODO: Document other possible returned results.
//! CMRE_ACCESS_DENIED if caller doesn't have sufficient permissions to get
//!   connection configuration.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//!
CM_RESULT CmGetToUpdateConnectionConfig(
    __in const WCHAR* pszConnection,
    __inout_bcount(*pcbConfig) CM_CONNECTION_CONFIG* pConfig,
    __inout DWORD* pcbConfig,
    __out CM_CONFIG_CHANGE_HANDLE* phConfig);

//! Updates settings associated with an existing connection and frees the
//! change handle.
//!
//! Returns:
// TODO: Document other possible returned results.
//! CMRE_ACCESS_DENIED if caller doesn't have sufficient permissions to update
//!   connection configuration.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//!
CM_RESULT CmUpdateConnectionConfig(
    __in CM_CONFIG_CHANGE_HANDLE hConfig,
    __in CM_CONFIG_OPTION Option,
    __in_bcount(cbConfig) CM_CONNECTION_CONFIG* pConfig,
    __in DWORD cbConfig);

//! Deletes the existing connection.
//!
//! Returns:
// TODO: Document other possible returned results.
//! CMRE_ACCESS_DENIED if caller doesn't have sufficient permissions to delete
//!   connection configuration.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//!
CM_RESULT CmDeleteConnectionConfig(
    __in const WCHAR* pszConnection);

//! Enumerates all configured connections.
//!
CM_RESULT CmEnumConnectionsConfig(
    __inout_bcount(*pcbNameList) CM_CONNECTION_NAME_LIST* pNameList,
    __inout DWORD* pcbNameList);

//! Enumerates all configured connections by type.
//!
CM_RESULT CmEnumConnectionsConfigByType(
    __in CM_CONNECTION_TYPE Type,
    __inout_bcount(*pcbNameList) CM_CONNECTION_NAME_LIST* pNameList,
    __inout DWORD* pcbNameList);

//
// Policy configuration data structures and APIs.
//

//! Describes device type used by connection.
//!
typedef GUID CM_CONNECTION_DEVICE_TYPE;

//! Describes network type used by connection.
//!
typedef GUID CM_CONNECTION_NETWORK_TYPE;

typedef enum CM_CONNECTION_SELECTION_TYPE
{
    CMST_CONNECTION_ALL,            //! Any connection.
    CMST_CONNECTION_NAME,           //! Connection specified by name.
    CMST_CONNECTION_TYPE,           //! Any connection of given type.
    CMST_CONNECTION_DEVICE_TYPE,    //! Any connection of given device type.
    CMST_CONNECTION_NETWORK_TYPE,   //! Any connection of given network type.

    CMST_LAST

} CM_CONNECTION_SELECTION_TYPE;

typedef struct CM_CONNECTION_SELECTION
{
    //
    // Note: this structure doesn't have an explicit version field.  It is
    // always embedded in another structure that contains a version field.
    // 
    
    CM_CONNECTION_SELECTION_TYPE Selection;
    union
    {
        //! No need to specify param for CMST_CONNECTION_ALL.

        //! For CMST_CONNECTION_NAME.
        WCHAR szName[CM_CONNECTION_NAME_LENGTH];

        //! For CMST_CONNECTION_TYPE.
        CM_CONNECTION_TYPE Type;

        //! For CMST_CONNECTION_DEVICE_TYPE.
        CM_CONNECTION_DEVICE_TYPE DeviceType;

        //! For CMST_CONNECTION_NETWORK_TYPE.
        CM_CONNECTION_NETWORK_TYPE NetworkType;

    };

} CM_CONNECTION_SELECTION;

CM_CONST(CM_ACCOUNT_NAME_LENGTH, 128); 

typedef enum CM_POLICY_TYPE
{
    //! Used to define application and/or host to a connection or connection
    //! list mappings policy.
    //!
    CMPT_CONNECTION_MAPPINGS,

    CMPT_ROAMING_CONNECTIONS,

    CMPT_DISABLED_CONNECTIONS,

    CMPT_LAST

} CM_POLICY_TYPE;

typedef struct CM_POLICY_CONFIG_KEY
{
    DWORD Version;
    CM_POLICY_TYPE Type;
    union
    {
        //! For CMPT_CONNECTION_MAPPINGS.
        struct
        {
            //! Application is identified by the account under which it
            //! runs.  A wildcard "*" can be used to match all accounts.
            //!
            WCHAR szAccount[CM_ACCOUNT_NAME_LENGTH];

            //! Identifies host for which the mapping applies.  A host can 
            //! be specified by name or IP address in square brackets
            //! ("[...]").  A wildcard "*" may be used to match prefix segments
            //! or all of host name, e.g. "*.live.com", will match
            //! "www.live.com", "maps.live.com".  A slash "/" following an IP
            //! address prefix specifies its size in bits, and thereby the
            //! network, e.g. "[157.56.0.0/16]", "[2001:0db8:1234::/48]".
            //!
            WCHAR szHost[CM_HOST_NAME_LENGTH];
            
        } ConnectionMappings;

        //! Some policies do not require any custom data in key.  These policies
        //! include CMPT_ROAMING_CONNECTIONS, CMPT_DISABLED_CONNECTIONS.
    };
} CM_POLICY_CONFIG_KEY;

typedef struct CM_POLICY_CONFIG_DATA
{
    DWORD Version;
    CM_POLICY_TYPE Type;
    union
    {
        //! For CMPT_CONNECTION_MAPPINGS.
        struct
        {
            //! Specifies if order in which connections are listed needs to
            //! be enforced.
            //!
            BOOL fUseConnectionsInOrder;

            //! Specifies number and connections in list.
            //!
            DWORD cConnection;
            CM_CONNECTION_SELECTION Connection[1];
            
        } ConnectionMappings;

        //! For CMPT_ROAMING_CONNECTIONS.
        struct
        {
            //! Specifies if roaming connections are enabled or disabled.
            //! By default, roaming connections are disabled.
            //!
            BOOL fEnable;
            
        } RoamingConnections;

        //! For CMPT_DISABLED_CONNECTIONS.
        struct
        {
            //! Specifies connections that are to be disabled.
            //!
            DWORD cConnection;
            CM_CONNECTION_SELECTION Connection[1];
            //!
            //! Note: Supporting only selection by CMST_CONNECTION_DEVICE_TYPE
            //! for CMCD_CELLULAR.
            
        } DisabledConnections;        
    };
} CM_POLICY_CONFIG_DATA;

FORCEINLINE DWORD CmGetPolicyConnectionMappingsDataNeededSize(DWORD cConnection)
{
    return sizeof(CM_POLICY_CONFIG_DATA)
            + (cConnection > 0 ? cConnection - 1 : 0 )
            * sizeof(CM_CONNECTION_SELECTION);
}

FORCEINLINE DWORD CmGetPolicyRoamingConnectionsDataNeededSize()
{
    return sizeof(CM_POLICY_CONFIG_DATA);
}

FORCEINLINE DWORD CmGetPolicyDisabledConnectionsDataNeededSize(DWORD cConnection)
{
    return sizeof(CM_POLICY_CONFIG_DATA)
            + (cConnection > 0 ? cConnection - 1 : 0 )
            * sizeof(CM_CONNECTION_SELECTION);
}

//! Retrieves policy Data given Key.
//!
//! Returns:
//!
//! CMRE_SUCCESS on success.
//! CMRE_INSUFFICIENT_BUFFER if size of pData, as described by pcbData,
//!   is too small to hold the policy associated with the supplied pKey.
//!   Required size is returned in pcbData.
//! CMRE_INVALID_PARAMETER if any parameter is not valid.
//! CMRE_UNEXPECTED if unexpected failure occurs.
//!
CM_RESULT CmGetPolicyConfig(
    __in_bcount(cbKey) CM_POLICY_CONFIG_KEY* pKey,
    __in DWORD cbKey,
    __out_bcount(*pcbData) CM_POLICY_CONFIG_DATA* pData,
    __inout DWORD* pcbData);

//! Retrieves policy Data with the intention of changing it with subsequent call
//! to CmUpdatePolicyConfig.  The returned CM_CONFIG_CHANGE_HANDLE is closed
//! with the call to CmUpdatePolicyConfig.  If the intent is to inspect
//! policy configuration, not change to change it, use CmGetPolicyConfig.
//!
//! Returns:
//!
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_PARAMETER if any parameter is not valid.
//! CMRE_UNEXPECTED if unexpected failure occurs.
//!
CM_RESULT CmGetToUpdatePolicyConfig(
    __in_bcount(cbKey) CM_POLICY_CONFIG_KEY* pKey,
    __in DWORD cbKey,
    __out_bcount(*pcbData) CM_POLICY_CONFIG_DATA* pData,
    __inout DWORD* pcbData,
    __out CM_CONFIG_CHANGE_HANDLE* phConfig);

//! Updates policy Data.  Upon return from this API the CM_CONFIG_CHANGE_HANDLE,
//! obtained from previous call to CmGetToUpdatePolicyConfig, will be closed
//! irrespective of returned result.
//!
CM_RESULT CmUpdatePolicyConfig(
    __in CM_CONFIG_CHANGE_HANDLE hConfig,
    __in_bcount(cbData) CM_POLICY_CONFIG_DATA* pData,
    __in DWORD cbData);

//! Enumerate all policy keys containing non-default data.
//!
//! Returns:
//!
//! CMRE_SUCCESS on success.
//! CMRE_NO_POLICIES if no policy keys exist that have non-default data.
//! CMRE_INSUFFICIENT_BUFFER if size of pKeys, as described by pcbKeys,
//!   is too small to hold all policies.  Required size is returned
//!   in pcbKeys.
//! CMRE_INVALID_PARAMETER if any parameter is not valid.
//! CMRE_UNEXPECTED if unexpected failure occurs.
//!
CM_RESULT CmEnumPolicyConfig(
    __inout_bcount(*pcbKeys) CM_POLICY_CONFIG_KEY* pKeys,
    __inout DWORD* pcbKeys);

//
// Connection status data structures and APIs.
//

//! Common CM_CONNECTION_DEVICE_TYPE types.
//!
//! Note: CSP specific header files may define other device types not listed
//! here.
//!
DEFINE_GUID(CMCD_UNKNOWN,   0x71a26171, 0x11ee, 0x4acb, 0x80, 0xa2, 0x63, 0xa7, 0x72, 0x40, 0xc9, 0x71); // {71A26171-11EE-4ACB-80A2-63A77240C971}
DEFINE_GUID(CMCD_CELLULAR,  0xf9a53167, 0x4016, 0x4198, 0x9b, 0x41, 0x86, 0xd9, 0x52, 0x2d, 0xc0, 0x19); // {F9A53167-4016-4198-9B41-86D9522DC019}
DEFINE_GUID(CMCD_ETHERNET,  0x97844272, 0xc7, 0x4572, 0xb2, 0xa, 0xd8, 0xd8, 0x61, 0xc0, 0x95, 0xf2); // {97844272-00C7-4572-B20A-D8D861C095F2}
DEFINE_GUID(CMCD_BLUETOOTH, 0x1d793123, 0x701a, 0x4fd0, 0xb6, 0xae, 0x9c, 0x3c, 0x57, 0xe9, 0x9c, 0x2c); // {1D793123-701A-4fd0-B6AE-9C3C57E99C2C}
DEFINE_GUID(CMCD_VIRTUAL,   0xeaa02ce5, 0x9c70, 0x4e87, 0x97, 0xfe, 0x55, 0xc9, 0xde, 0xc8, 0x47, 0xd4); // {1D793123-701A-4fd0-B6AE-9C3C57E99C2C}
//!
//! Other device types should be defined by CSPs that expose them in their
//! respective public header files.

//
// TODO: Move the above defined device types (except unknown) into respective
// TODO: CSP header files.
//

//! Common CM_CONNECTION_NETWORK_TYPE types.
//!
//! Note: CSP specific header files may define other network types not listed
//! here.
//!
DEFINE_GUID(CMCN_UNKNOWN,             0x6a1ee122, 0x1bb7, 0x4a46, 0x8c, 0x17, 0x85, 0xfb, 0xca, 0xe5, 0xa6, 0x7a); // {6A1EE122-1BB7-4a46-8C17-85FBCAE5A67A}
DEFINE_GUID(CMCN_CELLULAR_UNKNOWN,    0x1c9031ab, 0xd7cf, 0x4781, 0xa8, 0x31, 0xc4, 0x5d, 0xa7, 0x45, 0xf4, 0xad); // {1C9031AB-D7CF-4781-A831-C45DA745F4AD}
DEFINE_GUID(CMCN_CELLULAR_CSD,        0x4e7c6c6c, 0x54fb, 0x4bb2, 0x92, 0x3b, 0x94, 0x7a, 0xfb, 0x19, 0x99, 0x2a); // {4E7C6C6C-54FB-4bb2-923B-947AFB19992A}
DEFINE_GUID(CMCN_CELLULAR_GPRS,       0xafb7d659, 0xfc1f, 0x4ea5, 0xbd, 0xd0, 0xf, 0xda, 0x62, 0x67, 0x6d, 0x96); // // {AFB7D659-FC1F-4ea5-BDD0-0FDA62676D96}
DEFINE_GUID(CMCN_CELLULAR_1XRTT /* CDMA2000 */, 0xb1e700ae, 0xa62f, 0x49ff, 0x9b, 0xbe, 0xb8, 0x80, 0xc9, 0x95, 0xf2, 0x7d); // {B1E700AE-A62F-49ff-9BBE-B880C995F27D}
DEFINE_GUID(CMCN_CELLULAR_EDGE /* E-GPRS */, 0xc347f8ec, 0x7095, 0x423d, 0xb8, 0x38, 0x7c, 0x7a, 0x7f, 0x38, 0xcd, 0x3); // {C347F8EC-7095-423d-B838-7C7A7F38CD03}
DEFINE_GUID(CMCN_CELLULAR_WCDMA_UMTS, 0xa72f04c6, 0x9be6, 0x4151, 0xb5, 0xef, 0x15, 0xa5, 0x3e, 0x12, 0xc4, 0x82); // {A72F04C6-9BE6-4151-B5EF-15A53E12C482}
DEFINE_GUID(CMCN_CELLULAR_WCDMA_FOMA, 0xb8326098, 0xf845, 0x42f3, 0x80, 0x4e, 0x8c, 0xc3, 0xff, 0x7b, 0x50, 0xb4); // {B8326098-F845-42f3-804E-8CC3FF7B50B4}
DEFINE_GUID(CMCN_CELLULAR_1XEVDO,     0xdd42df39, 0xebdf, 0x407c, 0x81, 0x46, 0x16, 0x85, 0x41, 0x64, 0x1, 0xb2); // {DD42DF39-EBDF-407c-8146-1685416401B2}
DEFINE_GUID(CMCN_CELLULAR_HSPA_HSDPA, 0x47f7282, 0xbabd, 0x4893, 0xaa, 0x77, 0xb8, 0xb3, 0x12, 0x65, 0x7f, 0x8c); // {047F7282-BABD-4893-AA77-B8B312657F8C}
DEFINE_GUID(CMCN_CELLULAR_HSPA_HSUPA, 0x1536a1c6, 0xa4af, 0x423c, 0x88, 0x84, 0x6b, 0xdd, 0xa3, 0x65, 0x6f, 0x84); // {1536A1C6-A4AF-423c-8884-6BDDA3656F84}
DEFINE_GUID(CMCN_CELLULAR_WIMAX,      0x67effec1, 0xd649, 0x49d2, 0x8f, 0x98, 0x6f, 0x5e, 0xfe, 0xb9, 0x4, 0x55); // {67EFFEC1-D649-49d2-8F98-6F5EFEB90455}

DEFINE_GUID(CMCN_ETHERNET_UNKNOWN,    0x275ec68c, 0x4588, 0x4a30, 0x86, 0x96, 0xff, 0x13, 0x8, 0x34, 0x94, 0x8e); // {275EC68C-4588-4a30-8696-FF130834948E}
DEFINE_GUID(CMCN_ETHERNET_10MBPS,     0x97d3d1b3, 0x854a, 0x4c32, 0xbd, 0x1c, 0xc1, 0x30, 0x69, 0x7, 0x83, 0x70); // {97D3D1B3-854A-4c32-BD1C-C13069078370}
DEFINE_GUID(CMCN_ETHERNET_100MBPS,    0xa8f4fe66, 0x8d04, 0x43f5, 0x9d, 0xd2, 0x2a, 0x85, 0xbd, 0x21, 0x2, 0x9b); // {A8F4FE66-8D04-43f5-9DD2-2A85BD21029B}
DEFINE_GUID(CMCN_ETHERNET_GBPS,       0x556c1e6b, 0xb8d4, 0x448e, 0x83, 0x6d, 0x94, 0x51, 0xba, 0x4c, 0xce, 0x75); // {556C1E6B-B8D4-448e-836D-9451BA4CCE75}

DEFINE_GUID(CMCN_BLUETOOTH_UNKNOWN,   0x73e4eaef, 0xfce1, 0x4a95, 0xa6, 0xce, 0xba, 0x5d, 0xa2, 0xb8, 0xbf, 0xe2); // {73E4EAEF-FCE1-4a95-A6CE-BA5DA2B8BFE2}

DEFINE_GUID(CMCN_VIRTUAL_UNKNOWN,     0x7be37a57, 0x9abe, 0x4cd3, 0xb0, 0xee, 0x32, 0x5c, 0x72, 0x4, 0xed, 0xec); // {7BE37A57-9ABE-4cd3-B0EE-325C7204EDEC}
DEFINE_GUID(CMCN_VIRTUAL_VPN_PPTP,    0x824442fb, 0x9d58, 0x41d3, 0xab, 0xc8, 0xce, 0x9a, 0x42, 0x77, 0x3b, 0x77); // {824442FB-9D58-41d3-ABC8-CE9A42773B77}
DEFINE_GUID(CMCN_VIRTUAL_VPN_L2TP,    0x3eb42af3, 0x14cd, 0x4c10, 0xb0, 0xed, 0x19, 0xc6, 0x45, 0x73, 0xf5, 0xa3); // {3EB42AF3-14CD-4c10-B0ED-19C64573F5A3}

//!
//! Other network types should be defined by CSPs that expose them in their
//! respective public header files.

//
// TODO: Move the above defined network types (except unknown) into respective
// TODO: CSP header files.
//

//! Defines possible states of a connection.
//!
typedef enum CM_CONNECTION_STATE
{
    CMCS_DISCONNECTED = 0,
      CMCS_DISCONNECTED_UNAVAILABLE,    //! Equipment not ready, out of range.
      CMCS_DISCONNECTED_DISABLED,       //! Connection disabled by configuration.

    CMCS_CONNECTING = 100,
      CMCS_CONNECTING_ASSOCIATING,
      CMCS_CONNECTING_AUTHENTICATING,
      CMCS_CONNECTING_WAITING_FOR_IP,

    CMCS_CONNECTED = 200,
    
    CMCS_SUSPENDED = 300,

    CMCS_DISCONNECTING = 400,

    CMCS_LAST

} CM_CONNECTION_STATE;

//! Currently only used between CM client and CM service.
//!
typedef DWORD CM_CONNECTION_ID;

CM_CONST(CM_CONNECTION_ADAPTER_NAME_LENGTH, MAX_ADAPTER_NAME);

typedef struct CM_CONNECTION_DETAILS
{
    DWORD Version;
    WCHAR szName[CM_CONNECTION_NAME_LENGTH];
    WCHAR szDescription[CM_CONNECTION_DESCRIPTION_LENGTH];
    WCHAR szAdapter[CM_CONNECTION_ADAPTER_NAME_LENGTH];
    CM_CONNECTION_TYPE Type;
    CM_CONNECTION_DEVICE_TYPE Device;
    CM_CONNECTION_NETWORK_TYPE Network;
    CM_CONNECTION_STATE State;

    DWORD Characteristic[CMCH_LAST];

    DWORD cIpAddr;
    SOCKADDR_STORAGE IpAddr[1];

} CM_CONNECTION_DETAILS;

//! Retrieves real-time connection information, such as its state,
//! characteristics, etc. based on the connection handle retrieved from
//! CmGetFirstCandidateConnection and CmGetNextCandidateConnection.
//!
//! Returns:
//!
//! CMRE_SUCCESS on success.
//! CMRE_INSUFFICIENT_BUFFER if size of pDetails, as described by pcbDetails,
//!   is too small to hold the connection details.  Required size is returned
//!   in pcbDetails.
//! CMRE_INVALID_CONNECTION if passed in connection handle is not valid.
//! CMRE_INVALID_PARAMETER if any parameter other than hConnection is not valid.
//! CMRE_UNEXPECTED if unexpected failure occurs.
//!
CM_RESULT CmGetConnectionDetailsByHandle(
    __in CM_CONNECTION_HANDLE hConnection,
    __inout_bcount(*pcbDetails) CM_CONNECTION_DETAILS* pDetails,
    __inout DWORD* pcbDetails);

//! Retrieves real-time connection information, such as its state,
//! characteristics, etc. based on connection name retrieved from
//! CmEnumConnectionsConfig.
//!
//! Returns:
//!
//! CMRE_SUCCESS on success.
//! CMRE_INSUFFICIENT_BUFFER if size of pDetails, as described by pcbDetails,
//!   is too small to hold the connection details.  Required size is returned
//!   in pcbDetails.
//! CMRE_INVALID_CONNECTION if passed in connection name is not valid.
//! CMRE_INVALID_PARAMETER if any parameter other than pszConnection is not valid.
//! CMRE_UNEXPECTED if unexpected failure occurs.
//!
CM_RESULT CmGetConnectionDetailsByName(
    __in const WCHAR* pszConnection,
    __inout_bcount(*pcbDetails) CM_CONNECTION_DETAILS* pDetails,
    __inout DWORD* pcbDetails);

//! CmGetTypeSpecificInfoByConnectionName retrieves a blob of data
//! specific to the connection type. The format and size of the pInfo
//! buffer is determined by TypeSpecificOperationCode.
//!
//! Returns:
//!
//! CMRE_SUCCESS on success.
//! CMRE_INSUFFICIENT_BUFFER if size of pInfo, as described by *pcbInfo,
//!   is too small to hold the information.  Required size is returned
//!   in *pcbInfo.
//! CMRE_INVALID_CONNECTION if pszConnection is not valid.
//! CMRE_NOT_SUPPORTED if TypeSpecificOperationCode is not recognized.
//! CMRE_NOT_IMPLEMENTED if TypeSpecificOperationCode is not implemented by the provider.
//! CMRE_INVALID_PARAMETER if any parameter other than pszConnection is not valid.
//! CMRE_UNEXPECTED if unexpected failure occurs.
//!
CM_RESULT CmGetTypeSpecificInfoByConnectionName(
    __in_bcount(CM_CONNECTION_NAME_LENGTH) const WCHAR* pszConnection,
    __in DWORD                           TypeSpecificOperationCode,
    __out_bcount(*pcbInfo) VOID         *pInfo,
    __inout DWORD                       *pcbInfo);

//
// Notification data structures and APIs.
//

typedef enum CM_NOTIFICATION_TYPE
{
    CMNT_ALL = 0,

    //! Update of connection state.
    //!
    CMNT_CONNECTION_STATE = 100,
      CMNT_CONNECTION_STATE_CONNECTED,
      CMNT_CONNECTION_STATE_DISCONNECTED,

      CMNT_CONNECTION_STATE_LAST,

    //! Update of connection characteristic value.
    //!
    CMNT_CHARACTERISTIC_UPDATE = 200,

      CMNT_CHARACTERISTIC_UPDATE_LAST,

    //! Update to connection network type.
    //!
    CMNT_CONNECTION_NETWORK_TYPE = 300,

      CMNT_CONNECTION_NETWORK_TYPE_LAST,

    //! Update to connection type specific information.
    //!
    CMNT_CONNECTION_TYPE_SPECIFIC = 400,

      CMNT_CONNECTION_TYPE_SPECIFIC_LAST,

    //! Update to connection configuration.
    //!
    CMNT_CONNECTION_CONFIGURATION = 500,
      CMNT_CONNECTION_CONFIGURATION_ADDED,
      CMNT_CONNECTION_CONFIGURATION_UPDATED,
      CMNT_CONNECTION_CONFIGURATION_DELETED,

      CMNT_CONNECTION_CONFIGURATION_LAST,

    //! Change of system/connection state that implies availability of
    //! an existing or new connection.
    //!
    CMNT_SESSION_CONNECT_RETRY = 600,

      CMNT_SESSION_CONNECT_RETRY_LAST,

    //! Notifications describing progress in connecting a session.  Note that:
    //!
    //! 1. Client registering for this notification should expect to receive
    //!   both CM_NOTIFICATION::SelectionProgress and
    //!   CM_NOTIFICATION::StateUpdate.
    //! 2. Client should register for this notification prior to any action done
    //!   in the context of the session to avoid missing notifications.
    //!
    CMNT_SESSION_CONNECTION_SELECTION_PROGRESS = 700,

      CMNT_SESSION_CONNECTION_SELECTION_PROGRESS_LAST,

    CMNT_LAST

} CM_NOTIFICATION_TYPE;

typedef enum CM_SESSION_CONNECT_RETRY_REASON
{
    CMRR_CONNECTION_CONNECTED,
    CMRR_CONNECTION_AVAILABLE_TO_CONNECT,
    
    CMRR_LAST

} CM_SESSION_CONNECT_RETRY_REASON;

typedef enum CM_SESSION_CONNECTION_SELECTION_PROGRESS_ACTION
{
    CMSA_ACQUIRE_BEGIN,
    CMSA_ACQUIRE_END,
    CMSA_RELEASE_BEGIN,
    CMSA_RELEASE_END,

    CMSA_LAST

} CM_SESSION_CONNECTION_SELECTION_PROGRESS_ACTION;

typedef struct CM_NOTIFICATIONS_LISTENER_REGISTRATION
{
    DWORD Version;

    //! Notifications event must be manual-reset event.  The event is signaled
    //! when the first notification arrives on the listener's notifications
    //! queue and will keep the event signaled until all notifications have
    //! been retrieved by the listener.
    //!
    HANDLE hNotificationsAvailableEvent;
    
    DWORD cRegistration;
    struct
    {
        CM_NOTIFICATION_TYPE NotificationType;
        union
        {
            //! For CMNT_SESSION_CONNECT_RETRY, 
            //! CMNT_SESSION_CONNECTION_SELECTION_PROGRESS.
            //!
            CM_SESSION_HANDLE hSession;

            //! For all others than above.
            //!
            CM_CONNECTION_SELECTION Connection;
        };

    } Registration[1];
    
} CM_NOTIFICATIONS_LISTENER_REGISTRATION;

FORCEINLINE DWORD CmGetNotificationsListenerRegistrationNeededSize(
    DWORD cRegistration)
{
    return (sizeof(CM_NOTIFICATIONS_LISTENER_REGISTRATION) -
            offsetof(CM_NOTIFICATIONS_LISTENER_REGISTRATION, cRegistration))
            * cRegistration + offsetof(CM_NOTIFICATIONS_LISTENER_REGISTRATION,
                    Registration);
}

typedef struct CM_NOTIFICATION
{
    DWORD Version;
    CM_NOTIFICATION_TYPE Type;
    union
    {
        //! For CMNT_CONNECTION_STATE_xxx,
        //! CMNT_SESSION_CONNECTION_SELECTION_PROGRESS.
        //!
        struct
        {
            WCHAR szConnection[CM_CONNECTION_NAME_LENGTH];
            CM_CONNECTION_STATE State;
            CM_RESULT LastResult;
            
        } StateUpdate;

        //! For CMNT_CHARACTERISTIC_UPDATE_xxx.
        //!
        struct
        {
            WCHAR szConnection[CM_CONNECTION_NAME_LENGTH];
            CM_CHARACTERISTIC Characteristic;
            DWORD Value;

        } CharacteristicUpdate;

        //! For CMNT_CONNECTION_NETWORK_TYPE_xxx.
        //!
        struct
        {
            WCHAR szConnection[CM_CONNECTION_NAME_LENGTH];
            CM_CONNECTION_NETWORK_TYPE Network;

        } NetworkUpdate;
        
        //! For CMNT_CONNECTION_TYPE_SPECIFIC_xxx.
        //!
        struct
        {
            WCHAR szConnection[CM_CONNECTION_NAME_LENGTH];
            DWORD cbData;
            BYTE Data[1];

        } TypeSpecific;

        //! For CMNT_CONNECTION_CONFIGURATION_xxx.
        //!
        struct
        {
            WCHAR szConnection[CM_CONNECTION_NAME_LENGTH];

        } ConfigUpdate;

        //! For CMNT_SESSION_CONNECT_RETRY_xxx.
        //!
        struct
        {
            CM_SESSION_CONNECT_RETRY_REASON Reason;

        } Retry;

        //! For CMNT_SESSION_CONNECTION_SELECTION_PROGRESS_xxx.
        //!
        struct
        {
            CM_SESSION_CONNECTION_SELECTION_PROGRESS_ACTION Action;
            WCHAR szConnection[CM_CONNECTION_NAME_LENGTH];
            CM_RESULT Result;
            
        } SelectionProgress;
    };

} CM_NOTIFICATION;

//! Notifications listener handle. 
//!
DECLARE_HANDLE(CM_NOTIFICATIONS_LISTENER_HANDLE);

//! Registers notifications listener.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_PARAMETER if any parameter is not valid.
//! CMRE_OUT_OF_MEMORY if memory needed to register listener is not available.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//!
CM_RESULT CmRegisterNotificationsListener(
    __in_bcount(cbRegistration) CM_NOTIFICATIONS_LISTENER_REGISTRATION* pRegistration,
    __in DWORD cbRegistration,
    __out CM_NOTIFICATIONS_LISTENER_HANDLE* phListener);

//! Unregisters notifications listener.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INVALID_PARAMETER if any parameter is not valid.
//! CMRE_UNEXPECTED if unexpected failure occurred.
//!
CM_RESULT CmUnregisterNotificationsListener(
    __in CM_NOTIFICATIONS_LISTENER_HANDLE hListener);

//! Retrieves next queued notification.
//!
//! Returns:
//! CMRE_SUCCESS on success.
//! CMRE_INSUFFICIENT_BUFFER if pNotification is too small to hold the
//!   notification.  Required size is returned in pcbNotification.
//! CMRE_NO_NOTIFICATIONS if there are no queued notifications.
//! CMRE_INVALID_PARAMETER if any parameter is not valid.
//! CMRE_UNEXPECTED if unexpected failure occurs.
//!
CM_RESULT CmGetNotification(
    __in CM_NOTIFICATIONS_LISTENER_HANDLE hListener,
    __inout_bcount_opt(*pcbNotification) CM_NOTIFICATION* pNotification,
    __inout DWORD* pcbNotification);

//
// CM extensions.
//

//! Retrieves the CM_SESSION_HANDLE associated with the specified SOCKET.
//!
//! Returns:
//! The CM_SESSION_HANDLE associated with the specified SOCKET.
//! One will be created if one did not already exist.
//! A NULL is returned on failure.
//!
CM_SESSION_HANDLE WSAGetCmSession(SOCKET s);

//
// Asset control related data structures and APIs.
//

typedef enum CM_ACCESS_TYPE_BIT_FLAG
{
    //! Right to acquire a non-roaming connection.
    CMAT_ACQUIRE_NON_ROAMING    = 0x00000001,

    //! Right to acquire a roaming connection.
    CMAT_ACQUIRE_ROAMING        = 0x00000002,

    //! Right to acquire connection regardless or roaming state.
    CMAT_ACQUIRE                = 0x00000003,

    //! Right to create a new connection.
    CMAT_CREATE                 = 0x00000004,

    //! Right to disconnect a connection.
    CMAT_DISCONNECT             = 0x00000008,

    //! Right to establish (connect) CM connection in a non-roaming state.
    CMAT_CONNECT_NON_ROAMING    = 0x00000010,

    //! Right to establish (connect) CM connection in a roaming state.
    CMAT_CONNECT_ROAMING        = 0x00000020,

    //! Right to establish (connect) CM connection regardless or roaming state.
    CMAT_CONNECT                = 0x00000030,

    //! Right to perform any operation on CM connection.
    CMAT_ALL                    = 0xC000003F

} CM_ACCESS_TYPE_BIT_FLAG;

//DEFINE_GUID(CE_POLICY_RESOURCE_TYPE_CM_CONNECTION, 0xb482ff23, 0x2804, 0x4234, 0xbb, 0xe1, 0xef, 0xf1, 0x8a, 0xb6, 0x94, 0x8a); // {B482FF23-2804-4234-BBE1-0EF18AB6948A}

#undef CM_CONST

#ifdef __cplusplus
}
#endif

#endif // _CmNet_h_

