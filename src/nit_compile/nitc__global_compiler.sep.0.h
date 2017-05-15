#include "nit.common.h"
#define COLOR_nitc__global_compiler__ToolContext___opt_global 114
extern const char FILE_nitc__global_compiler[];
#define COLOR_nitc__global_compiler___ToolContext___core__kernel__Object__init 166
#define COLOR_nitc__toolcontext__ToolContext___option_context 15
extern const char FILE_nitc__toolcontext[];
val* NEW_core__Array(const struct type* type);
extern const struct type type_core__Array__opts__Option;
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__opts__Option;
#define COLOR_core__array__Array__with_native 36
void opts___opts__OptionContext___add_option(val* self, val* p0);
#define COLOR_nitc__phase__Phase___toolcontext 0
extern const char FILE_nitc__phase[];
#define COLOR_opts__Option___value 6
val* nitc__modelbuilder_base___ToolContext___modelbuilder(val* self);
val* nitc__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis(val* self, val* p0);
void nitc__global_compiler___ModelBuilder___run_global_compiler(val* self, val* p0, val* p1);
long time___Sys_get_time___impl( struct nitni_instance * self );
#define COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext 10
extern const char FILE_nitc__modelbuilder_base[];
val* core__abstract_text___CString___to_s_full(char* self, long p0, long p1);
void nitc___nitc__ToolContext___info(val* self, val* p0, long p1);
val* NEW_nitc__GlobalCompiler(const struct type* type);
extern const struct type type_nitc__GlobalCompiler;
#define COLOR_nitc__abstract_compiler__AbstractCompiler__mainmodule_61d 16
#define COLOR_nitc__abstract_compiler__AbstractCompiler__modelbuilder_61d 17
#define COLOR_nitc__global_compiler__GlobalCompiler__runtime_type_analysis_61d 62
#define COLOR_core__kernel__Object__init 0
void nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__do_compilation(val* self);
void nitc___nitc__AbstractCompiler___display_stats(val* self);
extern const struct type type_core__NativeArray__core__String;
extern const struct type type_core__Int;
extern const char FILE_core__kernel[];
val* core__flat___Int___core__abstract_text__Object__to_s(long self);
#define COLOR_core__abstract_text__NativeArray__native_to_s 15
void nitc__compiler_serialization___ModelBuilder___write_and_make(val* self, val* p0);
#define COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis 19
#define COLOR_nitc___nitc__GlobalCompiler___core__kernel__Object__init 76
#define COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule 1
extern const char FILE_nitc__abstract_compiler[];
val* nitc___nitc__MModule___nitc__model_base__MEntity__c_name(val* self);
val* nitc___nitc__AbstractCompiler___new_file(val* self, val* p0);
val* NEW_nitc__CodeWriter(const struct type* type);
extern const struct type type_nitc__CodeWriter;
#define COLOR_nitc__abstract_compiler__CodeWriter__file_61d 15
#define COLOR_nitc__abstract_compiler__AbstractCompiler___header 7
extern const struct type type_core__Array__nitc__MClassType;
void core___core__Array___core__kernel__Object__init(val* self);
#define COLOR_nitc__global_compiler__GlobalCompiler___live_primitive_types 21
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types 2
extern const char FILE_nitc__rapid_type_analysis[];
val* core___core__HashSet___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_core__abstract_collection__Iterator__is_ok 15
#define COLOR_core__abstract_collection__Iterator__item 16
short int nitc__abstract_compiler___MClassType___MType__is_c_primitive(val* self);
#define COLOR_nitc__model__MClassType___mclass 9
extern const char FILE_nitc__model[];
#define COLOR_nitc__model__MClass___name 7
#define COLOR_core__kernel__Object___61d_61d 3
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_core__abstract_collection__Iterator__next 17
#define COLOR_core__abstract_collection__Iterator__finish 18
void nitc___nitc__AbstractCompiler___compile_header(val* self);
#define COLOR_nitc__mmodule__MModule___model 41
extern const char FILE_nitc__mmodule[];
val* nitc__model___Model___get_mclasses_by_name(val* self, val* p0);
val* nitc__model___MModule___pointer_type(val* self);
void core___core__HashSet___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
void nitc___nitc__GlobalCompiler___declare_runtimeclass(val* self, val* p0);
void nitc___nitc__GlobalCompiler___compile_class_names(val* self);
void nitc___nitc__GlobalCompiler___generate_init_instance(val* self, val* p0);
#define COLOR_nitc__model__MClass___kind 15
val* nitc__model___core__Sys___extern_kind(val* self);
void nitc___nitc__GlobalCompiler___generate_box_instance(val* self, val* p0);
void nitc___nitc__AbstractCompiler___compile_nitni_global_ref_functions(val* self);
void nitc___nitc__AbstractCompiler___compile_main_function(val* self);
#define COLOR_nitc__global_compiler__GlobalCompiler___todos 22
short int core___core__List___core__abstract_collection__Collection__is_empty(val* self);
val* core___core__List___core__abstract_collection__Sequence__shift(val* self);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder 3
#define COLOR_core__abstract_text__Object__to_s 4
#define COLOR_nitc__global_compiler__GlobalCompiler___seen 23
long core___core__HashSet___core__abstract_collection__Collection__length(val* self);
#define COLOR_core__list__List___length 0
#define COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__compile_to_c 15
val* nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(val* self);
void nitc___nitc__CodeWriter___add_decl(val* self, val* p0);
void nitc___nitc__AbstractCompilerVisitor___add(val* self, val* p0);
val* nitc___nitc__GlobalCompiler___classid(val* self, val* p0);
#define COLOR_nitc__global_compiler__GlobalCompiler___classids 20
short int core___core__HashMap___core__abstract_collection__MapRead__has_key(val* self, val* p0);
val* core___core__HashMap___core__abstract_collection__MapRead___91d_93d(val* self, val* p0);
void core__file___Sys___print_error(val* self, val* p0);
short int core___core__HashSet___core__abstract_collection__Collection__has(val* self, val* p0);
void core___core__Sequence___SimpleCollection__add(val* self, val* p0);
long core___core__HashMap___core__abstract_collection__MapRead__length(val* self);
#define COLOR_nitc__model_base__MEntity__c_name 15
#define COLOR_core__abstract_text__Text___43d 32
void core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MClassType__arguments 75
val* core___core__SequenceRead___Collection__first(val* self);
#define COLOR_nitc__abstract_compiler__MType__ctype 40
val* nitc__abstract_compiler___MClassType___MType__ctype_extern(val* self);
val* nitc___nitc__MClassType___MType__collect_mclassdefs(val* self, val* p0);
#define COLOR_core__abstract_collection__Collection__iterator 27
#define COLOR_nitc__model__MClassDef___intro_mproperties 17
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self);
extern const struct type type_nitc__MAttribute;
#define COLOR_nitc__model__MProperty___intro 16
#define COLOR_nitc__model__MAttributeDef___static_mtype 15
#define COLOR_nitc__model__MType__anchor_to 42
val* nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(val* self);
val* nitc__abstract_compiler___MClassType___MType__ctype(val* self);
void nitc___nitc__AbstractCompilerVisitor___add_decl(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___new_var(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact 3
void nitc___nitc__AbstractCompiler___generate_init_attr(val* self, val* p0, val* p1, val* p2);
void nitc___nitc__AbstractCompilerVisitor___set_finalizer(val* self, val* p0);
val* NEW_nitc__GlobalCompilerVisitor(const struct type* type);
extern const struct type type_nitc__GlobalCompilerVisitor;
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compiler_61d 28
#define COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR 0
#define COLOR_nitc__global_compiler__GlobalCompiler___collect_types_cache 24
#define COLOR_nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs 77
#define COLOR_nitc__abstract_compiler__RuntimeVariable___mtype 1
#define COLOR_nitc__abstract_compiler__MType__is_c_primitive 44
val* nitc___nitc__AbstractCompilerVisitor___new_expr(val* self, val* p0, val* p1);
extern const struct type type_nitc__MClassType;
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler 0
val* nitc___nitc__AbstractCompilerVisitor___new_var_extern(val* self, val* p0);
#define COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype 2
void core___core__Array___with_capacity(val* self, long p0);
void core___core__AbstractArray___core__abstract_collection__Sequence__push(val* self, val* p0);
short int nitc___nitc__MType___is_subtype(val* self, val* p0, val* p1, val* p2);
val* core___core__Array___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0);
void nitc___nitc__AbstractCompilerVisitor___ret(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___mmodule(val* self);
val* nitc__model___MModule___native_array_type(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___anchor(val* self, val* p0);
val* nitc__model___MModule___int_type(val* self);
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(val* self, val* p0, val* p1);
val* nitc___nitc__GlobalCompilerVisitor___collect_types(val* self, val* p0);
#define COLOR_nitc__model__MMethodDef___msignature 15
#define COLOR_nitc__model__MSignature___return_mtype 10
val* nitc___nitc__AbstractCompilerVisitor___resolve_for(val* self, val* p0, val* p1);
val* nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(val* self);
short int nitc___nitc__MType___has_mproperty(val* self, val* p0, val* p1);
val* nitc___nitc__MProperty___lookup_first_definition(val* self, val* p0, val* p1);
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(val* self, val* p0, val* p1, val* p2);
void nitc___nitc__AbstractCompilerVisitor___assign(val* self, val* p0, val* p1);
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null 102
#define COLOR_nitc__model__MProperty___name 7
extern const struct type type_nitc__MNullableType;
extern const struct type type_nitc__MNullType;
void nitc___nitc__AbstractCompilerVisitor___add_abort(val* self, val* p0);
short int core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(val* self);
void nitc___nitc__GlobalCompilerVisitor___bugtype(val* self, val* p0);
val* core___core__SequenceRead___last(val* self);
#define COLOR_nitc__model__MPropDef___mclassdef 6
#define COLOR_nitc__model__MClassDef___mclass 7
short int nitc___nitc__AbstractCompiler___hardening(val* self);
#define COLOR_nitc__model__MClassDef___bound_mtype 8
void nitc___nitc__GlobalCompilerVisitor___check_valid_reciever(val* self, val* p0);
val* nitc___nitc__GlobalCompilerVisitor___get_recvtype(val* self, val* p0, val* p1, val* p2);
val* nitc___nitc__AbstractCompilerVisitor___autoadapt(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MMethodDef___is_extern 20
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern(val* self, val* p0, val* p1);
val* core__array___Collection___to_a(val* self);
void core___core__Sequence___first_61d(val* self, val* p0);
#define COLOR_core__array__AbstractArrayRead___length 0
long nitc___nitc__MSignature___arity(val* self);
void nitc___nitc__AbstractCompilerVisitor___debug(val* self, val* p0);
val* NEW_nitc__global_compiler__CustomizedRuntimeFunction(const struct type* type);
extern const struct type type_nitc__global_compiler__CustomizedRuntimeFunction;
#define COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d 18
#define COLOR_nitc__global_compiler__CustomizedRuntimeFunction__recv_61d 24
val* nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___nitc__abstract_compiler__AbstractRuntimeFunction__call(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MPropDef___mproperty 7
val* nitc___nitc__MPropDef___lookup_next_definition(val* self, val* p0, val* p1);
#define COLOR_nitc__model__MSignature___mparameters 9
#define COLOR_nitc__model__MParameter___mtype 7
#define COLOR_nitc__model__MParameter___is_vararg 8
void core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1);
long core___core__Int___Discrete__successor(long self, long p0);
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1);
void nitc___nitc__AbstractCompilerVisitor___check_recv_notnull(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___bool_type(val* self);
#define COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_attr_isset 99
#define COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types 5
val* nitc___nitc__AbstractCompilerVisitor___get_name(val* self, val* p0);
extern const struct type type_core__Array__core__String;
val* core__abstract_text___Collection___join(val* self, val* p0, val* p1);
val* nitc__model___MModule___array_type(val* self, val* p0);
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__init_instance(val* self, val* p0);
val* nitc___nitc__AbstractCompilerVisitor___int_instance(val* self, long p0);
val* nitc___nitc__AbstractCompilerVisitor___get_property(val* self, val* p0, val* p1);
extern const struct type type_core__Array__nitc__RuntimeVariable;
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(val* self, val* p0, val* p1);
#define COLOR_nitc__global_compiler__CustomizedRuntimeFunction___recv 2
#define COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___c_name_cache 1
#define COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef 0
long core___core__Object___hash(val* self);
#define COLOR_nitc__model__MPropDef___to_s 13
#define COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__COMPILER 0
void core__file___Sys___print(val* self, val* p0);
val* NEW_nitc__RuntimeVariable(const struct type* type);
extern const struct type type_nitc__RuntimeVariable;
#define COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d 16
#define COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d 17
#define COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d 18
val* NEW_nitc__StaticFrame(const struct type* type);
extern const struct type type_nitc__StaticFrame;
#define COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d 18
#define COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d 19
#define COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d 20
#define COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d 21
#define COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame 2
val* NEW_core__FlatBuffer(const struct type* type);
extern const struct type type_core__FlatBuffer;
#define COLOR_core___core__FlatBuffer___core__kernel__Object__init 140
void core___core__FlatBuffer___core__abstract_text__Buffer__append(val* self, val* p0);
val* nitc___nitc__AbstractRuntimeFunction___c_name(val* self);
#define COLOR_nitc__abstract_compiler__StaticFrame___returnvar 4
#define COLOR_nitc__abstract_compiler__StaticFrame___returnlabel 5
val* nitc__abstract_compiler___MMethodDef___compile_inside_to_c(val* self, val* p0, val* p1);
short int core___core__Text___has_substring(val* self, val* p0, long p1);
#define COLOR_nitc__abstract_compiler__AbstractCompiler___names 0
#define COLOR_nitc__model__MClassDef___mmodule 6
#define COLOR_nitc__mmodule__MModule___name 43
#define COLOR_nitc__model__MPropDef___location 8
#define COLOR_nitc__location__Location___file 0
extern const char FILE_nitc__location[];
#define COLOR_nitc__location__SourceFile___filename 1
#define COLOR_nitc__location__Location___line_start 1
#define COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__VISITOR 1
short int nitc__abstract_compiler___MMethodDef___can_inline(val* self, val* p0);
void nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1);
void nitc___nitc__GlobalCompiler___todo(val* self, val* p0);
#define COLOR_nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___core__kernel__Object__init 26
