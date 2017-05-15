#include "nitc__parser_util.sep.0.h"
/* method parser_util#ToolContext#parse_module for (self: ToolContext, String): AModule */
val* nitc__parser_util___ToolContext___parse_module(val* self, val* p0) {
val* var /* : AModule */;
val* var_string /* var string: String */;
val* var1 /* : SourceFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var_source /* var source: SourceFile */;
val* var5 /* : Lexer */;
val* var_lexer /* var lexer: Lexer */;
val* var6 /* : Parser */;
val* var_parser /* var parser: Parser */;
val* var7 /* : Start */;
val* var_tree /* var tree: Start */;
val* var8 /* : EOF */;
val* var10 /* : EOF */;
val* var_eof /* var eof: EOF */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var13 /* : NativeArray[String] */;
static val* varonce12;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var26 /* : nullable AModule */;
val* var28 /* : nullable AModule */;
var_string = p0;
var1 = NEW_nitc__SourceFile(&type_nitc__SourceFile);
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = core__abstract_text___CString___to_s_full(var3, 0l, 0l);
var2 = var4;
varonce = var2;
}
{
nitc___nitc__SourceFile___from_string(var1, var2, var_string); /* Direct call location#SourceFile#from_string on <var1:SourceFile>*/
}
var_source = var1;
var5 = NEW_nitc__Lexer(&type_nitc__Lexer);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nitc__lexer_work__Lexer__file_61d]))(var5, var_source); /* file= on <var5:Lexer>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:Lexer>*/
}
var_lexer = var5;
var6 = NEW_nitc__Parser(&type_nitc__Parser);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__parser_work__Parser__lexer_61d]))(var6, var_lexer); /* lexer= on <var6:Parser>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:Parser>*/
}
var_parser = var6;
{
var7 = nitc___nitc__Parser___parse(var_parser);
}
var_tree = var7;
{
{ /* Inline parser_nodes#Start#n_eof (var_tree) on <var_tree:Start> */
var10 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_eof].val; /* _n_eof on <var_tree:Start> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3056);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_eof = var8;
/* <var_eof:EOF> isa AError */
cltype = type_nitc__AError.color;
idtype = type_nitc__AError.id;
if(cltype >= var_eof->type->table_size) {
var11 = 0;
} else {
var11 = var_eof->type->type_table[cltype] == idtype;
}
if (var11){
if (unlikely(varonce12==NULL)) {
var13 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Fatal Error: ";
var17 = core__abstract_text___CString___to_s_full(var16, 13l, 13l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var13)->values[0]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = ".";
var21 = core__abstract_text___CString___to_s_full(var20, 1l, 1l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var13)->values[2]=var19;
} else {
var13 = varonce12;
varonce12 = NULL;
}
{
{ /* Inline lexer_work#AError#message (var_eof) on <var_eof:EOF(AError)> */
var24 = var_eof->attrs[COLOR_nitc__lexer_work__AError___message].val; /* _message on <var_eof:EOF(AError)> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__lexer_work, 50);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
((struct instance_core__NativeArray*)var13)->values[1]=var22;
{
var25 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce12 = var13;
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var25); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 34);
fatal_exit(1);
} else {
}
{
{ /* Inline parser_nodes#Start#n_base (var_tree) on <var_tree:Start> */
var28 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_base].val; /* _n_base on <var_tree:Start> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 36);
fatal_exit(1);
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_classdef for (self: ToolContext, String): AClassdef */
val* nitc__parser_util___ToolContext___parse_classdef(val* self, val* p0) {
val* var /* : AClassdef */;
val* var_string /* var string: String */;
val* var1 /* : AModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var2 /* : ANodes[AClassdef] */;
val* var4 /* : ANodes[AClassdef] */;
val* var_nclassdefs /* var nclassdefs: ANodes[AClassdef] */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Object */;
var_string = p0;
{
var1 = nitc__parser_util___ToolContext___parse_module(self, var_string);
}
var_nmodule = var1;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var4 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_nclassdefs = var2;
{
var5 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_nclassdefs);
}
{
{ /* Inline kernel#Int#!= (var5,1l) on <var5:Int> */
var8 = var5 == 1l;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "Fatal Error: not a classdef.";
var12 = core__abstract_text___CString___to_s_full(var11, 28l, 28l);
var10 = var12;
varonce = var10;
}
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var10); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 47);
fatal_exit(1);
} else {
}
{
var13 = core___core__SequenceRead___Collection__first(var_nclassdefs);
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_propdef for (self: ToolContext, String): APropdef */
val* nitc__parser_util___ToolContext___parse_propdef(val* self, val* p0) {
val* var /* : APropdef */;
val* var_string /* var string: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var11 /* : AClassdef */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var12 /* : ANodes[APropdef] */;
val* var14 /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Object */;
var_string = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "class Dummy\n";
var5 = core__abstract_text___CString___to_s_full(var4, 12l, 12l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\nend";
var9 = core__abstract_text___CString___to_s_full(var8, 4l, 4l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var1)->values[1]=var_string;
{
var10 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_mod_string = var10;
{
var11 = nitc__parser_util___ToolContext___parse_classdef(self, var_mod_string);
}
var_nclassdef = var11;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var14 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_npropdefs = var12;
{
var15 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_npropdefs);
}
{
{ /* Inline kernel#Int#!= (var15,1l) on <var15:Int> */
var18 = var15 == 1l;
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Fatal Error: not a propdef.";
var23 = core__abstract_text___CString___to_s_full(var22, 27l, 27l);
var21 = var23;
varonce20 = var21;
}
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var21); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 61);
fatal_exit(1);
} else {
}
{
var24 = core___core__SequenceRead___Collection__first(var_npropdefs);
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_expr for (self: ToolContext, String): AExpr */
val* nitc__parser_util___ToolContext___parse_expr(val* self, val* p0) {
val* var /* : AExpr */;
val* var_string /* var string: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var7 /* : AModule */;
val* var_nmodule /* var nmodule: AModule */;
val* var8 /* : ANodes[AClassdef] */;
val* var10 /* : ANodes[AClassdef] */;
val* var11 /* : nullable Object */;
val* var12 /* : ANodes[APropdef] */;
val* var14 /* : ANodes[APropdef] */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var17 /* : nullable AExpr */;
val* var19 /* : nullable AExpr */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : ANodes[AExpr] */;
val* var26 /* : ANodes[AExpr] */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
val* var32 /* : nullable AExpr */;
val* var34 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
var_string = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "var dummy = \n";
var5 = core__abstract_text___CString___to_s_full(var4, 13l, 13l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var1)->values[1]=var_string;
{
var6 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_mod_string = var6;
{
var7 = nitc__parser_util___ToolContext___parse_module(self, var_mod_string);
}
var_nmodule = var7;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var10 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = core___core__SequenceRead___Collection__first(var8);
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var11) on <var11:nullable Object(AClassdef)> */
var14 = var11->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var11:nullable Object(AClassdef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = core___core__SequenceRead___Collection__first(var12);
}
/* <var15:nullable Object(APropdef)> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var15->type->table_size) {
var16 = 0;
} else {
var16 = var15->type->type_table[cltype] == idtype;
}
if (unlikely(!var16)) {
var_class_name = var15 == NULL ? "null" : var15->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 82);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (var15) on <var15:APropdef(AMethPropdef)> */
var19 = var15->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <var15:APropdef(AMethPropdef)> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
/* <var17:nullable AExpr> isa ABlockExpr */
cltype21 = type_nitc__ABlockExpr.color;
idtype22 = type_nitc__ABlockExpr.id;
if(var17 == NULL) {
var20 = 0;
} else {
if(cltype21 >= var17->type->table_size) {
var20 = 0;
} else {
var20 = var17->type->type_table[cltype21] == idtype22;
}
}
if (unlikely(!var20)) {
var_class_name23 = var17 == NULL ? "null" : var17->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 82);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var17) on <var17:nullable AExpr(ABlockExpr)> */
var26 = var17->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var17:nullable AExpr(ABlockExpr)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = core___core__SequenceRead___Collection__first(var24);
}
/* <var27:nullable Object(AExpr)> isa AVardeclExpr */
cltype29 = type_nitc__AVardeclExpr.color;
idtype30 = type_nitc__AVardeclExpr.id;
if(cltype29 >= var27->type->table_size) {
var28 = 0;
} else {
var28 = var27->type->type_table[cltype29] == idtype30;
}
if (unlikely(!var28)) {
var_class_name31 = var27 == NULL ? "null" : var27->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVardeclExpr", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 82);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AVardeclExpr#n_expr (var27) on <var27:AExpr(AVardeclExpr)> */
var34 = var27->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <var27:AExpr(AVardeclExpr)> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 82);
fatal_exit(1);
}
var_nexpr = var32;
var = var_nexpr;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_superclass for (self: ToolContext, String): APropdef */
val* nitc__parser_util___ToolContext___parse_superclass(val* self, val* p0) {
val* var /* : APropdef */;
val* var_string /* var string: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_mod_string /* var mod_string: String */;
val* var11 /* : AClassdef */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_nclassdef /* var nclassdef: AStdClassdef */;
val* var13 /* : ANodes[APropdef] */;
val* var15 /* : ANodes[APropdef] */;
val* var_nsuperclasses /* var nsuperclasses: ANodes[APropdef] */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Object */;
var_string = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "class Dummy\nsuper ";
var5 = core__abstract_text___CString___to_s_full(var4, 18l, 18l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\nend";
var9 = core__abstract_text___CString___to_s_full(var8, 4l, 4l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var1)->values[1]=var_string;
{
var10 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_mod_string = var10;
{
var11 = nitc__parser_util___ToolContext___parse_classdef(self, var_mod_string);
}
/* <var11:AClassdef> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var11->type->table_size) {
var12 = 0;
} else {
var12 = var11->type->type_table[cltype] == idtype;
}
if (unlikely(!var12)) {
var_class_name = var11 == NULL ? "null" : var11->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AStdClassdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 91);
fatal_exit(1);
}
var_nclassdef = var11;
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AStdClassdef> */
var15 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AStdClassdef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_nsuperclasses = var13;
{
var16 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_nsuperclasses);
}
{
{ /* Inline kernel#Int#!= (var16,1l) on <var16:Int> */
var19 = var16 == 1l;
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "Fatal Error: not a super class declaration.";
var24 = core__abstract_text___CString___to_s_full(var23, 43l, 43l);
var22 = var24;
varonce21 = var22;
}
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var22); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 95);
fatal_exit(1);
} else {
}
{
var25 = core___core__SequenceRead___Collection__first(var_nsuperclasses);
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#ToolContext#parse_something for (self: ToolContext, String): ANode */
val* nitc__parser_util___ToolContext___parse_something(val* self, val* p0) {
val* var /* : ANode */;
val* var_string /* var string: String */;
val* var1 /* : SourceFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var_source /* var source: SourceFile */;
val* var5 /* : InjectedLexer */;
val* var_lexer /* var lexer: nullable Object */;
val* var6 /* : List[Token] */;
val* var8 /* : List[Token] */;
val* var9 /* : TKwvar */;
val* var11 /* : List[Token] */;
val* var13 /* : List[Token] */;
val* var14 /* : TId */;
val* var16 /* : List[Token] */;
val* var18 /* : List[Token] */;
val* var19 /* : TColumn */;
val* var21 /* : List[Token] */;
val* var23 /* : List[Token] */;
val* var24 /* : TClassid */;
val* var26 /* : List[Token] */;
val* var28 /* : List[Token] */;
val* var29 /* : TObra */;
val* var31 /* : List[Token] */;
val* var33 /* : List[Token] */;
val* var34 /* : TCbra */;
val* var36 /* : Parser */;
val* var37 /* : Start */;
val* var_tree /* var tree: nullable Object */;
val* var38 /* : EOF */;
val* var40 /* : EOF */;
val* var_eof /* var eof: nullable Object */;
short int var41 /* : Bool */;
int cltype;
int idtype;
short int var42 /* : Bool */;
val* var43 /* : nullable AModule */;
val* var45 /* : nullable AModule */;
val* var46 /* : ANodes[AClassdef] */;
val* var48 /* : ANodes[AClassdef] */;
val* var49 /* : nullable Object */;
val* var50 /* : ANodes[APropdef] */;
val* var52 /* : ANodes[APropdef] */;
val* var53 /* : nullable Object */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name;
val* var57 /* : nullable AExpr */;
val* var59 /* : nullable AExpr */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
val* var64 /* : ANodes[AExpr] */;
val* var66 /* : ANodes[AExpr] */;
val* var67 /* : nullable Object */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
val* var72 /* : nullable AType */;
val* var74 /* : nullable AType */;
val* var75 /* : ANodes[AType] */;
val* var77 /* : ANodes[AType] */;
val* var78 /* : nullable Object */;
val* var_ntype /* var ntype: AType */;
val* var_error /* var error: nullable Object */;
val* var80 /* : Lexer */;
val* var81 /* : Token */;
val* var_first /* var first: Token */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
val* var85 /* : Token */;
val* var_second /* var second: Token */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
short int var_ /* var : Bool */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
short int var93 /* : Bool */;
val* var95 /* : InjectedLexer */;
val* var96 /* : List[Token] */;
val* var98 /* : List[Token] */;
val* var99 /* : TKwvar */;
val* var101 /* : List[Token] */;
val* var103 /* : List[Token] */;
val* var104 /* : TId */;
val* var106 /* : List[Token] */;
val* var108 /* : List[Token] */;
val* var109 /* : TAssign */;
val* var111 /* : List[Token] */;
val* var113 /* : List[Token] */;
val* var114 /* : TOpar */;
val* var116 /* : List[Token] */;
val* var118 /* : List[Token] */;
val* var119 /* : TCpar */;
val* var121 /* : Parser */;
val* var122 /* : Start */;
val* var123 /* : EOF */;
val* var125 /* : EOF */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
short int var129 /* : Bool */;
val* var130 /* : nullable AModule */;
val* var132 /* : nullable AModule */;
val* var133 /* : ANodes[AClassdef] */;
val* var135 /* : ANodes[AClassdef] */;
val* var136 /* : nullable Object */;
val* var137 /* : ANodes[APropdef] */;
val* var139 /* : ANodes[APropdef] */;
val* var140 /* : nullable Object */;
short int var141 /* : Bool */;
int cltype142;
int idtype143;
const char* var_class_name144;
val* var145 /* : nullable AExpr */;
val* var147 /* : nullable AExpr */;
short int var148 /* : Bool */;
int cltype149;
int idtype150;
const char* var_class_name151;
val* var152 /* : ANodes[AExpr] */;
val* var154 /* : ANodes[AExpr] */;
val* var155 /* : nullable Object */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
const char* var_class_name159;
val* var160 /* : nullable AExpr */;
val* var162 /* : nullable AExpr */;
short int var163 /* : Bool */;
int cltype164;
int idtype165;
const char* var_class_name166;
val* var167 /* : AExpr */;
val* var169 /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
val* var171 /* : Location */;
val* var173 /* : Location */;
val* var174 /* : Location */;
val* var176 /* : Location */;
short int var177 /* : Bool */;
val* var178 /* : InjectedLexer */;
val* var179 /* : List[Token] */;
val* var181 /* : List[Token] */;
val* var182 /* : TKwdo */;
val* var184 /* : List[Token] */;
val* var186 /* : List[Token] */;
val* var187 /* : TEol */;
val* var189 /* : List[Token] */;
val* var191 /* : List[Token] */;
val* var192 /* : TEol */;
val* var194 /* : List[Token] */;
val* var196 /* : List[Token] */;
val* var197 /* : TKwend */;
val* var199 /* : Parser */;
val* var200 /* : Start */;
val* var201 /* : EOF */;
val* var203 /* : EOF */;
short int var204 /* : Bool */;
int cltype205;
int idtype206;
short int var207 /* : Bool */;
val* var208 /* : nullable AModule */;
val* var210 /* : nullable AModule */;
val* var211 /* : ANodes[AClassdef] */;
val* var213 /* : ANodes[AClassdef] */;
val* var214 /* : nullable Object */;
val* var215 /* : ANodes[APropdef] */;
val* var217 /* : ANodes[APropdef] */;
val* var218 /* : nullable Object */;
short int var219 /* : Bool */;
int cltype220;
int idtype221;
const char* var_class_name222;
val* var223 /* : nullable AExpr */;
val* var225 /* : nullable AExpr */;
short int var226 /* : Bool */;
int cltype227;
int idtype228;
const char* var_class_name229;
val* var230 /* : ANodes[AExpr] */;
val* var232 /* : ANodes[AExpr] */;
val* var233 /* : nullable Object */;
short int var234 /* : Bool */;
int cltype235;
int idtype236;
const char* var_class_name237;
val* var238 /* : nullable AExpr */;
val* var240 /* : nullable AExpr */;
short int var241 /* : Bool */;
int cltype242;
int idtype243;
const char* var_class_name244;
val* var_nblock /* var nblock: ABlockExpr */;
val* var246 /* : Location */;
val* var248 /* : Location */;
val* var249 /* : Location */;
val* var251 /* : Location */;
short int var252 /* : Bool */;
val* var253 /* : Lexer */;
val* var254 /* : Parser */;
val* var255 /* : Start */;
val* var256 /* : EOF */;
val* var258 /* : EOF */;
short int var259 /* : Bool */;
int cltype260;
int idtype261;
short int var262 /* : Bool */;
val* var263 /* : nullable AModule */;
val* var265 /* : nullable AModule */;
val* var266 /* : Location */;
val* var268 /* : Location */;
val* var269 /* : Location */;
val* var271 /* : Location */;
short int var272 /* : Bool */;
var_string = p0;
var1 = NEW_nitc__SourceFile(&type_nitc__SourceFile);
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = core__abstract_text___CString___to_s_full(var3, 0l, 0l);
var2 = var4;
varonce = var2;
}
{
nitc___nitc__SourceFile___from_string(var1, var2, var_string); /* Direct call location#SourceFile#from_string on <var1:SourceFile>*/
}
var_source = var1;
var5 = NEW_nitc__InjectedLexer(&type_nitc__InjectedLexer);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nitc__lexer_work__Lexer__file_61d]))(var5, var_source); /* file= on <var5:InjectedLexer>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:InjectedLexer>*/
}
var_lexer = var5;
{
{ /* Inline parser_util#InjectedLexer#injected_before (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var8 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NEW_nitc__TKwvar(&type_nitc__TKwvar);
{
{ /* Inline kernel#Object#init (var9) on <var9:TKwvar> */
RET_LABEL10:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var6, var9); /* Direct call abstract_collection#Sequence#add on <var6:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#injected_before (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var13 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = NEW_nitc__TId(&type_nitc__TId);
{
{ /* Inline kernel#Object#init (var14) on <var14:TId> */
RET_LABEL15:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var11, var14); /* Direct call abstract_collection#Sequence#add on <var11:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#injected_before (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var18 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = NEW_nitc__TColumn(&type_nitc__TColumn);
{
{ /* Inline kernel#Object#init (var19) on <var19:TColumn> */
RET_LABEL20:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var16, var19); /* Direct call abstract_collection#Sequence#add on <var16:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#injected_before (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var23 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = NEW_nitc__TClassid(&type_nitc__TClassid);
{
{ /* Inline kernel#Object#init (var24) on <var24:TClassid> */
RET_LABEL25:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var21, var24); /* Direct call abstract_collection#Sequence#add on <var21:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#injected_before (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var28 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = NEW_nitc__TObra(&type_nitc__TObra);
{
{ /* Inline kernel#Object#init (var29) on <var29:TObra> */
RET_LABEL30:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var26, var29); /* Direct call abstract_collection#Sequence#add on <var26:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#injected_after (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var33 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_after].val; /* _injected_after on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_after");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 232);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var34 = NEW_nitc__TCbra(&type_nitc__TCbra);
{
{ /* Inline kernel#Object#init (var34) on <var34:TCbra> */
RET_LABEL35:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var31, var34); /* Direct call abstract_collection#Sequence#add on <var31:List[Token]>*/
}
var36 = NEW_nitc__Parser(&type_nitc__Parser);
{
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_nitc__parser_work__Parser__lexer_61d]))(var36, var_lexer); /* lexer= on <var36:Parser>*/
}
{
((void(*)(val* self))(var36->class->vft[COLOR_core__kernel__Object__init]))(var36); /* init on <var36:Parser>*/
}
{
var37 = nitc___nitc__Parser___parse(var36);
}
var_tree = var37;
{
{ /* Inline parser_nodes#Start#n_eof (var_tree) on <var_tree:nullable Object(Start)> */
var40 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_eof].val; /* _n_eof on <var_tree:nullable Object(Start)> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3056);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_eof = var38;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype = type_nitc__AError.color;
idtype = type_nitc__AError.id;
if(cltype >= var_eof->type->table_size) {
var41 = 0;
} else {
var41 = var_eof->type->type_table[cltype] == idtype;
}
var42 = !var41;
if (var42){
{
{ /* Inline parser_nodes#Start#n_base (var_tree) on <var_tree:nullable Object(Start)> */
var45 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_base].val; /* _n_base on <var_tree:nullable Object(Start)> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (var43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 137);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#AModule#n_classdefs (var43) on <var43:nullable AModule> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var48 = var43->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var43:nullable AModule> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = core___core__SequenceRead___Collection__first(var46);
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var49) on <var49:nullable Object(AClassdef)> */
var52 = var49->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var49:nullable Object(AClassdef)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = core___core__SequenceRead___Collection__first(var50);
}
/* <var53:nullable Object(APropdef)> isa AMethPropdef */
cltype55 = type_nitc__AMethPropdef.color;
idtype56 = type_nitc__AMethPropdef.id;
if(cltype55 >= var53->type->table_size) {
var54 = 0;
} else {
var54 = var53->type->type_table[cltype55] == idtype56;
}
if (unlikely(!var54)) {
var_class_name = var53 == NULL ? "null" : var53->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 137);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (var53) on <var53:APropdef(AMethPropdef)> */
var59 = var53->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <var53:APropdef(AMethPropdef)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
/* <var57:nullable AExpr> isa ABlockExpr */
cltype61 = type_nitc__ABlockExpr.color;
idtype62 = type_nitc__ABlockExpr.id;
if(var57 == NULL) {
var60 = 0;
} else {
if(cltype61 >= var57->type->table_size) {
var60 = 0;
} else {
var60 = var57->type->type_table[cltype61] == idtype62;
}
}
if (unlikely(!var60)) {
var_class_name63 = var57 == NULL ? "null" : var57->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 137);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var57) on <var57:nullable AExpr(ABlockExpr)> */
var66 = var57->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var57:nullable AExpr(ABlockExpr)> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = core___core__SequenceRead___Collection__first(var64);
}
/* <var67:nullable Object(AExpr)> isa AVardeclExpr */
cltype69 = type_nitc__AVardeclExpr.color;
idtype70 = type_nitc__AVardeclExpr.id;
if(cltype69 >= var67->type->table_size) {
var68 = 0;
} else {
var68 = var67->type->type_table[cltype69] == idtype70;
}
if (unlikely(!var68)) {
var_class_name71 = var67 == NULL ? "null" : var67->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVardeclExpr", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 137);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AVardeclExpr#n_type (var67) on <var67:AExpr(AVardeclExpr)> */
var74 = var67->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <var67:AExpr(AVardeclExpr)> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (var72 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 137);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#AType#n_types (var72) on <var72:nullable AType> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1782);
fatal_exit(1);
}
var77 = var72->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var72:nullable AType> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1782);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = core___core__SequenceRead___Collection__first(var75);
}
var_ntype = var78;
{
{ /* Inline parser_nodes#ANode#parent= (var_ntype,((val*)NULL)) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = ((val*)NULL); /* _parent on <var_ntype:AType> */
RET_LABEL79:(void)0;
}
}
var = var_ntype;
goto RET_LABEL;
} else {
}
var_error = var_eof;
var80 = NEW_nitc__Lexer(&type_nitc__Lexer);
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_nitc__lexer_work__Lexer__file_61d]))(var80, var_source); /* file= on <var80:Lexer>*/
}
{
((void(*)(val* self))(var80->class->vft[COLOR_core__kernel__Object__init]))(var80); /* init on <var80:Lexer>*/
}
var_lexer = var80;
{
var81 = nitc___nitc__Lexer___next(var_lexer);
}
var_first = var81;
/* <var_first:Token> isa EOF */
cltype83 = type_nitc__EOF.color;
idtype84 = type_nitc__EOF.id;
if(cltype83 >= var_first->type->table_size) {
var82 = 0;
} else {
var82 = var_first->type->type_table[cltype83] == idtype84;
}
if (var82){
var = var_first;
goto RET_LABEL;
} else {
}
{
var85 = nitc___nitc__Lexer___next(var_lexer);
}
var_second = var85;
/* <var_second:Token> isa EOF */
cltype88 = type_nitc__EOF.color;
idtype89 = type_nitc__EOF.id;
if(cltype88 >= var_second->type->table_size) {
var87 = 0;
} else {
var87 = var_second->type->type_table[cltype88] == idtype89;
}
var_ = var87;
if (var87){
/* <var_second:Token(EOF)> isa AError */
cltype91 = type_nitc__AError.color;
idtype92 = type_nitc__AError.id;
if(cltype91 >= var_second->type->table_size) {
var90 = 0;
} else {
var90 = var_second->type->type_table[cltype91] == idtype92;
}
var93 = !var90;
var86 = var93;
} else {
var86 = var_;
}
if (var86){
{
{ /* Inline parser_nodes#ANode#parent= (var_first,((val*)NULL)) on <var_first:Token> */
var_first->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = ((val*)NULL); /* _parent on <var_first:Token> */
RET_LABEL94:(void)0;
}
}
var = var_first;
goto RET_LABEL;
} else {
}
var95 = NEW_nitc__InjectedLexer(&type_nitc__InjectedLexer);
{
((void(*)(val* self, val* p0))(var95->class->vft[COLOR_nitc__lexer_work__Lexer__file_61d]))(var95, var_source); /* file= on <var95:InjectedLexer>*/
}
{
((void(*)(val* self))(var95->class->vft[COLOR_core__kernel__Object__init]))(var95); /* init on <var95:InjectedLexer>*/
}
var_lexer = var95;
{
{ /* Inline parser_util#InjectedLexer#injected_before (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var98 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
var99 = NEW_nitc__TKwvar(&type_nitc__TKwvar);
{
{ /* Inline kernel#Object#init (var99) on <var99:TKwvar> */
RET_LABEL100:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var96, var99); /* Direct call abstract_collection#Sequence#add on <var96:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#injected_before (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var103 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
var104 = NEW_nitc__TId(&type_nitc__TId);
{
{ /* Inline kernel#Object#init (var104) on <var104:TId> */
RET_LABEL105:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var101, var104); /* Direct call abstract_collection#Sequence#add on <var101:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#injected_before (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var108 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
var109 = NEW_nitc__TAssign(&type_nitc__TAssign);
{
{ /* Inline kernel#Object#init (var109) on <var109:TAssign> */
RET_LABEL110:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var106, var109); /* Direct call abstract_collection#Sequence#add on <var106:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#injected_before (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var113 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
var114 = NEW_nitc__TOpar(&type_nitc__TOpar);
{
{ /* Inline kernel#Object#init (var114) on <var114:TOpar> */
RET_LABEL115:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var111, var114); /* Direct call abstract_collection#Sequence#add on <var111:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#injected_after (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var118 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_after].val; /* _injected_after on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_after");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 232);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
var119 = NEW_nitc__TCpar(&type_nitc__TCpar);
{
{ /* Inline kernel#Object#init (var119) on <var119:TCpar> */
RET_LABEL120:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var116, var119); /* Direct call abstract_collection#Sequence#add on <var116:List[Token]>*/
}
var121 = NEW_nitc__Parser(&type_nitc__Parser);
{
((void(*)(val* self, val* p0))(var121->class->vft[COLOR_nitc__parser_work__Parser__lexer_61d]))(var121, var_lexer); /* lexer= on <var121:Parser>*/
}
{
((void(*)(val* self))(var121->class->vft[COLOR_core__kernel__Object__init]))(var121); /* init on <var121:Parser>*/
}
{
var122 = nitc___nitc__Parser___parse(var121);
}
var_tree = var122;
{
{ /* Inline parser_nodes#Start#n_eof (var_tree) on <var_tree:nullable Object(Start)> */
var125 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_eof].val; /* _n_eof on <var_tree:nullable Object(Start)> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3056);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
var_eof = var123;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype127 = type_nitc__AError.color;
idtype128 = type_nitc__AError.id;
if(cltype127 >= var_eof->type->table_size) {
var126 = 0;
} else {
var126 = var_eof->type->type_table[cltype127] == idtype128;
}
var129 = !var126;
if (var129){
{
{ /* Inline parser_nodes#Start#n_base (var_tree) on <var_tree:nullable Object(Start)> */
var132 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_base].val; /* _n_base on <var_tree:nullable Object(Start)> */
var130 = var132;
RET_LABEL131:(void)0;
}
}
if (var130 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 161);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#AModule#n_classdefs (var130) on <var130:nullable AModule> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var135 = var130->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var130:nullable AModule> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = core___core__SequenceRead___Collection__first(var133);
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var136) on <var136:nullable Object(AClassdef)> */
var139 = var136->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var136:nullable Object(AClassdef)> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
var140 = core___core__SequenceRead___Collection__first(var137);
}
/* <var140:nullable Object(APropdef)> isa AMethPropdef */
cltype142 = type_nitc__AMethPropdef.color;
idtype143 = type_nitc__AMethPropdef.id;
if(cltype142 >= var140->type->table_size) {
var141 = 0;
} else {
var141 = var140->type->type_table[cltype142] == idtype143;
}
if (unlikely(!var141)) {
var_class_name144 = var140 == NULL ? "null" : var140->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name144);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 161);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (var140) on <var140:APropdef(AMethPropdef)> */
var147 = var140->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <var140:APropdef(AMethPropdef)> */
var145 = var147;
RET_LABEL146:(void)0;
}
}
/* <var145:nullable AExpr> isa ABlockExpr */
cltype149 = type_nitc__ABlockExpr.color;
idtype150 = type_nitc__ABlockExpr.id;
if(var145 == NULL) {
var148 = 0;
} else {
if(cltype149 >= var145->type->table_size) {
var148 = 0;
} else {
var148 = var145->type->type_table[cltype149] == idtype150;
}
}
if (unlikely(!var148)) {
var_class_name151 = var145 == NULL ? "null" : var145->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name151);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 161);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var145) on <var145:nullable AExpr(ABlockExpr)> */
var154 = var145->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var145:nullable AExpr(ABlockExpr)> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
var155 = core___core__SequenceRead___Collection__first(var152);
}
/* <var155:nullable Object(AExpr)> isa AVardeclExpr */
cltype157 = type_nitc__AVardeclExpr.color;
idtype158 = type_nitc__AVardeclExpr.id;
if(cltype157 >= var155->type->table_size) {
var156 = 0;
} else {
var156 = var155->type->type_table[cltype157] == idtype158;
}
if (unlikely(!var156)) {
var_class_name159 = var155 == NULL ? "null" : var155->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AVardeclExpr", var_class_name159);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 161);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AVardeclExpr#n_expr (var155) on <var155:AExpr(AVardeclExpr)> */
var162 = var155->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <var155:AExpr(AVardeclExpr)> */
var160 = var162;
RET_LABEL161:(void)0;
}
}
/* <var160:nullable AExpr> isa AParExpr */
cltype164 = type_nitc__AParExpr.color;
idtype165 = type_nitc__AParExpr.id;
if(var160 == NULL) {
var163 = 0;
} else {
if(cltype164 >= var160->type->table_size) {
var163 = 0;
} else {
var163 = var160->type->type_table[cltype164] == idtype165;
}
}
if (unlikely(!var163)) {
var_class_name166 = var160 == NULL ? "null" : var160->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AParExpr", var_class_name166);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 161);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AParExpr#n_expr (var160) on <var160:nullable AExpr(AParExpr)> */
var169 = var160->attrs[COLOR_nitc__parser_nodes__AParExpr___n_expr].val; /* _n_expr on <var160:nullable AExpr(AParExpr)> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2656);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
var_nexpr = var167;
{
{ /* Inline parser_nodes#ANode#parent= (var_nexpr,((val*)NULL)) on <var_nexpr:AExpr> */
var_nexpr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = ((val*)NULL); /* _parent on <var_nexpr:AExpr> */
RET_LABEL170:(void)0;
}
}
var = var_nexpr;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#location (var_eof) on <var_eof:nullable Object(AError)> */
var173 = var_eof->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_eof:nullable Object(AError)> */
if (unlikely(var173 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_error) on <var_error:nullable Object(AError)> */
var176 = var_error->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_error:nullable Object(AError)> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
var177 = core___core__Comparable____62d(var171, var174);
}
if (var177){
var_error = var_eof;
} else {
}
var178 = NEW_nitc__InjectedLexer(&type_nitc__InjectedLexer);
{
((void(*)(val* self, val* p0))(var178->class->vft[COLOR_nitc__lexer_work__Lexer__file_61d]))(var178, var_source); /* file= on <var178:InjectedLexer>*/
}
{
((void(*)(val* self))(var178->class->vft[COLOR_core__kernel__Object__init]))(var178); /* init on <var178:InjectedLexer>*/
}
var_lexer = var178;
{
{ /* Inline parser_util#InjectedLexer#injected_before (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var181 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
var182 = NEW_nitc__TKwdo(&type_nitc__TKwdo);
{
{ /* Inline kernel#Object#init (var182) on <var182:TKwdo> */
RET_LABEL183:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var179, var182); /* Direct call abstract_collection#Sequence#add on <var179:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#injected_before (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var186 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var186 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
var187 = NEW_nitc__TEol(&type_nitc__TEol);
{
{ /* Inline kernel#Object#init (var187) on <var187:TEol> */
RET_LABEL188:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var184, var187); /* Direct call abstract_collection#Sequence#add on <var184:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#injected_after (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var191 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_after].val; /* _injected_after on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_after");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 232);
fatal_exit(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
var192 = NEW_nitc__TEol(&type_nitc__TEol);
{
{ /* Inline kernel#Object#init (var192) on <var192:TEol> */
RET_LABEL193:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var189, var192); /* Direct call abstract_collection#Sequence#add on <var189:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#injected_after (var_lexer) on <var_lexer:nullable Object(InjectedLexer)> */
var196 = var_lexer->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_after].val; /* _injected_after on <var_lexer:nullable Object(InjectedLexer)> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_after");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 232);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
var197 = NEW_nitc__TKwend(&type_nitc__TKwend);
{
{ /* Inline kernel#Object#init (var197) on <var197:TKwend> */
RET_LABEL198:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var194, var197); /* Direct call abstract_collection#Sequence#add on <var194:List[Token]>*/
}
var199 = NEW_nitc__Parser(&type_nitc__Parser);
{
((void(*)(val* self, val* p0))(var199->class->vft[COLOR_nitc__parser_work__Parser__lexer_61d]))(var199, var_lexer); /* lexer= on <var199:Parser>*/
}
{
((void(*)(val* self))(var199->class->vft[COLOR_core__kernel__Object__init]))(var199); /* init on <var199:Parser>*/
}
{
var200 = nitc___nitc__Parser___parse(var199);
}
var_tree = var200;
{
{ /* Inline parser_nodes#Start#n_eof (var_tree) on <var_tree:nullable Object(Start)> */
var203 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_eof].val; /* _n_eof on <var_tree:nullable Object(Start)> */
if (unlikely(var203 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3056);
fatal_exit(1);
}
var201 = var203;
RET_LABEL202:(void)0;
}
}
var_eof = var201;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype205 = type_nitc__AError.color;
idtype206 = type_nitc__AError.id;
if(cltype205 >= var_eof->type->table_size) {
var204 = 0;
} else {
var204 = var_eof->type->type_table[cltype205] == idtype206;
}
var207 = !var204;
if (var207){
{
{ /* Inline parser_nodes#Start#n_base (var_tree) on <var_tree:nullable Object(Start)> */
var210 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_base].val; /* _n_base on <var_tree:nullable Object(Start)> */
var208 = var210;
RET_LABEL209:(void)0;
}
}
if (var208 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 175);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#AModule#n_classdefs (var208) on <var208:nullable AModule> */
if (unlikely(var208 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var213 = var208->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var208:nullable AModule> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
var214 = core___core__SequenceRead___Collection__first(var211);
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var214) on <var214:nullable Object(AClassdef)> */
var217 = var214->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var214:nullable Object(AClassdef)> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
var218 = core___core__SequenceRead___Collection__first(var215);
}
/* <var218:nullable Object(APropdef)> isa AMethPropdef */
cltype220 = type_nitc__AMethPropdef.color;
idtype221 = type_nitc__AMethPropdef.id;
if(cltype220 >= var218->type->table_size) {
var219 = 0;
} else {
var219 = var218->type->type_table[cltype220] == idtype221;
}
if (unlikely(!var219)) {
var_class_name222 = var218 == NULL ? "null" : var218->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AMethPropdef", var_class_name222);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 175);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (var218) on <var218:APropdef(AMethPropdef)> */
var225 = var218->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <var218:APropdef(AMethPropdef)> */
var223 = var225;
RET_LABEL224:(void)0;
}
}
/* <var223:nullable AExpr> isa ABlockExpr */
cltype227 = type_nitc__ABlockExpr.color;
idtype228 = type_nitc__ABlockExpr.id;
if(var223 == NULL) {
var226 = 0;
} else {
if(cltype227 >= var223->type->table_size) {
var226 = 0;
} else {
var226 = var223->type->type_table[cltype227] == idtype228;
}
}
if (unlikely(!var226)) {
var_class_name229 = var223 == NULL ? "null" : var223->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name229);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 175);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var223) on <var223:nullable AExpr(ABlockExpr)> */
var232 = var223->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var223:nullable AExpr(ABlockExpr)> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
{
var233 = core___core__SequenceRead___Collection__first(var230);
}
/* <var233:nullable Object(AExpr)> isa ADoExpr */
cltype235 = type_nitc__ADoExpr.color;
idtype236 = type_nitc__ADoExpr.id;
if(cltype235 >= var233->type->table_size) {
var234 = 0;
} else {
var234 = var233->type->type_table[cltype235] == idtype236;
}
if (unlikely(!var234)) {
var_class_name237 = var233 == NULL ? "null" : var233->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ADoExpr", var_class_name237);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 175);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ADoExpr#n_block (var233) on <var233:AExpr(ADoExpr)> */
var240 = var233->attrs[COLOR_nitc__parser_nodes__ADoExpr___n_block].val; /* _n_block on <var233:AExpr(ADoExpr)> */
var238 = var240;
RET_LABEL239:(void)0;
}
}
/* <var238:nullable AExpr> isa ABlockExpr */
cltype242 = type_nitc__ABlockExpr.color;
idtype243 = type_nitc__ABlockExpr.id;
if(var238 == NULL) {
var241 = 0;
} else {
if(cltype242 >= var238->type->table_size) {
var241 = 0;
} else {
var241 = var238->type->type_table[cltype242] == idtype243;
}
}
if (unlikely(!var241)) {
var_class_name244 = var238 == NULL ? "null" : var238->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ABlockExpr", var_class_name244);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 175);
fatal_exit(1);
}
var_nblock = var238;
{
nitc__parser_prod___ABlockExpr___n_kwend_61d(var_nblock, ((val*)NULL)); /* Direct call parser_prod#ABlockExpr#n_kwend= on <var_nblock:ABlockExpr>*/
}
{
{ /* Inline parser_nodes#ANode#parent= (var_nblock,((val*)NULL)) on <var_nblock:ABlockExpr> */
var_nblock->attrs[COLOR_nitc__parser_nodes__ANode___parent].val = ((val*)NULL); /* _parent on <var_nblock:ABlockExpr> */
RET_LABEL245:(void)0;
}
}
var = var_nblock;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#location (var_eof) on <var_eof:nullable Object(AError)> */
var248 = var_eof->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_eof:nullable Object(AError)> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_error) on <var_error:nullable Object(AError)> */
var251 = var_error->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_error:nullable Object(AError)> */
if (unlikely(var251 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
var252 = core___core__Comparable____62d(var246, var249);
}
if (var252){
var_error = var_eof;
} else {
}
var253 = NEW_nitc__Lexer(&type_nitc__Lexer);
{
((void(*)(val* self, val* p0))(var253->class->vft[COLOR_nitc__lexer_work__Lexer__file_61d]))(var253, var_source); /* file= on <var253:Lexer>*/
}
{
((void(*)(val* self))(var253->class->vft[COLOR_core__kernel__Object__init]))(var253); /* init on <var253:Lexer>*/
}
var_lexer = var253;
var254 = NEW_nitc__Parser(&type_nitc__Parser);
{
((void(*)(val* self, val* p0))(var254->class->vft[COLOR_nitc__parser_work__Parser__lexer_61d]))(var254, var_lexer); /* lexer= on <var254:Parser>*/
}
{
((void(*)(val* self))(var254->class->vft[COLOR_core__kernel__Object__init]))(var254); /* init on <var254:Parser>*/
}
{
var255 = nitc___nitc__Parser___parse(var254);
}
var_tree = var255;
{
{ /* Inline parser_nodes#Start#n_eof (var_tree) on <var_tree:nullable Object(Start)> */
var258 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_eof].val; /* _n_eof on <var_tree:nullable Object(Start)> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_eof");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3056);
fatal_exit(1);
}
var256 = var258;
RET_LABEL257:(void)0;
}
}
var_eof = var256;
/* <var_eof:nullable Object(EOF)> isa AError */
cltype260 = type_nitc__AError.color;
idtype261 = type_nitc__AError.id;
if(cltype260 >= var_eof->type->table_size) {
var259 = 0;
} else {
var259 = var_eof->type->type_table[cltype260] == idtype261;
}
var262 = !var259;
if (var262){
{
{ /* Inline parser_nodes#Start#n_base (var_tree) on <var_tree:nullable Object(Start)> */
var265 = var_tree->attrs[COLOR_nitc__parser_nodes__Start___n_base].val; /* _n_base on <var_tree:nullable Object(Start)> */
var263 = var265;
RET_LABEL264:(void)0;
}
}
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 186);
fatal_exit(1);
}
var = var263;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#location (var_eof) on <var_eof:nullable Object(AError)> */
var268 = var_eof->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_eof:nullable Object(AError)> */
if (unlikely(var268 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var266 = var268;
RET_LABEL267:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_error) on <var_error:nullable Object(AError)> */
var271 = var_error->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_error:nullable Object(AError)> */
if (unlikely(var271 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
var272 = core___core__Comparable____62d(var266, var269);
}
if (var272){
var_error = var_eof;
} else {
}
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_before for (self: InjectedLexer): List[Token] */
val* nitc___nitc__InjectedLexer___injected_before(val* self) {
val* var /* : List[Token] */;
val* var1 /* : List[Token] */;
var1 = self->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <self:InjectedLexer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#injected_after for (self: InjectedLexer): List[Token] */
val* nitc___nitc__InjectedLexer___injected_after(val* self) {
val* var /* : List[Token] */;
val* var1 /* : List[Token] */;
var1 = self->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_after].val; /* _injected_after on <self:InjectedLexer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_after");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 232);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#is_finished for (self: InjectedLexer): Bool */
short int nitc___nitc__InjectedLexer___is_finished(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__parser_util__InjectedLexer___is_finished].s; /* _is_finished on <self:InjectedLexer> */
var = var1;
RET_LABEL:;
return var;
}
/* method parser_util#InjectedLexer#is_finished= for (self: InjectedLexer, Bool) */
void nitc___nitc__InjectedLexer___is_finished_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__parser_util__InjectedLexer___is_finished].s = p0; /* _is_finished on <self:InjectedLexer> */
RET_LABEL:;
}
/* method parser_util#InjectedLexer#get_token for (self: InjectedLexer): nullable Token */
val* nitc___nitc__InjectedLexer___nitc__lexer_work__Lexer__get_token(val* self) {
val* var /* : nullable Token */;
val* var1 /* : List[Token] */;
val* var3 /* : List[Token] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : List[Token] */;
val* var8 /* : List[Token] */;
val* var9 /* : nullable Object */;
val* var_tok /* var tok: Token */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Token */;
val* var_next /* var next: nullable Token */;
short int var15 /* : Bool */;
int cltype;
int idtype;
short int var16 /* : Bool */;
val* var17 /* : List[Token] */;
val* var19 /* : List[Token] */;
val* var21 /* : List[Token] */;
val* var23 /* : List[Token] */;
val* var24 /* : nullable Object */;
val* var_tok25 /* var tok: Token */;
{
{ /* Inline parser_util#InjectedLexer#injected_before (self) on <self:InjectedLexer> */
var3 = self->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <self:InjectedLexer> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__List___core__abstract_collection__Collection__is_empty(var1);
}
var5 = !var4;
if (var5){
{
{ /* Inline parser_util#InjectedLexer#injected_before (self) on <self:InjectedLexer> */
var8 = self->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_before].val; /* _injected_before on <self:InjectedLexer> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_before");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 229);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = core___core__List___core__abstract_collection__Sequence__shift(var6);
}
var_tok = var9;
var = var_tok;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_util#InjectedLexer#is_finished (self) on <self:InjectedLexer> */
var12 = self->attrs[COLOR_nitc__parser_util__InjectedLexer___is_finished].s; /* _is_finished on <self:InjectedLexer> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = !var10;
if (var13){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc___nitc__InjectedLexer___nitc__lexer_work__Lexer__get_token]))(self); /* get_token on <self:InjectedLexer>*/
}
var_next = var14;
/* <var_next:nullable Token> isa EOF */
cltype = type_nitc__EOF.color;
idtype = type_nitc__EOF.id;
if(var_next == NULL) {
var15 = 0;
} else {
if(cltype >= var_next->type->table_size) {
var15 = 0;
} else {
var15 = var_next->type->type_table[cltype] == idtype;
}
}
var16 = !var15;
if (var16){
var = var_next;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_util#InjectedLexer#injected_after (self) on <self:InjectedLexer> */
var19 = self->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_after].val; /* _injected_after on <self:InjectedLexer> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_after");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 232);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
core___core__List___core__abstract_collection__Sequence__push(var17, var_next); /* Direct call list#List#push on <var17:List[Token]>*/
}
{
{ /* Inline parser_util#InjectedLexer#is_finished= (self,1) on <self:InjectedLexer> */
self->attrs[COLOR_nitc__parser_util__InjectedLexer___is_finished].s = 1; /* _is_finished on <self:InjectedLexer> */
RET_LABEL20:(void)0;
}
}
} else {
}
{
{ /* Inline parser_util#InjectedLexer#injected_after (self) on <self:InjectedLexer> */
var23 = self->attrs[COLOR_nitc__parser_util__InjectedLexer___injected_after].val; /* _injected_after on <self:InjectedLexer> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _injected_after");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_util, 232);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = core___core__List___core__abstract_collection__Sequence__shift(var21);
}
var_tok25 = var24;
var = var_tok25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
