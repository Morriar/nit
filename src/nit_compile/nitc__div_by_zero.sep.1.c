#include "nitc__div_by_zero.sep.0.h"
/* method div_by_zero#DivByZeroPhase#process_nmodule for (self: DivByZeroPhase, AModule) */
void nitc__div_by_zero___nitc__div_by_zero__DivByZeroPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : DivByZeroVisitor */;
val* var10 /* : ToolContext */;
val* var12 /* : ToolContext */;
val* var_visitor /* var visitor: DivByZeroVisitor */;
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
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var8 = var_mmodule == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
var9 = NEW_nitc__div_by_zero__DivByZeroVisitor(&type_nitc__div_by_zero__DivByZeroVisitor);
{
{ /* Inline phase#Phase#toolcontext (self) on <self:DivByZeroPhase> */
var12 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:DivByZeroPhase> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__div_by_zero__DivByZeroVisitor__toolcontext_61d]))(var9, var10); /* toolcontext= on <var9:DivByZeroVisitor>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__div_by_zero__DivByZeroVisitor__mmodule_61d]))(var9, var_mmodule); /* mmodule= on <var9:DivByZeroVisitor>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:DivByZeroVisitor>*/
}
var_visitor = var9;
{
nitc___nitc__Visitor___enter_visit(var_visitor, var_nmodule); /* Direct call parser_nodes#Visitor#enter_visit on <var_visitor:DivByZeroVisitor>*/
}
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#toolcontext for (self: DivByZeroVisitor): ToolContext */
val* nitc__div_by_zero___nitc__div_by_zero__DivByZeroVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__div_by_zero__DivByZeroVisitor___toolcontext].val; /* _toolcontext on <self:DivByZeroVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__div_by_zero, 53);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method div_by_zero#DivByZeroVisitor#toolcontext= for (self: DivByZeroVisitor, ToolContext) */
void nitc__div_by_zero___nitc__div_by_zero__DivByZeroVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__div_by_zero__DivByZeroVisitor___toolcontext].val = p0; /* _toolcontext on <self:DivByZeroVisitor> */
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#mmodule for (self: DivByZeroVisitor): MModule */
val* nitc__div_by_zero___nitc__div_by_zero__DivByZeroVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__div_by_zero__DivByZeroVisitor___mmodule].val; /* _mmodule on <self:DivByZeroVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__div_by_zero, 56);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method div_by_zero#DivByZeroVisitor#mmodule= for (self: DivByZeroVisitor, MModule) */
void nitc__div_by_zero___nitc__div_by_zero__DivByZeroVisitor___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__div_by_zero__DivByZeroVisitor___mmodule].val = p0; /* _mmodule on <self:DivByZeroVisitor> */
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#visit for (self: DivByZeroVisitor, ANode) */
void nitc__div_by_zero___nitc__div_by_zero__DivByZeroVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_node /* var node: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : AExpr */;
val* var4 /* : AExpr */;
val* var_op2 /* var op2: AExpr */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
val* var9 /* : nullable Numeric */;
val* var11 /* : nullable Numeric */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
short int var14 /* : Bool */;
val* var15 /* : AExpr */;
val* var17 /* : AExpr */;
val* var_op1 /* var op1: AExpr */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : MClass */;
val* var25 /* : MClassType */;
val* var27 /* : MClassType */;
val* var_int_type /* var int_type: MClassType */;
val* var28 /* : nullable MType */;
val* var29 /* : MModule */;
val* var31 /* : MModule */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : ToolContext */;
val* var36 /* : ToolContext */;
val* var37 /* : Location */;
val* var39 /* : Location */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Message */;
var_node = p0;
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_node, self); /* visit_all on <var_node:ANode>*/
}
/* <var_node:ANode> isa ASlashExpr */
cltype = type_nitc__ASlashExpr.color;
idtype = type_nitc__ASlashExpr.id;
if(cltype >= var_node->type->table_size) {
var = 0;
} else {
var = var_node->type->type_table[cltype] == idtype;
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ABinopExpr#n_expr2 (var_node) on <var_node:ANode(ASlashExpr)> */
var4 = var_node->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <var_node:ANode(ASlashExpr)> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2114);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_op2 = var2;
/* <var_op2:AExpr> isa AIntegerExpr */
cltype6 = type_nitc__AIntegerExpr.color;
idtype7 = type_nitc__AIntegerExpr.id;
if(cltype6 >= var_op2->type->table_size) {
var5 = 0;
} else {
var5 = var_op2->type->type_table[cltype6] == idtype7;
}
var8 = !var5;
if (var8){
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AIntegerExpr#value (var_op2) on <var_op2:AExpr(AIntegerExpr)> */
var11 = var_op2->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_op2:AExpr(AIntegerExpr)> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
var12 = 1; /* <0l:Int> cannot be null */
} else {
var13 = (val*)(0l<<2|1);
var14 = ((short int(*)(val* self, val* p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var9, var13); /* != on <var9:nullable Numeric>*/
var12 = var14;
}
if (var12){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (var_node) on <var_node:ANode(ASlashExpr)> */
var17 = var_node->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <var_node:ANode(ASlashExpr)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_op1 = var15;
{
{ /* Inline div_by_zero#DivByZeroVisitor#mmodule (self) on <self:DivByZeroVisitor> */
var20 = self->attrs[COLOR_nitc__div_by_zero__DivByZeroVisitor___mmodule].val; /* _mmodule on <self:DivByZeroVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__div_by_zero, 56);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = "Int";
var23 = core__abstract_text___CString___to_s_full(var22, 3l, 3l);
var21 = var23;
varonce = var21;
}
{
var24 = nitc__model___MModule___get_primitive_class(var18, var21);
}
{
{ /* Inline model#MClass#mclass_type (var24) on <var24:MClass> */
var27 = var24->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var24:MClass> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_int_type = var25;
{
var28 = ((val*(*)(val* self))(var_op1->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_op1); /* mtype on <var_op1:AExpr>*/
}
{
{ /* Inline div_by_zero#DivByZeroVisitor#mmodule (self) on <self:DivByZeroVisitor> */
var31 = self->attrs[COLOR_nitc__div_by_zero__DivByZeroVisitor___mmodule].val; /* _mmodule on <self:DivByZeroVisitor> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__div_by_zero, 56);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var28 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__div_by_zero, 80);
fatal_exit(1);
} else {
var32 = nitc___nitc__MType___is_subtype(var28, var29, ((val*)NULL), var_int_type);
}
var33 = !var32;
if (var33){
goto RET_LABEL;
} else {
}
{
{ /* Inline div_by_zero#DivByZeroVisitor#toolcontext (self) on <self:DivByZeroVisitor> */
var36 = self->attrs[COLOR_nitc__div_by_zero__DivByZeroVisitor___toolcontext].val; /* _toolcontext on <self:DivByZeroVisitor> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__div_by_zero, 53);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_node) on <var_node:ANode(ASlashExpr)> */
var39 = var_node->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_node:ANode(ASlashExpr)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "div-by-zero";
var43 = core__abstract_text___CString___to_s_full(var42, 11l, 11l);
var41 = var43;
varonce40 = var41;
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Warning: division by zero.";
var47 = core__abstract_text___CString___to_s_full(var46, 26l, 26l);
var45 = var47;
varonce44 = var45;
}
{
var48 = nitc___nitc__ToolContext___warning(var34, var37, var41, var45);
}
RET_LABEL:;
}
/* method div_by_zero#DivByZeroVisitor#init for (self: DivByZeroVisitor) */
void nitc__div_by_zero___nitc__div_by_zero__DivByZeroVisitor___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__div_by_zero___nitc__div_by_zero__DivByZeroVisitor___core__kernel__Object__init]))(self); /* init on <self:DivByZeroVisitor>*/
}
RET_LABEL:;
}
