/*
	Extern implementation of Nit module file
*/
#ifndef CORE__FILE_NITG_NITNI_H
#define CORE__FILE_NITG_NITNI_H

#ifndef NIT_TYPE_FileReader
#define NIT_TYPE_FileReader 1
typedef struct nitni_instance *FileReader;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#ifndef NIT_TYPE_nullable_Int
#define NIT_TYPE_nullable_Int 1
typedef struct nitni_instance *nullable_Int;
#endif
#ifndef NIT_TYPE_Array_of_Int
#define NIT_TYPE_Array_of_Int 1
typedef struct nitni_instance *Array_of_Int;
#endif
#ifndef NIT_TYPE_nullable_Object
#define NIT_TYPE_nullable_Object 1
typedef struct nitni_instance *nullable_Object;
#endif
#ifndef NIT_TYPE_Sys
#define NIT_TYPE_Sys 1
typedef struct nitni_instance *Sys;
#endif
#include "core__file._ffi.h"
#include <stdint.h>
extern void nitni_global_ref_incr(void*);
extern void nitni_global_ref_decr(void*);
#ifndef FileReader_incr_ref
	#define FileReader_incr_ref(from) nitni_global_ref_incr((FileReader)(from))
#endif
#ifndef FileReader_decr_ref
	#define FileReader_decr_ref(from) nitni_global_ref_decr((FileReader)(from))
#endif
#ifndef Sys_incr_ref
	#define Sys_incr_ref(from) nitni_global_ref_incr((Sys)(from))
#endif
#ifndef Sys_decr_ref
	#define Sys_decr_ref(from) nitni_global_ref_decr((Sys)(from))
#endif
#ifndef Sys_incr_ref
	#define Sys_incr_ref(from) nitni_global_ref_incr((Sys)(from))
#endif
#ifndef Sys_decr_ref
	#define Sys_decr_ref(from) nitni_global_ref_decr((Sys)(from))
#endif
#ifndef Sys_incr_ref
	#define Sys_incr_ref(from) nitni_global_ref_incr((Sys)(from))
#endif
#ifndef Sys_decr_ref
	#define Sys_decr_ref(from) nitni_global_ref_decr((Sys)(from))
#endif
#ifndef Sys_incr_ref
	#define Sys_incr_ref(from) nitni_global_ref_incr((Sys)(from))
#endif
#ifndef Sys_decr_ref
	#define Sys_decr_ref(from) nitni_global_ref_decr((Sys)(from))
#endif
#ifndef nullable_Int_incr_ref
	#define nullable_Int_incr_ref(from) nitni_global_ref_incr((nullable_Int)(from))
#endif
#ifndef nullable_Int_decr_ref
	#define nullable_Int_decr_ref(from) nitni_global_ref_decr((nullable_Int)(from))
#endif
extern struct nitni_instance * NIT_NULL___null_Int();
#define null_Int NIT_NULL___null_Int
#ifndef Array_of_Int_incr_ref
	#define Array_of_Int_incr_ref(from) nitni_global_ref_incr((Array_of_Int)(from))
#endif
#ifndef Array_of_Int_decr_ref
	#define Array_of_Int_decr_ref(from) nitni_global_ref_decr((Array_of_Int)(from))
#endif
#ifndef nullable_Object_incr_ref
	#define nullable_Object_incr_ref(from) nitni_global_ref_incr((nullable_Object)(from))
#endif
#ifndef nullable_Object_decr_ref
	#define nullable_Object_decr_ref(from) nitni_global_ref_decr((nullable_Object)(from))
#endif
extern struct nitni_instance * NIT_NULL___null_Object();
#define null_Object NIT_NULL___null_Object
extern long core__file___Array_of_Int_length( struct nitni_instance * self );
extern long core__file___Array_of_Int__index( struct nitni_instance * self, long index );
extern int core__file___Int_is_a_nullable_Int(long);
#ifndef Int_is_a_nullable_Int
#define Int_is_a_nullable_Int core__file___Int_is_a_nullable_Int
#endif
extern struct nitni_instance * core__file___Int_as_nullable_Int(long);
#ifndef Int_as_nullable_Int
#define Int_as_nullable_Int core__file___Int_as_nullable_Int
#endif
#ifndef Int_as_nullable
#define Int_as_nullable Int_as_nullable_Int
#endif
#ifndef Sys_incr_ref
	#define Sys_incr_ref(from) nitni_global_ref_incr((Sys)(from))
#endif
#ifndef Sys_decr_ref
	#define Sys_decr_ref(from) nitni_global_ref_decr((Sys)(from))
#endif
#endif
