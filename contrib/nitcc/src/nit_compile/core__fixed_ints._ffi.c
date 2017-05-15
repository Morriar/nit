/*
	Extern implementation of Nit module fixed_ints
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__fixed_ints._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 38 "/home/morriar/dev/projects/nit/lib/core/fixed_ints.nit"


#include <inttypes.h>
uint32_t core__fixed_ints___Int8_ascii___impl( int8_t self )
{
#line 161 "/home/morriar/dev/projects/nit/lib/core/fixed_ints.nit"

 return (uint32_t)self; }
uint32_t core__fixed_ints___Int16_ascii___impl( int16_t self )
{
#line 255 "/home/morriar/dev/projects/nit/lib/core/fixed_ints.nit"

 return (uint32_t)self; }
uint32_t core__fixed_ints___UInt16_ascii___impl( uint16_t self )
{
#line 390 "/home/morriar/dev/projects/nit/lib/core/fixed_ints.nit"

 return (uint32_t)self; }
uint32_t core__fixed_ints___Int32_ascii___impl( int32_t self )
{
#line 503 "/home/morriar/dev/projects/nit/lib/core/fixed_ints.nit"

 return (uint32_t)self; }
uint32_t core__fixed_ints___UInt32_ascii___impl( uint32_t self )
{
#line 627 "/home/morriar/dev/projects/nit/lib/core/fixed_ints.nit"

 return (uint32_t)self; }
