#include "nitc__header_dependency.sep.0.h"
/* method header_dependency#AModule#has_public_c_header for (self: AModule): Bool */
short int nitc__header_dependency___AModule___has_public_c_header(val* self) {
short int var /* : Bool */;
val* var1 /* : ANodes[AExternCodeBlock] */;
val* var3 /* : ANodes[AExternCodeBlock] */;
val* var_ /* var : ANodes[AExternCodeBlock] */;
val* var4 /* : Iterator[ANode] */;
val* var_5 /* var : Iterator[AExternCodeBlock] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_code_block /* var code_block: AExternCodeBlock */;
short int var8 /* : Bool */;
{
{ /* Inline parser_nodes#AModule#n_extern_code_blocks (self) on <self:AModule> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_extern_code_blocks].val; /* _n_extern_code_blocks on <self:AModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_code_blocks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1122);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[AExternCodeBlock]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[AExternCodeBlock]>*/
}
var_code_block = var7;
{
var8 = nitc__light_c___AExternCodeBlock___is_c_header(var_code_block);
}
if (var8){
var = 1;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[AExternCodeBlock]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[AExternCodeBlock]>*/
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method header_dependency#MModule#header_dependencies for (self: MModule): nullable HashSet[MModule] */
val* nitc__header_dependency___MModule___header_dependencies(val* self) {
val* var /* : nullable HashSet[MModule] */;
val* var1 /* : nullable HashSet[MModule] */;
var1 = self->attrs[COLOR_nitc__header_dependency__MModule___header_dependencies].val; /* _header_dependencies on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method header_dependency#MModule#header_dependencies= for (self: MModule, nullable HashSet[MModule]) */
void nitc__header_dependency___MModule___header_dependencies_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__header_dependency__MModule___header_dependencies].val = p0; /* _header_dependencies on <self:MModule> */
RET_LABEL:;
}
/* method header_dependency#MModule#compute_header_dependencies for (self: MModule, HeaderDependancyPhase) */
void nitc__header_dependency___MModule___compute_header_dependencies(val* self, val* p0) {
val* var_v /* var v: HeaderDependancyPhase */;
val* var /* : nullable HashSet[MModule] */;
val* var2 /* : nullable HashSet[MModule] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : HashSet[MModule] */;
val* var_header_dependencies /* var header_dependencies: HashSet[MModule] */;
val* var9 /* : POSetElement[MModule] */;
val* var11 /* : POSetElement[MModule] */;
val* var12 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[MModule] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var17 /* : nullable HashSet[MModule] */;
val* var19 /* : nullable HashSet[MModule] */;
val* var_hd /* var hd: nullable HashSet[MModule] */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : ToolContext */;
val* var29 /* : ToolContext */;
val* var30 /* : ModelBuilder */;
val* var31 /* : nullable AModule */;
val* var_amodule /* var amodule: nullable AModule */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var_38 /* var : Bool */;
short int var39 /* : Bool */;
var_v = p0;
{
{ /* Inline header_dependency#MModule#header_dependencies (self) on <self:MModule> */
var2 = self->attrs[COLOR_nitc__header_dependency__MModule___header_dependencies].val; /* _header_dependencies on <self:MModule> */
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
{ /* Inline kernel#Object#!= (var,((val*)NULL)) on <var:nullable HashSet[MModule]> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable HashSet[MModule](HashSet[MModule])>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
var8 = NEW_core__HashSet(&type_core__HashSet__nitc__MModule);
{
core___core__HashSet___core__kernel__Object__init(var8); /* Direct call hash_collection#HashSet#init on <var8:HashSet[MModule]>*/
}
var_header_dependencies = var8;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var11 = self->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = poset___poset__POSetElement___direct_greaters(var9);
}
var_ = var12;
{
var13 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[MModule]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[MModule]>*/
}
var_m = var16;
{
nitc__header_dependency___MModule___compute_header_dependencies(var_m, var_v); /* Direct call header_dependency#MModule#compute_header_dependencies on <var_m:MModule>*/
}
{
{ /* Inline header_dependency#MModule#header_dependencies (var_m) on <var_m:MModule> */
var19 = var_m->attrs[COLOR_nitc__header_dependency__MModule___header_dependencies].val; /* _header_dependencies on <var_m:MModule> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_hd = var17;
if (var_hd == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_hd,((val*)NULL)) on <var_hd:nullable HashSet[MModule]> */
var_other = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var_other); /* == on <var_hd:nullable HashSet[MModule](HashSet[MModule])>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__header_dependency, 51);
fatal_exit(1);
}
{
var25 = core___core__HashSet___core__abstract_collection__Collection__is_empty(var_hd);
}
var26 = !var25;
if (var26){
{
core___core__SimpleCollection___add_all(var_header_dependencies, var_hd); /* Direct call abstract_collection#SimpleCollection#add_all on <var_header_dependencies:HashSet[MModule]>*/
}
} else {
}
{
{ /* Inline phase#Phase#toolcontext (var_v) on <var_v:HeaderDependancyPhase> */
var29 = var_v->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_v:HeaderDependancyPhase> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc__modelbuilder_base___ToolContext___modelbuilder(var27);
}
{
var31 = nitc__loader___ModelBuilder___mmodule2node(var30, var_m);
}
var_amodule = var31;
if (var_amodule == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_amodule,((val*)NULL)) on <var_amodule:nullable AModule> */
var_other = ((val*)NULL);
{
var36 = ((short int(*)(val* self, val* p0))(var_amodule->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_amodule, var_other); /* == on <var_amodule:nullable AModule(AModule)>*/
}
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
var_38 = var33;
if (var33){
{
var39 = nitc__header_dependency___AModule___has_public_c_header(var_amodule);
}
var32 = var39;
} else {
var32 = var_38;
}
if (var32){
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_header_dependencies, var_m); /* Direct call hash_collection#HashSet#add on <var_header_dependencies:HashSet[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[MModule]>*/
}
{
{ /* Inline header_dependency#MModule#header_dependencies= (self,var_header_dependencies) on <self:MModule> */
self->attrs[COLOR_nitc__header_dependency__MModule___header_dependencies].val = var_header_dependencies; /* _header_dependencies on <self:MModule> */
RET_LABEL40:(void)0;
}
}
RET_LABEL:;
}
/* method header_dependency#HeaderDependancyPhase#process_nmodule for (self: HeaderDependancyPhase, AModule) */
void nitc__header_dependency___nitc__header_dependency__HeaderDependancyPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
var_nmodule = p0;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mmodule = var;
if (var_mmodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__header_dependency, 71);
fatal_exit(1);
} else {
nitc__header_dependency___MModule___compute_header_dependencies(var_mmodule, self); /* Direct call header_dependency#MModule#compute_header_dependencies on <var_mmodule:nullable MModule>*/
}
RET_LABEL:;
}
