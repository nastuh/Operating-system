/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_KmdfDriver,
    0x678b144e,0xc1af,0x4e39,0xb8,0x7e,0xe9,0xc6,0x46,0x07,0x11,0x28);
// {678b144e-c1af-4e39-b87e-e9c646071128}
