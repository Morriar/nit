#include "nitc__memory_logger.sep.0.h"
/* method memory_logger#ToolContext#opt_trace_memory for (self: ToolContext): OptionBool */
val* nitc__memory_logger___ToolContext___opt_trace_memory(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__memory_logger__ToolContext___opt_trace_memory].val; /* _opt_trace_memory on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_trace_memory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__memory_logger, 21);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method memory_logger#ToolContext#init for (self: ToolContext) */
void nitc__memory_logger___ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : Array[Option] */;
val* var7 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__memory_logger___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline memory_logger#ToolContext#opt_trace_memory (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__memory_logger__ToolContext___opt_trace_memory].val; /* _opt_trace_memory on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_trace_memory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__memory_logger, 21);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var6 = array_instance Array[Option] */
var7 = NEW_core__NativeArray(1l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var7)->values[0] = (val*) var3;
{
((void(*)(val* self, val* p0, long p1))(var6->class->vft[COLOR_core__array__Array__with_native]))(var6, var7, 1l); /* with_native on <var6:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var6); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method memory_logger#AbstractCompiler#compile_before_main for (self: AbstractCompiler, AbstractCompilerVisitor) */
void nitc__memory_logger___AbstractCompiler___compile_before_main(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
val* var7 /* : OptionBool */;
val* var9 /* : OptionBool */;
val* var10 /* : nullable Object */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : CodeWriter */;
val* var17 /* : CodeWriter */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : CodeWriter */;
val* var23 /* : CodeWriter */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : CodeWriter */;
val* var30 /* : CodeWriter */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : CodeWriter */;
val* var37 /* : CodeWriter */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__memory_logger, 30);
fatal_exit(1);
}
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__memory_logger___AbstractCompiler___compile_before_main]))(self, p0); /* compile_before_main on <self:AbstractCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var1) on <var1:ModelBuilder> */
var6 = var1->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var1:ModelBuilder> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline memory_logger#ToolContext#opt_trace_memory (var4) on <var4:ToolContext> */
var9 = var4->attrs[COLOR_nitc__memory_logger__ToolContext___opt_trace_memory].val; /* _opt_trace_memory on <var4:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_trace_memory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__memory_logger, 21);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline opts#Option#value (var7) on <var7:OptionBool> */
var12 = var7->attrs[COLOR_opts__Option___value].val; /* _value on <var7:OptionBool> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = (short int)((long)(var10)>>2);
var14 = !var13;
if (var14){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var17 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "#include <time.h>";
var20 = core__abstract_text___CString___to_s_full(var19, 17l, 17l);
var18 = var20;
varonce = var18;
}
{
nitc___nitc__CodeWriter___add_decl(var15, var18); /* Direct call abstract_compiler#CodeWriter#add_decl on <var15:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var23 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "extern FILE *mlog;";
var27 = core__abstract_text___CString___to_s_full(var26, 18l, 18l);
var25 = var27;
varonce24 = var25;
}
{
nitc___nitc__CodeWriter___add_decl(var21, var25); /* Direct call abstract_compiler#CodeWriter#add_decl on <var21:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var30 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "extern struct timespec mlog_last;";
var34 = core__abstract_text___CString___to_s_full(var33, 33l, 33l);
var32 = var34;
varonce31 = var32;
}
{
nitc___nitc__CodeWriter___add_decl(var28, var32); /* Direct call abstract_compiler#CodeWriter#add_decl on <var28:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var37 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "extern struct timespec mlog_time0;";
var41 = core__abstract_text___CString___to_s_full(var40, 34l, 34l);
var39 = var41;
varonce38 = var39;
}
{
nitc___nitc__CodeWriter___add_decl(var35, var39); /* Direct call abstract_compiler#CodeWriter#add_decl on <var35:CodeWriter>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "FILE *mlog;";
var45 = core__abstract_text___CString___to_s_full(var44, 11l, 11l);
var43 = var45;
varonce42 = var43;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "struct timespec mlog_last;";
var49 = core__abstract_text___CString___to_s_full(var48, 26l, 26l);
var47 = var49;
varonce46 = var47;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var47); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "struct timespec mlog_time0;";
var53 = core__abstract_text___CString___to_s_full(var52, 27l, 27l);
var51 = var53;
varonce50 = var51;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var51); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method memory_logger#AbstractCompiler#compile_begin_main for (self: AbstractCompiler, AbstractCompilerVisitor) */
void nitc__memory_logger___AbstractCompiler___compile_begin_main(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
val* var7 /* : OptionBool */;
val* var9 /* : OptionBool */;
val* var10 /* : nullable Object */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__memory_logger, 45);
fatal_exit(1);
}
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__memory_logger___AbstractCompiler___compile_begin_main]))(self, p0); /* compile_begin_main on <self:AbstractCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var1) on <var1:ModelBuilder> */
var6 = var1->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var1:ModelBuilder> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline memory_logger#ToolContext#opt_trace_memory (var4) on <var4:ToolContext> */
var9 = var4->attrs[COLOR_nitc__memory_logger__ToolContext___opt_trace_memory].val; /* _opt_trace_memory on <var4:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_trace_memory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__memory_logger, 21);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline opts#Option#value (var7) on <var7:OptionBool> */
var12 = var7->attrs[COLOR_opts__Option___value].val; /* _value on <var7:OptionBool> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = (short int)((long)(var10)>>2);
var14 = !var13;
if (var14){
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "mlog = fopen(\"memory.log\", \"w\");";
var17 = core__abstract_text___CString___to_s_full(var16, 32l, 32l);
var15 = var17;
varonce = var15;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "clock_gettime(CLOCK_MONOTONIC, &mlog_time0);";
var21 = core__abstract_text___CString___to_s_full(var20, 44l, 44l);
var19 = var21;
varonce18 = var19;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method memory_logger#AbstractCompilerVisitor#nit_alloc for (self: AbstractCompilerVisitor, String, nullable String): String */
val* nitc__memory_logger___AbstractCompilerVisitor___nit_alloc(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_size /* var size: String */;
val* var_tag /* var tag: nullable String */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
val* var10 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : String */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_tw /* var tw: String */;
val* var24 /* : NativeArray[String] */;
static val* varonce23;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var61 /* : NativeArray[String] */;
static val* varonce60;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var91 /* : NativeArray[String] */;
static val* varonce90;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : CString */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : CString */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var_str /* var str: String */;
val* var111 /* : NativeArray[String] */;
static val* varonce110;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : CString */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var121 /* : String */;
var_size = p0;
var_tag = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var4) on <var4:ModelBuilder> */
var9 = var4->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var4:ModelBuilder> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline memory_logger#ToolContext#opt_trace_memory (var7) on <var7:ToolContext> */
var12 = var7->attrs[COLOR_nitc__memory_logger__ToolContext___opt_trace_memory].val; /* _opt_trace_memory on <var7:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_trace_memory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__memory_logger, 21);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline opts#Option#value (var10) on <var10:OptionBool> */
var15 = var10->attrs[COLOR_opts__Option___value].val; /* _value on <var10:OptionBool> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = (short int)((long)(var13)>>2);
var17 = !var16;
if (var17){
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__memory_logger___AbstractCompilerVisitor___nit_alloc]))(self, p0, p1); /* nit_alloc on <self:AbstractCompilerVisitor>*/
}
var = var18;
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "mtw";
var21 = core__abstract_text___CString___to_s_full(var20, 3l, 3l);
var19 = var21;
varonce = var19;
}
{
var22 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var19);
}
var_tw = var22;
if (unlikely(varonce23==NULL)) {
var24 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "struct timespec ";
var28 = core__abstract_text___CString___to_s_full(var27, 16l, 16l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var24)->values[0]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = ";";
var32 = core__abstract_text___CString___to_s_full(var31, 1l, 1l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var24)->values[2]=var30;
} else {
var24 = varonce23;
varonce23 = NULL;
}
((struct instance_core__NativeArray*)var24)->values[1]=var_tw;
{
var33 = ((val*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce23 = var24;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce34==NULL)) {
var35 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "clock_gettime(CLOCK_MONOTONIC, &";
var39 = core__abstract_text___CString___to_s_full(var38, 32l, 32l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[0]=var37;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = ");";
var43 = core__abstract_text___CString___to_s_full(var42, 2l, 2l);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var35)->values[2]=var41;
} else {
var35 = varonce34;
varonce34 = NULL;
}
((struct instance_core__NativeArray*)var35)->values[1]=var_tw;
{
var44 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var44); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce45==NULL)) {
var46 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "if(mlog_last.tv_sec < ";
var50 = core__abstract_text___CString___to_s_full(var49, 22l, 22l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var46)->values[0]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = ".tv_sec || mlog_last.tv_nsec + 1e7 < ";
var54 = core__abstract_text___CString___to_s_full(var53, 37l, 37l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var46)->values[2]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = ".tv_nsec) {";
var58 = core__abstract_text___CString___to_s_full(var57, 11l, 11l);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var46)->values[4]=var56;
} else {
var46 = varonce45;
varonce45 = NULL;
}
((struct instance_core__NativeArray*)var46)->values[1]=var_tw;
((struct instance_core__NativeArray*)var46)->values[3]=var_tw;
{
var59 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce60==NULL)) {
var61 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "mlog_last = ";
var65 = core__abstract_text___CString___to_s_full(var64, 12l, 12l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var61)->values[0]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = ";";
var69 = core__abstract_text___CString___to_s_full(var68, 1l, 1l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var61)->values[2]=var67;
} else {
var61 = varonce60;
varonce60 = NULL;
}
((struct instance_core__NativeArray*)var61)->values[1]=var_tw;
{
var70 = ((val*(*)(val* self))(var61->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var70); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce71==NULL)) {
var72 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "fprintf(mlog, \"# %f\\n\", 1000.0*";
var76 = core__abstract_text___CString___to_s_full(var75, 31l, 31l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var72)->values[0]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = ".tv_sec + 1e-6*";
var80 = core__abstract_text___CString___to_s_full(var79, 15l, 15l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var72)->values[2]=var78;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = ".tv_nsec - (1000.0*mlog_time0.tv_sec + 1e-6*mlog_time0.tv_nsec));";
var84 = core__abstract_text___CString___to_s_full(var83, 65l, 65l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var72)->values[4]=var82;
} else {
var72 = varonce71;
varonce71 = NULL;
}
((struct instance_core__NativeArray*)var72)->values[1]=var_tw;
((struct instance_core__NativeArray*)var72)->values[3]=var_tw;
{
var85 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var85); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "}";
var89 = core__abstract_text___CString___to_s_full(var88, 1l, 1l);
var87 = var89;
varonce86 = var87;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var87); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce90==NULL)) {
var91 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "\"+\\t%d\\t%s\\n\", ";
var95 = core__abstract_text___CString___to_s_full(var94, 15l, 15l);
var93 = var95;
varonce92 = var93;
}
((struct instance_core__NativeArray*)var91)->values[0]=var93;
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = ", \"";
var99 = core__abstract_text___CString___to_s_full(var98, 3l, 3l);
var97 = var99;
varonce96 = var97;
}
((struct instance_core__NativeArray*)var91)->values[2]=var97;
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "\"";
var103 = core__abstract_text___CString___to_s_full(var102, 1l, 1l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var91)->values[4]=var101;
} else {
var91 = varonce90;
varonce90 = NULL;
}
((struct instance_core__NativeArray*)var91)->values[1]=var_size;
if (var_tag!=NULL) {
var104 = var_tag;
} else {
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "?";
var108 = core__abstract_text___CString___to_s_full(var107, 1l, 1l);
var106 = var108;
varonce105 = var106;
}
var104 = var106;
}
((struct instance_core__NativeArray*)var91)->values[3]=var104;
{
var109 = ((val*(*)(val* self))(var91->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var91); /* native_to_s on <var91:NativeArray[String]>*/
}
varonce90 = var91;
var_str = var109;
if (unlikely(varonce110==NULL)) {
var111 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "fprintf(mlog, ";
var115 = core__abstract_text___CString___to_s_full(var114, 14l, 14l);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var111)->values[0]=var113;
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = ");";
var119 = core__abstract_text___CString___to_s_full(var118, 2l, 2l);
var117 = var119;
varonce116 = var117;
}
((struct instance_core__NativeArray*)var111)->values[2]=var117;
} else {
var111 = varonce110;
varonce110 = NULL;
}
((struct instance_core__NativeArray*)var111)->values[1]=var_str;
{
var120 = ((val*(*)(val* self))(var111->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var111); /* native_to_s on <var111:NativeArray[String]>*/
}
varonce110 = var111;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var120); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
var121 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__memory_logger___AbstractCompilerVisitor___nit_alloc]))(self, p0, p1); /* nit_alloc on <self:AbstractCompilerVisitor>*/
}
var = var121;
goto RET_LABEL;
RET_LABEL:;
return var;
}
