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
#ifndef _UPNPDEVAPI_H
#define _UPNPDEVAPI_H



#ifdef  __cplusplus
extern "C" {
#endif
//
// Callback message identifier
// 
typedef enum 
{
  UPNPCB_INIT,              // first callback message
  UPNPCB_SUBSCRIBING,       // subscribe request
  UPNPCB_UNSUBSCRIBING,     // unsubscribe
  UPNPCB_CONTROL,           // control action
  UPNPCB_IDLE,
  UPNPCB_WAKEUP,
  UPNPCB_SHUTDOWN           // last callback message
} UPNPCB_ID;

//
// This structure is used to describe the name and value of a single UPnP variable
// It is used in event notification and in control actions
//
typedef struct {
    PCWSTR pszName;      // parameter name
    PCWSTR pszValue;     // parameter value
} UPNPPARAM;            

//
// Callback prototype.
// Devices must implement the callback function and supply a pointer
// to this function to UpnpAddDevice(). The device hosting service will invoke
// the callback when network messages are received.
// 
//  callbackId              pvSvcParam          When Called
//  -----------------------------------------------------------
//  UPNPCB_INIT             NULL                before first action or subscribe
//  UPNPCB_SUBSCRIBING      PUPNPSUBSCRIPTION   subscribe request
//  UPNPCB_UNSUBSCRIBING    PUPNPSUBSCRIPTION   unsubscribe request
//  UPNPCB_CONTROL          PUPNPSERVICECONTROL control action
//  UPNPCB_SHUTDOWN         NULL                UpnpRemoveDevice called
//
//  Return value:
//  The callback should return TRUE for success and FALSE to indicate a failure.
//  
//  Remarks:
//  The callback function may ignore notifications that it is not interested in and
//  return TRUE. At a minimum, the UPNCB_CONTROL notification should be handled, since
//  that is how control actions are processed.

typedef DWORD (* PUPNPCALLBACK) ( 
    UPNPCB_ID callbackId,   // see above
    PVOID pvUserContext,    // app context (from UPNPDEVICEINFO)
    PVOID pvSvcParam);      // depends on CALLBACKID
//
// This structure is handed in to the callback as pvSvcParam when the callback id is UPNPCB_CONTROL
//
typedef struct {
    PCWSTR pszRequestXML;   // raw SOAP request 
    PCWSTR pszUDN;          // Unique Device Name
    PCWSTR pszSID;          // service ID (from device description)
    PCWSTR pszServiceType;  // service type
    PCWSTR pszAction;       // name of control action
    DWORD iAction;          // reserved
    DWORD cInArgs;          // number of input params
    UPNPPARAM  *pInArgs;    // array of input params
    PVOID   Reserved1;      // reserved
} UPNPSERVICECONTROL, *PUPNPSERVICECONTROL;


//
// This structure is handed in to the callback as pvSvcParam when the callback id is UPNPCB_SUBSCRIBE or UPNPCB_UNSUBSCRIBE
//
typedef struct {
    PCWSTR pszUDN;          // Unique Device Name
    PCWSTR pszSID;          // service ID (from device description)
} UPNPSUBSCRIPTION, *PUPNPSUBSCRIPTION;

/*
    Device creation
 */

//
// The UPNPDEVICEINFO structure is used by UpnpAddDevice (see below)
//
typedef struct {
    DWORD cbStruct;                 // sizeof struct UPNPDEVICEINFO
    PWSTR pszDeviceDescription;     // pointer to XML device description
    PWSTR pszDeviceName;            // local device name
    PWSTR pszUDN;                   // globally unique device name (may be NULL)
    DWORD cachecontrol;             // lifetime in seconds (0 for system default)
    PUPNPCALLBACK pfCallback;       // callback for control and eventing
    PVOID pvUserDevContext;         // user-defined , supplied in device callbacks
} UPNPDEVICEINFO;


//+---------------------------------------------------------------------------
//
// Function:   UpnpAddDevice
//
//
// Purpose: Create a Upnp device instance as described by the UPNPDEVICEINFO structure.
//          The device is not published until UpnpPublishDevice is called.
//
// Arguments:
//      pDevInfo [in] UPnP device instance information
//
// Returns:
//		TRUE if success, FALSE if error (  GetLastError() returns an error code)
//
// Notes:
//          The fields of UPNPDEVICEINFO must be initialized by the caller
//          as follows:
//          cbStruct -  sizeof(UPNPDEVICEINFO)
//          pszDeviceDescription - XML device description template. The device
//              description template differs  from the UPnP Architecture description only
//              in the following details: It lacks the <URLBase>,<eventSubURL>,
//              <controlURL> and <UDN> fields as these are filled in by the hosting service;
//              Any file URLs, such as icon or presentation URLs are replaced by the
//              local file path of the resource.
//          pszDeviceName - the local identifier for the device. This may be any
//              string, using only characters that are valid for filenames. Most
//              of the functions in the UPnP device API refer to a device instance by
//              this name. If a device by this name is already hosted on this system,
//              an error is returned.
//          pszUDN - optional UDN. If specified, this becomes the Universal Device Name
//              for this device. Must begin with "uuid:". If this parameter is NULL,
//              the UPnP service will generate a suitable uuid. The UPnP architecure
//              recommends that the UDN be unchanged across device reboots. Since the
//              UPnP device API does not persist the UDN, this field is a way for the
//              application to ensure that it gets the same UDN after the device is removed
//              and readded.
//          cachecontrol - device lifetime in seconds. The device announcements are sent
//              at this interval. If initialized to zero, the default lifetime is assumed.
//          pfCallback - pointer to the device callback funtion. See definition of
//              PUPNPCALLBACK. The device implementation should be prepared to receive
//              callback messages at any time until UpnpRemoveDevice is called.
//          pvUserDevContext - caller supplied instance data. Treated as an
//              opaque field by the UPnP service and passed in as the 2nd parameter
//              to the device callback function.
//          
BOOL
WINAPI
UpnpAddDevice(IN UPNPDEVICEINFO *pDev);


//+---------------------------------------------------------------------------
//
// Function:   UpnpRemoveDevice
//
//
// Purpose: Shutdown an existing Upnp device instance.
//          The device is unpublished if necessary. The callback function is invoked with UPNPCB_SHUTDOWN code.
//
// Arguments:
//      pszDeviceName [in] local device name specified in UPNPDEVICEINFO
//
// Returns:
//		TRUE if success, FALSE if error (  GetLastError() returns an error code)
//
// Notes:
//
BOOL
WINAPI
UpnpRemoveDevice(
    IN PCWSTR pszDeviceName);   // [in] local device name


/*
  Publication control
*/
//+---------------------------------------------------------------------------
//
// Function:   UpnpPublishDevice
//
//
// Purpose: Send out UPnP announcements for this device tree. Once published, the device will automatically respond to
//			UPnP search requests. Its services may be invoked by remote control points via the callback function. 
//
// Arguments:
//      pszDeviceName [in] local device name specified in UPNPDEVICEINFO
//
// Returns:
//		TRUE if success, FALSE if error (  GetLastError() returns an error code)
//
// Notes:
//
BOOL
WINAPI
UpnpPublishDevice(
    IN PCWSTR pszDeviceName);   // [in] local device name


//+---------------------------------------------------------------------------
//
// Function:   UpnpUnpublishDevice
//
//
// Purpose: Announce that the device is going away. The device will not respond to further remote requests. 
//
// Arguments:
//      pszDeviceName [in] local device name specified in UPNPDEVICEINFO
//
// Returns:
//		TRUE if success, FALSE if error (  GetLastError() returns an error code)
//
// Notes:
//
BOOL
WINAPI
UpnpUnpublishDevice(
    IN PCWSTR pszDeviceName);   // [in] local device name

/*
    Miscellaneous device description 
*/

//+---------------------------------------------------------------------------
//
// Function:   UpnpGetUDN
//
//
// Purpose: Retrieves the UPnP Unique Device Name for a device. This is the identifier used to uniquely identify the
// 			UPnP device on the network. The UDN is a string beginning with "uuid:".
//
// Arguments:
//      pszDeviceName 	[in] local device name specified in UPNPDEVICEINFO
//		pszTemplateUDN 	[in] the UDN element in the device description template specified in UPNPDEVICEINFO
//						    May be NULL, in which case the UDN of the root device is returned.
// 		pszUDNBuf 		[out] output buffer. Contains the UDN on return.
//		pchBuf			[in,out] length of supplied buffer in WCHARS. Updated with the length of the UDN on return.
//
// Returns:
//		TRUE if success, FALSE if error (  GetLastError() returns an error code)
//
// Notes:
//		If the device implementation does not specify a UDN in UPNPDEVICEINFO when calling UpnpAddDevice, the
//		service will generate a suitable random UDN. 
// 		The UPnP Architecture specifies that a device should use the same UDN across reboots. This function may
//		be called to retrieve the assigned UDN and save it away for reuse when the device is re-created later.
//
BOOL
WINAPI
UpnpGetUDN(
    IN PCWSTR pszDeviceName,    // [in] local device name
    IN PCWSTR pszTemplateUDN,   // [in, optional] the UDN element in the original device description
    __out_ecount(*pchBuf) OUT PWSTR pszUDNBuf,        // [out] buffer to hold the assigned UDN
    IN OUT PDWORD pchBuf);      // [in,out] size of buffer/ length filled (in WCHARs)
    
//+---------------------------------------------------------------------------
//
// Function:   UpnpGetSCPDPath
//
//
// Purpose: Helper function to locate the Service Control Protocol Description file for a particular service. This
//		   location is specified in the device description template.
//
// Arguments:
//      pszDeviceName 	[in] local device name specified in UPNPDEVICEINFO
//      pszUDN          [in] Unique Device Name of device containing the service
//		pszServiceId 	[in] the service Id for the service, from the device description.
// 		pszSCPDFilePath	[out] output buffer. Contains the local file path for the SCPD file.
//		cchFilePath 	[in] length of supplied buffer in WCHARS.
//
// Returns:
//		TRUE if success, FALSE if error (  GetLastError() returns an error code)
//
// Notes:
BOOL
WINAPI
UpnpGetSCPDPath(
    IN PCWSTR pszDeviceName,   // [in] local device name
    IN PCWSTR pszUDN,          // [in] device UDN
    IN PCWSTR pszServiceId,    // [in] serviceId 
    OUT PWSTR pszSCPDFilePath, // [out] file path to SCPD
    IN DWORD  cchFilePath);    // [in] size of  pszSCPDFilePath in WCHARs

/*
  Eventing

*/
//+---------------------------------------------------------------------------
//
// Function:   UpnpSubmitPropertyEvent
//
//
// Purpose: Sends one or more evented variables to all remote subscribers using the UPnP event notification scheme.
//
// Arguments:
//      pszDeviceName 	[in] local device name specified in UPNPDEVICEINFO
//      pszUDN          [in] Unique Device Name of device containing the service
//		pszServiceId 	[in] the service Id for the service, from the device description.
// 		nArgs			[in] number of evented variables.
//		rgArgs 			[in] array of UPNPPARAM structs, each specifying the name and value of one variable.
//
// Returns:
//		TRUE if success, FALSE if error (  GetLastError() returns an error code)
//
// Notes:
//		This function is typically called from inside the callback function, after carrying out a remote request. The
// 		variable names and values must conform to the published SCPD. The device is responsible for moderating
//		the frequency of event notifications.
//

BOOL
WINAPI
UpnpSubmitPropertyEvent(
    PCWSTR pszDeviceName,
    PCWSTR pszUDN,
    PCWSTR pszServiceId,
    DWORD nArgs,
    __out_ecount(nArgs) UPNPPARAM *rgArgs);

/*
    Control
*/


//
// The following functions should only be called inside the UPNPCALLBACK function
// when the UPNPCB_ID is  UPNPCB_CONTROL
// 

BOOL
WINAPI
UpnpSetRawControlResponse(
    UPNPSERVICECONTROL *pUPnPAction,
    DWORD    dwHttpStatus,
    PCWSTR pszRespXML    // raw XML response
    );

BOOL
WINAPI
UpnpSetControlResponse(
    UPNPSERVICECONTROL *pUPNPAction,
    DWORD cOutArgs,
    __out_ecount(cOutArgs) UPNPPARAM *aOutArgs);    // array of string output parameters

BOOL
WINAPI
UpnpSetErrorResponse(
    UPNPSERVICECONTROL *pUPNPAction,
    DWORD dwErrorCode,
    PCWSTR pszErrorDescription    // error code and description
    );


#ifdef  __cplusplus
}   /* ... extern "C" */
#endif

#endif  // UPNPDEVAPI_H





