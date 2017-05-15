/*
	Extern implementation of Nit module math
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__math._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#line 24 "/home/morriar/dev/projects/nit/lib/core/math.nit"


	/* Is rand shortcut? */
	static int nit_rand_seeded;
	/* Current rand seed if seeded */
	static unsigned int nit_rand_seed;

	#define NIT_RAND_MAX 0x7fffffff

	/* This algorithm is mentioned in the ISO C standard, here extended
	for 32 bits.  */
	static int
	nit_rand(void) {
		unsigned int next = nit_rand_seed;
		int result;

		next *= 1103515245;
		next += 12345;
		result = (unsigned int) (next / 65536) % 2048;

		next *= 1103515245;
		next += 12345;
		result <<= 10;
		result ^= (unsigned int) (next / 65536) % 1024;

		next *= 1103515245;
		next += 12345;
		result <<= 10;
		result ^= (unsigned int) (next / 65536) % 1024;

		nit_rand_seed = next;

		return result;
	}
long core__math___Int_rand___impl( long self )
{
#line 61 "/home/morriar/dev/projects/nit/lib/core/math.nit"


		if (nit_rand_seeded) return (long)(((double)self)*nit_rand()/(NIT_RAND_MAX+1.0));
		return (long)(((double)self)*rand()/(RAND_MAX+1.0));
	}
long core__math___Int__caret___impl( long self, long i )
{
#line 79 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return self ^ i; }
long core__math___Int__unary_tilde___impl( long self )
{
#line 84 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return ~self; }
long core__math___Int_sqrt___impl( long self )
{
#line 89 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return sqrt(self); }
unsigned char core__math___Byte__pipe___impl( unsigned char self, unsigned char i )
{
#line 192 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return self | i; }
unsigned char core__math___Byte__caret___impl( unsigned char self, unsigned char i )
{
#line 197 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return self ^ i; }
unsigned char core__math___Byte__unary_tilde___impl( unsigned char self )
{
#line 202 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return ~self; }
double core__math___Float_sqrt___impl( double self )
{
#line 213 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return sqrt(self); }
double core__math___Float_cos___impl( double self )
{
#line 218 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return cos(self); }
double core__math___Float_sin___impl( double self )
{
#line 223 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return sin(self); }
double core__math___Float_tan___impl( double self )
{
#line 228 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return tan(self); }
double core__math___Float_acos___impl( double self )
{
#line 233 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return acos(self); }
double core__math___Float_asin___impl( double self )
{
#line 238 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return asin(self); }
double core__math___Float_atan___impl( double self )
{
#line 243 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return atan(self); }
double core__math___Float_abs___impl( double self )
{
#line 250 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return fabs(self); }
double core__math___Float_pow___impl( double self, double e )
{
#line 257 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return pow(self, e); }
double core__math___Float_log___impl( double self )
{
#line 263 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return log(self); }
double core__math___Float_exp___impl( double self )
{
#line 272 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return exp(self); }
double core__math___Float_ceil___impl( double self )
{
#line 278 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return ceil(self); }
double core__math___Float_floor___impl( double self )
{
#line 284 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return floor(self); }
double core__math___Float_round___impl( double self )
{
#line 292 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return round(self); }
double core__math___Float_rand___impl( double self )
{
#line 295 "/home/morriar/dev/projects/nit/lib/core/math.nit"


		if (nit_rand_seeded) return ((self)*nit_rand())/(NIT_RAND_MAX+1.0);
		return ((self)*rand())/(RAND_MAX+1.0);
	}
double core__math___Float_hypot_with___impl( double self, double b )
{
#line 301 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return hypotf(self, b); }
int core__math___Float_is_nan___impl( double self )
{
#line 312 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return isnan(self); }
int core__math___Float_native_is_inf___impl( double self )
{
#line 334 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return isinf(self); }
double core__math___Sys_atan2___impl( Sys self, double y, double x )
{
#line 551 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 return atan2(y, x); }
void core__math___Sys_srand_from___impl( Sys self, long x )
{
#line 568 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 nit_rand_seeded = 1; nit_rand_seed = (unsigned int)x; }
void core__math___Sys_srand___impl( Sys self )
{
#line 573 "/home/morriar/dev/projects/nit/lib/core/math.nit"

 nit_rand_seeded = 0; srand((unsigned int)time(NULL)); }
