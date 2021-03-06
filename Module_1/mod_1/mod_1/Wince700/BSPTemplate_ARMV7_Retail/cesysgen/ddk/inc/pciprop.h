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

Copyright (c) 2005 Microsoft Corporation

Module Name:

    pciprop.h

Abstract:

    This file contains custom property definitions for a PCI root bus and a PCI
    device.

--*/

#pragma once

#ifndef _PCIPROP_
#define _PCIPROP_

//
// The GUID {D817FC28-793E-4b9e-9970-469D8BE63073} is a seed for all properties
// defined for a root bus.
//

#define DEFINE_PCI_ROOT_BUS_DEVPKEY(_DevPkeyName, _Pid) \
    DEFINE_DEVPROPKEY((_DevPkeyName), 0xd817fc28, 0x793e, 0x4b9e, 0x99, 0x70, 0x46, 0x9d, 0x8b, 0xe6, 0x30, 0x73, (_Pid))

//
// This property describes the secondary side characteristics of a root bus.
// The values for this property field are interpreted as below:
//

#define DevProp_PciRootBus_SecondaryInterface_PciConventional       0
#define DevProp_PciRootBus_SecondaryInterface_PciXMode1             1
#define DevProp_PciRootBus_SecondaryInterface_PciXMode2             2
#define DevProp_PciRootBus_SecondaryInterface_PciExpress            3

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_SecondaryInterface, 1); //DEVPROP_TYPE_UINT32

//
// This field is valid for conventional PCI and PCI-X host bridges.
// The values for this property field are interpreted as below:
//

#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_Conventional_33Mhz           0
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_Conventional_66Mhz           1
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_X_Mode1_66Mhz                2
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_X_Mode1_100Mhz               3
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_X_Mode1_133Mhz               4
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_X_Mode1_ECC_66Mhz            5
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_X_Mode1_ECC_100Mhz           6
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_X_Mode1_ECC_133Mhz           7
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_X_266_Mode2_66Mhz            8
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_X_266_Mode2_100Mhz           9
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_X_266_Mode2_133Mhz          10
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_X_533_Mode2_66Mhz           11
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_X_533_Mode2_100Mhz          12
#define DevProp_PciRootBus_CurrentSpeedAndMode_Pci_X_533_Mode2_133Mhz          13

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_CurrentSpeedAndMode, 2); //DEVPROP_TYPE_UINT32

//
// This field is valid for conventional PCI and PCI-X host bridges.
// The values for this property field are interpreted as below:
//

#define DevProp_PciRootBus_SupportedSpeedsAndModes_Pci_Conventional_33Mhz       1
#define DevProp_PciRootBus_SupportedSpeedsAndModes_Pci_Conventional_66Mhz       2
#define DevProp_PciRootBus_SupportedSpeedsAndModes_Pci_X_66Mhz                  4
#define DevProp_PciRootBus_SupportedSpeedsAndModes_Pci_X_133Mhz                 8
#define DevProp_PciRootBus_SupportedSpeedsAndModes_Pci_X_266Mhz                16
#define DevProp_PciRootBus_SupportedSpeedsAndModes_Pci_X_533Mhz                32

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_SupportedSpeedsAndModes, 3); //DEVPROP_TYPE_UINT32

//
// This is boolean indicating if the host bridge is capable of forwarding
// Device ID Message transactions.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_DeviceIDMessagingCapable, 4); // DEVPROP_TYPE_BOOLEAN

//
// Provides the width of a root bus interface.
//

#define DevProp_PciRootBus_BusWidth_32Bits      0
#define DevProp_PciRootBus_BusWidth_64Bits      1

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_SecondaryBusWidth, 5); //DEVPROP_TYPE_UINT32

//
// This is a boolean indicating that an extended config space is available
// on the secondary side of the root bus.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_ExtendedConfigAvailable, 6); // DEVPROP_TYPE_BOOLEAN

//
// This is a boolean indicating an operating system support for an extended
// PCI config op region.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_ExtendedPCIConfigOpRegionSupport, 7); // DEVPROP_TYPE_BOOLEAN

//
// This is a boolean indicating an operating system support for ASPM.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_ASPMSupport, 8); // DEVPROP_TYPE_BOOLEAN

//
// This is a boolean indicating an operating system support for clock power
// management.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_ClockPowerManagementSupport, 9); // DEVPROP_TYPE_BOOLEAN

//
// This is a boolean indicating an operating system support for PCI Segments.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_PCISegmentGroupsSupport, 10); // DEVPROP_TYPE_BOOLEAN

//
// This is a boolean indicating an operating system support for Message
// Signaled Interrupts.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_MSISupport, 11); // DEVPROP_TYPE_BOOLEAN

//
// This is a boolean indicating that the firmware has granted control of native
// hot plug interrupts to the operating system.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_PCIExpressNativeHotPlugControl, 12);  // DEVPROP_TYPE_BOOLEAN

//
// This is a boolean indicating that the firmware has granted control of native
// SHPC to the operating system.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_SHPCNativeHotPlugControl, 13);   // DEVPROP_TYPE_BOOLEAN

//
// This is a boolean indicating that the firmware has granted control over
// native PME interrupts to the operating system.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_PCIExpressNativePMEControl, 14); // DEVPROP_TYPE_BOOLEAN

//
// This is a boolean indicating that the firmware has granted control over
// AER to the operating system.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_PCIExpressAERControl, 15); // DEVPROP_TYPE_BOOLEAN

//
// This is a boolean indicating that the firmware has granted control over the
// PCI Express capability to the operating system.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_PCIExpressCapabilityControl, 16); // DEVPROP_TYPE_BOOLEAN

//
// This is a boolean indicating that the operating system is controlling PCI
// Express features natively.  Generally this will be a reflection of the
// individual feature controls granted by the firmware and exposed by properties
// above, but the operating system might override the firmware.  The final
// control disposition is reflected here.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_NativePciExpressControl, 17); // DEVPROP_TYPE_BOOLEAN

//
// This is a boolean indicating that the system is configured to support MSI.
// If this is FALSE no message-signaled interrupts will be allocated to devices
// on this system, even if the operating system supports MSI.
//

DEFINE_PCI_ROOT_BUS_DEVPKEY(DEVPKEY_PciRootBus_SystemMsiSupport, 18); // DEVPROP_TYPE_BOOLEAN


//
// The GUID {3AB22E31-8264-4b4e-9AF5-A8D2D8E33E62} is a seed for all properties
// defined for a PCI device.
//

#define DEFINE_PCI_DEVICE_DEVPKEY(_DevPkeyName, _Pid) \
   DEFINE_DEVPROPKEY((_DevPkeyName), 0x3ab22e31, 0x8264, 0x4b4e, 0x9a, 0xf5, 0xa8, 0xd2, 0xd8, 0xe3, 0x3e, 0x62, (_Pid))

//
// This property is defined to display the type of PCI device. The possible
// values are shown below.
//

#define DevProp_PciDevice_DeviceType_PciConventional                            0
#define DevProp_PciDevice_DeviceType_PciX                                       1
#define DevProp_PciDevice_DeviceType_PciExpressEndpoint                         2
#define DevProp_PciDevice_DeviceType_PciExpressLegacyEndpoint                   3
#define DevProp_PciDevice_DeviceType_PciExpressRootComplexIntegratedEndpoint    4
#define DevProp_PciDevice_DeviceType_PciExpressTreatedAsPci                     5

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_DeviceType, 1);

//
// This property is valid for conventional PCI or PCI-X devices.
// For conventional PCI devices, the speed/mode is described by the following
// fields.
//

#define DevProp_PciDevice_CurrentSpeedAndMode_Pci_Conventional_33MHz        0
#define DevProp_PciDevice_CurrentSpeedAndMode_Pci_Conventional_66MHz        1

//
// For PCI-X devices, the speed/mode is encoded in the following fashion.
//

#define DevProp_PciDevice_CurrentSpeedAndMode_PciX_Mode_Conventional_Pci  0x0
#define DevProp_PciDevice_CurrentSpeedAndMode_PciX_Mode1_66Mhz            0x1
#define DevProp_PciDevice_CurrentSpeedAndMode_PciX_Mode1_100Mhz           0x2
#define DevProp_PciDevice_CurrentSpeedAndMode_PciX_Mode1_133MHZ           0x3
#define DevProp_PciDevice_CurrentSpeedAndMode_PciX_Mode2_266_66MHz        0x9
#define DevProp_PciDevice_CurrentSpeedAndMode_PciX_Mode2_266_100MHz       0xA
#define DevProp_PciDevice_CurrentSpeedAndMode_PciX_Mode2_266_133MHz       0xB
#define DevProp_PciDevice_CurrentSpeedAndMode_PciX_Mode2_533_66MHz        0xD
#define DevProp_PciDevice_CurrentSpeedAndMode_PciX_Mode2_533_100MHz       0xE
#define DevProp_PciDevice_CurrentSpeedAndMode_PciX_Mode2_533_133MHz       0xF

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_CurrentSpeedAndMode, 2);

//
// The BaseClass, SubClass and ProgIf fields are valid for all PCI devices.
//

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_BaseClass, 3);

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_SubClass, 4);

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_ProgIf, 5);

//
// This property describes the current payload size in the transaction layer
// for a PCI Express device. The encodings for this field are described below.
//

#define DevProp_PciExpressDevice_PayloadOrRequestSize_128Bytes          0
#define DevProp_PciExpressDevice_PayloadOrRequestSize_256Bytes          1
#define DevProp_PciExpressDevice_PayloadOrRequestSize_512Bytes          2
#define DevProp_PciExpressDevice_PayloadOrRequestSize_1024Bytes         3
#define DevProp_PciExpressDevice_PayloadOrRequestSize_2048Bytes         4
#define DevProp_PciExpressDevice_PayloadOrRequestSize_4096Bytes         5

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_CurrentPayloadSize, 6);

//
// This property describes the maximum payload size supported by an express
// device/function. The encodings are described above.
//

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_MaxPayloadSize, 7);

//
// This property describes the maximum read request size for an express device.
// The encoding for this field are given above.
//

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_MaxReadRequestSize, 8);

//
// This property is applicable to an express device with an express link. It
// describes the current link speed for the device. The encodings are defined
// as follows.
//

#define DevProp_PciExpressDevice_LinkSpeed_TwoAndHalf_Gbps      1

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_CurrentLinkSpeed, 9);

//
// This property is applicable to an express device with an express link. It
// describes the current link width whose encoding is as follows.
//

#define DevProp_PciExpressDevice_LinkWidth_By_1             1
#define DevProp_PciExpressDevice_LinkWidth_By_2             2
#define DevProp_PciExpressDevice_LinkWidth_By_4             4
#define DevProp_PciExpressDevice_LinkWidth_By_8             8
#define DevProp_PciExpressDevice_LinkWidth_By_12           12
#define DevProp_PciExpressDevice_LinkWidth_By_16           16
#define DevProp_PciExpressDevice_LinkWidth_By_32           32

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_CurrentLinkWidth, 10);

//
// This property describes the maximum link speed of an express link for an
// express device. The encodings for this field are:
//

#define DevProp_PciExpressDevice_LinkSpeed_TwoAndHalf_Gbps      1

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_MaxLinkSpeed, 11);

//
// This property describes the maximum link width implemented by an express
// link for an express devce. The encodings are same as described above.
//

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_MaxLinkWidth, 12);

//
// This property describes the specification version to which an express device
// was built.  The encodings for this field are:
//

#define DevProp_PciExpressDevice_Spec_Version_10        1
#define DevProp_PciExpressDevice_Spec_Version_11        2

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_ExpressSpecVersion, 13);

//
// This property describes the hardware support for interrupts on the device.
// It is a bitmask of supported interrupt types, with the following values:
//

#define DevProp_PciDevice_InterruptType_LineBased       1
#define DevProp_PciDevice_InterruptType_Msi             2
#define DevProp_PciDevice_InterruptType_MsiX            4

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_InterruptSupport, 14);

//
// This property describes the number of message interrupts a device supports
// in hardware.  This property is only valid if the device supports message
// interrupts.
//

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_InterruptMessageMaximum, 15);

//
// This property describes the number of Base Address Registers of various types
// supported by the device hardware.  The property data is a 32 bit value
// interpreted by the following macros:
//

#define DevProp_PciDevice_IoBarCount(_PropertyData)                             ((_PropertyData) & 0xFF)
#define DevProp_PciDevice_NonPrefetchable_MemoryBarCount(_PropertyData)         (((_PropertyData) >> 8) & 0xFF)
#define DevProp_PciDevice_32BitPrefetchable_MemoryBarCount(_PropertyData)       (((_PropertyData) >> 16) & 0xFF)
#define DevProp_PciDevice_64BitPrefetchable_MemoryBarCount(_PropertyData)       (((_PropertyData) >> 24) & 0xFF)

DEFINE_PCI_DEVICE_DEVPKEY(DEVPKEY_PciDevice_BarTypes, 16);

#endif
