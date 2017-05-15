#include "nitc__global_compiler.sep.0.h"
/* method global_compiler#GlobalCompilerVisitor#supercall for (self: GlobalCompilerVisitor, MMethodDef, MClassType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__supercall(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_recvtype /* var recvtype: MClassType */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var1 /* : nullable Object */;
val* var2 /* : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
val* var3 /* : MProperty */;
val* var5 /* : MProperty */;
val* var6 /* : MPropDef */;
val* var8 /* : MPropDef */;
val* var9 /* : nullable MSignature */;
val* var11 /* : nullable MSignature */;
val* var12 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var21 /* : nullable Object */;
val* var22 /* : MType */;
val* var23 /* : RuntimeVariable */;
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
val* var38 /* : nullable Object */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : nullable Object */;
val* var42 /* : MType */;
val* var44 /* : MType */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var47 /* : MType */;
val* var49 /* : MType */;
short int var50 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mclasstype /* var mclasstype: MClassType */;
val* var51 /* : AbstractCompiler */;
val* var53 /* : AbstractCompiler */;
val* var54 /* : RapidTypeAnalysis */;
val* var56 /* : RapidTypeAnalysis */;
val* var57 /* : HashSet[MClassType] */;
val* var59 /* : HashSet[MClassType] */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var74 /* : AbstractCompiler */;
val* var76 /* : AbstractCompiler */;
val* var77 /* : MModule */;
val* var79 /* : MModule */;
val* var80 /* : MPropDef */;
val* var_propdef /* var propdef: MMethodDef */;
val* var81 /* : nullable RuntimeVariable */;
val* var_res2 /* var res2: nullable RuntimeVariable */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var_other85 /* var other: nullable Object */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
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
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
val* var107 /* : nullable Object */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var110 /* : String */;
val* var111 /* : nullable Object */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
val* var117 /* : NativeArray[String] */;
static val* varonce116;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
val* var126 /* : nullable Object */;
val* var127 /* : String */;
val* var128 /* : String */;
val* var129 /* : nullable Object */;
val* var_last /* var last: MClassType */;
val* var_ /* var : Array[MClassType] */;
val* var130 /* : IndexedIterator[nullable Object] */;
val* var_131 /* var : IndexedIterator[MClassType] */;
short int var132 /* : Bool */;
val* var133 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var134 /* : AbstractCompiler */;
val* var136 /* : AbstractCompiler */;
val* var137 /* : MModule */;
val* var139 /* : MModule */;
val* var140 /* : MPropDef */;
val* var_propdef141 /* var propdef: MMethodDef */;
short int var142 /* : Bool */;
val* var143 /* : AbstractCompiler */;
val* var145 /* : AbstractCompiler */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var_148 /* var : Bool */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
val* var155 /* : NativeArray[String] */;
static val* varonce154;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : CString */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : CString */;
val* var163 /* : String */;
val* var164 /* : String */;
val* var165 /* : String */;
val* var167 /* : NativeArray[String] */;
static val* varonce166;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : CString */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var180 /* : AbstractCompiler */;
val* var182 /* : AbstractCompiler */;
val* var183 /* : String */;
val* var184 /* : String */;
val* var185 /* : String */;
val* var186 /* : nullable RuntimeVariable */;
val* var_res2187 /* var res2: nullable RuntimeVariable */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : CString */;
val* var196 /* : String */;
val* var197 /* : AbstractCompiler */;
val* var199 /* : AbstractCompiler */;
short int var200 /* : Bool */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : CString */;
val* var204 /* : String */;
val* var205 /* : nullable Object */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : CString */;
val* var209 /* : String */;
var_m = p0;
var_recvtype = p1;
var_args = p2;
{
var1 = core___core__SequenceRead___Collection__first(var_args);
}
{
var2 = nitc___nitc__GlobalCompilerVisitor___collect_types(self, var1);
}
var_types = var2;
{
{ /* Inline model#MPropDef#mproperty (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var3) on <var3:MProperty(MMethod)> */
var8 = var3->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var3:MProperty(MMethod)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var6) on <var6:MPropDef(MMethodDef)> */
var11 = var6->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var6:MPropDef(MMethodDef)> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 559);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var9) on <var9:nullable MSignature> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var14 = var9->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var9:nullable MSignature> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ret = var12;
if (var_ret == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var20 = var_ret == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
var_res = ((val*)NULL);
} else {
{
var21 = core___core__SequenceRead___Collection__first(var_args);
}
{
var22 = nitc___nitc__AbstractCompilerVisitor___resolve_for(self, var_ret, var21);
}
var_ret = var22;
{
var23 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res = var23;
}
if (unlikely(varonce==NULL)) {
var24 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "/* super ";
var28 = core__abstract_text___CString___to_s_full(var27, 9l, 9l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var24)->values[0]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " on ";
var32 = core__abstract_text___CString___to_s_full(var31, 4l, 4l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var24)->values[2]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = " */";
var36 = core__abstract_text___CString___to_s_full(var35, 3l, 3l);
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
var38 = core___core__SequenceRead___Collection__first(var_args);
}
{
var39 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var38);
}
((struct instance_core__NativeArray*)var24)->values[3]=var39;
{
var40 = ((val*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce = var24;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var40); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var41 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var41) on <var41:nullable Object(RuntimeVariable)> */
var44 = var41->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var41:nullable Object(RuntimeVariable)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = ((short int(*)(val* self))(var42->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var42); /* is_c_primitive on <var42:MType>*/
}
if (var45){
{
var46 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var46) on <var46:nullable Object(RuntimeVariable)> */
var49 = var46->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var46:nullable Object(RuntimeVariable)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
/* <var47:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var47->type->table_size) {
var50 = 0;
} else {
var50 = var47->type->type_table[cltype] == idtype;
}
if (unlikely(!var50)) {
var_class_name = var47 == NULL ? "null" : var47->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 569);
fatal_exit(1);
}
var_mclasstype = var47;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var53 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (var51) on <var51:AbstractCompiler(GlobalCompiler)> */
var56 = var51->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var51:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var54) on <var54:RapidTypeAnalysis> */
var59 = var54->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var54:RapidTypeAnalysis> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = core___core__HashSet___core__abstract_collection__Collection__has(var57, var_mclasstype);
}
var61 = !var60;
if (var61){
if (unlikely(varonce62==NULL)) {
var63 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "/* skip, no method ";
var67 = core__abstract_text___CString___to_s_full(var66, 19l, 19l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var63)->values[0]=var65;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = " */";
var71 = core__abstract_text___CString___to_s_full(var70, 3l, 3l);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var63)->values[2]=var69;
} else {
var63 = varonce62;
varonce62 = NULL;
}
{
var72 = ((val*(*)(val* self))(var_m->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_m); /* to_s on <var_m:MMethodDef>*/
}
((struct instance_core__NativeArray*)var63)->values[1]=var72;
{
var73 = ((val*(*)(val* self))(var63->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var73); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var76 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var74) on <var74:AbstractCompiler(GlobalCompiler)> */
var79 = var74->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var74:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = nitc___nitc__MPropDef___lookup_next_definition(var_m, var77, var_mclasstype);
}
var_propdef = var80;
{
var81 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_propdef, var_mclasstype, var_args);
}
var_res2 = var81;
if (var_res == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other85 = ((val*)NULL);
{
var86 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other85); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var87 = !var86;
var83 = var87;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
if (var82){
if (unlikely(var_res2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 576);
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
var88 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_types);
}
if (var88){
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "{";
var92 = core__abstract_text___CString___to_s_full(var91, 1l, 1l);
var90 = var92;
varonce89 = var90;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var90); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (unlikely(varonce93==NULL)) {
var94 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "/*BUG: no live types for ";
var98 = core__abstract_text___CString___to_s_full(var97, 25l, 25l);
var96 = var98;
varonce95 = var96;
}
((struct instance_core__NativeArray*)var94)->values[0]=var96;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = " . ";
var102 = core__abstract_text___CString___to_s_full(var101, 3l, 3l);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var94)->values[2]=var100;
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "*/";
var106 = core__abstract_text___CString___to_s_full(var105, 2l, 2l);
var104 = var106;
varonce103 = var104;
}
((struct instance_core__NativeArray*)var94)->values[4]=var104;
} else {
var94 = varonce93;
varonce93 = NULL;
}
{
var107 = core___core__SequenceRead___Collection__first(var_args);
}
{
var108 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var107);
}
((struct instance_core__NativeArray*)var94)->values[1]=var108;
{
var109 = ((val*(*)(val* self))(var_m->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_m); /* to_s on <var_m:MMethodDef>*/
}
((struct instance_core__NativeArray*)var94)->values[3]=var109;
{
var110 = ((val*(*)(val* self))(var94->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var94); /* native_to_s on <var94:NativeArray[String]>*/
}
varonce93 = var94;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var110); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var111 = core___core__SequenceRead___Collection__first(var_args);
}
{
nitc___nitc__GlobalCompilerVisitor___bugtype(self, var111); /* Direct call global_compiler#GlobalCompilerVisitor#bugtype on <self:GlobalCompilerVisitor>*/
}
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "}";
var115 = core__abstract_text___CString___to_s_full(var114, 1l, 1l);
var113 = var115;
varonce112 = var113;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var113); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce116==NULL)) {
var117 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "switch(";
var121 = core__abstract_text___CString___to_s_full(var120, 7l, 7l);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var117)->values[0]=var119;
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "->classid) {";
var125 = core__abstract_text___CString___to_s_full(var124, 12l, 12l);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var117)->values[2]=var123;
} else {
var117 = varonce116;
varonce116 = NULL;
}
{
var126 = core___core__SequenceRead___Collection__first(var_args);
}
{
var127 = ((val*(*)(val* self))(var126->class->vft[COLOR_core__abstract_text__Object__to_s]))(var126); /* to_s on <var126:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var117)->values[1]=var127;
{
var128 = ((val*(*)(val* self))(var117->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var117); /* native_to_s on <var117:NativeArray[String]>*/
}
varonce116 = var117;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var128); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var129 = core___core__SequenceRead___last(var_types);
}
var_last = var129;
var_ = var_types;
{
var130 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_131 = var130;
for(;;) {
{
var132 = ((short int(*)(val* self))((((long)var_131&3)?class_info[((long)var_131&3)]:var_131->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_131); /* is_ok on <var_131:IndexedIterator[MClassType]>*/
}
if (var132){
} else {
goto BREAK_label;
}
{
var133 = ((val*(*)(val* self))((((long)var_131&3)?class_info[((long)var_131&3)]:var_131->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_131); /* item on <var_131:IndexedIterator[MClassType]>*/
}
var_t = var133;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var136 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var134) on <var134:AbstractCompiler(GlobalCompiler)> */
var139 = var134->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var134:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
var140 = nitc___nitc__MPropDef___lookup_next_definition(var_m, var137, var_t);
}
var_propdef141 = var140;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var145 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
var146 = nitc___nitc__AbstractCompiler___hardening(var143);
}
var147 = !var146;
var_148 = var147;
if (var147){
{
{ /* Inline kernel#Object#== (var_t,var_last) on <var_t:MClassType> */
var_other = var_last;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:MClassType> */
var153 = var_t == var_other;
var151 = var153;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
}
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
var142 = var149;
} else {
var142 = var_148;
}
if (var142){
if (unlikely(varonce154==NULL)) {
var155 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "default: /* test ";
var159 = core__abstract_text___CString___to_s_full(var158, 17l, 17l);
var157 = var159;
varonce156 = var157;
}
((struct instance_core__NativeArray*)var155)->values[0]=var157;
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = " */";
var163 = core__abstract_text___CString___to_s_full(var162, 3l, 3l);
var161 = var163;
varonce160 = var161;
}
((struct instance_core__NativeArray*)var155)->values[2]=var161;
} else {
var155 = varonce154;
varonce154 = NULL;
}
{
var164 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MClassType>*/
}
((struct instance_core__NativeArray*)var155)->values[1]=var164;
{
var165 = ((val*(*)(val* self))(var155->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var155); /* native_to_s on <var155:NativeArray[String]>*/
}
varonce154 = var155;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var165); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce166==NULL)) {
var167 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "case ";
var171 = core__abstract_text___CString___to_s_full(var170, 5l, 5l);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var167)->values[0]=var169;
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = ": /* test ";
var175 = core__abstract_text___CString___to_s_full(var174, 10l, 10l);
var173 = var175;
varonce172 = var173;
}
((struct instance_core__NativeArray*)var167)->values[2]=var173;
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = " */";
var179 = core__abstract_text___CString___to_s_full(var178, 3l, 3l);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var167)->values[4]=var177;
} else {
var167 = varonce166;
varonce166 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var182 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var182 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
var183 = nitc___nitc__GlobalCompiler___classid(var180, var_t);
}
((struct instance_core__NativeArray*)var167)->values[1]=var183;
{
var184 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MClassType>*/
}
((struct instance_core__NativeArray*)var167)->values[3]=var184;
{
var185 = ((val*(*)(val* self))(var167->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var167); /* native_to_s on <var167:NativeArray[String]>*/
}
varonce166 = var167;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var185); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
{
var186 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_propdef141, var_t, var_args);
}
var_res2187 = var186;
if (var_res == NULL) {
var188 = 0; /* is null */
} else {
var188 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other85 = ((val*)NULL);
{
var191 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other85); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var192 = !var191;
var189 = var192;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
var188 = var189;
}
if (var188){
if (unlikely(var_res2187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 598);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(self, var_res, var_res2187); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:GlobalCompilerVisitor>*/
}
} else {
}
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "break;";
var196 = core__abstract_text___CString___to_s_full(var195, 6l, 6l);
var194 = var196;
varonce193 = var194;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var194); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_131&3)?class_info[((long)var_131&3)]:var_131->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_131); /* next on <var_131:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_131&3)?class_info[((long)var_131&3)]:var_131->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_131); /* finish on <var_131:IndexedIterator[MClassType]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var199 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var199 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
{
var200 = nitc___nitc__AbstractCompiler___hardening(var197);
}
if (var200){
if (likely(varonce201!=NULL)) {
var202 = varonce201;
} else {
var203 = "default: /* bug */";
var204 = core__abstract_text___CString___to_s_full(var203, 18l, 18l);
var202 = var204;
varonce201 = var202;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var202); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var205 = core___core__SequenceRead___Collection__first(var_args);
}
{
nitc___nitc__GlobalCompilerVisitor___bugtype(self, var205); /* Direct call global_compiler#GlobalCompilerVisitor#bugtype on <self:GlobalCompilerVisitor>*/
}
} else {
}
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = "}";
var209 = core__abstract_text___CString___to_s_full(var208, 1l, 1l);
var207 = var209;
varonce206 = var207;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var207); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#adapt_signature for (self: GlobalCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
long var_i /* var i: Int */;
val* var1 /* : nullable MSignature */;
val* var3 /* : nullable MSignature */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : nullable MSignature */;
val* var11 /* : nullable MSignature */;
val* var12 /* : Array[MParameter] */;
val* var14 /* : Array[MParameter] */;
val* var15 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var16 /* : MType */;
val* var18 /* : MType */;
val* var_t /* var t: MType */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
val* var29 /* : nullable Object */;
val* var30 /* : MType */;
val* var32 /* : MType */;
val* var33 /* : MType */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
val* var48 /* : nullable Object */;
val* var49 /* : RuntimeVariable */;
long var50 /* : Int */;
var_m = p0;
var_args = p1;
{
var = core___core__SequenceRead___Collection__first(var_args);
}
var_recv = var;
var_i = 0l;
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var3 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 612);
fatal_exit(1);
} else {
var4 = nitc___nitc__MSignature___arity(var1);
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 613);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var9) on <var9:nullable MSignature> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var14 = var9->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var9:nullable MSignature> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var12, var_i);
}
var_mp = var15;
{
{ /* Inline model#MParameter#mtype (var_mp) on <var_mp:MParameter> */
var18 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_t = var16;
{
{ /* Inline model#MParameter#is_vararg (var_mp) on <var_mp:MParameter> */
var21 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_i + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
var29 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var22);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var29) on <var29:nullable Object(RuntimeVariable)> */
var32 = var29->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var29:nullable Object(RuntimeVariable)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_t = var30;
} else {
}
{
var33 = nitc___nitc__AbstractCompilerVisitor___resolve_for(self, var_t, var_recv);
}
var_t = var33;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var36 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var40 = var_i + 1l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var43 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var47 = var_i + 1l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
var48 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var41);
}
{
var49 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var48, var_t);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_args, var34, var49); /* Direct call array#Array#[]= on <var_args:Array[RuntimeVariable]>*/
}
{
var50 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var50;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#unbox_signature_extern for (self: GlobalCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
long var_i /* var i: Int */;
val* var1 /* : nullable MSignature */;
val* var3 /* : nullable MSignature */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : nullable MSignature */;
val* var11 /* : nullable MSignature */;
val* var12 /* : Array[MParameter] */;
val* var14 /* : Array[MParameter] */;
val* var15 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var16 /* : MType */;
val* var18 /* : MType */;
val* var_t /* var t: MType */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
val* var29 /* : nullable Object */;
val* var30 /* : MType */;
val* var32 /* : MType */;
val* var33 /* : MType */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
val* var51 /* : nullable Object */;
val* var52 /* : RuntimeVariable */;
long var53 /* : Int */;
var_m = p0;
var_args = p1;
{
var = core___core__SequenceRead___Collection__first(var_args);
}
var_recv = var;
var_i = 0l;
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var3 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 626);
fatal_exit(1);
} else {
var4 = nitc___nitc__MSignature___arity(var1);
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 627);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var9) on <var9:nullable MSignature> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var14 = var9->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var9:nullable MSignature> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var12, var_i);
}
var_mp = var15;
{
{ /* Inline model#MParameter#mtype (var_mp) on <var_mp:MParameter> */
var18 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_t = var16;
{
{ /* Inline model#MParameter#is_vararg (var_mp) on <var_mp:MParameter> */
var21 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_i + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
var29 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var22);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var29) on <var29:nullable Object(RuntimeVariable)> */
var32 = var29->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var29:nullable Object(RuntimeVariable)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_t = var30;
} else {
}
{
var33 = nitc___nitc__AbstractCompilerVisitor___resolve_for(self, var_t, var_recv);
}
var_t = var33;
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:MMethodDef> */
var36 = var_m->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var43 = var_i + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_i + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
var51 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var44);
}
{
var52 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern(self, var51, var_t);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_args, var37, var52); /* Direct call array#Array#[]= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
{
var53 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var53;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#vararg_instance for (self: GlobalCompilerVisitor, MPropDef, RuntimeVariable, Array[RuntimeVariable], MType): RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__vararg_instance(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : RuntimeVariable */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_varargs /* var varargs: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : MType */;
val* var2 /* : RuntimeVariable */;
var_mpropdef = p0;
var_recv = p1;
var_varargs = p2;
var_elttype = p3;
{
var1 = nitc___nitc__AbstractCompilerVisitor___resolve_for(self, var_elttype, var_recv);
}
var_elttype = var1;
{
var2 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance(self, var_varargs, var_elttype);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#bugtype for (self: GlobalCompilerVisitor, RuntimeVariable) */
void nitc___nitc__GlobalCompilerVisitor___bugtype(val* self, val* p0) {
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : MType */;
val* var2 /* : MType */;
short int var3 /* : Bool */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : MType */;
val* var20 /* : MType */;
val* var21 /* : String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
var_recv = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var2 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((short int(*)(val* self))(var->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var); /* is_c_primitive on <var:MType>*/
}
if (var3){
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "PRINT_ERROR(\"BTD BUG: Dynamic type is %s, static type is %s\\n\", class_names[";
var8 = core__abstract_text___CString___to_s_full(var7, 76l, 76l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "->classid], \"";
var12 = core__abstract_text___CString___to_s_full(var11, 13l, 13l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "\");";
var16 = core__abstract_text___CString___to_s_full(var15, 3l, 3l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var4)->values[4]=var14;
} else {
var4 = varonce;
varonce = NULL;
}
{
var17 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4)->values[1]=var17;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var20 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__Object__to_s]))(var18); /* to_s on <var18:MType>*/
}
((struct instance_core__NativeArray*)var4)->values[3]=var21;
{
var22 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "fatal_exit(1);";
var26 = core__abstract_text___CString___to_s_full(var25, 14l, 14l);
var24 = var26;
varonce23 = var24;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#isset_attribute for (self: GlobalCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__isset_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
val* var2 /* : MClassType */;
val* var3 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var4 /* : Bool */;
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
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
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
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : nullable Object */;
val* var_last /* var last: MClassType */;
val* var_ /* var : Array[MClassType] */;
val* var51 /* : IndexedIterator[nullable Object] */;
val* var_52 /* var : IndexedIterator[MClassType] */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_t /* var t: MClassType */;
short int var55 /* : Bool */;
val* var56 /* : AbstractCompiler */;
val* var58 /* : AbstractCompiler */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var_61 /* var : Bool */;
short int var62 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
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
val* var77 /* : AbstractCompiler */;
val* var79 /* : AbstractCompiler */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var83 /* : NativeArray[String] */;
static val* varonce82;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : AbstractCompiler */;
val* var94 /* : AbstractCompiler */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : RuntimeVariable */;
val* var_recv2 /* var recv2: RuntimeVariable */;
val* var98 /* : MPropDef */;
val* var100 /* : MPropDef */;
val* var101 /* : nullable MType */;
val* var103 /* : nullable MType */;
val* var_ta /* var ta: MType */;
val* var104 /* : MType */;
val* var106 /* : NativeArray[String] */;
static val* varonce105;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
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
val* var121 /* : MPropDef */;
val* var123 /* : MPropDef */;
val* var124 /* : String */;
val* var125 /* : String */;
val* var126 /* : RuntimeVariable */;
val* var_attr /* var attr: RuntimeVariable */;
short int var127 /* : Bool */;
int cltype;
int idtype;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
val* var132 /* : NativeArray[String] */;
static val* varonce131;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
val* var141 /* : String */;
val* var142 /* : String */;
val* var143 /* : String */;
val* var145 /* : NativeArray[String] */;
static val* varonce144;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : CString */;
val* var155 /* : String */;
val* var156 /* : AbstractCompiler */;
val* var158 /* : AbstractCompiler */;
short int var159 /* : Bool */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : CString */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
var_a = p0;
var_recv = p1;
{
nitc___nitc__AbstractCompilerVisitor___check_recv_notnull(self, var_recv); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:GlobalCompilerVisitor>*/
}
{
var1 = nitc___nitc__GlobalCompilerVisitor___collect_types(self, var_recv);
}
var_types = var1;
{
var2 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var3 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var2);
}
var_res = var3;
{
var4 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_types);
}
if (var4){
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "/*BUG: no live types for ";
var9 = core__abstract_text___CString___to_s_full(var8, 25l, 25l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = " . ";
var13 = core__abstract_text___CString___to_s_full(var12, 3l, 3l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var5)->values[2]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "*/";
var17 = core__abstract_text___CString___to_s_full(var16, 2l, 2l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var5)->values[4]=var15;
} else {
var5 = varonce;
varonce = NULL;
}
{
var18 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var5)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var5)->values[3]=var19;
{
var20 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var20); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
nitc___nitc__GlobalCompilerVisitor___bugtype(self, var_recv); /* Direct call global_compiler#GlobalCompilerVisitor#bugtype on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce21==NULL)) {
var22 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "/* isset ";
var26 = core__abstract_text___CString___to_s_full(var25, 9l, 9l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[0]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " on ";
var30 = core__abstract_text___CString___to_s_full(var29, 4l, 4l);
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
var35 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var22)->values[1]=var35;
{
var36 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var22)->values[3]=var36;
{
var37 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce21 = var22;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (unlikely(varonce38==NULL)) {
var39 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "switch(";
var43 = core__abstract_text___CString___to_s_full(var42, 7l, 7l);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var39)->values[0]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "->classid) {";
var47 = core__abstract_text___CString___to_s_full(var46, 12l, 12l);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var39)->values[2]=var45;
} else {
var39 = varonce38;
varonce38 = NULL;
}
{
var48 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var39)->values[1]=var48;
{
var49 = ((val*(*)(val* self))(var39->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var39); /* native_to_s on <var39:NativeArray[String]>*/
}
varonce38 = var39;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var50 = core___core__SequenceRead___last(var_types);
}
var_last = var50;
var_ = var_types;
{
var51 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_52 = var51;
for(;;) {
{
var53 = ((short int(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_52); /* is_ok on <var_52:IndexedIterator[MClassType]>*/
}
if (var53){
} else {
goto BREAK_label;
}
{
var54 = ((val*(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_52); /* item on <var_52:IndexedIterator[MClassType]>*/
}
var_t = var54;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var58 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nitc___nitc__AbstractCompiler___hardening(var56);
}
var60 = !var59;
var_61 = var60;
if (var60){
{
{ /* Inline kernel#Object#== (var_t,var_last) on <var_t:MClassType> */
var_other = var_last;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:MClassType> */
var66 = var_t == var_other;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var55 = var62;
} else {
var55 = var_61;
}
if (var55){
if (unlikely(varonce67==NULL)) {
var68 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "default: /*";
var72 = core__abstract_text___CString___to_s_full(var71, 11l, 11l);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var68)->values[0]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "*/";
var76 = core__abstract_text___CString___to_s_full(var75, 2l, 2l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var68)->values[2]=var74;
} else {
var68 = varonce67;
varonce67 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var79 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = nitc___nitc__GlobalCompiler___classid(var77, var_t);
}
((struct instance_core__NativeArray*)var68)->values[1]=var80;
{
var81 = ((val*(*)(val* self))(var68->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce67 = var68;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce82==NULL)) {
var83 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "case ";
var87 = core__abstract_text___CString___to_s_full(var86, 5l, 5l);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var83)->values[0]=var85;
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = ":";
var91 = core__abstract_text___CString___to_s_full(var90, 1l, 1l);
var89 = var91;
varonce88 = var89;
}
((struct instance_core__NativeArray*)var83)->values[2]=var89;
} else {
var83 = varonce82;
varonce82 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var94 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = nitc___nitc__GlobalCompiler___classid(var92, var_t);
}
((struct instance_core__NativeArray*)var83)->values[1]=var95;
{
var96 = ((val*(*)(val* self))(var83->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var83); /* native_to_s on <var83:NativeArray[String]>*/
}
varonce82 = var83;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var96); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
{
var97 = nitc___nitc__AbstractCompilerVisitor___autoadapt(self, var_recv, var_t);
}
var_recv2 = var97;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var100 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var98) on <var98:MPropDef(MAttributeDef)> */
var103 = var98->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var98:MPropDef(MAttributeDef)> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 673);
fatal_exit(1);
}
var_ta = var101;
{
var104 = nitc___nitc__AbstractCompilerVisitor___resolve_for(self, var_ta, var_recv2);
}
var_ta = var104;
if (unlikely(varonce105==NULL)) {
var106 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "((struct ";
var110 = core__abstract_text___CString___to_s_full(var109, 9l, 9l);
var108 = var110;
varonce107 = var108;
}
((struct instance_core__NativeArray*)var106)->values[0]=var108;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "*)";
var114 = core__abstract_text___CString___to_s_full(var113, 2l, 2l);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var106)->values[2]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = ")->";
var118 = core__abstract_text___CString___to_s_full(var117, 3l, 3l);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var106)->values[4]=var116;
} else {
var106 = varonce105;
varonce105 = NULL;
}
{
var119 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_t); /* c_name on <var_t:MClassType>*/
}
((struct instance_core__NativeArray*)var106)->values[1]=var119;
{
var120 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var106)->values[3]=var120;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var123 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
var124 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(var121);
}
((struct instance_core__NativeArray*)var106)->values[5]=var124;
{
var125 = ((val*(*)(val* self))(var106->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var106); /* native_to_s on <var106:NativeArray[String]>*/
}
varonce105 = var106;
{
var126 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var125, var_ta);
}
var_attr = var126;
/* <var_ta:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_ta->type->table_size) {
var127 = 0;
} else {
var127 = var_ta->type->type_table[cltype] == idtype;
}
var128 = !var127;
if (var128){
{
var129 = ((short int(*)(val* self))(var_ta->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_ta); /* is_c_primitive on <var_ta:MType>*/
}
var130 = !var129;
if (var130){
if (unlikely(varonce131==NULL)) {
var132 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = " = (";
var136 = core__abstract_text___CString___to_s_full(var135, 4l, 4l);
var134 = var136;
varonce133 = var134;
}
((struct instance_core__NativeArray*)var132)->values[1]=var134;
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = " != NULL);";
var140 = core__abstract_text___CString___to_s_full(var139, 10l, 10l);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var132)->values[3]=var138;
} else {
var132 = varonce131;
varonce131 = NULL;
}
{
var141 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var132)->values[0]=var141;
{
var142 = ((val*(*)(val* self))(var_attr->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_attr); /* to_s on <var_attr:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var132)->values[2]=var142;
{
var143 = ((val*(*)(val* self))(var132->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var132); /* native_to_s on <var132:NativeArray[String]>*/
}
varonce131 = var132;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var143); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce144==NULL)) {
var145 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = " = 1; /*NOTYET isset on primitive attributes*/";
var149 = core__abstract_text___CString___to_s_full(var148, 46l, 46l);
var147 = var149;
varonce146 = var147;
}
((struct instance_core__NativeArray*)var145)->values[1]=var147;
} else {
var145 = varonce144;
varonce144 = NULL;
}
{
var150 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var145)->values[0]=var150;
{
var151 = ((val*(*)(val* self))(var145->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var145); /* native_to_s on <var145:NativeArray[String]>*/
}
varonce144 = var145;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var151); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
} else {
}
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = "break;";
var155 = core__abstract_text___CString___to_s_full(var154, 6l, 6l);
var153 = var155;
varonce152 = var153;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var153); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_52); /* next on <var_52:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_52); /* finish on <var_52:IndexedIterator[MClassType]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var158 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
var159 = nitc___nitc__AbstractCompiler___hardening(var156);
}
if (var159){
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "default: /* Bug */";
var163 = core__abstract_text___CString___to_s_full(var162, 18l, 18l);
var161 = var163;
varonce160 = var161;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var161); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
nitc___nitc__GlobalCompilerVisitor___bugtype(self, var_recv); /* Direct call global_compiler#GlobalCompilerVisitor#bugtype on <self:GlobalCompilerVisitor>*/
}
} else {
}
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "}";
var167 = core__abstract_text___CString___to_s_full(var166, 1l, 1l);
var165 = var167;
varonce164 = var165;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var165); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#read_attribute for (self: GlobalCompilerVisitor, MAttribute, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
val* var2 /* : MPropDef */;
val* var4 /* : MPropDef */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var_ret /* var ret: MType */;
val* var8 /* : MType */;
val* var9 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var10 /* : Bool */;
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
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var45 /* : NativeArray[String] */;
static val* varonce44;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var56 /* : nullable Object */;
val* var_last /* var last: MClassType */;
val* var_ /* var : Array[MClassType] */;
val* var57 /* : IndexedIterator[nullable Object] */;
val* var_58 /* var : IndexedIterator[MClassType] */;
short int var59 /* : Bool */;
val* var60 /* : nullable Object */;
val* var_t /* var t: MClassType */;
short int var61 /* : Bool */;
val* var62 /* : AbstractCompiler */;
val* var64 /* : AbstractCompiler */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var_67 /* var : Bool */;
short int var68 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
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
val* var83 /* : AbstractCompiler */;
val* var85 /* : AbstractCompiler */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : AbstractCompiler */;
val* var100 /* : AbstractCompiler */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : RuntimeVariable */;
val* var_recv2 /* var recv2: RuntimeVariable */;
val* var104 /* : MPropDef */;
val* var106 /* : MPropDef */;
val* var107 /* : nullable MType */;
val* var109 /* : nullable MType */;
val* var_ta /* var ta: MType */;
val* var110 /* : MType */;
val* var112 /* : NativeArray[String] */;
static val* varonce111;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
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
val* var127 /* : MPropDef */;
val* var129 /* : MPropDef */;
val* var130 /* : String */;
val* var131 /* : String */;
val* var132 /* : RuntimeVariable */;
val* var_res2 /* var res2: RuntimeVariable */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
int cltype;
int idtype;
short int var135 /* : Bool */;
short int var_136 /* var : Bool */;
val* var137 /* : AbstractCompiler */;
val* var139 /* : AbstractCompiler */;
val* var140 /* : ModelBuilder */;
val* var142 /* : ModelBuilder */;
val* var143 /* : ToolContext */;
val* var145 /* : ToolContext */;
val* var146 /* : OptionBool */;
val* var148 /* : OptionBool */;
val* var149 /* : nullable Object */;
val* var151 /* : nullable Object */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
val* var157 /* : NativeArray[String] */;
static val* varonce156;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : CString */;
val* var165 /* : String */;
val* var166 /* : String */;
val* var167 /* : String */;
val* var169 /* : NativeArray[String] */;
static val* varonce168;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : CString */;
val* var173 /* : String */;
val* var174 /* : String */;
val* var176 /* : String */;
val* var177 /* : String */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : CString */;
val* var181 /* : String */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : CString */;
val* var185 /* : String */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : CString */;
val* var189 /* : String */;
val* var190 /* : AbstractCompiler */;
val* var192 /* : AbstractCompiler */;
short int var193 /* : Bool */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : CString */;
val* var197 /* : String */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
var_a = p0;
var_recv = p1;
{
nitc___nitc__AbstractCompilerVisitor___check_recv_notnull(self, var_recv); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:GlobalCompilerVisitor>*/
}
{
var1 = nitc___nitc__GlobalCompilerVisitor___collect_types(self, var_recv);
}
var_types = var1;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var4 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var2) on <var2:MPropDef(MAttributeDef)> */
var7 = var2->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var2:MPropDef(MAttributeDef)> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 700);
fatal_exit(1);
}
var_ret = var5;
{
var8 = nitc___nitc__AbstractCompilerVisitor___resolve_for(self, var_ret, var_recv);
}
var_ret = var8;
{
var9 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_ret);
}
var_res = var9;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_types);
}
if (var10){
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "/*BUG: no live types for ";
var15 = core__abstract_text___CString___to_s_full(var14, 25l, 25l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = " . ";
var19 = core__abstract_text___CString___to_s_full(var18, 3l, 3l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var11)->values[2]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "*/";
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
var24 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var11)->values[1]=var24;
{
var25 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var11)->values[3]=var25;
{
var26 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
nitc___nitc__GlobalCompilerVisitor___bugtype(self, var_recv); /* Direct call global_compiler#GlobalCompilerVisitor#bugtype on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce27==NULL)) {
var28 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "/* read ";
var32 = core__abstract_text___CString___to_s_full(var31, 8l, 8l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var28)->values[0]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = " on ";
var36 = core__abstract_text___CString___to_s_full(var35, 4l, 4l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var28)->values[2]=var34;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = " */";
var40 = core__abstract_text___CString___to_s_full(var39, 3l, 3l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var28)->values[4]=var38;
} else {
var28 = varonce27;
varonce27 = NULL;
}
{
var41 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var28)->values[1]=var41;
{
var42 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var28)->values[3]=var42;
{
var43 = ((val*(*)(val* self))(var28->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce27 = var28;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (unlikely(varonce44==NULL)) {
var45 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "switch(";
var49 = core__abstract_text___CString___to_s_full(var48, 7l, 7l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var45)->values[0]=var47;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "->classid) {";
var53 = core__abstract_text___CString___to_s_full(var52, 12l, 12l);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var45)->values[2]=var51;
} else {
var45 = varonce44;
varonce44 = NULL;
}
{
var54 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var45)->values[1]=var54;
{
var55 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var56 = core___core__SequenceRead___last(var_types);
}
var_last = var56;
var_ = var_types;
{
var57 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_58 = var57;
for(;;) {
{
var59 = ((short int(*)(val* self))((((long)var_58&3)?class_info[((long)var_58&3)]:var_58->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_58); /* is_ok on <var_58:IndexedIterator[MClassType]>*/
}
if (var59){
} else {
goto BREAK_label;
}
{
var60 = ((val*(*)(val* self))((((long)var_58&3)?class_info[((long)var_58&3)]:var_58->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_58); /* item on <var_58:IndexedIterator[MClassType]>*/
}
var_t = var60;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var64 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = nitc___nitc__AbstractCompiler___hardening(var62);
}
var66 = !var65;
var_67 = var66;
if (var66){
{
{ /* Inline kernel#Object#== (var_t,var_last) on <var_t:MClassType> */
var_other = var_last;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:MClassType> */
var72 = var_t == var_other;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var61 = var68;
} else {
var61 = var_67;
}
if (var61){
if (unlikely(varonce73==NULL)) {
var74 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "default: /*";
var78 = core__abstract_text___CString___to_s_full(var77, 11l, 11l);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[0]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "*/";
var82 = core__abstract_text___CString___to_s_full(var81, 2l, 2l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var74)->values[2]=var80;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var85 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = nitc___nitc__GlobalCompiler___classid(var83, var_t);
}
((struct instance_core__NativeArray*)var74)->values[1]=var86;
{
var87 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var87); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce88==NULL)) {
var89 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "case ";
var93 = core__abstract_text___CString___to_s_full(var92, 5l, 5l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var89)->values[0]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = ":";
var97 = core__abstract_text___CString___to_s_full(var96, 1l, 1l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var89)->values[2]=var95;
} else {
var89 = varonce88;
varonce88 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var100 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = nitc___nitc__GlobalCompiler___classid(var98, var_t);
}
((struct instance_core__NativeArray*)var89)->values[1]=var101;
{
var102 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var102); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
{
var103 = nitc___nitc__AbstractCompilerVisitor___autoadapt(self, var_recv, var_t);
}
var_recv2 = var103;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var106 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var104) on <var104:MPropDef(MAttributeDef)> */
var109 = var104->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var104:MPropDef(MAttributeDef)> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 719);
fatal_exit(1);
}
var_ta = var107;
{
var110 = nitc___nitc__AbstractCompilerVisitor___resolve_for(self, var_ta, var_recv2);
}
var_ta = var110;
if (unlikely(varonce111==NULL)) {
var112 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "((struct ";
var116 = core__abstract_text___CString___to_s_full(var115, 9l, 9l);
var114 = var116;
varonce113 = var114;
}
((struct instance_core__NativeArray*)var112)->values[0]=var114;
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "*)";
var120 = core__abstract_text___CString___to_s_full(var119, 2l, 2l);
var118 = var120;
varonce117 = var118;
}
((struct instance_core__NativeArray*)var112)->values[2]=var118;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = ")->";
var124 = core__abstract_text___CString___to_s_full(var123, 3l, 3l);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var112)->values[4]=var122;
} else {
var112 = varonce111;
varonce111 = NULL;
}
{
var125 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_t); /* c_name on <var_t:MClassType>*/
}
((struct instance_core__NativeArray*)var112)->values[1]=var125;
{
var126 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var112)->values[3]=var126;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var129 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
var130 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(var127);
}
((struct instance_core__NativeArray*)var112)->values[5]=var130;
{
var131 = ((val*(*)(val* self))(var112->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var112); /* native_to_s on <var112:NativeArray[String]>*/
}
varonce111 = var112;
{
var132 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var131, var_ta);
}
var_res2 = var132;
/* <var_ta:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_ta->type->table_size) {
var134 = 0;
} else {
var134 = var_ta->type->type_table[cltype] == idtype;
}
var135 = !var134;
var_136 = var135;
if (var135){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var139 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var137) on <var137:AbstractCompiler(GlobalCompiler)> */
var142 = var137->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var137:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var140) on <var140:ModelBuilder> */
var145 = var140->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var140:ModelBuilder> */
if (unlikely(var145 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var143 = var145;
RET_LABEL144:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (var143) on <var143:ToolContext> */
var148 = var143->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <var143:ToolContext> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 50);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline opts#Option#value (var146) on <var146:OptionBool> */
var151 = var146->attrs[COLOR_opts__Option___value].val; /* _value on <var146:OptionBool> */
var149 = var151;
RET_LABEL150:(void)0;
}
}
var152 = (short int)((long)(var149)>>2);
var153 = !var152;
var133 = var153;
} else {
var133 = var_136;
}
if (var133){
{
var154 = ((short int(*)(val* self))(var_ta->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_ta); /* is_c_primitive on <var_ta:MType>*/
}
var155 = !var154;
if (var155){
if (unlikely(varonce156==NULL)) {
var157 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "if (";
var161 = core__abstract_text___CString___to_s_full(var160, 4l, 4l);
var159 = var161;
varonce158 = var159;
}
((struct instance_core__NativeArray*)var157)->values[0]=var159;
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = " == NULL) {";
var165 = core__abstract_text___CString___to_s_full(var164, 11l, 11l);
var163 = var165;
varonce162 = var163;
}
((struct instance_core__NativeArray*)var157)->values[2]=var163;
} else {
var157 = varonce156;
varonce156 = NULL;
}
{
var166 = ((val*(*)(val* self))(var_res2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res2); /* to_s on <var_res2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var157)->values[1]=var166;
{
var167 = ((val*(*)(val* self))(var157->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var157); /* native_to_s on <var157:NativeArray[String]>*/
}
varonce156 = var157;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var167); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (unlikely(varonce168==NULL)) {
var169 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "Uninitialized attribute ";
var173 = core__abstract_text___CString___to_s_full(var172, 24l, 24l);
var171 = var173;
varonce170 = var171;
}
((struct instance_core__NativeArray*)var169)->values[0]=var171;
} else {
var169 = varonce168;
varonce168 = NULL;
}
{
{ /* Inline model#MProperty#name (var_a) on <var_a:MAttribute> */
var176 = var_a->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_a:MAttribute> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
((struct instance_core__NativeArray*)var169)->values[1]=var174;
{
var177 = ((val*(*)(val* self))(var169->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var169); /* native_to_s on <var169:NativeArray[String]>*/
}
varonce168 = var169;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var177); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:GlobalCompilerVisitor>*/
}
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "}";
var181 = core__abstract_text___CString___to_s_full(var180, 1l, 1l);
var179 = var181;
varonce178 = var179;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var179); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = "/*NOTYET isset on primitive attributes*/";
var185 = core__abstract_text___CString___to_s_full(var184, 40l, 40l);
var183 = var185;
varonce182 = var183;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var183); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
} else {
}
{
nitc___nitc__AbstractCompilerVisitor___assign(self, var_res, var_res2); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:GlobalCompilerVisitor>*/
}
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "break;";
var189 = core__abstract_text___CString___to_s_full(var188, 6l, 6l);
var187 = var189;
varonce186 = var187;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var187); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_58&3)?class_info[((long)var_58&3)]:var_58->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_58); /* next on <var_58:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_58&3)?class_info[((long)var_58&3)]:var_58->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_58); /* finish on <var_58:IndexedIterator[MClassType]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var192 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var192 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
{
var193 = nitc___nitc__AbstractCompiler___hardening(var190);
}
if (var193){
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = "default: /* Bug */";
var197 = core__abstract_text___CString___to_s_full(var196, 18l, 18l);
var195 = var197;
varonce194 = var195;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var195); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
nitc___nitc__GlobalCompilerVisitor___bugtype(self, var_recv); /* Direct call global_compiler#GlobalCompilerVisitor#bugtype on <self:GlobalCompilerVisitor>*/
}
} else {
}
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "}";
var201 = core__abstract_text___CString___to_s_full(var200, 1l, 1l);
var199 = var201;
varonce198 = var199;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var199); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#write_attribute for (self: GlobalCompilerVisitor, MAttribute, RuntimeVariable, RuntimeVariable) */
void nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(val* self, val* p0, val* p1, val* p2) {
val* var_a /* var a: MAttribute */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var /* : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
short int var1 /* : Bool */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
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
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
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
val* var47 /* : nullable Object */;
val* var_last /* var last: MClassType */;
val* var_ /* var : Array[MClassType] */;
val* var48 /* : IndexedIterator[nullable Object] */;
val* var_49 /* var : IndexedIterator[MClassType] */;
short int var50 /* : Bool */;
val* var51 /* : nullable Object */;
val* var_t /* var t: MClassType */;
short int var52 /* : Bool */;
val* var53 /* : AbstractCompiler */;
val* var55 /* : AbstractCompiler */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var_58 /* var : Bool */;
short int var59 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
val* var65 /* : NativeArray[String] */;
static val* varonce64;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : AbstractCompiler */;
val* var76 /* : AbstractCompiler */;
val* var77 /* : String */;
val* var78 /* : String */;
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
val* var89 /* : AbstractCompiler */;
val* var91 /* : AbstractCompiler */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var94 /* : RuntimeVariable */;
val* var_recv2 /* var recv2: RuntimeVariable */;
val* var95 /* : MPropDef */;
val* var97 /* : MPropDef */;
val* var98 /* : nullable MType */;
val* var100 /* : nullable MType */;
val* var_ta /* var ta: MType */;
val* var101 /* : MType */;
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
val* var126 /* : MPropDef */;
val* var128 /* : MPropDef */;
val* var129 /* : String */;
val* var130 /* : RuntimeVariable */;
val* var131 /* : String */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
val* var137 /* : AbstractCompiler */;
val* var139 /* : AbstractCompiler */;
short int var140 /* : Bool */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
var_a = p0;
var_recv = p1;
var_value = p2;
{
nitc___nitc__AbstractCompilerVisitor___check_recv_notnull(self, var_recv); /* Direct call abstract_compiler#AbstractCompilerVisitor#check_recv_notnull on <self:GlobalCompilerVisitor>*/
}
{
var = nitc___nitc__GlobalCompilerVisitor___collect_types(self, var_recv);
}
var_types = var;
{
var1 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_types);
}
if (var1){
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "/*BUG: no live types for ";
var6 = core__abstract_text___CString___to_s_full(var5, 25l, 25l);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[0]=var4;
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = " . ";
var10 = core__abstract_text___CString___to_s_full(var9, 3l, 3l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var2)->values[2]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "*/";
var14 = core__abstract_text___CString___to_s_full(var13, 2l, 2l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var2)->values[4]=var12;
} else {
var2 = varonce;
varonce = NULL;
}
{
var15 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var2)->values[1]=var15;
{
var16 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var2)->values[3]=var16;
{
var17 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var17); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
nitc___nitc__GlobalCompilerVisitor___bugtype(self, var_recv); /* Direct call global_compiler#GlobalCompilerVisitor#bugtype on <self:GlobalCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
if (unlikely(varonce18==NULL)) {
var19 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "/* write ";
var23 = core__abstract_text___CString___to_s_full(var22, 9l, 9l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[0]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = " on ";
var27 = core__abstract_text___CString___to_s_full(var26, 4l, 4l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var19)->values[2]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = " */";
var31 = core__abstract_text___CString___to_s_full(var30, 3l, 3l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var19)->values[4]=var29;
} else {
var19 = varonce18;
varonce18 = NULL;
}
{
var32 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:MAttribute>*/
}
((struct instance_core__NativeArray*)var19)->values[1]=var32;
{
var33 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_recv);
}
((struct instance_core__NativeArray*)var19)->values[3]=var33;
{
var34 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce18 = var19;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (unlikely(varonce35==NULL)) {
var36 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "switch(";
var40 = core__abstract_text___CString___to_s_full(var39, 7l, 7l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var36)->values[0]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "->classid) {";
var44 = core__abstract_text___CString___to_s_full(var43, 12l, 12l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var36)->values[2]=var42;
} else {
var36 = varonce35;
varonce35 = NULL;
}
{
var45 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var36)->values[1]=var45;
{
var46 = ((val*(*)(val* self))(var36->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var47 = core___core__SequenceRead___last(var_types);
}
var_last = var47;
var_ = var_types;
{
var48 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_49 = var48;
for(;;) {
{
var50 = ((short int(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_49); /* is_ok on <var_49:IndexedIterator[MClassType]>*/
}
if (var50){
} else {
goto BREAK_label;
}
{
var51 = ((val*(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_49); /* item on <var_49:IndexedIterator[MClassType]>*/
}
var_t = var51;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var55 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = nitc___nitc__AbstractCompiler___hardening(var53);
}
var57 = !var56;
var_58 = var57;
if (var57){
{
{ /* Inline kernel#Object#== (var_t,var_last) on <var_t:MClassType> */
var_other = var_last;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:MClassType> */
var63 = var_t == var_other;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var52 = var59;
} else {
var52 = var_58;
}
if (var52){
if (unlikely(varonce64==NULL)) {
var65 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "default: /*";
var69 = core__abstract_text___CString___to_s_full(var68, 11l, 11l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var65)->values[0]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "*/";
var73 = core__abstract_text___CString___to_s_full(var72, 2l, 2l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var65)->values[2]=var71;
} else {
var65 = varonce64;
varonce64 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var76 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = nitc___nitc__GlobalCompiler___classid(var74, var_t);
}
((struct instance_core__NativeArray*)var65)->values[1]=var77;
{
var78 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var78); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "case ";
var84 = core__abstract_text___CString___to_s_full(var83, 5l, 5l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[0]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = ":";
var88 = core__abstract_text___CString___to_s_full(var87, 1l, 1l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var80)->values[2]=var86;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var91 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = nitc___nitc__GlobalCompiler___classid(var89, var_t);
}
((struct instance_core__NativeArray*)var80)->values[1]=var92;
{
var93 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var93); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
{
var94 = nitc___nitc__AbstractCompilerVisitor___autoadapt(self, var_recv, var_t);
}
var_recv2 = var94;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var97 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var95) on <var95:MPropDef(MAttributeDef)> */
var100 = var95->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var95:MPropDef(MAttributeDef)> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 764);
fatal_exit(1);
}
var_ta = var98;
{
var101 = nitc___nitc__AbstractCompilerVisitor___resolve_for(self, var_ta, var_recv2);
}
var_ta = var101;
if (unlikely(varonce102==NULL)) {
var103 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
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
var114 = ")->";
var115 = core__abstract_text___CString___to_s_full(var114, 3l, 3l);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var103)->values[4]=var113;
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = " = ";
var119 = core__abstract_text___CString___to_s_full(var118, 3l, 3l);
var117 = var119;
varonce116 = var117;
}
((struct instance_core__NativeArray*)var103)->values[6]=var117;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = ";";
var123 = core__abstract_text___CString___to_s_full(var122, 1l, 1l);
var121 = var123;
varonce120 = var121;
}
((struct instance_core__NativeArray*)var103)->values[8]=var121;
} else {
var103 = varonce102;
varonce102 = NULL;
}
{
var124 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_t); /* c_name on <var_t:MClassType>*/
}
((struct instance_core__NativeArray*)var103)->values[1]=var124;
{
var125 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var103)->values[3]=var125;
{
{ /* Inline model#MProperty#intro (var_a) on <var_a:MAttribute> */
var128 = var_a->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_a:MAttribute> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
var129 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(var126);
}
((struct instance_core__NativeArray*)var103)->values[5]=var129;
{
var130 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value, var_ta);
}
{
var131 = ((val*(*)(val* self))(var130->class->vft[COLOR_core__abstract_text__Object__to_s]))(var130); /* to_s on <var130:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var103)->values[7]=var131;
{
var132 = ((val*(*)(val* self))(var103->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var132); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "break;";
var136 = core__abstract_text___CString___to_s_full(var135, 6l, 6l);
var134 = var136;
varonce133 = var134;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var134); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_49); /* next on <var_49:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_49); /* finish on <var_49:IndexedIterator[MClassType]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var139 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
var140 = nitc___nitc__AbstractCompiler___hardening(var137);
}
if (var140){
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "default: /* Bug*/";
var144 = core__abstract_text___CString___to_s_full(var143, 17l, 17l);
var142 = var144;
varonce141 = var142;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var142); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
nitc___nitc__GlobalCompilerVisitor___bugtype(self, var_recv); /* Direct call global_compiler#GlobalCompilerVisitor#bugtype on <self:GlobalCompilerVisitor>*/
}
} else {
}
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "}";
var148 = core__abstract_text___CString___to_s_full(var147, 1l, 1l);
var146 = var148;
varonce145 = var146;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var146); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
RET_LABEL:;
}
/* method global_compiler#GlobalCompilerVisitor#init_instance for (self: GlobalCompilerVisitor, MClassType): RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__init_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var3 /* : AbstractCompiler */;
val* var5 /* : AbstractCompiler */;
val* var6 /* : RapidTypeAnalysis */;
val* var8 /* : RapidTypeAnalysis */;
val* var9 /* : HashSet[MClassType] */;
val* var11 /* : HashSet[MClassType] */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var26 /* : NativeArray[String] */;
static val* varonce25;
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
val* var37 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
var_mtype = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
/* <var1:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 778);
fatal_exit(1);
}
var_mtype = var1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (var3) on <var3:AbstractCompiler(GlobalCompiler)> */
var8 = var3->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var3:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var6) on <var6:RapidTypeAnalysis> */
var11 = var6->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var6:RapidTypeAnalysis> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = core___core__HashSet___core__abstract_collection__Collection__has(var9, var_mtype);
}
var13 = !var12;
if (var13){
if (unlikely(varonce==NULL)) {
var14 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "problem: ";
var18 = core__abstract_text___CString___to_s_full(var17, 9l, 9l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = " was detected dead";
var22 = core__abstract_text___CString___to_s_full(var21, 18l, 18l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var14)->values[2]=var20;
} else {
var14 = varonce;
varonce = NULL;
}
{
var23 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var14)->values[1]=var23;
{
var24 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
nitc___nitc__AbstractCompilerVisitor___debug(self, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:GlobalCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce25==NULL)) {
var26 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "NEW_";
var30 = core__abstract_text___CString___to_s_full(var29, 4l, 4l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[0]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "()";
var34 = core__abstract_text___CString___to_s_full(var33, 2l, 2l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var26)->values[2]=var32;
} else {
var26 = varonce25;
varonce25 = NULL;
}
{
var35 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var26)->values[1]=var35;
{
var36 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce25 = var26;
{
var37 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var36, var_mtype);
}
var_res = var37;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,1) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL38:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#type_test for (self: GlobalCompilerVisitor, RuntimeVariable, MType, String): RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__type_test(val* self, val* p0, val* p1, val* p2) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
val* var1 /* : MType */;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : RapidTypeAnalysis */;
val* var7 /* : RapidTypeAnalysis */;
val* var8 /* : HashSet[MType] */;
val* var10 /* : HashSet[MType] */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
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
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : Array[MClassType] */;
val* var_types /* var types: Array[MClassType] */;
val* var25 /* : MClassType */;
val* var26 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : MType */;
val* var46 /* : MType */;
short int var47 /* : Bool */;
val* var48 /* : MType */;
val* var50 /* : MType */;
val* var51 /* : AbstractCompiler */;
val* var53 /* : AbstractCompiler */;
val* var54 /* : MModule */;
val* var56 /* : MModule */;
short int var57 /* : Bool */;
val* var59 /* : NativeArray[String] */;
static val* varonce58;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var67 /* : NativeArray[String] */;
static val* varonce66;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : String */;
short int var74 /* : Bool */;
val* var75 /* : MType */;
val* var77 /* : MType */;
short int var78 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var79 /* : MType */;
val* var81 /* : MType */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
val* var86 /* : NativeArray[String] */;
static val* varonce85;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : String */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
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
val* var111 /* : String */;
val* var112 /* : String */;
val* var114 /* : NativeArray[String] */;
static val* varonce113;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : CString */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : String */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
val* var131 /* : NativeArray[String] */;
static val* varonce130;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : CString */;
val* var139 /* : String */;
val* var140 /* : String */;
val* var141 /* : String */;
val* var_142 /* var : Array[MClassType] */;
val* var143 /* : IndexedIterator[nullable Object] */;
val* var_144 /* var : IndexedIterator[MClassType] */;
short int var145 /* : Bool */;
val* var146 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var147 /* : AbstractCompiler */;
val* var149 /* : AbstractCompiler */;
val* var150 /* : MModule */;
val* var152 /* : MModule */;
short int var153 /* : Bool */;
val* var155 /* : NativeArray[String] */;
static val* varonce154;
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
val* var168 /* : AbstractCompiler */;
val* var170 /* : AbstractCompiler */;
val* var171 /* : String */;
val* var172 /* : String */;
val* var173 /* : String */;
val* var175 /* : NativeArray[String] */;
static val* varonce174;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var180 /* : String */;
val* var181 /* : String */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : CString */;
val* var185 /* : String */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : CString */;
val* var189 /* : String */;
val* var191 /* : NativeArray[String] */;
static val* varonce190;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : CString */;
val* var195 /* : String */;
val* var196 /* : String */;
val* var197 /* : String */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (var2) on <var2:AbstractCompiler(GlobalCompiler)> */
var7 = var2->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var2:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (var5) on <var5:RapidTypeAnalysis> */
var10 = var5->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <var5:RapidTypeAnalysis> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = core___core__HashSet___core__abstract_collection__Collection__has(var8, var_mtype);
}
var12 = !var11;
if (var12){
if (unlikely(varonce==NULL)) {
var13 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "problem: ";
var17 = core__abstract_text___CString___to_s_full(var16, 9l, 9l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var13)->values[0]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = " was detected cast-dead";
var21 = core__abstract_text___CString___to_s_full(var20, 23l, 23l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var13)->values[2]=var19;
} else {
var13 = varonce;
varonce = NULL;
}
{
var22 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var13)->values[1]=var22;
{
var23 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
{
nitc___nitc__AbstractCompilerVisitor___debug(self, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:GlobalCompilerVisitor>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 792);
fatal_exit(1);
} else {
}
{
var24 = nitc___nitc__GlobalCompilerVisitor___collect_types(self, var_value);
}
var_types = var24;
{
var25 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var26 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var25);
}
var_res = var26;
if (unlikely(varonce27==NULL)) {
var28 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "/* isa ";
var32 = core__abstract_text___CString___to_s_full(var31, 7l, 7l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var28)->values[0]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = " on ";
var36 = core__abstract_text___CString___to_s_full(var35, 4l, 4l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var28)->values[2]=var34;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = " */";
var40 = core__abstract_text___CString___to_s_full(var39, 3l, 3l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var28)->values[4]=var38;
} else {
var28 = varonce27;
varonce27 = NULL;
}
{
var41 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var28)->values[1]=var41;
{
var42 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(var_value);
}
((struct instance_core__NativeArray*)var28)->values[3]=var42;
{
var43 = ((val*(*)(val* self))(var28->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce27 = var28;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
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
{
var47 = ((short int(*)(val* self))(var44->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var44); /* is_c_primitive on <var44:MType>*/
}
if (var47){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var50 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var53 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var51) on <var51:AbstractCompiler(GlobalCompiler)> */
var56 = var51->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var51:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nitc___nitc__MType___is_subtype(var48, var54, ((val*)NULL), var_mtype);
}
if (var57){
if (unlikely(varonce58==NULL)) {
var59 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = " = 1;";
var63 = core__abstract_text___CString___to_s_full(var62, 5l, 5l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var59)->values[1]=var61;
} else {
var59 = varonce58;
varonce58 = NULL;
}
{
var64 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var59)->values[0]=var64;
{
var65 = ((val*(*)(val* self))(var59->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var59); /* native_to_s on <var59:NativeArray[String]>*/
}
varonce58 = var59;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var65); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce66==NULL)) {
var67 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = " = 0;";
var71 = core__abstract_text___CString___to_s_full(var70, 5l, 5l);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var67)->values[1]=var69;
} else {
var67 = varonce66;
varonce66 = NULL;
}
{
var72 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var67)->values[0]=var72;
{
var73 = ((val*(*)(val* self))(var67->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var67); /* native_to_s on <var67:NativeArray[String]>*/
}
varonce66 = var67;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var73); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var77 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
/* <var75:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var75->type->table_size) {
var78 = 0;
} else {
var78 = var75->type->type_table[cltype] == idtype;
}
var_ = var78;
if (var78){
var74 = var_;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var81 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
/* <var79:MType> isa MNullType */
cltype83 = type_nitc__MNullType.color;
idtype84 = type_nitc__MNullType.id;
if(cltype83 >= var79->type->table_size) {
var82 = 0;
} else {
var82 = var79->type->type_table[cltype83] == idtype84;
}
var74 = var82;
}
if (var74){
if (unlikely(varonce85==NULL)) {
var86 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "if (";
var90 = core__abstract_text___CString___to_s_full(var89, 4l, 4l);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var86)->values[0]=var88;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = " == NULL) {";
var94 = core__abstract_text___CString___to_s_full(var93, 11l, 11l);
var92 = var94;
varonce91 = var92;
}
((struct instance_core__NativeArray*)var86)->values[2]=var92;
} else {
var86 = varonce85;
varonce85 = NULL;
}
{
var95 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var86)->values[1]=var95;
{
var96 = ((val*(*)(val* self))(var86->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var86); /* native_to_s on <var86:NativeArray[String]>*/
}
varonce85 = var86;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var96); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
/* <var_mtype:MType> isa MNullableType */
cltype98 = type_nitc__MNullableType.color;
idtype99 = type_nitc__MNullableType.id;
if(cltype98 >= var_mtype->type->table_size) {
var97 = 0;
} else {
var97 = var_mtype->type->type_table[cltype98] == idtype99;
}
if (var97){
if (unlikely(varonce100==NULL)) {
var101 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = " = 1; /* isa ";
var105 = core__abstract_text___CString___to_s_full(var104, 13l, 13l);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var101)->values[1]=var103;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = " */";
var109 = core__abstract_text___CString___to_s_full(var108, 3l, 3l);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var101)->values[3]=var107;
} else {
var101 = varonce100;
varonce100 = NULL;
}
{
var110 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var101)->values[0]=var110;
{
var111 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType(MNullableType)>*/
}
((struct instance_core__NativeArray*)var101)->values[2]=var111;
{
var112 = ((val*(*)(val* self))(var101->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var112); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce113==NULL)) {
var114 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = " = 0; /* not isa ";
var118 = core__abstract_text___CString___to_s_full(var117, 17l, 17l);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var114)->values[1]=var116;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = " */";
var122 = core__abstract_text___CString___to_s_full(var121, 3l, 3l);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var114)->values[3]=var120;
} else {
var114 = varonce113;
varonce113 = NULL;
}
{
var123 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var114)->values[0]=var123;
{
var124 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var114)->values[2]=var124;
{
var125 = ((val*(*)(val* self))(var114->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var114); /* native_to_s on <var114:NativeArray[String]>*/
}
varonce113 = var114;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var125); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "} else ";
var129 = core__abstract_text___CString___to_s_full(var128, 7l, 7l);
var127 = var129;
varonce126 = var127;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var127); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce130==NULL)) {
var131 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "switch(";
var135 = core__abstract_text___CString___to_s_full(var134, 7l, 7l);
var133 = var135;
varonce132 = var133;
}
((struct instance_core__NativeArray*)var131)->values[0]=var133;
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "->classid) {";
var139 = core__abstract_text___CString___to_s_full(var138, 12l, 12l);
var137 = var139;
varonce136 = var137;
}
((struct instance_core__NativeArray*)var131)->values[2]=var137;
} else {
var131 = varonce130;
varonce130 = NULL;
}
{
var140 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var131)->values[1]=var140;
{
var141 = ((val*(*)(val* self))(var131->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var131); /* native_to_s on <var131:NativeArray[String]>*/
}
varonce130 = var131;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var141); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var_142 = var_types;
{
var143 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_142);
}
var_144 = var143;
for(;;) {
{
var145 = ((short int(*)(val* self))((((long)var_144&3)?class_info[((long)var_144&3)]:var_144->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_144); /* is_ok on <var_144:IndexedIterator[MClassType]>*/
}
if (var145){
} else {
goto BREAK_label;
}
{
var146 = ((val*(*)(val* self))((((long)var_144&3)?class_info[((long)var_144&3)]:var_144->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_144); /* item on <var_144:IndexedIterator[MClassType]>*/
}
var_t = var146;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var149 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var147) on <var147:AbstractCompiler(GlobalCompiler)> */
var152 = var147->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var147:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
var153 = nitc___nitc__MType___is_subtype(var_t, var150, ((val*)NULL), var_mtype);
}
if (var153){
if (unlikely(varonce154==NULL)) {
var155 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "case ";
var159 = core__abstract_text___CString___to_s_full(var158, 5l, 5l);
var157 = var159;
varonce156 = var157;
}
((struct instance_core__NativeArray*)var155)->values[0]=var157;
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = ": /* ";
var163 = core__abstract_text___CString___to_s_full(var162, 5l, 5l);
var161 = var163;
varonce160 = var161;
}
((struct instance_core__NativeArray*)var155)->values[2]=var161;
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = " */";
var167 = core__abstract_text___CString___to_s_full(var166, 3l, 3l);
var165 = var167;
varonce164 = var165;
}
((struct instance_core__NativeArray*)var155)->values[4]=var165;
} else {
var155 = varonce154;
varonce154 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var170 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
var171 = nitc___nitc__GlobalCompiler___classid(var168, var_t);
}
((struct instance_core__NativeArray*)var155)->values[1]=var171;
{
var172 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MClassType>*/
}
((struct instance_core__NativeArray*)var155)->values[3]=var172;
{
var173 = ((val*(*)(val* self))(var155->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var155); /* native_to_s on <var155:NativeArray[String]>*/
}
varonce154 = var155;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var173); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_144&3)?class_info[((long)var_144&3)]:var_144->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_144); /* next on <var_144:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_144&3)?class_info[((long)var_144&3)]:var_144->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_144); /* finish on <var_144:IndexedIterator[MClassType]>*/
}
if (unlikely(varonce174==NULL)) {
var175 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = " = 1;";
var179 = core__abstract_text___CString___to_s_full(var178, 5l, 5l);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var175)->values[1]=var177;
} else {
var175 = varonce174;
varonce174 = NULL;
}
{
var180 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var175)->values[0]=var180;
{
var181 = ((val*(*)(val* self))(var175->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var175); /* native_to_s on <var175:NativeArray[String]>*/
}
varonce174 = var175;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var181); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = "break;";
var185 = core__abstract_text___CString___to_s_full(var184, 6l, 6l);
var183 = var185;
varonce182 = var183;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var183); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "default:";
var189 = core__abstract_text___CString___to_s_full(var188, 8l, 8l);
var187 = var189;
varonce186 = var187;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var187); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (unlikely(varonce190==NULL)) {
var191 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = " = 0;";
var195 = core__abstract_text___CString___to_s_full(var194, 5l, 5l);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var191)->values[1]=var193;
} else {
var191 = varonce190;
varonce190 = NULL;
}
{
var196 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var191)->values[0]=var196;
{
var197 = ((val*(*)(val* self))(var191->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var191); /* native_to_s on <var191:NativeArray[String]>*/
}
varonce190 = var191;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var197); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "}";
var201 = core__abstract_text___CString___to_s_full(var200, 1l, 1l);
var199 = var201;
varonce198 = var199;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var199); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#is_same_type_test for (self: GlobalCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__is_same_type_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : MType */;
val* var5 /* : MType */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MType */;
val* var10 /* : MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
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
val* var29 /* : String */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : AbstractCompiler */;
val* var47 /* : AbstractCompiler */;
val* var48 /* : MType */;
val* var50 /* : MType */;
short int var51 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : MType */;
val* var57 /* : MType */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
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
val* var76 /* : AbstractCompiler */;
val* var78 /* : AbstractCompiler */;
val* var79 /* : MType */;
val* var81 /* : MType */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
val* var86 /* : String */;
val* var87 /* : String */;
val* var88 /* : MType */;
val* var90 /* : MType */;
val* var91 /* : MType */;
val* var93 /* : MType */;
short int var94 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
val* var100 /* : NativeArray[String] */;
static val* varonce99;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : CString */;
val* var104 /* : String */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var108 /* : NativeArray[String] */;
static val* varonce107;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var114 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var5 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((short int(*)(val* self))(var3->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var3); /* is_c_primitive on <var3:MType>*/
}
var7 = !var6;
if (var7){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var10 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self))(var8->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var8); /* is_c_primitive on <var8:MType>*/
}
var12 = !var11;
if (var12){
if (unlikely(varonce==NULL)) {
var13 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = " = ";
var17 = core__abstract_text___CString___to_s_full(var16, 3l, 3l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var13)->values[1]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "->classid == ";
var21 = core__abstract_text___CString___to_s_full(var20, 13l, 13l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var13)->values[3]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "->classid;";
var25 = core__abstract_text___CString___to_s_full(var24, 10l, 10l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var13)->values[5]=var23;
} else {
var13 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var13)->values[0]=var26;
{
var27 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var13)->values[2]=var27;
{
var28 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var13)->values[4]=var28;
{
var29 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce30==NULL)) {
var31 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = " = ";
var35 = core__abstract_text___CString___to_s_full(var34, 3l, 3l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var31)->values[1]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = " == ";
var39 = core__abstract_text___CString___to_s_full(var38, 4l, 4l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var31)->values[3]=var37;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "->classid;";
var43 = core__abstract_text___CString___to_s_full(var42, 10l, 10l);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var31)->values[5]=var41;
} else {
var31 = varonce30;
varonce30 = NULL;
}
{
var44 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var31)->values[0]=var44;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var47 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var50 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
/* <var48:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var48->type->table_size) {
var51 = 0;
} else {
var51 = var48->type->type_table[cltype] == idtype;
}
if (unlikely(!var51)) {
var_class_name = var48 == NULL ? "null" : var48->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 838);
fatal_exit(1);
}
{
var52 = nitc___nitc__GlobalCompiler___classid(var45, var48);
}
((struct instance_core__NativeArray*)var31)->values[2]=var52;
{
var53 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var31)->values[4]=var53;
{
var54 = ((val*(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var54); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var57 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = ((short int(*)(val* self))(var55->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var55); /* is_c_primitive on <var55:MType>*/
}
var59 = !var58;
if (var59){
if (unlikely(varonce60==NULL)) {
var61 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = " = ";
var65 = core__abstract_text___CString___to_s_full(var64, 3l, 3l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var61)->values[1]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "->classid == ";
var69 = core__abstract_text___CString___to_s_full(var68, 13l, 13l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var61)->values[3]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = ";";
var73 = core__abstract_text___CString___to_s_full(var72, 1l, 1l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var61)->values[5]=var71;
} else {
var61 = varonce60;
varonce60 = NULL;
}
{
var74 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var61)->values[0]=var74;
{
var75 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var61)->values[2]=var75;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var78 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var81 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
/* <var79:MType> isa MClassType */
cltype83 = type_nitc__MClassType.color;
idtype84 = type_nitc__MClassType.id;
if(cltype83 >= var79->type->table_size) {
var82 = 0;
} else {
var82 = var79->type->type_table[cltype83] == idtype84;
}
if (unlikely(!var82)) {
var_class_name85 = var79 == NULL ? "null" : var79->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 842);
fatal_exit(1);
}
{
var86 = nitc___nitc__GlobalCompiler___classid(var76, var79);
}
((struct instance_core__NativeArray*)var61)->values[4]=var86;
{
var87 = ((val*(*)(val* self))(var61->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var87); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value1) on <var_value1:RuntimeVariable> */
var90 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value1:RuntimeVariable> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value2) on <var_value2:RuntimeVariable> */
var93 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value2:RuntimeVariable> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var88,var91) on <var88:MType> */
var_other = var91;
{
{ /* Inline kernel#Object#is_same_instance (var88,var_other) on <var88:MType> */
var98 = var88 == var_other;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
if (var94){
if (unlikely(varonce99==NULL)) {
var100 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = " = 1;";
var104 = core__abstract_text___CString___to_s_full(var103, 5l, 5l);
var102 = var104;
varonce101 = var102;
}
((struct instance_core__NativeArray*)var100)->values[1]=var102;
} else {
var100 = varonce99;
varonce99 = NULL;
}
{
var105 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var100)->values[0]=var105;
{
var106 = ((val*(*)(val* self))(var100->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var100); /* native_to_s on <var100:NativeArray[String]>*/
}
varonce99 = var100;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var106); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce107==NULL)) {
var108 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = " = 0;";
var112 = core__abstract_text___CString___to_s_full(var111, 5l, 5l);
var110 = var112;
varonce109 = var110;
}
((struct instance_core__NativeArray*)var108)->values[1]=var110;
} else {
var108 = varonce107;
varonce107 = NULL;
}
{
var113 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var108)->values[0]=var113;
{
var114 = ((val*(*)(val* self))(var108->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var108); /* native_to_s on <var108:NativeArray[String]>*/
}
varonce107 = var108;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var114); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#class_name_string for (self: GlobalCompilerVisitor, RuntimeVariable): String */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string(val* self, val* p0) {
val* var /* : String */;
val* var_value /* var value: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : String */;
val* var_res /* var res: String */;
val* var6 /* : NativeArray[String] */;
static val* varonce5;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : MType */;
val* var18 /* : MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
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
val* var31 /* : String */;
val* var32 /* : String */;
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
val* var43 /* : AbstractCompiler */;
val* var45 /* : AbstractCompiler */;
val* var46 /* : MType */;
val* var48 /* : MType */;
short int var49 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var50 /* : String */;
val* var51 /* : String */;
var_value = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "var_class_name";
var3 = core__abstract_text___CString___to_s_full(var2, 14l, 14l);
var1 = var3;
varonce = var1;
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var1);
}
var_res = var4;
if (unlikely(varonce5==NULL)) {
var6 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "const char* ";
var10 = core__abstract_text___CString___to_s_full(var9, 12l, 12l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ";";
var14 = core__abstract_text___CString___to_s_full(var13, 1l, 1l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce5;
varonce5 = NULL;
}
((struct instance_core__NativeArray*)var6)->values[1]=var_res;
{
var15 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce5 = var6;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:GlobalCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var18 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = ((short int(*)(val* self))(var16->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var16); /* is_c_primitive on <var16:MType>*/
}
var20 = !var19;
if (var20){
if (unlikely(varonce21==NULL)) {
var22 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = " = class_names[";
var26 = core__abstract_text___CString___to_s_full(var25, 15l, 15l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[1]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "->classid];";
var30 = core__abstract_text___CString___to_s_full(var29, 11l, 11l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var22)->values[3]=var28;
} else {
var22 = varonce21;
varonce21 = NULL;
}
((struct instance_core__NativeArray*)var22)->values[0]=var_res;
{
var31 = ((val*(*)(val* self))(var_value->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value); /* to_s on <var_value:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var22)->values[2]=var31;
{
var32 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce21 = var22;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce33==NULL)) {
var34 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = " = class_names[";
var38 = core__abstract_text___CString___to_s_full(var37, 15l, 15l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[1]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "];";
var42 = core__abstract_text___CString___to_s_full(var41, 2l, 2l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var34)->values[3]=var40;
} else {
var34 = varonce33;
varonce33 = NULL;
}
((struct instance_core__NativeArray*)var34)->values[0]=var_res;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var45 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var48 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
/* <var46:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var46->type->table_size) {
var49 = 0;
} else {
var49 = var46->type->type_table[cltype] == idtype;
}
if (unlikely(!var49)) {
var_class_name = var46 == NULL ? "null" : var46->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 859);
fatal_exit(1);
}
{
var50 = nitc___nitc__GlobalCompiler___classid(var43, var46);
}
((struct instance_core__NativeArray*)var34)->values[2]=var50;
{
var51 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var51); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#equal_test for (self: GlobalCompilerVisitor, RuntimeVariable, RuntimeVariable): RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__equal_test(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value1 /* var value1: RuntimeVariable */;
val* var_value2 /* var value2: RuntimeVariable */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var6 /* : MType */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : MType */;
val* var10 /* : MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_tmp /* var tmp: RuntimeVariable */;
val* var13 /* : MType */;
val* var15 /* : MType */;
short int var16 /* : Bool */;
val* var17 /* : MType */;
val* var19 /* : MType */;
val* var20 /* : MType */;
val* var22 /* : MType */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : NativeArray[String] */;
static val* varonce;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : MType */;
val* var47 /* : MType */;
short int var48 /* : Bool */;
val* var50 /* : NativeArray[String] */;
static val* varonce49;
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
val* var63 /* : String */;
val* var64 /* : MType */;
val* var66 /* : MType */;
val* var67 /* : String */;
val* var68 /* : MType */;
val* var70 /* : MType */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : MType */;
val* var75 /* : MType */;
short int var76 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype1 /* var mtype1: MClassType */;
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
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var98 /* : AbstractCompiler */;
val* var100 /* : AbstractCompiler */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var104 /* : NativeArray[String] */;
static val* varonce103;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : String */;
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
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : String */;
val* var130 /* : MType */;
val* var132 /* : MType */;
val* var133 /* : RuntimeVariable */;
val* var134 /* : String */;
val* var135 /* : String */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
val* var141 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var142 /* : AbstractCompiler */;
val* var144 /* : AbstractCompiler */;
val* var145 /* : Array[MClassType] */;
val* var147 /* : Array[MClassType] */;
val* var_148 /* var : Array[MClassType] */;
val* var149 /* : IndexedIterator[nullable Object] */;
val* var_150 /* var : IndexedIterator[MClassType] */;
short int var151 /* : Bool */;
val* var152 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var153 /* : AbstractCompiler */;
val* var155 /* : AbstractCompiler */;
val* var156 /* : MModule */;
val* var158 /* : MModule */;
val* var159 /* : MType */;
val* var161 /* : MType */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
val* var165 /* : AbstractCompiler */;
val* var167 /* : AbstractCompiler */;
val* var168 /* : MModule */;
val* var170 /* : MModule */;
val* var171 /* : MType */;
val* var173 /* : MType */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
val* var177 /* : NativeArray[String] */;
static val* varonce176;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : CString */;
val* var181 /* : String */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : CString */;
val* var185 /* : String */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : CString */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : CString */;
val* var193 /* : String */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : CString */;
val* var197 /* : String */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : CString */;
val* var205 /* : String */;
val* var206 /* : String */;
val* var207 /* : AbstractCompiler */;
val* var209 /* : AbstractCompiler */;
val* var210 /* : String */;
val* var211 /* : String */;
val* var212 /* : String */;
val* var213 /* : String */;
val* var214 /* : String */;
val* var215 /* : String */;
val* var216 /* : AbstractCompiler */;
val* var218 /* : AbstractCompiler */;
val* var219 /* : MModule */;
val* var221 /* : MModule */;
val* var222 /* : Model */;
val* var224 /* : Model */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : CString */;
val* var228 /* : String */;
val* var229 /* : nullable Array[MClass] */;
short int var230 /* : Bool */;
short int var231 /* : Bool */;
val* var_other233 /* var other: nullable Object */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
val* var236 /* : AbstractCompiler */;
val* var238 /* : AbstractCompiler */;
val* var239 /* : MModule */;
val* var241 /* : MModule */;
val* var242 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
short int var243 /* : Bool */;
val* var244 /* : MType */;
val* var246 /* : MType */;
val* var247 /* : AbstractCompiler */;
val* var249 /* : AbstractCompiler */;
val* var250 /* : MModule */;
val* var252 /* : MModule */;
short int var253 /* : Bool */;
short int var_254 /* var : Bool */;
val* var255 /* : MType */;
val* var257 /* : MType */;
val* var258 /* : AbstractCompiler */;
val* var260 /* : AbstractCompiler */;
val* var261 /* : MModule */;
val* var263 /* : MModule */;
short int var264 /* : Bool */;
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
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : CString */;
val* var278 /* : String */;
static val* varonce279;
val* var280 /* : String */;
char* var281 /* : CString */;
val* var282 /* : String */;
static val* varonce283;
val* var284 /* : String */;
char* var285 /* : CString */;
val* var286 /* : String */;
val* var287 /* : String */;
val* var288 /* : String */;
val* var289 /* : String */;
val* var290 /* : String */;
val* var291 /* : String */;
short int var292 /* : Bool */;
val* var294 /* : NativeArray[String] */;
static val* varonce293;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : CString */;
val* var298 /* : String */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : CString */;
val* var302 /* : String */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : CString */;
val* var306 /* : String */;
val* var307 /* : String */;
val* var308 /* : String */;
val* var309 /* : String */;
val* var310 /* : String */;
val* var312 /* : NativeArray[String] */;
static val* varonce311;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : CString */;
val* var316 /* : String */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : CString */;
val* var320 /* : String */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : CString */;
val* var324 /* : String */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : CString */;
val* var328 /* : String */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : CString */;
val* var332 /* : String */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : CString */;
val* var336 /* : String */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : CString */;
val* var340 /* : String */;
static val* varonce341;
val* var342 /* : String */;
char* var343 /* : CString */;
val* var344 /* : String */;
val* var345 /* : String */;
val* var346 /* : String */;
val* var347 /* : String */;
val* var348 /* : String */;
val* var349 /* : String */;
val* var350 /* : String */;
val* var351 /* : String */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : CString */;
val* var355 /* : String */;
val* var356 /* : String */;
val* var357 /* : String */;
var_value1 = p0;
var_value2 = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var1);
}
var_res = var2;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var6 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int(*)(val* self))(var4->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var4); /* is_c_primitive on <var4:MType>*/
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var10 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self))(var8->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var8); /* is_c_primitive on <var8:MType>*/
}
var12 = !var11;
var3 = var12;
} else {
var3 = var_;
}
if (var3){
var_tmp = var_value1;
var_value1 = var_value2;
var_value2 = var_tmp;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var15 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int(*)(val* self))(var13->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var13); /* is_c_primitive on <var13:MType>*/
}
if (var16){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var19 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
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
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var22 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var17,var20) on <var17:MType> */
var_other = var20;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:MType> */
var27 = var17 == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
if (unlikely(varonce==NULL)) {
var28 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " = ";
var32 = core__abstract_text___CString___to_s_full(var31, 3l, 3l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var28)->values[1]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = " == ";
var36 = core__abstract_text___CString___to_s_full(var35, 4l, 4l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var28)->values[3]=var34;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = ";";
var40 = core__abstract_text___CString___to_s_full(var39, 1l, 1l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var28)->values[5]=var38;
} else {
var28 = varonce;
varonce = NULL;
}
{
var41 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var28)->values[0]=var41;
{
var42 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var28)->values[2]=var42;
{
var43 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var28)->values[4]=var43;
{
var44 = ((val*(*)(val* self))(var28->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce = var28;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var44); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var47 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
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
var48 = ((short int(*)(val* self))(var45->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var45); /* is_c_primitive on <var45:MType>*/
}
if (var48){
if (unlikely(varonce49==NULL)) {
var50 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = " = 0; /* incompatible types ";
var54 = core__abstract_text___CString___to_s_full(var53, 28l, 28l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var50)->values[1]=var52;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = " vs. ";
var58 = core__abstract_text___CString___to_s_full(var57, 5l, 5l);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var50)->values[3]=var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "*/";
var62 = core__abstract_text___CString___to_s_full(var61, 2l, 2l);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var50)->values[5]=var60;
} else {
var50 = varonce49;
varonce49 = NULL;
}
{
var63 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var50)->values[0]=var63;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var66 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = ((val*(*)(val* self))(var64->class->vft[COLOR_core__abstract_text__Object__to_s]))(var64); /* to_s on <var64:MType>*/
}
((struct instance_core__NativeArray*)var50)->values[2]=var67;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value2) on <var_value2:RuntimeVariable> */
var70 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value2:RuntimeVariable> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = ((val*(*)(val* self))(var68->class->vft[COLOR_core__abstract_text__Object__to_s]))(var68); /* to_s on <var68:MType>*/
}
((struct instance_core__NativeArray*)var50)->values[4]=var71;
{
var72 = ((val*(*)(val* self))(var50->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce49 = var50;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var75 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
/* <var73:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var73->type->table_size) {
var76 = 0;
} else {
var76 = var73->type->type_table[cltype] == idtype;
}
if (unlikely(!var76)) {
var_class_name = var73 == NULL ? "null" : var73->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 878);
fatal_exit(1);
}
var_mtype1 = var73;
if (unlikely(varonce77==NULL)) {
var78 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = " = (";
var82 = core__abstract_text___CString___to_s_full(var81, 4l, 4l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var78)->values[1]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = " != NULL) && (";
var86 = core__abstract_text___CString___to_s_full(var85, 14l, 14l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var78)->values[3]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "->classid == ";
var90 = core__abstract_text___CString___to_s_full(var89, 13l, 13l);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var78)->values[5]=var88;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = ");";
var94 = core__abstract_text___CString___to_s_full(var93, 2l, 2l);
var92 = var94;
varonce91 = var92;
}
((struct instance_core__NativeArray*)var78)->values[7]=var92;
} else {
var78 = varonce77;
varonce77 = NULL;
}
{
var95 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var78)->values[0]=var95;
{
var96 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var78)->values[2]=var96;
{
var97 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var78)->values[4]=var97;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var100 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = nitc___nitc__GlobalCompiler___classid(var98, var_mtype1);
}
((struct instance_core__NativeArray*)var78)->values[6]=var101;
{
var102 = ((val*(*)(val* self))(var78->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var78); /* native_to_s on <var78:NativeArray[String]>*/
}
varonce77 = var78;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var102); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (unlikely(varonce103==NULL)) {
var104 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "if (";
var108 = core__abstract_text___CString___to_s_full(var107, 4l, 4l);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var104)->values[0]=var106;
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = ") {";
var112 = core__abstract_text___CString___to_s_full(var111, 3l, 3l);
var110 = var112;
varonce109 = var110;
}
((struct instance_core__NativeArray*)var104)->values[2]=var110;
} else {
var104 = varonce103;
varonce103 = NULL;
}
{
var113 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var104)->values[1]=var113;
{
var114 = ((val*(*)(val* self))(var104->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var104); /* native_to_s on <var104:NativeArray[String]>*/
}
varonce103 = var104;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var114); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (unlikely(varonce115==NULL)) {
var116 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = " = (";
var120 = core__abstract_text___CString___to_s_full(var119, 4l, 4l);
var118 = var120;
varonce117 = var118;
}
((struct instance_core__NativeArray*)var116)->values[1]=var118;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = " == ";
var124 = core__abstract_text___CString___to_s_full(var123, 4l, 4l);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var116)->values[3]=var122;
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = ");";
var128 = core__abstract_text___CString___to_s_full(var127, 2l, 2l);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var116)->values[5]=var126;
} else {
var116 = varonce115;
varonce115 = NULL;
}
{
var129 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var116)->values[0]=var129;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value1) on <var_value1:RuntimeVariable> */
var132 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value1:RuntimeVariable> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
var133 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_value2, var130);
}
{
var134 = ((val*(*)(val* self))(var133->class->vft[COLOR_core__abstract_text__Object__to_s]))(var133); /* to_s on <var133:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var116)->values[2]=var134;
{
var135 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var116)->values[4]=var135;
{
var136 = ((val*(*)(val* self))(var116->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var116); /* native_to_s on <var116:NativeArray[String]>*/
}
varonce115 = var116;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var136); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "}";
var140 = core__abstract_text___CString___to_s_full(var139, 1l, 1l);
var138 = var140;
varonce137 = var138;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var138); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
}
} else {
var141 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var141); /* Direct call array#Array#init on <var141:Array[String]>*/
}
var_s = var141;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var144 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
{ /* Inline global_compiler#GlobalCompiler#live_primitive_types (var142) on <var142:AbstractCompiler(GlobalCompiler)> */
var147 = var142->attrs[COLOR_nitc__global_compiler__GlobalCompiler___live_primitive_types].val; /* _live_primitive_types on <var142:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_primitive_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 169);
fatal_exit(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
var_148 = var145;
{
var149 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_148);
}
var_150 = var149;
for(;;) {
{
var151 = ((short int(*)(val* self))((((long)var_150&3)?class_info[((long)var_150&3)]:var_150->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_150); /* is_ok on <var_150:IndexedIterator[MClassType]>*/
}
if (var151){
} else {
goto BREAK_label;
}
{
var152 = ((val*(*)(val* self))((((long)var_150&3)?class_info[((long)var_150&3)]:var_150->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_150); /* item on <var_150:IndexedIterator[MClassType]>*/
}
var_t = var152;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var155 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var153) on <var153:AbstractCompiler(GlobalCompiler)> */
var158 = var153->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var153:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value1) on <var_value1:RuntimeVariable> */
var161 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value1:RuntimeVariable> */
if (unlikely(var161 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
var162 = nitc___nitc__MType___is_subtype(var_t, var156, ((val*)NULL), var159);
}
var163 = !var162;
if (var163){
goto BREAK_label164;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var167 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var165) on <var165:AbstractCompiler(GlobalCompiler)> */
var170 = var165->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var165:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value2) on <var_value2:RuntimeVariable> */
var173 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value2:RuntimeVariable> */
if (unlikely(var173 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
var174 = nitc___nitc__MType___is_subtype(var_t, var168, ((val*)NULL), var171);
}
var175 = !var174;
if (var175){
goto BREAK_label164;
} else {
}
if (unlikely(varonce176==NULL)) {
var177 = NEW_core__NativeArray(13l, &type_core__NativeArray__core__String);
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "(";
var181 = core__abstract_text___CString___to_s_full(var180, 1l, 1l);
var179 = var181;
varonce178 = var179;
}
((struct instance_core__NativeArray*)var177)->values[0]=var179;
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = "->classid == ";
var185 = core__abstract_text___CString___to_s_full(var184, 13l, 13l);
var183 = var185;
varonce182 = var183;
}
((struct instance_core__NativeArray*)var177)->values[2]=var183;
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = " && ((struct ";
var189 = core__abstract_text___CString___to_s_full(var188, 13l, 13l);
var187 = var189;
varonce186 = var187;
}
((struct instance_core__NativeArray*)var177)->values[4]=var187;
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = "*)";
var193 = core__abstract_text___CString___to_s_full(var192, 2l, 2l);
var191 = var193;
varonce190 = var191;
}
((struct instance_core__NativeArray*)var177)->values[6]=var191;
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = ")->value == ((struct ";
var197 = core__abstract_text___CString___to_s_full(var196, 21l, 21l);
var195 = var197;
varonce194 = var195;
}
((struct instance_core__NativeArray*)var177)->values[8]=var195;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "*)";
var201 = core__abstract_text___CString___to_s_full(var200, 2l, 2l);
var199 = var201;
varonce198 = var199;
}
((struct instance_core__NativeArray*)var177)->values[10]=var199;
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = ")->value)";
var205 = core__abstract_text___CString___to_s_full(var204, 9l, 9l);
var203 = var205;
varonce202 = var203;
}
((struct instance_core__NativeArray*)var177)->values[12]=var203;
} else {
var177 = varonce176;
varonce176 = NULL;
}
{
var206 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var177)->values[1]=var206;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var209 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
var210 = nitc___nitc__GlobalCompiler___classid(var207, var_t);
}
((struct instance_core__NativeArray*)var177)->values[3]=var210;
{
var211 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_t); /* c_name on <var_t:MClassType>*/
}
((struct instance_core__NativeArray*)var177)->values[5]=var211;
{
var212 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var177)->values[7]=var212;
{
var213 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_t); /* c_name on <var_t:MClassType>*/
}
((struct instance_core__NativeArray*)var177)->values[9]=var213;
{
var214 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var177)->values[11]=var214;
{
var215 = ((val*(*)(val* self))(var177->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var177); /* native_to_s on <var177:NativeArray[String]>*/
}
varonce176 = var177;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_s, var215); /* Direct call array#Array#add on <var_s:Array[String]>*/
}
BREAK_label164: (void)0;
{
((void(*)(val* self))((((long)var_150&3)?class_info[((long)var_150&3)]:var_150->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_150); /* next on <var_150:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_150&3)?class_info[((long)var_150&3)]:var_150->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_150); /* finish on <var_150:IndexedIterator[MClassType]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var218 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var216) on <var216:AbstractCompiler(GlobalCompiler)> */
var221 = var216->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var216:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var219) on <var219:MModule> */
var224 = var219->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var219:MModule> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = "Pointer";
var228 = core__abstract_text___CString___to_s_full(var227, 7l, 7l);
var226 = var228;
varonce225 = var226;
}
{
var229 = nitc__model___Model___get_mclasses_by_name(var222, var226);
}
if (var229 == NULL) {
var230 = 0; /* is null */
} else {
var230 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var229,((val*)NULL)) on <var229:nullable Array[MClass]> */
var_other233 = ((val*)NULL);
{
var234 = ((short int(*)(val* self, val* p0))(var229->class->vft[COLOR_core__kernel__Object___61d_61d]))(var229, var_other233); /* == on <var229:nullable Array[MClass](Array[MClass])>*/
}
var235 = !var234;
var231 = var235;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
var230 = var231;
}
if (var230){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var238 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var238 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var236) on <var236:AbstractCompiler(GlobalCompiler)> */
var241 = var236->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var236:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var239 = var241;
RET_LABEL240:(void)0;
}
}
{
var242 = nitc__model___MModule___pointer_type(var239);
}
var_pointer_type = var242;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value1) on <var_value1:RuntimeVariable> */
var246 = var_value1->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value1:RuntimeVariable> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var249 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var247 = var249;
RET_LABEL248:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var247) on <var247:AbstractCompiler(GlobalCompiler)> */
var252 = var247->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var247:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var252 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var250 = var252;
RET_LABEL251:(void)0;
}
}
{
var253 = nitc___nitc__MType___is_subtype(var244, var250, ((val*)NULL), var_pointer_type);
}
var_254 = var253;
if (var253){
var243 = var_254;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value2) on <var_value2:RuntimeVariable> */
var257 = var_value2->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value2:RuntimeVariable> */
if (unlikely(var257 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:GlobalCompilerVisitor> */
var260 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:GlobalCompilerVisitor> */
if (unlikely(var260 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var258) on <var258:AbstractCompiler(GlobalCompiler)> */
var263 = var258->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var258:AbstractCompiler(GlobalCompiler)> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
var264 = nitc___nitc__MType___is_subtype(var255, var261, ((val*)NULL), var_pointer_type);
}
var243 = var264;
}
if (var243){
if (unlikely(varonce265==NULL)) {
var266 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = "(((struct ";
var270 = core__abstract_text___CString___to_s_full(var269, 10l, 10l);
var268 = var270;
varonce267 = var268;
}
((struct instance_core__NativeArray*)var266)->values[0]=var268;
if (likely(varonce271!=NULL)) {
var272 = varonce271;
} else {
var273 = "*)";
var274 = core__abstract_text___CString___to_s_full(var273, 2l, 2l);
var272 = var274;
varonce271 = var272;
}
((struct instance_core__NativeArray*)var266)->values[2]=var272;
if (likely(varonce275!=NULL)) {
var276 = varonce275;
} else {
var277 = ")->value == ((struct ";
var278 = core__abstract_text___CString___to_s_full(var277, 21l, 21l);
var276 = var278;
varonce275 = var276;
}
((struct instance_core__NativeArray*)var266)->values[4]=var276;
if (likely(varonce279!=NULL)) {
var280 = varonce279;
} else {
var281 = "*)";
var282 = core__abstract_text___CString___to_s_full(var281, 2l, 2l);
var280 = var282;
varonce279 = var280;
}
((struct instance_core__NativeArray*)var266)->values[6]=var280;
if (likely(varonce283!=NULL)) {
var284 = varonce283;
} else {
var285 = ")->value)";
var286 = core__abstract_text___CString___to_s_full(var285, 9l, 9l);
var284 = var286;
varonce283 = var284;
}
((struct instance_core__NativeArray*)var266)->values[8]=var284;
} else {
var266 = varonce265;
varonce265 = NULL;
}
{
var287 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var266)->values[1]=var287;
{
var288 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var266)->values[3]=var288;
{
var289 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var266)->values[5]=var289;
{
var290 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var266)->values[7]=var290;
{
var291 = ((val*(*)(val* self))(var266->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var266); /* native_to_s on <var266:NativeArray[String]>*/
}
varonce265 = var266;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_s, var291); /* Direct call array#Array#add on <var_s:Array[String]>*/
}
} else {
}
} else {
}
{
var292 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_s);
}
if (var292){
if (unlikely(varonce293==NULL)) {
var294 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = " = ";
var298 = core__abstract_text___CString___to_s_full(var297, 3l, 3l);
var296 = var298;
varonce295 = var296;
}
((struct instance_core__NativeArray*)var294)->values[1]=var296;
if (likely(varonce299!=NULL)) {
var300 = varonce299;
} else {
var301 = " == ";
var302 = core__abstract_text___CString___to_s_full(var301, 4l, 4l);
var300 = var302;
varonce299 = var300;
}
((struct instance_core__NativeArray*)var294)->values[3]=var300;
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = ";";
var306 = core__abstract_text___CString___to_s_full(var305, 1l, 1l);
var304 = var306;
varonce303 = var304;
}
((struct instance_core__NativeArray*)var294)->values[5]=var304;
} else {
var294 = varonce293;
varonce293 = NULL;
}
{
var307 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var294)->values[0]=var307;
{
var308 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var294)->values[2]=var308;
{
var309 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var294)->values[4]=var309;
{
var310 = ((val*(*)(val* self))(var294->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var294); /* native_to_s on <var294:NativeArray[String]>*/
}
varonce293 = var294;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var310); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
} else {
if (unlikely(varonce311==NULL)) {
var312 = NEW_core__NativeArray(16l, &type_core__NativeArray__core__String);
if (likely(varonce313!=NULL)) {
var314 = varonce313;
} else {
var315 = " = ";
var316 = core__abstract_text___CString___to_s_full(var315, 3l, 3l);
var314 = var316;
varonce313 = var314;
}
((struct instance_core__NativeArray*)var312)->values[1]=var314;
if (likely(varonce317!=NULL)) {
var318 = varonce317;
} else {
var319 = " == ";
var320 = core__abstract_text___CString___to_s_full(var319, 4l, 4l);
var318 = var320;
varonce317 = var318;
}
((struct instance_core__NativeArray*)var312)->values[3]=var318;
if (likely(varonce321!=NULL)) {
var322 = varonce321;
} else {
var323 = " || (";
var324 = core__abstract_text___CString___to_s_full(var323, 5l, 5l);
var322 = var324;
varonce321 = var322;
}
((struct instance_core__NativeArray*)var312)->values[5]=var322;
if (likely(varonce325!=NULL)) {
var326 = varonce325;
} else {
var327 = " != NULL && ";
var328 = core__abstract_text___CString___to_s_full(var327, 12l, 12l);
var326 = var328;
varonce325 = var326;
}
((struct instance_core__NativeArray*)var312)->values[7]=var326;
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = " != NULL && ";
var332 = core__abstract_text___CString___to_s_full(var331, 12l, 12l);
var330 = var332;
varonce329 = var330;
}
((struct instance_core__NativeArray*)var312)->values[9]=var330;
if (likely(varonce333!=NULL)) {
var334 = varonce333;
} else {
var335 = "->classid == ";
var336 = core__abstract_text___CString___to_s_full(var335, 13l, 13l);
var334 = var336;
varonce333 = var334;
}
((struct instance_core__NativeArray*)var312)->values[11]=var334;
if (likely(varonce337!=NULL)) {
var338 = varonce337;
} else {
var339 = "->classid && (";
var340 = core__abstract_text___CString___to_s_full(var339, 14l, 14l);
var338 = var340;
varonce337 = var338;
}
((struct instance_core__NativeArray*)var312)->values[13]=var338;
if (likely(varonce341!=NULL)) {
var342 = varonce341;
} else {
var343 = "));";
var344 = core__abstract_text___CString___to_s_full(var343, 3l, 3l);
var342 = var344;
varonce341 = var342;
}
((struct instance_core__NativeArray*)var312)->values[15]=var342;
} else {
var312 = varonce311;
varonce311 = NULL;
}
{
var345 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var312)->values[0]=var345;
{
var346 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var312)->values[2]=var346;
{
var347 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var312)->values[4]=var347;
{
var348 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var312)->values[6]=var348;
{
var349 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var312)->values[8]=var349;
{
var350 = ((val*(*)(val* self))(var_value1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value1); /* to_s on <var_value1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var312)->values[10]=var350;
{
var351 = ((val*(*)(val* self))(var_value2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_value2); /* to_s on <var_value2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var312)->values[12]=var351;
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = " || ";
var355 = core__abstract_text___CString___to_s_full(var354, 4l, 4l);
var353 = var355;
varonce352 = var353;
}
{
var356 = core__abstract_text___Collection___join(var_s, var353, ((val*)NULL));
}
((struct instance_core__NativeArray*)var312)->values[14]=var356;
{
var357 = ((val*(*)(val* self))(var312->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var312); /* native_to_s on <var312:NativeArray[String]>*/
}
varonce311 = var312;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var357); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#GlobalCompilerVisitor#array_instance for (self: GlobalCompilerVisitor, Array[RuntimeVariable], MType): RuntimeVariable */
val* nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__array_instance(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var_elttype /* var elttype: MType */;
val* var1 /* : MType */;
val* var2 /* : MModule */;
val* var3 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : MModule */;
val* var22 /* : MClassType */;
val* var23 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
val* var26 /* : NativeArray[String] */;
static val* varonce25;
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
val* var39 /* : String */;
val* var40 /* : MType */;
val* var42 /* : MType */;
val* var43 /* : String */;
long var44 /* : Int */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : String */;
long var_i /* var i: Int */;
long var49 /* : Int */;
long var51 /* : Int */;
long var_ /* var : Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
val* var57 /* : RuntimeVariable */;
val* var_r /* var r: RuntimeVariable */;
val* var59 /* : NativeArray[String] */;
static val* varonce58;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
val* var80 /* : MType */;
val* var82 /* : MType */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var85 /* : String */;
val* var86 /* : String */;
val* var87 /* : String */;
long var88 /* : Int */;
long var89 /* : Int */;
long var91 /* : Int */;
val* var92 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
val* var97 /* : MMethod */;
val* var98 /* : Array[RuntimeVariable] */;
val* var_99 /* var : Array[RuntimeVariable] */;
val* var100 /* : nullable RuntimeVariable */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : CString */;
val* var104 /* : String */;
var_array = p0;
var_elttype = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_elttype);
}
var_elttype = var1;
{
var2 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var3 = nitc__model___MModule___array_type(var2, var_elttype);
}
var_arraytype = var3;
{
var4 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__init_instance(self, var_arraytype);
}
var_res = var4;
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "{ /* ";
var9 = core__abstract_text___CString___to_s_full(var8, 5l, 5l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = " = array_instance Array[";
var13 = core__abstract_text___CString___to_s_full(var12, 24l, 24l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var5)->values[2]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "] */";
var17 = core__abstract_text___CString___to_s_full(var16, 4l, 4l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var5)->values[4]=var15;
} else {
var5 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var_elttype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_elttype); /* to_s on <var_elttype:MType>*/
}
((struct instance_core__NativeArray*)var5)->values[3]=var19;
{
var20 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var20); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var21 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var22 = nitc__model___MModule___native_array_type(var21, var_elttype);
}
{
var23 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var22);
}
var_nat = var23;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_nat,1) on <var_nat:RuntimeVariable> */
var_nat->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_nat:RuntimeVariable> */
RET_LABEL24:(void)0;
}
}
if (unlikely(varonce25==NULL)) {
var26 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " = NEW_";
var30 = core__abstract_text___CString___to_s_full(var29, 7l, 7l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[1]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "(";
var34 = core__abstract_text___CString___to_s_full(var33, 1l, 1l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var26)->values[3]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = ");";
var38 = core__abstract_text___CString___to_s_full(var37, 2l, 2l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var26)->values[5]=var36;
} else {
var26 = varonce25;
varonce25 = NULL;
}
{
var39 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var26)->values[0]=var39;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_nat) on <var_nat:RuntimeVariable> */
var42 = var_nat->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_nat:RuntimeVariable> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self))(var40->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var40); /* c_name on <var40:MType>*/
}
((struct instance_core__NativeArray*)var26)->values[2]=var43;
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[RuntimeVariable]> */
var46 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = core__flat___Int___core__abstract_text__Object__to_s(var44);
((struct instance_core__NativeArray*)var26)->values[4]=var47;
{
var48 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce25 = var26;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[RuntimeVariable]> */
var51 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_ = var49;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var54 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var55 = var_i < var_;
var52 = var55;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
} else {
goto BREAK_label;
}
{
var56 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
{
var57 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var56, var_elttype);
}
var_r = var57;
if (unlikely(varonce58==NULL)) {
var59 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "((struct ";
var63 = core__abstract_text___CString___to_s_full(var62, 9l, 9l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var59)->values[0]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "*) ";
var67 = core__abstract_text___CString___to_s_full(var66, 3l, 3l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var59)->values[2]=var65;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = ")->values[";
var71 = core__abstract_text___CString___to_s_full(var70, 10l, 10l);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var59)->values[4]=var69;
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "] = ";
var75 = core__abstract_text___CString___to_s_full(var74, 4l, 4l);
var73 = var75;
varonce72 = var73;
}
((struct instance_core__NativeArray*)var59)->values[6]=var73;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = ";";
var79 = core__abstract_text___CString___to_s_full(var78, 1l, 1l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var59)->values[8]=var77;
} else {
var59 = varonce58;
varonce58 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_nat) on <var_nat:RuntimeVariable> */
var82 = var_nat->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_nat:RuntimeVariable> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
var83 = ((val*(*)(val* self))(var80->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var80); /* c_name on <var80:MType>*/
}
((struct instance_core__NativeArray*)var59)->values[1]=var83;
{
var84 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var59)->values[3]=var84;
var85 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var59)->values[5]=var85;
{
var86 = ((val*(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_r); /* to_s on <var_r:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var59)->values[7]=var86;
{
var87 = ((val*(*)(val* self))(var59->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var59); /* native_to_s on <var59:NativeArray[String]>*/
}
varonce58 = var59;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var87); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
{
var88 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var88;
}
BREAK_label: (void)0;
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[RuntimeVariable]> */
var91 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[RuntimeVariable]> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = nitc___nitc__AbstractCompilerVisitor___int_instance(self, var89);
}
var_length = var92;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "with_native";
var96 = core__abstract_text___CString___to_s_full(var95, 11l, 11l);
var94 = var96;
varonce93 = var94;
}
{
var97 = nitc___nitc__AbstractCompilerVisitor___get_property(self, var94, var_arraytype);
}
var98 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var98, 3l); /* Direct call array#Array#with_capacity on <var98:Array[RuntimeVariable]>*/
}
var_99 = var98;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_99, var_res); /* Direct call array#AbstractArray#push on <var_99:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_99, var_nat); /* Direct call array#AbstractArray#push on <var_99:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_99, var_length); /* Direct call array#AbstractArray#push on <var_99:Array[RuntimeVariable]>*/
}
{
var100 = nitc___nitc__GlobalCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var97, var_99);
}
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "}";
var104 = core__abstract_text___CString___to_s_full(var103, 1l, 1l);
var102 = var104;
varonce101 = var102;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var102); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:GlobalCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#recv for (self: CustomizedRuntimeFunction): MClassType */
val* nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___recv(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__global_compiler__CustomizedRuntimeFunction___recv].val; /* _recv on <self:CustomizedRuntimeFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 936);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#recv= for (self: CustomizedRuntimeFunction, MClassType) */
void nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___recv_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__global_compiler__CustomizedRuntimeFunction___recv].val = p0; /* _recv on <self:CustomizedRuntimeFunction> */
RET_LABEL:;
}
/* method global_compiler#CustomizedRuntimeFunction#build_c_name for (self: CustomizedRuntimeFunction): String */
val* nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___nitc__abstract_compiler__AbstractRuntimeFunction__build_c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MMethodDef */;
val* var11 /* : MMethodDef */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
val* var18 /* : MClassType */;
val* var20 /* : MClassType */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MMethodDef */;
val* var29 /* : MMethodDef */;
val* var30 /* : String */;
val* var31 /* : NativeArray[String] */;
static val* varonce;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : MMethodDef */;
val* var38 /* : MMethodDef */;
val* var39 /* : String */;
val* var40 /* : MClassType */;
val* var42 /* : MClassType */;
val* var43 /* : String */;
val* var44 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache (self) on <self:CustomizedRuntimeFunction> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:CustomizedRuntimeFunction> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
if (var_res == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable String> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable String(String)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var9) on <var9:MMethodDef> */
var14 = var9->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var9:MMethodDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var12) on <var12:MClassDef> */
var17 = var12->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var12:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline global_compiler#CustomizedRuntimeFunction#recv (self) on <self:CustomizedRuntimeFunction> */
var20 = self->attrs[COLOR_nitc__global_compiler__CustomizedRuntimeFunction___recv].val; /* _recv on <self:CustomizedRuntimeFunction> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 936);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var15,var18) on <var15:MClassType> */
var_other23 = var18;
{
{ /* Inline kernel#Object#is_same_instance (var15,var_other23) on <var15:MClassType> */
var26 = var15 == var_other23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var29 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(var27);
}
var_res = var30;
} else {
if (unlikely(varonce==NULL)) {
var31 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "__";
var35 = core__abstract_text___CString___to_s_full(var34, 2l, 2l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var31)->values[1]=var33;
} else {
var31 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var38 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name(var36);
}
((struct instance_core__NativeArray*)var31)->values[0]=var39;
{
{ /* Inline global_compiler#CustomizedRuntimeFunction#recv (self) on <self:CustomizedRuntimeFunction> */
var42 = self->attrs[COLOR_nitc__global_compiler__CustomizedRuntimeFunction___recv].val; /* _recv on <self:CustomizedRuntimeFunction> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 936);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self))(var40->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var40); /* c_name on <var40:MClassType>*/
}
((struct instance_core__NativeArray*)var31)->values[2]=var43;
{
var44 = ((val*(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce = var31;
var_res = var44;
}
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache= (self,var_res) on <self:CustomizedRuntimeFunction> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = var_res; /* _c_name_cache on <self:CustomizedRuntimeFunction> */
RET_LABEL45:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#== for (self: CustomizedRuntimeFunction, nullable Object): Bool */
short int nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : MMethodDef */;
val* var5 /* : MMethodDef */;
val* var6 /* : MMethodDef */;
val* var8 /* : MMethodDef */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa CustomizedRuntimeFunction */
cltype = type_nitc__global_compiler__CustomizedRuntimeFunction.color;
idtype = type_nitc__global_compiler__CustomizedRuntimeFunction.id;
if(var_o == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (var_o) on <var_o:nullable Object(CustomizedRuntimeFunction)> */
var8 = var_o->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <var_o:nullable Object(CustomizedRuntimeFunction)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var3,var6) on <var3:MMethodDef> */
var_other = var6;
{
var11 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, var_other); /* == on <var3:MMethodDef>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline global_compiler#CustomizedRuntimeFunction#recv (self) on <self:CustomizedRuntimeFunction> */
var15 = self->attrs[COLOR_nitc__global_compiler__CustomizedRuntimeFunction___recv].val; /* _recv on <self:CustomizedRuntimeFunction> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 936);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline global_compiler#CustomizedRuntimeFunction#recv (var_o) on <var_o:nullable Object(CustomizedRuntimeFunction)> */
var18 = var_o->attrs[COLOR_nitc__global_compiler__CustomizedRuntimeFunction___recv].val; /* _recv on <var_o:nullable Object(CustomizedRuntimeFunction)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 936);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var13,var16) on <var13:MClassType> */
var_other = var16;
{
var21 = ((short int(*)(val* self, val* p0))(var13->class->vft[COLOR_core__kernel__Object___61d_61d]))(var13, var_other); /* == on <var13:MClassType>*/
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#hash for (self: CustomizedRuntimeFunction): Int */
long nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
long var4 /* : Int */;
val* var5 /* : MClassType */;
val* var7 /* : MClassType */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__Object___hash(var1);
}
{
{ /* Inline global_compiler#CustomizedRuntimeFunction#recv (self) on <self:CustomizedRuntimeFunction> */
var7 = self->attrs[COLOR_nitc__global_compiler__CustomizedRuntimeFunction___recv].val; /* _recv on <self:CustomizedRuntimeFunction> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 936);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__Object___hash(var5);
}
{
{ /* Inline kernel#Int#+ (var4,var8) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var4 + var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#to_s for (self: CustomizedRuntimeFunction): String */
val* nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
val* var4 /* : MClassDef */;
val* var6 /* : MClassDef */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : MMethodDef */;
val* var20 /* : MMethodDef */;
val* var21 /* : String */;
val* var23 /* : String */;
val* var24 /* : NativeArray[String] */;
static val* varonce;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : MMethodDef */;
val* var31 /* : MMethodDef */;
val* var32 /* : String */;
val* var33 /* : MClassType */;
val* var35 /* : MClassType */;
val* var36 /* : String */;
val* var37 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var1) on <var1:MMethodDef> */
var6 = var1->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var1:MMethodDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var4) on <var4:MClassDef> */
var9 = var4->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var4:MClassDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline global_compiler#CustomizedRuntimeFunction#recv (self) on <self:CustomizedRuntimeFunction> */
var12 = self->attrs[COLOR_nitc__global_compiler__CustomizedRuntimeFunction___recv].val; /* _recv on <self:CustomizedRuntimeFunction> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 936);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var7,var10) on <var7:MClassType> */
var_other = var10;
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:MClassType> */
var17 = var7 == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
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
{ /* Inline model#MPropDef#to_s (var18) on <var18:MMethodDef> */
var23 = var18->attrs[COLOR_nitc__model__MPropDef___to_s].val; /* _to_s on <var18:MMethodDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2450);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var = var21;
goto RET_LABEL;
} else {
if (unlikely(varonce==NULL)) {
var24 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "@";
var28 = core__abstract_text___CString___to_s_full(var27, 1l, 1l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var24)->values[1]=var26;
} else {
var24 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var31 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__Object__to_s]))(var29); /* to_s on <var29:MMethodDef>*/
}
((struct instance_core__NativeArray*)var24)->values[0]=var32;
{
{ /* Inline global_compiler#CustomizedRuntimeFunction#recv (self) on <self:CustomizedRuntimeFunction> */
var35 = self->attrs[COLOR_nitc__global_compiler__CustomizedRuntimeFunction___recv].val; /* _recv on <self:CustomizedRuntimeFunction> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 936);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__Object__to_s]))(var33); /* to_s on <var33:MClassType>*/
}
((struct instance_core__NativeArray*)var24)->values[2]=var36;
{
var37 = ((val*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce = var24;
var = var37;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method global_compiler#CustomizedRuntimeFunction#compile_to_c for (self: CustomizedRuntimeFunction, GlobalCompiler) */
void nitc__global_compiler___nitc__global_compiler__CustomizedRuntimeFunction___nitc__abstract_compiler__AbstractRuntimeFunction__compile_to_c(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_compiler /* var compiler: GlobalCompiler */;
val* var1 /* : MClassType */;
val* var3 /* : MClassType */;
val* var_recv /* var recv: MClassType */;
val* var4 /* : MMethodDef */;
val* var6 /* : MMethodDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Sys */;
val* var19 /* : NativeArray[String] */;
static val* varonce;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : GlobalCompilerVisitor */;
val* var_v /* var v: GlobalCompilerVisitor */;
val* var36 /* : RuntimeVariable */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var_selfvar /* var selfvar: RuntimeVariable */;
val* var41 /* : RapidTypeAnalysis */;
val* var43 /* : RapidTypeAnalysis */;
val* var44 /* : HashSet[MClassType] */;
val* var46 /* : HashSet[MClassType] */;
short int var47 /* : Bool */;
val* var49 /* : Array[RuntimeVariable] */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var50 /* : StaticFrame */;
val* var_frame /* var frame: StaticFrame */;
val* var52 /* : FlatBuffer */;
val* var_sig /* var sig: FlatBuffer */;
val* var54 /* : FlatBuffer */;
val* var_comment /* var comment: FlatBuffer */;
val* var56 /* : nullable MSignature */;
val* var58 /* : nullable MSignature */;
val* var59 /* : nullable MType */;
val* var61 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : MType */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : String */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
val* var80 /* : String */;
val* var82 /* : NativeArray[String] */;
static val* varonce81;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var95 /* : NativeArray[String] */;
static val* varonce94;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : CString */;
val* var99 /* : String */;
val* var100 /* : String */;
val* var101 /* : String */;
long var_i /* var i: Int */;
val* var102 /* : nullable MSignature */;
val* var104 /* : nullable MSignature */;
long var105 /* : Int */;
long var_ /* var : Int */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
const char* var_class_name111;
short int var112 /* : Bool */;
val* var113 /* : nullable MSignature */;
val* var115 /* : nullable MSignature */;
val* var116 /* : Array[MParameter] */;
val* var118 /* : Array[MParameter] */;
val* var119 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var120 /* : MType */;
val* var122 /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
val* var126 /* : MModule */;
val* var127 /* : MClassType */;
val* var128 /* : MType */;
val* var130 /* : NativeArray[String] */;
static val* varonce129;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : String */;
val* var136 /* : String */;
val* var138 /* : NativeArray[String] */;
static val* varonce137;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : CString */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var148 /* : String */;
val* var149 /* : String */;
val* var150 /* : RuntimeVariable */;
val* var152 /* : NativeArray[String] */;
static val* varonce151;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : CString */;
val* var156 /* : String */;
val* var157 /* : String */;
val* var158 /* : String */;
val* var_argvar /* var argvar: RuntimeVariable */;
long var159 /* : Int */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : CString */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
val* var174 /* : NativeArray[String] */;
static val* varonce173;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : CString */;
val* var178 /* : String */;
val* var179 /* : String */;
val* var180 /* : String */;
val* var181 /* : CodeWriter */;
val* var183 /* : CodeWriter */;
val* var185 /* : NativeArray[String] */;
static val* varonce184;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : CString */;
val* var189 /* : String */;
val* var190 /* : String */;
val* var191 /* : String */;
val* var193 /* : NativeArray[String] */;
static val* varonce192;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : CString */;
val* var197 /* : String */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : CString */;
val* var205 /* : String */;
val* var206 /* : String */;
val* var207 /* : String */;
val* var208 /* : String */;
val* var210 /* : NativeArray[String] */;
static val* varonce209;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : CString */;
val* var214 /* : String */;
val* var215 /* : String */;
val* var216 /* : String */;
short int var217 /* : Bool */;
short int var218 /* : Bool */;
short int var220 /* : Bool */;
short int var221 /* : Bool */;
val* var222 /* : RuntimeVariable */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : CString */;
val* var227 /* : String */;
val* var228 /* : String */;
val* var230 /* : nullable RuntimeVariable */;
val* var232 /* : NativeArray[String] */;
static val* varonce231;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
val* var237 /* : nullable String */;
val* var239 /* : nullable String */;
val* var240 /* : String */;
short int var241 /* : Bool */;
short int var242 /* : Bool */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
val* var247 /* : NativeArray[String] */;
static val* varonce246;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : CString */;
val* var251 /* : String */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : CString */;
val* var255 /* : String */;
val* var256 /* : nullable RuntimeVariable */;
val* var258 /* : nullable RuntimeVariable */;
val* var259 /* : String */;
val* var260 /* : String */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : CString */;
val* var264 /* : String */;
val* var265 /* : String */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : CString */;
val* var269 /* : String */;
short int var270 /* : Bool */;
short int var271 /* : Bool */;
val* var272 /* : HashMap[String, String] */;
val* var274 /* : HashMap[String, String] */;
val* var275 /* : String */;
val* var277 /* : NativeArray[String] */;
static val* varonce276;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : CString */;
val* var281 /* : String */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : CString */;
val* var285 /* : String */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : CString */;
val* var289 /* : String */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : CString */;
val* var293 /* : String */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : CString */;
val* var297 /* : String */;
val* var298 /* : MClassDef */;
val* var300 /* : MClassDef */;
val* var301 /* : MModule */;
val* var303 /* : MModule */;
val* var304 /* : String */;
val* var306 /* : String */;
val* var307 /* : MClassDef */;
val* var309 /* : MClassDef */;
val* var310 /* : MClass */;
val* var312 /* : MClass */;
val* var313 /* : String */;
val* var315 /* : String */;
val* var316 /* : MProperty */;
val* var318 /* : MProperty */;
val* var319 /* : String */;
val* var321 /* : String */;
val* var322 /* : Location */;
val* var324 /* : Location */;
val* var325 /* : nullable SourceFile */;
val* var327 /* : nullable SourceFile */;
val* var328 /* : String */;
val* var330 /* : String */;
val* var331 /* : Location */;
val* var333 /* : Location */;
long var334 /* : Int */;
long var336 /* : Int */;
val* var337 /* : String */;
val* var338 /* : String */;
/* Covariant cast for argument 0 (compiler) <p0:GlobalCompiler> isa COMPILER */
/* <p0:GlobalCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction__COMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 974);
fatal_exit(1);
}
var_compiler = p0;
{
{ /* Inline global_compiler#CustomizedRuntimeFunction#recv (self) on <self:CustomizedRuntimeFunction> */
var3 = self->attrs[COLOR_nitc__global_compiler__CustomizedRuntimeFunction___recv].val; /* _recv on <self:CustomizedRuntimeFunction> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 936);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_recv = var1;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:CustomizedRuntimeFunction> */
var6 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:CustomizedRuntimeFunction> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1933);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mmethoddef = var4;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:GlobalCompiler> */
var9 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:GlobalCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var12 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var10) on <var10:MClassDef> */
var15 = var10->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var10:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc___nitc__MType___is_subtype(var_recv, var7, ((val*)NULL), var13);
}
var17 = !var16;
if (var17){
var18 = glob_sys;
if (unlikely(varonce==NULL)) {
var19 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "problem: why do we compile ";
var23 = core__abstract_text___CString___to_s_full(var22, 27l, 27l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[0]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = " for ";
var27 = core__abstract_text___CString___to_s_full(var26, 5l, 5l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var19)->values[2]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "?";
var31 = core__abstract_text___CString___to_s_full(var30, 1l, 1l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var19)->values[4]=var29;
} else {
var19 = varonce;
varonce = NULL;
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:CustomizedRuntimeFunction>*/
}
((struct instance_core__NativeArray*)var19)->values[1]=var32;
{
var33 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:MClassType>*/
}
((struct instance_core__NativeArray*)var19)->values[3]=var33;
{
var34 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce = var19;
{
core__file___Sys___print(var18, var34); /* Direct call file#Sys#print on <var18:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 981);
fatal_exit(1);
} else {
}
{
var35 = nitc___nitc__GlobalCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(var_compiler);
}
var_v = var35;
var36 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "self";
var40 = core__abstract_text___CString___to_s_full(var39, 4l, 4l);
var38 = var40;
varonce37 = var38;
}
{
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var36, var38); /* name= on <var36:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var36, var_recv); /* mtype= on <var36:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var36, var_recv); /* mcasttype= on <var36:RuntimeVariable>*/
}
{
((void(*)(val* self))(var36->class->vft[COLOR_core__kernel__Object__init]))(var36); /* init on <var36:RuntimeVariable>*/
}
var_selfvar = var36;
{
{ /* Inline global_compiler#GlobalCompiler#runtime_type_analysis (var_compiler) on <var_compiler:GlobalCompiler> */
var43 = var_compiler->attrs[COLOR_nitc__global_compiler__GlobalCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <var_compiler:GlobalCompiler> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _runtime_type_analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 80);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (var41) on <var41:RapidTypeAnalysis> */
var46 = var41->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <var41:RapidTypeAnalysis> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = core___core__HashSet___core__abstract_collection__Collection__has(var44, var_recv);
}
if (var47){
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_selfvar,1) on <var_selfvar:RuntimeVariable> */
var_selfvar->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_selfvar:RuntimeVariable> */
RET_LABEL48:(void)0;
}
}
} else {
}
var49 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___core__kernel__Object__init(var49); /* Direct call array#Array#init on <var49:Array[RuntimeVariable]>*/
}
var_arguments = var49;
var50 = NEW_nitc__StaticFrame(&type_nitc__StaticFrame);
{
((void(*)(val* self, val* p0))(var50->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d]))(var50, var_v); /* visitor= on <var50:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var50->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d]))(var50, var_mmethoddef); /* mpropdef= on <var50:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var50->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d]))(var50, var_recv); /* receiver= on <var50:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var50->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d]))(var50, var_arguments); /* arguments= on <var50:StaticFrame>*/
}
{
((void(*)(val* self))(var50->class->vft[COLOR_core__kernel__Object__init]))(var50); /* init on <var50:StaticFrame>*/
}
var_frame = var50;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:GlobalCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:GlobalCompilerVisitor> */
RET_LABEL51:(void)0;
}
}
var52 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat#FlatBuffer#init (var52) on <var52:FlatBuffer> */
{
((void(*)(val* self))(var52->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var52); /* init on <var52:FlatBuffer>*/
}
RET_LABEL53:(void)0;
}
}
var_sig = var52;
var54 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat#FlatBuffer#init (var54) on <var54:FlatBuffer> */
{
((void(*)(val* self))(var54->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var54); /* init on <var54:FlatBuffer>*/
}
RET_LABEL55:(void)0;
}
}
var_comment = var54;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var58 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (var56 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 995);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var56) on <var56:nullable MSignature> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var61 = var56->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var56:nullable MSignature> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
var_ret = var59;
if (var_ret == NULL) {
var62 = 0; /* is null */
} else {
var62 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var65 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var66 = !var65;
var63 = var66;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (var62){
{
var67 = nitc___nitc__AbstractCompilerVisitor___resolve_for(var_v, var_ret, var_selfvar);
}
var_ret = var67;
if (unlikely(varonce68==NULL)) {
var69 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = " ";
var73 = core__abstract_text___CString___to_s_full(var72, 1l, 1l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var69)->values[1]=var71;
} else {
var69 = varonce68;
varonce68 = NULL;
}
{
var74 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_ret); /* ctype on <var_ret:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var69)->values[0]=var74;
{
var75 = ((val*(*)(val* self))(var69->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_sig, var75); /* Direct call flat#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
} else {
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "void ";
var79 = core__abstract_text___CString___to_s_full(var78, 5l, 5l);
var77 = var79;
varonce76 = var77;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_sig, var77); /* Direct call flat#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
}
{
var80 = nitc___nitc__AbstractRuntimeFunction___c_name(self);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_sig, var80); /* Direct call flat#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (unlikely(varonce81==NULL)) {
var82 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "(";
var86 = core__abstract_text___CString___to_s_full(var85, 1l, 1l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var82)->values[0]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = " ";
var90 = core__abstract_text___CString___to_s_full(var89, 1l, 1l);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var82)->values[2]=var88;
} else {
var82 = varonce81;
varonce81 = NULL;
}
{
var91 = nitc__abstract_compiler___MClassType___MType__ctype(var_recv);
}
((struct instance_core__NativeArray*)var82)->values[1]=var91;
{
var92 = ((val*(*)(val* self))(var_selfvar->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_selfvar); /* to_s on <var_selfvar:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var82)->values[3]=var92;
{
var93 = ((val*(*)(val* self))(var82->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce81 = var82;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_sig, var93); /* Direct call flat#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (unlikely(varonce94==NULL)) {
var95 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "(self: ";
var99 = core__abstract_text___CString___to_s_full(var98, 7l, 7l);
var97 = var99;
varonce96 = var97;
}
((struct instance_core__NativeArray*)var95)->values[0]=var97;
} else {
var95 = varonce94;
varonce94 = NULL;
}
{
var100 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:MClassType>*/
}
((struct instance_core__NativeArray*)var95)->values[1]=var100;
{
var101 = ((val*(*)(val* self))(var95->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var95); /* native_to_s on <var95:NativeArray[String]>*/
}
varonce94 = var95;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_comment, var101); /* Direct call flat#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments, var_selfvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
var_i = 0l;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var104 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var102 = var104;
RET_LABEL103:(void)0;
}
}
if (var102 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 1006);
fatal_exit(1);
} else {
var105 = nitc___nitc__MSignature___arity(var102);
}
var_ = var105;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var108 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var108)) {
var_class_name111 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name111);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var112 = var_i < var_;
var106 = var112;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
if (var106){
} else {
goto BREAK_label;
}
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var115 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (var113 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 1007);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var113) on <var113:nullable MSignature> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var118 = var113->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var113:nullable MSignature> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
var119 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var116, var_i);
}
var_mp = var119;
{
{ /* Inline model#MParameter#mtype (var_mp) on <var_mp:MParameter> */
var122 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
var_mtype = var120;
{
{ /* Inline model#MParameter#is_vararg (var_mp) on <var_mp:MParameter> */
var125 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
if (var123){
{
var126 = nitc___nitc__AbstractCompilerVisitor___mmodule(var_v);
}
{
var127 = nitc__model___MModule___array_type(var126, var_mtype);
}
var_mtype = var127;
} else {
}
{
var128 = nitc___nitc__AbstractCompilerVisitor___resolve_for(var_v, var_mtype, var_selfvar);
}
var_mtype = var128;
if (unlikely(varonce129==NULL)) {
var130 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = ", ";
var134 = core__abstract_text___CString___to_s_full(var133, 2l, 2l);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var130)->values[0]=var132;
} else {
var130 = varonce129;
varonce129 = NULL;
}
{
var135 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var130)->values[1]=var135;
{
var136 = ((val*(*)(val* self))(var130->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var130); /* native_to_s on <var130:NativeArray[String]>*/
}
varonce129 = var130;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_comment, var136); /* Direct call flat#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
if (unlikely(varonce137==NULL)) {
var138 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = ", ";
var142 = core__abstract_text___CString___to_s_full(var141, 2l, 2l);
var140 = var142;
varonce139 = var140;
}
((struct instance_core__NativeArray*)var138)->values[0]=var140;
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = " p";
var146 = core__abstract_text___CString___to_s_full(var145, 2l, 2l);
var144 = var146;
varonce143 = var144;
}
((struct instance_core__NativeArray*)var138)->values[2]=var144;
} else {
var138 = varonce137;
varonce137 = NULL;
}
{
var147 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var138)->values[1]=var147;
var148 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var138)->values[3]=var148;
{
var149 = ((val*(*)(val* self))(var138->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var138); /* native_to_s on <var138:NativeArray[String]>*/
}
varonce137 = var138;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_sig, var149); /* Direct call flat#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
var150 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce151==NULL)) {
var152 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "p";
var156 = core__abstract_text___CString___to_s_full(var155, 1l, 1l);
var154 = var156;
varonce153 = var154;
}
((struct instance_core__NativeArray*)var152)->values[0]=var154;
} else {
var152 = varonce151;
varonce151 = NULL;
}
var157 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var152)->values[1]=var157;
{
var158 = ((val*(*)(val* self))(var152->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var152); /* native_to_s on <var152:NativeArray[String]>*/
}
varonce151 = var152;
{
((void(*)(val* self, val* p0))(var150->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var150, var158); /* name= on <var150:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var150->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var150, var_mtype); /* mtype= on <var150:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var150->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var150, var_mtype); /* mcasttype= on <var150:RuntimeVariable>*/
}
{
((void(*)(val* self))(var150->class->vft[COLOR_core__kernel__Object__init]))(var150); /* init on <var150:RuntimeVariable>*/
}
var_argvar = var150;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arguments, var_argvar); /* Direct call array#Array#add on <var_arguments:Array[RuntimeVariable]>*/
}
{
var159 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var159;
}
BREAK_label: (void)0;
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = ")";
var163 = core__abstract_text___CString___to_s_full(var162, 1l, 1l);
var161 = var163;
varonce160 = var161;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_sig, var161); /* Direct call flat#FlatBuffer#append on <var_sig:FlatBuffer>*/
}
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = ")";
var167 = core__abstract_text___CString___to_s_full(var166, 1l, 1l);
var165 = var167;
varonce164 = var165;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_comment, var165); /* Direct call flat#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
if (var_ret == NULL) {
var168 = 0; /* is null */
} else {
var168 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var171 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var172 = !var171;
var169 = var172;
goto RET_LABEL170;
RET_LABEL170:(void)0;
}
var168 = var169;
}
if (var168){
if (unlikely(varonce173==NULL)) {
var174 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = ": ";
var178 = core__abstract_text___CString___to_s_full(var177, 2l, 2l);
var176 = var178;
varonce175 = var176;
}
((struct instance_core__NativeArray*)var174)->values[0]=var176;
} else {
var174 = varonce173;
varonce173 = NULL;
}
{
var179 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var174)->values[1]=var179;
{
var180 = ((val*(*)(val* self))(var174->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var174); /* native_to_s on <var174:NativeArray[String]>*/
}
varonce173 = var174;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_comment, var180); /* Direct call flat#FlatBuffer#append on <var_comment:FlatBuffer>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var_compiler) on <var_compiler:GlobalCompiler> */
var183 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var_compiler:GlobalCompiler> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
if (unlikely(varonce184==NULL)) {
var185 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = ";";
var189 = core__abstract_text___CString___to_s_full(var188, 1l, 1l);
var187 = var189;
varonce186 = var187;
}
((struct instance_core__NativeArray*)var185)->values[1]=var187;
} else {
var185 = varonce184;
varonce184 = NULL;
}
{
var190 = ((val*(*)(val* self))(var_sig->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sig); /* to_s on <var_sig:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var185)->values[0]=var190;
{
var191 = ((val*(*)(val* self))(var185->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var185); /* native_to_s on <var185:NativeArray[String]>*/
}
varonce184 = var185;
{
nitc___nitc__CodeWriter___add_decl(var181, var191); /* Direct call abstract_compiler#CodeWriter#add_decl on <var181:CodeWriter>*/
}
if (unlikely(varonce192==NULL)) {
var193 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = "/* method ";
var197 = core__abstract_text___CString___to_s_full(var196, 10l, 10l);
var195 = var197;
varonce194 = var195;
}
((struct instance_core__NativeArray*)var193)->values[0]=var195;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = " for ";
var201 = core__abstract_text___CString___to_s_full(var200, 5l, 5l);
var199 = var201;
varonce198 = var199;
}
((struct instance_core__NativeArray*)var193)->values[2]=var199;
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = " */";
var205 = core__abstract_text___CString___to_s_full(var204, 3l, 3l);
var203 = var205;
varonce202 = var203;
}
((struct instance_core__NativeArray*)var193)->values[4]=var203;
} else {
var193 = varonce192;
varonce192 = NULL;
}
{
var206 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:CustomizedRuntimeFunction>*/
}
((struct instance_core__NativeArray*)var193)->values[1]=var206;
{
var207 = ((val*(*)(val* self))(var_comment->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_comment); /* to_s on <var_comment:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var193)->values[3]=var207;
{
var208 = ((val*(*)(val* self))(var193->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var193); /* native_to_s on <var193:NativeArray[String]>*/
}
varonce192 = var193;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var208); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:GlobalCompilerVisitor>*/
}
if (unlikely(varonce209==NULL)) {
var210 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = " {";
var214 = core__abstract_text___CString___to_s_full(var213, 2l, 2l);
var212 = var214;
varonce211 = var212;
}
((struct instance_core__NativeArray*)var210)->values[1]=var212;
} else {
var210 = varonce209;
varonce209 = NULL;
}
{
var215 = ((val*(*)(val* self))(var_sig->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sig); /* to_s on <var_sig:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var210)->values[0]=var215;
{
var216 = ((val*(*)(val* self))(var210->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var210); /* native_to_s on <var210:NativeArray[String]>*/
}
varonce209 = var210;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var216); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:GlobalCompilerVisitor>*/
}
if (var_ret == NULL) {
var217 = 0; /* is null */
} else {
var217 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var220 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var221 = !var220;
var218 = var221;
goto RET_LABEL219;
RET_LABEL219:(void)0;
}
var217 = var218;
}
if (var217){
{
var222 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_ret);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnvar= (var_frame,var222) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val = var222; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL223:(void)0;
}
}
} else {
}
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = "RET_LABEL";
var227 = core__abstract_text___CString___to_s_full(var226, 9l, 9l);
var225 = var227;
varonce224 = var225;
}
{
var228 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var225);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel= (var_frame,var228) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val = var228; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL229:(void)0;
}
}
{
var230 = nitc__abstract_compiler___MMethodDef___compile_inside_to_c(var_mmethoddef, var_v, var_arguments);
}
if (unlikely(varonce231==NULL)) {
var232 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = ":;";
var236 = core__abstract_text___CString___to_s_full(var235, 2l, 2l);
var234 = var236;
varonce233 = var234;
}
((struct instance_core__NativeArray*)var232)->values[1]=var234;
} else {
var232 = varonce231;
varonce231 = NULL;
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var_frame) on <var_frame:StaticFrame> */
var239 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 1035);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var232)->values[0]=var237;
{
var240 = ((val*(*)(val* self))(var232->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var232); /* native_to_s on <var232:NativeArray[String]>*/
}
varonce231 = var232;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var240); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
if (var_ret == NULL) {
var241 = 0; /* is null */
} else {
var241 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var244 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var245 = !var244;
var242 = var245;
goto RET_LABEL243;
RET_LABEL243:(void)0;
}
var241 = var242;
}
if (var241){
if (unlikely(varonce246==NULL)) {
var247 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "return ";
var251 = core__abstract_text___CString___to_s_full(var250, 7l, 7l);
var249 = var251;
varonce248 = var249;
}
((struct instance_core__NativeArray*)var247)->values[0]=var249;
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = ";";
var255 = core__abstract_text___CString___to_s_full(var254, 1l, 1l);
var253 = var255;
varonce252 = var253;
}
((struct instance_core__NativeArray*)var247)->values[2]=var253;
} else {
var247 = varonce246;
varonce246 = NULL;
}
{
{ /* Inline abstract_compiler#StaticFrame#returnvar (var_frame) on <var_frame:StaticFrame> */
var258 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var_frame:StaticFrame> */
var256 = var258;
RET_LABEL257:(void)0;
}
}
if (unlikely(var256 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 1037);
fatal_exit(1);
}
{
var259 = ((val*(*)(val* self))(var256->class->vft[COLOR_core__abstract_text__Object__to_s]))(var256); /* to_s on <var256:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var247)->values[1]=var259;
{
var260 = ((val*(*)(val* self))(var247->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var247); /* native_to_s on <var247:NativeArray[String]>*/
}
varonce246 = var247;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var260); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
} else {
}
if (likely(varonce261!=NULL)) {
var262 = varonce261;
} else {
var263 = "}";
var264 = core__abstract_text___CString___to_s_full(var263, 1l, 1l);
var262 = var264;
varonce261 = var262;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var262); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:GlobalCompilerVisitor>*/
}
{
var265 = nitc___nitc__AbstractRuntimeFunction___c_name(self);
}
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = "VIRTUAL";
var269 = core__abstract_text___CString___to_s_full(var268, 7l, 7l);
var267 = var269;
varonce266 = var267;
}
{
var270 = core___core__Text___has_substring(var265, var267, 0l);
}
var271 = !var270;
if (var271){
{
{ /* Inline abstract_compiler#AbstractCompiler#names (var_compiler) on <var_compiler:GlobalCompiler> */
var274 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <var_compiler:GlobalCompiler> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 528);
fatal_exit(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
{
var275 = nitc___nitc__AbstractRuntimeFunction___c_name(self);
}
if (unlikely(varonce276==NULL)) {
var277 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce278!=NULL)) {
var279 = varonce278;
} else {
var280 = "::";
var281 = core__abstract_text___CString___to_s_full(var280, 2l, 2l);
var279 = var281;
varonce278 = var279;
}
((struct instance_core__NativeArray*)var277)->values[1]=var279;
if (likely(varonce282!=NULL)) {
var283 = varonce282;
} else {
var284 = "::";
var285 = core__abstract_text___CString___to_s_full(var284, 2l, 2l);
var283 = var285;
varonce282 = var283;
}
((struct instance_core__NativeArray*)var277)->values[3]=var283;
if (likely(varonce286!=NULL)) {
var287 = varonce286;
} else {
var288 = " (";
var289 = core__abstract_text___CString___to_s_full(var288, 2l, 2l);
var287 = var289;
varonce286 = var287;
}
((struct instance_core__NativeArray*)var277)->values[5]=var287;
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = ":";
var293 = core__abstract_text___CString___to_s_full(var292, 1l, 1l);
var291 = var293;
varonce290 = var291;
}
((struct instance_core__NativeArray*)var277)->values[7]=var291;
if (likely(varonce294!=NULL)) {
var295 = varonce294;
} else {
var296 = ")";
var297 = core__abstract_text___CString___to_s_full(var296, 1l, 1l);
var295 = var297;
varonce294 = var295;
}
((struct instance_core__NativeArray*)var277)->values[9]=var295;
} else {
var277 = varonce276;
varonce276 = NULL;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var300 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var300 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var298 = var300;
RET_LABEL299:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var298) on <var298:MClassDef> */
var303 = var298->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var298:MClassDef> */
if (unlikely(var303 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var301 = var303;
RET_LABEL302:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var301) on <var301:MModule> */
var306 = var301->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var301:MModule> */
if (unlikely(var306 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var304 = var306;
RET_LABEL305:(void)0;
}
}
((struct instance_core__NativeArray*)var277)->values[0]=var304;
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var309 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var309 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var307 = var309;
RET_LABEL308:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var307) on <var307:MClassDef> */
var312 = var307->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var307:MClassDef> */
if (unlikely(var312 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
{
{ /* Inline model#MClass#name (var310) on <var310:MClass> */
var315 = var310->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var310:MClass> */
if (unlikely(var315 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var313 = var315;
RET_LABEL314:(void)0;
}
}
((struct instance_core__NativeArray*)var277)->values[2]=var313;
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var318 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var318 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var316 = var318;
RET_LABEL317:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var316) on <var316:MProperty(MMethod)> */
var321 = var316->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var316:MProperty(MMethod)> */
if (unlikely(var321 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var319 = var321;
RET_LABEL320:(void)0;
}
}
((struct instance_core__NativeArray*)var277)->values[4]=var319;
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var324 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var324 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2360);
fatal_exit(1);
}
var322 = var324;
RET_LABEL323:(void)0;
}
}
{
{ /* Inline location#Location#file (var322) on <var322:Location> */
var327 = var322->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var322:Location> */
var325 = var327;
RET_LABEL326:(void)0;
}
}
if (var325 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 1040);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var325) on <var325:nullable SourceFile> */
if (unlikely(var325 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var330 = var325->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var325:nullable SourceFile> */
if (unlikely(var330 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var328 = var330;
RET_LABEL329:(void)0;
}
}
((struct instance_core__NativeArray*)var277)->values[6]=var328;
{
{ /* Inline model#MPropDef#location (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var333 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___location].val; /* _location on <var_mmethoddef:MMethodDef> */
if (unlikely(var333 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2360);
fatal_exit(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var331) on <var331:Location> */
var336 = var331->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var331:Location> */
var334 = var336;
RET_LABEL335:(void)0;
}
}
var337 = core__flat___Int___core__abstract_text__Object__to_s(var334);
((struct instance_core__NativeArray*)var277)->values[8]=var337;
{
var338 = ((val*(*)(val* self))(var277->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var277); /* native_to_s on <var277:NativeArray[String]>*/
}
varonce276 = var277;
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var272, var275, var338); /* Direct call hash_collection#HashMap#[]= on <var272:HashMap[String, String]>*/
}
} else {
}
RET_LABEL:;
}
