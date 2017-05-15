/*
	Extern implementation of Nit module kernel
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__kernel._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 22 "/home/morriar/dev/projects/nit/lib/core/kernel.nit"


	#include <stdlib.h>
	#include <errno.h>
long core__kernel___Sys_errno___impl( Sys self )
{
#line 298 "/home/morriar/dev/projects/nit/lib/core/kernel.nit"

 return errno; }
int core__kernel___Sys_is_windows___impl( Sys self )
{
#line 1084 "/home/morriar/dev/projects/nit/lib/core/kernel.nit"


#ifdef _WIN32
	return 1;
#else
	return 0;
#endif
}
void core__kernel___Char_output___impl( uint32_t self )
{
#line 894 "/home/morriar/dev/projects/nit/lib/core/kernel.nit"


		if(self < 128){
			printf("%c", self);
		}else if(self < 2048){
			printf("%c%c", 0xC0 | ((0x7C0 & self) >> 6), 0x80 | (0x3F & self));
		}else if(self < 65536){
			printf("%c%c%c", 0xE0 | ((0xF000 & self) >> 12), 0x80 | ((0xFC0 & self) >> 6) ,0x80 | (0x3F & self));
		}else if(self < 2097152){
			printf("%c%c%c%c", 0xF0 | ((0x1C0000 & self) >> 18), 0x80 | ((0x3F000 & self) >> 12), 0x80 | ((0xFC0 & self) >> 6), 0x80 | (0x3F & self));
		}else{
			// Bad char
			printf("%c", self);
		}
	}
int core__kernel___Pointer_address_is_null___impl( void* self )
{
#line 1059 "/home/morriar/dev/projects/nit/lib/core/kernel.nit"

 return self == NULL; }
void core__kernel___Pointer_free___impl( void* self )
{
#line 1062 "/home/morriar/dev/projects/nit/lib/core/kernel.nit"

 free(self); }
long core__kernel___Pointer_hash___impl( void* self )
{
#line 1065 "/home/morriar/dev/projects/nit/lib/core/kernel.nit"

 return (long)self; }
int core__kernel___Pointer_native_equals___impl( void* self, void* o )
{
#line 1069 "/home/morriar/dev/projects/nit/lib/core/kernel.nit"

 return self == o; }
