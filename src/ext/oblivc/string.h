#pragma once

#ifdef __GNUC_PREREQ
#undef __GNUC_PREREQ
#endif
#define __GNUC_PREREQ(maj, min) 0

#ifdef __fortify_function
#undef __fortify_function
#endif

#include_next <string.h>

#undef __GNUC_PREREQ
#define __GNUC_PREREQ(maj, min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
