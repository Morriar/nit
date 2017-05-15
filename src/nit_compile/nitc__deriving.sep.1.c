#include "nitc__deriving.sep.0.h"
/* method deriving#DerivingPhase#process_annotated_node for (self: DerivingPhase, ANode, AAnnotation) */
void nitc__deriving___nitc__deriving__DerivingPhase___nitc__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nclassdef /* var nclassdef: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var6 /* : Bool */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
val* var10 /* : Location */;
val* var12 /* : Location */;
val* var14 /* : NativeArray[String] */;
static val* varonce13;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : Message */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
short int var35 /* : Bool */;
val* var36 /* : ToolContext */;
val* var38 /* : ToolContext */;
val* var39 /* : Location */;
val* var41 /* : Location */;
val* var43 /* : NativeArray[String] */;
static val* varonce42;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : Message */;
var_nclassdef = p0;
var_nat = p1;
{
var = nitc___nitc__AAnnotation___name(var_nat);
}
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "auto_inspect";
var3 = core__abstract_text___CString___to_s_full(var2, 12l, 12l);
var1 = var3;
varonce = var1;
}
{
var4 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var1); /* == on <var:String>*/
}
if (var4){
/* <var_nclassdef:ANode> isa AStdClassdef */
cltype = type_nitc__AStdClassdef.color;
idtype = type_nitc__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var5 = 0;
} else {
var5 = var_nclassdef->type->type_table[cltype] == idtype;
}
var6 = !var5;
if (var6){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:DerivingPhase> */
var9 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:DerivingPhase> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:ANode> */
var12 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:ANode> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(varonce13==NULL)) {
var14 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Syntax Error: only a concrete class can be `";
var18 = core__abstract_text___CString___to_s_full(var17, 44l, 44l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "`.";
var22 = core__abstract_text___CString___to_s_full(var21, 2l, 2l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var14)->values[2]=var20;
} else {
var14 = varonce13;
varonce13 = NULL;
}
{
var23 = nitc___nitc__AAnnotation___name(var_nat);
}
((struct instance_core__NativeArray*)var14)->values[1]=var23;
{
var24 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce13 = var14;
{
var25 = nitc___nitc__ToolContext___error(var7, var10, var24);
}
} else {
{
nitc__deriving___nitc__deriving__DerivingPhase___generate_inspect_method(self, var_nclassdef); /* Direct call deriving#DerivingPhase#generate_inspect_method on <self:DerivingPhase>*/
}
}
} else {
}
{
var26 = nitc___nitc__AAnnotation___name(var_nat);
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "auto_derive";
var30 = core__abstract_text___CString___to_s_full(var29, 11l, 11l);
var28 = var30;
varonce27 = var28;
}
{
var31 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_core__kernel__Object___61d_61d]))(var26, var28); /* == on <var26:String>*/
}
if (var31){
/* <var_nclassdef:ANode> isa AStdClassdef */
cltype33 = type_nitc__AStdClassdef.color;
idtype34 = type_nitc__AStdClassdef.id;
if(cltype33 >= var_nclassdef->type->table_size) {
var32 = 0;
} else {
var32 = var_nclassdef->type->type_table[cltype33] == idtype34;
}
var35 = !var32;
if (var35){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:DerivingPhase> */
var38 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:DerivingPhase> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nclassdef) on <var_nclassdef:ANode> */
var41 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nclassdef:ANode> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (unlikely(varonce42==NULL)) {
var43 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Syntax Error: only a concrete class can be `";
var47 = core__abstract_text___CString___to_s_full(var46, 44l, 44l);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var43)->values[0]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "`.";
var51 = core__abstract_text___CString___to_s_full(var50, 2l, 2l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var43)->values[2]=var49;
} else {
var43 = varonce42;
varonce42 = NULL;
}
{
var52 = nitc___nitc__AAnnotation___name(var_nat);
}
((struct instance_core__NativeArray*)var43)->values[1]=var52;
{
var53 = ((val*(*)(val* self))(var43->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce42 = var43;
{
var54 = nitc___nitc__ToolContext___error(var36, var39, var53);
}
} else {
{
nitc__deriving___nitc__deriving__DerivingPhase___generate_derive_to_map_method(self, var_nclassdef, var_nat); /* Direct call deriving#DerivingPhase#generate_derive_to_map_method on <self:DerivingPhase>*/
}
}
} else {
}
RET_LABEL:;
}
/* method deriving#DerivingPhase#generate_inspect_method for (self: DerivingPhase, AClassdef) */
void nitc__deriving___nitc__deriving__DerivingPhase___generate_inspect_method(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
val* var3 /* : Array[String] */;
val* var_code /* var code: Array[String] */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var_ /* var : ANodes[APropdef] */;
val* var19 /* : Iterator[ANode] */;
val* var_20 /* var : Iterator[APropdef] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_attribute /* var attribute: APropdef */;
short int var23 /* : Bool */;
int cltype;
int idtype;
val* var24 /* : TId */;
val* var26 /* : TId */;
val* var27 /* : String */;
val* var_name /* var name: String */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : ToolContext */;
val* var57 /* : ToolContext */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : APropdef */;
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
var3 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[String]>*/
}
var_code = var3;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "redef fun inspect";
var6 = core__abstract_text___CString___to_s_full(var5, 17l, 17l);
var4 = var6;
varonce = var4;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var4); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "do";
var10 = core__abstract_text___CString___to_s_full(var9, 2l, 2l);
var8 = var10;
varonce7 = var8;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var8); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "\tvar res = super";
var14 = core__abstract_text___CString___to_s_full(var13, 16l, 16l);
var12 = var14;
varonce11 = var12;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var12); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "\tres = res.substring(0,res.length-1)";
var18 = core__abstract_text___CString___to_s_full(var17, 36l, 36l);
var16 = var18;
varonce15 = var16;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var16); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
var_ = var_npropdefs;
{
var19 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_20 = var19;
for(;;) {
{
var21 = ((short int(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_20); /* is_ok on <var_20:Iterator[APropdef]>*/
}
if (var21){
} else {
goto BREAK_label;
}
{
var22 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_20); /* item on <var_20:Iterator[APropdef]>*/
}
var_attribute = var22;
/* <var_attribute:APropdef> isa AAttrPropdef */
cltype = type_nitc__AAttrPropdef.color;
idtype = type_nitc__AAttrPropdef.id;
if(cltype >= var_attribute->type->table_size) {
var23 = 0;
} else {
var23 = var_attribute->type->type_table[cltype] == idtype;
}
if (var23){
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (var_attribute) on <var_attribute:APropdef(AAttrPropdef)> */
var26 = var_attribute->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <var_attribute:APropdef(AAttrPropdef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1340);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = nitc__lexer_work___Token___text(var24);
}
var_name = var27;
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "\tres += \" ";
var33 = core__abstract_text___CString___to_s_full(var32, 10l, 10l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ": {self.";
var37 = core__abstract_text___CString___to_s_full(var36, 8l, 8l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var29)->values[2]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = ".inspect}\"";
var41 = core__abstract_text___CString___to_s_full(var40, 10l, 10l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var29)->values[4]=var39;
} else {
var29 = varonce28;
varonce28 = NULL;
}
((struct instance_core__NativeArray*)var29)->values[1]=var_name;
((struct instance_core__NativeArray*)var29)->values[3]=var_name;
{
var42 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var42); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_20); /* next on <var_20:Iterator[APropdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_20); /* finish on <var_20:Iterator[APropdef]>*/
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "\tres += \">\"";
var46 = core__abstract_text___CString___to_s_full(var45, 11l, 11l);
var44 = var46;
varonce43 = var44;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var44); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "\treturn res";
var50 = core__abstract_text___CString___to_s_full(var49, 11l, 11l);
var48 = var50;
varonce47 = var48;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var48); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "end";
var54 = core__abstract_text___CString___to_s_full(var53, 3l, 3l);
var52 = var54;
varonce51 = var52;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var52); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:DerivingPhase> */
var57 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:DerivingPhase> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "\n";
var61 = core__abstract_text___CString___to_s_full(var60, 1l, 1l);
var59 = var61;
varonce58 = var59;
}
{
var62 = core__abstract_text___Collection___join(var_code, var59, ((val*)NULL));
}
{
var63 = nitc__parser_util___ToolContext___parse_propdef(var55, var62);
}
{
nitc___nitc__ANodes___core__abstract_collection__Sequence__push(var_npropdefs, var63); /* Direct call parser_nodes#ANodes#push on <var_npropdefs:ANodes[APropdef]>*/
}
RET_LABEL:;
}
/* method deriving#DerivingPhase#generate_derive_to_map_method for (self: DerivingPhase, AClassdef, AAnnotation) */
void nitc__deriving___nitc__deriving__DerivingPhase___generate_derive_to_map_method(val* self, val* p0, val* p1) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : ANodes[APropdef] */;
val* var2 /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : APropdef */;
val* var_sc /* var sc: APropdef */;
val* var10 /* : Location */;
val* var12 /* : Location */;
val* var14 /* : ANodes[APropdef] */;
val* var16 /* : ANodes[APropdef] */;
val* var17 /* : Array[String] */;
val* var_code /* var code: Array[String] */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var_ /* var : ANodes[APropdef] */;
val* var30 /* : Iterator[ANode] */;
val* var_31 /* var : Iterator[APropdef] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_attribute /* var attribute: APropdef */;
short int var34 /* : Bool */;
int cltype;
int idtype;
val* var35 /* : TId */;
val* var37 /* : TId */;
val* var38 /* : String */;
val* var_name /* var name: String */;
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
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : ToolContext */;
val* var60 /* : ToolContext */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : APropdef */;
var_nclassdef = p0;
var_nat = p1;
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
{
{ /* Inline phase#Phase#toolcontext (self) on <self:DerivingPhase> */
var5 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:DerivingPhase> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Derivable";
var8 = core__abstract_text___CString___to_s_full(var7, 9l, 9l);
var6 = var8;
varonce = var6;
}
{
var9 = nitc__parser_util___ToolContext___parse_superclass(var3, var6);
}
var_sc = var9;
{
{ /* Inline parser_nodes#ANode#location (var_nat) on <var_nat:AAnnotation> */
var12 = var_nat->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nat:AAnnotation> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location= (var_sc,var10) on <var_sc:APropdef> */
var_sc->attrs[COLOR_nitc__parser_nodes__ANode___location].val = var10; /* _location on <var_sc:APropdef> */
RET_LABEL13:(void)0;
}
}
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var16 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var14, var_sc); /* Direct call abstract_collection#Sequence#add on <var14:ANodes[APropdef]>*/
}
var17 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var17); /* Direct call array#Array#init on <var17:Array[String]>*/
}
var_code = var17;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "redef fun derive_to_map";
var21 = core__abstract_text___CString___to_s_full(var20, 23l, 23l);
var19 = var21;
varonce18 = var19;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var19); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "do";
var25 = core__abstract_text___CString___to_s_full(var24, 2l, 2l);
var23 = var25;
varonce22 = var23;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var23); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "\tvar res = super";
var29 = core__abstract_text___CString___to_s_full(var28, 16l, 16l);
var27 = var29;
varonce26 = var27;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var27); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
var_ = var_npropdefs;
{
var30 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:Iterator[APropdef]>*/
}
if (var32){
} else {
goto BREAK_label;
}
{
var33 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:Iterator[APropdef]>*/
}
var_attribute = var33;
/* <var_attribute:APropdef> isa AAttrPropdef */
cltype = type_nitc__AAttrPropdef.color;
idtype = type_nitc__AAttrPropdef.id;
if(cltype >= var_attribute->type->table_size) {
var34 = 0;
} else {
var34 = var_attribute->type->type_table[cltype] == idtype;
}
if (var34){
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (var_attribute) on <var_attribute:APropdef(AAttrPropdef)> */
var37 = var_attribute->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <var_attribute:APropdef(AAttrPropdef)> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1340);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nitc__lexer_work___Token___text(var35);
}
var_name = var38;
if (unlikely(varonce39==NULL)) {
var40 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "\tres[\"";
var44 = core__abstract_text___CString___to_s_full(var43, 6l, 6l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "\"] = self.";
var48 = core__abstract_text___CString___to_s_full(var47, 10l, 10l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var40)->values[2]=var46;
} else {
var40 = varonce39;
varonce39 = NULL;
}
((struct instance_core__NativeArray*)var40)->values[1]=var_name;
((struct instance_core__NativeArray*)var40)->values[3]=var_name;
{
var49 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var49); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:Iterator[APropdef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:Iterator[APropdef]>*/
}
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "\treturn res";
var53 = core__abstract_text___CString___to_s_full(var52, 11l, 11l);
var51 = var53;
varonce50 = var51;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var51); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "end";
var57 = core__abstract_text___CString___to_s_full(var56, 3l, 3l);
var55 = var57;
varonce54 = var55;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_code, var55); /* Direct call array#Array#add on <var_code:Array[String]>*/
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:DerivingPhase> */
var60 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:DerivingPhase> */
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
nitc___nitc__ANodes___core__abstract_collection__Sequence__push(var_npropdefs, var66); /* Direct call parser_nodes#ANodes#push on <var_npropdefs:ANodes[APropdef]>*/
}
RET_LABEL:;
}
