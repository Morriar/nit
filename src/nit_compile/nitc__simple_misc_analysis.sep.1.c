#include "nitc__simple_misc_analysis.sep.0.h"
/* method simple_misc_analysis#ToolContext#simple_misc_analysis_phase for (self: ToolContext): Phase */
val* nitc__simple_misc_analysis___ToolContext___simple_misc_analysis_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__simple_misc_analysis__ToolContext___simple_misc_analysis_phase].val; /* _simple_misc_analysis_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _simple_misc_analysis_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__simple_misc_analysis, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method simple_misc_analysis#SimpleMiscAnalysisPhase#process_nmodule for (self: SimpleMiscAnalysisPhase, AModule) */
void nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscAnalysisPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_nmodule = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:SimpleMiscAnalysisPhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:SimpleMiscAnalysisPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__simple_misc_analysis___AModule___do_simple_misc_analysis(var_nmodule, var); /* Direct call simple_misc_analysis#AModule#do_simple_misc_analysis on <var_nmodule:AModule>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AModule#do_simple_misc_analysis for (self: AModule, ToolContext) */
void nitc__simple_misc_analysis___AModule___do_simple_misc_analysis(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : SimpleMiscVisitor */;
val* var_v /* var v: SimpleMiscVisitor */;
val* var1 /* : Location */;
val* var3 /* : Location */;
val* var4 /* : nullable SourceFile */;
val* var6 /* : nullable SourceFile */;
val* var7 /* : nullable Token */;
val* var9 /* : nullable Token */;
val* var_t /* var t: nullable Token */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable Token */;
val* var17 /* : nullable Token */;
var_toolcontext = p0;
var = NEW_nitc__simple_misc_analysis__SimpleMiscVisitor(&type_nitc__simple_misc_analysis__SimpleMiscVisitor);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__simple_misc_analysis__SimpleMiscVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:SimpleMiscVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:SimpleMiscVisitor>*/
}
var_v = var;
{
nitc___nitc__Visitor___enter_visit(var_v, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:SimpleMiscVisitor>*/
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AModule> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline location#Location#file (var1) on <var1:Location> */
var6 = var1->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var1:Location> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__simple_misc_analysis, 44);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#SourceFile#first_token (var4) on <var4:nullable SourceFile> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 415);
fatal_exit(1);
}
var9 = var4->attrs[COLOR_nitc__parser_nodes__SourceFile___first_token].val; /* _first_token on <var4:nullable SourceFile> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_t = var7;
for(;;) {
if (var_t == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_t,((val*)NULL)) on <var_t:nullable Token> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_t, var_other); /* == on <var_t:nullable Token(Token)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
((void(*)(val* self, val* p0))(var_t->class->vft[COLOR_nitc__simple_misc_analysis__Token__accept_simple_misc_token]))(var_t, var_v); /* accept_simple_misc_token on <var_t:nullable Token(Token)>*/
}
{
{ /* Inline parser_nodes#Token#next_token (var_t) on <var_t:nullable Token(Token)> */
var17 = var_t->attrs[COLOR_nitc__parser_nodes__Token___next_token].val; /* _next_token on <var_t:nullable Token(Token)> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_t = var15;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#visit for (self: SimpleMiscVisitor, ANode) */
void nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__simple_misc_analysis__ANode__accept_simple_misc]))(var_n, self); /* accept_simple_misc on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#once_count for (self: SimpleMiscVisitor): Int */
long nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___once_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__simple_misc_analysis__SimpleMiscVisitor___once_count].l; /* _once_count on <self:SimpleMiscVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method simple_misc_analysis#SimpleMiscVisitor#once_count= for (self: SimpleMiscVisitor, Int) */
void nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___once_count_61d(val* self, long p0) {
self->attrs[COLOR_nitc__simple_misc_analysis__SimpleMiscVisitor___once_count].l = p0; /* _once_count on <self:SimpleMiscVisitor> */
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#toolcontext for (self: SimpleMiscVisitor): ToolContext */
val* nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__simple_misc_analysis__SimpleMiscVisitor___toolcontext].val; /* _toolcontext on <self:SimpleMiscVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__simple_misc_analysis, 62);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method simple_misc_analysis#SimpleMiscVisitor#toolcontext= for (self: SimpleMiscVisitor, ToolContext) */
void nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__simple_misc_analysis__SimpleMiscVisitor___toolcontext].val = p0; /* _toolcontext on <self:SimpleMiscVisitor> */
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#warning for (self: SimpleMiscVisitor, ANode, String, String) */
void nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___warning(val* self, val* p0, val* p1, val* p2) {
val* var_node /* var node: ANode */;
val* var_tag /* var tag: String */;
val* var_msg /* var msg: String */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : Location */;
val* var4 /* : nullable Message */;
var_node = p0;
var_tag = p1;
var_msg = p2;
{
{ /* Inline simple_misc_analysis#SimpleMiscVisitor#toolcontext (self) on <self:SimpleMiscVisitor> */
var2 = self->attrs[COLOR_nitc__simple_misc_analysis__SimpleMiscVisitor___toolcontext].val; /* _toolcontext on <self:SimpleMiscVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__simple_misc_analysis, 62);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_node); /* hot_location on <var_node:ANode>*/
}
{
var4 = nitc___nitc__ToolContext___warning(var, var3, var_tag, var_msg);
}
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#check_do_expr for (self: SimpleMiscVisitor, nullable AExpr) */
void nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___check_do_expr(val* self, val* p0) {
val* var_sub /* var sub: nullable AExpr */;
short int var /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
var_sub = p0;
/* <var_sub:nullable AExpr> isa ADoExpr */
cltype = type_nitc__ADoExpr.color;
idtype = type_nitc__ADoExpr.id;
if(var_sub == NULL) {
var = 0;
} else {
if(cltype >= var_sub->type->table_size) {
var = 0;
} else {
var = var_sub->type->type_table[cltype] == idtype;
}
}
if (var){
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "useless-do";
var3 = core__abstract_text___CString___to_s_full(var2, 10l, 10l);
var1 = var3;
varonce = var1;
}
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "Warning: superfluous `do` block.";
var7 = core__abstract_text___CString___to_s_full(var6, 32l, 32l);
var5 = var7;
varonce4 = var5;
}
{
nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___warning(self, var_sub, var1, var5); /* Direct call simple_misc_analysis#SimpleMiscVisitor#warning on <self:SimpleMiscVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#SimpleMiscVisitor#init for (self: SimpleMiscVisitor) */
void nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___core__kernel__Object__init]))(self); /* init on <self:SimpleMiscVisitor>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#ANode#accept_simple_misc for (self: ANode, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___ANode___accept_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(self, var_v); /* visit_all on <self:ANode>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__simple_misc_analysis__ANode__after_simple_misc]))(self, var_v); /* after_simple_misc on <self:ANode>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#ANode#after_simple_misc for (self: ANode, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___ANode___after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method simple_misc_analysis#Token#accept_simple_misc_token for (self: Token, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___Token___accept_simple_misc_token(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method simple_misc_analysis#ASignature#after_simple_misc for (self: ASignature, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___ASignature___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
short int var /* : Bool */;
val* var1 /* : nullable TOpar */;
val* var3 /* : nullable TOpar */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : ANodes[AParam] */;
val* var11 /* : ANodes[AParam] */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#ASignature#n_opar (self) on <self:ASignature> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_opar].val; /* _n_opar on <self:ASignature> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable TOpar> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable TOpar(TOpar)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
var_ = var4;
if (var4){
{
{ /* Inline parser_nodes#ASignature#n_params (self) on <self:ASignature> */
var11 = self->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <self:ASignature> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var9);
}
var = var12;
} else {
var = var_;
}
if (var){
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "parentheses";
var15 = core__abstract_text___CString___to_s_full(var14, 11l, 11l);
var13 = var15;
varonce = var13;
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Warning: superfluous parentheses.";
var19 = core__abstract_text___CString___to_s_full(var18, 33l, 33l);
var17 = var19;
varonce16 = var17;
}
{
nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___warning(var_v, self, var13, var17); /* Direct call simple_misc_analysis#SimpleMiscVisitor#warning on <var_v:SimpleMiscVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#AExpr#warn_parentheses for (self: AExpr, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___AExpr___warn_parentheses(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method simple_misc_analysis#AParExpr#warn_parentheses for (self: AParExpr, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___AParExpr___AExpr__warn_parentheses(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "parentheses";
var2 = core__abstract_text___CString___to_s_full(var1, 11l, 11l);
var = var2;
varonce = var;
}
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "Warning: superfluous parentheses.";
var6 = core__abstract_text___CString___to_s_full(var5, 33l, 33l);
var4 = var6;
varonce3 = var4;
}
{
nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___warning(var_v, self, var, var4); /* Direct call simple_misc_analysis#SimpleMiscVisitor#warning on <var_v:SimpleMiscVisitor>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AParExprs#after_simple_misc for (self: AParExprs, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___AParExprs___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AParExprs> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AParExprs> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var);
}
if (var3){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "parentheses";
var6 = core__abstract_text___CString___to_s_full(var5, 11l, 11l);
var4 = var6;
varonce = var4;
}
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Warning: superfluous parentheses.";
var10 = core__abstract_text___CString___to_s_full(var9, 33l, 33l);
var8 = var10;
varonce7 = var8;
}
{
nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___warning(var_v, self, var4, var8); /* Direct call simple_misc_analysis#SimpleMiscVisitor#warning on <var_v:SimpleMiscVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#AReturnExpr#after_simple_misc for (self: AReturnExpr, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___AReturnExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_e /* var e: nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AEscapeExpr#n_expr (self) on <self:AReturnExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_e = var;
if (var_e == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_e,((val*)NULL)) on <var_e:nullable AExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_e, var_other); /* == on <var_e:nullable AExpr(AExpr)>*/
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
((void(*)(val* self, val* p0))(var_e->class->vft[COLOR_nitc__simple_misc_analysis__AExpr__warn_parentheses]))(var_e, var_v); /* warn_parentheses on <var_e:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#AEscapeExpr#after_simple_misc for (self: AEscapeExpr, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___AEscapeExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_e /* var e: nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AEscapeExpr#n_expr (self) on <self:AEscapeExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AEscapeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_e = var;
if (var_e == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_e,((val*)NULL)) on <var_e:nullable AExpr> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_e, var_other); /* == on <var_e:nullable AExpr(AExpr)>*/
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
((void(*)(val* self, val* p0))(var_e->class->vft[COLOR_nitc__simple_misc_analysis__AExpr__warn_parentheses]))(var_e, var_v); /* warn_parentheses on <var_e:nullable AExpr(AExpr)>*/
}
} else {
}
RET_LABEL:;
}
/* method simple_misc_analysis#AWhileExpr#after_simple_misc for (self: AWhileExpr, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___AWhileExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
short int var3 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : AExpr */;
val* var13 /* : AExpr */;
val* var14 /* : nullable AExpr */;
val* var16 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1971);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:AExpr> isa ATrueExpr */
cltype = type_nitc__ATrueExpr.color;
idtype = type_nitc__ATrueExpr.id;
if(cltype >= var->type->table_size) {
var3 = 0;
} else {
var3 = var->type->type_table[cltype] == idtype;
}
if (var3){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "loop";
var6 = core__abstract_text___CString___to_s_full(var5, 4l, 4l);
var4 = var6;
varonce = var4;
}
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Warning: use `loop` instead of `while true do`.";
var10 = core__abstract_text___CString___to_s_full(var9, 47l, 47l);
var8 = var10;
varonce7 = var8;
}
{
nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___warning(var_v, self, var4, var8); /* Direct call simple_misc_analysis#SimpleMiscVisitor#warning on <var_v:SimpleMiscVisitor>*/
}
} else {
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var13 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1971);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_nitc__simple_misc_analysis__AExpr__warn_parentheses]))(var11, var_v); /* warn_parentheses on <var11:AExpr>*/
}
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var16 = self->attrs[COLOR_nitc__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___check_do_expr(var_v, var14); /* Direct call simple_misc_analysis#SimpleMiscVisitor#check_do_expr on <var_v:SimpleMiscVisitor>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#ADoExpr#after_simple_misc for (self: ADoExpr, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___ADoExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___check_do_expr(var_v, var); /* Direct call simple_misc_analysis#SimpleMiscVisitor#check_do_expr on <var_v:SimpleMiscVisitor>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#ALoopExpr#after_simple_misc for (self: ALoopExpr, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___ALoopExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___check_do_expr(var_v, var); /* Direct call simple_misc_analysis#SimpleMiscVisitor#check_do_expr on <var_v:SimpleMiscVisitor>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AForExpr#after_simple_misc for (self: AForExpr, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___AForExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AForExpr#n_block (self) on <self:AForExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AForExpr___n_block].val; /* _n_block on <self:AForExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___check_do_expr(var_v, var); /* Direct call simple_misc_analysis#SimpleMiscVisitor#check_do_expr on <var_v:SimpleMiscVisitor>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AForGroup#after_simple_misc for (self: AForGroup, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___AForGroup___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AForGroup#n_expr (self) on <self:AForGroup> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AForGroup___n_expr].val; /* _n_expr on <self:AForGroup> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2024);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__simple_misc_analysis__AExpr__warn_parentheses]))(var, var_v); /* warn_parentheses on <var:AExpr>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AWithExpr#after_simple_misc for (self: AWithExpr, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___AWithExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AWithExpr#n_block (self) on <self:AWithExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AWithExpr___n_block].val; /* _n_block on <self:AWithExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___check_do_expr(var_v, var); /* Direct call simple_misc_analysis#SimpleMiscVisitor#check_do_expr on <var_v:SimpleMiscVisitor>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AIfExpr#after_simple_misc for (self: AIfExpr, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___AIfExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
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
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__simple_misc_analysis__AExpr__warn_parentheses]))(var, var_v); /* warn_parentheses on <var:AExpr>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AIfexprExpr#after_simple_misc for (self: AIfexprExpr, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___AIfexprExpr___ANode__after_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfexprExpr#n_expr (self) on <self:AIfexprExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1947);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__simple_misc_analysis__AExpr__warn_parentheses]))(var, var_v); /* warn_parentheses on <var:AExpr>*/
}
RET_LABEL:;
}
/* method simple_misc_analysis#AOnceExpr#accept_simple_misc for (self: AOnceExpr, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___AOnceExpr___ANode__accept_simple_misc(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
long var /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
var_v = p0;
{
{ /* Inline simple_misc_analysis#SimpleMiscVisitor#once_count (var_v) on <var_v:SimpleMiscVisitor> */
var2 = var_v->attrs[COLOR_nitc__simple_misc_analysis__SimpleMiscVisitor___once_count].l; /* _once_count on <var_v:SimpleMiscVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var6 = var > 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "nested-once";
var9 = core__abstract_text___CString___to_s_full(var8, 11l, 11l);
var7 = var9;
varonce = var7;
}
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Warning: useless once in a once expression.";
var13 = core__abstract_text___CString___to_s_full(var12, 43l, 43l);
var11 = var13;
varonce10 = var11;
}
{
nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___warning(var_v, self, var7, var11); /* Direct call simple_misc_analysis#SimpleMiscVisitor#warning on <var_v:SimpleMiscVisitor>*/
}
} else {
}
{
{ /* Inline simple_misc_analysis#SimpleMiscVisitor#once_count (var_v) on <var_v:SimpleMiscVisitor> */
var16 = var_v->attrs[COLOR_nitc__simple_misc_analysis__SimpleMiscVisitor___once_count].l; /* _once_count on <var_v:SimpleMiscVisitor> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = var14 + 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline simple_misc_analysis#SimpleMiscVisitor#once_count= (var_v,var17) on <var_v:SimpleMiscVisitor> */
var_v->attrs[COLOR_nitc__simple_misc_analysis__SimpleMiscVisitor___once_count].l = var17; /* _once_count on <var_v:SimpleMiscVisitor> */
RET_LABEL24:(void)0;
}
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__simple_misc_analysis___AOnceExpr___ANode__accept_simple_misc]))(self, p0); /* accept_simple_misc on <self:AOnceExpr>*/
}
{
{ /* Inline simple_misc_analysis#SimpleMiscVisitor#once_count (var_v) on <var_v:SimpleMiscVisitor> */
var27 = var_v->attrs[COLOR_nitc__simple_misc_analysis__SimpleMiscVisitor___once_count].l; /* _once_count on <var_v:SimpleMiscVisitor> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var25,1l) on <var25:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var34 = var25 - 1l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline simple_misc_analysis#SimpleMiscVisitor#once_count= (var_v,var28) on <var_v:SimpleMiscVisitor> */
var_v->attrs[COLOR_nitc__simple_misc_analysis__SimpleMiscVisitor___once_count].l = var28; /* _once_count on <var_v:SimpleMiscVisitor> */
RET_LABEL35:(void)0;
}
}
RET_LABEL:;
}
/* method simple_misc_analysis#TSemi#accept_simple_misc_token for (self: TSemi, SimpleMiscVisitor) */
void nitc__simple_misc_analysis___TSemi___Token__accept_simple_misc_token(val* self, val* p0) {
val* var_v /* var v: SimpleMiscVisitor */;
val* var /* : nullable Token */;
val* var2 /* : nullable Token */;
val* var_n /* var n: nullable Token */;
val* var3 /* : nullable Token */;
val* var5 /* : nullable Token */;
val* var_p /* var p: nullable Token */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
short int var20 /* : Bool */;
int cltype;
int idtype;
short int var_21 /* var : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
short int var_25 /* var : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
short int var_29 /* var : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
short int var_40 /* var : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
short int var_44 /* var : Bool */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
short int var_48 /* var : Bool */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
static val* varonce;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#Token#next_token (self) on <self:TSemi> */
var2 = self->attrs[COLOR_nitc__parser_nodes__Token___next_token].val; /* _next_token on <self:TSemi> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_n = var;
{
{ /* Inline parser_nodes#Token#prev_token (self) on <self:TSemi> */
var5 = self->attrs[COLOR_nitc__parser_nodes__Token___prev_token].val; /* _prev_token on <self:TSemi> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_p = var3;
if (var_n == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_n,((val*)NULL)) on <var_n:nullable Token> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_n,var_other) on <var_n:nullable Token(Token)> */
var19 = var_n == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
var_ = var14;
if (var14){
var13 = var_;
} else {
/* <var_n:nullable Token(Token)> isa TEol */
cltype = type_nitc__TEol.color;
idtype = type_nitc__TEol.id;
if(cltype >= var_n->type->table_size) {
var20 = 0;
} else {
var20 = var_n->type->type_table[cltype] == idtype;
}
var13 = var20;
}
var_21 = var13;
if (var13){
var12 = var_21;
} else {
/* <var_n:nullable Token(Token)> isa EOF */
cltype23 = type_nitc__EOF.color;
idtype24 = type_nitc__EOF.id;
if(cltype23 >= var_n->type->table_size) {
var22 = 0;
} else {
var22 = var_n->type->type_table[cltype23] == idtype24;
}
var12 = var22;
}
var_25 = var12;
if (var12){
var11 = var_25;
} else {
/* <var_n:nullable Token(Token)> isa TComment */
cltype27 = type_nitc__TComment.color;
idtype28 = type_nitc__TComment.id;
if(cltype27 >= var_n->type->table_size) {
var26 = 0;
} else {
var26 = var_n->type->type_table[cltype27] == idtype28;
}
var11 = var26;
}
var_29 = var11;
if (var11){
var10 = var_29;
} else {
if (var_p == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_p,((val*)NULL)) on <var_p:nullable Token> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_p,var_other) on <var_p:nullable Token(Token)> */
var35 = var_p == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
var10 = var30;
}
var_36 = var10;
if (var10){
var9 = var_36;
} else {
/* <var_p:nullable Token(Token)> isa TEol */
cltype38 = type_nitc__TEol.color;
idtype39 = type_nitc__TEol.id;
if(cltype38 >= var_p->type->table_size) {
var37 = 0;
} else {
var37 = var_p->type->type_table[cltype38] == idtype39;
}
var9 = var37;
}
var_40 = var9;
if (var9){
var8 = var_40;
} else {
/* <var_p:nullable Token(Token)> isa EOF */
cltype42 = type_nitc__EOF.color;
idtype43 = type_nitc__EOF.id;
if(cltype42 >= var_p->type->table_size) {
var41 = 0;
} else {
var41 = var_p->type->type_table[cltype42] == idtype43;
}
var8 = var41;
}
var_44 = var8;
if (var8){
var7 = var_44;
} else {
/* <var_p:nullable Token(Token)> isa TComment */
cltype46 = type_nitc__TComment.color;
idtype47 = type_nitc__TComment.id;
if(cltype46 >= var_p->type->table_size) {
var45 = 0;
} else {
var45 = var_p->type->type_table[cltype46] == idtype47;
}
var7 = var45;
}
var_48 = var7;
if (var7){
var6 = var_48;
} else {
/* <var_p:nullable Token(Token)> isa TSemi */
cltype50 = type_nitc__TSemi.color;
idtype51 = type_nitc__TSemi.id;
if(cltype50 >= var_p->type->table_size) {
var49 = 0;
} else {
var49 = var_p->type->type_table[cltype50] == idtype51;
}
var6 = var49;
}
if (var6){
if (likely(varonce!=NULL)) {
var52 = varonce;
} else {
var53 = "semi";
var54 = core__abstract_text___CString___to_s_full(var53, 4l, 4l);
var52 = var54;
varonce = var52;
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "Warning: superfluous `;`.";
var58 = core__abstract_text___CString___to_s_full(var57, 25l, 25l);
var56 = var58;
varonce55 = var56;
}
{
nitc__simple_misc_analysis___nitc__simple_misc_analysis__SimpleMiscVisitor___warning(var_v, self, var52, var56); /* Direct call simple_misc_analysis#SimpleMiscVisitor#warning on <var_v:SimpleMiscVisitor>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
