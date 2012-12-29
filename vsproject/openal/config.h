#ifndef CONFIG_H
#define CONFIG_H

/* Define to the library version */
#define ALSOFT_VERSION ""

/* Define if we have the Windows Multimedia backend */
#define HAVE_WINMM

/* Define if we have the stat function */
#define HAVE_STAT

/* Define if we have the powf function */
#define HAVE_POWF

/* Define if we have the sqrtf function */
#define HAVE_SQRTF

/* Define if we have the acosf function */
#define HAVE_ACOSF

/* Define if we have the atanf function */
#define HAVE_ATANF

/* Define if we have the fabsf function */
#define HAVE_FABSF

/* Define if we have stdint.h */
#define HAVE_STDINT_H

/* Define if we have the __int64 type */
#define HAVE___INT64

/* Define to the size of a long int type */
#define SIZEOF_LONG 4


/* Define to the size of a long long int type */
#define SIZEOF_LONG_LONG 8


/* Define to the size of an unsigned int type */
#define SIZEOF_UINT 4


/* Define to the size of a void pointer type */
#define SIZEOF_VOIDP 4

#if _MSC_VER >= 1600
static_assert(SIZEOF_UINT == sizeof(unsigned int), "Unsigned int is not correct size, are you compiling a 32bit target?");
static_assert(SIZEOF_LONG_LONG == sizeof(long long), "Long long is not correct size, are you compiling a 32bit target?");
static_assert(SIZEOF_LONG == sizeof(long), "Long is not of correct size, are you compiling a 32bit target?");
static_assert(SIZEOF_VOIDP == sizeof(void *), "Long is not correct size, are you compiling a 32bit target?");
#endif

#include <float.h>

#define snprintf _snprintf
#define strcasecmp _stricmp
#define strncasecmp _strnicmp
#define isnan _isnan

#endif 