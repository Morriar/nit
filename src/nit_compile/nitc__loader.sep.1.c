#include "nitc__loader.sep.0.h"
/* method loader#ToolContext#opt_path for (self: ToolContext): OptionArray */
val* nitc__loader___ToolContext___opt_path(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__loader__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ToolContext#opt_only_metamodel for (self: ToolContext): OptionBool */
val* nitc__loader___ToolContext___opt_only_metamodel(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 47);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ToolContext#opt_only_parse for (self: ToolContext): OptionBool */
val* nitc__loader___ToolContext___opt_only_parse(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ToolContext#init for (self: ToolContext) */
void nitc__loader___ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionArray */;
val* var5 /* : OptionArray */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : Array[Option] */;
val* var13 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__loader___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
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
{ /* Inline loader#ToolContext#opt_path (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__loader__ToolContext___opt_path].val; /* _opt_path on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 44);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_parse (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 50);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_metamodel (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__loader__ToolContext___opt_only_metamodel].val; /* _opt_only_metamodel on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_metamodel");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 47);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var12 = array_instance Array[Option] */
var13 = NEW_core__NativeArray(3l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var13)->values[0] = (val*) var3;
((struct instance_core__NativeArray*)var13)->values[1] = (val*) var6;
((struct instance_core__NativeArray*)var13)->values[2] = (val*) var9;
{
((void(*)(val* self, val* p0, long p1))(var12->class->vft[COLOR_core__array__Array__with_native]))(var12, var13, 3l); /* with_native on <var12:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var12); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method loader#ModelBuilder#init for (self: ModelBuilder) */
void nitc__loader___ModelBuilder___core__kernel__Object__init(val* self) {
val* var /* : Array[String] */;
val* var2 /* : Array[String] */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionArray */;
val* var8 /* : OptionArray */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var_path_env /* var path_env: String */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Array[String] */;
val* var20 /* : Array[String] */;
val* var21 /* : Array[String] */;
val* var22 /* : Pattern */;
val* var23 /* : ToolContext */;
val* var25 /* : ToolContext */;
val* var26 /* : nullable String */;
val* var28 /* : nullable String */;
val* var_nit_dir /* var nit_dir: nullable String */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var_libname /* var libname: String */;
short int var39 /* : Bool */;
val* var40 /* : Array[String] */;
val* var42 /* : Array[String] */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : String */;
short int var48 /* : Bool */;
val* var49 /* : Array[String] */;
val* var51 /* : Array[String] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__loader___ModelBuilder___core__kernel__Object__init]))(self); /* init on <self:ModelBuilder>*/
}
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var5 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_path (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__loader__ToolContext___opt_path].val; /* _opt_path on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 44);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts#Option#value (var6) on <var6:OptionArray> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionArray> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
core___core__Sequence___append(var, var9); /* Direct call abstract_collection#Sequence#append on <var:Array[String]>*/
}
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "NIT_PATH";
var14 = core__abstract_text___CString___to_s_full(var13, 8l, 8l);
var12 = var14;
varonce = var12;
}
{
var15 = core__environ___String___environ(var12);
}
var_path_env = var15;
{
var16 = ((short int(*)(val* self))(var_path_env->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_path_env); /* is_empty on <var_path_env:String>*/
}
var17 = !var16;
if (var17){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var20 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var22 = (val*)((long)(':')<<2|2);
var21 = core__string_search___Text___split_with(var_path_env, var22);
}
{
core___core__Sequence___append(var18, var21); /* Direct call abstract_collection#Sequence#append on <var18:Array[String]>*/
}
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var25 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#nit_dir (var23) on <var23:ToolContext> */
var28 = var23->attrs[COLOR_nitc__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <var23:ToolContext> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_nit_dir = var26;
if (var_nit_dir == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nit_dir,((val*)NULL)) on <var_nit_dir:nullable String> */
var_other = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_nit_dir->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nit_dir, var_other); /* == on <var_nit_dir:nullable String(String)>*/
}
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "lib";
var37 = core__abstract_text___CString___to_s_full(var36, 3l, 3l);
var35 = var37;
varonce34 = var35;
}
{
var38 = core__file___String____47d(var_nit_dir, var35);
}
var_libname = var38;
{
var39 = core__file___Text___file_exists(var_libname);
}
if (var39){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var42 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var40, var_libname); /* Direct call array#Array#add on <var40:Array[String]>*/
}
} else {
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "contrib";
var46 = core__abstract_text___CString___to_s_full(var45, 7l, 7l);
var44 = var46;
varonce43 = var44;
}
{
var47 = core__file___String____47d(var_nit_dir, var44);
}
var_libname = var47;
{
var48 = core__file___Text___file_exists(var_libname);
}
if (var48){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var51 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var49, var_libname); /* Direct call array#Array#add on <var49:Array[String]>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method loader#ModelBuilder#parse for (self: ModelBuilder, Sequence[String]): Array[MModule] */
val* nitc__loader___ModelBuilder___parse(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var_modules /* var modules: Sequence[String] */;
val* var1 /* : Sys */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_time0 /* var time0: Int */;
val* var5 /* : ToolContext */;
val* var7 /* : ToolContext */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : ArraySet[MModule] */;
val* var_mmodules /* var mmodules: ArraySet[MModule] */;
val* var_ /* var : Sequence[String] */;
val* var12 /* : Iterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[String] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_a /* var a: String */;
val* var16 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : nullable MModule */;
val* var26 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : Sys */;
long var34 /* : Int */;
long var36 /* : Int */;
long var_time1 /* var time1: Int */;
val* var37 /* : ToolContext */;
val* var39 /* : ToolContext */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var53 /* : Int */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var56 /* : ToolContext */;
val* var58 /* : ToolContext */;
short int var59 /* : Bool */;
val* var60 /* : ToolContext */;
val* var62 /* : ToolContext */;
val* var63 /* : OptionBool */;
val* var65 /* : OptionBool */;
val* var66 /* : nullable Object */;
val* var68 /* : nullable Object */;
short int var69 /* : Bool */;
val* var70 /* : ToolContext */;
val* var72 /* : ToolContext */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
val* var77 /* : ToolContext */;
val* var79 /* : ToolContext */;
val* var80 /* : Array[nullable Object] */;
var_modules = p0;
var1 = glob_sys;
{
{ /* Inline time#Sys#get_time (var1) on <var1:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var1;
var4 = time___Sys_get_time___impl(var_for_c_0);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_time0 = var2;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var7 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "*** PARSE ***";
var10 = core__abstract_text___CString___to_s_full(var9, 13l, 13l);
var8 = var10;
varonce = var8;
}
{
nitc___nitc__ToolContext___info(var5, var8, 1l); /* Direct call toolcontext#ToolContext#info on <var5:ToolContext>*/
}
var11 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MModule);
{
core___core__ArraySet___core__kernel__Object__init(var11); /* Direct call array#ArraySet#init on <var11:ArraySet[MModule]>*/
}
var_mmodules = var11;
var_ = var_modules;
{
var12 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[String]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[String]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[String]>*/
}
var_a = var15;
{
var16 = nitc__loader___ModelBuilder___load_module(self, var_a);
}
var_nmodule = var16;
if (var_nmodule == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var22 = var_nmodule == var_other;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
goto BREAK_label23;
} else {
}
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:nullable AModule(AModule)> */
var26 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:nullable AModule(AModule)> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mmodule = var24;
if (var_mmodule == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var32 = var_mmodule == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
goto BREAK_label23;
} else {
}
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_mmodules, var_mmodule); /* Direct call array#ArraySet#add on <var_mmodules:ArraySet[MModule]>*/
}
BREAK_label23: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[String]>*/
}
var33 = glob_sys;
{
{ /* Inline time#Sys#get_time (var33) on <var33:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var33;
var36 = time___Sys_get_time___impl(var_for_c_0);
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_time1 = var34;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var39 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (unlikely(varonce40==NULL)) {
var41 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "*** END PARSE: ";
var45 = core__abstract_text___CString___to_s_full(var44, 15l, 15l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[0]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = " ***";
var49 = core__abstract_text___CString___to_s_full(var48, 4l, 4l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var41)->values[2]=var47;
} else {
var41 = varonce40;
varonce40 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var52 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var53 = var_time1 - var_time0;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var54 = core__flat___Int___core__abstract_text__Object__to_s(var50);
((struct instance_core__NativeArray*)var41)->values[1]=var54;
{
var55 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nitc___nitc__ToolContext___info(var37, var55, 2l); /* Direct call toolcontext#ToolContext#info on <var37:ToolContext>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var58 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nitc___nitc__ToolContext___check_errors(var56);
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var62 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline loader#ToolContext#opt_only_parse (var60) on <var60:ToolContext> */
var65 = var60->attrs[COLOR_nitc__loader__ToolContext___opt_only_parse].val; /* _opt_only_parse on <var60:ToolContext> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_only_parse");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 50);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline opts#Option#value (var63) on <var63:OptionBool> */
var68 = var63->attrs[COLOR_opts__Option___value].val; /* _value on <var63:OptionBool> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
var69 = (short int)((long)(var66)>>2);
if (var69){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var72 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "*** ONLY PARSE...";
var76 = core__abstract_text___CString___to_s_full(var75, 17l, 17l);
var74 = var76;
varonce73 = var74;
}
{
nitc___nitc__ToolContext___info(var70, var74, 1l); /* Direct call toolcontext#ToolContext#info on <var70:ToolContext>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var79 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
nitc___nitc__ToolContext___quit(var77); /* Direct call toolcontext#ToolContext#quit on <var77:ToolContext>*/
}
} else {
}
{
var80 = core__array___Collection___to_a(var_mmodules);
}
var = var80;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#paths for (self: ModelBuilder): Array[String] */
val* nitc__loader___ModelBuilder___paths(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#search_mmodule_by_name for (self: ModelBuilder, nullable ANode, nullable MGroup, String): nullable MModule */
val* nitc__loader___ModelBuilder___search_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_anode /* var anode: nullable ANode */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_name /* var name: String */;
val* var_c /* var c: nullable MGroup */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MPackage */;
val* var8 /* : MPackage */;
val* var9 /* : nullable MGroup */;
val* var11 /* : nullable MGroup */;
val* var_r /* var r: nullable MGroup */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : Array[MModule] */;
val* var_res /* var res: Array[MModule] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var20 /* : Array[String] */;
val* var22 /* : Array[String] */;
val* var_lookpaths /* var lookpaths: Array[String] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : MPackage */;
val* var30 /* : MPackage */;
val* var31 /* : nullable MGroup */;
val* var33 /* : nullable MGroup */;
val* var34 /* : nullable String */;
val* var_dirname /* var dirname: nullable String */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var_ /* var : Bool */;
short int var48 /* : Bool */;
val* var49 /* : Array[nullable Object] */;
val* var_loc /* var loc: nullable Object */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : Location */;
val* var56 /* : nullable MModule */;
val* var_candidate /* var candidate: nullable MModule */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var_other60 /* var other: nullable Object */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var70 /* : NativeArray[String] */;
static val* varonce69;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
val* var114 /* : String */;
val* var115 /* : String */;
var_anode = p0;
var_mgroup = p1;
var_name = p2;
var_c = var_mgroup;
if (var_c == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,((val*)NULL)) on <var_c:nullable MGroup> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable MGroup(MGroup)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
{
{ /* Inline mpackage#MGroup#mpackage (var_c) on <var_c:nullable MGroup(MGroup)> */
var8 = var_c->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_c:nullable MGroup(MGroup)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline mpackage#MPackage#root (var6) on <var6:MPackage> */
var11 = var6->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <var6:MPackage> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_r = var9;
if (var_r == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_r,((val*)NULL)) on <var_r:nullable MGroup> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_r->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_r, var_other); /* == on <var_r:nullable MGroup(MGroup)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 229);
fatal_exit(1);
}
{
nitc__loader___ModelBuilder___scan_group(self, var_r); /* Direct call loader#ModelBuilder#scan_group on <self:ModelBuilder>*/
}
{
var17 = nitc__loader___MGroup___mmodules_by_name(var_r, var_name);
}
var_res = var17;
{
var18 = core___core__Collection___not_empty(var_res);
}
if (var18){
{
var19 = core___core__SequenceRead___Collection__first(var_res);
}
var = var19;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var22 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_lookpaths = var20;
if (var_mgroup == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
{ /* Inline mpackage#MGroup#mpackage (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var30 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline mpackage#MPackage#root (var28) on <var28:MPackage> */
var33 = var28->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <var28:MPackage> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 241);
fatal_exit(1);
} else {
var34 = nitc___nitc__MGroup___filepath(var31);
}
var_dirname = var34;
if (var_dirname == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_dirname,((val*)NULL)) on <var_dirname:nullable String> */
var_other = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var_dirname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_dirname, var_other); /* == on <var_dirname:nullable String(String)>*/
}
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
if (likely(varonce!=NULL)) {
var40 = varonce;
} else {
var41 = "..";
var42 = core__abstract_text___CString___to_s_full(var41, 2l, 2l);
var40 = var42;
varonce = var40;
}
{
var43 = core__file___String___join_path(var_dirname, var40);
}
{
var44 = core__file___String___simplify_path(var43);
}
var_dirname = var44;
{
var46 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_lookpaths, var_dirname);
}
var47 = !var46;
var_ = var47;
if (var47){
{
var48 = core__file___Text___file_exists(var_dirname);
}
var45 = var48;
} else {
var45 = var_;
}
if (var45){
{
var49 = core__array___Collection___to_a(var_lookpaths);
}
var_lookpaths = var49;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_lookpaths, var_dirname); /* Direct call array#Array#add on <var_lookpaths:Array[String]>*/
}
} else {
}
} else {
}
} else {
}
var_loc = ((val*)NULL);
if (var_anode == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anode,((val*)NULL)) on <var_anode:nullable ANode> */
var_other = ((val*)NULL);
{
var53 = ((short int(*)(val* self, val* p0))(var_anode->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anode, var_other); /* == on <var_anode:nullable ANode(ANode)>*/
}
var54 = !var53;
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
{
var55 = ((val*(*)(val* self))(var_anode->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_anode); /* hot_location on <var_anode:nullable ANode(ANode)>*/
}
var_loc = var55;
} else {
}
{
var56 = nitc__loader___ModelBuilder___search_module_in_paths(self, var_loc, var_name, var_lookpaths);
}
var_candidate = var56;
if (var_candidate == NULL) {
var57 = 1; /* is null */
} else {
var57 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,((val*)NULL)) on <var_candidate:nullable MModule> */
var_other60 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other60) on <var_candidate:nullable MModule(MModule)> */
var63 = var_candidate == var_other60;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
if (var_mgroup == NULL) {
var64 = 0; /* is null */
} else {
var64 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var67 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var68 = !var67;
var65 = var68;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (var64){
if (unlikely(varonce69==NULL)) {
var70 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "Error: cannot find module `";
var74 = core__abstract_text___CString___to_s_full(var73, 27l, 27l);
var72 = var74;
varonce71 = var72;
}
((struct instance_core__NativeArray*)var70)->values[0]=var72;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "` from `";
var78 = core__abstract_text___CString___to_s_full(var77, 8l, 8l);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var70)->values[2]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "`. Tried: ";
var82 = core__abstract_text___CString___to_s_full(var81, 10l, 10l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var70)->values[4]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = ".";
var86 = core__abstract_text___CString___to_s_full(var85, 1l, 1l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var70)->values[6]=var84;
} else {
var70 = varonce69;
varonce69 = NULL;
}
((struct instance_core__NativeArray*)var70)->values[1]=var_name;
{
{ /* Inline mpackage#MGroup#name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var89 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 70);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
((struct instance_core__NativeArray*)var70)->values[3]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = ", ";
var93 = core__abstract_text___CString___to_s_full(var92, 2l, 2l);
var91 = var93;
varonce90 = var91;
}
{
var94 = core__abstract_text___Collection___join(var_lookpaths, var91, ((val*)NULL));
}
((struct instance_core__NativeArray*)var70)->values[5]=var94;
{
var95 = ((val*(*)(val* self))(var70->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var70); /* native_to_s on <var70:NativeArray[String]>*/
}
varonce69 = var70;
{
nitc___nitc__ModelBuilder___error(self, var_anode, var95); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce96==NULL)) {
var97 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "Error: cannot find module `";
var101 = core__abstract_text___CString___to_s_full(var100, 27l, 27l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var97)->values[0]=var99;
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "`. Tried: ";
var105 = core__abstract_text___CString___to_s_full(var104, 10l, 10l);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var97)->values[2]=var103;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = ".";
var109 = core__abstract_text___CString___to_s_full(var108, 1l, 1l);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var97)->values[4]=var107;
} else {
var97 = varonce96;
varonce96 = NULL;
}
((struct instance_core__NativeArray*)var97)->values[1]=var_name;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = ", ";
var113 = core__abstract_text___CString___to_s_full(var112, 2l, 2l);
var111 = var113;
varonce110 = var111;
}
{
var114 = core__abstract_text___Collection___join(var_lookpaths, var111, ((val*)NULL));
}
((struct instance_core__NativeArray*)var97)->values[3]=var114;
{
var115 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
{
nitc___nitc__ModelBuilder___error(self, var_anode, var115); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_candidate;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#get_mmodule_by_name for (self: ModelBuilder, nullable ANode, nullable MGroup, String): nullable MModule */
val* nitc__loader___ModelBuilder___get_mmodule_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_anode /* var anode: nullable ANode */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_name /* var name: String */;
val* var1 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable AModule */;
val* var_ast /* var ast: nullable AModule */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
var_anode = p0;
var_mgroup = p1;
var_name = p2;
{
var1 = nitc__loader___ModelBuilder___search_mmodule_by_name(self, var_anode, var_mgroup, var_name);
}
var_mmodule = var1;
if (var_mmodule == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var7 = var_mmodule == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var8 = nitc__loader___MModule___load(var_mmodule, self);
}
var_ast = var8;
if (var_ast == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ast,((val*)NULL)) on <var_ast:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ast,var_other) on <var_ast:nullable AModule(AModule)> */
var14 = var_ast == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_mmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#search_module_in_paths for (self: ModelBuilder, nullable Location, String, Collection[String]): nullable MModule */
val* nitc__loader___ModelBuilder___search_module_in_paths(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MModule */;
val* var_location /* var location: nullable Location */;
val* var_name /* var name: String */;
val* var_lookpaths /* var lookpaths: Collection[String] */;
val* var1 /* : ArraySet[MModule] */;
val* var_res /* var res: ArraySet[MModule] */;
val* var_ /* var : Collection[String] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[String] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_dirname /* var dirname: String */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : nullable MModule */;
val* var_mp /* var mp: nullable MModule */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : Array[MModule] */;
short int var29 /* : Bool */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var34 /* : Bool */;
val* var35 /* : ToolContext */;
val* var37 /* : ToolContext */;
val* var39 /* : NativeArray[String] */;
static val* varonce38;
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
val* var52 /* : Array[String] */;
val* var_53 /* var : Array[String] */;
val* var_54 /* var : ArraySet[MModule] */;
val* var55 /* : Iterator[nullable Object] */;
val* var_56 /* var : Iterator[MModule] */;
short int var57 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_x /* var x: MModule */;
val* var60 /* : String */;
val* var61 /* : nullable String */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var69 /* : Message */;
val* var70 /* : nullable Object */;
var_location = p0;
var_name = p1;
var_lookpaths = p2;
var1 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MModule);
{
core___core__ArraySet___core__kernel__Object__init(var1); /* Direct call array#ArraySet#init on <var1:ArraySet[MModule]>*/
}
var_res = var1;
var_ = var_lookpaths;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[String]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[String]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[String]>*/
}
var_dirname = var5;
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = ".nit";
var10 = core__abstract_text___CString___to_s_full(var9, 4l, 4l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[1]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var6)->values[0]=var_name;
{
var11 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
var12 = core__file___String____47d(var_dirname, var11);
}
{
var13 = core__file___String___simplify_path(var12);
}
{
var14 = nitc__loader___ModelBuilder___identify_module(self, var13);
}
var_mp = var14;
if (var_mp == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mp,((val*)NULL)) on <var_mp:nullable MModule> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_mp->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mp, var_other); /* == on <var_mp:nullable MModule(MModule)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_res, var_mp); /* Direct call array#ArraySet#add on <var_res:ArraySet[MModule]>*/
}
} else {
}
{
var20 = core__file___String____47d(var_dirname, var_name);
}
{
var21 = core__file___String___simplify_path(var20);
}
{
var22 = nitc__loader___ModelBuilder___identify_group(self, var21);
}
var_g = var22;
if (var_g == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_g, var_other); /* == on <var_g:nullable MGroup(MGroup)>*/
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
{
nitc__loader___ModelBuilder___scan_group(self, var_g); /* Direct call loader#ModelBuilder#scan_group on <self:ModelBuilder>*/
}
{
var28 = nitc__loader___MGroup___mmodules_by_name(var_g, var_name);
}
{
core___core__SimpleCollection___add_all(var_res, var28); /* Direct call abstract_collection#SimpleCollection#add_all on <var_res:ArraySet[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[String]>*/
}
{
var29 = core___core__ArraySet___core__abstract_collection__Collection__is_empty(var_res);
}
if (var29){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var30 = core___core__ArraySet___core__abstract_collection__Collection__length(var_res);
}
{
{ /* Inline kernel#Int#> (var30,1l) on <var30:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var33 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var34 = var30 > 1l;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var37 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (unlikely(varonce38==NULL)) {
var39 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "Error: conflicting module files for `";
var43 = core__abstract_text___CString___to_s_full(var42, 37l, 37l);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var39)->values[0]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "`: `";
var47 = core__abstract_text___CString___to_s_full(var46, 4l, 4l);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var39)->values[2]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "`";
var51 = core__abstract_text___CString___to_s_full(var50, 1l, 1l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var39)->values[4]=var49;
} else {
var39 = varonce38;
varonce38 = NULL;
}
((struct instance_core__NativeArray*)var39)->values[1]=var_name;
var52 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var52, 1l); /* Direct call array#Array#with_capacity on <var52:Array[String]>*/
}
var_53 = var52;
var_54 = var_res;
{
var55 = core___core__ArraySet___core__abstract_collection__Collection__iterator(var_54);
}
var_56 = var55;
for(;;) {
{
var57 = ((short int(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_56); /* is_ok on <var_56:Iterator[MModule]>*/
}
if (var57){
} else {
goto BREAK_label58;
}
{
var59 = ((val*(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_56); /* item on <var_56:Iterator[MModule]>*/
}
var_x = var59;
{
var61 = nitc___nitc__MModule___filepath(var_x);
}
if (var61!=NULL) {
var60 = var61;
} else {
{
var62 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_x);
}
var60 = var62;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_53, var60); /* Direct call array#AbstractArray#push on <var_53:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_56); /* next on <var_56:Iterator[MModule]>*/
}
}
BREAK_label58: (void)0;
{
((void(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_56); /* finish on <var_56:Iterator[MModule]>*/
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "`, `";
var66 = core__abstract_text___CString___to_s_full(var65, 4l, 4l);
var64 = var66;
varonce63 = var64;
}
{
var67 = core__abstract_text___Collection___join(var_53, var64, ((val*)NULL));
}
((struct instance_core__NativeArray*)var39)->values[3]=var67;
{
var68 = ((val*(*)(val* self))(var39->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var39); /* native_to_s on <var39:NativeArray[String]>*/
}
varonce38 = var39;
{
var69 = nitc___nitc__ToolContext___error(var35, var_location, var68);
}
} else {
}
{
var70 = core___core__ArraySet___core__abstract_collection__Collection__first(var_res);
}
var = var70;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#search_group_in_paths for (self: ModelBuilder, String, Collection[String]): ArraySet[MGroup] */
val* nitc__loader___ModelBuilder___search_group_in_paths(val* self, val* p0, val* p1) {
val* var /* : ArraySet[MGroup] */;
val* var_name /* var name: String */;
val* var_lookpaths /* var lookpaths: Collection[String] */;
val* var1 /* : ArraySet[MGroup] */;
val* var_res /* var res: ArraySet[MGroup] */;
val* var_ /* var : Collection[String] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : Iterator[String] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_dirname /* var dirname: String */;
val* var6 /* : String */;
val* var7 /* : nullable MGroup */;
val* var_mg /* var mg: nullable MGroup */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
var_name = p0;
var_lookpaths = p1;
var1 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MGroup);
{
core___core__ArraySet___core__kernel__Object__init(var1); /* Direct call array#ArraySet#init on <var1:ArraySet[MGroup]>*/
}
var_res = var1;
var_ = var_lookpaths;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[String]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:Iterator[String]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:Iterator[String]>*/
}
var_dirname = var5;
{
var6 = core__file___String____47d(var_dirname, var_name);
}
{
var7 = nitc__loader___ModelBuilder___identify_group(self, var6);
}
var_mg = var7;
if (var_mg == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mg,((val*)NULL)) on <var_mg:nullable MGroup> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_mg->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mg, var_other); /* == on <var_mg:nullable MGroup(MGroup)>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_res, var_mg); /* Direct call array#ArraySet#add on <var_res:ArraySet[MGroup]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:Iterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:Iterator[String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identified_modules_by_path for (self: ModelBuilder): HashMap[String, nullable MModule] */
val* nitc__loader___ModelBuilder___identified_modules_by_path(val* self) {
val* var /* : HashMap[String, nullable MModule] */;
val* var1 /* : HashMap[String, nullable MModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identified_modules for (self: ModelBuilder): Array[MModule] */
val* nitc__loader___ModelBuilder___identified_modules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules].val; /* _identified_modules on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 319);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#parsed_modules for (self: ModelBuilder): Array[MModule] */
val* nitc__loader___ModelBuilder___parsed_modules(val* self) {
val* var /* : Array[MModule] */;
val* var1 /* : Array[MModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___parsed_modules].val; /* _parsed_modules on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parsed_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 325);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#last_loader_error for (self: ModelBuilder): nullable String */
val* nitc__loader___ModelBuilder___last_loader_error(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val; /* _last_loader_error on <self:ModelBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#last_loader_error= for (self: ModelBuilder, nullable String) */
void nitc__loader___ModelBuilder___last_loader_error_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = p0; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL:;
}
/* method loader#ModelBuilder#identify_module for (self: ModelBuilder, String): nullable MModule */
val* nitc__loader___ModelBuilder___identify_module(val* self, val* p0) {
val* var /* : nullable MModule */;
val* var_path /* var path: String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Array[String] */;
val* var13 /* : Array[String] */;
val* var14 /* : nullable MModule */;
val* var_res /* var res: nullable MModule */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable MGroup */;
val* var_mgroup /* var mgroup: nullable MGroup */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable String */;
val* var28 /* : String */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : Text */;
val* var36 /* : String */;
val* var_owner_path /* var owner_path: String */;
short int var37 /* : Bool */;
val* var38 /* : SequenceRead[Char] */;
val* var39 /* : nullable Object */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : Array[String] */;
val* var_ids /* var ids: Array[String] */;
val* var46 /* : nullable Object */;
val* var47 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable Object */;
val* var54 /* : Array[MModule] */;
val* var_ms /* var ms: Array[MModule] */;
val* var_ /* var : Array[MModule] */;
val* var55 /* : IndexedIterator[nullable Object] */;
val* var_56 /* var : IndexedIterator[MModule] */;
short int var57 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var60 /* : String */;
short int var61 /* : Bool */;
long var62 /* : Int */;
long var64 /* : Int */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var68 /* : Bool */;
long var69 /* : Int */;
long var71 /* : Int */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : nullable Object */;
long var76 /* : Int */;
long var78 /* : Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
short int var85 /* : Bool */;
val* var86 /* : Array[String] */;
val* var_l /* var l: Array[String] */;
val* var_87 /* var : Array[MModule] */;
val* var88 /* : IndexedIterator[nullable Object] */;
val* var_89 /* var : IndexedIterator[MModule] */;
short int var90 /* : Bool */;
val* var92 /* : nullable Object */;
val* var_m93 /* var m: MModule */;
val* var94 /* : nullable String */;
val* var_fp /* var fp: nullable String */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
val* var101 /* : NativeArray[String] */;
static val* varonce100;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var116 /* : NativeArray[String] */;
static val* varonce115;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : CString */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
val* var125 /* : String */;
val* var126 /* : String */;
val* var128 /* : NativeArray[String] */;
static val* varonce127;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
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
val* var148 /* : BestDistance[String] */;
long var149 /* : Int */;
long var150 /* : Int */;
short int var152 /* : Bool */;
int cltype153;
int idtype154;
const char* var_class_name155;
long var156 /* : Int */;
val* var_bests /* var bests: BestDistance[String] */;
val* var157 /* : MPackage */;
val* var159 /* : MPackage */;
val* var160 /* : POSet[MGroup] */;
val* var162 /* : POSet[MGroup] */;
val* var_163 /* var : POSet[MGroup] */;
val* var164 /* : Iterator[nullable Object] */;
val* var_165 /* var : Iterator[MGroup] */;
short int var166 /* : Bool */;
val* var168 /* : nullable Object */;
val* var_sg /* var sg: MGroup */;
val* var169 /* : Array[MModule] */;
val* var171 /* : Array[MModule] */;
val* var_172 /* var : Array[MModule] */;
val* var173 /* : IndexedIterator[nullable Object] */;
val* var_174 /* var : IndexedIterator[MModule] */;
short int var175 /* : Bool */;
val* var177 /* : nullable Object */;
val* var_m178 /* var m: MModule */;
val* var179 /* : String */;
long var180 /* : Int */;
long var_d /* var d: Int */;
val* var181 /* : String */;
short int var182 /* : Bool */;
val* var184 /* : NativeArray[String] */;
static val* varonce183;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : CString */;
val* var192 /* : String */;
val* var193 /* : String */;
val* var_last_loader_error /* var last_loader_error: String */;
val* var194 /* : Set[nullable Object] */;
val* var196 /* : Set[nullable Object] */;
short int var197 /* : Bool */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
val* var202 /* : Set[nullable Object] */;
val* var204 /* : Set[nullable Object] */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : CString */;
val* var208 /* : String */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : CString */;
val* var212 /* : String */;
val* var213 /* : String */;
val* var214 /* : Text */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : CString */;
val* var218 /* : String */;
val* var219 /* : Text */;
val* var220 /* : Text */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
val* var224 /* : HashMap[String, nullable MModule] */;
val* var226 /* : HashMap[String, nullable MModule] */;
short int var227 /* : Bool */;
val* var228 /* : HashMap[String, nullable MModule] */;
val* var230 /* : HashMap[String, nullable MModule] */;
val* var231 /* : nullable Object */;
val* var232 /* : String */;
val* var_rp /* var rp: String */;
val* var233 /* : HashMap[String, nullable MModule] */;
val* var235 /* : HashMap[String, nullable MModule] */;
short int var236 /* : Bool */;
val* var237 /* : HashMap[String, nullable MModule] */;
val* var239 /* : HashMap[String, nullable MModule] */;
val* var240 /* : nullable Object */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : String */;
val* var_pn /* var pn: String */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : CString */;
val* var249 /* : String */;
val* var250 /* : String */;
val* var251 /* : String */;
val* var_mgrouppath /* var mgrouppath: String */;
val* var252 /* : nullable MGroup */;
val* var_mgroup253 /* var mgroup: nullable MGroup */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
val* var259 /* : MPackage */;
val* var261 /* : MPackage */;
val* var_mpackage /* var mpackage: MPackage */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
val* var264 /* : ToolContext */;
val* var266 /* : ToolContext */;
val* var268 /* : NativeArray[String] */;
static val* varonce267;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : CString */;
val* var272 /* : String */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : CString */;
val* var276 /* : String */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : CString */;
val* var280 /* : String */;
val* var281 /* : String */;
val* var282 /* : String */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
val* var_other286 /* var other: nullable Object */;
short int var287 /* : Bool */;
short int var289 /* : Bool */;
val* var290 /* : Location */;
val* var_loc /* var loc: Location */;
val* var291 /* : MPackage */;
val* var292 /* : Model */;
val* var294 /* : Model */;
val* var_mpackage295 /* var mpackage: MPackage */;
val* var296 /* : MGroup */;
val* var298 /* : ToolContext */;
val* var300 /* : ToolContext */;
val* var302 /* : NativeArray[String] */;
static val* varonce301;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : CString */;
val* var306 /* : String */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : CString */;
val* var310 /* : String */;
val* var311 /* : String */;
val* var312 /* : String */;
val* var314 /* : NativeArray[String] */;
static val* varonce313;
static val* varonce315;
val* var316 /* : String */;
char* var317 /* : CString */;
val* var318 /* : String */;
val* var319 /* : String */;
val* var320 /* : String */;
val* var_inipath /* var inipath: String */;
short int var321 /* : Bool */;
val* var322 /* : ConfigTree */;
val* var_ini /* var ini: ConfigTree */;
val* var324 /* : Location */;
val* var_loc325 /* var loc: Location */;
val* var326 /* : MModule */;
val* var327 /* : Model */;
val* var329 /* : Model */;
val* var_res330 /* var res: MModule */;
val* var331 /* : HashMap[String, nullable MModule] */;
val* var333 /* : HashMap[String, nullable MModule] */;
val* var334 /* : HashMap[String, nullable MModule] */;
val* var336 /* : HashMap[String, nullable MModule] */;
val* var337 /* : Array[MModule] */;
val* var339 /* : Array[MModule] */;
var_path = p0;
{
{ /* Inline loader#ModelBuilder#last_loader_error= (self,((val*)NULL)) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = ((val*)NULL); /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = ".nit";
var4 = core__abstract_text___CString___to_s_full(var3, 4l, 4l);
var2 = var4;
varonce = var2;
}
{
var5 = core___core__Text___has_suffix(var_path, var2);
}
var6 = !var5;
if (var6){
{
var7 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__chars]))(var_path); /* chars on <var_path:String>*/
}
{
var8 = (val*)((long)('/')<<2|2);
var9 = ((short int(*)(val* self, val* p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var7, var8); /* has on <var7:SequenceRead[Char]>*/
}
var10 = !var9;
if (var10){
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var13 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc__loader___ModelBuilder___search_module_in_paths(self, ((val*)NULL), var_path, var11);
}
var_res = var14;
if (var_res == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable MModule> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable MModule(MModule)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
{
var20 = core__file___Text___file_exists(var_path);
}
if (var20){
{
var21 = nitc__loader___ModelBuilder___identify_group(self, var_path);
}
var_mgroup = var21;
if (var_mgroup == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
var27 = nitc___nitc__MGroup___filepath(var_mgroup);
}
{
{ /* Inline mpackage#MGroup#name (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var30 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 70);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = ".nit";
var34 = core__abstract_text___CString___to_s_full(var33, 4l, 4l);
var32 = var34;
varonce31 = var32;
}
{
var35 = ((val*(*)(val* self, val* p0))(var28->class->vft[COLOR_core__abstract_text__Text___43d]))(var28, var32); /* + on <var28:String>*/
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 370);
fatal_exit(1);
} else {
var36 = core__file___String___join_path(var27, var35);
}
var_owner_path = var36;
{
var37 = core__file___Text___file_exists(var_owner_path);
}
if (var37){
var_path = var_owner_path;
goto BREAK_label;
} else {
}
} else {
}
} else {
}
{
var38 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__chars]))(var_path); /* chars on <var_path:String>*/
}
{
var39 = (val*)((long)(':')<<2|2);
var40 = ((short int(*)(val* self, val* p0))((((long)var38&3)?class_info[((long)var38&3)]:var38->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var38, var39); /* has on <var38:SequenceRead[Char]>*/
}
if (var40){
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "::";
var44 = core__abstract_text___CString___to_s_full(var43, 2l, 2l);
var42 = var44;
varonce41 = var42;
}
{
var45 = core__string_search___Text___split(var_path, var42);
}
var_ids = var45;
{
var46 = core___core__SequenceRead___Collection__first(var_ids);
}
{
var47 = nitc__loader___ModelBuilder___identify_group(self, var46);
}
var_g = var47;
if (var_g == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
var51 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_g, var_other); /* == on <var_g:nullable MGroup(MGroup)>*/
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
{
nitc__loader___ModelBuilder___scan_group(self, var_g); /* Direct call loader#ModelBuilder#scan_group on <self:ModelBuilder>*/
}
{
var53 = core___core__SequenceRead___last(var_ids);
}
{
var54 = nitc__loader___MGroup___mmodules_by_name(var_g, var53);
}
var_ms = var54;
var_ = var_ms;
{
var55 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_56 = var55;
for(;;) {
{
var57 = ((short int(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_56); /* is_ok on <var_56:IndexedIterator[MModule]>*/
}
if (var57){
} else {
goto BREAK_label58;
}
{
var59 = ((val*(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_56); /* item on <var_56:IndexedIterator[MModule]>*/
}
var_m = var59;
{
var60 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_m);
}
{
var61 = ((short int(*)(val* self, val* p0))(var60->class->vft[COLOR_core__kernel__Object___61d_61d]))(var60, var_path); /* == on <var60:String>*/
}
if (var61){
var = var_m;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_56); /* next on <var_56:IndexedIterator[MModule]>*/
}
}
BREAK_label58: (void)0;
{
((void(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_56); /* finish on <var_56:IndexedIterator[MModule]>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_ids) on <var_ids:Array[String]> */
var64 = var_ids->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_ids:Array[String]> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var62,2l) on <var62:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var67 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var68 = var62 <= 2l;
var65 = var68;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (var65){
{
{ /* Inline array#AbstractArrayRead#length (var_ms) on <var_ms:Array[MModule]> */
var71 = var_ms->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_ms:Array[MModule]> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var69,1l) on <var69:Int> */
var74 = var69 == 1l;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
if (var72){
{
var75 = core___core__SequenceRead___Collection__first(var_ms);
}
var = var75;
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_ms) on <var_ms:Array[MModule]> */
var78 = var_ms->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_ms:Array[MModule]> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var76,1l) on <var76:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var81 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var85 = var76 > 1l;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
var86 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var86); /* Direct call array#Array#init on <var86:Array[String]>*/
}
var_l = var86;
var_87 = var_ms;
{
var88 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_87);
}
var_89 = var88;
for(;;) {
{
var90 = ((short int(*)(val* self))((((long)var_89&3)?class_info[((long)var_89&3)]:var_89->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_89); /* is_ok on <var_89:IndexedIterator[MModule]>*/
}
if (var90){
} else {
goto BREAK_label91;
}
{
var92 = ((val*(*)(val* self))((((long)var_89&3)?class_info[((long)var_89&3)]:var_89->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_89); /* item on <var_89:IndexedIterator[MModule]>*/
}
var_m93 = var92;
{
var94 = nitc___nitc__MModule___filepath(var_m93);
}
var_fp = var94;
if (var_fp == NULL) {
var95 = 0; /* is null */
} else {
var95 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_fp,((val*)NULL)) on <var_fp:nullable String> */
var_other = ((val*)NULL);
{
var98 = ((short int(*)(val* self, val* p0))(var_fp->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_fp, var_other); /* == on <var_fp:nullable String(String)>*/
}
var99 = !var98;
var96 = var99;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
if (var95){
if (unlikely(varonce100==NULL)) {
var101 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = " (";
var105 = core__abstract_text___CString___to_s_full(var104, 2l, 2l);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var101)->values[0]=var103;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = ")";
var109 = core__abstract_text___CString___to_s_full(var108, 1l, 1l);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var101)->values[2]=var107;
} else {
var101 = varonce100;
varonce100 = NULL;
}
((struct instance_core__NativeArray*)var101)->values[1]=var_fp;
{
var110 = ((val*(*)(val* self))(var101->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
var_fp = var110;
} else {
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "";
var114 = core__abstract_text___CString___to_s_full(var113, 0l, 0l);
var112 = var114;
varonce111 = var112;
}
var_fp = var112;
}
if (unlikely(varonce115==NULL)) {
var116 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "`";
var120 = core__abstract_text___CString___to_s_full(var119, 1l, 1l);
var118 = var120;
varonce117 = var118;
}
((struct instance_core__NativeArray*)var116)->values[0]=var118;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "`";
var124 = core__abstract_text___CString___to_s_full(var123, 1l, 1l);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var116)->values[2]=var122;
} else {
var116 = varonce115;
varonce115 = NULL;
}
{
var125 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_m93);
}
((struct instance_core__NativeArray*)var116)->values[1]=var125;
((struct instance_core__NativeArray*)var116)->values[3]=var_fp;
{
var126 = ((val*(*)(val* self))(var116->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var116); /* native_to_s on <var116:NativeArray[String]>*/
}
varonce115 = var116;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_l, var126); /* Direct call array#Array#add on <var_l:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_89&3)?class_info[((long)var_89&3)]:var_89->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_89); /* next on <var_89:IndexedIterator[MModule]>*/
}
}
BREAK_label91: (void)0;
{
((void(*)(val* self))((((long)var_89&3)?class_info[((long)var_89&3)]:var_89->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_89); /* finish on <var_89:IndexedIterator[MModule]>*/
}
if (unlikely(varonce127==NULL)) {
var128 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "Error: conflicting module for `";
var132 = core__abstract_text___CString___to_s_full(var131, 31l, 31l);
var130 = var132;
varonce129 = var130;
}
((struct instance_core__NativeArray*)var128)->values[0]=var130;
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "`: ";
var136 = core__abstract_text___CString___to_s_full(var135, 3l, 3l);
var134 = var136;
varonce133 = var134;
}
((struct instance_core__NativeArray*)var128)->values[2]=var134;
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = " ";
var140 = core__abstract_text___CString___to_s_full(var139, 1l, 1l);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var128)->values[4]=var138;
} else {
var128 = varonce127;
varonce127 = NULL;
}
((struct instance_core__NativeArray*)var128)->values[1]=var_path;
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = ", ";
var144 = core__abstract_text___CString___to_s_full(var143, 2l, 2l);
var142 = var144;
varonce141 = var142;
}
{
var145 = core__abstract_text___Collection___join(var_l, var142, ((val*)NULL));
}
((struct instance_core__NativeArray*)var128)->values[3]=var145;
{
var146 = ((val*(*)(val* self))(var128->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var128); /* native_to_s on <var128:NativeArray[String]>*/
}
varonce127 = var128;
{
{ /* Inline loader#ModelBuilder#last_loader_error= (self,var146) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = var146; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL147:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
}
var148 = NEW_more_collections__BestDistance(&type_more_collections__BestDistance__core__String);
{
var149 = ((long(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__length]))(var_path); /* length on <var_path:String>*/
}
{
{ /* Inline kernel#Int#/ (var149,2l) on <var149:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var152 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var152)) {
var_class_name155 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name155);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var156 = var149 / 2l;
var150 = var156;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
{
((void(*)(val* self, long p0))(var148->class->vft[COLOR_more_collections__BestDistance__best_distance_61d]))(var148, var150); /* best_distance= on <var148:BestDistance[String]>*/
}
{
((void(*)(val* self))(var148->class->vft[COLOR_core__kernel__Object__init]))(var148); /* init on <var148:BestDistance[String]>*/
}
var_bests = var148;
{
{ /* Inline mpackage#MGroup#mpackage (var_g) on <var_g:nullable MGroup(MGroup)> */
var159 = var_g->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
{ /* Inline mpackage#MPackage#mgroups (var157) on <var157:MPackage> */
var162 = var157->attrs[COLOR_nitc__mpackage__MPackage___mgroups].val; /* _mgroups on <var157:MPackage> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 42);
fatal_exit(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
var_163 = var160;
{
var164 = poset___poset__POSet___core__abstract_collection__Collection__iterator(var_163);
}
var_165 = var164;
for(;;) {
{
var166 = ((short int(*)(val* self))((((long)var_165&3)?class_info[((long)var_165&3)]:var_165->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_165); /* is_ok on <var_165:Iterator[MGroup]>*/
}
if (var166){
} else {
goto BREAK_label167;
}
{
var168 = ((val*(*)(val* self))((((long)var_165&3)?class_info[((long)var_165&3)]:var_165->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_165); /* item on <var_165:Iterator[MGroup]>*/
}
var_sg = var168;
{
{ /* Inline mmodule#MGroup#mmodules (var_sg) on <var_sg:MGroup> */
var171 = var_sg->attrs[COLOR_nitc__mmodule__MGroup___mmodules].val; /* _mmodules on <var_sg:MGroup> */
if (unlikely(var171 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 54);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
var_172 = var169;
{
var173 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_172);
}
var_174 = var173;
for(;;) {
{
var175 = ((short int(*)(val* self))((((long)var_174&3)?class_info[((long)var_174&3)]:var_174->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_174); /* is_ok on <var_174:IndexedIterator[MModule]>*/
}
if (var175){
} else {
goto BREAK_label176;
}
{
var177 = ((val*(*)(val* self))((((long)var_174&3)?class_info[((long)var_174&3)]:var_174->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_174); /* item on <var_174:IndexedIterator[MModule]>*/
}
var_m178 = var177;
{
var179 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_m178);
}
{
var180 = core___core__Text___levenshtein_distance(var_path, var179);
}
var_d = var180;
{
var181 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_m178);
}
{
var182 = more_collections___more_collections__BestDistance___update(var_bests, var_d, var181);
}
{
((void(*)(val* self))((((long)var_174&3)?class_info[((long)var_174&3)]:var_174->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_174); /* next on <var_174:IndexedIterator[MModule]>*/
}
}
BREAK_label176: (void)0;
{
((void(*)(val* self))((((long)var_174&3)?class_info[((long)var_174&3)]:var_174->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_174); /* finish on <var_174:IndexedIterator[MModule]>*/
}
{
((void(*)(val* self))((((long)var_165&3)?class_info[((long)var_165&3)]:var_165->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_165); /* next on <var_165:Iterator[MGroup]>*/
}
}
BREAK_label167: (void)0;
{
((void(*)(val* self))((((long)var_165&3)?class_info[((long)var_165&3)]:var_165->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_165); /* finish on <var_165:Iterator[MGroup]>*/
}
if (unlikely(varonce183==NULL)) {
var184 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "Error: cannot find module `";
var188 = core__abstract_text___CString___to_s_full(var187, 27l, 27l);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var184)->values[0]=var186;
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "`.";
var192 = core__abstract_text___CString___to_s_full(var191, 2l, 2l);
var190 = var192;
varonce189 = var190;
}
((struct instance_core__NativeArray*)var184)->values[2]=var190;
} else {
var184 = varonce183;
varonce183 = NULL;
}
((struct instance_core__NativeArray*)var184)->values[1]=var_path;
{
var193 = ((val*(*)(val* self))(var184->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var184); /* native_to_s on <var184:NativeArray[String]>*/
}
varonce183 = var184;
var_last_loader_error = var193;
{
{ /* Inline more_collections#BestDistance#best_items (var_bests) on <var_bests:BestDistance[String]> */
var196 = var_bests->attrs[COLOR_more_collections__BestDistance___best_items].val; /* _best_items on <var_bests:BestDistance[String]> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _best_items");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 562);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
var197 = core___core__Collection___not_empty(var194);
}
if (var197){
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = " Did you mean ";
var201 = core__abstract_text___CString___to_s_full(var200, 14l, 14l);
var199 = var201;
varonce198 = var199;
}
{
{ /* Inline more_collections#BestDistance#best_items (var_bests) on <var_bests:BestDistance[String]> */
var204 = var_bests->attrs[COLOR_more_collections__BestDistance___best_items].val; /* _best_items on <var_bests:BestDistance[String]> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _best_items");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 562);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = ", ";
var208 = core__abstract_text___CString___to_s_full(var207, 2l, 2l);
var206 = var208;
varonce205 = var206;
}
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = " or ";
var212 = core__abstract_text___CString___to_s_full(var211, 4l, 4l);
var210 = var212;
varonce209 = var210;
}
{
var213 = core__abstract_text___Collection___join(var202, var206, var210);
}
{
var214 = ((val*(*)(val* self, val* p0))(var199->class->vft[COLOR_core__abstract_text__Text___43d]))(var199, var213); /* + on <var199:String>*/
}
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = "?";
var218 = core__abstract_text___CString___to_s_full(var217, 1l, 1l);
var216 = var218;
varonce215 = var216;
}
{
var219 = ((val*(*)(val* self, val* p0))(var214->class->vft[COLOR_core__abstract_text__Text___43d]))(var214, var216); /* + on <var214:Text(String)>*/
}
{
var220 = ((val*(*)(val* self, val* p0))(var_last_loader_error->class->vft[COLOR_core__abstract_text__Text___43d]))(var_last_loader_error, var219); /* + on <var_last_loader_error:String>*/
}
var_last_loader_error = var220;
} else {
}
{
{ /* Inline loader#ModelBuilder#last_loader_error= (self,var_last_loader_error) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = var_last_loader_error; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL221:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
BREAK_label: (void)0;
} else {
}
{
var222 = core__file___Text___file_exists(var_path);
}
var223 = !var222;
if (var223){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModelBuilder#identified_modules_by_path (self) on <self:ModelBuilder> */
var226 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var226 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var224 = var226;
RET_LABEL225:(void)0;
}
}
{
var227 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var224, var_path);
}
if (var227){
{
{ /* Inline loader#ModelBuilder#identified_modules_by_path (self) on <self:ModelBuilder> */
var230 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var230 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
var231 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var228, var_path);
}
var = var231;
goto RET_LABEL;
} else {
}
{
var232 = nitc__loader___ModelBuilder___module_absolute_path(self, var_path);
}
var_rp = var232;
{
{ /* Inline loader#ModelBuilder#identified_modules_by_path (self) on <self:ModelBuilder> */
var235 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
{
var236 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var233, var_rp);
}
if (var236){
{
{ /* Inline loader#ModelBuilder#identified_modules_by_path (self) on <self:ModelBuilder> */
var239 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
{
var240 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var237, var_rp);
}
var = var240;
goto RET_LABEL;
} else {
}
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = ".nit";
var244 = core__abstract_text___CString___to_s_full(var243, 4l, 4l);
var242 = var244;
varonce241 = var242;
}
{
var245 = ((val*(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__file__String__basename]))(var_path, var242); /* basename on <var_path:String>*/
}
var_pn = var245;
if (likely(varonce246!=NULL)) {
var247 = varonce246;
} else {
var248 = "..";
var249 = core__abstract_text___CString___to_s_full(var248, 2l, 2l);
var247 = var249;
varonce246 = var247;
}
{
var250 = core__file___String___join_path(var_path, var247);
}
{
var251 = core__file___String___simplify_path(var250);
}
var_mgrouppath = var251;
{
var252 = nitc__loader___ModelBuilder___identify_group(self, var_mgrouppath);
}
var_mgroup253 = var252;
if (var_mgroup253 == NULL) {
var254 = 0; /* is null */
} else {
var254 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup253,((val*)NULL)) on <var_mgroup253:nullable MGroup> */
var_other = ((val*)NULL);
{
var257 = ((short int(*)(val* self, val* p0))(var_mgroup253->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup253, var_other); /* == on <var_mgroup253:nullable MGroup(MGroup)>*/
}
var258 = !var257;
var255 = var258;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
var254 = var255;
}
if (var254){
{
{ /* Inline mpackage#MGroup#mpackage (var_mgroup253) on <var_mgroup253:nullable MGroup(MGroup)> */
var261 = var_mgroup253->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup253:nullable MGroup(MGroup)> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
var_mpackage = var259;
{
var262 = nitc__loader___MPackage___accept(var_mpackage, var_path);
}
var263 = !var262;
if (var263){
var_mgroup253 = ((val*)NULL);
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var266 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
if (unlikely(varonce267==NULL)) {
var268 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = "module `";
var272 = core__abstract_text___CString___to_s_full(var271, 8l, 8l);
var270 = var272;
varonce269 = var270;
}
((struct instance_core__NativeArray*)var268)->values[0]=var270;
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "` excluded from package `";
var276 = core__abstract_text___CString___to_s_full(var275, 25l, 25l);
var274 = var276;
varonce273 = var274;
}
((struct instance_core__NativeArray*)var268)->values[2]=var274;
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "`";
var280 = core__abstract_text___CString___to_s_full(var279, 1l, 1l);
var278 = var280;
varonce277 = var278;
}
((struct instance_core__NativeArray*)var268)->values[4]=var278;
} else {
var268 = varonce267;
varonce267 = NULL;
}
((struct instance_core__NativeArray*)var268)->values[1]=var_path;
{
var281 = ((val*(*)(val* self))(var_mpackage->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpackage); /* to_s on <var_mpackage:MPackage>*/
}
((struct instance_core__NativeArray*)var268)->values[3]=var281;
{
var282 = ((val*(*)(val* self))(var268->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var268); /* native_to_s on <var268:NativeArray[String]>*/
}
varonce267 = var268;
{
nitc___nitc__ToolContext___info(var264, var282, 2l); /* Direct call toolcontext#ToolContext#info on <var264:ToolContext>*/
}
} else {
}
} else {
}
if (var_mgroup253 == NULL) {
var283 = 1; /* is null */
} else {
var283 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mgroup253,((val*)NULL)) on <var_mgroup253:nullable MGroup> */
var_other286 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mgroup253,var_other286) on <var_mgroup253:nullable MGroup(MGroup)> */
var289 = var_mgroup253 == var_other286;
var287 = var289;
goto RET_LABEL288;
RET_LABEL288:(void)0;
}
}
var284 = var287;
goto RET_LABEL285;
RET_LABEL285:(void)0;
}
var283 = var284;
}
if (var283){
var290 = NEW_nitc__Location(&type_nitc__Location);
{
nitc___nitc__Location___opaque_file(var290, var_path); /* Direct call location#Location#opaque_file on <var290:Location>*/
}
var_loc = var290;
var291 = NEW_nitc__MPackage(&type_nitc__MPackage);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var294 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var294 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var292 = var294;
RET_LABEL293:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var291->class->vft[COLOR_nitc__mpackage__MPackage__name_61d]))(var291, var_pn); /* name= on <var291:MPackage>*/
}
{
((void(*)(val* self, val* p0))(var291->class->vft[COLOR_nitc__mpackage__MPackage__model_61d]))(var291, var292); /* model= on <var291:MPackage>*/
}
{
((void(*)(val* self, val* p0))(var291->class->vft[COLOR_nitc__mpackage__MPackage__location_61d]))(var291, var_loc); /* location= on <var291:MPackage>*/
}
{
((void(*)(val* self))(var291->class->vft[COLOR_core__kernel__Object__init]))(var291); /* init on <var291:MPackage>*/
}
var_mpackage295 = var291;
var296 = NEW_nitc__MGroup(&type_nitc__MGroup);
{
((void(*)(val* self, val* p0))(var296->class->vft[COLOR_nitc__mpackage__MGroup__name_61d]))(var296, var_pn); /* name= on <var296:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var296->class->vft[COLOR_nitc__mpackage__MGroup__location_61d]))(var296, var_loc); /* location= on <var296:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var296->class->vft[COLOR_nitc__mpackage__MGroup__mpackage_61d]))(var296, var_mpackage295); /* mpackage= on <var296:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var296->class->vft[COLOR_nitc__mpackage__MGroup__parent_61d]))(var296, ((val*)NULL)); /* parent= on <var296:MGroup>*/
}
{
((void(*)(val* self))(var296->class->vft[COLOR_core__kernel__Object__init]))(var296); /* init on <var296:MGroup>*/
}
var_mgroup253 = var296;
{
{ /* Inline mpackage#MPackage#root= (var_mpackage295,var_mgroup253) on <var_mpackage295:MPackage> */
var_mpackage295->attrs[COLOR_nitc__mpackage__MPackage___root].val = var_mgroup253; /* _root on <var_mpackage295:MPackage> */
RET_LABEL297:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var300 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var300 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var298 = var300;
RET_LABEL299:(void)0;
}
}
if (unlikely(varonce301==NULL)) {
var302 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = "found singleton package `";
var306 = core__abstract_text___CString___to_s_full(var305, 25l, 25l);
var304 = var306;
varonce303 = var304;
}
((struct instance_core__NativeArray*)var302)->values[0]=var304;
if (likely(varonce307!=NULL)) {
var308 = varonce307;
} else {
var309 = "` at ";
var310 = core__abstract_text___CString___to_s_full(var309, 5l, 5l);
var308 = var310;
varonce307 = var308;
}
((struct instance_core__NativeArray*)var302)->values[2]=var308;
} else {
var302 = varonce301;
varonce301 = NULL;
}
((struct instance_core__NativeArray*)var302)->values[1]=var_pn;
((struct instance_core__NativeArray*)var302)->values[3]=var_path;
{
var311 = ((val*(*)(val* self))(var302->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var302); /* native_to_s on <var302:NativeArray[String]>*/
}
varonce301 = var302;
{
nitc___nitc__ToolContext___info(var298, var311, 2l); /* Direct call toolcontext#ToolContext#info on <var298:ToolContext>*/
}
{
var312 = core__file___String___dirname(var_path);
}
if (unlikely(varonce313==NULL)) {
var314 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce315!=NULL)) {
var316 = varonce315;
} else {
var317 = ".ini";
var318 = core__abstract_text___CString___to_s_full(var317, 4l, 4l);
var316 = var318;
varonce315 = var316;
}
((struct instance_core__NativeArray*)var314)->values[1]=var316;
} else {
var314 = varonce313;
varonce313 = NULL;
}
((struct instance_core__NativeArray*)var314)->values[0]=var_pn;
{
var319 = ((val*(*)(val* self))(var314->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var314); /* native_to_s on <var314:NativeArray[String]>*/
}
varonce313 = var314;
{
var320 = core__file___String____47d(var312, var319);
}
var_inipath = var320;
{
var321 = core__file___Text___file_exists(var_inipath);
}
if (var321){
var322 = NEW_ini__ConfigTree(&type_ini__ConfigTree);
{
((void(*)(val* self, val* p0))(var322->class->vft[COLOR_ini__ConfigTree__ini_file_61d]))(var322, var_inipath); /* ini_file= on <var322:ConfigTree>*/
}
{
((void(*)(val* self))(var322->class->vft[COLOR_core__kernel__Object__init]))(var322); /* init on <var322:ConfigTree>*/
}
var_ini = var322;
{
{ /* Inline loader#MPackage#ini= (var_mpackage295,var_ini) on <var_mpackage295:MPackage> */
var_mpackage295->attrs[COLOR_nitc__loader__MPackage___ini].val = var_ini; /* _ini on <var_mpackage295:MPackage> */
RET_LABEL323:(void)0;
}
}
} else {
}
} else {
}
var324 = NEW_nitc__Location(&type_nitc__Location);
{
nitc___nitc__Location___opaque_file(var324, var_path); /* Direct call location#Location#opaque_file on <var324:Location>*/
}
var_loc325 = var324;
var326 = NEW_nitc__MModule(&type_nitc__MModule);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var329 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var329 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var327 = var329;
RET_LABEL328:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var326->class->vft[COLOR_nitc__mmodule__MModule__model_61d]))(var326, var327); /* model= on <var326:MModule>*/
}
{
((void(*)(val* self, val* p0))(var326->class->vft[COLOR_nitc__mmodule__MModule__mgroup_61d]))(var326, var_mgroup253); /* mgroup= on <var326:MModule>*/
}
{
((void(*)(val* self, val* p0))(var326->class->vft[COLOR_nitc__mmodule__MModule__name_61d]))(var326, var_pn); /* name= on <var326:MModule>*/
}
{
((void(*)(val* self, val* p0))(var326->class->vft[COLOR_nitc__mmodule__MModule__location_61d]))(var326, var_loc325); /* location= on <var326:MModule>*/
}
{
((void(*)(val* self))(var326->class->vft[COLOR_core__kernel__Object__init]))(var326); /* init on <var326:MModule>*/
}
var_res330 = var326;
{
{ /* Inline loader#ModelBuilder#identified_modules_by_path (self) on <self:ModelBuilder> */
var333 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var333 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var331, var_rp, var_res330); /* Direct call hash_collection#HashMap#[]= on <var331:HashMap[String, nullable MModule]>*/
}
{
{ /* Inline loader#ModelBuilder#identified_modules_by_path (self) on <self:ModelBuilder> */
var336 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val; /* _identified_modules_by_path on <self:ModelBuilder> */
if (unlikely(var336 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules_by_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 316);
fatal_exit(1);
}
var334 = var336;
RET_LABEL335:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var334, var_path, var_res330); /* Direct call hash_collection#HashMap#[]= on <var334:HashMap[String, nullable MModule]>*/
}
{
{ /* Inline loader#ModelBuilder#identified_modules (self) on <self:ModelBuilder> */
var339 = self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules].val; /* _identified_modules on <self:ModelBuilder> */
if (unlikely(var339 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _identified_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 319);
fatal_exit(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var337, var_res330); /* Direct call array#Array#add on <var337:Array[MModule]>*/
}
var = var_res330;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#mgroups for (self: ModelBuilder): HashMap[String, nullable MGroup] */
val* nitc__loader___ModelBuilder___mgroups(val* self) {
val* var /* : HashMap[String, nullable MGroup] */;
val* var1 /* : HashMap[String, nullable MGroup] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#identify_group for (self: ModelBuilder, String): nullable MGroup */
val* nitc__loader___ModelBuilder___identify_group(val* self, val* p0) {
val* var /* : nullable MGroup */;
val* var_dirpath /* var dirpath: String */;
val* var2 /* : nullable FileStat */;
val* var_stat /* var stat: nullable FileStat */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : SequenceRead[Char] */;
val* var13 /* : nullable Object */;
short int var14 /* : Bool */;
val* var15 /* : Array[String] */;
val* var17 /* : Array[String] */;
val* var_18 /* var : Array[String] */;
val* var19 /* : IndexedIterator[nullable Object] */;
val* var_20 /* var : IndexedIterator[String] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_p /* var p: String */;
val* var23 /* : String */;
val* var_try /* var try: String */;
val* var24 /* : nullable FileStat */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var_other28 /* var other: nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : NativeArray[String] */;
static val* varonce;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var44 /* : String */;
val* var_rdp /* var rdp: String */;
val* var45 /* : HashMap[String, nullable MGroup] */;
val* var47 /* : HashMap[String, nullable MGroup] */;
short int var48 /* : Bool */;
val* var49 /* : HashMap[String, nullable MGroup] */;
val* var51 /* : HashMap[String, nullable MGroup] */;
val* var52 /* : nullable Object */;
val* var53 /* : String */;
val* var_pn /* var pn: String */;
val* var_ini /* var ini: nullable Object */;
val* var_parent /* var parent: nullable Object */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var_inipath /* var inipath: String */;
short int var59 /* : Bool */;
val* var60 /* : ConfigTree */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
short int var71 /* : Bool */;
val* var72 /* : HashMap[String, nullable MGroup] */;
val* var74 /* : HashMap[String, nullable MGroup] */;
val* var76 /* : NativeArray[String] */;
static val* varonce75;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : String */;
short int var92 /* : Bool */;
val* var93 /* : HashMap[String, nullable MGroup] */;
val* var95 /* : HashMap[String, nullable MGroup] */;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
val* var106 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var_parentpath /* var parentpath: String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : String */;
val* var_stopper /* var stopper: String */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
val* var121 /* : nullable MGroup */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
val* var127 /* : MPackage */;
val* var129 /* : MPackage */;
val* var_mpackage /* var mpackage: MPackage */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
val* var132 /* : ToolContext */;
val* var134 /* : ToolContext */;
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
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : String */;
val* var150 /* : String */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var156 /* : Bool */;
val* var157 /* : HashMap[String, nullable MGroup] */;
val* var159 /* : HashMap[String, nullable MGroup] */;
val* var161 /* : NativeArray[String] */;
static val* varonce160;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : CString */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : CString */;
val* var169 /* : String */;
val* var170 /* : String */;
val* var172 /* : Location */;
val* var_loc /* var loc: Location */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : nullable String */;
val* var190 /* : MPackage */;
val* var191 /* : Model */;
val* var193 /* : Model */;
val* var_mpackage194 /* var mpackage: MPackage */;
val* var195 /* : MGroup */;
val* var_mgroup /* var mgroup: nullable Object */;
val* var197 /* : ToolContext */;
val* var199 /* : ToolContext */;
val* var201 /* : NativeArray[String] */;
static val* varonce200;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : CString */;
val* var205 /* : String */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : CString */;
val* var209 /* : String */;
val* var210 /* : String */;
val* var211 /* : String */;
val* var213 /* : MGroup */;
val* var214 /* : MPackage */;
val* var216 /* : MPackage */;
val* var217 /* : ToolContext */;
val* var219 /* : ToolContext */;
val* var221 /* : NativeArray[String] */;
static val* varonce220;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : CString */;
val* var225 /* : String */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : CString */;
val* var229 /* : String */;
val* var230 /* : String */;
val* var231 /* : String */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : CString */;
val* var235 /* : String */;
val* var236 /* : String */;
val* var_readme /* var readme: String */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : CString */;
val* var242 /* : String */;
val* var243 /* : String */;
short int var244 /* : Bool */;
val* var245 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
val* var248 /* : HashMap[String, nullable MGroup] */;
val* var250 /* : HashMap[String, nullable MGroup] */;
var_dirpath = p0;
{
{ /* Inline loader#ModelBuilder#last_loader_error= (self,((val*)NULL)) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = ((val*)NULL); /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL1:(void)0;
}
}
{
var2 = core__file___String___file_stat(var_dirpath);
}
var_stat = var2;
if (var_stat == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_stat,((val*)NULL)) on <var_stat:nullable FileStat> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_stat,var_other) on <var_stat:nullable FileStat(FileStat)> */
var9 = var_stat == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
var_ = var4;
if (var4){
var3 = var_;
} else {
{
var10 = core___core__FileStat___is_dir(var_stat);
}
var11 = !var10;
var3 = var11;
}
if (var3){
{
var12 = ((val*(*)(val* self))(var_dirpath->class->vft[COLOR_core__abstract_text__Text__chars]))(var_dirpath); /* chars on <var_dirpath:String>*/
}
{
var13 = (val*)((long)('/')<<2|2);
var14 = ((short int(*)(val* self, val* p0))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var12, var13); /* has on <var12:SequenceRead[Char]>*/
}
if (var14){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var17 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_18 = var15;
{
var19 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_18);
}
var_20 = var19;
for(;;) {
{
var21 = ((short int(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_20); /* is_ok on <var_20:IndexedIterator[String]>*/
}
if (var21){
} else {
goto BREAK_label;
}
{
var22 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_20); /* item on <var_20:IndexedIterator[String]>*/
}
var_p = var22;
{
var23 = core__file___String____47d(var_p, var_dirpath);
}
var_try = var23;
{
var24 = core__file___String___file_stat(var_try);
}
var_stat = var24;
if (var_stat == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_stat,((val*)NULL)) on <var_stat:nullable FileStat> */
var_other28 = ((val*)NULL);
{
var29 = ((short int(*)(val* self, val* p0))(var_stat->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_stat, var_other28); /* == on <var_stat:nullable FileStat(FileStat)>*/
}
var30 = !var29;
var26 = var30;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
var_dirpath = var_try;
goto BREAK_;
} else {
}
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_20); /* next on <var_20:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_20); /* finish on <var_20:IndexedIterator[String]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
BREAK_: (void)0;
} else {
}
{
var31 = core___core__FileStat___is_dir(var_stat);
}
var32 = !var31;
if (var32){
if (unlikely(varonce==NULL)) {
var33 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Error: `";
var37 = core__abstract_text___CString___to_s_full(var36, 8l, 8l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var33)->values[0]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "` is not a directory.";
var41 = core__abstract_text___CString___to_s_full(var40, 21l, 21l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var33)->values[2]=var39;
} else {
var33 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var33)->values[1]=var_dirpath;
{
var42 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce = var33;
{
{ /* Inline loader#ModelBuilder#last_loader_error= (self,var42) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = var42; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL43:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var44 = nitc__loader___ModelBuilder___module_absolute_path(self, var_dirpath);
}
var_rdp = var44;
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var47 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var45, var_rdp);
}
if (var48){
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var51 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var49, var_rdp);
}
var = var52;
goto RET_LABEL;
} else {
}
{
var53 = ((val*(*)(val* self, val* p0))(var_rdp->class->vft[COLOR_core__file__String__basename]))(var_rdp, ((val*)NULL)); /* basename on <var_rdp:String>*/
}
var_pn = var53;
var_ini = ((val*)NULL);
var_parent = ((val*)NULL);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "package.ini";
var57 = core__abstract_text___CString___to_s_full(var56, 11l, 11l);
var55 = var57;
varonce54 = var55;
}
{
var58 = core__file___String____47d(var_dirpath, var55);
}
var_inipath = var58;
{
var59 = core__file___Text___file_exists(var_inipath);
}
if (var59){
var60 = NEW_ini__ConfigTree(&type_ini__ConfigTree);
{
((void(*)(val* self, val* p0))(var60->class->vft[COLOR_ini__ConfigTree__ini_file_61d]))(var60, var_inipath); /* ini_file= on <var60:ConfigTree>*/
}
{
((void(*)(val* self))(var60->class->vft[COLOR_core__kernel__Object__init]))(var60); /* init on <var60:ConfigTree>*/
}
var_ini = var60;
} else {
}
if (var_ini == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ini,((val*)NULL)) on <var_ini:nullable Object(nullable ConfigTree)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ini,var_other) on <var_ini:nullable ConfigTree(ConfigTree)> */
var66 = var_ini == var_other;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "/";
var70 = core__abstract_text___CString___to_s_full(var69, 1l, 1l);
var68 = var70;
varonce67 = var68;
}
{
var71 = ((short int(*)(val* self, val* p0))(var_rdp->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rdp, var68); /* == on <var_rdp:String>*/
}
if (var71){
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var74 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var72, var_rdp, ((val*)NULL)); /* Direct call hash_collection#HashMap#[]= on <var72:HashMap[String, nullable MGroup]>*/
}
if (unlikely(varonce75==NULL)) {
var76 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "Error: `";
var80 = core__abstract_text___CString___to_s_full(var79, 8l, 8l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var76)->values[0]=var78;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "` is not a Nit package.";
var84 = core__abstract_text___CString___to_s_full(var83, 23l, 23l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var76)->values[2]=var82;
} else {
var76 = varonce75;
varonce75 = NULL;
}
((struct instance_core__NativeArray*)var76)->values[1]=var_dirpath;
{
var85 = ((val*(*)(val* self))(var76->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
{
{ /* Inline loader#ModelBuilder#last_loader_error= (self,var85) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = var85; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL86:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "packages.ini";
var90 = core__abstract_text___CString___to_s_full(var89, 12l, 12l);
var88 = var90;
varonce87 = var88;
}
{
var91 = core__file___String____47d(var_dirpath, var88);
}
{
var92 = core__file___Text___file_exists(var91);
}
if (var92){
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var95 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var93, var_rdp, ((val*)NULL)); /* Direct call hash_collection#HashMap#[]= on <var93:HashMap[String, nullable MGroup]>*/
}
if (unlikely(varonce96==NULL)) {
var97 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "Error: `";
var101 = core__abstract_text___CString___to_s_full(var100, 8l, 8l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var97)->values[0]=var99;
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "` is not a Nit package.";
var105 = core__abstract_text___CString___to_s_full(var104, 23l, 23l);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var97)->values[2]=var103;
} else {
var97 = varonce96;
varonce96 = NULL;
}
((struct instance_core__NativeArray*)var97)->values[1]=var_dirpath;
{
var106 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
{
{ /* Inline loader#ModelBuilder#last_loader_error= (self,var106) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = var106; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL107:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "..";
var111 = core__abstract_text___CString___to_s_full(var110, 2l, 2l);
var109 = var111;
varonce108 = var109;
}
{
var112 = core__file___String___join_path(var_dirpath, var109);
}
{
var113 = core__file___String___simplify_path(var112);
}
var_parentpath = var113;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "packages.ini";
var117 = core__abstract_text___CString___to_s_full(var116, 12l, 12l);
var115 = var117;
varonce114 = var115;
}
{
var118 = core__file___String____47d(var_parentpath, var115);
}
var_stopper = var118;
{
var119 = core__file___Text___file_exists(var_stopper);
}
var120 = !var119;
if (var120){
{
var121 = nitc__loader___ModelBuilder___identify_group(self, var_parentpath);
}
var_parent = var121;
if (var_parent == NULL) {
var122 = 0; /* is null */
} else {
var122 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_parent,((val*)NULL)) on <var_parent:nullable Object(nullable MGroup)> */
var_other28 = ((val*)NULL);
{
var125 = ((short int(*)(val* self, val* p0))(var_parent->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_parent, var_other28); /* == on <var_parent:nullable MGroup(MGroup)>*/
}
var126 = !var125;
var123 = var126;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
var122 = var123;
}
if (var122){
{
{ /* Inline mpackage#MGroup#mpackage (var_parent) on <var_parent:nullable Object(MGroup)> */
var129 = var_parent->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_parent:nullable Object(MGroup)> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
var_mpackage = var127;
{
var130 = nitc__loader___MPackage___accept(var_mpackage, var_dirpath);
}
var131 = !var130;
if (var131){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var134 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (unlikely(varonce135==NULL)) {
var136 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "directory `";
var140 = core__abstract_text___CString___to_s_full(var139, 11l, 11l);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var136)->values[0]=var138;
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "` excluded from package `";
var144 = core__abstract_text___CString___to_s_full(var143, 25l, 25l);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var136)->values[2]=var142;
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "`";
var148 = core__abstract_text___CString___to_s_full(var147, 1l, 1l);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var136)->values[4]=var146;
} else {
var136 = varonce135;
varonce135 = NULL;
}
((struct instance_core__NativeArray*)var136)->values[1]=var_dirpath;
{
var149 = ((val*(*)(val* self))(var_mpackage->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpackage); /* to_s on <var_mpackage:MPackage>*/
}
((struct instance_core__NativeArray*)var136)->values[3]=var149;
{
var150 = ((val*(*)(val* self))(var136->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var136); /* native_to_s on <var136:NativeArray[String]>*/
}
varonce135 = var136;
{
nitc___nitc__ToolContext___info(var132, var150, 2l); /* Direct call toolcontext#ToolContext#info on <var132:ToolContext>*/
}
var_parent = ((val*)NULL);
} else {
}
} else {
}
if (var_parent == NULL) {
var151 = 1; /* is null */
} else {
var151 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_parent,((val*)NULL)) on <var_parent:nullable Object(nullable MGroup)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:nullable MGroup(MGroup)> */
var156 = var_parent == var_other;
var154 = var156;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
var152 = var154;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
var151 = var152;
}
if (var151){
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var159 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var157, var_rdp, ((val*)NULL)); /* Direct call hash_collection#HashMap#[]= on <var157:HashMap[String, nullable MGroup]>*/
}
if (unlikely(varonce160==NULL)) {
var161 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = "Error: `";
var165 = core__abstract_text___CString___to_s_full(var164, 8l, 8l);
var163 = var165;
varonce162 = var163;
}
((struct instance_core__NativeArray*)var161)->values[0]=var163;
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = "` is not a Nit package.";
var169 = core__abstract_text___CString___to_s_full(var168, 23l, 23l);
var167 = var169;
varonce166 = var167;
}
((struct instance_core__NativeArray*)var161)->values[2]=var167;
} else {
var161 = varonce160;
varonce160 = NULL;
}
((struct instance_core__NativeArray*)var161)->values[1]=var_dirpath;
{
var170 = ((val*(*)(val* self))(var161->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var161); /* native_to_s on <var161:NativeArray[String]>*/
}
varonce160 = var161;
{
{ /* Inline loader#ModelBuilder#last_loader_error= (self,var170) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val = var170; /* _last_loader_error on <self:ModelBuilder> */
RET_LABEL171:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
}
} else {
}
var172 = NEW_nitc__Location(&type_nitc__Location);
{
nitc___nitc__Location___opaque_file(var172, var_dirpath); /* Direct call location#Location#opaque_file on <var172:Location>*/
}
var_loc = var172;
if (var_parent == NULL) {
var173 = 1; /* is null */
} else {
var173 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_parent,((val*)NULL)) on <var_parent:nullable Object(nullable MGroup)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_parent,var_other) on <var_parent:nullable MGroup(MGroup)> */
var178 = var_parent == var_other;
var176 = var178;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
var174 = var176;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
var173 = var174;
}
if (var173){
if (var_ini == NULL) {
var179 = 0; /* is null */
} else {
var179 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ini,((val*)NULL)) on <var_ini:nullable Object(nullable ConfigTree)> */
var_other28 = ((val*)NULL);
{
var182 = ((short int(*)(val* self, val* p0))(var_ini->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ini, var_other28); /* == on <var_ini:nullable ConfigTree(ConfigTree)>*/
}
var183 = !var182;
var180 = var183;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
var179 = var180;
}
if (var179){
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "package.name";
var188 = core__abstract_text___CString___to_s_full(var187, 12l, 12l);
var186 = var188;
varonce185 = var186;
}
{
var189 = ini___ini__ConfigTree____91d_93d(var_ini, var186);
}
if (var189!=NULL) {
var184 = var189;
} else {
var184 = var_pn;
}
var_pn = var184;
} else {
}
var190 = NEW_nitc__MPackage(&type_nitc__MPackage);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var193 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var193 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var190->class->vft[COLOR_nitc__mpackage__MPackage__name_61d]))(var190, var_pn); /* name= on <var190:MPackage>*/
}
{
((void(*)(val* self, val* p0))(var190->class->vft[COLOR_nitc__mpackage__MPackage__model_61d]))(var190, var191); /* model= on <var190:MPackage>*/
}
{
((void(*)(val* self, val* p0))(var190->class->vft[COLOR_nitc__mpackage__MPackage__location_61d]))(var190, var_loc); /* location= on <var190:MPackage>*/
}
{
((void(*)(val* self))(var190->class->vft[COLOR_core__kernel__Object__init]))(var190); /* init on <var190:MPackage>*/
}
var_mpackage194 = var190;
var195 = NEW_nitc__MGroup(&type_nitc__MGroup);
{
((void(*)(val* self, val* p0))(var195->class->vft[COLOR_nitc__mpackage__MGroup__name_61d]))(var195, var_pn); /* name= on <var195:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var195->class->vft[COLOR_nitc__mpackage__MGroup__location_61d]))(var195, var_loc); /* location= on <var195:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var195->class->vft[COLOR_nitc__mpackage__MGroup__mpackage_61d]))(var195, var_mpackage194); /* mpackage= on <var195:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var195->class->vft[COLOR_nitc__mpackage__MGroup__parent_61d]))(var195, ((val*)NULL)); /* parent= on <var195:MGroup>*/
}
{
((void(*)(val* self))(var195->class->vft[COLOR_core__kernel__Object__init]))(var195); /* init on <var195:MGroup>*/
}
var_mgroup = var195;
{
{ /* Inline mpackage#MPackage#root= (var_mpackage194,var_mgroup) on <var_mpackage194:MPackage> */
var_mpackage194->attrs[COLOR_nitc__mpackage__MPackage___root].val = var_mgroup; /* _root on <var_mpackage194:MPackage> */
RET_LABEL196:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var199 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var199 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
if (unlikely(varonce200==NULL)) {
var201 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = "found package `";
var205 = core__abstract_text___CString___to_s_full(var204, 15l, 15l);
var203 = var205;
varonce202 = var203;
}
((struct instance_core__NativeArray*)var201)->values[0]=var203;
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = "` at ";
var209 = core__abstract_text___CString___to_s_full(var208, 5l, 5l);
var207 = var209;
varonce206 = var207;
}
((struct instance_core__NativeArray*)var201)->values[2]=var207;
} else {
var201 = varonce200;
varonce200 = NULL;
}
{
var210 = ((val*(*)(val* self))(var_mpackage194->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpackage194); /* to_s on <var_mpackage194:MPackage>*/
}
((struct instance_core__NativeArray*)var201)->values[1]=var210;
((struct instance_core__NativeArray*)var201)->values[3]=var_dirpath;
{
var211 = ((val*(*)(val* self))(var201->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var201); /* native_to_s on <var201:NativeArray[String]>*/
}
varonce200 = var201;
{
nitc___nitc__ToolContext___info(var197, var211, 2l); /* Direct call toolcontext#ToolContext#info on <var197:ToolContext>*/
}
{
{ /* Inline loader#MPackage#ini= (var_mpackage194,var_ini) on <var_mpackage194:MPackage> */
var_mpackage194->attrs[COLOR_nitc__loader__MPackage___ini].val = var_ini; /* _ini on <var_mpackage194:MPackage> */
RET_LABEL212:(void)0;
}
}
} else {
var213 = NEW_nitc__MGroup(&type_nitc__MGroup);
{
{ /* Inline mpackage#MGroup#mpackage (var_parent) on <var_parent:nullable Object(MGroup)> */
var216 = var_parent->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_parent:nullable Object(MGroup)> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var213->class->vft[COLOR_nitc__mpackage__MGroup__name_61d]))(var213, var_pn); /* name= on <var213:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var213->class->vft[COLOR_nitc__mpackage__MGroup__location_61d]))(var213, var_loc); /* location= on <var213:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var213->class->vft[COLOR_nitc__mpackage__MGroup__mpackage_61d]))(var213, var214); /* mpackage= on <var213:MGroup>*/
}
{
((void(*)(val* self, val* p0))(var213->class->vft[COLOR_nitc__mpackage__MGroup__parent_61d]))(var213, var_parent); /* parent= on <var213:MGroup>*/
}
{
((void(*)(val* self))(var213->class->vft[COLOR_core__kernel__Object__init]))(var213); /* init on <var213:MGroup>*/
}
var_mgroup = var213;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var219 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var219 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var217 = var219;
RET_LABEL218:(void)0;
}
}
if (unlikely(varonce220==NULL)) {
var221 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = "found sub group `";
var225 = core__abstract_text___CString___to_s_full(var224, 17l, 17l);
var223 = var225;
varonce222 = var223;
}
((struct instance_core__NativeArray*)var221)->values[0]=var223;
if (likely(varonce226!=NULL)) {
var227 = varonce226;
} else {
var228 = "` at ";
var229 = core__abstract_text___CString___to_s_full(var228, 5l, 5l);
var227 = var229;
varonce226 = var227;
}
((struct instance_core__NativeArray*)var221)->values[2]=var227;
} else {
var221 = varonce220;
varonce220 = NULL;
}
{
var230 = nitc___nitc__MGroup___nitc__model_base__MEntity__full_name(var_mgroup);
}
((struct instance_core__NativeArray*)var221)->values[1]=var230;
((struct instance_core__NativeArray*)var221)->values[3]=var_dirpath;
{
var231 = ((val*(*)(val* self))(var221->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var221); /* native_to_s on <var221:NativeArray[String]>*/
}
varonce220 = var221;
{
nitc___nitc__ToolContext___info(var217, var231, 2l); /* Direct call toolcontext#ToolContext#info on <var217:ToolContext>*/
}
}
if (likely(varonce232!=NULL)) {
var233 = varonce232;
} else {
var234 = "README.md";
var235 = core__abstract_text___CString___to_s_full(var234, 9l, 9l);
var233 = var235;
varonce232 = var233;
}
{
var236 = core__file___String___join_path(var_dirpath, var233);
}
var_readme = var236;
{
var237 = core__file___Text___file_exists(var_readme);
}
var238 = !var237;
if (var238){
if (likely(varonce239!=NULL)) {
var240 = varonce239;
} else {
var241 = "README";
var242 = core__abstract_text___CString___to_s_full(var241, 6l, 6l);
var240 = var242;
varonce239 = var240;
}
{
var243 = core__file___String___join_path(var_dirpath, var240);
}
var_readme = var243;
} else {
}
{
var244 = core__file___Text___file_exists(var_readme);
}
if (var244){
{
var245 = nitc__loader___ModelBuilder___load_markdown(self, var_readme);
}
var_mdoc = var245;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mgroup,var_mdoc) on <var_mgroup:nullable Object(MGroup)> */
var_mgroup->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mgroup:nullable Object(MGroup)> */
RET_LABEL246:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mgroup) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___original_mentity].val = var_mgroup; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL247:(void)0;
}
}
} else {
}
{
{ /* Inline loader#ModelBuilder#mgroups (self) on <self:ModelBuilder> */
var250 = self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val; /* _mgroups on <self:ModelBuilder> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mgroups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 477);
fatal_exit(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var248, var_rdp, var_mgroup); /* Direct call hash_collection#HashMap#[]= on <var248:HashMap[String, nullable MGroup]>*/
}
var = var_mgroup;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_markdown for (self: ModelBuilder, String): MDoc */
val* nitc__loader___ModelBuilder___load_markdown(val* self, val* p0) {
val* var /* : MDoc */;
val* var_filepath /* var filepath: String */;
val* var1 /* : FileReader */;
val* var_s /* var s: FileReader */;
val* var2 /* : Array[String] */;
val* var_lines /* var lines: Array[String] */;
val* var3 /* : Array[Int] */;
val* var_line_starts /* var line_starts: Array[Int] */;
long var_len /* var len: Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : String */;
val* var_line /* var line: String */;
val* var7 /* : nullable Object */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
val* var20 /* : SourceFile */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var_source /* var source: SourceFile */;
val* var25 /* : Array[Int] */;
val* var27 /* : Array[Int] */;
val* var28 /* : MDoc */;
val* var29 /* : Location */;
long var30 /* : Int */;
long var32 /* : Int */;
val* var_mdoc /* var mdoc: MDoc */;
val* var33 /* : Array[String] */;
val* var35 /* : Array[String] */;
var_filepath = p0;
var1 = NEW_core__FileReader(&type_core__FileReader);
{
core___core__FileReader___open(var1, var_filepath); /* Direct call file#FileReader#open on <var1:FileReader>*/
}
var_s = var1;
var2 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[String]>*/
}
var_lines = var2;
var3 = NEW_core__Array(&type_core__Array__core__Int);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Int]>*/
}
var_line_starts = var3;
var_len = 1l;
for(;;) {
{
var4 = core___core__BufferedReader___Reader__eof(var_s);
}
var5 = !var4;
if (var5){
{
var6 = core___core__Reader___read_line(var_s);
}
var_line = var6;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_lines, var_line); /* Direct call array#Array#add on <var_lines:Array[String]>*/
}
{
var7 = (val*)(var_len<<2|1);
core___core__Array___core__abstract_collection__SimpleCollection__add(var_line_starts, var7); /* Direct call array#Array#add on <var_line_starts:Array[Int]>*/
}
{
var8 = ((long(*)(val* self))(var_line->class->vft[COLOR_core__abstract_text__Text__length]))(var_line); /* length on <var_line:String>*/
}
{
{ /* Inline kernel#Int#+ (var8,1l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var8 + 1l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_len,var9) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var15 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var_len + var9;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_len = var13;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
core___core__FileReader___core__stream__Stream__close(var_s); /* Direct call file#FileReader#close on <var_s:FileReader>*/
}
var20 = NEW_nitc__SourceFile(&type_nitc__SourceFile);
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = "\n";
var23 = core__abstract_text___CString___to_s_full(var22, 1l, 1l);
var21 = var23;
varonce = var21;
}
{
var24 = core__abstract_text___Collection___join(var_lines, var21, ((val*)NULL));
}
{
nitc___nitc__SourceFile___from_string(var20, var_filepath, var24); /* Direct call location#SourceFile#from_string on <var20:SourceFile>*/
}
var_source = var20;
{
{ /* Inline location#SourceFile#line_starts (var_source) on <var_source:SourceFile> */
var27 = var_source->attrs[COLOR_nitc__location__SourceFile___line_starts].val; /* _line_starts on <var_source:SourceFile> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _line_starts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 46);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var25, var_line_starts); /* Direct call array#Array#add_all on <var25:Array[Int]>*/
}
var28 = NEW_nitc__MDoc(&type_nitc__MDoc);
var29 = NEW_nitc__Location(&type_nitc__Location);
{
{ /* Inline array#AbstractArrayRead#length (var_lines) on <var_lines:Array[String]> */
var32 = var_lines->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_lines:Array[String]> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var29->class->vft[COLOR_nitc__location__Location__file_61d]))(var29, var_source); /* file= on <var29:Location>*/
}
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var29, 1l); /* line_start= on <var29:Location>*/
}
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var29, var30); /* line_end= on <var29:Location>*/
}
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var29, 0l); /* column_start= on <var29:Location>*/
}
{
((void(*)(val* self, long p0))(var29->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var29, 0l); /* column_end= on <var29:Location>*/
}
{
((void(*)(val* self))(var29->class->vft[COLOR_core__kernel__Object__init]))(var29); /* init on <var29:Location>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_nitc__mdoc__MDoc__location_61d]))(var28, var29); /* location= on <var28:MDoc>*/
}
{
((void(*)(val* self))(var28->class->vft[COLOR_core__kernel__Object__init]))(var28); /* init on <var28:MDoc>*/
}
var_mdoc = var28;
{
{ /* Inline mdoc#MDoc#content (var_mdoc) on <var_mdoc:MDoc> */
var35 = var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___content].val; /* _content on <var_mdoc:MDoc> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mdoc, 23);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var33, var_lines); /* Direct call array#Array#add_all on <var33:Array[String]>*/
}
var = var_mdoc;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#scan_group for (self: ModelBuilder, MGroup) */
void nitc__loader___ModelBuilder___scan_group(val* self, val* p0) {
val* var_mgroup /* var mgroup: MGroup */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var4 /* : nullable String */;
val* var_p /* var p: nullable String */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Array[String] */;
val* var_files /* var files: Array[String] */;
val* var8 /* : Sys */;
val* var9 /* : Comparator */;
val* var_ /* var : Array[String] */;
val* var10 /* : IndexedIterator[nullable Object] */;
val* var_11 /* var : IndexedIterator[String] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_f /* var f: String */;
val* var14 /* : String */;
val* var_fp /* var fp: String */;
val* var15 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable MModule */;
val* var23 /* : MPackage */;
val* var25 /* : MPackage */;
val* var26 /* : MPackage */;
val* var28 /* : MPackage */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
var_mgroup = p0;
{
{ /* Inline loader#MGroup#scanned (var_mgroup) on <var_mgroup:MGroup> */
var2 = var_mgroup->attrs[COLOR_nitc__loader__MGroup___scanned].s; /* _scanned on <var_mgroup:MGroup> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#MGroup#scanned= (var_mgroup,1) on <var_mgroup:MGroup> */
var_mgroup->attrs[COLOR_nitc__loader__MGroup___scanned].s = 1; /* _scanned on <var_mgroup:MGroup> */
RET_LABEL3:(void)0;
}
}
{
var4 = nitc___nitc__MGroup___filepath(var_mgroup);
}
var_p = var4;
if (var_p == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, ((val*)NULL)); /* == on <var_p:nullable String>*/
var5 = var6;
}
if (var5){
goto RET_LABEL;
} else {
}
{
var7 = core__file___String___files(var_p);
}
var_files = var7;
var8 = glob_sys;
{
var9 = core__abstract_text___Sys___alpha_comparator(var8);
}
{
core___core__Comparator___sort(var9, var_files); /* Direct call sorter#Comparator#sort on <var9:Comparator>*/
}
var_ = var_files;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:IndexedIterator[String]>*/
}
if (var12){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:IndexedIterator[String]>*/
}
var_f = var13;
{
var14 = core__file___String____47d(var_p, var_f);
}
var_fp = var14;
{
var15 = nitc__loader___ModelBuilder___identify_group(self, var_fp);
}
var_g = var15;
if (var_g == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_g,var_other) on <var_g:nullable MGroup(MGroup)> */
var21 = var_g == var_other;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
var22 = nitc__loader___ModelBuilder___identify_module(self, var_fp);
}
} else {
{
{ /* Inline mpackage#MGroup#mpackage (var_g) on <var_g:nullable MGroup(MGroup)> */
var25 = var_g->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline mpackage#MGroup#mpackage (var_mgroup) on <var_mgroup:MGroup> */
var28 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:MGroup> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var23,var26) on <var23:MPackage> */
var_other = var26;
{
{ /* Inline kernel#Object#is_same_instance (var23,var_other) on <var23:MPackage> */
var33 = var23 == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
nitc__loader___ModelBuilder___scan_group(self, var_g); /* Direct call loader#ModelBuilder#scan_group on <self:ModelBuilder>*/
}
} else {
}
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:IndexedIterator[String]>*/
}
RET_LABEL:;
}
/* method loader#ModelBuilder#module_absolute_path for (self: ModelBuilder, String): String */
val* nitc__loader___ModelBuilder___module_absolute_path(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : String */;
var_path = p0;
{
var1 = core__file___String___realpath(var_path);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_module_ast for (self: ModelBuilder, String): nullable AModule */
val* nitc__loader___ModelBuilder___load_module_ast(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_filename /* var filename: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : Message */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : ToolContext */;
val* var25 /* : ToolContext */;
val* var27 /* : NativeArray[String] */;
static val* varonce26;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : Message */;
val* var38 /* : ToolContext */;
val* var40 /* : ToolContext */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : FileReader */;
val* var_file /* var file: FileReader */;
val* var49 /* : Lexer */;
val* var50 /* : SourceFile */;
val* var_lexer /* var lexer: Lexer */;
val* var51 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var52 /* : Start */;
val* var_tree /* var tree: Start */;
val* var53 /* : nullable AModule */;
val* var55 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : EOF */;
val* var64 /* : EOF */;
val* var_neof /* var neof: EOF */;
short int var65 /* : Bool */;
int cltype;
int idtype;
val* var66 /* : String */;
val* var68 /* : String */;
var_filename = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ".nit";
var3 = core__abstract_text___CString___to_s_full(var2, 4l, 4l);
var1 = var3;
varonce = var1;
}
{
var4 = core___core__Text___has_suffix(var_filename, var1);
}
var5 = !var4;
if (var5){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var8 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (unlikely(varonce9==NULL)) {
var10 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: file `";
var14 = core__abstract_text___CString___to_s_full(var13, 13l, 13l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "` is not a valid nit module.";
var18 = core__abstract_text___CString___to_s_full(var17, 28l, 28l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce9;
varonce9 = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_filename;
{
var19 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
var20 = nitc___nitc__ToolContext___error(var6, ((val*)NULL), var19);
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var21 = core__file___Text___file_exists(var_filename);
}
var22 = !var21;
if (var22){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var25 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (unlikely(varonce26==NULL)) {
var27 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "Error: file `";
var31 = core__abstract_text___CString___to_s_full(var30, 13l, 13l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "` not found.";
var35 = core__abstract_text___CString___to_s_full(var34, 12l, 12l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce26;
varonce26 = NULL;
}
((struct instance_core__NativeArray*)var27)->values[1]=var_filename;
{
var36 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce26 = var27;
{
var37 = nitc___nitc__ToolContext___error(var23, ((val*)NULL), var36);
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var40 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "load module ";
var46 = core__abstract_text___CString___to_s_full(var45, 12l, 12l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[0]=var44;
} else {
var42 = varonce41;
varonce41 = NULL;
}
((struct instance_core__NativeArray*)var42)->values[1]=var_filename;
{
var47 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
nitc___nitc__ToolContext___info(var38, var47, 2l); /* Direct call toolcontext#ToolContext#info on <var38:ToolContext>*/
}
var48 = NEW_core__FileReader(&type_core__FileReader);
{
core___core__FileReader___open(var48, var_filename); /* Direct call file#FileReader#open on <var48:FileReader>*/
}
var_file = var48;
var49 = NEW_nitc__Lexer(&type_nitc__Lexer);
var50 = NEW_nitc__SourceFile(&type_nitc__SourceFile);
{
((void(*)(val* self, val* p0))(var50->class->vft[COLOR_nitc__location__SourceFile__filename_61d]))(var50, var_filename); /* filename= on <var50:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(var50->class->vft[COLOR_nitc__location__SourceFile__stream_61d]))(var50, var_file); /* stream= on <var50:SourceFile>*/
}
{
((void(*)(val* self))(var50->class->vft[COLOR_core__kernel__Object__init]))(var50); /* init on <var50:SourceFile>*/
}
{
((void(*)(val* self, val* p0))(var49->class->vft[COLOR_nitc__lexer_work__Lexer__file_61d]))(var49, var50); /* file= on <var49:Lexer>*/
}
{
((void(*)(val* self))(var49->class->vft[COLOR_core__kernel__Object__init]))(var49); /* init on <var49:Lexer>*/
}
var_lexer = var49;
var51 = NEW_nitc__Parser(&type_nitc__Parser);
{
((void(*)(val* self, val* p0))(var51->class->vft[COLOR_nitc__parser_work__Parser__lexer_61d]))(var51, var_lexer); /* lexer= on <var51:Parser>*/
}
{
((void(*)(val* self))(var51->class->vft[COLOR_core__kernel__Object__init]))(var51); /* init on <var51:Parser>*/
}
var_parser = var51;
{
var52 = nitc___nitc__Parser___parse(var_parser);
}
var_tree = var52;
{
core___core__FileReader___core__stream__Stream__close(var_file); /* Direct call file#FileReader#close on <var_file:FileReader>*/
}
{
{ /* Inline parser_nodes#Start#n_base (var_tree) on <var_tree:Start> */
var55 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_base].val; /* _n_base on <var_tree:Start> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_nmodule = var53;
if (var_nmodule == NULL) {
var56 = 1; /* is null */
} else {
var56 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var61 = var_nmodule == var_other;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
{
{ /* Inline parser_nodes#Start#n_eof (var_tree) on <var_tree:Start> */
var64 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_eof].val; /* _n_eof on <var_tree:Start> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3056);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_neof = var62;
/* <var_neof:EOF> isa AError */
cltype = type_nitc__AError.color;
idtype = type_nitc__AError.id;
if(cltype >= var_neof->type->table_size) {
var65 = 0;
} else {
var65 = var_neof->type->type_table[cltype] == idtype;
}
if (unlikely(!var65)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 685);
fatal_exit(1);
}
{
{ /* Inline lexer_work#AError#message (var_neof) on <var_neof:EOF(AError)> */
var68 = var_neof->attrs[COLOR_nitc__lexer_work__AError___message].val; /* _message on <var_neof:EOF(AError)> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__lexer_work, 50);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
nitc___nitc__ModelBuilder___error(self, var_neof, var66); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#load_module for (self: ModelBuilder, String): nullable AModule */
val* nitc__loader___ModelBuilder___load_module(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_filename /* var filename: String */;
val* var1 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable String */;
val* var10 /* : nullable String */;
val* var_le /* var le: nullable String */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other14 /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : ToolContext */;
val* var19 /* : ToolContext */;
val* var20 /* : Message */;
short int var21 /* : Bool */;
val* var22 /* : ToolContext */;
val* var24 /* : ToolContext */;
val* var25 /* : NativeArray[String] */;
static val* varonce;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : Message */;
val* var36 /* : ToolContext */;
val* var38 /* : ToolContext */;
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
val* var49 /* : String */;
val* var50 /* : Message */;
val* var51 /* : nullable AModule */;
var_filename = p0;
{
var1 = nitc__loader___ModelBuilder___identify_module(self, var_filename);
}
var_mmodule = var1;
if (var_mmodule == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var7 = var_mmodule == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline loader#ModelBuilder#last_loader_error (self) on <self:ModelBuilder> */
var10 = self->attrs[COLOR_nitc__loader__ModelBuilder___last_loader_error].val; /* _last_loader_error on <self:ModelBuilder> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_le = var8;
if (var_le == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_le,((val*)NULL)) on <var_le:nullable String> */
var_other14 = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_le->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_le, var_other14); /* == on <var_le:nullable String(String)>*/
}
var16 = !var15;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var19 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__ToolContext___error(var17, ((val*)NULL), var_le);
}
} else {
{
var21 = core__file___Text___file_exists(var_filename);
}
if (var21){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var24 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var25 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Error: `";
var29 = core__abstract_text___CString___to_s_full(var28, 8l, 8l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "` is not a Nit source file.";
var33 = core__abstract_text___CString___to_s_full(var32, 27l, 27l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var25)->values[2]=var31;
} else {
var25 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var25)->values[1]=var_filename;
{
var34 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce = var25;
{
var35 = nitc___nitc__ToolContext___error(var22, ((val*)NULL), var34);
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var38 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (unlikely(varonce39==NULL)) {
var40 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "Error: cannot find module `";
var44 = core__abstract_text___CString___to_s_full(var43, 27l, 27l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "`.";
var48 = core__abstract_text___CString___to_s_full(var47, 2l, 2l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var40)->values[2]=var46;
} else {
var40 = varonce39;
varonce39 = NULL;
}
((struct instance_core__NativeArray*)var40)->values[1]=var_filename;
{
var49 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
{
var50 = nitc___nitc__ToolContext___error(var36, ((val*)NULL), var49);
}
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var51 = nitc__loader___MModule___load(var_mmodule, self);
}
var = var51;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#build_a_mmodule for (self: ModelBuilder, nullable MGroup, AModule) */
void nitc__loader___ModelBuilder___build_a_mmodule(val* self, val* p0, val* p1) {
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable AModuledecl */;
val* var10 /* : nullable AModuledecl */;
val* var_decl /* var decl: nullable AModuledecl */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AModuleName */;
val* var18 /* : AModuleName */;
val* var19 /* : TId */;
val* var21 /* : TId */;
val* var22 /* : String */;
val* var_decl_name /* var decl_name: String */;
val* var23 /* : String */;
val* var25 /* : String */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : AModuleName */;
val* var32 /* : AModuleName */;
static val* varonce;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
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
val* var50 /* : String */;
val* var52 /* : String */;
val* var53 /* : String */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : Model */;
val* var61 /* : Model */;
val* var62 /* : String */;
val* var64 /* : String */;
val* var65 /* : nullable Array[MModule] */;
val* var_others /* var others: nullable Array[MModule] */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var_ /* var : Array[MModule] */;
val* var71 /* : IndexedIterator[nullable Object] */;
val* var_72 /* var : IndexedIterator[MModule] */;
short int var73 /* : Bool */;
val* var74 /* : nullable Object */;
val* var_other75 /* var other: MModule */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var_83 /* var : Bool */;
val* var84 /* : HashMap[MModule, AModule] */;
val* var86 /* : HashMap[MModule, AModule] */;
short int var87 /* : Bool */;
short int var_88 /* var : Bool */;
val* var89 /* : nullable MGroup */;
val* var91 /* : nullable MGroup */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var_97 /* var : Bool */;
val* var98 /* : nullable MGroup */;
val* var100 /* : nullable MGroup */;
val* var101 /* : MPackage */;
val* var103 /* : MPackage */;
val* var104 /* : MPackage */;
val* var106 /* : MPackage */;
short int var107 /* : Bool */;
val* var_other109 /* var other: nullable Object */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
val* var_node /* var node: ANode */;
val* var119 /* : AModuleName */;
val* var121 /* : AModuleName */;
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
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
val* var136 /* : String */;
val* var137 /* : Location */;
val* var139 /* : Location */;
val* var140 /* : String */;
val* var141 /* : String */;
val* var142 /* : Array[AModule] */;
val* var144 /* : Array[AModule] */;
val* var145 /* : HashMap[MModule, AModule] */;
val* var147 /* : HashMap[MModule, AModule] */;
val* var148 /* : Location */;
val* var150 /* : Location */;
val* var151 /* : nullable SourceFile */;
val* var153 /* : nullable SourceFile */;
val* var_source /* var source: nullable SourceFile */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
val* var159 /* : nullable MModule */;
val* var161 /* : nullable MModule */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
val* var174 /* : nullable ADoc */;
val* var176 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
short int var177 /* : Bool */;
short int var178 /* : Bool */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
val* var182 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : Array[AAnnotation] */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
var_mgroup = p0;
var_nmodule = p1;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mmodule = var;
if (var_mmodule == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_mmodule->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mmodule, var_other); /* == on <var_mmodule:nullable MModule(MModule)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 773);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AModule#n_moduledecl (var_nmodule) on <var_nmodule:AModule> */
var10 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_nmodule:AModule> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_decl = var8;
if (var_decl == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_decl,((val*)NULL)) on <var_decl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_decl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_decl, var_other); /* == on <var_decl:nullable AModuledecl(AModuledecl)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var18 = var_decl->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1149);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_id (var16) on <var16:AModuleName> */
var21 = var16->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val; /* _n_id on <var16:AModuleName> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2919);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc__lexer_work___Token___text(var19);
}
var_decl_name = var22;
{
{ /* Inline mmodule#MModule#name (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var25 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var_decl_name,var23) on <var_decl_name:String> */
var_other = var23;
{
var28 = ((short int(*)(val* self, val* p0))(var_decl_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_decl_name, var_other); /* == on <var_decl_name:String>*/
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var32 = var_decl->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1149);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (likely(varonce!=NULL)) {
var33 = varonce;
} else {
var34 = "module-name-mismatch";
var35 = core__abstract_text___CString___to_s_full(var34, 20l, 20l);
var33 = var35;
varonce = var33;
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Error: module name mismatch; declared ";
var41 = core__abstract_text___CString___to_s_full(var40, 38l, 38l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = " file named ";
var45 = core__abstract_text___CString___to_s_full(var44, 12l, 12l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[2]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = ".";
var49 = core__abstract_text___CString___to_s_full(var48, 1l, 1l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var37)->values[4]=var47;
} else {
var37 = varonce36;
varonce36 = NULL;
}
((struct instance_core__NativeArray*)var37)->values[1]=var_decl_name;
{
{ /* Inline mmodule#MModule#name (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var52 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
((struct instance_core__NativeArray*)var37)->values[3]=var50;
{
var53 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__ModelBuilder___warning(self, var30, var33, var53); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
} else {
}
if (var_mgroup == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var57 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var58 = !var57;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var61 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var_mmodule) on <var_mmodule:nullable MModule(MModule)> */
var64 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mmodule:nullable MModule(MModule)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = nitc__mmodule___Model___get_mmodules_by_name(var59, var62);
}
var_others = var65;
if (var_others == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_others,((val*)NULL)) on <var_others:nullable Array[MModule]> */
var_other = ((val*)NULL);
{
var69 = ((short int(*)(val* self, val* p0))(var_others->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_others, var_other); /* == on <var_others:nullable Array[MModule](Array[MModule])>*/
}
var70 = !var69;
var67 = var70;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (var66){
var_ = var_others;
{
var71 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_72 = var71;
for(;;) {
{
var73 = ((short int(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_72); /* is_ok on <var_72:IndexedIterator[MModule]>*/
}
if (var73){
} else {
goto BREAK_label;
}
{
var74 = ((val*(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_72); /* item on <var_72:IndexedIterator[MModule]>*/
}
var_other75 = var74;
{
{ /* Inline kernel#Object#!= (var_other75,var_mmodule) on <var_other75:MModule> */
var_other = var_mmodule;
{
var81 = ((short int(*)(val* self, val* p0))(var_other75->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_other75, var_other); /* == on <var_other75:MModule>*/
}
var82 = !var81;
var79 = var82;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var_83 = var79;
if (var79){
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var86 = self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1092);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var84, var_mmodule);
}
var78 = var87;
} else {
var78 = var_83;
}
var_88 = var78;
if (var78){
{
{ /* Inline mmodule#MModule#mgroup (var_other75) on <var_other75:MModule> */
var91 = var_other75->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_other75:MModule> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
if (var89 == NULL) {
var92 = 0; /* is null */
} else {
var92 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var89,((val*)NULL)) on <var89:nullable MGroup> */
var_other = ((val*)NULL);
{
var95 = ((short int(*)(val* self, val* p0))(var89->class->vft[COLOR_core__kernel__Object___61d_61d]))(var89, var_other); /* == on <var89:nullable MGroup(MGroup)>*/
}
var96 = !var95;
var93 = var96;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
var77 = var92;
} else {
var77 = var_88;
}
var_97 = var77;
if (var77){
{
{ /* Inline mmodule#MModule#mgroup (var_other75) on <var_other75:MModule> */
var100 = var_other75->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_other75:MModule> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (var98 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 788);
fatal_exit(1);
} else {
{ /* Inline mpackage#MGroup#mpackage (var98) on <var98:nullable MGroup> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var103 = var98->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var98:nullable MGroup> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline mpackage#MGroup#mpackage (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var106 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var101,var104) on <var101:MPackage> */
var_other109 = var104;
{
{ /* Inline kernel#Object#is_same_instance (var101,var_other109) on <var101:MPackage> */
var112 = var101 == var_other109;
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var107 = var110;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var76 = var107;
} else {
var76 = var_97;
}
if (var76){
if (var_decl == NULL) {
var113 = 1; /* is null */
} else {
var113 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_decl,((val*)NULL)) on <var_decl:nullable AModuledecl> */
var_other109 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_decl,var_other109) on <var_decl:nullable AModuledecl(AModuledecl)> */
var118 = var_decl == var_other109;
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
var114 = var116;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
var113 = var114;
}
if (var113){
var_node = var_nmodule;
} else {
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var121 = var_decl->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_decl:nullable AModuledecl(AModuledecl)> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1149);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
var_node = var119;
}
if (unlikely(varonce122==NULL)) {
var123 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "Error: a module named `";
var127 = core__abstract_text___CString___to_s_full(var126, 23l, 23l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var123)->values[0]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "` already exists at ";
var131 = core__abstract_text___CString___to_s_full(var130, 20l, 20l);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var123)->values[2]=var129;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = ".";
var135 = core__abstract_text___CString___to_s_full(var134, 1l, 1l);
var133 = var135;
varonce132 = var133;
}
((struct instance_core__NativeArray*)var123)->values[4]=var133;
} else {
var123 = varonce122;
varonce122 = NULL;
}
{
var136 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_other75);
}
((struct instance_core__NativeArray*)var123)->values[1]=var136;
{
{ /* Inline mmodule#MModule#location (var_other75) on <var_other75:MModule> */
var139 = var_other75->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var_other75:MModule> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 103);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
var140 = ((val*(*)(val* self))(var137->class->vft[COLOR_core__abstract_text__Object__to_s]))(var137); /* to_s on <var137:Location>*/
}
((struct instance_core__NativeArray*)var123)->values[3]=var140;
{
var141 = ((val*(*)(val* self))(var123->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var123); /* native_to_s on <var123:NativeArray[String]>*/
}
varonce122 = var123;
{
nitc___nitc__ModelBuilder___error(self, var_node, var141); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_72); /* next on <var_72:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_72&3)?class_info[((long)var_72&3)]:var_72->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_72); /* finish on <var_72:IndexedIterator[MModule]>*/
}
} else {
}
} else {
}
{
{ /* Inline loader#ModelBuilder#nmodules (self) on <self:ModelBuilder> */
var144 = self->attrs[COLOR_nitc__loader__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1089);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var142, var_nmodule); /* Direct call array#Array#add on <var142:Array[AModule]>*/
}
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var147 = self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1092);
fatal_exit(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var145, var_mmodule, var_nmodule); /* Direct call hash_collection#HashMap#[]= on <var145:HashMap[MModule, AModule]>*/
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var150 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
{
{ /* Inline location#Location#file (var148) on <var148:Location> */
var153 = var148->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var148:Location> */
var151 = var153;
RET_LABEL152:(void)0;
}
}
var_source = var151;
if (var_source == NULL) {
var154 = 0; /* is null */
} else {
var154 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_source,((val*)NULL)) on <var_source:nullable SourceFile> */
var_other = ((val*)NULL);
{
var157 = ((short int(*)(val* self, val* p0))(var_source->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_source, var_other); /* == on <var_source:nullable SourceFile(SourceFile)>*/
}
var158 = !var157;
var155 = var158;
goto RET_LABEL156;
RET_LABEL156:(void)0;
}
var154 = var155;
}
if (var154){
{
{ /* Inline loader#SourceFile#mmodule (var_source) on <var_source:nullable SourceFile(SourceFile)> */
var161 = var_source->attrs[COLOR_nitc__loader__SourceFile___mmodule].val; /* _mmodule on <var_source:nullable SourceFile(SourceFile)> */
var159 = var161;
RET_LABEL160:(void)0;
}
}
if (var159 == NULL) {
var162 = 1; /* is null */
} else {
var162 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var159,((val*)NULL)) on <var159:nullable MModule> */
var_other109 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var159,var_other109) on <var159:nullable MModule(MModule)> */
var167 = var159 == var_other109;
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
var162 = var163;
}
if (unlikely(!var162)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 802);
fatal_exit(1);
}
{
{ /* Inline loader#SourceFile#mmodule= (var_source,var_mmodule) on <var_source:nullable SourceFile(SourceFile)> */
var_source->attrs[COLOR_nitc__loader__SourceFile___mmodule].val = var_mmodule; /* _mmodule on <var_source:nullable SourceFile(SourceFile)> */
RET_LABEL168:(void)0;
}
}
} else {
}
if (var_decl == NULL) {
var169 = 0; /* is null */
} else {
var169 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_decl,((val*)NULL)) on <var_decl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
var172 = ((short int(*)(val* self, val* p0))(var_decl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_decl, var_other); /* == on <var_decl:nullable AModuledecl(AModuledecl)>*/
}
var173 = !var172;
var170 = var173;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
var169 = var170;
}
if (var169){
{
{ /* Inline parser_nodes#ADefinition#n_doc (var_decl) on <var_decl:nullable AModuledecl(AModuledecl)> */
var176 = var_decl->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_decl:nullable AModuledecl(AModuledecl)> */
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_ndoc = var174;
if (var_ndoc == NULL) {
var177 = 0; /* is null */
} else {
var177 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,((val*)NULL)) on <var_ndoc:nullable ADoc> */
var_other = ((val*)NULL);
{
var180 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ndoc, var_other); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
}
var181 = !var180;
var178 = var181;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
var177 = var178;
}
if (var177){
{
var182 = nitc__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var182;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mmodule,var_mdoc) on <var_mmodule:nullable MModule(MModule)> */
var_mmodule->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mmodule:nullable MModule(MModule)> */
RET_LABEL183:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mmodule) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___original_mentity].val = var_mmodule; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL184:(void)0;
}
}
} else {
}
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "test_suite";
var188 = core__abstract_text___CString___to_s_full(var187, 10l, 10l);
var186 = var188;
varonce185 = var186;
}
{
var189 = nitc___nitc__Prod___get_annotations(var_decl, var186);
}
{
var190 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var189);
}
var191 = !var190;
{
{ /* Inline mmodule#MModule#is_test_suite= (var_mmodule,var191) on <var_mmodule:nullable MModule(MModule)> */
var_mmodule->attrs[COLOR_nitc__mmodule__MModule___is_test_suite].s = var191; /* _is_test_suite on <var_mmodule:nullable MModule(MModule)> */
RET_LABEL192:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method loader#ModelBuilder#seach_module_by_amodule_name for (self: ModelBuilder, AModuleName, nullable MGroup): nullable MModule */
val* nitc__loader___ModelBuilder___seach_module_by_amodule_name(val* self, val* p0, val* p1) {
val* var /* : nullable MModule */;
val* var_n_name /* var n_name: AModuleName */;
val* var_mgroup /* var mgroup: nullable MGroup */;
val* var1 /* : TId */;
val* var3 /* : TId */;
val* var4 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var5 /* : nullable TQuad */;
val* var7 /* : nullable TQuad */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : ANodes[TId] */;
val* var15 /* : ANodes[TId] */;
short int var16 /* : Bool */;
val* var17 /* : nullable MModule */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : MPackage */;
val* var25 /* : MPackage */;
val* var26 /* : nullable MGroup */;
val* var28 /* : nullable MGroup */;
val* var_r /* var r: nullable MGroup */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : Array[MModule] */;
val* var_res /* var res: Array[MModule] */;
val* var35 /* : Array[MModule] */;
val* var_ /* var : Array[MModule] */;
val* var_36 /* var : Array[MModule] */;
val* var37 /* : IndexedIterator[nullable Object] */;
val* var_38 /* var : IndexedIterator[MModule] */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var_x /* var x: MModule */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
long var43 /* : Int */;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var49 /* : Bool */;
val* var50 /* : NativeArray[String] */;
static val* varonce;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : Array[String] */;
val* var_64 /* var : Array[String] */;
val* var_65 /* var : Array[MModule] */;
val* var66 /* : IndexedIterator[nullable Object] */;
val* var_67 /* var : IndexedIterator[MModule] */;
short int var68 /* : Bool */;
val* var70 /* : nullable Object */;
val* var_x71 /* var x: MModule */;
val* var72 /* : String */;
val* var73 /* : nullable String */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var80 /* : String */;
val* var81 /* : nullable Object */;
val* var82 /* : ANodes[TId] */;
val* var84 /* : ANodes[TId] */;
val* var85 /* : nullable Object */;
val* var86 /* : String */;
val* var_root_name /* var root_name: String */;
val* var87 /* : Array[String] */;
val* var89 /* : Array[String] */;
val* var90 /* : ArraySet[MGroup] */;
val* var_roots /* var roots: ArraySet[MGroup] */;
short int var91 /* : Bool */;
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
val* var106 /* : Array[String] */;
val* var108 /* : Array[String] */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var114 /* : String */;
val* var115 /* : ArraySet[MModule] */;
val* var_res116 /* var res: ArraySet[MModule] */;
val* var_117 /* var : ArraySet[MGroup] */;
val* var118 /* : Iterator[nullable Object] */;
val* var_119 /* var : Iterator[MGroup] */;
short int var120 /* : Bool */;
val* var122 /* : nullable Object */;
val* var_r123 /* var r: MGroup */;
val* var124 /* : Array[MModule] */;
val* var_root_res /* var root_res: Array[MModule] */;
val* var_125 /* var : Array[MModule] */;
val* var126 /* : IndexedIterator[nullable Object] */;
val* var_127 /* var : IndexedIterator[MModule] */;
short int var128 /* : Bool */;
val* var130 /* : nullable Object */;
val* var_x131 /* var x: MModule */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
long var134 /* : Int */;
short int var135 /* : Bool */;
short int var137 /* : Bool */;
int cltype138;
int idtype139;
const char* var_class_name140;
short int var141 /* : Bool */;
val* var143 /* : NativeArray[String] */;
static val* varonce142;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : CString */;
val* var147 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : CString */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : CString */;
val* var155 /* : String */;
val* var156 /* : Array[String] */;
val* var_157 /* var : Array[String] */;
val* var_158 /* var : ArraySet[MModule] */;
val* var159 /* : Iterator[nullable Object] */;
val* var_160 /* var : Iterator[MModule] */;
short int var161 /* : Bool */;
val* var163 /* : nullable Object */;
val* var_x164 /* var x: MModule */;
val* var165 /* : String */;
val* var166 /* : nullable String */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
val* var172 /* : String */;
val* var173 /* : String */;
val* var174 /* : nullable Object */;
val* var176 /* : NativeArray[String] */;
static val* varonce175;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : CString */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : CString */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : CString */;
val* var192 /* : String */;
val* var193 /* : Array[String] */;
val* var195 /* : Array[String] */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : CString */;
val* var199 /* : String */;
val* var200 /* : String */;
val* var201 /* : String */;
var_n_name = p0;
var_mgroup = p1;
{
{ /* Inline parser_nodes#AModuleName#n_id (var_n_name) on <var_n_name:AModuleName> */
var3 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val; /* _n_id on <var_n_name:AModuleName> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2919);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__lexer_work___Token___text(var1);
}
var_mod_name = var4;
{
{ /* Inline parser_nodes#AModuleName#n_quad (var_n_name) on <var_n_name:AModuleName> */
var7 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_quad].val; /* _n_quad on <var_n_name:AModuleName> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var5,((val*)NULL)) on <var5:nullable TQuad> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_other); /* == on <var5:nullable TQuad(TQuad)>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var_mgroup = ((val*)NULL);
} else {
}
{
{ /* Inline parser_nodes#AModuleName#n_path (var_n_name) on <var_n_name:AModuleName> */
var15 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <var_n_name:AModuleName> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2916);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var13);
}
if (var16){
{
var17 = nitc__loader___ModelBuilder___search_mmodule_by_name(self, var_n_name, var_mgroup, var_mod_name);
}
var = var17;
goto RET_LABEL;
} else {
}
if (var_mgroup == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mgroup,((val*)NULL)) on <var_mgroup:nullable MGroup> */
var_other = ((val*)NULL);
{
var21 = ((short int(*)(val* self, val* p0))(var_mgroup->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mgroup, var_other); /* == on <var_mgroup:nullable MGroup(MGroup)>*/
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline mpackage#MGroup#mpackage (var_mgroup) on <var_mgroup:nullable MGroup(MGroup)> */
var25 = var_mgroup->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var_mgroup:nullable MGroup(MGroup)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline mpackage#MPackage#root (var23) on <var23:MPackage> */
var28 = var23->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <var23:MPackage> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_r = var26;
if (var_r == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_r,((val*)NULL)) on <var_r:nullable MGroup> */
var_other = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_r->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_r, var_other); /* == on <var_r:nullable MGroup(MGroup)>*/
}
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 839);
fatal_exit(1);
}
{
nitc__loader___ModelBuilder___scan_group(self, var_r); /* Direct call loader#ModelBuilder#scan_group on <self:ModelBuilder>*/
}
{
var34 = nitc__loader___MGroup___mmodules_by_name(var_r, var_mod_name);
}
var_res = var34;
var35 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___with_capacity(var35, 1l); /* Direct call array#Array#with_capacity on <var35:Array[MModule]>*/
}
var_ = var35;
var_36 = var_res;
{
var37 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_36);
}
var_38 = var37;
for(;;) {
{
var39 = ((short int(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_38); /* is_ok on <var_38:IndexedIterator[MModule]>*/
}
if (var39){
} else {
goto BREAK_label;
}
{
var40 = ((val*(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_38); /* item on <var_38:IndexedIterator[MModule]>*/
}
var_x = var40;
{
var41 = nitc__loader___ModelBuilder___match_amodulename(self, var_n_name, var_x);
}
if (var41){
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_x); /* Direct call array#AbstractArray#push on <var_:Array[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_38); /* next on <var_38:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_38); /* finish on <var_38:IndexedIterator[MModule]>*/
}
var_res = var_;
{
var42 = core___core__Collection___not_empty(var_res);
}
if (var42){
{
{ /* Inline array#AbstractArrayRead#length (var_res) on <var_res:Array[MModule]> */
var45 = var_res->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_res:Array[MModule]> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var48 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var49 = var43 > 1l;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
if (unlikely(varonce==NULL)) {
var50 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "Error: conflicting module files for `";
var54 = core__abstract_text___CString___to_s_full(var53, 37l, 37l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var50)->values[0]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "`: `";
var58 = core__abstract_text___CString___to_s_full(var57, 4l, 4l);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var50)->values[2]=var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "`";
var62 = core__abstract_text___CString___to_s_full(var61, 1l, 1l);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var50)->values[4]=var60;
} else {
var50 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var50)->values[1]=var_mod_name;
var63 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var63, 1l); /* Direct call array#Array#with_capacity on <var63:Array[String]>*/
}
var_64 = var63;
var_65 = var_res;
{
var66 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_65);
}
var_67 = var66;
for(;;) {
{
var68 = ((short int(*)(val* self))((((long)var_67&3)?class_info[((long)var_67&3)]:var_67->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_67); /* is_ok on <var_67:IndexedIterator[MModule]>*/
}
if (var68){
} else {
goto BREAK_label69;
}
{
var70 = ((val*(*)(val* self))((((long)var_67&3)?class_info[((long)var_67&3)]:var_67->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_67); /* item on <var_67:IndexedIterator[MModule]>*/
}
var_x71 = var70;
{
var73 = nitc___nitc__MModule___filepath(var_x71);
}
if (var73!=NULL) {
var72 = var73;
} else {
{
var74 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_x71);
}
var72 = var74;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_64, var72); /* Direct call array#AbstractArray#push on <var_64:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_67&3)?class_info[((long)var_67&3)]:var_67->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_67); /* next on <var_67:IndexedIterator[MModule]>*/
}
}
BREAK_label69: (void)0;
{
((void(*)(val* self))((((long)var_67&3)?class_info[((long)var_67&3)]:var_67->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_67); /* finish on <var_67:IndexedIterator[MModule]>*/
}
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "`, `";
var78 = core__abstract_text___CString___to_s_full(var77, 4l, 4l);
var76 = var78;
varonce75 = var76;
}
{
var79 = core__abstract_text___Collection___join(var_64, var76, ((val*)NULL));
}
((struct instance_core__NativeArray*)var50)->values[3]=var79;
{
var80 = ((val*(*)(val* self))(var50->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce = var50;
{
nitc___nitc__ModelBuilder___error(self, var_n_name, var80); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
var81 = core___core__SequenceRead___Collection__first(var_res);
}
var = var81;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AModuleName#n_path (var_n_name) on <var_n_name:AModuleName> */
var84 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <var_n_name:AModuleName> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2916);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = core___core__SequenceRead___Collection__first(var82);
}
{
var86 = nitc__lexer_work___Token___text(var85);
}
var_root_name = var86;
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var89 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
var90 = nitc__loader___ModelBuilder___search_group_in_paths(self, var_root_name, var87);
}
var_roots = var90;
{
var91 = core___core__ArraySet___core__abstract_collection__Collection__is_empty(var_roots);
}
if (var91){
if (unlikely(varonce92==NULL)) {
var93 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "Error: cannot find `";
var97 = core__abstract_text___CString___to_s_full(var96, 20l, 20l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var93)->values[0]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "`. Tried: ";
var101 = core__abstract_text___CString___to_s_full(var100, 10l, 10l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var93)->values[2]=var99;
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = ".";
var105 = core__abstract_text___CString___to_s_full(var104, 1l, 1l);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var93)->values[4]=var103;
} else {
var93 = varonce92;
varonce92 = NULL;
}
((struct instance_core__NativeArray*)var93)->values[1]=var_root_name;
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var108 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = ", ";
var112 = core__abstract_text___CString___to_s_full(var111, 2l, 2l);
var110 = var112;
varonce109 = var110;
}
{
var113 = core__abstract_text___Collection___join(var106, var110, ((val*)NULL));
}
((struct instance_core__NativeArray*)var93)->values[3]=var113;
{
var114 = ((val*(*)(val* self))(var93->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var93); /* native_to_s on <var93:NativeArray[String]>*/
}
varonce92 = var93;
{
nitc___nitc__ModelBuilder___error(self, var_n_name, var114); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var115 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MModule);
{
core___core__ArraySet___core__kernel__Object__init(var115); /* Direct call array#ArraySet#init on <var115:ArraySet[MModule]>*/
}
var_res116 = var115;
var_117 = var_roots;
{
var118 = core___core__ArraySet___core__abstract_collection__Collection__iterator(var_117);
}
var_119 = var118;
for(;;) {
{
var120 = ((short int(*)(val* self))((((long)var_119&3)?class_info[((long)var_119&3)]:var_119->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_119); /* is_ok on <var_119:Iterator[MGroup]>*/
}
if (var120){
} else {
goto BREAK_label121;
}
{
var122 = ((val*(*)(val* self))((((long)var_119&3)?class_info[((long)var_119&3)]:var_119->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_119); /* item on <var_119:Iterator[MGroup]>*/
}
var_r123 = var122;
{
nitc__loader___ModelBuilder___scan_group(self, var_r123); /* Direct call loader#ModelBuilder#scan_group on <self:ModelBuilder>*/
}
{
var124 = nitc__loader___MGroup___mmodules_by_name(var_r123, var_mod_name);
}
var_root_res = var124;
var_125 = var_root_res;
{
var126 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_125);
}
var_127 = var126;
for(;;) {
{
var128 = ((short int(*)(val* self))((((long)var_127&3)?class_info[((long)var_127&3)]:var_127->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_127); /* is_ok on <var_127:IndexedIterator[MModule]>*/
}
if (var128){
} else {
goto BREAK_label129;
}
{
var130 = ((val*(*)(val* self))((((long)var_127&3)?class_info[((long)var_127&3)]:var_127->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_127); /* item on <var_127:IndexedIterator[MModule]>*/
}
var_x131 = var130;
{
var132 = nitc__loader___ModelBuilder___match_amodulename(self, var_n_name, var_x131);
}
if (var132){
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_res116, var_x131); /* Direct call array#ArraySet#add on <var_res116:ArraySet[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_127&3)?class_info[((long)var_127&3)]:var_127->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_127); /* next on <var_127:IndexedIterator[MModule]>*/
}
}
BREAK_label129: (void)0;
{
((void(*)(val* self))((((long)var_127&3)?class_info[((long)var_127&3)]:var_127->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_127); /* finish on <var_127:IndexedIterator[MModule]>*/
}
{
((void(*)(val* self))((((long)var_119&3)?class_info[((long)var_119&3)]:var_119->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_119); /* next on <var_119:Iterator[MGroup]>*/
}
}
BREAK_label121: (void)0;
{
((void(*)(val* self))((((long)var_119&3)?class_info[((long)var_119&3)]:var_119->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_119); /* finish on <var_119:Iterator[MGroup]>*/
}
{
var133 = core___core__Collection___not_empty(var_res116);
}
if (var133){
{
var134 = core___core__ArraySet___core__abstract_collection__Collection__length(var_res116);
}
{
{ /* Inline kernel#Int#> (var134,1l) on <var134:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var137 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var137)) {
var_class_name140 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name140);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var141 = var134 > 1l;
var135 = var141;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
if (var135){
if (unlikely(varonce142==NULL)) {
var143 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "Error: conflicting module files for `";
var147 = core__abstract_text___CString___to_s_full(var146, 37l, 37l);
var145 = var147;
varonce144 = var145;
}
((struct instance_core__NativeArray*)var143)->values[0]=var145;
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "`: `";
var151 = core__abstract_text___CString___to_s_full(var150, 4l, 4l);
var149 = var151;
varonce148 = var149;
}
((struct instance_core__NativeArray*)var143)->values[2]=var149;
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = "`";
var155 = core__abstract_text___CString___to_s_full(var154, 1l, 1l);
var153 = var155;
varonce152 = var153;
}
((struct instance_core__NativeArray*)var143)->values[4]=var153;
} else {
var143 = varonce142;
varonce142 = NULL;
}
((struct instance_core__NativeArray*)var143)->values[1]=var_mod_name;
var156 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var156, 1l); /* Direct call array#Array#with_capacity on <var156:Array[String]>*/
}
var_157 = var156;
var_158 = var_res116;
{
var159 = core___core__ArraySet___core__abstract_collection__Collection__iterator(var_158);
}
var_160 = var159;
for(;;) {
{
var161 = ((short int(*)(val* self))((((long)var_160&3)?class_info[((long)var_160&3)]:var_160->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_160); /* is_ok on <var_160:Iterator[MModule]>*/
}
if (var161){
} else {
goto BREAK_label162;
}
{
var163 = ((val*(*)(val* self))((((long)var_160&3)?class_info[((long)var_160&3)]:var_160->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_160); /* item on <var_160:Iterator[MModule]>*/
}
var_x164 = var163;
{
var166 = nitc___nitc__MModule___filepath(var_x164);
}
if (var166!=NULL) {
var165 = var166;
} else {
{
var167 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var_x164);
}
var165 = var167;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_157, var165); /* Direct call array#AbstractArray#push on <var_157:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_160&3)?class_info[((long)var_160&3)]:var_160->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_160); /* next on <var_160:Iterator[MModule]>*/
}
}
BREAK_label162: (void)0;
{
((void(*)(val* self))((((long)var_160&3)?class_info[((long)var_160&3)]:var_160->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_160); /* finish on <var_160:Iterator[MModule]>*/
}
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "`, `";
var171 = core__abstract_text___CString___to_s_full(var170, 4l, 4l);
var169 = var171;
varonce168 = var169;
}
{
var172 = core__abstract_text___Collection___join(var_157, var169, ((val*)NULL));
}
((struct instance_core__NativeArray*)var143)->values[3]=var172;
{
var173 = ((val*(*)(val* self))(var143->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var143); /* native_to_s on <var143:NativeArray[String]>*/
}
varonce142 = var143;
{
nitc___nitc__ModelBuilder___error(self, var_n_name, var173); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
var174 = core___core__ArraySet___core__abstract_collection__Collection__first(var_res116);
}
var = var174;
goto RET_LABEL;
} else {
}
if (unlikely(varonce175==NULL)) {
var176 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "Error: cannot find module `";
var180 = core__abstract_text___CString___to_s_full(var179, 27l, 27l);
var178 = var180;
varonce177 = var178;
}
((struct instance_core__NativeArray*)var176)->values[0]=var178;
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "` from `";
var184 = core__abstract_text___CString___to_s_full(var183, 8l, 8l);
var182 = var184;
varonce181 = var182;
}
((struct instance_core__NativeArray*)var176)->values[2]=var182;
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "`. Tried: ";
var188 = core__abstract_text___CString___to_s_full(var187, 10l, 10l);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var176)->values[4]=var186;
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = ".";
var192 = core__abstract_text___CString___to_s_full(var191, 1l, 1l);
var190 = var192;
varonce189 = var190;
}
((struct instance_core__NativeArray*)var176)->values[6]=var190;
} else {
var176 = varonce175;
varonce175 = NULL;
}
((struct instance_core__NativeArray*)var176)->values[1]=var_mod_name;
((struct instance_core__NativeArray*)var176)->values[3]=var_root_name;
{
{ /* Inline loader#ModelBuilder#paths (self) on <self:ModelBuilder> */
var195 = self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val; /* _paths on <self:ModelBuilder> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _paths");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 213);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = ", ";
var199 = core__abstract_text___CString___to_s_full(var198, 2l, 2l);
var197 = var199;
varonce196 = var197;
}
{
var200 = core__abstract_text___Collection___join(var193, var197, ((val*)NULL));
}
((struct instance_core__NativeArray*)var176)->values[5]=var200;
{
var201 = ((val*(*)(val* self))(var176->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var176); /* native_to_s on <var176:NativeArray[String]>*/
}
varonce175 = var176;
{
nitc___nitc__ModelBuilder___error(self, var_n_name, var201); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#match_amodulename for (self: ModelBuilder, AModuleName, MModule): Bool */
short int nitc__loader___ModelBuilder___match_amodulename(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_n_name /* var n_name: AModuleName */;
val* var_m /* var m: MModule */;
val* var1 /* : nullable MGroup */;
val* var3 /* : nullable MGroup */;
val* var_g /* var g: nullable MGroup */;
val* var4 /* : ANodes[TId] */;
val* var6 /* : ANodes[TId] */;
val* var7 /* : IndexedIterator[ANode] */;
val* var_ /* var : IndexedIterator[TId] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : Iterator[TId] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_grp /* var grp: TId */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var_18 /* var : Bool */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var22 /* : String */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable MGroup */;
val* var29 /* : nullable MGroup */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
var_n_name = p0;
var_m = p1;
{
{ /* Inline mmodule#MModule#mgroup (var_m) on <var_m:MModule> */
var3 = var_m->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_m:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_g = var1;
{
{ /* Inline parser_nodes#AModuleName#n_path (var_n_name) on <var_n_name:AModuleName> */
var6 = var_n_name->attrs[COLOR_nitc__parser_nodes__AModuleName___n_path].val; /* _n_path on <var_n_name:AModuleName> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2916);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead__reverse_iterator(var4);
}
var_ = var7;
{
var8 = core___core__Iterator___iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[TId]>*/
}
if (var10){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[TId]>*/
}
var_grp = var11;
for(;;) {
if (var_g == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_g, var_other); /* == on <var_g:nullable MGroup(MGroup)>*/
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
var_18 = var13;
if (var13){
{
var19 = nitc__lexer_work___Token___text(var_grp);
}
{
{ /* Inline mpackage#MGroup#name (var_g) on <var_g:nullable MGroup(MGroup)> */
var22 = var_g->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <var_g:nullable MGroup(MGroup)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 70);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var19,var20) on <var19:String> */
var_other = var20;
{
var25 = ((short int(*)(val* self, val* p0))(var19->class->vft[COLOR_core__kernel__Object___61d_61d]))(var19, var_other); /* == on <var19:String>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var12 = var23;
} else {
var12 = var_18;
}
if (var12){
{
{ /* Inline mpackage#MGroup#parent (var_g) on <var_g:nullable MGroup(MGroup)> */
var29 = var_g->attrs[COLOR_nitc__mpackage__MGroup___parent].val; /* _parent on <var_g:nullable MGroup(MGroup)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_g = var27;
} else {
goto BREAK_label30;
}
}
BREAK_label30: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[TId]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[TId]>*/
}
if (var_g == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_g,((val*)NULL)) on <var_g:nullable MGroup> */
var_other = ((val*)NULL);
{
var34 = ((short int(*)(val* self, val* p0))(var_g->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_g, var_other); /* == on <var_g:nullable MGroup(MGroup)>*/
}
var35 = !var34;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#build_module_importation for (self: ModelBuilder, AModule) */
void nitc__loader___ModelBuilder___build_module_importation(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var4 /* : nullable MModule */;
val* var6 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var_stdimport /* var stdimport: Bool */;
val* var7 /* : Array[MModule] */;
val* var_imported_modules /* var imported_modules: Array[MModule] */;
val* var8 /* : ANodes[AImport] */;
val* var10 /* : ANodes[AImport] */;
val* var_ /* var : ANodes[AImport] */;
val* var11 /* : Iterator[ANode] */;
val* var_12 /* var : Iterator[AImport] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_aimport /* var aimport: AImport */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : Array[AAnnotation] */;
val* var_atconditionals /* var atconditionals: Array[AAnnotation] */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
short int var22 /* : Bool */;
val* var23 /* : AModuleName */;
val* var25 /* : AModuleName */;
val* var26 /* : nullable MGroup */;
val* var28 /* : nullable MGroup */;
val* var29 /* : nullable MModule */;
val* var_sup /* var sup: nullable MModule */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var38 /* : nullable AModule */;
val* var_ast /* var ast: nullable AModule */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
val* var48 /* : AVisibility */;
val* var50 /* : AVisibility */;
val* var51 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var52 /* : Sys */;
val* var53 /* : MVisibility */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var60 /* : AVisibility */;
val* var62 /* : AVisibility */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : AModuleName */;
val* var76 /* : AModuleName */;
val* var78 /* : NativeArray[String] */;
static val* varonce77;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var91 /* : POSetElement[MModule] */;
val* var93 /* : POSetElement[MModule] */;
short int var94 /* : Bool */;
val* var95 /* : AModuleName */;
val* var97 /* : AModuleName */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var114 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : CString */;
val* var120 /* : String */;
val* var_mod_name /* var mod_name: String */;
val* var121 /* : nullable MModule */;
val* var_sup122 /* var sup: nullable MModule */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
val* var131 /* : Sys */;
val* var132 /* : MVisibility */;
val* var133 /* : ANodes[AImport] */;
val* var135 /* : ANodes[AImport] */;
val* var_136 /* var : ANodes[AImport] */;
val* var137 /* : Iterator[ANode] */;
val* var_138 /* var : Iterator[AImport] */;
short int var139 /* : Bool */;
val* var141 /* : nullable Object */;
val* var_aimport142 /* var aimport: AImport */;
short int var143 /* : Bool */;
int cltype144;
int idtype145;
short int var146 /* : Bool */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : CString */;
val* var151 /* : String */;
val* var152 /* : Array[AAnnotation] */;
val* var_atconditionals153 /* var atconditionals: Array[AAnnotation] */;
short int var154 /* : Bool */;
val* var155 /* : AModuleName */;
val* var157 /* : AModuleName */;
val* var158 /* : nullable MGroup */;
val* var160 /* : nullable MGroup */;
val* var161 /* : nullable MModule */;
val* var_suppath /* var suppath: nullable MModule */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
val* var_168 /* var : Array[AAnnotation] */;
val* var169 /* : IndexedIterator[nullable Object] */;
val* var_170 /* var : IndexedIterator[AAnnotation] */;
short int var171 /* : Bool */;
val* var173 /* : nullable Object */;
val* var_atconditional /* var atconditional: AAnnotation */;
val* var174 /* : ANodes[AExpr] */;
val* var176 /* : ANodes[AExpr] */;
val* var_nargs /* var nargs: ANodes[AExpr] */;
short int var177 /* : Bool */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : CString */;
val* var181 /* : String */;
val* var183 /* : Array[MModule] */;
val* var_rule /* var rule: Array[MModule] */;
val* var_184 /* var : ANodes[AExpr] */;
val* var185 /* : Iterator[ANode] */;
val* var_186 /* var : Iterator[AExpr] */;
short int var187 /* : Bool */;
val* var189 /* : nullable Object */;
val* var_narg /* var narg: AExpr */;
val* var190 /* : nullable String */;
val* var_id /* var id: nullable String */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : CString */;
val* var196 /* : String */;
val* var198 /* : nullable MGroup */;
val* var200 /* : nullable MGroup */;
val* var201 /* : nullable MModule */;
val* var_mp /* var mp: nullable MModule */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
short int var207 /* : Bool */;
val* var208 /* : Array[SequenceRead[MModule]] */;
val* var210 /* : Array[SequenceRead[MModule]] */;
val* var211 /* : ToolContext */;
val* var213 /* : ToolContext */;
val* var215 /* : NativeArray[String] */;
static val* varonce214;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : CString */;
val* var219 /* : String */;
val* var220 /* : String */;
val* var221 /* : POSetElement[MModule] */;
val* var223 /* : POSetElement[MModule] */;
val* var224 /* : Collection[nullable Object] */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : CString */;
val* var228 /* : String */;
val* var229 /* : String */;
val* var230 /* : String */;
val* var231 /* : POSetElement[MModule] */;
val* var233 /* : POSetElement[MModule] */;
val* var234 /* : Collection[nullable Object] */;
val* var_235 /* var : Collection[MModule] */;
val* var236 /* : Iterator[nullable Object] */;
val* var_237 /* var : Iterator[MModule] */;
short int var238 /* : Bool */;
val* var240 /* : nullable Object */;
val* var_sup241 /* var sup: MModule */;
val* var242 /* : String */;
val* var244 /* : String */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : CString */;
val* var248 /* : String */;
short int var249 /* : Bool */;
val* var250 /* : Sys */;
val* var251 /* : MVisibility */;
val* var252 /* : POSetElement[MModule] */;
val* var254 /* : POSetElement[MModule] */;
val* var255 /* : Collection[nullable Object] */;
val* var_directs /* var directs: Collection[MModule] */;
val* var256 /* : ANodes[AImport] */;
val* var258 /* : ANodes[AImport] */;
val* var_259 /* var : ANodes[AImport] */;
val* var260 /* : Iterator[ANode] */;
val* var_261 /* var : Iterator[AImport] */;
short int var262 /* : Bool */;
val* var264 /* : nullable Object */;
val* var_nim /* var nim: AImport */;
short int var265 /* : Bool */;
int cltype266;
int idtype267;
short int var268 /* : Bool */;
val* var270 /* : nullable MModule */;
val* var272 /* : nullable MModule */;
val* var_im /* var im: nullable MModule */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
short int var276 /* : Bool */;
short int var278 /* : Bool */;
short int var279 /* : Bool */;
var_nmodule = p0;
{
{ /* Inline loader#AModule#is_importation_done (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___is_importation_done].s; /* _is_importation_done on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#AModule#is_importation_done= (var_nmodule,1) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___is_importation_done].s = 1; /* _is_importation_done on <var_nmodule:AModule> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var6 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 907);
fatal_exit(1);
}
var_mmodule = var4;
var_stdimport = 1;
var7 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[MModule]>*/
}
var_imported_modules = var7;
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var10 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1119);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
{
var11 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:Iterator[AImport]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:Iterator[AImport]>*/
}
var_aimport = var14;
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "conditional";
var17 = core__abstract_text___CString___to_s_full(var16, 11l, 11l);
var15 = var17;
varonce = var15;
}
{
var18 = nitc___nitc__Prod___get_annotations(var_aimport, var15);
}
var_atconditionals = var18;
{
var19 = core___core__Collection___not_empty(var_atconditionals);
}
if (var19){
goto BREAK_label20;
} else {
}
var_stdimport = 0;
/* <var_aimport:AImport> isa AStdImport */
cltype = type_nitc__AStdImport.color;
idtype = type_nitc__AStdImport.id;
if(cltype >= var_aimport->type->table_size) {
var21 = 0;
} else {
var21 = var_aimport->type->type_table[cltype] == idtype;
}
var22 = !var21;
if (var22){
goto BREAK_label20;
} else {
}
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var25 = var_aimport->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1167);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var28 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = nitc__loader___ModelBuilder___seach_module_by_amodule_name(self, var23, var26);
}
var_sup = var29;
if (var_sup == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup,((val*)NULL)) on <var_sup:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other) on <var_sup:nullable MModule(MModule)> */
var35 = var_sup == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL36:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL37:(void)0;
}
}
goto BREAK_label20;
} else {
}
{
var38 = nitc__loader___MModule___load(var_sup, self);
}
var_ast = var38;
if (var_ast == NULL) {
var39 = 1; /* is null */
} else {
var39 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ast,((val*)NULL)) on <var_ast:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ast,var_other) on <var_ast:nullable AModule(AModule)> */
var44 = var_ast == var_other;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL45:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL46:(void)0;
}
}
goto BREAK_label20;
} else {
}
{
{ /* Inline loader#AStdImport#mmodule= (var_aimport,var_sup) on <var_aimport:AImport(AStdImport)> */
var_aimport->attrs[COLOR_nitc__loader__AStdImport___mmodule].val = var_sup; /* _mmodule on <var_aimport:AImport(AStdImport)> */
RET_LABEL47:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_imported_modules, var_sup); /* Direct call array#Array#add on <var_imported_modules:Array[MModule]>*/
}
{
{ /* Inline parser_nodes#AImport#n_visibility (var_aimport) on <var_aimport:AImport(AStdImport)> */
var50 = var_aimport->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <var_aimport:AImport(AStdImport)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1157);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = ((val*(*)(val* self))(var48->class->vft[COLOR_nitc__modelbuilder_base__AVisibility__mvisibility]))(var48); /* mvisibility on <var48:AVisibility>*/
}
var_mvisibility = var51;
var52 = glob_sys;
{
var53 = nitc__model_base___core__Sys___protected_visibility(var52);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var53) on <var_mvisibility:MVisibility> */
var_other = var53;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other) on <var_mvisibility:MVisibility> */
var58 = var_mvisibility == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL59:(void)0;
}
}
{
{ /* Inline parser_nodes#AImport#n_visibility (var_aimport) on <var_aimport:AImport(AStdImport)> */
var62 = var_aimport->attrs[COLOR_nitc__parser_nodes__AImport___n_visibility].val; /* _n_visibility on <var_aimport:AImport(AStdImport)> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1157);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "Error: only properties can be protected.";
var66 = core__abstract_text___CString___to_s_full(var65, 40l, 40l);
var64 = var66;
varonce63 = var64;
}
{
nitc___nitc__ModelBuilder___error(self, var60, var64); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL67:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL68:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#== (var_sup,var_mmodule) on <var_sup:nullable MModule(MModule)> */
var_other = var_mmodule;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other) on <var_sup:nullable MModule(MModule)> */
var73 = var_sup == var_other;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
if (var69){
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var76 = var_aimport->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1167);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
if (unlikely(varonce77==NULL)) {
var78 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "Error: dependency loop in module ";
var82 = core__abstract_text___CString___to_s_full(var81, 33l, 33l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var78)->values[0]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = ".";
var86 = core__abstract_text___CString___to_s_full(var85, 1l, 1l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var78)->values[2]=var84;
} else {
var78 = varonce77;
varonce77 = NULL;
}
{
var87 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var78)->values[1]=var87;
{
var88 = ((val*(*)(val* self))(var78->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var78); /* native_to_s on <var78:NativeArray[String]>*/
}
varonce77 = var78;
{
nitc___nitc__ModelBuilder___error(self, var74, var88); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL89:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL90:(void)0;
}
}
} else {
}
{
{ /* Inline mmodule#MModule#in_importation (var_sup) on <var_sup:nullable MModule(MModule)> */
var93 = var_sup->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_sup:nullable MModule(MModule)> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
var94 = poset___poset__POSetElement____60d(var91, var_mmodule);
}
if (var94){
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport) on <var_aimport:AImport(AStdImport)> */
var97 = var_aimport->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport:AImport(AStdImport)> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1167);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "Error: dependency loop between modules ";
var103 = core__abstract_text___CString___to_s_full(var102, 39l, 39l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = " and ";
var107 = core__abstract_text___CString___to_s_full(var106, 5l, 5l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var99)->values[2]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = ".";
var111 = core__abstract_text___CString___to_s_full(var110, 1l, 1l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var99)->values[4]=var109;
} else {
var99 = varonce98;
varonce98 = NULL;
}
{
var112 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var99)->values[1]=var112;
{
var113 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MModule(MModule)>*/
}
((struct instance_core__NativeArray*)var99)->values[3]=var113;
{
var114 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__ModelBuilder___error(self, var95, var114); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL115:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL116:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
nitc___nitc__MModule___set_visibility_for(var_mmodule, var_sup, var_mvisibility); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
BREAK_label20: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:Iterator[AImport]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:Iterator[AImport]>*/
}
if (var_stdimport){
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "core";
var120 = core__abstract_text___CString___to_s_full(var119, 4l, 4l);
var118 = var120;
varonce117 = var118;
}
var_mod_name = var118;
{
var121 = nitc__loader___ModelBuilder___get_mmodule_by_name(self, var_nmodule, ((val*)NULL), var_mod_name);
}
var_sup122 = var121;
if (var_sup122 == NULL) {
var123 = 1; /* is null */
} else {
var123 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup122,((val*)NULL)) on <var_sup122:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sup122,var_other) on <var_sup122:nullable MModule(MModule)> */
var128 = var_sup122 == var_other;
var126 = var128;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
var123 = var124;
}
if (var123){
{
{ /* Inline model_base#MEntity#is_broken= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mmodule:MModule> */
RET_LABEL129:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,((val*)NULL)) on <var_nmodule:AModule> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = ((val*)NULL); /* _mmodule on <var_nmodule:AModule> */
RET_LABEL130:(void)0;
}
}
} else {
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_imported_modules, var_sup122); /* Direct call array#Array#add on <var_imported_modules:Array[MModule]>*/
}
var131 = glob_sys;
{
var132 = nitc__model_base___core__Sys___public_visibility(var131);
}
{
nitc___nitc__MModule___set_visibility_for(var_mmodule, var_sup122, var132); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
}
} else {
}
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var135 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1119);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
var_136 = var133;
{
var137 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_136);
}
var_138 = var137;
for(;;) {
{
var139 = ((short int(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_138); /* is_ok on <var_138:Iterator[AImport]>*/
}
if (var139){
} else {
goto BREAK_label140;
}
{
var141 = ((val*(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_138); /* item on <var_138:Iterator[AImport]>*/
}
var_aimport142 = var141;
/* <var_aimport142:AImport> isa AStdImport */
cltype144 = type_nitc__AStdImport.color;
idtype145 = type_nitc__AStdImport.id;
if(cltype144 >= var_aimport142->type->table_size) {
var143 = 0;
} else {
var143 = var_aimport142->type->type_table[cltype144] == idtype145;
}
var146 = !var143;
if (var146){
goto BREAK_label147;
} else {
}
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "conditional";
var151 = core__abstract_text___CString___to_s_full(var150, 11l, 11l);
var149 = var151;
varonce148 = var149;
}
{
var152 = nitc___nitc__Prod___get_annotations(var_aimport142, var149);
}
var_atconditionals153 = var152;
{
var154 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_atconditionals153);
}
if (var154){
goto BREAK_label147;
} else {
}
{
{ /* Inline parser_nodes#AStdImport#n_name (var_aimport142) on <var_aimport142:AImport(AStdImport)> */
var157 = var_aimport142->attrs[COLOR_nitc__parser_nodes__AStdImport___n_name].val; /* _n_name on <var_aimport142:AImport(AStdImport)> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1167);
fatal_exit(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var160 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
var161 = nitc__loader___ModelBuilder___seach_module_by_amodule_name(self, var155, var158);
}
var_suppath = var161;
if (var_suppath == NULL) {
var162 = 1; /* is null */
} else {
var162 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_suppath,((val*)NULL)) on <var_suppath:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_suppath,var_other) on <var_suppath:nullable MModule(MModule)> */
var167 = var_suppath == var_other;
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
}
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
var162 = var163;
}
if (var162){
goto BREAK_label147;
} else {
}
var_168 = var_atconditionals153;
{
var169 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_168);
}
var_170 = var169;
for(;;) {
{
var171 = ((short int(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_170); /* is_ok on <var_170:IndexedIterator[AAnnotation]>*/
}
if (var171){
} else {
goto BREAK_label172;
}
{
var173 = ((val*(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_170); /* item on <var_170:IndexedIterator[AAnnotation]>*/
}
var_atconditional = var173;
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_atconditional) on <var_atconditional:AAnnotation> */
var176 = var_atconditional->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_atconditional:AAnnotation> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_nargs = var174;
{
var177 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var_nargs);
}
if (var177){
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "Syntax Error: `conditional` expects module identifiers as arguments.";
var181 = core__abstract_text___CString___to_s_full(var180, 68l, 68l);
var179 = var181;
varonce178 = var179;
}
{
nitc___nitc__ModelBuilder___error(self, var_atconditional, var179); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto BREAK_label182;
} else {
}
var183 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var183); /* Direct call array#Array#init on <var183:Array[MModule]>*/
}
var_rule = var183;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_rule, var_suppath); /* Direct call array#Array#add on <var_rule:Array[MModule]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_rule, var_mmodule); /* Direct call array#Array#add on <var_rule:Array[MModule]>*/
}
var_184 = var_nargs;
{
var185 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_184);
}
var_186 = var185;
for(;;) {
{
var187 = ((short int(*)(val* self))((((long)var_186&3)?class_info[((long)var_186&3)]:var_186->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_186); /* is_ok on <var_186:Iterator[AExpr]>*/
}
if (var187){
} else {
goto BREAK_label188;
}
{
var189 = ((val*(*)(val* self))((((long)var_186&3)?class_info[((long)var_186&3)]:var_186->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_186); /* item on <var_186:Iterator[AExpr]>*/
}
var_narg = var189;
{
var190 = nitc__parser_work___AExpr___as_id(var_narg);
}
var_id = var190;
if (var_id == NULL) {
var191 = 1; /* is null */
} else {
var191 = 0; /* arg is null but recv is not */
}
if (0) {
var192 = ((short int(*)(val* self, val* p0))(var_id->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_id, ((val*)NULL)); /* == on <var_id:nullable String>*/
var191 = var192;
}
if (var191){
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "Syntax Error: `conditional` expects module identifier as arguments.";
var196 = core__abstract_text___CString___to_s_full(var195, 67l, 67l);
var194 = var196;
varonce193 = var194;
}
{
nitc___nitc__ModelBuilder___error(self, var_narg, var194); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto BREAK_label197;
} else {
}
{
{ /* Inline mmodule#MModule#mgroup (var_mmodule) on <var_mmodule:MModule> */
var200 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var_mmodule:MModule> */
var198 = var200;
RET_LABEL199:(void)0;
}
}
{
var201 = nitc__loader___ModelBuilder___search_mmodule_by_name(self, var_narg, var198, var_id);
}
var_mp = var201;
if (var_mp == NULL) {
var202 = 1; /* is null */
} else {
var202 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mp,((val*)NULL)) on <var_mp:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mp,var_other) on <var_mp:nullable MModule(MModule)> */
var207 = var_mp == var_other;
var205 = var207;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
}
var203 = var205;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
var202 = var203;
}
if (var202){
goto BREAK_label197;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_rule, var_mp); /* Direct call array#Array#add on <var_rule:Array[MModule]>*/
}
BREAK_label197: (void)0;
{
((void(*)(val* self))((((long)var_186&3)?class_info[((long)var_186&3)]:var_186->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_186); /* next on <var_186:Iterator[AExpr]>*/
}
}
BREAK_label188: (void)0;
{
((void(*)(val* self))((((long)var_186&3)?class_info[((long)var_186&3)]:var_186->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_186); /* finish on <var_186:Iterator[AExpr]>*/
}
{
{ /* Inline loader#ModelBuilder#conditional_importations (self) on <self:ModelBuilder> */
var210 = self->attrs[COLOR_nitc__loader__ModelBuilder___conditional_importations].val; /* _conditional_importations on <self:ModelBuilder> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conditional_importations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1038);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var208, var_rule); /* Direct call array#Array#add on <var208:Array[SequenceRead[MModule]]>*/
}
BREAK_label182: (void)0;
{
((void(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_170); /* next on <var_170:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label172: (void)0;
{
((void(*)(val* self))((((long)var_170&3)?class_info[((long)var_170&3)]:var_170->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_170); /* finish on <var_170:IndexedIterator[AAnnotation]>*/
}
BREAK_label147: (void)0;
{
((void(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_138); /* next on <var_138:Iterator[AImport]>*/
}
}
BREAK_label140: (void)0;
{
((void(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_138); /* finish on <var_138:Iterator[AImport]>*/
}
{
nitc___nitc__MModule___set_imported_mmodules(var_mmodule, var_imported_modules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mmodule:MModule>*/
}
{
nitc__loader___ModelBuilder___apply_conditional_importations(self, var_mmodule); /* Direct call loader#ModelBuilder#apply_conditional_importations on <self:ModelBuilder>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var213 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
if (unlikely(varonce214==NULL)) {
var215 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = " imports ";
var219 = core__abstract_text___CString___to_s_full(var218, 9l, 9l);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var215)->values[1]=var217;
} else {
var215 = varonce214;
varonce214 = NULL;
}
{
var220 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var215)->values[0]=var220;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var223 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
var224 = poset___poset__POSetElement___direct_greaters(var221);
}
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = ", ";
var228 = core__abstract_text___CString___to_s_full(var227, 2l, 2l);
var226 = var228;
varonce225 = var226;
}
{
var229 = core__abstract_text___Collection___join(var224, var226, ((val*)NULL));
}
((struct instance_core__NativeArray*)var215)->values[2]=var229;
{
var230 = ((val*(*)(val* self))(var215->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var215); /* native_to_s on <var215:NativeArray[String]>*/
}
varonce214 = var215;
{
nitc___nitc__ToolContext___info(var211, var230, 3l); /* Direct call toolcontext#ToolContext#info on <var211:ToolContext>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var233 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
var234 = poset___poset__POSetElement___greaters(var231);
}
var_235 = var234;
{
var236 = ((val*(*)(val* self))((((long)var_235&3)?class_info[((long)var_235&3)]:var_235->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_235); /* iterator on <var_235:Collection[MModule]>*/
}
var_237 = var236;
for(;;) {
{
var238 = ((short int(*)(val* self))((((long)var_237&3)?class_info[((long)var_237&3)]:var_237->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_237); /* is_ok on <var_237:Iterator[MModule]>*/
}
if (var238){
} else {
goto BREAK_label239;
}
{
var240 = ((val*(*)(val* self))((((long)var_237&3)?class_info[((long)var_237&3)]:var_237->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_237); /* item on <var_237:Iterator[MModule]>*/
}
var_sup241 = var240;
{
{ /* Inline mmodule#MModule#name (var_sup241) on <var_sup241:MModule> */
var244 = var_sup241->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_sup241:MModule> */
if (unlikely(var244 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var242 = var244;
RET_LABEL243:(void)0;
}
}
if (likely(varonce245!=NULL)) {
var246 = varonce245;
} else {
var247 = "core";
var248 = core__abstract_text___CString___to_s_full(var247, 4l, 4l);
var246 = var248;
varonce245 = var246;
}
{
var249 = ((short int(*)(val* self, val* p0))(var242->class->vft[COLOR_core__kernel__Object___61d_61d]))(var242, var246); /* == on <var242:String>*/
}
if (var249){
var250 = glob_sys;
{
var251 = nitc__model_base___core__Sys___public_visibility(var250);
}
{
nitc___nitc__MModule___set_visibility_for(var_mmodule, var_sup241, var251); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_237&3)?class_info[((long)var_237&3)]:var_237->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_237); /* next on <var_237:Iterator[MModule]>*/
}
}
BREAK_label239: (void)0;
{
((void(*)(val* self))((((long)var_237&3)?class_info[((long)var_237&3)]:var_237->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_237); /* finish on <var_237:Iterator[MModule]>*/
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var254 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
{
var255 = poset___poset__POSetElement___direct_greaters(var252);
}
var_directs = var255;
{
{ /* Inline parser_nodes#AModule#n_imports (var_nmodule) on <var_nmodule:AModule> */
var258 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_imports].val; /* _n_imports on <var_nmodule:AModule> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_imports");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1119);
fatal_exit(1);
}
var256 = var258;
RET_LABEL257:(void)0;
}
}
var_259 = var256;
{
var260 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_259);
}
var_261 = var260;
for(;;) {
{
var262 = ((short int(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_261); /* is_ok on <var_261:Iterator[AImport]>*/
}
if (var262){
} else {
goto BREAK_label263;
}
{
var264 = ((val*(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_261); /* item on <var_261:Iterator[AImport]>*/
}
var_nim = var264;
/* <var_nim:AImport> isa AStdImport */
cltype266 = type_nitc__AStdImport.color;
idtype267 = type_nitc__AStdImport.id;
if(cltype266 >= var_nim->type->table_size) {
var265 = 0;
} else {
var265 = var_nim->type->type_table[cltype266] == idtype267;
}
var268 = !var265;
if (var268){
goto BREAK_label269;
} else {
}
{
{ /* Inline loader#AStdImport#mmodule (var_nim) on <var_nim:AImport(AStdImport)> */
var272 = var_nim->attrs[COLOR_nitc__loader__AStdImport___mmodule].val; /* _mmodule on <var_nim:AImport(AStdImport)> */
var270 = var272;
RET_LABEL271:(void)0;
}
}
var_im = var270;
if (var_im == NULL) {
var273 = 1; /* is null */
} else {
var273 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_im,((val*)NULL)) on <var_im:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_im,var_other) on <var_im:nullable MModule(MModule)> */
var278 = var_im == var_other;
var276 = var278;
goto RET_LABEL277;
RET_LABEL277:(void)0;
}
}
var274 = var276;
goto RET_LABEL275;
RET_LABEL275:(void)0;
}
var273 = var274;
}
if (var273){
goto BREAK_label269;
} else {
}
{
var279 = ((short int(*)(val* self, val* p0))((((long)var_directs&3)?class_info[((long)var_directs&3)]:var_directs->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var_directs, var_im); /* has on <var_directs:Collection[MModule]>*/
}
if (var279){
goto BREAK_label269;
} else {
}
BREAK_label269: (void)0;
{
((void(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_261); /* next on <var_261:Iterator[AImport]>*/
}
}
BREAK_label263: (void)0;
{
((void(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_261); /* finish on <var_261:Iterator[AImport]>*/
}
RET_LABEL:;
}
/* method loader#ModelBuilder#conditional_importations for (self: ModelBuilder): Array[SequenceRead[MModule]] */
val* nitc__loader___ModelBuilder___conditional_importations(val* self) {
val* var /* : Array[SequenceRead[MModule]] */;
val* var1 /* : Array[SequenceRead[MModule]] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___conditional_importations].val; /* _conditional_importations on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conditional_importations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1038);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#apply_conditional_importations for (self: ModelBuilder, MModule) */
void nitc__loader___ModelBuilder___apply_conditional_importations(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
short int var_check_conditional_importations /* var check_conditional_importations: Bool */;
val* var /* : Array[SequenceRead[MModule]] */;
val* var2 /* : Array[SequenceRead[MModule]] */;
val* var_ /* var : Array[SequenceRead[MModule]] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[SequenceRead[MModule]] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_ci /* var ci: SequenceRead[MModule] */;
long var_i /* var i: Int */;
long var7 /* : Int */;
long var_8 /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_m /* var m: MModule */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var_20 /* var : Bool */;
val* var21 /* : POSetElement[MModule] */;
val* var23 /* : POSetElement[MModule] */;
val* var24 /* : Collection[nullable Object] */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
long var28 /* : Int */;
val* var29 /* : nullable Object */;
val* var_sup /* var sup: MModule */;
val* var30 /* : nullable AModule */;
val* var_ast /* var ast: nullable AModule */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : POSetElement[MModule] */;
val* var39 /* : POSetElement[MModule] */;
val* var40 /* : Collection[nullable Object] */;
short int var41 /* : Bool */;
val* var42 /* : ToolContext */;
val* var44 /* : ToolContext */;
val* var45 /* : NativeArray[String] */;
static val* varonce;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : Sys */;
val* var54 /* : MVisibility */;
val* var55 /* : Array[MModule] */;
val* var_56 /* var : Array[MModule] */;
var_mmodule = p0;
var_check_conditional_importations = 1;
for(;;) {
if (var_check_conditional_importations){
var_check_conditional_importations = 0;
{
{ /* Inline loader#ModelBuilder#conditional_importations (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nitc__loader__ModelBuilder___conditional_importations].val; /* _conditional_importations on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conditional_importations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1038);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[SequenceRead[MModule]]>*/
}
if (var5){
} else {
goto BREAK_;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[SequenceRead[MModule]]>*/
}
var_ci = var6;
var_i = 1l;
{
var7 = ((long(*)(val* self))((((long)var_ci&3)?class_info[((long)var_ci&3)]:var_ci->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_ci); /* length on <var_ci:SequenceRead[MModule]>*/
}
var_8 = var7;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_8) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_8:Int> isa OTHER */
/* <var_8:Int> isa OTHER */
var11 = 1; /* easy <var_8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_i < var_8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self, long p0))((((long)var_ci&3)?class_info[((long)var_ci&3)]:var_ci->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_ci, var_i); /* [] on <var_ci:SequenceRead[MModule]>*/
}
var_m = var13;
{
{ /* Inline kernel#Object#== (var_mmodule,var_m) on <var_mmodule:MModule> */
var_other = var_m;
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:MModule> */
var19 = var_mmodule == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_20 = var15;
if (var15){
var14 = var_20;
} else {
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var23 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = poset___poset__POSetElement___greaters(var21);
}
{
var25 = ((short int(*)(val* self, val* p0))((((long)var24&3)?class_info[((long)var24&3)]:var24->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var24, var_m); /* has on <var24:Collection[nullable Object](Collection[MModule])>*/
}
var26 = !var25;
var14 = var26;
}
if (var14){
goto BREAK_27;
} else {
}
{
var28 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var28;
}
BREAK_label: (void)0;
{
var29 = ((val*(*)(val* self))((((long)var_ci&3)?class_info[((long)var_ci&3)]:var_ci->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var_ci); /* first on <var_ci:SequenceRead[MModule]>*/
}
var_sup = var29;
{
var30 = nitc__loader___MModule___load(var_sup, self);
}
var_ast = var30;
if (var_ast == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ast,((val*)NULL)) on <var_ast:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ast,var_other) on <var_ast:nullable AModule(AModule)> */
var36 = var_ast == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
goto BREAK_27;
} else {
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var39 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = poset___poset__POSetElement___greaters(var37);
}
{
var41 = ((short int(*)(val* self, val* p0))((((long)var40&3)?class_info[((long)var40&3)]:var40->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var40, var_sup); /* has on <var40:Collection[nullable Object](Collection[MModule])>*/
}
if (var41){
goto BREAK_27;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var44 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var45 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = " conditionally imports ";
var49 = core__abstract_text___CString___to_s_full(var48, 23l, 23l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var45)->values[1]=var47;
} else {
var45 = varonce;
varonce = NULL;
}
{
var50 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var45)->values[0]=var50;
{
var51 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:MModule>*/
}
((struct instance_core__NativeArray*)var45)->values[2]=var51;
{
var52 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce = var45;
{
nitc___nitc__ToolContext___info(var42, var52, 3l); /* Direct call toolcontext#ToolContext#info on <var42:ToolContext>*/
}
var53 = glob_sys;
{
var54 = nitc__model_base___core__Sys___public_visibility(var53);
}
{
nitc___nitc__MModule___set_visibility_for(var_mmodule, var_sup, var54); /* Direct call mmodule#MModule#set_visibility_for on <var_mmodule:MModule>*/
}
var55 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___with_capacity(var55, 1l); /* Direct call array#Array#with_capacity on <var55:Array[MModule]>*/
}
var_56 = var55;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_56, var_sup); /* Direct call array#AbstractArray#push on <var_56:Array[MModule]>*/
}
{
nitc___nitc__MModule___set_imported_mmodules(var_mmodule, var_56); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mmodule:MModule>*/
}
var_check_conditional_importations = 1;
BREAK_27: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[SequenceRead[MModule]]>*/
}
}
BREAK_: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[SequenceRead[MModule]]>*/
}
} else {
goto BREAK_label57;
}
}
BREAK_label57: (void)0;
RET_LABEL:;
}
/* method loader#ModelBuilder#nmodules for (self: ModelBuilder): Array[AModule] */
val* nitc__loader___ModelBuilder___nmodules(val* self) {
val* var /* : Array[AModule] */;
val* var1 /* : Array[AModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___nmodules].val; /* _nmodules on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1089);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#mmodule2nmodule for (self: ModelBuilder): HashMap[MModule, AModule] */
val* nitc__loader___ModelBuilder___mmodule2nmodule(val* self) {
val* var /* : HashMap[MModule, AModule] */;
val* var1 /* : HashMap[MModule, AModule] */;
var1 = self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1092);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method loader#ModelBuilder#mmodule2node for (self: ModelBuilder, MModule): nullable AModule */
val* nitc__loader___ModelBuilder___mmodule2node(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashMap[MModule, AModule] */;
val* var3 /* : HashMap[MModule, AModule] */;
val* var4 /* : nullable Object */;
var_mmodule = p0;
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1092);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, var_mmodule);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#MModule#parse for (self: MModule, ModelBuilder): nullable AModule */
val* nitc__loader___MModule___parse(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : HashMap[MModule, AModule] */;
val* var3 /* : HashMap[MModule, AModule] */;
val* var4 /* : nullable Object */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable String */;
val* var_filepath /* var filepath: nullable String */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable AModule */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other20 /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var25 /* : Location */;
val* var27 /* : Location */;
val* var29 /* : nullable MGroup */;
val* var31 /* : nullable MGroup */;
val* var32 /* : Array[MModule] */;
val* var34 /* : Array[MModule] */;
var_modelbuilder = p0;
{
{ /* Inline loader#ModelBuilder#mmodule2nmodule (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var3 = var_modelbuilder->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val; /* _mmodule2nmodule on <var_modelbuilder:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule2nmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1092);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, self);
}
var_nmodule = var4;
if (var_nmodule == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_nmodule->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nmodule, var_other); /* == on <var_nmodule:nullable AModule(AModule)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_nmodule;
goto RET_LABEL;
} else {
}
{
var10 = nitc___nitc__MModule___filepath(self);
}
var_filepath = var10;
if (var_filepath == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_filepath,((val*)NULL)) on <var_filepath:nullable String> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_filepath->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_filepath, var_other); /* == on <var_filepath:nullable String(String)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1124);
fatal_exit(1);
}
{
var16 = nitc__loader___ModelBuilder___load_module_ast(var_modelbuilder, var_filepath);
}
var_nmodule = var16;
if (var_nmodule == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other20 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other20) on <var_nmodule:nullable AModule(AModule)> */
var23 = var_nmodule == var_other20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline loader#AModule#mmodule= (var_nmodule,self) on <var_nmodule:nullable AModule(AModule)> */
var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val = self; /* _mmodule on <var_nmodule:nullable AModule(AModule)> */
RET_LABEL24:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:nullable AModule(AModule)> */
var27 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:nullable AModule(AModule)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline mmodule#MModule#location= (self,var25) on <self:MModule> */
self->attrs[COLOR_nitc__mmodule__MModule___location].val = var25; /* _location on <self:MModule> */
RET_LABEL28:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (self) on <self:MModule> */
var31 = self->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <self:MModule> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
nitc__loader___ModelBuilder___build_a_mmodule(var_modelbuilder, var29, var_nmodule); /* Direct call loader#ModelBuilder#build_a_mmodule on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline loader#ModelBuilder#parsed_modules (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var34 = var_modelbuilder->attrs[COLOR_nitc__loader__ModelBuilder___parsed_modules].val; /* _parsed_modules on <var_modelbuilder:ModelBuilder> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parsed_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 325);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var32, self); /* Direct call array#Array#add on <var32:Array[MModule]>*/
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#MModule#load for (self: MModule, ModelBuilder): nullable AModule */
val* nitc__loader___MModule___load(val* self, val* p0) {
val* var /* : nullable AModule */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : nullable AModule */;
val* var_nmodule /* var nmodule: nullable AModule */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
var_modelbuilder = p0;
{
var1 = nitc__loader___MModule___parse(self, var_modelbuilder);
}
var_nmodule = var1;
if (var_nmodule == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmodule,((val*)NULL)) on <var_nmodule:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmodule,var_other) on <var_nmodule:nullable AModule(AModule)> */
var7 = var_nmodule == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
nitc__loader___ModelBuilder___build_module_importation(var_modelbuilder, var_nmodule); /* Direct call loader#ModelBuilder#build_module_importation on <var_modelbuilder:ModelBuilder>*/
}
var = var_nmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#MPackage#ini for (self: MPackage): nullable ConfigTree */
val* nitc__loader___MPackage___ini(val* self) {
val* var /* : nullable ConfigTree */;
val* var1 /* : nullable ConfigTree */;
var1 = self->attrs[COLOR_nitc__loader__MPackage___ini].val; /* _ini on <self:MPackage> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#MPackage#ini= for (self: MPackage, nullable ConfigTree) */
void nitc__loader___MPackage___ini_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__MPackage___ini].val = p0; /* _ini on <self:MPackage> */
RET_LABEL:;
}
/* method loader#MPackage#excludes for (self: MPackage): nullable Array[String] */
val* nitc__loader___MPackage___excludes(val* self) {
val* var /* : nullable Array[String] */;
short int var1 /* : Bool */;
val* var2 /* : nullable Array[String] */;
val* var3 /* : nullable Array[String] */;
val* var5 /* : nullable ConfigTree */;
val* var7 /* : nullable ConfigTree */;
val* var_ini /* var ini: nullable ConfigTree */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable String */;
val* var_exclude /* var exclude: nullable String */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : Array[String] */;
val* var_excludes /* var excludes: Array[String] */;
var1 = self->attrs[COLOR_nitc__loader__MPackage__lazy_32d_excludes].s; /* lazy _excludes on <self:MPackage> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__loader__MPackage___excludes].val; /* _excludes on <self:MPackage> */
} else {
{
{
{ /* Inline loader#MPackage#ini (self) on <self:MPackage> */
var7 = self->attrs[COLOR_nitc__loader__MPackage___ini].val; /* _ini on <self:MPackage> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ini = var5;
if (var_ini == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ini,((val*)NULL)) on <var_ini:nullable ConfigTree> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ini,var_other) on <var_ini:nullable ConfigTree(ConfigTree)> */
var13 = var_ini == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var3 = ((val*)NULL);
goto RET_LABEL4;
} else {
}
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "source.exclude";
var16 = core__abstract_text___CString___to_s_full(var15, 14l, 14l);
var14 = var16;
varonce = var14;
}
{
var17 = ini___ini__ConfigTree____91d_93d(var_ini, var14);
}
var_exclude = var17;
if (var_exclude == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
var19 = ((short int(*)(val* self, val* p0))(var_exclude->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_exclude, ((val*)NULL)); /* == on <var_exclude:nullable String>*/
var18 = var19;
}
if (var18){
var3 = ((val*)NULL);
goto RET_LABEL4;
} else {
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = ":";
var23 = core__abstract_text___CString___to_s_full(var22, 1l, 1l);
var21 = var23;
varonce20 = var21;
}
{
var24 = core__string_search___Text___split(var_exclude, var21);
}
var_excludes = var24;
var3 = var_excludes;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__loader__MPackage___excludes].val = var3; /* _excludes on <self:MPackage> */
var2 = var3;
self->attrs[COLOR_nitc__loader__MPackage__lazy_32d_excludes].s = 1; /* lazy _excludes on <self:MPackage> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method loader#MPackage#accept for (self: MPackage, String): Bool */
short int nitc__loader___MPackage___accept(val* self, val* p0) {
short int var /* : Bool */;
val* var_filepath /* var filepath: String */;
val* var1 /* : nullable Array[String] */;
val* var_excludes /* var excludes: nullable Array[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable MGroup */;
val* var9 /* : nullable MGroup */;
val* var10 /* : nullable String */;
val* var11 /* : String */;
val* var_relpath /* var relpath: String */;
short int var12 /* : Bool */;
var_filepath = p0;
{
var1 = nitc__loader___MPackage___excludes(self);
}
var_excludes = var1;
if (var_excludes == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_excludes,((val*)NULL)) on <var_excludes:nullable Array[String]> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_excludes->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_excludes, var_other); /* == on <var_excludes:nullable Array[String](Array[String])>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
{ /* Inline mpackage#MPackage#root (self) on <self:MPackage> */
var9 = self->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <self:MPackage> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1174);
fatal_exit(1);
} else {
var10 = nitc___nitc__MGroup___filepath(var7);
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1174);
fatal_exit(1);
} else {
var11 = core__file___String___relpath(var10, var_filepath);
}
var_relpath = var11;
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_excludes, var_relpath);
}
if (var12){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#MGroup#scanned for (self: MGroup): Bool */
short int nitc__loader___MGroup___scanned(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__loader__MGroup___scanned].s; /* _scanned on <self:MGroup> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#MGroup#scanned= for (self: MGroup, Bool) */
void nitc__loader___MGroup___scanned_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__loader__MGroup___scanned].s = p0; /* _scanned on <self:MGroup> */
RET_LABEL:;
}
/* method loader#MGroup#mmodules_by_name for (self: MGroup, String): Array[MModule] */
val* nitc__loader___MGroup___mmodules_by_name(val* self, val* p0) {
val* var /* : Array[MModule] */;
val* var_name /* var name: String */;
val* var1 /* : Array[MModule] */;
val* var_res /* var res: Array[MModule] */;
val* var2 /* : POSetElement[MGroup] */;
val* var4 /* : POSetElement[MGroup] */;
val* var5 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MGroup] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[MGroup] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_g /* var g: MGroup */;
val* var10 /* : Array[MModule] */;
val* var12 /* : Array[MModule] */;
val* var_13 /* var : Array[MModule] */;
val* var14 /* : IndexedIterator[nullable Object] */;
val* var_15 /* var : IndexedIterator[MModule] */;
short int var16 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_mp /* var mp: MModule */;
val* var19 /* : String */;
val* var21 /* : String */;
short int var22 /* : Bool */;
var_name = p0;
var1 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[MModule]>*/
}
var_res = var1;
{
{ /* Inline mpackage#MGroup#in_nesting (self) on <self:MGroup> */
var4 = self->attrs[COLOR_nitc__mpackage__MGroup___in_nesting].val; /* _in_nesting on <self:MGroup> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_nesting");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 95);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = poset___poset__POSetElement___smallers(var2);
}
var_ = var5;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MGroup]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[MGroup]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[MGroup]>*/
}
var_g = var9;
{
{ /* Inline mmodule#MGroup#mmodules (var_g) on <var_g:MGroup> */
var12 = var_g->attrs[COLOR_nitc__mmodule__MGroup___mmodules].val; /* _mmodules on <var_g:MGroup> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 54);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_13 = var10;
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_13);
}
var_15 = var14;
for(;;) {
{
var16 = ((short int(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_15); /* is_ok on <var_15:IndexedIterator[MModule]>*/
}
if (var16){
} else {
goto BREAK_label17;
}
{
var18 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_15); /* item on <var_15:IndexedIterator[MModule]>*/
}
var_mp = var18;
{
{ /* Inline mmodule#MModule#name (var_mp) on <var_mp:MModule> */
var21 = var_mp->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mp:MModule> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = ((short int(*)(val* self, val* p0))(var19->class->vft[COLOR_core__kernel__Object___61d_61d]))(var19, var_name); /* == on <var19:String>*/
}
if (var22){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_mp); /* Direct call array#Array#add on <var_res:Array[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_15); /* next on <var_15:IndexedIterator[MModule]>*/
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_15); /* finish on <var_15:IndexedIterator[MModule]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[MGroup]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[MGroup]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method loader#SourceFile#mmodule for (self: SourceFile): nullable MModule */
val* nitc__loader___SourceFile___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__loader__SourceFile___mmodule].val; /* _mmodule on <self:SourceFile> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#SourceFile#mmodule= for (self: SourceFile, nullable MModule) */
void nitc__loader___SourceFile___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__SourceFile___mmodule].val = p0; /* _mmodule on <self:SourceFile> */
RET_LABEL:;
}
/* method loader#AStdImport#mmodule for (self: AStdImport): nullable MModule */
val* nitc__loader___AStdImport___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__loader__AStdImport___mmodule].val; /* _mmodule on <self:AStdImport> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#AStdImport#mmodule= for (self: AStdImport, nullable MModule) */
void nitc__loader___AStdImport___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__AStdImport___mmodule].val = p0; /* _mmodule on <self:AStdImport> */
RET_LABEL:;
}
/* method loader#AModule#mmodule for (self: AModule): nullable MModule */
val* nitc__loader___AModule___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#AModule#mmodule= for (self: AModule, nullable MModule) */
void nitc__loader___AModule___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__loader__AModule___mmodule].val = p0; /* _mmodule on <self:AModule> */
RET_LABEL:;
}
/* method loader#AModule#is_importation_done for (self: AModule): Bool */
short int nitc__loader___AModule___is_importation_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__loader__AModule___is_importation_done].s; /* _is_importation_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method loader#AModule#is_importation_done= for (self: AModule, Bool) */
void nitc__loader___AModule___is_importation_done_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__loader__AModule___is_importation_done].s = p0; /* _is_importation_done on <self:AModule> */
RET_LABEL:;
}
