#include "nit.common.h"
#define COLOR_core__exec__Process___data 3
extern const char FILE_core__exec[];
int exec___NativeProcess_is_finished___impl( void* self );
void exec___NativeProcess_wait___impl( void* self );
short int core___core__Process___is_finished(val* self);
long exec___NativeProcess_status___impl( void* self );
#define COLOR_core__exec__Process___command 1
#define COLOR_core__exec__Process___arguments 2
#define COLOR_core__exec__Process__execute 24
val* NEW_core__FlatBuffer(const struct type* type);
extern const struct type type_core__FlatBuffer;
#define COLOR_core___core__FlatBuffer___core__kernel__Object__init 140
void core___core__FlatBuffer___core__abstract_text__Buffer__append(val* self, val* p0);
#define COLOR_core__kernel__Object___61d_61d 3
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_core__abstract_collection__Iterator__is_ok 15
#define COLOR_core__abstract_collection__Iterator__item 16
void core___core__FlatBuffer___core__abstract_text__Buffer__add(val* self, uint32_t p0);
#define COLOR_core__abstract_collection__Iterator__next 17
#define COLOR_core__abstract_collection__Iterator__finish 18
#define COLOR_core__array__AbstractArrayRead___length 0
extern const struct type type_core__Int;
extern const char FILE_core__kernel[];
#define COLOR_core__abstract_text__Text__to_cstring 28
val* core___core__FlatBuffer___core__abstract_text__Object__to_s(val* self);
#define COLOR_core__exec__Process__pipeflags 31
val* BOX_core__Pointer(void*);
extern const struct type type_core__exec__NativeProcess;
extern const struct class class_core__exec__NativeProcess;
void* exec___Process_basic_exec_execute___impl( struct nitni_instance * self, char* prog, char* args, long argc, long pipeflag );
#define COLOR_core__exec__ProcessReader___stream_in 6
void core___core__FileReader___core__stream__Stream__close(val* self);
val* core___core__BufferedReader___Reader__read_char(val* self);
val* core___core__BufferedReader___Reader__read_byte(val* self);
short int core___core__BufferedReader___Reader__eof(val* self);
#define COLOR_core___core__ProcessReader___Process__execute 45
val* NEW_core__FileReader(const struct type* type);
extern const struct type type_core__FileReader;
long exec___NativeProcess_out_fd___impl( void* self );
void core___core__FileReader___from_fd(val* self, long p0);
long exec___CString_system___impl( char* self );
