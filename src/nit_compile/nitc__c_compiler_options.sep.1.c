#include "nitc__c_compiler_options.sep.0.h"
/* method c_compiler_options#CCompilerOptionsPhase#compiler_annotation_name for (self: CCompilerOptionsPhase): String */
val* nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___compiler_annotation_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "cflags";
var3 = core__abstract_text___CString___to_s_full(var2, 6l, 6l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_compiler_options#CCompilerOptionsPhase#linker_annotation_name for (self: CCompilerOptionsPhase): String */
val* nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___linker_annotation_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "ldflags";
var3 = core__abstract_text___CString___to_s_full(var2, 7l, 7l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_compiler_options#CCompilerOptionsPhase#cpp_compiler_annotation_name for (self: CCompilerOptionsPhase): String */
val* nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___cpp_compiler_annotation_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "cppflags";
var3 = core__abstract_text___CString___to_s_full(var2, 8l, 8l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method c_compiler_options#CCompilerOptionsPhase#process_annotated_node for (self: CCompilerOptionsPhase, ANode, AAnnotation) */
void nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___nitc__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nmoduledecl /* var nmoduledecl: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : String */;
val* var_annotation_name /* var annotation_name: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : String */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : String */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var_13 /* var : Bool */;
val* var14 /* : String */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : ToolContext */;
val* var21 /* : ToolContext */;
val* var22 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var23 /* : Bool */;
int cltype;
int idtype;
short int var24 /* : Bool */;
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
val* var35 /* : ANodes[AExpr] */;
val* var37 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
short int var38 /* : Bool */;
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
val* var50 /* : Array[CCompilerOption] */;
val* var_options /* var options: Array[CCompilerOption] */;
val* var_51 /* var : ANodes[AExpr] */;
val* var52 /* : Iterator[ANode] */;
val* var_53 /* var : Iterator[AExpr] */;
short int var54 /* : Bool */;
val* var55 /* : nullable Object */;
val* var_expr /* var expr: AExpr */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
val* var59 /* : String */;
val* var_text /* var text: String */;
long var60 /* : Int */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name;
long var66 /* : Int */;
val* var67 /* : Text */;
val* var68 /* : DirectCCompilerOption */;
val* var_opt /* var opt: DirectCCompilerOption */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
val* var72 /* : AExprs */;
val* var74 /* : AExprs */;
val* var75 /* : Array[AExpr] */;
val* var_exec_args /* var exec_args: Array[AExpr] */;
short int var76 /* : Bool */;
val* var77 /* : AQid */;
val* var79 /* : AQid */;
val* var80 /* : TId */;
val* var82 /* : TId */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var_92 /* var : Bool */;
short int var93 /* : Bool */;
val* var95 /* : NativeArray[String] */;
static val* varonce94;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : CString */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var105 /* : Array[String] */;
val* var_exec_args_as_strings /* var exec_args_as_strings: Array[String] */;
val* var_106 /* var : Array[AExpr] */;
val* var107 /* : IndexedIterator[nullable Object] */;
val* var_108 /* var : IndexedIterator[AExpr] */;
short int var109 /* : Bool */;
val* var111 /* : nullable Object */;
val* var_exec_arg /* var exec_arg: AExpr */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
short int var115 /* : Bool */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : CString */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var_arg_string /* var arg_string: String */;
long var121 /* : Int */;
long var122 /* : Int */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
const char* var_class_name127;
long var128 /* : Int */;
val* var129 /* : Text */;
val* var130 /* : ExecCCompilerOption */;
val* var_opt131 /* var opt: ExecCCompilerOption */;
val* var133 /* : NativeArray[String] */;
static val* varonce132;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var142 /* : String */;
val* var143 /* : Array[DirectCCompilerOption] */;
val* var_simplified_options /* var simplified_options: Array[DirectCCompilerOption] */;
val* var_144 /* var : Array[CCompilerOption] */;
val* var145 /* : IndexedIterator[nullable Object] */;
val* var_146 /* var : IndexedIterator[CCompilerOption] */;
short int var147 /* : Bool */;
val* var149 /* : nullable Object */;
val* var_opt150 /* var opt: CCompilerOption */;
short int var151 /* : Bool */;
int cltype152;
int idtype153;
val* var154 /* : Array[String] */;
val* var156 /* : Array[String] */;
val* var_cmd_args /* var cmd_args: Array[String] */;
long var157 /* : Int */;
long var159 /* : Int */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
val* var163 /* : ProcessReader */;
val* var164 /* : nullable Object */;
val* var165 /* : Array[String] */;
val* var_proc /* var proc: nullable Object */;
long var166 /* : Int */;
long var168 /* : Int */;
short int var169 /* : Bool */;
short int var171 /* : Bool */;
int cltype172;
int idtype173;
const char* var_class_name174;
short int var175 /* : Bool */;
long var176 /* : Int */;
long var178 /* : Int */;
long var179 /* : Int */;
short int var181 /* : Bool */;
int cltype182;
int idtype183;
const char* var_class_name184;
long var185 /* : Int */;
val* var186 /* : Array[nullable Object] */;
val* var_rest_args /* var rest_args: Array[String] */;
val* var187 /* : ProcessReader */;
val* var188 /* : nullable Object */;
long var189 /* : Int */;
long var_status /* var status: Int */;
short int var190 /* : Bool */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
val* var194 /* : ACallExpr */;
val* var196 /* : ACallExpr */;
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
val* var207 /* : String */;
val* var208 /* : String */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : CString */;
val* var212 /* : String */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : CString */;
val* var216 /* : String */;
val* var217 /* : String */;
val* var_result /* var result: String */;
short int var218 /* : Bool */;
val* var219 /* : ACallExpr */;
val* var221 /* : ACallExpr */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : CString */;
val* var225 /* : String */;
val* var226 /* : DirectCCompilerOption */;
short int var227 /* : Bool */;
int cltype228;
int idtype229;
val* var230 /* : nullable ANode */;
val* var232 /* : nullable ANode */;
short int var233 /* : Bool */;
int cltype234;
int idtype235;
const char* var_class_name236;
val* var237 /* : nullable MModule */;
val* var239 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : CString */;
val* var243 /* : String */;
val* var_platform /* var platform: String */;
val* var244 /* : nullable Platform */;
val* var_target_platform /* var target_platform: nullable Platform */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
val* var250 /* : String */;
val* var251 /* : nullable String */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : CString */;
val* var255 /* : String */;
val* var256 /* : nullable AAnnotations */;
val* var258 /* : nullable AAnnotations */;
val* var_annots /* var annots: nullable AAnnotations */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
val* var264 /* : ANodes[AAnnotation] */;
val* var266 /* : ANodes[AAnnotation] */;
val* var_items /* var items: ANodes[AAnnotation] */;
long var267 /* : Int */;
short int var268 /* : Bool */;
short int var270 /* : Bool */;
int cltype271;
int idtype272;
const char* var_class_name273;
short int var274 /* : Bool */;
val* var276 /* : NativeArray[String] */;
static val* varonce275;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : CString */;
val* var280 /* : String */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : CString */;
val* var284 /* : String */;
val* var285 /* : String */;
long var286 /* : Int */;
short int var287 /* : Bool */;
short int var289 /* : Bool */;
val* var290 /* : nullable Object */;
val* var_item /* var item: AAnnotation */;
val* var291 /* : String */;
val* var_292 /* var : Array[DirectCCompilerOption] */;
val* var293 /* : IndexedIterator[nullable Object] */;
val* var_294 /* var : IndexedIterator[DirectCCompilerOption] */;
short int var295 /* : Bool */;
val* var297 /* : nullable Object */;
val* var_opt298 /* var opt: DirectCCompilerOption */;
val* var299 /* : String */;
val* var301 /* : String */;
val* var_arg /* var arg: String */;
val* var302 /* : String */;
short int var303 /* : Bool */;
val* var304 /* : MultiHashMap[String, String] */;
val* var306 /* : MultiHashMap[String, String] */;
val* var307 /* : String */;
short int var308 /* : Bool */;
val* var309 /* : MultiHashMap[String, String] */;
val* var311 /* : MultiHashMap[String, String] */;
val* var312 /* : String */;
short int var313 /* : Bool */;
val* var314 /* : MultiHashMap[String, String] */;
val* var316 /* : MultiHashMap[String, String] */;
var_nmoduledecl = p0;
var_nat = p1;
{
var = nitc___nitc__AAnnotation___name(var_nat);
}
var_annotation_name = var;
{
var3 = nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___compiler_annotation_name(self);
}
{
{ /* Inline kernel#Object#!= (var_annotation_name,var3) on <var_annotation_name:String> */
var_other = var3;
{
var6 = ((short int(*)(val* self, val* p0))(var_annotation_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annotation_name, var_other); /* == on <var_annotation_name:String>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
{
var8 = nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___linker_annotation_name(self);
}
{
{ /* Inline kernel#Object#!= (var_annotation_name,var8) on <var_annotation_name:String> */
var_other = var8;
{
var11 = ((short int(*)(val* self, val* p0))(var_annotation_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annotation_name, var_other); /* == on <var_annotation_name:String>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var2 = var9;
} else {
var2 = var_;
}
var_13 = var2;
if (var2){
{
var14 = nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___cpp_compiler_annotation_name(self);
}
{
{ /* Inline kernel#Object#!= (var_annotation_name,var14) on <var_annotation_name:String> */
var_other = var14;
{
var17 = ((short int(*)(val* self, val* p0))(var_annotation_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annotation_name, var_other); /* == on <var_annotation_name:String>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var1 = var15;
} else {
var1 = var_13;
}
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:CCompilerOptionsPhase> */
var21 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:CCompilerOptionsPhase> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc__modelbuilder_base___ToolContext___modelbuilder(var19);
}
var_modelbuilder = var22;
/* <var_nmoduledecl:ANode> isa AModuledecl */
cltype = type_nitc__AModuledecl.color;
idtype = type_nitc__AModuledecl.id;
if(cltype >= var_nmoduledecl->type->table_size) {
var23 = 0;
} else {
var23 = var_nmoduledecl->type->type_table[cltype] == idtype;
}
var24 = !var23;
if (var24){
if (unlikely(varonce==NULL)) {
var25 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Syntax Error: only the declaration of modules may use `";
var29 = core__abstract_text___CString___to_s_full(var28, 55l, 55l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "`.";
var33 = core__abstract_text___CString___to_s_full(var32, 2l, 2l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var25)->values[2]=var31;
} else {
var25 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var25)->values[1]=var_annotation_name;
{
var34 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce = var25;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var34); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_nat) on <var_nat:AAnnotation> */
var37 = var_nat->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_nat:AAnnotation> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_args = var35;
{
var38 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var_args);
}
if (var38){
if (unlikely(varonce39==NULL)) {
var40 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "Syntax Error: `";
var44 = core__abstract_text___CString___to_s_full(var43, 15l, 15l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "` expects at least one argument.";
var48 = core__abstract_text___CString___to_s_full(var47, 32l, 32l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var40)->values[2]=var46;
} else {
var40 = varonce39;
varonce39 = NULL;
}
((struct instance_core__NativeArray*)var40)->values[1]=var_annotation_name;
{
var49 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var49); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var50 = NEW_core__Array(&type_core__Array__nitc__CCompilerOption);
{
core___core__Array___core__kernel__Object__init(var50); /* Direct call array#Array#init on <var50:Array[CCompilerOption]>*/
}
var_options = var50;
var_51 = var_args;
{
var52 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_51);
}
var_53 = var52;
for(;;) {
{
var54 = ((short int(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_53); /* is_ok on <var_53:Iterator[AExpr]>*/
}
if (var54){
} else {
goto BREAK_label;
}
{
var55 = ((val*(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_53); /* item on <var_53:Iterator[AExpr]>*/
}
var_expr = var55;
/* <var_expr:AExpr> isa AStringFormExpr */
cltype57 = type_nitc__AStringFormExpr.color;
idtype58 = type_nitc__AStringFormExpr.id;
if(cltype57 >= var_expr->type->table_size) {
var56 = 0;
} else {
var56 = var_expr->type->type_table[cltype57] == idtype58;
}
if (var56){
{
var59 = nitc__parser_work___Prod___collect_text(var_expr);
}
var_text = var59;
{
var60 = ((long(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__length]))(var_text); /* length on <var_text:String>*/
}
{
{ /* Inline kernel#Int#- (var60,2l) on <var60:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var63 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var66 = var60 - 2l;
var61 = var66;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
{
var67 = ((val*(*)(val* self, long p0, long p1))(var_text->class->vft[COLOR_core__abstract_text__Text__substring]))(var_text, 1l, var61); /* substring on <var_text:String>*/
}
var_text = var67;
var68 = NEW_nitc__DirectCCompilerOption(&type_nitc__DirectCCompilerOption);
{
((void(*)(val* self, val* p0))(var68->class->vft[COLOR_nitc__c_compiler_options__DirectCCompilerOption__option_61d]))(var68, var_text); /* option= on <var68:DirectCCompilerOption>*/
}
{
((void(*)(val* self))(var68->class->vft[COLOR_core__kernel__Object__init]))(var68); /* init on <var68:DirectCCompilerOption>*/
}
var_opt = var68;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_options, var_opt); /* Direct call array#Array#add on <var_options:Array[CCompilerOption]>*/
}
} else {
/* <var_expr:AExpr> isa ACallExpr */
cltype70 = type_nitc__ACallExpr.color;
idtype71 = type_nitc__ACallExpr.id;
if(cltype70 >= var_expr->type->table_size) {
var69 = 0;
} else {
var69 = var_expr->type->type_table[cltype70] == idtype71;
}
if (var69){
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (var_expr) on <var_expr:AExpr(ACallExpr)> */
var74 = var_expr->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <var_expr:AExpr(ACallExpr)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2380);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = nitc__typing___AExprs___to_a(var72);
}
var_exec_args = var75;
{
{ /* Inline parser_nodes#ACallFormExpr#n_qid (var_expr) on <var_expr:AExpr(ACallExpr)> */
var79 = var_expr->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <var_expr:AExpr(ACallExpr)> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline parser_nodes#AQid#n_id (var77) on <var77:AQid> */
var82 = var77->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var77:AQid> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1721);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
var83 = nitc__lexer_work___Token___text(var80);
}
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "exec";
var87 = core__abstract_text___CString___to_s_full(var86, 4l, 4l);
var85 = var87;
varonce84 = var85;
}
{
{ /* Inline kernel#Object#!= (var83,var85) on <var83:String> */
var_other = var85;
{
var90 = ((short int(*)(val* self, val* p0))(var83->class->vft[COLOR_core__kernel__Object___61d_61d]))(var83, var_other); /* == on <var83:String>*/
}
var91 = !var90;
var88 = var91;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var_92 = var88;
if (var88){
var76 = var_92;
} else {
{
var93 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_exec_args);
}
var76 = var93;
}
if (var76){
if (unlikely(varonce94==NULL)) {
var95 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "Syntax Error: `";
var99 = core__abstract_text___CString___to_s_full(var98, 15l, 15l);
var97 = var99;
varonce96 = var97;
}
((struct instance_core__NativeArray*)var95)->values[0]=var97;
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "` accepts only calls to `exec` with the command as arguments.";
var103 = core__abstract_text___CString___to_s_full(var102, 61l, 61l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var95)->values[2]=var101;
} else {
var95 = varonce94;
varonce94 = NULL;
}
((struct instance_core__NativeArray*)var95)->values[1]=var_annotation_name;
{
var104 = ((val*(*)(val* self))(var95->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var95); /* native_to_s on <var95:NativeArray[String]>*/
}
varonce94 = var95;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var104); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var105 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var105); /* Direct call array#Array#init on <var105:Array[String]>*/
}
var_exec_args_as_strings = var105;
var_106 = var_exec_args;
{
var107 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_106);
}
var_108 = var107;
for(;;) {
{
var109 = ((short int(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_108); /* is_ok on <var_108:IndexedIterator[AExpr]>*/
}
if (var109){
} else {
goto BREAK_label110;
}
{
var111 = ((val*(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_108); /* item on <var_108:IndexedIterator[AExpr]>*/
}
var_exec_arg = var111;
/* <var_exec_arg:AExpr> isa AStringFormExpr */
cltype113 = type_nitc__AStringFormExpr.color;
idtype114 = type_nitc__AStringFormExpr.id;
if(cltype113 >= var_exec_arg->type->table_size) {
var112 = 0;
} else {
var112 = var_exec_arg->type->type_table[cltype113] == idtype114;
}
var115 = !var112;
if (var115){
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "Syntax Error: calls to `exec` expects the arguments to be String literals.";
var119 = core__abstract_text___CString___to_s_full(var118, 74l, 74l);
var117 = var119;
varonce116 = var117;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var117); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
var120 = nitc__parser_work___Prod___collect_text(var_exec_arg);
}
var_arg_string = var120;
{
var121 = ((long(*)(val* self))(var_arg_string->class->vft[COLOR_core__abstract_text__Text__length]))(var_arg_string); /* length on <var_arg_string:String>*/
}
{
{ /* Inline kernel#Int#- (var121,2l) on <var121:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var124 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var124)) {
var_class_name127 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var128 = var121 - 2l;
var122 = var128;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
{
var129 = ((val*(*)(val* self, long p0, long p1))(var_arg_string->class->vft[COLOR_core__abstract_text__Text__substring]))(var_arg_string, 1l, var122); /* substring on <var_arg_string:String>*/
}
var_arg_string = var129;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_exec_args_as_strings, var_arg_string); /* Direct call array#Array#add on <var_exec_args_as_strings:Array[String]>*/
}
}
{
((void(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_108); /* next on <var_108:IndexedIterator[AExpr]>*/
}
}
BREAK_label110: (void)0;
{
((void(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_108); /* finish on <var_108:IndexedIterator[AExpr]>*/
}
var130 = NEW_nitc__ExecCCompilerOption(&type_nitc__ExecCCompilerOption);
{
((void(*)(val* self, val* p0))(var130->class->vft[COLOR_nitc__c_compiler_options__ExecCCompilerOption__command_61d]))(var130, var_exec_args_as_strings); /* command= on <var130:ExecCCompilerOption>*/
}
{
((void(*)(val* self, val* p0))(var130->class->vft[COLOR_nitc__c_compiler_options__ExecCCompilerOption__exec_node_61d]))(var130, var_expr); /* exec_node= on <var130:ExecCCompilerOption>*/
}
{
((void(*)(val* self))(var130->class->vft[COLOR_core__kernel__Object__init]))(var130); /* init on <var130:ExecCCompilerOption>*/
}
var_opt131 = var130;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_options, var_opt131); /* Direct call array#Array#add on <var_options:Array[CCompilerOption]>*/
}
} else {
if (unlikely(varonce132==NULL)) {
var133 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "Syntax Error: `";
var137 = core__abstract_text___CString___to_s_full(var136, 15l, 15l);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var133)->values[0]=var135;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "` expects its arguments to be the name of the package as String literals.";
var141 = core__abstract_text___CString___to_s_full(var140, 73l, 73l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var133)->values[2]=var139;
} else {
var133 = varonce132;
varonce132 = NULL;
}
((struct instance_core__NativeArray*)var133)->values[1]=var_annotation_name;
{
var142 = ((val*(*)(val* self))(var133->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var133); /* native_to_s on <var133:NativeArray[String]>*/
}
varonce132 = var133;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var142); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
}
}
{
((void(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_53); /* next on <var_53:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_53); /* finish on <var_53:Iterator[AExpr]>*/
}
var143 = NEW_core__Array(&type_core__Array__nitc__DirectCCompilerOption);
{
core___core__Array___core__kernel__Object__init(var143); /* Direct call array#Array#init on <var143:Array[DirectCCompilerOption]>*/
}
var_simplified_options = var143;
var_144 = var_options;
{
var145 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_144);
}
var_146 = var145;
for(;;) {
{
var147 = ((short int(*)(val* self))((((long)var_146&3)?class_info[((long)var_146&3)]:var_146->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_146); /* is_ok on <var_146:IndexedIterator[CCompilerOption]>*/
}
if (var147){
} else {
goto BREAK_label148;
}
{
var149 = ((val*(*)(val* self))((((long)var_146&3)?class_info[((long)var_146&3)]:var_146->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_146); /* item on <var_146:IndexedIterator[CCompilerOption]>*/
}
var_opt150 = var149;
/* <var_opt150:CCompilerOption> isa ExecCCompilerOption */
cltype152 = type_nitc__ExecCCompilerOption.color;
idtype153 = type_nitc__ExecCCompilerOption.id;
if(cltype152 >= var_opt150->type->table_size) {
var151 = 0;
} else {
var151 = var_opt150->type->type_table[cltype152] == idtype153;
}
if (var151){
{
{ /* Inline c_compiler_options#ExecCCompilerOption#command (var_opt150) on <var_opt150:CCompilerOption(ExecCCompilerOption)> */
var156 = var_opt150->attrs[COLOR_nitc__c_compiler_options__ExecCCompilerOption___command].val; /* _command on <var_opt150:CCompilerOption(ExecCCompilerOption)> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _command");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 186);
fatal_exit(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
var_cmd_args = var154;
{
{ /* Inline array#AbstractArrayRead#length (var_cmd_args) on <var_cmd_args:Array[String]> */
var159 = var_cmd_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_cmd_args:Array[String]> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var157,1l) on <var157:Int> */
var162 = var157 == 1l;
var160 = var162;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
if (var160){
var163 = NEW_core__ProcessReader(&type_core__ProcessReader);
{
var164 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_cmd_args, 0l);
}
var165 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var165); /* Direct call array#Array#init on <var165:Array[String]>*/
}
{
core___core__Process___from_a(var163, var164, var165); /* Direct call exec#Process#from_a on <var163:ProcessReader>*/
}
var_proc = var163;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_cmd_args) on <var_cmd_args:Array[String]> */
var168 = var_cmd_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_cmd_args:Array[String]> */
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var166,1l) on <var166:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var171 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var171)) {
var_class_name174 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name174);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var175 = var166 > 1l;
var169 = var175;
goto RET_LABEL170;
RET_LABEL170:(void)0;
}
}
if (var169){
{
{ /* Inline array#AbstractArrayRead#length (var_cmd_args) on <var_cmd_args:Array[String]> */
var178 = var_cmd_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_cmd_args:Array[String]> */
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var176,1l) on <var176:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var181 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var181)) {
var_class_name184 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name184);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var185 = var176 - 1l;
var179 = var185;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
{
var186 = core__collection___Sequence___subarray(var_cmd_args, 1l, var179);
}
var_rest_args = var186;
var187 = NEW_core__ProcessReader(&type_core__ProcessReader);
{
var188 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_cmd_args, 0l);
}
{
core___core__Process___from_a(var187, var188, var_rest_args); /* Direct call exec#Process#from_a on <var187:ProcessReader>*/
}
var_proc = var187;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 108);
fatal_exit(1);
}
}
{
core___core__Process___wait(var_proc); /* Direct call exec#Process#wait on <var_proc:nullable Object(ProcessReader)>*/
}
{
var189 = core___core__Process___status(var_proc);
}
var_status = var189;
{
{ /* Inline kernel#Int#!= (var_status,0l) on <var_status:Int> */
var192 = var_status == 0l;
var193 = !var192;
var190 = var193;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
}
if (var190){
{
{ /* Inline c_compiler_options#ExecCCompilerOption#exec_node (var_opt150) on <var_opt150:CCompilerOption(ExecCCompilerOption)> */
var196 = var_opt150->attrs[COLOR_nitc__c_compiler_options__ExecCCompilerOption___exec_node].val; /* _exec_node on <var_opt150:CCompilerOption(ExecCCompilerOption)> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exec_node");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 187);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
if (unlikely(varonce197==NULL)) {
var198 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "Error: something went wrong when executing the argument of `";
var202 = core__abstract_text___CString___to_s_full(var201, 60l, 60l);
var200 = var202;
varonce199 = var200;
}
((struct instance_core__NativeArray*)var198)->values[0]=var200;
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "`, make sure the command is valid.";
var206 = core__abstract_text___CString___to_s_full(var205, 34l, 34l);
var204 = var206;
varonce203 = var204;
}
((struct instance_core__NativeArray*)var198)->values[2]=var204;
} else {
var198 = varonce197;
varonce197 = NULL;
}
((struct instance_core__NativeArray*)var198)->values[1]=var_annotation_name;
{
var207 = ((val*(*)(val* self))(var198->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var198); /* native_to_s on <var198:NativeArray[String]>*/
}
varonce197 = var198;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var194, var207); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var208 = core___core__Reader___read_all(var_proc);
}
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = "\n";
var212 = core__abstract_text___CString___to_s_full(var211, 1l, 1l);
var210 = var212;
varonce209 = var210;
}
if (likely(varonce213!=NULL)) {
var214 = varonce213;
} else {
var215 = " ";
var216 = core__abstract_text___CString___to_s_full(var215, 1l, 1l);
var214 = var216;
varonce213 = var214;
}
{
var217 = core__string_search___Text___replace(var208, var210, var214);
}
var_result = var217;
{
var218 = ((short int(*)(val* self))(var_result->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_result); /* is_empty on <var_result:String>*/
}
if (var218){
{
{ /* Inline c_compiler_options#ExecCCompilerOption#exec_node (var_opt150) on <var_opt150:CCompilerOption(ExecCCompilerOption)> */
var221 = var_opt150->attrs[COLOR_nitc__c_compiler_options__ExecCCompilerOption___exec_node].val; /* _exec_node on <var_opt150:CCompilerOption(ExecCCompilerOption)> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exec_node");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 187);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = "Error: got no result from the command, make sure it is valid.";
var225 = core__abstract_text___CString___to_s_full(var224, 61l, 61l);
var223 = var225;
varonce222 = var223;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var219, var223); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var226 = NEW_nitc__DirectCCompilerOption(&type_nitc__DirectCCompilerOption);
{
((void(*)(val* self, val* p0))(var226->class->vft[COLOR_nitc__c_compiler_options__DirectCCompilerOption__option_61d]))(var226, var_result); /* option= on <var226:DirectCCompilerOption>*/
}
{
((void(*)(val* self))(var226->class->vft[COLOR_core__kernel__Object__init]))(var226); /* init on <var226:DirectCCompilerOption>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_simplified_options, var226); /* Direct call array#Array#add on <var_simplified_options:Array[DirectCCompilerOption]>*/
}
} else {
/* <var_opt150:CCompilerOption> isa DirectCCompilerOption */
cltype228 = type_nitc__DirectCCompilerOption.color;
idtype229 = type_nitc__DirectCCompilerOption.id;
if(cltype228 >= var_opt150->type->table_size) {
var227 = 0;
} else {
var227 = var_opt150->type->type_table[cltype228] == idtype229;
}
if (unlikely(!var227)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 128);
fatal_exit(1);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_simplified_options, var_opt150); /* Direct call array#Array#add on <var_simplified_options:Array[DirectCCompilerOption]>*/
}
}
{
((void(*)(val* self))((((long)var_146&3)?class_info[((long)var_146&3)]:var_146->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_146); /* next on <var_146:IndexedIterator[CCompilerOption]>*/
}
}
BREAK_label148: (void)0;
{
((void(*)(val* self))((((long)var_146&3)?class_info[((long)var_146&3)]:var_146->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_146); /* finish on <var_146:IndexedIterator[CCompilerOption]>*/
}
{
{ /* Inline parser_nodes#ANode#parent (var_nmoduledecl) on <var_nmoduledecl:ANode(AModuledecl)> */
var232 = var_nmoduledecl->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_nmoduledecl:ANode(AModuledecl)> */
var230 = var232;
RET_LABEL231:(void)0;
}
}
/* <var230:nullable ANode> isa AModule */
cltype234 = type_nitc__AModule.color;
idtype235 = type_nitc__AModule.id;
if(var230 == NULL) {
var233 = 0;
} else {
if(cltype234 >= var230->type->table_size) {
var233 = 0;
} else {
var233 = var230->type->type_table[cltype234] == idtype235;
}
}
if (unlikely(!var233)) {
var_class_name236 = var230 == NULL ? "null" : var230->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name236);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 134);
fatal_exit(1);
}
{
{ /* Inline loader#AModule#mmodule (var230) on <var230:nullable ANode(AModule)> */
var239 = var230->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var230:nullable ANode(AModule)> */
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 134);
fatal_exit(1);
}
var_mmodule = var237;
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "";
var243 = core__abstract_text___CString___to_s_full(var242, 0l, 0l);
var241 = var243;
varonce240 = var241;
}
var_platform = var241;
{
var244 = nitc__platform___MModule___target_platform(var_mmodule);
}
var_target_platform = var244;
if (var_target_platform == NULL) {
var245 = 0; /* is null */
} else {
var245 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_target_platform,((val*)NULL)) on <var_target_platform:nullable Platform> */
var_other = ((val*)NULL);
{
var248 = ((short int(*)(val* self, val* p0))(var_target_platform->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_target_platform, var_other); /* == on <var_target_platform:nullable Platform(Platform)>*/
}
var249 = !var248;
var246 = var249;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
var245 = var246;
}
if (var245){
{
var251 = ((val*(*)(val* self))(var_target_platform->class->vft[COLOR_nitc__platform__Platform__name]))(var_target_platform); /* name on <var_target_platform:nullable Platform(Platform)>*/
}
if (var251!=NULL) {
var250 = var251;
} else {
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = "";
var255 = core__abstract_text___CString___to_s_full(var254, 0l, 0l);
var253 = var255;
varonce252 = var253;
}
var250 = var253;
}
var_platform = var250;
} else {
}
{
{ /* Inline parser_nodes#Prod#n_annotations (var_nat) on <var_nat:AAnnotation> */
var258 = var_nat->attrs[COLOR_nitc__parser_nodes__Prod___n_annotations].val; /* _n_annotations on <var_nat:AAnnotation> */
var256 = var258;
RET_LABEL257:(void)0;
}
}
var_annots = var256;
if (var_annots == NULL) {
var259 = 0; /* is null */
} else {
var259 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_annots,((val*)NULL)) on <var_annots:nullable AAnnotations> */
var_other = ((val*)NULL);
{
var262 = ((short int(*)(val* self, val* p0))(var_annots->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annots, var_other); /* == on <var_annots:nullable AAnnotations(AAnnotations)>*/
}
var263 = !var262;
var260 = var263;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
var259 = var260;
}
if (var259){
{
{ /* Inline parser_nodes#AAnnotations#n_items (var_annots) on <var_annots:nullable AAnnotations(AAnnotations)> */
var266 = var_annots->attrs[COLOR_nitc__parser_nodes__AAnnotations___n_items].val; /* _n_items on <var_annots:nullable AAnnotations(AAnnotations)> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2987);
fatal_exit(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
var_items = var264;
{
var267 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_items);
}
{
{ /* Inline kernel#Int#> (var267,1l) on <var267:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var270 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var270)) {
var_class_name273 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name273);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var274 = var267 > 1l;
var268 = var274;
goto RET_LABEL269;
RET_LABEL269:(void)0;
}
}
if (var268){
if (unlikely(varonce275==NULL)) {
var276 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "Syntax Error: `";
var280 = core__abstract_text___CString___to_s_full(var279, 15l, 15l);
var278 = var280;
varonce277 = var278;
}
((struct instance_core__NativeArray*)var276)->values[0]=var278;
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "` accepts only a single annotation, the platform name.";
var284 = core__abstract_text___CString___to_s_full(var283, 54l, 54l);
var282 = var284;
varonce281 = var282;
}
((struct instance_core__NativeArray*)var276)->values[2]=var282;
} else {
var276 = varonce275;
varonce275 = NULL;
}
((struct instance_core__NativeArray*)var276)->values[1]=var_annotation_name;
{
var285 = ((val*(*)(val* self))(var276->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var276); /* native_to_s on <var276:NativeArray[String]>*/
}
varonce275 = var276;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_annots, var285); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var286 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_items);
}
{
{ /* Inline kernel#Int#== (var286,1l) on <var286:Int> */
var289 = var286 == 1l;
var287 = var289;
goto RET_LABEL288;
RET_LABEL288:(void)0;
}
}
if (unlikely(!var287)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 153);
fatal_exit(1);
}
{
var290 = core___core__SequenceRead___Collection__first(var_items);
}
var_item = var290;
{
var291 = nitc___nitc__AAnnotation___name(var_item);
}
var_platform = var291;
} else {
}
var_292 = var_simplified_options;
{
var293 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_292);
}
var_294 = var293;
for(;;) {
{
var295 = ((short int(*)(val* self))((((long)var_294&3)?class_info[((long)var_294&3)]:var_294->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_294); /* is_ok on <var_294:IndexedIterator[DirectCCompilerOption]>*/
}
if (var295){
} else {
goto BREAK_label296;
}
{
var297 = ((val*(*)(val* self))((((long)var_294&3)?class_info[((long)var_294&3)]:var_294->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_294); /* item on <var_294:IndexedIterator[DirectCCompilerOption]>*/
}
var_opt298 = var297;
{
{ /* Inline c_compiler_options#DirectCCompilerOption#option (var_opt298) on <var_opt298:DirectCCompilerOption> */
var301 = var_opt298->attrs[COLOR_nitc__c_compiler_options__DirectCCompilerOption___option].val; /* _option on <var_opt298:DirectCCompilerOption> */
if (unlikely(var301 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 180);
fatal_exit(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
var_arg = var299;
{
var302 = nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___compiler_annotation_name(self);
}
{
var303 = ((short int(*)(val* self, val* p0))(var_annotation_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annotation_name, var302); /* == on <var_annotation_name:String>*/
}
if (var303){
{
{ /* Inline light_c#MModule#cflags (var_mmodule) on <var_mmodule:MModule> */
var306 = var_mmodule->attrs[COLOR_nitc__light_c__MModule___cflags].val; /* _cflags on <var_mmodule:MModule> */
if (unlikely(var306 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 77);
fatal_exit(1);
}
var304 = var306;
RET_LABEL305:(void)0;
}
}
{
more_collections___more_collections__MultiHashMap___add_one(var304, var_platform, var_arg); /* Direct call more_collections#MultiHashMap#add_one on <var304:MultiHashMap[String, String]>*/
}
} else {
{
var307 = nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___linker_annotation_name(self);
}
{
var308 = ((short int(*)(val* self, val* p0))(var_annotation_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annotation_name, var307); /* == on <var_annotation_name:String>*/
}
if (var308){
{
{ /* Inline light_c#MModule#ldflags (var_mmodule) on <var_mmodule:MModule> */
var311 = var_mmodule->attrs[COLOR_nitc__light_c__MModule___ldflags].val; /* _ldflags on <var_mmodule:MModule> */
if (unlikely(var311 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ldflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 80);
fatal_exit(1);
}
var309 = var311;
RET_LABEL310:(void)0;
}
}
{
more_collections___more_collections__MultiHashMap___add_one(var309, var_platform, var_arg); /* Direct call more_collections#MultiHashMap#add_one on <var309:MultiHashMap[String, String]>*/
}
} else {
{
var312 = nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___cpp_compiler_annotation_name(self);
}
{
var313 = ((short int(*)(val* self, val* p0))(var_annotation_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annotation_name, var312); /* == on <var_annotation_name:String>*/
}
if (var313){
{
{ /* Inline cpp#MModule#cppflags (var_mmodule) on <var_mmodule:MModule> */
var316 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cppflags].val; /* _cppflags on <var_mmodule:MModule> */
if (unlikely(var316 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cppflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 30);
fatal_exit(1);
}
var314 = var316;
RET_LABEL315:(void)0;
}
}
{
more_collections___more_collections__MultiHashMap___add_one(var314, var_platform, var_arg); /* Direct call more_collections#MultiHashMap#add_one on <var314:MultiHashMap[String, String]>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 168);
fatal_exit(1);
}
}
}
{
((void(*)(val* self))((((long)var_294&3)?class_info[((long)var_294&3)]:var_294->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_294); /* next on <var_294:IndexedIterator[DirectCCompilerOption]>*/
}
}
BREAK_label296: (void)0;
{
((void(*)(val* self))((((long)var_294&3)?class_info[((long)var_294&3)]:var_294->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_294); /* finish on <var_294:IndexedIterator[DirectCCompilerOption]>*/
}
RET_LABEL:;
}
/* method c_compiler_options#DirectCCompilerOption#option for (self: DirectCCompilerOption): String */
val* nitc___nitc__DirectCCompilerOption___option(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__c_compiler_options__DirectCCompilerOption___option].val; /* _option on <self:DirectCCompilerOption> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 180);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#DirectCCompilerOption#option= for (self: DirectCCompilerOption, String) */
void nitc___nitc__DirectCCompilerOption___option_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__c_compiler_options__DirectCCompilerOption___option].val = p0; /* _option on <self:DirectCCompilerOption> */
RET_LABEL:;
}
/* method c_compiler_options#DirectCCompilerOption#init for (self: DirectCCompilerOption) */
void nitc___nitc__DirectCCompilerOption___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__DirectCCompilerOption___core__kernel__Object__init]))(self); /* init on <self:DirectCCompilerOption>*/
}
RET_LABEL:;
}
/* method c_compiler_options#ExecCCompilerOption#command for (self: ExecCCompilerOption): Array[String] */
val* nitc___nitc__ExecCCompilerOption___command(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__c_compiler_options__ExecCCompilerOption___command].val; /* _command on <self:ExecCCompilerOption> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _command");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 186);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#ExecCCompilerOption#command= for (self: ExecCCompilerOption, Array[String]) */
void nitc___nitc__ExecCCompilerOption___command_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__c_compiler_options__ExecCCompilerOption___command].val = p0; /* _command on <self:ExecCCompilerOption> */
RET_LABEL:;
}
/* method c_compiler_options#ExecCCompilerOption#exec_node for (self: ExecCCompilerOption): ACallExpr */
val* nitc___nitc__ExecCCompilerOption___exec_node(val* self) {
val* var /* : ACallExpr */;
val* var1 /* : ACallExpr */;
var1 = self->attrs[COLOR_nitc__c_compiler_options__ExecCCompilerOption___exec_node].val; /* _exec_node on <self:ExecCCompilerOption> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exec_node");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_compiler_options, 187);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method c_compiler_options#ExecCCompilerOption#exec_node= for (self: ExecCCompilerOption, ACallExpr) */
void nitc___nitc__ExecCCompilerOption___exec_node_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__c_compiler_options__ExecCCompilerOption___exec_node].val = p0; /* _exec_node on <self:ExecCCompilerOption> */
RET_LABEL:;
}
/* method c_compiler_options#ExecCCompilerOption#init for (self: ExecCCompilerOption) */
void nitc___nitc__ExecCCompilerOption___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ExecCCompilerOption___core__kernel__Object__init]))(self); /* init on <self:ExecCCompilerOption>*/
}
RET_LABEL:;
}
