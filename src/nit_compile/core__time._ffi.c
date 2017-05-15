/*
	Extern implementation of Nit module time
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__time._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
long time___Sys_get_time___impl( void* self )
{
#line 24 "/home/morriar/dev/projects/nit/lib/core/time.nit"

 return time(NULL); }
struct tm * time___new_Tm_localtime___impl(  )
{
#line 94 "/home/morriar/dev/projects/nit/lib/core/time.nit"


		struct tm *tm;
		time_t t = time(NULL);
		tm = localtime(&t);
		return tm;
	}
char* time___Tm_asctime___impl( struct tm * self )
{
#line 139 "/home/morriar/dev/projects/nit/lib/core/time.nit"

 return asctime(self); }
