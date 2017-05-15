#include "nitcc__nitcc_parser_gen.main.0.h"
struct nitni_global_ref_list_t *nitni_global_ref_list;
void initialize_nitni_global_refs() {
	nitni_global_ref_list = (struct nitni_global_ref_list_t*)nit_alloc(sizeof(struct nitni_global_ref_list_t));
	nitni_global_ref_list->head = NULL;
	nitni_global_ref_list->tail = NULL;
}

void nitni_global_ref_add( struct nitni_ref *ref ) {
	if ( nitni_global_ref_list->head == NULL ) {
		nitni_global_ref_list->head = ref;
		ref->prev = NULL;
	} else {
		nitni_global_ref_list->tail->next = ref;
		ref->prev = nitni_global_ref_list->tail;
	}
	nitni_global_ref_list->tail = ref;

	ref->next = NULL;
}

void nitni_global_ref_remove( struct nitni_ref *ref ) {
	if ( ref->prev == NULL ) {
		nitni_global_ref_list->head = ref->next;
	} else {
		ref->prev->next = ref->next;
	}

	if ( ref->next == NULL ) {
		nitni_global_ref_list->tail = ref->prev;
	} else {
		ref->next->prev = ref->prev;
	}
}

extern void nitni_global_ref_incr( struct nitni_ref *ref ) {
	if ( ref->count == 0 ) /* not registered */
	{
		/* add to list */
		nitni_global_ref_add( ref );
	}

	ref->count ++;
}

extern void nitni_global_ref_decr( struct nitni_ref *ref ) {
	if ( ref->count == 1 ) /* was last reference */
	{
		/* remove from list */
		nitni_global_ref_remove( ref );
	}

	ref->count --;
}

#include <signal.h>
#ifndef NO_STACKTRACE
#define UNW_LOCAL_ONLY
#include <libunwind.h>
#include "c_functions_hash.h"
#endif
int glob_argc;
char **glob_argv;
val *glob_sys;
struct catch_stack_t catchStack;
static void show_backtrace(void) {
#ifndef NO_STACKTRACE
char* opt = getenv("NIT_NO_STACK");
unw_cursor_t cursor;
if(opt==NULL){
unw_context_t uc;
unw_word_t ip;
char* procname = malloc(sizeof(char) * 100);
unw_getcontext(&uc);
unw_init_local(&cursor, &uc);
PRINT_ERROR("-------------------------------------------------\n");
PRINT_ERROR("--   Stack Trace   ------------------------------\n");
PRINT_ERROR("-------------------------------------------------\n");
while (unw_step(&cursor) > 0) {
	unw_get_proc_name(&cursor, procname, 100, &ip);
	const char* recv = get_nit_name(procname, strlen(procname));
	if (recv != NULL){
		PRINT_ERROR("` %s\n", recv);
	}else{
		PRINT_ERROR("` %s\n", procname);
	}
}
PRINT_ERROR("-------------------------------------------------\n");
free(procname);
}
#endif /* NO_STACKTRACE */
}
void sig_handler(int signo){
#ifdef _WIN32
PRINT_ERROR("Caught signal : %s\n", signo);
#else
PRINT_ERROR("Caught signal : %s\n", strsignal(signo));
#endif
show_backtrace();
signal(signo, SIG_DFL);
#ifndef _WIN32
kill(getpid(), signo);
#endif
}
void fatal_exit(int status) {
show_backtrace();
exit(status);
}
int main(int argc, char** argv) {
val* var /* : Sys */;
#if !defined(__ANDROID__) && !defined(TARGET_OS_IPHONE)
signal(SIGABRT, sig_handler);
signal(SIGFPE, sig_handler);
signal(SIGILL, sig_handler);
signal(SIGINT, sig_handler);
signal(SIGTERM, sig_handler);
signal(SIGSEGV, sig_handler);
#endif
#ifndef _WIN32
signal(SIGPIPE, SIG_IGN);
#endif
glob_argc = argc; glob_argv = argv;
catchStack.cursor = -1;
initialize_gc_option();
initialize_nitni_global_refs();
var = NEW_core__Sys(&type_core__Sys);
glob_sys = var;
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Sys>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Sys__run]))(var); /* run on <var:Sys>*/
}
return 0;
}
const char FILE_nitcc__nitcc_parser_gen[] = "nitcc_parser_gen.nit";
const char FILE_nitcc__grammar[] = "./grammar.nit";
const char FILE_core[] = "/home/morriar/dev/projects/nit/lib/core/core.nit";
const char FILE_core__posix[] = "/home/morriar/dev/projects/nit/lib/core/posix.nit";
const char FILE_core__text[] = "/home/morriar/dev/projects/nit/lib/core/text/text.nit";
const char FILE_core__ropes[] = "/home/morriar/dev/projects/nit/lib/core/text/ropes.nit";
const char FILE_core__flat[] = "/home/morriar/dev/projects/nit/lib/core/text/flat.nit";
const char FILE_core__abstract_text[] = "/home/morriar/dev/projects/nit/lib/core/text/abstract_text.nit";
const char FILE_core__native[] = "/home/morriar/dev/projects/nit/lib/core/text/native.nit";
const char FILE_core__kernel[] = "/home/morriar/dev/projects/nit/lib/core/kernel.nit";
const char FILE_core__math[] = "/home/morriar/dev/projects/nit/lib/core/math.nit";
const char FILE_core__collection[] = "/home/morriar/dev/projects/nit/lib/core/collection/collection.nit";
const char FILE_core__range[] = "/home/morriar/dev/projects/nit/lib/core/collection/range.nit";
const char FILE_core__abstract_collection[] = "/home/morriar/dev/projects/nit/lib/core/collection/abstract_collection.nit";
const char FILE_core__list[] = "/home/morriar/dev/projects/nit/lib/core/collection/list.nit";
const char FILE_core__array[] = "/home/morriar/dev/projects/nit/lib/core/collection/array.nit";
const char FILE_core__circular_array[] = "/home/morriar/dev/projects/nit/lib/core/collection/circular_array.nit";
const char FILE_core__sorter[] = "/home/morriar/dev/projects/nit/lib/core/collection/sorter.nit";
const char FILE_core__hash_collection[] = "/home/morriar/dev/projects/nit/lib/core/collection/hash_collection.nit";
const char FILE_core__union_find[] = "/home/morriar/dev/projects/nit/lib/core/collection/union_find.nit";
const char FILE_core__fixed_ints[] = "/home/morriar/dev/projects/nit/lib/core/fixed_ints.nit";
const char FILE_core__string_search[] = "/home/morriar/dev/projects/nit/lib/core/text/string_search.nit";
const char FILE_core__fixed_ints_text[] = "/home/morriar/dev/projects/nit/lib/core/text/fixed_ints_text.nit";
const char FILE_core__environ[] = "/home/morriar/dev/projects/nit/lib/core/environ.nit";
const char FILE_core__file[] = "/home/morriar/dev/projects/nit/lib/core/file.nit";
const char FILE_core__stream[] = "/home/morriar/dev/projects/nit/lib/core/stream.nit";
const char FILE_core__error[] = "/home/morriar/dev/projects/nit/lib/core/error.nit";
const char FILE_core__bytes[] = "/home/morriar/dev/projects/nit/lib/core/bytes.nit";
const char FILE_core__codecs[] = "/home/morriar/dev/projects/nit/lib/core/codecs/codecs.nit";
const char FILE_core__codec_base[] = "/home/morriar/dev/projects/nit/lib/core/codecs/codec_base.nit";
const char FILE_core__utf8[] = "/home/morriar/dev/projects/nit/lib/core/codecs/utf8.nit";
const char FILE_core__iso8859_95d1[] = "/home/morriar/dev/projects/nit/lib/core/codecs/iso8859_1.nit";
const char FILE_core__time[] = "/home/morriar/dev/projects/nit/lib/core/time.nit";
const char FILE_core__gc[] = "/home/morriar/dev/projects/nit/lib/core/gc.nit";
const char FILE_core__exec[] = "/home/morriar/dev/projects/nit/lib/core/exec.nit";
const char FILE_core__bitset[] = "/home/morriar/dev/projects/nit/lib/core/bitset.nit";
const char FILE_core__queue[] = "/home/morriar/dev/projects/nit/lib/core/queue.nit";
const char FILE_core__numeric[] = "/home/morriar/dev/projects/nit/lib/core/numeric.nit";
const char FILE_core__re[] = "/home/morriar/dev/projects/nit/lib/core/re.nit";
void gc_finalize (void *obj, void *client_data) {
val* var /* : Finalizable */;
var = obj;
{
((void(*)(val* self))(var->class->vft[COLOR_core__gc__Finalizable__finalize]))(var); /* finalize on <var:Finalizable>*/
}
}
