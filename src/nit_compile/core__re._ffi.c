/*
	Extern implementation of Nit module re
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__re._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
 regex_t*  re___new_NativeRegex_malloc___impl(  )
{
#line 41 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return malloc(sizeof(regex_t)); }
long re___NativeRegex_regcomp___impl(  regex_t*  self, char* regex, long cflags )
{
#line 44 "/home/morriar/dev/projects/nit/lib/core/re.nit"


		return regcomp(self, regex, cflags);
	}
long re___NativeRegex_regexec___impl(  regex_t*  self, char* string, long nmatch,  regmatch_t*  pmatch, long eflags )
{
#line 52 "/home/morriar/dev/projects/nit/lib/core/re.nit"


		return regexec(self, string, nmatch, pmatch, eflags);
	}
long re___NativeRegex_regexec_match_only___impl(  regex_t*  self, char* string, long eflags )
{
#line 59 "/home/morriar/dev/projects/nit/lib/core/re.nit"


		return regexec(self, string, 0, NULL, eflags);
	}
void re___NativeRegex_regfree___impl(  regex_t*  self )
{
#line 66 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 regfree(self); }
char* re___NativeRegex_regerror___impl(  regex_t*  self, long errcode )
{
#line 69 "/home/morriar/dev/projects/nit/lib/core/re.nit"


		size_t len = regerror(errcode, self, NULL, 0);
		char *message = malloc(len);
		regerror(errcode, self, message, len);

		return message;
	}
long re___NativeRegex_re_nsub___impl(  regex_t*  self )
{
#line 78 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return self->re_nsub; }
int re___Int_is_nomatch___impl( long self )
{
#line 99 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return self == REG_NOMATCH; }
 regmatch_t*  re___new_NativeMatchArray_malloc___impl( long length )
{
#line 105 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return malloc(length * sizeof(regmatch_t)); }
long re___NativeMatchArray_rm_so___impl(  regmatch_t*  self )
{
#line 108 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return self->rm_so; }
long re___NativeMatchArray_rm_eo___impl(  regmatch_t*  self )
{
#line 111 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return self->rm_eo; }
 regmatch_t*  re___NativeMatchArray__index___impl(  regmatch_t*  self, long index )
{
#line 114 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return self + index; }
long re___Sys_flag_extended___impl( void* self )
{
#line 83 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return REG_EXTENDED; }
long re___Sys_flag_icase___impl( void* self )
{
#line 84 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return REG_ICASE; }
long re___Sys_flag_nosub___impl( void* self )
{
#line 85 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return REG_NOSUB; }
long re___Sys_flag_newline___impl( void* self )
{
#line 86 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return REG_NEWLINE; }
long re___Sys_flag_notbol___impl( void* self )
{
#line 90 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return REG_NOTBOL; }
long re___Sys_flag_noteol___impl( void* self )
{
#line 91 "/home/morriar/dev/projects/nit/lib/core/re.nit"

 return REG_NOTEOL; }
