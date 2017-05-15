#include "nitc__literal.sep.0.h"
/* method literal#ToolContext#literal_phase for (self: ToolContext): Phase */
val* nitc__literal___ToolContext___literal_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__literal__ToolContext___literal_phase].val; /* _literal_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _literal_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#LiteralPhase#process_nmodule for (self: LiteralPhase, AModule) */
void nitc__literal___nitc__literal__LiteralPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
var_nmodule = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:LiteralPhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:LiteralPhase> */
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
nitc__literal___AModule___do_literal(var_nmodule, var); /* Direct call literal#AModule#do_literal on <var_nmodule:AModule>*/
}
RET_LABEL:;
}
/* method literal#AModule#do_literal for (self: AModule, ToolContext) */
void nitc__literal___AModule___do_literal(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : LiteralVisitor */;
val* var_v /* var v: LiteralVisitor */;
var_toolcontext = p0;
var = NEW_nitc__literal__LiteralVisitor(&type_nitc__literal__LiteralVisitor);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__literal__LiteralVisitor__toolcontext_61d]))(var, var_toolcontext); /* toolcontext= on <var:LiteralVisitor>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:LiteralVisitor>*/
}
var_v = var;
{
nitc___nitc__Visitor___enter_visit(var_v, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:LiteralVisitor>*/
}
RET_LABEL:;
}
/* method literal#LiteralVisitor#toolcontext for (self: LiteralVisitor): ToolContext */
val* nitc__literal___nitc__literal__LiteralVisitor___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <self:LiteralVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 46);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#LiteralVisitor#toolcontext= for (self: LiteralVisitor, ToolContext) */
void nitc__literal___nitc__literal__LiteralVisitor___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val = p0; /* _toolcontext on <self:LiteralVisitor> */
RET_LABEL:;
}
/* method literal#LiteralVisitor#visit for (self: LiteralVisitor, ANode) */
void nitc__literal___nitc__literal__LiteralVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__literal__ANode__accept_literal]))(var_n, self); /* accept_literal on <var_n:ANode>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method literal#LiteralVisitor#init for (self: LiteralVisitor) */
void nitc__literal___nitc__literal__LiteralVisitor___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__literal___nitc__literal__LiteralVisitor___core__kernel__Object__init]))(self); /* init on <self:LiteralVisitor>*/
}
RET_LABEL:;
}
/* method literal#ANode#accept_literal for (self: ANode, LiteralVisitor) */
void nitc__literal___ANode___accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method literal#AExpr#as_string for (self: AExpr): nullable String */
val* nitc__literal___AExpr___as_string(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : String */;
val* var5 /* : String */;
/* <self:AExpr> isa AStringFormExpr */
cltype = type_nitc__AStringFormExpr.color;
idtype = type_nitc__AStringFormExpr.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
var2 = !var1;
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AStringFormExpr#value (self) on <self:AExpr(AStringFormExpr)> */
var5 = self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <self:AExpr(AStringFormExpr)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 201);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AExpr#as_int for (self: AExpr): nullable Int */
val* nitc__literal___AExpr___as_int(val* self) {
val* var /* : nullable Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : nullable Numeric */;
val* var5 /* : nullable Numeric */;
long var6 /* : Int */;
val* var7 /* : nullable Int */;
/* <self:AExpr> isa AIntegerExpr */
cltype = type_nitc__AIntegerExpr.color;
idtype = type_nitc__AIntegerExpr.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
var2 = !var1;
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AExpr(AIntegerExpr)> */
var5 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AExpr(AIntegerExpr)> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 73);
fatal_exit(1);
}
{
var6 = ((long(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__kernel__Numeric__to_i]))(var3); /* to_i on <var3:nullable Numeric(Numeric)>*/
}
var7 = (val*)(var6<<2|1);
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AIntegerExpr#value for (self: AIntegerExpr): nullable Numeric */
val* nitc__literal___AIntegerExpr___value(val* self) {
val* var /* : nullable Numeric */;
val* var1 /* : nullable Numeric */;
var1 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AIntegerExpr#value= for (self: AIntegerExpr, nullable Numeric) */
void nitc__literal___AIntegerExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val = p0; /* _value on <self:AIntegerExpr> */
RET_LABEL:;
}
/* method literal#AIntegerExpr#accept_literal for (self: AIntegerExpr, LiteralVisitor) */
void nitc__literal___AIntegerExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TInteger */;
val* var2 /* : TInteger */;
val* var3 /* : String */;
val* var4 /* : nullable Numeric */;
val* var6 /* : nullable Numeric */;
val* var8 /* : nullable Numeric */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : Location */;
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
val* var24 /* : TInteger */;
val* var26 /* : TInteger */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : Message */;
var_v = p0;
{
{ /* Inline parser_nodes#AIntegerExpr#n_integer (self) on <self:AIntegerExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AIntegerExpr___n_integer].val; /* _n_integer on <self:AIntegerExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_integer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2592);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__lexer_work___Token___text(var);
}
{
var4 = core__fixed_ints_text___Text___to_num(var3);
}
{
{ /* Inline literal#AIntegerExpr#value= (self,var4) on <self:AIntegerExpr> */
self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val = var4; /* _value on <self:AIntegerExpr> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline literal#AIntegerExpr#value (self) on <self:AIntegerExpr> */
var8 = self->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <self:AIntegerExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = ((short int(*)(val* self, val* p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var6, ((val*)NULL)); /* == on <var6:nullable Numeric>*/
var9 = var10;
}
if (var9){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var13 = var_v->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 46);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc___nitc__ANode___hot_location(self);
}
if (unlikely(varonce==NULL)) {
var15 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Error: invalid literal `";
var19 = core__abstract_text___CString___to_s_full(var18, 24l, 24l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`";
var23 = core__abstract_text___CString___to_s_full(var22, 1l, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce;
varonce = NULL;
}
{
{ /* Inline parser_nodes#AIntegerExpr#n_integer (self) on <self:AIntegerExpr> */
var26 = self->attrs[COLOR_nitc__parser_nodes__AIntegerExpr___n_integer].val; /* _n_integer on <self:AIntegerExpr> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_integer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2592);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = nitc__lexer_work___Token___text(var24);
}
((struct instance_core__NativeArray*)var15)->values[1]=var27;
{
var28 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
var29 = nitc___nitc__ToolContext___error(var11, var14, var28);
}
} else {
}
RET_LABEL:;
}
/* method literal#AFloatExpr#value= for (self: AFloatExpr, nullable Float) */
void nitc__literal___AFloatExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__literal__AFloatExpr___value].val = p0; /* _value on <self:AFloatExpr> */
RET_LABEL:;
}
/* method literal#AFloatExpr#accept_literal for (self: AFloatExpr, LiteralVisitor) */
void nitc__literal___AFloatExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : TFloat */;
val* var2 /* : TFloat */;
val* var3 /* : String */;
double var4 /* : Float */;
val* var6 /* : nullable Float */;
var_v = p0;
{
{ /* Inline parser_nodes#AFloatExpr#n_float (self) on <self:AFloatExpr> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AFloatExpr___n_float].val; /* _n_float on <self:AFloatExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_float");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2600);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__lexer_work___Token___text(var);
}
{
var4 = core___core__Text___to_f(var3);
}
{
{ /* Inline literal#AFloatExpr#value= (self,var4) on <self:AFloatExpr> */
var6 = BOX_core__Float(var4); /* autobox from Float to nullable Float */
self->attrs[COLOR_nitc__literal__AFloatExpr___value].val = var6; /* _value on <self:AFloatExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AAugmentedLiteral#text for (self: AAugmentedLiteral): String */
val* nitc___nitc__AAugmentedLiteral___text(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "text", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 100);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method literal#AAugmentedLiteral#prefix for (self: AAugmentedLiteral): String */
val* nitc___nitc__AAugmentedLiteral___prefix(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
uint32_t var7 /* : Char */;
long var8 /* : Int */;
val* var9 /* : Text */;
var1 = self->attrs[COLOR_nitc__literal__AAugmentedLiteral___prefix].val != NULL; /* _prefix on <self:AAugmentedLiteral> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__literal__AAugmentedLiteral___prefix].val; /* _prefix on <self:AAugmentedLiteral> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _prefix");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 110);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__text]))(self); /* text on <self:AAugmentedLiteral>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__text]))(self); /* text on <self:AAugmentedLiteral>*/
}
{
var7 = ((uint32_t(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__delimiter_start]))(self); /* delimiter_start on <self:AAugmentedLiteral>*/
}
{
var8 = core___core__Text___index_of(var6, var7);
}
{
var9 = ((val*(*)(val* self, long p0, long p1))(var5->class->vft[COLOR_core__abstract_text__Text__substring]))(var5, 0l, var8); /* substring on <var5:String>*/
}
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__literal__AAugmentedLiteral___prefix].val = var3; /* _prefix on <self:AAugmentedLiteral> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method literal#AAugmentedLiteral#suffix for (self: AAugmentedLiteral): String */
val* nitc___nitc__AAugmentedLiteral___suffix(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
uint32_t var7 /* : Char */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
val* var13 /* : Text */;
var1 = self->attrs[COLOR_nitc__literal__AAugmentedLiteral___suffix].val != NULL; /* _suffix on <self:AAugmentedLiteral> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__literal__AAugmentedLiteral___suffix].val; /* _suffix on <self:AAugmentedLiteral> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _suffix");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 113);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__text]))(self); /* text on <self:AAugmentedLiteral>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__text]))(self); /* text on <self:AAugmentedLiteral>*/
}
{
var7 = ((uint32_t(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__delimiter_end]))(self); /* delimiter_end on <self:AAugmentedLiteral>*/
}
{
var8 = core___core__Text___last_index_of(var6, var7);
}
{
{ /* Inline kernel#Int#+ (var8,1l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var8 + 1l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
var13 = ((val*(*)(val* self, long p0))(var5->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var5, var9); /* substring_from on <var5:String>*/
}
var3 = var13;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__literal__AAugmentedLiteral___suffix].val = var3; /* _suffix on <self:AAugmentedLiteral> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method literal#AAugmentedLiteral#content for (self: AAugmentedLiteral): String */
val* nitc___nitc__AAugmentedLiteral___content(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
long var7 /* : Int */;
val* var8 /* : Text */;
val* var_npr /* var npr: String */;
long var9 /* : Int */;
val* var10 /* : String */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
val* var16 /* : Text */;
var1 = self->attrs[COLOR_nitc__literal__AAugmentedLiteral___content].val != NULL; /* _content on <self:AAugmentedLiteral> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__literal__AAugmentedLiteral___content].val; /* _content on <self:AAugmentedLiteral> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 116);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__text]))(self); /* text on <self:AAugmentedLiteral>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__prefix]))(self); /* prefix on <self:AAugmentedLiteral>*/
}
{
var7 = ((long(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__Text__length]))(var6); /* length on <var6:String>*/
}
{
var8 = ((val*(*)(val* self, long p0))(var5->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var5, var7); /* substring_from on <var5:String>*/
}
var_npr = var8;
{
var9 = ((long(*)(val* self))(var_npr->class->vft[COLOR_core__abstract_text__Text__length]))(var_npr); /* length on <var_npr:String>*/
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__suffix]))(self); /* suffix on <self:AAugmentedLiteral>*/
}
{
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__Text__length]))(var10); /* length on <var10:String>*/
}
{
{ /* Inline kernel#Int#- (var9,var11) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var15 = var9 - var11;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var16 = ((val*(*)(val* self, long p0, long p1))(var_npr->class->vft[COLOR_core__abstract_text__Text__substring]))(var_npr, 0l, var12); /* substring on <var_npr:String>*/
}
var3 = var16;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__literal__AAugmentedLiteral___content].val = var3; /* _content on <self:AAugmentedLiteral> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#value for (self: ACharExpr): nullable Char */
val* nitc__literal___ACharExpr___value(val* self) {
val* var /* : nullable Char */;
val* var1 /* : nullable Char */;
var1 = self->attrs[COLOR_nitc__literal__ACharExpr___value].val; /* _value on <self:ACharExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#value= for (self: ACharExpr, nullable Char) */
void nitc__literal___ACharExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__literal__ACharExpr___value].val = p0; /* _value on <self:ACharExpr> */
RET_LABEL:;
}
/* method literal#ACharExpr#delimiter_start for (self: ACharExpr): Char */
uint32_t nitc__literal___ACharExpr___AAugmentedLiteral__delimiter_start(val* self) {
uint32_t var /* : Char */;
var = '\'';
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#delimiter_end for (self: ACharExpr): Char */
uint32_t nitc__literal___ACharExpr___AAugmentedLiteral__delimiter_end(val* self) {
uint32_t var /* : Char */;
var = '\'';
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#is_ascii for (self: ACharExpr): Bool */
short int nitc__literal___ACharExpr___is_ascii(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
{
var1 = nitc___nitc__AAugmentedLiteral___prefix(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "b";
var4 = core__abstract_text___CString___to_s_full(var3, 1l, 1l);
var2 = var4;
varonce = var2;
}
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var2); /* == on <var1:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#is_code_point for (self: ACharExpr): Bool */
short int nitc__literal___ACharExpr___is_code_point(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
{
var1 = nitc___nitc__AAugmentedLiteral___prefix(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "u";
var4 = core__abstract_text___CString___to_s_full(var3, 1l, 1l);
var2 = var4;
varonce = var2;
}
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var2); /* == on <var1:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#text for (self: ACharExpr): String */
val* nitc__literal___ACharExpr___AAugmentedLiteral__text(val* self) {
val* var /* : String */;
val* var1 /* : TChar */;
val* var3 /* : TChar */;
val* var4 /* : String */;
{
{ /* Inline parser_nodes#ACharExpr#n_char (self) on <self:ACharExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACharExpr___n_char].val; /* _n_char on <self:ACharExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_char");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2608);
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
/* method literal#ACharExpr#is_valid_augmentation for (self: ACharExpr): Bool */
short int nitc__literal___ACharExpr___AAugmentedLiteral__is_valid_augmentation(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
{
var1 = nitc___nitc__AAugmentedLiteral___suffix(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = core__abstract_text___CString___to_s_full(var3, 0l, 0l);
var2 = var4;
varonce = var2;
}
{
{ /* Inline kernel#Object#!= (var1,var2) on <var1:String> */
var_other = var2;
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:String>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
{
var9 = nitc__literal___ACharExpr___is_ascii(self);
}
if (var9){
var = 1;
goto RET_LABEL;
} else {
}
{
var10 = nitc__literal___ACharExpr___is_code_point(self);
}
if (var10){
var = 1;
goto RET_LABEL;
} else {
}
{
var11 = nitc___nitc__AAugmentedLiteral___prefix(self);
}
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "";
var15 = core__abstract_text___CString___to_s_full(var14, 0l, 0l);
var13 = var15;
varonce12 = var13;
}
{
{ /* Inline kernel#Object#!= (var11,var13) on <var11:String> */
var_other = var13;
{
var18 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_core__kernel__Object___61d_61d]))(var11, var_other); /* == on <var11:String>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#ACharExpr#accept_literal for (self: ACharExpr, LiteralVisitor) */
void nitc__literal___ACharExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : ToolContext */;
val* var4 /* : ToolContext */;
val* var5 /* : Location */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : Message */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var_txt /* var txt: String */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : ToolContext */;
val* var28 /* : ToolContext */;
val* var29 /* : Location */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : Message */;
val* var42 /* : SequenceRead[Char] */;
val* var43 /* : nullable Object */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var_ /* var : Bool */;
val* var47 /* : SequenceRead[Char] */;
val* var48 /* : nullable Object */;
long var49 /* : Int */;
uint32_t var51 /* : Char */;
long var52 /* : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var56 /* : Bool */;
val* var57 /* : ToolContext */;
val* var59 /* : ToolContext */;
val* var60 /* : Location */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : Message */;
var_v = p0;
{
var = nitc__literal___ACharExpr___AAugmentedLiteral__is_valid_augmentation(self);
}
var1 = !var;
if (var1){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var4 = var_v->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 46);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = nitc___nitc__ANode___hot_location(self);
}
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Syntax Error: invalid prefix/suffix combination ";
var10 = core__abstract_text___CString___to_s_full(var9, 48l, 48l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "/";
var14 = core__abstract_text___CString___to_s_full(var13, 1l, 1l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
{
var15 = nitc___nitc__AAugmentedLiteral___prefix(self);
}
((struct instance_core__NativeArray*)var6)->values[1]=var15;
{
var16 = nitc___nitc__AAugmentedLiteral___suffix(self);
}
((struct instance_core__NativeArray*)var6)->values[3]=var16;
{
var17 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
var18 = nitc___nitc__ToolContext___error(var2, var5, var17);
}
goto RET_LABEL;
} else {
}
{
var19 = nitc___nitc__AAugmentedLiteral___content(self);
}
{
var20 = core___core__Text___unescape_nit(var19);
}
var_txt = var20;
{
var21 = ((long(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__length]))(var_txt); /* length on <var_txt:String>*/
}
{
{ /* Inline kernel#Int#!= (var21,3l) on <var21:Int> */
var24 = var21 == 3l;
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var28 = var_v->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 46);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = nitc___nitc__ANode___hot_location(self);
}
if (unlikely(varonce30==NULL)) {
var31 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Syntax Error: invalid character literal `";
var35 = core__abstract_text___CString___to_s_full(var34, 41l, 41l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var31)->values[0]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "`.";
var39 = core__abstract_text___CString___to_s_full(var38, 2l, 2l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var31)->values[2]=var37;
} else {
var31 = varonce30;
varonce30 = NULL;
}
((struct instance_core__NativeArray*)var31)->values[1]=var_txt;
{
var40 = ((val*(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
{
var41 = nitc___nitc__ToolContext___error(var26, var29, var40);
}
goto RET_LABEL;
} else {
}
{
var42 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var43 = ((val*(*)(val* self, long p0))((((long)var42&3)?class_info[((long)var42&3)]:var42->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var42, 1l); /* [] on <var42:SequenceRead[Char]>*/
}
{
{ /* Inline literal#ACharExpr#value= (self,var43) on <self:ACharExpr> */
self->attrs[COLOR_nitc__literal__ACharExpr___value].val = var43; /* _value on <self:ACharExpr> */
RET_LABEL44:(void)0;
}
}
{
var46 = nitc__literal___ACharExpr___is_ascii(self);
}
var_ = var46;
if (var46){
{
var47 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var48 = ((val*(*)(val* self, long p0))((((long)var47&3)?class_info[((long)var47&3)]:var47->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var47, 1l); /* [] on <var47:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#code_point (var48) on <var48:nullable Object(Char)> */
var51 = (uint32_t)((long)(var48)>>2);
var52 = (long)var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var49,127l) on <var49:Int> */
/* Covariant cast for argument 0 (i) <127l:Int> isa OTHER */
/* <127l:Int> isa OTHER */
var55 = 1; /* easy <127l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var56 = var49 > 127l;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var45 = var53;
} else {
var45 = var_;
}
if (var45){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var59 = var_v->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 46);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = nitc___nitc__ANode___hot_location(self);
}
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "Syntax Error: usage of byte prefix on multibyte character.";
var64 = core__abstract_text___CString___to_s_full(var63, 58l, 58l);
var62 = var64;
varonce61 = var62;
}
{
var65 = nitc___nitc__ToolContext___error(var57, var60, var62);
}
} else {
}
RET_LABEL:;
}
/* method literal#AugmentedStringFormExpr#delimiter_start for (self: AugmentedStringFormExpr): Char */
uint32_t nitc___nitc__AugmentedStringFormExpr___AAugmentedLiteral__delimiter_start(val* self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = self->attrs[COLOR_nitc__literal__AugmentedStringFormExpr___delimiter_start].c; /* _delimiter_start on <self:AugmentedStringFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AugmentedStringFormExpr#delimiter_start= for (self: AugmentedStringFormExpr, Char) */
void nitc___nitc__AugmentedStringFormExpr___delimiter_start_61d(val* self, uint32_t p0) {
self->attrs[COLOR_nitc__literal__AugmentedStringFormExpr___delimiter_start].c = p0; /* _delimiter_start on <self:AugmentedStringFormExpr> */
RET_LABEL:;
}
/* method literal#AugmentedStringFormExpr#delimiter_end for (self: AugmentedStringFormExpr): Char */
uint32_t nitc___nitc__AugmentedStringFormExpr___AAugmentedLiteral__delimiter_end(val* self) {
uint32_t var /* : Char */;
uint32_t var1 /* : Char */;
var1 = self->attrs[COLOR_nitc__literal__AugmentedStringFormExpr___delimiter_end].c; /* _delimiter_end on <self:AugmentedStringFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AugmentedStringFormExpr#delimiter_end= for (self: AugmentedStringFormExpr, Char) */
void nitc___nitc__AugmentedStringFormExpr___delimiter_end_61d(val* self, uint32_t p0) {
self->attrs[COLOR_nitc__literal__AugmentedStringFormExpr___delimiter_end].c = p0; /* _delimiter_end on <self:AugmentedStringFormExpr> */
RET_LABEL:;
}
/* method literal#AugmentedStringFormExpr#is_string for (self: AugmentedStringFormExpr): Bool */
short int nitc___nitc__AugmentedStringFormExpr___is_string(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
short int var12 /* : Bool */;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__prefix]))(self); /* prefix on <self:AugmentedStringFormExpr>*/
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "";
var5 = core__abstract_text___CString___to_s_full(var4, 0l, 0l);
var3 = var5;
varonce = var3;
}
{
var6 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var2, var3); /* == on <var2:String>*/
}
var_ = var6;
if (var6){
var1 = var_;
} else {
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__prefix]))(self); /* prefix on <self:AugmentedStringFormExpr>*/
}
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "raw";
var11 = core__abstract_text___CString___to_s_full(var10, 3l, 3l);
var9 = var11;
varonce8 = var9;
}
{
var12 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Object___61d_61d]))(var7, var9); /* == on <var7:String>*/
}
var1 = var12;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AugmentedStringFormExpr#is_re for (self: AugmentedStringFormExpr): Bool */
short int nitc___nitc__AugmentedStringFormExpr___is_re(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__prefix]))(self); /* prefix on <self:AugmentedStringFormExpr>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "re";
var4 = core__abstract_text___CString___to_s_full(var3, 2l, 2l);
var2 = var4;
varonce = var2;
}
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var2); /* == on <var1:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AugmentedStringFormExpr#is_bytestring for (self: AugmentedStringFormExpr): Bool */
short int nitc___nitc__AugmentedStringFormExpr___is_bytestring(val* self) {
short int var /* : Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__prefix]))(self); /* prefix on <self:AugmentedStringFormExpr>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "b";
var4 = core__abstract_text___CString___to_s_full(var3, 1l, 1l);
var2 = var4;
varonce = var2;
}
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var2); /* == on <var1:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AugmentedStringFormExpr#is_valid_augmentation for (self: AugmentedStringFormExpr): Bool */
short int nitc___nitc__AugmentedStringFormExpr___AAugmentedLiteral__is_valid_augmentation(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
val* var3 /* : String */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_10 /* var : Bool */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : String */;
val* var_suf /* var suf: String */;
val* var19 /* : SequenceRead[Char] */;
val* var_20 /* var : SequenceRead[Char] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : IndexedIterator[Char] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
uint32_t var25 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
short int var42 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
{
var2 = nitc___nitc__AugmentedStringFormExpr___is_string(self);
}
var_ = var2;
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__suffix]))(self); /* suffix on <self:AugmentedStringFormExpr>*/
}
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var6 = core__abstract_text___CString___to_s_full(var5, 0l, 0l);
var4 = var6;
varonce = var4;
}
{
var7 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, var4); /* == on <var3:String>*/
}
var1 = var7;
} else {
var1 = var_;
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
var9 = nitc___nitc__AugmentedStringFormExpr___is_bytestring(self);
}
var_10 = var9;
if (var9){
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__suffix]))(self); /* suffix on <self:AugmentedStringFormExpr>*/
}
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "";
var15 = core__abstract_text___CString___to_s_full(var14, 0l, 0l);
var13 = var15;
varonce12 = var13;
}
{
var16 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_core__kernel__Object___61d_61d]))(var11, var13); /* == on <var11:String>*/
}
var8 = var16;
} else {
var8 = var_10;
}
if (var8){
var = 1;
goto RET_LABEL;
} else {
}
{
var17 = nitc___nitc__AugmentedStringFormExpr___is_re(self);
}
if (var17){
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__suffix]))(self); /* suffix on <self:AugmentedStringFormExpr>*/
}
var_suf = var18;
{
var19 = ((val*(*)(val* self))(var_suf->class->vft[COLOR_core__abstract_text__Text__chars]))(var_suf); /* chars on <var_suf:String>*/
}
var_20 = var19;
{
var21 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_20); /* iterator on <var_20:SequenceRead[Char]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:IndexedIterator[Char]>*/
}
if (var23){
} else {
goto BREAK_label;
}
{
var24 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:IndexedIterator[Char]>*/
}
var25 = (uint32_t)((long)(var24)>>2);
var_i = var25;
{
{ /* Inline kernel#Char#== (var_i,'i') on <var_i:Char> */
var28 = var_i == 'i';
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
goto BREAK_label29;
} else {
}
{
{ /* Inline kernel#Char#== (var_i,'m') on <var_i:Char> */
var32 = var_i == 'm';
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
goto BREAK_label29;
} else {
}
{
{ /* Inline kernel#Char#== (var_i,'b') on <var_i:Char> */
var35 = var_i == 'b';
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
goto BREAK_label29;
} else {
}
var = 0;
goto RET_LABEL;
BREAK_label29: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
} else {
}
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__prefix]))(self); /* prefix on <self:AugmentedStringFormExpr>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "";
var41 = core__abstract_text___CString___to_s_full(var40, 0l, 0l);
var39 = var41;
varonce38 = var39;
}
{
{ /* Inline kernel#Object#!= (var37,var39) on <var37:String> */
var_other = var39;
{
var44 = ((short int(*)(val* self, val* p0))(var37->class->vft[COLOR_core__kernel__Object___61d_61d]))(var37, var_other); /* == on <var37:String>*/
}
var45 = !var44;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_46 = var42;
if (var42){
var36 = var_46;
} else {
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__suffix]))(self); /* suffix on <self:AugmentedStringFormExpr>*/
}
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "";
var51 = core__abstract_text___CString___to_s_full(var50, 0l, 0l);
var49 = var51;
varonce48 = var49;
}
{
{ /* Inline kernel#Object#!= (var47,var49) on <var47:String> */
var_other = var49;
{
var54 = ((short int(*)(val* self, val* p0))(var47->class->vft[COLOR_core__kernel__Object___61d_61d]))(var47, var_other); /* == on <var47:String>*/
}
var55 = !var54;
var52 = var55;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var36 = var52;
}
if (var36){
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AStringFormExpr#value for (self: AStringFormExpr): String */
val* nitc__literal___AStringFormExpr___value(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <self:AStringFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 201);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AStringFormExpr#value= for (self: AStringFormExpr, String) */
void nitc__literal___AStringFormExpr___value_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val = p0; /* _value on <self:AStringFormExpr> */
RET_LABEL:;
}
/* method literal#AStringFormExpr#bytes for (self: AStringFormExpr): Bytes */
val* nitc__literal___AStringFormExpr___bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : Bytes */;
var1 = self->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val; /* _bytes on <self:AStringFormExpr> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 204);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method literal#AStringFormExpr#bytes= for (self: AStringFormExpr, Bytes) */
void nitc__literal___AStringFormExpr___bytes_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val = p0; /* _bytes on <self:AStringFormExpr> */
RET_LABEL:;
}
/* method literal#AStringFormExpr#text for (self: AStringFormExpr): String */
val* nitc__literal___AStringFormExpr___AAugmentedLiteral__text(val* self) {
val* var /* : String */;
val* var1 /* : Token */;
val* var3 /* : Token */;
val* var4 /* : String */;
{
{ /* Inline parser_nodes#AStringFormExpr#n_string (self) on <self:AStringFormExpr> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStringFormExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2616);
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
/* method literal#AStringFormExpr#raw_text for (self: AStringFormExpr): String */
val* nitc__literal___AStringFormExpr___raw_text(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : String */;
val* var_txt /* var txt: String */;
long var_behead /* var behead: Int */;
long var_betail /* var betail: Int */;
short int var6 /* : Bool */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : SequenceRead[Char] */;
val* var21 /* : nullable Object */;
uint32_t var22 /* : Char */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
uint32_t var26 /* : Char */;
short int var_27 /* var : Bool */;
val* var28 /* : SequenceRead[Char] */;
val* var29 /* : nullable Object */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
uint32_t var33 /* : Char */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
val* var49 /* : Text */;
var1 = self->attrs[COLOR_nitc__literal__AStringFormExpr___raw_text].val != NULL; /* _raw_text on <self:AStringFormExpr> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__literal__AStringFormExpr___raw_text].val; /* _raw_text on <self:AStringFormExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _raw_text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 209);
fatal_exit(1);
}
} else {
{
{
var5 = nitc___nitc__AAugmentedLiteral___content(self);
}
var_txt = var5;
var_behead = 1l;
var_betail = 1l;
{
var7 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var8 = ((val*(*)(val* self, long p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var7, 0l); /* [] on <var7:SequenceRead[Char]>*/
}
{
var9 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, 1l); /* [] on <var9:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var8,var10) on <var8:nullable Object(Char)> */
var13 = var8 == var10;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
{
var14 = ((long(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__length]))(var_txt); /* length on <var_txt:String>*/
}
{
{ /* Inline kernel#Int#>= (var14,6l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <6l:Int> isa OTHER */
/* <6l:Int> isa OTHER */
var17 = 1; /* easy <6l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var18 = var14 >= 6l;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var6 = var15;
} else {
var6 = var_;
}
if (var6){
var_behead = 3l;
var_betail = 3l;
{
var20 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var21 = ((val*(*)(val* self, long p0))((((long)var20&3)?class_info[((long)var20&3)]:var20->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var20, 0l); /* [] on <var20:SequenceRead[Char]>*/
}
{
var22 = ((uint32_t(*)(val* self))(self->class->vft[COLOR_nitc__literal__AAugmentedLiteral__delimiter_start]))(self); /* delimiter_start on <self:AStringFormExpr>*/
}
{
{ /* Inline kernel#Char#== (var21,var22) on <var21:nullable Object(Char)> */
var26 = (uint32_t)((long)(var21)>>2);
var25 = var26 == var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_27 = var23;
if (var23){
{
var28 = ((val*(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__chars]))(var_txt); /* chars on <var_txt:String>*/
}
{
var29 = ((val*(*)(val* self, long p0))((((long)var28&3)?class_info[((long)var28&3)]:var28->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var28, 3l); /* [] on <var28:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var29,'\n') on <var29:nullable Object(Char)> */
var33 = (uint32_t)((long)(var29)>>2);
var32 = var33 == '\n';
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var19 = var30;
} else {
var19 = var_27;
}
if (var19){
var_behead = 4l;
} else {
}
} else {
}
{
var34 = ((long(*)(val* self))(var_txt->class->vft[COLOR_core__abstract_text__Text__length]))(var_txt); /* length on <var_txt:String>*/
}
{
{ /* Inline kernel#Int#- (var34,var_behead) on <var34:Int> */
/* Covariant cast for argument 0 (i) <var_behead:Int> isa OTHER */
/* <var_behead:Int> isa OTHER */
var37 = 1; /* easy <var_behead:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var41 = var34 - var_behead;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var35,var_betail) on <var35:Int> */
/* Covariant cast for argument 0 (i) <var_betail:Int> isa OTHER */
/* <var_betail:Int> isa OTHER */
var44 = 1; /* easy <var_betail:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var48 = var35 - var_betail;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
var49 = ((val*(*)(val* self, long p0, long p1))(var_txt->class->vft[COLOR_core__abstract_text__Text__substring]))(var_txt, var_behead, var42); /* substring on <var_txt:String>*/
}
var3 = var49;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__literal__AStringFormExpr___raw_text].val = var3; /* _raw_text on <self:AStringFormExpr> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method literal#AStringFormExpr#accept_literal for (self: AStringFormExpr, LiteralVisitor) */
void nitc__literal___AStringFormExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
val* var /* : String */;
val* var2 /* : String */;
val* var3 /* : Bytes */;
var_v = p0;
{
var = nitc__literal___AStringFormExpr___raw_text(self);
}
{
{ /* Inline literal#AStringFormExpr#value= (self,var) on <self:AStringFormExpr> */
self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val = var; /* _value on <self:AStringFormExpr> */
RET_LABEL1:(void)0;
}
}
{
var2 = nitc__literal___AStringFormExpr___raw_text(self);
}
{
var3 = core__bytes___Text___to_bytes(var2);
}
{
{ /* Inline literal#AStringFormExpr#bytes= (self,var3) on <self:AStringFormExpr> */
self->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val = var3; /* _bytes on <self:AStringFormExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method literal#AEndStringExpr#delimiter_end for (self: AEndStringExpr): Char */
uint32_t nitc__literal___AEndStringExpr___AAugmentedLiteral__delimiter_end(val* self) {
uint32_t var /* : Char */;
short int var1 /* : Bool */;
uint32_t var2 /* : Char */;
uint32_t var3 /* : Char */;
var1 = self->attrs[COLOR_nitc__literal__AEndStringExpr__lazy_32d_delimiter_end].s; /* lazy _delimiter_end on <self:AEndStringExpr> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__literal__AEndStringExpr___delimiter_end].c; /* _delimiter_end on <self:AEndStringExpr> */
} else {
{
var3 = '\"';
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__literal__AEndStringExpr___delimiter_end].c = var3; /* _delimiter_end on <self:AEndStringExpr> */
var2 = var3;
self->attrs[COLOR_nitc__literal__AEndStringExpr__lazy_32d_delimiter_end].s = 1; /* lazy _delimiter_end on <self:AEndStringExpr> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method literal#AEndStringExpr#delimiter_end= for (self: AEndStringExpr, Char) */
void nitc__literal___AEndStringExpr___AugmentedStringFormExpr__delimiter_end_61d(val* self, uint32_t p0) {
self->attrs[COLOR_nitc__literal__AEndStringExpr___delimiter_end].c = p0; /* _delimiter_end on <self:AEndStringExpr> */
self->attrs[COLOR_nitc__literal__AEndStringExpr__lazy_32d_delimiter_end].s = 1; /* lazy _delimiter_end on <self:AEndStringExpr> */
RET_LABEL:;
}
/* method literal#AEndStringExpr#prefix for (self: AEndStringExpr): String */
val* nitc__literal___AEndStringExpr___AAugmentedLiteral__prefix(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = core__abstract_text___CString___to_s_full(var2, 0l, 0l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AStartStringExpr#delimiter_start for (self: AStartStringExpr): Char */
uint32_t nitc__literal___AStartStringExpr___AAugmentedLiteral__delimiter_start(val* self) {
uint32_t var /* : Char */;
short int var1 /* : Bool */;
uint32_t var2 /* : Char */;
uint32_t var3 /* : Char */;
val* var5 /* : Token */;
val* var7 /* : Token */;
val* var8 /* : String */;
val* var_str /* var str: String */;
long var_i /* var i: Int */;
long var9 /* : Int */;
long var_ /* var : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
uint32_t var14 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
long var23 /* : Int */;
var1 = self->attrs[COLOR_nitc__literal__AStartStringExpr__lazy_32d_delimiter_start].s; /* lazy _delimiter_start on <self:AStartStringExpr> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__literal__AStartStringExpr___delimiter_start].c; /* _delimiter_start on <self:AStartStringExpr> */
} else {
{
{
{ /* Inline parser_nodes#AStringFormExpr#n_string (self) on <self:AStartStringExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AStringFormExpr___n_string].val; /* _n_string on <self:AStartStringExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_string");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2616);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc__lexer_work___Token___text(var5);
}
var_str = var8;
var_i = 0l;
{
var9 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
var_ = var9;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var12 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var_i < var_;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
} else {
goto BREAK_label;
}
{
var14 = ((uint32_t(*)(val* self, long p0))(var_str->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_str, var_i); /* [] on <var_str:String>*/
}
var_c = var14;
{
{ /* Inline kernel#Char#== (var_c,'\"') on <var_c:Char> */
var18 = var_c == '\"';
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_19 = var16;
if (var16){
var15 = var_19;
} else {
{
{ /* Inline kernel#Char#== (var_c,'\'') on <var_c:Char> */
var22 = var_c == '\'';
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var15 = var20;
}
if (var15){
var3 = var_c;
goto RET_LABEL4;
} else {
}
{
var23 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var23;
}
BREAK_label: (void)0;
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 243);
fatal_exit(1);
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__literal__AStartStringExpr___delimiter_start].c = var3; /* _delimiter_start on <self:AStartStringExpr> */
var2 = var3;
self->attrs[COLOR_nitc__literal__AStartStringExpr__lazy_32d_delimiter_start].s = 1; /* lazy _delimiter_start on <self:AStartStringExpr> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method literal#AStartStringExpr#delimiter_start= for (self: AStartStringExpr, Char) */
void nitc__literal___AStartStringExpr___AugmentedStringFormExpr__delimiter_start_61d(val* self, uint32_t p0) {
self->attrs[COLOR_nitc__literal__AStartStringExpr___delimiter_start].c = p0; /* _delimiter_start on <self:AStartStringExpr> */
self->attrs[COLOR_nitc__literal__AStartStringExpr__lazy_32d_delimiter_start].s = 1; /* lazy _delimiter_start on <self:AStartStringExpr> */
RET_LABEL:;
}
/* method literal#AStartStringExpr#suffix for (self: AStartStringExpr): String */
val* nitc__literal___AStartStringExpr___AAugmentedLiteral__suffix(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = core__abstract_text___CString___to_s_full(var2, 0l, 0l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AMidStringExpr#prefix for (self: AMidStringExpr): String */
val* nitc__literal___AMidStringExpr___AAugmentedLiteral__prefix(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = core__abstract_text___CString___to_s_full(var2, 0l, 0l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AMidStringExpr#suffix for (self: AMidStringExpr): String */
val* nitc__literal___AMidStringExpr___AAugmentedLiteral__suffix(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = core__abstract_text___CString___to_s_full(var2, 0l, 0l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method literal#AStringExpr#delimiter_start for (self: AStringExpr): Char */
uint32_t nitc__literal___AStringExpr___AAugmentedLiteral__delimiter_start(val* self) {
uint32_t var /* : Char */;
short int var1 /* : Bool */;
uint32_t var2 /* : Char */;
uint32_t var3 /* : Char */;
val* var5 /* : String */;
val* var_str /* var str: String */;
long var_i /* var i: Int */;
long var6 /* : Int */;
long var_ /* var : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
uint32_t var11 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
long var20 /* : Int */;
var1 = self->attrs[COLOR_nitc__literal__AStringExpr__lazy_32d_delimiter_start].s; /* lazy _delimiter_start on <self:AStringExpr> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__literal__AStringExpr___delimiter_start].c; /* _delimiter_start on <self:AStringExpr> */
} else {
{
{
var5 = nitc__literal___AStringFormExpr___AAugmentedLiteral__text(self);
}
var_str = var5;
var_i = 0l;
{
var6 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
var_ = var6;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var9 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var10 = var_i < var_;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
} else {
goto BREAK_label;
}
{
var11 = ((uint32_t(*)(val* self, long p0))(var_str->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_str, var_i); /* [] on <var_str:String>*/
}
var_c = var11;
{
{ /* Inline kernel#Char#== (var_c,'\"') on <var_c:Char> */
var15 = var_c == '\"';
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_16 = var13;
if (var13){
var12 = var_16;
} else {
{
{ /* Inline kernel#Char#== (var_c,'\'') on <var_c:Char> */
var19 = var_c == '\'';
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var12 = var17;
}
if (var12){
{
nitc__literal___AStringExpr___AugmentedStringFormExpr__delimiter_end_61d(self, var_c); /* Direct call literal#AStringExpr#delimiter_end= on <self:AStringExpr>*/
}
var3 = var_c;
goto RET_LABEL4;
} else {
}
{
var20 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var20;
}
BREAK_label: (void)0;
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 265);
fatal_exit(1);
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__literal__AStringExpr___delimiter_start].c = var3; /* _delimiter_start on <self:AStringExpr> */
var2 = var3;
self->attrs[COLOR_nitc__literal__AStringExpr__lazy_32d_delimiter_start].s = 1; /* lazy _delimiter_start on <self:AStringExpr> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method literal#AStringExpr#delimiter_start= for (self: AStringExpr, Char) */
void nitc__literal___AStringExpr___AugmentedStringFormExpr__delimiter_start_61d(val* self, uint32_t p0) {
self->attrs[COLOR_nitc__literal__AStringExpr___delimiter_start].c = p0; /* _delimiter_start on <self:AStringExpr> */
self->attrs[COLOR_nitc__literal__AStringExpr__lazy_32d_delimiter_start].s = 1; /* lazy _delimiter_start on <self:AStringExpr> */
RET_LABEL:;
}
/* method literal#AStringExpr#delimiter_end for (self: AStringExpr): Char */
uint32_t nitc__literal___AStringExpr___AAugmentedLiteral__delimiter_end(val* self) {
uint32_t var /* : Char */;
short int var1 /* : Bool */;
uint32_t var2 /* : Char */;
uint32_t var3 /* : Char */;
uint32_t var5 /* : Char */;
var1 = self->attrs[COLOR_nitc__literal__AStringExpr__lazy_32d_delimiter_end].s; /* lazy _delimiter_end on <self:AStringExpr> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__literal__AStringExpr___delimiter_end].c; /* _delimiter_end on <self:AStringExpr> */
} else {
{
{
var5 = nitc__literal___AStringExpr___AAugmentedLiteral__delimiter_start(self);
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__literal__AStringExpr___delimiter_end].c = var3; /* _delimiter_end on <self:AStringExpr> */
var2 = var3;
self->attrs[COLOR_nitc__literal__AStringExpr__lazy_32d_delimiter_end].s = 1; /* lazy _delimiter_end on <self:AStringExpr> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method literal#AStringExpr#delimiter_end= for (self: AStringExpr, Char) */
void nitc__literal___AStringExpr___AugmentedStringFormExpr__delimiter_end_61d(val* self, uint32_t p0) {
self->attrs[COLOR_nitc__literal__AStringExpr___delimiter_end].c = p0; /* _delimiter_end on <self:AStringExpr> */
self->attrs[COLOR_nitc__literal__AStringExpr__lazy_32d_delimiter_end].s = 1; /* lazy _delimiter_end on <self:AStringExpr> */
RET_LABEL:;
}
/* method literal#AStringExpr#accept_literal for (self: AStringExpr, LiteralVisitor) */
void nitc__literal___AStringExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : ToolContext */;
val* var4 /* : ToolContext */;
val* var5 /* : Location */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : Message */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : String */;
val* var29 /* : Bytes */;
val* var31 /* : Bytes */;
val* var33 /* : Bytes */;
val* var34 /* : String */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__literal___AStringExpr___ANode__accept_literal]))(self, p0); /* accept_literal on <self:AStringExpr>*/
}
{
var = nitc___nitc__AugmentedStringFormExpr___AAugmentedLiteral__is_valid_augmentation(self);
}
var1 = !var;
if (var1){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var4 = var_v->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 46);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = nitc___nitc__ANode___hot_location(self);
}
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Error: invalid prefix/suffix combination ";
var10 = core__abstract_text___CString___to_s_full(var9, 41l, 41l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "/";
var14 = core__abstract_text___CString___to_s_full(var13, 1l, 1l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
{
var15 = nitc___nitc__AAugmentedLiteral___prefix(self);
}
((struct instance_core__NativeArray*)var6)->values[1]=var15;
{
var16 = nitc___nitc__AAugmentedLiteral___suffix(self);
}
((struct instance_core__NativeArray*)var6)->values[3]=var16;
{
var17 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
var18 = nitc___nitc__ToolContext___error(var2, var5, var17);
}
goto RET_LABEL;
} else {
}
{
var19 = nitc___nitc__AAugmentedLiteral___prefix(self);
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "raw";
var23 = core__abstract_text___CString___to_s_full(var22, 3l, 3l);
var21 = var23;
varonce20 = var21;
}
{
{ /* Inline kernel#Object#!= (var19,var21) on <var19:String> */
var_other = var21;
{
var26 = ((short int(*)(val* self, val* p0))(var19->class->vft[COLOR_core__kernel__Object___61d_61d]))(var19, var_other); /* == on <var19:String>*/
}
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
var28 = nitc__literal___AStringFormExpr___raw_text(self);
}
{
var29 = core__bytes___Text___unescape_to_bytes(var28);
}
{
{ /* Inline literal#AStringFormExpr#bytes= (self,var29) on <self:AStringExpr> */
self->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val = var29; /* _bytes on <self:AStringExpr> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline literal#AStringFormExpr#bytes (self) on <self:AStringExpr> */
var33 = self->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val; /* _bytes on <self:AStringExpr> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 204);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = core___core__Bytes___core__abstract_text__Object__to_s(var31);
}
{
{ /* Inline literal#AStringFormExpr#value= (self,var34) on <self:AStringExpr> */
self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val = var34; /* _value on <self:AStringExpr> */
RET_LABEL35:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method literal#ASuperstringExpr#prefix for (self: ASuperstringExpr): String */
val* nitc__literal___ASuperstringExpr___AAugmentedLiteral__prefix(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : ANodes[AExpr] */;
val* var7 /* : ANodes[AExpr] */;
val* var8 /* : nullable Object */;
val* var_fst /* var fst: AExpr */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : String */;
val* var_prf /* var prf: String */;
uint32_t var11 /* : Char */;
uint32_t var13 /* : Char */;
uint32_t var15 /* : Char */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
var1 = self->attrs[COLOR_nitc__literal__ASuperstringExpr___prefix].val != NULL; /* _prefix on <self:ASuperstringExpr> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__literal__ASuperstringExpr___prefix].val; /* _prefix on <self:ASuperstringExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _prefix");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 287);
fatal_exit(1);
}
} else {
{
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2645);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__SequenceRead___Collection__first(var5);
}
var_fst = var8;
/* <var_fst:AExpr> isa AugmentedStringFormExpr */
cltype = type_nitc__AugmentedStringFormExpr.color;
idtype = type_nitc__AugmentedStringFormExpr.id;
if(cltype >= var_fst->type->table_size) {
var9 = 0;
} else {
var9 = var_fst->type->type_table[cltype] == idtype;
}
if (var9){
{
var10 = ((val*(*)(val* self))(var_fst->class->vft[COLOR_nitc__literal__AAugmentedLiteral__prefix]))(var_fst); /* prefix on <var_fst:AExpr(AugmentedStringFormExpr)>*/
}
var_prf = var10;
{
var11 = ((uint32_t(*)(val* self))(var_fst->class->vft[COLOR_nitc__literal__AAugmentedLiteral__delimiter_start]))(var_fst); /* delimiter_start on <var_fst:AExpr(AugmentedStringFormExpr)>*/
}
{
{ /* Inline literal#AugmentedStringFormExpr#delimiter_start= (self,var11) on <self:ASuperstringExpr> */
self->attrs[COLOR_nitc__literal__AugmentedStringFormExpr___delimiter_start].c = var11; /* _delimiter_start on <self:ASuperstringExpr> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline literal#AugmentedStringFormExpr#delimiter_start (self) on <self:ASuperstringExpr> */
var15 = self->attrs[COLOR_nitc__literal__AugmentedStringFormExpr___delimiter_start].c; /* _delimiter_start on <self:ASuperstringExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline literal#AugmentedStringFormExpr#delimiter_end= (self,var13) on <self:ASuperstringExpr> */
self->attrs[COLOR_nitc__literal__AugmentedStringFormExpr___delimiter_end].c = var13; /* _delimiter_end on <self:ASuperstringExpr> */
RET_LABEL16:(void)0;
}
}
var3 = var_prf;
goto RET_LABEL4;
} else {
}
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "";
var19 = core__abstract_text___CString___to_s_full(var18, 0l, 0l);
var17 = var19;
varonce = var17;
}
var3 = var17;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__literal__ASuperstringExpr___prefix].val = var3; /* _prefix on <self:ASuperstringExpr> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method literal#ASuperstringExpr#suffix for (self: ASuperstringExpr): String */
val* nitc__literal___ASuperstringExpr___AAugmentedLiteral__suffix(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : ANodes[AExpr] */;
val* var7 /* : ANodes[AExpr] */;
val* var8 /* : nullable Object */;
val* var_lst /* var lst: AExpr */;
val* var9 /* : String */;
short int var10 /* : Bool */;
int cltype;
int idtype;
uint32_t var11 /* : Char */;
uint32_t var13 /* : Char */;
val* var14 /* : String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
var1 = self->attrs[COLOR_nitc__literal__ASuperstringExpr___suffix].val != NULL; /* _suffix on <self:ASuperstringExpr> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__literal__ASuperstringExpr___suffix].val; /* _suffix on <self:ASuperstringExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _suffix");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 298);
fatal_exit(1);
}
} else {
{
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2645);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__SequenceRead___last(var5);
}
var_lst = var8;
{
var9 = nitc__literal___ASuperstringExpr___AAugmentedLiteral__prefix(self);
}
/* <var_lst:AExpr> isa AugmentedStringFormExpr */
cltype = type_nitc__AugmentedStringFormExpr.color;
idtype = type_nitc__AugmentedStringFormExpr.id;
if(cltype >= var_lst->type->table_size) {
var10 = 0;
} else {
var10 = var_lst->type->type_table[cltype] == idtype;
}
if (var10){
{
{ /* Inline literal#AugmentedStringFormExpr#delimiter_start (self) on <self:ASuperstringExpr> */
var13 = self->attrs[COLOR_nitc__literal__AugmentedStringFormExpr___delimiter_start].c; /* _delimiter_start on <self:ASuperstringExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
((void(*)(val* self, uint32_t p0))(var_lst->class->vft[COLOR_nitc__literal__AugmentedStringFormExpr__delimiter_end_61d]))(var_lst, var11); /* delimiter_end= on <var_lst:AExpr(AugmentedStringFormExpr)>*/
}
{
var14 = ((val*(*)(val* self))(var_lst->class->vft[COLOR_nitc__literal__AAugmentedLiteral__suffix]))(var_lst); /* suffix on <var_lst:AExpr(AugmentedStringFormExpr)>*/
}
var3 = var14;
goto RET_LABEL4;
} else {
}
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "";
var17 = core__abstract_text___CString___to_s_full(var16, 0l, 0l);
var15 = var17;
varonce = var15;
}
var3 = var15;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__literal__ASuperstringExpr___suffix].val = var3; /* _suffix on <self:ASuperstringExpr> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method literal#ASuperstringExpr#accept_literal for (self: ASuperstringExpr, LiteralVisitor) */
void nitc__literal___ASuperstringExpr___ANode__accept_literal(val* self, val* p0) {
val* var_v /* var v: LiteralVisitor */;
short int var /* : Bool */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var4 /* : Location */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
val* var8 /* : Message */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : Location */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : Message */;
var_v = p0;
{
var = nitc___nitc__AugmentedStringFormExpr___is_bytestring(self);
}
if (var){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var3 = var_v->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 46);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__ANode___hot_location(self);
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "Error: cannot produce a ByteString on a Superstring";
var7 = core__abstract_text___CString___to_s_full(var6, 51l, 51l);
var5 = var7;
varonce = var5;
}
{
var8 = nitc___nitc__ToolContext___error(var1, var4, var5);
}
goto RET_LABEL;
} else {
}
{
var9 = nitc___nitc__AugmentedStringFormExpr___AAugmentedLiteral__is_valid_augmentation(self);
}
var10 = !var9;
if (var10){
{
{ /* Inline literal#LiteralVisitor#toolcontext (var_v) on <var_v:LiteralVisitor> */
var13 = var_v->attrs[COLOR_nitc__literal__LiteralVisitor___toolcontext].val; /* _toolcontext on <var_v:LiteralVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 46);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc___nitc__ANode___hot_location(self);
}
if (unlikely(varonce15==NULL)) {
var16 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "Error: invalid prefix/suffix combination ";
var20 = core__abstract_text___CString___to_s_full(var19, 41l, 41l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var16)->values[0]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "/";
var24 = core__abstract_text___CString___to_s_full(var23, 1l, 1l);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var16)->values[2]=var22;
} else {
var16 = varonce15;
varonce15 = NULL;
}
{
var25 = nitc__literal___ASuperstringExpr___AAugmentedLiteral__prefix(self);
}
((struct instance_core__NativeArray*)var16)->values[1]=var25;
{
var26 = nitc__literal___ASuperstringExpr___AAugmentedLiteral__suffix(self);
}
((struct instance_core__NativeArray*)var16)->values[3]=var26;
{
var27 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
{
var28 = nitc___nitc__ToolContext___error(var11, var14, var27);
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method literal#ASuperstringExpr#visit_all for (self: ASuperstringExpr, Visitor) */
void nitc__literal___ASuperstringExpr___nitc__parser_nodes__ANode__visit_all(val* self, val* p0) {
val* var_v /* var v: Visitor */;
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ANodes[AExpr] */;
val* var10 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var11 /* : Iterator[ANode] */;
val* var_12 /* var : Iterator[AExpr] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_i /* var i: AExpr */;
short int var15 /* : Bool */;
int cltype;
int idtype;
short int var16 /* : Bool */;
val* var18 /* : String */;
val* var19 /* : Bytes */;
val* var21 /* : Bytes */;
val* var23 /* : Bytes */;
val* var24 /* : String */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__literal___ASuperstringExpr___nitc__parser_nodes__ANode__visit_all]))(self, p0); /* visit_all on <self:ASuperstringExpr>*/
}
{
var = nitc__literal___ASuperstringExpr___AAugmentedLiteral__prefix(self);
}
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "raw";
var3 = core__abstract_text___CString___to_s_full(var2, 3l, 3l);
var1 = var3;
varonce = var1;
}
{
{ /* Inline kernel#Object#!= (var,var1) on <var:String> */
var_other = var1;
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:String>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var10 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2645);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
{
var11 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:Iterator[AExpr]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:Iterator[AExpr]>*/
}
var_i = var14;
/* <var_i:AExpr> isa AStringFormExpr */
cltype = type_nitc__AStringFormExpr.color;
idtype = type_nitc__AStringFormExpr.id;
if(cltype >= var_i->type->table_size) {
var15 = 0;
} else {
var15 = var_i->type->type_table[cltype] == idtype;
}
var16 = !var15;
if (var16){
goto BREAK_label17;
} else {
}
{
var18 = nitc__literal___AStringFormExpr___raw_text(var_i);
}
{
var19 = core__bytes___Text___unescape_to_bytes(var18);
}
{
{ /* Inline literal#AStringFormExpr#bytes= (var_i,var19) on <var_i:AExpr(AStringFormExpr)> */
var_i->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val = var19; /* _bytes on <var_i:AExpr(AStringFormExpr)> */
RET_LABEL20:(void)0;
}
}
{
{ /* Inline literal#AStringFormExpr#bytes (var_i) on <var_i:AExpr(AStringFormExpr)> */
var23 = var_i->attrs[COLOR_nitc__literal__AStringFormExpr___bytes].val; /* _bytes on <var_i:AExpr(AStringFormExpr)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bytes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 204);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = core___core__Bytes___core__abstract_text__Object__to_s(var21);
}
{
{ /* Inline literal#AStringFormExpr#value= (var_i,var24) on <var_i:AExpr(AStringFormExpr)> */
var_i->attrs[COLOR_nitc__literal__AStringFormExpr___value].val = var24; /* _value on <var_i:AExpr(AStringFormExpr)> */
RET_LABEL25:(void)0;
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:Iterator[AExpr]>*/
}
} else {
}
RET_LABEL:;
}
