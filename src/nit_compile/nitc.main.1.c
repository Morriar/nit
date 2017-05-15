#include "nitc.main.0.h"
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
PRINT_ERROR("Caught signal : %s\n", strsignal(signo));
show_backtrace();
signal(signo, SIG_DFL);
kill(getpid(), signo);
}
void fatal_exit(int status) {
show_backtrace();
exit(status);
}
int main(int argc, char** argv) {
val* var /* : Sys */;
#ifndef ANDROID
signal(SIGABRT, sig_handler);
signal(SIGFPE, sig_handler);
signal(SIGILL, sig_handler);
signal(SIGINT, sig_handler);
signal(SIGTERM, sig_handler);
signal(SIGSEGV, sig_handler);
#endif
signal(SIGPIPE, SIG_IGN);
glob_argc = argc; glob_argv = argv;
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
const char FILE_nitc[] = "nitc.nit";
const char FILE_nitc__frontend[] = "./frontend/frontend.nit";
const char FILE_nitc__no_warning[] = "./frontend/no_warning.nit";
const char FILE_nitc__modelbuilder[] = "./modelbuilder.nit";
const char FILE_nitc__loader[] = "./loader.nit";
const char FILE_nitc__modelbuilder_base[] = "./modelbuilder_base.nit";
const char FILE_nitc__model[] = "./model/model.nit";
const char FILE_nitc__mmodule[] = "./model/mmodule.nit";
const char FILE_nitc__mpackage[] = "./model/mpackage.nit";
const char FILE_nitc__model_base[] = "./model/model_base.nit";
const char FILE_nitc__location[] = "./location.nit";
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
const char FILE_more_collections[] = "/home/morriar/dev/projects/nit/lib/more_collections.nit";
const char FILE_serialization[] = "/home/morriar/dev/projects/nit/lib/serialization/serialization.nit";
const char FILE_poset[] = "/home/morriar/dev/projects/nit/lib/poset.nit";
const char FILE_nitc__mdoc[] = "./model/mdoc.nit";
const char FILE_ordered_tree[] = "/home/morriar/dev/projects/nit/lib/ordered_tree.nit";
const char FILE_nitc__toolcontext[] = "./toolcontext.nit";
const char FILE_opts[] = "/home/morriar/dev/projects/nit/lib/opts.nit";
const char FILE_nitc__version[] = "./version.nit";
const char FILE_template[] = "/home/morriar/dev/projects/nit/lib/template/template.nit";
const char FILE_nitc__parser[] = "./parser/parser.nit";
const char FILE_nitc__parser_prod[] = "./parser/parser_prod.nit";
const char FILE_nitc__lexer[] = "./parser/lexer.nit";
const char FILE_nitc__parser_nodes[] = "./parser/parser_nodes.nit";
const char FILE_console[] = "/home/morriar/dev/projects/nit/lib/console.nit";
const char FILE_nitc__lexer_work[] = "./parser/lexer_work.nit";
const char FILE_nitc__tables[] = "./parser/tables.nit";
const char FILE_nitc__parser_work[] = "./parser/parser_work.nit";
const char FILE_ini[] = "/home/morriar/dev/projects/nit/lib/ini.nit";
const char FILE_nitc__phase[] = "./phase.nit";
const char FILE_nitc__literal[] = "./literal.nit";
const char FILE_nitc__simple_misc_analysis[] = "./frontend/simple_misc_analysis.nit";
const char FILE_nitc__modelize[] = "./modelize/modelize.nit";
const char FILE_nitc__modelize_property[] = "./modelize/modelize_property.nit";
const char FILE_nitc__modelize_class[] = "./modelize/modelize_class.nit";
const char FILE_nitc__annotation[] = "./annotation.nit";
const char FILE_nitc__mmodule_data[] = "./model/mmodule_data.nit";
const char FILE_nitc__semantize[] = "./semantize/semantize.nit";
const char FILE_nitc__auto_super_init[] = "./semantize/auto_super_init.nit";
const char FILE_nitc__typing[] = "./semantize/typing.nit";
const char FILE_nitc__local_var_init[] = "./semantize/local_var_init.nit";
const char FILE_nitc__flow[] = "./semantize/flow.nit";
const char FILE_nitc__scope[] = "./semantize/scope.nit";
const char FILE_nitc__div_by_zero[] = "./frontend/div_by_zero.nit";
const char FILE_nitc__serialization_phase[] = "./frontend/serialization_phase.nit";
const char FILE_nitc__parser_util[] = "./parser_util.nit";
const char FILE_nitc__deriving[] = "./frontend/deriving.nit";
const char FILE_nitc__check_annotation[] = "./frontend/check_annotation.nit";
const char FILE_nitc__glsl_validation[] = "./frontend/glsl_validation.nit";
const char FILE_nitc__parallelization_phase[] = "./frontend/parallelization_phase.nit";
const char FILE_nitc__astbuilder[] = "./astbuilder.nit";
const char FILE_nitc__astvalidation[] = "./astvalidation.nit";
const char FILE_nitc__i18n_phase[] = "./frontend/i18n_phase.nit";
const char FILE_nitc__regex_phase[] = "./frontend/regex_phase.nit";
const char FILE_nitc__compiler[] = "./compiler/compiler.nit";
const char FILE_nitc__separate_erasure_compiler[] = "./compiler/separate_erasure_compiler.nit";
const char FILE_nitc__separate_compiler[] = "./compiler/separate_compiler.nit";
const char FILE_nitc__abstract_compiler[] = "./compiler/abstract_compiler.nit";
const char FILE_nitc__platform[] = "./platform/platform.nit";
const char FILE_nitc__c_tools[] = "./c_tools.nit";
const char FILE_nitc__mixin[] = "./mixin.nit";
const char FILE_counter[] = "/home/morriar/dev/projects/nit/lib/counter.nit";
const char FILE_nitc__coloring[] = "./compiler/coloring.nit";
const char FILE_nitc__rapid_type_analysis[] = "./rapid_type_analysis.nit";
const char FILE_csv[] = "/home/morriar/dev/projects/nit/lib/csv/csv.nit";
const char FILE_nitc__global_compiler[] = "./compiler/global_compiler.nit";
const char FILE_nitc__compiler_ffi[] = "./compiler/compiler_ffi/compiler_ffi.nit";
const char FILE_nitc__light[] = "./compiler/compiler_ffi/light.nit";
const char FILE_nitc__light_ffi[] = "./ffi/light_ffi.nit";
const char FILE_nitc__nitni_utilities[] = "./nitni/nitni_utilities.nit";
const char FILE_nitc__nitni_base[] = "./nitni/nitni_base.nit";
const char FILE_nitc__light_ffi_base[] = "./ffi/light_ffi_base.nit";
const char FILE_nitc__extern_classes[] = "./ffi/extern_classes.nit";
const char FILE_nitc__light_c[] = "./ffi/light_c.nit";
const char FILE_nitc__nitni[] = "./nitni/nitni.nit";
const char FILE_nitc__nitni_callbacks[] = "./nitni/nitni_callbacks.nit";
const char FILE_nitc__memory_logger[] = "./compiler/memory_logger.nit";
const char FILE_nitc__compiler_serialization[] = "./compiler/compiler_serialization.nit";
const char FILE_nitc__serialize_model[] = "./model/serialize_model.nit";
const char FILE_json__serialization_write[] = "/home/morriar/dev/projects/nit/lib/json/serialization_write.nit";
const char FILE_serialization__caching[] = "/home/morriar/dev/projects/nit/lib/serialization/caching.nit";
const char FILE_serialization__engine_tools[] = "/home/morriar/dev/projects/nit/lib/serialization/engine_tools.nit";
const char FILE_nitc__android[] = "./platform/android.nit";
const char FILE_nitc__ffi[] = "./ffi/ffi.nit";
const char FILE_nitc__ffi_base[] = "./ffi/ffi_base.nit";
const char FILE_nitc__header_dependency[] = "./ffi/header_dependency.nit";
const char FILE_nitc__c[] = "./ffi/c.nit";
const char FILE_nitc__pkgconfig[] = "./ffi/pkgconfig.nit";
const char FILE_nitc__c_compiler_options[] = "./ffi/c_compiler_options.nit";
const char FILE_nitc__cpp[] = "./ffi/cpp.nit";
const char FILE_nitc__java[] = "./ffi/java.nit";
const char FILE_nitc__extra_java_files[] = "./ffi/extra_java_files.nit";
const char FILE_nitc__objc[] = "./ffi/objc.nit";
const char FILE_nitc__android_annotations[] = "./platform/android_annotations.nit";
const char FILE_nitc__app_annotations[] = "./platform/app_annotations.nit";
const char FILE_nitc__pnacl[] = "./platform/pnacl.nit";
const char FILE_nitc__emscripten[] = "./platform/emscripten.nit";
const char FILE_nitc__ios[] = "./platform/ios.nit";
const char FILE_nitc__xcode_templates[] = "./platform/xcode_templates.nit";
const char FILE_nitc__transform[] = "./transform.nit";
void gc_finalize (void *obj, void *client_data) {
val* var /* : Finalizable */;
var = obj;
{
((void(*)(val* self))(var->class->vft[COLOR_core__gc__Finalizable__finalize]))(var); /* finalize on <var:Finalizable>*/
}
}
