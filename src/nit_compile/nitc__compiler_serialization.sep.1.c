#include "nitc__compiler_serialization.sep.0.h"
/* method compiler_serialization#ModelBuilder#write_and_make for (self: ModelBuilder, AbstractCompiler) */
void nitc__compiler_serialization___ModelBuilder___write_and_make(val* self, val* p0) {
val* var_compiler /* var compiler: AbstractCompiler */;
short int var_uses_json_serialization_read /* var uses_json_serialization_read: Bool */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : POSetElement[MModule] */;
val* var5 /* : POSetElement[MModule] */;
val* var6 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[MModule] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_mod /* var mod: MModule */;
val* var11 /* : nullable MConcern */;
val* var_concern /* var concern: nullable MConcern */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : String */;
val* var16 /* : String */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
short int var20 /* : Bool */;
short int var_21 /* var : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var_27 /* var : Bool */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : MModule */;
val* var40 /* : MModule */;
val* var41 /* : POSet[MClass] */;
var_compiler = p0;
var_uses_json_serialization_read = 0;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var) on <var:MModule> */
var5 = var->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var:MModule> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = poset___poset__POSetElement___greaters(var3);
}
var_ = var6;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[MModule]>*/
}
if (var9){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[MModule]>*/
}
var_mod = var10;
{
var11 = nitc___nitc__MModule___nitc__model_base__MConcern__parent_concern(var_mod);
}
var_concern = var11;
{
{ /* Inline mmodule#MModule#name (var_mod) on <var_mod:MModule> */
var16 = var_mod->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mod:MModule> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "serialization_read";
var19 = core__abstract_text___CString___to_s_full(var18, 18l, 18l);
var17 = var19;
varonce = var17;
}
{
var20 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_core__kernel__Object___61d_61d]))(var14, var17); /* == on <var14:String>*/
}
var_21 = var20;
if (var20){
if (var_concern == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_concern,((val*)NULL)) on <var_concern:nullable MConcern> */
var_other = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_concern->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_concern, var_other); /* == on <var_concern:nullable MConcern(MConcern)>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
var13 = var22;
} else {
var13 = var_21;
}
var_27 = var13;
if (var13){
{
var28 = ((val*(*)(val* self))(var_concern->class->vft[COLOR_nitc__model_base__MEntity__name]))(var_concern); /* name on <var_concern:nullable MConcern(MConcern)>*/
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "json";
var32 = core__abstract_text___CString___to_s_full(var31, 4l, 4l);
var30 = var32;
varonce29 = var30;
}
{
var33 = ((short int(*)(val* self, val* p0))(var28->class->vft[COLOR_core__kernel__Object___61d_61d]))(var28, var30); /* == on <var28:String>*/
}
var12 = var33;
} else {
var12 = var_27;
}
if (var12){
var_uses_json_serialization_read = 1;
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[MModule]>*/
}
if (var_uses_json_serialization_read){
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "nit_class_inheritance_metamodel";
var37 = core__abstract_text___CString___to_s_full(var36, 31l, 31l);
var35 = var37;
varonce34 = var35;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var_compiler) on <var_compiler:AbstractCompiler> */
var40 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var_compiler:AbstractCompiler> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = nitc__model___MModule___flatten_mclass_hierarchy(var38);
}
{
nitc__compiler_serialization___ModelBuilder___write_poset_to_file(self, var_compiler, var35, var41); /* Direct call compiler_serialization#ModelBuilder#write_poset_to_file on <self:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__compiler_serialization___ModelBuilder___write_and_make]))(self, p0); /* write_and_make on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method compiler_serialization#ModelBuilder#write_poset_to_file for (self: ModelBuilder, AbstractCompiler, String, POSet[Object]) */
void nitc__compiler_serialization___ModelBuilder___write_poset_to_file(val* self, val* p0, val* p1, val* p2) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var_name /* var name: String */;
val* var_poset /* var poset: POSet[Object] */;
val* var /* : String */;
val* var_json /* var json: String */;
val* var1 /* : CodeFile */;
val* var_code /* var code: CodeFile */;
val* var2 /* : Array[CodeFile] */;
val* var4 /* : Array[CodeFile] */;
val* var5 /* : CodeWriter */;
val* var_writer /* var writer: CodeWriter */;
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
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
var_compiler = p0;
var_name = p1;
var_poset = p2;
{
var = nitc__serialize_model___poset__POSet___to_thin_json(var_poset);
}
var_json = var;
var1 = NEW_nitc__CodeFile(&type_nitc__CodeFile);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__CodeFile__name_61d]))(var1, var_name); /* name= on <var1:CodeFile>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:CodeFile>*/
}
var_code = var1;
{
{ /* Inline abstract_compiler#AbstractCompiler#files (var_compiler) on <var_compiler:AbstractCompiler> */
var4 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <var_compiler:AbstractCompiler> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 578);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var2, var_code); /* Direct call array#Array#add on <var2:Array[CodeFile]>*/
}
var5 = NEW_nitc__CodeWriter(&type_nitc__CodeWriter);
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nitc__abstract_compiler__CodeWriter__file_61d]))(var5, var_code); /* file= on <var5:CodeWriter>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:CodeWriter>*/
}
var_writer = var5;
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "char *";
var10 = core__abstract_text___CString___to_s_full(var9, 6l, 6l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = " = \"";
var14 = core__abstract_text___CString___to_s_full(var13, 4l, 4l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var6)->values[2]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "\";\n\t\t";
var18 = core__abstract_text___CString___to_s_full(var17, 5l, 5l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var6)->values[4]=var16;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var6)->values[1]=var_name;
{
var19 = ((val*(*)(val* self))(var_json->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var_json); /* escape_to_c on <var_json:String>*/
}
((struct instance_core__NativeArray*)var6)->values[3]=var19;
{
var20 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
nitc___nitc__CodeWriter___add(var_writer, var20); /* Direct call abstract_compiler#CodeWriter#add on <var_writer:CodeWriter>*/
}
RET_LABEL:;
}
/* method compiler_serialization#AMethPropdef#compile_intern_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nitc__compiler_serialization___AMethPropdef___compile_intern_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : String */;
val* var6 /* : String */;
val* var_pname /* var pname: String */;
val* var7 /* : nullable MSignature */;
val* var9 /* : nullable MSignature */;
val* var10 /* : nullable MType */;
val* var12 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
short int var16 /* : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : RuntimeVariable */;
short int var26 /* : Bool */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var3 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var1) on <var1:MProperty(MMethod)> */
var6 = var1->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var1:MProperty(MMethod)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_pname = var4;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var9 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_serialization, 59);
fatal_exit(1);
}
{
{ /* Inline model#MSignature#return_mtype (var7) on <var7:nullable MSignature(MSignature)> */
var12 = var7->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var7:nullable MSignature(MSignature)> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ret = var10;
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "class_inheritance_metamodel_json";
var15 = core__abstract_text___CString___to_s_full(var14, 32l, 32l);
var13 = var15;
varonce = var13;
}
{
var16 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var13); /* == on <var_pname:String>*/
}
if (var16){
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "extern char* nit_class_inheritance_metamodel;";
var20 = core__abstract_text___CString___to_s_full(var19, 45l, 45l);
var18 = var20;
varonce17 = var18;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var18); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "nit_class_inheritance_metamodel";
var24 = core__abstract_text___CString___to_s_full(var23, 31l, 31l);
var22 = var24;
varonce21 = var22;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_serialization, 62);
fatal_exit(1);
}
{
var25 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var22, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
{
var26 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nitc__compiler_serialization___AMethPropdef___compile_intern_to_c]))(self, p0, p1, p2); /* compile_intern_to_c on <self:AMethPropdef>*/
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
