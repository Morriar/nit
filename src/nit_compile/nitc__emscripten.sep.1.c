#include "nitc__emscripten.sep.0.h"
/* method emscripten#ToolContext#platform_from_name for (self: ToolContext, String): nullable Platform */
val* nitc__emscripten___ToolContext___platform_from_name(val* self, val* p0) {
val* var /* : nullable Platform */;
val* var_name /* var name: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
val* var5 /* : EmscriptenPlatform */;
val* var7 /* : nullable Platform */;
var_name = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "emscripten";
var3 = core__abstract_text___CString___to_s_full(var2, 10l, 10l);
var1 = var3;
varonce = var1;
}
{
var4 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var1); /* == on <var_name:String>*/
}
if (var4){
var5 = NEW_nitc__EmscriptenPlatform(&type_nitc__EmscriptenPlatform);
{
{ /* Inline kernel#Object#init (var5) on <var5:EmscriptenPlatform> */
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__emscripten___ToolContext___platform_from_name]))(self, p0); /* platform_from_name on <self:ToolContext>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method emscripten#EmscriptenPlatform#name for (self: EmscriptenPlatform): nullable String */
val* nitc___nitc__EmscriptenPlatform___nitc__platform__Platform__name(val* self) {
val* var /* : nullable String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "emscripten";
var3 = core__abstract_text___CString___to_s_full(var2, 10l, 10l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method emscripten#EmscriptenPlatform#supports_libunwind for (self: EmscriptenPlatform): Bool */
short int nitc___nitc__EmscriptenPlatform___nitc__platform__Platform__supports_libunwind(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method emscripten#EmscriptenPlatform#supports_libgc for (self: EmscriptenPlatform): Bool */
short int nitc___nitc__EmscriptenPlatform___nitc__platform__Platform__supports_libgc(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method emscripten#EmscriptenPlatform#supports_linker_script for (self: EmscriptenPlatform): Bool */
short int nitc___nitc__EmscriptenPlatform___nitc__platform__Platform__supports_linker_script(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method emscripten#EmscriptenPlatform#toolchain for (self: EmscriptenPlatform, ToolContext, AbstractCompiler): Toolchain */
val* nitc___nitc__EmscriptenPlatform___nitc__abstract_compiler__Platform__toolchain(val* self, val* p0, val* p1) {
val* var /* : Toolchain */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : EnscriptenToolchain */;
var_toolcontext = p0;
var_compiler = p1;
var1 = NEW_nitc__EnscriptenToolchain(&type_nitc__EnscriptenToolchain);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__Toolchain__toolcontext_61d]))(var1, var_toolcontext); /* toolcontext= on <var1:EnscriptenToolchain>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__Toolchain__compiler_61d]))(var1, var_compiler); /* compiler= on <var1:EnscriptenToolchain>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:EnscriptenToolchain>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method emscripten#EnscriptenToolchain#makefile_name for (self: EnscriptenToolchain): String */
val* nitc___nitc__EnscriptenToolchain___nitc__abstract_compiler__MakefileToolchain__makefile_name(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ".js.mk";
var5 = core__abstract_text___CString___to_s_full(var4, 6l, 6l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc___nitc__EnscriptenToolchain___nitc__abstract_compiler__MakefileToolchain__makefile_name]))(self); /* makefile_name on <self:EnscriptenToolchain>*/
}
((struct instance_core__NativeArray*)var1)->values[0]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method emscripten#EnscriptenToolchain#default_outname for (self: EnscriptenToolchain): String */
val* nitc___nitc__EnscriptenToolchain___nitc__abstract_compiler__MakefileToolchain__default_outname(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ".js";
var5 = core__abstract_text___CString___to_s_full(var4, 3l, 3l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc___nitc__EnscriptenToolchain___nitc__abstract_compiler__MakefileToolchain__default_outname]))(self); /* default_outname on <self:EnscriptenToolchain>*/
}
((struct instance_core__NativeArray*)var1)->values[0]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method emscripten#EnscriptenToolchain#write_makefile for (self: EnscriptenToolchain, String, Array[String]) */
void nitc___nitc__EnscriptenToolchain___nitc__abstract_compiler__MakefileToolchain__write_makefile(val* self, val* p0, val* p1) {
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var_emcc_make_flags /* var emcc_make_flags: String */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
short int var_release /* var release: Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : Text */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : Text */;
val* var23 /* : String */;
val* var24 /* : ToolContext */;
val* var26 /* : ToolContext */;
val* var27 /* : OptionString */;
val* var29 /* : OptionString */;
val* var30 /* : nullable Object */;
val* var32 /* : nullable Object */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var_make_flags /* var make_flags: String */;
val* var37 /* : Text */;
val* var38 /* : ToolContext */;
val* var40 /* : ToolContext */;
val* var41 /* : OptionString */;
val* var43 /* : OptionString */;
short int var45 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_compile_dir = p0;
var_cfiles = p1;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc___nitc__EnscriptenToolchain___nitc__abstract_compiler__MakefileToolchain__write_makefile]))(self, p0, p1); /* write_makefile on <self:EnscriptenToolchain>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "CC=emcc CXX=em++ CFLAGS=\'-Wno-unused-value -Wno-switch -Qunused-arguments -s ALLOW_MEMORY_GROWTH=1";
var2 = core__abstract_text___CString___to_s_full(var1, 98l, 98l);
var = var2;
varonce = var;
}
var_emcc_make_flags = var;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:EnscriptenToolchain> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:EnscriptenToolchain> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_release (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 70);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts#Option#value (var6) on <var6:OptionBool> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionBool> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = (short int)((long)(var9)>>2);
var_release = var12;
if (var_release){
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "\' LDFLAGS=\'--minify 1\'";
var16 = core__abstract_text___CString___to_s_full(var15, 22l, 22l);
var14 = var16;
varonce13 = var14;
}
{
var17 = ((val*(*)(val* self, val* p0))(var_emcc_make_flags->class->vft[COLOR_core__abstract_text__Text___43d]))(var_emcc_make_flags, var14); /* + on <var_emcc_make_flags:String>*/
}
var_emcc_make_flags = var17;
} else {
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = " -g\'";
var21 = core__abstract_text___CString___to_s_full(var20, 4l, 4l);
var19 = var21;
varonce18 = var19;
}
{
var22 = ((val*(*)(val* self, val* p0))(var_emcc_make_flags->class->vft[COLOR_core__abstract_text__Text___43d]))(var_emcc_make_flags, var19); /* + on <var_emcc_make_flags:String>*/
}
var_emcc_make_flags = var22;
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:EnscriptenToolchain> */
var26 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:EnscriptenToolchain> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_make_flags (var24) on <var24:ToolContext> */
var29 = var24->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <var24:ToolContext> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 38);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline opts#Option#value (var27) on <var27:OptionString> */
var32 = var27->attrs[COLOR_opts__Option___value].val; /* _value on <var27:OptionString> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30!=NULL) {
var23 = var30;
} else {
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "";
var36 = core__abstract_text___CString___to_s_full(var35, 0l, 0l);
var34 = var36;
varonce33 = var34;
}
var23 = var34;
}
var_make_flags = var23;
{
var37 = ((val*(*)(val* self, val* p0))(var_make_flags->class->vft[COLOR_core__abstract_text__Text___43d]))(var_make_flags, var_emcc_make_flags); /* + on <var_make_flags:String>*/
}
var_make_flags = var37;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:EnscriptenToolchain> */
var40 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:EnscriptenToolchain> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_make_flags (var38) on <var38:ToolContext> */
var43 = var38->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <var38:ToolContext> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 38);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var41,var_make_flags) on <var41:OptionString> */
/* Covariant cast for argument 0 (value) <var_make_flags:String> isa VALUE */
/* <var_make_flags:String> isa VALUE */
type_struct = var41->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_make_flags->type->table_size) {
var45 = 0;
} else {
var45 = var_make_flags->type->type_table[cltype] == idtype;
}
if (unlikely(!var45)) {
var_class_name = var_make_flags == NULL ? "null" : var_make_flags->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var41->attrs[COLOR_opts__Option___value].val = var_make_flags; /* _value on <var41:OptionString> */
RET_LABEL44:(void)0;
}
}
RET_LABEL:;
}
