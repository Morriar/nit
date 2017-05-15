#include "nitc__pkgconfig.sep.0.h"
/* method pkgconfig#PkgconfigPhase#process_annotated_node for (self: PkgconfigPhase, ANode, AAnnotation) */
void nitc___nitc__PkgconfigPhase___nitc__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nmoduledecl /* var nmoduledecl: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var10 /* : ToolContext */;
val* var11 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var13 /* : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable ANode */;
val* var20 /* : nullable ANode */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name;
val* var_nmodule /* var nmodule: AModule */;
val* var24 /* : nullable MModule */;
val* var26 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var27 /* : Array[String] */;
val* var_pkgs /* var pkgs: Array[String] */;
val* var28 /* : ANodes[AExpr] */;
val* var30 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
short int var31 /* : Bool */;
val* var32 /* : String */;
val* var34 /* : String */;
val* var_ /* var : ANodes[AExpr] */;
val* var35 /* : Iterator[ANode] */;
val* var_36 /* var : Iterator[AExpr] */;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_arg /* var arg: AExpr */;
val* var39 /* : nullable String */;
val* var_pkg /* var pkg: nullable String */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : ProcessReader */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : Array[Text] */;
val* var56 /* : NativeArray[Text] */;
val* var_proc_which /* var proc_which: ProcessReader */;
long var57 /* : Int */;
long var_status /* var status: Int */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var_66 /* var : Array[String] */;
val* var67 /* : IndexedIterator[nullable Object] */;
val* var_68 /* var : IndexedIterator[String] */;
short int var69 /* : Bool */;
val* var71 /* : nullable Object */;
val* var_pkg72 /* var pkg: String */;
val* var73 /* : Process */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : Array[Text] */;
val* var83 /* : NativeArray[Text] */;
val* var_proc_exist /* var proc_exist: Process */;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : String */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
val* var108 /* : Array[String] */;
val* var110 /* : Array[String] */;
var_nmoduledecl = p0;
var_nat = p1;
{
var = nitc___nitc__AAnnotation___name(var_nat);
}
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "pkgconfig";
var3 = core__abstract_text___CString___to_s_full(var2, 9l, 9l);
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
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:PkgconfigPhase> */
var10 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:PkgconfigPhase> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc__modelbuilder_base___ToolContext___modelbuilder(var8);
}
var_modelbuilder = var11;
/* <var_nmoduledecl:ANode> isa AModuledecl */
cltype = type_nitc__AModuledecl.color;
idtype = type_nitc__AModuledecl.id;
if(cltype >= var_nmoduledecl->type->table_size) {
var12 = 0;
} else {
var12 = var_nmoduledecl->type->type_table[cltype] == idtype;
}
var13 = !var12;
if (var13){
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Syntax Error: only the declaration of modules may use `pkgconfig`.";
var17 = core__abstract_text___CString___to_s_full(var16, 66l, 66l);
var15 = var17;
varonce14 = var15;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var15); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#parent (var_nmoduledecl) on <var_nmoduledecl:ANode(AModuledecl)> */
var20 = var_nmoduledecl->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_nmoduledecl:ANode(AModuledecl)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
/* <var18:nullable ANode> isa AModule */
cltype22 = type_nitc__AModule.color;
idtype23 = type_nitc__AModule.id;
if(var18 == NULL) {
var21 = 0;
} else {
if(cltype22 >= var18->type->table_size) {
var21 = 0;
} else {
var21 = var18->type->type_table[cltype22] == idtype23;
}
}
if (unlikely(!var21)) {
var_class_name = var18 == NULL ? "null" : var18->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__pkgconfig, 47);
fatal_exit(1);
}
var_nmodule = var18;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var26 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__pkgconfig, 48);
fatal_exit(1);
}
var_mmodule = var24;
var27 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var27); /* Direct call array#Array#init on <var27:Array[String]>*/
}
var_pkgs = var27;
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_nat) on <var_nat:AAnnotation> */
var30 = var_nat->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_nat:AAnnotation> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_args = var28;
{
var31 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var_args);
}
if (var31){
{
{ /* Inline mmodule#MModule#name (var_mmodule) on <var_mmodule:MModule> */
var34 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mmodule:MModule> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_pkgs, var32); /* Direct call array#Array#add on <var_pkgs:Array[String]>*/
}
} else {
var_ = var_args;
{
var35 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_36 = var35;
for(;;) {
{
var37 = ((short int(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_36); /* is_ok on <var_36:Iterator[AExpr]>*/
}
if (var37){
} else {
goto BREAK_label;
}
{
var38 = ((val*(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_36); /* item on <var_36:Iterator[AExpr]>*/
}
var_arg = var38;
{
var39 = nitc__literal___AExpr___as_string(var_arg);
}
var_pkg = var39;
if (var_pkg == NULL) {
var40 = 1; /* is null */
} else {
var40 = 0; /* arg is null but recv is not */
}
if (0) {
var41 = ((short int(*)(val* self, val* p0))(var_pkg->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pkg, ((val*)NULL)); /* == on <var_pkg:nullable String>*/
var40 = var41;
}
if (var40){
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "Syntax Error: `pkgconfig` expects its arguments to be the name of the package as String literals.";
var45 = core__abstract_text___CString___to_s_full(var44, 97l, 97l);
var43 = var45;
varonce42 = var43;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var43); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_pkgs, var_pkg); /* Direct call array#Array#add on <var_pkgs:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_36); /* next on <var_36:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_36); /* finish on <var_36:Iterator[AExpr]>*/
}
}
var46 = NEW_core__ProcessReader(&type_core__ProcessReader);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "which";
var50 = core__abstract_text___CString___to_s_full(var49, 5l, 5l);
var48 = var50;
varonce47 = var48;
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "pkg-config";
var54 = core__abstract_text___CString___to_s_full(var53, 10l, 10l);
var52 = var54;
varonce51 = var52;
}
var55 = NEW_core__Array(&type_core__Array__core__Text);
{ /* var55 = array_instance Array[Text] */
var56 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Text);
((struct instance_core__NativeArray*)var56)->values[0] = (val*) var52;
{
((void(*)(val* self, val* p0, long p1))(var55->class->vft[COLOR_core__array__Array__with_native]))(var55, var56, 1l); /* with_native on <var55:Array[Text]>*/
}
}
{
core___core__Process___init(var46, var48, var55); /* Direct call exec#Process#init on <var46:ProcessReader>*/
}
var_proc_which = var46;
{
core___core__Process___wait(var_proc_which); /* Direct call exec#Process#wait on <var_proc_which:ProcessReader>*/
}
{
var57 = core___core__Process___status(var_proc_which);
}
var_status = var57;
{
{ /* Inline kernel#Int#!= (var_status,0l) on <var_status:Int> */
var60 = var_status == 0l;
var61 = !var60;
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
if (var58){
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "Error: program `pkg-config` not found, make sure it is installed.";
var65 = core__abstract_text___CString___to_s_full(var64, 65l, 65l);
var63 = var65;
varonce62 = var63;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var63); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var_66 = var_pkgs;
{
var67 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_66);
}
var_68 = var67;
for(;;) {
{
var69 = ((short int(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_68); /* is_ok on <var_68:IndexedIterator[String]>*/
}
if (var69){
} else {
goto BREAK_label70;
}
{
var71 = ((val*(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_68); /* item on <var_68:IndexedIterator[String]>*/
}
var_pkg72 = var71;
var73 = NEW_core__Process(&type_core__Process);
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "pkg-config";
var77 = core__abstract_text___CString___to_s_full(var76, 10l, 10l);
var75 = var77;
varonce74 = var75;
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "--exists";
var81 = core__abstract_text___CString___to_s_full(var80, 8l, 8l);
var79 = var81;
varonce78 = var79;
}
var82 = NEW_core__Array(&type_core__Array__core__Text);
{ /* var82 = array_instance Array[Text] */
var83 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__Text);
((struct instance_core__NativeArray*)var83)->values[0] = (val*) var79;
((struct instance_core__NativeArray*)var83)->values[1] = (val*) var_pkg72;
{
((void(*)(val* self, val* p0, long p1))(var82->class->vft[COLOR_core__array__Array__with_native]))(var82, var83, 2l); /* with_native on <var82:Array[Text]>*/
}
}
{
core___core__Process___init(var73, var75, var82); /* Direct call exec#Process#init on <var73:Process>*/
}
var_proc_exist = var73;
{
core___core__Process___wait(var_proc_exist); /* Direct call exec#Process#wait on <var_proc_exist:Process>*/
}
{
var84 = core___core__Process___status(var_proc_exist);
}
var_status = var84;
{
{ /* Inline kernel#Int#== (var_status,1l) on <var_status:Int> */
var87 = var_status == 1l;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
if (unlikely(varonce88==NULL)) {
var89 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "Error: dev package for `";
var93 = core__abstract_text___CString___to_s_full(var92, 24l, 24l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var89)->values[0]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "` unknown by `pkg-config`, install it with `apt-get`, `brew` or similar.";
var97 = core__abstract_text___CString___to_s_full(var96, 72l, 72l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var89)->values[2]=var95;
} else {
var89 = varonce88;
varonce88 = NULL;
}
((struct instance_core__NativeArray*)var89)->values[1]=var_pkg72;
{
var98 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var98); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label99;
} else {
{
{ /* Inline kernel#Int#!= (var_status,0l) on <var_status:Int> */
var102 = var_status == 0l;
var103 = !var102;
var100 = var103;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
if (var100){
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "Error: something went wrong calling `pkg-config`, make sure it is correctly installed.";
var107 = core__abstract_text___CString___to_s_full(var106, 86l, 86l);
var105 = var107;
varonce104 = var105;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var105); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label99;
} else {
}
}
{
{ /* Inline light_c#MModule#pkgconfigs (var_mmodule) on <var_mmodule:MModule> */
var110 = var_mmodule->attrs[COLOR_nitc__light_c__MModule___pkgconfigs].val; /* _pkgconfigs on <var_mmodule:MModule> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 83);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var108, var_pkg72); /* Direct call array#Array#add on <var108:Array[String]>*/
}
BREAK_label99: (void)0;
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_68); /* next on <var_68:IndexedIterator[String]>*/
}
}
BREAK_label70: (void)0;
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_68); /* finish on <var_68:IndexedIterator[String]>*/
}
RET_LABEL:;
}
