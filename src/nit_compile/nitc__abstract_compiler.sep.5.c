#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler#AMethPropdef#compile_externmeth_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nitc__abstract_compiler___AMethPropdef___compile_externmeth_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : AbstractCompiler */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : ANodes[AExpr] */;
val* var19 /* : ANodes[AExpr] */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : AbstractCompiler */;
val* var26 /* : AbstractCompiler */;
val* var27 /* : ModelBuilder */;
val* var29 /* : ModelBuilder */;
val* var30 /* : nullable String */;
val* var_externname /* var externname: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : MClassDef */;
val* var35 /* : MClassDef */;
val* var36 /* : MModule */;
val* var38 /* : MModule */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var39 /* : nullable MSignature */;
val* var41 /* : nullable MSignature */;
val* var42 /* : nullable MType */;
val* var44 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : nullable Object */;
val* var51 /* : MType */;
val* var52 /* : RuntimeVariable */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var_other56 /* var other: nullable Object */;
short int var57 /* : Bool */;
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
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "extern";
var3 = core__abstract_text___CString___to_s_full(var2, 6l, 6l);
var1 = var3;
varonce = var1;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var6 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var4) on <var4:AbstractCompiler> */
var9 = var4->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc__annotation___Prod___get_single_annotation(self, var1, var7);
}
var_at = var10;
if (var_at == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,((val*)NULL)) on <var_at:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_at, var_other); /* == on <var_at:nullable AAnnotation(AAnnotation)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_at) on <var_at:nullable AAnnotation(AAnnotation)> */
var19 = var_at->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_at:nullable AAnnotation(AAnnotation)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var17);
}
{
{ /* Inline kernel#Int#== (var20,1l) on <var20:Int> */
var23 = var20 == 1l;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var11 = var21;
} else {
var11 = var_;
}
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var26 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var24) on <var24:AbstractCompiler> */
var29 = var24->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var24:AbstractCompiler> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc__annotation___AAnnotation___arg_as_string(var_at, var27);
}
var_externname = var30;
if (var_externname == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
var32 = ((short int(*)(val* self, val* p0))(var_externname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_externname, ((val*)NULL)); /* == on <var_externname:nullable Object(nullable String)>*/
var31 = var32;
}
if (var31){
var = 0;
goto RET_LABEL;
} else {
}
} else {
var = 0;
goto RET_LABEL;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var35 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var33) on <var33:MClassDef> */
var38 = var33->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var33:MClassDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_extern(var_v, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <var_v:AbstractCompilerVisitor>*/
}
var_res = ((val*)NULL);
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var41 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (var39 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3109);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var39) on <var39:nullable MSignature> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var44 = var39->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var39:nullable MSignature> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_ret = var42;
if (var_ret == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var48 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var49 = !var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
{
var50 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var51 = nitc___nitc__AbstractCompilerVisitor___resolve_for(var_v, var_ret, var50);
}
var_ret = var51;
{
var52 = nitc___nitc__AbstractCompilerVisitor___new_var_extern(var_v, var_ret);
}
var_res = var52;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments); /* adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern]))(var_v, var_mpropdef, var_arguments); /* unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
if (var_res == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other56 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other56) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var59 = var_res == var_other56;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
if (unlikely(varonce60==NULL)) {
var61 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "(";
var65 = core__abstract_text___CString___to_s_full(var64, 1l, 1l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var61)->values[1]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = ");";
var69 = core__abstract_text___CString___to_s_full(var68, 2l, 2l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var61)->values[3]=var67;
} else {
var61 = varonce60;
varonce60 = NULL;
}
((struct instance_core__NativeArray*)var61)->values[0]=var_externname;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = ", ";
var73 = core__abstract_text___CString___to_s_full(var72, 2l, 2l);
var71 = var73;
varonce70 = var71;
}
{
var74 = core__abstract_text___Collection___join(var_arguments, var71, ((val*)NULL));
}
((struct instance_core__NativeArray*)var61)->values[2]=var74;
{
var75 = ((val*(*)(val* self))(var61->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " = ";
var81 = core__abstract_text___CString___to_s_full(var80, 3l, 3l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[1]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "(";
var85 = core__abstract_text___CString___to_s_full(var84, 1l, 1l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var77)->values[3]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ");";
var89 = core__abstract_text___CString___to_s_full(var88, 2l, 2l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var77)->values[5]=var87;
} else {
var77 = varonce76;
varonce76 = NULL;
}
{
var90 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var77)->values[0]=var90;
((struct instance_core__NativeArray*)var77)->values[2]=var_externname;
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = ", ";
var94 = core__abstract_text___CString___to_s_full(var93, 2l, 2l);
var92 = var94;
varonce91 = var92;
}
{
var95 = core__abstract_text___Collection___join(var_arguments, var92, ((val*)NULL));
}
((struct instance_core__NativeArray*)var77)->values[4]=var95;
{
var96 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var96); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3121);
fatal_exit(1);
}
{
var97 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_res, var_ret); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_res = var97;
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#compile_externinit_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nitc__abstract_compiler___AMethPropdef___compile_externinit_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : AbstractCompiler */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : AbstractCompiler */;
val* var18 /* : AbstractCompiler */;
val* var19 /* : ModelBuilder */;
val* var21 /* : ModelBuilder */;
val* var22 /* : nullable String */;
val* var_externname /* var externname: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var28 /* : MModule */;
val* var30 /* : MModule */;
val* var31 /* : nullable Object */;
val* var32 /* : MType */;
val* var34 /* : MType */;
val* var_ret /* var ret: MType */;
val* var35 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var36 /* : nullable Object */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
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
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "extern";
var3 = core__abstract_text___CString___to_s_full(var2, 6l, 6l);
var1 = var3;
varonce = var1;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var6 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var4) on <var4:AbstractCompiler> */
var9 = var4->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc__annotation___Prod___get_single_annotation(self, var1, var7);
}
var_at = var10;
if (var_at == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,((val*)NULL)) on <var_at:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_at, var_other); /* == on <var_at:nullable AAnnotation(AAnnotation)>*/
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var18 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var16) on <var16:AbstractCompiler> */
var21 = var16->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var16:AbstractCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc__annotation___AAnnotation___arg_as_string(var_at, var19);
}
var_externname = var22;
if (var_externname == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_externname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_externname, ((val*)NULL)); /* == on <var_externname:nullable Object(nullable String)>*/
var23 = var24;
}
if (var23){
var = 0;
goto RET_LABEL;
} else {
}
} else {
var = 0;
goto RET_LABEL;
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var27 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var25) on <var25:MClassDef> */
var30 = var25->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var25:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_extern(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments); /* adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern]))(var_v, var_mpropdef, var_arguments); /* unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
{
var31 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var31) on <var31:nullable Object(RuntimeVariable)> */
var34 = var31->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var31:nullable Object(RuntimeVariable)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_ret = var32;
{
var35 = nitc___nitc__AbstractCompilerVisitor___new_var_extern(var_v, var_ret);
}
var_res = var35;
{
var36 = core___core__AbstractArray___core__abstract_collection__Sequence__shift(var_arguments);
}
if (unlikely(varonce37==NULL)) {
var38 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " = ";
var42 = core__abstract_text___CString___to_s_full(var41, 3l, 3l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var38)->values[1]=var40;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "(";
var46 = core__abstract_text___CString___to_s_full(var45, 1l, 1l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var38)->values[3]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = ");";
var50 = core__abstract_text___CString___to_s_full(var49, 2l, 2l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var38)->values[5]=var48;
} else {
var38 = varonce37;
varonce37 = NULL;
}
{
var51 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var38)->values[0]=var51;
((struct instance_core__NativeArray*)var38)->values[2]=var_externname;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = ", ";
var55 = core__abstract_text___CString___to_s_full(var54, 2l, 2l);
var53 = var55;
varonce52 = var53;
}
{
var56 = core__abstract_text___Collection___join(var_arguments, var53, ((val*)NULL));
}
((struct instance_core__NativeArray*)var38)->values[4]=var56;
{
var57 = ((val*(*)(val* self))(var38->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var57); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var58 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_v, var_res, var_ret); /* box_extern on <var_v:AbstractCompilerVisitor>*/
}
var_res = var58;
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrPropdef#can_inline for (self: AAttrPropdef): Bool */
short int nitc__abstract_compiler___AAttrPropdef___APropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var3 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrPropdef#compile_to_c for (self: AAttrPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc__abstract_compiler___AAttrPropdef___APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable MMethodDef */;
val* var2 /* : nullable MMethodDef */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable MType */;
val* var20 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_ /* var : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
short int var25 /* : Bool */;
short int var_useiset /* var useiset: Bool */;
val* var26 /* : nullable MAttributeDef */;
val* var28 /* : nullable MAttributeDef */;
val* var29 /* : MProperty */;
val* var31 /* : MProperty */;
val* var_guard /* var guard: MAttribute */;
val* var32 /* : nullable MPropDef */;
val* var34 /* : nullable MPropDef */;
val* var35 /* : MProperty */;
val* var37 /* : MProperty */;
val* var38 /* : RuntimeVariable */;
val* var_set /* var set: nullable Object */;
val* var39 /* : RuntimeVariable */;
val* var40 /* : NativeArray[String] */;
static val* varonce;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : nullable MPropDef */;
val* var53 /* : nullable MPropDef */;
val* var54 /* : MProperty */;
val* var56 /* : MProperty */;
val* var57 /* : RuntimeVariable */;
val* var_res /* var res: nullable Object */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
short int var63 /* : Bool */;
val* var64 /* : RuntimeVariable */;
val* var_true_v /* var true_v: RuntimeVariable */;
val* var65 /* : nullable Object */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable MPropDef */;
val* var72 /* : nullable MPropDef */;
val* var73 /* : MProperty */;
val* var75 /* : MProperty */;
val* var76 /* : nullable Object */;
val* var77 /* : RuntimeVariable */;
val* var78 /* : nullable StaticFrame */;
val* var80 /* : nullable StaticFrame */;
val* var81 /* : nullable RuntimeVariable */;
val* var83 /* : nullable RuntimeVariable */;
val* var84 /* : nullable MMethodDef */;
val* var86 /* : nullable MMethodDef */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
long var92 /* : Int */;
long var94 /* : Int */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
val* var98 /* : nullable Object */;
val* var_recv99 /* var recv: RuntimeVariable */;
val* var100 /* : nullable Object */;
val* var_arg /* var arg: RuntimeVariable */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
short int var_105 /* var : Bool */;
short int var106 /* : Bool */;
val* var107 /* : nullable MPropDef */;
val* var109 /* : nullable MPropDef */;
val* var110 /* : nullable MType */;
val* var112 /* : nullable MType */;
val* var113 /* : RuntimeVariable */;
val* var_value114 /* var value: RuntimeVariable */;
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
val* var127 /* : RuntimeVariable */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
val* var136 /* : nullable MPropDef */;
val* var138 /* : nullable MPropDef */;
val* var139 /* : MProperty */;
val* var141 /* : MProperty */;
val* var142 /* : nullable Object */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
val* var146 /* : nullable MType */;
val* var148 /* : nullable MType */;
val* var_ret149 /* var ret: nullable MType */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var_153 /* var : Bool */;
short int var154 /* : Bool */;
int cltype155;
int idtype156;
short int var157 /* : Bool */;
short int var_useiset158 /* var useiset: Bool */;
short int var159 /* : Bool */;
val* var160 /* : nullable MAttributeDef */;
val* var162 /* : nullable MAttributeDef */;
val* var163 /* : MProperty */;
val* var165 /* : MProperty */;
val* var166 /* : nullable Object */;
val* var167 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var) on <var_mpropdef:MMethodDef> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var10 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var8,1l) on <var8:Int> */
var13 = var8 == 1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3160);
fatal_exit(1);
}
{
var14 = core___core__SequenceRead___Collection__first(var_arguments);
}
var_recv = var14;
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var17 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline modelize_property#AAttrPropdef#mtype (self) on <self:AAttrPropdef> */
var20 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ret = var18;
if (var_ret == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3166);
fatal_exit(1);
} else {
var22 = ((short int(*)(val* self))(var_ret->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_ret); /* is_c_primitive on <var_ret:nullable MType>*/
}
var23 = !var22;
var_ = var23;
if (var23){
/* <var_ret:nullable MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(var_ret == NULL) {
var24 = 0;
} else {
if(cltype >= var_ret->type->table_size) {
var24 = 0;
} else {
var24 = var_ret->type->type_table[cltype] == idtype;
}
}
var25 = !var24;
var21 = var25;
} else {
var21 = var_;
}
var_useiset = var21;
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var28 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3167);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var26) on <var26:nullable MAttributeDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var31 = var26->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var26:nullable MAttributeDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_guard = var29;
if (var_useiset){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var34 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3169);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var32) on <var32:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var37 = var32->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var32:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__isset_attribute]))(var_v, var35, var_recv); /* isset_attribute on <var_v:AbstractCompilerVisitor>*/
}
var_set = var38;
} else {
{
var39 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute]))(var_v, var_guard, var_recv); /* read_attribute on <var_v:AbstractCompilerVisitor>*/
}
var_set = var39;
}
if (unlikely(varonce==NULL)) {
var40 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "if(likely(";
var44 = core__abstract_text___CString___to_s_full(var43, 10l, 10l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = ")) {";
var48 = core__abstract_text___CString___to_s_full(var47, 4l, 4l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var40)->values[2]=var46;
} else {
var40 = varonce;
varonce = NULL;
}
{
var49 = ((val*(*)(val* self))(var_set->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_set); /* to_s on <var_set:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var40)->values[1]=var49;
{
var50 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce = var40;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var53 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (var51 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3174);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var51) on <var51:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var56 = var51->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var51:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute]))(var_v, var54, var_recv); /* read_attribute on <var_v:AbstractCompilerVisitor>*/
}
var_res = var57;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "} else {";
var61 = core__abstract_text___CString___to_s_full(var60, 8l, 8l);
var59 = var61;
varonce58 = var59;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var62 = nitc__abstract_compiler___AAttrPropdef___evaluate_expr(self, var_v, var_recv);
}
var_value = var62;
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var_value); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
var63 = !var_useiset;
if (var63){
{
var64 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
var_true_v = var64;
{
var65 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var_guard, var65, var_true_v); /* write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "}";
var69 = core__abstract_text___CString___to_s_full(var68, 1l, 1l);
var67 = var69;
varonce66 = var67;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var72 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (var70 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3186);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var70) on <var70:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var75 = var70->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var70:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var77 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute]))(var_v, var73, var76); /* read_attribute on <var_v:AbstractCompilerVisitor>*/
}
var_res = var77;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var80 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var78 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3188);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnvar (var78) on <var78:nullable StaticFrame> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2023);
fatal_exit(1);
}
var83 = var78->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var78:nullable StaticFrame> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3188);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var81, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var86 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mpropdef,var84) on <var_mpropdef:MMethodDef> */
var_other = var84;
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:MMethodDef> */
var91 = var_mpropdef == var_other;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var94 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var92,2l) on <var92:Int> */
var97 = var92 == 2l;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
if (unlikely(!var95)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3190);
fatal_exit(1);
}
{
var98 = core___core__SequenceRead___Collection__first(var_arguments);
}
var_recv99 = var98;
{
var100 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
var_arg = var100;
{
{ /* Inline modelize_property#AAttrPropdef#is_optional (self) on <self:AAttrPropdef> */
var104 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s; /* _is_optional on <self:AAttrPropdef> */
var102 = var104;
RET_LABEL103:(void)0;
}
}
var_105 = var102;
if (var102){
{
var106 = nitc___nitc__AbstractCompilerVisitor___maybenull(var_v, var_arg);
}
var101 = var106;
} else {
var101 = var_105;
}
if (var101){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var109 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
if (var107 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3194);
fatal_exit(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var107) on <var107:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2526);
fatal_exit(1);
}
var112 = var107->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var107:nullable MPropDef(nullable MAttributeDef)> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3194);
fatal_exit(1);
}
{
var113 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var110);
}
var_value114 = var113;
if (unlikely(varonce115==NULL)) {
var116 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "if (";
var120 = core__abstract_text___CString___to_s_full(var119, 4l, 4l);
var118 = var120;
varonce117 = var118;
}
((struct instance_core__NativeArray*)var116)->values[0]=var118;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = " == NULL) {";
var124 = core__abstract_text___CString___to_s_full(var123, 11l, 11l);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var116)->values[2]=var122;
} else {
var116 = varonce115;
varonce115 = NULL;
}
{
var125 = ((val*(*)(val* self))(var_arg->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_arg); /* to_s on <var_arg:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var116)->values[1]=var125;
{
var126 = ((val*(*)(val* self))(var116->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var116); /* native_to_s on <var116:NativeArray[String]>*/
}
varonce115 = var116;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var126); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var127 = nitc__abstract_compiler___AAttrPropdef___evaluate_expr(self, var_v, var_recv99);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_value114, var127); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "} else {";
var131 = core__abstract_text___CString___to_s_full(var130, 8l, 8l);
var129 = var131;
varonce128 = var129;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var129); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_value114, var_arg); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "}";
var135 = core__abstract_text___CString___to_s_full(var134, 1l, 1l);
var133 = var135;
varonce132 = var133;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var133); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var_arg = var_value114;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var138 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
if (var136 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3202);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var136) on <var136:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var141 = var136->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var136:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
var142 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var139, var142, var_arg); /* write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var145 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
if (var143){
{
{ /* Inline modelize_property#AAttrPropdef#mtype (self) on <self:AAttrPropdef> */
var148 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var146 = var148;
RET_LABEL147:(void)0;
}
}
var_ret149 = var146;
if (var_ret149 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3205);
fatal_exit(1);
} else {
var151 = ((short int(*)(val* self))(var_ret149->class->vft[COLOR_nitc__abstract_compiler__MType__is_c_primitive]))(var_ret149); /* is_c_primitive on <var_ret149:nullable MType>*/
}
var152 = !var151;
var_153 = var152;
if (var152){
/* <var_ret149:nullable MType> isa MNullableType */
cltype155 = type_nitc__MNullableType.color;
idtype156 = type_nitc__MNullableType.id;
if(var_ret149 == NULL) {
var154 = 0;
} else {
if(cltype155 >= var_ret149->type->table_size) {
var154 = 0;
} else {
var154 = var_ret149->type->type_table[cltype155] == idtype156;
}
}
var157 = !var154;
var150 = var157;
} else {
var150 = var_153;
}
var_useiset158 = var150;
var159 = !var_useiset158;
if (var159){
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var162 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var160 = var162;
RET_LABEL161:(void)0;
}
}
if (var160 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3207);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var160) on <var160:nullable MAttributeDef> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var165 = var160->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var160:nullable MAttributeDef> */
if (unlikely(var165 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var163 = var165;
RET_LABEL164:(void)0;
}
}
{
var166 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var167 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var163, var166, var167); /* write_attribute on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3211);
fatal_exit(1);
}
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#init_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable) */
void nitc__abstract_compiler___AAttrPropdef___init_expr(val* self, val* p0, val* p1) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_10 /* var : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
val* var16 /* : nullable AExpr */;
val* var18 /* : nullable AExpr */;
short int var19 /* : Bool */;
int cltype;
int idtype;
short int var20 /* : Bool */;
val* var21 /* : RuntimeVariable */;
var_v = p0;
var_recv = p1;
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var5 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy (self) on <self:AAttrPropdef> */
var8 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = !var6;
var2 = var9;
} else {
var2 = var_;
}
var_10 = var2;
if (var2){
{
{ /* Inline modelize_property#AAttrPropdef#is_optional (self) on <self:AAttrPropdef> */
var13 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s; /* _is_optional on <self:AAttrPropdef> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = !var11;
var1 = var14;
} else {
var1 = var_10;
}
var_15 = var1;
if (var1){
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var18 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
/* <var16:nullable AExpr> isa ANullExpr */
cltype = type_nitc__ANullExpr.color;
idtype = type_nitc__ANullExpr.id;
if(var16 == NULL) {
var19 = 0;
} else {
if(cltype >= var16->type->table_size) {
var19 = 0;
} else {
var19 = var16->type->type_table[cltype] == idtype;
}
}
var20 = !var19;
var = var20;
} else {
var = var_15;
}
if (var){
{
var21 = nitc__abstract_compiler___AAttrPropdef___evaluate_expr(self, var_v, var_recv);
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AAttrPropdef#evaluate_expr for (self: AAttrPropdef, AbstractCompilerVisitor, RuntimeVariable): RuntimeVariable */
val* nitc__abstract_compiler___AAttrPropdef___evaluate_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var5 /* : nullable StaticFrame */;
val* var7 /* : nullable StaticFrame */;
val* var_old_frame /* var old_frame: nullable StaticFrame */;
val* var8 /* : StaticFrame */;
val* var9 /* : nullable MMethodDef */;
val* var11 /* : nullable MMethodDef */;
val* var12 /* : MType */;
val* var14 /* : MType */;
val* var15 /* : MType */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var17 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_frame /* var frame: StaticFrame */;
val* var19 /* : nullable MType */;
val* var21 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable AExpr */;
val* var29 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var30 /* : nullable AExpr */;
val* var32 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : RuntimeVariable */;
val* var_value /* var value: nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : RuntimeVariable */;
static val* varonce;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable String */;
val* var63 /* : nullable String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : nullable MPropDef */;
val* var71 /* : nullable MPropDef */;
val* var72 /* : MProperty */;
val* var74 /* : MProperty */;
var_v = p0;
var_recv = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_oldnode = var1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,self) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = self; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_old_frame = var5;
var8 = NEW_nitc__StaticFrame(&type_nitc__StaticFrame);
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var11 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3226);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var14 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self))(var12->class->vft[COLOR_nitc__model__MType__undecorate]))(var12); /* undecorate on <var12:MType>*/
}
/* <var15:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var15->type->table_size) {
var16 = 0;
} else {
var16 = var15->type->type_table[cltype] == idtype;
}
if (unlikely(!var16)) {
var_class_name = var15 == NULL ? "null" : var15->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3226);
fatal_exit(1);
}
var17 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var17, 1l); /* Direct call array#Array#with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__visitor_61d]))(var8, var_v); /* visitor= on <var8:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__mpropdef_61d]))(var8, var9); /* mpropdef= on <var8:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__receiver_61d]))(var8, var15); /* receiver= on <var8:StaticFrame>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__abstract_compiler__StaticFrame__arguments_61d]))(var8, var_); /* arguments= on <var8:StaticFrame>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:StaticFrame>*/
}
var_frame = var8;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL18:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#mtype (self) on <self:AAttrPropdef> */
var21 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_mtype = var19;
if (var_mtype == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3231);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var29 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_nexpr = var27;
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
var32 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_nblock = var30;
if (var_nexpr == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
var36 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
{
var38 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_nexpr, var_mtype);
}
var_value = var38;
} else {
if (var_nblock == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other = ((val*)NULL);
{
var42 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nblock, var_other); /* == on <var_nblock:nullable AExpr(AExpr)>*/
}
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
{
var44 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_value = var44;
{
{ /* Inline abstract_compiler#StaticFrame#returnvar= (var_frame,var_value) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val = var_value; /* _returnvar on <var_frame:StaticFrame> */
RET_LABEL45:(void)0;
}
}
if (likely(varonce!=NULL)) {
var46 = varonce;
} else {
var47 = "RET_LABEL";
var48 = core__abstract_text___CString___to_s_full(var47, 9l, 9l);
var46 = var48;
varonce = var46;
}
{
var49 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var46);
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel= (var_frame,var49) on <var_frame:StaticFrame> */
var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val = var49; /* _returnlabel on <var_frame:StaticFrame> */
RET_LABEL50:(void)0;
}
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "{";
var54 = core__abstract_text___CString___to_s_full(var53, 1l, 1l);
var52 = var54;
varonce51 = var52;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_nblock); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce55==NULL)) {
var56 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = ":(void)0;";
var60 = core__abstract_text___CString___to_s_full(var59, 9l, 9l);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var56)->values[1]=var58;
} else {
var56 = varonce55;
varonce55 = NULL;
}
{
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var_frame) on <var_frame:StaticFrame> */
var63 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var_frame:StaticFrame> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3243);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var56)->values[0]=var61;
{
var64 = ((val*(*)(val* self))(var56->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "}";
var68 = core__abstract_text___CString___to_s_full(var67, 1l, 1l);
var66 = var68;
varonce65 = var66;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var66); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3246);
fatal_exit(1);
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var71 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (var69 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3249);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var69) on <var69:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var74 = var69->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var69:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var72, var_recv, var_value); /* write_attribute on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_v,var_old_frame) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var_old_frame; /* _frame on <var_v:AbstractCompilerVisitor> */
RET_LABEL75:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL76:(void)0;
}
}
var = var_value;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AClassdef#compile_to_c for (self: AClassdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc__abstract_compiler___AClassdef___compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : MProperty */;
val* var2 /* : MProperty */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var15 /* : MType */;
val* var17 /* : MType */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var19 /* : nullable RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var) on <var:MProperty(MMethod)> */
var5 = var->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var:MProperty(MMethod)> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var8 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var6,1l) on <var6:Int> */
var11 = var6 == 1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3278);
fatal_exit(1);
}
{
var12 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var13 = !var12;
if (var13){
{
var14 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var14) on <var14:nullable Object(RuntimeVariable)> */
var17 = var14->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var14:nullable Object(RuntimeVariable)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
/* <var15:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var15->type->table_size) {
var18 = 0;
} else {
var18 = var15->type->type_table[cltype] == idtype;
}
if (unlikely(!var18)) {
var_class_name = var15 == NULL ? "null" : var15->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3280);
fatal_exit(1);
}
{
var19 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__supercall]))(var_v, var_mpropdef, var15, var_arguments); /* supercall on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3284);
fatal_exit(1);
}
RET_LABEL:;
}
/* method abstract_compiler#AExpr#expr for (self: AExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AExpr___expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : Location */;
val* var17 /* : Location */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "PRINT_ERROR(\"NOT YET IMPLEMENTED ";
var5 = core__abstract_text___CString___to_s_full(var4, 33l, 33l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ":";
var9 = core__abstract_text___CString___to_s_full(var8, 1l, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "\\n\");";
var13 = core__abstract_text___CString___to_s_full(var12, 5l, 5l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[4]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var14 = core__abstract_text___Object___class_name(self);
}
((struct instance_core__NativeArray*)var1)->values[1]=var14;
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AExpr> */
var17 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AExpr> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc___nitc__Location___core__abstract_text__Object__to_s(var15);
}
((struct instance_core__NativeArray*)var1)->values[3]=var18;
{
var19 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
}
var_mtype = var20;
if (var_mtype == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var26 = var_mtype == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
var27 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_res = var27;
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "/* ";
var33 = core__abstract_text___CString___to_s_full(var32, 3l, 3l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = " = NOT YET ";
var37 = core__abstract_text___CString___to_s_full(var36, 11l, 11l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var29)->values[2]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " */";
var41 = core__abstract_text___CString___to_s_full(var40, 3l, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var29)->values[4]=var39;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var42 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var29)->values[1]=var42;
{
var43 = core__abstract_text___Object___class_name(self);
}
((struct instance_core__NativeArray*)var29)->values[3]=var43;
{
var44 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var44); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AExpr#stmt for (self: AExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AExpr___stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable RuntimeVariable */;
var_v = p0;
{
var = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler__AExpr__expr]))(self, var_v); /* expr on <self:AExpr>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#stmt for (self: ABlockExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ABlockExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AExpr] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AExpr]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AExpr]>*/
}
var_e = var6;
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_e); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AExpr]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ABlockExpr#expr for (self: ABlockExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ABlockExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : nullable Object */;
val* var_last /* var last: AExpr */;
val* var5 /* : ANodes[AExpr] */;
val* var7 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var8 /* : Iterator[ANode] */;
val* var_9 /* var : Iterator[AExpr] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__SequenceRead___last(var1);
}
var_last = var4;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
{
var8 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[AExpr]>*/
}
if (var10){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[AExpr]>*/
}
var_e = var11;
{
{ /* Inline kernel#Object#== (var_e,var_last) on <var_e:AExpr> */
var_other = var_last;
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:AExpr> */
var16 = var_e == var_other;
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
if (var12){
goto BREAK_label;
} else {
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_e); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[AExpr]>*/
}
{
var17 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_last, ((val*)NULL));
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVardeclExpr#stmt for (self: AVardeclExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AVardeclExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
val* var_ne /* var ne: nullable AExpr */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
val* var14 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var15 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3332);
fatal_exit(1);
}
var_variable = var;
{
{ /* Inline parser_nodes#AVardeclExpr#n_expr (self) on <self:AVardeclExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ne = var3;
if (var_ne == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ne,((val*)NULL)) on <var_ne:nullable AExpr> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_ne->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ne, var_other); /* == on <var_ne:nullable AExpr(AExpr)>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var13 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_ne, var11);
}
var_i = var14;
{
var15 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var15, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AVarExpr#expr for (self: AVarExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AVarExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarExpr> */
var3 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3344);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var1);
}
var_res = var4;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AVarExpr> */
var7 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AVarExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3345);
fatal_exit(1);
}
var_mtype = var5;
{
var8 = nitc___nitc__AbstractCompilerVisitor___autoadapt(var_v, var_res, var_mtype);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarAssignExpr#expr for (self: AVarAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AVarAssignExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var9 /* : nullable MType */;
val* var10 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var11 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarAssignExpr> */
var3 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3353);
fatal_exit(1);
}
var_variable = var1;
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AVarAssignExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2073);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var9 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var4, var7);
}
var_i = var10;
{
var11 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var11, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarReassignExpr#stmt for (self: AVarReassignExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AVarReassignExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var3 /* : RuntimeVariable */;
val* var_vari /* var vari: RuntimeVariable */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var9 /* : nullable MType */;
val* var10 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var11 /* : nullable CallSite */;
val* var13 /* : nullable CallSite */;
val* var14 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var15 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3363);
fatal_exit(1);
}
var_variable = var;
{
var3 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var_variable);
}
var_vari = var3;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AVarReassignExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AVarReassignExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2084);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var9 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var4, var7);
}
var_value = var10;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AVarReassignExpr> */
var13 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3366);
fatal_exit(1);
}
var14 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var14, 2l); /* Direct call array#Array#with_capacity on <var14:Array[RuntimeVariable]>*/
}
var_ = var14;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_vari); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var11, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var15;
if (var_res == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (unlikely(!var16)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3367);
fatal_exit(1);
}
{
var21 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var21, var_res); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ASelfExpr#expr for (self: ASelfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ASelfExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable StaticFrame */;
val* var3 /* : nullable StaticFrame */;
val* var4 /* : Array[RuntimeVariable] */;
val* var6 /* : Array[RuntimeVariable] */;
val* var7 /* : nullable Object */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3373);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#arguments (var1) on <var1:nullable StaticFrame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2020);
fatal_exit(1);
}
var6 = var1->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var1:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2020);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core___core__SequenceRead___Collection__first(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImplicitSelfExpr#expr for (self: AImplicitSelfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AImplicitSelfExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable RuntimeVariable */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
val* var12 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline typing#AImplicitSelfExpr#is_sys (self) on <self:AImplicitSelfExpr> */
var3 = self->attrs[COLOR_nitc__typing__AImplicitSelfExpr___is_sys].s; /* _is_sys on <self:AImplicitSelfExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (var4){
{
var5 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler___AImplicitSelfExpr___AExpr__expr]))(self, p0); /* expr on <self:AImplicitSelfExpr>*/
}
var = var5;
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "glob_sys";
var8 = core__abstract_text___CString___to_s_full(var7, 8l, 8l);
var6 = var8;
varonce = var6;
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AImplicitSelfExpr> */
var11 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AImplicitSelfExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3379);
fatal_exit(1);
}
{
var12 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var6, var9);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AEscapeExpr#stmt for (self: AEscapeExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AEscapeExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
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
val* var9 /* : nullable EscapeMark */;
val* var11 /* : nullable EscapeMark */;
val* var12 /* : String */;
val* var13 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "goto BREAK_";
var4 = core__abstract_text___CString___to_s_full(var3, 11l, 11l);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = ";";
var8 = core__abstract_text___CString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var)->values[2]=var6;
} else {
var = varonce;
varonce = NULL;
}
{
{ /* Inline scope#AEscapeExpr#escapemark (self) on <self:AEscapeExpr> */
var11 = self->attrs[COLOR_nitc__scope__AEscapeExpr___escapemark].val; /* _escapemark on <self:AEscapeExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nitc___nitc__AbstractCompilerVisitor___escapemark_name(var_v, var9);
}
((struct instance_core__NativeArray*)var)->values[1]=var12;
{
var13 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AReturnExpr#stmt for (self: AReturnExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AReturnExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable StaticFrame */;
val* var10 /* : nullable StaticFrame */;
val* var11 /* : nullable RuntimeVariable */;
val* var13 /* : nullable RuntimeVariable */;
val* var_returnvar /* var returnvar: RuntimeVariable */;
val* var14 /* : MType */;
val* var16 /* : MType */;
val* var17 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var18 /* : NativeArray[String] */;
static val* varonce;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable StaticFrame */;
val* var29 /* : nullable StaticFrame */;
val* var30 /* : nullable String */;
val* var32 /* : nullable String */;
val* var33 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AEscapeExpr#n_expr (self) on <self:AReturnExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
if (var_nexpr == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var10 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3392);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnvar (var8) on <var8:nullable StaticFrame> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2023);
fatal_exit(1);
}
var13 = var8->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var8:nullable StaticFrame> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3392);
fatal_exit(1);
}
var_returnvar = var11;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_returnvar) on <var_returnvar:RuntimeVariable> */
var16 = var_returnvar->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_returnvar:RuntimeVariable> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_nexpr, var14);
}
var_i = var17;
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_returnvar, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "goto ";
var22 = core__abstract_text___CString___to_s_full(var21, 5l, 5l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ";";
var26 = core__abstract_text___CString___to_s_full(var25, 1l, 1l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var18)->values[2]=var24;
} else {
var18 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var29 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3396);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var27) on <var27:nullable StaticFrame> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2026);
fatal_exit(1);
}
var32 = var27->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var27:nullable StaticFrame> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3396);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var18)->values[1]=var30;
{
var33 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AAbortExpr#stmt for (self: AAbortExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AAbortExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "Aborted";
var2 = core__abstract_text___CString___to_s_full(var1, 7l, 7l);
var = var2;
varonce = var;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#stmt for (self: AIfExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AIfExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
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
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : nullable AExpr */;
val* var17 /* : nullable AExpr */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable AExpr */;
val* var24 /* : nullable AExpr */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1924);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var);
}
var_cond = var3;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "if (";
var8 = core__abstract_text___CString___to_s_full(var7, 4l, 4l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "){";
var12 = core__abstract_text___CString___to_s_full(var11, 2l, 2l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var14); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "} else {";
var21 = core__abstract_text___CString___to_s_full(var20, 8l, 8l);
var19 = var21;
varonce18 = var19;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var24 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "}";
var28 = core__abstract_text___CString___to_s_full(var27, 1l, 1l);
var26 = var28;
varonce25 = var26;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AIfExpr#expr for (self: AIfExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AIfExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
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
val* var20 /* : nullable AExpr */;
val* var22 /* : nullable AExpr */;
val* var23 /* : RuntimeVariable */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable AExpr */;
val* var30 /* : nullable AExpr */;
val* var31 /* : RuntimeVariable */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIfExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AIfExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3417);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1924);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_cond = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var13 = core__abstract_text___CString___to_s_full(var12, 4l, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "){";
var17 = core__abstract_text___CString___to_s_full(var16, 2l, 2l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var22 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3420);
fatal_exit(1);
}
{
var23 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var20, ((val*)NULL));
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "} else {";
var27 = core__abstract_text___CString___to_s_full(var26, 8l, 8l);
var25 = var27;
varonce24 = var25;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var30 = self->attrs[COLOR_nitc__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3422);
fatal_exit(1);
}
{
var31 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var28, ((val*)NULL));
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "}";
var35 = core__abstract_text___CString___to_s_full(var34, 1l, 1l);
var33 = var35;
varonce32 = var33;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIfexprExpr#expr for (self: AIfexprExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AIfexprExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
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
val* var20 /* : AExpr */;
val* var22 /* : AExpr */;
val* var23 /* : RuntimeVariable */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : AExpr */;
val* var30 /* : AExpr */;
val* var31 /* : RuntimeVariable */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AIfexprExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AIfexprExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3431);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#AIfexprExpr#n_expr (self) on <self:AIfexprExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1947);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_cond = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var13 = core__abstract_text___CString___to_s_full(var12, 4l, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "){";
var17 = core__abstract_text___CString___to_s_full(var16, 2l, 2l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_then (self) on <self:AIfexprExpr> */
var22 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1953);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var20, ((val*)NULL));
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "} else {";
var27 = core__abstract_text___CString___to_s_full(var26, 8l, 8l);
var25 = var27;
varonce24 = var25;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_else (self) on <self:AIfexprExpr> */
var30 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1959);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var28, ((val*)NULL));
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "}";
var35 = core__abstract_text___CString___to_s_full(var34, 1l, 1l);
var33 = var35;
varonce32 = var33;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ADoExpr#stmt for (self: ADoExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ADoExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable AExpr */;
val* var17 /* : nullable AExpr */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable AExpr */;
val* var32 /* : nullable AExpr */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : nullable AExpr */;
val* var39 /* : nullable AExpr */;
val* var40 /* : nullable EscapeMark */;
val* var42 /* : nullable EscapeMark */;
var_v = p0;
{
{ /* Inline parser_nodes#ADoExpr#n_catch (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_catch].val; /* _n_catch on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var,((val*)NULL)) on <var:nullable AExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable AExpr(AExpr)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "catchStack.cursor += 1;";
var10 = core__abstract_text___CString___to_s_full(var9, 23l, 23l);
var8 = var10;
varonce = var8;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var8); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "if(!setjmp(catchStack.envs[catchStack.cursor])){";
var14 = core__abstract_text___CString___to_s_full(var13, 48l, 48l);
var12 = var14;
varonce11 = var12;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var12); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var17 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "catchStack.cursor -= 1;";
var21 = core__abstract_text___CString___to_s_full(var20, 23l, 23l);
var19 = var21;
varonce18 = var19;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "}else {";
var25 = core__abstract_text___CString___to_s_full(var24, 7l, 7l);
var23 = var25;
varonce22 = var23;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "catchStack.cursor -= 1;";
var29 = core__abstract_text___CString___to_s_full(var28, 23l, 23l);
var27 = var29;
varonce26 = var27;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ADoExpr#n_catch (self) on <self:ADoExpr> */
var32 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_catch].val; /* _n_catch on <self:ADoExpr> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "}";
var36 = core__abstract_text___CString___to_s_full(var35, 1l, 1l);
var34 = var36;
varonce33 = var34;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var39 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
}
{
{ /* Inline scope#ADoExpr#break_mark (self) on <self:ADoExpr> */
var42 = self->attrs[COLOR_nitc__scope__ADoExpr___break_mark].val; /* _break_mark on <self:ADoExpr> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var40); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AWhileExpr#stmt for (self: AWhileExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AWhileExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : AExpr */;
val* var5 /* : AExpr */;
val* var6 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : nullable AExpr */;
val* var21 /* : nullable AExpr */;
val* var22 /* : nullable EscapeMark */;
val* var24 /* : nullable EscapeMark */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable EscapeMark */;
val* var31 /* : nullable EscapeMark */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "for(;;) {";
var2 = core__abstract_text___CString___to_s_full(var1, 9l, 9l);
var = var2;
varonce = var;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1971);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var3);
}
var_cond = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "if (!";
var12 = core__abstract_text___CString___to_s_full(var11, 5l, 5l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ") break;";
var16 = core__abstract_text___CString___to_s_full(var15, 8l, 8l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[2]=var14;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var17 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var8)->values[1]=var17;
{
var18 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var18); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var21 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AWhileExpr#continue_mark (self) on <self:AWhileExpr> */
var24 = self->attrs[COLOR_nitc__scope__AWhileExpr___continue_mark].val; /* _continue_mark on <self:AWhileExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var22); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "}";
var28 = core__abstract_text___CString___to_s_full(var27, 1l, 1l);
var26 = var28;
varonce25 = var26;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AWhileExpr#break_mark (self) on <self:AWhileExpr> */
var31 = self->attrs[COLOR_nitc__scope__AWhileExpr___break_mark].val; /* _break_mark on <self:AWhileExpr> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ALoopExpr#stmt for (self: ALoopExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ALoopExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable AExpr */;
val* var5 /* : nullable AExpr */;
val* var6 /* : nullable EscapeMark */;
val* var8 /* : nullable EscapeMark */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable EscapeMark */;
val* var15 /* : nullable EscapeMark */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "for(;;) {";
var2 = core__abstract_text___CString___to_s_full(var1, 9l, 9l);
var = var2;
varonce = var;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var5 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var3); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ALoopExpr#continue_mark (self) on <self:ALoopExpr> */
var8 = self->attrs[COLOR_nitc__scope__ALoopExpr___continue_mark].val; /* _continue_mark on <self:ALoopExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var6); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "}";
var12 = core__abstract_text___CString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var10); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#ALoopExpr#break_mark (self) on <self:ALoopExpr> */
var15 = self->attrs[COLOR_nitc__scope__ALoopExpr___break_mark].val; /* _break_mark on <self:ALoopExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AForExpr#stmt for (self: AForExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AForExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : ANodes[AForGroup] */;
val* var2 /* : ANodes[AForGroup] */;
val* var_ /* var : ANodes[AForGroup] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AForGroup] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_g /* var g: AForGroup */;
val* var7 /* : AExpr */;
val* var9 /* : AExpr */;
val* var10 /* : RuntimeVariable */;
val* var_cl /* var cl: RuntimeVariable */;
val* var11 /* : nullable CallSite */;
val* var13 /* : nullable CallSite */;
val* var_it_meth /* var it_meth: nullable CallSite */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : Array[RuntimeVariable] */;
val* var_20 /* var : Array[RuntimeVariable] */;
val* var21 /* : nullable RuntimeVariable */;
val* var_it /* var it: nullable RuntimeVariable */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : ANodes[AForGroup] */;
val* var33 /* : ANodes[AForGroup] */;
val* var_34 /* var : ANodes[AForGroup] */;
val* var35 /* : Iterator[ANode] */;
val* var_36 /* var : Iterator[AForGroup] */;
short int var37 /* : Bool */;
val* var39 /* : nullable Object */;
val* var_g40 /* var g: AForGroup */;
val* var41 /* : RuntimeVariable */;
val* var43 /* : RuntimeVariable */;
val* var_it44 /* var it: RuntimeVariable */;
val* var45 /* : nullable CallSite */;
val* var47 /* : nullable CallSite */;
val* var_isok_meth /* var isok_meth: nullable CallSite */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : Array[RuntimeVariable] */;
val* var_54 /* var : Array[RuntimeVariable] */;
val* var55 /* : nullable RuntimeVariable */;
val* var_ok /* var ok: nullable RuntimeVariable */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : nullable Array[Variable] */;
val* var75 /* : nullable Array[Variable] */;
long var76 /* : Int */;
long var78 /* : Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : nullable CallSite */;
val* var84 /* : nullable CallSite */;
val* var_item_meth /* var item_meth: nullable CallSite */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
val* var90 /* : Array[RuntimeVariable] */;
val* var_91 /* var : Array[RuntimeVariable] */;
val* var92 /* : nullable RuntimeVariable */;
val* var_i /* var i: nullable RuntimeVariable */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
val* var98 /* : nullable Array[Variable] */;
val* var100 /* : nullable Array[Variable] */;
val* var101 /* : nullable Object */;
val* var102 /* : RuntimeVariable */;
val* var103 /* : nullable Array[Variable] */;
val* var105 /* : nullable Array[Variable] */;
long var106 /* : Int */;
long var108 /* : Int */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
val* var112 /* : nullable CallSite */;
val* var114 /* : nullable CallSite */;
val* var_key_meth /* var key_meth: nullable CallSite */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
val* var120 /* : Array[RuntimeVariable] */;
val* var_121 /* var : Array[RuntimeVariable] */;
val* var122 /* : nullable RuntimeVariable */;
val* var_i123 /* var i: nullable RuntimeVariable */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
val* var129 /* : nullable Array[Variable] */;
val* var131 /* : nullable Array[Variable] */;
val* var132 /* : nullable Object */;
val* var133 /* : RuntimeVariable */;
val* var134 /* : nullable CallSite */;
val* var136 /* : nullable CallSite */;
val* var_item_meth137 /* var item_meth: nullable CallSite */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
val* var143 /* : Array[RuntimeVariable] */;
val* var_144 /* var : Array[RuntimeVariable] */;
val* var145 /* : nullable RuntimeVariable */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
val* var151 /* : nullable Array[Variable] */;
val* var153 /* : nullable Array[Variable] */;
val* var154 /* : nullable Object */;
val* var155 /* : RuntimeVariable */;
val* var156 /* : nullable AExpr */;
val* var158 /* : nullable AExpr */;
val* var159 /* : nullable EscapeMark */;
val* var161 /* : nullable EscapeMark */;
val* var162 /* : ANodes[AForGroup] */;
val* var164 /* : ANodes[AForGroup] */;
val* var_165 /* var : ANodes[AForGroup] */;
val* var166 /* : Iterator[ANode] */;
val* var_167 /* var : Iterator[AForGroup] */;
short int var168 /* : Bool */;
val* var170 /* : nullable Object */;
val* var_g171 /* var g: AForGroup */;
val* var172 /* : nullable CallSite */;
val* var174 /* : nullable CallSite */;
val* var_next_meth /* var next_meth: nullable CallSite */;
short int var175 /* : Bool */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
val* var180 /* : Array[RuntimeVariable] */;
val* var_181 /* var : Array[RuntimeVariable] */;
val* var182 /* : RuntimeVariable */;
val* var184 /* : RuntimeVariable */;
val* var185 /* : nullable RuntimeVariable */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : CString */;
val* var189 /* : String */;
val* var190 /* : nullable EscapeMark */;
val* var192 /* : nullable EscapeMark */;
val* var193 /* : ANodes[AForGroup] */;
val* var195 /* : ANodes[AForGroup] */;
val* var_196 /* var : ANodes[AForGroup] */;
val* var197 /* : Iterator[ANode] */;
val* var_198 /* var : Iterator[AForGroup] */;
short int var199 /* : Bool */;
val* var201 /* : nullable Object */;
val* var_g202 /* var g: AForGroup */;
val* var203 /* : nullable CallSite */;
val* var205 /* : nullable CallSite */;
val* var_method_finish /* var method_finish: nullable CallSite */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
val* var211 /* : Array[RuntimeVariable] */;
val* var_212 /* var : Array[RuntimeVariable] */;
val* var213 /* : RuntimeVariable */;
val* var215 /* : RuntimeVariable */;
val* var216 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AForExpr#n_groups (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AForGroup]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AForGroup]>*/
}
var_g = var6;
{
{ /* Inline parser_nodes#AForGroup#n_expr (var_g) on <var_g:AForGroup> */
var9 = var_g->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <var_g:AForGroup> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2024);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var7, ((val*)NULL));
}
var_cl = var10;
{
{ /* Inline typing#AForGroup#method_iterator (var_g) on <var_g:AForGroup> */
var13 = var_g->attrs[COLOR_nitc__typing__AForGroup___method_iterator].val; /* _method_iterator on <var_g:AForGroup> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_it_meth = var11;
if (var_it_meth == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_it_meth,((val*)NULL)) on <var_it_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_it_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_it_meth, var_other); /* == on <var_it_meth:nullable CallSite(CallSite)>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3491);
fatal_exit(1);
}
var19 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var19, 1l); /* Direct call array#Array#with_capacity on <var19:Array[RuntimeVariable]>*/
}
var_20 = var19;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_20, var_cl); /* Direct call array#AbstractArray#push on <var_20:Array[RuntimeVariable]>*/
}
{
var21 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_it_meth, var_20); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_it = var21;
if (var_it == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_it,((val*)NULL)) on <var_it:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_it->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_it, var_other); /* == on <var_it:nullable RuntimeVariable(RuntimeVariable)>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3493);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AForGroup#it= (var_g,var_it) on <var_g:AForGroup> */
var_g->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val = var_it; /* _it on <var_g:AForGroup> */
RET_LABEL27:(void)0;
}
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AForGroup]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AForGroup]>*/
}
if (likely(varonce!=NULL)) {
var28 = varonce;
} else {
var29 = "for(;;) {";
var30 = core__abstract_text___CString___to_s_full(var29, 9l, 9l);
var28 = var30;
varonce = var28;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_groups (self) on <self:AForExpr> */
var33 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_34 = var31;
{
var35 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_34);
}
var_36 = var35;
for(;;) {
{
var37 = ((short int(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_36); /* is_ok on <var_36:Iterator[AForGroup]>*/
}
if (var37){
} else {
goto BREAK_label38;
}
{
var39 = ((val*(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_36); /* item on <var_36:Iterator[AForGroup]>*/
}
var_g40 = var39;
{
{ /* Inline abstract_compiler#AForGroup#it (var_g40) on <var_g40:AForGroup> */
var43 = var_g40->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val; /* _it on <var_g40:AForGroup> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _it");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3546);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_it44 = var41;
{
{ /* Inline typing#AForGroup#method_is_ok (var_g40) on <var_g40:AForGroup> */
var47 = var_g40->attrs[COLOR_nitc__typing__AForGroup___method_is_ok].val; /* _method_is_ok on <var_g40:AForGroup> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
var_isok_meth = var45;
if (var_isok_meth == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_isok_meth,((val*)NULL)) on <var_isok_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var51 = ((short int(*)(val* self, val* p0))(var_isok_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_isok_meth, var_other); /* == on <var_isok_meth:nullable CallSite(CallSite)>*/
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (unlikely(!var48)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3500);
fatal_exit(1);
}
var53 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var53, 1l); /* Direct call array#Array#with_capacity on <var53:Array[RuntimeVariable]>*/
}
var_54 = var53;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_54, var_it44); /* Direct call array#AbstractArray#push on <var_54:Array[RuntimeVariable]>*/
}
{
var55 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_isok_meth, var_54); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_ok = var55;
if (var_ok == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ok,((val*)NULL)) on <var_ok:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var59 = ((short int(*)(val* self, val* p0))(var_ok->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ok, var_other); /* == on <var_ok:nullable RuntimeVariable(RuntimeVariable)>*/
}
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (unlikely(!var56)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3502);
fatal_exit(1);
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "if(!";
var66 = core__abstract_text___CString___to_s_full(var65, 4l, 4l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[0]=var64;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = ") break;";
var70 = core__abstract_text___CString___to_s_full(var69, 8l, 8l);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var62)->values[2]=var68;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
var71 = ((val*(*)(val* self))(var_ok->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ok); /* to_s on <var_ok:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var62)->values[1]=var71;
{
var72 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var72); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForGroup#variables (var_g40) on <var_g40:AForGroup> */
var75 = var_g40->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g40:AForGroup> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (var73 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3504);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var73) on <var73:nullable Array[Variable]> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var78 = var73->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var73:nullable Array[Variable]> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var76,1l) on <var76:Int> */
var81 = var76 == 1l;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
{
{ /* Inline typing#AForGroup#method_item (var_g40) on <var_g40:AForGroup> */
var84 = var_g40->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <var_g40:AForGroup> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
var_item_meth = var82;
if (var_item_meth == NULL) {
var85 = 0; /* is null */
} else {
var85 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_item_meth,((val*)NULL)) on <var_item_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var88 = ((short int(*)(val* self, val* p0))(var_item_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_item_meth, var_other); /* == on <var_item_meth:nullable CallSite(CallSite)>*/
}
var89 = !var88;
var86 = var89;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (unlikely(!var85)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3506);
fatal_exit(1);
}
var90 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var90, 1l); /* Direct call array#Array#with_capacity on <var90:Array[RuntimeVariable]>*/
}
var_91 = var90;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_91, var_it44); /* Direct call array#AbstractArray#push on <var_91:Array[RuntimeVariable]>*/
}
{
var92 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth, var_91); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_i = var92;
if (var_i == NULL) {
var93 = 0; /* is null */
} else {
var93 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i,((val*)NULL)) on <var_i:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var96 = ((short int(*)(val* self, val* p0))(var_i->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_i, var_other); /* == on <var_i:nullable RuntimeVariable(RuntimeVariable)>*/
}
var97 = !var96;
var94 = var97;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
if (unlikely(!var93)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3508);
fatal_exit(1);
}
{
{ /* Inline scope#AForGroup#variables (var_g40) on <var_g40:AForGroup> */
var100 = var_g40->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g40:AForGroup> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (var98 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3509);
fatal_exit(1);
} else {
var101 = core___core__SequenceRead___Collection__first(var98);
}
{
var102 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var101);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var102, var_i); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline scope#AForGroup#variables (var_g40) on <var_g40:AForGroup> */
var105 = var_g40->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g40:AForGroup> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (var103 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3510);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var103) on <var103:nullable Array[Variable]> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var108 = var103->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var103:nullable Array[Variable]> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var106,2l) on <var106:Int> */
var111 = var106 == 2l;
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
if (var109){
{
{ /* Inline typing#AForGroup#method_key (var_g40) on <var_g40:AForGroup> */
var114 = var_g40->attrs[COLOR_nitc__typing__AForGroup___method_key].val; /* _method_key on <var_g40:AForGroup> */
var112 = var114;
RET_LABEL113:(void)0;
}
}
var_key_meth = var112;
if (var_key_meth == NULL) {
var115 = 0; /* is null */
} else {
var115 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_key_meth,((val*)NULL)) on <var_key_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var118 = ((short int(*)(val* self, val* p0))(var_key_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_key_meth, var_other); /* == on <var_key_meth:nullable CallSite(CallSite)>*/
}
var119 = !var118;
var116 = var119;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
var115 = var116;
}
if (unlikely(!var115)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3512);
fatal_exit(1);
}
var120 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var120, 1l); /* Direct call array#Array#with_capacity on <var120:Array[RuntimeVariable]>*/
}
var_121 = var120;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_121, var_it44); /* Direct call array#AbstractArray#push on <var_121:Array[RuntimeVariable]>*/
}
{
var122 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_key_meth, var_121); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_i123 = var122;
if (var_i123 == NULL) {
var124 = 0; /* is null */
} else {
var124 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i123,((val*)NULL)) on <var_i123:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var127 = ((short int(*)(val* self, val* p0))(var_i123->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_i123, var_other); /* == on <var_i123:nullable RuntimeVariable(RuntimeVariable)>*/
}
var128 = !var127;
var125 = var128;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
var124 = var125;
}
if (unlikely(!var124)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3514);
fatal_exit(1);
}
{
{ /* Inline scope#AForGroup#variables (var_g40) on <var_g40:AForGroup> */
var131 = var_g40->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g40:AForGroup> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
if (var129 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3515);
fatal_exit(1);
} else {
var132 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var129, 0l);
}
{
var133 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var132);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var133, var_i123); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline typing#AForGroup#method_item (var_g40) on <var_g40:AForGroup> */
var136 = var_g40->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <var_g40:AForGroup> */
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_item_meth137 = var134;
if (var_item_meth137 == NULL) {
var138 = 0; /* is null */
} else {
var138 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_item_meth137,((val*)NULL)) on <var_item_meth137:nullable CallSite> */
var_other = ((val*)NULL);
{
var141 = ((short int(*)(val* self, val* p0))(var_item_meth137->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_item_meth137, var_other); /* == on <var_item_meth137:nullable CallSite(CallSite)>*/
}
var142 = !var141;
var139 = var142;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
var138 = var139;
}
if (unlikely(!var138)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3517);
fatal_exit(1);
}
var143 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var143, 1l); /* Direct call array#Array#with_capacity on <var143:Array[RuntimeVariable]>*/
}
var_144 = var143;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_144, var_it44); /* Direct call array#AbstractArray#push on <var_144:Array[RuntimeVariable]>*/
}
{
var145 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_item_meth137, var_144); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_i123 = var145;
if (var_i123 == NULL) {
var146 = 0; /* is null */
} else {
var146 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_i123,((val*)NULL)) on <var_i123:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var149 = ((short int(*)(val* self, val* p0))(var_i123->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_i123, var_other); /* == on <var_i123:nullable RuntimeVariable(RuntimeVariable)>*/
}
var150 = !var149;
var147 = var150;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
var146 = var147;
}
if (unlikely(!var146)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3519);
fatal_exit(1);
}
{
{ /* Inline scope#AForGroup#variables (var_g40) on <var_g40:AForGroup> */
var153 = var_g40->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <var_g40:AForGroup> */
var151 = var153;
RET_LABEL152:(void)0;
}
}
if (var151 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3520);
fatal_exit(1);
} else {
var154 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var151, 1l);
}
{
var155 = nitc___nitc__AbstractCompilerVisitor___variable(var_v, var154);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var155, var_i123); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3522);
fatal_exit(1);
}
}
{
((void(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_36); /* next on <var_36:Iterator[AForGroup]>*/
}
}
BREAK_label38: (void)0;
{
((void(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_36); /* finish on <var_36:Iterator[AForGroup]>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var158 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var156 = var158;
RET_LABEL157:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var156); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#continue_mark (self) on <self:AForExpr> */
var161 = self->attrs[COLOR_nitc__scope__AForExpr___continue_mark].val; /* _continue_mark on <self:AForExpr> */
var159 = var161;
RET_LABEL160:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var159); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_groups (self) on <self:AForExpr> */
var164 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var164 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var162 = var164;
RET_LABEL163:(void)0;
}
}
var_165 = var162;
{
var166 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_165);
}
var_167 = var166;
for(;;) {
{
var168 = ((short int(*)(val* self))((((long)var_167&3)?class_info[((long)var_167&3)]:var_167->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_167); /* is_ok on <var_167:Iterator[AForGroup]>*/
}
if (var168){
} else {
goto BREAK_label169;
}
{
var170 = ((val*(*)(val* self))((((long)var_167&3)?class_info[((long)var_167&3)]:var_167->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_167); /* item on <var_167:Iterator[AForGroup]>*/
}
var_g171 = var170;
{
{ /* Inline typing#AForGroup#method_next (var_g171) on <var_g171:AForGroup> */
var174 = var_g171->attrs[COLOR_nitc__typing__AForGroup___method_next].val; /* _method_next on <var_g171:AForGroup> */
var172 = var174;
RET_LABEL173:(void)0;
}
}
var_next_meth = var172;
if (var_next_meth == NULL) {
var175 = 0; /* is null */
} else {
var175 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_next_meth,((val*)NULL)) on <var_next_meth:nullable CallSite> */
var_other = ((val*)NULL);
{
var178 = ((short int(*)(val* self, val* p0))(var_next_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_next_meth, var_other); /* == on <var_next_meth:nullable CallSite(CallSite)>*/
}
var179 = !var178;
var176 = var179;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
var175 = var176;
}
if (unlikely(!var175)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3529);
fatal_exit(1);
}
var180 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var180, 1l); /* Direct call array#Array#with_capacity on <var180:Array[RuntimeVariable]>*/
}
var_181 = var180;
{
{ /* Inline abstract_compiler#AForGroup#it (var_g171) on <var_g171:AForGroup> */
var184 = var_g171->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val; /* _it on <var_g171:AForGroup> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _it");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3546);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_181, var182); /* Direct call array#AbstractArray#push on <var_181:Array[RuntimeVariable]>*/
}
{
var185 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_next_meth, var_181); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_167&3)?class_info[((long)var_167&3)]:var_167->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_167); /* next on <var_167:Iterator[AForGroup]>*/
}
}
BREAK_label169: (void)0;
{
((void(*)(val* self))((((long)var_167&3)?class_info[((long)var_167&3)]:var_167->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_167); /* finish on <var_167:Iterator[AForGroup]>*/
}
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "}";
var189 = core__abstract_text___CString___to_s_full(var188, 1l, 1l);
var187 = var189;
varonce186 = var187;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var187); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline scope#AForExpr#break_mark (self) on <self:AForExpr> */
var192 = self->attrs[COLOR_nitc__scope__AForExpr___break_mark].val; /* _break_mark on <self:AForExpr> */
var190 = var192;
RET_LABEL191:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___add_escape_label(var_v, var190); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_escape_label on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AForExpr#n_groups (self) on <self:AForExpr> */
var195 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_groups].val; /* _n_groups on <self:AForExpr> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_groups");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2001);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
var_196 = var193;
{
var197 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_196);
}
var_198 = var197;
for(;;) {
{
var199 = ((short int(*)(val* self))((((long)var_198&3)?class_info[((long)var_198&3)]:var_198->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_198); /* is_ok on <var_198:Iterator[AForGroup]>*/
}
if (var199){
} else {
goto BREAK_label200;
}
{
var201 = ((val*(*)(val* self))((((long)var_198&3)?class_info[((long)var_198&3)]:var_198->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_198); /* item on <var_198:Iterator[AForGroup]>*/
}
var_g202 = var201;
{
{ /* Inline typing#AForGroup#method_finish (var_g202) on <var_g202:AForGroup> */
var205 = var_g202->attrs[COLOR_nitc__typing__AForGroup___method_finish].val; /* _method_finish on <var_g202:AForGroup> */
var203 = var205;
RET_LABEL204:(void)0;
}
}
var_method_finish = var203;
if (var_method_finish == NULL) {
var206 = 0; /* is null */
} else {
var206 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_method_finish,((val*)NULL)) on <var_method_finish:nullable CallSite> */
var_other = ((val*)NULL);
{
var209 = ((short int(*)(val* self, val* p0))(var_method_finish->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_method_finish, var_other); /* == on <var_method_finish:nullable CallSite(CallSite)>*/
}
var210 = !var209;
var207 = var210;
goto RET_LABEL208;
RET_LABEL208:(void)0;
}
var206 = var207;
}
if (var206){
var211 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var211, 1l); /* Direct call array#Array#with_capacity on <var211:Array[RuntimeVariable]>*/
}
var_212 = var211;
{
{ /* Inline abstract_compiler#AForGroup#it (var_g202) on <var_g202:AForGroup> */
var215 = var_g202->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val; /* _it on <var_g202:AForGroup> */
if (unlikely(var215 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _it");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3546);
fatal_exit(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_212, var213); /* Direct call array#AbstractArray#push on <var_212:Array[RuntimeVariable]>*/
}
{
var216 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_method_finish, var_212); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_198&3)?class_info[((long)var_198&3)]:var_198->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_198); /* next on <var_198:Iterator[AForGroup]>*/
}
}
BREAK_label200: (void)0;
{
((void(*)(val* self))((((long)var_198&3)?class_info[((long)var_198&3)]:var_198->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_198); /* finish on <var_198:Iterator[AForGroup]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AForGroup#it for (self: AForGroup): RuntimeVariable */
val* nitc__abstract_compiler___AForGroup___it(val* self) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val; /* _it on <self:AForGroup> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _it");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3546);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AForGroup#it= for (self: AForGroup, RuntimeVariable) */
void nitc__abstract_compiler___AForGroup___it_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AForGroup___it].val = p0; /* _it on <self:AForGroup> */
RET_LABEL:;
}
/* method abstract_compiler#AAssertExpr#stmt for (self: AAssertExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AAssertExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
val* var16 /* : AExpr */;
val* var18 /* : AExpr */;
val* var19 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var20 /* : NativeArray[String] */;
static val* varonce;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : nullable AExpr */;
val* var33 /* : nullable AExpr */;
val* var34 /* : nullable TId */;
val* var36 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var43 /* : NativeArray[String] */;
static val* varonce42;
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
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var2 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts#Option#value (var9) on <var9:OptionBool> */
var14 = var9->attrs[COLOR_opts__Option___value].val; /* _value on <var9:OptionBool> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = (short int)((long)(var12)>>2);
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAssertExpr#n_expr (self) on <self:AAssertExpr> */
var18 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_expr].val; /* _n_expr on <self:AAssertExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2056);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var16);
}
var_cond = var19;
if (unlikely(varonce==NULL)) {
var20 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "if (unlikely(!";
var24 = core__abstract_text___CString___to_s_full(var23, 14l, 14l);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var20)->values[0]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = ")) {";
var28 = core__abstract_text___CString___to_s_full(var27, 4l, 4l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var20)->values[2]=var26;
} else {
var20 = varonce;
varonce = NULL;
}
{
var29 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var20)->values[1]=var29;
{
var30 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce = var20;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var30); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AAssertExpr#n_else (self) on <self:AAssertExpr> */
var33 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_else].val; /* _n_else on <self:AAssertExpr> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AAssertExpr#n_id (self) on <self:AAssertExpr> */
var36 = self->attrs[COLOR_nitc__parser_nodes__AAssertExpr___n_id].val; /* _n_id on <self:AAssertExpr> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_nid = var34;
if (var_nid == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nid,((val*)NULL)) on <var_nid:nullable TId> */
var_other = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var_nid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nid, var_other); /* == on <var_nid:nullable TId(TId)>*/
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
if (unlikely(varonce42==NULL)) {
var43 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Assert \'";
var47 = core__abstract_text___CString___to_s_full(var46, 8l, 8l);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var43)->values[0]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "\' failed";
var51 = core__abstract_text___CString___to_s_full(var50, 8l, 8l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var43)->values[2]=var49;
} else {
var43 = varonce42;
varonce42 = NULL;
}
{
var52 = nitc__lexer_work___Token___text(var_nid);
}
((struct instance_core__NativeArray*)var43)->values[1]=var52;
{
var53 = ((val*(*)(val* self))(var43->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce42 = var43;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var53); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "Assert failed";
var57 = core__abstract_text___CString___to_s_full(var56, 13l, 13l);
var55 = var57;
varonce54 = var55;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var55); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "}";
var61 = core__abstract_text___CString___to_s_full(var60, 1l, 1l);
var59 = var61;
varonce58 = var59;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AOrExpr#expr for (self: AOrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AOrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
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
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
val* var34 /* : AExpr */;
val* var35 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
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
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOrExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3571);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_i1 = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (";
var13 = core__abstract_text___CString___to_s_full(var12, 4l, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ") {";
var17 = core__abstract_text___CString___to_s_full(var16, 3l, 3l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce20==NULL)) {
var21 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " = 1;";
var25 = core__abstract_text___CString___to_s_full(var24, 5l, 5l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce20;
varonce20 = NULL;
}
{
var26 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var21)->values[0]=var26;
{
var27 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "} else {";
var31 = core__abstract_text___CString___to_s_full(var30, 8l, 8l);
var29 = var31;
varonce28 = var29;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrExpr> */
var34 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var32);
}
var_i2 = var35;
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " = ";
var41 = core__abstract_text___CString___to_s_full(var40, 3l, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[1]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ";";
var45 = core__abstract_text___CString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[3]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
var46 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var37)->values[0]=var46;
{
var47 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i2); /* to_s on <var_i2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var37)->values[2]=var47;
{
var48 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "}";
var52 = core__abstract_text___CString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AImpliesExpr#expr for (self: AImpliesExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AImpliesExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
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
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
val* var34 /* : AExpr */;
val* var35 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
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
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AImpliesExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AImpliesExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3586);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AImpliesExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AImpliesExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_i1 = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (!";
var13 = core__abstract_text___CString___to_s_full(var12, 5l, 5l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ") {";
var17 = core__abstract_text___CString___to_s_full(var16, 3l, 3l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce20==NULL)) {
var21 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " = 1;";
var25 = core__abstract_text___CString___to_s_full(var24, 5l, 5l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce20;
varonce20 = NULL;
}
{
var26 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var21)->values[0]=var26;
{
var27 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "} else {";
var31 = core__abstract_text___CString___to_s_full(var30, 8l, 8l);
var29 = var31;
varonce28 = var29;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AImpliesExpr> */
var34 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AImpliesExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var32);
}
var_i2 = var35;
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " = ";
var41 = core__abstract_text___CString___to_s_full(var40, 3l, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[1]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ";";
var45 = core__abstract_text___CString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[3]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
var46 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var37)->values[0]=var46;
{
var47 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i2); /* to_s on <var_i2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var37)->values[2]=var47;
{
var48 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "}";
var52 = core__abstract_text___CString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAndExpr#expr for (self: AAndExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AAndExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
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
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : AExpr */;
val* var34 /* : AExpr */;
val* var35 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
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
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAndExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AAndExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3601);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AAndExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AAndExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var5);
}
var_i1 = var8;
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "if (!";
var13 = core__abstract_text___CString___to_s_full(var12, 5l, 5l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ") {";
var17 = core__abstract_text___CString___to_s_full(var16, 3l, 3l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var19); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce20==NULL)) {
var21 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " = 0;";
var25 = core__abstract_text___CString___to_s_full(var24, 5l, 5l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce20;
varonce20 = NULL;
}
{
var26 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var21)->values[0]=var26;
{
var27 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "} else {";
var31 = core__abstract_text___CString___to_s_full(var30, 8l, 8l);
var29 = var31;
varonce28 = var29;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AAndExpr> */
var34 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AAndExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var32);
}
var_i2 = var35;
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " = ";
var41 = core__abstract_text___CString___to_s_full(var40, 3l, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[1]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ";";
var45 = core__abstract_text___CString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[3]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
var46 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var37)->values[0]=var46;
{
var47 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i2); /* to_s on <var_i2:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var37)->values[2]=var47;
{
var48 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "}";
var52 = core__abstract_text___CString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANotExpr#expr for (self: ANotExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ANotExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_cond /* var cond: RuntimeVariable */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var15 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ANotExpr#n_expr (self) on <self:ANotExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ANotExpr___n_expr].val; /* _n_expr on <self:ANotExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2171);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr_bool(var_v, var1);
}
var_cond = var4;
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "!";
var9 = core__abstract_text___CString___to_s_full(var8, 1l, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(var_cond->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_cond); /* to_s on <var_cond:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ANotExpr> */
var14 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:ANotExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3617);
fatal_exit(1);
}
{
var15 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var11, var12);
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrElseExpr#expr for (self: AOrElseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AOrElseExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var4 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
short int var9 /* : Bool */;
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
val* var20 /* : String */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : AExpr */;
val* var28 /* : AExpr */;
val* var29 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrElseExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOrElseExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3624);
fatal_exit(1);
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var1);
}
var_res = var4;
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr (self) on <self:AOrElseExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr].val; /* _n_expr on <self:AOrElseExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2131);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var5, ((val*)NULL));
}
var_i1 = var8;
{
var9 = nitc___nitc__AbstractCompilerVisitor___maybenull(var_v, var_i1);
}
var10 = !var9;
if (var10){
var = var_i1;
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "if (";
var15 = core__abstract_text___CString___to_s_full(var14, 4l, 4l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "!=NULL) {";
var19 = core__abstract_text___CString___to_s_full(var18, 9l, 9l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var11)->values[2]=var17;
} else {
var11 = varonce;
varonce = NULL;
}
{
var20 = ((val*(*)(val* self))(var_i1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i1); /* to_s on <var_i1:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var11)->values[1]=var20;
{
var21 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var_i1); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "} else {";
var25 = core__abstract_text___CString___to_s_full(var24, 8l, 8l);
var23 = var25;
varonce22 = var23;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#ABinBoolExpr#n_expr2 (self) on <self:AOrElseExpr> */
var28 = self->attrs[COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2].val; /* _n_expr2 on <self:AOrElseExpr> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2137);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var26, ((val*)NULL));
}
var_i2 = var29;
{
nitc___nitc__AbstractCompilerVisitor___assign(var_v, var_res, var_i2); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "}";
var33 = core__abstract_text___CString___to_s_full(var32, 1l, 1l);
var31 = var33;
varonce30 = var31;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIntegerExpr#expr for (self: AIntegerExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AIntegerExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable Numeric */;
val* var3 /* : nullable Numeric */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : nullable Numeric */;
val* var7 /* : nullable Numeric */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name;
val* var11 /* : RuntimeVariable */;
long var12 /* : Int */;
val* var13 /* : nullable Numeric */;
val* var15 /* : nullable Numeric */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
val* var19 /* : nullable Numeric */;
val* var21 /* : nullable Numeric */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
val* var26 /* : RuntimeVariable */;
unsigned char var27 /* : Byte */;
val* var28 /* : nullable Numeric */;
val* var30 /* : nullable Numeric */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : nullable Numeric */;
val* var36 /* : nullable Numeric */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
val* var41 /* : RuntimeVariable */;
int8_t var42 /* : Int8 */;
val* var43 /* : nullable Numeric */;
val* var45 /* : nullable Numeric */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
val* var49 /* : nullable Numeric */;
val* var51 /* : nullable Numeric */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
val* var56 /* : RuntimeVariable */;
int16_t var57 /* : Int16 */;
val* var58 /* : nullable Numeric */;
val* var60 /* : nullable Numeric */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
val* var64 /* : nullable Numeric */;
val* var66 /* : nullable Numeric */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
val* var71 /* : RuntimeVariable */;
uint16_t var72 /* : UInt16 */;
val* var73 /* : nullable Numeric */;
val* var75 /* : nullable Numeric */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
val* var79 /* : nullable Numeric */;
val* var81 /* : nullable Numeric */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
val* var86 /* : RuntimeVariable */;
int32_t var87 /* : Int32 */;
val* var88 /* : nullable Numeric */;
val* var90 /* : nullable Numeric */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
val* var94 /* : nullable Numeric */;
val* var96 /* : nullable Numeric */;
short int var97 /* : Bool */;
int cltype98;
int idtype99;
const char* var_class_name100;
val* var101 /* : RuntimeVariable */;
uint32_t var102 /* : UInt32 */;
var_v = p0;
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var3 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
/* <var1:nullable Numeric> isa Int */
cltype = type_core__Int.color;
idtype = type_core__Int.id;
if(var1 == NULL) {
var4 = 0;
} else {
if(cltype >= (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->type_table[cltype] == idtype;
}
}
if (var4){
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var7 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
/* <var5:nullable Numeric> isa Int */
cltype9 = type_core__Int.color;
idtype10 = type_core__Int.id;
if(var5 == NULL) {
var8 = 0;
} else {
if(cltype9 >= (((long)var5&3)?type_info[((long)var5&3)]:var5->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var5&3)?type_info[((long)var5&3)]:var5->type)->type_table[cltype9] == idtype10;
}
}
if (unlikely(!var8)) {
var_class_name = var5 == NULL ? "null" : (((long)var5&3)?type_info[((long)var5&3)]:var5->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3641);
fatal_exit(1);
}
{
var12 = (long)(var5)>>2;
var11 = nitc___nitc__AbstractCompilerVisitor___int_instance(var_v, var12);
}
var = var11;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var15 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
/* <var13:nullable Numeric> isa Byte */
cltype17 = type_core__Byte.color;
idtype18 = type_core__Byte.id;
if(var13 == NULL) {
var16 = 0;
} else {
if(cltype17 >= (((long)var13&3)?type_info[((long)var13&3)]:var13->type)->table_size) {
var16 = 0;
} else {
var16 = (((long)var13&3)?type_info[((long)var13&3)]:var13->type)->type_table[cltype17] == idtype18;
}
}
if (var16){
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var21 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
/* <var19:nullable Numeric> isa Byte */
cltype23 = type_core__Byte.color;
idtype24 = type_core__Byte.id;
if(var19 == NULL) {
var22 = 0;
} else {
if(cltype23 >= (((long)var19&3)?type_info[((long)var19&3)]:var19->type)->table_size) {
var22 = 0;
} else {
var22 = (((long)var19&3)?type_info[((long)var19&3)]:var19->type)->type_table[cltype23] == idtype24;
}
}
if (unlikely(!var22)) {
var_class_name25 = var19 == NULL ? "null" : (((long)var19&3)?type_info[((long)var19&3)]:var19->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Byte", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3642);
fatal_exit(1);
}
{
var27 = ((struct instance_core__Byte*)var19)->value; /* autounbox from nullable Numeric to Byte */;
var26 = nitc___nitc__AbstractCompilerVisitor___byte_instance(var_v, var27);
}
var = var26;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var30 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
/* <var28:nullable Numeric> isa Int8 */
cltype32 = type_core__Int8.color;
idtype33 = type_core__Int8.id;
if(var28 == NULL) {
var31 = 0;
} else {
if(cltype32 >= (((long)var28&3)?type_info[((long)var28&3)]:var28->type)->table_size) {
var31 = 0;
} else {
var31 = (((long)var28&3)?type_info[((long)var28&3)]:var28->type)->type_table[cltype32] == idtype33;
}
}
if (var31){
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var36 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
/* <var34:nullable Numeric> isa Int8 */
cltype38 = type_core__Int8.color;
idtype39 = type_core__Int8.id;
if(var34 == NULL) {
var37 = 0;
} else {
if(cltype38 >= (((long)var34&3)?type_info[((long)var34&3)]:var34->type)->table_size) {
var37 = 0;
} else {
var37 = (((long)var34&3)?type_info[((long)var34&3)]:var34->type)->type_table[cltype38] == idtype39;
}
}
if (unlikely(!var37)) {
var_class_name40 = var34 == NULL ? "null" : (((long)var34&3)?type_info[((long)var34&3)]:var34->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int8", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3643);
fatal_exit(1);
}
{
var42 = ((struct instance_core__Int8*)var34)->value; /* autounbox from nullable Numeric to Int8 */;
var41 = nitc___nitc__AbstractCompilerVisitor___int8_instance(var_v, var42);
}
var = var41;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var45 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
/* <var43:nullable Numeric> isa Int16 */
cltype47 = type_core__Int16.color;
idtype48 = type_core__Int16.id;
if(var43 == NULL) {
var46 = 0;
} else {
if(cltype47 >= (((long)var43&3)?type_info[((long)var43&3)]:var43->type)->table_size) {
var46 = 0;
} else {
var46 = (((long)var43&3)?type_info[((long)var43&3)]:var43->type)->type_table[cltype47] == idtype48;
}
}
if (var46){
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var51 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
/* <var49:nullable Numeric> isa Int16 */
cltype53 = type_core__Int16.color;
idtype54 = type_core__Int16.id;
if(var49 == NULL) {
var52 = 0;
} else {
if(cltype53 >= (((long)var49&3)?type_info[((long)var49&3)]:var49->type)->table_size) {
var52 = 0;
} else {
var52 = (((long)var49&3)?type_info[((long)var49&3)]:var49->type)->type_table[cltype53] == idtype54;
}
}
if (unlikely(!var52)) {
var_class_name55 = var49 == NULL ? "null" : (((long)var49&3)?type_info[((long)var49&3)]:var49->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int16", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3644);
fatal_exit(1);
}
{
var57 = ((struct instance_core__Int16*)var49)->value; /* autounbox from nullable Numeric to Int16 */;
var56 = nitc___nitc__AbstractCompilerVisitor___int16_instance(var_v, var57);
}
var = var56;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var60 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
/* <var58:nullable Numeric> isa UInt16 */
cltype62 = type_core__UInt16.color;
idtype63 = type_core__UInt16.id;
if(var58 == NULL) {
var61 = 0;
} else {
if(cltype62 >= (((long)var58&3)?type_info[((long)var58&3)]:var58->type)->table_size) {
var61 = 0;
} else {
var61 = (((long)var58&3)?type_info[((long)var58&3)]:var58->type)->type_table[cltype62] == idtype63;
}
}
if (var61){
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var66 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
/* <var64:nullable Numeric> isa UInt16 */
cltype68 = type_core__UInt16.color;
idtype69 = type_core__UInt16.id;
if(var64 == NULL) {
var67 = 0;
} else {
if(cltype68 >= (((long)var64&3)?type_info[((long)var64&3)]:var64->type)->table_size) {
var67 = 0;
} else {
var67 = (((long)var64&3)?type_info[((long)var64&3)]:var64->type)->type_table[cltype68] == idtype69;
}
}
if (unlikely(!var67)) {
var_class_name70 = var64 == NULL ? "null" : (((long)var64&3)?type_info[((long)var64&3)]:var64->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "UInt16", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3645);
fatal_exit(1);
}
{
var72 = ((struct instance_core__UInt16*)var64)->value; /* autounbox from nullable Numeric to UInt16 */;
var71 = nitc___nitc__AbstractCompilerVisitor___uint16_instance(var_v, var72);
}
var = var71;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var75 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
/* <var73:nullable Numeric> isa Int32 */
cltype77 = type_core__Int32.color;
idtype78 = type_core__Int32.id;
if(var73 == NULL) {
var76 = 0;
} else {
if(cltype77 >= (((long)var73&3)?type_info[((long)var73&3)]:var73->type)->table_size) {
var76 = 0;
} else {
var76 = (((long)var73&3)?type_info[((long)var73&3)]:var73->type)->type_table[cltype77] == idtype78;
}
}
if (var76){
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var81 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
/* <var79:nullable Numeric> isa Int32 */
cltype83 = type_core__Int32.color;
idtype84 = type_core__Int32.id;
if(var79 == NULL) {
var82 = 0;
} else {
if(cltype83 >= (((long)var79&3)?type_info[((long)var79&3)]:var79->type)->table_size) {
var82 = 0;
} else {
var82 = (((long)var79&3)?type_info[((long)var79&3)]:var79->type)->type_table[cltype83] == idtype84;
}
}
if (unlikely(!var82)) {
var_class_name85 = var79 == NULL ? "null" : (((long)var79&3)?type_info[((long)var79&3)]:var79->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Int32", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3646);
fatal_exit(1);
}
{
var87 = ((struct instance_core__Int32*)var79)->value; /* autounbox from nullable Numeric to Int32 */;
var86 = nitc___nitc__AbstractCompilerVisitor___int32_instance(var_v, var87);
}
var = var86;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var90 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
/* <var88:nullable Numeric> isa UInt32 */
cltype92 = type_core__UInt32.color;
idtype93 = type_core__UInt32.id;
if(var88 == NULL) {
var91 = 0;
} else {
if(cltype92 >= (((long)var88&3)?type_info[((long)var88&3)]:var88->type)->table_size) {
var91 = 0;
} else {
var91 = (((long)var88&3)?type_info[((long)var88&3)]:var88->type)->type_table[cltype92] == idtype93;
}
}
if (var91){
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var96 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
/* <var94:nullable Numeric> isa UInt32 */
cltype98 = type_core__UInt32.color;
idtype99 = type_core__UInt32.id;
if(var94 == NULL) {
var97 = 0;
} else {
if(cltype98 >= (((long)var94&3)?type_info[((long)var94&3)]:var94->type)->table_size) {
var97 = 0;
} else {
var97 = (((long)var94&3)?type_info[((long)var94&3)]:var94->type)->type_table[cltype98] == idtype99;
}
}
if (unlikely(!var97)) {
var_class_name100 = var94 == NULL ? "null" : (((long)var94&3)?type_info[((long)var94&3)]:var94->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "UInt32", var_class_name100);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3647);
fatal_exit(1);
}
{
var102 = ((struct instance_core__UInt32*)var94)->value; /* autounbox from nullable Numeric to UInt32 */;
var101 = nitc___nitc__AbstractCompilerVisitor___uint32_instance(var_v, var102);
}
var = var101;
goto RET_LABEL;
} else {
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3649);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFloatExpr#expr for (self: AFloatExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AFloatExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
val* var2 /* : TFloat */;
val* var4 /* : TFloat */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : RuntimeVariable */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__String);
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline parser_nodes#AFloatExpr#n_float (self) on <self:AFloatExpr> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2600);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = nitc__lexer_work___Token___text(var2);
}
((struct instance_core__NativeArray*)var1)->values[0]=var5;
{
var6 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
var7 = nitc___nitc__AbstractCompilerVisitor___float_instance(var_v, var6);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACharExpr#expr for (self: ACharExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ACharExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
short int var1 /* : Bool */;
val* var2 /* : nullable Char */;
val* var4 /* : nullable Char */;
unsigned char var5 /* : Byte */;
uint32_t var6 /* : Char */;
val* var7 /* : RuntimeVariable */;
short int var8 /* : Bool */;
val* var9 /* : nullable Char */;
val* var11 /* : nullable Char */;
long var12 /* : Int */;
uint32_t var14 /* : Char */;
long var15 /* : Int */;
val* var16 /* : RuntimeVariable */;
val* var17 /* : nullable Char */;
val* var19 /* : nullable Char */;
val* var20 /* : RuntimeVariable */;
uint32_t var21 /* : Char */;
var_v = p0;
{
var1 = nitc__literal___ACharExpr___is_ascii(self);
}
if (var1){
{
{ /* Inline literal#ACharExpr#value (self) on <self:ACharExpr> */
var4 = self->attrs[COLOR_nitc__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3659);
fatal_exit(1);
}
{
var6 = (uint32_t)((long)(var2)>>2);
var5 = core___core__Char___ascii(var6);
}
{
var7 = nitc___nitc__AbstractCompilerVisitor___byte_instance(var_v, var5);
}
var = var7;
goto RET_LABEL;
} else {
}
{
var8 = nitc__literal___ACharExpr___is_code_point(self);
}
if (var8){
{
{ /* Inline literal#ACharExpr#value (self) on <self:ACharExpr> */
var11 = self->attrs[COLOR_nitc__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3660);
fatal_exit(1);
}
{
{ /* Inline kernel#Char#code_point (var9) on <var9:nullable Char(Char)> */
var14 = (uint32_t)((long)(var9)>>2);
var15 = (long)var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var16 = nitc___nitc__AbstractCompilerVisitor___int_instance(var_v, var12);
}
var = var16;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#ACharExpr#value (self) on <self:ACharExpr> */
var19 = self->attrs[COLOR_nitc__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3661);
fatal_exit(1);
}
{
var21 = (uint32_t)((long)(var17)>>2);
var20 = nitc___nitc__AbstractCompilerVisitor___char_instance(var_v, var21);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AArrayExpr#expr for (self: AArrayExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AArrayExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var4 /* : Array[RuntimeVariable] */;
val* var_array /* var array: Array[RuntimeVariable] */;
val* var5 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var6 /* : nullable StaticFrame */;
val* var8 /* : nullable StaticFrame */;
val* var9 /* : nullable RuntimeVariable */;
val* var11 /* : nullable RuntimeVariable */;
val* var_old_comprehension /* var old_comprehension: nullable RuntimeVariable */;
val* var12 /* : nullable StaticFrame */;
val* var14 /* : nullable StaticFrame */;
val* var16 /* : ANodes[AExpr] */;
val* var18 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var19 /* : Iterator[ANode] */;
val* var_20 /* var : Iterator[AExpr] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var23 /* : nullable StaticFrame */;
val* var25 /* : nullable StaticFrame */;
var_v = p0;
{
{ /* Inline typing#AArrayExpr#element_mtype (self) on <self:AArrayExpr> */
var3 = self->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <self:AArrayExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3668);
fatal_exit(1);
}
var_mtype = var1;
var4 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[RuntimeVariable]>*/
}
var_array = var4;
{
var5 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__array_instance]))(var_v, var_array, var_mtype); /* array_instance on <var_v:AbstractCompilerVisitor>*/
}
var_res = var5;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var8 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3672);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2033);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val; /* _comprehension on <var6:nullable StaticFrame> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_old_comprehension = var9;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var14 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3673);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension= (var12,var_res) on <var12:nullable StaticFrame> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2033);
fatal_exit(1);
}
var12->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val = var_res; /* _comprehension on <var12:nullable StaticFrame> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline parser_nodes#AArrayExpr#n_exprs (self) on <self:AArrayExpr> */
var18 = self->attrs[COLOR_nitc__parser_nodes__AArrayExpr___n_exprs].val; /* _n_exprs on <self:AArrayExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2541);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ = var16;
{
var19 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_20 = var19;
for(;;) {
{
var21 = ((short int(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_20); /* is_ok on <var_20:Iterator[AExpr]>*/
}
if (var21){
} else {
goto BREAK_label;
}
{
var22 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_20); /* item on <var_20:Iterator[AExpr]>*/
}
var_nexpr = var22;
{
nitc___nitc__AbstractCompilerVisitor___stmt(var_v, var_nexpr); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_20); /* next on <var_20:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_20); /* finish on <var_20:Iterator[AExpr]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var25 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3677);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension= (var23,var_old_comprehension) on <var23:nullable StaticFrame> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2033);
fatal_exit(1);
}
var23->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val = var_old_comprehension; /* _comprehension on <var23:nullable StaticFrame> */
RET_LABEL26:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AugmentedStringFormExpr#make_re for (self: AugmentedStringFormExpr, AbstractCompilerVisitor, RuntimeVariable): nullable RuntimeVariable */
val* nitc__abstract_compiler___AugmentedStringFormExpr___make_re(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_rs /* var rs: RuntimeVariable */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
val* var_re /* var re: nullable CallSite */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var10 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other14 /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Sys */;
val* var19 /* : NativeArray[String] */;
static val* varonce;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : SequenceRead[Char] */;
val* var_28 /* var : SequenceRead[Char] */;
val* var29 /* : Iterator[nullable Object] */;
val* var_30 /* var : IndexedIterator[Char] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
uint32_t var33 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : nullable CallSite */;
val* var39 /* : nullable CallSite */;
val* var_ign /* var ign: nullable CallSite */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : Array[RuntimeVariable] */;
val* var_46 /* var : Array[RuntimeVariable] */;
val* var47 /* : RuntimeVariable */;
val* var48 /* : nullable RuntimeVariable */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable CallSite */;
val* var55 /* : nullable CallSite */;
val* var_nl /* var nl: nullable CallSite */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : Array[RuntimeVariable] */;
val* var_62 /* var : Array[RuntimeVariable] */;
val* var63 /* : RuntimeVariable */;
val* var64 /* : nullable RuntimeVariable */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
val* var68 /* : nullable CallSite */;
val* var70 /* : nullable CallSite */;
val* var_ext /* var ext: nullable CallSite */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
val* var76 /* : Array[RuntimeVariable] */;
val* var_77 /* var : Array[RuntimeVariable] */;
val* var78 /* : RuntimeVariable */;
val* var79 /* : nullable RuntimeVariable */;
var_v = p0;
var_rs = p1;
{
{ /* Inline typing#AugmentedStringFormExpr#to_re (self) on <self:AugmentedStringFormExpr> */
var3 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_re].val; /* _to_re on <self:AugmentedStringFormExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_re = var1;
if (var_re == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_re,((val*)NULL)) on <var_re:nullable CallSite> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_re->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_re, var_other); /* == on <var_re:nullable CallSite(CallSite)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3687);
fatal_exit(1);
}
var9 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var9, 1l); /* Direct call array#Array#with_capacity on <var9:Array[RuntimeVariable]>*/
}
var_ = var9;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_rs); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_re, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var10;
if (var_res == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other14 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other14) on <var_res:nullable RuntimeVariable(RuntimeVariable)> */
var17 = var_res == var_other14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var18 = glob_sys;
if (unlikely(varonce==NULL)) {
var19 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Cannot call property `to_re` on ";
var23 = core__abstract_text___CString___to_s_full(var22, 32l, 32l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[0]=var21;
} else {
var19 = varonce;
varonce = NULL;
}
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:AugmentedStringFormExpr>*/
}
((struct instance_core__NativeArray*)var19)->values[1]=var24;
{
var25 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce = var19;
{
core__file___Sys___print(var18, var25); /* Direct call file#Sys#print on <var18:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3691);
fatal_exit(1);
} else {
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__suffix]))(self); /* suffix on <self:AugmentedStringFormExpr>*/
}
{
var27 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__Text__chars]))(var26); /* chars on <var26:String>*/
}
var_28 = var27;
{
var29 = ((val*(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_28); /* iterator on <var_28:SequenceRead[Char]>*/
}
var_30 = var29;
for(;;) {
{
var31 = ((short int(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_30); /* is_ok on <var_30:IndexedIterator[Char]>*/
}
if (var31){
} else {
goto BREAK_label;
}
{
var32 = ((val*(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_30); /* item on <var_30:IndexedIterator[Char]>*/
}
var33 = (uint32_t)((long)(var32)>>2);
var_i = var33;
{
{ /* Inline kernel#Char#== (var_i,'i') on <var_i:Char> */
var36 = var_i == 'i';
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
{
{ /* Inline typing#AugmentedStringFormExpr#ignore_case (self) on <self:AugmentedStringFormExpr> */
var39 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___ignore_case].val; /* _ignore_case on <self:AugmentedStringFormExpr> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_ign = var37;
if (var_ign == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ign,((val*)NULL)) on <var_ign:nullable CallSite> */
var_other = ((val*)NULL);
{
var43 = ((short int(*)(val* self, val* p0))(var_ign->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ign, var_other); /* == on <var_ign:nullable CallSite(CallSite)>*/
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (unlikely(!var40)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3696);
fatal_exit(1);
}
var45 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var45, 2l); /* Direct call array#Array#with_capacity on <var45:Array[RuntimeVariable]>*/
}
var_46 = var45;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_46, var_res); /* Direct call array#AbstractArray#push on <var_46:Array[RuntimeVariable]>*/
}
{
var47 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_46, var47); /* Direct call array#AbstractArray#push on <var_46:Array[RuntimeVariable]>*/
}
{
var48 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_ign, var_46); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
goto BREAK_label49;
} else {
}
{
{ /* Inline kernel#Char#== (var_i,'m') on <var_i:Char> */
var52 = var_i == 'm';
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (var50){
{
{ /* Inline typing#AugmentedStringFormExpr#newline (self) on <self:AugmentedStringFormExpr> */
var55 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___newline].val; /* _newline on <self:AugmentedStringFormExpr> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_nl = var53;
if (var_nl == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nl,((val*)NULL)) on <var_nl:nullable CallSite> */
var_other = ((val*)NULL);
{
var59 = ((short int(*)(val* self, val* p0))(var_nl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nl, var_other); /* == on <var_nl:nullable CallSite(CallSite)>*/
}
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (unlikely(!var56)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3702);
fatal_exit(1);
}
var61 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var61, 2l); /* Direct call array#Array#with_capacity on <var61:Array[RuntimeVariable]>*/
}
var_62 = var61;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_62, var_res); /* Direct call array#AbstractArray#push on <var_62:Array[RuntimeVariable]>*/
}
{
var63 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_62, var63); /* Direct call array#AbstractArray#push on <var_62:Array[RuntimeVariable]>*/
}
{
var64 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_nl, var_62); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
goto BREAK_label49;
} else {
}
{
{ /* Inline kernel#Char#== (var_i,'b') on <var_i:Char> */
var67 = var_i == 'b';
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (var65){
{
{ /* Inline typing#AugmentedStringFormExpr#extended (self) on <self:AugmentedStringFormExpr> */
var70 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___extended].val; /* _extended on <self:AugmentedStringFormExpr> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_ext = var68;
if (var_ext == NULL) {
var71 = 0; /* is null */
} else {
var71 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ext,((val*)NULL)) on <var_ext:nullable CallSite> */
var_other = ((val*)NULL);
{
var74 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var_other); /* == on <var_ext:nullable CallSite(CallSite)>*/
}
var75 = !var74;
var72 = var75;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
if (unlikely(!var71)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3708);
fatal_exit(1);
}
var76 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var76, 2l); /* Direct call array#Array#with_capacity on <var76:Array[RuntimeVariable]>*/
}
var_77 = var76;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_77, var_res); /* Direct call array#AbstractArray#push on <var_77:Array[RuntimeVariable]>*/
}
{
var78 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 0);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_77, var78); /* Direct call array#AbstractArray#push on <var_77:Array[RuntimeVariable]>*/
}
{
var79 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_ext, var_77); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
goto BREAK_label49;
} else {
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3714);
fatal_exit(1);
BREAK_label49: (void)0;
{
((void(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_30); /* next on <var_30:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_30); /* finish on <var_30:IndexedIterator[Char]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AStringFormExpr#expr for (self: AStringFormExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AStringFormExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline literal#AStringFormExpr#value (self) on <self:AStringFormExpr> */
var3 = self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <self:AStringFormExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 201);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___string_instance(var_v, var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AStringExpr#expr for (self: AStringExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AStringExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : RuntimeVariable */;
val* var_s /* var s: RuntimeVariable */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Bytes */;
val* var9 /* : Bytes */;
char* var10 /* : CString */;
char* var12 /* : CString */;
val* var13 /* : Bytes */;
val* var15 /* : Bytes */;
long var16 /* : Int */;
long var18 /* : Int */;
val* var19 /* : RuntimeVariable */;
val* var_ns /* var ns: RuntimeVariable */;
val* var20 /* : Bytes */;
val* var22 /* : Bytes */;
long var23 /* : Int */;
long var25 /* : Int */;
val* var26 /* : RuntimeVariable */;
val* var_ln /* var ln: RuntimeVariable */;
val* var27 /* : nullable CallSite */;
val* var29 /* : nullable CallSite */;
val* var_cs /* var cs: nullable CallSite */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var36 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : nullable RuntimeVariable */;
val* var_res44 /* var res: nullable RuntimeVariable */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : Sys */;
val* var51 /* : NativeArray[String] */;
static val* varonce;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
var_v = p0;
{
{ /* Inline literal#AStringFormExpr#value (self) on <self:AStringExpr> */
var3 = self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <self:AStringExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 201);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___string_instance(var_v, var1);
}
var_s = var4;
{
var5 = nitc___nitc__AugmentedStringFormExpr___is_string(self);
}
if (var5){
var = var_s;
goto RET_LABEL;
} else {
}
{
var6 = nitc___nitc__AugmentedStringFormExpr___is_bytestring(self);
}
if (var6){
{
{ /* Inline literal#AStringFormExpr#bytes (self) on <self:AStringExpr> */
var9 = self->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val; /* _bytes on <self:AStringExpr> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 204);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline bytes#Bytes#items (var7) on <var7:Bytes> */
var12 = var7->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <var7:Bytes> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline literal#AStringFormExpr#bytes (self) on <self:AStringExpr> */
var15 = self->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val; /* _bytes on <self:AStringExpr> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 204);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length (var13) on <var13:Bytes> */
var18 = var13->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var13:Bytes> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc___nitc__AbstractCompilerVisitor___c_string_instance(var_v, var10, var16);
}
var_ns = var19;
{
{ /* Inline literal#AStringFormExpr#bytes (self) on <self:AStringExpr> */
var22 = self->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val; /* _bytes on <self:AStringExpr> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 204);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length (var20) on <var20:Bytes> */
var25 = var20->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var20:Bytes> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__AbstractCompilerVisitor___int_instance(var_v, var23);
}
var_ln = var26;
{
{ /* Inline typing#AugmentedStringFormExpr#to_bytes_with_copy (self) on <self:AStringExpr> */
var29 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_bytes_with_copy].val; /* _to_bytes_with_copy on <self:AStringExpr> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_cs = var27;
if (var_cs == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cs,((val*)NULL)) on <var_cs:nullable CallSite> */
var_other = ((val*)NULL);
{
var33 = ((short int(*)(val* self, val* p0))(var_cs->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cs, var_other); /* == on <var_cs:nullable CallSite(CallSite)>*/
}
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (unlikely(!var30)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3732);
fatal_exit(1);
}
var35 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var35, 2l); /* Direct call array#Array#with_capacity on <var35:Array[RuntimeVariable]>*/
}
var_ = var35;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_ns); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_ln); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var36 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_cs, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var36;
if (var_res == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (unlikely(!var37)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3734);
fatal_exit(1);
}
var_s = var_res;
} else {
{
var42 = nitc___nitc__AugmentedStringFormExpr___is_re(self);
}
if (var42){
{
var43 = nitc__abstract_compiler___AugmentedStringFormExpr___make_re(self, var_v, var_s);
}
var_res44 = var43;
if (var_res44 == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res44,((val*)NULL)) on <var_res44:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var48 = ((short int(*)(val* self, val* p0))(var_res44->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res44, var_other); /* == on <var_res44:nullable RuntimeVariable(RuntimeVariable)>*/
}
var49 = !var48;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (unlikely(!var45)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3738);
fatal_exit(1);
}
var_s = var_res44;
} else {
var50 = glob_sys;
if (unlikely(varonce==NULL)) {
var51 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Unimplemented prefix or suffix for ";
var55 = core__abstract_text___CString___to_s_full(var54, 35l, 35l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
} else {
var51 = varonce;
varonce = NULL;
}
{
var56 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:AStringExpr>*/
}
((struct instance_core__NativeArray*)var51)->values[1]=var56;
{
var57 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce = var51;
{
core__file___Sys___print(var50, var57); /* Direct call file#Sys#print on <var50:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3742);
fatal_exit(1);
}
}
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASuperstringExpr#expr for (self: ASuperstringExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ASuperstringExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_type_string /* var type_string: MClassType */;
val* var3 /* : Array[AExpr] */;
val* var_array /* var array: Array[AExpr] */;
val* var4 /* : ANodes[AExpr] */;
val* var6 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var7 /* : Iterator[ANode] */;
val* var_8 /* var : Iterator[AExpr] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var_13 /* var : Bool */;
val* var14 /* : String */;
val* var16 /* : String */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
short int var20 /* : Bool */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var_varonce /* var varonce: String */;
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
long var38 /* : Int */;
long var40 /* : Int */;
val* var41 /* : RuntimeVariable */;
val* var42 /* : RuntimeVariable */;
val* var_a /* var a: RuntimeVariable */;
val* var44 /* : NativeArray[String] */;
static val* varonce43;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : MType */;
val* var59 /* : MType */;
val* var60 /* : String */;
val* var61 /* : String */;
long var_i /* var i: Int */;
long var62 /* : Int */;
long var64 /* : Int */;
long var_65 /* var : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name;
short int var71 /* : Bool */;
val* var73 /* : nullable Object */;
val* var_ne74 /* var ne: AExpr */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
short int var78 /* : Bool */;
val* var80 /* : RuntimeVariable */;
val* var_e /* var e: RuntimeVariable */;
long var81 /* : Int */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var87 /* : NativeArray[String] */;
static val* varonce86;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : CString */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : MClassType */;
val* var114 /* : MMethod */;
val* var_to_s_method /* var to_s_method: MMethod */;
long var_i115 /* var i: Int */;
long var116 /* : Int */;
long var118 /* : Int */;
long var_119 /* var : Int */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
const char* var_class_name125;
short int var126 /* : Bool */;
val* var128 /* : nullable Object */;
val* var_ne129 /* var ne: AExpr */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
val* var134 /* : RuntimeVariable */;
val* var_e135 /* var e: RuntimeVariable */;
val* var136 /* : MType */;
val* var138 /* : MType */;
val* var139 /* : AbstractCompiler */;
val* var141 /* : AbstractCompiler */;
val* var142 /* : MModule */;
val* var144 /* : MModule */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
val* var147 /* : Array[RuntimeVariable] */;
val* var_148 /* var : Array[RuntimeVariable] */;
val* var149 /* : nullable RuntimeVariable */;
long var150 /* : Int */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : CString */;
val* var154 /* : String */;
val* var155 /* : MType */;
val* var157 /* : MType */;
val* var158 /* : MMethod */;
val* var159 /* : Array[RuntimeVariable] */;
val* var_160 /* var : Array[RuntimeVariable] */;
val* var161 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
val* var168 /* : nullable RuntimeVariable */;
val* var170 /* : NativeArray[String] */;
static val* varonce169;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : CString */;
val* var174 /* : String */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : CString */;
val* var178 /* : String */;
val* var179 /* : String */;
val* var180 /* : String */;
var_v = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(var_v);
}
{
var2 = nitc__model___MModule___string_type(var1);
}
var_type_string = var2;
var3 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[AExpr]>*/
}
var_array = var3;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2645);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_ = var4;
{
var7 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[AExpr]>*/
}
if (var9){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[AExpr]>*/
}
var_ne = var10;
/* <var_ne:AExpr> isa AStringFormExpr */
cltype = type_nitc__AStringFormExpr.color;
idtype = type_nitc__AStringFormExpr.id;
if(cltype >= var_ne->type->table_size) {
var12 = 0;
} else {
var12 = var_ne->type->type_table[cltype] == idtype;
}
var_13 = var12;
if (var12){
{
{ /* Inline literal#AStringFormExpr#value (var_ne) on <var_ne:AExpr(AStringFormExpr)> */
var16 = var_ne->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <var_ne:AExpr(AStringFormExpr)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 201);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "";
var19 = core__abstract_text___CString___to_s_full(var18, 0l, 0l);
var17 = var19;
varonce = var17;
}
{
var20 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_core__kernel__Object___61d_61d]))(var14, var17); /* == on <var14:String>*/
}
var11 = var20;
} else {
var11 = var_13;
}
if (var11){
goto BREAK_label21;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_array, var_ne); /* Direct call array#Array#add on <var_array:Array[AExpr]>*/
}
BREAK_label21: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[AExpr]>*/
}
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "varonce";
var25 = core__abstract_text___CString___to_s_full(var24, 7l, 7l);
var23 = var25;
varonce22 = var23;
}
{
var26 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var23);
}
var_varonce = var26;
if (unlikely(varonce27==NULL)) {
var28 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "if (unlikely(";
var32 = core__abstract_text___CString___to_s_full(var31, 13l, 13l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var28)->values[0]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "==NULL)) {";
var36 = core__abstract_text___CString___to_s_full(var35, 10l, 10l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var28)->values[2]=var34;
} else {
var28 = varonce27;
varonce27 = NULL;
}
((struct instance_core__NativeArray*)var28)->values[1]=var_varonce;
{
var37 = ((val*(*)(val* self))(var28->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce27 = var28;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[AExpr]> */
var40 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[AExpr]> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = nitc___nitc__AbstractCompilerVisitor___int_instance(var_v, var38);
}
{
var42 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(var_v, var_type_string, var41); /* native_array_instance on <var_v:AbstractCompilerVisitor>*/
}
var_a = var42;
if (unlikely(varonce43==NULL)) {
var44 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "static ";
var48 = core__abstract_text___CString___to_s_full(var47, 7l, 7l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var44)->values[0]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = " ";
var52 = core__abstract_text___CString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var44)->values[2]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = ";";
var56 = core__abstract_text___CString___to_s_full(var55, 1l, 1l);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var44)->values[4]=var54;
} else {
var44 = varonce43;
varonce43 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_a) on <var_a:RuntimeVariable> */
var59 = var_a->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_a:RuntimeVariable> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = ((val*(*)(val* self))(var57->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var57); /* ctype on <var57:MType>*/
}
((struct instance_core__NativeArray*)var44)->values[1]=var60;
((struct instance_core__NativeArray*)var44)->values[3]=var_varonce;
{
var61 = ((val*(*)(val* self))(var44->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[AExpr]> */
var64 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[AExpr]> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_65 = var62;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_65) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_65:Int> isa OTHER */
/* <var_65:Int> isa OTHER */
var68 = 1; /* easy <var_65:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var71 = var_i < var_65;
var66 = var71;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
} else {
goto BREAK_label72;
}
{
var73 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i);
}
var_ne74 = var73;
/* <var_ne74:AExpr> isa AStringFormExpr */
cltype76 = type_nitc__AStringFormExpr.color;
idtype77 = type_nitc__AStringFormExpr.id;
if(cltype76 >= var_ne74->type->table_size) {
var75 = 0;
} else {
var75 = var_ne74->type->type_table[cltype76] == idtype77;
}
var78 = !var75;
if (var78){
goto BREAK_label79;
} else {
}
{
var80 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_ne74, ((val*)NULL));
}
var_e = var80;
{
((void(*)(val* self, val* p0, long p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_set]))(var_v, var_a, var_i, var_e); /* native_array_set on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label79: (void)0;
{
var81 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var81;
}
BREAK_label72: (void)0;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "} else {";
var85 = core__abstract_text___CString___to_s_full(var84, 8l, 8l);
var83 = var85;
varonce82 = var83;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var83); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce86==NULL)) {
var87 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = " = ";
var91 = core__abstract_text___CString___to_s_full(var90, 3l, 3l);
var89 = var91;
varonce88 = var89;
}
((struct instance_core__NativeArray*)var87)->values[1]=var89;
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = ";";
var95 = core__abstract_text___CString___to_s_full(var94, 1l, 1l);
var93 = var95;
varonce92 = var93;
}
((struct instance_core__NativeArray*)var87)->values[3]=var93;
} else {
var87 = varonce86;
varonce86 = NULL;
}
{
var96 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var87)->values[0]=var96;
((struct instance_core__NativeArray*)var87)->values[2]=var_varonce;
{
var97 = ((val*(*)(val* self))(var87->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var87); /* native_to_s on <var87:NativeArray[String]>*/
}
varonce86 = var87;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = " = NULL;";
var103 = core__abstract_text___CString___to_s_full(var102, 8l, 8l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[1]=var101;
} else {
var99 = varonce98;
varonce98 = NULL;
}
((struct instance_core__NativeArray*)var99)->values[0]=var_varonce;
{
var104 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var104); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "}";
var108 = core__abstract_text___CString___to_s_full(var107, 1l, 1l);
var106 = var108;
varonce105 = var106;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var106); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "to_s";
var112 = core__abstract_text___CString___to_s_full(var111, 4l, 4l);
var110 = var112;
varonce109 = var110;
}
{
var113 = nitc___nitc__AbstractCompilerVisitor___object_type(var_v);
}
{
var114 = nitc___nitc__AbstractCompilerVisitor___get_property(var_v, var110, var113);
}
var_to_s_method = var114;
var_i115 = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_array) on <var_array:Array[AExpr]> */
var118 = var_array->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_array:Array[AExpr]> */
var116 = var118;
RET_LABEL117:(void)0;
}
}
var_119 = var116;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i115,var_119) on <var_i115:Int> */
/* Covariant cast for argument 0 (i) <var_119:Int> isa OTHER */
/* <var_119:Int> isa OTHER */
var122 = 1; /* easy <var_119:Int> isa OTHER*/
if (unlikely(!var122)) {
var_class_name125 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name125);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var126 = var_i115 < var_119;
var120 = var126;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
if (var120){
} else {
goto BREAK_label127;
}
{
var128 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_array, var_i115);
}
var_ne129 = var128;
/* <var_ne129:AExpr> isa AStringFormExpr */
cltype131 = type_nitc__AStringFormExpr.color;
idtype132 = type_nitc__AStringFormExpr.id;
if(cltype131 >= var_ne129->type->table_size) {
var130 = 0;
} else {
var130 = var_ne129->type->type_table[cltype131] == idtype132;
}
if (var130){
goto BREAK_label133;
} else {
}
{
var134 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var_ne129, ((val*)NULL));
}
var_e135 = var134;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_e135) on <var_e135:RuntimeVariable> */
var138 = var_e135->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_e135:RuntimeVariable> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var141 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var139) on <var139:AbstractCompiler> */
var144 = var139->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var139:AbstractCompiler> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
var145 = nitc___nitc__MType___is_subtype(var136, var142, ((val*)NULL), var_type_string);
}
var146 = !var145;
if (var146){
var147 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var147, 1l); /* Direct call array#Array#with_capacity on <var147:Array[RuntimeVariable]>*/
}
var_148 = var147;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_148, var_e135); /* Direct call array#AbstractArray#push on <var_148:Array[RuntimeVariable]>*/
}
{
var149 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_to_s_method, var_148); /* send on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3798);
fatal_exit(1);
}
var_e135 = var149;
} else {
}
{
((void(*)(val* self, val* p0, long p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_set]))(var_v, var_a, var_i115, var_e135); /* native_array_set on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label133: (void)0;
{
var150 = core___core__Int___Discrete__successor(var_i115, 1l);
}
var_i115 = var150;
}
BREAK_label127: (void)0;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = "native_to_s";
var154 = core__abstract_text___CString___to_s_full(var153, 11l, 11l);
var152 = var154;
varonce151 = var152;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_a) on <var_a:RuntimeVariable> */
var157 = var_a->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_a:RuntimeVariable> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
var158 = nitc___nitc__AbstractCompilerVisitor___get_property(var_v, var152, var155);
}
var159 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var159, 1l); /* Direct call array#Array#with_capacity on <var159:Array[RuntimeVariable]>*/
}
var_160 = var159;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_160, var_a); /* Direct call array#AbstractArray#push on <var_160:Array[RuntimeVariable]>*/
}
{
var161 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var158, var_160); /* send on <var_v:AbstractCompilerVisitor>*/
}
var_res = var161;
if (var_res == NULL) {
var162 = 0; /* is null */
} else {
var162 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var165 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var166 = !var165;
var163 = var166;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
var162 = var163;
}
if (unlikely(!var162)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3805);
fatal_exit(1);
}
{
var167 = nitc___nitc__AugmentedStringFormExpr___is_re(self);
}
if (var167){
{
var168 = nitc__abstract_compiler___AugmentedStringFormExpr___make_re(self, var_v, var_res);
}
var_res = var168;
} else {
}
if (unlikely(varonce169==NULL)) {
var170 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = " = ";
var174 = core__abstract_text___CString___to_s_full(var173, 3l, 3l);
var172 = var174;
varonce171 = var172;
}
((struct instance_core__NativeArray*)var170)->values[1]=var172;
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = ";";
var178 = core__abstract_text___CString___to_s_full(var177, 1l, 1l);
var176 = var178;
varonce175 = var176;
}
((struct instance_core__NativeArray*)var170)->values[3]=var176;
} else {
var170 = varonce169;
varonce169 = NULL;
}
((struct instance_core__NativeArray*)var170)->values[0]=var_varonce;
{
var179 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var170)->values[2]=var179;
{
var180 = ((val*(*)(val* self))(var170->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var170); /* native_to_s on <var170:NativeArray[String]>*/
}
varonce169 = var170;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var180); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ACrangeExpr#expr for (self: ACrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ACrangeExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var13 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var14 /* : nullable CallSite */;
val* var16 /* : nullable CallSite */;
val* var17 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var18 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:ACrangeExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:ACrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2502);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i1 = var4;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:ACrangeExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:ACrangeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2508);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var5, ((val*)NULL));
}
var_i2 = var8;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ACrangeExpr> */
var11 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:ACrangeExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
/* <var9:nullable MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(var9 == NULL) {
var12 = 0;
} else {
if(cltype >= var9->type->table_size) {
var12 = 0;
} else {
var12 = var9->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
var_class_name = var9 == NULL ? "null" : var9->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3822);
fatal_exit(1);
}
var_mtype = var9;
{
var13 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_res = var13;
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:ACrangeExpr> */
var16 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3824);
fatal_exit(1);
}
var17 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var17, 3l); /* Direct call array#Array#with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_res); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_i1); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_i2); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var14, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOrangeExpr#expr for (self: AOrangeExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AOrangeExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i1 /* var i1: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i2 /* var i2: RuntimeVariable */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var13 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var14 /* : nullable CallSite */;
val* var16 /* : nullable CallSite */;
val* var17 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var18 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr (self) on <self:AOrangeExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr].val; /* _n_expr on <self:AOrangeExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2502);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i1 = var4;
{
{ /* Inline parser_nodes#ARangeExpr#n_expr2 (self) on <self:AOrangeExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ARangeExpr___n_expr2].val; /* _n_expr2 on <self:AOrangeExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2508);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var5, ((val*)NULL));
}
var_i2 = var8;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrangeExpr> */
var11 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOrangeExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
/* <var9:nullable MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(var9 == NULL) {
var12 = 0;
} else {
if(cltype >= var9->type->table_size) {
var12 = 0;
} else {
var12 = var9->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
var_class_name = var9 == NULL ? "null" : var9->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3834);
fatal_exit(1);
}
var_mtype = var9;
{
var13 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_mtype); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_res = var13;
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:AOrangeExpr> */
var16 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3836);
fatal_exit(1);
}
var17 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var17, 3l); /* Direct call array#Array#with_capacity on <var17:Array[RuntimeVariable]>*/
}
var_ = var17;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_res); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_i1); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_i2); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var14, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ATrueExpr#expr for (self: ATrueExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ATrueExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : RuntimeVariable */;
var_v = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AFalseExpr#expr for (self: AFalseExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AFalseExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : RuntimeVariable */;
var_v = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___bool_instance(var_v, 0);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANullExpr#expr for (self: ANullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ANullExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : RuntimeVariable */;
var_v = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___null_instance(var_v);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AIsaExpr#expr for (self: AIsaExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AIsaExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var_cast_type /* var cast_type: nullable MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AIsaExpr#n_expr (self) on <self:AIsaExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AIsaExpr___n_expr].val; /* _n_expr on <self:AIsaExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2234);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i = var4;
{
{ /* Inline typing#AIsaExpr#cast_type (self) on <self:AIsaExpr> */
var7 = self->attrs[COLOR_nitc__typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_cast_type = var5;
if (var_cast_type == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_cast_type,((val*)NULL)) on <var_cast_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_cast_type,var_other) on <var_cast_type:nullable MType(MType)> */
var13 = var_cast_type == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "isa";
var16 = core__abstract_text___CString___to_s_full(var15, 3l, 3l);
var14 = var16;
varonce = var14;
}
{
var17 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__type_test]))(var_v, var_i, var_cast_type, var14); /* type_test on <var_v:AbstractCompilerVisitor>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsCastExpr#expr for (self: AAsCastExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AAsCastExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : ModelBuilder */;
val* var10 /* : ModelBuilder */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionBool */;
val* var16 /* : OptionBool */;
val* var17 /* : nullable Object */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
val* var21 /* : nullable MType */;
val* var23 /* : nullable MType */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsCastExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsCastExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2667);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i = var4;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var8) on <var8:ModelBuilder> */
var13 = var8->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var8:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline opts#Option#value (var14) on <var14:OptionBool> */
var19 = var14->attrs[COLOR_opts__Option___value].val; /* _value on <var14:OptionBool> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = (short int)((long)(var17)>>2);
if (var20){
var = var_i;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAsCastExpr> */
var23 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AAsCastExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3869);
fatal_exit(1);
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "as";
var26 = core__abstract_text___CString___to_s_full(var25, 2l, 2l);
var24 = var26;
varonce = var24;
}
{
nitc___nitc__AbstractCompilerVisitor___add_cast(var_v, var_i, var21, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAsNotnullExpr#expr for (self: AAsNotnullExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AAsNotnullExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : ModelBuilder */;
val* var10 /* : ModelBuilder */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionBool */;
val* var16 /* : OptionBool */;
val* var17 /* : nullable Object */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : NativeArray[String] */;
static val* varonce;
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
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AAsCastForm#n_expr (self) on <self:AAsNotnullExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsCastForm___n_expr].val; /* _n_expr on <self:AAsNotnullExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2667);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_i = var4;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
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
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var8) on <var8:ModelBuilder> */
var13 = var8->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var8:ModelBuilder> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline opts#Option#value (var14) on <var14:OptionBool> */
var19 = var14->attrs[COLOR_opts__Option___value].val; /* _value on <var14:OptionBool> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = (short int)((long)(var17)>>2);
if (var20){
var = var_i;
goto RET_LABEL;
} else {
}
{
var21 = nitc___nitc__AbstractCompilerVisitor___maybenull(var_v, var_i);
}
var22 = !var21;
if (var22){
var = var_i;
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var23 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "if (unlikely(";
var27 = core__abstract_text___CString___to_s_full(var26, 13l, 13l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = " == NULL)) {";
var31 = core__abstract_text___CString___to_s_full(var30, 12l, 12l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var23)->values[2]=var29;
} else {
var23 = varonce;
varonce = NULL;
}
{
var32 = ((val*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i); /* to_s on <var_i:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var23)->values[1]=var32;
{
var33 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce = var23;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Cast failed";
var37 = core__abstract_text___CString___to_s_full(var36, 11l, 11l);
var35 = var37;
varonce34 = var35;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "}";
var41 = core__abstract_text___CString___to_s_full(var40, 1l, 1l);
var39 = var41;
varonce38 = var39;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AParExpr#expr for (self: AParExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AParExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AParExpr#n_expr (self) on <self:AParExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <self:AParExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2656);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AOnceExpr#expr for (self: AOnceExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AOnceExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : String */;
val* var_name /* var name: String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : Text */;
val* var13 /* : String */;
val* var_guard /* var guard: String */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
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
val* var40 /* : String */;
val* var41 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var43 /* : NativeArray[String] */;
static val* varonce42;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
val* var52 /* : String */;
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
val* var63 /* : String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : AExpr */;
val* var71 /* : AExpr */;
val* var72 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
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
val* var85 /* : String */;
val* var87 /* : NativeArray[String] */;
static val* varonce86;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : CString */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOnceExpr> */
var3 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOnceExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3896);
fatal_exit(1);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "varonce";
var6 = core__abstract_text___CString___to_s_full(var5, 7l, 7l);
var4 = var6;
varonce = var4;
}
{
var7 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var4);
}
var_name = var7;
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "_guard";
var11 = core__abstract_text___CString___to_s_full(var10, 6l, 6l);
var9 = var11;
varonce8 = var9;
}
{
var12 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__abstract_text__Text___43d]))(var_name, var9); /* + on <var_name:String>*/
}
{
var13 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var12);
}
var_guard = var13;
if (unlikely(varonce14==NULL)) {
var15 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "static ";
var19 = core__abstract_text___CString___to_s_full(var18, 7l, 7l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = " ";
var23 = core__abstract_text___CString___to_s_full(var22, 1l, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var15)->values[2]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = ";";
var27 = core__abstract_text___CString___to_s_full(var26, 1l, 1l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var15)->values[4]=var25;
} else {
var15 = varonce14;
varonce14 = NULL;
}
{
var28 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var15)->values[1]=var28;
((struct instance_core__NativeArray*)var15)->values[3]=var_name;
{
var29 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce30==NULL)) {
var31 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "static int ";
var35 = core__abstract_text___CString___to_s_full(var34, 11l, 11l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var31)->values[0]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = ";";
var39 = core__abstract_text___CString___to_s_full(var38, 1l, 1l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var31)->values[2]=var37;
} else {
var31 = varonce30;
varonce30 = NULL;
}
((struct instance_core__NativeArray*)var31)->values[1]=var_guard;
{
var40 = ((val*(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var40); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var41 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_res = var41;
if (unlikely(varonce42==NULL)) {
var43 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "if (likely(";
var47 = core__abstract_text___CString___to_s_full(var46, 11l, 11l);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var43)->values[0]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = ")) {";
var51 = core__abstract_text___CString___to_s_full(var50, 4l, 4l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var43)->values[2]=var49;
} else {
var43 = varonce42;
varonce42 = NULL;
}
((struct instance_core__NativeArray*)var43)->values[1]=var_guard;
{
var52 = ((val*(*)(val* self))(var43->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce42 = var43;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce53==NULL)) {
var54 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = " = ";
var58 = core__abstract_text___CString___to_s_full(var57, 3l, 3l);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var54)->values[1]=var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = ";";
var62 = core__abstract_text___CString___to_s_full(var61, 1l, 1l);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var54)->values[3]=var60;
} else {
var54 = varonce53;
varonce53 = NULL;
}
{
var63 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var54)->values[0]=var63;
((struct instance_core__NativeArray*)var54)->values[2]=var_name;
{
var64 = ((val*(*)(val* self))(var54->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var54); /* native_to_s on <var54:NativeArray[String]>*/
}
varonce53 = var54;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "} else {";
var68 = core__abstract_text___CString___to_s_full(var67, 8l, 8l);
var66 = var68;
varonce65 = var66;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var66); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline parser_nodes#AOnceExpr#n_expr (self) on <self:AOnceExpr> */
var71 = self->attrs[COLOR_nitc__parser_nodes__AOnceExpr___n_expr].val; /* _n_expr on <self:AOnceExpr> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2095);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var69, var_mtype);
}
var_i = var72;
if (unlikely(varonce73==NULL)) {
var74 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = " = ";
var78 = core__abstract_text___CString___to_s_full(var77, 3l, 3l);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[1]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = ";";
var82 = core__abstract_text___CString___to_s_full(var81, 1l, 1l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var74)->values[3]=var80;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
var83 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var74)->values[0]=var83;
{
var84 = ((val*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i); /* to_s on <var_i:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var74)->values[2]=var84;
{
var85 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var85); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce86==NULL)) {
var87 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = " = ";
var91 = core__abstract_text___CString___to_s_full(var90, 3l, 3l);
var89 = var91;
varonce88 = var89;
}
((struct instance_core__NativeArray*)var87)->values[1]=var89;
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = ";";
var95 = core__abstract_text___CString___to_s_full(var94, 1l, 1l);
var93 = var95;
varonce92 = var93;
}
((struct instance_core__NativeArray*)var87)->values[3]=var93;
} else {
var87 = varonce86;
varonce86 = NULL;
}
((struct instance_core__NativeArray*)var87)->values[0]=var_name;
{
var96 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var87)->values[2]=var96;
{
var97 = ((val*(*)(val* self))(var87->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var87); /* native_to_s on <var87:NativeArray[String]>*/
}
varonce86 = var87;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = " = 1;";
var103 = core__abstract_text___CString___to_s_full(var102, 5l, 5l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[1]=var101;
} else {
var99 = varonce98;
varonce98 = NULL;
}
((struct instance_core__NativeArray*)var99)->values[0]=var_guard;
{
var104 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var104); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "}";
var108 = core__abstract_text___CString___to_s_full(var107, 1l, 1l);
var106 = var108;
varonce105 = var106;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var106); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ASendExpr#expr for (self: ASendExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ASendExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var5 /* : nullable CallSite */;
val* var7 /* : nullable CallSite */;
val* var_callsite /* var callsite: CallSite */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MMethodDef */;
val* var13 /* : MMethodDef */;
val* var14 /* : nullable SignatureMap */;
val* var16 /* : nullable SignatureMap */;
val* var17 /* : Array[AExpr] */;
val* var18 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var19 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var1, ((val*)NULL));
}
var_recv = var4;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
var7 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3918);
fatal_exit(1);
}
var_callsite = var5;
{
{ /* Inline model_base#MEntity#is_broken (var_callsite) on <var_callsite:CallSite> */
var10 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:CallSite> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var13 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline typing#CallSite#signaturemap (var_callsite) on <var_callsite:CallSite> */
var16 = var_callsite->attrs[COLOR_nitc__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:CallSite> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nitc__typing___ASendExpr___raw_arguments(self);
}
{
var18 = nitc___nitc__AbstractCompilerVisitor___varargize(var_v, var11, var14, var_recv, var17);
}
var_args = var18;
{
var19 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
