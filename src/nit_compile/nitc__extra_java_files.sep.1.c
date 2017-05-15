#include "nitc__extra_java_files.sep.0.h"
/* method extra_java_files#MModule#extra_java_files for (self: MModule): nullable Array[JavaFile] */
val* nitc__extra_java_files___MModule___extra_java_files(val* self) {
val* var /* : nullable Array[JavaFile] */;
val* var1 /* : nullable Array[JavaFile] */;
var1 = self->attrs[COLOR_nitc__extra_java_files__MModule___extra_java_files].val; /* _extra_java_files on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method extra_java_files#MModule#extra_java_files= for (self: MModule, nullable Array[JavaFile]) */
void nitc__extra_java_files___MModule___extra_java_files_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__extra_java_files__MModule___extra_java_files].val = p0; /* _extra_java_files on <self:MModule> */
RET_LABEL:;
}
/* method extra_java_files#JavaExtraFilesPhase#process_annotated_node for (self: JavaExtraFilesPhase, ANode, AAnnotation) */
void nitc__extra_java_files___nitc__extra_java_files__JavaExtraFilesPhase___nitc__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nmoduledecl /* var nmoduledecl: ANode */;
val* var_nat /* var nat: AAnnotation */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var_annot_name /* var annot_name: String */;
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
val* var15 /* : NativeArray[String] */;
static val* varonce14;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : ANodes[AExpr] */;
val* var27 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
short int var28 /* : Bool */;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var40 /* : nullable ANode */;
val* var42 /* : nullable ANode */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name;
val* var_nmodule /* var nmodule: AModule */;
val* var46 /* : nullable MModule */;
val* var48 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var49 /* : nullable Array[JavaFile] */;
val* var51 /* : nullable Array[JavaFile] */;
val* var_java_files /* var java_files: nullable Array[JavaFile] */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : Array[JavaFile] */;
val* var57 /* : NativeArray[String] */;
static val* varonce56;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var_format_error /* var format_error: String */;
val* var_ /* var : ANodes[AExpr] */;
val* var67 /* : Iterator[ANode] */;
val* var_68 /* var : Iterator[AExpr] */;
short int var69 /* : Bool */;
val* var70 /* : nullable Object */;
val* var_arg /* var arg: AExpr */;
val* var71 /* : nullable String */;
val* var_path /* var path: nullable String */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : Location */;
val* var76 /* : Location */;
val* var77 /* : nullable SourceFile */;
val* var79 /* : nullable SourceFile */;
val* var_source_file /* var source_file: nullable SourceFile */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
val* var86 /* : NativeArray[String] */;
static val* varonce85;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var95 /* : String */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var110 /* : JavaFile */;
val* var_file /* var file: JavaFile */;
val* var111 /* : Array[ExternFile] */;
val* var113 /* : Array[ExternFile] */;
var_nmoduledecl = p0;
var_nat = p1;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "extra_java_files";
var2 = core__abstract_text___CString___to_s_full(var1, 16l, 16l);
var = var2;
varonce = var;
}
var_annot_name = var;
{
var3 = nitc___nitc__AAnnotation___name(var_nat);
}
{
{ /* Inline kernel#Object#!= (var3,var_annot_name) on <var3:String> */
var_other = var_annot_name;
{
var6 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, var_other); /* == on <var3:String>*/
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
{ /* Inline phase#Phase#toolcontext (self) on <self:JavaExtraFilesPhase> */
var10 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:JavaExtraFilesPhase> */
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
if (unlikely(varonce14==NULL)) {
var15 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Syntax Error: only the declaration of modules may use `";
var19 = core__abstract_text___CString___to_s_full(var18, 55l, 55l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`.";
var23 = core__abstract_text___CString___to_s_full(var22, 2l, 2l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce14;
varonce14 = NULL;
}
((struct instance_core__NativeArray*)var15)->values[1]=var_annot_name;
{
var24 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var24); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_nat) on <var_nat:AAnnotation> */
var27 = var_nat->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_nat:AAnnotation> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_args = var25;
{
var28 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var_args);
}
if (var28){
if (unlikely(varonce29==NULL)) {
var30 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "Syntax Error: `";
var34 = core__abstract_text___CString___to_s_full(var33, 15l, 15l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var30)->values[0]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "` expects at least one argument.";
var38 = core__abstract_text___CString___to_s_full(var37, 32l, 32l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var30)->values[2]=var36;
} else {
var30 = varonce29;
varonce29 = NULL;
}
((struct instance_core__NativeArray*)var30)->values[1]=var_annot_name;
{
var39 = ((val*(*)(val* self))(var30->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var39); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#parent (var_nmoduledecl) on <var_nmoduledecl:ANode(AModuledecl)> */
var42 = var_nmoduledecl->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_nmoduledecl:ANode(AModuledecl)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
/* <var40:nullable ANode> isa AModule */
cltype44 = type_nitc__AModule.color;
idtype45 = type_nitc__AModule.id;
if(var40 == NULL) {
var43 = 0;
} else {
if(cltype44 >= var40->type->table_size) {
var43 = 0;
} else {
var43 = var40->type->type_table[cltype44] == idtype45;
}
}
if (unlikely(!var43)) {
var_class_name = var40 == NULL ? "null" : var40->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__extra_java_files, 59);
fatal_exit(1);
}
var_nmodule = var40;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var48 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__extra_java_files, 60);
fatal_exit(1);
}
var_mmodule = var46;
{
{ /* Inline extra_java_files#MModule#extra_java_files (var_mmodule) on <var_mmodule:MModule> */
var51 = var_mmodule->attrs[COLOR_nitc__extra_java_files__MModule___extra_java_files].val; /* _extra_java_files on <var_mmodule:MModule> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_java_files = var49;
if (var_java_files == NULL) {
var52 = 1; /* is null */
} else {
var52 = 0; /* arg is null but recv is not */
}
if (0) {
var53 = core___core__Array___core__kernel__Object___61d_61d(var_java_files, ((val*)NULL));
var52 = var53;
}
if (var52){
var54 = NEW_core__Array(&type_core__Array__nitc__JavaFile);
{
core___core__Array___core__kernel__Object__init(var54); /* Direct call array#Array#init on <var54:Array[JavaFile]>*/
}
var_java_files = var54;
{
{ /* Inline extra_java_files#MModule#extra_java_files= (var_mmodule,var_java_files) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__extra_java_files__MModule___extra_java_files].val = var_java_files; /* _extra_java_files on <var_mmodule:MModule> */
RET_LABEL55:(void)0;
}
}
} else {
}
if (unlikely(varonce56==NULL)) {
var57 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "Syntax Error: `";
var61 = core__abstract_text___CString___to_s_full(var60, 15l, 15l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var57)->values[0]=var59;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "` expects its arguments to be paths to java files.";
var65 = core__abstract_text___CString___to_s_full(var64, 50l, 50l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var57)->values[2]=var63;
} else {
var57 = varonce56;
varonce56 = NULL;
}
((struct instance_core__NativeArray*)var57)->values[1]=var_annot_name;
{
var66 = ((val*(*)(val* self))(var57->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var57); /* native_to_s on <var57:NativeArray[String]>*/
}
varonce56 = var57;
var_format_error = var66;
var_ = var_args;
{
var67 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_68 = var67;
for(;;) {
{
var69 = ((short int(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_68); /* is_ok on <var_68:Iterator[AExpr]>*/
}
if (var69){
} else {
goto BREAK_label;
}
{
var70 = ((val*(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_68); /* item on <var_68:Iterator[AExpr]>*/
}
var_arg = var70;
{
var71 = nitc__literal___AExpr___as_string(var_arg);
}
var_path = var71;
if (var_path == NULL) {
var72 = 1; /* is null */
} else {
var72 = 0; /* arg is null but recv is not */
}
if (0) {
var73 = ((short int(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_path, ((val*)NULL)); /* == on <var_path:nullable String>*/
var72 = var73;
}
if (var72){
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_arg, var_format_error); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#location (var_nat) on <var_nat:AAnnotation> */
var76 = var_nat->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nat:AAnnotation> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline location#Location#file (var74) on <var74:Location> */
var79 = var74->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var74:Location> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_source_file = var77;
if (var_source_file == NULL) {
var80 = 0; /* is null */
} else {
var80 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_source_file,((val*)NULL)) on <var_source_file:nullable SourceFile> */
var_other = ((val*)NULL);
{
var83 = ((short int(*)(val* self, val* p0))(var_source_file->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_source_file, var_other); /* == on <var_source_file:nullable SourceFile(SourceFile)>*/
}
var84 = !var83;
var81 = var84;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var80 = var81;
}
if (var80){
if (unlikely(varonce85==NULL)) {
var86 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "/";
var90 = core__abstract_text___CString___to_s_full(var89, 1l, 1l);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var86)->values[1]=var88;
} else {
var86 = varonce85;
varonce85 = NULL;
}
{
{ /* Inline location#SourceFile#filename (var_source_file) on <var_source_file:nullable SourceFile(SourceFile)> */
var93 = var_source_file->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var_source_file:nullable SourceFile(SourceFile)> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
var94 = core__file___String___dirname(var91);
}
((struct instance_core__NativeArray*)var86)->values[0]=var94;
((struct instance_core__NativeArray*)var86)->values[2]=var_path;
{
var95 = ((val*(*)(val* self))(var86->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var86); /* native_to_s on <var86:NativeArray[String]>*/
}
varonce85 = var86;
var_path = var95;
} else {
}
{
var96 = core__file___Text___file_exists(var_path);
}
var97 = !var96;
if (var97){
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "FFI with Java Error: file `";
var103 = core__abstract_text___CString___to_s_full(var102, 27l, 27l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "` not found.";
var107 = core__abstract_text___CString___to_s_full(var106, 12l, 12l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var99)->values[2]=var105;
} else {
var99 = varonce98;
varonce98 = NULL;
}
((struct instance_core__NativeArray*)var99)->values[1]=var_path;
{
var108 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_nat, var108); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label109;
} else {
}
var110 = NEW_nitc__JavaFile(&type_nitc__JavaFile);
{
((void(*)(val* self, val* p0))(var110->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var110, var_path); /* filename= on <var110:JavaFile>*/
}
{
((void(*)(val* self))(var110->class->vft[COLOR_core__kernel__Object__init]))(var110); /* init on <var110:JavaFile>*/
}
var_file = var110;
{
{ /* Inline light_ffi_base#MModule#ffi_files (var_mmodule) on <var_mmodule:MModule> */
var113 = var_mmodule->attrs[COLOR_nitc__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <var_mmodule:MModule> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 82);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var111, var_file); /* Direct call array#Array#add on <var111:Array[ExternFile]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_java_files, var_file); /* Direct call array#Array#add on <var_java_files:nullable Array[JavaFile](Array[JavaFile])>*/
}
BREAK_label109: (void)0;
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_68); /* next on <var_68:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_68); /* finish on <var_68:Iterator[AExpr]>*/
}
RET_LABEL:;
}
/* method extra_java_files#JavaLanguage#compile_to_files for (self: JavaLanguage, MModule, String) */
void nitc__extra_java_files___JavaLanguage___nitc__light_ffi_base__FFILanguage__compile_to_files(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_compdir /* var compdir: String */;
val* var /* : nullable Array[JavaFile] */;
val* var2 /* : nullable Array[JavaFile] */;
val* var_extra_java_files /* var extra_java_files: nullable Array[JavaFile] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_ /* var : Array[JavaFile] */;
val* var8 /* : IndexedIterator[nullable Object] */;
val* var_9 /* var : IndexedIterator[JavaFile] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_file /* var file: JavaFile */;
val* var12 /* : String */;
val* var14 /* : String */;
val* var_path /* var path: String */;
val* var15 /* : NativeArray[String] */;
static val* varonce;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
var_mmodule = p0;
var_compdir = p1;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__extra_java_files___JavaLanguage___nitc__light_ffi_base__FFILanguage__compile_to_files]))(self, p0, p1); /* compile_to_files on <self:JavaLanguage>*/
}
{
{ /* Inline extra_java_files#MModule#extra_java_files (var_mmodule) on <var_mmodule:MModule> */
var2 = var_mmodule->attrs[COLOR_nitc__extra_java_files__MModule___extra_java_files].val; /* _extra_java_files on <var_mmodule:MModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_extra_java_files = var;
if (var_extra_java_files == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_extra_java_files,((val*)NULL)) on <var_extra_java_files:nullable Array[JavaFile]> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_extra_java_files->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_extra_java_files, var_other); /* == on <var_extra_java_files:nullable Array[JavaFile](Array[JavaFile])>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var_ = var_extra_java_files;
{
var8 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:IndexedIterator[JavaFile]>*/
}
if (var10){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:IndexedIterator[JavaFile]>*/
}
var_file = var11;
{
{ /* Inline c_tools#ExternFile#filename (var_file) on <var_file:JavaFile> */
var14 = var_file->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <var_file:JavaFile> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_path = var12;
if (unlikely(varonce==NULL)) {
var15 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "/";
var19 = core__abstract_text___CString___to_s_full(var18, 1l, 1l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[1]=var17;
} else {
var15 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var15)->values[0]=var_compdir;
{
var20 = ((val*(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__file__String__basename]))(var_path, ((val*)NULL)); /* basename on <var_path:String>*/
}
((struct instance_core__NativeArray*)var15)->values[2]=var20;
{
var21 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
core__file___String___file_copy_to(var_path, var21); /* Direct call file#String#file_copy_to on <var_path:String>*/
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:IndexedIterator[JavaFile]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:IndexedIterator[JavaFile]>*/
}
} else {
}
RET_LABEL:;
}
