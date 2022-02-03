/********************************************************//**
 *
 * @file
 * @brief arm64_marvell_ac5x Porting Macros.
 *
 * @addtogroup arm64_marvell_ac5x-porting
 * @{
 *
 ***********************************************************/
#ifndef __ARM64_ACCTON_AS4564_26P_PORTING_H__
#define __ARM64_ACCTON_AS4564_26P_PORTING_H__


/* <auto.start.portingmacro(ALL).define> */
#if ARM64_MARVELL_AC5X_CONFIG_PORTING_INCLUDE_STDLIB_HEADERS == 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <memory.h>
#endif

#ifndef ARM64_MARVELL_AC5X_MALLOC
    #if defined(GLOBAL_MALLOC)
        #define ARM64_MARVELL_AC5X_MALLOC GLOBAL_MALLOC
    #elif ARM64_MARVELL_AC5X_CONFIG_PORTING_STDLIB == 1
        #define ARM64_MARVELL_AC5X_MALLOC malloc
    #else
        #error The macro ARM64_MARVELL_AC5X_MALLOC is required but cannot be defined.
    #endif
#endif

#ifndef ARM64_MARVELL_AC5X_FREE
    #if defined(GLOBAL_FREE)
        #define ARM64_MARVELL_AC5X_FREE GLOBAL_FREE
    #elif ARM64_MARVELL_AC5X_CONFIG_PORTING_STDLIB == 1
        #define ARM64_MARVELL_AC5X_FREE free
    #else
        #error The macro ARM64_MARVELL_AC5X_FREE is required but cannot be defined.
    #endif
#endif

#ifndef ARM64_MARVELL_AC5X_MEMSET
    #if defined(GLOBAL_MEMSET)
        #define ARM64_MARVELL_AC5X_MEMSET GLOBAL_MEMSET
    #elif ARM64_MARVELL_AC5X_CONFIG_PORTING_STDLIB == 1
        #define ARM64_MARVELL_AC5X_MEMSET memset
    #else
        #error The macro ARM64_MARVELL_AC5X_MEMSET is required but cannot be defined.
    #endif
#endif

#ifndef ARM64_MARVELL_AC5X_MEMCPY
    #if defined(GLOBAL_MEMCPY)
        #define ARM64_MARVELL_AC5X_MEMCPY GLOBAL_MEMCPY
    #elif ARM64_MARVELL_AC5X_CONFIG_PORTING_STDLIB == 1
        #define ARM64_MARVELL_AC5X_MEMCPY memcpy
    #else
        #error The macro ARM64_MARVELL_AC5X_MEMCPY is required but cannot be defined.
    #endif
#endif

#ifndef ARM64_MARVELL_AC5X_VSNPRINTF
    #if defined(GLOBAL_VSNPRINTF)
        #define ARM64_MARVELL_AC5X_VSNPRINTF GLOBAL_VSNPRINTF
    #elif ARM64_MARVELL_AC5X_CONFIG_PORTING_STDLIB == 1
        #define ARM64_MARVELL_AC5X_VSNPRINTF vsnprintf
    #else
        #error The macro ARM64_MARVELL_AC5X_VSNPRINTF is required but cannot be defined.
    #endif
#endif

#ifndef ARM64_MARVELL_AC5X_SNPRINTF
    #if defined(GLOBAL_SNPRINTF)
        #define ARM64_MARVELL_AC5X_SNPRINTF GLOBAL_SNPRINTF
    #elif ARM64_MARVELL_AC5X_CONFIG_PORTING_STDLIB == 1
        #define ARM64_MARVELL_AC5X_SNPRINTF snprintf
    #else
        #error The macro ARM64_MARVELL_AC5X_SNPRINTF is required but cannot be defined.
    #endif
#endif

#ifndef ARM64_MARVELL_AC5X_STRLEN
    #if defined(GLOBAL_STRLEN)
        #define ARM64_MARVELL_AC5X_STRLEN GLOBAL_STRLEN
    #elif ARM64_MARVELL_AC5X_CONFIG_PORTING_STDLIB == 1
        #define ARM64_MARVELL_AC5X_STRLEN strlen
    #else
        #error The macro ARM64_MARVELL_AC5X_STRLEN is required but cannot be defined.
    #endif
#endif

/* <auto.end.portingmacro(ALL).define> */


#endif /* __ARM64_MARVELL_AC5X_PORTING_H__ */
/* @} */
