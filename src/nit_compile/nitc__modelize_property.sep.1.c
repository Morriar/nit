#include "nitc__modelize_property.sep.0.h"
/* method modelize_property#ToolContext#modelize_property_phase for (self: ToolContext): Phase */
val* nitc__modelize_property___ToolContext___modelize_property_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelizePropertyPhase#process_nmodule for (self: ModelizePropertyPhase, AModule) */
void nitc__modelize_property___nitc__modelize_property__ModelizePropertyPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ANodes[AClassdef] */;
val* var2 /* : ANodes[AClassdef] */;
val* var_ /* var : ANodes[AClassdef] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AClassdef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var7 /* : nullable Array[AClassdef] */;
val* var9 /* : nullable Array[AClassdef] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var13 /* : ToolContext */;
val* var15 /* : ToolContext */;
val* var16 /* : ModelBuilder */;
var_nmodule = p0;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
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
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AClassdef]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AClassdef]>*/
}
var_nclassdef = var6;
{
{ /* Inline modelize_class#AClassdef#all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var9 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = core___core__Array___core__kernel__Object___61d_61d(var7, ((val*)NULL));
var10 = var11;
}
if (var10){
goto BREAK_label12;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ModelizePropertyPhase> */
var15 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ModelizePropertyPhase> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__modelbuilder_base___ToolContext___modelbuilder(var13);
}
{
nitc__modelize_property___ModelBuilder___build_properties(var16, var_nclassdef); /* Direct call modelize_property#ModelBuilder#build_properties on <var16:ModelBuilder>*/
}
BREAK_label12: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AClassdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AClassdef]>*/
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#mpropdef2npropdef for (self: ModelBuilder): HashMap[MPropDef, APropdef] */
val* nitc__modelize_property___ModelBuilder___mpropdef2npropdef(val* self) {
val* var /* : HashMap[MPropDef, APropdef] */;
val* var1 /* : HashMap[MPropDef, APropdef] */;
var1 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#mpropdef2node for (self: ModelBuilder, MPropDef): nullable ANode */
val* nitc__modelize_property___ModelBuilder___mpropdef2node(val* self, val* p0) {
val* var /* : nullable ANode */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var1 /* : HashMap[MPropDef, APropdef] */;
val* var3 /* : HashMap[MPropDef, APropdef] */;
val* var4 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ToolContext */;
val* var12 /* : ToolContext */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var15 /* : MProperty */;
val* var17 /* : MProperty */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : HashMap[MClassDef, AClassdef] */;
val* var23 /* : HashMap[MClassDef, AClassdef] */;
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
var_mpropdef = p0;
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, var_mpropdef);
}
var_res = var4;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable Object(nullable APropdef)> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable APropdef(APropdef)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var12 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
nitc__phase___ToolContext___run_phases_on_npropdef(var10, var_res); /* Direct call phase#ToolContext#run_phases_on_npropdef on <var10:ToolContext>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var14 = 0;
} else {
var14 = var_mpropdef->type->type_table[cltype] == idtype;
}
var_ = var14;
if (var14){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var17 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef(MMethodDef)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var15) on <var15:MProperty(MMethod)> */
var20 = var15->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var15:MProperty(MMethod)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var13 = var18;
} else {
var13 = var_;
}
if (var13){
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var23 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 448);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef(MMethodDef)> */
var26 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef(MMethodDef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var21, var24);
}
var_res = var27;
if (var_res == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable Object(nullable AClassdef)> */
var_other = ((val*)NULL);
{
var31 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable AClassdef(AClassdef)>*/
}
var32 = !var31;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#collect_attr_propdef for (self: ModelBuilder, MClassDef): Array[AAttrPropdef] */
val* nitc__modelize_property___ModelBuilder___collect_attr_propdef(val* self, val* p0) {
val* var /* : Array[AAttrPropdef] */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : Array[AAttrPropdef] */;
val* var_res /* var res: Array[AAttrPropdef] */;
val* var2 /* : HashMap[MClassDef, AClassdef] */;
val* var4 /* : HashMap[MClassDef, AClassdef] */;
val* var5 /* : nullable Object */;
val* var_n /* var n: nullable AClassdef */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ANodes[APropdef] */;
val* var14 /* : ANodes[APropdef] */;
val* var_ /* var : ANodes[APropdef] */;
val* var15 /* : Iterator[ANode] */;
val* var_16 /* var : Iterator[APropdef] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var19 /* : Bool */;
int cltype;
int idtype;
val* var20 /* : ToolContext */;
val* var22 /* : ToolContext */;
var_mclassdef = p0;
var1 = NEW_core__Array(&type_core__Array__nitc__AAttrPropdef);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[AAttrPropdef]>*/
}
var_res = var1;
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var4 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 448);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var2, var_mclassdef);
}
var_n = var5;
if (var_n == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_n,((val*)NULL)) on <var_n:nullable AClassdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_n,var_other) on <var_n:nullable AClassdef(AClassdef)> */
var11 = var_n == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_n) on <var_n:nullable AClassdef(AClassdef)> */
var14 = var_n->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_n:nullable AClassdef(AClassdef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ = var12;
{
var15 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:Iterator[APropdef]>*/
}
if (var17){
} else {
goto BREAK_label;
}
{
var18 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:Iterator[APropdef]>*/
}
var_npropdef = var18;
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype = type_nitc__AAttrPropdef.color;
idtype = type_nitc__AAttrPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var19 = 0;
} else {
var19 = var_npropdef->type->type_table[cltype] == idtype;
}
if (var19){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var22 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nitc__phase___ToolContext___run_phases_on_npropdef(var20, var_npropdef); /* Direct call phase#ToolContext#run_phases_on_npropdef on <var20:ToolContext>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_npropdef); /* Direct call array#Array#add on <var_res:Array[AAttrPropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:Iterator[APropdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:Iterator[APropdef]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#build_properties for (self: ModelBuilder, AClassdef) */
void nitc__modelize_property___ModelBuilder___build_properties(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var4 /* : nullable MClassDef */;
val* var6 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable POSetElement[MClassDef] */;
val* var15 /* : nullable POSetElement[MClassDef] */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable POSetElement[MClassDef] */;
val* var24 /* : nullable POSetElement[MClassDef] */;
val* var25 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MClassDef] */;
val* var26 /* : Iterator[nullable Object] */;
val* var_27 /* var : Iterator[MClassDef] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_superclassdef /* var superclassdef: MClassDef */;
val* var30 /* : HashMap[MClassDef, AClassdef] */;
val* var32 /* : HashMap[MClassDef, AClassdef] */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var36 /* : HashMap[MClassDef, AClassdef] */;
val* var38 /* : HashMap[MClassDef, AClassdef] */;
val* var39 /* : nullable Object */;
val* var40 /* : nullable Array[AClassdef] */;
val* var42 /* : nullable Array[AClassdef] */;
val* var_43 /* var : nullable Array[AClassdef] */;
val* var44 /* : IndexedIterator[nullable Object] */;
val* var_45 /* var : IndexedIterator[AClassdef] */;
short int var46 /* : Bool */;
val* var48 /* : nullable Object */;
val* var_nclassdef2 /* var nclassdef2: AClassdef */;
val* var49 /* : ANodes[APropdef] */;
val* var51 /* : ANodes[APropdef] */;
val* var_52 /* var : ANodes[APropdef] */;
val* var53 /* : Iterator[ANode] */;
val* var_54 /* var : Iterator[APropdef] */;
short int var55 /* : Bool */;
val* var57 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var58 /* : ANodes[APropdef] */;
val* var60 /* : ANodes[APropdef] */;
val* var_61 /* var : ANodes[APropdef] */;
val* var62 /* : Iterator[ANode] */;
val* var_63 /* var : Iterator[APropdef] */;
short int var64 /* : Bool */;
val* var66 /* : nullable Object */;
val* var_npropdef67 /* var npropdef: APropdef */;
val* var68 /* : ANodes[APropdef] */;
val* var70 /* : ANodes[APropdef] */;
val* var_71 /* var : ANodes[APropdef] */;
val* var72 /* : Iterator[ANode] */;
val* var_73 /* var : Iterator[APropdef] */;
short int var74 /* : Bool */;
val* var76 /* : nullable Object */;
val* var_npropdef77 /* var npropdef: APropdef */;
short int var78 /* : Bool */;
int cltype;
int idtype;
short int var79 /* : Bool */;
val* var81 /* : nullable MPropDef */;
val* var83 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
val* var90 /* : nullable MType */;
val* var92 /* : nullable MType */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : MProperty */;
val* var101 /* : MProperty */;
val* var102 /* : MClassType */;
val* var104 /* : MClassType */;
val* var105 /* : MModule */;
val* var107 /* : MModule */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
val* var111 /* : MErrorType */;
val* var112 /* : MModule */;
val* var114 /* : MModule */;
val* var115 /* : Model */;
val* var117 /* : Model */;
val* var119 /* : ANodes[APropdef] */;
val* var121 /* : ANodes[APropdef] */;
val* var_122 /* var : ANodes[APropdef] */;
val* var123 /* : Iterator[ANode] */;
val* var_124 /* var : Iterator[APropdef] */;
short int var125 /* : Bool */;
val* var127 /* : nullable Object */;
val* var_npropdef128 /* var npropdef: APropdef */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
short int var132 /* : Bool */;
val* var134 /* : ANodes[APropdef] */;
val* var136 /* : ANodes[APropdef] */;
val* var_137 /* var : ANodes[APropdef] */;
val* var138 /* : Iterator[ANode] */;
val* var_139 /* var : Iterator[APropdef] */;
short int var140 /* : Bool */;
val* var142 /* : nullable Object */;
val* var_npropdef143 /* var npropdef: APropdef */;
short int var144 /* : Bool */;
int cltype145;
int idtype146;
var_nclassdef = p0;
{
{ /* Inline modelize_property#AClassdef#build_properties_is_done (var_nclassdef) on <var_nclassdef:AClassdef> */
var2 = var_nclassdef->attrs[COLOR_nitc__modelize_property__AClassdef___build_properties_is_done].s; /* _build_properties_is_done on <var_nclassdef:AClassdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AClassdef#build_properties_is_done= (var_nclassdef,1) on <var_nclassdef:AClassdef> */
var_nclassdef->attrs[COLOR_nitc__modelize_property__AClassdef___build_properties_is_done].s = 1; /* _build_properties_is_done on <var_nclassdef:AClassdef> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var6 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mclassdef = var4;
if (var_mclassdef == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclassdef,var_other) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var12 = var_mclassdef == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var15 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:nullable MClassDef(MClassDef)> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var13,((val*)NULL)) on <var13:nullable POSetElement[MClassDef]> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var13,var_other) on <var13:nullable POSetElement[MClassDef](POSetElement[MClassDef])> */
var21 = var13 == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#in_hierarchy (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var24 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___in_hierarchy].val; /* _in_hierarchy on <var_mclassdef:nullable MClassDef(MClassDef)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 91);
fatal_exit(1);
} else {
var25 = poset___poset__POSetElement___direct_greaters(var22);
}
var_ = var25;
{
var26 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MClassDef]>*/
}
var_27 = var26;
for(;;) {
{
var28 = ((short int(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_27); /* is_ok on <var_27:Iterator[MClassDef]>*/
}
if (var28){
} else {
goto BREAK_label;
}
{
var29 = ((val*(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_27); /* item on <var_27:Iterator[MClassDef]>*/
}
var_superclassdef = var29;
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var32 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 448);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var30, var_superclassdef);
}
var34 = !var33;
if (var34){
goto BREAK_label35;
} else {
}
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (self) on <self:ModelBuilder> */
var38 = self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <self:ModelBuilder> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 448);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var36, var_superclassdef);
}
{
nitc__modelize_property___ModelBuilder___build_properties(self, var39); /* Direct call modelize_property#ModelBuilder#build_properties on <self:ModelBuilder>*/
}
BREAK_label35: (void)0;
{
((void(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_27); /* next on <var_27:Iterator[MClassDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_27); /* finish on <var_27:Iterator[MClassDef]>*/
}
{
nitc__modelize_property___MClassDef___build_self_type(var_mclassdef, self, var_nclassdef); /* Direct call modelize_property#MClassDef#build_self_type on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
{
{ /* Inline modelize_class#AClassdef#all_defs (var_nclassdef) on <var_nclassdef:AClassdef> */
var42 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___all_defs].val; /* _all_defs on <var_nclassdef:AClassdef> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_43 = var40;
if (var_43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 97);
fatal_exit(1);
} else {
var44 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_43);
}
var_45 = var44;
for(;;) {
{
var46 = ((short int(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_45); /* is_ok on <var_45:IndexedIterator[AClassdef]>*/
}
if (var46){
} else {
goto BREAK_label47;
}
{
var48 = ((val*(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_45); /* item on <var_45:IndexedIterator[AClassdef]>*/
}
var_nclassdef2 = var48;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var51 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_52 = var49;
{
var53 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_52);
}
var_54 = var53;
for(;;) {
{
var55 = ((short int(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_54); /* is_ok on <var_54:Iterator[APropdef]>*/
}
if (var55){
} else {
goto BREAK_label56;
}
{
var57 = ((val*(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_54); /* item on <var_54:Iterator[APropdef]>*/
}
var_npropdef = var57;
{
((void(*)(val* self, val* p0, val* p1))(var_npropdef->class->vft[COLOR_nitc__modelize_property__APropdef__build_property]))(var_npropdef, self, var_mclassdef); /* build_property on <var_npropdef:APropdef>*/
}
{
((void(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_54); /* next on <var_54:Iterator[APropdef]>*/
}
}
BREAK_label56: (void)0;
{
((void(*)(val* self))((((long)var_54&3)?class_info[((long)var_54&3)]:var_54->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_54); /* finish on <var_54:Iterator[APropdef]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var60 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
var_61 = var58;
{
var62 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_61);
}
var_63 = var62;
for(;;) {
{
var64 = ((short int(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_63); /* is_ok on <var_63:Iterator[APropdef]>*/
}
if (var64){
} else {
goto BREAK_label65;
}
{
var66 = ((val*(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_63); /* item on <var_63:Iterator[APropdef]>*/
}
var_npropdef67 = var66;
{
((void(*)(val* self, val* p0))(var_npropdef67->class->vft[COLOR_nitc__modelize_property__APropdef__build_signature]))(var_npropdef67, self); /* build_signature on <var_npropdef67:APropdef>*/
}
{
((void(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_63); /* next on <var_63:Iterator[APropdef]>*/
}
}
BREAK_label65: (void)0;
{
((void(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_63); /* finish on <var_63:Iterator[APropdef]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var70 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_71 = var68;
{
var72 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_71);
}
var_73 = var72;
for(;;) {
{
var74 = ((short int(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_73); /* is_ok on <var_73:Iterator[APropdef]>*/
}
if (var74){
} else {
goto BREAK_label75;
}
{
var76 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_73); /* item on <var_73:Iterator[APropdef]>*/
}
var_npropdef77 = var76;
/* <var_npropdef77:APropdef> isa ATypePropdef */
cltype = type_nitc__ATypePropdef.color;
idtype = type_nitc__ATypePropdef.id;
if(cltype >= var_npropdef77->type->table_size) {
var78 = 0;
} else {
var78 = var_npropdef77->type->type_table[cltype] == idtype;
}
var79 = !var78;
if (var79){
goto BREAK_label80;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef77) on <var_npropdef77:APropdef(ATypePropdef)> */
var83 = var_npropdef77->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef77:APropdef(ATypePropdef)> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
var_mpropdef = var81;
if (var_mpropdef == NULL) {
var84 = 1; /* is null */
} else {
var84 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var89 = var_mpropdef == var_other;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
if (var84){
goto BREAK_label80;
} else {
}
{
{ /* Inline model#MVirtualTypeDef#bound (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var92 = var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (var90 == NULL) {
var93 = 1; /* is null */
} else {
var93 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var90,((val*)NULL)) on <var90:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var90,var_other) on <var90:nullable MType(MType)> */
var98 = var90 == var_other;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
if (var93){
goto BREAK_label80;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var101 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var104 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var107 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = nitc__modelize_property___ModelBuilder___check_virtual_types_circularity(self, var_npropdef77, var99, var102, var105);
}
var109 = !var108;
if (var109){
{
{ /* Inline model_base#MEntity#is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL110:(void)0;
}
}
var111 = NEW_nitc__MErrorType(&type_nitc__MErrorType);
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var114 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var112) on <var112:MModule> */
var117 = var112->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var112:MModule> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_nitc__model__MErrorType__model_61d]))(var111, var115); /* model= on <var111:MErrorType>*/
}
{
((void(*)(val* self))(var111->class->vft[COLOR_core__kernel__Object__init]))(var111); /* init on <var111:MErrorType>*/
}
{
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,var111) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val = var111; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL118:(void)0;
}
}
} else {
}
BREAK_label80: (void)0;
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_73); /* next on <var_73:Iterator[APropdef]>*/
}
}
BREAK_label75: (void)0;
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_73); /* finish on <var_73:Iterator[APropdef]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var121 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
var_122 = var119;
{
var123 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_122);
}
var_124 = var123;
for(;;) {
{
var125 = ((short int(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_124); /* is_ok on <var_124:Iterator[APropdef]>*/
}
if (var125){
} else {
goto BREAK_label126;
}
{
var127 = ((val*(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_124); /* item on <var_124:Iterator[APropdef]>*/
}
var_npropdef128 = var127;
/* <var_npropdef128:APropdef> isa ATypePropdef */
cltype130 = type_nitc__ATypePropdef.color;
idtype131 = type_nitc__ATypePropdef.id;
if(cltype130 >= var_npropdef128->type->table_size) {
var129 = 0;
} else {
var129 = var_npropdef128->type->type_table[cltype130] == idtype131;
}
var132 = !var129;
if (var132){
goto BREAK_label133;
} else {
}
{
nitc__modelize_property___ATypePropdef___APropdef__check_signature(var_npropdef128, self); /* Direct call modelize_property#ATypePropdef#check_signature on <var_npropdef128:APropdef(ATypePropdef)>*/
}
BREAK_label133: (void)0;
{
((void(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_124); /* next on <var_124:Iterator[APropdef]>*/
}
}
BREAK_label126: (void)0;
{
((void(*)(val* self))((((long)var_124&3)?class_info[((long)var_124&3)]:var_124->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_124); /* finish on <var_124:Iterator[APropdef]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef2) on <var_nclassdef2:AClassdef> */
var136 = var_nclassdef2->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef2:AClassdef> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_137 = var134;
{
var138 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_137);
}
var_139 = var138;
for(;;) {
{
var140 = ((short int(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_139); /* is_ok on <var_139:Iterator[APropdef]>*/
}
if (var140){
} else {
goto BREAK_label141;
}
{
var142 = ((val*(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_139); /* item on <var_139:Iterator[APropdef]>*/
}
var_npropdef143 = var142;
/* <var_npropdef143:APropdef> isa ATypePropdef */
cltype145 = type_nitc__ATypePropdef.color;
idtype146 = type_nitc__ATypePropdef.id;
if(cltype145 >= var_npropdef143->type->table_size) {
var144 = 0;
} else {
var144 = var_npropdef143->type->type_table[cltype145] == idtype146;
}
if (var144){
goto BREAK_label147;
} else {
}
{
((void(*)(val* self, val* p0))(var_npropdef143->class->vft[COLOR_nitc__modelize_property__APropdef__check_signature]))(var_npropdef143, self); /* check_signature on <var_npropdef143:APropdef>*/
}
BREAK_label147: (void)0;
{
((void(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_139); /* next on <var_139:Iterator[APropdef]>*/
}
}
BREAK_label141: (void)0;
{
((void(*)(val* self))((((long)var_139&3)?class_info[((long)var_139&3)]:var_139->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_139); /* finish on <var_139:Iterator[APropdef]>*/
}
{
((void(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_45); /* next on <var_45:IndexedIterator[AClassdef]>*/
}
}
BREAK_label47: (void)0;
{
((void(*)(val* self))((((long)var_45&3)?class_info[((long)var_45&3)]:var_45->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_45); /* finish on <var_45:IndexedIterator[AClassdef]>*/
}
{
nitc__modelize_property___ModelBuilder___process_default_constructors(self, var_nclassdef); /* Direct call modelize_property#ModelBuilder#process_default_constructors on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#the_root_init_mmethod for (self: ModelBuilder): nullable MMethod */
val* nitc__modelize_property___ModelBuilder___the_root_init_mmethod(val* self) {
val* var /* : nullable MMethod */;
val* var1 /* : nullable MMethod */;
var1 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ModelBuilder#the_root_init_mmethod= for (self: ModelBuilder, nullable MMethod) */
void nitc__modelize_property___ModelBuilder___the_root_init_mmethod_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val = p0; /* _the_root_init_mmethod on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#process_default_constructors for (self: ModelBuilder, AClassdef) */
void nitc__modelize_property___ModelBuilder___process_default_constructors(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MClassDef */;
val* var2 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MClass */;
val* var8 /* : MClass */;
val* var9 /* : String */;
val* var11 /* : String */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
val* var16 /* : nullable MMethod */;
val* var18 /* : nullable MMethod */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : MMethod */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : Location */;
val* var32 /* : Location */;
val* var33 /* : MClass */;
val* var35 /* : MClass */;
val* var36 /* : MVisibility */;
val* var38 /* : MVisibility */;
val* var_mprop /* var mprop: MMethod */;
val* var40 /* : MMethodDef */;
val* var41 /* : Location */;
val* var43 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var44 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var45 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var49 /* : ToolContext */;
val* var51 /* : ToolContext */;
val* var53 /* : NativeArray[String] */;
static val* varonce52;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : String */;
val* var_defined_init /* var defined_init: nullable MMethodDef */;
val* var63 /* : Array[MPropDef] */;
val* var65 /* : Array[MPropDef] */;
val* var_66 /* var : Array[MPropDef] */;
val* var67 /* : IndexedIterator[nullable Object] */;
val* var_68 /* var : IndexedIterator[MPropDef] */;
short int var69 /* : Bool */;
val* var70 /* : nullable Object */;
val* var_mpropdef71 /* var mpropdef: MPropDef */;
short int var72 /* : Bool */;
int cltype;
int idtype;
short int var73 /* : Bool */;
val* var75 /* : MProperty */;
val* var77 /* : MProperty */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : MProperty */;
val* var84 /* : MProperty */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : MProperty */;
val* var96 /* : MProperty */;
val* var97 /* : String */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
short int var108 /* : Bool */;
val* var109 /* : Array[MParameter] */;
val* var_mparameters110 /* var mparameters: Array[MParameter] */;
val* var111 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
val* var112 /* : ANodes[APropdef] */;
val* var114 /* : ANodes[APropdef] */;
val* var_115 /* var : ANodes[APropdef] */;
val* var116 /* : Iterator[ANode] */;
val* var_117 /* var : Iterator[APropdef] */;
short int var118 /* : Bool */;
val* var120 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
val* var129 /* : nullable MPropDef */;
val* var131 /* : nullable MPropDef */;
val* var_mpropdef132 /* var mpropdef: nullable MMethodDef */;
short int var133 /* : Bool */;
short int var134 /* : Bool */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
val* var139 /* : nullable MSignature */;
val* var141 /* : nullable MSignature */;
val* var_sig /* var sig: nullable MSignature */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
val* var148 /* : Array[MParameter] */;
val* var150 /* : Array[MParameter] */;
val* var151 /* : MProperty */;
val* var153 /* : MProperty */;
val* var154 /* : MProperty */;
val* var156 /* : MProperty */;
short int var158 /* : Bool */;
int cltype159;
int idtype160;
val* var161 /* : nullable MMethodDef */;
val* var163 /* : nullable MMethodDef */;
val* var_mreadpropdef /* var mreadpropdef: nullable MMethodDef */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
val* var170 /* : nullable MSignature */;
val* var172 /* : nullable MSignature */;
val* var_msignature173 /* var msignature: nullable MSignature */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
short int var177 /* : Bool */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
short int var182 /* : Bool */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : CString */;
val* var186 /* : String */;
val* var187 /* : nullable AAnnotation */;
val* var_atlateinit /* var atlateinit: nullable AAnnotation */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
val* var_other191 /* var other: nullable Object */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
val* var194 /* : MProperty */;
val* var196 /* : MProperty */;
val* var197 /* : MProperty */;
val* var199 /* : MProperty */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
short int var204 /* : Bool */;
short int var_205 /* var : Bool */;
short int var206 /* : Bool */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
val* var210 /* : nullable MMethodDef */;
val* var212 /* : nullable MMethodDef */;
val* var_msetter /* var msetter: nullable MMethodDef */;
short int var213 /* : Bool */;
short int var214 /* : Bool */;
short int var216 /* : Bool */;
short int var218 /* : Bool */;
val* var219 /* : MProperty */;
val* var221 /* : MProperty */;
val* var222 /* : String */;
val* var224 /* : String */;
val* var_paramname /* var paramname: String */;
val* var225 /* : nullable MType */;
val* var227 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var228 /* : Bool */;
short int var229 /* : Bool */;
short int var231 /* : Bool */;
short int var233 /* : Bool */;
val* var234 /* : MParameter */;
val* var_mparameter /* var mparameter: MParameter */;
val* var235 /* : nullable MPropDef */;
val* var237 /* : nullable MPropDef */;
val* var238 /* : MProperty */;
val* var240 /* : MProperty */;
val* var241 /* : nullable MPropDef */;
val* var243 /* : nullable MPropDef */;
val* var244 /* : MProperty */;
val* var246 /* : MProperty */;
val* var248 /* : nullable MSignature */;
val* var250 /* : nullable MSignature */;
val* var251 /* : Array[MParameter] */;
val* var253 /* : Array[MParameter] */;
val* var254 /* : MProperty */;
val* var256 /* : MProperty */;
val* var257 /* : MProperty */;
val* var259 /* : MProperty */;
val* var261 /* : nullable MMethod */;
val* var263 /* : nullable MMethod */;
val* var_the_root_init_mmethod /* var the_root_init_mmethod: nullable MMethod */;
short int var264 /* : Bool */;
short int var265 /* : Bool */;
short int var267 /* : Bool */;
short int var269 /* : Bool */;
val* var270 /* : MModule */;
val* var272 /* : MModule */;
val* var273 /* : MClassType */;
val* var275 /* : MClassType */;
val* var276 /* : Array[MPropDef] */;
val* var_spropdefs /* var spropdefs: Array[MMethodDef] */;
short int var277 /* : Bool */;
val* var278 /* : ToolContext */;
val* var280 /* : ToolContext */;
val* var281 /* : Location */;
val* var283 /* : Location */;
val* var285 /* : NativeArray[String] */;
static val* varonce284;
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
val* var298 /* : String */;
val* var299 /* : MClassDef */;
val* var301 /* : MClassDef */;
val* var302 /* : String */;
val* var303 /* : String */;
val* var304 /* : Message */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : CString */;
val* var308 /* : String */;
val* var309 /* : nullable AAnnotation */;
val* var_autoinit /* var autoinit: nullable AAnnotation */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : CString */;
val* var313 /* : String */;
val* var314 /* : nullable AAnnotation */;
val* var_noautoinit /* var noautoinit: nullable AAnnotation */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
short int var318 /* : Bool */;
short int var319 /* : Bool */;
short int var320 /* : Bool */;
short int var321 /* : Bool */;
short int var323 /* : Bool */;
short int var324 /* : Bool */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : CString */;
val* var328 /* : String */;
val* var329 /* : ANodes[AExpr] */;
val* var331 /* : ANodes[AExpr] */;
short int var332 /* : Bool */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : CString */;
val* var336 /* : String */;
val* var337 /* : ANodes[AExpr] */;
val* var339 /* : ANodes[AExpr] */;
val* var_340 /* var : ANodes[AExpr] */;
val* var341 /* : Iterator[ANode] */;
val* var_342 /* var : Iterator[AExpr] */;
short int var343 /* : Bool */;
val* var345 /* : nullable Object */;
val* var_narg /* var narg: AExpr */;
val* var346 /* : nullable String */;
val* var_id /* var id: nullable String */;
short int var347 /* : Bool */;
short int var348 /* : Bool */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : CString */;
val* var352 /* : String */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : CString */;
val* var356 /* : String */;
val* var357 /* : Text */;
val* var358 /* : nullable MProperty */;
val* var_p /* var p: nullable MProperty */;
short int var359 /* : Bool */;
short int var360 /* : Bool */;
short int var362 /* : Bool */;
short int var364 /* : Bool */;
val* var365 /* : nullable MProperty */;
short int var366 /* : Bool */;
short int var367 /* : Bool */;
short int var369 /* : Bool */;
short int var371 /* : Bool */;
val* var373 /* : NativeArray[String] */;
static val* varonce372;
static val* varonce374;
val* var375 /* : String */;
char* var376 /* : CString */;
val* var377 /* : String */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : CString */;
val* var381 /* : String */;
val* var382 /* : String */;
short int var383 /* : Bool */;
short int var385 /* : Bool */;
short int var386 /* : Bool */;
val* var388 /* : NativeArray[String] */;
static val* varonce387;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : CString */;
val* var392 /* : String */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : CString */;
val* var396 /* : String */;
val* var397 /* : String */;
val* var398 /* : String */;
val* var399 /* : MPropDef */;
val* var401 /* : MPropDef */;
val* var_pd /* var pd: MPropDef */;
short int var402 /* : Bool */;
int cltype403;
int idtype404;
val* var405 /* : nullable MSignature */;
val* var407 /* : nullable MSignature */;
val* var408 /* : MClass */;
val* var410 /* : MClass */;
val* var411 /* : MClassType */;
val* var413 /* : MClassType */;
val* var414 /* : MClassType */;
val* var416 /* : MClassType */;
val* var417 /* : MModule */;
val* var419 /* : MModule */;
val* var420 /* : MSignature */;
val* var_sig421 /* var sig: MSignature */;
val* var422 /* : Array[MParameter] */;
val* var424 /* : Array[MParameter] */;
val* var425 /* : nullable Object */;
val* var_longest /* var longest: MMethodDef */;
long var426 /* : Int */;
long var428 /* : Int */;
short int var429 /* : Bool */;
short int var431 /* : Bool */;
int cltype432;
int idtype433;
const char* var_class_name;
short int var434 /* : Bool */;
val* var_435 /* var : Array[MMethodDef] */;
val* var436 /* : IndexedIterator[nullable Object] */;
val* var_437 /* var : IndexedIterator[MMethodDef] */;
short int var438 /* : Bool */;
val* var440 /* : nullable Object */;
val* var_spd /* var spd: MMethodDef */;
val* var441 /* : Array[MProperty] */;
val* var443 /* : Array[MProperty] */;
long var444 /* : Int */;
long var446 /* : Int */;
val* var447 /* : Array[MProperty] */;
val* var449 /* : Array[MProperty] */;
long var450 /* : Int */;
long var452 /* : Int */;
short int var453 /* : Bool */;
short int var455 /* : Bool */;
int cltype456;
int idtype457;
const char* var_class_name458;
short int var459 /* : Bool */;
short int var460 /* : Bool */;
short int var461 /* : Bool */;
short int var463 /* : Bool */;
short int var465 /* : Bool */;
val* var_466 /* var : Array[MMethodDef] */;
val* var467 /* : IndexedIterator[nullable Object] */;
val* var_468 /* var : IndexedIterator[MMethodDef] */;
short int var469 /* : Bool */;
val* var471 /* : nullable Object */;
val* var_spd472 /* var spd: MMethodDef */;
long var_i /* var i: Int */;
val* var473 /* : Array[MProperty] */;
val* var475 /* : Array[MProperty] */;
val* var_476 /* var : Array[MProperty] */;
val* var477 /* : IndexedIterator[nullable Object] */;
val* var_478 /* var : IndexedIterator[MProperty] */;
short int var479 /* : Bool */;
val* var481 /* : nullable Object */;
val* var_p482 /* var p: MProperty */;
val* var483 /* : Array[MProperty] */;
val* var485 /* : Array[MProperty] */;
val* var486 /* : nullable Object */;
short int var487 /* : Bool */;
short int var489 /* : Bool */;
short int var490 /* : Bool */;
val* var491 /* : ArraySet[MProperty] */;
val* var_proposal /* var proposal: ArraySet[MProperty] */;
val* var_492 /* var : Array[MMethodDef] */;
val* var493 /* : IndexedIterator[nullable Object] */;
val* var_494 /* var : IndexedIterator[MMethodDef] */;
short int var495 /* : Bool */;
val* var497 /* : nullable Object */;
val* var_spd2 /* var spd2: MMethodDef */;
val* var498 /* : Array[MProperty] */;
val* var500 /* : Array[MProperty] */;
val* var502 /* : NativeArray[String] */;
static val* varonce501;
static val* varonce503;
val* var504 /* : String */;
char* var505 /* : CString */;
val* var506 /* : String */;
static val* varonce507;
val* var508 /* : String */;
char* var509 /* : CString */;
val* var510 /* : String */;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : CString */;
val* var514 /* : String */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : CString */;
val* var518 /* : String */;
static val* varonce519;
val* var520 /* : String */;
char* var521 /* : CString */;
val* var522 /* : String */;
static val* varonce523;
val* var524 /* : String */;
char* var525 /* : CString */;
val* var526 /* : String */;
static val* varonce527;
val* var528 /* : String */;
char* var529 /* : CString */;
val* var530 /* : String */;
val* var531 /* : MClass */;
val* var533 /* : MClass */;
val* var534 /* : String */;
val* var535 /* : String */;
val* var536 /* : Array[MProperty] */;
val* var538 /* : Array[MProperty] */;
static val* varonce539;
val* var540 /* : String */;
char* var541 /* : CString */;
val* var542 /* : String */;
val* var543 /* : String */;
val* var544 /* : String */;
val* var545 /* : Array[MProperty] */;
val* var547 /* : Array[MProperty] */;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : CString */;
val* var551 /* : String */;
val* var552 /* : String */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : CString */;
val* var556 /* : String */;
val* var557 /* : String */;
val* var558 /* : String */;
long var559 /* : Int */;
short int var561 /* : Bool */;
int cltype562;
int idtype563;
const char* var_class_name564;
long var565 /* : Int */;
short int var566 /* : Bool */;
short int var567 /* : Bool */;
short int var569 /* : Bool */;
short int var570 /* : Bool */;
short int var571 /* : Bool */;
short int var572 /* : Bool */;
short int var_573 /* var : Bool */;
val* var574 /* : Array[MProperty] */;
val* var576 /* : Array[MProperty] */;
short int var577 /* : Bool */;
static val* varonce578;
val* var579 /* : String */;
char* var580 /* : CString */;
val* var581 /* : String */;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : CString */;
val* var585 /* : String */;
short int var586 /* : Bool */;
short int var587 /* : Bool */;
long var588 /* : Int */;
long var590 /* : Int */;
short int var591 /* : Bool */;
short int var593 /* : Bool */;
short int var_594 /* var : Bool */;
short int var595 /* : Bool */;
short int var_596 /* var : Bool */;
short int var597 /* : Bool */;
short int var598 /* : Bool */;
short int var600 /* : Bool */;
short int var602 /* : Bool */;
val* var603 /* : ToolContext */;
val* var605 /* : ToolContext */;
val* var607 /* : NativeArray[String] */;
static val* varonce606;
static val* varonce608;
val* var609 /* : String */;
char* var610 /* : CString */;
val* var611 /* : String */;
val* var612 /* : String */;
val* var613 /* : String */;
val* var614 /* : String */;
val* var615 /* : MClass */;
val* var617 /* : MClass */;
val* var619 /* : Array[MProperty] */;
val* var621 /* : Array[MProperty] */;
long var622 /* : Int */;
long var624 /* : Int */;
short int var625 /* : Bool */;
short int var627 /* : Bool */;
int cltype628;
int idtype629;
const char* var_class_name630;
short int var631 /* : Bool */;
val* var632 /* : nullable MSignature */;
val* var634 /* : nullable MSignature */;
val* var635 /* : Array[MParameter] */;
val* var637 /* : Array[MParameter] */;
val* var638 /* : Array[MProperty] */;
val* var640 /* : Array[MProperty] */;
short int var641 /* : Bool */;
short int var642 /* : Bool */;
short int var644 /* : Bool */;
short int var645 /* : Bool */;
val* var646 /* : Array[MProperty] */;
val* var648 /* : Array[MProperty] */;
val* var649 /* : MSignature */;
val* var_msignature650 /* var msignature: MSignature */;
val* var652 /* : ToolContext */;
val* var654 /* : ToolContext */;
val* var656 /* : NativeArray[String] */;
static val* varonce655;
static val* varonce657;
val* var658 /* : String */;
char* var659 /* : CString */;
val* var660 /* : String */;
val* var661 /* : String */;
val* var662 /* : String */;
val* var663 /* : String */;
val* var664 /* : String */;
val* var665 /* : MClass */;
val* var667 /* : MClass */;
val* var_mprop669 /* var mprop: MMethod */;
val* var670 /* : MMethodDef */;
val* var671 /* : Location */;
val* var673 /* : Location */;
val* var_mpropdef674 /* var mpropdef: MMethodDef */;
val* var676 /* : Array[MProperty] */;
val* var678 /* : Array[MProperty] */;
val* var679 /* : MSignature */;
val* var_msignature680 /* var msignature: MSignature */;
val* var682 /* : MSignature */;
val* var683 /* : Array[MParameter] */;
val* var685 /* : ToolContext */;
val* var687 /* : ToolContext */;
val* var689 /* : NativeArray[String] */;
static val* varonce688;
static val* varonce690;
val* var691 /* : String */;
char* var692 /* : CString */;
val* var693 /* : String */;
val* var694 /* : String */;
val* var695 /* : String */;
val* var696 /* : String */;
val* var697 /* : String */;
val* var698 /* : MClass */;
val* var700 /* : MClass */;
var_nclassdef = p0;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var2 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 139);
fatal_exit(1);
}
var_mclassdef = var;
{
var3 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var8 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MClass#name (var6) on <var6:MClass> */
var11 = var6->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var6:MClass> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "Object";
var14 = core__abstract_text___CString___to_s_full(var13, 6l, 6l);
var12 = var14;
varonce = var12;
}
{
var15 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_core__kernel__Object___61d_61d]))(var9, var12); /* == on <var9:String>*/
}
var_ = var15;
if (var15){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var18 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var16,((val*)NULL)) on <var16:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var16,var_other) on <var16:nullable MMethod(MMethod)> */
var24 = var16 == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
var5 = var19;
} else {
var5 = var_;
}
if (var5){
var25 = NEW_nitc__MMethod(&type_nitc__MMethod);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "init";
var29 = core__abstract_text___CString___to_s_full(var28, 4l, 4l);
var27 = var29;
varonce26 = var27;
}
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef> */
var32 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var35 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var33) on <var33:MClass> */
var38 = var33->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var33:MClass> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var25, var_mclassdef); /* intro_mclassdef= on <var25:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var25, var27); /* name= on <var25:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var25, var30); /* location= on <var25:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var25, var36); /* visibility= on <var25:MMethod>*/
}
{
((void(*)(val* self))(var25->class->vft[COLOR_core__kernel__Object__init]))(var25); /* init on <var25:MMethod>*/
}
var_mprop = var25;
{
{ /* Inline model#MMethod#is_root_init= (var_mprop,1) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_root_init].s = 1; /* _is_root_init on <var_mprop:MMethod> */
RET_LABEL39:(void)0;
}
}
var40 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef> */
var43 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var40->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var40, var_mclassdef); /* mclassdef= on <var40:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var40->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var40, var_mprop); /* mproperty= on <var40:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var40->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var40, var41); /* location= on <var40:MMethodDef>*/
}
{
((void(*)(val* self))(var40->class->vft[COLOR_core__kernel__Object__init]))(var40); /* init on <var40:MMethodDef>*/
}
var_mpropdef = var40;
var44 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var44); /* Direct call array#Array#init on <var44:Array[MParameter]>*/
}
var_mparameters = var44;
var45 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var45->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var45, var_mparameters); /* mparameters= on <var45:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var45->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var45, ((val*)NULL)); /* return_mtype= on <var45:MSignature>*/
}
{
((void(*)(val* self))(var45->class->vft[COLOR_core__kernel__Object__init]))(var45); /* init on <var45:MSignature>*/
}
var_msignature = var45;
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,var_msignature) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:MMethodDef> */
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef,var_msignature) on <var_mpropdef:MMethodDef> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = var_msignature; /* _new_msignature on <var_mpropdef:MMethodDef> */
RET_LABEL47:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init= (var_mprop,1) on <var_mprop:MMethod> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_init].s = 1; /* _is_init on <var_mprop:MMethod> */
RET_LABEL48:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var51 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (unlikely(varonce52==NULL)) {
var53 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = " gets a free empty constructor ";
var57 = core__abstract_text___CString___to_s_full(var56, 31l, 31l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[1]=var55;
} else {
var53 = varonce52;
varonce52 = NULL;
}
{
var58 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var53)->values[0]=var58;
{
var59 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var53)->values[2]=var59;
{
var60 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var53)->values[3]=var60;
{
var61 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce52 = var53;
{
nitc___nitc__ToolContext___info(var49, var61, 3l); /* Direct call toolcontext#ToolContext#info on <var49:ToolContext>*/
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod= (self,var_mprop) on <self:ModelBuilder> */
self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val = var_mprop; /* _the_root_init_mmethod on <self:ModelBuilder> */
RET_LABEL62:(void)0;
}
}
goto RET_LABEL;
} else {
}
var_defined_init = ((val*)NULL);
{
{ /* Inline model#MClassDef#mpropdefs (var_mclassdef) on <var_mclassdef:MClassDef> */
var65 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_mclassdef:MClassDef> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 723);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
var_66 = var63;
{
var67 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_66);
}
var_68 = var67;
for(;;) {
{
var69 = ((short int(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_68); /* is_ok on <var_68:IndexedIterator[MPropDef]>*/
}
if (var69){
} else {
goto BREAK_label;
}
{
var70 = ((val*(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_68); /* item on <var_68:IndexedIterator[MPropDef]>*/
}
var_mpropdef71 = var70;
/* <var_mpropdef71:MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(cltype >= var_mpropdef71->type->table_size) {
var72 = 0;
} else {
var72 = var_mpropdef71->type->type_table[cltype] == idtype;
}
var73 = !var72;
if (var73){
goto BREAK_label74;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef71) on <var_mpropdef71:MPropDef(MMethodDef)> */
var77 = var_mpropdef71->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef71:MPropDef(MMethodDef)> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var75) on <var75:MProperty(MMethod)> */
var80 = var75->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var75:MProperty(MMethod)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
var81 = !var78;
if (var81){
goto BREAK_label74;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef71) on <var_mpropdef71:MPropDef(MMethodDef)> */
var84 = var_mpropdef71->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef71:MPropDef(MMethodDef)> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var82) on <var82:MProperty(MMethod)> */
var87 = var82->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var82:MProperty(MMethod)> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (var85){
if (var_defined_init == NULL) {
var88 = 1; /* is null */
} else {
var88 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_defined_init,((val*)NULL)) on <var_defined_init:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_defined_init,var_other) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var93 = var_defined_init == var_other;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
var88 = var89;
}
if (unlikely(!var88)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 166);
fatal_exit(1);
}
var_defined_init = var_mpropdef71;
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef71) on <var_mpropdef71:MPropDef(MMethodDef)> */
var96 = var_mpropdef71->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef71:MPropDef(MMethodDef)> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var94) on <var94:MProperty(MMethod)> */
var99 = var94->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var94:MProperty(MMethod)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "init";
var103 = core__abstract_text___CString___to_s_full(var102, 4l, 4l);
var101 = var103;
varonce100 = var101;
}
{
var104 = ((short int(*)(val* self, val* p0))(var97->class->vft[COLOR_core__kernel__Object___61d_61d]))(var97, var101); /* == on <var97:String>*/
}
if (var104){
goto RET_LABEL;
} else {
}
}
BREAK_label74: (void)0;
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_68); /* next on <var_68:IndexedIterator[MPropDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_68); /* finish on <var_68:IndexedIterator[MPropDef]>*/
}
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype106 = type_nitc__AStdClassdef.color;
idtype107 = type_nitc__AStdClassdef.id;
if(cltype106 >= var_nclassdef->type->table_size) {
var105 = 0;
} else {
var105 = var_nclassdef->type->type_table[cltype106] == idtype107;
}
var108 = !var105;
if (var108){
goto RET_LABEL;
} else {
}
var109 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var109); /* Direct call array#Array#init on <var109:Array[MParameter]>*/
}
var_mparameters110 = var109;
var111 = NEW_core__Array(&type_core__Array__nitc__MProperty);
{
core___core__Array___core__kernel__Object__init(var111); /* Direct call array#Array#init on <var111:Array[MProperty]>*/
}
var_initializers = var111;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var114 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
var_115 = var112;
{
var116 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_115);
}
var_117 = var116;
for(;;) {
{
var118 = ((short int(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_117); /* is_ok on <var_117:Iterator[APropdef]>*/
}
if (var118){
} else {
goto BREAK_label119;
}
{
var120 = ((val*(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_117); /* item on <var_117:Iterator[APropdef]>*/
}
var_npropdef = var120;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype122 = type_nitc__AMethPropdef.color;
idtype123 = type_nitc__AMethPropdef.id;
if(cltype122 >= var_npropdef->type->table_size) {
var121 = 0;
} else {
var121 = var_npropdef->type->type_table[cltype122] == idtype123;
}
if (var121){
{
{ /* Inline modelize_property#AMethPropdef#is_autoinit (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var126 = var_npropdef->attrs[COLOR_nitc__modelize_property__AMethPropdef___is_autoinit].s; /* _is_autoinit on <var_npropdef:APropdef(AMethPropdef)> */
var124 = var126;
RET_LABEL125:(void)0;
}
}
var127 = !var124;
if (var127){
goto BREAK_label128;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var131 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
var_mpropdef132 = var129;
if (var_mpropdef132 == NULL) {
var133 = 1; /* is null */
} else {
var133 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef132,((val*)NULL)) on <var_mpropdef132:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef132,var_other) on <var_mpropdef132:nullable MMethodDef(MMethodDef)> */
var138 = var_mpropdef132 == var_other;
var136 = var138;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
var134 = var136;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
var133 = var134;
}
if (var133){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef132) on <var_mpropdef132:nullable MMethodDef(MMethodDef)> */
var141 = var_mpropdef132->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef132:nullable MMethodDef(MMethodDef)> */
var139 = var141;
RET_LABEL140:(void)0;
}
}
var_sig = var139;
if (var_sig == NULL) {
var142 = 1; /* is null */
} else {
var142 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sig,((val*)NULL)) on <var_sig:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sig,var_other) on <var_sig:nullable MSignature(MSignature)> */
var147 = var_sig == var_other;
var145 = var147;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
var143 = var145;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
var142 = var143;
}
if (var142){
goto BREAK_label128;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_sig) on <var_sig:nullable MSignature(MSignature)> */
var150 = var_sig->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_sig:nullable MSignature(MSignature)> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_mparameters110, var148); /* Direct call array#Array#add_all on <var_mparameters110:Array[MParameter]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef132) on <var_mpropdef132:nullable MMethodDef(MMethodDef)> */
var153 = var_mpropdef132->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef132:nullable MMethodDef(MMethodDef)> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var151); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef132) on <var_mpropdef132:nullable MMethodDef(MMethodDef)> */
var156 = var_mpropdef132->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef132:nullable MMethodDef(MMethodDef)> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline model#MProperty#is_autoinit= (var154,1) on <var154:MProperty(MMethod)> */
var154->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var154:MProperty(MMethod)> */
RET_LABEL157:(void)0;
}
}
} else {
}
/* <var_npropdef:APropdef> isa AAttrPropdef */
cltype159 = type_nitc__AAttrPropdef.color;
idtype160 = type_nitc__AAttrPropdef.id;
if(cltype159 >= var_npropdef->type->table_size) {
var158 = 0;
} else {
var158 = var_npropdef->type->type_table[cltype159] == idtype160;
}
if (var158){
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var163 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var161 = var163;
RET_LABEL162:(void)0;
}
}
var_mreadpropdef = var161;
if (var_mreadpropdef == NULL) {
var164 = 1; /* is null */
} else {
var164 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mreadpropdef,((val*)NULL)) on <var_mreadpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mreadpropdef,var_other) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var169 = var_mreadpropdef == var_other;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
var164 = var165;
}
if (var164){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#msignature (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var172 = var_mreadpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var170 = var172;
RET_LABEL171:(void)0;
}
}
var_msignature173 = var170;
if (var_msignature173 == NULL) {
var174 = 1; /* is null */
} else {
var174 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature173,((val*)NULL)) on <var_msignature173:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature173,var_other) on <var_msignature173:nullable MSignature(MSignature)> */
var179 = var_msignature173 == var_other;
var177 = var179;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
}
var175 = var177;
goto RET_LABEL176;
RET_LABEL176:(void)0;
}
var174 = var175;
}
if (var174){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#noinit (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var182 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <var_npropdef:APropdef(AAttrPropdef)> */
var180 = var182;
RET_LABEL181:(void)0;
}
}
if (var180){
goto BREAK_label128;
} else {
}
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "lateinit";
var186 = core__abstract_text___CString___to_s_full(var185, 8l, 8l);
var184 = var186;
varonce183 = var184;
}
{
var187 = nitc__annotation___Prod___get_single_annotation(var_npropdef, var184, self);
}
var_atlateinit = var187;
if (var_atlateinit == NULL) {
var188 = 0; /* is null */
} else {
var188 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other191 = ((val*)NULL);
{
var192 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlateinit, var_other191); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var193 = !var192;
var189 = var193;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
var188 = var189;
}
if (var188){
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var196 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var194); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var199 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var199 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
{
{ /* Inline model#MProperty#is_autoinit= (var197,1) on <var197:MProperty(MMethod)> */
var197->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var197:MProperty(MMethod)> */
RET_LABEL200:(void)0;
}
}
goto BREAK_label128;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var204 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <var_npropdef:APropdef(AAttrPropdef)> */
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_205 = var202;
if (var202){
{
{ /* Inline modelize_property#AAttrPropdef#is_optional (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var208 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s; /* _is_optional on <var_npropdef:APropdef(AAttrPropdef)> */
var206 = var208;
RET_LABEL207:(void)0;
}
}
var209 = !var206;
var201 = var209;
} else {
var201 = var_205;
}
if (var201){
goto BREAK_label128;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var212 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var210 = var212;
RET_LABEL211:(void)0;
}
}
var_msetter = var210;
if (var_msetter == NULL) {
var213 = 1; /* is null */
} else {
var213 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msetter,((val*)NULL)) on <var_msetter:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msetter,var_other) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var218 = var_msetter == var_other;
var216 = var218;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
}
var214 = var216;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
var213 = var214;
}
if (var213){
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var221 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var219) on <var219:MProperty(MMethod)> */
var224 = var219->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var219:MProperty(MMethod)> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
var_paramname = var222;
{
{ /* Inline model#MSignature#return_mtype (var_msignature173) on <var_msignature173:nullable MSignature(MSignature)> */
var227 = var_msignature173->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature173:nullable MSignature(MSignature)> */
var225 = var227;
RET_LABEL226:(void)0;
}
}
var_ret_type = var225;
if (var_ret_type == NULL) {
var228 = 1; /* is null */
} else {
var228 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var233 = var_ret_type == var_other;
var231 = var233;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
}
var229 = var231;
goto RET_LABEL230;
RET_LABEL230:(void)0;
}
var228 = var229;
}
if (var228){
goto RET_LABEL;
} else {
}
var234 = NEW_nitc__MParameter(&type_nitc__MParameter);
{
((void(*)(val* self, val* p0))(var234->class->vft[COLOR_nitc__model__MParameter__name_61d]))(var234, var_paramname); /* name= on <var234:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var234->class->vft[COLOR_nitc__model__MParameter__mtype_61d]))(var234, var_ret_type); /* mtype= on <var234:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var234->class->vft[COLOR_nitc__model__MParameter__is_vararg_61d]))(var234, 0); /* is_vararg= on <var234:MParameter>*/
}
{
((void(*)(val* self))(var234->class->vft[COLOR_core__kernel__Object__init]))(var234); /* init on <var234:MParameter>*/
}
var_mparameter = var234;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mparameters110, var_mparameter); /* Direct call array#Array#add on <var_mparameters110:Array[MParameter]>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var237 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var235 = var237;
RET_LABEL236:(void)0;
}
}
if (var235 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 215);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var235) on <var235:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var240 = var235->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var235:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var240 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var238); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AAttrPropdef)> */
var243 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AAttrPropdef)> */
var241 = var243;
RET_LABEL242:(void)0;
}
}
if (var241 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 216);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var241) on <var241:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var246 = var241->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var241:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
{ /* Inline model#MProperty#is_autoinit= (var244,1) on <var244:MProperty(MAttribute)> */
var244->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var244:MProperty(MAttribute)> */
RET_LABEL247:(void)0;
}
}
} else {
{
{ /* Inline model#MMethodDef#msignature (var_msetter) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var250 = var_msetter->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_msetter:nullable MMethodDef(MMethodDef)> */
var248 = var250;
RET_LABEL249:(void)0;
}
}
if (var248 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 219);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var248) on <var248:nullable MSignature> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var253 = var248->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var248:nullable MSignature> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_mparameters110, var251); /* Direct call array#Array#add_all on <var_mparameters110:Array[MParameter]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_msetter) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var256 = var_msetter->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_msetter:nullable MMethodDef(MMethodDef)> */
if (unlikely(var256 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var254); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_msetter) on <var_msetter:nullable MMethodDef(MMethodDef)> */
var259 = var_msetter->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_msetter:nullable MMethodDef(MMethodDef)> */
if (unlikely(var259 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
{ /* Inline model#MProperty#is_autoinit= (var257,1) on <var257:MProperty(MMethod)> */
var257->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 1; /* _is_autoinit on <var257:MProperty(MMethod)> */
RET_LABEL260:(void)0;
}
}
}
} else {
}
BREAK_label128: (void)0;
{
((void(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_117); /* next on <var_117:Iterator[APropdef]>*/
}
}
BREAK_label119: (void)0;
{
((void(*)(val* self))((((long)var_117&3)?class_info[((long)var_117&3)]:var_117->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_117); /* finish on <var_117:Iterator[APropdef]>*/
}
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (self) on <self:ModelBuilder> */
var263 = self->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <self:ModelBuilder> */
var261 = var263;
RET_LABEL262:(void)0;
}
}
var_the_root_init_mmethod = var261;
if (var_the_root_init_mmethod == NULL) {
var264 = 1; /* is null */
} else {
var264 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_the_root_init_mmethod,((val*)NULL)) on <var_the_root_init_mmethod:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_the_root_init_mmethod,var_other) on <var_the_root_init_mmethod:nullable MMethod(MMethod)> */
var269 = var_the_root_init_mmethod == var_other;
var267 = var269;
goto RET_LABEL268;
RET_LABEL268:(void)0;
}
}
var265 = var267;
goto RET_LABEL266;
RET_LABEL266:(void)0;
}
var264 = var265;
}
if (var264){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var272 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var272 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var270 = var272;
RET_LABEL271:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var275 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var275 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var273 = var275;
RET_LABEL274:(void)0;
}
}
{
var276 = nitc___nitc__MProperty___lookup_super_definitions(var_the_root_init_mmethod, var270, var273);
}
var_spropdefs = var276;
{
var277 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_spropdefs);
}
if (var277){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var280 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var280 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var278 = var280;
RET_LABEL279:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var283 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var283 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
if (unlikely(varonce284==NULL)) {
var285 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce286!=NULL)) {
var287 = varonce286;
} else {
var288 = "Error: `";
var289 = core__abstract_text___CString___to_s_full(var288, 8l, 8l);
var287 = var289;
varonce286 = var287;
}
((struct instance_core__NativeArray*)var285)->values[0]=var287;
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = "` does not specialize `";
var293 = core__abstract_text___CString___to_s_full(var292, 23l, 23l);
var291 = var293;
varonce290 = var291;
}
((struct instance_core__NativeArray*)var285)->values[2]=var291;
if (likely(varonce294!=NULL)) {
var295 = varonce294;
} else {
var296 = "`. Possible duplication of the root class `Object`?";
var297 = core__abstract_text___CString___to_s_full(var296, 51l, 51l);
var295 = var297;
varonce294 = var295;
}
((struct instance_core__NativeArray*)var285)->values[4]=var295;
} else {
var285 = varonce284;
varonce284 = NULL;
}
{
var298 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var285)->values[1]=var298;
{
{ /* Inline model#MProperty#intro_mclassdef (var_the_root_init_mmethod) on <var_the_root_init_mmethod:nullable MMethod(MMethod)> */
var301 = var_the_root_init_mmethod->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_the_root_init_mmethod:nullable MMethod(MMethod)> */
if (unlikely(var301 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
{
var302 = ((val*(*)(val* self))(var299->class->vft[COLOR_core__abstract_text__Object__to_s]))(var299); /* to_s on <var299:MClassDef>*/
}
((struct instance_core__NativeArray*)var285)->values[3]=var302;
{
var303 = ((val*(*)(val* self))(var285->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var285); /* native_to_s on <var285:NativeArray[String]>*/
}
varonce284 = var285;
{
var304 = nitc___nitc__ToolContext___error(var278, var281, var303);
}
goto RET_LABEL;
} else {
}
if (likely(varonce305!=NULL)) {
var306 = varonce305;
} else {
var307 = "autoinit";
var308 = core__abstract_text___CString___to_s_full(var307, 8l, 8l);
var306 = var308;
varonce305 = var306;
}
{
var309 = nitc__annotation___Prod___get_single_annotation(var_nclassdef, var306, self);
}
var_autoinit = var309;
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "noautoinit";
var313 = core__abstract_text___CString___to_s_full(var312, 10l, 10l);
var311 = var313;
varonce310 = var311;
}
{
var314 = nitc__annotation___Prod___get_single_annotation(var_nclassdef, var311, self);
}
var_noautoinit = var314;
if (var_autoinit == NULL) {
var315 = 0; /* is null */
} else {
var315 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_autoinit,((val*)NULL)) on <var_autoinit:nullable AAnnotation> */
var_other191 = ((val*)NULL);
{
var318 = ((short int(*)(val* self, val* p0))(var_autoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_autoinit, var_other191); /* == on <var_autoinit:nullable AAnnotation(AAnnotation)>*/
}
var319 = !var318;
var316 = var319;
goto RET_LABEL317;
RET_LABEL317:(void)0;
}
var315 = var316;
}
if (var315){
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_mparameters110); /* Direct call array#AbstractArray#clear on <var_mparameters110:Array[MParameter]>*/
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_initializers); /* Direct call array#AbstractArray#clear on <var_initializers:Array[MProperty]>*/
}
if (var_noautoinit == NULL) {
var320 = 0; /* is null */
} else {
var320 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_noautoinit,((val*)NULL)) on <var_noautoinit:nullable AAnnotation> */
var_other191 = ((val*)NULL);
{
var323 = ((short int(*)(val* self, val* p0))(var_noautoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_noautoinit, var_other191); /* == on <var_noautoinit:nullable AAnnotation(AAnnotation)>*/
}
var324 = !var323;
var321 = var324;
goto RET_LABEL322;
RET_LABEL322:(void)0;
}
var320 = var321;
}
if (var320){
if (likely(varonce325!=NULL)) {
var326 = varonce325;
} else {
var327 = "Error: `autoinit` and `noautoinit` are incompatible.";
var328 = core__abstract_text___CString___to_s_full(var327, 52l, 52l);
var326 = var328;
varonce325 = var326;
}
{
nitc___nitc__ModelBuilder___error(self, var_autoinit, var326); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_autoinit) on <var_autoinit:nullable AAnnotation(AAnnotation)> */
var331 = var_autoinit->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_autoinit:nullable AAnnotation(AAnnotation)> */
if (unlikely(var331 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var329 = var331;
RET_LABEL330:(void)0;
}
}
{
var332 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var329);
}
if (var332){
if (likely(varonce333!=NULL)) {
var334 = varonce333;
} else {
var335 = "Syntax Error: `autoinit` expects method identifiers, use `noautoinit` to clear all autoinits.";
var336 = core__abstract_text___CString___to_s_full(var335, 93l, 93l);
var334 = var336;
varonce333 = var334;
}
{
nitc___nitc__ModelBuilder___error(self, var_autoinit, var334); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_autoinit) on <var_autoinit:nullable AAnnotation(AAnnotation)> */
var339 = var_autoinit->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_autoinit:nullable AAnnotation(AAnnotation)> */
if (unlikely(var339 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
var_340 = var337;
{
var341 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_340);
}
var_342 = var341;
for(;;) {
{
var343 = ((short int(*)(val* self))((((long)var_342&3)?class_info[((long)var_342&3)]:var_342->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_342); /* is_ok on <var_342:Iterator[AExpr]>*/
}
if (var343){
} else {
goto BREAK_label344;
}
{
var345 = ((val*(*)(val* self))((((long)var_342&3)?class_info[((long)var_342&3)]:var_342->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_342); /* item on <var_342:Iterator[AExpr]>*/
}
var_narg = var345;
{
var346 = nitc__parser_work___AExpr___as_id(var_narg);
}
var_id = var346;
if (var_id == NULL) {
var347 = 1; /* is null */
} else {
var347 = 0; /* arg is null but recv is not */
}
if (0) {
var348 = ((short int(*)(val* self, val* p0))(var_id->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_id, ((val*)NULL)); /* == on <var_id:nullable String>*/
var347 = var348;
}
if (var347){
if (likely(varonce349!=NULL)) {
var350 = varonce349;
} else {
var351 = "Syntax Error: `autoinit` expects method identifiers.";
var352 = core__abstract_text___CString___to_s_full(var351, 52l, 52l);
var350 = var352;
varonce349 = var350;
}
{
nitc___nitc__ModelBuilder___error(self, var_narg, var350); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce353!=NULL)) {
var354 = varonce353;
} else {
var355 = "=";
var356 = core__abstract_text___CString___to_s_full(var355, 1l, 1l);
var354 = var356;
varonce353 = var354;
}
{
var357 = ((val*(*)(val* self, val* p0))(var_id->class->vft[COLOR_core__abstract_text__Text___43d]))(var_id, var354); /* + on <var_id:nullable String(String)>*/
}
{
var358 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(self, var_narg, var_mclassdef, var357);
}
var_p = var358;
if (var_p == NULL) {
var359 = 1; /* is null */
} else {
var359 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_p,((val*)NULL)) on <var_p:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_p,var_other) on <var_p:nullable MProperty(MProperty)> */
var364 = var_p == var_other;
var362 = var364;
goto RET_LABEL363;
RET_LABEL363:(void)0;
}
}
var360 = var362;
goto RET_LABEL361;
RET_LABEL361:(void)0;
}
var359 = var360;
}
if (var359){
{
var365 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(self, var_narg, var_mclassdef, var_id);
}
var_p = var365;
} else {
}
if (var_p == NULL) {
var366 = 1; /* is null */
} else {
var366 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_p,((val*)NULL)) on <var_p:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_p,var_other) on <var_p:nullable MProperty(MProperty)> */
var371 = var_p == var_other;
var369 = var371;
goto RET_LABEL370;
RET_LABEL370:(void)0;
}
}
var367 = var369;
goto RET_LABEL368;
RET_LABEL368:(void)0;
}
var366 = var367;
}
if (var366){
if (unlikely(varonce372==NULL)) {
var373 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce374!=NULL)) {
var375 = varonce374;
} else {
var376 = "Error: unknown method `";
var377 = core__abstract_text___CString___to_s_full(var376, 23l, 23l);
var375 = var377;
varonce374 = var375;
}
((struct instance_core__NativeArray*)var373)->values[0]=var375;
if (likely(varonce378!=NULL)) {
var379 = varonce378;
} else {
var380 = "`";
var381 = core__abstract_text___CString___to_s_full(var380, 1l, 1l);
var379 = var381;
varonce378 = var379;
}
((struct instance_core__NativeArray*)var373)->values[2]=var379;
} else {
var373 = varonce372;
varonce372 = NULL;
}
((struct instance_core__NativeArray*)var373)->values[1]=var_id;
{
var382 = ((val*(*)(val* self))(var373->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var373); /* native_to_s on <var373:NativeArray[String]>*/
}
varonce372 = var373;
{
nitc___nitc__ModelBuilder___error(self, var_narg, var382); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#is_autoinit (var_p) on <var_p:nullable MProperty(MProperty)> */
var385 = var_p->attrs[COLOR_nitc__model__MProperty___is_autoinit].s; /* _is_autoinit on <var_p:nullable MProperty(MProperty)> */
var383 = var385;
RET_LABEL384:(void)0;
}
}
var386 = !var383;
if (var386){
if (unlikely(varonce387==NULL)) {
var388 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce389!=NULL)) {
var390 = varonce389;
} else {
var391 = "Error: `";
var392 = core__abstract_text___CString___to_s_full(var391, 8l, 8l);
var390 = var392;
varonce389 = var390;
}
((struct instance_core__NativeArray*)var388)->values[0]=var390;
if (likely(varonce393!=NULL)) {
var394 = varonce393;
} else {
var395 = "` is not an autoinit method";
var396 = core__abstract_text___CString___to_s_full(var395, 27l, 27l);
var394 = var396;
varonce393 = var394;
}
((struct instance_core__NativeArray*)var388)->values[2]=var394;
} else {
var388 = varonce387;
varonce387 = NULL;
}
{
var397 = ((val*(*)(val* self))(var_p->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_p); /* to_s on <var_p:nullable MProperty(MProperty)>*/
}
((struct instance_core__NativeArray*)var388)->values[1]=var397;
{
var398 = ((val*(*)(val* self))(var388->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var388); /* native_to_s on <var388:NativeArray[String]>*/
}
varonce387 = var388;
{
nitc___nitc__ModelBuilder___error(self, var_narg, var398); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_initializers, var_p); /* Direct call array#Array#add on <var_initializers:Array[MProperty]>*/
}
{
{ /* Inline model#MProperty#intro (var_p) on <var_p:nullable MProperty(MProperty)> */
var401 = var_p->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_p:nullable MProperty(MProperty)> */
if (unlikely(var401 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var399 = var401;
RET_LABEL400:(void)0;
}
}
var_pd = var399;
/* <var_pd:MPropDef> isa MMethodDef */
cltype403 = type_nitc__MMethodDef.color;
idtype404 = type_nitc__MMethodDef.id;
if(cltype403 >= var_pd->type->table_size) {
var402 = 0;
} else {
var402 = var_pd->type->type_table[cltype403] == idtype404;
}
if (var402){
{
{ /* Inline model#MMethodDef#msignature (var_pd) on <var_pd:MPropDef(MMethodDef)> */
var407 = var_pd->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_pd:MPropDef(MMethodDef)> */
var405 = var407;
RET_LABEL406:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var410 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var410 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var408 = var410;
RET_LABEL409:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var408) on <var408:MClass> */
var413 = var408->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var408:MClass> */
if (unlikely(var413 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var411 = var413;
RET_LABEL412:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var416 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var416 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var414 = var416;
RET_LABEL415:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var419 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var419 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var417 = var419;
RET_LABEL418:(void)0;
}
}
if (var405 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 280);
fatal_exit(1);
} else {
var420 = nitc___nitc__MSignature___MType__resolve_for(var405, var411, var414, var417, 0);
}
var_sig421 = var420;
{
{ /* Inline model#MSignature#mparameters (var_sig421) on <var_sig421:MSignature> */
var424 = var_sig421->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_sig421:MSignature> */
if (unlikely(var424 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var422 = var424;
RET_LABEL423:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_mparameters110, var422); /* Direct call array#Array#add_all on <var_mparameters110:Array[MParameter]>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 284);
fatal_exit(1);
}
{
((void(*)(val* self))((((long)var_342&3)?class_info[((long)var_342&3)]:var_342->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_342); /* next on <var_342:Iterator[AExpr]>*/
}
}
BREAK_label344: (void)0;
{
((void(*)(val* self))((((long)var_342&3)?class_info[((long)var_342&3)]:var_342->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_342); /* finish on <var_342:Iterator[AExpr]>*/
}
} else {
{
var425 = core___core__SequenceRead___Collection__first(var_spropdefs);
}
var_longest = var425;
{
{ /* Inline array#AbstractArrayRead#length (var_spropdefs) on <var_spropdefs:Array[MMethodDef]> */
var428 = var_spropdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_spropdefs:Array[MMethodDef]> */
var426 = var428;
RET_LABEL427:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var426,1l) on <var426:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var431 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var431)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var434 = var426 > 1l;
var429 = var434;
goto RET_LABEL430;
RET_LABEL430:(void)0;
}
}
if (var429){
var_435 = var_spropdefs;
{
var436 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_435);
}
var_437 = var436;
for(;;) {
{
var438 = ((short int(*)(val* self))((((long)var_437&3)?class_info[((long)var_437&3)]:var_437->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_437); /* is_ok on <var_437:IndexedIterator[MMethodDef]>*/
}
if (var438){
} else {
goto BREAK_label439;
}
{
var440 = ((val*(*)(val* self))((((long)var_437&3)?class_info[((long)var_437&3)]:var_437->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_437); /* item on <var_437:IndexedIterator[MMethodDef]>*/
}
var_spd = var440;
{
{ /* Inline model#MMethodDef#initializers (var_spd) on <var_spd:MMethodDef> */
var443 = var_spd->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_spd:MMethodDef> */
if (unlikely(var443 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var441 = var443;
RET_LABEL442:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var441) on <var441:Array[MProperty]> */
var446 = var441->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var441:Array[MProperty]> */
var444 = var446;
RET_LABEL445:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var449 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var449 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var447 = var449;
RET_LABEL448:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var447) on <var447:Array[MProperty]> */
var452 = var447->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var447:Array[MProperty]> */
var450 = var452;
RET_LABEL451:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var444,var450) on <var444:Int> */
/* Covariant cast for argument 0 (i) <var450:Int> isa OTHER */
/* <var450:Int> isa OTHER */
var455 = 1; /* easy <var450:Int> isa OTHER*/
if (unlikely(!var455)) {
var_class_name458 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name458);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var459 = var444 > var450;
var453 = var459;
goto RET_LABEL454;
RET_LABEL454:(void)0;
}
}
if (var453){
var_longest = var_spd;
} else {
}
{
((void(*)(val* self))((((long)var_437&3)?class_info[((long)var_437&3)]:var_437->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_437); /* next on <var_437:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label439: (void)0;
{
((void(*)(val* self))((((long)var_437&3)?class_info[((long)var_437&3)]:var_437->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_437); /* finish on <var_437:IndexedIterator[MMethodDef]>*/
}
if (var_noautoinit == NULL) {
var460 = 1; /* is null */
} else {
var460 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_noautoinit,((val*)NULL)) on <var_noautoinit:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_noautoinit,var_other) on <var_noautoinit:nullable AAnnotation(AAnnotation)> */
var465 = var_noautoinit == var_other;
var463 = var465;
goto RET_LABEL464;
RET_LABEL464:(void)0;
}
}
var461 = var463;
goto RET_LABEL462;
RET_LABEL462:(void)0;
}
var460 = var461;
}
if (var460){
var_466 = var_spropdefs;
{
var467 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_466);
}
var_468 = var467;
for(;;) {
{
var469 = ((short int(*)(val* self))((((long)var_468&3)?class_info[((long)var_468&3)]:var_468->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_468); /* is_ok on <var_468:IndexedIterator[MMethodDef]>*/
}
if (var469){
} else {
goto BREAK_label470;
}
{
var471 = ((val*(*)(val* self))((((long)var_468&3)?class_info[((long)var_468&3)]:var_468->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_468); /* item on <var_468:IndexedIterator[MMethodDef]>*/
}
var_spd472 = var471;
var_i = 0l;
{
{ /* Inline model#MMethodDef#initializers (var_spd472) on <var_spd472:MMethodDef> */
var475 = var_spd472->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_spd472:MMethodDef> */
if (unlikely(var475 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var473 = var475;
RET_LABEL474:(void)0;
}
}
var_476 = var473;
{
var477 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_476);
}
var_478 = var477;
for(;;) {
{
var479 = ((short int(*)(val* self))((((long)var_478&3)?class_info[((long)var_478&3)]:var_478->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_478); /* is_ok on <var_478:IndexedIterator[MProperty]>*/
}
if (var479){
} else {
goto BREAK_label480;
}
{
var481 = ((val*(*)(val* self))((((long)var_478&3)?class_info[((long)var_478&3)]:var_478->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_478); /* item on <var_478:IndexedIterator[MProperty]>*/
}
var_p482 = var481;
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var485 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var485 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var483 = var485;
RET_LABEL484:(void)0;
}
}
{
var486 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var483, var_i);
}
{
{ /* Inline kernel#Object#!= (var_p482,var486) on <var_p482:MProperty> */
var_other191 = var486;
{
var489 = ((short int(*)(val* self, val* p0))(var_p482->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p482, var_other191); /* == on <var_p482:MProperty>*/
}
var490 = !var489;
var487 = var490;
goto RET_LABEL488;
RET_LABEL488:(void)0;
}
}
if (var487){
var491 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MProperty);
{
core___core__ArraySet___core__kernel__Object__init(var491); /* Direct call array#ArraySet#init on <var491:ArraySet[MProperty]>*/
}
var_proposal = var491;
var_492 = var_spropdefs;
{
var493 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_492);
}
var_494 = var493;
for(;;) {
{
var495 = ((short int(*)(val* self))((((long)var_494&3)?class_info[((long)var_494&3)]:var_494->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_494); /* is_ok on <var_494:IndexedIterator[MMethodDef]>*/
}
if (var495){
} else {
goto BREAK_label496;
}
{
var497 = ((val*(*)(val* self))((((long)var_494&3)?class_info[((long)var_494&3)]:var_494->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_494); /* item on <var_494:IndexedIterator[MMethodDef]>*/
}
var_spd2 = var497;
{
{ /* Inline model#MMethodDef#initializers (var_spd2) on <var_spd2:MMethodDef> */
var500 = var_spd2->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_spd2:MMethodDef> */
if (unlikely(var500 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var498 = var500;
RET_LABEL499:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_proposal, var498); /* Direct call abstract_collection#SimpleCollection#add_all on <var_proposal:ArraySet[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_494&3)?class_info[((long)var_494&3)]:var_494->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_494); /* next on <var_494:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label496: (void)0;
{
((void(*)(val* self))((((long)var_494&3)?class_info[((long)var_494&3)]:var_494->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_494); /* finish on <var_494:IndexedIterator[MMethodDef]>*/
}
{
core___core__SimpleCollection___add_all(var_proposal, var_initializers); /* Direct call abstract_collection#SimpleCollection#add_all on <var_proposal:ArraySet[MProperty]>*/
}
if (unlikely(varonce501==NULL)) {
var502 = NEW_core__NativeArray(13l, &type_core__NativeArray__core__String);
if (likely(varonce503!=NULL)) {
var504 = varonce503;
} else {
var505 = "Error: cannot generate automatic init for class ";
var506 = core__abstract_text___CString___to_s_full(var505, 48l, 48l);
var504 = var506;
varonce503 = var504;
}
((struct instance_core__NativeArray*)var502)->values[0]=var504;
if (likely(varonce507!=NULL)) {
var508 = varonce507;
} else {
var509 = ". Conflict in the order in inherited initializers ";
var510 = core__abstract_text___CString___to_s_full(var509, 50l, 50l);
var508 = var510;
varonce507 = var508;
}
((struct instance_core__NativeArray*)var502)->values[2]=var508;
if (likely(varonce511!=NULL)) {
var512 = varonce511;
} else {
var513 = "(";
var514 = core__abstract_text___CString___to_s_full(var513, 1l, 1l);
var512 = var514;
varonce511 = var512;
}
((struct instance_core__NativeArray*)var502)->values[4]=var512;
if (likely(varonce515!=NULL)) {
var516 = varonce515;
} else {
var517 = ") and ";
var518 = core__abstract_text___CString___to_s_full(var517, 6l, 6l);
var516 = var518;
varonce515 = var516;
}
((struct instance_core__NativeArray*)var502)->values[6]=var516;
if (likely(varonce519!=NULL)) {
var520 = varonce519;
} else {
var521 = "(";
var522 = core__abstract_text___CString___to_s_full(var521, 1l, 1l);
var520 = var522;
varonce519 = var520;
}
((struct instance_core__NativeArray*)var502)->values[8]=var520;
if (likely(varonce523!=NULL)) {
var524 = varonce523;
} else {
var525 = "). Use `autoinit` to order initializers. eg `autoinit ";
var526 = core__abstract_text___CString___to_s_full(var525, 54l, 54l);
var524 = var526;
varonce523 = var524;
}
((struct instance_core__NativeArray*)var502)->values[10]=var524;
if (likely(varonce527!=NULL)) {
var528 = varonce527;
} else {
var529 = "`";
var530 = core__abstract_text___CString___to_s_full(var529, 1l, 1l);
var528 = var530;
varonce527 = var528;
}
((struct instance_core__NativeArray*)var502)->values[12]=var528;
} else {
var502 = varonce501;
varonce501 = NULL;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var533 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var533 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var531 = var533;
RET_LABEL532:(void)0;
}
}
{
var534 = ((val*(*)(val* self))(var531->class->vft[COLOR_core__abstract_text__Object__to_s]))(var531); /* to_s on <var531:MClass>*/
}
((struct instance_core__NativeArray*)var502)->values[1]=var534;
{
var535 = ((val*(*)(val* self))(var_spd472->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_spd472); /* to_s on <var_spd472:MMethodDef>*/
}
((struct instance_core__NativeArray*)var502)->values[3]=var535;
{
{ /* Inline model#MMethodDef#initializers (var_spd472) on <var_spd472:MMethodDef> */
var538 = var_spd472->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_spd472:MMethodDef> */
if (unlikely(var538 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var536 = var538;
RET_LABEL537:(void)0;
}
}
if (likely(varonce539!=NULL)) {
var540 = varonce539;
} else {
var541 = ", ";
var542 = core__abstract_text___CString___to_s_full(var541, 2l, 2l);
var540 = var542;
varonce539 = var540;
}
{
var543 = core__abstract_text___Collection___join(var536, var540, ((val*)NULL));
}
((struct instance_core__NativeArray*)var502)->values[5]=var543;
{
var544 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_longest); /* to_s on <var_longest:MMethodDef>*/
}
((struct instance_core__NativeArray*)var502)->values[7]=var544;
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var547 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var547 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var545 = var547;
RET_LABEL546:(void)0;
}
}
if (likely(varonce548!=NULL)) {
var549 = varonce548;
} else {
var550 = ", ";
var551 = core__abstract_text___CString___to_s_full(var550, 2l, 2l);
var549 = var551;
varonce548 = var549;
}
{
var552 = core__abstract_text___Collection___join(var545, var549, ((val*)NULL));
}
((struct instance_core__NativeArray*)var502)->values[9]=var552;
if (likely(varonce553!=NULL)) {
var554 = varonce553;
} else {
var555 = ", ";
var556 = core__abstract_text___CString___to_s_full(var555, 2l, 2l);
var554 = var556;
varonce553 = var554;
}
{
var557 = core__abstract_text___Collection___join(var_proposal, var554, ((val*)NULL));
}
((struct instance_core__NativeArray*)var502)->values[11]=var557;
{
var558 = ((val*(*)(val* self))(var502->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var502); /* native_to_s on <var502:NativeArray[String]>*/
}
varonce501 = var502;
{
nitc___nitc__ModelBuilder___error(self, var_nclassdef, var558); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var561 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var561)) {
var_class_name564 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name564);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var565 = var_i + 1l;
var559 = var565;
goto RET_LABEL560;
RET_LABEL560:(void)0;
}
}
var_i = var559;
{
((void(*)(val* self))((((long)var_478&3)?class_info[((long)var_478&3)]:var_478->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_478); /* next on <var_478:IndexedIterator[MProperty]>*/
}
}
BREAK_label480: (void)0;
{
((void(*)(val* self))((((long)var_478&3)?class_info[((long)var_478&3)]:var_478->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_478); /* finish on <var_478:IndexedIterator[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_468&3)?class_info[((long)var_468&3)]:var_468->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_468); /* next on <var_468:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label470: (void)0;
{
((void(*)(val* self))((((long)var_468&3)?class_info[((long)var_468&3)]:var_468->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_468); /* finish on <var_468:IndexedIterator[MMethodDef]>*/
}
} else {
}
} else {
}
if (var_noautoinit == NULL) {
var566 = 0; /* is null */
} else {
var566 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_noautoinit,((val*)NULL)) on <var_noautoinit:nullable AAnnotation> */
var_other191 = ((val*)NULL);
{
var569 = ((short int(*)(val* self, val* p0))(var_noautoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_noautoinit, var_other191); /* == on <var_noautoinit:nullable AAnnotation(AAnnotation)>*/
}
var570 = !var569;
var567 = var570;
goto RET_LABEL568;
RET_LABEL568:(void)0;
}
var566 = var567;
}
if (var566){
{
var572 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_initializers);
}
var_573 = var572;
if (var572){
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var576 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var576 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var574 = var576;
RET_LABEL575:(void)0;
}
}
{
var577 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var574);
}
var571 = var577;
} else {
var571 = var_573;
}
if (var571){
if (likely(varonce578!=NULL)) {
var579 = varonce578;
} else {
var580 = "useless-noautoinit";
var581 = core__abstract_text___CString___to_s_full(var580, 18l, 18l);
var579 = var581;
varonce578 = var579;
}
if (likely(varonce582!=NULL)) {
var583 = varonce582;
} else {
var584 = "Warning: the list of autoinit is already empty.";
var585 = core__abstract_text___CString___to_s_full(var584, 47l, 47l);
var583 = var585;
varonce582 = var583;
}
{
nitc___nitc__ModelBuilder___warning(self, var_noautoinit, var579, var583); /* Direct call modelbuilder_base#ModelBuilder#warning on <self:ModelBuilder>*/
}
} else {
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_mparameters110); /* Direct call array#AbstractArray#clear on <var_mparameters110:Array[MParameter]>*/
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_initializers); /* Direct call array#AbstractArray#clear on <var_initializers:Array[MProperty]>*/
}
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_spropdefs) on <var_spropdefs:Array[MMethodDef]> */
var590 = var_spropdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_spropdefs:Array[MMethodDef]> */
var588 = var590;
RET_LABEL589:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var588,1l) on <var588:Int> */
var593 = var588 == 1l;
var591 = var593;
goto RET_LABEL592;
RET_LABEL592:(void)0;
}
}
var_594 = var591;
if (var591){
{
var595 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_mparameters110);
}
var587 = var595;
} else {
var587 = var_594;
}
var_596 = var587;
if (var587){
if (var_defined_init == NULL) {
var597 = 1; /* is null */
} else {
var597 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_defined_init,((val*)NULL)) on <var_defined_init:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_defined_init,var_other) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var602 = var_defined_init == var_other;
var600 = var602;
goto RET_LABEL601;
RET_LABEL601:(void)0;
}
}
var598 = var600;
goto RET_LABEL599;
RET_LABEL599:(void)0;
}
var597 = var598;
}
var586 = var597;
} else {
var586 = var_596;
}
if (var586){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var605 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var605 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var603 = var605;
RET_LABEL604:(void)0;
}
}
if (unlikely(varonce606==NULL)) {
var607 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce608!=NULL)) {
var609 = varonce608;
} else {
var610 = " inherits the basic constructor ";
var611 = core__abstract_text___CString___to_s_full(var610, 32l, 32l);
var609 = var611;
varonce608 = var609;
}
((struct instance_core__NativeArray*)var607)->values[1]=var609;
} else {
var607 = varonce606;
varonce606 = NULL;
}
{
var612 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var607)->values[0]=var612;
{
var613 = ((val*(*)(val* self))(var_longest->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_longest); /* to_s on <var_longest:MMethodDef>*/
}
((struct instance_core__NativeArray*)var607)->values[2]=var613;
{
var614 = ((val*(*)(val* self))(var607->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var607); /* native_to_s on <var607:NativeArray[String]>*/
}
varonce606 = var607;
{
nitc___nitc__ToolContext___info(var603, var614, 3l); /* Direct call toolcontext#ToolContext#info on <var603:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var617 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var617 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var615 = var617;
RET_LABEL616:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var615,var_longest) on <var615:MClass> */
var615->attrs[COLOR_nitc__modelize_property__MClass___root_init].val = var_longest; /* _root_init on <var615:MClass> */
RET_LABEL618:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var621 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var621 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var619 = var621;
RET_LABEL620:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var619) on <var619:Array[MProperty]> */
var624 = var619->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var619:Array[MProperty]> */
var622 = var624;
RET_LABEL623:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var622,0l) on <var622:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var627 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var627)) {
var_class_name630 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name630);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var631 = var622 > 0l;
var625 = var631;
goto RET_LABEL626;
RET_LABEL626:(void)0;
}
}
if (var625){
{
{ /* Inline model#MMethodDef#new_msignature (var_longest) on <var_longest:MMethodDef> */
var634 = var_longest->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_longest:MMethodDef> */
var632 = var634;
RET_LABEL633:(void)0;
}
}
if (var632 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 335);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var632) on <var632:nullable MSignature> */
if (unlikely(var632 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var637 = var632->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var632:nullable MSignature> */
if (unlikely(var637 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var635 = var637;
RET_LABEL636:(void)0;
}
}
{
core___core__Sequence___prepend(var_mparameters110, var635); /* Direct call abstract_collection#Sequence#prepend on <var_mparameters110:Array[MParameter]>*/
}
{
{ /* Inline model#MMethodDef#initializers (var_longest) on <var_longest:MMethodDef> */
var640 = var_longest->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_longest:MMethodDef> */
if (unlikely(var640 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var638 = var640;
RET_LABEL639:(void)0;
}
}
{
core___core__Sequence___prepend(var_initializers, var638); /* Direct call abstract_collection#Sequence#prepend on <var_initializers:Array[MProperty]>*/
}
} else {
}
}
}
if (var_defined_init == NULL) {
var641 = 0; /* is null */
} else {
var641 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_defined_init,((val*)NULL)) on <var_defined_init:nullable MMethodDef> */
var_other191 = ((val*)NULL);
{
var644 = ((short int(*)(val* self, val* p0))(var_defined_init->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_defined_init, var_other191); /* == on <var_defined_init:nullable MMethodDef(MMethodDef)>*/
}
var645 = !var644;
var642 = var645;
goto RET_LABEL643;
RET_LABEL643:(void)0;
}
var641 = var642;
}
if (var641){
{
{ /* Inline model#MMethodDef#initializers (var_defined_init) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var648 = var_defined_init->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_defined_init:nullable MMethodDef(MMethodDef)> */
if (unlikely(var648 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var646 = var648;
RET_LABEL647:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var646, var_initializers); /* Direct call array#Array#add_all on <var646:Array[MProperty]>*/
}
var649 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var649->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var649, var_mparameters110); /* mparameters= on <var649:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var649->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var649, ((val*)NULL)); /* return_mtype= on <var649:MSignature>*/
}
{
((void(*)(val* self))(var649->class->vft[COLOR_core__kernel__Object__init]))(var649); /* init on <var649:MSignature>*/
}
var_msignature650 = var649;
{
{ /* Inline model#MMethodDef#new_msignature= (var_defined_init,var_msignature650) on <var_defined_init:nullable MMethodDef(MMethodDef)> */
var_defined_init->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = var_msignature650; /* _new_msignature on <var_defined_init:nullable MMethodDef(MMethodDef)> */
RET_LABEL651:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var654 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var654 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var652 = var654;
RET_LABEL653:(void)0;
}
}
if (unlikely(varonce655==NULL)) {
var656 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce657!=NULL)) {
var658 = varonce657;
} else {
var659 = " extends its basic constructor signature to ";
var660 = core__abstract_text___CString___to_s_full(var659, 44l, 44l);
var658 = var660;
varonce657 = var658;
}
((struct instance_core__NativeArray*)var656)->values[1]=var658;
} else {
var656 = varonce655;
varonce655 = NULL;
}
{
var661 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var656)->values[0]=var661;
{
var662 = ((val*(*)(val* self))(var_defined_init->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_defined_init); /* to_s on <var_defined_init:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var656)->values[2]=var662;
{
var663 = ((val*(*)(val* self))(var_msignature650->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature650); /* to_s on <var_msignature650:MSignature>*/
}
((struct instance_core__NativeArray*)var656)->values[3]=var663;
{
var664 = ((val*(*)(val* self))(var656->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var656); /* native_to_s on <var656:NativeArray[String]>*/
}
varonce655 = var656;
{
nitc___nitc__ToolContext___info(var652, var664, 3l); /* Direct call toolcontext#ToolContext#info on <var652:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var667 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var667 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var665 = var667;
RET_LABEL666:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var665,var_defined_init) on <var665:MClass> */
var665->attrs[COLOR_nitc__modelize_property__MClass___root_init].val = var_defined_init; /* _root_init on <var665:MClass> */
RET_LABEL668:(void)0;
}
}
goto RET_LABEL;
} else {
}
var_mprop669 = var_the_root_init_mmethod;
var670 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var673 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var673 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var671 = var673;
RET_LABEL672:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var670->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var670, var_mclassdef); /* mclassdef= on <var670:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var670->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var670, var_mprop669); /* mproperty= on <var670:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var670->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var670, var671); /* location= on <var670:MMethodDef>*/
}
{
((void(*)(val* self))(var670->class->vft[COLOR_core__kernel__Object__init]))(var670); /* init on <var670:MMethodDef>*/
}
var_mpropdef674 = var670;
{
{ /* Inline modelize_property#MPropDef#has_supercall= (var_mpropdef674,1) on <var_mpropdef674:MMethodDef> */
var_mpropdef674->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = 1; /* _has_supercall on <var_mpropdef674:MMethodDef> */
RET_LABEL675:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef674) on <var_mpropdef674:MMethodDef> */
var678 = var_mpropdef674->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef674:MMethodDef> */
if (unlikely(var678 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var676 = var678;
RET_LABEL677:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var676, var_initializers); /* Direct call array#Array#add_all on <var676:Array[MProperty]>*/
}
var679 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var679->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var679, var_mparameters110); /* mparameters= on <var679:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var679->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var679, ((val*)NULL)); /* return_mtype= on <var679:MSignature>*/
}
{
((void(*)(val* self))(var679->class->vft[COLOR_core__kernel__Object__init]))(var679); /* init on <var679:MSignature>*/
}
var_msignature680 = var679;
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef674,var_msignature680) on <var_mpropdef674:MMethodDef> */
var_mpropdef674->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = var_msignature680; /* _new_msignature on <var_mpropdef674:MMethodDef> */
RET_LABEL681:(void)0;
}
}
var682 = NEW_nitc__MSignature(&type_nitc__MSignature);
var683 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var683); /* Direct call array#Array#init on <var683:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var682->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var682, var683); /* mparameters= on <var682:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var682->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var682, ((val*)NULL)); /* return_mtype= on <var682:MSignature>*/
}
{
((void(*)(val* self))(var682->class->vft[COLOR_core__kernel__Object__init]))(var682); /* init on <var682:MSignature>*/
}
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef674,var682) on <var_mpropdef674:MMethodDef> */
var_mpropdef674->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var682; /* _msignature on <var_mpropdef674:MMethodDef> */
RET_LABEL684:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var687 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var687 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var685 = var687;
RET_LABEL686:(void)0;
}
}
if (unlikely(varonce688==NULL)) {
var689 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce690!=NULL)) {
var691 = varonce690;
} else {
var692 = " gets a free constructor for attributes ";
var693 = core__abstract_text___CString___to_s_full(var692, 40l, 40l);
var691 = var693;
varonce690 = var691;
}
((struct instance_core__NativeArray*)var689)->values[1]=var691;
} else {
var689 = varonce688;
varonce688 = NULL;
}
{
var694 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var689)->values[0]=var694;
{
var695 = ((val*(*)(val* self))(var_mpropdef674->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef674); /* to_s on <var_mpropdef674:MMethodDef>*/
}
((struct instance_core__NativeArray*)var689)->values[2]=var695;
{
var696 = ((val*(*)(val* self))(var_msignature680->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature680); /* to_s on <var_msignature680:MSignature>*/
}
((struct instance_core__NativeArray*)var689)->values[3]=var696;
{
var697 = ((val*(*)(val* self))(var689->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var689); /* native_to_s on <var689:NativeArray[String]>*/
}
varonce688 = var689;
{
nitc___nitc__ToolContext___info(var685, var697, 3l); /* Direct call toolcontext#ToolContext#info on <var685:ToolContext>*/
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var700 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var700 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var698 = var700;
RET_LABEL699:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init= (var698,var_mpropdef674) on <var698:MClass> */
var698->attrs[COLOR_nitc__modelize_property__MClass___root_init].val = var_mpropdef674; /* _root_init on <var698:MClass> */
RET_LABEL701:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#check_visibility for (self: ModelBuilder, ANode, MType, MPropDef) */
void nitc__modelize_property___ModelBuilder___check_visibility(val* self, val* p0, val* p1, val* p2) {
val* var_node /* var node: ANode */;
val* var_mtype /* var mtype: MType */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var6 /* : MProperty */;
val* var8 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
val* var_vis_type /* var vis_type: nullable MVisibility */;
val* var_mmodule_type /* var mmodule_type: nullable MModule */;
val* var9 /* : MType */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var14 /* : MVisibility */;
val* var16 /* : MVisibility */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : MModule */;
val* var22 /* : MModule */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
val* var26 /* : MVirtualTypeProp */;
val* var28 /* : MVirtualTypeProp */;
val* var29 /* : MVisibility */;
val* var31 /* : MVisibility */;
val* var32 /* : MVirtualTypeProp */;
val* var34 /* : MVirtualTypeProp */;
val* var35 /* : MClassDef */;
val* var37 /* : MClassDef */;
val* var38 /* : MModule */;
val* var40 /* : MModule */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
val* var53 /* : NativeArray[String] */;
static val* varonce;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : String */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : MVisibility */;
val* var_vis_module_type /* var vis_module_type: MVisibility */;
val* var71 /* : MVisibility */;
val* var73 /* : MVisibility */;
short int var74 /* : Bool */;
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
val* var97 /* : MVisibility */;
val* var99 /* : MVisibility */;
val* var100 /* : String */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var105 /* : MVisibility */;
val* var107 /* : MVisibility */;
short int var108 /* : Bool */;
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
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : CString */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : MVisibility */;
val* var137 /* : MVisibility */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var140 /* : String */;
val* var141 /* : String */;
val* var142 /* : String */;
val* var143 /* : String */;
short int var144 /* : Bool */;
int cltype145;
int idtype146;
val* var147 /* : ANodes[AType] */;
val* var149 /* : ANodes[AType] */;
val* var_ /* var : ANodes[AType] */;
val* var150 /* : Iterator[ANode] */;
val* var_151 /* var : Iterator[AType] */;
short int var152 /* : Bool */;
val* var153 /* : nullable Object */;
val* var_a /* var a: AType */;
val* var154 /* : nullable MType */;
val* var156 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
val* var_other160 /* var other: nullable Object */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
int cltype166;
int idtype167;
val* var168 /* : Array[MType] */;
val* var170 /* : Array[MType] */;
val* var_171 /* var : Array[MType] */;
val* var172 /* : IndexedIterator[nullable Object] */;
val* var_173 /* var : IndexedIterator[MType] */;
short int var174 /* : Bool */;
val* var176 /* : nullable Object */;
val* var_t177 /* var t: MType */;
var_node = p0;
var_mtype = p1;
var_mpropdef = p2;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var2 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var8 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mproperty = var6;
var_vis_type = ((val*)NULL);
var_mmodule_type = ((val*)NULL);
{
var9 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var9;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var10 = 0;
} else {
var10 = var_mtype->type->type_table[cltype] == idtype;
}
if (var10){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var13 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
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
{ /* Inline model#MClass#visibility (var11) on <var11:MClass> */
var16 = var11->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var11:MClass> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_vis_type = var14;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var19 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var17) on <var17:MClass> */
var22 = var17->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var17:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_mmodule_type = var20;
} else {
/* <var_mtype:MType> isa MVirtualType */
cltype24 = type_nitc__MVirtualType.color;
idtype25 = type_nitc__MVirtualType.id;
if(cltype24 >= var_mtype->type->table_size) {
var23 = 0;
} else {
var23 = var_mtype->type->type_table[cltype24] == idtype25;
}
if (var23){
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var28 = var_mtype->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var26) on <var26:MVirtualTypeProp> */
var31 = var26->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var26:MVirtualTypeProp> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_vis_type = var29;
{
{ /* Inline model#MVirtualType#mproperty (var_mtype) on <var_mtype:MType(MVirtualType)> */
var34 = var_mtype->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <var_mtype:MType(MVirtualType)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var32) on <var32:MVirtualTypeProp> */
var37 = var32->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var32:MVirtualTypeProp> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var35) on <var35:MClassDef> */
var40 = var35->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var35:MClassDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_mmodule_type = var38;
} else {
/* <var_mtype:MType> isa MParameterType */
cltype42 = type_nitc__MParameterType.color;
idtype43 = type_nitc__MParameterType.id;
if(cltype42 >= var_mtype->type->table_size) {
var41 = 0;
} else {
var41 = var_mtype->type->type_table[cltype42] == idtype43;
}
if (var41){
} else {
/* <var_mtype:MType> isa MNullType */
cltype45 = type_nitc__MNullType.color;
idtype46 = type_nitc__MNullType.id;
if(cltype45 >= var_mtype->type->table_size) {
var44 = 0;
} else {
var44 = var_mtype->type->type_table[cltype45] == idtype46;
}
if (var44){
} else {
/* <var_mtype:MType> isa MBottomType */
cltype48 = type_nitc__MBottomType.color;
idtype49 = type_nitc__MBottomType.id;
if(cltype48 >= var_mtype->type->table_size) {
var47 = 0;
} else {
var47 = var_mtype->type->type_table[cltype48] == idtype49;
}
if (var47){
} else {
/* <var_mtype:MType> isa MErrorType */
cltype51 = type_nitc__MErrorType.color;
idtype52 = type_nitc__MErrorType.id;
if(cltype51 >= var_mtype->type->table_size) {
var50 = 0;
} else {
var50 = var_mtype->type->type_table[cltype51] == idtype52;
}
if (var50){
} else {
if (unlikely(varonce==NULL)) {
var53 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "Unexpected type ";
var57 = core__abstract_text___CString___to_s_full(var56, 16l, 16l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[0]=var55;
} else {
var53 = varonce;
varonce = NULL;
}
{
var58 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var53)->values[1]=var58;
{
var59 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce = var53;
{
nitc___nitc__ANode___debug(var_node, var59); /* Direct call parser_nodes#ANode#debug on <var_node:ANode>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 390);
fatal_exit(1);
}
}
}
}
}
}
if (var_vis_type == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_vis_type,((val*)NULL)) on <var_vis_type:nullable MVisibility> */
var_other = ((val*)NULL);
{
var63 = ((short int(*)(val* self, val* p0))(var_vis_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_vis_type, var_other); /* == on <var_vis_type:nullable MVisibility(MVisibility)>*/
}
var64 = !var63;
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (var60){
if (var_mmodule_type == NULL) {
var65 = 0; /* is null */
} else {
var65 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mmodule_type,((val*)NULL)) on <var_mmodule_type:nullable MModule> */
var_other = ((val*)NULL);
{
var68 = ((short int(*)(val* self, val* p0))(var_mmodule_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mmodule_type, var_other); /* == on <var_mmodule_type:nullable MModule(MModule)>*/
}
var69 = !var68;
var66 = var69;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (unlikely(!var65)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 394);
fatal_exit(1);
}
{
var70 = nitc___nitc__MModule___visibility_for(var_mmodule, var_mmodule_type);
}
var_vis_module_type = var70;
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var73 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
var74 = core___core__Comparable____62d(var71, var_vis_type);
}
if (var74){
if (unlikely(varonce75==NULL)) {
var76 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "Error: the ";
var80 = core__abstract_text___CString___to_s_full(var79, 11l, 11l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var76)->values[0]=var78;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = " property `";
var84 = core__abstract_text___CString___to_s_full(var83, 11l, 11l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var76)->values[2]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "` cannot contain the ";
var88 = core__abstract_text___CString___to_s_full(var87, 21l, 21l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var76)->values[4]=var86;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = " type `";
var92 = core__abstract_text___CString___to_s_full(var91, 7l, 7l);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var76)->values[6]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "`.";
var96 = core__abstract_text___CString___to_s_full(var95, 2l, 2l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var76)->values[8]=var94;
} else {
var76 = varonce75;
varonce75 = NULL;
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var99 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__Object__to_s]))(var97); /* to_s on <var97:MVisibility>*/
}
((struct instance_core__NativeArray*)var76)->values[1]=var100;
{
var101 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var76)->values[3]=var101;
{
var102 = ((val*(*)(val* self))(var_vis_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_vis_type); /* to_s on <var_vis_type:nullable MVisibility(MVisibility)>*/
}
((struct instance_core__NativeArray*)var76)->values[5]=var102;
{
var103 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var76)->values[7]=var103;
{
var104 = ((val*(*)(val* self))(var76->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
{
nitc___nitc__ModelBuilder___error(self, var_node, var104); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var107 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = core___core__Comparable____62d(var105, var_vis_module_type);
}
if (var108){
if (unlikely(varonce109==NULL)) {
var110 = NEW_core__NativeArray(11l, &type_core__NativeArray__core__String);
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "Error: the ";
var114 = core__abstract_text___CString___to_s_full(var113, 11l, 11l);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var110)->values[0]=var112;
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = " property `";
var118 = core__abstract_text___CString___to_s_full(var117, 11l, 11l);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var110)->values[2]=var116;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "` cannot contain the type `";
var122 = core__abstract_text___CString___to_s_full(var121, 27l, 27l);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var110)->values[4]=var120;
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "` from the ";
var126 = core__abstract_text___CString___to_s_full(var125, 11l, 11l);
var124 = var126;
varonce123 = var124;
}
((struct instance_core__NativeArray*)var110)->values[6]=var124;
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = " module `";
var130 = core__abstract_text___CString___to_s_full(var129, 9l, 9l);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var110)->values[8]=var128;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "`.";
var134 = core__abstract_text___CString___to_s_full(var133, 2l, 2l);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var110)->values[10]=var132;
} else {
var110 = varonce109;
varonce109 = NULL;
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:MProperty> */
var137 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:MProperty> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
var138 = ((val*(*)(val* self))(var135->class->vft[COLOR_core__abstract_text__Object__to_s]))(var135); /* to_s on <var135:MVisibility>*/
}
((struct instance_core__NativeArray*)var110)->values[1]=var138;
{
var139 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var110)->values[3]=var139;
{
var140 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var110)->values[5]=var140;
{
var141 = ((val*(*)(val* self))(var_vis_module_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_vis_module_type); /* to_s on <var_vis_module_type:MVisibility>*/
}
((struct instance_core__NativeArray*)var110)->values[7]=var141;
{
var142 = ((val*(*)(val* self))(var_mmodule_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule_type); /* to_s on <var_mmodule_type:nullable MModule(MModule)>*/
}
((struct instance_core__NativeArray*)var110)->values[9]=var142;
{
var143 = ((val*(*)(val* self))(var110->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var110); /* native_to_s on <var110:NativeArray[String]>*/
}
varonce109 = var110;
{
nitc___nitc__ModelBuilder___error(self, var_node, var143); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
} else {
}
/* <var_node:ANode> isa AType */
cltype145 = type_nitc__AType.color;
idtype146 = type_nitc__AType.id;
if(cltype145 >= var_node->type->table_size) {
var144 = 0;
} else {
var144 = var_node->type->type_table[cltype145] == idtype146;
}
if (var144){
{
{ /* Inline parser_nodes#AType#n_types (var_node) on <var_node:ANode(AType)> */
var149 = var_node->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_node:ANode(AType)> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1782);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
var_ = var147;
{
var150 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_151 = var150;
for(;;) {
{
var152 = ((short int(*)(val* self))((((long)var_151&3)?class_info[((long)var_151&3)]:var_151->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_151); /* is_ok on <var_151:Iterator[AType]>*/
}
if (var152){
} else {
goto BREAK_label;
}
{
var153 = ((val*(*)(val* self))((((long)var_151&3)?class_info[((long)var_151&3)]:var_151->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_151); /* item on <var_151:Iterator[AType]>*/
}
var_a = var153;
{
{ /* Inline modelbuilder_base#AType#mtype (var_a) on <var_a:AType> */
var156 = var_a->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_a:AType> */
var154 = var156;
RET_LABEL155:(void)0;
}
}
var_t = var154;
if (var_t == NULL) {
var157 = 1; /* is null */
} else {
var157 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other160 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other160) on <var_t:nullable MType(MType)> */
var163 = var_t == var_other160;
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
var158 = var161;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
var157 = var158;
}
if (var157){
goto BREAK_label164;
} else {
}
{
nitc__modelize_property___ModelBuilder___check_visibility(self, var_a, var_t, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:ModelBuilder>*/
}
BREAK_label164: (void)0;
{
((void(*)(val* self))((((long)var_151&3)?class_info[((long)var_151&3)]:var_151->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_151); /* next on <var_151:Iterator[AType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_151&3)?class_info[((long)var_151&3)]:var_151->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_151); /* finish on <var_151:Iterator[AType]>*/
}
} else {
/* <var_mtype:MType> isa MGenericType */
cltype166 = type_nitc__MGenericType.color;
idtype167 = type_nitc__MGenericType.id;
if(cltype166 >= var_mtype->type->table_size) {
var165 = 0;
} else {
var165 = var_mtype->type->type_table[cltype166] == idtype167;
}
if (var165){
{
{ /* Inline model#MGenericType#arguments (var_mtype) on <var_mtype:MType(MGenericType)> */
var170 = var_mtype->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <var_mtype:MType(MGenericType)> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
var_171 = var168;
{
var172 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_171);
}
var_173 = var172;
for(;;) {
{
var174 = ((short int(*)(val* self))((((long)var_173&3)?class_info[((long)var_173&3)]:var_173->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_173); /* is_ok on <var_173:IndexedIterator[MType]>*/
}
if (var174){
} else {
goto BREAK_label175;
}
{
var176 = ((val*(*)(val* self))((((long)var_173&3)?class_info[((long)var_173&3)]:var_173->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_173); /* item on <var_173:IndexedIterator[MType]>*/
}
var_t177 = var176;
{
nitc__modelize_property___ModelBuilder___check_visibility(self, var_node, var_t177, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <self:ModelBuilder>*/
}
{
((void(*)(val* self))((((long)var_173&3)?class_info[((long)var_173&3)]:var_173->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_173); /* next on <var_173:IndexedIterator[MType]>*/
}
}
BREAK_label175: (void)0;
{
((void(*)(val* self))((((long)var_173&3)?class_info[((long)var_173&3)]:var_173->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_173); /* finish on <var_173:IndexedIterator[MType]>*/
}
} else {
}
}
RET_LABEL:;
}
/* method modelize_property#ModelBuilder#check_virtual_types_circularity for (self: ModelBuilder, ANode, MVirtualTypeProp, MType, MModule): Bool */
short int nitc__modelize_property___ModelBuilder___check_virtual_types_circularity(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_mproperty /* var mproperty: MVirtualTypeProp */;
val* var_recv /* var recv: MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : MVirtualType */;
val* var3 /* : MVirtualType */;
val* var_mtype /* var mtype: MVirtualType */;
val* var4 /* : POSet[MType] */;
val* var_poset /* var poset: POSet[MType] */;
val* var6 /* : List[MType] */;
val* var_todo /* var todo: List[MType] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var14 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var15 /* : MType */;
val* var17 /* : MType */;
val* var_nexts /* var nexts: nullable Object */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
val* var21 /* : Array[MType] */;
val* var23 /* : Array[MType] */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : MVirtualTypeProp */;
val* var29 /* : MVirtualTypeProp */;
val* var_vt /* var vt: MVirtualTypeProp */;
val* var30 /* : Array[MPropDef] */;
val* var_defs /* var defs: Array[MVirtualTypeDef] */;
short int var31 /* : Bool */;
val* var32 /* : Array[MType] */;
val* var_33 /* var : Array[MVirtualTypeDef] */;
val* var34 /* : IndexedIterator[nullable Object] */;
val* var_35 /* var : IndexedIterator[MVirtualTypeDef] */;
short int var36 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_d /* var d: MVirtualTypeDef */;
val* var39 /* : nullable Object */;
val* var40 /* : nullable MType */;
val* var42 /* : nullable MType */;
val* var_next /* var next: nullable MType */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
val* var_55 /* var : Array[MType] */;
val* var56 /* : IndexedIterator[nullable Object] */;
val* var_57 /* var : IndexedIterator[MType] */;
short int var58 /* : Bool */;
val* var60 /* : nullable Object */;
val* var_next61 /* var next: MType */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
val* var68 /* : NativeArray[String] */;
static val* varonce;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var85 /* : NativeArray[String] */;
static val* varonce84;
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
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var105 /* : String */;
var_node = p0;
var_mproperty = p1;
var_recv = p2;
var_mmodule = p3;
{
{ /* Inline model#MVirtualTypeProp#mvirtualtype (var_mproperty) on <var_mproperty:MVirtualTypeProp> */
var3 = var_mproperty->attrs[COLOR_nitc__model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var_mproperty:MVirtualTypeProp> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2333);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
var4 = NEW_poset__POSet(&type_poset__POSet__nitc__MType);
{
{ /* Inline kernel#Object#init (var4) on <var4:POSet[MType]> */
RET_LABEL5:(void)0;
}
}
var_poset = var4;
var6 = NEW_core__List(&type_core__List__nitc__MType);
{
{ /* Inline list#List#init (var6) on <var6:List[MType]> */
{
((void(*)(val* self))(var6->class->vft[COLOR_core___core__List___core__kernel__Object__init]))(var6); /* init on <var6:List[MType]>*/
}
RET_LABEL7:(void)0;
}
}
var_todo = var6;
{
core___core__Sequence___SimpleCollection__add(var_todo, var_mtype); /* Direct call abstract_collection#Sequence#add on <var_todo:List[MType]>*/
}
for(;;) {
{
var8 = core___core__List___core__abstract_collection__Collection__is_empty(var_todo);
}
var9 = !var8;
if (var9){
{
var10 = core___core__List___core__abstract_collection__Sequence__pop(var_todo);
}
var_t = var10;
{
var11 = ((short int(*)(val* self))(var_t->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_t); /* need_anchor on <var_t:MType>*/
}
var12 = !var11;
if (var12){
goto BREAK_label;
} else {
}
/* <var_t:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_t->type->table_size) {
var13 = 0;
} else {
var13 = var_t->type->type_table[cltype] == idtype;
}
if (var13){
var14 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var14, 1l); /* Direct call array#Array#with_capacity on <var14:Array[MType]>*/
}
var_ = var14;
{
{ /* Inline model#MProxyType#mtype (var_t) on <var_t:MType(MNullableType)> */
var17 = var_t->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_t:MType(MNullableType)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var15); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
var_nexts = var_;
} else {
/* <var_t:MType> isa MGenericType */
cltype19 = type_nitc__MGenericType.color;
idtype20 = type_nitc__MGenericType.id;
if(cltype19 >= var_t->type->table_size) {
var18 = 0;
} else {
var18 = var_t->type->type_table[cltype19] == idtype20;
}
if (var18){
{
{ /* Inline model#MGenericType#arguments (var_t) on <var_t:MType(MGenericType)> */
var23 = var_t->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <var_t:MType(MGenericType)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_nexts = var21;
} else {
/* <var_t:MType> isa MVirtualType */
cltype25 = type_nitc__MVirtualType.color;
idtype26 = type_nitc__MVirtualType.id;
if(cltype25 >= var_t->type->table_size) {
var24 = 0;
} else {
var24 = var_t->type->type_table[cltype25] == idtype26;
}
if (var24){
{
{ /* Inline model#MVirtualType#mproperty (var_t) on <var_t:MType(MVirtualType)> */
var29 = var_t->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <var_t:MType(MVirtualType)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_vt = var27;
{
var30 = nitc___nitc__MProperty___lookup_definitions(var_vt, var_mmodule, var_recv);
}
var_defs = var30;
{
var31 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_defs);
}
if (var31){
var = 0;
goto RET_LABEL;
} else {
}
var32 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var32); /* Direct call array#Array#init on <var32:Array[MType]>*/
}
var_nexts = var32;
var_33 = var_defs;
{
var34 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_33);
}
var_35 = var34;
for(;;) {
{
var36 = ((short int(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_35); /* is_ok on <var_35:IndexedIterator[MVirtualTypeDef]>*/
}
if (var36){
} else {
goto BREAK_label37;
}
{
var38 = ((val*(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_35); /* item on <var_35:IndexedIterator[MVirtualTypeDef]>*/
}
var_d = var38;
{
var39 = core___core__SequenceRead___Collection__first(var_defs);
}
{
{ /* Inline model#MVirtualTypeDef#bound (var39) on <var39:nullable Object(MVirtualTypeDef)> */
var42 = var39->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var39:nullable Object(MVirtualTypeDef)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_next = var40;
if (var_next == NULL) {
var43 = 1; /* is null */
} else {
var43 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_next,((val*)NULL)) on <var_next:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_next,var_other) on <var_next:nullable MType(MType)> */
var48 = var_next == var_other;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
if (var43){
var = 0;
goto RET_LABEL;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_nexts, var_next); /* Direct call array#Array#add on <var_nexts:nullable Object(Array[MType])>*/
}
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_35); /* next on <var_35:IndexedIterator[MVirtualTypeDef]>*/
}
}
BREAK_label37: (void)0;
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_35); /* finish on <var_35:IndexedIterator[MVirtualTypeDef]>*/
}
} else {
/* <var_t:MType> isa MClassType */
cltype50 = type_nitc__MClassType.color;
idtype51 = type_nitc__MClassType.id;
if(cltype50 >= var_t->type->table_size) {
var49 = 0;
} else {
var49 = var_t->type->type_table[cltype50] == idtype51;
}
if (var49){
goto BREAK_label;
} else {
/* <var_t:MType> isa MParameterType */
cltype53 = type_nitc__MParameterType.color;
idtype54 = type_nitc__MParameterType.id;
if(cltype53 >= var_t->type->table_size) {
var52 = 0;
} else {
var52 = var_t->type->type_table[cltype53] == idtype54;
}
if (var52){
goto BREAK_label;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 461);
fatal_exit(1);
}
}
}
}
}
var_55 = var_nexts;
{
var56 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_55);
}
var_57 = var56;
for(;;) {
{
var58 = ((short int(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_57); /* is_ok on <var_57:IndexedIterator[MType]>*/
}
if (var58){
} else {
goto BREAK_label59;
}
{
var60 = ((val*(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_57); /* item on <var_57:IndexedIterator[MType]>*/
}
var_next61 = var60;
{
var62 = poset___poset__POSet___has_edge(var_poset, var_next61, var_t);
}
if (var62){
{
{ /* Inline kernel#Object#== (var_mtype,var_next61) on <var_mtype:MVirtualType> */
var_other = var_next61;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:MVirtualType> */
var67 = var_mtype == var_other;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
if (unlikely(varonce==NULL)) {
var68 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "Error: circularity of virtual type definition: ";
var72 = core__abstract_text___CString___to_s_full(var71, 47l, 47l);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var68)->values[0]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = " <-> ";
var76 = core__abstract_text___CString___to_s_full(var75, 5l, 5l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var68)->values[2]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = ".";
var80 = core__abstract_text___CString___to_s_full(var79, 1l, 1l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var68)->values[4]=var78;
} else {
var68 = varonce;
varonce = NULL;
}
{
var81 = ((val*(*)(val* self))(var_next61->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_next61); /* to_s on <var_next61:MType>*/
}
((struct instance_core__NativeArray*)var68)->values[1]=var81;
{
var82 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MType>*/
}
((struct instance_core__NativeArray*)var68)->values[3]=var82;
{
var83 = ((val*(*)(val* self))(var68->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce = var68;
{
nitc___nitc__ModelBuilder___error(self, var_node, var83); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce84==NULL)) {
var85 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "Error: circularity of virtual type definition: ";
var89 = core__abstract_text___CString___to_s_full(var88, 47l, 47l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var85)->values[0]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " -> ";
var93 = core__abstract_text___CString___to_s_full(var92, 4l, 4l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var85)->values[2]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = " <-> ";
var97 = core__abstract_text___CString___to_s_full(var96, 5l, 5l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var85)->values[4]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = ".";
var101 = core__abstract_text___CString___to_s_full(var100, 1l, 1l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var85)->values[6]=var99;
} else {
var85 = varonce84;
varonce84 = NULL;
}
{
var102 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MVirtualType>*/
}
((struct instance_core__NativeArray*)var85)->values[1]=var102;
{
var103 = ((val*(*)(val* self))(var_next61->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_next61); /* to_s on <var_next61:MType>*/
}
((struct instance_core__NativeArray*)var85)->values[3]=var103;
{
var104 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:MType>*/
}
((struct instance_core__NativeArray*)var85)->values[5]=var104;
{
var105 = ((val*(*)(val* self))(var85->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
{
nitc___nitc__ModelBuilder___error(self, var_node, var105); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
}
var = 0;
goto RET_LABEL;
} else {
{
poset___poset__POSet___add_edge(var_poset, var_t, var_next61); /* Direct call poset#POSet#add_edge on <var_poset:POSet[MType]>*/
}
{
core___core__Sequence___SimpleCollection__add(var_todo, var_next61); /* Direct call abstract_collection#Sequence#add on <var_todo:List[MType]>*/
}
}
{
((void(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_57); /* next on <var_57:IndexedIterator[MType]>*/
}
}
BREAK_label59: (void)0;
{
((void(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_57); /* finish on <var_57:IndexedIterator[MType]>*/
}
} else {
goto BREAK_label106;
}
BREAK_label: (void)0;
}
BREAK_label106: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#MPropDef#has_supercall for (self: MPropDef): Bool */
short int nitc__modelize_property___MPropDef___has_supercall(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <self:MPropDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MPropDef#has_supercall= for (self: MPropDef, Bool) */
void nitc__modelize_property___MPropDef___has_supercall_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = p0; /* _has_supercall on <self:MPropDef> */
RET_LABEL:;
}
/* method modelize_property#AClassdef#build_properties_is_done for (self: AClassdef): Bool */
short int nitc__modelize_property___AClassdef___build_properties_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AClassdef___build_properties_is_done].s; /* _build_properties_is_done on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AClassdef#build_properties_is_done= for (self: AClassdef, Bool) */
void nitc__modelize_property___AClassdef___build_properties_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AClassdef___build_properties_is_done].s = p0; /* _build_properties_is_done on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_property#MClass#root_init for (self: MClass): nullable MMethodDef */
val* nitc__modelize_property___MClass___root_init(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__MClass___root_init].val; /* _root_init on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClass#root_init= for (self: MClass, nullable MMethodDef) */
void nitc__modelize_property___MClass___root_init_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__MClass___root_init].val = p0; /* _root_init on <self:MClass> */
RET_LABEL:;
}
/* method modelize_property#MClassDef#mprop2npropdef for (self: MClassDef): Map[MProperty, APropdef] */
val* nitc__modelize_property___MClassDef___mprop2npropdef(val* self) {
val* var /* : Map[MProperty, APropdef] */;
val* var1 /* : Map[MProperty, APropdef] */;
var1 = self->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <self:MClassDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#MClassDef#build_self_type for (self: MClassDef, ModelBuilder, AClassdef) */
void nitc__modelize_property___MClassDef___build_self_type(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var13 /* : Bool */;
val* var14 /* : MPropDef */;
val* var16 /* : MPropDef */;
val* var_intro /* var intro: MVirtualTypeDef */;
val* var17 /* : MClassDef */;
val* var19 /* : MClassDef */;
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : HashMap[MPropDef, APropdef] */;
val* var27 /* : HashMap[MPropDef, APropdef] */;
val* var28 /* : nullable Object */;
val* var_nintro /* var nintro: APropdef */;
val* var29 /* : MClass */;
val* var31 /* : MClass */;
val* var32 /* : String */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
short int var39 /* : Bool */;
val* var_other41 /* var other: nullable Object */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : MVisibility */;
val* var50 /* : MVisibility */;
val* var51 /* : Sys */;
val* var52 /* : MVisibility */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : MVirtualTypeDef */;
val* var69 /* : Location */;
val* var71 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
val* var72 /* : MClass */;
val* var74 /* : MClass */;
val* var75 /* : MClassType */;
val* var77 /* : MClassType */;
var_modelbuilder = p0;
var_nclassdef = p1;
{
var = nitc___nitc__MClassDef___is_intro(self);
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "SELF";
var4 = core__abstract_text___CString___to_s_full(var3, 4l, 4l);
var2 = var4;
varonce = var2;
}
var_name = var2;
{
var5 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nclassdef, self, var_name);
}
var_mprop = var5;
if (var_mprop == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,((val*)NULL)) on <var_mprop:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other) on <var_mprop:nullable MProperty(MProperty)> */
var11 = var_mprop == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
goto RET_LABEL;
} else {
}
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype = type_nitc__MVirtualTypeProp.color;
idtype = type_nitc__MVirtualTypeProp.id;
if(cltype >= var_mprop->type->table_size) {
var12 = 0;
} else {
var12 = var_mprop->type->type_table[cltype] == idtype;
}
var13 = !var12;
if (var13){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#intro (var_mprop) on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
var16 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_intro = var14;
{
{ /* Inline model#MPropDef#mclassdef (var_intro) on <var_intro:MVirtualTypeDef> */
var19 = var_intro->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_intro:MVirtualTypeDef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_intro_mclassdef = var17;
{
{ /* Inline kernel#Object#== (var_intro_mclassdef,self) on <var_intro_mclassdef:MClassDef> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var_intro_mclassdef,var_other) on <var_intro_mclassdef:MClassDef> */
var24 = var_intro_mclassdef == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var27 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var25, var_intro);
}
var_nintro = var28;
{
{ /* Inline model#MClassDef#mclass (var_intro_mclassdef) on <var_intro_mclassdef:MClassDef> */
var31 = var_intro_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_intro_mclassdef:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MClass#name (var29) on <var29:MClass> */
var34 = var29->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var29:MClass> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Object";
var38 = core__abstract_text___CString___to_s_full(var37, 6l, 6l);
var36 = var38;
varonce35 = var36;
}
{
{ /* Inline kernel#Object#!= (var32,var36) on <var32:String> */
var_other41 = var36;
{
var42 = ((short int(*)(val* self, val* p0))(var32->class->vft[COLOR_core__kernel__Object___61d_61d]))(var32, var_other41); /* == on <var32:String>*/
}
var43 = !var42;
var39 = var43;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Error: the virtual type `SELF` must be declared in `Object`.";
var47 = core__abstract_text___CString___to_s_full(var46, 60l, 60l);
var45 = var47;
varonce44 = var45;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nintro, var45); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
var50 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:nullable MProperty(MVirtualTypeProp)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
var51 = glob_sys;
{
var52 = nitc__model_base___core__Sys___public_visibility(var51);
}
{
{ /* Inline kernel#Object#!= (var48,var52) on <var48:MVisibility> */
var_other41 = var52;
{
var55 = ((short int(*)(val* self, val* p0))(var48->class->vft[COLOR_core__kernel__Object___61d_61d]))(var48, var_other41); /* == on <var48:MVisibility>*/
}
var56 = !var55;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "Error: the virtual type `SELF` must be public.";
var60 = core__abstract_text___CString___to_s_full(var59, 46l, 46l);
var58 = var60;
varonce57 = var58;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nintro, var58); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_intro) on <var_intro:MVirtualTypeDef> */
var63 = var_intro->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_intro:MVirtualTypeDef> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (var61){
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "Error: the virtual type `SELF` cannot be fixed.";
var67 = core__abstract_text___CString___to_s_full(var66, 47l, 47l);
var65 = var67;
varonce64 = var65;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nintro, var65); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
var68 = NEW_nitc__MVirtualTypeDef(&type_nitc__MVirtualTypeDef);
{
{ /* Inline model#MClassDef#location (self) on <self:MClassDef> */
var71 = self->attrs[COLOR_nitc__model__MClassDef___location].val; /* _location on <self:MClassDef> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 606);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var68, self); /* mclassdef= on <var68:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var68, var_mprop); /* mproperty= on <var68:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var68, var69); /* location= on <var68:MVirtualTypeDef>*/
}
{
((void(*)(val* self))(var68->class->vft[COLOR_core__kernel__Object__init]))(var68); /* init on <var68:MVirtualTypeDef>*/
}
var_mpropdef = var68;
{
{ /* Inline model#MClassDef#mclass (self) on <self:MClassDef> */
var74 = self->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <self:MClassDef> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var72) on <var72:MClass> */
var77 = var72->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var72:MClass> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,var75) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val = var75; /* _bound on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL78:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#APropdef#mpropdef for (self: APropdef): nullable MPropDef */
val* nitc__modelize_property___APropdef___mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#mpropdef= for (self: APropdef, nullable MPropDef) */
void nitc__modelize_property___APropdef___mpropdef_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mpropdef) <p0:nullable MPropDef> isa nullable MPROPDEF */
/* <p0:nullable MPropDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 557);
fatal_exit(1);
}
self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val = p0; /* _mpropdef on <self:APropdef> */
RET_LABEL:;
}
/* method modelize_property#APropdef#build_property for (self: APropdef, ModelBuilder, MClassDef) */
void nitc__modelize_property___APropdef___build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
var_modelbuilder = p0;
var_mclassdef = p1;
RET_LABEL:;
}
/* method modelize_property#APropdef#build_signature for (self: APropdef, ModelBuilder) */
void nitc__modelize_property___APropdef___build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property#APropdef#check_signature for (self: APropdef, ModelBuilder) */
void nitc__modelize_property___APropdef___check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property#APropdef#new_property_visibility for (self: APropdef, ModelBuilder, MClassDef, nullable AVisibility): MVisibility */
val* nitc__modelize_property___APropdef___new_property_visibility(val* self, val* p0, val* p1, val* p2) {
val* var /* : MVisibility */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MVisibility */;
val* var9 /* : Sys */;
val* var10 /* : MVisibility */;
short int var11 /* : Bool */;
val* var_other13 /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : Sys */;
val* var21 /* : MVisibility */;
val* var22 /* : MClass */;
val* var24 /* : MClass */;
val* var25 /* : MVisibility */;
val* var27 /* : MVisibility */;
val* var28 /* : Sys */;
val* var29 /* : MVisibility */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : Sys */;
val* var36 /* : MVisibility */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : Sys */;
val* var52 /* : MVisibility */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : Sys */;
val* var72 /* : MVisibility */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_nvisibility = p2;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___public_visibility(var1);
}
var_mvisibility = var2;
if (var_nvisibility == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nvisibility, var_other); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
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
var8 = ((val*(*)(val* self))(var_nvisibility->class->vft[COLOR_nitc__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility); /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var_mvisibility = var8;
var9 = glob_sys;
{
var10 = nitc__model_base___core__Sys___intrude_visibility(var9);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var10) on <var_mvisibility:MVisibility> */
var_other13 = var10;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other13) on <var_mvisibility:MVisibility> */
var16 = var_mvisibility == var_other13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "Error: `intrude` is not a legal visibility for properties.";
var19 = core__abstract_text___CString___to_s_full(var18, 58l, 58l);
var17 = var19;
varonce = var17;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nvisibility, var17); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var20 = glob_sys;
{
var21 = nitc__model_base___core__Sys___public_visibility(var20);
}
var_mvisibility = var21;
} else {
}
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var24 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var22) on <var22:MClass> */
var27 = var22->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var22:MClass> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = glob_sys;
{
var29 = nitc__model_base___core__Sys___private_visibility(var28);
}
{
{ /* Inline kernel#Object#== (var25,var29) on <var25:MVisibility> */
var_other13 = var29;
{
{ /* Inline kernel#Object#is_same_instance (var25,var_other13) on <var25:MVisibility> */
var34 = var25 == var_other13;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
var35 = glob_sys;
{
var36 = nitc__model_base___core__Sys___protected_visibility(var35);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var36) on <var_mvisibility:MVisibility> */
var_other13 = var36;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other13) on <var_mvisibility:MVisibility> */
var41 = var_mvisibility == var_other13;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
if (var_nvisibility == NULL) {
var42 = 0; /* is null */
} else {
var42 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
var45 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nvisibility, var_other); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var46 = !var45;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (unlikely(!var42)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 575);
fatal_exit(1);
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "Error: `private` is the only legal visibility for properties in a private class.";
var50 = core__abstract_text___CString___to_s_full(var49, 80l, 80l);
var48 = var50;
varonce47 = var48;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nvisibility, var48); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var51 = glob_sys;
{
var52 = nitc__model_base___core__Sys___private_visibility(var51);
}
{
{ /* Inline kernel#Object#== (var_mvisibility,var52) on <var_mvisibility:MVisibility> */
var_other13 = var52;
{
{ /* Inline kernel#Object#is_same_instance (var_mvisibility,var_other13) on <var_mvisibility:MVisibility> */
var57 = var_mvisibility == var_other13;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
if (var_nvisibility == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
var61 = ((short int(*)(val* self, val* p0))(var_nvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nvisibility, var_other); /* == on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var62 = !var61;
var59 = var62;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (unlikely(!var58)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 578);
fatal_exit(1);
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "useless-visibility";
var66 = core__abstract_text___CString___to_s_full(var65, 18l, 18l);
var64 = var66;
varonce63 = var64;
}
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "Warning: `private` is superfluous since the only legal visibility for properties in a private class is private.";
var70 = core__abstract_text___CString___to_s_full(var69, 111l, 111l);
var68 = var70;
varonce67 = var68;
}
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var_nvisibility, var64, var68); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
var71 = glob_sys;
{
var72 = nitc__model_base___core__Sys___private_visibility(var71);
}
var_mvisibility = var72;
} else {
}
var = var_mvisibility;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#set_doc for (self: APropdef, MPropDef, ModelBuilder) */
void nitc__modelize_property___APropdef___set_doc(val* self, val* p0, val* p1) {
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable ADoc */;
val* var2 /* : nullable ADoc */;
val* var_ndoc /* var ndoc: nullable ADoc */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MDoc */;
val* var_mdoc /* var mdoc: MDoc */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : MProperty */;
val* var16 /* : MProperty */;
val* var17 /* : MVisibility */;
val* var19 /* : MVisibility */;
val* var20 /* : Sys */;
val* var21 /* : MVisibility */;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
val* var24 /* : String */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
static val* varonce32;
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
val* var46 /* : MProperty */;
val* var48 /* : MProperty */;
val* var49 /* : String */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable AAnnotation */;
val* var_at_deprecated /* var at_deprecated: nullable AAnnotation */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : MDeprecationInfo */;
val* var_info /* var info: MDeprecationInfo */;
val* var69 /* : nullable ADoc */;
val* var71 /* : nullable ADoc */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : MDoc */;
val* var79 /* : MProperty */;
val* var81 /* : MProperty */;
var_mpropdef = p0;
var_modelbuilder = p1;
{
{ /* Inline parser_nodes#ADefinition#n_doc (self) on <self:APropdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:APropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_ndoc = var;
if (var_ndoc == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,((val*)NULL)) on <var_ndoc:nullable ADoc> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ndoc, var_other); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
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
var8 = nitc__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
var_mdoc = var8;
{
{ /* Inline mdoc#MEntity#mdoc= (var_mpropdef,var_mdoc) on <var_mpropdef:MPropDef> */
var_mpropdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var_mdoc; /* _mdoc on <var_mpropdef:MPropDef> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline mdoc#MDoc#original_mentity= (var_mdoc,var_mpropdef) on <var_mdoc:MDoc> */
var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___original_mentity].val = var_mpropdef; /* _original_mentity on <var_mdoc:MDoc> */
RET_LABEL10:(void)0;
}
}
} else {
{
var13 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var_ = var13;
if (var13){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var16 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var14) on <var14:MProperty> */
var19 = var14->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var14:MProperty> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = glob_sys;
{
var21 = nitc__model_base___core__Sys___protected_visibility(var20);
}
{
var22 = core___core__Comparable____62d_61d(var17, var21);
}
var12 = var22;
} else {
var12 = var_;
}
var_23 = var12;
if (var12){
{
var24 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(var_mpropdef);
}
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "new";
var27 = core__abstract_text___CString___to_s_full(var26, 3l, 3l);
var25 = var27;
varonce = var25;
}
{
{ /* Inline kernel#Object#!= (var24,var25) on <var24:String> */
var_other = var25;
{
var30 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_core__kernel__Object___61d_61d]))(var24, var_other); /* == on <var24:String>*/
}
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var11 = var28;
} else {
var11 = var_23;
}
if (var11){
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "missing-doc";
var35 = core__abstract_text___CString___to_s_full(var34, 11l, 11l);
var33 = var35;
varonce32 = var33;
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Documentation warning: Undocumented property `";
var41 = core__abstract_text___CString___to_s_full(var40, 46l, 46l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "`";
var45 = core__abstract_text___CString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[2]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var48 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__Object__to_s]))(var46); /* to_s on <var46:MProperty>*/
}
((struct instance_core__NativeArray*)var37)->values[1]=var49;
{
var50 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var33, var50); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "deprecated";
var54 = core__abstract_text___CString___to_s_full(var53, 10l, 10l);
var52 = var54;
varonce51 = var52;
}
{
var55 = nitc__annotation___Prod___get_single_annotation(self, var52, var_modelbuilder);
}
var_at_deprecated = var55;
if (var_at_deprecated == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at_deprecated,((val*)NULL)) on <var_at_deprecated:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var59 = ((short int(*)(val* self, val* p0))(var_at_deprecated->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_at_deprecated, var_other); /* == on <var_at_deprecated:nullable AAnnotation(AAnnotation)>*/
}
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
{
var61 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var62 = !var61;
if (var62){
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "Error: method redefinition cannot be deprecated.";
var66 = core__abstract_text___CString___to_s_full(var65, 48l, 48l);
var64 = var66;
varonce63 = var64;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var64); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
var67 = NEW_nitc__MDeprecationInfo(&type_nitc__MDeprecationInfo);
{
{ /* Inline kernel#Object#init (var67) on <var67:MDeprecationInfo> */
RET_LABEL68:(void)0;
}
}
var_info = var67;
{
{ /* Inline parser_nodes#ADefinition#n_doc (var_at_deprecated) on <var_at_deprecated:nullable AAnnotation(AAnnotation)> */
var71 = var_at_deprecated->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_at_deprecated:nullable AAnnotation(AAnnotation)> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_ndoc = var69;
if (var_ndoc == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ndoc,((val*)NULL)) on <var_ndoc:nullable ADoc> */
var_other = ((val*)NULL);
{
var75 = ((short int(*)(val* self, val* p0))(var_ndoc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ndoc, var_other); /* == on <var_ndoc:nullable ADoc(ADoc)>*/
}
var76 = !var75;
var73 = var76;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
if (var72){
{
var77 = nitc__modelbuilder_base___ADoc___to_mdoc(var_ndoc);
}
{
{ /* Inline mdoc#MDeprecationInfo#mdoc= (var_info,var77) on <var_info:MDeprecationInfo> */
var_info->attrs[COLOR_nitc__mdoc__MDeprecationInfo___mdoc].val = var77; /* _mdoc on <var_info:MDeprecationInfo> */
RET_LABEL78:(void)0;
}
}
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MPropDef> */
var81 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MPropDef> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation= (var79,var_info) on <var79:MProperty> */
var79->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val = var_info; /* _deprecation on <var79:MProperty> */
RET_LABEL82:(void)0;
}
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_property_visibility for (self: APropdef, ModelBuilder, nullable AVisibility, MProperty) */
void nitc__modelize_property___APropdef___check_redef_property_visibility(val* self, val* p0, val* p1, val* p2) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var_mprop /* var mprop: MProperty */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
short int var7 /* : Bool */;
val* var8 /* : MVisibility */;
val* var10 /* : MVisibility */;
short int var11 /* : Bool */;
val* var_other13 /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
val* var16 /* : Sys */;
val* var17 /* : MVisibility */;
short int var18 /* : Bool */;
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
val* var35 /* : MVisibility */;
val* var37 /* : MVisibility */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var40 /* : String */;
var_modelbuilder = p0;
var_nvisibility = p1;
var_mprop = p2;
if (var_nvisibility == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nvisibility,((val*)NULL)) on <var_nvisibility:nullable AVisibility> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nvisibility,var_other) on <var_nvisibility:nullable AVisibility(AVisibility)> */
var5 = var_nvisibility == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(var_nvisibility->class->vft[COLOR_nitc__modelbuilder_base__AVisibility__mvisibility]))(var_nvisibility); /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/
}
var_mvisibility = var6;
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var10 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var8) on <var_mvisibility:MVisibility> */
var_other13 = var8;
{
var14 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mvisibility, var_other13); /* == on <var_mvisibility:MVisibility>*/
}
var15 = !var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
var16 = glob_sys;
{
var17 = nitc__model_base___core__Sys___public_visibility(var16);
}
{
{ /* Inline kernel#Object#!= (var_mvisibility,var17) on <var_mvisibility:MVisibility> */
var_other13 = var17;
{
var20 = ((short int(*)(val* self, val* p0))(var_mvisibility->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mvisibility, var_other13); /* == on <var_mvisibility:MVisibility>*/
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var7 = var18;
} else {
var7 = var_;
}
if (var7){
if (unlikely(varonce==NULL)) {
var22 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Error: redefinition changed the visibility from `";
var26 = core__abstract_text___CString___to_s_full(var25, 49l, 49l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[0]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "` to `";
var30 = core__abstract_text___CString___to_s_full(var29, 6l, 6l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var22)->values[2]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "`.";
var34 = core__abstract_text___CString___to_s_full(var33, 2l, 2l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var22)->values[4]=var32;
} else {
var22 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var37 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__Object__to_s]))(var35); /* to_s on <var35:MVisibility>*/
}
((struct instance_core__NativeArray*)var22)->values[1]=var38;
{
var39 = ((val*(*)(val* self))(var_mvisibility->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mvisibility); /* to_s on <var_mvisibility:MVisibility>*/
}
((struct instance_core__NativeArray*)var22)->values[3]=var39;
{
var40 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce = var22;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nvisibility, var40); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#APropdef#check_redef_keyword for (self: APropdef, ModelBuilder, MClassDef, nullable Token, Bool, MProperty): Bool */
short int nitc__modelize_property___APropdef___check_redef_keyword(val* self, val* p0, val* p1, val* p2, short int p3, val* p4) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_kwredef /* var kwredef: nullable Token */;
short int var_need_redef /* var need_redef: Bool */;
val* var_mprop /* var mprop: MProperty */;
val* var1 /* : Map[MProperty, APropdef] */;
val* var3 /* : Map[MProperty, APropdef] */;
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
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : MClass */;
val* var25 /* : MClass */;
val* var26 /* : String */;
val* var27 /* : Map[MProperty, APropdef] */;
val* var29 /* : Map[MProperty, APropdef] */;
val* var30 /* : nullable Object */;
val* var31 /* : Location */;
val* var33 /* : Location */;
long var34 /* : Int */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : String */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var47 /* : Bool */;
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
val* var64 /* : MClass */;
val* var66 /* : MClass */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var70 /* : String */;
val* var71 /* : String */;
short int var72 /* : Bool */;
val* var73 /* : MClassDef */;
val* var75 /* : MClassDef */;
val* var76 /* : MModule */;
val* var78 /* : MModule */;
val* var79 /* : nullable MGroup */;
val* var81 /* : nullable MGroup */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var_other85 /* var other: nullable Object */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var_88 /* var : Bool */;
val* var89 /* : MVisibility */;
val* var91 /* : MVisibility */;
val* var92 /* : Sys */;
val* var93 /* : MVisibility */;
short int var94 /* : Bool */;
val* var95 /* : Model */;
val* var97 /* : Model */;
val* var98 /* : String */;
val* var100 /* : String */;
val* var101 /* : nullable Array[MProperty] */;
val* var_others /* var others: nullable Array[MProperty] */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var_107 /* var : Array[MProperty] */;
val* var108 /* : IndexedIterator[nullable Object] */;
val* var_109 /* var : IndexedIterator[MProperty] */;
short int var110 /* : Bool */;
val* var111 /* : nullable Object */;
val* var_other112 /* var other: MProperty */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var_121 /* var : Bool */;
val* var122 /* : MClassDef */;
val* var124 /* : MClassDef */;
val* var125 /* : MModule */;
val* var127 /* : MModule */;
val* var128 /* : nullable MGroup */;
val* var130 /* : nullable MGroup */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
short int var_136 /* var : Bool */;
val* var137 /* : MClassDef */;
val* var139 /* : MClassDef */;
val* var140 /* : MModule */;
val* var142 /* : MModule */;
val* var143 /* : nullable MGroup */;
val* var145 /* : nullable MGroup */;
val* var146 /* : MPackage */;
val* var148 /* : MPackage */;
val* var149 /* : MClassDef */;
val* var151 /* : MClassDef */;
val* var152 /* : MModule */;
val* var154 /* : MModule */;
val* var155 /* : nullable MGroup */;
val* var157 /* : nullable MGroup */;
val* var158 /* : MPackage */;
val* var160 /* : MPackage */;
short int var161 /* : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var_166 /* var : Bool */;
val* var167 /* : MClassDef */;
val* var169 /* : MClassDef */;
val* var170 /* : MClass */;
val* var172 /* : MClass */;
val* var173 /* : String */;
val* var175 /* : String */;
val* var176 /* : MClassDef */;
val* var178 /* : MClassDef */;
val* var179 /* : MClass */;
val* var181 /* : MClass */;
val* var182 /* : String */;
val* var184 /* : String */;
short int var185 /* : Bool */;
short int var_186 /* var : Bool */;
val* var187 /* : MVisibility */;
val* var189 /* : MVisibility */;
val* var190 /* : Sys */;
val* var191 /* : MVisibility */;
short int var192 /* : Bool */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : CString */;
val* var196 /* : String */;
val* var198 /* : NativeArray[String] */;
static val* varonce197;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : CString */;
val* var202 /* : String */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : CString */;
val* var206 /* : String */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : CString */;
val* var210 /* : String */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : CString */;
val* var214 /* : String */;
val* var215 /* : String */;
val* var216 /* : MClassDef */;
val* var218 /* : MClassDef */;
val* var219 /* : MModule */;
val* var221 /* : MModule */;
val* var222 /* : String */;
val* var223 /* : MClassDef */;
val* var225 /* : MClassDef */;
val* var226 /* : MClass */;
val* var228 /* : MClass */;
val* var229 /* : String */;
val* var231 /* : String */;
val* var232 /* : String */;
short int var233 /* : Bool */;
val* var235 /* : NativeArray[String] */;
static val* varonce234;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : CString */;
val* var239 /* : String */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : CString */;
val* var243 /* : String */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : CString */;
val* var247 /* : String */;
val* var248 /* : MClass */;
val* var250 /* : MClass */;
val* var251 /* : String */;
val* var252 /* : String */;
val* var254 /* : String */;
val* var255 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_kwredef = p2;
var_need_redef = p3;
var_mprop = p4;
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var1, var_mprop); /* has_key on <var1:Map[MProperty, APropdef]>*/
}
if (var4){
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "Error: a property `";
var9 = core__abstract_text___CString___to_s_full(var8, 19l, 19l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "` is already defined in class `";
var13 = core__abstract_text___CString___to_s_full(var12, 31l, 31l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var5)->values[2]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "` at line ";
var17 = core__abstract_text___CString___to_s_full(var16, 10l, 10l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var5)->values[4]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = ".";
var21 = core__abstract_text___CString___to_s_full(var20, 1l, 1l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var5)->values[6]=var19;
} else {
var5 = varonce;
varonce = NULL;
}
{
var22 = ((val*(*)(val* self))(var_mprop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mprop); /* to_s on <var_mprop:MProperty>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var22;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var25 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__Object__to_s]))(var23); /* to_s on <var23:MClass>*/
}
((struct instance_core__NativeArray*)var5)->values[3]=var26;
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = ((val*(*)(val* self, val* p0))((((long)var27&3)?class_info[((long)var27&3)]:var27->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var27, var_mprop); /* [] on <var27:Map[MProperty, APropdef]>*/
}
{
{ /* Inline parser_nodes#ANode#location (var30) on <var30:nullable Object(APropdef)> */
var33 = var30->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var30:nullable Object(APropdef)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var31) on <var31:Location> */
var36 = var31->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var31:Location> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = core__flat___Int___core__abstract_text__Object__to_s(var34);
((struct instance_core__NativeArray*)var5)->values[5]=var37;
{
var38 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var38); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var40 = 0;
} else {
var40 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var40;
if (var40){
{
{ /* Inline model#MMethod#is_root_init (var_mprop) on <var_mprop:MProperty(MMethod)> */
var43 = var_mprop->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var_mprop:MProperty(MMethod)> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var39 = var41;
} else {
var39 = var_;
}
if (var39){
var = 1;
goto RET_LABEL;
} else {
}
if (var_kwredef == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_kwredef,((val*)NULL)) on <var_kwredef:nullable Token> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_kwredef,var_other) on <var_kwredef:nullable Token(Token)> */
var49 = var_kwredef == var_other;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
if (var_need_redef){
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Redef Error: `";
var55 = core__abstract_text___CString___to_s_full(var54, 14l, 14l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "::";
var59 = core__abstract_text___CString___to_s_full(var58, 2l, 2l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var51)->values[2]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "` is an inherited property. To redefine it, add the `redef` keyword.";
var63 = core__abstract_text___CString___to_s_full(var62, 68l, 68l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var51)->values[4]=var61;
} else {
var51 = varonce50;
varonce50 = NULL;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var66 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = ((val*(*)(val* self))(var64->class->vft[COLOR_core__abstract_text__Object__to_s]))(var64); /* to_s on <var64:MClass>*/
}
((struct instance_core__NativeArray*)var51)->values[1]=var67;
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var70 = var_mprop->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
((struct instance_core__NativeArray*)var51)->values[3]=var68;
{
var71 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var71); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var75 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var73) on <var73:MClassDef> */
var78 = var73->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var73:MClassDef> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var76) on <var76:MModule> */
var81 = var76->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var76:MModule> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (var79 == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var79,((val*)NULL)) on <var79:nullable MGroup> */
var_other85 = ((val*)NULL);
{
var86 = ((short int(*)(val* self, val* p0))(var79->class->vft[COLOR_core__kernel__Object___61d_61d]))(var79, var_other85); /* == on <var79:nullable MGroup(MGroup)>*/
}
var87 = !var86;
var83 = var87;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
var_88 = var82;
if (var82){
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var91 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
var92 = glob_sys;
{
var93 = nitc__model_base___core__Sys___protected_visibility(var92);
}
{
var94 = core___core__Comparable____62d_61d(var89, var93);
}
var72 = var94;
} else {
var72 = var_88;
}
if (var72){
{
{ /* Inline modelbuilder_base#ModelBuilder#model (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var97 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <var_modelbuilder:ModelBuilder> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var100 = var_mprop->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = nitc__model___Model___get_mproperties_by_name(var95, var98);
}
var_others = var101;
if (var_others == NULL) {
var102 = 0; /* is null */
} else {
var102 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_others,((val*)NULL)) on <var_others:nullable Array[MProperty]> */
var_other85 = ((val*)NULL);
{
var105 = ((short int(*)(val* self, val* p0))(var_others->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_others, var_other85); /* == on <var_others:nullable Array[MProperty](Array[MProperty])>*/
}
var106 = !var105;
var103 = var106;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var102 = var103;
}
if (var102){
var_107 = var_others;
{
var108 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_107);
}
var_109 = var108;
for(;;) {
{
var110 = ((short int(*)(val* self))((((long)var_109&3)?class_info[((long)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_109); /* is_ok on <var_109:IndexedIterator[MProperty]>*/
}
if (var110){
} else {
goto BREAK_label;
}
{
var111 = ((val*(*)(val* self))((((long)var_109&3)?class_info[((long)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_109); /* item on <var_109:IndexedIterator[MProperty]>*/
}
var_other112 = var111;
{
{ /* Inline kernel#Object#!= (var_other112,var_mprop) on <var_other112:MProperty> */
var_other85 = var_mprop;
{
var119 = ((short int(*)(val* self, val* p0))(var_other112->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_other112, var_other85); /* == on <var_other112:MProperty>*/
}
var120 = !var119;
var117 = var120;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var_121 = var117;
if (var117){
{
{ /* Inline model#MProperty#intro_mclassdef (var_other112) on <var_other112:MProperty> */
var124 = var_other112->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var122) on <var122:MClassDef> */
var127 = var122->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var122:MClassDef> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var125) on <var125:MModule> */
var130 = var125->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var125:MModule> */
var128 = var130;
RET_LABEL129:(void)0;
}
}
if (var128 == NULL) {
var131 = 0; /* is null */
} else {
var131 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var128,((val*)NULL)) on <var128:nullable MGroup> */
var_other85 = ((val*)NULL);
{
var134 = ((short int(*)(val* self, val* p0))(var128->class->vft[COLOR_core__kernel__Object___61d_61d]))(var128, var_other85); /* == on <var128:nullable MGroup(MGroup)>*/
}
var135 = !var134;
var132 = var135;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
var131 = var132;
}
var116 = var131;
} else {
var116 = var_121;
}
var_136 = var116;
if (var116){
{
{ /* Inline model#MProperty#intro_mclassdef (var_other112) on <var_other112:MProperty> */
var139 = var_other112->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var137) on <var137:MClassDef> */
var142 = var137->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var137:MClassDef> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var140) on <var140:MModule> */
var145 = var140->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var140:MModule> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
if (var143 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 637);
fatal_exit(1);
} else {
{ /* Inline mpackage#MGroup#mpackage (var143) on <var143:nullable MGroup> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var148 = var143->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var143:nullable MGroup> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var151 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var151 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var149) on <var149:MClassDef> */
var154 = var149->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var149:MClassDef> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline mmodule#MModule#mgroup (var152) on <var152:MModule> */
var157 = var152->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var152:MModule> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
if (var155 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 637);
fatal_exit(1);
} else {
{ /* Inline mpackage#MGroup#mpackage (var155) on <var155:nullable MGroup> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var160 = var155->attrs[COLOR_nitc__mpackage__MGroup___mpackage].val; /* _mpackage on <var155:nullable MGroup> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpackage");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 76);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var146,var158) on <var146:MPackage> */
var_other = var158;
{
{ /* Inline kernel#Object#is_same_instance (var146,var_other) on <var146:MPackage> */
var165 = var146 == var_other;
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
}
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
var115 = var161;
} else {
var115 = var_136;
}
var_166 = var115;
if (var115){
{
{ /* Inline model#MProperty#intro_mclassdef (var_other112) on <var_other112:MProperty> */
var169 = var_other112->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var167) on <var167:MClassDef> */
var172 = var167->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var167:MClassDef> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline model#MClass#name (var170) on <var170:MClass> */
var175 = var170->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var170:MClass> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var178 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var176) on <var176:MClassDef> */
var181 = var176->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var176:MClassDef> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
{
{ /* Inline model#MClass#name (var179) on <var179:MClass> */
var184 = var179->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var179:MClass> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
var185 = ((short int(*)(val* self, val* p0))(var173->class->vft[COLOR_core__kernel__Object___61d_61d]))(var173, var182); /* == on <var173:String>*/
}
var114 = var185;
} else {
var114 = var_166;
}
var_186 = var114;
if (var114){
{
{ /* Inline model#MProperty#visibility (var_other112) on <var_other112:MProperty> */
var189 = var_other112->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_other112:MProperty> */
if (unlikely(var189 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
var190 = glob_sys;
{
var191 = nitc__model_base___core__Sys___protected_visibility(var190);
}
{
var192 = core___core__Comparable____62d_61d(var187, var191);
}
var113 = var192;
} else {
var113 = var_186;
}
if (var113){
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "full-name-conflict";
var196 = core__abstract_text___CString___to_s_full(var195, 18l, 18l);
var194 = var196;
varonce193 = var194;
}
if (unlikely(varonce197==NULL)) {
var198 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "Warning: A property named `";
var202 = core__abstract_text___CString___to_s_full(var201, 27l, 27l);
var200 = var202;
varonce199 = var200;
}
((struct instance_core__NativeArray*)var198)->values[0]=var200;
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "` is already defined in module `";
var206 = core__abstract_text___CString___to_s_full(var205, 32l, 32l);
var204 = var206;
varonce203 = var204;
}
((struct instance_core__NativeArray*)var198)->values[2]=var204;
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = "` for the class `";
var210 = core__abstract_text___CString___to_s_full(var209, 17l, 17l);
var208 = var210;
varonce207 = var208;
}
((struct instance_core__NativeArray*)var198)->values[4]=var208;
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "`.";
var214 = core__abstract_text___CString___to_s_full(var213, 2l, 2l);
var212 = var214;
varonce211 = var212;
}
((struct instance_core__NativeArray*)var198)->values[6]=var212;
} else {
var198 = varonce197;
varonce197 = NULL;
}
{
var215 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_other112);
}
((struct instance_core__NativeArray*)var198)->values[1]=var215;
{
{ /* Inline model#MProperty#intro_mclassdef (var_other112) on <var_other112:MProperty> */
var218 = var_other112->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var216) on <var216:MClassDef> */
var221 = var216->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var216:MClassDef> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
var222 = ((val*(*)(val* self))(var219->class->vft[COLOR_core__abstract_text__Object__to_s]))(var219); /* to_s on <var219:MModule>*/
}
((struct instance_core__NativeArray*)var198)->values[3]=var222;
{
{ /* Inline model#MProperty#intro_mclassdef (var_other112) on <var_other112:MProperty> */
var225 = var_other112->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_other112:MProperty> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var223) on <var223:MClassDef> */
var228 = var223->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var223:MClassDef> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
{ /* Inline model#MClass#name (var226) on <var226:MClass> */
var231 = var226->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var226:MClass> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
((struct instance_core__NativeArray*)var198)->values[5]=var229;
{
var232 = ((val*(*)(val* self))(var198->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var198); /* native_to_s on <var198:NativeArray[String]>*/
}
varonce197 = var198;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var194, var232); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_109&3)?class_info[((long)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_109); /* next on <var_109:IndexedIterator[MProperty]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_109&3)?class_info[((long)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_109); /* finish on <var_109:IndexedIterator[MProperty]>*/
}
} else {
}
} else {
}
} else {
var233 = !var_need_redef;
if (var233){
if (unlikely(varonce234==NULL)) {
var235 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce236!=NULL)) {
var237 = varonce236;
} else {
var238 = "Error: no property `";
var239 = core__abstract_text___CString___to_s_full(var238, 20l, 20l);
var237 = var239;
varonce236 = var237;
}
((struct instance_core__NativeArray*)var235)->values[0]=var237;
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "::";
var243 = core__abstract_text___CString___to_s_full(var242, 2l, 2l);
var241 = var243;
varonce240 = var241;
}
((struct instance_core__NativeArray*)var235)->values[2]=var241;
if (likely(varonce244!=NULL)) {
var245 = varonce244;
} else {
var246 = "` is inherited. Remove the `redef` keyword to define a new property.";
var247 = core__abstract_text___CString___to_s_full(var246, 68l, 68l);
var245 = var247;
varonce244 = var245;
}
((struct instance_core__NativeArray*)var235)->values[4]=var245;
} else {
var235 = varonce234;
varonce234 = NULL;
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var250 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
{
var251 = ((val*(*)(val* self))(var248->class->vft[COLOR_core__abstract_text__Object__to_s]))(var248); /* to_s on <var248:MClass>*/
}
((struct instance_core__NativeArray*)var235)->values[1]=var251;
{
{ /* Inline model#MProperty#name (var_mprop) on <var_mprop:MProperty> */
var254 = var_mprop->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mprop:MProperty> */
if (unlikely(var254 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var252 = var254;
RET_LABEL253:(void)0;
}
}
((struct instance_core__NativeArray*)var235)->values[3]=var252;
{
var255 = ((val*(*)(val* self))(var235->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var235); /* native_to_s on <var235:NativeArray[String]>*/
}
varonce234 = var235;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var255); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#APropdef#check_repeated_types for (self: APropdef, ModelBuilder) */
void nitc__modelize_property___APropdef___check_repeated_types(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method modelize_property#ASignature#is_visited= for (self: ASignature, Bool) */
void nitc__modelize_property___ASignature___is_visited_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__ASignature___is_visited].s = p0; /* _is_visited on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#param_names for (self: ASignature): Array[String] */
val* nitc__modelize_property___ASignature___param_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__modelize_property__ASignature___param_names].val; /* _param_names on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 659);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#param_types for (self: ASignature): Array[MType] */
val* nitc__modelize_property___ASignature___param_types(val* self) {
val* var /* : Array[MType] */;
val* var1 /* : Array[MType] */;
var1 = self->attrs[COLOR_nitc__modelize_property__ASignature___param_types].val; /* _param_types on <self:ASignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 662);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#vararg_rank for (self: ASignature): Int */
long nitc__modelize_property___ASignature___vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#vararg_rank= for (self: ASignature, Int) */
void nitc__modelize_property___ASignature___vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l = p0; /* _vararg_rank on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#ret_type for (self: ASignature): nullable MType */
val* nitc__modelize_property___ASignature___ret_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#ret_type= for (self: ASignature, nullable MType) */
void nitc__modelize_property___ASignature___ret_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val = p0; /* _ret_type on <self:ASignature> */
RET_LABEL:;
}
/* method modelize_property#ASignature#visit_signature for (self: ASignature, ModelBuilder, MClassDef): Bool */
short int nitc__modelize_property___ASignature___visit_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var4 /* : Array[String] */;
val* var6 /* : Array[String] */;
val* var_param_names /* var param_names: Array[String] */;
val* var7 /* : Array[MType] */;
val* var9 /* : Array[MType] */;
val* var_param_types /* var param_types: Array[MType] */;
val* var10 /* : ANodes[AParam] */;
val* var12 /* : ANodes[AParam] */;
val* var_ /* var : ANodes[AParam] */;
val* var13 /* : Iterator[ANode] */;
val* var_14 /* var : Iterator[AParam] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_np /* var np: AParam */;
val* var17 /* : TId */;
val* var19 /* : TId */;
val* var20 /* : String */;
val* var21 /* : nullable AType */;
val* var23 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other33 /* var other: nullable Object */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
long var_i /* var i: Int */;
long var37 /* : Int */;
long var39 /* : Int */;
long var40 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var46 /* : Int */;
long var_47 /* var : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
long var56 /* : Int */;
val* var57 /* : nullable TDotdotdot */;
val* var59 /* : nullable TDotdotdot */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
long var65 /* : Int */;
long var67 /* : Int */;
long var68 /* : Int */;
long var70 /* : Int */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : NativeArray[String] */;
static val* varonce;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
long var84 /* : Int */;
long var86 /* : Int */;
val* var87 /* : nullable Object */;
val* var88 /* : String */;
long var89 /* : Int */;
long var91 /* : Int */;
long var92 /* : Int */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
long var98 /* : Int */;
val* var100 /* : nullable AType */;
val* var102 /* : nullable AType */;
val* var_ntype103 /* var ntype: nullable AType */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
val* var109 /* : nullable MType */;
val* var111 /* : nullable MType */;
val* var113 /* : nullable MType */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mmodule = var1;
{
{ /* Inline modelize_property#ASignature#param_names (self) on <self:ASignature> */
var6 = self->attrs[COLOR_nitc__modelize_property__ASignature___param_names].val; /* _param_names on <self:ASignature> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 659);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_param_names = var4;
{
{ /* Inline modelize_property#ASignature#param_types (self) on <self:ASignature> */
var9 = self->attrs[COLOR_nitc__modelize_property__ASignature___param_types].val; /* _param_types on <self:ASignature> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 662);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_param_types = var7;
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var12 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[AParam]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[AParam]>*/
}
var_np = var16;
{
{ /* Inline parser_nodes#AParam#n_id (var_np) on <var_np:AParam> */
var19 = var_np->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val; /* _n_id on <var_np:AParam> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1760);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc__lexer_work___Token___text(var17);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_param_names, var20); /* Direct call array#Array#add on <var_param_names:Array[String]>*/
}
{
{ /* Inline parser_nodes#AParam#n_type (var_np) on <var_np:AParam> */
var23 = var_np->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var_np:AParam> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_ntype = var21;
if (var_ntype == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other = ((val*)NULL);
{
var27 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other); /* == on <var_ntype:nullable AType(AType)>*/
}
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
{
var29 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1);
}
var_mtype = var29;
if (var_mtype == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other33 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other33) on <var_mtype:nullable MType(MType)> */
var36 = var_mtype == var_other33;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
var = 0;
goto RET_LABEL;
} else {
}
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var39 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var42 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var37,var40) on <var37:Int> */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var45 = 1; /* easy <var40:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var46 = var37 - var40;
var43 = var46;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_47 = var43;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_47:Int> isa OTHER */
/* <var_47:Int> isa OTHER */
var50 = 1; /* easy <var_47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var54 = var_i < var_47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
} else {
goto BREAK_label55;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_param_types, var_mtype); /* Direct call array#Array#add on <var_param_types:Array[MType]>*/
}
{
var56 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var56;
}
BREAK_label55: (void)0;
{
{ /* Inline parser_nodes#AParam#n_dotdotdot (var_np) on <var_np:AParam> */
var59 = var_np->attrs[COLOR_nitc__parser_nodes__AParam___n_dotdotdot].val; /* _n_dotdotdot on <var_np:AParam> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57 == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var57,((val*)NULL)) on <var57:nullable TDotdotdot> */
var_other = ((val*)NULL);
{
var63 = ((short int(*)(val* self, val* p0))(var57->class->vft[COLOR_core__kernel__Object___61d_61d]))(var57, var_other); /* == on <var57:nullable TDotdotdot(TDotdotdot)>*/
}
var64 = !var63;
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (var60){
{
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:ASignature> */
var67 = self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var70 = -1l;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var65,var68) on <var65:Int> */
var73 = var65 == var68;
var74 = !var73;
var71 = var74;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
if (unlikely(varonce==NULL)) {
var75 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Error: `";
var79 = core__abstract_text___CString___to_s_full(var78, 8l, 8l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "` is already a vararg";
var83 = core__abstract_text___CString___to_s_full(var82, 21l, 21l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var75)->values[2]=var81;
} else {
var75 = varonce;
varonce = NULL;
}
{
{ /* Inline modelize_property#ASignature#vararg_rank (self) on <self:ASignature> */
var86 = self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <self:ASignature> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_param_names, var84);
}
((struct instance_core__NativeArray*)var75)->values[1]=var87;
{
var88 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce = var75;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_np, var88); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var91 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var89,1l) on <var89:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var94 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name97 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var98 = var89 - 1l;
var92 = var98;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline modelize_property#ASignature#vararg_rank= (self,var92) on <self:ASignature> */
self->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l = var92; /* _vararg_rank on <self:ASignature> */
RET_LABEL99:(void)0;
}
}
}
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[AParam]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[AParam]>*/
}
{
{ /* Inline parser_nodes#ASignature#n_type (self) on <self:ASignature> */
var102 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
var_ntype103 = var100;
if (var_ntype103 == NULL) {
var104 = 0; /* is null */
} else {
var104 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype103,((val*)NULL)) on <var_ntype103:nullable AType> */
var_other = ((val*)NULL);
{
var107 = ((short int(*)(val* self, val* p0))(var_ntype103->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype103, var_other); /* == on <var_ntype103:nullable AType(AType)>*/
}
var108 = !var107;
var105 = var108;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
if (var104){
{
var109 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype103, 1);
}
{
{ /* Inline modelize_property#ASignature#ret_type= (self,var109) on <self:ASignature> */
self->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val = var109; /* _ret_type on <self:ASignature> */
RET_LABEL110:(void)0;
}
}
{
{ /* Inline modelize_property#ASignature#ret_type (self) on <self:ASignature> */
var113 = self->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <self:ASignature> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (var111 == NULL) {
var114 = 1; /* is null */
} else {
var114 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var111,((val*)NULL)) on <var111:nullable MType> */
var_other33 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var111,var_other33) on <var111:nullable MType(MType)> */
var119 = var111 == var_other33;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
var114 = var115;
}
if (var114){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline modelize_property#ASignature#is_visited= (self,1) on <self:ASignature> */
self->attrs[COLOR_nitc__modelize_property__ASignature___is_visited].s = 1; /* _is_visited on <self:ASignature> */
RET_LABEL120:(void)0;
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ASignature#check_signature for (self: ASignature, ModelBuilder, MClassDef): Bool */
short int nitc__modelize_property___ASignature___check_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var_res /* var res: Bool */;
val* var1 /* : ANodes[AParam] */;
val* var3 /* : ANodes[AParam] */;
val* var_ /* var : ANodes[AParam] */;
val* var4 /* : Iterator[ANode] */;
val* var_5 /* var : Iterator[AParam] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_np /* var np: AParam */;
val* var8 /* : nullable AType */;
val* var10 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : MModule */;
val* var18 /* : MModule */;
val* var19 /* : nullable MType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable AType */;
val* var29 /* : nullable AType */;
val* var_ntype30 /* var ntype: nullable AType */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : MModule */;
val* var38 /* : MModule */;
val* var39 /* : nullable MType */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
var_res = 1;
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
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
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[AParam]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[AParam]>*/
}
var_np = var7;
{
{ /* Inline parser_nodes#AParam#n_type (var_np) on <var_np:AParam> */
var10 = var_np->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var_np:AParam> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ntype = var8;
if (var_ntype == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other); /* == on <var_ntype:nullable AType(AType)>*/
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
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var18 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc___nitc__ModelBuilder___resolve_mtype(var_modelbuilder, var16, var_mclassdef, var_ntype);
}
if (var19 == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var19,((val*)NULL)) on <var19:nullable MType> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var19,var_other23) on <var19:nullable MType(MType)> */
var26 = var19 == var_other23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
var_res = 0;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[AParam]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[AParam]>*/
}
{
{ /* Inline parser_nodes#ASignature#n_type (self) on <self:ASignature> */
var29 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <self:ASignature> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_ntype30 = var27;
if (var_ntype30 == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype30,((val*)NULL)) on <var_ntype30:nullable AType> */
var_other = ((val*)NULL);
{
var34 = ((short int(*)(val* self, val* p0))(var_ntype30->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype30, var_other); /* == on <var_ntype30:nullable AType(AType)>*/
}
var35 = !var34;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var38 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
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
var39 = nitc___nitc__ModelBuilder___resolve_mtype(var_modelbuilder, var36, var_mclassdef, var_ntype30);
}
if (var39 == NULL) {
var40 = 1; /* is null */
} else {
var40 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var39,((val*)NULL)) on <var39:nullable MType> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var39,var_other23) on <var39:nullable MType(MType)> */
var45 = var39 == var_other23;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
var_res = 0;
} else {
}
} else {
}
var46 = !var_res;
if (var46){
{
{ /* Inline modelbuilder_base#ANode#is_broken= (self,1) on <self:ASignature> */
self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <self:ASignature> */
RET_LABEL47:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AParam#mparameter= for (self: AParam, nullable MParameter) */
void nitc__modelize_property___AParam___mparameter_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AParam___mparameter].val = p0; /* _mparameter on <self:AParam> */
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#is_autoinit for (self: AMethPropdef): Bool */
short int nitc__modelize_property___AMethPropdef___is_autoinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AMethPropdef___is_autoinit].s; /* _is_autoinit on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethPropdef#is_autoinit= for (self: AMethPropdef, Bool) */
void nitc__modelize_property___AMethPropdef___is_autoinit_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AMethPropdef___is_autoinit].s = p0; /* _is_autoinit on <self:AMethPropdef> */
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#look_like_a_root_init for (self: AMethPropdef, ModelBuilder, MClassDef): Bool */
short int nitc__modelize_property___AMethPropdef___look_like_a_root_init(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var1 /* : nullable TKwinit */;
val* var3 /* : nullable TKwinit */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable AMethid */;
val* var12 /* : nullable AMethid */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other16 /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable AAnnotation */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : nullable ANode */;
val* var30 /* : nullable ANode */;
val* var31 /* : nullable ANode */;
val* var33 /* : nullable ANode */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_amod /* var amod: AModule */;
val* var35 /* : nullable AModuledecl */;
val* var37 /* : nullable AModuledecl */;
val* var_amoddecl /* var amoddecl: nullable AModuledecl */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable AAnnotation */;
val* var_old /* var old: nullable AAnnotation */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable ASignature */;
val* var55 /* : nullable ASignature */;
val* var56 /* : ANodes[AParam] */;
val* var58 /* : ANodes[AParam] */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var72 /* : NativeArray[String] */;
static val* varonce71;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var79 /* : nullable AVisibility */;
val* var81 /* : nullable AVisibility */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
short int var85 /* : Bool */;
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
val* var96 /* : String */;
val* var97 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable TKwinit> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable TKwinit(TKwinit)> */
var9 = var1 == var_other;
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
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var12 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var10,((val*)NULL)) on <var10:nullable AMethid> */
var_other16 = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_core__kernel__Object___61d_61d]))(var10, var_other16); /* == on <var10:nullable AMethid(AMethid)>*/
}
var18 = !var17;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
var = 0;
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "old_style_init";
var21 = core__abstract_text___CString___to_s_full(var20, 14l, 14l);
var19 = var21;
varonce = var19;
}
{
var22 = nitc__annotation___Prod___get_single_annotation(self, var19, var_modelbuilder);
}
if (var22 == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var22,((val*)NULL)) on <var22:nullable AAnnotation> */
var_other16 = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_core__kernel__Object___61d_61d]))(var22, var_other16); /* == on <var22:nullable AAnnotation(AAnnotation)>*/
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AMethPropdef> */
var30 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:AMethPropdef> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (var28 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 749);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent (var28) on <var28:nullable ANode> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var33 = var28->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var28:nullable ANode> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
/* <var31:nullable ANode> isa AModule */
cltype = type_nitc__AModule.color;
idtype = type_nitc__AModule.id;
if(var31 == NULL) {
var34 = 0;
} else {
if(cltype >= var31->type->table_size) {
var34 = 0;
} else {
var34 = var31->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var34)) {
var_class_name = var31 == NULL ? "null" : var31->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 749);
fatal_exit(1);
}
var_amod = var31;
{
{ /* Inline parser_nodes#AModule#n_moduledecl (var_amod) on <var_amod:AModule> */
var37 = var_amod->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_amod:AModule> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_amoddecl = var35;
if (var_amoddecl == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_amoddecl,((val*)NULL)) on <var_amoddecl:nullable AModuledecl> */
var_other16 = ((val*)NULL);
{
var41 = ((short int(*)(val* self, val* p0))(var_amoddecl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_amoddecl, var_other16); /* == on <var_amoddecl:nullable AModuledecl(AModuledecl)>*/
}
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "old_style_init";
var46 = core__abstract_text___CString___to_s_full(var45, 14l, 14l);
var44 = var46;
varonce43 = var44;
}
{
var47 = nitc__annotation___Prod___get_single_annotation(var_amoddecl, var44, var_modelbuilder);
}
var_old = var47;
if (var_old == NULL) {
var48 = 0; /* is null */
} else {
var48 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_old,((val*)NULL)) on <var_old:nullable AAnnotation> */
var_other16 = ((val*)NULL);
{
var51 = ((short int(*)(val* self, val* p0))(var_old->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_old, var_other16); /* == on <var_old:nullable AAnnotation(AAnnotation)>*/
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var55 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (var53 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 756);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var53) on <var53:nullable ASignature> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var58 = var53->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var53:nullable ASignature> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var56);
}
{
{ /* Inline kernel#Int#> (var59,0l) on <var59:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var62 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var66 = var59 > 0l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "old-init";
var70 = core__abstract_text___CString___to_s_full(var69, 8l, 8l);
var68 = var70;
varonce67 = var68;
}
if (unlikely(varonce71==NULL)) {
var72 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "Warning: init with signature in ";
var76 = core__abstract_text___CString___to_s_full(var75, 32l, 32l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var72)->values[0]=var74;
} else {
var72 = varonce71;
varonce71 = NULL;
}
{
var77 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var72)->values[1]=var77;
{
var78 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var72); /* native_to_s on <var72:NativeArray[String]>*/
}
varonce71 = var72;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var68, var78); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AMethPropdef> */
var81 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
/* <var79:nullable AVisibility> isa APublicVisibility */
cltype83 = type_nitc__APublicVisibility.color;
idtype84 = type_nitc__APublicVisibility.id;
if(var79 == NULL) {
var82 = 0;
} else {
if(cltype83 >= var79->type->table_size) {
var82 = 0;
} else {
var82 = var79->type->type_table[cltype83] == idtype84;
}
}
var85 = !var82;
if (var85){
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "old-init";
var89 = core__abstract_text___CString___to_s_full(var88, 8l, 8l);
var87 = var89;
varonce86 = var87;
}
if (unlikely(varonce90==NULL)) {
var91 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "Warning: non-public init in ";
var95 = core__abstract_text___CString___to_s_full(var94, 28l, 28l);
var93 = var95;
varonce92 = var93;
}
((struct instance_core__NativeArray*)var91)->values[0]=var93;
} else {
var91 = varonce90;
varonce90 = NULL;
}
{
var96 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var91)->values[1]=var96;
{
var97 = ((val*(*)(val* self))(var91->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var91); /* native_to_s on <var91:NativeArray[String]>*/
}
varonce90 = var91;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var87, var97); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
