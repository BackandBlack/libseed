#pragma once

#ifdef PLATFORM_WINDOWS
    #ifdef LIBSEED_BUILD_DLL
        #define LIBSEED_API __declspec(dllexport)
    #else
        #define LIBSEED_API __declspec(dllimport)
    #endif
#elif PLATFORM_LINUX
    #ifdef LIBSEED_BUILD_DLL
        #define LIBSEED_API __attribute__((visibility("default")))
    #else
        #define LIBSEED_API
    #endif
#else
    #error ERROR: Unsupported Platform.
#endif