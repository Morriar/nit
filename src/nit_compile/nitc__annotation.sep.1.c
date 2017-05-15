#include "nitc__annotation.sep.0.h"
/* method annotation#Prod#get_single_annotation for (self: Prod, String, ModelBuilder): nullable AAnnotation */
val* nitc__annotation___Prod___get_single_annotation(val* self, val* p0, val* p1) {
val* var /* : nullable AAnnotation */;
val* var_name /* var name: String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : Array[AAnnotation] */;
val* var_res /* var res: Array[AAnnotation] */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
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
val* var24 /* : nullable Object */;
val* var25 /* : Location */;
val* var27 /* : Location */;
long var28 /* : Int */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : nullable Object */;
var_name = p0;
var_modelbuilder = p1;
{
var1 = nitc___nitc__Prod___get_annotations(self, var_name);
}
var_res = var1;
{
var2 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_res);
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_res) on <var_res:Array[AAnnotation]> */
var5 = var_res->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_res:Array[AAnnotation]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var9 = var3 > 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var10 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_res, 1l);
}
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Syntax Error: multiple `";
var15 = core__abstract_text___CString___to_s_full(var14, 24l, 24l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "`. A previous one is defined line ";
var19 = core__abstract_text___CString___to_s_full(var18, 34l, 34l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var11)->values[2]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = ".";
var23 = core__abstract_text___CString___to_s_full(var22, 1l, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var11)->values[4]=var21;
} else {
var11 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var11)->values[1]=var_name;
{
var24 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_res, 0l);
}
{
{ /* Inline parser_nodes#ANode#location (var24) on <var24:nullable Object(AAnnotation)> */
var27 = var24->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var24:nullable Object(AAnnotation)> */
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
{ /* Inline location#Location#line_start (var25) on <var25:Location> */
var30 = var25->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var25:Location> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = core__flat___Int___core__abstract_text__Object__to_s(var28);
((struct instance_core__NativeArray*)var11)->values[3]=var31;
{
var32 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var10, var32); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var33 = core___core__SequenceRead___Collection__first(var_res);
}
var = var33;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#arg_as_string for (self: AAnnotation, ModelBuilder): nullable String */
val* nitc__annotation___AAnnotation___arg_as_string(val* self, val* p0) {
val* var /* : nullable String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var9 /* : nullable String */;
val* var_arg /* var arg: nullable String */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : NativeArray[String] */;
static val* varonce;
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
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_args = var1;
{
var4 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_args);
}
{
{ /* Inline kernel#Int#== (var4,1l) on <var4:Int> */
var7 = var4 == 1l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var8 = core___core__SequenceRead___Collection__first(var_args);
}
{
var9 = nitc__literal___AExpr___as_string(var8);
}
var_arg = var9;
if (var_arg == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_arg,((val*)NULL)) on <var_arg:nullable String> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_arg->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_arg, var_other); /* == on <var_arg:nullable String(String)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var = var_arg;
goto RET_LABEL;
} else {
}
} else {
}
if (unlikely(varonce==NULL)) {
var15 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Syntax Error: `";
var19 = core__abstract_text___CString___to_s_full(var18, 15l, 15l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "` expects a single String as argument.";
var23 = core__abstract_text___CString___to_s_full(var22, 38l, 38l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce;
varonce = NULL;
}
{
var24 = nitc___nitc__AAnnotation___name(self);
}
((struct instance_core__NativeArray*)var15)->values[1]=var24;
{
var25 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var25); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#arg_as_int for (self: AAnnotation, ModelBuilder): nullable Int */
val* nitc__annotation___AAnnotation___arg_as_int(val* self, val* p0) {
val* var /* : nullable Int */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var9 /* : nullable Int */;
val* var_arg /* var arg: nullable Int */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : NativeArray[String] */;
static val* varonce;
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
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_args = var1;
{
var4 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_args);
}
{
{ /* Inline kernel#Int#== (var4,1l) on <var4:Int> */
var7 = var4 == 1l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var8 = core___core__SequenceRead___Collection__first(var_args);
}
{
var9 = nitc__literal___AExpr___as_int(var8);
}
var_arg = var9;
if (var_arg == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Int#!= (var_arg,((val*)NULL)) on <var_arg:nullable Int> */
var13 = 0; /* incompatible types Int vs. null; cannot be NULL */
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var = var_arg;
goto RET_LABEL;
} else {
}
} else {
}
if (unlikely(varonce==NULL)) {
var15 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Syntax Error: `";
var19 = core__abstract_text___CString___to_s_full(var18, 15l, 15l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "` expects a single Int as argument.";
var23 = core__abstract_text___CString___to_s_full(var22, 35l, 35l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce;
varonce = NULL;
}
{
var24 = nitc___nitc__AAnnotation___name(self);
}
((struct instance_core__NativeArray*)var15)->values[1]=var24;
{
var25 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var25); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#arg_as_id for (self: AAnnotation, ModelBuilder): nullable String */
val* nitc__annotation___AAnnotation___arg_as_id(val* self, val* p0) {
val* var /* : nullable String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var9 /* : nullable String */;
val* var_arg /* var arg: nullable String */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : NativeArray[String] */;
static val* varonce;
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
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_args = var1;
{
var4 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_args);
}
{
{ /* Inline kernel#Int#== (var4,1l) on <var4:Int> */
var7 = var4 == 1l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var8 = core___core__SequenceRead___Collection__first(var_args);
}
{
var9 = nitc__parser_work___AExpr___as_id(var8);
}
var_arg = var9;
if (var_arg == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_arg,((val*)NULL)) on <var_arg:nullable String> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_arg->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_arg, var_other); /* == on <var_arg:nullable String(String)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var = var_arg;
goto RET_LABEL;
} else {
}
} else {
}
if (unlikely(varonce==NULL)) {
var15 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Syntax Error: `";
var19 = core__abstract_text___CString___to_s_full(var18, 15l, 15l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "` expects a single identifier as argument.";
var23 = core__abstract_text___CString___to_s_full(var22, 42l, 42l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce;
varonce = NULL;
}
{
var24 = nitc___nitc__AAnnotation___name(self);
}
((struct instance_core__NativeArray*)var15)->values[1]=var24;
{
var25 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var25); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#ModelBuilder#collect_annotations_on_modules for (self: ModelBuilder, String, MModule): Array[AAnnotation] */
val* nitc__annotation___ModelBuilder___collect_annotations_on_modules(val* self, val* p0, val* p1) {
val* var /* : Array[AAnnotation] */;
val* var_name /* var name: String */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : Array[AAnnotation] */;
val* var_annotations /* var annotations: Array[AAnnotation] */;
val* var2 /* : POSetElement[MModule] */;
val* var4 /* : POSetElement[MModule] */;
val* var5 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[MModule] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_mmod /* var mmod: MModule */;
val* var10 /* : nullable AModule */;
val* var_amod /* var amod: nullable AModule */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var18 /* : nullable AModuledecl */;
val* var20 /* : nullable AModuledecl */;
val* var_module_decl /* var module_decl: nullable AModuledecl */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : Array[AAnnotation] */;
val* var_aas /* var aas: Array[AAnnotation] */;
var_name = p0;
var_mmodule = p1;
var1 = NEW_core__Array(&type_core__Array__nitc__AAnnotation);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[AAnnotation]>*/
}
var_annotations = var1;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var4 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = poset___poset__POSetElement___greaters(var2);
}
var_ = var5;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[MModule]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[MModule]>*/
}
var_mmod = var9;
{
var10 = nitc__loader___ModelBuilder___mmodule2node(self, var_mmod);
}
var_amod = var10;
if (var_amod == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_amod,((val*)NULL)) on <var_amod:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_amod,var_other) on <var_amod:nullable AModule(AModule)> */
var16 = var_amod == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
goto BREAK_label17;
} else {
}
{
{ /* Inline parser_nodes#AModule#n_moduledecl (var_amod) on <var_amod:nullable AModule(AModule)> */
var20 = var_amod->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_amod:nullable AModule(AModule)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_module_decl = var18;
if (var_module_decl == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_module_decl,((val*)NULL)) on <var_module_decl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_module_decl,var_other) on <var_module_decl:nullable AModuledecl(AModuledecl)> */
var26 = var_module_decl == var_other;
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
goto BREAK_label17;
} else {
}
{
var27 = nitc___nitc__Prod___get_annotations(var_module_decl, var_name);
}
var_aas = var27;
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_annotations, var_aas); /* Direct call array#Array#add_all on <var_annotations:Array[AAnnotation]>*/
}
BREAK_label17: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[MModule]>*/
}
var = var_annotations;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#ModelBuilder#get_mmodule_annotation for (self: ModelBuilder, String, MModule): nullable AAnnotation */
val* nitc__annotation___ModelBuilder___get_mmodule_annotation(val* self, val* p0, val* p1) {
val* var /* : nullable AAnnotation */;
val* var_name /* var name: String */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : nullable AModule */;
val* var_amod /* var amod: nullable AModule */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable AModuledecl */;
val* var10 /* : nullable AModuledecl */;
val* var_module_decl /* var module_decl: nullable AModuledecl */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable AAnnotation */;
val* var_res /* var res: nullable AAnnotation */;
var_name = p0;
var_mmodule = p1;
{
var1 = nitc__loader___ModelBuilder___mmodule2node(self, var_mmodule);
}
var_amod = var1;
if (var_amod == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_amod,((val*)NULL)) on <var_amod:nullable AModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_amod,var_other) on <var_amod:nullable AModule(AModule)> */
var7 = var_amod == var_other;
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
{ /* Inline parser_nodes#AModule#n_moduledecl (var_amod) on <var_amod:nullable AModule(AModule)> */
var10 = var_amod->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_amod:nullable AModule(AModule)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_module_decl = var8;
if (var_module_decl == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_module_decl,((val*)NULL)) on <var_module_decl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_module_decl,var_other) on <var_module_decl:nullable AModuledecl(AModuledecl)> */
var16 = var_module_decl == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var17 = nitc__annotation___Prod___get_single_annotation(var_module_decl, var_name, self);
}
var_res = var17;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#ModelBuilder#collect_annotations_data_cache for (self: ModelBuilder): HashMap[String, MModuleData[AAnnotation]] */
val* nitc__annotation___ModelBuilder___collect_annotations_data_cache(val* self) {
val* var /* : HashMap[String, MModuleData[AAnnotation]] */;
val* var1 /* : HashMap[String, MModuleData[AAnnotation]] */;
var1 = self->attrs[COLOR_nitc__annotation__ModelBuilder___collect_annotations_data_cache].val; /* _collect_annotations_data_cache on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_annotations_data_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__annotation, 112);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method annotation#ModelBuilder#collect_annotations_data for (self: ModelBuilder, String, MModule): MModuleData[AAnnotation] */
val* nitc__annotation___ModelBuilder___collect_annotations_data(val* self, val* p0, val* p1) {
val* var /* : MModuleData[AAnnotation] */;
val* var_name /* var name: String */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashMap[String, MModuleData[AAnnotation]] */;
val* var3 /* : HashMap[String, MModuleData[AAnnotation]] */;
val* var4 /* : nullable Object */;
val* var_res /* var res: nullable MModuleData[AAnnotation] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MModuleData[AAnnotation] */;
val* var12 /* : Model */;
val* var14 /* : Model */;
val* var15 /* : HashMap[String, MModuleData[AAnnotation]] */;
val* var17 /* : HashMap[String, MModuleData[AAnnotation]] */;
val* var18 /* : POSetElement[MModule] */;
val* var20 /* : POSetElement[MModule] */;
val* var21 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var22 /* : Iterator[nullable Object] */;
val* var_23 /* var : Iterator[MModule] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_mmod /* var mmod: MModule */;
short int var26 /* : Bool */;
val* var28 /* : nullable AAnnotation */;
val* var_ass /* var ass: nullable AAnnotation */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
var_name = p0;
var_mmodule = p1;
{
{ /* Inline annotation#ModelBuilder#collect_annotations_data_cache (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nitc__annotation__ModelBuilder___collect_annotations_data_cache].val; /* _collect_annotations_data_cache on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_annotations_data_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__annotation, 112);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, var_name);
}
var_res = var4;
if (var_res == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable MModuleData[AAnnotation]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MModuleData[AAnnotation](MModuleData[AAnnotation])> */
var10 = var_res == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var11 = NEW_nitc__MModuleData(&type_nitc__MModuleData__nitc__AAnnotation);
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var14 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_nitc__mmodule_data__MModuleData__model_61d]))(var11, var12); /* model= on <var11:MModuleData[AAnnotation]>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_core__kernel__Object__init]))(var11); /* init on <var11:MModuleData[AAnnotation]>*/
}
var_res = var11;
{
{ /* Inline annotation#ModelBuilder#collect_annotations_data_cache (self) on <self:ModelBuilder> */
var17 = self->attrs[COLOR_nitc__annotation__ModelBuilder___collect_annotations_data_cache].val; /* _collect_annotations_data_cache on <self:ModelBuilder> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _collect_annotations_data_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__annotation, 112);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var15, var_name, var_res); /* Direct call hash_collection#HashMap#[]= on <var15:HashMap[String, MModuleData[AAnnotation]]>*/
}
} else {
}
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var20 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = poset___poset__POSetElement___greaters(var18);
}
var_ = var21;
{
var22 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_23 = var22;
for(;;) {
{
var24 = ((short int(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_23); /* is_ok on <var_23:Iterator[MModule]>*/
}
if (var24){
} else {
goto BREAK_label;
}
{
var25 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_23); /* item on <var_23:Iterator[MModule]>*/
}
var_mmod = var25;
{
var26 = nitc___nitc__MModuleData___has_mmodule(var_res, var_mmod);
}
if (var26){
goto BREAK_label27;
} else {
}
{
var28 = nitc__annotation___ModelBuilder___get_mmodule_annotation(self, var_name, var_mmod);
}
var_ass = var28;
if (var_ass == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ass,((val*)NULL)) on <var_ass:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ass,var_other) on <var_ass:nullable AAnnotation(AAnnotation)> */
var34 = var_ass == var_other;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
goto BREAK_label27;
} else {
}
{
nitc___nitc__MModuleData____91d_93d_61d(var_res, var_mmod, var_ass); /* Direct call mmodule_data#MModuleData#[]= on <var_res:nullable MModuleData[AAnnotation](MModuleData[AAnnotation])>*/
}
BREAK_label27: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_23); /* next on <var_23:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_23); /* finish on <var_23:Iterator[MModule]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#ModelBuilder#lookup_annotation_on_modules for (self: ModelBuilder, String, MModule): nullable AAnnotation */
val* nitc__annotation___ModelBuilder___lookup_annotation_on_modules(val* self, val* p0, val* p1) {
val* var /* : nullable AAnnotation */;
val* var_name /* var name: String */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : MModuleData[AAnnotation] */;
val* var_data /* var data: MModuleData[AAnnotation] */;
val* var2 /* : Sys */;
val* var3 /* : MVisibility */;
val* var4 /* : Sequence[Object] */;
val* var_annotations /* var annotations: Sequence[AAnnotation] */;
short int var5 /* : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : Array[Location] */;
val* var_locs /* var locs: Array[Location] */;
val* var_ /* var : Sequence[AAnnotation] */;
val* var12 /* : Iterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[AAnnotation] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_annot /* var annot: AAnnotation */;
val* var16 /* : Location */;
val* var18 /* : Location */;
val* var19 /* : ToolContext */;
val* var21 /* : ToolContext */;
val* var22 /* : Location */;
val* var24 /* : Location */;
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
val* var44 /* : Message */;
val* var45 /* : nullable Object */;
var_name = p0;
var_mmodule = p1;
{
var1 = nitc__annotation___ModelBuilder___collect_annotations_data(self, var_name, var_mmodule);
}
var_data = var1;
var2 = glob_sys;
{
var3 = nitc__model_base___core__Sys___none_visibility(var2);
}
{
var4 = nitc___nitc__MModuleData___lookup_values(var_data, var_mmodule, var3);
}
var_annotations = var4;
{
var5 = ((short int(*)(val* self))((((long)var_annotations&3)?class_info[((long)var_annotations&3)]:var_annotations->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_annotations); /* is_empty on <var_annotations:Sequence[AAnnotation]>*/
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var6 = ((long(*)(val* self))((((long)var_annotations&3)?class_info[((long)var_annotations&3)]:var_annotations->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_annotations); /* length on <var_annotations:Sequence[AAnnotation]>*/
}
{
{ /* Inline kernel#Int#> (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var10 = var6 > 1l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var11 = NEW_core__Array(&type_core__Array__nitc__Location);
{
core___core__Array___core__kernel__Object__init(var11); /* Direct call array#Array#init on <var11:Array[Location]>*/
}
var_locs = var11;
var_ = var_annotations;
{
var12 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[AAnnotation]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[AAnnotation]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[AAnnotation]>*/
}
var_annot = var15;
{
{ /* Inline parser_nodes#ANode#location (var_annot) on <var_annot:AAnnotation> */
var18 = var_annot->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_annot:AAnnotation> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_locs, var16); /* Direct call array#Array#add on <var_locs:Array[Location]>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[AAnnotation]>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var21 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline mmodule#MModule#location (var_mmodule) on <var_mmodule:MModule> */
var24 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var_mmodule:MModule> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 103);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var25 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Error: priority conflict on annotation `";
var29 = core__abstract_text___CString___to_s_full(var28, 40l, 40l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "`, it has been defined in: ";
var33 = core__abstract_text___CString___to_s_full(var32, 27l, 27l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var25)->values[2]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ".";
var37 = core__abstract_text___CString___to_s_full(var36, 1l, 1l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var25)->values[4]=var35;
} else {
var25 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var25)->values[1]=var_name;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = ", ";
var41 = core__abstract_text___CString___to_s_full(var40, 2l, 2l);
var39 = var41;
varonce38 = var39;
}
{
var42 = core__abstract_text___Collection___join(var_locs, var39, ((val*)NULL));
}
((struct instance_core__NativeArray*)var25)->values[3]=var42;
{
var43 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce = var25;
{
var44 = nitc___nitc__ToolContext___error(var19, var22, var43);
}
} else {
}
{
var45 = ((val*(*)(val* self))((((long)var_annotations&3)?class_info[((long)var_annotations&3)]:var_annotations->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var_annotations); /* first on <var_annotations:Sequence[AAnnotation]>*/
}
var = var45;
goto RET_LABEL;
RET_LABEL:;
return var;
}
