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

Module Name:

    netioapi.h

Abstract:

    This module contains definitions for version agnostic IP helper APIs.


Environment:

    User mode or kernel mode.

    In user mode this file should be included from iphlpapi.h,
    after including the following headers:

    #include <ws2def.h> 
    #include <ws2ipdef.h>

    In kernel mode the following files should be included.
    
    #include <ntddk.h>

    For all APIs, the caller IRQL should be less than DISPATCH_LEVEL.

Notes:

    Please follow these notes to maintain consistency within this API set,
    as well as across the legacy IP helper API:
    
    1. Express objects and functions in terms of MIB operations if possible.
       E.g. MIB_UNICASTIPADDRESS_ROW structure is associated with the 
       GetUnicastIpAddress() function.

    2. Use the NETIO/RTL coding convention for naming structures and functions.
       When modifying a structure with a legacy IP helper API counterpart,
       try to maintain the same name (without abbreviations).
       The hungarian convention must not be used and, for structure fields,
       the structure name need not prefix the field.

    3. For versioning a new structure or API,
       append a version number to the constructs.

    4. The functions in this file are grouped by the object they operate upon.
       Within the group, they are sorted alphabetically.

--*/

#ifndef _NETIOAPI_H_
#define _NETIOAPI_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

//
// General types.
//

//
// Nameless structure/union.
//
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4214)

#ifndef ANY_SIZE
#define ANY_SIZE 1
#endif

#ifdef __IPHLPAPI_H__

//
// User Mode.  This file should be included from iphlpapi.h
// User should include ws2ipdef.h to use these APIs.
//

#define NETIO_STATUS DWORD
#define NETIO_SUCCESS(x) ((x) == NO_ERROR)
#define NETIOAPI_API_ WINAPI

#else

//
// Kernel Mode.
//

#include <ws2def.h>
#include <ws2ipdef.h>
#include <ifdef.h>
#include <nldef.h>

#define NETIO_STATUS NTSTATUS
#define NETIO_SUCCESS(x) NT_SUCCESS(x)
#define NETIOAPI_API_ NTAPI

#endif

#define NETIOAPI_API NETIO_STATUS NETIOAPI_API_

typedef enum _MIB_NOTIFICATION_TYPE {
    //
    // ParameterChange.
    //
    MibParameterNotification,
    //
    // Addition.
    //
    MibAddInstance,
    //
    // Deletion.
    //
    MibDeleteInstance,
    //
    // Initial notification.
    // 
    MibInitialNotification,
} MIB_NOTIFICATION_TYPE, *PMIB_NOTIFICATION_TYPE;

//
// Interface management routines.
//

//
// The MIB structure for Interface management routines.
//

#ifdef _WS2IPDEF_ 
#include <ntddndis.h>

typedef struct _MIB_IF_ROW2 {
    //
    // Key structure.  Sorted by preference.
    //
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex; 

    //
    // Read-Only fields.
    //
    GUID InterfaceGuid;
    WCHAR Alias[IF_MAX_STRING_SIZE + 1]; 
    WCHAR Description[IF_MAX_STRING_SIZE + 1];
    ULONG PhysicalAddressLength;
    UCHAR PhysicalAddress[IF_MAX_PHYS_ADDRESS_LENGTH];
    UCHAR PermanentPhysicalAddress[IF_MAX_PHYS_ADDRESS_LENGTH];    

    ULONG Mtu;
    IFTYPE Type;                // Interface Type.
    TUNNEL_TYPE TunnelType;     // Tunnel Type, if Type = IF_TUNNEL.
    NDIS_MEDIUM MediaType; 
    NDIS_PHYSICAL_MEDIUM PhysicalMediumType; 
    NET_IF_ACCESS_TYPE AccessType;
    NET_IF_DIRECTION_TYPE DirectionType;
    struct {
        BOOLEAN HardwareInterface : 1;
        BOOLEAN FilterInterface : 1;
        BOOLEAN ConnectorPresent : 1;
        BOOLEAN NotAuthenticated : 1;
        BOOLEAN NotMediaConnected : 1;
        BOOLEAN Paused : 1;
        BOOLEAN LowPower : 1;
        BOOLEAN EndPointInterface : 1;
    } InterfaceAndOperStatusFlags;
    
    IF_OPER_STATUS OperStatus;  
    NET_IF_ADMIN_STATUS AdminStatus;
    NET_IF_MEDIA_CONNECT_STATE MediaConnectState;
    NET_IF_NETWORK_GUID NetworkGuid;
    NET_IF_CONNECTION_TYPE ConnectionType; 

    //
    // Statistics.
    //
    ULONG64 TransmitLinkSpeed;
    ULONG64 ReceiveLinkSpeed;

    ULONG64 InOctets;
    ULONG64 InUcastPkts;
    ULONG64 InNUcastPkts;
    ULONG64 InDiscards;
    ULONG64 InErrors;
    ULONG64 InUnknownProtos;
    ULONG64 InUcastOctets;      
    ULONG64 InMulticastOctets;  
    ULONG64 InBroadcastOctets; 
    ULONG64 OutOctets;
    ULONG64 OutUcastPkts;
    ULONG64 OutNUcastPkts;
    ULONG64 OutDiscards;
    ULONG64 OutErrors;
    ULONG64 OutUcastOctets;     
    ULONG64 OutMulticastOctets; 
    ULONG64 OutBroadcastOctets;   
    ULONG64 OutQLen; 
} MIB_IF_ROW2, *PMIB_IF_ROW2;

typedef struct _MIB_IF_TABLE2 {
    ULONG NumEntries;
    MIB_IF_ROW2 Table[ANY_SIZE];
} MIB_IF_TABLE2, *PMIB_IF_TABLE2;

NETIOAPI_API
GetIfEntry2(
    IN OUT PMIB_IF_ROW2 Row
    );
/*++

Routine Description:

    Retrieves information for the specified interface on the local computer. 

Arguments:

    Row - Supplies a MIB_IF_ROW2 structure with either the Luid or Index
        initialized to that of the interface for which to retrieve 
        information.      
    
Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    On input, the following key fields of Row must be initialized:
    1.  At least one of InterfaceLuid or InterfaceIndex must be specified.

    On output, the remaining fields of Row are filled in.

--*/

NETIOAPI_API
GetIfTable2(
    OUT PMIB_IF_TABLE2 *Table
    );
/*++

Routine Description:

    Retrieves the MIB-II interface table. 

Arguments:

    Table - Returns the table of interfaces in a MIB_IFTABLE2 structure.
        Use FreeMibTable to free this buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    The API allocates the buffer for Table.  Use FreeMibTable to free it. 

--*/

typedef enum _MIB_IF_TABLE_LEVEL {
    MibIfTableNormal,
    MibIfTableRaw
} MIB_IF_TABLE_LEVEL, *PMIB_IF_TABLE_LEVEL;

NETIOAPI_API
GetIfTable2Ex(
    IN MIB_IF_TABLE_LEVEL Level,
    OUT PMIB_IF_TABLE2 *Table
    );
/*++

Routine Description:

    Retrieves the MIB-II interface table. 

Arguments:

    Table - Returns the table of interfaces in a MIB_IFTABLE2 structure.
        Use FreeMibTable to free this buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    The API allocates the buffer for Table.  Use FreeMibTable to free it. 

--*/

//
// IpInterface management routines.
//

//
// The MIB structure for Network layer Interface management routines.
//
typedef struct _MIB_IPINTERFACE_ROW {
    //
    // Key Structure;
    //
    ADDRESS_FAMILY Family;
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;

    //
    // Read-Write fields.
    //

    //
    // Fields currently not exposed.
    //
    ULONG MaxReassemblySize;
    ULONG64 InterfaceIdentifier;
    ULONG MinRouterAdvertisementInterval;
    ULONG MaxRouterAdvertisementInterval;

    //
    // Fileds currently exposed.
    //       
    BOOLEAN AdvertisingEnabled;
    BOOLEAN ForwardingEnabled;
    BOOLEAN WeakHostSend;
    BOOLEAN WeakHostReceive;
    BOOLEAN UseAutomaticMetric;
    BOOLEAN UseNeighborUnreachabilityDetection;   
    BOOLEAN ManagedAddressConfigurationSupported;
    BOOLEAN OtherStatefulConfigurationSupported;
    BOOLEAN AdvertiseDefaultRoute;
    
    NL_ROUTER_DISCOVERY_BEHAVIOR RouterDiscoveryBehavior;
    ULONG DadTransmits;         // DupAddrDetectTransmits in RFC 2462.    
    ULONG BaseReachableTime;
    ULONG RetransmitTime;
    ULONG PathMtuDiscoveryTimeout; // Path MTU discovery timeout (in ms).
    
    NL_LINK_LOCAL_ADDRESS_BEHAVIOR LinkLocalAddressBehavior;
    ULONG LinkLocalAddressTimeout; // In ms.
    ULONG ZoneIndices[ScopeLevelCount]; // Zone part of a SCOPE_ID.
    ULONG SitePrefixLength;
    ULONG Metric;
    ULONG NlMtu;    

    //
    // Read Only fields.
    //
    BOOLEAN Connected;
    BOOLEAN SupportsWakeUpPatterns;   
    BOOLEAN SupportsNeighborDiscovery;
    BOOLEAN SupportsRouterDiscovery;
    
    ULONG ReachableTime;

    NL_INTERFACE_OFFLOAD_ROD TransmitOffload;
    NL_INTERFACE_OFFLOAD_ROD ReceiveOffload; 

    //
    // Disables using default route on the interface. This flag
    // can be used by VPN clients to restrict Split tunnelling.
    //
    BOOLEAN DisableDefaultRoutes;
} MIB_IPINTERFACE_ROW, *PMIB_IPINTERFACE_ROW;

typedef struct _MIB_IPINTERFACE_TABLE {
    ULONG NumEntries;
    MIB_IPINTERFACE_ROW Table[ANY_SIZE];
} MIB_IPINTERFACE_TABLE, *PMIB_IPINTERFACE_TABLE;

typedef struct _MIB_IFSTACK_ROW {
    NET_IFINDEX HigherLayerInterfaceIndex;
    NET_IFINDEX LowerLayerInterfaceIndex;
} MIB_IFSTACK_ROW, *PMIB_IFSTACK_ROW;

typedef struct _MIB_INVERTEDIFSTACK_ROW {
    NET_IFINDEX LowerLayerInterfaceIndex;
    NET_IFINDEX HigherLayerInterfaceIndex;
} MIB_INVERTEDIFSTACK_ROW, *PMIB_INVERTEDIFSTACK_ROW;

typedef struct _MIB_IFSTACK_TABLE {
    ULONG NumEntries;
    MIB_IFSTACK_ROW Table[ANY_SIZE];
} MIB_IFSTACK_TABLE, *PMIB_IFSTACK_TABLE;

typedef struct _MIB_INVERTEDIFSTACK_TABLE {
    ULONG NumEntries;
    MIB_INVERTEDIFSTACK_ROW Table[ANY_SIZE];
} MIB_INVERTEDIFSTACK_TABLE, *PMIB_INVERTEDIFSTACK_TABLE;

typedef
VOID
(*PIPINTERFACE_CHANGE_CALLBACK) (
    IN PVOID CallerContext,
    IN PMIB_IPINTERFACE_ROW Row OPTIONAL,
    IN MIB_NOTIFICATION_TYPE NotificationType
    );

NETIOAPI_API
GetIfStackTable(
    OUT PMIB_IFSTACK_TABLE *Table
    );

NETIOAPI_API
GetInvertedIfStackTable(
    OUT PMIB_INVERTEDIFSTACK_TABLE *Table
    );

NETIOAPI_API
GetIpInterfaceEntry(
    IN OUT PMIB_IPINTERFACE_ROW Row
    );
/*++

Routine Description:

    Retrieves IP information for the specified interface on the local computer.
    
Arguments:

    Row - Supplies a MIB_IPINTERFACE_ROW structure with either the Luid or
        Index initialized to that of the interface for which to retrieve 
        information. 
    
Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    On input, the following key fields of Row must be initialized:
    1. Family: it must be either AF_INET or AF_INET6
    2. At least one of InterfaceLuid or InterfaceIndex must be specified.

    On output, the remaining fields of Row are filled in.

--*/

NETIOAPI_API
GetIpInterfaceTable(
    IN ADDRESS_FAMILY Family,
    OUT PMIB_IPINTERFACE_TABLE *Table
    );
/*++

Routine Description:

    Retrieves the network-layer interface table. 

Arguments:

    Family - Supplies the address family.

        AF_INET: Only returns IPv4 MIB entries.

        AF_INET6: Only returns IPv6 MIB entries.

        AF_UNSPEC: Returns both IPv4 and IPv6 MIB entries.

    Table - Returns the table of interfaces in a MIB_IPINTERFACE_TABLE
        structure.  Use FreeMibTable to free this buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    The API allocates the buffer for Table.  Use FreeMibTable to free it.

--*/

VOID
NETIOAPI_API_
InitializeIpInterfaceEntry(
    IN OUT PMIB_IPINTERFACE_ROW Row
    );
/*++

Routine Description:

    Initialize the MIB_IPINTERFACE_ROW entry for use in SetIpInterfaceRow.

Arguments:

    Row - Returns an initialized MIB_IPINTERFACE_ROW structure. 

Return Value:

    None. 

Notes:

    InitializeIpInterfaceEntry must be used to initialize the fields of
    MIB_IPINTERFACE_ROW with default values.  The caller can then update the
    fields it wishes to modify and invoke SetIpInterfaceEntry.
        
--*/

NETIOAPI_API
NotifyIpInterfaceChange(
    IN ADDRESS_FAMILY Family,
    IN PIPINTERFACE_CHANGE_CALLBACK Callback,
    IN PVOID CallerContext,    
    IN BOOLEAN InitialNotification,
    IN OUT HANDLE *NotificationHandle
    );
/*++

Routine Description:

    Register for notification for IP interface changes.

Arguments:

    Family - Supplies the address family. 

        AF_INET: Only register for IPv4 change notifications.

        AF_INET6: Only register for IPv6 change notifications.

        AF_UNSPEC: Register for both IPv4 and IPv6 change notifications.

    Callback - Supplies a callback function.  This function will be invoked
        when an interface notification is received.

    CallerContext - Provides the user specific caller context.  This context 
        will be supplied to the callback function.

    InitialNotification - Supplies a boolean to indicate whether an 
        initialization notification should be provided. 

    NotificationHandle - Returns a handle to the notification registration. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    1. Invokation of the callback function is serialized.

    2. Use CancelMibChangeNotify2 to deregister for change notifications.

--*/

NETIOAPI_API
SetIpInterfaceEntry(
    IN OUT PMIB_IPINTERFACE_ROW Row
    );
/*++

Routine Description:

    Set the properties of an IP interface. 

Arguments:

    Row - Supplies a MIB_IPINTERFACE_ROW structure. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes: 

    InitializeIpInterfaceEntry must be used to initialize the fields of
    MIB_IPINTERFACE_ROW with default values.  The caller can then update the
    fields it wishes to modify and invoke SetIpInterfaceEntry.

    On input, the following key fields of Row must be initialized after
    invoking InitializeIpInterfaceEntry:
    1. Family: To AF_INET or AF_INET6.
    2. At least one of InterfaceLuid or InterfaceIndex must be specified.   

--*/


//
// Unicast address management routines.
//

//
// The structure for unicast IP Address management.
//
typedef struct _MIB_UNICASTIPADDRESS_ROW {
    //
    // Key Structure.
    //
    SOCKADDR_INET Address;
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;

    // 
    // Read-Write Fileds.
    //
    NL_PREFIX_ORIGIN PrefixOrigin;
    NL_SUFFIX_ORIGIN SuffixOrigin;    
    ULONG ValidLifetime;
    ULONG PreferredLifetime;
    UINT8 OnLinkPrefixLength;
    BOOLEAN SkipAsSource;

    //
    // Read-Only Fields.
    //
    NL_DAD_STATE DadState;
    SCOPE_ID ScopeId;
    LARGE_INTEGER CreationTimeStamp;    
} MIB_UNICASTIPADDRESS_ROW, *PMIB_UNICASTIPADDRESS_ROW;

typedef struct _MIB_UNICASTIPADDRESS_TABLE {
    ULONG NumEntries;
    MIB_UNICASTIPADDRESS_ROW Table[ANY_SIZE];
} MIB_UNICASTIPADDRESS_TABLE, *PMIB_UNICASTIPADDRESS_TABLE;

typedef
VOID
(*PUNICAST_IPADDRESS_CHANGE_CALLBACK) (
    IN PVOID CallerContext,
    IN PMIB_UNICASTIPADDRESS_ROW Row OPTIONAL,
    IN MIB_NOTIFICATION_TYPE NotificationType
    );
    
NETIOAPI_API
CreateUnicastIpAddressEntry(
    IN CONST MIB_UNICASTIPADDRESS_ROW *Row
    );
/*++

Routine Description:

    Create a unicast IP address entry on the local computer. 

Arguments:

    Row - Supplies a MIB_UNICASTIPADDRESS_ROW structure. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes: 

    InitializeUnicastIpAddressEntry must be used to initialize the fields of
    MIB_UNICASTIPADDRESS_ROW with default values.  The caller can then update
    the fields it wishes to modify and invoke CreateIpInterfaceEntry.

    On input, the following key fields of Row must be initialized after
    invoking InitializeUnicastIpAddressEntry:
    1. Address to a valid IPv4 or IPv6 unicast address.
    2. At least one of InterfaceLuid or InterfaceIndex must be specified.   

--*/

NETIOAPI_API
DeleteUnicastIpAddressEntry(
    IN CONST MIB_UNICASTIPADDRESS_ROW *Row
    );
/*++

Routine Description:

    Delete a unicast IP address entry on the local computer. 

Arguments:

    Row - Supplies a MIB_UNICASTIPADDRESS_ROW structure. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes: 

    On input, the following key fields of Row must be initialized:
    1. Address to a valid IPv4 or IPv6 unicast address.
    2. At least one of InterfaceLuid or InterfaceIndex must be specified.   

--*/

NETIOAPI_API
GetUnicastIpAddressEntry(
    IN OUT PMIB_UNICASTIPADDRESS_ROW Row
    );
/*++

Routine Description:

    Retrieves information for the specified unicast IP address entry on the 
        local computer. 

Arguments:

    Address - Supplies a MIB_UNICASTIPADDRESS_ROW structure. 
    
Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    On input, the following key fields of Row must be initialized:
    1. Address to a valid IPv4 or IPv6 unicast address.
    2. At least one of InterfaceLuid or InterfaceIndex must be specified.

    On output, the remaining fields of Row are filled in.

--*/

NETIOAPI_API
GetUnicastIpAddressTable(
    IN ADDRESS_FAMILY Family,
    OUT PMIB_UNICASTIPADDRESS_TABLE *Table
    );
/*++

Routine Description:

    Retrieves the unicast IP address table on a local computer. 

Arguments:

    Family - Supplies the address family.

        AF_INET: Only returns IPv4 unicast addresses.

        AF_INET6: Only returns IPv6 unicast addresses.

        AF_UNSPEC: Returns both IPv4 and IPv6 unicast addresses.

    Table - Returns the table of unicast IP addresses in a
        MIB_UNICASTIPADDRESS_TABLE Structure.  Use FreeMibTable to free this
        buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    The API allocates the buffer for Table.  Use FreeMibTable to free it.

--*/

VOID
NETIOAPI_API_
InitializeUnicastIpAddressEntry(
    OUT PMIB_UNICASTIPADDRESS_ROW Row
    );
/*++

Routine Description:

    Initialize the MIB_UNICASTIPADDRESS_ROW entry for use in 
    CreateUnicastIpAddressEntry and SetUnicastIpAddressEntry.

Arguments:

    Address - Returns an initialized MIB_UNICASTIPADDRESS_ROW structure. 

Return Value:

    None. 

Notes:

    InitializeUnicastIpAddressEntry must be used to initialize the fields of
    MIB_UNICASTIPADDRESS_ROW with default values.  The caller can then update
    the fields it wishes to modify and invoke CreateUnicastIpAddressEntry or
    SetUnicastIpAddressEntry.
        
--*/


NETIOAPI_API
NotifyUnicastIpAddressChange(
    IN ADDRESS_FAMILY Family,
    IN PUNICAST_IPADDRESS_CHANGE_CALLBACK Callback,
    IN PVOID CallerContext,    
    IN BOOLEAN InitialNotification,
    IN OUT HANDLE *NotificationHandle
    );
/*++

Routine Description:

    Register for notification for unicast IP address changes.

Arguments:

    Family - Supplies the address family. 

        AF_INET: Only register for IPv4 change notifications.

        AF_INET6: Only register for IPv6 change notifications.

        AF_UNSPEC: Register for both IPv4 and IPv6 change notifications.

    Callback - Supplies a callback function.  This function will be invoked
        when an unicast IP address notification is received.

    CallerContext - Provides the user specific caller context.  This context 
        will be supplied to the callback function.

    InitialNotification - Supplies a boolean to indicate whether an 
        initialization notification should be provided. 

    NotificationHandle - Returns a handle to the notification registration. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    1. Invokation of the callback function is serialized.

    2. Use CancelMibChangeNotify2 to deregister for change notifications.

--*/

typedef
VOID
(*PSTABLE_UNICAST_IPADDRESS_TABLE_CALLBACK) (
    IN PVOID CallerContext,
    IN PMIB_UNICASTIPADDRESS_TABLE AddressTable
    );
    
NETIOAPI_API
NotifyStableUnicastIpAddressTable(
    IN ADDRESS_FAMILY Family,
    IN OUT PMIB_UNICASTIPADDRESS_TABLE* Table,
    IN PSTABLE_UNICAST_IPADDRESS_TABLE_CALLBACK CallerCallback,
    IN PVOID CallerContext,
    IN OUT HANDLE *NotificationHandle
    );

NETIOAPI_API
SetUnicastIpAddressEntry(
    IN CONST MIB_UNICASTIPADDRESS_ROW *Row
    );
/*++

Routine Description:

    Set the properties of an unicast IP address. 

Arguments:

    Address - Supplies a MIB_UNICASTIPADDRESS_ROW structure. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes: 

    InitializeUnicastIpAddressEntry must be used to initialize the fields of
    MIB_UNICASTIPADDRESS_ROW with default values.  The caller can then update
    the fields it wishes to modify and invoke SetUnicastIpAddressEntry.

    On input, the following key fields of Row must be initialized after
    invoking InitializeUnicastIpAddressEntry:    
    1. Address to a valid IPv4 or IPv6 unicast address.
    2. At least one of InterfaceLuid or InterfaceIndex must be specified.     

--*/

//
// Anycast address management routines.
//

typedef struct _MIB_ANYCASTIPADDRESS_ROW {
    //
    // Key Structure.
    //
    SOCKADDR_INET Address;
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;

    //
    // Read-Only Fields.
    //
    SCOPE_ID ScopeId;
} MIB_ANYCASTIPADDRESS_ROW, *PMIB_ANYCASTIPADDRESS_ROW; 

typedef struct _MIB_ANYCASTIPADDRESS_TABLE {
    ULONG NumEntries;
    MIB_ANYCASTIPADDRESS_ROW Table[ANY_SIZE];
} MIB_ANYCASTIPADDRESS_TABLE, *PMIB_ANYCASTIPADDRESS_TABLE;
    
NETIOAPI_API
CreateAnycastIpAddressEntry(
    IN CONST MIB_ANYCASTIPADDRESS_ROW *Row
    );
/*++

Routine Description:

    Create an anycast IP address entry on the local computer. 

Arguments:

    Address - Supplies a MIB_ANYCASTIPADDRESS_ROW structure. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes: 

    On input, the following key fields of Row must be initialized:
    1. Address to a valid IPv4 or IPv6 anycast address.
    2. At least one of InterfaceLuid or InterfaceIndex must be specified.   

--*/

NETIOAPI_API
DeleteAnycastIpAddressEntry(
    IN CONST MIB_ANYCASTIPADDRESS_ROW *Row
    );
/*++

Routine Description:

    Delete an anycast IP address entry on the local computer. 

Arguments:

    Address - Supplies a MIB_ANYCASTIPADDRESS_ROW structure. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes: 

    On input, the following key fields of Row must be initialized:
    1. Address to a valid IPv4 or IPv6 anycast address.
    2. At least one of InterfaceLuid or InterfaceIndex must be specified.   

--*/

NETIOAPI_API
GetAnycastIpAddressEntry(
    IN OUT PMIB_ANYCASTIPADDRESS_ROW Row
    );
/*++

Routine Description:

    Retrieves information for the specified anycast IP address entry on the 
    local computer. 

Arguments:

    Address - Supplies a MIB_ANYCASTIPADDRESS_ROW structure. 
    
Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    On input, the following key fields of Row must be initialized:    
    1. Address to a valid IPv4 or IPv6 anycast address.
    2. At least one of InterfaceLuid or InterfaceIndex must be specified.

    On output, the remaining fields of Row are filled in.

--*/

NETIOAPI_API
GetAnycastIpAddressTable(
    IN ADDRESS_FAMILY Family,
    OUT PMIB_ANYCASTIPADDRESS_TABLE *Table
    );
/*++

Routine Description:

    Retrieves the anycast IP address table. 

Arguments:

    Family - Supplies the address family.

        AF_INET: Only returns IPv4 anycast addresses.

        AF_INET6: Only returns IPv6 anycast addresses.

        AF_UNSPEC: Returns both IPv4 and IPv6 anycast addresses.

    Table - Returns the table of anycast IP addresses in a
        MIB_ANYCASTIPADDRESS_TABLE Structure.  Use FreeMibTable to free this
        buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    The API allocates the buffer for Table.  Use FreeMibTable to free it. 

--*/


//
// Multicast address management routines.
//
typedef struct _MIB_MULTICASTIPADDRESS_ROW {
    //
    // Key Structure.
    //
    SOCKADDR_INET Address;
    NET_IFINDEX InterfaceIndex;
    NET_LUID InterfaceLuid;

    //
    // Read-Only Fields.
    //
    SCOPE_ID ScopeId;
} MIB_MULTICASTIPADDRESS_ROW, *PMIB_MULTICASTIPADDRESS_ROW;

typedef struct _MIB_MULTICASTIPADDRESS_TABLE {
    ULONG NumEntries;
    MIB_MULTICASTIPADDRESS_ROW Table[ANY_SIZE];
} MIB_MULTICASTIPADDRESS_TABLE, *PMIB_MULTICASTIPADDRESS_TABLE;    

NETIOAPI_API
GetMulticastIpAddressEntry(
    IN OUT PMIB_MULTICASTIPADDRESS_ROW Row
    );
/*++

Routine Description:

    Retrieves information for the specified mulitcast IP address entry on the 
    local computer. 

Arguments:

    Row - Supplies a MIB_MULTICASTIPADDRESS_ROW structure. 
    
Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    On input, the following key fields of Row must be initialized.
    1. Address to a valid IPv4 or IPv6 multicast address.
    2. At least one of InterfaceLuid or InterfaceIndex must be specified.

    On output, the remaining fields of Row are filled in.

--*/

NETIOAPI_API
GetMulticastIpAddressTable(
    IN ADDRESS_FAMILY Family,
    OUT PMIB_MULTICASTIPADDRESS_TABLE *Table
    );
/*++

Routine Description:

    Retrieves the multicast IP address table on the local computer. 

Arguments:

    Family - Supplies the address family.

        AF_INET: Only returns IPv4 multicast addresses.

        AF_INET6: Only returns IPv6 multicast addresses.

        AF_UNSPEC: Returns both IPv4 and IPv6 multicast addresses.

    Table - Returns the table of multicast IP addresses in a 
        MIB_MULTICASTIPADDRESS_TABLE Structure.  Use FreeMibTable to free this 
        buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    The API allocates the buffer for Table.  Use FreeMibTable to free it. 

--*/

//
// Route management routines.
//

typedef struct _IP_ADDRESS_PREFIX {
    SOCKADDR_INET Prefix;
    UINT8 PrefixLength;
} IP_ADDRESS_PREFIX, *PIP_ADDRESS_PREFIX;    

typedef struct _MIB_IPFORWARD_ROW2 {
    //
    // Key Structure.
    //
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;
    IP_ADDRESS_PREFIX DestinationPrefix;
    SOCKADDR_INET NextHop;

    //
    // Read-Write Fields.
    //
    UCHAR SitePrefixLength;
    ULONG ValidLifetime;
    ULONG PreferredLifetime;
    ULONG Metric;
    NL_ROUTE_PROTOCOL Protocol;
    
    BOOLEAN Loopback;
    BOOLEAN AutoconfigureAddress;
    BOOLEAN Publish;
    BOOLEAN Immortal;

    //
    // Read-Only Fields.
    //
    ULONG Age;
    NL_ROUTE_ORIGIN Origin;
} MIB_IPFORWARD_ROW2, *PMIB_IPFORWARD_ROW2;  

typedef struct _MIB_IPFORWARD_TABLE2 {
    ULONG NumEntries;
    MIB_IPFORWARD_ROW2 Table[ANY_SIZE];
} MIB_IPFORWARD_TABLE2, *PMIB_IPFORWARD_TABLE2;

typedef
VOID
(*PIPFORWARD_CHANGE_CALLBACK) (
    IN PVOID CallerContext,
    IN PMIB_IPFORWARD_ROW2 Row OPTIONAL,
    IN MIB_NOTIFICATION_TYPE NotificationType
    );

NETIOAPI_API
CreateIpForwardEntry2(
    IN CONST MIB_IPFORWARD_ROW2 *Row
    );
/*++

Routine Description:

    Create a route on the local computer. 

Arguments:

    Row - Supplies a MIB_IPFORWARD_ROW2 structure. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes: 

    InitializeIpForwardEntry must be used to initialize the fields of
    MIB_IPFORWARD_ROW2 with default values.  The caller can then update the
    fields it wishes to modify and invoke CreateIpForwardEntry2.

    On input, the following key fields of Row must be initialized after
    invoking InitializeIpForwardEntry:    
    1. At least one of InterfaceLuid or InterfaceIndex must be specified. 
    2. DestinationPrefix.
    3. NextHop.

--*/

NETIOAPI_API
DeleteIpForwardEntry2(
    IN CONST MIB_IPFORWARD_ROW2 *Row
    );
/*++

Routine Description:

    Delete a route on the local computer. 

Arguments:

    Row - Supplies a MIB_IPFORWARD_ROW2 structure. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes: 

    On input, the following key fields of Row must be initialized:        
    1. At least one of InterfaceLuid or InterfaceIndex must be specified. 
    2. DestinationPrefix.
    3. NextHop.

--*/

NETIOAPI_API
GetBestRoute2(
    IN NET_LUID *InterfaceLuid OPTIONAL,
    IN NET_IFINDEX InterfaceIndex,
    CONST IN SOCKADDR_INET *SourceAddress,
    CONST IN SOCKADDR_INET *DestinationAddress,
    IN ULONG AddressSortOptions,
    OUT PMIB_IPFORWARD_ROW2 BestRoute,
    OUT SOCKADDR_INET *BestSourceAddress
    );
/*++

Routine Description:

    Retrieve the best route between source and destination address on a local
        computer. 

Arguments:

    InterfaceLuid - Supplies Luid to specify an interface.

    InterfaceIndex - Supplies Index to specify an interface.

    SourceAddress - Supplies source address.

    DestinationAddress - Supplies destination address.

    AddressSortOptions - Supplies AddressSortOptions.

    BestRoute - Returns the MIB structure that holds the best route.
    
    BestSourceAddress - Returns the source address of the best route. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes: 

    On input, the following parameters must be supplied:
    1. At least one of InterfaceLuid or InterfaceIndex must be specified. 
    2. SourceAddress.
    3. DestinationAddress.

--*/

NETIOAPI_API
GetIpForwardEntry2(
    IN OUT PMIB_IPFORWARD_ROW2 Row
    );
/*++

Routine Description:

    Retrieves information for the specified route entry on the local computer. 

Arguments:

    Route - Supplies a MIB_IPFORWARD_ROW2 structure. 
    
Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    On input, the following key fields of Row must be initialized:    
    1. At least one of InterfaceLuid or InterfaceIndex must be specified.
    2. DestinationPrefix and NextHop can be specified.

    On output, the remaining fields of Row are filled in.

    If one or more routes matches the specified criteria,
    this API matches the first entry.
    
--*/

NETIOAPI_API
GetIpForwardTable2(
    IN ADDRESS_FAMILY Family,
    OUT PMIB_IPFORWARD_TABLE2 *Table
    );
/*++

Routine Description:

    Retrieves the route table on a local computer. 

Arguments:

    Family - Supplies the address family.

        AF_INET: Only returns IPv4 route entries.

        AF_INET6: Only returns IPv6 route entries.

        AF_UNSPEC: Returns both IPv4 and IPv6 route entries.

    Table - Returns the table of routes in a MIB_IPFORWARD_TABLE2 Structure. 
        Use FreeMibTable to free this buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    The API allocates the buffer for Table.  Use FreeMibTable to free it. 

--*/

VOID
NETIOAPI_API_
InitializeIpForwardEntry(
    OUT PMIB_IPFORWARD_ROW2 Row
    );
/*++

Routine Description:

    Initialize the MIB_IPFORWARD_ROW2 entry for use in SetIpForwardEntry2.

Arguments:

    Row - Returns an initialized PMIB_IPFORWARD_ROW2 structure. 

Return Value:

    None. 

Notes:

    InitializeIpForwardEntry must be used to initialize the fields of 
        MIB_IPFORWARD_ROW2 with default values.  The caller can then update the
        fields it wishes to modify and invoke SetIpForwardEntry2.

--*/

NETIOAPI_API
NotifyRouteChange2(
    IN ADDRESS_FAMILY AddressFamily,
    IN PIPFORWARD_CHANGE_CALLBACK Callback,
    IN PVOID CallerContext,    
    IN BOOLEAN InitialNotification,
    IN OUT HANDLE *NotificationHandle
    );
/*++

Routine Description:

    Register for notification for route changes.

Arguments:

    Family - Supplies the address family. 

        AF_INET: Only register for IPv4 route change notifications.

        AF_INET6: Only register for IPv6 route change notifications.

        AF_UNSPEC: Register for both IPv4 and IPv6 route change notifications.

    Callback - Supplies a callback function. This function will be invoked when
        an unicast IP address notification is received.

    CallerContext - Provides the user specific caller context. This context 
        will be supplied to the callback function.

    InitialNotification - Supplies a boolean to indicate whether an 
        initialization notification should be provided. 

    NotificationHandle - Returns a handle to the notification registration. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    1. Invokation of the callback function is serialized.

    2. Use CancelMibChangeNotify2 to deregister for change notifications.

--*/

NETIOAPI_API
SetIpForwardEntry2(
    IN CONST MIB_IPFORWARD_ROW2 *Route
    );
/*++

Routine Description:

    Set the properties of a route entry. 

Arguments:

    Route - Supplies a MIB_UNICASTIPADDRESS_ROW structure. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes: 

    InitializeIpForwardEntry must be used to initialize the fields of
    MIB_IPFORWARD_ROW2 with default values.  The caller can then update the
    fields it wishes to modify and invoke SetIpForwardEntry2.

    On input, the following key fields of Row must be initialized after
    invoking InitializeIpForwardEntry:
    1. At least one of InterfaceLuid or InterfaceIndex must be specified.  
    2. DestinationPrefix.
    3. NextHop.

--*/

//
// Path management routines.
//

typedef struct _MIB_IPPATH_ROW {
    //
    // Key.
    //
    
    SOCKADDR_INET Source;    
    SOCKADDR_INET Destination;
    NET_LUID InterfaceLuid;
    NET_IFINDEX InterfaceIndex;  

    //
    // RO.
    //
    //
    // The current next hop.  This can change over the lifetime of a path. 
    //
    SOCKADDR_INET CurrentNextHop;

    //
    // MTU of path to destination. Includes the IP header length.
    //
    ULONG PathMtu;

    //
    // Estimated mean RTT.
    //
    ULONG RttMean;

    //
    // Mean deviation of RTT.
    //
    ULONG RttDeviation;
    union {
        ULONG LastReachable;    // Milliseconds.
        ULONG LastUnreachable;  // Milliseconds.
    };
    BOOLEAN IsReachable;

    //
    // Estimated speed.
    //
    ULONG64 LinkTransmitSpeed;
    ULONG64 LinkReceiveSpeed;

} MIB_IPPATH_ROW, *PMIB_IPPATH_ROW;

typedef struct _MIB_IPPATH_TABLE {
    ULONG NumEntries;
    MIB_IPPATH_ROW Table[ANY_SIZE];
} MIB_IPPATH_TABLE, *PMIB_IPPATH_TABLE;


NETIOAPI_API
FlushIpPathTable(
    IN ADDRESS_FAMILY Family
    );
/*++

Routine Description:

    Flush the IP Path table on the local computer.

Arguments:

    Family - Supplies the address family. 

        AF_INET: Only flush the IPv4 path table.

        AF_INET6: Only flush the IPv6 path table.

        AF_UNSPEC: Flush both IPv4 and IPv6 path table.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/
    
NETIOAPI_API
GetIpPathEntry(
    IN OUT PMIB_IPPATH_ROW Row
    );
/*++

Routine Description:

    Retrieves information for the specified path entry on the local computer. 

Arguments:

    Row - Supplies a MIB_IPPATH_ROW structure. 
    
Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    On input, the following key fields of Row must be initialized:    
    1. At least one of InterfaceLuid or InterfaceIndex must be specified.
    2. Source.
    3. Destination.

    On output, the remaining fields of Row are filled in.

--*/

NETIOAPI_API
GetIpPathTable(
    IN ADDRESS_FAMILY Family,
    OUT PMIB_IPPATH_TABLE *Table
    );
/*++

Routine Description:

    Retrieves the path table on a local computer. 

Arguments:

    Family - Supplies the address family.

        AF_INET: Only returns IPv4 paths.

        AF_INET6: Only returns IPv6 paths.

        AF_UNSPEC: Returns both IPv4 and IPv6 paths.

    Table - Returns the table of paths in a MIB_IPPATH_TABLE
        structure.  Use FreeMibTable to free this buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    The API allocates the buffer for Table.  Use FreeMibTable to free it.

--*/

//
// ARP and IPv6 Neighbor management routines.
//

typedef struct _MIB_IPNET_ROW2 {
    //
    // Key Struture.
    //
    SOCKADDR_INET Address;
    NET_IFINDEX InterfaceIndex;
    NET_LUID InterfaceLuid;

    //
    // Read-Write.
    //
    UCHAR PhysicalAddress[IF_MAX_PHYS_ADDRESS_LENGTH];

    //
    // Read-Only.
    //
    ULONG PhysicalAddressLength;
    NL_NEIGHBOR_STATE State;

    union {
        struct {
            BOOLEAN IsRouter : 1;
            BOOLEAN IsUnreachable : 1;
        };
        UCHAR Flags;
    };

    union {
        ULONG LastReachable;
        ULONG LastUnreachable;
    } ReachabilityTime;
} MIB_IPNET_ROW2, *PMIB_IPNET_ROW2;

typedef struct _MIB_IPNET_TABLE2 {
    ULONG NumEntries;
    MIB_IPNET_ROW2 Table[ANY_SIZE];
} MIB_IPNET_TABLE2, *PMIB_IPNET_TABLE2;

NETIOAPI_API
CreateIpNetEntry2(
    IN CONST MIB_IPNET_ROW2 *Row
    );
/*++

Routine Description:

    Create a neighbor entry on the local computer. 

Arguments:

    Row - Supplies a MIB_IPNET_ROW2 structure. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes: 

    On input, the following key fields of Row must be initialized:        
    1. At least one of InterfaceLuid or InterfaceIndex must be specified. 
    2. Address.
    3. PhysicalAddress.

--*/

NETIOAPI_API
DeleteIpNetEntry2(
    IN CONST MIB_IPNET_ROW2 *Row
    );
/*++

Routine Description:

    Delete a neighbor entry on the local computer. 

Arguments:

    Row - Supplies a MIB_IPNET_ROW2 structure. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes: 

    On input, the following key fields of Row must be initialized:
    1. At least one of InterfaceLuid or InterfaceIndex must be specified. 
    2. Address.

--*/


NETIOAPI_API
FlushIpNetTable2(
    IN ADDRESS_FAMILY Family,
    IN NET_IFINDEX InterfaceIndex
    );
/*++

Routine Description:

    Flush the neighbor entry table on the local computer. 

Arguments:

    Family - Supplies the address family. 

        AF_INET: Only flush the IPv4 neighbor table.

        AF_INET6: Only flush the IPv6 neighbor table.

        AF_UNSPEC: Flush both IPv4 and IPv6 neighbor table.

    InterfaceIndex - Supplies the Interface index.  If the index is specified,
        flush the neighbor entries on a specific interface, otherwise flush the
        neighbor entries on all the interfaces.
    
Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/


NETIOAPI_API
GetIpNetEntry2(
    IN OUT PMIB_IPNET_ROW2 Row
    );
/*++

Routine Description:

    Retrieves information for the specified neighbor entry on the local
    computer.

Arguments:

    Row - Supplies a MIB_IPNET_ROW2 structure. 
    
Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    On input, the following key fields of Row must be initialized:
    1. At least one of InterfaceLuid or InterfaceIndex must be specified.
    2. Address.

    On output, the remaining fields of Row are filled in.

--*/
    
NETIOAPI_API
GetIpNetTable2(
    IN ADDRESS_FAMILY Family,
    OUT PMIB_IPNET_TABLE2 *Table
    );
/*++

Routine Description:

    Retrieves the neighbor table on the local computer. 

Arguments:

    Family - Supplies the address family.

        AF_INET: Only returns IPv4 neighbor entries.

        AF_INET6: Only returns IPv6 neighbor entries.

        AF_UNSPEC: Returns both IPv4 and IPv6 neighbor entries.

    Table - Returns the table of neighbor entries in a MIB_IPNET_TABLE2
        structure.  Use FreeMibTable to free this buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    The API allocates the buffer for Table.  Use FreeMibTable to free it.
    
--*/    

NETIOAPI_API
ResolveIpNetEntry2(
    IN OUT PMIB_IPNET_ROW2 Row,
    IN CONST SOCKADDR_INET *SourceAddress OPTIONAL
    );
/*++

Routine Description:

    Resolve the physical address of a specific neighbor. 

Arguments:

    NetEntry - Supplies a MIB_IPNET_ROW2 structure.

    SourceAddress - Supplies the source address.
    
Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    This API flushes any existing neighbor entry and resolves the MAC address
    by sending ARP requests (IPv4) or Neighbor Solicitation (IPv6).
    If source address is not provided, the API will automatically select the
    best interface to send the request on.

    On input, the following key fields of Row must be initialized:
    1. At least one of InterfaceLuid or InterfaceIndex must be specified.
    2. Address.

    On output, the remaining fields of Row are filled in.

--*/

NETIOAPI_API
SetIpNetEntry2(
    IN OUT PMIB_IPNET_ROW2 Row
    );
/*++

Routine Description:

    Set the physical address of a neighbor entry. 

Arguments:

    NetEntry - Supplies a MIB_IPNET_ROW2 structure. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    On input, the following key fields of Row must be initialized:
    1. At least one of InterfaceLuid or InterfaceIndex must be specified.
    2. Address.
    3. PhysicalAddress.     

--*/ 

//
// Teredo APIs.
//
#define MIB_INVALID_TEREDO_PORT_NUMBER 0

typedef
VOID
(*PTEREDO_PORT_CHANGE_CALLBACK) (
    IN PVOID CallerContext,
    IN USHORT Port,
    IN MIB_NOTIFICATION_TYPE NotificationType
    );

NETIOAPI_API
NotifyTeredoPortChange(
    IN PTEREDO_PORT_CHANGE_CALLBACK Callback,
    IN PVOID CallerContext,    
    IN BOOLEAN InitialNotification,
    IN OUT HANDLE *NotificationHandle
    );

NETIOAPI_API
GetTeredoPort(
    OUT USHORT *Port
    );
/*++

Routine Description:

    Get the Teredo client port. 

Arguments:

    Port - returns the Teredo port. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure.      

--*/ 


//
// Generic (not IP-specific) interface definitions.
//

NETIOAPI_API
CancelMibChangeNotify2(
    IN HANDLE NotificationHandle
    );
/*++

Routine Description:

    Deregister for change notifications.

Arguments:

    NotificationHandle - Supplies the handle returned from a notification 
        registration. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

Notes:

    Blocks until all callback have returned.
    
--*/

VOID
NETIOAPI_API_
FreeMibTable(
    IN PVOID Memory
    ); 
/*++

Routine Description:

    Free the buffer allocated by Get*Table APIs.

Arguments:

    Memory - Supplies the buffer to free.

Return Value:

    None.

--*/


NETIOAPI_API
CreateSortedAddressPairs(
    IN const PSOCKADDR_IN6 SourceAddressList OPTIONAL,
    IN ULONG SourceAddressCount,
    IN const PSOCKADDR_IN6 DestinationAddressList,
    IN ULONG DestinationAddressCount,
    IN ULONG AddressSortOptions,
    OUT PSOCKADDR_IN6_PAIR *SortedAddressPairList,
    OUT ULONG *SortedAddressPairCount
    );
/*++

Routine Description:

    Given a list of source and destination addresses, returns a list of
    pairs of addresses in sorted order.  The list is sorted by which address
    pair is best suited for communication between two peers.

    The list of source addresses is optional, in which case the function
    automatically uses all the host machine's local addresses.

Arguments:

    SourceAddressList - Supplies list of potential source addresses.
        If NULL the routine automatically uses all local addresses.
        IPv4 addresses can be specified in IPv4-mapped format.
        Reserved for future use.  Must be NULL.
    
    SourceAddressCount - Supplies the number of addresses in the 
        SourceAddressList.
        Reserved for future use.  Must be 0.        

    DestinationAddressList - Supplies list of potential destination addresses.
        IPv4 addresses can be specified in IPv4-mapped format.

    DestinationAddressCount -  Supplies the number of addresses in the 
        DestinationAddressList.

    AddressSortOptions - Reserved for future use.  Must be 0.

    SortedAddressPairList - Returns a sorted list of pairs of addresses
        in prefered order of communication.  The list must be freed with a
        single call to NetioFreeMemory.

    SortedAddressPairCount - Returns the number of address pairs in
        SortedAddressPairList.

Return Value:

    ERROR_SUCCESS on success.  WIN32 error code on error.

--*/

#endif //_WS2IPDEF_

NETIOAPI_API
ConvertInterfaceNameToLuidA(
    IN CONST CHAR *InterfaceName,
    OUT NET_LUID *InterfaceLuid
    );
/*++

Routine Description:

    Convert an Interface Name to Luid.

Arguments:

    InterfaceName - Supplies the interface name to be converted.

    InterfaceLuid - Returns the interface Luid.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/

NETIOAPI_API
ConvertInterfaceNameToLuidW(
    IN CONST WCHAR *InterfaceName,
    OUT NET_LUID *InterfaceLuid
    );
/*++

Routine Description:

    Convert an Interface Name to Luid.

Arguments:

    InterfaceName - Supplies the interface name to be converted.

    InterfaceLuid - Returns the interface Luid.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/

NETIOAPI_API
ConvertInterfaceLuidToNameA(
    IN CONST NET_LUID *InterfaceLuid,
    __out_ecount(Length) PSTR InterfaceName,
    __in SIZE_T Length
    );
/*++

Routine Description:

    Convert an Interface Luid to Name.

Arguments:

    InterfaceLuid - Supplies the interface Luid to be converted.

    InterfaceName - Returns the interface name.

    Lenght - Supplies the length of the InterfaceName buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/

NETIOAPI_API
ConvertInterfaceLuidToNameW(
    IN CONST NET_LUID *InterfaceLuid,
    __out_ecount(Length) PWSTR InterfaceName,
    __in SIZE_T Length
    );
/*++

Routine Description:

    Convert an Interface Luid to Name.

Arguments:

    InterfaceLuid - Supplies the interface Luid to be converted.

    InterfaceName - Returns the interface name.

    Length - Supplies the length of the InterfaceName buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/

NETIOAPI_API
ConvertInterfaceLuidToIndex(
    IN CONST NET_LUID *InterfaceLuid,
    OUT PNET_IFINDEX InterfaceIndex
    );
/*++

Routine Description:

    Convert an Interface Luid to Index.

Arguments:

    InterfaceLuid - Supplies the interface Luid to be converted.

    InterfaceName - Returns the interface Index.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/

NETIOAPI_API
ConvertInterfaceIndexToLuid(
    IN NET_IFINDEX InterfaceIndex,
    OUT PNET_LUID InterfaceLuid
    );
/*++

Routine Description:

    Convert an Interface Index to Luid.

Arguments:

    InterfaceName - Supplies the interface Index to be converted.

    InterfaceLuid - Returns the interface Luid.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/

NETIOAPI_API
ConvertInterfaceLuidToAlias(
    IN CONST NET_LUID *InterfaceLuid,
    __out_ecount(Length) PWSTR InterfaceAlias,
    __in SIZE_T Length
    );
/*++

Routine Description:

    Convert an Interface Luid to Alias.

Arguments:

    InterfaceLuid - Supplies the interface Luid to be converted.

    InterfaceAlias - Returns the interface Alias.

    Length - Supplies the length of InterfaceAlias buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/

NETIOAPI_API
ConvertInterfaceAliasToLuid(
    IN CONST WCHAR *InterfaceAlias,
    OUT PNET_LUID InterfaceLuid
    );
/*++

Routine Description:

    Convert an Interface Alias to Luid.

Arguments:

    InterfaceAlias - Supplies the null terminated interface Alias.

    InterfaceLuid - Returns the interface Luid. 

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/


#ifdef UNDER_CE
NETIOAPI_API
ConvertInterfaceDescrToLuid(
    IN CONST WCHAR *InterfaceDescr,
    OUT PNET_LUID InterfaceLuid
    );
#endif


NETIOAPI_API
ConvertInterfaceLuidToGuid(
    IN CONST NET_LUID *InterfaceLuid,
    OUT GUID *InterfaceGuid
    );
/*++

Routine Description:

    Convert an Interface Luid to Guid.

Arguments:

    InterfaceLuid - Supplies the interface Luid to be converted.

    InterfaceGuid - Returns the interface Guid.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/

NETIOAPI_API
ConvertInterfaceGuidToLuid(
    IN CONST GUID *InterfaceGuid,
    OUT PNET_LUID InterfaceLuid
    );
/*++

Routine Description:

    Convert an Interface Luid to Guid.

Arguments:

    InterfaceGuid - Supplies the interface Guid to be converted.

    InterfaceGuid - Returns the interface Luid.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/

#ifdef UNDER_CE
// NDIS_IF_MAX_STRING_SIZE is defined in ntddndis.h which is conditionally
// included, when condition is not met it's undefined, also another layer
// of indirection seems unnecessary

#define IF_NAMESIZE IF_MAX_STRING_SIZE
#else
#define IF_NAMESIZE NDIS_IF_MAX_STRING_SIZE
#endif

NET_IFINDEX
NETIOAPI_API_
if_nametoindex(
    __in PCSTR InterfaceName
    );
/*++

Routine Description:

    Convert an Interface name to Index.

Arguments:

    InterfaceName - Supplies the null terminated interface name to convert.

Return Value:

    Interface index on success, 0 otherwise.

--*/
    
PCHAR
NETIOAPI_API_
if_indextoname(
    __in NET_IFINDEX InterfaceIndex,
    __out_ecount(IF_NAMESIZE) PCHAR InterfaceName
    );
/*++

Routine Description:

    Convert an Interface index to Name.

Arguments:

    InterfaceIndex - Supplies the Interface index to convert.

    InterfaceName - Returns the null terminated interface name.

Return Value:

    Interface name on success, NULL otherwise.

Notes:

    The length of InterfaceName buffer must be equal to or greater than 
        IF_NAMESIZE.

--*/

NET_IF_COMPARTMENT_ID
NETIOAPI_API_
GetCurrentThreadCompartmentId(
    VOID
    );
/*++

Routine Description:

    Get the compartment ID of current thread.

Arguments:

    None.

Return Value:

    The compartment ID of current thread.

--*/

NETIOAPI_API
SetCurrentThreadCompartmentId(
    IN NET_IF_COMPARTMENT_ID CompartmentId
    );
/*++

Routine Description:

    Set the compartment ID of current thread.

Arguments:

    CompartmentId - Supplies the compartment ID to be set.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 


--*/

NET_IF_COMPARTMENT_ID
NETIOAPI_API_
GetSessionCompartmentId(
    IN ULONG SessionId
    );
/*++

Routine Description:

    Get the compartment ID of the session.

Arguments:

    SessionId - Supplies the session ID.

Return Value:

    The compartment ID of the session.

--*/


NETIOAPI_API
SetSessionCompartmentId(
    IN ULONG SessionId,
    IN NET_IF_COMPARTMENT_ID CompartmentId
    );
/*++

Routine Description:

    Set the compartment ID of the session.

Arguments:

    SessionId - Supplies the session ID.

    CompartmentId - Supplies the compartment ID to be set.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/

NETIOAPI_API
GetNetworkInformation(
    __in CONST NET_IF_NETWORK_GUID *NetworkGuid,
    __out PNET_IF_COMPARTMENT_ID CompartmentId,
    __out PULONG SiteId,
    __out_ecount(Length) PWCHAR NetworkName,
    __in ULONG Length
    );
/*++

Routine Description:

    Get the network information.

Arguments:

    NetworkGuid - Supplies the Network GUID.

    CompartmentId - Returns the compartment ID.

    SiteId - Returns Site ID.

    NetowrkName - Returns the network name.

    Length - Supplies the length of NetworkName buffer.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/
    
NETIOAPI_API
SetNetworkInformation(
    __in CONST NET_IF_NETWORK_GUID *NetworkGuid,
    __in NET_IF_COMPARTMENT_ID CompartmentId,
    __in CONST WCHAR *NetworkName
    );
/*++

Routine Description:

    Set the Network Information.

Arguments:

    NetworkGuid - Supplies the session ID.

    CompartmentId - Supplies the compartment ID to be set.

    NetworkName - Supplies the Network name to be set.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/

#pragma warning(pop) 

NETIOAPI_API
ConvertLengthToIpv4Mask(
    IN ULONG MaskLength,
    OUT PULONG Mask
    );
/*++

Routine Description:

    Converts a prefixLength to a subnet mask.

Arguments:

    MaskLength - Prefix Length.

    Mask - Mask generated.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/   

NETIOAPI_API
ConvertIpv4MaskToLength(
    IN ULONG Mask,
    OUT PUINT8 MaskLength
    );
/*++

Routine Description:

    Converts a subnet mask to a prefix length.

Arguments:

    Mask - Subnet mask to use.

    MaskLength - Prefix length computed.

Return Value:

    User-Mode: NO_ERROR on success, error code on failure.

    Kernel-Mode: STATUS_SUCCESS on success, error code on failure. 

--*/   

//
//4201.
//
#ifdef __cplusplus
}
#endif

#endif // _NETIOAPI_H_.
