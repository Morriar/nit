#include "nitc__serialization_phase.sep.0.h"
/* method serialization_phase#ToolContext#serialization_phase_rename for (self: ToolContext): Phase */
val* nitc__serialization_phase___ToolContext___serialization_phase_rename(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__serialization_phase__ToolContext___serialization_phase_rename].val; /* _serialization_phase_rename on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _serialization_phase_rename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 29);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#ToolContext#serialization_phase_pre_model for (self: ToolContext): Phase */
val* nitc__serialization_phase___ToolContext___serialization_phase_pre_model(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__serialization_phase__ToolContext___serialization_phase_pre_model].val; /* _serialization_phase_pre_model on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _serialization_phase_pre_model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 32);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#ANode#is_serialize for (self: ANode): Bool */
short int nitc__serialization_phase___ANode___is_serialize(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#ANode#is_noserialize for (self: ANode): Bool */
short int nitc__serialization_phase___ANode___is_noserialize(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#ADefinition#is_serialize for (self: ADefinition): Bool */
short int nitc__serialization_phase___ADefinition___ANode__is_serialize(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : Array[AAnnotation] */;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : Array[AAnnotation] */;
short int var12 /* : Bool */;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "serialize";
var4 = core__abstract_text___CString___to_s_full(var3, 9l, 9l);
var2 = var4;
varonce = var2;
}
{
var5 = nitc___nitc__Prod___get_annotations(self, var2);
}
{
var6 = core___core__Collection___not_empty(var5);
}
var_ = var6;
if (var6){
var1 = var_;
} else {
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "auto_serializable";
var10 = core__abstract_text___CString___to_s_full(var9, 17l, 17l);
var8 = var10;
varonce7 = var8;
}
{
var11 = nitc___nitc__Prod___get_annotations(self, var8);
}
{
var12 = core___core__Collection___not_empty(var11);
}
var1 = var12;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#ADefinition#is_noserialize for (self: ADefinition): Bool */
short int nitc__serialization_phase___ADefinition___ANode__is_noserialize(val* self) {
short int var /* : Bool */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : Array[AAnnotation] */;
short int var5 /* : Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "noserialize";
var3 = core__abstract_text___CString___to_s_full(var2, 11l, 11l);
var1 = var3;
varonce = var1;
}
{
var4 = nitc___nitc__Prod___get_annotations(self, var1);
}
{
var5 = core___core__Collection___not_empty(var4);
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#SerializationPhaseRename#process_annotated_node for (self: SerializationPhaseRename, ANode, AAnnotation) */
void nitc__serialization_phase___nitc__serialization_phase__SerializationPhaseRename___nitc__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : AAtid */;
val* var2 /* : AAtid */;
val* var3 /* : Token */;
val* var5 /* : Token */;
val* var6 /* : String */;
val* var_text /* var text: String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
short int var15 /* : Bool */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
val* var19 /* : Location */;
val* var21 /* : Location */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : Message */;
val* var34 /* : ANodes[AExpr] */;
val* var36 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
short int var37 /* : Bool */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var_ /* var : Bool */;
val* var43 /* : nullable Object */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
short int var47 /* : Bool */;
val* var48 /* : ToolContext */;
val* var50 /* : ToolContext */;
val* var51 /* : Location */;
val* var53 /* : Location */;
val* var55 /* : NativeArray[String] */;
static val* varonce54;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : Message */;
val* var66 /* : nullable Object */;
val* var67 /* : String */;
val* var_t /* var t: String */;
long var68 /* : Int */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name;
long var74 /* : Int */;
val* var75 /* : Text */;
val* var_val /* var val: String */;
var_node = p0;
var_nat = p1;
{
{ /* Inline parser_nodes#AAnnotation#n_atid (var_nat) on <var_nat:AAnnotation> */
var2 = var_nat->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <var_nat:AAnnotation> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3001);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AAtid#n_id (var) on <var:AAtid> */
var5 = var->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val; /* _n_id on <var:AAtid> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3024);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__lexer_work___Token___text(var3);
}
var_text = var6;
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "serialize_as";
var9 = core__abstract_text___CString___to_s_full(var8, 12l, 12l);
var7 = var9;
varonce = var7;
}
{
{ /* Inline kernel#Object#!= (var_text,var7) on <var_text:String> */
var_other = var7;
{
var12 = ((short int(*)(val* self, val* p0))(var_text->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_text, var_other); /* == on <var_text:String>*/
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
goto RET_LABEL;
} else {
}
/* <var_node:ANode> isa AAttrPropdef */
cltype = type_nitc__AAttrPropdef.color;
idtype = type_nitc__AAttrPropdef.id;
if(cltype >= var_node->type->table_size) {
var14 = 0;
} else {
var14 = var_node->type->type_table[cltype] == idtype;
}
var15 = !var14;
if (var15){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhaseRename> */
var18 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhaseRename> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_node) on <var_node:ANode> */
var21 = var_node->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_node:ANode> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Syntax Error: annotation `";
var27 = core__abstract_text___CString___to_s_full(var26, 26l, 26l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "` applies only to attributes.";
var31 = core__abstract_text___CString___to_s_full(var30, 29l, 29l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var23)->values[2]=var29;
} else {
var23 = varonce22;
varonce22 = NULL;
}
((struct instance_core__NativeArray*)var23)->values[1]=var_text;
{
var32 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
var33 = nitc___nitc__ToolContext___error(var16, var19, var32);
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_nat) on <var_nat:AAnnotation> */
var36 = var_nat->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_nat:AAnnotation> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_args = var34;
{
var38 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_args);
}
{
{ /* Inline kernel#Int#!= (var38,1l) on <var38:Int> */
var41 = var38 == 1l;
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_ = var39;
if (var39){
var37 = var_;
} else {
{
var43 = core___core__SequenceRead___Collection__first(var_args);
}
/* <var43:nullable Object(AExpr)> isa AStringFormExpr */
cltype45 = type_nitc__AStringFormExpr.color;
idtype46 = type_nitc__AStringFormExpr.id;
if(cltype45 >= var43->type->table_size) {
var44 = 0;
} else {
var44 = var43->type->type_table[cltype45] == idtype46;
}
var47 = !var44;
var37 = var47;
}
if (var37){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhaseRename> */
var50 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhaseRename> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_node) on <var_node:ANode(AAttrPropdef)> */
var53 = var_node->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_node:ANode(AAttrPropdef)> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (unlikely(varonce54==NULL)) {
var55 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "Syntax Error: annotation `";
var59 = core__abstract_text___CString___to_s_full(var58, 26l, 26l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var55)->values[0]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "` expects a single string literal as argument.";
var63 = core__abstract_text___CString___to_s_full(var62, 46l, 46l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var55)->values[2]=var61;
} else {
var55 = varonce54;
varonce54 = NULL;
}
((struct instance_core__NativeArray*)var55)->values[1]=var_text;
{
var64 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
var65 = nitc___nitc__ToolContext___error(var48, var51, var64);
}
goto RET_LABEL;
} else {
}
{
var66 = core___core__SequenceRead___Collection__first(var_args);
}
{
var67 = nitc__parser_work___Prod___collect_text(var66);
}
var_t = var67;
{
var68 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Text__length]))(var_t); /* length on <var_t:String>*/
}
{
{ /* Inline kernel#Int#- (var68,2l) on <var68:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var71 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var74 = var68 - 2l;
var69 = var74;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
var75 = ((val*(*)(val* self, long p0, long p1))(var_t->class->vft[COLOR_core__abstract_text__Text__substring]))(var_t, 1l, var69); /* substring on <var_t:String>*/
}
var_val = var75;
{
nitc__serialization_phase___AAttrPropdef___serialize_name_61d(var_node, var_val); /* Direct call serialization_phase#AAttrPropdef#serialize_name= on <var_node:ANode(AAttrPropdef)>*/
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePreModel#process_annotated_node for (self: SerializationPhasePreModel, ANode, AAnnotation) */
void nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePreModel___nitc__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : AAtid */;
val* var2 /* : AAtid */;
val* var3 /* : Token */;
val* var5 /* : Token */;
val* var6 /* : String */;
val* var_text /* var text: String */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
short int var16 /* : Bool */;
short int var_serialize /* var serialize: Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
short int var21 /* : Bool */;
short int var_noserialize /* var noserialize: Bool */;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
val* var26 /* : ToolContext */;
val* var28 /* : ToolContext */;
val* var29 /* : Location */;
val* var31 /* : Location */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : Message */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
short int var_52 /* var : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
short int var56 /* : Bool */;
val* var57 /* : ToolContext */;
val* var59 /* : ToolContext */;
val* var60 /* : Location */;
val* var62 /* : Location */;
val* var64 /* : NativeArray[String] */;
static val* varonce63;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var74 /* : Message */;
short int var75 /* : Bool */;
short int var_76 /* var : Bool */;
short int var77 /* : Bool */;
val* var78 /* : ToolContext */;
val* var80 /* : ToolContext */;
val* var81 /* : Location */;
val* var83 /* : Location */;
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
val* var94 /* : String */;
val* var95 /* : Message */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name;
val* var99 /* : Array[AAnnotation] */;
long var100 /* : Int */;
long var102 /* : Int */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
short int var109 /* : Bool */;
val* var110 /* : ToolContext */;
val* var112 /* : ToolContext */;
val* var113 /* : Location */;
val* var115 /* : Location */;
val* var117 /* : NativeArray[String] */;
static val* varonce116;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
val* var122 /* : String */;
val* var124 /* : NativeArray[String] */;
static val* varonce123;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
val* var133 /* : String */;
val* var134 /* : nullable Message */;
short int var135 /* : Bool */;
int cltype136;
int idtype137;
short int var138 /* : Bool */;
short int var_up_serialize /* var up_serialize: Bool */;
val* var_up /* var up: nullable ANode */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var142 /* : Bool */;
short int var143 /* : Bool */;
val* var144 /* : nullable ANode */;
val* var146 /* : nullable ANode */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
val* var_other150 /* var other: nullable Object */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var_157 /* var : Bool */;
val* var158 /* : ToolContext */;
val* var160 /* : ToolContext */;
val* var161 /* : Location */;
val* var163 /* : Location */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
val* var169 /* : NativeArray[String] */;
static val* varonce168;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : CString */;
val* var173 /* : String */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : CString */;
val* var177 /* : String */;
val* var178 /* : String */;
val* var179 /* : nullable Message */;
short int var180 /* : Bool */;
short int var_181 /* var : Bool */;
short int var182 /* : Bool */;
val* var183 /* : ToolContext */;
val* var185 /* : ToolContext */;
val* var186 /* : Location */;
val* var188 /* : Location */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : CString */;
val* var192 /* : String */;
val* var194 /* : NativeArray[String] */;
static val* varonce193;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : CString */;
val* var198 /* : String */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : CString */;
val* var202 /* : String */;
val* var203 /* : String */;
val* var204 /* : nullable Message */;
var_node = p0;
var_nat = p1;
{
{ /* Inline parser_nodes#AAnnotation#n_atid (var_nat) on <var_nat:AAnnotation> */
var2 = var_nat->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <var_nat:AAnnotation> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3001);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AAtid#n_id (var) on <var:AAtid> */
var5 = var->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val; /* _n_id on <var:AAtid> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3024);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__lexer_work___Token___text(var3);
}
var_text = var6;
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "auto_serializable";
var10 = core__abstract_text___CString___to_s_full(var9, 17l, 17l);
var8 = var10;
varonce = var8;
}
{
var11 = ((short int(*)(val* self, val* p0))(var_text->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_text, var8); /* == on <var_text:String>*/
}
var_ = var11;
if (var11){
var7 = var_;
} else {
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "serialize";
var15 = core__abstract_text___CString___to_s_full(var14, 9l, 9l);
var13 = var15;
varonce12 = var13;
}
{
var16 = ((short int(*)(val* self, val* p0))(var_text->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_text, var13); /* == on <var_text:String>*/
}
var7 = var16;
}
var_serialize = var7;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "noserialize";
var20 = core__abstract_text___CString___to_s_full(var19, 11l, 11l);
var18 = var20;
varonce17 = var18;
}
{
var21 = ((short int(*)(val* self, val* p0))(var_text->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_text, var18); /* == on <var_text:String>*/
}
var_noserialize = var21;
var_23 = var_serialize;
if (var_serialize){
var22 = var_23;
} else {
var22 = var_noserialize;
}
var24 = !var22;
if (var24){
goto RET_LABEL;
} else {
}
/* <var_node:ANode> isa AModuledecl */
cltype = type_nitc__AModuledecl.color;
idtype = type_nitc__AModuledecl.id;
if(cltype >= var_node->type->table_size) {
var25 = 0;
} else {
var25 = var_node->type->type_table[cltype] == idtype;
}
if (var25){
if (var_noserialize){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePreModel> */
var28 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePreModel> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_node) on <var_node:ANode(AModuledecl)> */
var31 = var_node->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_node:ANode(AModuledecl)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (unlikely(varonce32==NULL)) {
var33 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Syntax Error: superfluous use of `";
var37 = core__abstract_text___CString___to_s_full(var36, 34l, 34l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var33)->values[0]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "`, by default a module is `";
var41 = core__abstract_text___CString___to_s_full(var40, 27l, 27l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var33)->values[2]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "`";
var45 = core__abstract_text___CString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var33)->values[4]=var43;
} else {
var33 = varonce32;
varonce32 = NULL;
}
((struct instance_core__NativeArray*)var33)->values[1]=var_text;
((struct instance_core__NativeArray*)var33)->values[3]=var_text;
{
var46 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
var47 = nitc___nitc__ToolContext___error(var26, var29, var46);
}
} else {
}
goto RET_LABEL;
} else {
/* <var_node:ANode> isa AStdClassdef */
cltype50 = type_nitc__AStdClassdef.color;
idtype51 = type_nitc__AStdClassdef.id;
if(cltype50 >= var_node->type->table_size) {
var49 = 0;
} else {
var49 = var_node->type->type_table[cltype50] == idtype51;
}
var_52 = var49;
if (var49){
var48 = var_52;
} else {
/* <var_node:ANode> isa AAttrPropdef */
cltype54 = type_nitc__AAttrPropdef.color;
idtype55 = type_nitc__AAttrPropdef.id;
if(cltype54 >= var_node->type->table_size) {
var53 = 0;
} else {
var53 = var_node->type->type_table[cltype54] == idtype55;
}
var48 = var53;
}
var56 = !var48;
if (var56){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePreModel> */
var59 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePreModel> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_node) on <var_node:ANode> */
var62 = var_node->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_node:ANode> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (unlikely(varonce63==NULL)) {
var64 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "Syntax Error: only a class, a module or an attribute can be annotated with `";
var68 = core__abstract_text___CString___to_s_full(var67, 76l, 76l);
var66 = var68;
varonce65 = var66;
}
((struct instance_core__NativeArray*)var64)->values[0]=var66;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "`.";
var72 = core__abstract_text___CString___to_s_full(var71, 2l, 2l);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var64)->values[2]=var70;
} else {
var64 = varonce63;
varonce63 = NULL;
}
((struct instance_core__NativeArray*)var64)->values[1]=var_text;
{
var73 = ((val*(*)(val* self))(var64->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
{
var74 = nitc___nitc__ToolContext___error(var57, var60, var73);
}
goto RET_LABEL;
} else {
var_76 = var_serialize;
if (var_serialize){
{
var77 = ((short int(*)(val* self))(var_node->class->vft[COLOR_nitc__serialization_phase__ANode__is_noserialize]))(var_node); /* is_noserialize on <var_node:ANode>*/
}
var75 = var77;
} else {
var75 = var_76;
}
if (var75){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePreModel> */
var80 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePreModel> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_node) on <var_node:ANode> */
var83 = var_node->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_node:ANode> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (unlikely(varonce84==NULL)) {
var85 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "Syntax Error: an entity cannot be both `";
var89 = core__abstract_text___CString___to_s_full(var88, 40l, 40l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var85)->values[0]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "` and `noserialize`.";
var93 = core__abstract_text___CString___to_s_full(var92, 20l, 20l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var85)->values[2]=var91;
} else {
var85 = varonce84;
varonce84 = NULL;
}
((struct instance_core__NativeArray*)var85)->values[1]=var_text;
{
var94 = ((val*(*)(val* self))(var85->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
{
var95 = nitc___nitc__ToolContext___error(var78, var81, var94);
}
goto RET_LABEL;
} else {
/* <var_node:ANode> isa Prod */
cltype97 = type_nitc__Prod.color;
idtype98 = type_nitc__Prod.id;
if(cltype97 >= var_node->type->table_size) {
var96 = 0;
} else {
var96 = var_node->type->type_table[cltype97] == idtype98;
}
if (unlikely(!var96)) {
var_class_name = var_node == NULL ? "null" : var_node->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Prod", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 112);
fatal_exit(1);
}
{
var99 = nitc___nitc__Prod___get_annotations(var_node, var_text);
}
{
{ /* Inline array#AbstractArrayRead#length (var99) on <var99:Array[AAnnotation]> */
var102 = var99->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var99:Array[AAnnotation]> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var100,1l) on <var100:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var105 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var109 = var100 > 1l;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
if (var103){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePreModel> */
var112 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePreModel> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_node) on <var_node:ANode> */
var115 = var_node->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_node:ANode> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (unlikely(varonce116==NULL)) {
var117 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "useless-";
var121 = core__abstract_text___CString___to_s_full(var120, 8l, 8l);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var117)->values[0]=var119;
} else {
var117 = varonce116;
varonce116 = NULL;
}
((struct instance_core__NativeArray*)var117)->values[1]=var_text;
{
var122 = ((val*(*)(val* self))(var117->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var117); /* native_to_s on <var117:NativeArray[String]>*/
}
varonce116 = var117;
if (unlikely(varonce123==NULL)) {
var124 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "Warning: duplicated annotation `";
var128 = core__abstract_text___CString___to_s_full(var127, 32l, 32l);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var124)->values[0]=var126;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "`.";
var132 = core__abstract_text___CString___to_s_full(var131, 2l, 2l);
var130 = var132;
varonce129 = var130;
}
((struct instance_core__NativeArray*)var124)->values[2]=var130;
} else {
var124 = varonce123;
varonce123 = NULL;
}
((struct instance_core__NativeArray*)var124)->values[1]=var_text;
{
var133 = ((val*(*)(val* self))(var124->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var124); /* native_to_s on <var124:NativeArray[String]>*/
}
varonce123 = var124;
{
var134 = nitc___nitc__ToolContext___warning(var110, var113, var122, var133);
}
} else {
}
}
}
}
/* <var_node:ANode> isa AModuledecl */
cltype136 = type_nitc__AModuledecl.color;
idtype137 = type_nitc__AModuledecl.id;
if(cltype136 >= var_node->type->table_size) {
var135 = 0;
} else {
var135 = var_node->type->type_table[cltype136] == idtype137;
}
var138 = !var135;
if (var138){
var_up_serialize = 0;
var_up = var_node;
for(;;) {
if (var_up == NULL) {
var139 = 0; /* is null */
} else {
var139 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_up,((val*)NULL)) on <var_up:nullable ANode> */
var_other = ((val*)NULL);
{
var142 = ((short int(*)(val* self, val* p0))(var_up->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_up, var_other); /* == on <var_up:nullable ANode(ANode)>*/
}
var143 = !var142;
var140 = var143;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
var139 = var140;
}
if (var139){
{
{ /* Inline parser_nodes#ANode#parent (var_up) on <var_up:nullable ANode(ANode)> */
var146 = var_up->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_up:nullable ANode(ANode)> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
var_up = var144;
if (var_up == NULL) {
var147 = 1; /* is null */
} else {
var147 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_up,((val*)NULL)) on <var_up:nullable ANode> */
var_other150 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_up,var_other150) on <var_up:nullable ANode(ANode)> */
var153 = var_up == var_other150;
var151 = var153;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
}
var148 = var151;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
var147 = var148;
}
if (var147){
goto BREAK_label;
} else {
{
var154 = ((short int(*)(val* self))(var_up->class->vft[COLOR_nitc__serialization_phase__ANode__is_serialize]))(var_up); /* is_serialize on <var_up:nullable ANode(ANode)>*/
}
if (var154){
var_up_serialize = 1;
goto BREAK_label;
} else {
{
var155 = ((short int(*)(val* self))(var_up->class->vft[COLOR_nitc__serialization_phase__ANode__is_noserialize]))(var_up); /* is_noserialize on <var_up:nullable ANode(ANode)>*/
}
if (var155){
goto BREAK_label;
} else {
}
}
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var_157 = var_serialize;
if (var_serialize){
var156 = var_up_serialize;
} else {
var156 = var_157;
}
if (var156){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePreModel> */
var160 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePreModel> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_node) on <var_node:ANode> */
var163 = var_node->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_node:ANode> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "useless-serialize";
var167 = core__abstract_text___CString___to_s_full(var166, 17l, 17l);
var165 = var167;
varonce164 = var165;
}
if (unlikely(varonce168==NULL)) {
var169 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "Warning: superfluous use of `";
var173 = core__abstract_text___CString___to_s_full(var172, 29l, 29l);
var171 = var173;
varonce170 = var171;
}
((struct instance_core__NativeArray*)var169)->values[0]=var171;
if (likely(varonce174!=NULL)) {
var175 = varonce174;
} else {
var176 = "`.";
var177 = core__abstract_text___CString___to_s_full(var176, 2l, 2l);
var175 = var177;
varonce174 = var175;
}
((struct instance_core__NativeArray*)var169)->values[2]=var175;
} else {
var169 = varonce168;
varonce168 = NULL;
}
((struct instance_core__NativeArray*)var169)->values[1]=var_text;
{
var178 = ((val*(*)(val* self))(var169->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var169); /* native_to_s on <var169:NativeArray[String]>*/
}
varonce168 = var169;
{
var179 = nitc___nitc__ToolContext___warning(var158, var161, var165, var178);
}
} else {
var_181 = var_noserialize;
if (var_noserialize){
var182 = !var_up_serialize;
var180 = var182;
} else {
var180 = var_181;
}
if (var180){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePreModel> */
var185 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePreModel> */
if (unlikely(var185 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_node) on <var_node:ANode> */
var188 = var_node->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_node:ANode> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "useless-noserialize";
var192 = core__abstract_text___CString___to_s_full(var191, 19l, 19l);
var190 = var192;
varonce189 = var190;
}
if (unlikely(varonce193==NULL)) {
var194 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = "Warning: superfluous use of `";
var198 = core__abstract_text___CString___to_s_full(var197, 29l, 29l);
var196 = var198;
varonce195 = var196;
}
((struct instance_core__NativeArray*)var194)->values[0]=var196;
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "`.";
var202 = core__abstract_text___CString___to_s_full(var201, 2l, 2l);
var200 = var202;
varonce199 = var200;
}
((struct instance_core__NativeArray*)var194)->values[2]=var200;
} else {
var194 = varonce193;
varonce193 = NULL;
}
((struct instance_core__NativeArray*)var194)->values[1]=var_text;
{
var203 = ((val*(*)(val* self))(var194->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var194); /* native_to_s on <var194:NativeArray[String]>*/
}
varonce193 = var194;
{
var204 = nitc___nitc__ToolContext___warning(var183, var186, var190, var203);
}
} else {
}
}
} else {
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePreModel#process_nclassdef for (self: SerializationPhasePreModel, AClassdef) */
void nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePreModel___nitc__phase__Phase__process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : nullable Bool */;
val* var_serialize_by_default /* var serialize_by_default: nullable Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var10 /* : ToolContext */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : APropdef */;
val* var_sc /* var sc: APropdef */;
val* var15 /* : Location */;
val* var17 /* : Location */;
val* var19 /* : ANodes[APropdef] */;
val* var21 /* : ANodes[APropdef] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_per_attribute /* var per_attribute: Bool */;
var_nclassdef = p0;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var = 0;
} else {
var = var_nclassdef->type->type_table[cltype] == idtype;
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
{
var2 = nitc__serialization_phase___AStdClassdef___how_serialize(var_nclassdef);
}
var_serialize_by_default = var2;
if (var_serialize_by_default == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Bool#!= (var_serialize_by_default,((val*)NULL)) on <var_serialize_by_default:nullable Bool> */
var6 = 0; /* incompatible types Bool vs. null; cannot be NULL */
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePreModel> */
var10 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePreModel> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "Serializable";
var13 = core__abstract_text___CString___to_s_full(var12, 12l, 12l);
var11 = var13;
varonce = var11;
}
{
var14 = nitc__parser_util___ToolContext___parse_superclass(var8, var11);
}
var_sc = var14;
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var17 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:AClassdef(AStdClassdef)> */
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
{ /* Inline parser_nodes#ANode#location= (var_sc,var15) on <var_sc:APropdef> */
var_sc->attrs[COLOR_nitc__parser_nodes__ANode___location].val = var15; /* _location on <var_sc:APropdef> */
RET_LABEL18:(void)0;
}
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var21 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef(AStdClassdef)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var19, var_sc); /* Direct call abstract_collection#Sequence#add on <var19:ANodes[APropdef]>*/
}
var22 = (short int)((long)(var_serialize_by_default)>>2);
var23 = !var22;
var_per_attribute = var23;
{
nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePreModel___generate_serialization_method(self, var_nclassdef, var_per_attribute); /* Direct call serialization_phase#SerializationPhasePreModel#generate_serialization_method on <self:SerializationPhasePreModel>*/
}
{
nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePreModel___generate_deserialization_init(self, var_nclassdef); /* Direct call serialization_phase#SerializationPhasePreModel#generate_deserialization_init on <self:SerializationPhasePreModel>*/
}
} else {
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePreModel#process_nmodule for (self: SerializationPhasePreModel, AModule) */
void nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePreModel___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : Array[AMethPropdef] */;
val* var2 /* : Array[AMethPropdef] */;
val* var3 /* : Array[AStdClassdef] */;
val* var_auto_serializable_nclassdefs /* var auto_serializable_nclassdefs: Array[AStdClassdef] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_nmodule = p0;
{
{ /* Inline serialization_phase#AModule#inits_to_retype (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__serialization_phase__AModule___inits_to_retype].val; /* _inits_to_retype on <var_nmodule:AModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _inits_to_retype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 491);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var); /* Direct call array#AbstractArray#clear on <var:Array[AMethPropdef]>*/
}
{
var3 = nitc__serialization_phase___AModule___auto_serializable_nclassdefs(var_nmodule);
}
var_auto_serializable_nclassdefs = var3;
{
var4 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_auto_serializable_nclassdefs);
}
var5 = !var4;
if (var5){
{
nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePreModel___generate_deserialization_method(self, var_nmodule, var_auto_serializable_nclassdefs); /* Direct call serialization_phase#SerializationPhasePreModel#generate_deserialization_method on <self:SerializationPhasePreModel>*/
}
} else {
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePreModel#generate_serialization_method for (self: SerializationPhasePreModel, AClassdef, Bool) */
void nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePreModel___generate_serialization_method(val* self, val* p0, short int p1) {
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var_per_attribute /* var per_attribute: Bool */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
val* var_ /* var : ANodes[APropdef] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[APropdef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : nullable AMethid */;
val* var10 /* : nullable AMethid */;
val* var_methid /* var methid: nullable AMethid */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : String */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
short int var22 /* : Bool */;
val* var23 /* : Array[String] */;
val* var_code /* var code: Array[String] */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var_36 /* var : ANodes[APropdef] */;
val* var37 /* : Iterator[ANode] */;
val* var_38 /* var : Iterator[APropdef] */;
short int var39 /* : Bool */;
val* var41 /* : nullable Object */;
val* var_attribute /* var attribute: APropdef */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var_47 /* var : Bool */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var_50 /* var : Bool */;
short int var51 /* : Bool */;
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
val* var67 /* : String */;
val* var68 /* : String */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : ToolContext */;
val* var76 /* : ToolContext */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : APropdef */;
var_nclassdef = p0;
var_per_attribute = p1;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var2 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_npropdefs = var;
var_ = var_npropdefs;
{
var3 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[APropdef]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[APropdef]>*/
}
var_npropdef = var6;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var7 = 0;
} else {
var7 = var_npropdef->type->type_table[cltype] == idtype;
}
if (var7){
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var10 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <var_npropdef:APropdef(AMethPropdef)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_methid = var8;
if (var_methid == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_methid,((val*)NULL)) on <var_methid:nullable AMethid> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_methid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_methid, var_other); /* == on <var_methid:nullable AMethid(AMethid)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_17 = var12;
if (var12){
{
var18 = nitc__parser_work___Prod___collect_text(var_methid);
}
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "core_serialize_to";
var21 = core__abstract_text___CString___to_s_full(var20, 17l, 17l);
var19 = var21;
varonce = var19;
}
{
var22 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_core__kernel__Object___61d_61d]))(var18, var19); /* == on <var18:String>*/
}
var11 = var22;
} else {
var11 = var_17;
}
if (var11){
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[APropdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[APropdef]>*/
}
var23 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var23); /* Direct call array#Array#init on <var23:Array[String]>*/
}
var_code = var23;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "redef fun core_serialize_to(v)";
var27 = core__abstract_text___CString___to_s_full(var26, 30l, 30l);
var25 = var27;
varonce24 = var25;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var25); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "do";
var31 = core__abstract_text___CString___to_s_full(var30, 2l, 2l);
var29 = var31;
varonce28 = var29;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var29); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "\tsuper";
var35 = core__abstract_text___CString___to_s_full(var34, 6l, 6l);
var33 = var35;
varonce32 = var33;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var33); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
var_36 = var_npropdefs;
{
var37 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_36);
}
var_38 = var37;
for(;;) {
{
var39 = ((short int(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_38); /* is_ok on <var_38:Iterator[APropdef]>*/
}
if (var39){
} else {
goto BREAK_label40;
}
{
var41 = ((val*(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_38); /* item on <var_38:Iterator[APropdef]>*/
}
var_attribute = var41;
/* <var_attribute:APropdef> isa AAttrPropdef */
cltype43 = type_nitc__AAttrPropdef.color;
idtype44 = type_nitc__AAttrPropdef.id;
if(cltype43 >= var_attribute->type->table_size) {
var42 = 0;
} else {
var42 = var_attribute->type->type_table[cltype43] == idtype44;
}
if (var42){
var_47 = var_per_attribute;
if (var_per_attribute){
{
var48 = nitc__serialization_phase___ADefinition___ANode__is_serialize(var_attribute);
}
var49 = !var48;
var46 = var49;
} else {
var46 = var_47;
}
var_50 = var46;
if (var46){
var45 = var_50;
} else {
{
var51 = nitc__serialization_phase___ADefinition___ANode__is_noserialize(var_attribute);
}
var45 = var51;
}
if (var45){
goto BREAK_label52;
} else {
}
if (unlikely(varonce53==NULL)) {
var54 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "\tv.serialize_attribute(\"";
var58 = core__abstract_text___CString___to_s_full(var57, 24l, 24l);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var54)->values[0]=var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "\", ";
var62 = core__abstract_text___CString___to_s_full(var61, 3l, 3l);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var54)->values[2]=var60;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = ")";
var66 = core__abstract_text___CString___to_s_full(var65, 1l, 1l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var54)->values[4]=var64;
} else {
var54 = varonce53;
varonce53 = NULL;
}
{
var67 = nitc__serialization_phase___AAttrPropdef___serialize_name(var_attribute);
}
((struct instance_core__NativeArray*)var54)->values[1]=var67;
{
var68 = nitc__serialization_phase___AAttrPropdef___name(var_attribute);
}
((struct instance_core__NativeArray*)var54)->values[3]=var68;
{
var69 = ((val*(*)(val* self))(var54->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var54); /* native_to_s on <var54:NativeArray[String]>*/
}
varonce53 = var54;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var69); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
} else {
}
BREAK_label52: (void)0;
{
((void(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_38); /* next on <var_38:Iterator[APropdef]>*/
}
}
BREAK_label40: (void)0;
{
((void(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_38); /* finish on <var_38:Iterator[APropdef]>*/
}
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "end";
var73 = core__abstract_text___CString___to_s_full(var72, 3l, 3l);
var71 = var73;
varonce70 = var71;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var71); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePreModel> */
var76 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePreModel> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "\n";
var80 = core__abstract_text___CString___to_s_full(var79, 1l, 1l);
var78 = var80;
varonce77 = var78;
}
{
var81 = core__abstract_text___Collection___join(var_code, var78, ((val*)NULL));
}
{
var82 = nitc__parser_util___ToolContext___parse_propdef(var74, var81);
}
{
nitc___nitc__ANodes___core__abstract_collection__Sequence__push(var_npropdefs, var82); /* Direct call parser_nodes#ANodes#push on <var_npropdefs:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePreModel#generate_deserialization_init for (self: SerializationPhasePreModel, AClassdef) */
void nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePreModel___generate_deserialization_init(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
val* var_ /* var : ANodes[APropdef] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[APropdef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var7 /* : Bool */;
int cltype;
int idtype;
val* var8 /* : nullable AMethid */;
val* var10 /* : nullable AMethid */;
val* var_methid /* var methid: nullable AMethid */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
val* var18 /* : String */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var_code /* var code: String */;
val* var27 /* : ToolContext */;
val* var29 /* : ToolContext */;
val* var30 /* : APropdef */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name;
val* var_npropdef34 /* var npropdef: AMethPropdef */;
val* var35 /* : nullable ANode */;
val* var37 /* : nullable ANode */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
val* var42 /* : Array[AMethPropdef] */;
val* var44 /* : Array[AMethPropdef] */;
var_nclassdef = p0;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var2 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_npropdefs = var;
var_ = var_npropdefs;
{
var3 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[APropdef]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[APropdef]>*/
}
var_npropdef = var6;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var7 = 0;
} else {
var7 = var_npropdef->type->type_table[cltype] == idtype;
}
if (var7){
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var10 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <var_npropdef:APropdef(AMethPropdef)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_methid = var8;
if (var_methid == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_methid,((val*)NULL)) on <var_methid:nullable AMethid> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_methid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_methid, var_other); /* == on <var_methid:nullable AMethid(AMethid)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_17 = var12;
if (var12){
{
var18 = nitc__parser_work___Prod___collect_text(var_methid);
}
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "from_deserializer";
var21 = core__abstract_text___CString___to_s_full(var20, 17l, 17l);
var19 = var21;
varonce = var19;
}
{
var22 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_core__kernel__Object___61d_61d]))(var18, var19); /* == on <var18:String>*/
}
var11 = var22;
} else {
var11 = var_17;
}
if (var11){
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[APropdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[APropdef]>*/
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "redef init from_deserializer(v: Deserializer) do abort";
var26 = core__abstract_text___CString___to_s_full(var25, 54l, 54l);
var24 = var26;
varonce23 = var24;
}
var_code = var24;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePreModel> */
var29 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePreModel> */
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
var30 = nitc__parser_util___ToolContext___parse_propdef(var27, var_code);
}
/* <var30:APropdef> isa AMethPropdef */
cltype32 = type_nitc__AMethPropdef.color;
idtype33 = type_nitc__AMethPropdef.id;
if(cltype32 >= var30->type->table_size) {
var31 = 0;
} else {
var31 = var30->type->type_table[cltype32] == idtype33;
}
if (unlikely(!var31)) {
var_class_name = var30 == NULL ? "null" : var30->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 234);
fatal_exit(1);
}
var_npropdef34 = var30;
{
core___core__Sequence___SimpleCollection__add(var_npropdefs, var_npropdef34); /* Direct call abstract_collection#Sequence#add on <var_npropdefs:ANodes[APropdef]>*/
}
{
{ /* Inline parser_nodes#ANode#parent (var_nclassdef) on <var_nclassdef:AClassdef> */
var37 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_nclassdef:AClassdef> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
/* <var35:nullable ANode> isa AModule */
cltype39 = type_nitc__AModule.color;
idtype40 = type_nitc__AModule.id;
if(var35 == NULL) {
var38 = 0;
} else {
if(cltype39 >= var35->type->table_size) {
var38 = 0;
} else {
var38 = var35->type->type_table[cltype39] == idtype40;
}
}
if (unlikely(!var38)) {
var_class_name41 = var35 == NULL ? "null" : var35->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 236);
fatal_exit(1);
}
{
{ /* Inline serialization_phase#AModule#inits_to_retype (var35) on <var35:nullable ANode(AModule)> */
var44 = var35->attrs[COLOR_nitc__serialization_phase__AModule___inits_to_retype].val; /* _inits_to_retype on <var35:nullable ANode(AModule)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _inits_to_retype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 491);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var42, var_npropdef34); /* Direct call array#Array#add on <var42:Array[AMethPropdef]>*/
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePreModel#generate_deserialization_method for (self: SerializationPhasePreModel, AModule, Array[AStdClassdef]) */
void nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePreModel___generate_deserialization_method(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdefs /* var nclassdefs: Array[AStdClassdef] */;
val* var /* : Array[String] */;
val* var_code /* var code: Array[String] */;
val* var1 /* : nullable AStdClassdef */;
val* var_deserializer_nclassdef /* var deserializer_nclassdef: nullable AStdClassdef */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var_deserializer_npropdef /* var deserializer_npropdef: nullable Object */;
val* var11 /* : nullable AMethPropdef */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : ToolContext */;
val* var24 /* : ToolContext */;
val* var25 /* : Location */;
val* var27 /* : Location */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : Message */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : ANodes[AClassdef] */;
val* var45 /* : ANodes[AClassdef] */;
val* var46 /* : ToolContext */;
val* var48 /* : ToolContext */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : AClassdef */;
val* var55 /* : ANodes[APropdef] */;
val* var57 /* : ANodes[APropdef] */;
val* var58 /* : ToolContext */;
val* var60 /* : ToolContext */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : APropdef */;
var_nmodule = p0;
var_nclassdefs = p1;
var = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
var_code = var;
{
var1 = nitc__serialization_phase___AModule___deserializer_nclassdef(var_nmodule);
}
var_deserializer_nclassdef = var1;
if (var_deserializer_nclassdef == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_deserializer_nclassdef,((val*)NULL)) on <var_deserializer_nclassdef:nullable AStdClassdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_deserializer_nclassdef,var_other) on <var_deserializer_nclassdef:nullable AStdClassdef(AStdClassdef)> */
var7 = var_deserializer_nclassdef == var_other;
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
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "redef class Deserializer";
var10 = core__abstract_text___CString___to_s_full(var9, 24l, 24l);
var8 = var10;
varonce = var8;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var8); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
var_deserializer_npropdef = ((val*)NULL);
} else {
{
var11 = nitc__serialization_phase___AStdClassdef___deserializer_npropdef(var_deserializer_nclassdef);
}
var_deserializer_npropdef = var11;
}
if (var_deserializer_npropdef == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_deserializer_npropdef,((val*)NULL)) on <var_deserializer_npropdef:nullable Object(nullable AMethPropdef)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_deserializer_npropdef,var_other) on <var_deserializer_npropdef:nullable AMethPropdef(AMethPropdef)> */
var17 = var_deserializer_npropdef == var_other;
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
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "\tredef fun deserialize_class_intern(name) do abort";
var21 = core__abstract_text___CString___to_s_full(var20, 50l, 50l);
var19 = var21;
varonce18 = var19;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var19); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
} else {
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePreModel> */
var24 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePreModel> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_deserializer_npropdef) on <var_deserializer_npropdef:nullable Object(AMethPropdef)> */
var27 = var_deserializer_npropdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_deserializer_npropdef:nullable Object(AMethPropdef)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "Error: `Deserializer::deserialize_class_intern` is generated and must not be defined, use `deserialize_class` instead.";
var31 = core__abstract_text___CString___to_s_full(var30, 118l, 118l);
var29 = var31;
varonce28 = var29;
}
{
var32 = nitc___nitc__ToolContext___error(var22, var25, var29);
}
goto RET_LABEL;
}
if (var_deserializer_nclassdef == NULL) {
var33 = 1; /* is null */
} else {
var33 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_deserializer_nclassdef,((val*)NULL)) on <var_deserializer_nclassdef:nullable AStdClassdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_deserializer_nclassdef,var_other) on <var_deserializer_nclassdef:nullable AStdClassdef(AStdClassdef)> */
var38 = var_deserializer_nclassdef == var_other;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "end";
var42 = core__abstract_text___CString___to_s_full(var41, 3l, 3l);
var40 = var42;
varonce39 = var40;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var40); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var45 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePreModel> */
var48 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePreModel> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "\n";
var52 = core__abstract_text___CString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
{
var53 = core__abstract_text___Collection___join(var_code, var50, ((val*)NULL));
}
{
var54 = nitc__parser_util___ToolContext___parse_classdef(var46, var53);
}
{
core___core__Sequence___SimpleCollection__add(var43, var54); /* Direct call abstract_collection#Sequence#add on <var43:ANodes[AClassdef]>*/
}
} else {
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_deserializer_nclassdef) on <var_deserializer_nclassdef:nullable AStdClassdef(AStdClassdef)> */
var57 = var_deserializer_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_deserializer_nclassdef:nullable AStdClassdef(AStdClassdef)> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePreModel> */
var60 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePreModel> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "\n";
var64 = core__abstract_text___CString___to_s_full(var63, 1l, 1l);
var62 = var64;
varonce61 = var62;
}
{
var65 = core__abstract_text___Collection___join(var_code, var62, ((val*)NULL));
}
{
var66 = nitc__parser_util___ToolContext___parse_propdef(var58, var65);
}
{
core___core__Sequence___SimpleCollection__add(var55, var66); /* Direct call abstract_collection#Sequence#add on <var55:ANodes[APropdef]>*/
}
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePostModel#process_nmodule for (self: SerializationPhasePostModel, AModule) */
void nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePostModel___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : Array[AMethPropdef] */;
val* var2 /* : Array[AMethPropdef] */;
val* var_ /* var : Array[AMethPropdef] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[AMethPropdef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var7 /* : nullable ANode */;
val* var9 /* : nullable ANode */;
val* var_nclassdef /* var nclassdef: nullable ANode */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var11 /* : nullable Bool */;
val* var_serialize_by_default /* var serialize_by_default: nullable Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_per_attribute /* var per_attribute: Bool */;
val* var19 /* : Array[AStdClassdef] */;
val* var_auto_serializable_nclassdefs /* var auto_serializable_nclassdefs: Array[AStdClassdef] */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
var_nmodule = p0;
{
{ /* Inline serialization_phase#AModule#inits_to_retype (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__serialization_phase__AModule___inits_to_retype].val; /* _inits_to_retype on <var_nmodule:AModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _inits_to_retype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 491);
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
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[AMethPropdef]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[AMethPropdef]>*/
}
var_npropdef = var6;
{
{ /* Inline parser_nodes#ANode#parent (var_npropdef) on <var_npropdef:AMethPropdef> */
var9 = var_npropdef->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_npropdef:AMethPropdef> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_nclassdef = var7;
/* <var_nclassdef:nullable ANode> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(var_nclassdef == NULL) {
var10 = 0;
} else {
if(cltype >= var_nclassdef->type->table_size) {
var10 = 0;
} else {
var10 = var_nclassdef->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var10)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 281);
fatal_exit(1);
}
{
var11 = nitc__serialization_phase___AStdClassdef___how_serialize(var_nclassdef);
}
var_serialize_by_default = var11;
if (var_serialize_by_default == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Bool#!= (var_serialize_by_default,((val*)NULL)) on <var_serialize_by_default:nullable Bool> */
var15 = 0; /* incompatible types Bool vs. null; cannot be NULL */
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 284);
fatal_exit(1);
}
var17 = (short int)((long)(var_serialize_by_default)>>2);
var18 = !var17;
var_per_attribute = var18;
{
nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePostModel___fill_deserialization_init(self, var_nclassdef, var_npropdef, var_per_attribute); /* Direct call serialization_phase#SerializationPhasePostModel#fill_deserialization_init on <self:SerializationPhasePostModel>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[AMethPropdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[AMethPropdef]>*/
}
{
var19 = nitc__serialization_phase___AModule___auto_serializable_nclassdefs(var_nmodule);
}
var_auto_serializable_nclassdefs = var19;
{
var20 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_auto_serializable_nclassdefs);
}
var21 = !var20;
if (var21){
{
nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePostModel___fill_deserialization_method(self, var_nmodule, var_auto_serializable_nclassdefs); /* Direct call serialization_phase#SerializationPhasePostModel#fill_deserialization_method on <self:SerializationPhasePostModel>*/
}
} else {
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePostModel#fill_deserialization_init for (self: SerializationPhasePostModel, AClassdef, AMethPropdef, Bool) */
void nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePostModel___fill_deserialization_init(val* self, val* p0, val* p1, short int p2) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var_init_npropdef /* var init_npropdef: AMethPropdef */;
short int var_per_attribute /* var per_attribute: Bool */;
val* var /* : Array[String] */;
val* var_code /* var code: Array[String] */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : ANodes[APropdef] */;
val* var6 /* : ANodes[APropdef] */;
val* var_ /* var : ANodes[APropdef] */;
val* var7 /* : Iterator[ANode] */;
val* var_8 /* var : Iterator[APropdef] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_attribute /* var attribute: APropdef */;
short int var11 /* : Bool */;
int cltype;
int idtype;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable MType */;
val* var23 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : String */;
val* var_type_name /* var type_name: String */;
val* var31 /* : String */;
val* var_name /* var name: String */;
val* var_resolved_type_name /* var resolved_type_name: String */;
val* var32 /* : nullable MClassDef */;
val* var34 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var_other38 /* var other: nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : MClassType */;
val* var43 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var44 /* : MModule */;
val* var46 /* : MModule */;
val* var47 /* : MType */;
val* var_resolved_mtype /* var resolved_mtype: MType */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
short int var53 /* : Bool */;
val* var55 /* : NativeArray[String] */;
static val* varonce54;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
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
val* var72 /* : String */;
val* var73 /* : String */;
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
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var93 /* : String */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
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
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : CString */;
val* var139 /* : String */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : CString */;
val* var143 /* : String */;
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
val* var156 /* : String */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
val* var162 /* : ToolContext */;
val* var164 /* : ToolContext */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : CString */;
val* var168 /* : String */;
val* var169 /* : String */;
val* var170 /* : APropdef */;
short int var171 /* : Bool */;
int cltype172;
int idtype173;
const char* var_class_name;
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var174 /* : nullable AExpr */;
val* var176 /* : nullable AExpr */;
val* var177 /* : LiteralVisitor */;
val* var178 /* : ToolContext */;
val* var180 /* : ToolContext */;
val* var_v /* var v: LiteralVisitor */;
val* var181 /* : nullable AExpr */;
val* var183 /* : nullable AExpr */;
var_nclassdef = p0;
var_init_npropdef = p1;
var_per_attribute = p2;
var = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
var_code = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "redef init from_deserializer(v: Deserializer)\ndo\n\tsuper\n\tv.notify_of_creation self\n";
var3 = core__abstract_text___CString___to_s_full(var2, 83l, 83l);
var1 = var3;
varonce = var1;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var1); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var6 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
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
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[APropdef]>*/
}
if (var9){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[APropdef]>*/
}
var_attribute = var10;
/* <var_attribute:APropdef> isa AAttrPropdef */
cltype = type_nitc__AAttrPropdef.color;
idtype = type_nitc__AAttrPropdef.id;
if(cltype >= var_attribute->type->table_size) {
var11 = 0;
} else {
var11 = var_attribute->type->type_table[cltype] == idtype;
}
var12 = !var11;
if (var12){
goto BREAK_label13;
} else {
}
var_16 = var_per_attribute;
if (var_per_attribute){
{
var17 = nitc__serialization_phase___ADefinition___ANode__is_serialize(var_attribute);
}
var18 = !var17;
var15 = var18;
} else {
var15 = var_16;
}
var_19 = var15;
if (var15){
var14 = var_19;
} else {
{
var20 = nitc__serialization_phase___ADefinition___ANode__is_noserialize(var_attribute);
}
var14 = var20;
}
if (var14){
goto BREAK_label13;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mtype (var_attribute) on <var_attribute:APropdef(AAttrPropdef)> */
var23 = var_attribute->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <var_attribute:APropdef(AAttrPropdef)> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mtype = var21;
if (var_mtype == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var29 = var_mtype == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
goto BREAK_label13;
} else {
}
{
var30 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
var_type_name = var30;
{
var31 = nitc__serialization_phase___AAttrPropdef___name(var_attribute);
}
var_name = var31;
var_resolved_type_name = var_type_name;
{
{ /* Inline modelize_class#AClassdef#mclassdef (var_nclassdef) on <var_nclassdef:AClassdef> */
var34 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclassdef].val; /* _mclassdef on <var_nclassdef:AClassdef> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_mclassdef = var32;
if (var_mclassdef == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other38 = ((val*)NULL);
{
var39 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mclassdef, var_other38); /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var40 = !var39;
var36 = var40;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var43 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_bound_mtype = var41;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var46 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_mtype, var_bound_mtype, var_bound_mtype, var44, 1); /* resolve_for on <var_mtype:nullable MType(MType)>*/
}
var_resolved_mtype = var47;
{
var48 = ((val*(*)(val* self))(var_resolved_mtype->class->vft[COLOR_nitc__model_base__MEntity__name]))(var_resolved_mtype); /* name on <var_resolved_mtype:MType>*/
}
var_resolved_type_name = var48;
} else {
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "nullable Object";
var52 = core__abstract_text___CString___to_s_full(var51, 15l, 15l);
var50 = var52;
varonce49 = var50;
}
{
var53 = ((short int(*)(val* self, val* p0))(var_type_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_type_name, var50); /* == on <var_type_name:String>*/
}
if (var53){
if (unlikely(varonce54==NULL)) {
var55 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "\tself.";
var59 = core__abstract_text___CString___to_s_full(var58, 6l, 6l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var55)->values[0]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = " = v.deserialize_attribute(\"";
var63 = core__abstract_text___CString___to_s_full(var62, 28l, 28l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var55)->values[2]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "\", \"";
var67 = core__abstract_text___CString___to_s_full(var66, 4l, 4l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var55)->values[4]=var65;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "\")\n";
var71 = core__abstract_text___CString___to_s_full(var70, 3l, 3l);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var55)->values[6]=var69;
} else {
var55 = varonce54;
varonce54 = NULL;
}
((struct instance_core__NativeArray*)var55)->values[1]=var_name;
{
var72 = nitc__serialization_phase___AAttrPropdef___serialize_name(var_attribute);
}
((struct instance_core__NativeArray*)var55)->values[3]=var72;
((struct instance_core__NativeArray*)var55)->values[5]=var_resolved_type_name;
{
var73 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var73); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
} else {
if (unlikely(varonce74==NULL)) {
var75 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "\tvar ";
var79 = core__abstract_text___CString___to_s_full(var78, 5l, 5l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = " = v.deserialize_attribute(\"";
var83 = core__abstract_text___CString___to_s_full(var82, 28l, 28l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var75)->values[2]=var81;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "\", \"";
var87 = core__abstract_text___CString___to_s_full(var86, 4l, 4l);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var75)->values[4]=var85;
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "\")\n\tif v.deserialize_attribute_missing then\n";
var91 = core__abstract_text___CString___to_s_full(var90, 44l, 44l);
var89 = var91;
varonce88 = var89;
}
((struct instance_core__NativeArray*)var75)->values[6]=var89;
} else {
var75 = varonce74;
varonce74 = NULL;
}
((struct instance_core__NativeArray*)var75)->values[1]=var_name;
{
var92 = nitc__serialization_phase___AAttrPropdef___serialize_name(var_attribute);
}
((struct instance_core__NativeArray*)var75)->values[3]=var92;
((struct instance_core__NativeArray*)var75)->values[5]=var_resolved_type_name;
{
var93 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce74 = var75;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var93); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (var_attribute) on <var_attribute:APropdef(AAttrPropdef)> */
var96 = var_attribute->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <var_attribute:APropdef(AAttrPropdef)> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
if (var94){
} else {
/* <var_mtype:nullable MType(MType)> isa MNullableType */
cltype98 = type_nitc__MNullableType.color;
idtype99 = type_nitc__MNullableType.id;
if(cltype98 >= var_mtype->type->table_size) {
var97 = 0;
} else {
var97 = var_mtype->type->type_table[cltype98] == idtype99;
}
if (var97){
if (unlikely(varonce100==NULL)) {
var101 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "\t\tself.";
var105 = core__abstract_text___CString___to_s_full(var104, 7l, 7l);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var101)->values[0]=var103;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = " = null";
var109 = core__abstract_text___CString___to_s_full(var108, 7l, 7l);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var101)->values[2]=var107;
} else {
var101 = varonce100;
varonce100 = NULL;
}
((struct instance_core__NativeArray*)var101)->values[1]=var_name;
{
var110 = ((val*(*)(val* self))(var101->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var110); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
} else {
if (unlikely(varonce111==NULL)) {
var112 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "\t\tv.errors.add new Error(\"Deserialization Error: attribute `{class_name}::";
var116 = core__abstract_text___CString___to_s_full(var115, 74l, 74l);
var114 = var116;
varonce113 = var114;
}
((struct instance_core__NativeArray*)var112)->values[0]=var114;
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "` missing from JSON object\")";
var120 = core__abstract_text___CString___to_s_full(var119, 28l, 28l);
var118 = var120;
varonce117 = var118;
}
((struct instance_core__NativeArray*)var112)->values[2]=var118;
} else {
var112 = varonce111;
varonce111 = NULL;
}
((struct instance_core__NativeArray*)var112)->values[1]=var_name;
{
var121 = ((val*(*)(val* self))(var112->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var112); /* native_to_s on <var112:NativeArray[String]>*/
}
varonce111 = var112;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var121); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
}
}
if (unlikely(varonce122==NULL)) {
var123 = NEW_core__NativeArray(15l, &type_core__NativeArray__core__String);
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "\telse if not ";
var127 = core__abstract_text___CString___to_s_full(var126, 13l, 13l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var123)->values[0]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = " isa ";
var131 = core__abstract_text___CString___to_s_full(var130, 5l, 5l);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var123)->values[2]=var129;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = " then\n\t\tv.errors.add new AttributeTypeError(self, \"";
var135 = core__abstract_text___CString___to_s_full(var134, 51l, 51l);
var133 = var135;
varonce132 = var133;
}
((struct instance_core__NativeArray*)var123)->values[4]=var133;
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "\", ";
var139 = core__abstract_text___CString___to_s_full(var138, 3l, 3l);
var137 = var139;
varonce136 = var137;
}
((struct instance_core__NativeArray*)var123)->values[6]=var137;
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = ", \"";
var143 = core__abstract_text___CString___to_s_full(var142, 3l, 3l);
var141 = var143;
varonce140 = var141;
}
((struct instance_core__NativeArray*)var123)->values[8]=var141;
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "\")\n\t\tif v.keep_going == false then return\n\telse\n\t\tself.";
var147 = core__abstract_text___CString___to_s_full(var146, 55l, 55l);
var145 = var147;
varonce144 = var145;
}
((struct instance_core__NativeArray*)var123)->values[10]=var145;
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = " = ";
var151 = core__abstract_text___CString___to_s_full(var150, 3l, 3l);
var149 = var151;
varonce148 = var149;
}
((struct instance_core__NativeArray*)var123)->values[12]=var149;
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = "\n\tend\n";
var155 = core__abstract_text___CString___to_s_full(var154, 6l, 6l);
var153 = var155;
varonce152 = var153;
}
((struct instance_core__NativeArray*)var123)->values[14]=var153;
} else {
var123 = varonce122;
varonce122 = NULL;
}
((struct instance_core__NativeArray*)var123)->values[1]=var_name;
((struct instance_core__NativeArray*)var123)->values[3]=var_type_name;
{
var156 = nitc__serialization_phase___AAttrPropdef___serialize_name(var_attribute);
}
((struct instance_core__NativeArray*)var123)->values[5]=var156;
((struct instance_core__NativeArray*)var123)->values[7]=var_name;
((struct instance_core__NativeArray*)var123)->values[9]=var_resolved_type_name;
((struct instance_core__NativeArray*)var123)->values[11]=var_name;
((struct instance_core__NativeArray*)var123)->values[13]=var_name;
{
var157 = ((val*(*)(val* self))(var123->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var123); /* native_to_s on <var123:NativeArray[String]>*/
}
varonce122 = var123;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var157); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
}
BREAK_label13: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[APropdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[APropdef]>*/
}
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "end";
var161 = core__abstract_text___CString___to_s_full(var160, 3l, 3l);
var159 = var161;
varonce158 = var159;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var159); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePostModel> */
var164 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePostModel> */
if (unlikely(var164 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var162 = var164;
RET_LABEL163:(void)0;
}
}
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "\n";
var168 = core__abstract_text___CString___to_s_full(var167, 1l, 1l);
var166 = var168;
varonce165 = var166;
}
{
var169 = core__abstract_text___Collection___join(var_code, var166, ((val*)NULL));
}
{
var170 = nitc__parser_util___ToolContext___parse_propdef(var162, var169);
}
/* <var170:APropdef> isa AMethPropdef */
cltype172 = type_nitc__AMethPropdef.color;
idtype173 = type_nitc__AMethPropdef.id;
if(cltype172 >= var170->type->table_size) {
var171 = 0;
} else {
var171 = var170->type->type_table[cltype172] == idtype173;
}
if (unlikely(!var171)) {
var_class_name = var170 == NULL ? "null" : var170->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 367);
fatal_exit(1);
}
var_npropdef = var170;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (var_npropdef) on <var_npropdef:AMethPropdef> */
var176 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <var_npropdef:AMethPropdef> */
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var_init_npropdef->class->vft[COLOR_nitc__parser_nodes__AMethPropdef__n_block_61d]))(var_init_npropdef, var174); /* n_block= on <var_init_npropdef:AMethPropdef>*/
}
var177 = NEW_nitc__literal__LiteralVisitor(&type_nitc__literal__LiteralVisitor);
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePostModel> */
var180 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePostModel> */
if (unlikely(var180 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var178 = var180;
RET_LABEL179:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var177->class->vft[COLOR_nitc__literal__LiteralVisitor__toolcontext_61d]))(var177, var178); /* toolcontext= on <var177:LiteralVisitor>*/
}
{
((void(*)(val* self))(var177->class->vft[COLOR_core__kernel__Object__init]))(var177); /* init on <var177:LiteralVisitor>*/
}
var_v = var177;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (var_npropdef) on <var_npropdef:AMethPropdef> */
var183 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <var_npropdef:AMethPropdef> */
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var181); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:LiteralVisitor>*/
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhasePostModel#fill_deserialization_method for (self: SerializationPhasePostModel, AModule, Array[AStdClassdef]) */
void nitc__serialization_phase___nitc__serialization_phase__SerializationPhasePostModel___fill_deserialization_method(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdefs /* var nclassdefs: Array[AStdClassdef] */;
val* var /* : nullable AStdClassdef */;
val* var_deserializer_nclassdef /* var deserializer_nclassdef: nullable AStdClassdef */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable AMethPropdef */;
val* var_deserializer_npropdef /* var deserializer_npropdef: nullable AMethPropdef */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Set[String] */;
val* var15 /* : Set[nullable Object] */;
val* var_types_to_deserialize /* var types_to_deserialize: Set[String] */;
val* var_ /* var : Array[AStdClassdef] */;
val* var16 /* : IndexedIterator[nullable Object] */;
val* var_17 /* var : IndexedIterator[AStdClassdef] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AStdClassdef */;
val* var20 /* : nullable MClass */;
val* var22 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
long var31 /* : Int */;
long var33 /* : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
val* var38 /* : MClassKind */;
val* var40 /* : MClassKind */;
val* var41 /* : Sys */;
val* var42 /* : MClassKind */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : String */;
val* var50 /* : String */;
val* var51 /* : ANodes[AClassdef] */;
val* var53 /* : ANodes[AClassdef] */;
val* var_54 /* var : ANodes[AClassdef] */;
val* var55 /* : Iterator[ANode] */;
val* var_56 /* var : Iterator[AClassdef] */;
short int var57 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_nclassdef60 /* var nclassdef: AClassdef */;
short int var61 /* : Bool */;
int cltype;
int idtype;
short int var62 /* : Bool */;
val* var64 /* : ANodes[APropdef] */;
val* var66 /* : ANodes[APropdef] */;
val* var_67 /* var : ANodes[APropdef] */;
val* var68 /* : Iterator[ANode] */;
val* var_69 /* var : Iterator[APropdef] */;
short int var70 /* : Bool */;
val* var72 /* : nullable Object */;
val* var_attribute /* var attribute: APropdef */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
short int var76 /* : Bool */;
val* var78 /* : nullable Bool */;
val* var_serialize_by_default /* var serialize_by_default: nullable Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var_per_attribute /* var per_attribute: Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var_87 /* var : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var_90 /* var : Bool */;
short int var91 /* : Bool */;
val* var92 /* : nullable MType */;
val* var94 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
val* var104 /* : MType */;
val* var106 /* : MType */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
short int var_113 /* var : Bool */;
val* var114 /* : MClass */;
val* var116 /* : MClass */;
long var117 /* : Int */;
long var119 /* : Int */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
int cltype123;
int idtype124;
const char* var_class_name;
short int var125 /* : Bool */;
short int var_126 /* var : Bool */;
val* var127 /* : MClass */;
val* var129 /* : MClass */;
val* var130 /* : MClassKind */;
val* var132 /* : MClassKind */;
val* var133 /* : Sys */;
val* var134 /* : MClassKind */;
short int var135 /* : Bool */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var_140 /* var : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
val* var143 /* : nullable MModule */;
val* var145 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
val* var152 /* : MClass */;
val* var154 /* : MClass */;
val* var155 /* : POSetElement[MClass] */;
val* var156 /* : Collection[nullable Object] */;
val* var_greaters /* var greaters: Collection[MClass] */;
short int var_is_serializable /* var is_serializable: Bool */;
val* var_157 /* var : Collection[MClass] */;
val* var158 /* : Iterator[nullable Object] */;
val* var_159 /* var : Iterator[MClass] */;
short int var160 /* : Bool */;
val* var162 /* : nullable Object */;
val* var_sup /* var sup: MClass */;
val* var163 /* : String */;
val* var165 /* : String */;
static val* varonce;
val* var166 /* : String */;
char* var167 /* : CString */;
val* var168 /* : String */;
short int var169 /* : Bool */;
val* var170 /* : String */;
val* var171 /* : Array[String] */;
val* var_code /* var code: Array[String] */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : CString */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var_180 /* var : Set[String] */;
val* var181 /* : Iterator[nullable Object] */;
val* var_182 /* var : Iterator[String] */;
short int var183 /* : Bool */;
val* var185 /* : nullable Object */;
val* var_name /* var name: String */;
val* var187 /* : NativeArray[String] */;
static val* varonce186;
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
val* var200 /* : String */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : CString */;
val* var204 /* : String */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : CString */;
val* var208 /* : String */;
val* var209 /* : ToolContext */;
val* var211 /* : ToolContext */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : CString */;
val* var215 /* : String */;
val* var216 /* : String */;
val* var217 /* : APropdef */;
short int var218 /* : Bool */;
int cltype219;
int idtype220;
const char* var_class_name221;
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var222 /* : nullable AExpr */;
val* var224 /* : nullable AExpr */;
val* var225 /* : LiteralVisitor */;
val* var226 /* : ToolContext */;
val* var228 /* : ToolContext */;
val* var_v /* var v: LiteralVisitor */;
val* var229 /* : nullable AExpr */;
val* var231 /* : nullable AExpr */;
var_nmodule = p0;
var_nclassdefs = p1;
{
var = nitc__serialization_phase___AModule___deserializer_nclassdef(var_nmodule);
}
var_deserializer_nclassdef = var;
if (var_deserializer_nclassdef == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_deserializer_nclassdef,((val*)NULL)) on <var_deserializer_nclassdef:nullable AStdClassdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_deserializer_nclassdef,var_other) on <var_deserializer_nclassdef:nullable AStdClassdef(AStdClassdef)> */
var6 = var_deserializer_nclassdef == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var7 = nitc__serialization_phase___AStdClassdef___deserializer_npropdef(var_deserializer_nclassdef);
}
var_deserializer_npropdef = var7;
if (var_deserializer_npropdef == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_deserializer_npropdef,((val*)NULL)) on <var_deserializer_npropdef:nullable AMethPropdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_deserializer_npropdef,var_other) on <var_deserializer_npropdef:nullable AMethPropdef(AMethPropdef)> */
var13 = var_deserializer_npropdef == var_other;
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
goto RET_LABEL;
} else {
}
var14 = NEW_core__Set(&type_core__Set__core__String);
{
var15 = core__hash_collection___Set___new(var14);
}
var_types_to_deserialize = var15;
var_ = var_nclassdefs;
{
var16 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:IndexedIterator[AStdClassdef]>*/
}
if (var18){
} else {
goto BREAK_label;
}
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:IndexedIterator[AStdClassdef]>*/
}
var_nclassdef = var19;
{
{ /* Inline modelize_class#AClassdef#mclass (var_nclassdef) on <var_nclassdef:AStdClassdef> */
var22 = var_nclassdef->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val; /* _mclass on <var_nclassdef:AStdClassdef> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_mclass = var20;
if (var_mclass == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var28 = var_mclass == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
goto BREAK_label29;
} else {
}
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var33 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var31,0l) on <var31:Int> */
var36 = var31 == 0l;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_37 = var34;
if (var34){
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var40 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var41 = glob_sys;
{
var42 = nitc__model___core__Sys___concrete_kind(var41);
}
{
{ /* Inline kernel#Object#== (var38,var42) on <var38:MClassKind> */
var_other = var42;
{
{ /* Inline kernel#Object#is_same_instance (var38,var_other) on <var38:MClassKind> */
var47 = var38 == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var30 = var43;
} else {
var30 = var_37;
}
if (var30){
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var50 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var_types_to_deserialize&3)?class_info[((long)var_types_to_deserialize&3)]:var_types_to_deserialize->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_types_to_deserialize, var48); /* add on <var_types_to_deserialize:Set[String]>*/
}
} else {
}
BREAK_label29: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:IndexedIterator[AStdClassdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:IndexedIterator[AStdClassdef]>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var53 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
var_54 = var51;
{
var55 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_54);
}
var_56 = var55;
for(;;) {
{
var57 = ((short int(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_56); /* is_ok on <var_56:Iterator[AClassdef]>*/
}
if (var57){
} else {
goto BREAK_label58;
}
{
var59 = ((val*(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_56); /* item on <var_56:Iterator[AClassdef]>*/
}
var_nclassdef60 = var59;
/* <var_nclassdef60:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef60->type->table_size) {
var61 = 0;
} else {
var61 = var_nclassdef60->type->type_table[cltype] == idtype;
}
var62 = !var61;
if (var62){
goto BREAK_label63;
} else {
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef60) on <var_nclassdef60:AClassdef(AStdClassdef)> */
var66 = var_nclassdef60->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef60:AClassdef(AStdClassdef)> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
var_67 = var64;
{
var68 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_67);
}
var_69 = var68;
for(;;) {
{
var70 = ((short int(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_69); /* is_ok on <var_69:Iterator[APropdef]>*/
}
if (var70){
} else {
goto BREAK_label71;
}
{
var72 = ((val*(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_69); /* item on <var_69:Iterator[APropdef]>*/
}
var_attribute = var72;
/* <var_attribute:APropdef> isa AAttrPropdef */
cltype74 = type_nitc__AAttrPropdef.color;
idtype75 = type_nitc__AAttrPropdef.id;
if(cltype74 >= var_attribute->type->table_size) {
var73 = 0;
} else {
var73 = var_attribute->type->type_table[cltype74] == idtype75;
}
var76 = !var73;
if (var76){
goto BREAK_label77;
} else {
}
{
var78 = nitc__serialization_phase___AStdClassdef___how_serialize(var_nclassdef60);
}
var_serialize_by_default = var78;
if (var_serialize_by_default == NULL) {
var79 = 1; /* is null */
} else {
var79 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Bool#== (var_serialize_by_default,((val*)NULL)) on <var_serialize_by_default:nullable Bool> */
var82 = 0; /* incompatible types Bool vs. null; cannot be NULL */
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var79 = var80;
}
if (var79){
goto BREAK_label77;
} else {
}
var83 = (short int)((long)(var_serialize_by_default)>>2);
var84 = !var83;
var_per_attribute = var84;
var_87 = var_per_attribute;
if (var_per_attribute){
{
var88 = nitc__serialization_phase___ADefinition___ANode__is_serialize(var_attribute);
}
var89 = !var88;
var86 = var89;
} else {
var86 = var_87;
}
var_90 = var86;
if (var86){
var85 = var_90;
} else {
{
var91 = nitc__serialization_phase___ADefinition___ANode__is_noserialize(var_attribute);
}
var85 = var91;
}
if (var85){
goto BREAK_label77;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mtype (var_attribute) on <var_attribute:APropdef(AAttrPropdef)> */
var94 = var_attribute->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <var_attribute:APropdef(AAttrPropdef)> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
var_mtype = var92;
if (var_mtype == NULL) {
var95 = 1; /* is null */
} else {
var95 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var100 = var_mtype == var_other;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
if (var95){
goto BREAK_label77;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MNullableType */
cltype102 = type_nitc__MNullableType.color;
idtype103 = type_nitc__MNullableType.id;
if(cltype102 >= var_mtype->type->table_size) {
var101 = 0;
} else {
var101 = var_mtype->type->type_table[cltype102] == idtype103;
}
if (var101){
{
{ /* Inline model#MProxyType#mtype (var_mtype) on <var_mtype:nullable MType(MNullableType)> */
var106 = var_mtype->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_mtype:nullable MType(MNullableType)> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
var_mtype = var104;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype111 = type_nitc__MClassType.color;
idtype112 = type_nitc__MClassType.id;
if(cltype111 >= var_mtype->type->table_size) {
var110 = 0;
} else {
var110 = var_mtype->type->type_table[cltype111] == idtype112;
}
var_113 = var110;
if (var110){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var116 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline model#MClass#arity (var114) on <var114:MClass> */
var119 = var114->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var114:MClass> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var117,0l) on <var117:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var122 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var122)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var125 = var117 > 0l;
var120 = var125;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
var109 = var120;
} else {
var109 = var_113;
}
var_126 = var109;
if (var109){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var129 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var127) on <var127:MClass> */
var132 = var127->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var127:MClass> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
var133 = glob_sys;
{
var134 = nitc__model___core__Sys___concrete_kind(var133);
}
{
{ /* Inline kernel#Object#== (var130,var134) on <var130:MClassKind> */
var_other = var134;
{
{ /* Inline kernel#Object#is_same_instance (var130,var_other) on <var130:MClassKind> */
var139 = var130 == var_other;
var137 = var139;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
var135 = var137;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
var108 = var135;
} else {
var108 = var_126;
}
var_140 = var108;
if (var108){
{
var141 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:nullable MType(MClassType)>*/
}
var142 = !var141;
var107 = var142;
} else {
var107 = var_140;
}
if (var107){
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var145 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
var_mmodule = var143;
if (var_mmodule == NULL) {
var146 = 1; /* is null */
} else {
var146 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var151 = var_mmodule == var_other;
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
var147 = var149;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
var146 = var147;
}
if (var146){
goto BREAK_label77;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MClassType)> */
var154 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MClassType)> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
var155 = nitc___nitc__MClass___in_hierarchy(var152, var_mmodule);
}
{
var156 = poset___poset__POSetElement___greaters(var155);
}
var_greaters = var156;
var_is_serializable = 0;
var_157 = var_greaters;
{
var158 = ((val*(*)(val* self))((((long)var_157&3)?class_info[((long)var_157&3)]:var_157->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_157); /* iterator on <var_157:Collection[MClass]>*/
}
var_159 = var158;
for(;;) {
{
var160 = ((short int(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_159); /* is_ok on <var_159:Iterator[MClass]>*/
}
if (var160){
} else {
goto BREAK_label161;
}
{
var162 = ((val*(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_159); /* item on <var_159:Iterator[MClass]>*/
}
var_sup = var162;
{
{ /* Inline model#MClass#name (var_sup) on <var_sup:MClass> */
var165 = var_sup->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_sup:MClass> */
if (unlikely(var165 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var163 = var165;
RET_LABEL164:(void)0;
}
}
if (likely(varonce!=NULL)) {
var166 = varonce;
} else {
var167 = "Serializable";
var168 = core__abstract_text___CString___to_s_full(var167, 12l, 12l);
var166 = var168;
varonce = var166;
}
{
var169 = ((short int(*)(val* self, val* p0))(var163->class->vft[COLOR_core__kernel__Object___61d_61d]))(var163, var166); /* == on <var163:String>*/
}
if (var169){
var_is_serializable = 1;
goto BREAK_label161;
} else {
}
{
((void(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_159); /* next on <var_159:Iterator[MClass]>*/
}
}
BREAK_label161: (void)0;
{
((void(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_159); /* finish on <var_159:Iterator[MClass]>*/
}
if (var_is_serializable){
{
var170 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MClassType)>*/
}
{
((void(*)(val* self, val* p0))((((long)var_types_to_deserialize&3)?class_info[((long)var_types_to_deserialize&3)]:var_types_to_deserialize->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_types_to_deserialize, var170); /* add on <var_types_to_deserialize:Set[String]>*/
}
} else {
}
} else {
}
BREAK_label77: (void)0;
{
((void(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_69); /* next on <var_69:Iterator[APropdef]>*/
}
}
BREAK_label71: (void)0;
{
((void(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_69); /* finish on <var_69:Iterator[APropdef]>*/
}
BREAK_label63: (void)0;
{
((void(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_56); /* next on <var_56:Iterator[AClassdef]>*/
}
}
BREAK_label58: (void)0;
{
((void(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_56); /* finish on <var_56:Iterator[AClassdef]>*/
}
var171 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var171); /* Direct call array#Array#init on <var171:Array[String]>*/
}
var_code = var171;
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = "redef fun deserialize_class_intern(name)";
var175 = core__abstract_text___CString___to_s_full(var174, 40l, 40l);
var173 = var175;
varonce172 = var173;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var173); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "do";
var179 = core__abstract_text___CString___to_s_full(var178, 2l, 2l);
var177 = var179;
varonce176 = var177;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var177); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
var_180 = var_types_to_deserialize;
{
var181 = ((val*(*)(val* self))((((long)var_180&3)?class_info[((long)var_180&3)]:var_180->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_180); /* iterator on <var_180:Set[String]>*/
}
var_182 = var181;
for(;;) {
{
var183 = ((short int(*)(val* self))((((long)var_182&3)?class_info[((long)var_182&3)]:var_182->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_182); /* is_ok on <var_182:Iterator[String]>*/
}
if (var183){
} else {
goto BREAK_label184;
}
{
var185 = ((val*(*)(val* self))((((long)var_182&3)?class_info[((long)var_182&3)]:var_182->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_182); /* item on <var_182:Iterator[String]>*/
}
var_name = var185;
if (unlikely(varonce186==NULL)) {
var187 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = "\tif name == \"";
var191 = core__abstract_text___CString___to_s_full(var190, 13l, 13l);
var189 = var191;
varonce188 = var189;
}
((struct instance_core__NativeArray*)var187)->values[0]=var189;
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = "\" then return new ";
var195 = core__abstract_text___CString___to_s_full(var194, 18l, 18l);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var187)->values[2]=var193;
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = ".from_deserializer(self)";
var199 = core__abstract_text___CString___to_s_full(var198, 24l, 24l);
var197 = var199;
varonce196 = var197;
}
((struct instance_core__NativeArray*)var187)->values[4]=var197;
} else {
var187 = varonce186;
varonce186 = NULL;
}
((struct instance_core__NativeArray*)var187)->values[1]=var_name;
((struct instance_core__NativeArray*)var187)->values[3]=var_name;
{
var200 = ((val*(*)(val* self))(var187->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var187); /* native_to_s on <var187:NativeArray[String]>*/
}
varonce186 = var187;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var200); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_182&3)?class_info[((long)var_182&3)]:var_182->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_182); /* next on <var_182:Iterator[String]>*/
}
}
BREAK_label184: (void)0;
{
((void(*)(val* self))((((long)var_182&3)?class_info[((long)var_182&3)]:var_182->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_182); /* finish on <var_182:Iterator[String]>*/
}
if (likely(varonce201!=NULL)) {
var202 = varonce201;
} else {
var203 = "\treturn super";
var204 = core__abstract_text___CString___to_s_full(var203, 13l, 13l);
var202 = var204;
varonce201 = var202;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var202); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "end";
var208 = core__abstract_text___CString___to_s_full(var207, 3l, 3l);
var206 = var208;
varonce205 = var206;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var206); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePostModel> */
var211 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePostModel> */
if (unlikely(var211 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = "\n";
var215 = core__abstract_text___CString___to_s_full(var214, 1l, 1l);
var213 = var215;
varonce212 = var213;
}
{
var216 = core__abstract_text___Collection___join(var_code, var213, ((val*)NULL));
}
{
var217 = nitc__parser_util___ToolContext___parse_propdef(var209, var216);
}
/* <var217:APropdef> isa AMethPropdef */
cltype219 = type_nitc__AMethPropdef.color;
idtype220 = type_nitc__AMethPropdef.id;
if(cltype219 >= var217->type->table_size) {
var218 = 0;
} else {
var218 = var217->type->type_table[cltype219] == idtype220;
}
if (unlikely(!var218)) {
var_class_name221 = var217 == NULL ? "null" : var217->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name221);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 447);
fatal_exit(1);
}
var_npropdef = var217;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (var_npropdef) on <var_npropdef:AMethPropdef> */
var224 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <var_npropdef:AMethPropdef> */
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var_deserializer_npropdef->class->vft[COLOR_nitc__parser_nodes__AMethPropdef__n_block_61d]))(var_deserializer_npropdef, var222); /* n_block= on <var_deserializer_npropdef:nullable AMethPropdef(AMethPropdef)>*/
}
var225 = NEW_nitc__literal__LiteralVisitor(&type_nitc__literal__LiteralVisitor);
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SerializationPhasePostModel> */
var228 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SerializationPhasePostModel> */
if (unlikely(var228 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var225->class->vft[COLOR_nitc__literal__LiteralVisitor__toolcontext_61d]))(var225, var226); /* toolcontext= on <var225:LiteralVisitor>*/
}
{
((void(*)(val* self))(var225->class->vft[COLOR_core__kernel__Object__init]))(var225); /* init on <var225:LiteralVisitor>*/
}
var_v = var225;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (var_npropdef) on <var_npropdef:AMethPropdef> */
var231 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <var_npropdef:AMethPropdef> */
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var229); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:LiteralVisitor>*/
}
RET_LABEL:;
}
/* method serialization_phase#AAttrPropdef#name for (self: AAttrPropdef): String */
val* nitc__serialization_phase___AAttrPropdef___name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var3 /* : TId */;
val* var4 /* : String */;
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1340);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__lexer_work___Token___text(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#AAttrPropdef#serialize_name for (self: AAttrPropdef): String */
val* nitc__serialization_phase___AAttrPropdef___serialize_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
var1 = self->attrs[COLOR_nitc__serialization_phase__AAttrPropdef___serialize_name].val != NULL; /* _serialize_name on <self:AAttrPropdef> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__serialization_phase__AAttrPropdef___serialize_name].val; /* _serialize_name on <self:AAttrPropdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _serialize_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 459);
fatal_exit(1);
}
} else {
{
var3 = nitc__serialization_phase___AAttrPropdef___name(self);
}
self->attrs[COLOR_nitc__serialization_phase__AAttrPropdef___serialize_name].val = var3; /* _serialize_name on <self:AAttrPropdef> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method serialization_phase#AAttrPropdef#serialize_name= for (self: AAttrPropdef, String) */
void nitc__serialization_phase___AAttrPropdef___serialize_name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__serialization_phase__AAttrPropdef___serialize_name].val = p0; /* _serialize_name on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method serialization_phase#AModule#deserializer_nclassdef for (self: AModule): nullable AStdClassdef */
val* nitc__serialization_phase___AModule___deserializer_nclassdef(val* self) {
val* var /* : nullable AStdClassdef */;
val* var1 /* : ANodes[AClassdef] */;
val* var3 /* : ANodes[AClassdef] */;
val* var_ /* var : ANodes[AClassdef] */;
val* var4 /* : Iterator[ANode] */;
val* var_5 /* var : Iterator[AClassdef] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var8 /* : Bool */;
int cltype;
int idtype;
short int var9 /* : Bool */;
val* var11 /* : nullable AQclassid */;
val* var13 /* : nullable AQclassid */;
val* var_n_qid /* var n_qid: nullable AQclassid */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_20 /* var : Bool */;
val* var21 /* : TClassid */;
val* var23 /* : TClassid */;
val* var24 /* : String */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
short int var28 /* : Bool */;
{
{ /* Inline parser_nodes#AModule#n_classdefs (self) on <self:AModule> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
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
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[AClassdef]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[AClassdef]>*/
}
var_nclassdef = var7;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var8 = 0;
} else {
var8 = var_nclassdef->type->type_table[cltype] == idtype;
}
var9 = !var8;
if (var9){
goto BREAK_label10;
} else {
}
{
{ /* Inline parser_nodes#AStdClassdef#n_qid (var_nclassdef) on <var_nclassdef:AClassdef(AStdClassdef)> */
var13 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_qid].val; /* _n_qid on <var_nclassdef:AClassdef(AStdClassdef)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_n_qid = var11;
if (var_n_qid == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_qid,((val*)NULL)) on <var_n_qid:nullable AQclassid> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_n_qid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_qid, var_other); /* == on <var_n_qid:nullable AQclassid(AQclassid)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
var_20 = var15;
if (var15){
{
{ /* Inline parser_nodes#AQclassid#n_id (var_n_qid) on <var_n_qid:nullable AQclassid(AQclassid)> */
var23 = var_n_qid->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var_n_qid:nullable AQclassid(AQclassid)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc__lexer_work___Token___text(var21);
}
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "Deserializer";
var27 = core__abstract_text___CString___to_s_full(var26, 12l, 12l);
var25 = var27;
varonce = var25;
}
{
var28 = ((short int(*)(val* self, val* p0))(var24->class->vft[COLOR_core__kernel__Object___61d_61d]))(var24, var25); /* == on <var24:String>*/
}
var14 = var28;
} else {
var14 = var_20;
}
if (var14){
var = var_nclassdef;
goto RET_LABEL;
} else {
}
BREAK_label10: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[AClassdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[AClassdef]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#AModule#inits_to_retype for (self: AModule): Array[AMethPropdef] */
val* nitc__serialization_phase___AModule___inits_to_retype(val* self) {
val* var /* : Array[AMethPropdef] */;
val* var1 /* : Array[AMethPropdef] */;
var1 = self->attrs[COLOR_nitc__serialization_phase__AModule___inits_to_retype].val; /* _inits_to_retype on <self:AModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _inits_to_retype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 491);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#AModule#is_serialize for (self: AModule): Bool */
short int nitc__serialization_phase___AModule___ANode__is_serialize(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable AModuledecl */;
val* var3 /* : nullable AModuledecl */;
val* var_n_moduledecl /* var n_moduledecl: nullable AModuledecl */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
short int var10 /* : Bool */;
{
{ /* Inline parser_nodes#AModule#n_moduledecl (self) on <self:AModule> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <self:AModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_n_moduledecl = var1;
if (var_n_moduledecl == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_moduledecl,((val*)NULL)) on <var_n_moduledecl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_n_moduledecl->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_moduledecl, var_other); /* == on <var_n_moduledecl:nullable AModuledecl(AModuledecl)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var_ = var5;
if (var5){
{
var10 = nitc__serialization_phase___ADefinition___ANode__is_serialize(var_n_moduledecl);
}
var4 = var10;
} else {
var4 = var_;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#AModule#auto_serializable_nclassdefs for (self: AModule): Array[AStdClassdef] */
val* nitc__serialization_phase___AModule___auto_serializable_nclassdefs(val* self) {
val* var /* : Array[AStdClassdef] */;
short int var1 /* : Bool */;
val* var2 /* : Array[AStdClassdef] */;
val* var3 /* : Array[AStdClassdef] */;
val* var5 /* : Array[AStdClassdef] */;
val* var_array /* var array: Array[AStdClassdef] */;
val* var6 /* : ANodes[AClassdef] */;
val* var8 /* : ANodes[AClassdef] */;
val* var_ /* var : ANodes[AClassdef] */;
val* var9 /* : Iterator[ANode] */;
val* var_10 /* var : Iterator[AClassdef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
short int var_15 /* var : Bool */;
val* var16 /* : nullable Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
var1 = self->attrs[COLOR_nitc__serialization_phase__AModule___auto_serializable_nclassdefs].val != NULL; /* _auto_serializable_nclassdefs on <self:AModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__serialization_phase__AModule___auto_serializable_nclassdefs].val; /* _auto_serializable_nclassdefs on <self:AModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _auto_serializable_nclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 499);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__Array(&type_core__Array__nitc__AStdClassdef);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[AStdClassdef]>*/
}
var_array = var5;
{
{ /* Inline parser_nodes#AModule#n_classdefs (self) on <self:AModule> */
var8 = self->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <self:AModule> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_ = var6;
{
var9 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:Iterator[AClassdef]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:Iterator[AClassdef]>*/
}
var_nclassdef = var12;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var14 = 0;
} else {
var14 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_15 = var14;
if (var14){
{
var16 = nitc__serialization_phase___AStdClassdef___how_serialize(var_nclassdef);
}
if (var16 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Bool#!= (var16,((val*)NULL)) on <var16:nullable Bool> */
var20 = 0; /* incompatible types Bool vs. null; cannot be NULL */
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
var13 = var17;
} else {
var13 = var_15;
}
if (var13){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_array, var_nclassdef); /* Direct call array#Array#add on <var_array:Array[AStdClassdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:Iterator[AClassdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:Iterator[AClassdef]>*/
}
var3 = var_array;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__serialization_phase__AModule___auto_serializable_nclassdefs].val = var3; /* _auto_serializable_nclassdefs on <self:AModule> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method serialization_phase#AStdClassdef#deserializer_npropdef for (self: AStdClassdef): nullable AMethPropdef */
val* nitc__serialization_phase___AStdClassdef___deserializer_npropdef(val* self) {
val* var /* : nullable AMethPropdef */;
val* var1 /* : ANodes[APropdef] */;
val* var3 /* : ANodes[APropdef] */;
val* var_ /* var : ANodes[APropdef] */;
val* var4 /* : Iterator[ANode] */;
val* var_5 /* var : Iterator[APropdef] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var8 /* : Bool */;
int cltype;
int idtype;
val* var9 /* : nullable AMethid */;
val* var11 /* : nullable AMethid */;
val* var_id /* var id: nullable AMethid */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
short int var_16 /* var : Bool */;
val* var17 /* : TId */;
val* var19 /* : TId */;
val* var20 /* : String */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
short int var24 /* : Bool */;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AStdClassdef> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
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
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[APropdef]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[APropdef]>*/
}
var_npropdef = var7;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var8 = 0;
} else {
var8 = var_npropdef->type->type_table[cltype] == idtype;
}
if (var8){
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var11 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <var_npropdef:APropdef(AMethPropdef)> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_id = var9;
/* <var_id:nullable AMethid> isa AIdMethid */
cltype14 = type_nitc__AIdMethid.color;
idtype15 = type_nitc__AIdMethid.id;
if(var_id == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_id->type->table_size) {
var13 = 0;
} else {
var13 = var_id->type->type_table[cltype14] == idtype15;
}
}
var_16 = var13;
if (var13){
{
{ /* Inline parser_nodes#AIdMethid#n_id (var_id) on <var_id:nullable AMethid(AIdMethid)> */
var19 = var_id->attrs[COLOR_nitc__parser_nodes__AIdMethid___n_id].val; /* _n_id on <var_id:nullable AMethid(AIdMethid)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1573);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc__lexer_work___Token___text(var17);
}
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = "deserialize_class_intern";
var23 = core__abstract_text___CString___to_s_full(var22, 24l, 24l);
var21 = var23;
varonce = var21;
}
{
var24 = ((short int(*)(val* self, val* p0))(var20->class->vft[COLOR_core__kernel__Object___61d_61d]))(var20, var21); /* == on <var20:String>*/
}
var12 = var24;
} else {
var12 = var_16;
}
if (var12){
var = var_npropdef;
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[APropdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[APropdef]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#AStdClassdef#how_serialize for (self: AStdClassdef): nullable Bool */
val* nitc__serialization_phase___AStdClassdef___how_serialize(val* self) {
val* var /* : nullable Bool */;
short int var1 /* : Bool */;
short int var_serialize /* var serialize: Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable ANode */;
val* var8 /* : nullable ANode */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : nullable Bool */;
short int var12 /* : Bool */;
val* var13 /* : ANodes[APropdef] */;
val* var15 /* : ANodes[APropdef] */;
val* var_16 /* var : ANodes[APropdef] */;
val* var17 /* : Iterator[ANode] */;
val* var_18 /* var : Iterator[APropdef] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var21 /* : Bool */;
val* var22 /* : nullable Bool */;
{
var1 = nitc__serialization_phase___ADefinition___ANode__is_serialize(self);
}
var_serialize = var1;
var3 = !var_serialize;
var_ = var3;
if (var3){
{
var4 = nitc__serialization_phase___ADefinition___ANode__is_noserialize(self);
}
var5 = !var4;
var2 = var5;
} else {
var2 = var_;
}
if (var2){
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AStdClassdef> */
var8 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:AStdClassdef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
/* <var6:nullable ANode> isa AModule */
cltype = type_nitc__AModule.color;
idtype = type_nitc__AModule.id;
if(var6 == NULL) {
var9 = 0;
} else {
if(cltype >= var6->type->table_size) {
var9 = 0;
} else {
var9 = var6->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var9)) {
var_class_name = var6 == NULL ? "null" : var6->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 537);
fatal_exit(1);
}
{
var10 = nitc__serialization_phase___AModule___ANode__is_serialize(var6);
}
var_serialize = var10;
} else {
}
if (var_serialize){
var11 = (val*)((long)(1)<<2|3);
var = var11;
goto RET_LABEL;
} else {
}
var12 = !var_serialize;
if (var12){
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (self) on <self:AStdClassdef> */
var15 = self->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <self:AStdClassdef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_16 = var13;
{
var17 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_16);
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:Iterator[APropdef]>*/
}
if (var19){
} else {
goto BREAK_label;
}
{
var20 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:Iterator[APropdef]>*/
}
var_npropdef = var20;
{
var21 = nitc__serialization_phase___ADefinition___ANode__is_serialize(var_npropdef);
}
if (var21){
var22 = (val*)((long)(0)<<2|3);
var = var22;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:Iterator[APropdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:Iterator[APropdef]>*/
}
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
