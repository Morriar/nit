#include "nitc__parallelization_phase.sep.0.h"
/* method parallelization_phase#ToolContext#parallelization_phase for (self: ToolContext): Phase */
val* nitc__parallelization_phase___ToolContext___parallelization_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__parallelization_phase__ToolContext___parallelization_phase].val; /* _parallelization_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parallelization_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parallelization_phase#ParallelizationPhase#process_annotated_node for (self: ParallelizationPhase, ANode, AAnnotation) */
void nitc__parallelization_phase___nitc__parallelization_phase__ParallelizationPhase___nitc__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nmethdef /* var nmethdef: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : AAtid */;
val* var2 /* : AAtid */;
val* var3 /* : Token */;
val* var5 /* : Token */;
val* var6 /* : String */;
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
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : Message */;
val* var27 /* : nullable ANode */;
val* var29 /* : nullable ANode */;
val* var30 /* : nullable ANode */;
val* var32 /* : nullable ANode */;
val* var_amod /* var amod: nullable ANode */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var_classname /* var classname: String */;
val* var40 /* : nullable ANode */;
val* var42 /* : nullable ANode */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var46 /* : nullable ANode */;
val* var48 /* : nullable ANode */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name;
val* var52 /* : nullable AQclassid */;
val* var54 /* : nullable AQclassid */;
val* var55 /* : TClassid */;
val* var57 /* : TClassid */;
val* var58 /* : String */;
val* var59 /* : Text */;
val* var60 /* : nullable AMethid */;
val* var62 /* : nullable AMethid */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
val* var66 /* : nullable AMethid */;
val* var68 /* : nullable AMethid */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
val* var73 /* : TId */;
val* var75 /* : TId */;
val* var76 /* : String */;
val* var77 /* : Text */;
val* var78 /* : nullable ASignature */;
val* var80 /* : nullable ASignature */;
val* var81 /* : nullable AType */;
val* var83 /* : nullable AType */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var_has_rvalue /* var has_rvalue: Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var_vtype /* var vtype: String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
val* var97 /* : nullable ASignature */;
val* var99 /* : nullable ASignature */;
val* var100 /* : nullable AType */;
val* var102 /* : nullable AType */;
val* var103 /* : AQclassid */;
val* var105 /* : AQclassid */;
val* var106 /* : TClassid */;
val* var108 /* : TClassid */;
val* var109 /* : String */;
val* var110 /* : Text */;
val* var111 /* : TClassid */;
val* var_n_id /* var n_id: TClassid */;
val* var113 /* : AQclassid */;
val* var_n_qid /* var n_qid: AQclassid */;
val* var115 /* : AType */;
val* var_n_type /* var n_type: AType */;
val* var117 /* : nullable ASignature */;
val* var119 /* : nullable ASignature */;
val* var120 /* : Array[String] */;
val* var_params /* var params: Array[String] */;
val* var121 /* : nullable ASignature */;
val* var123 /* : nullable ASignature */;
val* var124 /* : ANodes[AParam] */;
val* var126 /* : ANodes[AParam] */;
val* var_ /* var : ANodes[AParam] */;
val* var127 /* : Iterator[ANode] */;
val* var_128 /* var : Iterator[AParam] */;
short int var129 /* : Bool */;
val* var130 /* : nullable Object */;
val* var_param /* var param: AParam */;
val* var131 /* : nullable AType */;
val* var133 /* : nullable AType */;
val* var134 /* : AQclassid */;
val* var136 /* : AQclassid */;
val* var137 /* : TClassid */;
val* var139 /* : TClassid */;
val* var140 /* : String */;
val* var_typ /* var typ: String */;
val* var141 /* : nullable AType */;
val* var143 /* : nullable AType */;
val* var144 /* : nullable TKwnullable */;
val* var146 /* : nullable TKwnullable */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
val* var153 /* : NativeArray[String] */;
static val* varonce152;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
val* var158 /* : String */;
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
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : CString */;
val* var172 /* : String */;
val* var173 /* : TId */;
val* var175 /* : TId */;
val* var176 /* : String */;
val* var177 /* : String */;
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
val* var200 /* : String */;
val* var201 /* : String */;
val* var_classdef_source /* var classdef_source: String */;
val* var202 /* : ToolContext */;
val* var204 /* : ToolContext */;
val* var205 /* : AClassdef */;
val* var_classdef /* var classdef: AClassdef */;
short int var206 /* : Bool */;
int cltype207;
int idtype208;
val* var_mainfun /* var mainfun: nullable AMethPropdef */;
val* var209 /* : ANodes[APropdef] */;
val* var211 /* : ANodes[APropdef] */;
val* var_212 /* var : ANodes[APropdef] */;
val* var213 /* : Iterator[ANode] */;
val* var_214 /* var : Iterator[APropdef] */;
short int var215 /* : Bool */;
val* var217 /* : nullable Object */;
val* var_prop /* var prop: APropdef */;
short int var218 /* : Bool */;
int cltype219;
int idtype220;
short int var221 /* : Bool */;
short int var222 /* : Bool */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
val* var226 /* : nullable AExpr */;
val* var228 /* : nullable AExpr */;
short int var229 /* : Bool */;
static val* varonce230;
val* var231 /* : String */;
char* var232 /* : CString */;
val* var233 /* : String */;
val* var_s_nullreturn /* var s_nullreturn: String */;
val* var234 /* : ToolContext */;
val* var236 /* : ToolContext */;
val* var237 /* : ANode */;
val* var_nullreturn /* var nullreturn: ANode */;
short int var238 /* : Bool */;
int cltype239;
int idtype240;
val* var241 /* : nullable AExpr */;
val* var243 /* : nullable AExpr */;
short int var244 /* : Bool */;
int cltype245;
int idtype246;
const char* var_class_name247;
val* var248 /* : ANodes[AExpr] */;
val* var250 /* : ANodes[AExpr] */;
val* var251 /* : nullable ASignature */;
val* var253 /* : nullable ASignature */;
val* var254 /* : ANodes[AParam] */;
val* var256 /* : ANodes[AParam] */;
short int var257 /* : Bool */;
val* var258 /* : Array[String] */;
val* var_init_params /* var init_params: Array[String] */;
val* var259 /* : nullable ASignature */;
val* var261 /* : nullable ASignature */;
val* var262 /* : ANodes[AParam] */;
val* var264 /* : ANodes[AParam] */;
val* var_265 /* var : ANodes[AParam] */;
val* var266 /* : Iterator[ANode] */;
val* var_267 /* var : Iterator[AParam] */;
short int var268 /* : Bool */;
val* var270 /* : nullable Object */;
val* var_param271 /* var param: AParam */;
val* var272 /* : TId */;
val* var274 /* : TId */;
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
val* var294 /* : String */;
val* var295 /* : String */;
val* var_s_newbody /* var s_newbody: String */;
val* var297 /* : NativeArray[String] */;
static val* varonce296;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : CString */;
val* var301 /* : String */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : CString */;
val* var305 /* : String */;
val* var306 /* : String */;
val* var307 /* : ToolContext */;
val* var309 /* : ToolContext */;
val* var310 /* : ANode */;
val* var_newbody /* var newbody: ANode */;
short int var311 /* : Bool */;
int cltype312;
int idtype313;
const char* var_class_name314;
val* var315 /* : ANodes[AClassdef] */;
val* var317 /* : ANodes[AClassdef] */;
var_nmethdef = p0;
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
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "threaded";
var9 = core__abstract_text___CString___to_s_full(var8, 8l, 8l);
var7 = var9;
varonce = var7;
}
{
{ /* Inline kernel#Object#!= (var6,var7) on <var6:String> */
var_other = var7;
{
var12 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_core__kernel__Object___61d_61d]))(var6, var_other); /* == on <var6:String>*/
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
/* <var_nmethdef:ANode> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_nmethdef->type->table_size) {
var14 = 0;
} else {
var14 = var_nmethdef->type->type_table[cltype] == idtype;
}
var15 = !var14;
if (var15){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ParallelizationPhase> */
var18 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ParallelizationPhase> */
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
{ /* Inline parser_nodes#ANode#location (var_nat) on <var_nat:AAnnotation> */
var21 = var_nat->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nat:AAnnotation> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "Syntax Error: only a method can be threaded.";
var25 = core__abstract_text___CString___to_s_full(var24, 44l, 44l);
var23 = var25;
varonce22 = var23;
}
{
var26 = nitc___nitc__ToolContext___error(var16, var19, var23);
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#parent (var_nmethdef) on <var_nmethdef:ANode(AMethPropdef)> */
var29 = var_nmethdef->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_nmethdef:ANode(AMethPropdef)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 47);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#parent (var27) on <var27:nullable ANode> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 60);
fatal_exit(1);
}
var32 = var27->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var27:nullable ANode> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_amod = var30;
/* <var_amod:nullable ANode> isa AModule */
cltype34 = type_nitc__AModule.color;
idtype35 = type_nitc__AModule.id;
if(var_amod == NULL) {
var33 = 0;
} else {
if(cltype34 >= var_amod->type->table_size) {
var33 = 0;
} else {
var33 = var_amod->type->type_table[cltype34] == idtype35;
}
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 48);
fatal_exit(1);
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Threaded";
var39 = core__abstract_text___CString___to_s_full(var38, 8l, 8l);
var37 = var39;
varonce36 = var37;
}
var_classname = var37;
{
{ /* Inline parser_nodes#ANode#parent (var_nmethdef) on <var_nmethdef:ANode(AMethPropdef)> */
var42 = var_nmethdef->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_nmethdef:ANode(AMethPropdef)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
/* <var40:nullable ANode> isa AStdClassdef */
cltype44 = type_nitc__AStdClassdef.color;
idtype45 = type_nitc__AStdClassdef.id;
if(var40 == NULL) {
var43 = 0;
} else {
if(cltype44 >= var40->type->table_size) {
var43 = 0;
} else {
var43 = var40->type->type_table[cltype44] == idtype45;
}
}
if (var43){
{
{ /* Inline parser_nodes#ANode#parent (var_nmethdef) on <var_nmethdef:ANode(AMethPropdef)> */
var48 = var_nmethdef->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_nmethdef:ANode(AMethPropdef)> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
/* <var46:nullable ANode> isa AStdClassdef */
cltype50 = type_nitc__AStdClassdef.color;
idtype51 = type_nitc__AStdClassdef.id;
if(var46 == NULL) {
var49 = 0;
} else {
if(cltype50 >= var46->type->table_size) {
var49 = 0;
} else {
var49 = var46->type->type_table[cltype50] == idtype51;
}
}
if (unlikely(!var49)) {
var_class_name = var46 == NULL ? "null" : var46->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AStdClassdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 55);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AStdClassdef#n_qid (var46) on <var46:nullable ANode(AStdClassdef)> */
var54 = var46->attrs[COLOR_nitc__parser_nodes__AStdClassdef___n_qid].val; /* _n_qid on <var46:nullable ANode(AStdClassdef)> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (var52 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 55);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#AQclassid#n_id (var52) on <var52:nullable AQclassid> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var57 = var52->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var52:nullable AQclassid> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = nitc__lexer_work___Token___text(var55);
}
{
var59 = ((val*(*)(val* self, val* p0))(var_classname->class->vft[COLOR_core__abstract_text__Text___43d]))(var_classname, var58); /* + on <var_classname:String>*/
}
var_classname = var59;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (var_nmethdef) on <var_nmethdef:ANode(AMethPropdef)> */
var62 = var_nmethdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <var_nmethdef:ANode(AMethPropdef)> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
/* <var60:nullable AMethid> isa AIdMethid */
cltype64 = type_nitc__AIdMethid.color;
idtype65 = type_nitc__AIdMethid.id;
if(var60 == NULL) {
var63 = 0;
} else {
if(cltype64 >= var60->type->table_size) {
var63 = 0;
} else {
var63 = var60->type->type_table[cltype64] == idtype65;
}
}
if (var63){
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (var_nmethdef) on <var_nmethdef:ANode(AMethPropdef)> */
var68 = var_nmethdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <var_nmethdef:ANode(AMethPropdef)> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
/* <var66:nullable AMethid> isa AIdMethid */
cltype70 = type_nitc__AIdMethid.color;
idtype71 = type_nitc__AIdMethid.id;
if(var66 == NULL) {
var69 = 0;
} else {
if(cltype70 >= var66->type->table_size) {
var69 = 0;
} else {
var69 = var66->type->type_table[cltype70] == idtype71;
}
}
if (unlikely(!var69)) {
var_class_name72 = var66 == NULL ? "null" : var66->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AIdMethid", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 60);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AIdMethid#n_id (var66) on <var66:nullable AMethid(AIdMethid)> */
var75 = var66->attrs[COLOR_nitc__parser_nodes__AIdMethid___n_id].val; /* _n_id on <var66:nullable AMethid(AIdMethid)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1573);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = nitc__lexer_work___Token___text(var73);
}
{
var77 = ((val*(*)(val* self, val* p0))(var_classname->class->vft[COLOR_core__abstract_text__Text___43d]))(var_classname, var76); /* + on <var_classname:String>*/
}
var_classname = var77;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (var_nmethdef) on <var_nmethdef:ANode(AMethPropdef)> */
var80 = var_nmethdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_nmethdef:ANode(AMethPropdef)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var78 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 64);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var78) on <var78:nullable ASignature> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1752);
fatal_exit(1);
}
var83 = var78->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var78:nullable ASignature> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (var81 == NULL) {
var84 = 0; /* is null */
} else {
var84 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var81,((val*)NULL)) on <var81:nullable AType> */
var_other = ((val*)NULL);
{
var87 = ((short int(*)(val* self, val* p0))(var81->class->vft[COLOR_core__kernel__Object___61d_61d]))(var81, var_other); /* == on <var81:nullable AType(AType)>*/
}
var88 = !var87;
var85 = var88;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
var_has_rvalue = var84;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "";
var92 = core__abstract_text___CString___to_s_full(var91, 0l, 0l);
var90 = var92;
varonce89 = var90;
}
var_vtype = var90;
if (var_has_rvalue){
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "redef type E: ";
var96 = core__abstract_text___CString___to_s_full(var95, 14l, 14l);
var94 = var96;
varonce93 = var94;
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (var_nmethdef) on <var_nmethdef:ANode(AMethPropdef)> */
var99 = var_nmethdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_nmethdef:ANode(AMethPropdef)> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (var97 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 67);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var97) on <var97:nullable ASignature> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1752);
fatal_exit(1);
}
var102 = var97->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var97:nullable ASignature> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
if (var100 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 67);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#AType#n_qid (var100) on <var100:nullable AType> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1776);
fatal_exit(1);
}
var105 = var100->attrs[COLOR_nitc__parser_nodes__AType___n_qid].val; /* _n_qid on <var100:nullable AType> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1776);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline parser_nodes#AQclassid#n_id (var103) on <var103:AQclassid> */
var108 = var103->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var103:AQclassid> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
var109 = nitc__lexer_work___Token___text(var106);
}
{
var110 = ((val*(*)(val* self, val* p0))(var94->class->vft[COLOR_core__abstract_text__Text___43d]))(var94, var109); /* + on <var94:String>*/
}
var_vtype = var110;
} else {
}
var111 = NEW_nitc__TClassid(&type_nitc__TClassid);
{
{ /* Inline kernel#Object#init (var111) on <var111:TClassid> */
RET_LABEL112:(void)0;
}
}
var_n_id = var111;
{
nitc__lexer_work___Token___text_61d(var_n_id, var_classname); /* Direct call lexer_work#Token#text= on <var_n_id:TClassid>*/
}
var113 = NEW_nitc__AQclassid(&type_nitc__AQclassid);
{
{ /* Inline kernel#Object#init (var113) on <var113:AQclassid> */
RET_LABEL114:(void)0;
}
}
var_n_qid = var113;
{
nitc__parser_prod___AQclassid___n_id_61d(var_n_qid, var_n_id); /* Direct call parser_prod#AQclassid#n_id= on <var_n_qid:AQclassid>*/
}
var115 = NEW_nitc__AType(&type_nitc__AType);
{
{ /* Inline kernel#Object#init (var115) on <var115:AType> */
RET_LABEL116:(void)0;
}
}
var_n_type = var115;
{
nitc__parser_prod___AType___n_qid_61d(var_n_type, var_n_qid); /* Direct call parser_prod#AType#n_qid= on <var_n_type:AType>*/
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (var_nmethdef) on <var_nmethdef:ANode(AMethPropdef)> */
var119 = var_nmethdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_nmethdef:ANode(AMethPropdef)> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
if (var117 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 77);
fatal_exit(1);
} else {
nitc__parser_prod___ASignature___n_type_61d(var117, var_n_type); /* Direct call parser_prod#ASignature#n_type= on <var117:nullable ASignature>*/
}
var120 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var120); /* Direct call array#Array#init on <var120:Array[String]>*/
}
var_params = var120;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (var_nmethdef) on <var_nmethdef:ANode(AMethPropdef)> */
var123 = var_nmethdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_nmethdef:ANode(AMethPropdef)> */
var121 = var123;
RET_LABEL122:(void)0;
}
}
if (var121 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 80);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var121) on <var121:nullable ASignature> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var126 = var121->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var121:nullable ASignature> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
var_ = var124;
{
var127 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_128 = var127;
for(;;) {
{
var129 = ((short int(*)(val* self))((((long)var_128&3)?class_info[((long)var_128&3)]:var_128->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_128); /* is_ok on <var_128:Iterator[AParam]>*/
}
if (var129){
} else {
goto BREAK_label;
}
{
var130 = ((val*(*)(val* self))((((long)var_128&3)?class_info[((long)var_128&3)]:var_128->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_128); /* item on <var_128:Iterator[AParam]>*/
}
var_param = var130;
{
{ /* Inline parser_nodes#AParam#n_type (var_param) on <var_param:AParam> */
var133 = var_param->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var_param:AParam> */
var131 = var133;
RET_LABEL132:(void)0;
}
}
if (var131 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 81);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#AType#n_qid (var131) on <var131:nullable AType> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1776);
fatal_exit(1);
}
var136 = var131->attrs[COLOR_nitc__parser_nodes__AType___n_qid].val; /* _n_qid on <var131:nullable AType> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1776);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline parser_nodes#AQclassid#n_id (var134) on <var134:AQclassid> */
var139 = var134->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var134:AQclassid> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
var140 = nitc__lexer_work___Token___text(var137);
}
var_typ = var140;
{
{ /* Inline parser_nodes#AParam#n_type (var_param) on <var_param:AParam> */
var143 = var_param->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var_param:AParam> */
var141 = var143;
RET_LABEL142:(void)0;
}
}
if (var141 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 82);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#AType#n_kwnullable (var141) on <var141:nullable AType> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1773);
fatal_exit(1);
}
var146 = var141->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var141:nullable AType> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
if (var144 == NULL) {
var147 = 0; /* is null */
} else {
var147 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var144,((val*)NULL)) on <var144:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var150 = ((short int(*)(val* self, val* p0))(var144->class->vft[COLOR_core__kernel__Object___61d_61d]))(var144, var_other); /* == on <var144:nullable TKwnullable(TKwnullable)>*/
}
var151 = !var150;
var148 = var151;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
var147 = var148;
}
if (var147){
if (unlikely(varonce152==NULL)) {
var153 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "nullable ";
var157 = core__abstract_text___CString___to_s_full(var156, 9l, 9l);
var155 = var157;
varonce154 = var155;
}
((struct instance_core__NativeArray*)var153)->values[0]=var155;
} else {
var153 = varonce152;
varonce152 = NULL;
}
((struct instance_core__NativeArray*)var153)->values[1]=var_typ;
{
var158 = ((val*(*)(val* self))(var153->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var153); /* native_to_s on <var153:NativeArray[String]>*/
}
varonce152 = var153;
var_typ = var158;
} else {
}
if (unlikely(varonce159==NULL)) {
var160 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = "var ";
var164 = core__abstract_text___CString___to_s_full(var163, 4l, 4l);
var162 = var164;
varonce161 = var162;
}
((struct instance_core__NativeArray*)var160)->values[0]=var162;
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = ": ";
var168 = core__abstract_text___CString___to_s_full(var167, 2l, 2l);
var166 = var168;
varonce165 = var166;
}
((struct instance_core__NativeArray*)var160)->values[2]=var166;
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "\n";
var172 = core__abstract_text___CString___to_s_full(var171, 1l, 1l);
var170 = var172;
varonce169 = var170;
}
((struct instance_core__NativeArray*)var160)->values[4]=var170;
} else {
var160 = varonce159;
varonce159 = NULL;
}
{
{ /* Inline parser_nodes#AParam#n_id (var_param) on <var_param:AParam> */
var175 = var_param->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val; /* _n_id on <var_param:AParam> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1760);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
var176 = nitc__lexer_work___Token___text(var173);
}
((struct instance_core__NativeArray*)var160)->values[1]=var176;
((struct instance_core__NativeArray*)var160)->values[3]=var_typ;
{
var177 = ((val*(*)(val* self))(var160->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var160); /* native_to_s on <var160:NativeArray[String]>*/
}
varonce159 = var160;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_params, var177); /* Direct call array#Array#add on <var_params:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_128&3)?class_info[((long)var_128&3)]:var_128->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_128); /* next on <var_128:Iterator[AParam]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_128&3)?class_info[((long)var_128&3)]:var_128->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_128); /* finish on <var_128:Iterator[AParam]>*/
}
if (unlikely(varonce178==NULL)) {
var179 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "class ";
var183 = core__abstract_text___CString___to_s_full(var182, 6l, 6l);
var181 = var183;
varonce180 = var181;
}
((struct instance_core__NativeArray*)var179)->values[0]=var181;
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "\n\tsuper Thread\n\n\t";
var187 = core__abstract_text___CString___to_s_full(var186, 17l, 17l);
var185 = var187;
varonce184 = var185;
}
((struct instance_core__NativeArray*)var179)->values[2]=var185;
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = "\n\n\t";
var191 = core__abstract_text___CString___to_s_full(var190, 3l, 3l);
var189 = var191;
varonce188 = var189;
}
((struct instance_core__NativeArray*)var179)->values[4]=var189;
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = "\n\tredef fun main do\n\tend\nend\n";
var195 = core__abstract_text___CString___to_s_full(var194, 29l, 29l);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var179)->values[6]=var193;
} else {
var179 = varonce178;
varonce178 = NULL;
}
((struct instance_core__NativeArray*)var179)->values[1]=var_classname;
((struct instance_core__NativeArray*)var179)->values[3]=var_vtype;
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "\n";
var199 = core__abstract_text___CString___to_s_full(var198, 1l, 1l);
var197 = var199;
varonce196 = var197;
}
{
var200 = core__abstract_text___Collection___join(var_params, var197, ((val*)NULL));
}
((struct instance_core__NativeArray*)var179)->values[5]=var200;
{
var201 = ((val*(*)(val* self))(var179->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var179); /* native_to_s on <var179:NativeArray[String]>*/
}
varonce178 = var179;
var_classdef_source = var201;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ParallelizationPhase> */
var204 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ParallelizationPhase> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
{
var205 = nitc__parser_util___ToolContext___parse_classdef(var202, var_classdef_source);
}
var_classdef = var205;
/* <var_classdef:AClassdef> isa AStdClassdef */
cltype207 = type_nitc__AStdClassdef.color;
idtype208 = type_nitc__AStdClassdef.id;
if(cltype207 >= var_classdef->type->table_size) {
var206 = 0;
} else {
var206 = var_classdef->type->type_table[cltype207] == idtype208;
}
if (unlikely(!var206)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 103);
fatal_exit(1);
}
var_mainfun = ((val*)NULL);
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_classdef) on <var_classdef:AClassdef(AStdClassdef)> */
var211 = var_classdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_classdef:AClassdef(AStdClassdef)> */
if (unlikely(var211 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
var_212 = var209;
{
var213 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_212);
}
var_214 = var213;
for(;;) {
{
var215 = ((short int(*)(val* self))((((long)var_214&3)?class_info[((long)var_214&3)]:var_214->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_214); /* is_ok on <var_214:Iterator[APropdef]>*/
}
if (var215){
} else {
goto BREAK_label216;
}
{
var217 = ((val*(*)(val* self))((((long)var_214&3)?class_info[((long)var_214&3)]:var_214->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_214); /* item on <var_214:Iterator[APropdef]>*/
}
var_prop = var217;
/* <var_prop:APropdef> isa AMethPropdef */
cltype219 = type_nitc__AMethPropdef.color;
idtype220 = type_nitc__AMethPropdef.id;
if(cltype219 >= var_prop->type->table_size) {
var218 = 0;
} else {
var218 = var_prop->type->type_table[cltype219] == idtype220;
}
if (var218){
var_mainfun = var_prop;
} else {
}
{
((void(*)(val* self))((((long)var_214&3)?class_info[((long)var_214&3)]:var_214->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_214); /* next on <var_214:Iterator[APropdef]>*/
}
}
BREAK_label216: (void)0;
{
((void(*)(val* self))((((long)var_214&3)?class_info[((long)var_214&3)]:var_214->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_214); /* finish on <var_214:Iterator[APropdef]>*/
}
if (var_mainfun == NULL) {
var221 = 0; /* is null */
} else {
var221 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mainfun,((val*)NULL)) on <var_mainfun:nullable AMethPropdef> */
var_other = ((val*)NULL);
{
var224 = ((short int(*)(val* self, val* p0))(var_mainfun->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mainfun, var_other); /* == on <var_mainfun:nullable AMethPropdef(AMethPropdef)>*/
}
var225 = !var224;
var222 = var225;
goto RET_LABEL223;
RET_LABEL223:(void)0;
}
var221 = var222;
}
if (unlikely(!var221)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 110);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (var_nmethdef) on <var_nmethdef:ANode(AMethPropdef)> */
var228 = var_nmethdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <var_nmethdef:ANode(AMethPropdef)> */
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var_mainfun->class->vft[COLOR_nitc__parser_nodes__AMethPropdef__n_block_61d]))(var_mainfun, var226); /* n_block= on <var_mainfun:nullable AMethPropdef(AMethPropdef)>*/
}
var229 = !var_has_rvalue;
if (var229){
if (likely(varonce230!=NULL)) {
var231 = varonce230;
} else {
var232 = "return null";
var233 = core__abstract_text___CString___to_s_full(var232, 11l, 11l);
var231 = var233;
varonce230 = var231;
}
var_s_nullreturn = var231;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ParallelizationPhase> */
var236 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ParallelizationPhase> */
if (unlikely(var236 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var234 = var236;
RET_LABEL235:(void)0;
}
}
{
var237 = nitc__parser_util___ToolContext___parse_something(var234, var_s_nullreturn);
}
var_nullreturn = var237;
/* <var_nullreturn:ANode> isa AExpr */
cltype239 = type_nitc__AExpr.color;
idtype240 = type_nitc__AExpr.id;
if(cltype239 >= var_nullreturn->type->table_size) {
var238 = 0;
} else {
var238 = var_nullreturn->type->type_table[cltype239] == idtype240;
}
if (unlikely(!var238)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 119);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (var_mainfun) on <var_mainfun:nullable AMethPropdef(AMethPropdef)> */
var243 = var_mainfun->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <var_mainfun:nullable AMethPropdef(AMethPropdef)> */
var241 = var243;
RET_LABEL242:(void)0;
}
}
/* <var241:nullable AExpr> isa ABlockExpr */
cltype245 = type_nitc__ABlockExpr.color;
idtype246 = type_nitc__ABlockExpr.id;
if(var241 == NULL) {
var244 = 0;
} else {
if(cltype245 >= var241->type->table_size) {
var244 = 0;
} else {
var244 = var241->type->type_table[cltype245] == idtype246;
}
}
if (unlikely(!var244)) {
var_class_name247 = var241 == NULL ? "null" : var241->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name247);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 120);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var241) on <var241:nullable AExpr(ABlockExpr)> */
var250 = var241->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var241:nullable AExpr(ABlockExpr)> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var248, var_nullreturn); /* Direct call abstract_collection#Sequence#add on <var248:ANodes[AExpr]>*/
}
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (var_nmethdef) on <var_nmethdef:ANode(AMethPropdef)> */
var253 = var_nmethdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_nmethdef:ANode(AMethPropdef)> */
var251 = var253;
RET_LABEL252:(void)0;
}
}
if (var251 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 125);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var251) on <var251:nullable ASignature> */
if (unlikely(var251 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var256 = var251->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var251:nullable ASignature> */
if (unlikely(var256 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
{
var257 = core___core__Collection___not_empty(var254);
}
if (var257){
var258 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var258); /* Direct call array#Array#init on <var258:Array[String]>*/
}
var_init_params = var258;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (var_nmethdef) on <var_nmethdef:ANode(AMethPropdef)> */
var261 = var_nmethdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_nmethdef:ANode(AMethPropdef)> */
var259 = var261;
RET_LABEL260:(void)0;
}
}
if (var259 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 127);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var259) on <var259:nullable ASignature> */
if (unlikely(var259 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var264 = var259->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var259:nullable ASignature> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
var_265 = var262;
{
var266 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_265);
}
var_267 = var266;
for(;;) {
{
var268 = ((short int(*)(val* self))((((long)var_267&3)?class_info[((long)var_267&3)]:var_267->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_267); /* is_ok on <var_267:Iterator[AParam]>*/
}
if (var268){
} else {
goto BREAK_label269;
}
{
var270 = ((val*(*)(val* self))((((long)var_267&3)?class_info[((long)var_267&3)]:var_267->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_267); /* item on <var_267:Iterator[AParam]>*/
}
var_param271 = var270;
{
{ /* Inline parser_nodes#AParam#n_id (var_param271) on <var_param271:AParam> */
var274 = var_param271->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val; /* _n_id on <var_param271:AParam> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1760);
fatal_exit(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
{
var275 = nitc__lexer_work___Token___text(var272);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_init_params, var275); /* Direct call array#Array#add on <var_init_params:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_267&3)?class_info[((long)var_267&3)]:var_267->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_267); /* next on <var_267:Iterator[AParam]>*/
}
}
BREAK_label269: (void)0;
{
((void(*)(val* self))((((long)var_267&3)?class_info[((long)var_267&3)]:var_267->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_267); /* finish on <var_267:Iterator[AParam]>*/
}
if (unlikely(varonce276==NULL)) {
var277 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce278!=NULL)) {
var279 = varonce278;
} else {
var280 = "var thread = new ";
var281 = core__abstract_text___CString___to_s_full(var280, 17l, 17l);
var279 = var281;
varonce278 = var279;
}
((struct instance_core__NativeArray*)var277)->values[0]=var279;
if (likely(varonce282!=NULL)) {
var283 = varonce282;
} else {
var284 = "(";
var285 = core__abstract_text___CString___to_s_full(var284, 1l, 1l);
var283 = var285;
varonce282 = var283;
}
((struct instance_core__NativeArray*)var277)->values[2]=var283;
if (likely(varonce286!=NULL)) {
var287 = varonce286;
} else {
var288 = ")\nthread.start\nreturn thread\n";
var289 = core__abstract_text___CString___to_s_full(var288, 29l, 29l);
var287 = var289;
varonce286 = var287;
}
((struct instance_core__NativeArray*)var277)->values[4]=var287;
} else {
var277 = varonce276;
varonce276 = NULL;
}
((struct instance_core__NativeArray*)var277)->values[1]=var_classname;
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = ",";
var293 = core__abstract_text___CString___to_s_full(var292, 1l, 1l);
var291 = var293;
varonce290 = var291;
}
{
var294 = core__abstract_text___Collection___join(var_init_params, var291, ((val*)NULL));
}
((struct instance_core__NativeArray*)var277)->values[3]=var294;
{
var295 = ((val*(*)(val* self))(var277->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var277); /* native_to_s on <var277:NativeArray[String]>*/
}
varonce276 = var277;
var_s_newbody = var295;
} else {
if (unlikely(varonce296==NULL)) {
var297 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce298!=NULL)) {
var299 = varonce298;
} else {
var300 = "var thread = new ";
var301 = core__abstract_text___CString___to_s_full(var300, 17l, 17l);
var299 = var301;
varonce298 = var299;
}
((struct instance_core__NativeArray*)var297)->values[0]=var299;
if (likely(varonce302!=NULL)) {
var303 = varonce302;
} else {
var304 = "\nthread.start\nreturn thread\n";
var305 = core__abstract_text___CString___to_s_full(var304, 28l, 28l);
var303 = var305;
varonce302 = var303;
}
((struct instance_core__NativeArray*)var297)->values[2]=var303;
} else {
var297 = varonce296;
varonce296 = NULL;
}
((struct instance_core__NativeArray*)var297)->values[1]=var_classname;
{
var306 = ((val*(*)(val* self))(var297->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var297); /* native_to_s on <var297:NativeArray[String]>*/
}
varonce296 = var297;
var_s_newbody = var306;
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:ParallelizationPhase> */
var309 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:ParallelizationPhase> */
if (unlikely(var309 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var307 = var309;
RET_LABEL308:(void)0;
}
}
{
var310 = nitc__parser_util___ToolContext___parse_something(var307, var_s_newbody);
}
var_newbody = var310;
/* <var_newbody:ANode> isa ABlockExpr */
cltype312 = type_nitc__ABlockExpr.color;
idtype313 = type_nitc__ABlockExpr.id;
if(cltype312 >= var_newbody->type->table_size) {
var311 = 0;
} else {
var311 = var_newbody->type->type_table[cltype312] == idtype313;
}
if (unlikely(!var311)) {
var_class_name314 = var_newbody == NULL ? "null" : var_newbody->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name314);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 144);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_nmethdef->class->vft[COLOR_nitc__parser_nodes__AMethPropdef__n_block_61d]))(var_nmethdef, var_newbody); /* n_block= on <var_nmethdef:ANode(AMethPropdef)>*/
}
{
nitc__astvalidation___ANode___validate(var_nmethdef); /* Direct call astvalidation#ANode#validate on <var_nmethdef:ANode(AMethPropdef)>*/
}
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_amod) on <var_amod:nullable ANode(AModule)> */
var317 = var_amod->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_amod:nullable ANode(AModule)> */
if (unlikely(var317 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var315 = var317;
RET_LABEL316:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var315, var_classdef); /* Direct call abstract_collection#Sequence#add on <var315:ANodes[AClassdef]>*/
}
{
nitc__astvalidation___ANode___validate(var_classdef); /* Direct call astvalidation#ANode#validate on <var_classdef:AClassdef(AStdClassdef)>*/
}
RET_LABEL:;
}
