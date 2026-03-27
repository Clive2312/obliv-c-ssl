#pragma once

#ifndef _GNU_SOURCE
#define _GNU_SOURCE 1
#endif

#ifndef _DEFAULT_SOURCE
#define _DEFAULT_SOURCE 1
#endif

#ifndef _Float16
#define _Float16 float
#endif

#ifndef _Float32
#define _Float32 float
#endif

#ifndef _Float32x
#define _Float32x double
#endif

#ifndef _Float64
#define _Float64 double
#endif

#ifndef _Float64x
#define _Float64x long double
#endif

#ifndef _Float128
#define _Float128 double
#endif

#ifdef __attr_dealloc
#undef __attr_dealloc
#endif
#define __attr_dealloc(dealloc, argno)

#ifdef __attr_dealloc_free
#undef __attr_dealloc_free
#endif
#define __attr_dealloc_free

#include_next <stdlib.h>
