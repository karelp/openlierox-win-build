#ifndef _HAD_ZIPCONF_H
#define _HAD_ZIPCONF_H

/*
   zipconf.h -- platform specific include file

   This file was generated automatically by ./make_zipconf.sh
   based on ../config.h.
 */

#define LIBZIP_VERSION "0.10"
#define LIBZIP_VERSION_MAJOR 0
#define LIBZIP_VERSION_MINOR 10
#define LIBZIP_VERSION_MICRO 0

typedef signed __int8		int8_t;
typedef unsigned __int8		uint8_t;
typedef signed __int16		int16_t;
typedef unsigned __int16	uint16_t;
typedef signed __int32		int32_t;
typedef unsigned __int32	uint32_t;
typedef signed __int64		int64_t;
typedef unsigned __int64	uint64_t;
#include <limits.h>

#define UINT16_MAX _UI16_MAX
#define UINT64_MAX _UI64_MAX
#define INT64_MAX _I64_MAX

typedef int8_t zip_int8_t;
#define ZIP_INT8_MIN INT8_MIN
#define ZIP_INT8_MAX INT8_MAX

typedef uint8_t zip_uint8_t;
#define ZIP_UINT8_MAX UINT8_MAX

typedef int16_t zip_int16_t;
#define ZIP_INT16_MIN INT16_MIN
#define ZIP_INT16_MAX INT16_MAX

typedef uint16_t zip_uint16_t;
#define ZIP_UINT16_MAX UINT16_MAX

typedef int32_t zip_int32_t;
#define ZIP_INT32_MIN INT32_MIN
#define ZIP_INT32_MAX INT32_MAX

typedef uint32_t zip_uint32_t;
#define ZIP_UINT32_MAX UINT32_MAX

typedef int64_t zip_int64_t;
#define ZIP_INT64_MIN INT64_MIN
#define ZIP_INT64_MAX INT64_MAX

typedef uint64_t zip_uint64_t;
#define ZIP_UINT64_MAX UINT64_MAX


#endif /* zipconf.h */
