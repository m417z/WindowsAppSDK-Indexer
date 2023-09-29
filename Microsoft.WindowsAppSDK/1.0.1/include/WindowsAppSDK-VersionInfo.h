﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#ifndef __WINDOWSAPPSDK_VERSIONINFO_H__
#define __WINDOWSAPPSDK_VERSIONINFO_H__

// Release information
#define WINDOWSAPPSDK_RELEASE_MAJOR                1
#define WINDOWSAPPSDK_RELEASE_MINOR                0
#define WINDOWSAPPSDK_RELEASE_PATCH                1
#define WINDOWSAPPSDK_RELEASE_MAJORMINOR           0x00010000

#define WINDOWSAPPSDK_RELEASE_CHANNEL              ""
#define WINDOWSAPPSDK_RELEASE_CHANNEL_W            L""

#define WINDOWSAPPSDK_RELEASE_VERSION_TAG          ""
#define WINDOWSAPPSDK_RELEASE_VERSION_TAG_W        L""

#define WINDOWSAPPSDK_RELEASE_VERSION_SHORTTAG     ""
#define WINDOWSAPPSDK_RELEASE_VERSION_SHORTTAG_W   L""

// Runtime information
#define WINDOWSAPPSDK_RUNTIME_IDENTITY_PUBLISHER        "CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US"
#define WINDOWSAPPSDK_RUNTIME_IDENTITY_PUBLISHER_W      L"CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US"
#define WINDOWSAPPSDK_RUNTIME_IDENTITY_PUBLISHERID      "8wekyb3d8bbwe"
#define WINDOWSAPPSDK_RUNTIME_IDENTITY_PUBLISHERID_W    L"8wekyb3d8bbwe"

#define WINDOWSAPPSDK_RUNTIME_VERSION_MAJOR             1
#define WINDOWSAPPSDK_RUNTIME_VERSION_MINOR             440
#define WINDOWSAPPSDK_RUNTIME_VERSION_BUILD             209
#define WINDOWSAPPSDK_RUNTIME_VERSION_REVISION          0
#define WINDOWSAPPSDK_RUNTIME_VERSION_UINT64            0x000101B800D10000
#define WINDOWSAPPSDK_RUNTIME_VERSION_DOTQUADSTRING     "1.440.209.0"
#define WINDOWSAPPSDK_RUNTIME_VERSION_DOTQUADSTRING_W   L"1.440.209.0"

#if defined(__cplusplus)
namespace Microsoft::WindowsAppSDK
{
    namespace Release
    {
        constexpr uint16_t Major = 1;
        constexpr uint16_t Minor = 0;
        constexpr uint16_t Patch = 1;
        constexpr uint32_t MajorMinor = 0x00010000;

        constexpr PCWSTR Channel = L"";

        constexpr PCWSTR VersionTag = L"";

        constexpr PCWSTR VersionShortTag = L"";
    }

    namespace Runtime
    {
        namespace Identity
        {
            constexpr PCWSTR Publisher = L"CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US";
            constexpr PCWSTR PublisherId = L"8wekyb3d8bbwe";
        }

        namespace Version
        {
            constexpr uint16_t Major = 1;
            constexpr uint16_t Minor = 440;
            constexpr uint16_t Build = 209;
            constexpr uint16_t Revision = 0;
            constexpr uint64_t UInt64 = 0x000101B800D10000;
            constexpr PCWSTR DotQuadString = L"1.440.209.0";
        }
    }
}
#endif // defined(__cplusplus)

#endif // __WINDOWSAPPSDK_VERSIONINFO_H__
