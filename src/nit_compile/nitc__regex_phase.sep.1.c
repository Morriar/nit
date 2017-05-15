#include "nitc__regex_phase.sep.0.h"
/* method regex_phase#RegexPhase#process_nmodule for (self: RegexPhase, AModule) */
void nitc__regex_phase___nitc__regex_phase__RegexPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : RegexVisitor */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var_visitor /* var visitor: RegexVisitor */;
var_nmodule = p0;
var = NEW_nitc__regex_phase__RegexVisitor(&type_nitc__regex_phase__RegexVisitor);
{
{ /* Inline phase#Phase#toolcontext (self) on <self:RegexPhase> */
var3 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:RegexPhase> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__regex_phase__RegexVisitor__toolcontext_61d]))(var, var1); /* toolcontext= on <var:RegexVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:RegexVisitor>*/
}
var_visitor = var;
{
nitc__regex_phase___ANode___accept_regex_visitor(var_nmodule, var_visitor); /* Direct call regex_phase#ANode#accept_regex_visitor on <var_nmodule:AModule>*/
}
RET_LABEL:;
}
/* method regex_phase#RegexVisitor#toolcontext for (self: RegexVisitor): ToolContext */
val* nitc__regex_phase___nitc__regex_phase__RegexVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__regex_phase__RegexVisitor___toolcontext].val; /* _toolcontext on <self:RegexVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__regex_phase, 41);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method regex_phase#RegexVisitor#toolcontext= for (self: RegexVisitor, ToolContext) */
void nitc__regex_phase___nitc__regex_phase__RegexVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__regex_phase__RegexVisitor___toolcontext].val = p0; /* _toolcontext on <self:RegexVisitor> */
RET_LABEL:;
}
/* method regex_phase#RegexVisitor#visit for (self: RegexVisitor, ANode) */
void nitc__regex_phase___nitc__regex_phase__RegexVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__regex_phase__ANode__accept_regex_visitor]))(var_n, self); /* accept_regex_visitor on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method regex_phase#RegexVisitor#init for (self: RegexVisitor) */
void nitc__regex_phase___nitc__regex_phase__RegexVisitor___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__regex_phase___nitc__regex_phase__RegexVisitor___core__kernel__Object__init]))(self); /* init on <self:RegexVisitor>*/
}
RET_LABEL:;
}
/* method regex_phase#ANode#accept_regex_visitor for (self: ANode, RegexVisitor) */
void nitc__regex_phase___ANode___accept_regex_visitor(val* self, val* p0) {
val* var_v /* var v: RegexVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
RET_LABEL:;
}
/* method regex_phase#ACallExpr#accept_regex_visitor for (self: ACallExpr, RegexVisitor) */
void nitc__regex_phase___ACallExpr___ANode__accept_regex_visitor(val* self, val* p0) {
val* var_v /* var v: RegexVisitor */;
val* var /* : AQid */;
val* var2 /* : AQid */;
val* var3 /* : TId */;
val* var5 /* : TId */;
val* var_method /* var method: TId */;
val* var6 /* : AExpr */;
val* var8 /* : AExpr */;
val* var_receiver /* var receiver: AExpr */;
short int var9 /* : Bool */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : String */;
val* var18 /* : String */;
val* var_re_src /* var re_src: String */;
val* var19 /* : Regex */;
val* var_re /* var re: Regex */;
val* var20 /* : nullable Error */;
val* var_error /* var error: nullable Error */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : ToolContext */;
val* var28 /* : ToolContext */;
val* var29 /* : Location */;
val* var31 /* : Location */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : Text */;
val* var38 /* : Message */;
var_v = p0;
{
{ /* Inline parser_nodes#ACallFormExpr#n_qid (self) on <self:ACallExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_qid].val; /* _n_qid on <self:ACallExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2377);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AQid#n_id (var) on <var:AQid> */
var5 = var->attrs[COLOR_nitc__parser_nodes__AQid___n_id].val; /* _n_id on <var:AQid> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1721);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_method = var3;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ACallExpr> */
var8 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ACallExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_receiver = var6;
{
var10 = nitc__lexer_work___Token___text(var_method);
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "to_re";
var13 = core__abstract_text___CString___to_s_full(var12, 5l, 5l);
var11 = var13;
varonce = var11;
}
{
var14 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_core__kernel__Object___61d_61d]))(var10, var11); /* == on <var10:String>*/
}
var_ = var14;
if (var14){
/* <var_receiver:AExpr> isa AStringFormExpr */
cltype = type_nitc__AStringFormExpr.color;
idtype = type_nitc__AStringFormExpr.id;
if(cltype >= var_receiver->type->table_size) {
var15 = 0;
} else {
var15 = var_receiver->type->type_table[cltype] == idtype;
}
var9 = var15;
} else {
var9 = var_;
}
if (var9){
{
{ /* Inline literal#AStringFormExpr#value (var_receiver) on <var_receiver:AExpr(AStringFormExpr)> */
var18 = var_receiver->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <var_receiver:AExpr(AStringFormExpr)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 201);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_re_src = var16;
{
var19 = core__re___Text___to_re(var_re_src);
}
var_re = var19;
{
var20 = core___core__Regex___compile(var_re);
}
var_error = var20;
{
core___core__Regex___core__gc__Finalizable__finalize(var_re); /* Direct call re#Regex#finalize on <var_re:Regex>*/
}
if (var_error == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_error,((val*)NULL)) on <var_error:nullable Error> */
var_other = ((val*)NULL);
{
var24 = ((short int(*)(val* self, val* p0))(var_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_error, var_other); /* == on <var_error:nullable Error(Error)>*/
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
{ /* Inline regex_phase#RegexVisitor#toolcontext (var_v) on <var_v:RegexVisitor> */
var28 = var_v->attrs[COLOR_nitc__regex_phase__RegexVisitor___toolcontext].val; /* _toolcontext on <var_v:RegexVisitor> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__regex_phase, 41);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ACallExpr> */
var31 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:ACallExpr> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Regex Error: ";
var35 = core__abstract_text___CString___to_s_full(var34, 13l, 13l);
var33 = var35;
varonce32 = var33;
}
{
var36 = core___core__Error___core__abstract_text__Object__to_s(var_error);
}
{
var37 = ((val*(*)(val* self, val* p0))(var33->class->vft[COLOR_core__abstract_text__Text___43d]))(var33, var36); /* + on <var33:String>*/
}
{
var38 = nitc___nitc__ToolContext___error(var26, var29, var37);
}
} else {
}
} else {
}
RET_LABEL:;
}
