#include "nit.common.h"
val* BOX_core__Pointer(void*);
extern const struct type type_core__re__NativeRegex;
extern const struct class class_core__re__NativeRegex;
void* re___new_NativeRegex_malloc___impl(  );
long re___NativeRegex_regcomp___impl( void* self, char* regex, long cflags );
long re___NativeRegex_regexec___impl( void* self, char* string, long nmatch, void* pmatch, long eflags );
long re___NativeRegex_regexec_match_only___impl( void* self, char* string, long eflags );
void re___NativeRegex_regfree___impl( void* self );
char* re___NativeRegex_regerror___impl( void* self, long errcode );
long re___NativeRegex_re_nsub___impl( void* self );
int re___Int_is_nomatch___impl( long self );
extern const struct type type_core__re__NativeMatchArray;
extern const struct class class_core__re__NativeMatchArray;
void* re___new_NativeMatchArray_malloc___impl( long length );
long re___NativeMatchArray_rm_so___impl( void* self );
long re___NativeMatchArray_rm_eo___impl( void* self );
void* re___NativeMatchArray__index___impl( void* self, long index );
val* NEW_core__Regex(const struct type* type);
extern const struct type type_core__Regex;
#define COLOR_core__abstract_text__Object__to_s 4
#define COLOR_core__re__Regex__string_61d 18
#define COLOR_core__kernel__Object__init 0
#define COLOR_core__re__Regex___string 0
extern const char FILE_core__re[];
#define COLOR_core__re__Regex___extended 1
#define COLOR_core__re__Regex___ignore_case 2
#define COLOR_core__re__Regex___optimize_has 3
#define COLOR_core__re__Regex___newline 4
#define COLOR_core__re__Regex___not_bol 5
#define COLOR_core__re__Regex___not_eol 6
#define COLOR_core__re__Regex___native 7
#define COLOR_core__re__Regex___native_match 8
#define COLOR_core__re__Regex___native_match_is_init 10
val* NEW_core__re__NativeMatchArray(const struct type* type);
extern const struct type type_core__Int;
extern const char FILE_core__kernel[];
val* core__re___core__re__NativeMatchArray___malloc(val* self, long p0);
#define COLOR_core__re__Regex___cflags_cache 11
#define COLOR_core__re__Regex___string_cache 12
long re___Sys_flag_extended___impl( struct nitni_instance * self );
long re___Sys_flag_icase___impl( struct nitni_instance * self );
long re___Sys_flag_nosub___impl( struct nitni_instance * self );
long re___Sys_flag_newline___impl( struct nitni_instance * self );
#define COLOR_core__kernel__Object___61d_61d 3
val* NEW_core__re__NativeRegex(const struct type* type);
val* core__re___core__re__NativeRegex___malloc(val* self);
#define COLOR_core__abstract_text__Text__to_cstring 28
val* core__flat___CString___core__abstract_text__Object__to_s(char* self);
void kernel___Pointer_free___impl( void* self );
val* NEW_core__Error(const struct type* type);
extern const struct type type_core__Error;
#define COLOR_core__error__Error__message_61d 15
val* core___core__Regex___native_match(val* self);
long re___Sys_flag_notbol___impl( struct nitni_instance * self );
long re___Sys_flag_noteol___impl( struct nitni_instance * self );
val* core___core__Regex___compile(val* self);
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__core__String;
val* core__abstract_text___CString___to_s_full(char* self, long p0, long p1);
#define COLOR_core__error__Error___message 0
extern const char FILE_core__error[];
#define COLOR_core__abstract_text__NativeArray__native_to_s 15
#define COLOR_core__kernel__Object__output 12
long core___core__Regex___gather_eflags(val* self);
val* core___core__Regex___get_error(val* self, long p0);
#define COLOR_core__abstract_text__Text__substring_from 42
#define COLOR_core__abstract_text__Text__byte_length 35
val* core__flat___CString___to_s_unsafe(char* self, val* p0, val* p1, val* p2, val* p3);
long core___core__CString___char_to_byte_index_cached(char* self, long p0, long p1, long p2);
long core___core__CString___byte_to_char_index_cached(char* self, long p0, long p1, long p2);
long core___core__CString___length_of_char_at(char* self, long p0);
val* NEW_core__Match(const struct type* type);
extern const struct type type_core__Match;
#define COLOR_core__string_search__Match__string_61d 16
#define COLOR_core__string_search__Match__from_61d 17
#define COLOR_core__string_search__Match__length_61d 18
val* core__re___Match___subs(val* self);
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
long core___core__Int___Discrete__successor(long self, long p0);
#define COLOR_core___core__Regex___core__kernel__Object__init 40
#define COLOR_core__re__Match___subs 3
val* NEW_core__Array(const struct type* type);
extern const struct type type_core__Array__nullable__core__Match;
void core___core__Array___core__kernel__Object__init(val* self);
