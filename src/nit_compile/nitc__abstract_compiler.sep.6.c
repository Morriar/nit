#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler#ASendReassignFormExpr#stmt for (self: ASendReassignFormExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ASendReassignFormExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : nullable CallSite */;
val* var6 /* : nullable CallSite */;
val* var_callsite /* var callsite: CallSite */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MMethodDef */;
val* var12 /* : MMethodDef */;
val* var13 /* : nullable SignatureMap */;
val* var15 /* : nullable SignatureMap */;
val* var16 /* : Array[AExpr] */;
val* var17 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var18 /* : AExpr */;
val* var20 /* : AExpr */;
val* var21 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var22 /* : nullable RuntimeVariable */;
val* var_left /* var left: nullable RuntimeVariable */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : nullable CallSite */;
val* var30 /* : nullable CallSite */;
val* var31 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var32 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : nullable CallSite */;
val* var40 /* : nullable CallSite */;
val* var41 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:ASendReassignFormExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:ASendReassignFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var, ((val*)NULL));
}
var_recv = var3;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendReassignFormExpr> */
var6 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3929);
fatal_exit(1);
}
var_callsite = var4;
{
{ /* Inline model_base#MEntity#is_broken (var_callsite) on <var_callsite:CallSite> */
var9 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:CallSite> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var12 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#CallSite#signaturemap (var_callsite) on <var_callsite:CallSite> */
var15 = var_callsite->attrs[COLOR_nitc__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:CallSite> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__typing___ASendExpr___raw_arguments(self);
}
{
var17 = nitc___nitc__AbstractCompilerVisitor___varargize(var_v, var10, var13, var_recv, var16);
}
var_args = var17;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:ASendReassignFormExpr> */
var20 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:ASendReassignFormExpr> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2084);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var18, ((val*)NULL));
}
var_value = var21;
{
var22 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_left = var22;
if (var_left == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_left,((val*)NULL)) on <var_left:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var26 = ((short int(*)(val* self, val* p0))(var_left->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_left, var_other); /* == on <var_left:nullable RuntimeVariable(RuntimeVariable)>*/
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3936);
fatal_exit(1);
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var30 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3938);
fatal_exit(1);
}
var31 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var31, 2l); /* Direct call array#Array#with_capacity on <var31:Array[RuntimeVariable]>*/
}
var_ = var31;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_left); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var32 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var28, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var32;
if (var_res == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var36 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var37 = !var36;
var34 = var37;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (unlikely(!var33)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3939);
fatal_exit(1);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var_res); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var40 = self->attrs[COLOR_nitc__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3942);
fatal_exit(1);
}
{
var41 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var38, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#ASuperExpr#expr for (self: ASuperExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ASuperExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable StaticFrame */;
val* var3 /* : nullable StaticFrame */;
val* var_frame /* var frame: StaticFrame */;
val* var4 /* : Array[RuntimeVariable] */;
val* var6 /* : Array[RuntimeVariable] */;
val* var7 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var8 /* : nullable CallSite */;
val* var10 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : AExprs */;
val* var21 /* : AExprs */;
val* var22 /* : ANodes[AExpr] */;
val* var24 /* : ANodes[AExpr] */;
short int var25 /* : Bool */;
val* var26 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var_args /* var args: nullable Object */;
long var_i /* var i: Int */;
val* var27 /* : MSignature */;
val* var29 /* : MSignature */;
long var30 /* : Int */;
long var_31 /* var : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var35 /* : Bool */;
val* var36 /* : Array[RuntimeVariable] */;
val* var38 /* : Array[RuntimeVariable] */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
val* var46 /* : nullable Object */;
long var47 /* : Int */;
val* var48 /* : MMethodDef */;
val* var50 /* : MMethodDef */;
val* var51 /* : nullable SignatureMap */;
val* var53 /* : nullable SignatureMap */;
val* var54 /* : AExprs */;
val* var56 /* : AExprs */;
val* var57 /* : ANodes[AExpr] */;
val* var59 /* : ANodes[AExpr] */;
val* var60 /* : Array[RuntimeVariable] */;
val* var61 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
val* var62 /* : nullable MMethodDef */;
val* var64 /* : nullable MMethodDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var65 /* : AExprs */;
val* var67 /* : AExprs */;
val* var68 /* : ANodes[AExpr] */;
val* var70 /* : ANodes[AExpr] */;
short int var71 /* : Bool */;
val* var72 /* : Array[RuntimeVariable] */;
val* var74 /* : Array[RuntimeVariable] */;
val* var_args75 /* var args: nullable Object */;
val* var76 /* : nullable SignatureMap */;
val* var78 /* : nullable SignatureMap */;
val* var79 /* : AExprs */;
val* var81 /* : AExprs */;
val* var82 /* : ANodes[AExpr] */;
val* var84 /* : ANodes[AExpr] */;
val* var85 /* : Array[RuntimeVariable] */;
val* var86 /* : MType */;
val* var88 /* : MType */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
val* var93 /* : nullable RuntimeVariable */;
var_v = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3949);
fatal_exit(1);
}
var_frame = var1;
{
{ /* Inline abstract_compiler#StaticFrame#arguments (var_frame) on <var_frame:StaticFrame> */
var6 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var_frame:StaticFrame> */
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
var_recv = var7;
{
{ /* Inline typing#ASuperExpr#callsite (self) on <self:ASuperExpr> */
var10 = self->attrs[COLOR_nitc__typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_callsite = var8;
if (var_callsite == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_callsite, var_other); /* == on <var_callsite:nullable CallSite(CallSite)>*/
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
{ /* Inline model_base#MEntity#is_broken (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var18 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:nullable CallSite(CallSite)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var21 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2429);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var19) on <var19:AExprs> */
var24 = var19->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var19:AExprs> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var22);
}
if (var25){
var26 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var26, 1l); /* Direct call array#Array#with_capacity on <var26:Array[RuntimeVariable]>*/
}
var_ = var26;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
var_i = 0l;
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var29 = var_callsite->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc___nitc__MSignature___arity(var27);
}
var_31 = var30;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_31) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_31:Int> isa OTHER */
/* <var_31:Int> isa OTHER */
var34 = 1; /* easy <var_31:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var35 = var_i < var_31;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
} else {
goto BREAK_label;
}
{
{ /* Inline abstract_compiler#StaticFrame#arguments (var_frame) on <var_frame:StaticFrame> */
var38 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var_frame:StaticFrame> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2020);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var41 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var45 = var_i + 1l;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
var46 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var36, var39);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var46); /* Direct call array#Array#add on <var_args:nullable Object(Array[RuntimeVariable])>*/
}
{
var47 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var47;
}
BREAK_label: (void)0;
} else {
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var50 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline typing#CallSite#signaturemap (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var53 = var_callsite->attrs[COLOR_nitc__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:nullable CallSite(CallSite)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var56 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2429);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var54) on <var54:AExprs> */
var59 = var54->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var54:AExprs> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = nitc___nitc__AbstractCompilerVisitor___varargize(var_v, var48, var51, var_recv, var57);
}
var_args = var60;
}
{
var61 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var61;
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ASuperExpr#mpropdef (self) on <self:ASuperExpr> */
var64 = self->attrs[COLOR_nitc__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3972);
fatal_exit(1);
}
var_mpropdef = var62;
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var67 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2429);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var65) on <var65:AExprs> */
var70 = var65->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var65:AExprs> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var68);
}
if (var71){
{
{ /* Inline abstract_compiler#StaticFrame#arguments (var_frame) on <var_frame:StaticFrame> */
var74 = var_frame->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <var_frame:StaticFrame> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2020);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_args75 = var72;
} else {
{
{ /* Inline typing#ASuperExpr#signaturemap (self) on <self:ASuperExpr> */
var78 = self->attrs[COLOR_nitc__typing__ASuperExpr___signaturemap].val; /* _signaturemap on <self:ASuperExpr> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline parser_nodes#ASuperExpr#n_args (self) on <self:ASuperExpr> */
var81 = self->attrs[COLOR_nitc__parser_nodes__ASuperExpr___n_args].val; /* _n_args on <self:ASuperExpr> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2429);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var79) on <var79:AExprs> */
var84 = var79->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var79:AExprs> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = nitc___nitc__AbstractCompilerVisitor___varargize(var_v, var_mpropdef, var76, var_recv, var82);
}
var_args75 = var85;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var88 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
/* <var86:MType> isa MClassType */
cltype90 = type_nitc__MClassType.color;
idtype91 = type_nitc__MClassType.id;
if(cltype90 >= var86->type->table_size) {
var89 = 0;
} else {
var89 = var86->type->type_table[cltype90] == idtype91;
}
if (unlikely(!var89)) {
var_class_name92 = var86 == NULL ? "null" : var86->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3982);
fatal_exit(1);
}
{
var93 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__supercall]))(var_v, var_mpropdef, var86, var_args75); /* supercall on <var_v:AbstractCompilerVisitor>*/
}
var = var93;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ANewExpr#expr for (self: ANewExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ANewExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
val* var_mtype /* var mtype: nullable MClassType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClass */;
val* var11 /* : MClass */;
val* var12 /* : String */;
val* var14 /* : String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
short int var18 /* : Bool */;
val* var19 /* : AExprs */;
val* var21 /* : AExprs */;
val* var22 /* : ANodes[AExpr] */;
val* var24 /* : ANodes[AExpr] */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : AExprs */;
val* var31 /* : AExprs */;
val* var32 /* : ANodes[AExpr] */;
val* var34 /* : ANodes[AExpr] */;
val* var35 /* : nullable Object */;
val* var36 /* : RuntimeVariable */;
val* var_l /* var l: RuntimeVariable */;
short int var37 /* : Bool */;
int cltype;
int idtype;
val* var38 /* : Array[MType] */;
val* var40 /* : Array[MType] */;
val* var41 /* : nullable Object */;
val* var_elttype /* var elttype: MType */;
val* var42 /* : RuntimeVariable */;
val* var43 /* : nullable CallSite */;
val* var45 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var_other49 /* var other: nullable Object */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : RuntimeVariable */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : MMethod */;
val* var60 /* : MMethod */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var_ /* var : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var_name /* var name: String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : Text */;
val* var76 /* : String */;
val* var_guard /* var guard: String */;
val* var78 /* : NativeArray[String] */;
static val* varonce77;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var94 /* : NativeArray[String] */;
static val* varonce93;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : String */;
val* var104 /* : RuntimeVariable */;
val* var_recv /* var recv: nullable Object */;
val* var106 /* : NativeArray[String] */;
static val* varonce105;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : String */;
val* var117 /* : NativeArray[String] */;
static val* varonce116;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
val* var126 /* : String */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
val* var132 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var134 /* : NativeArray[String] */;
static val* varonce133;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
val* var143 /* : String */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var147 /* : NativeArray[String] */;
static val* varonce146;
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
val* var159 /* : NativeArray[String] */;
static val* varonce158;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : CString */;
val* var163 /* : String */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : CString */;
val* var168 /* : String */;
val* var169 /* : RuntimeVariable */;
val* var170 /* : MMethodDef */;
val* var172 /* : MMethodDef */;
val* var173 /* : nullable SignatureMap */;
val* var175 /* : nullable SignatureMap */;
val* var176 /* : AExprs */;
val* var178 /* : AExprs */;
val* var179 /* : ANodes[AExpr] */;
val* var181 /* : ANodes[AExpr] */;
val* var182 /* : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var183 /* : nullable RuntimeVariable */;
val* var_res2 /* var res2: nullable RuntimeVariable */;
short int var184 /* : Bool */;
short int var185 /* : Bool */;
short int var187 /* : Bool */;
short int var188 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#ANewExpr#recvtype (self) on <self:ANewExpr> */
var3 = self->attrs[COLOR_nitc__typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
if (var_mtype == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MClassType> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MClassType(MClassType)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3990);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MClassType(MClassType)> */
var11 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MClassType(MClassType)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClass#name (var9) on <var9:MClass> */
var14 = var9->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var9:MClass> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "NativeArray";
var17 = core__abstract_text___CString___to_s_full(var16, 11l, 11l);
var15 = var17;
varonce = var15;
}
{
var18 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_core__kernel__Object___61d_61d]))(var12, var15); /* == on <var12:String>*/
}
if (var18){
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var21 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2346);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var19) on <var19:AExprs> */
var24 = var19->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var19:AExprs> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var22);
}
{
{ /* Inline kernel#Int#== (var25,1l) on <var25:Int> */
var28 = var25 == 1l;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (unlikely(!var26)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3993);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var31 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2346);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var29) on <var29:AExprs> */
var34 = var29->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var29:AExprs> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = core___core__SequenceRead___Collection__first(var32);
}
{
var36 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var35, ((val*)NULL));
}
var_l = var36;
/* <var_mtype:nullable MClassType(MClassType)> isa MGenericType */
cltype = type_nitc__MGenericType.color;
idtype = type_nitc__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var37 = 0;
} else {
var37 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var37)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3995);
fatal_exit(1);
}
{
{ /* Inline model#MGenericType#arguments (var_mtype) on <var_mtype:nullable MClassType(MGenericType)> */
var40 = var_mtype->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <var_mtype:nullable MClassType(MGenericType)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = core___core__SequenceRead___Collection__first(var38);
}
var_elttype = var41;
{
var42 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_instance]))(var_v, var_elttype, var_l); /* native_array_instance on <var_v:AbstractCompilerVisitor>*/
}
var = var42;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ANewExpr#callsite (self) on <self:ANewExpr> */
var45 = self->attrs[COLOR_nitc__typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_callsite = var43;
if (var_callsite == NULL) {
var46 = 1; /* is null */
} else {
var46 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other49 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other49) on <var_callsite:nullable CallSite(CallSite)> */
var52 = var_callsite == var_other49;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
{
var53 = nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(var_v, var_mtype);
}
var = var53;
goto RET_LABEL;
} else {
}
{
{ /* Inline model_base#MEntity#is_broken (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var56 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:nullable CallSite(CallSite)> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (var54){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var60 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var58) on <var58:MMethod> */
var63 = var58->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var58:MMethod> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_ = var61;
if (var61){
{
var64 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:nullable MClassType(MClassType)>*/
}
var65 = !var64;
var57 = var65;
} else {
var57 = var_;
}
if (var57){
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "varoncenew";
var69 = core__abstract_text___CString___to_s_full(var68, 10l, 10l);
var67 = var69;
varonce66 = var67;
}
{
var70 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var67);
}
var_name = var70;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "_guard";
var74 = core__abstract_text___CString___to_s_full(var73, 6l, 6l);
var72 = var74;
varonce71 = var72;
}
{
var75 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__abstract_text__Text___43d]))(var_name, var72); /* + on <var_name:String>*/
}
{
var76 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var75);
}
var_guard = var76;
if (unlikely(varonce77==NULL)) {
var78 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "static ";
var82 = core__abstract_text___CString___to_s_full(var81, 7l, 7l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var78)->values[0]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = " ";
var86 = core__abstract_text___CString___to_s_full(var85, 1l, 1l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var78)->values[2]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = ";";
var90 = core__abstract_text___CString___to_s_full(var89, 1l, 1l);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var78)->values[4]=var88;
} else {
var78 = varonce77;
varonce77 = NULL;
}
{
var91 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var78)->values[1]=var91;
((struct instance_core__NativeArray*)var78)->values[3]=var_name;
{
var92 = ((val*(*)(val* self))(var78->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var78); /* native_to_s on <var78:NativeArray[String]>*/
}
varonce77 = var78;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var92); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce93==NULL)) {
var94 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "static int ";
var98 = core__abstract_text___CString___to_s_full(var97, 11l, 11l);
var96 = var98;
varonce95 = var96;
}
((struct instance_core__NativeArray*)var94)->values[0]=var96;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = ";";
var102 = core__abstract_text___CString___to_s_full(var101, 1l, 1l);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var94)->values[2]=var100;
} else {
var94 = varonce93;
varonce93 = NULL;
}
((struct instance_core__NativeArray*)var94)->values[1]=var_guard;
{
var103 = ((val*(*)(val* self))(var94->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var94); /* native_to_s on <var94:NativeArray[String]>*/
}
varonce93 = var94;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var103); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var104 = nitc___nitc__AbstractCompilerVisitor___new_var(var_v, var_mtype);
}
var_recv = var104;
if (unlikely(varonce105==NULL)) {
var106 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "if (likely(";
var110 = core__abstract_text___CString___to_s_full(var109, 11l, 11l);
var108 = var110;
varonce107 = var108;
}
((struct instance_core__NativeArray*)var106)->values[0]=var108;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = ")) {";
var114 = core__abstract_text___CString___to_s_full(var113, 4l, 4l);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var106)->values[2]=var112;
} else {
var106 = varonce105;
varonce105 = NULL;
}
((struct instance_core__NativeArray*)var106)->values[1]=var_guard;
{
var115 = ((val*(*)(val* self))(var106->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var106); /* native_to_s on <var106:NativeArray[String]>*/
}
varonce105 = var106;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var115); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce116==NULL)) {
var117 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = " = ";
var121 = core__abstract_text___CString___to_s_full(var120, 3l, 3l);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var117)->values[1]=var119;
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = ";";
var125 = core__abstract_text___CString___to_s_full(var124, 1l, 1l);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var117)->values[3]=var123;
} else {
var117 = varonce116;
varonce116 = NULL;
}
{
var126 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var117)->values[0]=var126;
((struct instance_core__NativeArray*)var117)->values[2]=var_name;
{
var127 = ((val*(*)(val* self))(var117->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var117); /* native_to_s on <var117:NativeArray[String]>*/
}
varonce116 = var117;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var127); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
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
var132 = nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(var_v, var_mtype);
}
var_i = var132;
if (unlikely(varonce133==NULL)) {
var134 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = " = ";
var138 = core__abstract_text___CString___to_s_full(var137, 3l, 3l);
var136 = var138;
varonce135 = var136;
}
((struct instance_core__NativeArray*)var134)->values[1]=var136;
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = ";";
var142 = core__abstract_text___CString___to_s_full(var141, 1l, 1l);
var140 = var142;
varonce139 = var140;
}
((struct instance_core__NativeArray*)var134)->values[3]=var140;
} else {
var134 = varonce133;
varonce133 = NULL;
}
{
var143 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var134)->values[0]=var143;
{
var144 = ((val*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i); /* to_s on <var_i:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var134)->values[2]=var144;
{
var145 = ((val*(*)(val* self))(var134->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var134); /* native_to_s on <var134:NativeArray[String]>*/
}
varonce133 = var134;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var145); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce146==NULL)) {
var147 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = " = ";
var151 = core__abstract_text___CString___to_s_full(var150, 3l, 3l);
var149 = var151;
varonce148 = var149;
}
((struct instance_core__NativeArray*)var147)->values[1]=var149;
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = ";";
var155 = core__abstract_text___CString___to_s_full(var154, 1l, 1l);
var153 = var155;
varonce152 = var153;
}
((struct instance_core__NativeArray*)var147)->values[3]=var153;
} else {
var147 = varonce146;
varonce146 = NULL;
}
((struct instance_core__NativeArray*)var147)->values[0]=var_name;
{
var156 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var147)->values[2]=var156;
{
var157 = ((val*(*)(val* self))(var147->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var147); /* native_to_s on <var147:NativeArray[String]>*/
}
varonce146 = var147;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var157); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce158==NULL)) {
var159 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = " = 1;";
var163 = core__abstract_text___CString___to_s_full(var162, 5l, 5l);
var161 = var163;
varonce160 = var161;
}
((struct instance_core__NativeArray*)var159)->values[1]=var161;
} else {
var159 = varonce158;
varonce158 = NULL;
}
((struct instance_core__NativeArray*)var159)->values[0]=var_guard;
{
var164 = ((val*(*)(val* self))(var159->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var159); /* native_to_s on <var159:NativeArray[String]>*/
}
varonce158 = var159;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var164); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "}";
var168 = core__abstract_text___CString___to_s_full(var167, 1l, 1l);
var166 = var168;
varonce165 = var166;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var166); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
var169 = nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(var_v, var_mtype);
}
var_recv = var169;
}
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var172 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline typing#CallSite#signaturemap (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var175 = var_callsite->attrs[COLOR_nitc__typing__CallSite___signaturemap].val; /* _signaturemap on <var_callsite:nullable CallSite(CallSite)> */
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
{ /* Inline parser_nodes#ANewExpr#n_args (self) on <self:ANewExpr> */
var178 = self->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_args].val; /* _n_args on <self:ANewExpr> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2346);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var176) on <var176:AExprs> */
var181 = var176->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var176:AExprs> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
{
var182 = nitc___nitc__AbstractCompilerVisitor___varargize(var_v, var170, var173, var_recv, var179);
}
var_args = var182;
{
var183 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_callsite, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res2 = var183;
if (var_res2 == NULL) {
var184 = 0; /* is null */
} else {
var184 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res2,((val*)NULL)) on <var_res2:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var187 = ((short int(*)(val* self, val* p0))(var_res2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res2, var_other); /* == on <var_res2:nullable RuntimeVariable(RuntimeVariable)>*/
}
var188 = !var187;
var185 = var188;
goto RET_LABEL186;
RET_LABEL186:(void)0;
}
var184 = var185;
}
if (var184){
var = var_res2;
goto RET_LABEL;
} else {
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrExpr#expr for (self: AAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AAttrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var5 /* : nullable MAttribute */;
val* var7 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
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
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrExpr> */
var7 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4044);
fatal_exit(1);
}
var_mproperty = var5;
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute]))(var_v, var_mproperty, var_recv); /* read_attribute on <var_v:AbstractCompilerVisitor>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrAssignExpr#expr for (self: AAttrAssignExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AAttrAssignExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var5 /* : AExpr */;
val* var7 /* : AExpr */;
val* var8 /* : RuntimeVariable */;
val* var_i /* var i: RuntimeVariable */;
val* var9 /* : nullable MAttribute */;
val* var11 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrAssignExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrAssignExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
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
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AAttrAssignExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AAttrAssignExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2073);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var5, ((val*)NULL));
}
var_i = var8;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrAssignExpr> */
var11 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrAssignExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4054);
fatal_exit(1);
}
var_mproperty = var9;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var_mproperty, var_recv, var_i); /* write_attribute on <var_v:AbstractCompilerVisitor>*/
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AAttrReassignExpr#stmt for (self: AAttrReassignExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___AAttrReassignExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var8 /* : nullable MAttribute */;
val* var10 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var11 /* : RuntimeVariable */;
val* var_attr /* var attr: RuntimeVariable */;
val* var12 /* : nullable CallSite */;
val* var14 /* : nullable CallSite */;
val* var15 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var16 /* : nullable RuntimeVariable */;
val* var_res /* var res: nullable RuntimeVariable */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AAttrReassignExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var, ((val*)NULL));
}
var_recv = var3;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AAttrReassignExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AAttrReassignExpr> */
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
var7 = nitc___nitc__AbstractCompilerVisitor___expr(var_v, var4, ((val*)NULL));
}
var_value = var7;
{
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AAttrReassignExpr> */
var10 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrReassignExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4065);
fatal_exit(1);
}
var_mproperty = var8;
{
var11 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__read_attribute]))(var_v, var_mproperty, var_recv); /* read_attribute on <var_v:AbstractCompilerVisitor>*/
}
var_attr = var11;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AAttrReassignExpr> */
var14 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4067);
fatal_exit(1);
}
var15 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var15, 2l); /* Direct call array#Array#with_capacity on <var15:Array[RuntimeVariable]>*/
}
var_ = var15;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_attr); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_value); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var12, var_); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
var_res = var16;
if (var_res == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable RuntimeVariable(RuntimeVariable)>*/
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4068);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute]))(var_v, var_mproperty, var_recv, var_res); /* write_attribute on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AIssetAttrExpr#expr for (self: AIssetAttrExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AIssetAttrExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var5 /* : nullable MAttribute */;
val* var7 /* : nullable MAttribute */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var8 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AAttrFormExpr#n_expr (self) on <self:AIssetAttrExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAttrFormExpr___n_expr].val; /* _n_expr on <self:AIssetAttrExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2354);
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
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:AIssetAttrExpr> */
var7 = self->attrs[COLOR_nitc__typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AIssetAttrExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4077);
fatal_exit(1);
}
var_mproperty = var5;
{
var8 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__isset_attribute]))(var_v, var_mproperty, var_recv); /* isset_attribute on <var_v:AbstractCompilerVisitor>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AVarargExpr#expr for (self: AVarargExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___AVarargExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (self) on <self:AVarargExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <self:AVarargExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2711);
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
/* method abstract_compiler#ANamedargExpr#expr for (self: ANamedargExpr, AbstractCompilerVisitor): nullable RuntimeVariable */
val* nitc__abstract_compiler___ANamedargExpr___AExpr__expr(val* self, val* p0) {
val* var /* : nullable RuntimeVariable */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var1 /* : AExpr */;
val* var3 /* : AExpr */;
val* var4 /* : RuntimeVariable */;
var_v = p0;
{
{ /* Inline parser_nodes#ANamedargExpr#n_expr (self) on <self:ANamedargExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <self:ANamedargExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2728);
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
/* method abstract_compiler#ADebugTypeExpr#stmt for (self: ADebugTypeExpr, AbstractCompilerVisitor) */
void nitc__abstract_compiler___ADebugTypeExpr___AExpr__stmt(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler#MModule#properties for (self: MModule, MClass): Set[MProperty] */
val* nitc__abstract_compiler___MModule___properties(val* self, val* p0) {
val* var /* : Set[MProperty] */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
val* var3 /* : Map[MClass, Set[MProperty]] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : HashSet[MProperty] */;
val* var_properties /* var properties: HashSet[MProperty] */;
val* var7 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var8 /* : POSet[MClass] */;
short int var9 /* : Bool */;
val* var10 /* : POSetElement[MClass] */;
val* var11 /* : Collection[nullable Object] */;
val* var_ /* var : Array[MClass] */;
val* var12 /* : IndexedIterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[MClass] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_parent /* var parent: MClass */;
val* var16 /* : Set[MProperty] */;
val* var17 /* : Array[MClassDef] */;
val* var19 /* : Array[MClassDef] */;
val* var_20 /* var : Array[MClassDef] */;
val* var21 /* : IndexedIterator[nullable Object] */;
val* var_22 /* var : IndexedIterator[MClassDef] */;
short int var23 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var26 /* : POSetElement[MModule] */;
val* var28 /* : POSetElement[MModule] */;
val* var29 /* : MModule */;
val* var31 /* : MModule */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var35 /* : Array[MProperty] */;
val* var37 /* : Array[MProperty] */;
val* var_38 /* var : Array[MProperty] */;
val* var39 /* : IndexedIterator[nullable Object] */;
val* var_40 /* var : IndexedIterator[MProperty] */;
short int var41 /* : Bool */;
val* var43 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
val* var44 /* : Map[MClass, Set[MProperty]] */;
val* var46 /* : Map[MClass, Set[MProperty]] */;
val* var47 /* : Map[MClass, Set[MProperty]] */;
val* var49 /* : Map[MClass, Set[MProperty]] */;
val* var50 /* : nullable Object */;
var_mclass = p0;
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4136);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var1, var_mclass); /* has_key on <var1:Map[MClass, Set[MProperty]]>*/
}
var5 = !var4;
if (var5){
var6 = NEW_core__HashSet(&type_core__HashSet__nitc__MProperty);
{
core___core__HashSet___core__kernel__Object__init(var6); /* Direct call hash_collection#HashSet#init on <var6:HashSet[MProperty]>*/
}
var_properties = var6;
var7 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[MClass]>*/
}
var_parents = var7;
{
var8 = nitc__model___MModule___flatten_mclass_hierarchy(self);
}
{
var9 = poset___poset__POSet___core__abstract_collection__Collection__has(var8, var_mclass);
}
if (var9){
{
var10 = nitc___nitc__MClass___in_hierarchy(var_mclass, self);
}
{
var11 = poset___poset__POSetElement___direct_greaters(var10);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_parents, var11); /* Direct call array#Array#add_all on <var_parents:Array[MClass]>*/
}
} else {
}
var_ = var_parents;
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[MClass]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[MClass]>*/
}
var_parent = var15;
{
var16 = nitc__abstract_compiler___MModule___properties(self, var_parent);
}
{
core___core__SimpleCollection___add_all(var_properties, var16); /* Direct call abstract_collection#SimpleCollection#add_all on <var_properties:HashSet[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[MClass]>*/
}
{
{ /* Inline model#MClass#mclassdefs (var_mclass) on <var_mclass:MClass> */
var19 = var_mclass->attrs[COLOR_nitc__model__MClass___mclassdefs].val; /* _mclassdefs on <var_mclass:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 490);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_20 = var17;
{
var21 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_20);
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:IndexedIterator[MClassDef]>*/
}
if (var23){
} else {
goto BREAK_label24;
}
{
var25 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:IndexedIterator[MClassDef]>*/
}
var_mclassdef = var25;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var28 = self->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var31 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = poset___poset__POSetElement____60d_61d(var26, var29);
}
var33 = !var32;
if (var33){
goto BREAK_label34;
} else {
}
{
{ /* Inline model#MClassDef#intro_mproperties (var_mclassdef) on <var_mclassdef:MClassDef> */
var37 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <var_mclassdef:MClassDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 720);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_38 = var35;
{
var39 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_38);
}
var_40 = var39;
for(;;) {
{
var41 = ((short int(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_40); /* is_ok on <var_40:IndexedIterator[MProperty]>*/
}
if (var41){
} else {
goto BREAK_label42;
}
{
var43 = ((val*(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_40); /* item on <var_40:IndexedIterator[MProperty]>*/
}
var_mprop = var43;
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_properties, var_mprop); /* Direct call hash_collection#HashSet#add on <var_properties:HashSet[MProperty]>*/
}
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_40); /* next on <var_40:IndexedIterator[MProperty]>*/
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_40); /* finish on <var_40:IndexedIterator[MProperty]>*/
}
BREAK_label34: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:IndexedIterator[MClassDef]>*/
}
}
BREAK_label24: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:IndexedIterator[MClassDef]>*/
}
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var46 = self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4136);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var44&3)?class_info[((long)var44&3)]:var44->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var44, var_mclass, var_properties); /* []= on <var44:Map[MClass, Set[MProperty]]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#MModule#properties_cache (self) on <self:MModule> */
var49 = self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4136);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = ((val*(*)(val* self, val* p0))((((long)var47&3)?class_info[((long)var47&3)]:var47->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var47, var_mclass); /* [] on <var47:Map[MClass, Set[MProperty]]>*/
}
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MModule#properties_cache for (self: MModule): Map[MClass, Set[MProperty]] */
val* nitc__abstract_compiler___MModule___properties_cache(val* self) {
val* var /* : Map[MClass, Set[MProperty]] */;
val* var1 /* : Map[MClass, Set[MProperty]] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val; /* _properties_cache on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _properties_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 4136);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Sys#main for (self: Sys) */
void nitc__abstract_compiler___core__Sys___main(val* self) {
val* var /* : ToolContext */;
val* var_toolcontext /* var toolcontext: ToolContext */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var5 /* : Sequence[String] */;
val* var6 /* : Model */;
val* var_model /* var model: Model */;
val* var8 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var9 /* : OptionContext */;
val* var11 /* : OptionContext */;
val* var12 /* : Array[String] */;
val* var14 /* : Array[String] */;
val* var_arguments /* var arguments: Array[String] */;
short int var15 /* : Bool */;
long var16 /* : Int */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var22 /* : Bool */;
short int var_ /* var : Bool */;
val* var23 /* : OptionString */;
val* var25 /* : OptionString */;
val* var26 /* : nullable Object */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var39 /* : Array[MModule] */;
val* var_mmodules /* var mmodules: Array[MModule] */;
short int var40 /* : Bool */;
val* var_41 /* var : Array[MModule] */;
val* var42 /* : IndexedIterator[nullable Object] */;
val* var_43 /* var : IndexedIterator[MModule] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : Array[MModule] */;
val* var_59 /* var : Array[MModule] */;
val* var_ms /* var ms: Array[MModule] */;
var = NEW_nitc__ToolContext(&type_nitc__ToolContext);
{
nitc__separate_erasure_compiler___ToolContext___core__kernel__Object__init(var); /* Direct call separate_erasure_compiler#ToolContext#init on <var:ToolContext>*/
}
var_toolcontext = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Usage: nitc [OPTION]... file.nit...\nCompiles Nit programs.";
var3 = core__abstract_text___CString___to_s_full(var2, 58l, 58l);
var1 = var3;
varonce = var1;
}
{
{ /* Inline toolcontext#ToolContext#tooldescription= (var_toolcontext,var1) on <var_toolcontext:ToolContext> */
var_toolcontext->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val = var1; /* _tooldescription on <var_toolcontext:ToolContext> */
RET_LABEL4:(void)0;
}
}
{
var5 = core__abstract_text___Sys___args(self);
}
{
nitc___ToolContext___process_options(var_toolcontext, var5); /* Direct call nitc#ToolContext#process_options on <var_toolcontext:ToolContext>*/
}
var6 = NEW_nitc__Model(&type_nitc__Model);
{
{ /* Inline kernel#Object#init (var6) on <var6:Model> */
RET_LABEL7:(void)0;
}
}
var_model = var6;
var8 = NEW_nitc__ModelBuilder(&type_nitc__ModelBuilder);
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__modelbuilder_base__ModelBuilder__model_61d]))(var8, var_model); /* model= on <var8:ModelBuilder>*/
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__modelbuilder_base__ModelBuilder__toolcontext_61d]))(var8, var_toolcontext); /* toolcontext= on <var8:ModelBuilder>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:ModelBuilder>*/
}
var_modelbuilder = var8;
{
{ /* Inline toolcontext#ToolContext#option_context (var_toolcontext) on <var_toolcontext:ToolContext> */
var11 = var_toolcontext->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <var_toolcontext:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts#OptionContext#rest (var9) on <var9:OptionContext> */
var14 = var9->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <var9:OptionContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 286);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_arguments = var12;
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[String]> */
var18 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[String]> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var22 = var16 > 1l;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_ = var19;
if (var19){
{
{ /* Inline abstract_compiler#ToolContext#opt_output (var_toolcontext) on <var_toolcontext:ToolContext> */
var25 = var_toolcontext->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <var_toolcontext:ToolContext> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 30);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline opts#Option#value (var23) on <var23:OptionString> */
var28 = var23->attrs[COLOR_opts__Option___value].val; /* _value on <var23:OptionString> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26 == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var26,((val*)NULL)) on <var26:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_core__kernel__Object___61d_61d]))(var26, var_other); /* == on <var26:nullable String(String)>*/
}
var33 = !var32;
var30 = var33;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
var15 = var29;
} else {
var15 = var_;
}
if (var15){
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Option Error: --output needs a single source file. Do you prefer --dir?";
var37 = core__abstract_text___CString___to_s_full(var36, 71l, 71l);
var35 = var37;
varonce34 = var35;
}
{
core__file___Sys___print(self, var35); /* Direct call file#Sys#print on <self:Sys>*/
}
{
{ /* Inline kernel#Sys#exit (self,1l) on <self:Sys> */
exit(1l);
RET_LABEL38:(void)0;
}
}
} else {
}
{
var39 = nitc__loader___ModelBuilder___parse(var_modelbuilder, var_arguments);
}
var_mmodules = var39;
{
var40 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_mmodules);
}
if (var40){
{
nitc___nitc__ToolContext___quit(var_toolcontext); /* Direct call toolcontext#ToolContext#quit on <var_toolcontext:ToolContext>*/
}
} else {
}
{
nitc__modelbuilder___ModelBuilder___run_phases(var_modelbuilder); /* Direct call modelbuilder#ModelBuilder#run_phases on <var_modelbuilder:ModelBuilder>*/
}
var_41 = var_mmodules;
{
var42 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_41);
}
var_43 = var42;
for(;;) {
{
var44 = ((short int(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_43); /* is_ok on <var_43:IndexedIterator[MModule]>*/
}
if (var44){
} else {
goto BREAK_label;
}
{
var45 = ((val*(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_43); /* item on <var_43:IndexedIterator[MModule]>*/
}
var_mmodule = var45;
if (unlikely(varonce46==NULL)) {
var47 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "*** PROCESS ";
var51 = core__abstract_text___CString___to_s_full(var50, 12l, 12l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = " ***";
var55 = core__abstract_text___CString___to_s_full(var54, 4l, 4l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var47)->values[2]=var53;
} else {
var47 = varonce46;
varonce46 = NULL;
}
{
var56 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var47)->values[1]=var56;
{
var57 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
nitc___nitc__ToolContext___info(var_toolcontext, var57, 1l); /* Direct call toolcontext#ToolContext#info on <var_toolcontext:ToolContext>*/
}
var58 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___with_capacity(var58, 1l); /* Direct call array#Array#with_capacity on <var58:Array[MModule]>*/
}
var_59 = var58;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_59, var_mmodule); /* Direct call array#AbstractArray#push on <var_59:Array[MModule]>*/
}
var_ms = var_59;
{
nitc__modelbuilder___ToolContext___run_global_phases(var_toolcontext, var_ms); /* Direct call modelbuilder#ToolContext#run_global_phases on <var_toolcontext:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_43); /* next on <var_43:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_43); /* finish on <var_43:IndexedIterator[MModule]>*/
}
RET_LABEL:;
}
