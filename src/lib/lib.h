#ifndef _LIB_H_
#define _LIB_H_

#ifdef _WIN32
    #ifdef BUILDING_LIB
        #define DLL_EXPORT __declspec(dllexport) 
    #else
        #define DLL_EXPORT __declspec(dllimport) 
    #endif
#else
    #define DLL_EXPORT
#endif

DLL_EXPORT void flib(void);

#endif
