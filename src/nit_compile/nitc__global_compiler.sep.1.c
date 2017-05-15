#include "nitc__global_compiler.sep.0.h"
/* method global_compiler#ToolContext#opt_global for (self: ToolContext): OptionBool */
val* nitc__global_compiler___ToolContext___opt_global(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__global_compiler__ToolContext___opt_global].val; /* _opt_global on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_global");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#ToolContext#init for (self: ToolContext) */
void nitc__global_compiler___ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : Array[Option] */;
val* var7 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__global_compiler___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
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
{ /* Inline global_compiler#ToolContext#opt_global (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__global_compiler__ToolContext___opt_global].val; /* _opt_global on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_global");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 30);
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
/* method global_compiler#GlobalCompilerPhase#process_mainmodule for (self: GlobalCompilerPhase, MModule, SequenceRead[MModule]) */
void nitc___nitc__GlobalCompilerPhase___nitc__modelbuilder__Phase__process_mainmodule(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_given_mmodules /* var given_mmodules: SequenceRead[MModule] */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : nullable Object */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var15 /* : RapidTypeAnalysis */;
val* var_analysis /* var analysis: RapidTypeAnalysis */;
var_mainmodule = p0;
var_given_mmodules = p1;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:GlobalCompilerPhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:GlobalCompilerPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline global_compiler#ToolContext#opt_global (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nitc__global_compiler__ToolContext___opt_global].val; /* _opt_global on <var:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_global");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 30);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline opts#Option#value (var3) on <var3:OptionBool> */
var8 = var3->attrs[COLOR_opts__Option___value].val; /* _value on <var3:OptionBool> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = (short int)((long)(var6)>>2);
var10 = !var9;
if (var10){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:GlobalCompilerPhase> */
var13 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:GlobalCompilerPhase> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc__modelbuilder_base___ToolContext___modelbuilder(var11);
}
var_modelbuilder = var14;
{
var15 = nitc__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis(var_modelbuilder, var_mainmodule);
}
var_analysis = var15;
{
nitc__global_compiler___ModelBuilder___run_global_compiler(var_modelbuilder, var_mainmodule, var_analysis); /* Direct call global_compiler#ModelBuilder#run_global_compiler on <var_modelbuilder:ModelBuilder>*/
}
RET_LABEL:;
}
/* method global_compiler#ModelBuilder#run_global_compiler for (self: ModelBuilder, MModule, RapidTypeAnalysis) */
void nitc__global_compiler___ModelBuilder___run_global_compiler(val* self, val* p0, val* p1) {
val* var_mainmodule /* var mainmodule: MModule */;
val* var_runtime_type_analysis /* var runtime_type_analysis: RapidTypeAnalysis */;
val* var /* : Sys */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_time0 /* var time0: Int */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : GlobalCompiler */;
val* var_compiler /* var compiler: GlobalCompiler */;
val* var11 /* : Sys */;
long var12 /* : Int */;
long var14 /* : Int */;
long var_time1 /* var time1: Int */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
val* var19 /* : NativeArray[String] */;
static val* varonce18;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : String */;
var_mainmodule = p0;
var_runtime_type_analysis = p1;
var = glob_sys;
{
{ /* Inline time#Sys#get_time (var) on <var:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var;
var3 = time___Sys_get_time___impl(var_for_c_0);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_time0 = var1;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var6 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "*** GENERATING C ***";
var9 = core__abstract_text___CString___to_s_full(var8, 20l, 20l);
var7 = var9;
varonce = var7;
}
{
nitc___nitc__ToolContext___info(var4, var7, 1l); /* Direct call toolcontext#ToolContext#info on <var4:ToolContext>*/
}
var10 = NEW_nitc__GlobalCompiler(&type_nitc__GlobalCompiler);
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__mainmodule_61d]))(var10, var_mainmodule); /* mainmodule= on <var10:GlobalCompiler>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__modelbuilder_61d]))(var10, self); /* modelbuilder= on <var10:GlobalCompiler>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__global_compiler__GlobalCompiler__runtime_type_analysis_61d]))(var10, var_runtime_type_analysis); /* runtime_type_analysis= on <var10:GlobalCompiler>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:GlobalCompiler>*/
}
var_compiler = var10;
{
nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__do_compilation(var_compiler); /* Direct call global_compiler#GlobalCompiler#do_compilation on <var_compiler:GlobalCompiler>*/
}
{
nitc___nitc__AbstractCompiler___display_stats(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#display_stats on <var_compiler:GlobalCompiler>*/
}
var11 = glob_sys;
{
{ /* Inline time#Sys#get_time (var11) on <var11:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var11;
var14 = time___Sys_get_time___impl(var_for_c_0);
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_time1 = var12;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var17 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(varonce18==NULL)) {
var19 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "*** END GENERATING C: ";
var23 = core__abstract_text___CString___to_s_full(var22, 22l, 22l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[0]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = " ***";
var27 = core__abstract_text___CString___to_s_full(var26, 4l, 4l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var19)->values[2]=var25;
} else {
var19 = varonce18;
varonce18 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var30 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var31 = var_time1 - var_time0;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var32 = core__flat___Int___core__abstract_text__Object__to_s(var28);
((struct instance_core__NativeArray*)var19)->values[1]=var32;
{
var33 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce18 = var19;
{
nitc___nitc__ToolContext___info(var15, var33, 2l); /* Direct call toolcontext#ToolContext#info on <var15:ToolContext>*/
}
{
nitc__compiler_serialization___ModelBuilder___write_and_make(self, var_compiler); /* Direct call compiler_serialization#ModelBuilder#write_and_make on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#runtime_type_analysis for (self: GlobalCompiler): RapidTypeAnalysis */
val* nitc___nitc__GlobalCompiler___runtime_type_analysis(val* self) {
val* var /* : RapidTypeAnalysis */;
val* var1 /* : RapidTypeAnalysis */;
var1 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:GlobalCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#runtime_type_analysis= for (self: GlobalCompiler, RapidTypeAnalysis) */
void nitc___nitc__GlobalCompiler___runtime_type_analysis_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val = p0; /* _runtime_type_analysis on <self:GlobalCompiler> */
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#init for (self: GlobalCompiler) */
void nitc___nitc__GlobalCompiler___core__kernel__Object__init(val* self) {
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : CodeFile */;
val* var_file /* var file: CodeFile */;
val* var11 /* : CodeWriter */;
val* var13 /* : Array[MClassType] */;
val* var15 /* : RapidTypeAnalysis */;
val* var17 /* : RapidTypeAnalysis */;
val* var18 /* : HashSet[MClassType] */;
val* var20 /* : HashSet[MClassType] */;
val* var_ /* var : HashSet[MClassType] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : Iterator[MClassType] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_t /* var t: MClassType */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var_27 /* var : Bool */;
val* var28 /* : MClass */;
val* var30 /* : MClass */;
val* var31 /* : String */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
short int var38 /* : Bool */;
val* var39 /* : Array[MClassType] */;
val* var41 /* : Array[MClassType] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__GlobalCompiler___core__kernel__Object__init]))(self); /* init on <self:GlobalCompiler>*/
}
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = ".nitgg";
var4 = core__abstract_text___CString___to_s_full(var3, 6l, 6l);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[1]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:GlobalCompiler> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:GlobalCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var5);
}
((struct instance_core__NativeArray*)var)->values[0]=var8;
{
var9 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
var10 = nitc___nitc__AbstractCompiler___new_file(self, var9);
}
var_file = var10;
var11 = NEW_nitc__CodeWriter(&type_nitc__CodeWriter);
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_nitc__abstract_compiler__CodeWriter__file_61d]))(var11, var_file); /* file= on <var11:CodeWriter>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_core__kernel__Object__init]))(var11); /* init on <var11:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header= (self,var11) on <self:GlobalCompiler> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val = var11; /* _header on <self:GlobalCompiler> */
RET_LABEL12:(void)0;
}
}
var13 = NEW_core__Array(&type_core__Array__nitc__MClassType);
{
core___core__Array___core__kernel__Object__init(var13); /* Direct call array#Array#init on <var13:Array[MClassType]>*/
}
{
{ /* Inline global_compiler#GlobalCompiler#live_primitive_types= (self,var13) on <self:GlobalCompiler> */
self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___live_primitive_types].val = var13; /* _live_primitive_types on <self:GlobalCompiler> */
RET_LABEL14:(void)0;
}
}
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (self) on <self:GlobalCompiler> */
var17 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:GlobalCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var15) on <var15:RapidTypeAnalysis> */
var20 = var15->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var15:RapidTypeAnalysis> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ = var18;
{
var21 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:Iterator[MClassType]>*/
}
if (var23){
} else {
goto BREAK_label;
}
{
var24 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:Iterator[MClassType]>*/
}
var_t = var24;
{
var26 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_t);
}
var_27 = var26;
if (var26){
var25 = var_27;
} else {
{
{ /* Inline model#MClassType#mclass (var_t) on <var_t:MClassType> */
var30 = var_t->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_t:MClassType> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MClass#name (var28) on <var28:MClass> */
var33 = var28->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var28:MClass> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Pointer";
var37 = core__abstract_text___CString___to_s_full(var36, 7l, 7l);
var35 = var37;
varonce34 = var35;
}
{
var38 = ((short int(*)(val* self, val* p0))(var31->class->vft[COLOR_core__kernel__Object___61d_61d]))(var31, var35); /* == on <var31:String>*/
}
var25 = var38;
}
if (var25){
{
{ /* Inline global_compiler#GlobalCompiler#live_primitive_types (self) on <self:GlobalCompiler> */
var41 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___live_primitive_types].val; /* _live_primitive_types on <self:GlobalCompiler> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_primitive_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 169);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var39, var_t); /* Direct call array#Array#add on <var39:Array[MClassType]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:Iterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:Iterator[MClassType]>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#do_compilation for (self: GlobalCompiler) */
void nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__do_compilation(val* self) {
val* var_compiler /* var compiler: GlobalCompiler */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : Model */;
val* var5 /* : Model */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Array[MClass] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : RapidTypeAnalysis */;
val* var17 /* : RapidTypeAnalysis */;
val* var18 /* : HashSet[MClassType] */;
val* var20 /* : HashSet[MClassType] */;
val* var21 /* : MModule */;
val* var23 /* : MModule */;
val* var24 /* : MClassType */;
val* var25 /* : RapidTypeAnalysis */;
val* var27 /* : RapidTypeAnalysis */;
val* var28 /* : HashSet[MClassType] */;
val* var30 /* : HashSet[MClassType] */;
val* var_ /* var : HashSet[MClassType] */;
val* var31 /* : Iterator[nullable Object] */;
val* var_32 /* var : Iterator[MClassType] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var35 /* : RapidTypeAnalysis */;
val* var37 /* : RapidTypeAnalysis */;
val* var38 /* : HashSet[MClassType] */;
val* var40 /* : HashSet[MClassType] */;
val* var_41 /* var : HashSet[MClassType] */;
val* var42 /* : Iterator[nullable Object] */;
val* var_43 /* var : Iterator[MClassType] */;
short int var44 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_t47 /* var t: MClassType */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : MClass */;
val* var52 /* : MClass */;
val* var53 /* : MClassKind */;
val* var55 /* : MClassKind */;
val* var56 /* : Sys */;
val* var57 /* : MClassKind */;
short int var58 /* : Bool */;
val* var_other60 /* var other: nullable Object */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : List[AbstractRuntimeFunction] */;
val* var66 /* : List[AbstractRuntimeFunction] */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : List[AbstractRuntimeFunction] */;
val* var71 /* : List[AbstractRuntimeFunction] */;
val* var72 /* : nullable Object */;
val* var_m /* var m: AbstractRuntimeFunction */;
val* var73 /* : ModelBuilder */;
val* var75 /* : ModelBuilder */;
val* var76 /* : ToolContext */;
val* var78 /* : ToolContext */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var98 /* : HashSet[AbstractRuntimeFunction] */;
val* var100 /* : HashSet[AbstractRuntimeFunction] */;
long var101 /* : Int */;
val* var102 /* : List[AbstractRuntimeFunction] */;
val* var104 /* : List[AbstractRuntimeFunction] */;
long var105 /* : Int */;
long var107 /* : Int */;
long var108 /* : Int */;
short int var110 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var111 /* : Int */;
val* var112 /* : String */;
val* var113 /* : HashSet[AbstractRuntimeFunction] */;
val* var115 /* : HashSet[AbstractRuntimeFunction] */;
long var116 /* : Int */;
val* var117 /* : String */;
val* var118 /* : String */;
val* var120 /* : ModelBuilder */;
val* var122 /* : ModelBuilder */;
val* var123 /* : ToolContext */;
val* var125 /* : ToolContext */;
val* var127 /* : NativeArray[String] */;
static val* varonce126;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
val* var132 /* : HashSet[AbstractRuntimeFunction] */;
val* var134 /* : HashSet[AbstractRuntimeFunction] */;
long var135 /* : Int */;
val* var136 /* : String */;
val* var137 /* : String */;
var_compiler = self;
{
nitc___nitc__AbstractCompiler___compile_header(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_header on <var_compiler:GlobalCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:GlobalCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:GlobalCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var) on <var:MModule> */
var5 = var->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var:MModule> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Pointer";
var8 = core__abstract_text___CString___to_s_full(var7, 7l, 7l);
var6 = var8;
varonce = var6;
}
{
var9 = nitc__model___Model___get_mclasses_by_name(var3, var6);
}
if (var9 == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var9,((val*)NULL)) on <var9:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_core__kernel__Object___61d_61d]))(var9, var_other); /* == on <var9:nullable Array[MClass](Array[MClass])>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (self) on <self:GlobalCompiler> */
var17 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:GlobalCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var15) on <var15:RapidTypeAnalysis> */
var20 = var15->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var15:RapidTypeAnalysis> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:GlobalCompiler> */
var23 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:GlobalCompiler> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc__model___MModule___pointer_type(var21);
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var18, var24); /* Direct call hash_collection#HashSet#add on <var18:HashSet[MClassType]>*/
}
} else {
}
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (self) on <self:GlobalCompiler> */
var27 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:GlobalCompiler> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var25) on <var25:RapidTypeAnalysis> */
var30 = var25->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var25:RapidTypeAnalysis> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_ = var28;
{
var31 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_32 = var31;
for(;;) {
{
var33 = ((short int(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_32); /* is_ok on <var_32:Iterator[MClassType]>*/
}
if (var33){
} else {
goto BREAK_label;
}
{
var34 = ((val*(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_32); /* item on <var_32:Iterator[MClassType]>*/
}
var_t = var34;
{
nitc___nitc__GlobalCompiler___declare_runtimeclass(var_compiler, var_t); /* Direct call global_compiler#GlobalCompiler#declare_runtimeclass on <var_compiler:GlobalCompiler>*/
}
{
((void(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_32); /* next on <var_32:Iterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_32); /* finish on <var_32:Iterator[MClassType]>*/
}
{
nitc___nitc__GlobalCompiler___compile_class_names(var_compiler); /* Direct call global_compiler#GlobalCompiler#compile_class_names on <var_compiler:GlobalCompiler>*/
}
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (self) on <self:GlobalCompiler> */
var37 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:GlobalCompiler> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var35) on <var35:RapidTypeAnalysis> */
var40 = var35->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var35:RapidTypeAnalysis> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_41 = var38;
{
var42 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_41);
}
var_43 = var42;
for(;;) {
{
var44 = ((short int(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_43); /* is_ok on <var_43:Iterator[MClassType]>*/
}
if (var44){
} else {
goto BREAK_label45;
}
{
var46 = ((val*(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_43); /* item on <var_43:Iterator[MClassType]>*/
}
var_t47 = var46;
{
var48 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_t47);
}
var49 = !var48;
if (var49){
{
nitc___nitc__GlobalCompiler___generate_init_instance(var_compiler, var_t47); /* Direct call global_compiler#GlobalCompiler#generate_init_instance on <var_compiler:GlobalCompiler>*/
}
{
{ /* Inline model#MClassType#mclass (var_t47) on <var_t47:MClassType> */
var52 = var_t47->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_t47:MClassType> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var50) on <var50:MClass> */
var55 = var50->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var50:MClass> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var56 = glob_sys;
{
var57 = nitc__model___core__Sys___extern_kind(var56);
}
{
{ /* Inline kernel#Object#== (var53,var57) on <var53:MClassKind> */
var_other60 = var57;
{
{ /* Inline kernel#Object#is_same_instance (var53,var_other60) on <var53:MClassKind> */
var63 = var53 == var_other60;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
if (var58){
{
nitc___nitc__GlobalCompiler___generate_box_instance(var_compiler, var_t47); /* Direct call global_compiler#GlobalCompiler#generate_box_instance on <var_compiler:GlobalCompiler>*/
}
} else {
}
} else {
{
nitc___nitc__GlobalCompiler___generate_box_instance(var_compiler, var_t47); /* Direct call global_compiler#GlobalCompiler#generate_box_instance on <var_compiler:GlobalCompiler>*/
}
}
{
((void(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_43); /* next on <var_43:Iterator[MClassType]>*/
}
}
BREAK_label45: (void)0;
{
((void(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_43); /* finish on <var_43:Iterator[MClassType]>*/
}
{
nitc___nitc__AbstractCompiler___compile_nitni_global_ref_functions(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions on <var_compiler:GlobalCompiler>*/
}
{
nitc___nitc__AbstractCompiler___compile_main_function(var_compiler); /* Direct call abstract_compiler#AbstractCompiler#compile_main_function on <var_compiler:GlobalCompiler>*/
}
for(;;) {
{
{ /* Inline global_compiler#GlobalCompiler#todos (var_compiler) on <var_compiler:GlobalCompiler> */
var66 = var_compiler->attrs[COLOR_nitc__global_compiler__GlobalCompiler___todos].val; /* _todos on <var_compiler:GlobalCompiler> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todos");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 181);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = core___core__List___core__abstract_collection__Collection__is_empty(var64);
}
var68 = !var67;
if (var68){
{
{ /* Inline global_compiler#GlobalCompiler#todos (var_compiler) on <var_compiler:GlobalCompiler> */
var71 = var_compiler->attrs[COLOR_nitc__global_compiler__GlobalCompiler___todos].val; /* _todos on <var_compiler:GlobalCompiler> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todos");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 181);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = core___core__List___core__abstract_collection__Sequence__shift(var69);
}
var_m = var72;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:GlobalCompiler> */
var75 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:GlobalCompiler> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var73) on <var73:ModelBuilder> */
var78 = var73->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var73:ModelBuilder> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "Compile ";
var84 = core__abstract_text___CString___to_s_full(var83, 8l, 8l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[0]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = " (";
var88 = core__abstract_text___CString___to_s_full(var87, 2l, 2l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var80)->values[2]=var86;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "/";
var92 = core__abstract_text___CString___to_s_full(var91, 1l, 1l);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var80)->values[4]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = ")";
var96 = core__abstract_text___CString___to_s_full(var95, 1l, 1l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var80)->values[6]=var94;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
var97 = ((val*(*)(val* self))(var_m->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_m); /* to_s on <var_m:AbstractRuntimeFunction>*/
}
((struct instance_core__NativeArray*)var80)->values[1]=var97;
{
{ /* Inline global_compiler#GlobalCompiler#seen (var_compiler) on <var_compiler:GlobalCompiler> */
var100 = var_compiler->attrs[COLOR_nitc__global_compiler__GlobalCompiler___seen].val; /* _seen on <var_compiler:GlobalCompiler> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 184);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = core___core__HashSet___core__abstract_collection__Collection__length(var98);
}
{
{ /* Inline global_compiler#GlobalCompiler#todos (var_compiler) on <var_compiler:GlobalCompiler> */
var104 = var_compiler->attrs[COLOR_nitc__global_compiler__GlobalCompiler___todos].val; /* _todos on <var_compiler:GlobalCompiler> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todos");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 181);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline list#List#length (var102) on <var102:List[AbstractRuntimeFunction]> */
var107 = var102->attrs[COLOR_core__list__List___length].l; /* _length on <var102:List[AbstractRuntimeFunction]> */
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var101,var105) on <var101:Int> */
/* Covariant cast for argument 0 (i) <var105:Int> isa OTHER */
/* <var105:Int> isa OTHER */
var110 = 1; /* easy <var105:Int> isa OTHER*/
if (unlikely(!var110)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var111 = var101 - var105;
var108 = var111;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
var112 = core__flat___Int___core__abstract_text__Object__to_s(var108);
((struct instance_core__NativeArray*)var80)->values[3]=var112;
{
{ /* Inline global_compiler#GlobalCompiler#seen (var_compiler) on <var_compiler:GlobalCompiler> */
var115 = var_compiler->attrs[COLOR_nitc__global_compiler__GlobalCompiler___seen].val; /* _seen on <var_compiler:GlobalCompiler> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 184);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
var116 = core___core__HashSet___core__abstract_collection__Collection__length(var113);
}
var117 = core__flat___Int___core__abstract_text__Object__to_s(var116);
((struct instance_core__NativeArray*)var80)->values[5]=var117;
{
var118 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
nitc___nitc__ToolContext___info(var76, var118, 3l); /* Direct call toolcontext#ToolContext#info on <var76:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(var_m->class->vft[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__compile_to_c]))(var_m, var_compiler); /* compile_to_c on <var_m:AbstractRuntimeFunction>*/
}
} else {
goto BREAK_label119;
}
}
BREAK_label119: (void)0;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:GlobalCompiler> */
var122 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:GlobalCompiler> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var120) on <var120:ModelBuilder> */
var125 = var120->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var120:ModelBuilder> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
if (unlikely(varonce126==NULL)) {
var127 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "Total methods to compile to C: ";
var131 = core__abstract_text___CString___to_s_full(var130, 31l, 31l);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var127)->values[0]=var129;
} else {
var127 = varonce126;
varonce126 = NULL;
}
{
{ /* Inline global_compiler#GlobalCompiler#seen (var_compiler) on <var_compiler:GlobalCompiler> */
var134 = var_compiler->attrs[COLOR_nitc__global_compiler__GlobalCompiler___seen].val; /* _seen on <var_compiler:GlobalCompiler> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 184);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
var135 = core___core__HashSet___core__abstract_collection__Collection__length(var132);
}
var136 = core__flat___Int___core__abstract_text__Object__to_s(var135);
((struct instance_core__NativeArray*)var127)->values[1]=var136;
{
var137 = ((val*(*)(val* self))(var127->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var127); /* native_to_s on <var127:NativeArray[String]>*/
}
varonce126 = var127;
{
nitc___nitc__ToolContext___info(var123, var137, 2l); /* Direct call toolcontext#ToolContext#info on <var123:ToolContext>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#compile_class_names for (self: GlobalCompiler) */
void nitc___nitc__GlobalCompiler___compile_class_names(val* self) {
val* var /* : GlobalCompilerVisitor */;
val* var_v /* var v: GlobalCompilerVisitor */;
val* var1 /* : CodeWriter */;
val* var3 /* : CodeWriter */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : RapidTypeAnalysis */;
val* var13 /* : RapidTypeAnalysis */;
val* var14 /* : HashSet[MClassType] */;
val* var16 /* : HashSet[MClassType] */;
val* var_ /* var : HashSet[MClassType] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : Iterator[MClassType] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var22 /* : NativeArray[String] */;
static val* varonce21;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
{
var = nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(self);
}
var_v = var;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:GlobalCompiler> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:GlobalCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "extern const char *class_names[];";
var6 = core__abstract_text___CString___to_s_full(var5, 33l, 33l);
var4 = var6;
varonce = var4;
}
{
nitc___nitc__CodeWriter___add_decl(var1, var4); /* Direct call abstract_compiler#CodeWriter#add_decl on <var1:CodeWriter>*/
}
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "const char *class_names[] = {";
var10 = core__abstract_text___CString___to_s_full(var9, 29l, 29l);
var8 = var10;
varonce7 = var8;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var8); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (self) on <self:GlobalCompiler> */
var13 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:GlobalCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var11) on <var11:RapidTypeAnalysis> */
var16 = var11->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var11:RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_ = var14;
{
var17 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:Iterator[MClassType]>*/
}
if (var19){
} else {
goto BREAK_label;
}
{
var20 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:Iterator[MClassType]>*/
}
var_t = var20;
if (unlikely(varonce21==NULL)) {
var22 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "\"";
var26 = core__abstract_text___CString___to_s_full(var25, 1l, 1l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[0]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "\", /* ";
var30 = core__abstract_text___CString___to_s_full(var29, 6l, 6l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var22)->values[2]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = " */";
var34 = core__abstract_text___CString___to_s_full(var33, 3l, 3l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var22)->values[4]=var32;
} else {
var22 = varonce21;
varonce21 = NULL;
}
{
var35 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MClassType>*/
}
((struct instance_core__NativeArray*)var22)->values[1]=var35;
{
var36 = nitc___nitc__GlobalCompiler___classid(self, var_t);
}
((struct instance_core__NativeArray*)var22)->values[3]=var36;
{
var37 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce21 = var22;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:Iterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:Iterator[MClassType]>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "};";
var41 = core__abstract_text___CString___to_s_full(var40, 2l, 2l);
var39 = var41;
varonce38 = var39;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#classid for (self: GlobalCompiler, MClassType): String */
val* nitc___nitc__GlobalCompiler___classid(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : HashMap[MClassType, String] */;
val* var3 /* : HashMap[MClassType, String] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[MClassType, String] */;
val* var7 /* : HashMap[MClassType, String] */;
val* var8 /* : nullable Object */;
val* var9 /* : Sys */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
var_mtype = p0;
{
{ /* Inline global_compiler#GlobalCompiler#classids (self) on <self:GlobalCompiler> */
var3 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___classids].val; /* _classids on <self:GlobalCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _classids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 158);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var1, var_mtype);
}
if (var4){
{
{ /* Inline global_compiler#GlobalCompiler#classids (self) on <self:GlobalCompiler> */
var7 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___classids].val; /* _classids on <self:GlobalCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _classids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 158);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var5, var_mtype);
}
var = var8;
goto RET_LABEL;
} else {
}
var9 = glob_sys;
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "No classid for ";
var14 = core__abstract_text___CString___to_s_full(var13, 15l, 15l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
} else {
var10 = varonce;
varonce = NULL;
}
{
var15 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var10)->values[1]=var15;
{
var16 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
core__file___Sys___print_error(var9, var16); /* Direct call file#Sys#print_error on <var9:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 155);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#classids for (self: GlobalCompiler): HashMap[MClassType, String] */
val* nitc___nitc__GlobalCompiler___classids(val* self) {
val* var /* : HashMap[MClassType, String] */;
val* var1 /* : HashMap[MClassType, String] */;
var1 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___classids].val; /* _classids on <self:GlobalCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _classids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 158);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#compile_header_structs for (self: GlobalCompiler) */
void nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__compile_header_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:GlobalCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:GlobalCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "typedef struct {int classid;} val; /* general C type representing a Nit instance. */";
var5 = core__abstract_text___CString___to_s_full(var4, 84l, 84l);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#live_primitive_types for (self: GlobalCompiler): Array[MClassType] */
val* nitc___nitc__GlobalCompiler___live_primitive_types(val* self) {
val* var /* : Array[MClassType] */;
val* var1 /* : Array[MClassType] */;
var1 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___live_primitive_types].val; /* _live_primitive_types on <self:GlobalCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_primitive_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 169);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#live_primitive_types= for (self: GlobalCompiler, Array[MClassType]) */
void nitc___nitc__GlobalCompiler___live_primitive_types_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___live_primitive_types].val = p0; /* _live_primitive_types on <self:GlobalCompiler> */
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#todo for (self: GlobalCompiler, AbstractRuntimeFunction) */
void nitc___nitc__GlobalCompiler___todo(val* self, val* p0) {
val* var_m /* var m: AbstractRuntimeFunction */;
val* var /* : HashSet[AbstractRuntimeFunction] */;
val* var2 /* : HashSet[AbstractRuntimeFunction] */;
short int var3 /* : Bool */;
val* var4 /* : List[AbstractRuntimeFunction] */;
val* var6 /* : List[AbstractRuntimeFunction] */;
val* var7 /* : HashSet[AbstractRuntimeFunction] */;
val* var9 /* : HashSet[AbstractRuntimeFunction] */;
var_m = p0;
{
{ /* Inline global_compiler#GlobalCompiler#seen (self) on <self:GlobalCompiler> */
var2 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___seen].val; /* _seen on <self:GlobalCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 184);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core___core__HashSet___core__abstract_collection__Collection__has(var, var_m);
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline global_compiler#GlobalCompiler#todos (self) on <self:GlobalCompiler> */
var6 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___todos].val; /* _todos on <self:GlobalCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todos");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 181);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var4, var_m); /* Direct call abstract_collection#Sequence#add on <var4:List[AbstractRuntimeFunction]>*/
}
{
{ /* Inline global_compiler#GlobalCompiler#seen (self) on <self:GlobalCompiler> */
var9 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___seen].val; /* _seen on <self:GlobalCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 184);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var7, var_m); /* Direct call hash_collection#HashSet#add on <var7:HashSet[AbstractRuntimeFunction]>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#todos for (self: GlobalCompiler): List[AbstractRuntimeFunction] */
val* nitc___nitc__GlobalCompiler___todos(val* self) {
val* var /* : List[AbstractRuntimeFunction] */;
val* var1 /* : List[AbstractRuntimeFunction] */;
var1 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___todos].val; /* _todos on <self:GlobalCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todos");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 181);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#seen for (self: GlobalCompiler): HashSet[AbstractRuntimeFunction] */
val* nitc___nitc__GlobalCompiler___seen(val* self) {
val* var /* : HashSet[AbstractRuntimeFunction] */;
val* var1 /* : HashSet[AbstractRuntimeFunction] */;
var1 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___seen].val; /* _seen on <self:GlobalCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 184);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#declare_runtimeclass for (self: GlobalCompiler, MClassType) */
void nitc___nitc__GlobalCompiler___declare_runtimeclass(val* self, val* p0) {
val* var_mtype /* var mtype: MClassType */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var_v /* var v: CodeWriter */;
val* var3 /* : RapidTypeAnalysis */;
val* var5 /* : RapidTypeAnalysis */;
val* var6 /* : HashSet[MClassType] */;
val* var8 /* : HashSet[MClassType] */;
short int var9 /* : Bool */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : HashMap[MClassType, String] */;
val* var23 /* : HashMap[MClassType, String] */;
long var24 /* : Int */;
long var_idnum /* var idnum: Int */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : Text */;
val* var_idname /* var idname: String */;
val* var31 /* : HashMap[MClassType, String] */;
val* var33 /* : HashMap[MClassType, String] */;
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
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var68 /* : NativeArray[String] */;
static val* varonce67;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
val* var77 /* : String */;
val* var78 /* : MClass */;
val* var80 /* : MClass */;
val* var81 /* : String */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
short int var88 /* : Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var94 /* : NativeArray[String] */;
static val* varonce93;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : Array[MType] */;
val* var100 /* : nullable Object */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
short int var108 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
val* var113 /* : NativeArray[String] */;
static val* varonce112;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : String */;
val* var119 /* : String */;
val* var120 /* : MModule */;
val* var122 /* : MModule */;
val* var123 /* : Set[MClassDef] */;
val* var_ /* var : Set[MClassDef] */;
val* var124 /* : Iterator[nullable Object] */;
val* var_125 /* var : Iterator[MClassDef] */;
short int var126 /* : Bool */;
val* var127 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var128 /* : Array[MProperty] */;
val* var130 /* : Array[MProperty] */;
val* var_131 /* var : Array[MProperty] */;
val* var132 /* : IndexedIterator[nullable Object] */;
val* var_133 /* var : IndexedIterator[MProperty] */;
short int var134 /* : Bool */;
val* var136 /* : nullable Object */;
val* var_p /* var p: MProperty */;
short int var137 /* : Bool */;
int cltype;
int idtype;
short int var138 /* : Bool */;
val* var140 /* : MPropDef */;
val* var142 /* : MPropDef */;
val* var143 /* : nullable MType */;
val* var145 /* : nullable MType */;
val* var_t /* var t: MType */;
val* var146 /* : MModule */;
val* var148 /* : MModule */;
val* var149 /* : MType */;
val* var151 /* : NativeArray[String] */;
static val* varonce150;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : CString */;
val* var155 /* : String */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : CString */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : CString */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
val* var168 /* : String */;
val* var169 /* : MPropDef */;
val* var171 /* : MPropDef */;
val* var172 /* : String */;
val* var173 /* : String */;
val* var174 /* : String */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
var_mtype = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:GlobalCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:GlobalCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_v = var;
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (self) on <self:GlobalCompiler> */
var5 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:GlobalCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var3) on <var3:RapidTypeAnalysis> */
var8 = var3->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var3:RapidTypeAnalysis> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = core___core__HashSet___core__abstract_collection__Collection__has(var6, var_mtype);
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 191);
fatal_exit(1);
}
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "/* runtime class ";
var14 = core__abstract_text___CString___to_s_full(var13, 17l, 17l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = " */";
var18 = core__abstract_text___CString___to_s_full(var17, 3l, 3l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
{
var19 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
nitc___nitc__CodeWriter___add_decl(var_v, var20); /* Direct call abstract_compiler#CodeWriter#add_decl on <var_v:CodeWriter>*/
}
{
{ /* Inline global_compiler#GlobalCompiler#classids (self) on <self:GlobalCompiler> */
var23 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___classids].val; /* _classids on <self:GlobalCompiler> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _classids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 158);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = core___core__HashMap___core__abstract_collection__MapRead__length(var21);
}
var_idnum = var24;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "ID_";
var28 = core__abstract_text___CString___to_s_full(var27, 3l, 3l);
var26 = var28;
varonce25 = var26;
}
{
var29 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
{
var30 = ((val*(*)(val* self, val* p0))(var26->class->vft[COLOR_core__abstract_text__Text___43d]))(var26, var29); /* + on <var26:String>*/
}
var_idname = var30;
{
{ /* Inline global_compiler#GlobalCompiler#classids (self) on <self:GlobalCompiler> */
var33 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___classids].val; /* _classids on <self:GlobalCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _classids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 158);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var31, var_mtype, var_idname); /* Direct call hash_collection#HashMap#[]= on <var31:HashMap[MClassType, String]>*/
}
if (unlikely(varonce34==NULL)) {
var35 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "#define ";
var39 = core__abstract_text___CString___to_s_full(var38, 8l, 8l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[0]=var37;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = " ";
var43 = core__abstract_text___CString___to_s_full(var42, 1l, 1l);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var35)->values[2]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = " /* ";
var47 = core__abstract_text___CString___to_s_full(var46, 4l, 4l);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var35)->values[4]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = " */";
var51 = core__abstract_text___CString___to_s_full(var50, 3l, 3l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var35)->values[6]=var49;
} else {
var35 = varonce34;
varonce34 = NULL;
}
((struct instance_core__NativeArray*)var35)->values[1]=var_idname;
var52 = core__flat___Int___core__abstract_text__Object__to_s(var_idnum);
((struct instance_core__NativeArray*)var35)->values[3]=var52;
{
var53 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var35)->values[5]=var53;
{
var54 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
nitc___nitc__CodeWriter___add_decl(var_v, var54); /* Direct call abstract_compiler#CodeWriter#add_decl on <var_v:CodeWriter>*/
}
if (unlikely(varonce55==NULL)) {
var56 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "struct ";
var60 = core__abstract_text___CString___to_s_full(var59, 7l, 7l);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var56)->values[0]=var58;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = " {";
var64 = core__abstract_text___CString___to_s_full(var63, 2l, 2l);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var56)->values[2]=var62;
} else {
var56 = varonce55;
varonce55 = NULL;
}
{
var65 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var56)->values[1]=var65;
{
var66 = ((val*(*)(val* self))(var56->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
nitc___nitc__CodeWriter___add_decl(var_v, var66); /* Direct call abstract_compiler#CodeWriter#add_decl on <var_v:CodeWriter>*/
}
if (unlikely(varonce67==NULL)) {
var68 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "int classid; /* must be ";
var72 = core__abstract_text___CString___to_s_full(var71, 24l, 24l);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var68)->values[0]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = " */";
var76 = core__abstract_text___CString___to_s_full(var75, 3l, 3l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var68)->values[2]=var74;
} else {
var68 = varonce67;
varonce67 = NULL;
}
((struct instance_core__NativeArray*)var68)->values[1]=var_idname;
{
var77 = ((val*(*)(val* self))(var68->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce67 = var68;
{
nitc___nitc__CodeWriter___add_decl(var_v, var77); /* Direct call abstract_compiler#CodeWriter#add_decl on <var_v:CodeWriter>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var80 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model#MClass#name (var78) on <var78:MClass> */
var83 = var78->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var78:MClass> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "NativeArray";
var87 = core__abstract_text___CString___to_s_full(var86, 11l, 11l);
var85 = var87;
varonce84 = var85;
}
{
var88 = ((short int(*)(val* self, val* p0))(var81->class->vft[COLOR_core__kernel__Object___61d_61d]))(var81, var85); /* == on <var81:String>*/
}
if (var88){
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "int length;";
var92 = core__abstract_text___CString___to_s_full(var91, 11l, 11l);
var90 = var92;
varonce89 = var90;
}
{
nitc___nitc__CodeWriter___add_decl(var_v, var90); /* Direct call abstract_compiler#CodeWriter#add_decl on <var_v:CodeWriter>*/
}
if (unlikely(varonce93==NULL)) {
var94 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = " values[1];";
var98 = core__abstract_text___CString___to_s_full(var97, 11l, 11l);
var96 = var98;
varonce95 = var96;
}
((struct instance_core__NativeArray*)var94)->values[1]=var96;
} else {
var94 = varonce93;
varonce93 = NULL;
}
{
var99 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MClassType>*/
}
{
var100 = core___core__SequenceRead___Collection__first(var99);
}
{
var101 = ((val*(*)(val* self))(var100->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var100); /* ctype on <var100:nullable Object(MType)>*/
}
((struct instance_core__NativeArray*)var94)->values[0]=var101;
{
var102 = ((val*(*)(val* self))(var94->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var94); /* native_to_s on <var94:NativeArray[String]>*/
}
varonce93 = var94;
{
nitc___nitc__CodeWriter___add_decl(var_v, var102); /* Direct call abstract_compiler#CodeWriter#add_decl on <var_v:CodeWriter>*/
}
} else {
}
{
var103 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "val*";
var107 = core__abstract_text___CString___to_s_full(var106, 4l, 4l);
var105 = var107;
varonce104 = var105;
}
{
{ /* Inline kernel#Object#!= (var103,var105) on <var103:String> */
var_other = var105;
{
var110 = ((short int(*)(val* self, val* p0))(var103->class->vft[COLOR_core__kernel__Object___61d_61d]))(var103, var_other); /* == on <var103:String>*/
}
var111 = !var110;
var108 = var111;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
if (var108){
if (unlikely(varonce112==NULL)) {
var113 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = " value;";
var117 = core__abstract_text___CString___to_s_full(var116, 7l, 7l);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var113)->values[1]=var115;
} else {
var113 = varonce112;
varonce112 = NULL;
}
{
var118 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var113)->values[0]=var118;
{
var119 = ((val*(*)(val* self))(var113->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var113); /* native_to_s on <var113:NativeArray[String]>*/
}
varonce112 = var113;
{
nitc___nitc__CodeWriter___add_decl(var_v, var119); /* Direct call abstract_compiler#CodeWriter#add_decl on <var_v:CodeWriter>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:GlobalCompiler> */
var122 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:GlobalCompiler> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = nitc___nitc__MClassType___MType__collect_mclassdefs(var_mtype, var120);
}
var_ = var123;
{
var124 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MClassDef]>*/
}
var_125 = var124;
for(;;) {
{
var126 = ((short int(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_125); /* is_ok on <var_125:Iterator[MClassDef]>*/
}
if (var126){
} else {
goto BREAK_label;
}
{
var127 = ((val*(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_125); /* item on <var_125:Iterator[MClassDef]>*/
}
var_cd = var127;
{
{ /* Inline model#MClassDef#intro_mproperties (var_cd) on <var_cd:MClassDef> */
var130 = var_cd->attrs[COLOR_nitc__model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <var_cd:MClassDef> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 720);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
var_131 = var128;
{
var132 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_131);
}
var_133 = var132;
for(;;) {
{
var134 = ((short int(*)(val* self))((((long)var_133&3)?class_info[((long)var_133&3)]:var_133->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_133); /* is_ok on <var_133:IndexedIterator[MProperty]>*/
}
if (var134){
} else {
goto BREAK_label135;
}
{
var136 = ((val*(*)(val* self))((((long)var_133&3)?class_info[((long)var_133&3)]:var_133->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_133); /* item on <var_133:IndexedIterator[MProperty]>*/
}
var_p = var136;
/* <var_p:MProperty> isa MAttribute */
cltype = type_nitc__MAttribute.color;
idtype = type_nitc__MAttribute.id;
if(cltype >= var_p->type->table_size) {
var137 = 0;
} else {
var137 = var_p->type->type_table[cltype] == idtype;
}
var138 = !var137;
if (var138){
goto BREAK_label139;
} else {
}
{
{ /* Inline model#MProperty#intro (var_p) on <var_p:MProperty(MAttribute)> */
var142 = var_p->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_p:MProperty(MAttribute)> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var140) on <var140:MPropDef(MAttributeDef)> */
var145 = var140->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var140:MPropDef(MAttributeDef)> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 219);
fatal_exit(1);
}
var_t = var143;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:GlobalCompiler> */
var148 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:GlobalCompiler> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
var149 = ((val*(*)(val* self, val* p0, val* p1))(var_t->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_t, var146, var_mtype); /* anchor_to on <var_t:MType>*/
}
var_t = var149;
if (unlikely(varonce150==NULL)) {
var151 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = " ";
var155 = core__abstract_text___CString___to_s_full(var154, 1l, 1l);
var153 = var155;
varonce152 = var153;
}
((struct instance_core__NativeArray*)var151)->values[1]=var153;
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "; /* ";
var159 = core__abstract_text___CString___to_s_full(var158, 5l, 5l);
var157 = var159;
varonce156 = var157;
}
((struct instance_core__NativeArray*)var151)->values[3]=var157;
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = ": ";
var163 = core__abstract_text___CString___to_s_full(var162, 2l, 2l);
var161 = var163;
varonce160 = var161;
}
((struct instance_core__NativeArray*)var151)->values[5]=var161;
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = " */";
var167 = core__abstract_text___CString___to_s_full(var166, 3l, 3l);
var165 = var167;
varonce164 = var165;
}
((struct instance_core__NativeArray*)var151)->values[7]=var165;
} else {
var151 = varonce150;
varonce150 = NULL;
}
{
var168 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_t); /* ctype on <var_t:MType>*/
}
((struct instance_core__NativeArray*)var151)->values[0]=var168;
{
{ /* Inline model#MProperty#intro (var_p) on <var_p:MProperty(MAttribute)> */
var171 = var_p->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_p:MProperty(MAttribute)> */
if (unlikely(var171 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
var172 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(var169);
}
((struct instance_core__NativeArray*)var151)->values[2]=var172;
{
var173 = ((val*(*)(val* self))(var_p->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_p); /* to_s on <var_p:MProperty(MAttribute)>*/
}
((struct instance_core__NativeArray*)var151)->values[4]=var173;
{
var174 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MType>*/
}
((struct instance_core__NativeArray*)var151)->values[6]=var174;
{
var175 = ((val*(*)(val* self))(var151->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var151); /* native_to_s on <var151:NativeArray[String]>*/
}
varonce150 = var151;
{
nitc___nitc__CodeWriter___add_decl(var_v, var175); /* Direct call abstract_compiler#CodeWriter#add_decl on <var_v:CodeWriter>*/
}
BREAK_label139: (void)0;
{
((void(*)(val* self))((((long)var_133&3)?class_info[((long)var_133&3)]:var_133->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_133); /* next on <var_133:IndexedIterator[MProperty]>*/
}
}
BREAK_label135: (void)0;
{
((void(*)(val* self))((((long)var_133&3)?class_info[((long)var_133&3)]:var_133->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_133); /* finish on <var_133:IndexedIterator[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_125); /* next on <var_125:Iterator[MClassDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_125); /* finish on <var_125:Iterator[MClassDef]>*/
}
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "};";
var179 = core__abstract_text___CString___to_s_full(var178, 2l, 2l);
var177 = var179;
varonce176 = var177;
}
{
nitc___nitc__CodeWriter___add_decl(var_v, var177); /* Direct call abstract_compiler#CodeWriter#add_decl on <var_v:CodeWriter>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#generate_init_instance for (self: GlobalCompiler, MClassType) */
void nitc___nitc__GlobalCompiler___generate_init_instance(val* self, val* p0) {
val* var_mtype /* var mtype: MClassType */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : HashSet[MClassType] */;
val* var5 /* : HashSet[MClassType] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : GlobalCompilerVisitor */;
val* var_v /* var v: GlobalCompilerVisitor */;
val* var10 /* : MClass */;
val* var12 /* : MClass */;
val* var13 /* : String */;
val* var15 /* : String */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
short int var19 /* : Bool */;
short int var_is_native_array /* var is_native_array: Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var_sig /* var sig: nullable Object */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : CodeWriter */;
val* var30 /* : CodeWriter */;
val* var32 /* : NativeArray[String] */;
static val* varonce31;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var49 /* : NativeArray[String] */;
static val* varonce48;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
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
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var76 /* : String */;
val* var77 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var93 /* : NativeArray[String] */;
static val* varonce92;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var110 /* : NativeArray[String] */;
static val* varonce109;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : CString */;
val* var118 /* : String */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var123 /* : NativeArray[String] */;
static val* varonce122;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : CString */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
val* var132 /* : String */;
val* var133 /* : String */;
val* var134 /* : String */;
val* var136 /* : NativeArray[String] */;
static val* varonce135;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var146 /* : String */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : CString */;
val* var150 /* : String */;
var_mtype = p0;
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (self) on <self:GlobalCompiler> */
var2 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:GlobalCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var) on <var:RapidTypeAnalysis> */
var5 = var->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__HashSet___core__abstract_collection__Collection__has(var3, var_mtype);
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 230);
fatal_exit(1);
}
{
var7 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var8 = !var7;
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 231);
fatal_exit(1);
}
{
var9 = nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(self);
}
var_v = var9;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var12 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClass#name (var10) on <var10:MClass> */
var15 = var10->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var10:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (likely(varonce!=NULL)) {
var16 = varonce;
} else {
var17 = "NativeArray";
var18 = core__abstract_text___CString___to_s_full(var17, 11l, 11l);
var16 = var18;
varonce = var16;
}
{
var19 = ((short int(*)(val* self, val* p0))(var13->class->vft[COLOR_core__kernel__Object___61d_61d]))(var13, var16); /* == on <var13:String>*/
}
var_is_native_array = var19;
if (var_is_native_array){
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "int length";
var23 = core__abstract_text___CString___to_s_full(var22, 10l, 10l);
var21 = var23;
varonce20 = var21;
}
var_sig = var21;
} else {
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "void";
var27 = core__abstract_text___CString___to_s_full(var26, 4l, 4l);
var25 = var27;
varonce24 = var25;
}
var_sig = var25;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:GlobalCompiler> */
var30 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:GlobalCompiler> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(varonce31==NULL)) {
var32 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = " NEW_";
var36 = core__abstract_text___CString___to_s_full(var35, 5l, 5l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var32)->values[1]=var34;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "(";
var40 = core__abstract_text___CString___to_s_full(var39, 1l, 1l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var32)->values[3]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = ");";
var44 = core__abstract_text___CString___to_s_full(var43, 2l, 2l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var32)->values[5]=var42;
} else {
var32 = varonce31;
varonce31 = NULL;
}
{
var45 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var32)->values[0]=var45;
{
var46 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var32)->values[2]=var46;
((struct instance_core__NativeArray*)var32)->values[4]=var_sig;
{
var47 = ((val*(*)(val* self))(var32->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var32); /* native_to_s on <var32:NativeArray[String]>*/
}
varonce31 = var32;
{
nitc___nitc__CodeWriter___add_decl(var28, var47); /* Direct call abstract_compiler#CodeWriter#add_decl on <var28:CodeWriter>*/
}
if (unlikely(varonce48==NULL)) {
var49 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "/* allocate ";
var53 = core__abstract_text___CString___to_s_full(var52, 12l, 12l);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var49)->values[0]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = " */";
var57 = core__abstract_text___CString___to_s_full(var56, 3l, 3l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var49)->values[2]=var55;
} else {
var49 = varonce48;
varonce48 = NULL;
}
{
var58 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var49)->values[1]=var58;
{
var59 = ((val*(*)(val* self))(var49->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:GlobalCompilerVisitor>*/
}
if (unlikely(varonce60==NULL)) {
var61 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = " NEW_";
var65 = core__abstract_text___CString___to_s_full(var64, 5l, 5l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var61)->values[1]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "(";
var69 = core__abstract_text___CString___to_s_full(var68, 1l, 1l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var61)->values[3]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = ") {";
var73 = core__abstract_text___CString___to_s_full(var72, 3l, 3l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var61)->values[5]=var71;
} else {
var61 = varonce60;
varonce60 = NULL;
}
{
var74 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var61)->values[0]=var74;
{
var75 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var61)->values[2]=var75;
((struct instance_core__NativeArray*)var61)->values[4]=var_sig;
{
var76 = ((val*(*)(val* self))(var61->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var76); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:GlobalCompilerVisitor>*/
}
{
var77 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_res = var77;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,1) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL78:(void)0;
}
}
if (var_is_native_array){
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = " = nit_alloc(sizeof(struct ";
var84 = core__abstract_text___CString___to_s_full(var83, 27l, 27l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[1]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = ") + length*sizeof(val*));";
var88 = core__abstract_text___CString___to_s_full(var87, 25l, 25l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var80)->values[3]=var86;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
var89 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var80)->values[0]=var89;
{
var90 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var80)->values[2]=var90;
{
var91 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var91); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
if (unlikely(varonce92==NULL)) {
var93 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "((struct ";
var97 = core__abstract_text___CString___to_s_full(var96, 9l, 9l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var93)->values[0]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "*)";
var101 = core__abstract_text___CString___to_s_full(var100, 2l, 2l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var93)->values[2]=var99;
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = ")->length = length;";
var105 = core__abstract_text___CString___to_s_full(var104, 19l, 19l);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var93)->values[4]=var103;
} else {
var93 = varonce92;
varonce92 = NULL;
}
{
var106 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var93)->values[1]=var106;
{
var107 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var93)->values[3]=var107;
{
var108 = ((val*(*)(val* self))(var93->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var93); /* native_to_s on <var93:NativeArray[String]>*/
}
varonce92 = var93;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var108); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce109==NULL)) {
var110 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = " = nit_alloc(sizeof(struct ";
var114 = core__abstract_text___CString___to_s_full(var113, 27l, 27l);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var110)->values[1]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "));";
var118 = core__abstract_text___CString___to_s_full(var117, 3l, 3l);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var110)->values[3]=var116;
} else {
var110 = varonce109;
varonce109 = NULL;
}
{
var119 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var110)->values[0]=var119;
{
var120 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var110)->values[2]=var120;
{
var121 = ((val*(*)(val* self))(var110->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var110); /* native_to_s on <var110:NativeArray[String]>*/
}
varonce109 = var110;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var121); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
}
if (unlikely(varonce122==NULL)) {
var123 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "->classid = ";
var127 = core__abstract_text___CString___to_s_full(var126, 12l, 12l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var123)->values[1]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = ";";
var131 = core__abstract_text___CString___to_s_full(var130, 1l, 1l);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var123)->values[3]=var129;
} else {
var123 = varonce122;
varonce122 = NULL;
}
{
var132 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var123)->values[0]=var132;
{
var133 = nitc___nitc__GlobalCompiler___classid(self, var_mtype);
}
((struct instance_core__NativeArray*)var123)->values[2]=var133;
{
var134 = ((val*(*)(val* self))(var123->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var123); /* native_to_s on <var123:NativeArray[String]>*/
}
varonce122 = var123;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var134); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompiler___generate_init_attr(self, var_v, var_res, var_mtype); /* Direct call abstract_compiler#AbstractCompiler#generate_init_attr on <self:GlobalCompiler>*/
}
{
nitc___nitc__AbstractCompilerVisitor___set_finalizer(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#set_finalizer on <var_v:GlobalCompilerVisitor>*/
}
if (unlikely(varonce135==NULL)) {
var136 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "return ";
var140 = core__abstract_text___CString___to_s_full(var139, 7l, 7l);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var136)->values[0]=var138;
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = ";";
var144 = core__abstract_text___CString___to_s_full(var143, 1l, 1l);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var136)->values[2]=var142;
} else {
var136 = varonce135;
varonce135 = NULL;
}
{
var145 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var136)->values[1]=var145;
{
var146 = ((val*(*)(val* self))(var136->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var136); /* native_to_s on <var136:NativeArray[String]>*/
}
varonce135 = var136;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var146); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "}";
var150 = core__abstract_text___CString___to_s_full(var149, 1l, 1l);
var148 = var150;
varonce147 = var148;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var148); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#generate_box_instance for (self: GlobalCompiler, MClassType) */
void nitc___nitc__GlobalCompiler___generate_box_instance(val* self, val* p0) {
val* var_mtype /* var mtype: MClassType */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : HashSet[MClassType] */;
val* var5 /* : HashSet[MClassType] */;
short int var6 /* : Bool */;
val* var7 /* : GlobalCompilerVisitor */;
val* var_v /* var v: GlobalCompilerVisitor */;
val* var8 /* : CodeWriter */;
val* var10 /* : CodeWriter */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var28 /* : NativeArray[String] */;
static val* varonce27;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var40 /* : NativeArray[String] */;
static val* varonce39;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var57 /* : NativeArray[String] */;
static val* varonce56;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
var_mtype = p0;
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (self) on <self:GlobalCompiler> */
var2 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:GlobalCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var) on <var:RapidTypeAnalysis> */
var5 = var->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__HashSet___core__abstract_collection__Collection__has(var3, var_mtype);
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 264);
fatal_exit(1);
}
{
var7 = nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(self);
}
var_v = var7;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:GlobalCompiler> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:GlobalCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "val* BOX_";
var15 = core__abstract_text___CString___to_s_full(var14, 9l, 9l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "(";
var19 = core__abstract_text___CString___to_s_full(var18, 1l, 1l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var11)->values[2]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = ");";
var23 = core__abstract_text___CString___to_s_full(var22, 2l, 2l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var11)->values[4]=var21;
} else {
var11 = varonce;
varonce = NULL;
}
{
var24 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var11)->values[1]=var24;
{
var25 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var11)->values[3]=var25;
{
var26 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
nitc___nitc__CodeWriter___add_decl(var8, var26); /* Direct call abstract_compiler#CodeWriter#add_decl on <var8:CodeWriter>*/
}
if (unlikely(varonce27==NULL)) {
var28 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "/* allocate ";
var32 = core__abstract_text___CString___to_s_full(var31, 12l, 12l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var28)->values[0]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = " */";
var36 = core__abstract_text___CString___to_s_full(var35, 3l, 3l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var28)->values[2]=var34;
} else {
var28 = varonce27;
varonce27 = NULL;
}
{
var37 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var28)->values[1]=var37;
{
var38 = ((val*(*)(val* self))(var28->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce27 = var28;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:GlobalCompilerVisitor>*/
}
if (unlikely(varonce39==NULL)) {
var40 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "val* BOX_";
var44 = core__abstract_text___CString___to_s_full(var43, 9l, 9l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "(";
var48 = core__abstract_text___CString___to_s_full(var47, 1l, 1l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var40)->values[2]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = " value) {";
var52 = core__abstract_text___CString___to_s_full(var51, 9l, 9l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var40)->values[4]=var50;
} else {
var40 = varonce39;
varonce39 = NULL;
}
{
var53 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var40)->values[1]=var53;
{
var54 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var40)->values[3]=var54;
{
var55 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:GlobalCompilerVisitor>*/
}
if (unlikely(varonce56==NULL)) {
var57 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "struct ";
var61 = core__abstract_text___CString___to_s_full(var60, 7l, 7l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var57)->values[0]=var59;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "*res = nit_alloc(sizeof(struct ";
var65 = core__abstract_text___CString___to_s_full(var64, 31l, 31l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var57)->values[2]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "));";
var69 = core__abstract_text___CString___to_s_full(var68, 3l, 3l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var57)->values[4]=var67;
} else {
var57 = varonce56;
varonce56 = NULL;
}
{
var70 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var57)->values[1]=var70;
{
var71 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var57)->values[3]=var71;
{
var72 = ((val*(*)(val* self))(var57->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var57); /* native_to_s on <var57:NativeArray[String]>*/
}
varonce56 = var57;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
if (unlikely(varonce73==NULL)) {
var74 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "res->classid = ";
var78 = core__abstract_text___CString___to_s_full(var77, 15l, 15l);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[0]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = ";";
var82 = core__abstract_text___CString___to_s_full(var81, 1l, 1l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var74)->values[2]=var80;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
var83 = nitc___nitc__GlobalCompiler___classid(self, var_mtype);
}
((struct instance_core__NativeArray*)var74)->values[1]=var83;
{
var84 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var84); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "res->value = value;";
var88 = core__abstract_text___CString___to_s_full(var87, 19l, 19l);
var86 = var88;
varonce85 = var86;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var86); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "return (val*)res;";
var92 = core__abstract_text___CString___to_s_full(var91, 17l, 17l);
var90 = var92;
varonce89 = var90;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var90); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "}";
var96 = core__abstract_text___CString___to_s_full(var95, 1l, 1l);
var94 = var96;
varonce93 = var94;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var94); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompiler#new_visitor for (self: GlobalCompiler): GlobalCompilerVisitor */
val* nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(val* self) {
val* var /* : GlobalCompilerVisitor */;
val* var1 /* : GlobalCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_nitc__GlobalCompilerVisitor(&type_nitc__GlobalCompilerVisitor);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compiler_61d]))(var1, self); /* compiler= on <var1:GlobalCompilerVisitor>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:GlobalCompilerVisitor>*/
}
/* <var1:GlobalCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 277);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#collect_types_cache for (self: GlobalCompiler): HashMap[MType, Array[MClassType]] */
val* nitc___nitc__GlobalCompiler___collect_types_cache(val* self) {
val* var /* : HashMap[MType, Array[MClassType]] */;
val* var1 /* : HashMap[MType, Array[MClassType]] */;
var1 = self->attrs[COLOR_nitc__global_compiler__GlobalCompiler___collect_types_cache].val; /* _collect_types_cache on <self:GlobalCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_types_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 279);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompiler#compile_nitni_structs for (self: GlobalCompiler) */
void nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:GlobalCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:GlobalCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "struct nitni_instance {\n\tstruct nitni_instance *next,\n\t\t*prev; /* adjacent global references in global list */\n\tint count; /* number of time this global reference has been marked */\n\tval *value;\n};";
var5 = core__abstract_text___CString___to_s_full(var4, 197l, 197l);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs]))(self); /* compile_nitni_structs on <self:GlobalCompiler>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#autobox for (self: GlobalCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
val* var12 /* : MType */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MType */;
val* var19 /* : MType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : NativeArray[String] */;
static val* varonce;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : MType */;
val* var47 /* : MType */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : RuntimeVariable */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : MType */;
val* var56 /* : MType */;
short int var57 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_valtype /* var valtype: MClassType */;
val* var58 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var59 /* : AbstractCompiler */;
val* var61 /* : AbstractCompiler */;
val* var62 /* : RapidTypeAnalysis */;
val* var64 /* : RapidTypeAnalysis */;
val* var65 /* : HashSet[MClassType] */;
val* var67 /* : HashSet[MClassType] */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var71 /* : NativeArray[String] */;
static val* varonce70;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : MType */;
val* var90 /* : MType */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var93 /* : MType */;
val* var95 /* : MType */;
val* var96 /* : String */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var103 /* : NativeArray[String] */;
static val* varonce102;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : CString */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : CString */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : String */;
val* var126 /* : String */;
val* var127 /* : MType */;
val* var129 /* : MType */;
val* var130 /* : String */;
val* var131 /* : String */;
val* var132 /* : String */;
short int var133 /* : Bool */;
val* var134 /* : MType */;
val* var136 /* : MType */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
short int var142 /* : Bool */;
short int var_143 /* var : Bool */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
short int var149 /* : Bool */;
val* var150 /* : RuntimeVariable */;
val* var_res151 /* var res: RuntimeVariable */;
val* var153 /* : NativeArray[String] */;
static val* varonce152;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : CString */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : CString */;
val* var169 /* : String */;
val* var170 /* : String */;
val* var171 /* : MType */;
val* var173 /* : MType */;
val* var174 /* : String */;
val* var175 /* : String */;
val* var176 /* : String */;
val* var178 /* : NativeArray[String] */;
static val* varonce177;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : CString */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : CString */;
val* var186 /* : String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : CString */;
val* var190 /* : String */;
val* var191 /* : MType */;
val* var193 /* : MType */;
val* var194 /* : String */;
val* var195 /* : String */;
val* var196 /* : String */;
var_value = p0;
var_mtype = p1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var3 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var1,var_mtype) on <var1:MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:MType> */
var8 = var1 == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = var_value;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var12 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((short int(*)(val* self))(var10->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var10); /* is_c_primitive on <var10:MType>*/
}
var14 = !var13;
var_ = var14;
if (var14){
{
var15 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_mtype); /* is_c_primitive on <var_mtype:MType>*/
}
var16 = !var15;
var9 = var16;
} else {
var9 = var_;
}
if (var9){
var = var_value;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var19 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = ((short int(*)(val* self))(var17->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var17); /* is_c_primitive on <var17:MType>*/
}
var21 = !var20;
if (var21){
if (unlikely(varonce==NULL)) {
var22 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "((struct ";
var26 = core__abstract_text___CString___to_s_full(var25, 9l, 9l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[0]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "*)";
var30 = core__abstract_text___CString___to_s_full(var29, 2l, 2l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var22)->values[2]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = ")->value; /* autounbox from ";
var34 = core__abstract_text___CString___to_s_full(var33, 28l, 28l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var22)->values[4]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = " to ";
var38 = core__abstract_text___CString___to_s_full(var37, 4l, 4l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var22)->values[6]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " */";
var42 = core__abstract_text___CString___to_s_full(var41, 3l, 3l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var22)->values[8]=var40;
} else {
var22 = varonce;
varonce = NULL;
}
{
var43 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var22)->values[1]=var43;
{
var44 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var22)->values[3]=var44;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var47 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__Object__to_s]))(var45); /* to_s on <var45:MType>*/
}
((struct instance_core__NativeArray*)var22)->values[5]=var48;
{
var49 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var22)->values[7]=var49;
{
var50 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce = var22;
{
var51 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var50, var_mtype);
}
var = var51;
goto RET_LABEL;
} else {
{
var52 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_mtype); /* is_c_primitive on <var_mtype:MType>*/
}
var53 = !var52;
if (var53){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var56 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
/* <var54:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var54->type->table_size) {
var57 = 0;
} else {
var57 = var54->type->type_table[cltype] == idtype;
}
if (unlikely(!var57)) {
var_class_name = var54 == NULL ? "null" : var54->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 310);
fatal_exit(1);
}
var_valtype = var54;
{
var58 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var58;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var61 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (var59) on <var59:AbstractCompiler(GlobalCompiler)> */
var64 = var59->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var59:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var62) on <var62:RapidTypeAnalysis> */
var67 = var62->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var62:RapidTypeAnalysis> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = core___core__HashSet___core__abstract_collection__Collection__has(var65, var_valtype);
}
var69 = !var68;
if (var69){
if (unlikely(varonce70==NULL)) {
var71 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "/*no autobox from ";
var75 = core__abstract_text___CString___to_s_full(var74, 18l, 18l);
var73 = var75;
varonce72 = var73;
}
((struct instance_core__NativeArray*)var71)->values[0]=var73;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = " to ";
var79 = core__abstract_text___CString___to_s_full(var78, 4l, 4l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var71)->values[2]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = ": ";
var83 = core__abstract_text___CString___to_s_full(var82, 2l, 2l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var71)->values[4]=var81;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = " is not live! */";
var87 = core__abstract_text___CString___to_s_full(var86, 16l, 16l);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var71)->values[6]=var85;
} else {
var71 = varonce70;
varonce70 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var90 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = ((val*(*)(val* self))(var88->class->vft[COLOR_core__abstract_text__Object__to_s]))(var88); /* to_s on <var88:MType>*/
}
((struct instance_core__NativeArray*)var71)->values[1]=var91;
{
var92 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var71)->values[3]=var92;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var95 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
var96 = ((val*(*)(val* self))(var93->class->vft[COLOR_core__abstract_text__Object__to_s]))(var93); /* to_s on <var93:MType>*/
}
((struct instance_core__NativeArray*)var71)->values[5]=var96;
{
var97 = ((val*(*)(val* self))(var71->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var71); /* native_to_s on <var71:NativeArray[String]>*/
}
varonce70 = var71;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "PRINT_ERROR(\"Dead code executed!\\n\"); fatal_exit(1);";
var101 = core__abstract_text___CString___to_s_full(var100, 52l, 52l);
var99 = var101;
varonce98 = var99;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var99); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce102==NULL)) {
var103 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = " = BOX_";
var107 = core__abstract_text___CString___to_s_full(var106, 7l, 7l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var103)->values[1]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "(";
var111 = core__abstract_text___CString___to_s_full(var110, 1l, 1l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var103)->values[3]=var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "); /* autobox from ";
var115 = core__abstract_text___CString___to_s_full(var114, 19l, 19l);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var103)->values[5]=var113;
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = " to ";
var119 = core__abstract_text___CString___to_s_full(var118, 4l, 4l);
var117 = var119;
varonce116 = var117;
}
((struct instance_core__NativeArray*)var103)->values[7]=var117;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = " */";
var123 = core__abstract_text___CString___to_s_full(var122, 3l, 3l);
var121 = var123;
varonce120 = var121;
}
((struct instance_core__NativeArray*)var103)->values[9]=var121;
} else {
var103 = varonce102;
varonce102 = NULL;
}
{
var124 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var103)->values[0]=var124;
{
var125 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_core__NativeArray*)var103)->values[2]=var125;
{
var126 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var103)->values[4]=var126;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var129 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
var130 = ((val*(*)(val* self))(var127->class->vft[COLOR_core__abstract_text__Object__to_s]))(var127); /* to_s on <var127:MType>*/
}
((struct instance_core__NativeArray*)var103)->values[6]=var130;
{
var131 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var103)->values[8]=var131;
{
var132 = ((val*(*)(val* self))(var103->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var132); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var136 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
var137 = ((val*(*)(val* self))(var134->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var134); /* ctype on <var134:MType>*/
}
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "void*";
var141 = core__abstract_text___CString___to_s_full(var140, 5l, 5l);
var139 = var141;
varonce138 = var139;
}
{
var142 = ((short int(*)(val* self, val* p0))(var137->class->vft[COLOR_core__kernel__Object___61d_61d]))(var137, var139); /* == on <var137:String>*/
}
var_143 = var142;
if (var142){
{
var144 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "void*";
var148 = core__abstract_text___CString___to_s_full(var147, 5l, 5l);
var146 = var148;
varonce145 = var146;
}
{
var149 = ((short int(*)(val* self, val* p0))(var144->class->vft[COLOR_core__kernel__Object___61d_61d]))(var144, var146); /* == on <var144:String>*/
}
var133 = var149;
} else {
var133 = var_143;
}
if (var133){
var = var_value;
goto RET_LABEL;
} else {
{
var150 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res151 = var150;
if (unlikely(varonce152==NULL)) {
var153 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "/* ";
var157 = core__abstract_text___CString___to_s_full(var156, 3l, 3l);
var155 = var157;
varonce154 = var155;
}
((struct instance_core__NativeArray*)var153)->values[0]=var155;
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = " left unintialized (cannot convert ";
var161 = core__abstract_text___CString___to_s_full(var160, 35l, 35l);
var159 = var161;
varonce158 = var159;
}
((struct instance_core__NativeArray*)var153)->values[2]=var159;
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = " to ";
var165 = core__abstract_text___CString___to_s_full(var164, 4l, 4l);
var163 = var165;
varonce162 = var163;
}
((struct instance_core__NativeArray*)var153)->values[4]=var163;
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = ") */";
var169 = core__abstract_text___CString___to_s_full(var168, 4l, 4l);
var167 = var169;
varonce166 = var167;
}
((struct instance_core__NativeArray*)var153)->values[6]=var167;
} else {
var153 = varonce152;
varonce152 = NULL;
}
{
var170 = ((val*(*)(val* self))(var_res151->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res151); /* to_s on <var_res151:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var153)->values[1]=var170;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var173 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var173 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
var174 = ((val*(*)(val* self))(var171->class->vft[COLOR_core__abstract_text__Object__to_s]))(var171); /* to_s on <var171:MType>*/
}
((struct instance_core__NativeArray*)var153)->values[3]=var174;
{
var175 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var153)->values[5]=var175;
{
var176 = ((val*(*)(val* self))(var153->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var153); /* native_to_s on <var153:NativeArray[String]>*/
}
varonce152 = var153;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var176); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (unlikely(varonce177==NULL)) {
var178 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "PRINT_ERROR(\"Cast error: Cannot cast %s to %s.\\n\", \"";
var182 = core__abstract_text___CString___to_s_full(var181, 52l, 52l);
var180 = var182;
varonce179 = var180;
}
((struct instance_core__NativeArray*)var178)->values[0]=var180;
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "\", \"";
var186 = core__abstract_text___CString___to_s_full(var185, 4l, 4l);
var184 = var186;
varonce183 = var184;
}
((struct instance_core__NativeArray*)var178)->values[2]=var184;
if (likely(varonce187!=NULL)) {
var188 = varonce187;
} else {
var189 = "\"); fatal_exit(1);";
var190 = core__abstract_text___CString___to_s_full(var189, 18l, 18l);
var188 = var190;
varonce187 = var188;
}
((struct instance_core__NativeArray*)var178)->values[4]=var188;
} else {
var178 = varonce177;
varonce177 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var193 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var193 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
{
var194 = ((val*(*)(val* self))(var191->class->vft[COLOR_core__abstract_text__Object__to_s]))(var191); /* to_s on <var191:MType>*/
}
((struct instance_core__NativeArray*)var178)->values[1]=var194;
{
var195 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var178)->values[3]=var195;
{
var196 = ((val*(*)(val* self))(var178->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var178); /* native_to_s on <var178:NativeArray[String]>*/
}
varonce177 = var178;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var196); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res151;
goto RET_LABEL;
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#unbox_extern for (self: GlobalCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var6 /* : MClass */;
val* var7 /* : MClassKind */;
val* var9 /* : MClassKind */;
val* var10 /* : Sys */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : MType */;
val* var56 /* : MType */;
val* var57 /* : String */;
val* var58 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var6 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var4) on <var4:MClass> */
var9 = var4->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var4:MClass> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = glob_sys;
{
var11 = nitc__model___core__Sys___extern_kind(var10);
}
{
{ /* Inline kernel#Object#== (var7,var11) on <var7:MClassKind> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:MClassKind> */
var16 = var7 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var2 = var12;
} else {
var2 = var_;
}
var_17 = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "CString";
var26 = core__abstract_text___CString___to_s_full(var25, 7l, 7l);
var24 = var26;
varonce = var24;
}
{
{ /* Inline kernel#Object#!= (var21,var24) on <var21:String> */
var_other29 = var24;
{
var30 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_core__kernel__Object___61d_61d]))(var21, var_other29); /* == on <var21:String>*/
}
var31 = !var30;
var27 = var31;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var1 = var27;
} else {
var1 = var_17;
}
if (var1){
{
var32 = nitc___nitc__AbstractCompilerVisitor___new_var_extern(self, var_mtype);
}
var_res = var32;
if (unlikely(varonce33==NULL)) {
var34 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = " = ((struct ";
var38 = core__abstract_text___CString___to_s_full(var37, 12l, 12l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[1]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "*)";
var42 = core__abstract_text___CString___to_s_full(var41, 2l, 2l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var34)->values[3]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = ")->value; /* unboxing ";
var46 = core__abstract_text___CString___to_s_full(var45, 22l, 22l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var34)->values[5]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = " */";
var50 = core__abstract_text___CString___to_s_full(var49, 3l, 3l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var34)->values[7]=var48;
} else {
var34 = varonce33;
varonce33 = NULL;
}
{
var51 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var34)->values[0]=var51;
{
var52 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType(MClassType)>*/
}
((struct instance_core__NativeArray*)var34)->values[2]=var52;
{
var53 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var34)->values[4]=var53;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var56 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = ((val*(*)(val* self))(var54->class->vft[COLOR_core__abstract_text__Object__to_s]))(var54); /* to_s on <var54:MType>*/
}
((struct instance_core__NativeArray*)var34)->values[6]=var57;
{
var58 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var58); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
var = var_value;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#box_extern for (self: GlobalCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__box_extern(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : MClassKind */;
val* var10 /* : MClassKind */;
val* var11 /* : Sys */;
val* var12 /* : MClassKind */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
short int var27 /* : Bool */;
val* var28 /* : MType */;
val* var30 /* : MType */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name;
val* var_valtype /* var valtype: MClassType */;
val* var34 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var35 /* : AbstractCompiler */;
val* var37 /* : AbstractCompiler */;
val* var38 /* : RapidTypeAnalysis */;
val* var40 /* : RapidTypeAnalysis */;
val* var41 /* : HashSet[MClassType] */;
val* var43 /* : HashSet[MClassType] */;
val* var44 /* : MType */;
val* var46 /* : MType */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var54 /* : NativeArray[String] */;
static val* varonce53;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : MType */;
val* var69 /* : MType */;
val* var70 /* : String */;
val* var71 /* : MType */;
val* var73 /* : MType */;
val* var74 /* : String */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
val* var81 /* : NativeArray[String] */;
static val* varonce80;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var100 /* : String */;
val* var101 /* : MType */;
val* var103 /* : MType */;
val* var104 /* : String */;
val* var105 /* : String */;
var_value = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var4 = !var3;
var_ = var4;
if (var4){
var2 = var_;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var7 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var5) on <var5:MClass> */
var10 = var5->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var5:MClass> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = glob_sys;
{
var12 = nitc__model___core__Sys___extern_kind(var11);
}
{
{ /* Inline kernel#Object#!= (var8,var12) on <var8:MClassKind> */
var_other = var12;
{
var15 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_core__kernel__Object___61d_61d]))(var8, var_other); /* == on <var8:MClassKind>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var2 = var13;
}
var_17 = var2;
if (var2){
var1 = var_17;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "CString";
var26 = core__abstract_text___CString___to_s_full(var25, 7l, 7l);
var24 = var26;
varonce = var24;
}
{
var27 = ((short int(*)(val* self, val* p0))(var21->class->vft[COLOR_core__kernel__Object___61d_61d]))(var21, var24); /* == on <var21:String>*/
}
var1 = var27;
}
if (var1){
var = var_value;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var30 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
/* <var28:MType> isa MClassType */
cltype32 = type_nitc__MClassType.color;
idtype33 = type_nitc__MClassType.id;
if(cltype32 >= var28->type->table_size) {
var31 = 0;
} else {
var31 = var28->type->type_table[cltype32] == idtype33;
}
if (unlikely(!var31)) {
var_class_name = var28 == NULL ? "null" : var28->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 347);
fatal_exit(1);
}
var_valtype = var28;
{
var34 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var34;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var37 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (var35) on <var35:AbstractCompiler(GlobalCompiler)> */
var40 = var35->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var35:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var38) on <var38:RapidTypeAnalysis> */
var43 = var38->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var38:RapidTypeAnalysis> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var46 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
/* <var44:MType> isa MClassType */
cltype48 = type_nitc__MClassType.color;
idtype49 = type_nitc__MClassType.id;
if(cltype48 >= var44->type->table_size) {
var47 = 0;
} else {
var47 = var44->type->type_table[cltype48] == idtype49;
}
if (unlikely(!var47)) {
var_class_name50 = var44 == NULL ? "null" : var44->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 349);
fatal_exit(1);
}
{
var51 = core___core__HashSet___core__abstract_collection__Collection__has(var41, var44);
}
var52 = !var51;
if (var52){
if (unlikely(varonce53==NULL)) {
var54 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "/*no boxing of ";
var58 = core__abstract_text___CString___to_s_full(var57, 15l, 15l);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var54)->values[0]=var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = ": ";
var62 = core__abstract_text___CString___to_s_full(var61, 2l, 2l);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var54)->values[2]=var60;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = " is not live! */";
var66 = core__abstract_text___CString___to_s_full(var65, 16l, 16l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var54)->values[4]=var64;
} else {
var54 = varonce53;
varonce53 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var69 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
var70 = ((val*(*)(val* self))(var67->class->vft[COLOR_core__abstract_text__Object__to_s]))(var67); /* to_s on <var67:MType>*/
}
((struct instance_core__NativeArray*)var54)->values[1]=var70;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var73 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
var74 = ((val*(*)(val* self))(var71->class->vft[COLOR_core__abstract_text__Object__to_s]))(var71); /* to_s on <var71:MType>*/
}
((struct instance_core__NativeArray*)var54)->values[3]=var74;
{
var75 = ((val*(*)(val* self))(var54->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var54); /* native_to_s on <var54:NativeArray[String]>*/
}
varonce53 = var54;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "PRINT_ERROR(\"Dead code executed!\\n\"); fatal_exit(1);";
var79 = core__abstract_text___CString___to_s_full(var78, 52l, 52l);
var77 = var79;
varonce76 = var77;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var77); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce80==NULL)) {
var81 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = " = BOX_";
var85 = core__abstract_text___CString___to_s_full(var84, 7l, 7l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var81)->values[1]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "(";
var89 = core__abstract_text___CString___to_s_full(var88, 1l, 1l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var81)->values[3]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "); /* boxing ";
var93 = core__abstract_text___CString___to_s_full(var92, 13l, 13l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var81)->values[5]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = " */";
var97 = core__abstract_text___CString___to_s_full(var96, 3l, 3l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var81)->values[7]=var95;
} else {
var81 = varonce80;
varonce80 = NULL;
}
{
var98 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var81)->values[0]=var98;
{
var99 = ((val*(*)(val* self))(var_valtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_valtype); /* c_name on <var_valtype:MClassType>*/
}
((struct instance_core__NativeArray*)var81)->values[2]=var99;
{
var100 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var81)->values[4]=var100;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var103 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
var104 = ((val*(*)(val* self))(var101->class->vft[COLOR_core__abstract_text__Object__to_s]))(var101); /* to_s on <var101:MType>*/
}
((struct instance_core__NativeArray*)var81)->values[6]=var104;
{
var105 = ((val*(*)(val* self))(var81->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var81); /* native_to_s on <var81:NativeArray[String]>*/
}
varonce80 = var81;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var105); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#collect_types for (self: GlobalCompilerVisitor, RuntimeVariable): Array[MClassType] */
val* nitc___nitc__GlobalCompilerVisitor___collect_types(val* self, val* p0) {
val* var /* : Array[MClassType] */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : AbstractCompiler */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : RapidTypeAnalysis */;
val* var13 /* : RapidTypeAnalysis */;
val* var14 /* : HashSet[MClassType] */;
val* var16 /* : HashSet[MClassType] */;
short int var17 /* : Bool */;
val* var18 /* : Array[MClassType] */;
val* var_ /* var : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
val* var19 /* : AbstractCompiler */;
val* var21 /* : AbstractCompiler */;
val* var22 /* : HashMap[MType, Array[MClassType]] */;
val* var24 /* : HashMap[MType, Array[MClassType]] */;
val* var_cache /* var cache: HashMap[MType, Array[MClassType]] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var27 /* : Array[MClassType] */;
val* var_types28 /* var types: Array[MClassType] */;
val* var29 /* : AbstractCompiler */;
val* var31 /* : AbstractCompiler */;
val* var32 /* : MModule */;
val* var34 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var35 /* : AbstractCompiler */;
val* var37 /* : AbstractCompiler */;
val* var38 /* : RapidTypeAnalysis */;
val* var40 /* : RapidTypeAnalysis */;
val* var41 /* : HashSet[MClassType] */;
val* var43 /* : HashSet[MClassType] */;
val* var_44 /* var : HashSet[MClassType] */;
val* var45 /* : Iterator[nullable Object] */;
val* var_46 /* var : Iterator[MClassType] */;
short int var47 /* : Bool */;
val* var48 /* : nullable Object */;
val* var_t /* var t: MClassType */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
var_recv = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var3 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact (var_recv) on <var_recv:RuntimeVariable> */
var6 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <var_recv:RuntimeVariable> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4){
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var7 = 0;
} else {
var7 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 363);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (var8) on <var8:AbstractCompiler(GlobalCompiler)> */
var13 = var8->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var8:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var11) on <var11:RapidTypeAnalysis> */
var16 = var11->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var11:RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = core___core__HashSet___core__abstract_collection__Collection__has(var14, var_mtype);
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 364);
fatal_exit(1);
}
var18 = NEW_core__Array(&type_core__Array__nitc__MClassType);
{
core___core__Array___with_capacity(var18, 1l); /* Direct call array#Array#with_capacity on <var18:Array[MClassType]>*/
}
var_ = var18;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_mtype); /* Direct call array#AbstractArray#push on <var_:Array[MClassType]>*/
}
var_types = var_;
var = var_types;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var21 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline global_compiler#GlobalCompiler#collect_types_cache (var19) on <var19:AbstractCompiler(GlobalCompiler)> */
var24 = var19->attrs[COLOR_nitc__global_compiler__GlobalCompiler___collect_types_cache].val; /* _collect_types_cache on <var19:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_types_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 279);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_cache = var22;
{
var25 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var_cache, var_mtype);
}
if (var25){
{
var26 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_cache, var_mtype);
}
var = var26;
goto RET_LABEL;
} else {
}
var27 = NEW_core__Array(&type_core__Array__nitc__MClassType);
{
core___core__Array___core__kernel__Object__init(var27); /* Direct call array#Array#init on <var27:Array[MClassType]>*/
}
var_types28 = var27;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var31 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var29) on <var29:AbstractCompiler(GlobalCompiler)> */
var34 = var29->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var29:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_mainmodule = var32;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var37 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (var35) on <var35:AbstractCompiler(GlobalCompiler)> */
var40 = var35->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var35:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var38) on <var38:RapidTypeAnalysis> */
var43 = var38->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var38:RapidTypeAnalysis> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_44 = var41;
{
var45 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_44);
}
var_46 = var45;
for(;;) {
{
var47 = ((short int(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_46); /* is_ok on <var_46:Iterator[MClassType]>*/
}
if (var47){
} else {
goto BREAK_label;
}
{
var48 = ((val*(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_46); /* item on <var_46:Iterator[MClassType]>*/
}
var_t = var48;
{
var49 = nitc___nitc__MType___is_subtype(var_t, var_mainmodule, ((val*)NULL), var_mtype);
}
var50 = !var49;
if (var50){
goto BREAK_label51;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_types28, var_t); /* Direct call array#Array#add on <var_types28:Array[MClassType]>*/
}
BREAK_label51: (void)0;
{
((void(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_46); /* next on <var_46:Iterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_46); /* finish on <var_46:Iterator[MClassType]>*/
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_cache, var_mtype, var_types28); /* Direct call hash_collection#HashMap#[]= on <var_cache:HashMap[MType, Array[MClassType]]>*/
}
var = var_types28;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#native_array_def for (self: GlobalCompilerVisitor, String, nullable MType, Array[RuntimeVariable]): Bool */
short int nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_def(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_pname /* var pname: String */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : MType */;
val* var4 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Object */;
val* var19 /* : MType */;
val* var21 /* : MType */;
val* var22 /* : String */;
val* var23 /* : nullable Object */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var_recv /* var recv: String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
short int var30 /* : Bool */;
val* var32 /* : NativeArray[String] */;
static val* varonce31;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Object */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : RuntimeVariable */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
short int var49 /* : Bool */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : nullable Object */;
val* var65 /* : String */;
val* var66 /* : nullable Object */;
val* var67 /* : String */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
short int var73 /* : Bool */;
val* var75 /* : NativeArray[String] */;
static val* varonce74;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Object */;
val* var89 /* : MType */;
val* var91 /* : MType */;
val* var92 /* : String */;
val* var93 /* : nullable Object */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : RuntimeVariable */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
short int var101 /* : Bool */;
val* var103 /* : NativeArray[String] */;
static val* varonce102;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
val* var116 /* : nullable Object */;
val* var117 /* : MType */;
val* var119 /* : MType */;
val* var120 /* : String */;
val* var121 /* : nullable Object */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var_recv1 /* var recv1: String */;
val* var125 /* : NativeArray[String] */;
static val* varonce124;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : nullable Object */;
val* var147 /* : String */;
val* var148 /* : String */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
short int var154 /* : Bool */;
val* var156 /* : NativeArray[String] */;
static val* varonce155;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : CString */;
val* var160 /* : String */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : CString */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : CString */;
val* var168 /* : String */;
val* var169 /* : nullable Object */;
val* var170 /* : MType */;
val* var172 /* : MType */;
val* var173 /* : String */;
val* var174 /* : nullable Object */;
val* var175 /* : String */;
val* var176 /* : String */;
val* var_recv1177 /* var recv1: String */;
val* var179 /* : NativeArray[String] */;
static val* varonce178;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : CString */;
val* var183 /* : String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : CString */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : CString */;
val* var191 /* : String */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : CString */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : CString */;
val* var199 /* : String */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : CString */;
val* var203 /* : String */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : CString */;
val* var207 /* : String */;
val* var208 /* : nullable Object */;
val* var209 /* : String */;
val* var210 /* : nullable Object */;
val* var211 /* : String */;
val* var212 /* : nullable Object */;
val* var213 /* : String */;
val* var214 /* : String */;
val* var215 /* : String */;
var_pname = p0;
var_ret_type = p1;
var_arguments = p2;
{
var1 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var1) on <var1:nullable Object(RuntimeVariable)> */
var4 = var1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var1:nullable Object(RuntimeVariable)> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_elttype = var2;
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "((struct ";
var9 = core__abstract_text___CString___to_s_full(var8, 9l, 9l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "*)";
var13 = core__abstract_text___CString___to_s_full(var12, 2l, 2l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var5)->values[2]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ")->values";
var17 = core__abstract_text___CString___to_s_full(var16, 9l, 9l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var5)->values[4]=var15;
} else {
var5 = varonce;
varonce = NULL;
}
{
var18 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var18) on <var18:nullable Object(RuntimeVariable)> */
var21 = var18->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var18:nullable Object(RuntimeVariable)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = ((val*(*)(val* self))(var19->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var19); /* c_name on <var19:MType>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var22;
{
var23 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var24 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__Object__to_s]))(var23); /* to_s on <var23:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var5)->values[3]=var24;
{
var25 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var_recv = var25;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "[]";
var29 = core__abstract_text___CString___to_s_full(var28, 2l, 2l);
var27 = var29;
varonce26 = var27;
}
{
var30 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var27); /* == on <var_pname:String>*/
}
if (var30){
if (unlikely(varonce31==NULL)) {
var32 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "[";
var36 = core__abstract_text___CString___to_s_full(var35, 1l, 1l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var32)->values[1]=var34;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "]";
var40 = core__abstract_text___CString___to_s_full(var39, 1l, 1l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var32)->values[3]=var38;
} else {
var32 = varonce31;
varonce31 = NULL;
}
((struct instance_core__NativeArray*)var32)->values[0]=var_recv;
{
var41 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var42 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__Object__to_s]))(var41); /* to_s on <var41:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var32)->values[2]=var42;
{
var43 = ((val*(*)(val* self))(var32->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var32); /* native_to_s on <var32:NativeArray[String]>*/
}
varonce31 = var32;
if (unlikely(var_ret_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 387);
fatal_exit(1);
}
{
var44 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var43, var_ret_type);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(self, var44); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:GlobalCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "[]=";
var48 = core__abstract_text___CString___to_s_full(var47, 3l, 3l);
var46 = var48;
varonce45 = var46;
}
{
var49 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var46); /* == on <var_pname:String>*/
}
if (var49){
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "[";
var55 = core__abstract_text___CString___to_s_full(var54, 1l, 1l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[1]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "]=";
var59 = core__abstract_text___CString___to_s_full(var58, 2l, 2l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var51)->values[3]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ";";
var63 = core__abstract_text___CString___to_s_full(var62, 1l, 1l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var51)->values[5]=var61;
} else {
var51 = varonce50;
varonce50 = NULL;
}
((struct instance_core__NativeArray*)var51)->values[0]=var_recv;
{
var64 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var65 = ((val*(*)(val* self))(var64->class->vft[COLOR_core__abstract_text__Object__to_s]))(var64); /* to_s on <var64:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var51)->values[2]=var65;
{
var66 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var67 = ((val*(*)(val* self))(var66->class->vft[COLOR_core__abstract_text__Object__to_s]))(var66); /* to_s on <var66:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var51)->values[4]=var67;
{
var68 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var68); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "length";
var72 = core__abstract_text___CString___to_s_full(var71, 6l, 6l);
var70 = var72;
varonce69 = var70;
}
{
var73 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var70); /* == on <var_pname:String>*/
}
if (var73){
if (unlikely(varonce74==NULL)) {
var75 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "((struct ";
var79 = core__abstract_text___CString___to_s_full(var78, 9l, 9l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "*)";
var83 = core__abstract_text___CString___to_s_full(var82, 2l, 2l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var75)->values[2]=var81;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = ")->length";
var87 = core__abstract_text___CString___to_s_full(var86, 9l, 9l);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var75)->values[4]=var85;
} else {
var75 = varonce74;
varonce74 = NULL;
}
{
var88 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var88) on <var88:nullable Object(RuntimeVariable)> */
var91 = var88->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var88:nullable Object(RuntimeVariable)> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = ((val*(*)(val* self))(var89->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var89); /* c_name on <var89:MType>*/
}
((struct instance_core__NativeArray*)var75)->values[1]=var92;
{
var93 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var94 = ((val*(*)(val* self))(var93->class->vft[COLOR_core__abstract_text__Object__to_s]))(var93); /* to_s on <var93:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var75)->values[3]=var94;
{
var95 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce74 = var75;
if (unlikely(var_ret_type == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 393);
fatal_exit(1);
}
{
var96 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var95, var_ret_type);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(self, var96); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:GlobalCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "copy_to";
var100 = core__abstract_text___CString___to_s_full(var99, 7l, 7l);
var98 = var100;
varonce97 = var98;
}
{
var101 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var98); /* == on <var_pname:String>*/
}
if (var101){
if (unlikely(varonce102==NULL)) {
var103 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "((struct ";
var107 = core__abstract_text___CString___to_s_full(var106, 9l, 9l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var103)->values[0]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "*)";
var111 = core__abstract_text___CString___to_s_full(var110, 2l, 2l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var103)->values[2]=var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = ")->values";
var115 = core__abstract_text___CString___to_s_full(var114, 9l, 9l);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var103)->values[4]=var113;
} else {
var103 = varonce102;
varonce102 = NULL;
}
{
var116 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var116) on <var116:nullable Object(RuntimeVariable)> */
var119 = var116->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var116:nullable Object(RuntimeVariable)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
var120 = ((val*(*)(val* self))(var117->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var117); /* c_name on <var117:MType>*/
}
((struct instance_core__NativeArray*)var103)->values[1]=var120;
{
var121 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var122 = ((val*(*)(val* self))(var121->class->vft[COLOR_core__abstract_text__Object__to_s]))(var121); /* to_s on <var121:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var103)->values[3]=var122;
{
var123 = ((val*(*)(val* self))(var103->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
var_recv1 = var123;
if (unlikely(varonce124==NULL)) {
var125 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "memmove(";
var129 = core__abstract_text___CString___to_s_full(var128, 8l, 8l);
var127 = var129;
varonce126 = var127;
}
((struct instance_core__NativeArray*)var125)->values[0]=var127;
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = ",";
var133 = core__abstract_text___CString___to_s_full(var132, 1l, 1l);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var125)->values[2]=var131;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = ",";
var137 = core__abstract_text___CString___to_s_full(var136, 1l, 1l);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var125)->values[4]=var135;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "*sizeof(";
var141 = core__abstract_text___CString___to_s_full(var140, 8l, 8l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var125)->values[6]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "));";
var145 = core__abstract_text___CString___to_s_full(var144, 3l, 3l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var125)->values[8]=var143;
} else {
var125 = varonce124;
varonce124 = NULL;
}
((struct instance_core__NativeArray*)var125)->values[1]=var_recv1;
((struct instance_core__NativeArray*)var125)->values[3]=var_recv;
{
var146 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var147 = ((val*(*)(val* self))(var146->class->vft[COLOR_core__abstract_text__Object__to_s]))(var146); /* to_s on <var146:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var125)->values[5]=var147;
{
var148 = ((val*(*)(val* self))(var_elttype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_elttype); /* ctype on <var_elttype:MType>*/
}
((struct instance_core__NativeArray*)var125)->values[7]=var148;
{
var149 = ((val*(*)(val* self))(var125->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var125); /* native_to_s on <var125:NativeArray[String]>*/
}
varonce124 = var125;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var149); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "memmove";
var153 = core__abstract_text___CString___to_s_full(var152, 7l, 7l);
var151 = var153;
varonce150 = var151;
}
{
var154 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var151); /* == on <var_pname:String>*/
}
if (var154){
if (unlikely(varonce155==NULL)) {
var156 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = "((struct ";
var160 = core__abstract_text___CString___to_s_full(var159, 9l, 9l);
var158 = var160;
varonce157 = var158;
}
((struct instance_core__NativeArray*)var156)->values[0]=var158;
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = "*)";
var164 = core__abstract_text___CString___to_s_full(var163, 2l, 2l);
var162 = var164;
varonce161 = var162;
}
((struct instance_core__NativeArray*)var156)->values[2]=var162;
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = ")->values";
var168 = core__abstract_text___CString___to_s_full(var167, 9l, 9l);
var166 = var168;
varonce165 = var166;
}
((struct instance_core__NativeArray*)var156)->values[4]=var166;
} else {
var156 = varonce155;
varonce155 = NULL;
}
{
var169 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 3l);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var169) on <var169:nullable Object(RuntimeVariable)> */
var172 = var169->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var169:nullable Object(RuntimeVariable)> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
var173 = ((val*(*)(val* self))(var170->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var170); /* c_name on <var170:MType>*/
}
((struct instance_core__NativeArray*)var156)->values[1]=var173;
{
var174 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 3l);
}
{
var175 = ((val*(*)(val* self))(var174->class->vft[COLOR_core__abstract_text__Object__to_s]))(var174); /* to_s on <var174:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var156)->values[3]=var175;
{
var176 = ((val*(*)(val* self))(var156->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var156); /* native_to_s on <var156:NativeArray[String]>*/
}
varonce155 = var156;
var_recv1177 = var176;
if (unlikely(varonce178==NULL)) {
var179 = NEW_core__NativeArray(13l, &type_core__NativeArray__core__String);
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "memmove(";
var183 = core__abstract_text___CString___to_s_full(var182, 8l, 8l);
var181 = var183;
varonce180 = var181;
}
((struct instance_core__NativeArray*)var179)->values[0]=var181;
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "+";
var187 = core__abstract_text___CString___to_s_full(var186, 1l, 1l);
var185 = var187;
varonce184 = var185;
}
((struct instance_core__NativeArray*)var179)->values[2]=var185;
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = ", ";
var191 = core__abstract_text___CString___to_s_full(var190, 2l, 2l);
var189 = var191;
varonce188 = var189;
}
((struct instance_core__NativeArray*)var179)->values[4]=var189;
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = "+";
var195 = core__abstract_text___CString___to_s_full(var194, 1l, 1l);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var179)->values[6]=var193;
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = ", ";
var199 = core__abstract_text___CString___to_s_full(var198, 2l, 2l);
var197 = var199;
varonce196 = var197;
}
((struct instance_core__NativeArray*)var179)->values[8]=var197;
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = "*sizeof(";
var203 = core__abstract_text___CString___to_s_full(var202, 8l, 8l);
var201 = var203;
varonce200 = var201;
}
((struct instance_core__NativeArray*)var179)->values[10]=var201;
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = "));";
var207 = core__abstract_text___CString___to_s_full(var206, 3l, 3l);
var205 = var207;
varonce204 = var205;
}
((struct instance_core__NativeArray*)var179)->values[12]=var205;
} else {
var179 = varonce178;
varonce178 = NULL;
}
((struct instance_core__NativeArray*)var179)->values[1]=var_recv1177;
{
var208 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 4l);
}
{
var209 = ((val*(*)(val* self))(var208->class->vft[COLOR_core__abstract_text__Object__to_s]))(var208); /* to_s on <var208:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var179)->values[3]=var209;
((struct instance_core__NativeArray*)var179)->values[5]=var_recv;
{
var210 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var211 = ((val*(*)(val* self))(var210->class->vft[COLOR_core__abstract_text__Object__to_s]))(var210); /* to_s on <var210:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var179)->values[7]=var211;
{
var212 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var213 = ((val*(*)(val* self))(var212->class->vft[COLOR_core__abstract_text__Object__to_s]))(var212); /* to_s on <var212:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var179)->values[9]=var213;
{
var214 = ((val*(*)(val* self))(var_elttype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_elttype); /* ctype on <var_elttype:MType>*/
}
((struct instance_core__NativeArray*)var179)->values[11]=var214;
{
var215 = ((val*(*)(val* self))(var179->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var179); /* native_to_s on <var179:NativeArray[String]>*/
}
varonce178 = var179;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var215); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#native_array_instance for (self: GlobalCompilerVisitor, MType, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_elttype /* var elttype: MType */;
val* var_length /* var length: RuntimeVariable */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_ret_type /* var ret_type: MClassType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : MModule */;
val* var10 /* : MModule */;
val* var11 /* : MClassType */;
val* var12 /* : RuntimeVariable */;
val* var13 /* : NativeArray[String] */;
static val* varonce;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : RuntimeVariable */;
var_elttype = p0;
var_length = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___native_array_type(var1, var_elttype);
}
var_ret_type = var2;
{
var3 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_ret_type);
}
/* <var3:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 411);
fatal_exit(1);
}
var_ret_type = var3;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var5) on <var5:AbstractCompiler(GlobalCompiler)> */
var10 = var5->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var5:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__model___MModule___int_type(var8);
}
{
var12 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_length, var11);
}
var_length = var12;
if (unlikely(varonce==NULL)) {
var13 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "NEW_";
var17 = core__abstract_text___CString___to_s_full(var16, 4l, 4l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var13)->values[0]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "((int)";
var21 = core__abstract_text___CString___to_s_full(var20, 6l, 6l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var13)->values[2]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = ")";
var25 = core__abstract_text___CString___to_s_full(var24, 1l, 1l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var13)->values[4]=var23;
} else {
var13 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(var_ret_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_ret_type); /* c_name on <var_ret_type:MClassType>*/
}
((struct instance_core__NativeArray*)var13)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var_length->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_length); /* to_s on <var_length:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var13)->values[3]=var27;
{
var28 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
{
var29 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var28, var_ret_type);
}
var = var29;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#native_array_set for (self: GlobalCompilerVisitor, RuntimeVariable, Int, RuntimeVariable) */
void nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__native_array_set(val* self, val* p0, long p1, val* p2) {
val* var_nat /* var nat: RuntimeVariable */;
long var_i /* var i: Int */;
val* var_val /* var val: RuntimeVariable */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : MType */;
val* var15 /* : MType */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_recv /* var recv: String */;
val* var20 /* : NativeArray[String] */;
static val* varonce19;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : String */;
var_nat = p0;
var_i = p1;
var_val = p2;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "((struct ";
var4 = core__abstract_text___CString___to_s_full(var3, 9l, 9l);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "*)";
var8 = core__abstract_text___CString___to_s_full(var7, 2l, 2l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var)->values[2]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")->values";
var12 = core__abstract_text___CString___to_s_full(var11, 9l, 9l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var)->values[4]=var10;
} else {
var = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_nat) on <var_nat:RuntimeVariable> */
var15 = var_nat->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_nat:RuntimeVariable> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((val*(*)(val* self))(var13->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var13); /* c_name on <var13:MType>*/
}
((struct instance_core__NativeArray*)var)->values[1]=var16;
{
var17 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var)->values[3]=var17;
{
var18 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
var_recv = var18;
if (unlikely(varonce19==NULL)) {
var20 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "[";
var24 = core__abstract_text___CString___to_s_full(var23, 1l, 1l);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var20)->values[1]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "]=";
var28 = core__abstract_text___CString___to_s_full(var27, 2l, 2l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var20)->values[3]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = ";";
var32 = core__abstract_text___CString___to_s_full(var31, 1l, 1l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var20)->values[5]=var30;
} else {
var20 = varonce19;
varonce19 = NULL;
}
((struct instance_core__NativeArray*)var20)->values[0]=var_recv;
var33 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var20)->values[2]=var33;
{
var34 = ((val*(*)(val* self))(var_val->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_val); /* to_s on <var_val:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var20)->values[4]=var34;
{
var35 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce19 = var20;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#send for (self: GlobalCompilerVisitor, MMethod, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethod */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
val* var3 /* : MPropDef */;
val* var5 /* : MPropDef */;
val* var6 /* : nullable MSignature */;
val* var8 /* : nullable MSignature */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var18 /* : nullable Object */;
val* var19 /* : MType */;
val* var20 /* : RuntimeVariable */;
val* var21 /* : NativeArray[String] */;
static val* varonce;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : nullable Object */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : nullable Object */;
val* var39 /* : MType */;
val* var41 /* : MType */;
short int var42 /* : Bool */;
val* var43 /* : nullable Object */;
val* var44 /* : MType */;
val* var46 /* : MType */;
short int var47 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var48 /* : AbstractCompiler */;
val* var50 /* : AbstractCompiler */;
val* var51 /* : RapidTypeAnalysis */;
val* var53 /* : RapidTypeAnalysis */;
val* var54 /* : HashSet[MClassType] */;
val* var56 /* : HashSet[MClassType] */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var60 /* : NativeArray[String] */;
static val* varonce59;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : AbstractCompiler */;
val* var73 /* : AbstractCompiler */;
val* var74 /* : MModule */;
val* var76 /* : MModule */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var91 /* : AbstractCompiler */;
val* var93 /* : AbstractCompiler */;
val* var94 /* : MModule */;
val* var96 /* : MModule */;
val* var97 /* : MPropDef */;
val* var_propdef /* var propdef: MMethodDef */;
val* var98 /* : nullable RuntimeVariable */;
val* var_res2 /* var res2: nullable RuntimeVariable */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
val* var_other102 /* var other: nullable Object */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var107 /* : AbstractCompiler */;
val* var109 /* : AbstractCompiler */;
val* var110 /* : ModelBuilder */;
val* var112 /* : ModelBuilder */;
val* var113 /* : ToolContext */;
val* var115 /* : ToolContext */;
val* var116 /* : OptionBool */;
val* var118 /* : OptionBool */;
val* var119 /* : nullable Object */;
val* var121 /* : nullable Object */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
short int var_ /* var : Bool */;
val* var124 /* : String */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
short int var131 /* : Bool */;
short int var_132 /* var : Bool */;
val* var133 /* : String */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : CString */;
val* var139 /* : String */;
short int var140 /* : Bool */;
short int var_consider_null /* var consider_null: Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
val* var143 /* : nullable Object */;
val* var144 /* : MType */;
val* var146 /* : MType */;
short int var147 /* : Bool */;
int cltype148;
int idtype149;
short int var_150 /* var : Bool */;
val* var151 /* : nullable Object */;
val* var152 /* : MType */;
val* var154 /* : MType */;
short int var155 /* : Bool */;
int cltype156;
int idtype157;
short int var_158 /* var : Bool */;
val* var160 /* : NativeArray[String] */;
static val* varonce159;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : CString */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : CString */;
val* var168 /* : String */;
val* var169 /* : nullable Object */;
val* var170 /* : String */;
val* var171 /* : String */;
short int var172 /* : Bool */;
val* var173 /* : String */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
short int var180 /* : Bool */;
short int var_181 /* var : Bool */;
val* var182 /* : String */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
val* var195 /* : nullable Object */;
val* var196 /* : MType */;
val* var198 /* : MType */;
short int var199 /* : Bool */;
int cltype200;
int idtype201;
val* var203 /* : NativeArray[String] */;
static val* varonce202;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : CString */;
val* var207 /* : String */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : CString */;
val* var211 /* : String */;
val* var212 /* : String */;
val* var213 /* : nullable Object */;
val* var214 /* : String */;
val* var215 /* : String */;
val* var216 /* : nullable Object */;
val* var217 /* : MType */;
val* var219 /* : MType */;
short int var220 /* : Bool */;
int cltype221;
int idtype222;
val* var224 /* : NativeArray[String] */;
static val* varonce223;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : CString */;
val* var228 /* : String */;
val* var229 /* : String */;
val* var230 /* : String */;
val* var232 /* : NativeArray[String] */;
static val* varonce231;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : CString */;
val* var240 /* : String */;
val* var241 /* : String */;
val* var242 /* : nullable Object */;
val* var243 /* : String */;
val* var244 /* : String */;
val* var245 /* : String */;
val* var247 /* : String */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : CString */;
val* var251 /* : String */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
short int var256 /* : Bool */;
short int var257 /* : Bool */;
val* var258 /* : nullable Object */;
val* var259 /* : MType */;
val* var261 /* : MType */;
short int var262 /* : Bool */;
int cltype263;
int idtype264;
val* var266 /* : NativeArray[String] */;
static val* varonce265;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : CString */;
val* var270 /* : String */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : CString */;
val* var274 /* : String */;
val* var275 /* : String */;
val* var276 /* : nullable Object */;
val* var277 /* : String */;
val* var278 /* : String */;
val* var279 /* : nullable Object */;
val* var280 /* : MType */;
val* var282 /* : MType */;
short int var283 /* : Bool */;
int cltype284;
int idtype285;
val* var287 /* : NativeArray[String] */;
static val* varonce286;
static val* varonce288;
val* var289 /* : String */;
char* var290 /* : CString */;
val* var291 /* : String */;
val* var292 /* : String */;
val* var293 /* : String */;
val* var295 /* : NativeArray[String] */;
static val* varonce294;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : CString */;
val* var299 /* : String */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : CString */;
val* var303 /* : String */;
val* var304 /* : String */;
val* var305 /* : nullable Object */;
val* var306 /* : String */;
val* var307 /* : String */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : CString */;
val* var311 /* : String */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : CString */;
val* var315 /* : String */;
short int var316 /* : Bool */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : CString */;
val* var320 /* : String */;
val* var322 /* : NativeArray[String] */;
static val* varonce321;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : CString */;
val* var326 /* : String */;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : CString */;
val* var330 /* : String */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : CString */;
val* var334 /* : String */;
val* var335 /* : nullable Object */;
val* var336 /* : String */;
val* var337 /* : String */;
val* var338 /* : String */;
val* var339 /* : nullable Object */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : CString */;
val* var343 /* : String */;
val* var345 /* : NativeArray[String] */;
static val* varonce344;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : CString */;
val* var349 /* : String */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : CString */;
val* var353 /* : String */;
val* var354 /* : nullable Object */;
val* var355 /* : String */;
val* var356 /* : String */;
val* var357 /* : nullable Object */;
val* var_last /* var last: MClassType */;
val* var_defaultpropdef /* var defaultpropdef: nullable MMethodDef */;
val* var_358 /* var : Array[MClassType] */;
val* var359 /* : IndexedIterator[nullable Object] */;
val* var_360 /* var : IndexedIterator[MClassType] */;
short int var361 /* : Bool */;
val* var362 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var363 /* : AbstractCompiler */;
val* var365 /* : AbstractCompiler */;
val* var366 /* : MModule */;
val* var368 /* : MModule */;
val* var369 /* : MPropDef */;
val* var_propdef370 /* var propdef: MMethodDef */;
short int var371 /* : Bool */;
val* var372 /* : MClassDef */;
val* var374 /* : MClassDef */;
val* var375 /* : MClass */;
val* var377 /* : MClass */;
val* var378 /* : String */;
val* var380 /* : String */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : CString */;
val* var384 /* : String */;
short int var385 /* : Bool */;
short int var_386 /* var : Bool */;
short int var387 /* : Bool */;
short int var388 /* : Bool */;
short int var390 /* : Bool */;
short int var391 /* : Bool */;
val* var392 /* : AbstractCompiler */;
val* var394 /* : AbstractCompiler */;
short int var395 /* : Bool */;
short int var396 /* : Bool */;
short int var_397 /* var : Bool */;
short int var398 /* : Bool */;
short int var400 /* : Bool */;
short int var402 /* : Bool */;
short int var_403 /* var : Bool */;
short int var404 /* : Bool */;
short int var405 /* : Bool */;
short int var407 /* : Bool */;
short int var409 /* : Bool */;
val* var411 /* : NativeArray[String] */;
static val* varonce410;
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : CString */;
val* var415 /* : String */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : CString */;
val* var419 /* : String */;
val* var420 /* : String */;
val* var421 /* : String */;
val* var423 /* : NativeArray[String] */;
static val* varonce422;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : CString */;
val* var427 /* : String */;
static val* varonce428;
val* var429 /* : String */;
char* var430 /* : CString */;
val* var431 /* : String */;
static val* varonce432;
val* var433 /* : String */;
char* var434 /* : CString */;
val* var435 /* : String */;
val* var436 /* : AbstractCompiler */;
val* var438 /* : AbstractCompiler */;
val* var439 /* : String */;
val* var440 /* : String */;
val* var441 /* : String */;
val* var442 /* : nullable RuntimeVariable */;
val* var_res2443 /* var res2: nullable RuntimeVariable */;
short int var444 /* : Bool */;
short int var445 /* : Bool */;
short int var447 /* : Bool */;
short int var448 /* : Bool */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : CString */;
val* var452 /* : String */;
short int var453 /* : Bool */;
short int var454 /* : Bool */;
short int var456 /* : Bool */;
short int var457 /* : Bool */;
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : CString */;
val* var461 /* : String */;
val* var462 /* : MClassDef */;
val* var464 /* : MClassDef */;
val* var465 /* : MClassType */;
val* var467 /* : MClassType */;
val* var468 /* : nullable RuntimeVariable */;
val* var_res2469 /* var res2: nullable RuntimeVariable */;
short int var470 /* : Bool */;
short int var471 /* : Bool */;
short int var473 /* : Bool */;
short int var474 /* : Bool */;
val* var475 /* : AbstractCompiler */;
val* var477 /* : AbstractCompiler */;
short int var478 /* : Bool */;
static val* varonce479;
val* var480 /* : String */;
char* var481 /* : CString */;
val* var482 /* : String */;
val* var483 /* : nullable Object */;
static val* varonce484;
val* var485 /* : String */;
char* var486 /* : CString */;
val* var487 /* : String */;
var_m = p0;
var_args = p1;
{
var1 = core___core__SequenceRead___Collection__first(var_args);
}
{
var2 = nitc___nitc__GlobalCompilerVisitor___collect_types(self, var1);
}
var_types = var2;
{
{ /* Inline model#MProperty#intro (var_m) on <var_m:MMethod> */
var5 = var_m->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_m:MMethod> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var3) on <var3:MPropDef(MMethodDef)> */
var8 = var3->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var3:MPropDef(MMethodDef)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 434);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var6) on <var6:nullable MSignature> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var6:nullable MSignature> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ret = var9;
if (var_ret == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var17 = var_ret == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
var_res = ((val*)NULL);
} else {
{
var18 = core___core__SequenceRead___Collection__first(var_args);
}
{
var19 = nitc___nitc__AbstractCompilerVisitor___resolve_for(self, var_ret, var18);
}
var_ret = var19;
{
var20 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res = var20;
}
if (unlikely(varonce==NULL)) {
var21 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "/* send ";
var25 = core__abstract_text___CString___to_s_full(var24, 8l, 8l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var21)->values[0]=var23;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = " on ";
var29 = core__abstract_text___CString___to_s_full(var28, 4l, 4l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var21)->values[2]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " */";
var33 = core__abstract_text___CString___to_s_full(var32, 3l, 3l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var21)->values[4]=var31;
} else {
var21 = varonce;
varonce = NULL;
}
{
var34 = ((val*(*)(val* self))(var_m->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_m); /* to_s on <var_m:MMethod>*/
}
((struct instance_core__NativeArray*)var21)->values[1]=var34;
{
var35 = core___core__SequenceRead___Collection__first(var_args);
}
{
var36 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var35);
}
((struct instance_core__NativeArray*)var21)->values[3]=var36;
{
var37 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce = var21;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var38 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var38) on <var38:nullable Object(RuntimeVariable)> */
var41 = var38->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var38:nullable Object(RuntimeVariable)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = ((short int(*)(val* self))(var39->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var39); /* is_c_primitive on <var39:MType>*/
}
if (var42){
{
var43 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var43) on <var43:nullable Object(RuntimeVariable)> */
var46 = var43->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var43:nullable Object(RuntimeVariable)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
/* <var44:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var44->type->table_size) {
var47 = 0;
} else {
var47 = var44->type->type_table[cltype] == idtype;
}
if (unlikely(!var47)) {
var_class_name = var44 == NULL ? "null" : var44->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 444);
fatal_exit(1);
}
var_mclasstype = var44;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var50 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (var48) on <var48:AbstractCompiler(GlobalCompiler)> */
var53 = var48->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var48:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var51) on <var51:RapidTypeAnalysis> */
var56 = var51->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var51:RapidTypeAnalysis> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = core___core__HashSet___core__abstract_collection__Collection__has(var54, var_mclasstype);
}
var58 = !var57;
if (var58){
if (unlikely(varonce59==NULL)) {
var60 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "/* skip, dead class ";
var64 = core__abstract_text___CString___to_s_full(var63, 20l, 20l);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var60)->values[0]=var62;
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = " */";
var68 = core__abstract_text___CString___to_s_full(var67, 3l, 3l);
var66 = var68;
varonce65 = var66;
}
((struct instance_core__NativeArray*)var60)->values[2]=var66;
} else {
var60 = varonce59;
varonce59 = NULL;
}
{
var69 = ((val*(*)(val* self))(var_mclasstype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclasstype); /* to_s on <var_mclasstype:MClassType>*/
}
((struct instance_core__NativeArray*)var60)->values[1]=var69;
{
var70 = ((val*(*)(val* self))(var60->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var60); /* native_to_s on <var60:NativeArray[String]>*/
}
varonce59 = var60;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var70); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var73 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var71) on <var71:AbstractCompiler(GlobalCompiler)> */
var76 = var71->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var71:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = nitc___nitc__MType___has_mproperty(var_mclasstype, var74, var_m);
}
var78 = !var77;
if (var78){
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "/* skip, no method ";
var84 = core__abstract_text___CString___to_s_full(var83, 19l, 19l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[0]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = " */";
var88 = core__abstract_text___CString___to_s_full(var87, 3l, 3l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var80)->values[2]=var86;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
var89 = ((val*(*)(val* self))(var_m->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_m); /* to_s on <var_m:MMethod>*/
}
((struct instance_core__NativeArray*)var80)->values[1]=var89;
{
var90 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var90); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var93 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var91) on <var91:AbstractCompiler(GlobalCompiler)> */
var96 = var91->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var91:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = nitc___nitc__MProperty___lookup_first_definition(var_m, var94, var_mclasstype);
}
var_propdef = var97;
{
var98 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_propdef, var_mclasstype, var_args);
}
var_res2 = var98;
if (var_res == NULL) {
var99 = 0; /* is null */
} else {
var99 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other102 = ((val*)NULL);
{
var103 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other102); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var104 = !var103;
var100 = var104;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
var99 = var100;
}
if (var99){
if (unlikely(var_res2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 455);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(self, var_res, var_res2); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:GlobalCompilerVisitor>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var109 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var107) on <var107:AbstractCompiler(GlobalCompiler)> */
var112 = var107->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var107:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var110) on <var110:ModelBuilder> */
var115 = var110->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var110:ModelBuilder> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (var113) on <var113:ToolContext> */
var118 = var113->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <var113:ToolContext> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline opts#Option#value (var116) on <var116:OptionBool> */
var121 = var116->attrs[COLOR_opts__Option___value].val; /* _value on <var116:OptionBool> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
var122 = (short int)((long)(var119)>>2);
var123 = !var122;
var_ = var123;
if (var123){
var106 = var_;
} else {
{
{ /* Inline model#MProperty#name (var_m) on <var_m:MMethod> */
var126 = var_m->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_m:MMethod> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "==";
var130 = core__abstract_text___CString___to_s_full(var129, 2l, 2l);
var128 = var130;
varonce127 = var128;
}
{
var131 = ((short int(*)(val* self, val* p0))(var124->class->vft[COLOR_core__kernel__Object___61d_61d]))(var124, var128); /* == on <var124:String>*/
}
var106 = var131;
}
var_132 = var106;
if (var106){
var105 = var_132;
} else {
{
{ /* Inline model#MProperty#name (var_m) on <var_m:MMethod> */
var135 = var_m->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_m:MMethod> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "!=";
var139 = core__abstract_text___CString___to_s_full(var138, 2l, 2l);
var137 = var139;
varonce136 = var137;
}
{
var140 = ((short int(*)(val* self, val* p0))(var133->class->vft[COLOR_core__kernel__Object___61d_61d]))(var133, var137); /* == on <var133:String>*/
}
var105 = var140;
}
var_consider_null = var105;
{
var143 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var143) on <var143:nullable Object(RuntimeVariable)> */
var146 = var143->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var143:nullable Object(RuntimeVariable)> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
/* <var144:MType> isa MNullableType */
cltype148 = type_nitc__MNullableType.color;
idtype149 = type_nitc__MNullableType.id;
if(cltype148 >= var144->type->table_size) {
var147 = 0;
} else {
var147 = var144->type->type_table[cltype148] == idtype149;
}
var_150 = var147;
if (var147){
var142 = var_150;
} else {
{
var151 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var151) on <var151:nullable Object(RuntimeVariable)> */
var154 = var151->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var151:nullable Object(RuntimeVariable)> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
/* <var152:MType> isa MNullType */
cltype156 = type_nitc__MNullType.color;
idtype157 = type_nitc__MNullType.id;
if(cltype156 >= var152->type->table_size) {
var155 = 0;
} else {
var155 = var152->type->type_table[cltype156] == idtype157;
}
var142 = var155;
}
var_158 = var142;
if (var142){
var141 = var_consider_null;
} else {
var141 = var_158;
}
if (var141){
if (unlikely(varonce159==NULL)) {
var160 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = "if (";
var164 = core__abstract_text___CString___to_s_full(var163, 4l, 4l);
var162 = var164;
varonce161 = var162;
}
((struct instance_core__NativeArray*)var160)->values[0]=var162;
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = " == NULL) { /* Special null case */";
var168 = core__abstract_text___CString___to_s_full(var167, 35l, 35l);
var166 = var168;
varonce165 = var166;
}
((struct instance_core__NativeArray*)var160)->values[2]=var166;
} else {
var160 = varonce159;
varonce159 = NULL;
}
{
var169 = core___core__SequenceRead___Collection__first(var_args);
}
{
var170 = ((val*(*)(val* self))(var169->class->vft[COLOR_core__abstract_text__Object__to_s]))(var169); /* to_s on <var169:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var160)->values[1]=var170;
{
var171 = ((val*(*)(val* self))(var160->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var160); /* native_to_s on <var160:NativeArray[String]>*/
}
varonce159 = var160;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var171); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
{ /* Inline model#MProperty#name (var_m) on <var_m:MMethod> */
var175 = var_m->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_m:MMethod> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "==";
var179 = core__abstract_text___CString___to_s_full(var178, 2l, 2l);
var177 = var179;
varonce176 = var177;
}
{
var180 = ((short int(*)(val* self, val* p0))(var173->class->vft[COLOR_core__kernel__Object___61d_61d]))(var173, var177); /* == on <var173:String>*/
}
var_181 = var180;
if (var180){
var172 = var_181;
} else {
{
{ /* Inline model#MProperty#name (var_m) on <var_m:MMethod> */
var184 = var_m->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_m:MMethod> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "is_same_instance";
var188 = core__abstract_text___CString___to_s_full(var187, 16l, 16l);
var186 = var188;
varonce185 = var186;
}
{
var189 = ((short int(*)(val* self, val* p0))(var182->class->vft[COLOR_core__kernel__Object___61d_61d]))(var182, var186); /* == on <var182:String>*/
}
var172 = var189;
}
if (var172){
if (var_res == NULL) {
var190 = 0; /* is null */
} else {
var190 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other102 = ((val*)NULL);
{
var193 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other102); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var194 = !var193;
var191 = var194;
goto RET_LABEL192;
RET_LABEL192:(void)0;
}
var190 = var191;
}
if (unlikely(!var190)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 463);
fatal_exit(1);
}
{
var195 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, 1l);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var195) on <var195:nullable Object(RuntimeVariable)> */
var198 = var195->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var195:nullable Object(RuntimeVariable)> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
/* <var196:MType> isa MNullableType */
cltype200 = type_nitc__MNullableType.color;
idtype201 = type_nitc__MNullableType.id;
if(cltype200 >= var196->type->table_size) {
var199 = 0;
} else {
var199 = var196->type->type_table[cltype200] == idtype201;
}
if (var199){
if (unlikely(varonce202==NULL)) {
var203 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = " = (";
var207 = core__abstract_text___CString___to_s_full(var206, 4l, 4l);
var205 = var207;
varonce204 = var205;
}
((struct instance_core__NativeArray*)var203)->values[1]=var205;
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = " == NULL);";
var211 = core__abstract_text___CString___to_s_full(var210, 10l, 10l);
var209 = var211;
varonce208 = var209;
}
((struct instance_core__NativeArray*)var203)->values[3]=var209;
} else {
var203 = varonce202;
varonce202 = NULL;
}
{
var212 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var203)->values[0]=var212;
{
var213 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, 1l);
}
{
var214 = ((val*(*)(val* self))(var213->class->vft[COLOR_core__abstract_text__Object__to_s]))(var213); /* to_s on <var213:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var203)->values[2]=var214;
{
var215 = ((val*(*)(val* self))(var203->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var203); /* native_to_s on <var203:NativeArray[String]>*/
}
varonce202 = var203;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var215); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
{
var216 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, 1l);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var216) on <var216:nullable Object(RuntimeVariable)> */
var219 = var216->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var216:nullable Object(RuntimeVariable)> */
if (unlikely(var219 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var217 = var219;
RET_LABEL218:(void)0;
}
}
/* <var217:MType> isa MNullType */
cltype221 = type_nitc__MNullType.color;
idtype222 = type_nitc__MNullType.id;
if(cltype221 >= var217->type->table_size) {
var220 = 0;
} else {
var220 = var217->type->type_table[cltype221] == idtype222;
}
if (var220){
if (unlikely(varonce223==NULL)) {
var224 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = " = 1; /* is null */";
var228 = core__abstract_text___CString___to_s_full(var227, 19l, 19l);
var226 = var228;
varonce225 = var226;
}
((struct instance_core__NativeArray*)var224)->values[1]=var226;
} else {
var224 = varonce223;
varonce223 = NULL;
}
{
var229 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var224)->values[0]=var229;
{
var230 = ((val*(*)(val* self))(var224->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var224); /* native_to_s on <var224:NativeArray[String]>*/
}
varonce223 = var224;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var230); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce231==NULL)) {
var232 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = " = 0; /* ";
var236 = core__abstract_text___CString___to_s_full(var235, 9l, 9l);
var234 = var236;
varonce233 = var234;
}
((struct instance_core__NativeArray*)var232)->values[1]=var234;
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = " cannot be null */";
var240 = core__abstract_text___CString___to_s_full(var239, 18l, 18l);
var238 = var240;
varonce237 = var238;
}
((struct instance_core__NativeArray*)var232)->values[3]=var238;
} else {
var232 = varonce231;
varonce231 = NULL;
}
{
var241 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var232)->values[0]=var241;
{
var242 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, 1l);
}
{
var243 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var242);
}
((struct instance_core__NativeArray*)var232)->values[2]=var243;
{
var244 = ((val*(*)(val* self))(var232->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var232); /* native_to_s on <var232:NativeArray[String]>*/
}
varonce231 = var232;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var244); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
}
} else {
{
{ /* Inline model#MProperty#name (var_m) on <var_m:MMethod> */
var247 = var_m->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_m:MMethod> */
if (unlikely(var247 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "!=";
var251 = core__abstract_text___CString___to_s_full(var250, 2l, 2l);
var249 = var251;
varonce248 = var249;
}
{
var252 = ((short int(*)(val* self, val* p0))(var245->class->vft[COLOR_core__kernel__Object___61d_61d]))(var245, var249); /* == on <var245:String>*/
}
if (var252){
if (var_res == NULL) {
var253 = 0; /* is null */
} else {
var253 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other102 = ((val*)NULL);
{
var256 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other102); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var257 = !var256;
var254 = var257;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
var253 = var254;
}
if (unlikely(!var253)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 472);
fatal_exit(1);
}
{
var258 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, 1l);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var258) on <var258:nullable Object(RuntimeVariable)> */
var261 = var258->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var258:nullable Object(RuntimeVariable)> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
/* <var259:MType> isa MNullableType */
cltype263 = type_nitc__MNullableType.color;
idtype264 = type_nitc__MNullableType.id;
if(cltype263 >= var259->type->table_size) {
var262 = 0;
} else {
var262 = var259->type->type_table[cltype263] == idtype264;
}
if (var262){
if (unlikely(varonce265==NULL)) {
var266 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = " = (";
var270 = core__abstract_text___CString___to_s_full(var269, 4l, 4l);
var268 = var270;
varonce267 = var268;
}
((struct instance_core__NativeArray*)var266)->values[1]=var268;
if (likely(varonce271!=NULL)) {
var272 = varonce271;
} else {
var273 = " != NULL);";
var274 = core__abstract_text___CString___to_s_full(var273, 10l, 10l);
var272 = var274;
varonce271 = var272;
}
((struct instance_core__NativeArray*)var266)->values[3]=var272;
} else {
var266 = varonce265;
varonce265 = NULL;
}
{
var275 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var266)->values[0]=var275;
{
var276 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, 1l);
}
{
var277 = ((val*(*)(val* self))(var276->class->vft[COLOR_core__abstract_text__Object__to_s]))(var276); /* to_s on <var276:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var266)->values[2]=var277;
{
var278 = ((val*(*)(val* self))(var266->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var266); /* native_to_s on <var266:NativeArray[String]>*/
}
varonce265 = var266;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var278); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
{
var279 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, 1l);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var279) on <var279:nullable Object(RuntimeVariable)> */
var282 = var279->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var279:nullable Object(RuntimeVariable)> */
if (unlikely(var282 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
/* <var280:MType> isa MNullType */
cltype284 = type_nitc__MNullType.color;
idtype285 = type_nitc__MNullType.id;
if(cltype284 >= var280->type->table_size) {
var283 = 0;
} else {
var283 = var280->type->type_table[cltype284] == idtype285;
}
if (var283){
if (unlikely(varonce286==NULL)) {
var287 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce288!=NULL)) {
var289 = varonce288;
} else {
var290 = " = 0; /* is null */";
var291 = core__abstract_text___CString___to_s_full(var290, 19l, 19l);
var289 = var291;
varonce288 = var289;
}
((struct instance_core__NativeArray*)var287)->values[1]=var289;
} else {
var287 = varonce286;
varonce286 = NULL;
}
{
var292 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var287)->values[0]=var292;
{
var293 = ((val*(*)(val* self))(var287->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var287); /* native_to_s on <var287:NativeArray[String]>*/
}
varonce286 = var287;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var293); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce294==NULL)) {
var295 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce296!=NULL)) {
var297 = varonce296;
} else {
var298 = " = 1; /* ";
var299 = core__abstract_text___CString___to_s_full(var298, 9l, 9l);
var297 = var299;
varonce296 = var297;
}
((struct instance_core__NativeArray*)var295)->values[1]=var297;
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = " cannot be null */";
var303 = core__abstract_text___CString___to_s_full(var302, 18l, 18l);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var295)->values[3]=var301;
} else {
var295 = varonce294;
varonce294 = NULL;
}
{
var304 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var295)->values[0]=var304;
{
var305 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, 1l);
}
{
var306 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var305);
}
((struct instance_core__NativeArray*)var295)->values[2]=var306;
{
var307 = ((val*(*)(val* self))(var295->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var295); /* native_to_s on <var295:NativeArray[String]>*/
}
varonce294 = var295;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var307); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
}
} else {
if (likely(varonce308!=NULL)) {
var309 = varonce308;
} else {
var310 = "Receiver is null";
var311 = core__abstract_text___CString___to_s_full(var310, 16l, 16l);
var309 = var311;
varonce308 = var309;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var309); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:GlobalCompilerVisitor>*/
}
}
}
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "} else";
var315 = core__abstract_text___CString___to_s_full(var314, 6l, 6l);
var313 = var315;
varonce312 = var313;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var313); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
}
{
var316 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_types);
}
if (var316){
if (likely(varonce317!=NULL)) {
var318 = varonce317;
} else {
var319 = "{";
var320 = core__abstract_text___CString___to_s_full(var319, 1l, 1l);
var318 = var320;
varonce317 = var318;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var318); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (unlikely(varonce321==NULL)) {
var322 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce323!=NULL)) {
var324 = varonce323;
} else {
var325 = "/*BUG: no live types for ";
var326 = core__abstract_text___CString___to_s_full(var325, 25l, 25l);
var324 = var326;
varonce323 = var324;
}
((struct instance_core__NativeArray*)var322)->values[0]=var324;
if (likely(varonce327!=NULL)) {
var328 = varonce327;
} else {
var329 = " . ";
var330 = core__abstract_text___CString___to_s_full(var329, 3l, 3l);
var328 = var330;
varonce327 = var328;
}
((struct instance_core__NativeArray*)var322)->values[2]=var328;
if (likely(varonce331!=NULL)) {
var332 = varonce331;
} else {
var333 = "*/";
var334 = core__abstract_text___CString___to_s_full(var333, 2l, 2l);
var332 = var334;
varonce331 = var332;
}
((struct instance_core__NativeArray*)var322)->values[4]=var332;
} else {
var322 = varonce321;
varonce321 = NULL;
}
{
var335 = core___core__SequenceRead___Collection__first(var_args);
}
{
var336 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var335);
}
((struct instance_core__NativeArray*)var322)->values[1]=var336;
{
var337 = ((val*(*)(val* self))(var_m->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_m); /* to_s on <var_m:MMethod>*/
}
((struct instance_core__NativeArray*)var322)->values[3]=var337;
{
var338 = ((val*(*)(val* self))(var322->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var322); /* native_to_s on <var322:NativeArray[String]>*/
}
varonce321 = var322;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var338); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var339 = core___core__SequenceRead___Collection__first(var_args);
}
{
nitc___nitc__GlobalCompilerVisitor___bugtype(self, var339); /* Direct call global_compiler#GlobalCompilerVisitor#bugtype on <self:GlobalCompilerVisitor>*/
}
if (likely(varonce340!=NULL)) {
var341 = varonce340;
} else {
var342 = "}";
var343 = core__abstract_text___CString___to_s_full(var342, 1l, 1l);
var341 = var343;
varonce340 = var341;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var341); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce344==NULL)) {
var345 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce346!=NULL)) {
var347 = varonce346;
} else {
var348 = "switch(";
var349 = core__abstract_text___CString___to_s_full(var348, 7l, 7l);
var347 = var349;
varonce346 = var347;
}
((struct instance_core__NativeArray*)var345)->values[0]=var347;
if (likely(varonce350!=NULL)) {
var351 = varonce350;
} else {
var352 = "->classid) {";
var353 = core__abstract_text___CString___to_s_full(var352, 12l, 12l);
var351 = var353;
varonce350 = var351;
}
((struct instance_core__NativeArray*)var345)->values[2]=var351;
} else {
var345 = varonce344;
varonce344 = NULL;
}
{
var354 = core___core__SequenceRead___Collection__first(var_args);
}
{
var355 = ((val*(*)(val* self))(var354->class->vft[COLOR_core__abstract_text__Object__to_s]))(var354); /* to_s on <var354:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var345)->values[1]=var355;
{
var356 = ((val*(*)(val* self))(var345->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var345); /* native_to_s on <var345:NativeArray[String]>*/
}
varonce344 = var345;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var356); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var357 = core___core__SequenceRead___last(var_types);
}
var_last = var357;
var_defaultpropdef = ((val*)NULL);
var_358 = var_types;
{
var359 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_358);
}
var_360 = var359;
for(;;) {
{
var361 = ((short int(*)(val* self))((((long)var_360&3)?class_info[((long)var_360&3)]:var_360->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_360); /* is_ok on <var_360:IndexedIterator[MClassType]>*/
}
if (var361){
} else {
goto BREAK_label;
}
{
var362 = ((val*(*)(val* self))((((long)var_360&3)?class_info[((long)var_360&3)]:var_360->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_360); /* item on <var_360:IndexedIterator[MClassType]>*/
}
var_t = var362;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var365 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var365 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var363 = var365;
RET_LABEL364:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var363) on <var363:AbstractCompiler(GlobalCompiler)> */
var368 = var363->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var363:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var368 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var366 = var368;
RET_LABEL367:(void)0;
}
}
{
var369 = nitc___nitc__MProperty___lookup_first_definition(var_m, var366, var_t);
}
var_propdef370 = var369;
{
{ /* Inline model#MPropDef#mclassdef (var_propdef370) on <var_propdef370:MMethodDef> */
var374 = var_propdef370->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_propdef370:MMethodDef> */
if (unlikely(var374 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var372 = var374;
RET_LABEL373:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var372) on <var372:MClassDef> */
var377 = var372->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var372:MClassDef> */
if (unlikely(var377 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var375 = var377;
RET_LABEL376:(void)0;
}
}
{
{ /* Inline model#MClass#name (var375) on <var375:MClass> */
var380 = var375->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var375:MClass> */
if (unlikely(var380 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var378 = var380;
RET_LABEL379:(void)0;
}
}
if (likely(varonce381!=NULL)) {
var382 = varonce381;
} else {
var383 = "Object";
var384 = core__abstract_text___CString___to_s_full(var383, 6l, 6l);
var382 = var384;
varonce381 = var382;
}
{
var385 = ((short int(*)(val* self, val* p0))(var378->class->vft[COLOR_core__kernel__Object___61d_61d]))(var378, var382); /* == on <var378:String>*/
}
var_386 = var385;
if (var385){
{
var387 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_t);
}
var388 = !var387;
var371 = var388;
} else {
var371 = var_386;
}
if (var371){
var_defaultpropdef = var_propdef370;
goto BREAK_label389;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var394 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var394 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var392 = var394;
RET_LABEL393:(void)0;
}
}
{
var395 = nitc___nitc__AbstractCompiler___hardening(var392);
}
var396 = !var395;
var_397 = var396;
if (var396){
{
{ /* Inline kernel#Object#== (var_t,var_last) on <var_t:MClassType> */
var_other = var_last;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:MClassType> */
var402 = var_t == var_other;
var400 = var402;
goto RET_LABEL401;
RET_LABEL401:(void)0;
}
}
var398 = var400;
goto RET_LABEL399;
RET_LABEL399:(void)0;
}
}
var391 = var398;
} else {
var391 = var_397;
}
var_403 = var391;
if (var391){
if (var_defaultpropdef == NULL) {
var404 = 1; /* is null */
} else {
var404 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_defaultpropdef,((val*)NULL)) on <var_defaultpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_defaultpropdef,var_other) on <var_defaultpropdef:nullable MMethodDef(MMethodDef)> */
var409 = var_defaultpropdef == var_other;
var407 = var409;
goto RET_LABEL408;
RET_LABEL408:(void)0;
}
}
var405 = var407;
goto RET_LABEL406;
RET_LABEL406:(void)0;
}
var404 = var405;
}
var390 = var404;
} else {
var390 = var_403;
}
if (var390){
if (unlikely(varonce410==NULL)) {
var411 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce412!=NULL)) {
var413 = varonce412;
} else {
var414 = "default: /* test ";
var415 = core__abstract_text___CString___to_s_full(var414, 17l, 17l);
var413 = var415;
varonce412 = var413;
}
((struct instance_core__NativeArray*)var411)->values[0]=var413;
if (likely(varonce416!=NULL)) {
var417 = varonce416;
} else {
var418 = " */";
var419 = core__abstract_text___CString___to_s_full(var418, 3l, 3l);
var417 = var419;
varonce416 = var417;
}
((struct instance_core__NativeArray*)var411)->values[2]=var417;
} else {
var411 = varonce410;
varonce410 = NULL;
}
{
var420 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MClassType>*/
}
((struct instance_core__NativeArray*)var411)->values[1]=var420;
{
var421 = ((val*(*)(val* self))(var411->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var411); /* native_to_s on <var411:NativeArray[String]>*/
}
varonce410 = var411;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var421); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce422==NULL)) {
var423 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce424!=NULL)) {
var425 = varonce424;
} else {
var426 = "case ";
var427 = core__abstract_text___CString___to_s_full(var426, 5l, 5l);
var425 = var427;
varonce424 = var425;
}
((struct instance_core__NativeArray*)var423)->values[0]=var425;
if (likely(varonce428!=NULL)) {
var429 = varonce428;
} else {
var430 = ": /* test ";
var431 = core__abstract_text___CString___to_s_full(var430, 10l, 10l);
var429 = var431;
varonce428 = var429;
}
((struct instance_core__NativeArray*)var423)->values[2]=var429;
if (likely(varonce432!=NULL)) {
var433 = varonce432;
} else {
var434 = " */";
var435 = core__abstract_text___CString___to_s_full(var434, 3l, 3l);
var433 = var435;
varonce432 = var433;
}
((struct instance_core__NativeArray*)var423)->values[4]=var433;
} else {
var423 = varonce422;
varonce422 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var438 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var438 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var436 = var438;
RET_LABEL437:(void)0;
}
}
{
var439 = nitc___nitc__GlobalCompiler___classid(var436, var_t);
}
((struct instance_core__NativeArray*)var423)->values[1]=var439;
{
var440 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MClassType>*/
}
((struct instance_core__NativeArray*)var423)->values[3]=var440;
{
var441 = ((val*(*)(val* self))(var423->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var423); /* native_to_s on <var423:NativeArray[String]>*/
}
varonce422 = var423;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var441); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
{
var442 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_propdef370, var_t, var_args);
}
var_res2443 = var442;
if (var_res == NULL) {
var444 = 0; /* is null */
} else {
var444 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other102 = ((val*)NULL);
{
var447 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other102); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var448 = !var447;
var445 = var448;
goto RET_LABEL446;
RET_LABEL446:(void)0;
}
var444 = var445;
}
if (var444){
if (unlikely(var_res2443 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 508);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(self, var_res, var_res2443); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:GlobalCompilerVisitor>*/
}
} else {
}
if (likely(varonce449!=NULL)) {
var450 = varonce449;
} else {
var451 = "break;";
var452 = core__abstract_text___CString___to_s_full(var451, 6l, 6l);
var450 = var452;
varonce449 = var450;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var450); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
BREAK_label389: (void)0;
{
((void(*)(val* self))((((long)var_360&3)?class_info[((long)var_360&3)]:var_360->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_360); /* next on <var_360:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_360&3)?class_info[((long)var_360&3)]:var_360->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_360); /* finish on <var_360:IndexedIterator[MClassType]>*/
}
if (var_defaultpropdef == NULL) {
var453 = 0; /* is null */
} else {
var453 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_defaultpropdef,((val*)NULL)) on <var_defaultpropdef:nullable MMethodDef> */
var_other102 = ((val*)NULL);
{
var456 = ((short int(*)(val* self, val* p0))(var_defaultpropdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_defaultpropdef, var_other102); /* == on <var_defaultpropdef:nullable MMethodDef(MMethodDef)>*/
}
var457 = !var456;
var454 = var457;
goto RET_LABEL455;
RET_LABEL455:(void)0;
}
var453 = var454;
}
if (var453){
if (likely(varonce458!=NULL)) {
var459 = varonce458;
} else {
var460 = "default: /* default is Object */";
var461 = core__abstract_text___CString___to_s_full(var460, 32l, 32l);
var459 = var461;
varonce458 = var459;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var459); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
{ /* Inline model#MPropDef#mclassdef (var_defaultpropdef) on <var_defaultpropdef:nullable MMethodDef(MMethodDef)> */
var464 = var_defaultpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_defaultpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var464 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var462 = var464;
RET_LABEL463:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var462) on <var462:MClassDef> */
var467 = var462->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var462:MClassDef> */
if (unlikely(var467 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var465 = var467;
RET_LABEL466:(void)0;
}
}
{
var468 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_defaultpropdef, var465, var_args);
}
var_res2469 = var468;
if (var_res == NULL) {
var470 = 0; /* is null */
} else {
var470 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other102 = ((val*)NULL);
{
var473 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other102); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var474 = !var473;
var471 = var474;
goto RET_LABEL472;
RET_LABEL472:(void)0;
}
var470 = var471;
}
if (var470){
if (unlikely(var_res2469 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 514);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(self, var_res, var_res2469); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:GlobalCompilerVisitor>*/
}
} else {
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var477 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var477 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var475 = var477;
RET_LABEL476:(void)0;
}
}
{
var478 = nitc___nitc__AbstractCompiler___hardening(var475);
}
if (var478){
if (likely(varonce479!=NULL)) {
var480 = varonce479;
} else {
var481 = "default: /* bug */";
var482 = core__abstract_text___CString___to_s_full(var481, 18l, 18l);
var480 = var482;
varonce479 = var480;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var480); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var483 = core___core__SequenceRead___Collection__first(var_args);
}
{
nitc___nitc__GlobalCompilerVisitor___bugtype(self, var483); /* Direct call global_compiler#GlobalCompilerVisitor#bugtype on <self:GlobalCompilerVisitor>*/
}
} else {
}
}
if (likely(varonce484!=NULL)) {
var485 = varonce484;
} else {
var486 = "}";
var487 = core__abstract_text___CString___to_s_full(var486, 1l, 1l);
var485 = var487;
varonce484 = var485;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var485); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#check_valid_reciever for (self: GlobalCompilerVisitor, MClassType) */
void nitc___nitc__GlobalCompilerVisitor___check_valid_reciever(val* self, val* p0) {
val* var_recvtype /* var recvtype: MClassType */;
short int var /* : Bool */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : RapidTypeAnalysis */;
val* var6 /* : RapidTypeAnalysis */;
val* var7 /* : HashSet[MClassType] */;
val* var9 /* : HashSet[MClassType] */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var14 /* : String */;
val* var16 /* : String */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
short int var20 /* : Bool */;
val* var21 /* : Sys */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
var_recvtype = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
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
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (var1) on <var1:AbstractCompiler(GlobalCompiler)> */
var6 = var1->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var1:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var4) on <var4:RapidTypeAnalysis> */
var9 = var4->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var4:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = core___core__HashSet___core__abstract_collection__Collection__has(var7, var_recvtype);
}
var_ = var10;
if (var10){
var = var_;
} else {
{
{ /* Inline model#MClassType#mclass (var_recvtype) on <var_recvtype:MClassType> */
var13 = var_recvtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recvtype:MClassType> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClass#name (var11) on <var11:MClass> */
var16 = var11->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var11:MClass> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "Object";
var19 = core__abstract_text___CString___to_s_full(var18, 6l, 6l);
var17 = var19;
varonce = var17;
}
{
var20 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_core__kernel__Object___61d_61d]))(var14, var17); /* == on <var14:String>*/
}
var = var20;
}
if (var){
goto RET_LABEL;
} else {
}
var21 = glob_sys;
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = " is not a live type";
var27 = core__abstract_text___CString___to_s_full(var26, 19l, 19l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[1]=var25;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var28 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MClassType>*/
}
((struct instance_core__NativeArray*)var23)->values[0]=var28;
{
var29 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
core__file___Sys___print_error(var21, var29); /* Direct call file#Sys#print_error on <var21:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 527);
fatal_exit(1);
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#get_recvtype for (self: GlobalCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): MClassType */
val* nitc___nitc__GlobalCompilerVisitor___get_recvtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : MClassType */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_args /* var args: Array[RuntimeVariable] */;
var_m = p0;
var_recvtype = p1;
var_args = p2;
{
nitc___nitc__GlobalCompilerVisitor___check_valid_reciever(self, var_recvtype); /* Direct call global_compiler#GlobalCompilerVisitor#check_valid_reciever on <self:GlobalCompilerVisitor>*/
}
var = var_recvtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#call for (self: GlobalCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : MClassType */;
val* var_recv_type /* var recv_type: MClassType */;
val* var2 /* : nullable Object */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : RuntimeVariable */;
val* var9 /* : Array[nullable Object] */;
long var10 /* : Int */;
long var12 /* : Int */;
val* var13 /* : nullable MSignature */;
val* var15 /* : nullable MSignature */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : NativeArray[String] */;
static val* varonce;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : String */;
long var38 /* : Int */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : CustomizedRuntimeFunction */;
val* var_rm /* var rm: CustomizedRuntimeFunction */;
val* var44 /* : nullable RuntimeVariable */;
var_m = p0;
var_recvtype = p1;
var_args = p2;
{
var1 = nitc___nitc__GlobalCompilerVisitor___get_recvtype(self, var_m, var_recvtype, var_args);
}
var_recv_type = var1;
{
var2 = core___core__SequenceRead___Collection__first(var_args);
}
{
var3 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var2, var_recvtype);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___autoadapt(self, var3, var_recvtype);
}
var_recv = var4;
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:MMethodDef> */
var7 = var_m->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var8 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern(self, var_recv, var_recv_type);
}
var_recv = var8;
} else {
}
{
var9 = core__array___Collection___to_a(var_args);
}
var_args = var9;
{
core___core__Sequence___first_61d(var_args, var_recv); /* Direct call abstract_collection#Sequence#first= on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[RuntimeVariable]> */
var12 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[RuntimeVariable]> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var15 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 548);
fatal_exit(1);
} else {
var16 = nitc___nitc__MSignature___arity(var13);
}
{
{ /* Inline kernel#Int#+ (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var16 + 1l;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var10,var17) on <var10:Int> */
var23 = var10 == var17;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (unlikely(!var21)) {
if (unlikely(varonce==NULL)) {
var24 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Invalid arity for ";
var28 = core__abstract_text___CString___to_s_full(var27, 18l, 18l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var24)->values[0]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = ". ";
var32 = core__abstract_text___CString___to_s_full(var31, 2l, 2l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var24)->values[2]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = " arguments given.";
var36 = core__abstract_text___CString___to_s_full(var35, 17l, 17l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var24)->values[4]=var34;
} else {
var24 = varonce;
varonce = NULL;
}
{
var37 = ((val*(*)(val* self))(var_m->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_m); /* to_s on <var_m:MMethodDef>*/
}
((struct instance_core__NativeArray*)var24)->values[1]=var37;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[RuntimeVariable]> */
var40 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[RuntimeVariable]> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var41 = core__flat___Int___core__abstract_text__Object__to_s(var38);
((struct instance_core__NativeArray*)var24)->values[3]=var41;
{
var42 = ((val*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce = var24;
{
nitc___nitc__AbstractCompilerVisitor___debug(self, var42); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:GlobalCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 548);
fatal_exit(1);
}
var43 = NEW_nitc__global_compiler__CustomizedRuntimeFunction(&type_nitc__global_compiler__CustomizedRuntimeFunction);
{
((void(*)(val* self, val* p0))(var43->class->vft[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__mmethoddef_61d]))(var43, var_m); /* mmethoddef= on <var43:CustomizedRuntimeFunction>*/
}
{
((void(*)(val* self, val* p0))(var43->class->vft[COLOR_nitc__global_compiler__CustomizedRuntimeFunction__recv_61d]))(var43, var_recvtype); /* recv= on <var43:CustomizedRuntimeFunction>*/
}
{
((void(*)(val* self))(var43->class->vft[COLOR_core__kernel__Object__init]))(var43); /* init on <var43:CustomizedRuntimeFunction>*/
}
var_rm = var43;
{
var44 = nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___nitc__abstract_compiler__AbstractRuntimeFunction__call(var_rm, self, var_args);
}
var = var44;
goto RET_LABEL;
RET_LABEL:;
return var;
}
