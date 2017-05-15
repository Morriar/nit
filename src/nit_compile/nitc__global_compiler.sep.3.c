#include "nitc__global_compiler.sep.0.h"
/* method global_compiler#CustomizedRuntimeFunction#call for (self: CustomizedRuntimeFunction, GlobalCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___nitc__abstract_compiler__AbstractRuntimeFunction__call(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: GlobalCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var2 /* : MMethodDef */;
val* var4 /* : MMethodDef */;
val* var5 /* : nullable MSignature */;
val* var7 /* : nullable MSignature */;
val* var8 /* : nullable MType */;
val* var10 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var17 /* : MType */;
val* var18 /* : MMethodDef */;
val* var20 /* : MMethodDef */;
short int var21 /* : Bool */;
val* var22 /* : StaticFrame */;
val* var23 /* : MMethodDef */;
val* var25 /* : MMethodDef */;
val* var26 /* : MClassType */;
val* var28 /* : MClassType */;
val* var_frame /* var frame: StaticFrame */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : String */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : RuntimeVariable */;
val* var41 /* : nullable StaticFrame */;
val* var43 /* : nullable StaticFrame */;
val* var_old_frame /* var old_frame: nullable StaticFrame */;
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
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : MMethodDef */;
val* var68 /* : MMethodDef */;
val* var69 /* : nullable RuntimeVariable */;
val* var71 /* : NativeArray[String] */;
static val* varonce70;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
val* var76 /* : nullable String */;
val* var78 /* : nullable String */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var85 /* : nullable RuntimeVariable */;
val* var87 /* : nullable RuntimeVariable */;
val* var88 /* : MMethodDef */;
val* var90 /* : MMethodDef */;
val* var91 /* : AbstractCompiler */;
val* var93 /* : AbstractCompiler */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
val* var_other97 /* var other: nullable Object */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
val* var102 /* : NativeArray[String] */;
static val* varonce101;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var117 /* : String */;
val* var118 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var120 /* : NativeArray[String] */;
static val* varonce119;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
val* var133 /* : String */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var140 /* : String */;
/* Covariant cast for argument 0 (v) <p0:GlobalCompilerVisitor> isa VISITOR */
/* <p0:GlobalCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 1043);
fatal_exit(1);
}
var_v = p0;
var_arguments = p1;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var2) on <var2:MMethodDef> */
var7 = var2->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var2:MMethodDef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 1045);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var5) on <var5:nullable MSignature> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var10 = var5->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var5:nullable MSignature> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ret = var8;
if (var_ret == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
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
var16 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var17 = nitc___nitc__AbstractCompilerVisitor___resolve_for(var_v, var_ret, var16);
}
var_ret = var17;
} else {
}
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var20 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nitc__abstract_compiler___MMethodDef___can_inline(var18, var_v);
}
if (var21){
var22 = NEW_nitc__StaticFrame(&type_nitc__StaticFrame);
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline global_compiler#CustomizedRuntimeFunction#recv (self) on <self:CustomizedRuntimeFunction> */
var28 = self->attrs[COLOR_nitc__global_compiler__CustomizedRuntimeFunction___recv].val; /* _recv on <self:CustomizedRuntimeFunction> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 936);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d]))(var22, var_v); /* visitor= on <var22:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d]))(var22, var23); /* mpropdef= on <var22:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d]))(var22, var26); /* receiver= on <var22:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d]))(var22, var_arguments); /* arguments= on <var22:StaticFrame>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:StaticFrame>*/
}
var_frame = var22;
if (likely(varonce!=NULL)) {
var29 = varonce;
} else {
var30 = "RET_LABEL";
var31 = core__abstract_text___CString___to_s_full(var30, 9l, 9l);
var29 = var31;
varonce = var29;
}
{
var32 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var29);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel= (var_frame,var32) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val = var32; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL33:(void)0;
}
}
if (var_ret == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var37 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
{
var39 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_ret);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnvar= (var_frame,var39) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val = var39; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL40:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:GlobalCompilerVisitor> */
var43 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:GlobalCompilerVisitor> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_old_frame = var41;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:GlobalCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:GlobalCompilerVisitor> */
RET_LABEL44:(void)0;
}
}
if (unlikely(varonce45==NULL)) {
var46 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "{ /* Inline ";
var50 = core__abstract_text___CString___to_s_full(var49, 12l, 12l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var46)->values[0]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = " (";
var54 = core__abstract_text___CString___to_s_full(var53, 2l, 2l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var46)->values[2]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = ") */";
var58 = core__abstract_text___CString___to_s_full(var57, 4l, 4l);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var46)->values[4]=var56;
} else {
var46 = varonce45;
varonce45 = NULL;
}
{
var59 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:CustomizedRuntimeFunction>*/
}
((struct instance_core__NativeArray*)var46)->values[1]=var59;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ",";
var63 = core__abstract_text___CString___to_s_full(var62, 1l, 1l);
var61 = var63;
varonce60 = var61;
}
{
var64 = core__abstract_text___Collection___join(var_arguments, var61, ((val*)NULL));
}
((struct instance_core__NativeArray*)var46)->values[3]=var64;
{
var65 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var65); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var68 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = nitc__abstract_compiler___MMethodDef___compile_inside_to_c(var66, var_v, var_arguments);
}
if (unlikely(varonce70==NULL)) {
var71 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = ":(void)0;";
var75 = core__abstract_text___CString___to_s_full(var74, 9l, 9l);
var73 = var75;
varonce72 = var73;
}
((struct instance_core__NativeArray*)var71)->values[1]=var73;
} else {
var71 = varonce70;
varonce70 = NULL;
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var_frame) on <var_frame:StaticFrame> */
var78 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 1059);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var71)->values[0]=var76;
{
var79 = ((val*(*)(val* self))(var71->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var71); /* native_to_s on <var71:NativeArray[String]>*/
}
varonce70 = var71;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var79); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "}";
var83 = core__abstract_text___CString___to_s_full(var82, 1l, 1l);
var81 = var83;
varonce80 = var81;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_old_frame) on <var_v:GlobalCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <var_v:GlobalCompilerVisitor> */
RET_LABEL84:(void)0;
}
}
{
{ /* Inline abstract_compiler#StaticFrame#returnvar (var_frame) on <var_frame:StaticFrame> */
var87 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var_frame:StaticFrame> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var = var85;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var90 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(var_v, var88, var_arguments); /* Direct call global_compiler#GlobalCompilerVisitor#adapt_signature on <var_v:GlobalCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:GlobalCompilerVisitor> */
var93 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:GlobalCompilerVisitor> */
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
nitc___nitc__GlobalCompiler___todo(var91, self); /* Direct call global_compiler#GlobalCompiler#todo on <var91:AbstractCompiler(GlobalCompiler)>*/
}
if (var_ret == NULL) {
var94 = 1; /* is null */
} else {
var94 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other97 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other97) on <var_ret:nullable MType(MType)> */
var100 = var_ret == var_other97;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var95 = var98;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
var94 = var95;
}
if (var94){
if (unlikely(varonce101==NULL)) {
var102 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "(";
var106 = core__abstract_text___CString___to_s_full(var105, 1l, 1l);
var104 = var106;
varonce103 = var104;
}
((struct instance_core__NativeArray*)var102)->values[1]=var104;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = ");";
var110 = core__abstract_text___CString___to_s_full(var109, 2l, 2l);
var108 = var110;
varonce107 = var108;
}
((struct instance_core__NativeArray*)var102)->values[3]=var108;
} else {
var102 = varonce101;
varonce101 = NULL;
}
{
var111 = nitc___nitc__AbstractRuntimeFunction___c_name(self);
}
((struct instance_core__NativeArray*)var102)->values[0]=var111;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = ",";
var115 = core__abstract_text___CString___to_s_full(var114, 1l, 1l);
var113 = var115;
varonce112 = var113;
}
{
var116 = core__abstract_text___Collection___join(var_arguments, var113, ((val*)NULL));
}
((struct instance_core__NativeArray*)var102)->values[2]=var116;
{
var117 = ((val*(*)(val* self))(var102->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var102); /* native_to_s on <var102:NativeArray[String]>*/
}
varonce101 = var102;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var117); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
var118 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_ret);
}
var_res = var118;
if (unlikely(varonce119==NULL)) {
var120 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = " = ";
var124 = core__abstract_text___CString___to_s_full(var123, 3l, 3l);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var120)->values[1]=var122;
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "(";
var128 = core__abstract_text___CString___to_s_full(var127, 1l, 1l);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var120)->values[3]=var126;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = ");";
var132 = core__abstract_text___CString___to_s_full(var131, 2l, 2l);
var130 = var132;
varonce129 = var130;
}
((struct instance_core__NativeArray*)var120)->values[5]=var130;
} else {
var120 = varonce119;
varonce119 = NULL;
}
{
var133 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var120)->values[0]=var133;
{
var134 = nitc___nitc__AbstractRuntimeFunction___c_name(self);
}
((struct instance_core__NativeArray*)var120)->values[2]=var134;
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = ",";
var138 = core__abstract_text___CString___to_s_full(var137, 1l, 1l);
var136 = var138;
varonce135 = var136;
}
{
var139 = core__abstract_text___Collection___join(var_arguments, var136, ((val*)NULL));
}
((struct instance_core__NativeArray*)var120)->values[4]=var139;
{
var140 = ((val*(*)(val* self))(var120->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var120); /* native_to_s on <var120:NativeArray[String]>*/
}
varonce119 = var120;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var140); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#init for (self: CustomizedRuntimeFunction) */
void nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___core__kernel__Object__init]))(self); /* init on <self:CustomizedRuntimeFunction>*/
}
RET_LABEL:;
}
