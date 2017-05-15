#include "nitc__java.sep.0.h"
/* method java#JavaLanguage#identify_language for (self: JavaLanguage, AExternCodeBlock): Bool */
short int nitc___nitc__JavaLanguage___nitc__light_ffi_base__FFILanguage__identify_language(val* self, val* p0) {
short int var /* : Bool */;
val* var_n /* var n: AExternCodeBlock */;
short int var1 /* : Bool */;
var_n = p0;
{
var1 = nitc__java___AExternCodeBlock___is_java(var_n);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#JavaLanguage#compile_module_block for (self: JavaLanguage, AExternCodeBlock, CCompilationUnit, MModule) */
void nitc___nitc__JavaLanguage___nitc__light_ffi_base__FFILanguage__compile_module_block(val* self, val* p0, val* p1, val* p2) {
val* var_block /* var block: AExternCodeBlock */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : nullable JavaClassTemplate */;
val* var2 /* : nullable JavaClassTemplate */;
val* var_java_file /* var java_file: nullable JavaClassTemplate */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Template */;
val* var11 /* : Template */;
val* var12 /* : String */;
val* var13 /* : Template */;
val* var15 /* : Template */;
val* var16 /* : String */;
var_block = p0;
var_ccu = p1;
var_mmodule = p2;
{
nitc__java___MModule___ensure_java_files(var_mmodule); /* Direct call java#MModule#ensure_java_files on <var_mmodule:MModule>*/
}
{
{ /* Inline java#MModule#java_file (var_mmodule) on <var_mmodule:MModule> */
var2 = var_mmodule->attrs[COLOR_nitc__java__MModule___java_file].val; /* _java_file on <var_mmodule:MModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_java_file = var;
if (var_java_file == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_java_file,((val*)NULL)) on <var_java_file:nullable JavaClassTemplate> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_java_file->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_java_file, var_other); /* == on <var_java_file:nullable JavaClassTemplate(JavaClassTemplate)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 39);
fatal_exit(1);
}
{
var8 = nitc__java___AExternCodeBlock___is_inner_java(var_block);
}
if (var8){
{
{ /* Inline java#JavaClassTemplate#class_content (var_java_file) on <var_java_file:nullable JavaClassTemplate(JavaClassTemplate)> */
var11 = var_java_file->attrs[COLOR_nitc__java__JavaClassTemplate___class_content].val; /* _class_content on <var_java_file:nullable JavaClassTemplate(JavaClassTemplate)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 341);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var9, var12); /* Direct call template#Template#add on <var9:Template>*/
}
} else {
{
{ /* Inline java#JavaClassTemplate#header (var_java_file) on <var_java_file:nullable JavaClassTemplate(JavaClassTemplate)> */
var15 = var_java_file->attrs[COLOR_nitc__java__JavaClassTemplate___header].val; /* _header on <var_java_file:nullable JavaClassTemplate(JavaClassTemplate)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 340);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var13, var16); /* Direct call template#Template#add on <var13:Template>*/
}
}
RET_LABEL:;
}
/* method java#JavaLanguage#compile_extern_method for (self: JavaLanguage, AExternCodeBlock, AMethPropdef, CCompilationUnit, MModule) */
void nitc___nitc__JavaLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_method(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AMethPropdef */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : nullable JavaClassTemplate */;
val* var3 /* : nullable JavaClassTemplate */;
val* var_java_file /* var java_file: nullable JavaClassTemplate */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable ANode */;
val* var11 /* : nullable ANode */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var13 /* : nullable MClass */;
val* var15 /* : nullable MClass */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var19 /* : nullable MPropDef */;
val* var21 /* : nullable MPropDef */;
val* var_mmethodef /* var mmethodef: nullable MMethodDef */;
val* var22 /* : nullable MPropDef */;
val* var24 /* : nullable MPropDef */;
val* var25 /* : MProperty */;
val* var27 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
val* var28 /* : ExternCFunction */;
val* var_fc /* var fc: ExternCFunction */;
val* var29 /* : Template */;
val* var31 /* : Template */;
val* var32 /* : NativeArray[String] */;
static val* varonce;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : Sys */;
val* var48 /* : SignatureLength */;
val* var49 /* : String */;
val* var_java_fun_name /* var java_fun_name: String */;
val* var50 /* : String */;
val* var_jni_format /* var jni_format: String */;
val* var51 /* : Template */;
val* var53 /* : Template */;
val* var55 /* : NativeArray[String] */;
static val* varonce54;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var69 /* : nullable MSignature */;
val* var71 /* : nullable MSignature */;
val* var_signature /* var signature: nullable MSignature */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : Array[String] */;
val* var_params /* var params: Array[String] */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
val* var93 /* : String */;
val* var_jni_signature_alt /* var jni_signature_alt: nullable Object */;
val* var_return_type /* var return_type: nullable Object */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : nullable MType */;
val* var100 /* : nullable MType */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
val* var106 /* : nullable MType */;
val* var108 /* : nullable MType */;
val* var_ret_mtype /* var ret_mtype: nullable MType */;
val* var109 /* : MType */;
val* var110 /* : nullable MType */;
val* var112 /* : nullable MType */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : Array[MParameter] */;
val* var120 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var121 /* : IndexedIterator[nullable Object] */;
val* var_122 /* var : IndexedIterator[MParameter] */;
short int var123 /* : Bool */;
val* var124 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var125 /* : MType */;
val* var127 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var128 /* : MType */;
val* var129 /* : Sys */;
val* var130 /* : ToJavaCallContext */;
val* var131 /* : String */;
val* var133 /* : String */;
val* var134 /* : String */;
val* var136 /* : NativeArray[String] */;
static val* varonce135;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var_cname /* var cname: String */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
val* var152 /* : NativeArray[String] */;
static val* varonce151;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : CString */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : CString */;
val* var160 /* : String */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : CString */;
val* var164 /* : String */;
val* var165 /* : String */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : CString */;
val* var169 /* : String */;
val* var170 /* : String */;
val* var171 /* : String */;
val* var_ccall /* var ccall: nullable Object */;
val* var173 /* : NativeArray[String] */;
static val* varonce172;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : CString */;
val* var177 /* : String */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : CString */;
val* var181 /* : String */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : CString */;
val* var185 /* : String */;
val* var186 /* : String */;
val* var187 /* : String */;
val* var188 /* : Template */;
val* var190 /* : Template */;
val* var192 /* : NativeArray[String] */;
static val* varonce191;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : CString */;
val* var196 /* : String */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : CString */;
val* var200 /* : String */;
val* var201 /* : String */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
val* var207 /* : Template */;
val* var209 /* : Template */;
val* var211 /* : NativeArray[String] */;
static val* varonce210;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : CString */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : CString */;
val* var219 /* : String */;
val* var220 /* : Sys */;
val* var221 /* : ToJavaCallContext */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : CString */;
val* var225 /* : String */;
val* var226 /* : String */;
val* var227 /* : String */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : CString */;
val* var231 /* : String */;
val* var232 /* : Sys */;
val* var233 /* : SignatureLength */;
val* var234 /* : Sys */;
val* var235 /* : JavaCallContext */;
val* var236 /* : String */;
val* var_java_csig /* var java_csig: String */;
val* var237 /* : nullable JavaClassTemplate */;
val* var239 /* : nullable JavaClassTemplate */;
val* var240 /* : Template */;
val* var242 /* : Template */;
val* var244 /* : NativeArray[String] */;
static val* varonce243;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : CString */;
val* var248 /* : String */;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : CString */;
val* var252 /* : String */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : CString */;
val* var256 /* : String */;
static val* varonce257;
val* var258 /* : String */;
char* var259 /* : CString */;
val* var260 /* : String */;
val* var261 /* : Location */;
val* var263 /* : Location */;
val* var264 /* : String */;
val* var265 /* : String */;
val* var266 /* : String */;
val* var267 /* : ForeignCallbackSet */;
val* var269 /* : ForeignCallbackSet */;
val* var270 /* : ForeignCallbackSet */;
var_block = p0;
var_m = p1;
var_ccu = p2;
var_mmodule = p3;
{
{ /* Inline java#JavaLanguage#ffi_ccu= (self,var_ccu) on <self:JavaLanguage> */
self->attrs[COLOR_nitc__java__JavaLanguage___ffi_ccu].val = var_ccu; /* _ffi_ccu on <self:JavaLanguage> */
RET_LABEL1:(void)0;
}
}
{
nitc__java___MModule___ensure_java_files(var_mmodule); /* Direct call java#MModule#ensure_java_files on <var_mmodule:MModule>*/
}
{
{ /* Inline java#MModule#java_file (var_mmodule) on <var_mmodule:MModule> */
var3 = var_mmodule->attrs[COLOR_nitc__java__MModule___java_file].val; /* _java_file on <var_mmodule:MModule> */
var = var3;
RET_LABEL2:(void)0;
}
}
var_java_file = var;
if (var_java_file == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_java_file,((val*)NULL)) on <var_java_file:nullable JavaClassTemplate> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_java_file->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_java_file, var_other); /* == on <var_java_file:nullable JavaClassTemplate(JavaClassTemplate)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 51);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ANode#parent (var_m) on <var_m:AMethPropdef> */
var11 = var_m->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_m:AMethPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
/* <var9:nullable ANode> isa AClassdef */
cltype = type_nitc__AClassdef.color;
idtype = type_nitc__AClassdef.id;
if(var9 == NULL) {
var12 = 0;
} else {
if(cltype >= var9->type->table_size) {
var12 = 0;
} else {
var12 = var9->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
var_class_name = var9 == NULL ? "null" : var9->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AClassdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 53);
fatal_exit(1);
}
{
{ /* Inline modelize_class#AClassdef#mclass (var9) on <var9:nullable ANode(AClassdef)> */
var15 = var9->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val; /* _mclass on <var9:nullable ANode(AClassdef)> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 53);
fatal_exit(1);
} else {
{ /* Inline model#MClass#mclass_type (var13) on <var13:nullable MClass> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var18 = var13->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var13:nullable MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_mclass_type = var16;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_m) on <var_m:AMethPropdef> */
var21 = var_m->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_m:AMethPropdef> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_mmethodef = var19;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_m) on <var_m:AMethPropdef> */
var24 = var_m->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_m:AMethPropdef> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 55);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var22) on <var22:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var27 = var22->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var22:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_mproperty = var25;
var28 = NEW_nitc__ExternCFunction(&type_nitc__ExternCFunction);
{
nitc___nitc__ExternCFunction___init(var28, var_m, var_mmodule); /* Direct call light_c#ExternCFunction#init on <var28:ExternCFunction>*/
}
var_fc = var28;
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:ExternCFunction> */
var31 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:ExternCFunction> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var32 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "\tjclass java_class;\n\tjmethodID java_meth_id;\n\n\t// retrieve the current JVM\n\tSys sys = Pointer_sys(NULL);\n\tJNIEnv *nit_ffi_jni_env = Sys_jni_env(sys);\n\n\t// retrieve the implementation Java class\n\tjava_class = Sys_load_jclass(sys, \"";
var36 = core__abstract_text___CString___to_s_full(var35, 230l, 230l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var32)->values[0]=var34;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "\");\n\tif (java_class == NULL) {\n\t\tPRINT_ERROR(\"Nit FFI with Java error: failed to load class.\\n\");\n\t\t(*nit_ffi_jni_env)->ExceptionDescribe(nit_ffi_jni_env);\n\t\texit(1);\n\t}\n\n\t// register callbacks (only once per Nit module)\n\tif (!nit_ffi_with_java_registered_natives) nit_ffi_with_java_register_natives(nit_ffi_jni_env, java_class);\n";
var40 = core__abstract_text___CString___to_s_full(var39, 330l, 330l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var32)->values[2]=var38;
} else {
var32 = varonce;
varonce = NULL;
}
{
var41 = nitc__java___MModule___impl_java_class_name(var_mmodule);
}
((struct instance_core__NativeArray*)var32)->values[1]=var41;
{
var42 = ((val*(*)(val* self))(var32->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var32); /* native_to_s on <var32:NativeArray[String]>*/
}
varonce = var32;
{
template___template__Template___add(var29, var42); /* Direct call template#Template#add on <var29:Template>*/
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "___java_impl";
var46 = core__abstract_text___CString___to_s_full(var45, 12l, 12l);
var44 = var46;
varonce43 = var44;
}
var47 = glob_sys;
{
var48 = nitc__nitni_utilities___core__Sys___long_signature(var47);
}
{
var49 = nitc__nitni_utilities___MMethod___build_cname(var_mproperty, var_mclass_type, var_mmodule, var44, var48);
}
var_java_fun_name = var49;
{
var50 = nitc__java___MMethod___build_jni_format(var_mproperty, var_mclass_type, var_mmodule);
}
var_jni_format = var50;
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:ExternCFunction> */
var53 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:ExternCFunction> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (unlikely(varonce54==NULL)) {
var55 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "\t// retreive the implementation static function\n\tjava_meth_id = (*nit_ffi_jni_env)->GetStaticMethodID(nit_ffi_jni_env, java_class, \"";
var59 = core__abstract_text___CString___to_s_full(var58, 132l, 132l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var55)->values[0]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "\", \"";
var63 = core__abstract_text___CString___to_s_full(var62, 4l, 4l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var55)->values[2]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "\");\n\tif (java_meth_id == NULL) {\n\t\tPRINT_ERROR(\"Nit FFI with Java error: Java implementation not found.\\n\");\n\t\t(*nit_ffi_jni_env)->ExceptionDescribe(nit_ffi_jni_env);\n\t\texit(1);\n\t}\n";
var67 = core__abstract_text___CString___to_s_full(var66, 181l, 181l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var55)->values[4]=var65;
} else {
var55 = varonce54;
varonce54 = NULL;
}
((struct instance_core__NativeArray*)var55)->values[1]=var_java_fun_name;
((struct instance_core__NativeArray*)var55)->values[3]=var_jni_format;
{
var68 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var55); /* native_to_s on <var55:NativeArray[String]>*/
}
varonce54 = var55;
{
template___template__Template___add(var51, var68); /* Direct call template#Template#add on <var51:Template>*/
}
if (var_mmethodef == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 94);
fatal_exit(1);
} else {
{ /* Inline model#MMethodDef#msignature (var_mmethodef) on <var_mmethodef:nullable MMethodDef> */
if (unlikely(var_mmethodef == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2483);
fatal_exit(1);
}
var71 = var_mmethodef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethodef:nullable MMethodDef> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_signature = var69;
if (var_signature == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_signature,((val*)NULL)) on <var_signature:nullable MSignature> */
var_other = ((val*)NULL);
{
var75 = ((short int(*)(val* self, val* p0))(var_signature->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_signature, var_other); /* == on <var_signature:nullable MSignature(MSignature)>*/
}
var76 = !var75;
var73 = var76;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
if (unlikely(!var72)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 95);
fatal_exit(1);
}
var77 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var77); /* Direct call array#Array#init on <var77:Array[String]>*/
}
var_params = var77;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "nit_ffi_jni_env";
var81 = core__abstract_text___CString___to_s_full(var80, 15l, 15l);
var79 = var81;
varonce78 = var79;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_params, var79); /* Direct call array#Array#add on <var_params:Array[String]>*/
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "java_class";
var85 = core__abstract_text___CString___to_s_full(var84, 10l, 10l);
var83 = var85;
varonce82 = var83;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_params, var83); /* Direct call array#Array#add on <var_params:Array[String]>*/
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "java_meth_id";
var89 = core__abstract_text___CString___to_s_full(var88, 12l, 12l);
var87 = var89;
varonce86 = var87;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_params, var87); /* Direct call array#Array#add on <var_params:Array[String]>*/
}
{
{ /* Inline model#MMethod#is_init (var_mproperty) on <var_mproperty:MMethod> */
var92 = var_mproperty->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_mproperty:MMethod> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (var90){
{
var93 = nitc__java___MClassType___MType__jni_signature_alt(var_mclass_type);
}
var_jni_signature_alt = var93;
var_return_type = var_mclass_type;
} else {
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "self";
var97 = core__abstract_text___CString___to_s_full(var96, 4l, 4l);
var95 = var97;
varonce94 = var95;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_params, var95); /* Direct call array#Array#add on <var_params:Array[String]>*/
}
{
{ /* Inline model#MSignature#return_mtype (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var100 = var_signature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_signature:nullable MSignature(MSignature)> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (var98 == NULL) {
var101 = 0; /* is null */
} else {
var101 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var98,((val*)NULL)) on <var98:nullable MType> */
var_other = ((val*)NULL);
{
var104 = ((short int(*)(val* self, val* p0))(var98->class->vft[COLOR_core__kernel__Object___61d_61d]))(var98, var_other); /* == on <var98:nullable MType(MType)>*/
}
var105 = !var104;
var102 = var105;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
var101 = var102;
}
if (var101){
{
{ /* Inline model#MSignature#return_mtype (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var108 = var_signature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_signature:nullable MSignature(MSignature)> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
var_ret_mtype = var106;
if (var_ret_mtype == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 111);
fatal_exit(1);
} else {
var109 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_ret_mtype, var_mclass_type, var_mclass_type, var_mmodule, 1); /* resolve_for on <var_ret_mtype:nullable MType>*/
}
var_ret_mtype = var109;
{
{ /* Inline model#MSignature#return_mtype (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var112 = var_signature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_signature:nullable MSignature(MSignature)> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
var_return_type = var110;
if (var_return_type == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 113);
fatal_exit(1);
} else {
var113 = ((val*(*)(val* self))(var_return_type->class->vft[COLOR_nitc__java__MType__jni_signature_alt]))(var_return_type); /* jni_signature_alt on <var_return_type:nullable Object(nullable MType)>*/
}
var_jni_signature_alt = var113;
} else {
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "Void";
var117 = core__abstract_text___CString___to_s_full(var116, 4l, 4l);
var115 = var117;
varonce114 = var115;
}
var_jni_signature_alt = var115;
var_return_type = ((val*)NULL);
}
}
{
{ /* Inline model#MSignature#mparameters (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var120 = var_signature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_signature:nullable MSignature(MSignature)> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
var_ = var118;
{
var121 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_122 = var121;
for(;;) {
{
var123 = ((short int(*)(val* self))((((long)var_122&3)?class_info[((long)var_122&3)]:var_122->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_122); /* is_ok on <var_122:IndexedIterator[MParameter]>*/
}
if (var123){
} else {
goto BREAK_label;
}
{
var124 = ((val*(*)(val* self))((((long)var_122&3)?class_info[((long)var_122&3)]:var_122->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_122); /* item on <var_122:IndexedIterator[MParameter]>*/
}
var_p = var124;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var127 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
var_param_mtype = var125;
{
var128 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_param_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_param_mtype, var_mclass_type, var_mclass_type, var_mmodule, 1); /* resolve_for on <var_param_mtype:MType>*/
}
var_param_mtype = var128;
var129 = glob_sys;
{
var130 = nitc__java___core__Sys___to_java_call_context(var129);
}
{
{ /* Inline model#MParameter#name (var_p) on <var_p:MParameter> */
var133 = var_p->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var_p:MParameter> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
var134 = nitc__java___nitc__java__ToJavaCallContext___nitc__nitni_utilities__CallContext__cast_to(var130, var_param_mtype, var131);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_params, var134); /* Direct call array#Array#add on <var_params:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_122&3)?class_info[((long)var_122&3)]:var_122->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_122); /* next on <var_122:IndexedIterator[MParameter]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_122&3)?class_info[((long)var_122&3)]:var_122->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_122); /* finish on <var_122:IndexedIterator[MParameter]>*/
}
if (unlikely(varonce135==NULL)) {
var136 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "(*nit_ffi_jni_env)->CallStatic";
var140 = core__abstract_text___CString___to_s_full(var139, 30l, 30l);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var136)->values[0]=var138;
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "Method";
var144 = core__abstract_text___CString___to_s_full(var143, 6l, 6l);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var136)->values[2]=var142;
} else {
var136 = varonce135;
varonce135 = NULL;
}
((struct instance_core__NativeArray*)var136)->values[1]=var_jni_signature_alt;
{
var145 = ((val*(*)(val* self))(var136->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var136); /* native_to_s on <var136:NativeArray[String]>*/
}
varonce135 = var136;
var_cname = var145;
if (var_return_type == NULL) {
var146 = 0; /* is null */
} else {
var146 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_return_type,((val*)NULL)) on <var_return_type:nullable Object(nullable MType)> */
var_other = ((val*)NULL);
{
var149 = ((short int(*)(val* self, val* p0))(var_return_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_return_type, var_other); /* == on <var_return_type:nullable MType(MType)>*/
}
var150 = !var149;
var147 = var150;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
var146 = var147;
}
if (var146){
if (unlikely(varonce151==NULL)) {
var152 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = " jni_res = ";
var156 = core__abstract_text___CString___to_s_full(var155, 11l, 11l);
var154 = var156;
varonce153 = var154;
}
((struct instance_core__NativeArray*)var152)->values[1]=var154;
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = "(";
var160 = core__abstract_text___CString___to_s_full(var159, 1l, 1l);
var158 = var160;
varonce157 = var158;
}
((struct instance_core__NativeArray*)var152)->values[3]=var158;
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = ");";
var164 = core__abstract_text___CString___to_s_full(var163, 2l, 2l);
var162 = var164;
varonce161 = var162;
}
((struct instance_core__NativeArray*)var152)->values[5]=var162;
} else {
var152 = varonce151;
varonce151 = NULL;
}
{
var165 = ((val*(*)(val* self))(var_return_type->class->vft[COLOR_nitc__java__MType__jni_type]))(var_return_type); /* jni_type on <var_return_type:nullable Object(MType)>*/
}
((struct instance_core__NativeArray*)var152)->values[0]=var165;
((struct instance_core__NativeArray*)var152)->values[2]=var_cname;
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = ", ";
var169 = core__abstract_text___CString___to_s_full(var168, 2l, 2l);
var167 = var169;
varonce166 = var167;
}
{
var170 = core__abstract_text___Collection___join(var_params, var167, ((val*)NULL));
}
((struct instance_core__NativeArray*)var152)->values[4]=var170;
{
var171 = ((val*(*)(val* self))(var152->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var152); /* native_to_s on <var152:NativeArray[String]>*/
}
varonce151 = var152;
var_ccall = var171;
} else {
if (unlikely(varonce172==NULL)) {
var173 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce174!=NULL)) {
var175 = varonce174;
} else {
var176 = "(";
var177 = core__abstract_text___CString___to_s_full(var176, 1l, 1l);
var175 = var177;
varonce174 = var175;
}
((struct instance_core__NativeArray*)var173)->values[1]=var175;
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = ");";
var181 = core__abstract_text___CString___to_s_full(var180, 2l, 2l);
var179 = var181;
varonce178 = var179;
}
((struct instance_core__NativeArray*)var173)->values[3]=var179;
} else {
var173 = varonce172;
varonce172 = NULL;
}
((struct instance_core__NativeArray*)var173)->values[0]=var_cname;
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = ", ";
var185 = core__abstract_text___CString___to_s_full(var184, 2l, 2l);
var183 = var185;
varonce182 = var183;
}
{
var186 = core__abstract_text___Collection___join(var_params, var183, ((val*)NULL));
}
((struct instance_core__NativeArray*)var173)->values[2]=var186;
{
var187 = ((val*(*)(val* self))(var173->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var173); /* native_to_s on <var173:NativeArray[String]>*/
}
varonce172 = var173;
var_ccall = var187;
}
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:ExternCFunction> */
var190 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:ExternCFunction> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
if (unlikely(varonce191==NULL)) {
var192 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "\t// execute implementation code\n\t";
var196 = core__abstract_text___CString___to_s_full(var195, 33l, 33l);
var194 = var196;
varonce193 = var194;
}
((struct instance_core__NativeArray*)var192)->values[0]=var194;
if (likely(varonce197!=NULL)) {
var198 = varonce197;
} else {
var199 = "\n\tif ((*nit_ffi_jni_env)->ExceptionCheck(nit_ffi_jni_env)) {\n\t\tPRINT_ERROR(\"Nit FFI with Java error: Exception after call.\\n\");\n\t\t(*nit_ffi_jni_env)->ExceptionDescribe(nit_ffi_jni_env);\n\t\texit(1);\n\t}\n\n\t(*nit_ffi_jni_env)->DeleteLocalRef(nit_ffi_jni_env, java_class);\n";
var200 = core__abstract_text___CString___to_s_full(var199, 267l, 267l);
var198 = var200;
varonce197 = var198;
}
((struct instance_core__NativeArray*)var192)->values[2]=var198;
} else {
var192 = varonce191;
varonce191 = NULL;
}
((struct instance_core__NativeArray*)var192)->values[1]=var_ccall;
{
var201 = ((val*(*)(val* self))(var192->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var192); /* native_to_s on <var192:NativeArray[String]>*/
}
varonce191 = var192;
{
template___template__Template___add(var188, var201); /* Direct call template#Template#add on <var188:Template>*/
}
if (var_return_type == NULL) {
var202 = 0; /* is null */
} else {
var202 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_return_type,((val*)NULL)) on <var_return_type:nullable Object(nullable MType)> */
var_other = ((val*)NULL);
{
var205 = ((short int(*)(val* self, val* p0))(var_return_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_return_type, var_other); /* == on <var_return_type:nullable MType(MType)>*/
}
var206 = !var205;
var203 = var206;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
var202 = var203;
}
if (var202){
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:ExternCFunction> */
var209 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:ExternCFunction> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
if (unlikely(varonce210==NULL)) {
var211 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = "\treturn ";
var215 = core__abstract_text___CString___to_s_full(var214, 8l, 8l);
var213 = var215;
varonce212 = var213;
}
((struct instance_core__NativeArray*)var211)->values[0]=var213;
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = ";";
var219 = core__abstract_text___CString___to_s_full(var218, 1l, 1l);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var211)->values[2]=var217;
} else {
var211 = varonce210;
varonce210 = NULL;
}
var220 = glob_sys;
{
var221 = nitc__java___core__Sys___to_java_call_context(var220);
}
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = "jni_res";
var225 = core__abstract_text___CString___to_s_full(var224, 7l, 7l);
var223 = var225;
varonce222 = var223;
}
{
var226 = nitc__java___nitc__java__ToJavaCallContext___nitc__nitni_utilities__CallContext__cast_from(var221, var_return_type, var223);
}
((struct instance_core__NativeArray*)var211)->values[1]=var226;
{
var227 = ((val*(*)(val* self))(var211->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var211); /* native_to_s on <var211:NativeArray[String]>*/
}
varonce210 = var211;
{
template___template__Template___add(var207, var227); /* Direct call template#Template#add on <var207:Template>*/
}
} else {
}
{
nitc___nitc__CCompilationUnit___add_exported_function(var_ccu, var_fc); /* Direct call c_tools#CCompilationUnit#add_exported_function on <var_ccu:CCompilationUnit>*/
}
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = "___java_impl";
var231 = core__abstract_text___CString___to_s_full(var230, 12l, 12l);
var229 = var231;
varonce228 = var229;
}
var232 = glob_sys;
{
var233 = nitc__nitni_utilities___core__Sys___long_signature(var232);
}
var234 = glob_sys;
{
var235 = nitc__java___core__Sys___java_call_context(var234);
}
{
var236 = nitc__nitni_utilities___MMethod___build_csignature(var_mproperty, var_mclass_type, var_mmodule, var229, var233, var235);
}
var_java_csig = var236;
{
{ /* Inline java#MModule#java_file (var_mmodule) on <var_mmodule:MModule> */
var239 = var_mmodule->attrs[COLOR_nitc__java__MModule___java_file].val; /* _java_file on <var_mmodule:MModule> */
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (var237 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 152);
fatal_exit(1);
} else {
{ /* Inline java#JavaClassTemplate#class_content (var237) on <var237:nullable JavaClassTemplate> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 341);
fatal_exit(1);
}
var242 = var237->attrs[COLOR_nitc__java__JavaClassTemplate___class_content].val; /* _class_content on <var237:nullable JavaClassTemplate> */
if (unlikely(var242 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 341);
fatal_exit(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
if (unlikely(varonce243==NULL)) {
var244 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce245!=NULL)) {
var246 = varonce245;
} else {
var247 = "\tpublic static ";
var248 = core__abstract_text___CString___to_s_full(var247, 15l, 15l);
var246 = var248;
varonce245 = var246;
}
((struct instance_core__NativeArray*)var244)->values[0]=var246;
if (likely(varonce249!=NULL)) {
var250 = varonce249;
} else {
var251 = " {\n\t\t// from Nit FII at: ";
var252 = core__abstract_text___CString___to_s_full(var251, 25l, 25l);
var250 = var252;
varonce249 = var250;
}
((struct instance_core__NativeArray*)var244)->values[2]=var250;
if (likely(varonce253!=NULL)) {
var254 = varonce253;
} else {
var255 = "\n\t\t";
var256 = core__abstract_text___CString___to_s_full(var255, 3l, 3l);
var254 = var256;
varonce253 = var254;
}
((struct instance_core__NativeArray*)var244)->values[4]=var254;
if (likely(varonce257!=NULL)) {
var258 = varonce257;
} else {
var259 = "\n\t}\n";
var260 = core__abstract_text___CString___to_s_full(var259, 4l, 4l);
var258 = var260;
varonce257 = var258;
}
((struct instance_core__NativeArray*)var244)->values[6]=var258;
} else {
var244 = varonce243;
varonce243 = NULL;
}
((struct instance_core__NativeArray*)var244)->values[1]=var_java_csig;
{
{ /* Inline parser_nodes#ANode#location (var_block) on <var_block:AExternCodeBlock> */
var263 = var_block->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_block:AExternCodeBlock> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
var264 = ((val*(*)(val* self))(var261->class->vft[COLOR_core__abstract_text__Object__to_s]))(var261); /* to_s on <var261:Location>*/
}
((struct instance_core__NativeArray*)var244)->values[3]=var264;
{
var265 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
((struct instance_core__NativeArray*)var244)->values[5]=var265;
{
var266 = ((val*(*)(val* self))(var244->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var244); /* native_to_s on <var244:NativeArray[String]>*/
}
varonce243 = var244;
{
template___template__Template___add(var240, var266); /* Direct call template#Template#add on <var240:Template>*/
}
{
{ /* Inline java#MModule#callbacks_used_from_java (var_mmodule) on <var_mmodule:MModule> */
var269 = var_mmodule->attrs[COLOR_nitc__java__MModule___callbacks_used_from_java].val; /* _callbacks_used_from_java on <var_mmodule:MModule> */
if (unlikely(var269 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks_used_from_java");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 194);
fatal_exit(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
{
var270 = nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(var_m);
}
{
nitc___nitc__ForeignCallbackSet___join(var267, var270); /* Direct call nitni_callbacks#ForeignCallbackSet#join on <var267:ForeignCallbackSet>*/
}
RET_LABEL:;
}
/* method java#JavaLanguage#compile_extern_class for (self: JavaLanguage, AExternCodeBlock, AClassdef, CCompilationUnit, MModule) */
void nitc___nitc__JavaLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_class(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var_mmodule /* var mmodule: MModule */;
var_block = p0;
var_m = p1;
var_ccu = p2;
var_mmodule = p3;
RET_LABEL:;
}
/* method java#JavaLanguage#get_ftype for (self: JavaLanguage, AExternCodeBlock, AClassdef): ForeignType */
val* nitc___nitc__JavaLanguage___nitc__light_ffi_base__FFILanguage__get_ftype(val* self, val* p0, val* p1) {
val* var /* : ForeignType */;
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var1 /* : ForeignJavaType */;
val* var2 /* : String */;
var_block = p0;
var_m = p1;
var1 = NEW_nitc__ForeignJavaType(&type_nitc__ForeignJavaType);
{
var2 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__java__ForeignJavaType__java_type_61d]))(var1, var2); /* java_type= on <var1:ForeignJavaType>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ForeignJavaType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#JavaLanguage#compile_to_files for (self: JavaLanguage, MModule, String) */
void nitc___nitc__JavaLanguage___nitc__light_ffi_base__FFILanguage__compile_to_files(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_compdir /* var compdir: String */;
val* var /* : nullable CCompilationUnit */;
val* var2 /* : nullable CCompilationUnit */;
val* var3 /* : nullable JavaClassTemplate */;
val* var5 /* : nullable JavaClassTemplate */;
val* var_java_file /* var java_file: nullable JavaClassTemplate */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ExternFile */;
val* var_extern_java_file /* var extern_java_file: ExternFile */;
val* var12 /* : Array[ExternFile] */;
val* var14 /* : Array[ExternFile] */;
var_mmodule = p0;
var_compdir = p1;
{
nitc__java___MModule___ensure_java_files(var_mmodule); /* Direct call java#MModule#ensure_java_files on <var_mmodule:MModule>*/
}
{
nitc__java___MModule___insert_compiler_options(var_mmodule); /* Direct call java#MModule#insert_compiler_options on <var_mmodule:MModule>*/
}
{
{ /* Inline java#JavaLanguage#ffi_ccu (self) on <self:JavaLanguage> */
var2 = self->attrs[COLOR_nitc__java__JavaLanguage___ffi_ccu].val; /* _ffi_ccu on <self:JavaLanguage> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 175);
fatal_exit(1);
}
{
nitc__java___MModule___ensure_linking_callback_methods(var_mmodule, var); /* Direct call java#MModule#ensure_linking_callback_methods on <var_mmodule:MModule>*/
}
{
{ /* Inline java#MModule#java_file (var_mmodule) on <var_mmodule:MModule> */
var5 = var_mmodule->attrs[COLOR_nitc__java__MModule___java_file].val; /* _java_file on <var_mmodule:MModule> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_java_file = var3;
if (var_java_file == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_java_file,((val*)NULL)) on <var_java_file:nullable JavaClassTemplate> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_java_file->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_java_file, var_other); /* == on <var_java_file:nullable JavaClassTemplate(JavaClassTemplate)>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 179);
fatal_exit(1);
}
{
var11 = nitc__android___JavaClassTemplate___write_to_files(var_java_file, var_compdir);
}
var_extern_java_file = var11;
{
{ /* Inline light_ffi_base#MModule#ffi_files (var_mmodule) on <var_mmodule:MModule> */
var14 = var_mmodule->attrs[COLOR_nitc__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <var_mmodule:MModule> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 82);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var12, var_extern_java_file); /* Direct call array#Array#add on <var12:Array[ExternFile]>*/
}
RET_LABEL:;
}
/* method java#JavaLanguage#ffi_ccu for (self: JavaLanguage): nullable CCompilationUnit */
val* nitc___nitc__JavaLanguage___ffi_ccu(val* self) {
val* var /* : nullable CCompilationUnit */;
val* var1 /* : nullable CCompilationUnit */;
var1 = self->attrs[COLOR_nitc__java__JavaLanguage___ffi_ccu].val; /* _ffi_ccu on <self:JavaLanguage> */
var = var1;
RET_LABEL:;
return var;
}
/* method java#JavaLanguage#ffi_ccu= for (self: JavaLanguage, nullable CCompilationUnit) */
void nitc___nitc__JavaLanguage___ffi_ccu_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__java__JavaLanguage___ffi_ccu].val = p0; /* _ffi_ccu on <self:JavaLanguage> */
RET_LABEL:;
}
/* method java#JavaLanguage#compile_callback for (self: JavaLanguage, NitniCallback, MModule, MModule, CCompilationUnit) */
void nitc___nitc__JavaLanguage___nitc__ffi_base__FFILanguage__compile_callback(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_callback /* var callback: NitniCallback */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var_ccu /* var ccu: CCompilationUnit */;
var_callback = p0;
var_mmodule = p1;
var_mainmodule = p2;
var_ccu = p3;
{
{ /* Inline java#JavaLanguage#ffi_ccu= (self,var_ccu) on <self:JavaLanguage> */
self->attrs[COLOR_nitc__java__JavaLanguage___ffi_ccu].val = var_ccu; /* _ffi_ccu on <self:JavaLanguage> */
RET_LABEL1:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))((((long)var_callback&3)?class_info[((long)var_callback&3)]:var_callback->class)->vft[COLOR_nitc__java__NitniCallback__compile_callback_to_java]))(var_callback, var_mmodule, var_mainmodule, var_ccu); /* compile_callback_to_java on <var_callback:NitniCallback>*/
}
RET_LABEL:;
}
/* method java#MModule#callbacks_used_from_java for (self: MModule): ForeignCallbackSet */
val* nitc__java___MModule___callbacks_used_from_java(val* self) {
val* var /* : ForeignCallbackSet */;
val* var1 /* : ForeignCallbackSet */;
var1 = self->attrs[COLOR_nitc__java__MModule___callbacks_used_from_java].val; /* _callbacks_used_from_java on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks_used_from_java");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 194);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method java#MModule#java_file for (self: MModule): nullable JavaClassTemplate */
val* nitc__java___MModule___java_file(val* self) {
val* var /* : nullable JavaClassTemplate */;
val* var1 /* : nullable JavaClassTemplate */;
var1 = self->attrs[COLOR_nitc__java__MModule___java_file].val; /* _java_file on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method java#MModule#java_file= for (self: MModule, nullable JavaClassTemplate) */
void nitc__java___MModule___java_file_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__java__MModule___java_file].val = p0; /* _java_file on <self:MModule> */
RET_LABEL:;
}
/* method java#MModule#ensure_java_files for (self: MModule) */
void nitc__java___MModule___ensure_java_files(val* self) {
val* var /* : nullable JavaClassTemplate */;
val* var2 /* : nullable JavaClassTemplate */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : JavaClassTemplate */;
val* var9 /* : String */;
{
{ /* Inline java#MModule#java_file (self) on <self:MModule> */
var2 = self->attrs[COLOR_nitc__java__MModule___java_file].val; /* _java_file on <self:MModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var,((val*)NULL)) on <var:nullable JavaClassTemplate> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable JavaClassTemplate(JavaClassTemplate)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
var8 = NEW_nitc__JavaClassTemplate(&type_nitc__JavaClassTemplate);
{
var9 = nitc__java___MModule___impl_java_class_name(self);
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_nitc__java__JavaClassTemplate__java_class_name_61d]))(var8, var9); /* java_class_name= on <var8:JavaClassTemplate>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:JavaClassTemplate>*/
}
{
{ /* Inline java#MModule#java_file= (self,var8) on <self:MModule> */
self->attrs[COLOR_nitc__java__MModule___java_file].val = var8; /* _java_file on <self:MModule> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method java#MModule#ensure_linking_callback_methods for (self: MModule, CCompilationUnit) */
void nitc__java___MModule___ensure_linking_callback_methods(val* self, val* p0) {
val* var_ccu /* var ccu: CCompilationUnit */;
val* var /* : ForeignCallbackSet */;
val* var2 /* : ForeignCallbackSet */;
val* var3 /* : Set[MExplicitCall] */;
val* var5 /* : Set[MExplicitCall] */;
val* var_callbacks /* var callbacks: Set[MExplicitCall] */;
short int var6 /* : Bool */;
val* var7 /* : Template */;
val* var9 /* : Template */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : Template */;
val* var15 /* : Template */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : Array[String] */;
val* var_jni_methods /* var jni_methods: Array[String] */;
val* var_ /* var : Set[MExplicitCall] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : Iterator[MExplicitCall] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_cb /* var cb: MExplicitCall */;
val* var25 /* : Array[String] */;
val* var26 /* : ForeignCallbackSet */;
val* var28 /* : ForeignCallbackSet */;
val* var29 /* : Set[MType] */;
val* var31 /* : Set[MType] */;
val* var_32 /* var : Set[MType] */;
val* var33 /* : Iterator[nullable Object] */;
val* var_34 /* var : Iterator[MType] */;
short int var35 /* : Bool */;
val* var37 /* : nullable Object */;
val* var_cb38 /* var cb: MType */;
val* var39 /* : Array[String] */;
val* var40 /* : CFunction */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var_cf /* var cf: CFunction */;
val* var45 /* : Template */;
val* var47 /* : Template */;
val* var49 /* : NativeArray[String] */;
static val* varonce48;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
long var62 /* : Int */;
long var64 /* : Int */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : String */;
var_ccu = p0;
{
{ /* Inline java#MModule#callbacks_used_from_java (self) on <self:MModule> */
var2 = self->attrs[COLOR_nitc__java__MModule___callbacks_used_from_java].val; /* _callbacks_used_from_java on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks_used_from_java");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 194);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (var) on <var:ForeignCallbackSet> */
var5 = var->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <var:ForeignCallbackSet> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_callbacks = var3;
{
var6 = ((short int(*)(val* self))((((long)var_callbacks&3)?class_info[((long)var_callbacks&3)]:var_callbacks->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_callbacks); /* is_empty on <var_callbacks:Set[MExplicitCall]>*/
}
if (var6){
{
{ /* Inline c_tools#CCompilationUnit#body_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var9 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "static int nit_ffi_with_java_registered_natives = 1;\n";
var12 = core__abstract_text___CString___to_s_full(var11, 53l, 53l);
var10 = var12;
varonce = var10;
}
{
template___template__Template___add(var7, var10); /* Direct call template#Template#add on <var7:Template>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline c_tools#CCompilationUnit#body_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var15 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "static int nit_ffi_with_java_registered_natives = 0;\n";
var19 = core__abstract_text___CString___to_s_full(var18, 53l, 53l);
var17 = var19;
varonce16 = var17;
}
{
template___template__Template___add(var13, var17); /* Direct call template#Template#add on <var13:Template>*/
}
var20 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var20); /* Direct call array#Array#init on <var20:Array[String]>*/
}
var_jni_methods = var20;
var_ = var_callbacks;
{
var21 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MExplicitCall]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:Iterator[MExplicitCall]>*/
}
if (var23){
} else {
goto BREAK_label;
}
{
var24 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:Iterator[MExplicitCall]>*/
}
var_cb = var24;
{
var25 = nitc__java___MExplicitCall___NitniCallback__jni_methods_declaration(var_cb, self);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_jni_methods, var25); /* Direct call array#Array#add_all on <var_jni_methods:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:Iterator[MExplicitCall]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:Iterator[MExplicitCall]>*/
}
{
{ /* Inline java#MModule#callbacks_used_from_java (self) on <self:MModule> */
var28 = self->attrs[COLOR_nitc__java__MModule___callbacks_used_from_java].val; /* _callbacks_used_from_java on <self:MModule> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks_used_from_java");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 194);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var26) on <var26:ForeignCallbackSet> */
var31 = var26->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var26:ForeignCallbackSet> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_32 = var29;
{
var33 = ((val*(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_32); /* iterator on <var_32:Set[MType]>*/
}
var_34 = var33;
for(;;) {
{
var35 = ((short int(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_34); /* is_ok on <var_34:Iterator[MType]>*/
}
if (var35){
} else {
goto BREAK_label36;
}
{
var37 = ((val*(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_34); /* item on <var_34:Iterator[MType]>*/
}
var_cb38 = var37;
{
var39 = nitc__java___MType___NitniCallback__jni_methods_declaration(var_cb38, self);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_jni_methods, var39); /* Direct call array#Array#add_all on <var_jni_methods:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_34); /* next on <var_34:Iterator[MType]>*/
}
}
BREAK_label36: (void)0;
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_34); /* finish on <var_34:Iterator[MType]>*/
}
var40 = NEW_nitc__CFunction(&type_nitc__CFunction);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "void nit_ffi_with_java_register_natives(JNIEnv* env, jclass jclazz)";
var44 = core__abstract_text___CString___to_s_full(var43, 67l, 67l);
var42 = var44;
varonce41 = var42;
}
{
((void(*)(val* self, val* p0))(var40->class->vft[COLOR_nitc__c_tools__CFunction__signature_61d]))(var40, var42); /* signature= on <var40:CFunction>*/
}
{
((void(*)(val* self))(var40->class->vft[COLOR_core__kernel__Object__init]))(var40); /* init on <var40:CFunction>*/
}
var_cf = var40;
{
{ /* Inline c_tools#CFunction#exprs (var_cf) on <var_cf:CFunction> */
var47 = var_cf->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_cf:CFunction> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (unlikely(varonce48==NULL)) {
var49 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "\tnit_ffi_with_java_registered_natives = 1;\n\n\tjint n_methods = ";
var53 = core__abstract_text___CString___to_s_full(var52, 62l, 62l);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var49)->values[0]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = ";\n\tJNINativeMethod methods[] = {\n\t\t";
var57 = core__abstract_text___CString___to_s_full(var56, 35l, 35l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var49)->values[2]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "\n\t};\n\tjint res = (*env)->RegisterNatives(env, jclazz, methods, n_methods);\n\tif (res != JNI_OK) {\n\t\tPRINT_ERROR(\"RegisterNatives failed\\n\");\n\t\t(*env)->ExceptionDescribe(env);\n\t\texit(1);\n\t}\n\t\t";
var61 = core__abstract_text___CString___to_s_full(var60, 190l, 190l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var49)->values[4]=var59;
} else {
var49 = varonce48;
varonce48 = NULL;
}
{
{ /* Inline array#AbstractArrayRead#length (var_jni_methods) on <var_jni_methods:Array[String]> */
var64 = var_jni_methods->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_jni_methods:Array[String]> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var65 = core__flat___Int___core__abstract_text__Object__to_s(var62);
((struct instance_core__NativeArray*)var49)->values[1]=var65;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = ",\n\t\t";
var69 = core__abstract_text___CString___to_s_full(var68, 4l, 4l);
var67 = var69;
varonce66 = var67;
}
{
var70 = core__abstract_text___Collection___join(var_jni_methods, var67, ((val*)NULL));
}
((struct instance_core__NativeArray*)var49)->values[3]=var70;
{
var71 = ((val*(*)(val* self))(var49->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
{
template___template__Template___add(var45, var71); /* Direct call template#Template#add on <var45:Template>*/
}
{
nitc___nitc__CCompilationUnit___add_local_function(var_ccu, var_cf); /* Direct call c_tools#CCompilationUnit#add_local_function on <var_ccu:CCompilationUnit>*/
}
RET_LABEL:;
}
/* method java#MModule#insert_compiler_options for (self: MModule) */
void nitc__java___MModule___insert_compiler_options(val* self) {
val* var /* : MultiHashMap[String, String] */;
val* var2 /* : MultiHashMap[String, String] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
{
{ /* Inline light_c#MModule#cflags (self) on <self:MModule> */
var2 = self->attrs[COLOR_nitc__light_c__MModule___cflags].val; /* _cflags on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 77);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "";
var5 = core__abstract_text___CString___to_s_full(var4, 0l, 0l);
var3 = var5;
varonce = var3;
}
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "-I $(JAVA_HOME)/include/ -I $(JAVA_HOME)/include/linux/";
var9 = core__abstract_text___CString___to_s_full(var8, 55l, 55l);
var7 = var9;
varonce6 = var7;
}
{
more_collections___more_collections__MultiHashMap___add_one(var, var3, var7); /* Direct call more_collections#MultiHashMap#add_one on <var:MultiHashMap[String, String]>*/
}
RET_LABEL:;
}
/* method java#MModule#impl_java_class_name for (self: MModule): String */
val* nitc__java___MModule___impl_java_class_name(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var8 /* : String */;
val* var9 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "Nit_";
var5 = core__abstract_text___CString___to_s_full(var4, 4l, 4l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline mmodule#MModule#name (self) on <self:MModule> */
var8 = self->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <self:MModule> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
((struct instance_core__NativeArray*)var1)->values[1]=var6;
{
var9 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#AMethPropdef#verify_nitni_callbacks for (self: AMethPropdef, ToolContext) */
void nitc__java___AMethPropdef___verify_nitni_callbacks(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable AExternCodeBlock */;
val* var2 /* : nullable AExternCodeBlock */;
val* var_block /* var block: nullable AExternCodeBlock */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
var_toolcontext = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__java___AMethPropdef___verify_nitni_callbacks]))(self, p0); /* verify_nitni_callbacks on <self:AMethPropdef>*/
}
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_block = var;
if (var_block == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_block,((val*)NULL)) on <var_block:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_block->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_block, var_other); /* == on <var_block:nullable AExternCodeBlock(AExternCodeBlock)>*/
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
var9 = nitc__java___AExternCodeBlock___is_java(var_block);
}
var3 = var9;
} else {
var3 = var_;
}
if (var3){
{
nitc__java___AMethPropdef___insert_artificial_callbacks(self, var_toolcontext); /* Direct call java#AMethPropdef#insert_artificial_callbacks on <self:AMethPropdef>*/
}
} else {
}
RET_LABEL:;
}
/* method java#AMethPropdef#insert_artificial_callbacks for (self: AMethPropdef, ToolContext) */
void nitc__java___AMethPropdef___insert_artificial_callbacks(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : ForeignCallbackSet */;
val* var_fcc /* var fcc: ForeignCallbackSet */;
val* var1 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var2 /* : nullable MPropDef */;
val* var4 /* : nullable MPropDef */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
val* var8 /* : MModule */;
val* var10 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var11 /* : Phase */;
val* var13 /* : Phase */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var15 /* : FFILanguage */;
val* var17 /* : FFILanguage */;
val* var_c_language_visitor /* var c_language_visitor: FFILanguage */;
val* var18 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var20 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var21 /* : RemovableCollection[nullable Object] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var26 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var27 /* : HashSet[NitniCallback] */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable MClass */;
val* var_pointer_class /* var pointer_class: nullable MClass */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : MClassType */;
val* var39 /* : MClassType */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable MProperty */;
val* var_pointer_sys_meth /* var pointer_sys_meth: nullable MProperty */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var_ /* var : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
val* var54 /* : MExplicitCall */;
val* var55 /* : MClassType */;
val* var57 /* : MClassType */;
val* var_explicit_call /* var explicit_call: MExplicitCall */;
val* var58 /* : Set[MExplicitCall] */;
val* var60 /* : Set[MExplicitCall] */;
val* var61 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var63 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var64 /* : nullable Object */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : nullable MClass */;
val* var_sys_class /* var sys_class: nullable MClass */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : MClassType */;
val* var77 /* : MClassType */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable MProperty */;
val* var_sys_jni_env_meth /* var sys_jni_env_meth: nullable MProperty */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
val* var_other87 /* var other: nullable Object */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var_91 /* var : Bool */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
short int var95 /* : Bool */;
val* var96 /* : Location */;
val* var98 /* : Location */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : Message */;
val* var104 /* : MExplicitCall */;
val* var105 /* : MClassType */;
val* var107 /* : MClassType */;
val* var108 /* : Set[MExplicitCall] */;
val* var110 /* : Set[MExplicitCall] */;
val* var111 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var113 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var114 /* : nullable Object */;
val* var115 /* : MClassType */;
val* var117 /* : MClassType */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
val* var122 /* : nullable MProperty */;
val* var_sys_jni_load_jclass_meth /* var sys_jni_load_jclass_meth: nullable MProperty */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
val* var131 /* : MExplicitCall */;
val* var132 /* : MClassType */;
val* var134 /* : MClassType */;
val* var135 /* : Set[MExplicitCall] */;
val* var137 /* : Set[MExplicitCall] */;
val* var138 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var140 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var141 /* : nullable Object */;
var_toolcontext = p0;
{
var = nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(self);
}
var_fcc = var;
{
var1 = nitc__modelbuilder_base___ToolContext___modelbuilder(var_toolcontext);
}
var_modelbuilder = var1;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var4 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 278);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var2) on <var2:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var7 = var2->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var2:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var5) on <var5:MClassDef> */
var10 = var5->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var5:MClassDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_mmodule = var8;
{
{ /* Inline light_ffi_base#ToolContext#ffi_language_assignation_phase (var_toolcontext) on <var_toolcontext:ToolContext> */
var13 = var_toolcontext->attrs[COLOR_nitc__light_ffi_base__ToolContext___ffi_language_assignation_phase].val; /* _ffi_language_assignation_phase on <var_toolcontext:ToolContext> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_language_assignation_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 26);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
/* <var11:Phase> isa FFILanguageAssignationPhase */
cltype = type_nitc__FFILanguageAssignationPhase.color;
idtype = type_nitc__FFILanguageAssignationPhase.id;
if(cltype >= var11->type->table_size) {
var14 = 0;
} else {
var14 = var11->type->type_table[cltype] == idtype;
}
if (unlikely(!var14)) {
var_class_name = var11 == NULL ? "null" : var11->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FFILanguageAssignationPhase", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 281);
fatal_exit(1);
}
{
{ /* Inline light_c#FFILanguageAssignationPhase#c_language (var11) on <var11:Phase(FFILanguageAssignationPhase)> */
var17 = var11->attrs[COLOR_nitc__light_c__FFILanguageAssignationPhase___c_language].val; /* _c_language on <var11:Phase(FFILanguageAssignationPhase)> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_language");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 25);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_c_language_visitor = var15;
{
{ /* Inline ffi_base#MModule#ffi_callbacks (var_mmodule) on <var_mmodule:MModule> */
var20 = var_mmodule->attrs[COLOR_nitc__ffi_base__MModule___ffi_callbacks].val; /* _ffi_callbacks on <var_mmodule:MModule> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi_base, 28);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core___core__HashMap___core__abstract_collection__MapRead__keys(var18);
}
{
var22 = ((short int(*)(val* self, val* p0))((((long)var21&3)?class_info[((long)var21&3)]:var21->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var21, var_c_language_visitor); /* has on <var21:RemovableCollection[nullable Object](RemovableCollection[FFILanguage])>*/
}
var23 = !var22;
if (var23){
{
{ /* Inline ffi_base#MModule#ffi_callbacks (var_mmodule) on <var_mmodule:MModule> */
var26 = var_mmodule->attrs[COLOR_nitc__ffi_base__MModule___ffi_callbacks].val; /* _ffi_callbacks on <var_mmodule:MModule> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi_base, 28);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = NEW_core__HashSet(&type_core__HashSet__nitc__NitniCallback);
{
core___core__HashSet___core__kernel__Object__init(var27); /* Direct call hash_collection#HashSet#init on <var27:HashSet[NitniCallback]>*/
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var24, var_c_language_visitor, var27); /* Direct call hash_collection#HashMap#[]= on <var24:HashMap[FFILanguage, Set[NitniCallback]]>*/
}
} else {
}
if (likely(varonce!=NULL)) {
var28 = varonce;
} else {
var29 = "Pointer";
var30 = core__abstract_text___CString___to_s_full(var29, 7l, 7l);
var28 = var30;
varonce = var28;
}
{
var31 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, self, var_mmodule, var28);
}
var_pointer_class = var31;
if (var_pointer_class == NULL) {
var32 = 0; /* is null */
} else {
var32 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pointer_class,((val*)NULL)) on <var_pointer_class:nullable MClass> */
var_other = ((val*)NULL);
{
var35 = ((short int(*)(val* self, val* p0))(var_pointer_class->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pointer_class, var_other); /* == on <var_pointer_class:nullable MClass(MClass)>*/
}
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (unlikely(!var32)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 288);
fatal_exit(1);
}
{
{ /* Inline model#MClass#mclass_type (var_pointer_class) on <var_pointer_class:nullable MClass(MClass)> */
var39 = var_pointer_class->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_pointer_class:nullable MClass(MClass)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "sys";
var43 = core__abstract_text___CString___to_s_full(var42, 3l, 3l);
var41 = var43;
varonce40 = var41;
}
{
var44 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var37, var41);
}
var_pointer_sys_meth = var44;
if (var_pointer_sys_meth == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_pointer_sys_meth,((val*)NULL)) on <var_pointer_sys_meth:nullable MProperty> */
var_other = ((val*)NULL);
{
var49 = ((short int(*)(val* self, val* p0))(var_pointer_sys_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pointer_sys_meth, var_other); /* == on <var_pointer_sys_meth:nullable MProperty(MProperty)>*/
}
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
var_ = var46;
if (var46){
/* <var_pointer_sys_meth:nullable MProperty(MProperty)> isa MMethod */
cltype52 = type_nitc__MMethod.color;
idtype53 = type_nitc__MMethod.id;
if(cltype52 >= var_pointer_sys_meth->type->table_size) {
var51 = 0;
} else {
var51 = var_pointer_sys_meth->type->type_table[cltype52] == idtype53;
}
var45 = var51;
} else {
var45 = var_;
}
if (unlikely(!var45)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 290);
fatal_exit(1);
}
var54 = NEW_nitc__MExplicitCall(&type_nitc__MExplicitCall);
{
{ /* Inline model#MClass#mclass_type (var_pointer_class) on <var_pointer_class:nullable MClass(MClass)> */
var57 = var_pointer_class->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_pointer_class:nullable MClass(MClass)> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__recv_mtype_61d]))(var54, var55); /* recv_mtype= on <var54:MExplicitCall>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__mproperty_61d]))(var54, var_pointer_sys_meth); /* mproperty= on <var54:MExplicitCall>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__from_mmodule_61d]))(var54, var_mmodule); /* from_mmodule= on <var54:MExplicitCall>*/
}
{
((void(*)(val* self))(var54->class->vft[COLOR_core__kernel__Object__init]))(var54); /* init on <var54:MExplicitCall>*/
}
var_explicit_call = var54;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (var_fcc) on <var_fcc:ForeignCallbackSet> */
var60 = var_fcc->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <var_fcc:ForeignCallbackSet> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var58&3)?class_info[((long)var58&3)]:var58->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var58, var_explicit_call); /* add on <var58:Set[MExplicitCall]>*/
}
{
{ /* Inline ffi_base#MModule#ffi_callbacks (var_mmodule) on <var_mmodule:MModule> */
var63 = var_mmodule->attrs[COLOR_nitc__ffi_base__MModule___ffi_callbacks].val; /* _ffi_callbacks on <var_mmodule:MModule> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi_base, 28);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var61, var_c_language_visitor);
}
{
((void(*)(val* self, val* p0))((((long)var64&3)?class_info[((long)var64&3)]:var64->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var64, var_explicit_call); /* add on <var64:nullable Object(Set[NitniCallback])>*/
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "Sys";
var68 = core__abstract_text___CString___to_s_full(var67, 3l, 3l);
var66 = var68;
varonce65 = var66;
}
{
var69 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, self, var_mmodule, var66);
}
var_sys_class = var69;
if (var_sys_class == NULL) {
var70 = 0; /* is null */
} else {
var70 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_sys_class,((val*)NULL)) on <var_sys_class:nullable MClass> */
var_other = ((val*)NULL);
{
var73 = ((short int(*)(val* self, val* p0))(var_sys_class->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_sys_class, var_other); /* == on <var_sys_class:nullable MClass(MClass)>*/
}
var74 = !var73;
var71 = var74;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var70 = var71;
}
if (unlikely(!var70)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 298);
fatal_exit(1);
}
{
{ /* Inline model#MClass#mclass_type (var_sys_class) on <var_sys_class:nullable MClass(MClass)> */
var77 = var_sys_class->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_sys_class:nullable MClass(MClass)> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "jni_env";
var81 = core__abstract_text___CString___to_s_full(var80, 7l, 7l);
var79 = var81;
varonce78 = var79;
}
{
var82 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var75, var79);
}
var_sys_jni_env_meth = var82;
if (var_sys_jni_env_meth == NULL) {
var84 = 1; /* is null */
} else {
var84 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sys_jni_env_meth,((val*)NULL)) on <var_sys_jni_env_meth:nullable MProperty> */
var_other87 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sys_jni_env_meth,var_other87) on <var_sys_jni_env_meth:nullable MProperty(MProperty)> */
var90 = var_sys_jni_env_meth == var_other87;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
var85 = var88;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
var_91 = var84;
if (var84){
var83 = var_91;
} else {
/* <var_sys_jni_env_meth:nullable MProperty(MProperty)> isa MMethod */
cltype93 = type_nitc__MMethod.color;
idtype94 = type_nitc__MMethod.id;
if(cltype93 >= var_sys_jni_env_meth->type->table_size) {
var92 = 0;
} else {
var92 = var_sys_jni_env_meth->type->type_table[cltype93] == idtype94;
}
var95 = !var92;
var83 = var95;
}
if (var83){
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var98 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "Java FFI Error: you must import the `java` module when using the FFI with Java";
var102 = core__abstract_text___CString___to_s_full(var101, 78l, 78l);
var100 = var102;
varonce99 = var100;
}
{
var103 = nitc___nitc__ToolContext___error(var_toolcontext, var96, var100);
}
goto RET_LABEL;
} else {
}
var104 = NEW_nitc__MExplicitCall(&type_nitc__MExplicitCall);
{
{ /* Inline model#MClass#mclass_type (var_sys_class) on <var_sys_class:nullable MClass(MClass)> */
var107 = var_sys_class->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_sys_class:nullable MClass(MClass)> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var104->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__recv_mtype_61d]))(var104, var105); /* recv_mtype= on <var104:MExplicitCall>*/
}
{
((void(*)(val* self, val* p0))(var104->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__mproperty_61d]))(var104, var_sys_jni_env_meth); /* mproperty= on <var104:MExplicitCall>*/
}
{
((void(*)(val* self, val* p0))(var104->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__from_mmodule_61d]))(var104, var_mmodule); /* from_mmodule= on <var104:MExplicitCall>*/
}
{
((void(*)(val* self))(var104->class->vft[COLOR_core__kernel__Object__init]))(var104); /* init on <var104:MExplicitCall>*/
}
var_explicit_call = var104;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (var_fcc) on <var_fcc:ForeignCallbackSet> */
var110 = var_fcc->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <var_fcc:ForeignCallbackSet> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var108&3)?class_info[((long)var108&3)]:var108->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var108, var_explicit_call); /* add on <var108:Set[MExplicitCall]>*/
}
{
{ /* Inline ffi_base#MModule#ffi_callbacks (var_mmodule) on <var_mmodule:MModule> */
var113 = var_mmodule->attrs[COLOR_nitc__ffi_base__MModule___ffi_callbacks].val; /* _ffi_callbacks on <var_mmodule:MModule> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi_base, 28);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
var114 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var111, var_c_language_visitor);
}
{
((void(*)(val* self, val* p0))((((long)var114&3)?class_info[((long)var114&3)]:var114->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var114, var_explicit_call); /* add on <var114:nullable Object(Set[NitniCallback])>*/
}
{
{ /* Inline model#MClass#mclass_type (var_sys_class) on <var_sys_class:nullable MClass(MClass)> */
var117 = var_sys_class->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_sys_class:nullable MClass(MClass)> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "load_jclass";
var121 = core__abstract_text___CString___to_s_full(var120, 11l, 11l);
var119 = var121;
varonce118 = var119;
}
{
var122 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var115, var119);
}
var_sys_jni_load_jclass_meth = var122;
if (var_sys_jni_load_jclass_meth == NULL) {
var123 = 0; /* is null */
} else {
var123 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_sys_jni_load_jclass_meth,((val*)NULL)) on <var_sys_jni_load_jclass_meth:nullable MProperty> */
var_other = ((val*)NULL);
{
var126 = ((short int(*)(val* self, val* p0))(var_sys_jni_load_jclass_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_sys_jni_load_jclass_meth, var_other); /* == on <var_sys_jni_load_jclass_meth:nullable MProperty(MProperty)>*/
}
var127 = !var126;
var124 = var127;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
var123 = var124;
}
if (unlikely(!var123)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 311);
fatal_exit(1);
}
/* <var_sys_jni_load_jclass_meth:nullable MProperty(MProperty)> isa MMethod */
cltype129 = type_nitc__MMethod.color;
idtype130 = type_nitc__MMethod.id;
if(cltype129 >= var_sys_jni_load_jclass_meth->type->table_size) {
var128 = 0;
} else {
var128 = var_sys_jni_load_jclass_meth->type->type_table[cltype129] == idtype130;
}
if (unlikely(!var128)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 312);
fatal_exit(1);
}
var131 = NEW_nitc__MExplicitCall(&type_nitc__MExplicitCall);
{
{ /* Inline model#MClass#mclass_type (var_sys_class) on <var_sys_class:nullable MClass(MClass)> */
var134 = var_sys_class->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_sys_class:nullable MClass(MClass)> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var131->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__recv_mtype_61d]))(var131, var132); /* recv_mtype= on <var131:MExplicitCall>*/
}
{
((void(*)(val* self, val* p0))(var131->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__mproperty_61d]))(var131, var_sys_jni_load_jclass_meth); /* mproperty= on <var131:MExplicitCall>*/
}
{
((void(*)(val* self, val* p0))(var131->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__from_mmodule_61d]))(var131, var_mmodule); /* from_mmodule= on <var131:MExplicitCall>*/
}
{
((void(*)(val* self))(var131->class->vft[COLOR_core__kernel__Object__init]))(var131); /* init on <var131:MExplicitCall>*/
}
var_explicit_call = var131;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (var_fcc) on <var_fcc:ForeignCallbackSet> */
var137 = var_fcc->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <var_fcc:ForeignCallbackSet> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var135&3)?class_info[((long)var135&3)]:var135->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var135, var_explicit_call); /* add on <var135:Set[MExplicitCall]>*/
}
{
{ /* Inline ffi_base#MModule#ffi_callbacks (var_mmodule) on <var_mmodule:MModule> */
var140 = var_mmodule->attrs[COLOR_nitc__ffi_base__MModule___ffi_callbacks].val; /* _ffi_callbacks on <var_mmodule:MModule> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi_base, 28);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
var141 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var138, var_c_language_visitor);
}
{
((void(*)(val* self, val* p0))((((long)var141&3)?class_info[((long)var141&3)]:var141->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var141, var_explicit_call); /* add on <var141:nullable Object(Set[NitniCallback])>*/
}
{
nitc___nitc__MExplicitCall___fill_type_for(var_explicit_call, var_fcc, var_mmodule); /* Direct call nitni_callbacks#MExplicitCall#fill_type_for on <var_explicit_call:MExplicitCall>*/
}
RET_LABEL:;
}
/* method java#AExternCodeBlock#is_java for (self: AExternCodeBlock): Bool */
short int nitc__java___AExternCodeBlock___is_java(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable ANode */;
val* var6 /* : nullable ANode */;
short int var7 /* : Bool */;
int cltype;
int idtype;
short int var_8 /* var : Bool */;
short int var9 /* : Bool */;
{
var2 = nitc__java___AExternCodeBlock___is_default_java(self);
}
var_ = var2;
if (var2){
var1 = var_;
} else {
{
{ /* Inline parser_nodes#ANode#parent (self) on <self:AExternCodeBlock> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <self:AExternCodeBlock> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
/* <var4:nullable ANode> isa AModule */
cltype = type_nitc__AModule.color;
idtype = type_nitc__AModule.id;
if(var4 == NULL) {
var7 = 0;
} else {
if(cltype >= var4->type->table_size) {
var7 = 0;
} else {
var7 = var4->type->type_table[cltype] == idtype;
}
}
var_8 = var7;
if (var7){
{
var9 = nitc__java___AExternCodeBlock___is_inner_java(self);
}
var3 = var9;
} else {
var3 = var_8;
}
var1 = var3;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#AExternCodeBlock#is_default_java for (self: AExternCodeBlock): Bool */
short int nitc__java___AExternCodeBlock___is_default_java(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable String */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : nullable String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
{
var2 = nitc__light_ffi_base___AExternCodeBlock___language_name(self);
}
if (var2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var2,((val*)NULL)) on <var2:nullable String> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var2, var_other); /* == on <var2:nullable String(String)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
var_ = var3;
if (var3){
{
var8 = nitc__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "java";
var11 = core__abstract_text___CString___to_s_full(var10, 4l, 4l);
var9 = var11;
varonce = var9;
}
if (var8 == NULL) {
var12 = 0; /* <var9:String> cannot be null */
} else {
var13 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_core__kernel__Object___61d_61d]))(var8, var9); /* == on <var8:nullable String>*/
var12 = var13;
}
var1 = var12;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#AExternCodeBlock#is_inner_java for (self: AExternCodeBlock): Bool */
short int nitc__java___AExternCodeBlock___is_inner_java(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable String */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : nullable String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
{
var2 = nitc__light_ffi_base___AExternCodeBlock___language_name(self);
}
if (var2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var2,((val*)NULL)) on <var2:nullable String> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var2, var_other); /* == on <var2:nullable String(String)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
var_ = var3;
if (var3){
{
var8 = nitc__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "java inner";
var11 = core__abstract_text___CString___to_s_full(var10, 10l, 10l);
var9 = var11;
varonce = var9;
}
if (var8 == NULL) {
var12 = 0; /* <var9:String> cannot be null */
} else {
var13 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_core__kernel__Object___61d_61d]))(var8, var9); /* == on <var8:nullable String>*/
var12 = var13;
}
var1 = var12;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#JavaClassTemplate#java_class_name for (self: JavaClassTemplate): String */
val* nitc___nitc__JavaClassTemplate___java_class_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__java__JavaClassTemplate___java_class_name].val; /* _java_class_name on <self:JavaClassTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _java_class_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 338);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method java#JavaClassTemplate#java_class_name= for (self: JavaClassTemplate, String) */
void nitc___nitc__JavaClassTemplate___java_class_name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__java__JavaClassTemplate___java_class_name].val = p0; /* _java_class_name on <self:JavaClassTemplate> */
RET_LABEL:;
}
/* method java#JavaClassTemplate#header for (self: JavaClassTemplate): Template */
val* nitc___nitc__JavaClassTemplate___header(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__java__JavaClassTemplate___header].val; /* _header on <self:JavaClassTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 340);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method java#JavaClassTemplate#class_content for (self: JavaClassTemplate): Template */
val* nitc___nitc__JavaClassTemplate___class_content(val* self) {
val* var /* : Template */;
val* var1 /* : Template */;
var1 = self->attrs[COLOR_nitc__java__JavaClassTemplate___class_content].val; /* _class_content on <self:JavaClassTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 341);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method java#JavaClassTemplate#write_to_files for (self: JavaClassTemplate, String): ExternFile */
val* nitc___nitc__JavaClassTemplate___write_to_files(val* self, val* p0) {
val* var /* : ExternFile */;
val* var_compdir /* var compdir: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var_filename /* var filename: String */;
val* var11 /* : NativeArray[String] */;
static val* varonce10;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var_filepath /* var filepath: String */;
val* var17 /* : JavaFile */;
var_compdir = p0;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ".java";
var5 = core__abstract_text___CString___to_s_full(var4, 5l, 5l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline java#JavaClassTemplate#java_class_name (self) on <self:JavaClassTemplate> */
var8 = self->attrs[COLOR_nitc__java__JavaClassTemplate___java_class_name].val; /* _java_class_name on <self:JavaClassTemplate> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _java_class_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 338);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
((struct instance_core__NativeArray*)var1)->values[0]=var6;
{
var9 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_filename = var9;
if (unlikely(varonce10==NULL)) {
var11 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "/";
var15 = core__abstract_text___CString___to_s_full(var14, 1l, 1l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[1]=var13;
} else {
var11 = varonce10;
varonce10 = NULL;
}
((struct instance_core__NativeArray*)var11)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var11)->values[2]=var_filename;
{
var16 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce10 = var11;
var_filepath = var16;
{
core__file___Writable___write_to_file(self, var_filepath); /* Direct call file#Writable#write_to_file on <self:JavaClassTemplate>*/
}
var17 = NEW_nitc__JavaFile(&type_nitc__JavaFile);
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var17, var_filename); /* filename= on <var17:JavaFile>*/
}
{
((void(*)(val* self))(var17->class->vft[COLOR_core__kernel__Object__init]))(var17); /* init on <var17:JavaFile>*/
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#JavaClassTemplate#rendering for (self: JavaClassTemplate) */
void nitc___nitc__JavaClassTemplate___template__Template__rendering(val* self) {
val* var /* : Template */;
val* var2 /* : Template */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var7 /* : NativeArray[String] */;
static val* varonce6;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : Template */;
val* var22 /* : Template */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
{
{ /* Inline java#JavaClassTemplate#header (self) on <self:JavaClassTemplate> */
var2 = self->attrs[COLOR_nitc__java__JavaClassTemplate___header].val; /* _header on <self:JavaClassTemplate> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 340);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
template___template__Template___add(self, var); /* Direct call template#Template#add on <self:JavaClassTemplate>*/
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "\n";
var5 = core__abstract_text___CString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce = var3;
}
{
template___template__Template___add(self, var3); /* Direct call template#Template#add on <self:JavaClassTemplate>*/
}
if (unlikely(varonce6==NULL)) {
var7 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "public class ";
var11 = core__abstract_text___CString___to_s_full(var10, 13l, 13l);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = " {\n";
var15 = core__abstract_text___CString___to_s_full(var14, 3l, 3l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var7)->values[2]=var13;
} else {
var7 = varonce6;
varonce6 = NULL;
}
{
{ /* Inline java#JavaClassTemplate#java_class_name (self) on <self:JavaClassTemplate> */
var18 = self->attrs[COLOR_nitc__java__JavaClassTemplate___java_class_name].val; /* _java_class_name on <self:JavaClassTemplate> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _java_class_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 338);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
((struct instance_core__NativeArray*)var7)->values[1]=var16;
{
var19 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce6 = var7;
{
template___template__Template___add(self, var19); /* Direct call template#Template#add on <self:JavaClassTemplate>*/
}
{
{ /* Inline java#JavaClassTemplate#class_content (self) on <self:JavaClassTemplate> */
var22 = self->attrs[COLOR_nitc__java__JavaClassTemplate___class_content].val; /* _class_content on <self:JavaClassTemplate> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 341);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
template___template__Template___add(self, var20); /* Direct call template#Template#add on <self:JavaClassTemplate>*/
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "}";
var26 = core__abstract_text___CString___to_s_full(var25, 1l, 1l);
var24 = var26;
varonce23 = var24;
}
{
template___template__Template___add(self, var24); /* Direct call template#Template#add on <self:JavaClassTemplate>*/
}
RET_LABEL:;
}
/* method java#JavaClassTemplate#init for (self: JavaClassTemplate) */
void nitc___nitc__JavaClassTemplate___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__JavaClassTemplate___core__kernel__Object__init]))(self); /* init on <self:JavaClassTemplate>*/
}
RET_LABEL:;
}
/* method java#JavaFile#makefile_rule_name for (self: JavaFile): String */
val* nitc___nitc__JavaFile___nitc__c_tools__ExternFile__makefile_rule_name(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ".class";
var5 = core__abstract_text___CString___to_s_full(var4, 6l, 6l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:JavaFile> */
var8 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:JavaFile> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ".java";
var12 = core__abstract_text___CString___to_s_full(var11, 5l, 5l);
var10 = var12;
varonce9 = var10;
}
{
var13 = ((val*(*)(val* self, val* p0))(var6->class->vft[COLOR_core__file__String__basename]))(var6, var10); /* basename on <var6:String>*/
}
((struct instance_core__NativeArray*)var1)->values[0]=var13;
{
var14 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#JavaFile#makefile_rule_content for (self: JavaFile): String */
val* nitc___nitc__JavaFile___nitc__c_tools__ExternFile__makefile_rule_content(val* self) {
val* var /* : String */;
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
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "javac ";
var5 = core__abstract_text___CString___to_s_full(var4, 6l, 6l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = " -d .";
var9 = core__abstract_text___CString___to_s_full(var8, 5l, 5l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:JavaFile> */
var12 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:JavaFile> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val*(*)(val* self, val* p0))(var10->class->vft[COLOR_core__file__String__basename]))(var10, ((val*)NULL)); /* basename on <var10:String>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#JavaFile#add_to_jar for (self: JavaFile): Bool */
short int nitc___nitc__JavaFile___nitc__c_tools__ExternFile__add_to_jar(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#JavaCallContext#name_mtype for (self: JavaCallContext, MType): String */
val* nitc__java___nitc__java__JavaCallContext___nitc__nitni_utilities__CallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : String */;
var_mtype = p0;
{
var1 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__java__MType__java_type]))(var_mtype); /* java_type on <var_mtype:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#ToJavaCallContext#cast_to for (self: ToJavaCallContext, MType, String): String */
val* nitc__java___nitc__java__ToJavaCallContext___nitc__nitni_utilities__CallContext__cast_to(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
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
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
var_mtype = p0;
var_name = p1;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "(";
var5 = core__abstract_text___CString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ")(";
var9 = core__abstract_text___CString___to_s_full(var8, 2l, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ")";
var13 = core__abstract_text___CString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[4]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__java__MType__jni_type]))(var_mtype); /* jni_type on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var14;
((struct instance_core__NativeArray*)var1)->values[3]=var_name;
{
var15 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#ToJavaCallContext#cast_from for (self: ToJavaCallContext, MType, String): String */
val* nitc__java___nitc__java__ToJavaCallContext___nitc__nitni_utilities__CallContext__cast_from(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
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
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
var_mtype = p0;
var_name = p1;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "(";
var5 = core__abstract_text___CString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ")(";
var9 = core__abstract_text___CString___to_s_full(var8, 2l, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ")";
var13 = core__abstract_text___CString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[4]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__nitni_base__MType__cname]))(var_mtype); /* cname on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var14;
((struct instance_core__NativeArray*)var1)->values[3]=var_name;
{
var15 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#ToJavaCallContext#name_mtype for (self: ToJavaCallContext, MType): String */
val* nitc__java___nitc__java__ToJavaCallContext___nitc__nitni_utilities__CallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : String */;
var_mtype = p0;
{
var1 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__java__MType__jni_type]))(var_mtype); /* jni_type on <var_mtype:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#FromJavaCallContext#cast_to for (self: FromJavaCallContext, MType, String): String */
val* nitc__java___nitc__java__FromJavaCallContext___nitc__nitni_utilities__CallContext__cast_to(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
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
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
var_mtype = p0;
var_name = p1;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "(";
var5 = core__abstract_text___CString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ")(";
var9 = core__abstract_text___CString___to_s_full(var8, 2l, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ")";
var13 = core__abstract_text___CString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[4]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__nitni_base__MType__cname]))(var_mtype); /* cname on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var14;
((struct instance_core__NativeArray*)var1)->values[3]=var_name;
{
var15 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#FromJavaCallContext#cast_from for (self: FromJavaCallContext, MType, String): String */
val* nitc__java___nitc__java__FromJavaCallContext___nitc__nitni_utilities__CallContext__cast_from(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
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
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
var_mtype = p0;
var_name = p1;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "(";
var5 = core__abstract_text___CString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ")(";
var9 = core__abstract_text___CString___to_s_full(var8, 2l, 2l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ")";
var13 = core__abstract_text___CString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[4]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__java__MType__jni_type]))(var_mtype); /* jni_type on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var14;
((struct instance_core__NativeArray*)var1)->values[3]=var_name;
{
var15 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#FromJavaCallContext#name_mtype for (self: FromJavaCallContext, MType): String */
val* nitc__java___nitc__java__FromJavaCallContext___nitc__nitni_utilities__CallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : String */;
var_mtype = p0;
{
var1 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__java__MType__jni_type]))(var_mtype); /* jni_type on <var_mtype:MType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#ForeignJavaType#java_type for (self: ForeignJavaType): String */
val* nitc___nitc__ForeignJavaType___java_type(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__java__ForeignJavaType___java_type].val; /* _java_type on <self:ForeignJavaType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _java_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 401);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method java#ForeignJavaType#java_type= for (self: ForeignJavaType, String) */
void nitc___nitc__ForeignJavaType___java_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__java__ForeignJavaType___java_type].val = p0; /* _java_type on <self:ForeignJavaType> */
RET_LABEL:;
}
/* method java#ForeignJavaType#init for (self: ForeignJavaType) */
void nitc___nitc__ForeignJavaType___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ForeignJavaType___core__kernel__Object__init]))(self); /* init on <self:ForeignJavaType>*/
}
RET_LABEL:;
}
/* method java#NitniCallback#compile_callback_to_java for (self: NitniCallback, MModule, MModule, CCompilationUnit) */
void nitc__java___NitniCallback___compile_callback_to_java(val* self, val* p0, val* p1, val* p2) {
val* var_mmodule /* var mmodule: MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var_ccu /* var ccu: CCompilationUnit */;
var_mmodule = p0;
var_mainmodule = p1;
var_ccu = p2;
RET_LABEL:;
}
/* method java#NitniCallback#jni_methods_declaration for (self: NitniCallback, MModule): Array[String] */
val* nitc__java___NitniCallback___jni_methods_declaration(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_from_module /* var from_module: MModule */;
val* var1 /* : Array[String] */;
var_from_module = p0;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#MExplicitCall#compile_callback_to_java for (self: MExplicitCall, MModule, MModule, CCompilationUnit) */
void nitc__java___MExplicitCall___NitniCallback__compile_callback_to_java(val* self, val* p0, val* p1, val* p2) {
val* var_mmodule /* var mmodule: MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var /* : ForeignCallbackSet */;
val* var2 /* : ForeignCallbackSet */;
val* var3 /* : Set[MExplicitCall] */;
val* var5 /* : Set[MExplicitCall] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : MProperty */;
val* var10 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : Sys */;
val* var19 /* : SignatureLength */;
val* var20 /* : Sys */;
val* var21 /* : FromJavaCallContext */;
val* var22 /* : String */;
val* var_csignature /* var csignature: String */;
val* var23 /* : CFunction */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var_cf /* var cf: CFunction */;
val* var31 /* : Template */;
val* var33 /* : Template */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : MClassType */;
val* var46 /* : MClassType */;
val* var47 /* : Sys */;
val* var48 /* : SignatureLength */;
val* var49 /* : Sys */;
val* var50 /* : FromJavaCallContext */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : MClassType */;
val* var55 /* : MClassType */;
val* var56 /* : Sys */;
val* var57 /* : SignatureLength */;
val* var58 /* : Sys */;
val* var59 /* : JavaCallContext */;
val* var60 /* : String */;
val* var_java_signature /* var java_signature: String */;
val* var61 /* : nullable JavaClassTemplate */;
val* var63 /* : nullable JavaClassTemplate */;
val* var64 /* : Template */;
val* var66 /* : Template */;
val* var68 /* : NativeArray[String] */;
static val* varonce67;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
val* var77 /* : String */;
var_mmodule = p0;
var_mainmodule = p1;
var_ccu = p2;
{
{ /* Inline java#MModule#callbacks_used_from_java (var_mmodule) on <var_mmodule:MModule> */
var2 = var_mmodule->attrs[COLOR_nitc__java__MModule___callbacks_used_from_java].val; /* _callbacks_used_from_java on <var_mmodule:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks_used_from_java");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 194);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (var) on <var:ForeignCallbackSet> */
var5 = var->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <var:ForeignCallbackSet> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((short int(*)(val* self, val* p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var3, self); /* has on <var3:Set[MExplicitCall]>*/
}
var7 = !var6;
if (var7){
goto RET_LABEL;
} else {
}
{
{ /* Inline nitni_callbacks#MExplicitCall#mproperty (self) on <self:MExplicitCall> */
var10 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___mproperty].val; /* _mproperty on <self:MExplicitCall> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 170);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_mproperty = var8;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var11 = 0;
} else {
var11 = var_mproperty->type->type_table[cltype] == idtype;
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 423);
fatal_exit(1);
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var14 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "___indirect";
var17 = core__abstract_text___CString___to_s_full(var16, 11l, 11l);
var15 = var17;
varonce = var15;
}
var18 = glob_sys;
{
var19 = nitc__nitni_utilities___core__Sys___long_signature(var18);
}
var20 = glob_sys;
{
var21 = nitc__java___core__Sys___from_java_call_context(var20);
}
{
var22 = nitc__java___MMethod___build_c_implementation_signature(var_mproperty, var12, var_mmodule, var15, var19, var21);
}
var_csignature = var22;
var23 = NEW_nitc__CFunction(&type_nitc__CFunction);
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "JNIEXPORT ";
var29 = core__abstract_text___CString___to_s_full(var28, 10l, 10l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[0]=var27;
} else {
var25 = varonce24;
varonce24 = NULL;
}
((struct instance_core__NativeArray*)var25)->values[1]=var_csignature;
{
var30 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__c_tools__CFunction__signature_61d]))(var23, var30); /* signature= on <var23:CFunction>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:CFunction>*/
}
var_cf = var23;
{
{ /* Inline c_tools#CFunction#exprs (var_cf) on <var_cf:CFunction> */
var33 = var_cf->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_cf:CFunction> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (unlikely(varonce34==NULL)) {
var35 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "\t";
var39 = core__abstract_text___CString___to_s_full(var38, 1l, 1l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[0]=var37;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "\n";
var43 = core__abstract_text___CString___to_s_full(var42, 1l, 1l);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var35)->values[2]=var41;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var46 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = glob_sys;
{
var48 = nitc__nitni_utilities___core__Sys___long_signature(var47);
}
var49 = glob_sys;
{
var50 = nitc__java___core__Sys___from_java_call_context(var49);
}
{
var51 = nitc__nitni_utilities___MMethod___build_ccall(var_mproperty, var44, var_mainmodule, ((val*)NULL), var48, var50, ((val*)NULL));
}
((struct instance_core__NativeArray*)var35)->values[1]=var51;
{
var52 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
template___template__Template___add(var31, var52); /* Direct call template#Template#add on <var31:Template>*/
}
{
nitc__java___CCompilationUnit___add_non_static_local_function(var_ccu, var_cf); /* Direct call java#CCompilationUnit#add_non_static_local_function on <var_ccu:CCompilationUnit>*/
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var55 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var56 = glob_sys;
{
var57 = nitc__nitni_utilities___core__Sys___short_signature(var56);
}
var58 = glob_sys;
{
var59 = nitc__java___core__Sys___java_call_context(var58);
}
{
var60 = nitc__nitni_utilities___MMethod___build_csignature(var_mproperty, var53, var_mainmodule, ((val*)NULL), var57, var59);
}
var_java_signature = var60;
{
{ /* Inline java#MModule#java_file (var_mmodule) on <var_mmodule:MModule> */
var63 = var_mmodule->attrs[COLOR_nitc__java__MModule___java_file].val; /* _java_file on <var_mmodule:MModule> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (var61 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 433);
fatal_exit(1);
} else {
{ /* Inline java#JavaClassTemplate#class_content (var61) on <var61:nullable JavaClassTemplate> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 341);
fatal_exit(1);
}
var66 = var61->attrs[COLOR_nitc__java__JavaClassTemplate___class_content].val; /* _class_content on <var61:nullable JavaClassTemplate> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 341);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (unlikely(varonce67==NULL)) {
var68 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "private native static ";
var72 = core__abstract_text___CString___to_s_full(var71, 22l, 22l);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var68)->values[0]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = ";\n";
var76 = core__abstract_text___CString___to_s_full(var75, 2l, 2l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var68)->values[2]=var74;
} else {
var68 = varonce67;
varonce67 = NULL;
}
((struct instance_core__NativeArray*)var68)->values[1]=var_java_signature;
{
var77 = ((val*(*)(val* self))(var68->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce67 = var68;
{
template___template__Template___add(var64, var77); /* Direct call template#Template#add on <var64:Template>*/
}
RET_LABEL:;
}
/* method java#MExplicitCall#jni_methods_declaration for (self: MExplicitCall, MModule): Array[String] */
val* nitc__java___MExplicitCall___NitniCallback__jni_methods_declaration(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_from_mmodule /* var from_mmodule: MModule */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : MClassType */;
val* var7 /* : MClassType */;
val* var8 /* : Sys */;
val* var9 /* : SignatureLength */;
val* var10 /* : String */;
val* var_java_name /* var java_name: String */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
val* var14 /* : String */;
val* var_jni_format /* var jni_format: String */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : Sys */;
val* var22 /* : SignatureLength */;
val* var23 /* : String */;
val* var_c_name /* var c_name: String */;
val* var24 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var26 /* : NativeArray[String] */;
static val* varonce25;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : String */;
var_from_mmodule = p0;
{
{ /* Inline nitni_callbacks#MExplicitCall#mproperty (self) on <self:MExplicitCall> */
var3 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___mproperty].val; /* _mproperty on <self:MExplicitCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 170);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mproperty = var1;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var4 = 0;
} else {
var4 = var_mproperty->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 439);
fatal_exit(1);
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var7 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = glob_sys;
{
var9 = nitc__nitni_utilities___core__Sys___short_signature(var8);
}
{
var10 = nitc__nitni_utilities___MMethod___build_cname(var_mproperty, var5, var_from_mmodule, ((val*)NULL), var9);
}
var_java_name = var10;
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var13 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc__java___MMethod___build_jni_format(var_mproperty, var11, var_from_mmodule);
}
var_jni_format = var14;
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var17 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "___indirect";
var20 = core__abstract_text___CString___to_s_full(var19, 11l, 11l);
var18 = var20;
varonce = var18;
}
var21 = glob_sys;
{
var22 = nitc__nitni_utilities___core__Sys___long_signature(var21);
}
{
var23 = nitc__nitni_utilities___MMethod___build_cname(var_mproperty, var15, var_from_mmodule, var18, var22);
}
var_c_name = var23;
var24 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var24, 1l); /* Direct call array#Array#with_capacity on <var24:Array[String]>*/
}
var_ = var24;
if (unlikely(varonce25==NULL)) {
var26 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "{\"";
var30 = core__abstract_text___CString___to_s_full(var29, 2l, 2l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[0]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "\", \"";
var34 = core__abstract_text___CString___to_s_full(var33, 4l, 4l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var26)->values[2]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "\", ";
var38 = core__abstract_text___CString___to_s_full(var37, 3l, 3l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var26)->values[4]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "}";
var42 = core__abstract_text___CString___to_s_full(var41, 1l, 1l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var26)->values[6]=var40;
} else {
var26 = varonce25;
varonce25 = NULL;
}
((struct instance_core__NativeArray*)var26)->values[1]=var_java_name;
((struct instance_core__NativeArray*)var26)->values[3]=var_jni_format;
((struct instance_core__NativeArray*)var26)->values[5]=var_c_name;
{
var43 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce25 = var26;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var43); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
var = var_;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#MType#java_type for (self: MType): String */
val* nitc__java___MType___java_type(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "int";
var3 = core__abstract_text___CString___to_s_full(var2, 3l, 3l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#MType#jni_type for (self: MType): String */
val* nitc__java___MType___jni_type(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "long";
var3 = core__abstract_text___CString___to_s_full(var2, 4l, 4l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#MType#jni_format for (self: MType): String */
val* nitc__java___MType___jni_format(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "I";
var3 = core__abstract_text___CString___to_s_full(var2, 1l, 1l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#MType#jni_signature_alt for (self: MType): String */
val* nitc__java___MType___jni_signature_alt(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Int";
var3 = core__abstract_text___CString___to_s_full(var2, 3l, 3l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#MType#compile_callback_to_java for (self: MType, MModule, MModule, CCompilationUnit) */
void nitc__java___MType___NitniCallback__compile_callback_to_java(val* self, val* p0, val* p1, val* p2) {
val* var_mmodule /* var mmodule: MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var /* : nullable JavaClassTemplate */;
val* var2 /* : nullable JavaClassTemplate */;
val* var_java_file /* var java_file: nullable JavaClassTemplate */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var_17 /* var : Array[String] */;
val* var18 /* : IndexedIterator[nullable Object] */;
val* var_19 /* var : IndexedIterator[String] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_variation /* var variation: String */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var_friendly_name /* var friendly_name: String */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var_csignature /* var csignature: String */;
val* var50 /* : CFunction */;
val* var52 /* : NativeArray[String] */;
static val* varonce51;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var_cf /* var cf: CFunction */;
val* var58 /* : Template */;
val* var60 /* : Template */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : Template */;
val* var74 /* : Template */;
val* var76 /* : NativeArray[String] */;
static val* varonce75;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : String */;
var_mmodule = p0;
var_mainmodule = p1;
var_ccu = p2;
{
{ /* Inline java#MModule#java_file (var_mmodule) on <var_mmodule:MModule> */
var2 = var_mmodule->attrs[COLOR_nitc__java__MModule___java_file].val; /* _java_file on <var_mmodule:MModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_java_file = var;
if (var_java_file == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_java_file,((val*)NULL)) on <var_java_file:nullable JavaClassTemplate> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_java_file,var_other) on <var_java_file:nullable JavaClassTemplate(JavaClassTemplate)> */
var8 = var_java_file == var_other;
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
var9 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var9, 2l); /* Direct call array#Array#with_capacity on <var9:Array[String]>*/
}
var_ = var9;
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "incr";
var12 = core__abstract_text___CString___to_s_full(var11, 4l, 4l);
var10 = var12;
varonce = var10;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var10); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "decr";
var16 = core__abstract_text___CString___to_s_full(var15, 4l, 4l);
var14 = var16;
varonce13 = var14;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var14); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
var_17 = var_;
{
var18 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_17);
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:IndexedIterator[String]>*/
}
if (var20){
} else {
goto BREAK_label;
}
{
var21 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:IndexedIterator[String]>*/
}
var_variation = var21;
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "_";
var27 = core__abstract_text___CString___to_s_full(var26, 1l, 1l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[1]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "_ref";
var31 = core__abstract_text___CString___to_s_full(var30, 4l, 4l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var23)->values[3]=var29;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(self); /* mangled_cname on <self:MType>*/
}
((struct instance_core__NativeArray*)var23)->values[0]=var32;
((struct instance_core__NativeArray*)var23)->values[2]=var_variation;
{
var33 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
var_friendly_name = var33;
if (unlikely(varonce34==NULL)) {
var35 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "void ";
var39 = core__abstract_text___CString___to_s_full(var38, 5l, 5l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[0]=var37;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "_";
var43 = core__abstract_text___CString___to_s_full(var42, 1l, 1l);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var35)->values[2]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "(JNIEnv *env, jclass clazz, jint object)";
var47 = core__abstract_text___CString___to_s_full(var46, 40l, 40l);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var35)->values[4]=var45;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
var48 = nitc__java___MModule___impl_java_class_name(var_mmodule);
}
((struct instance_core__NativeArray*)var35)->values[1]=var48;
((struct instance_core__NativeArray*)var35)->values[3]=var_friendly_name;
{
var49 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
var_csignature = var49;
var50 = NEW_nitc__CFunction(&type_nitc__CFunction);
if (unlikely(varonce51==NULL)) {
var52 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "JNIEXPORT ";
var56 = core__abstract_text___CString___to_s_full(var55, 10l, 10l);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var52)->values[0]=var54;
} else {
var52 = varonce51;
varonce51 = NULL;
}
((struct instance_core__NativeArray*)var52)->values[1]=var_csignature;
{
var57 = ((val*(*)(val* self))(var52->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var52); /* native_to_s on <var52:NativeArray[String]>*/
}
varonce51 = var52;
{
((void(*)(val* self, val* p0))(var50->class->vft[COLOR_nitc__c_tools__CFunction__signature_61d]))(var50, var57); /* signature= on <var50:CFunction>*/
}
{
((void(*)(val* self))(var50->class->vft[COLOR_core__kernel__Object__init]))(var50); /* init on <var50:CFunction>*/
}
var_cf = var50;
{
{ /* Inline c_tools#CFunction#exprs (var_cf) on <var_cf:CFunction> */
var60 = var_cf->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_cf:CFunction> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "\tnitni_global_ref_";
var66 = core__abstract_text___CString___to_s_full(var65, 18l, 18l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[0]=var64;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "((void*)(long)object);";
var70 = core__abstract_text___CString___to_s_full(var69, 22l, 22l);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var62)->values[2]=var68;
} else {
var62 = varonce61;
varonce61 = NULL;
}
((struct instance_core__NativeArray*)var62)->values[1]=var_variation;
{
var71 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
template___template__Template___add(var58, var71); /* Direct call template#Template#add on <var58:Template>*/
}
{
nitc__java___CCompilationUnit___add_non_static_local_function(var_ccu, var_cf); /* Direct call java#CCompilationUnit#add_non_static_local_function on <var_ccu:CCompilationUnit>*/
}
{
{ /* Inline java#JavaClassTemplate#class_content (var_java_file) on <var_java_file:nullable JavaClassTemplate(JavaClassTemplate)> */
var74 = var_java_file->attrs[COLOR_nitc__java__JavaClassTemplate___class_content].val; /* _class_content on <var_java_file:nullable JavaClassTemplate(JavaClassTemplate)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _class_content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 341);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (unlikely(varonce75==NULL)) {
var76 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "private native static void ";
var80 = core__abstract_text___CString___to_s_full(var79, 27l, 27l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var76)->values[0]=var78;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "(int object);\n";
var84 = core__abstract_text___CString___to_s_full(var83, 14l, 14l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var76)->values[2]=var82;
} else {
var76 = varonce75;
varonce75 = NULL;
}
((struct instance_core__NativeArray*)var76)->values[1]=var_friendly_name;
{
var85 = ((val*(*)(val* self))(var76->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
{
template___template__Template___add(var72, var85); /* Direct call template#Template#add on <var72:Template>*/
}
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:IndexedIterator[String]>*/
}
RET_LABEL:;
}
/* method java#MType#jni_methods_declaration for (self: MType, MModule): Array[String] */
val* nitc__java___MType___NitniCallback__jni_methods_declaration(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_from_mmodule /* var from_mmodule: MModule */;
val* var1 /* : Array[String] */;
val* var_arr /* var arr: Array[String] */;
val* var2 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var_10 /* var : Array[String] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[String] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_variation /* var variation: String */;
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
val* var_friendly_name /* var friendly_name: String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var_jni_format /* var jni_format: String */;
val* var32 /* : NativeArray[String] */;
static val* varonce31;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var_cname /* var cname: String */;
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
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : String */;
var_from_mmodule = p0;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
var_arr = var1;
var2 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var2, 2l); /* Direct call array#Array#with_capacity on <var2:Array[String]>*/
}
var_ = var2;
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "incr";
var5 = core__abstract_text___CString___to_s_full(var4, 4l, 4l);
var3 = var5;
varonce = var3;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var3); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "decr";
var9 = core__abstract_text___CString___to_s_full(var8, 4l, 4l);
var7 = var9;
varonce6 = var7;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var7); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
var_10 = var_;
{
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_10);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[String]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[String]>*/
}
var_variation = var14;
if (unlikely(varonce15==NULL)) {
var16 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "_";
var20 = core__abstract_text___CString___to_s_full(var19, 1l, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var16)->values[1]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "_ref";
var24 = core__abstract_text___CString___to_s_full(var23, 4l, 4l);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var16)->values[3]=var22;
} else {
var16 = varonce15;
varonce15 = NULL;
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(self); /* mangled_cname on <self:MType>*/
}
((struct instance_core__NativeArray*)var16)->values[0]=var25;
((struct instance_core__NativeArray*)var16)->values[2]=var_variation;
{
var26 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var_friendly_name = var26;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "(I)V";
var30 = core__abstract_text___CString___to_s_full(var29, 4l, 4l);
var28 = var30;
varonce27 = var28;
}
var_jni_format = var28;
if (unlikely(varonce31==NULL)) {
var32 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "_";
var36 = core__abstract_text___CString___to_s_full(var35, 1l, 1l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var32)->values[1]=var34;
} else {
var32 = varonce31;
varonce31 = NULL;
}
{
var37 = nitc__java___MModule___impl_java_class_name(var_from_mmodule);
}
((struct instance_core__NativeArray*)var32)->values[0]=var37;
((struct instance_core__NativeArray*)var32)->values[2]=var_friendly_name;
{
var38 = ((val*(*)(val* self))(var32->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var32); /* native_to_s on <var32:NativeArray[String]>*/
}
varonce31 = var32;
var_cname = var38;
if (unlikely(varonce39==NULL)) {
var40 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "{\"";
var44 = core__abstract_text___CString___to_s_full(var43, 2l, 2l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "\", \"";
var48 = core__abstract_text___CString___to_s_full(var47, 4l, 4l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var40)->values[2]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "\", ";
var52 = core__abstract_text___CString___to_s_full(var51, 3l, 3l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var40)->values[4]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "}";
var56 = core__abstract_text___CString___to_s_full(var55, 1l, 1l);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var40)->values[6]=var54;
} else {
var40 = varonce39;
varonce39 = NULL;
}
((struct instance_core__NativeArray*)var40)->values[1]=var_friendly_name;
((struct instance_core__NativeArray*)var40)->values[3]=var_jni_format;
((struct instance_core__NativeArray*)var40)->values[5]=var_cname;
{
var57 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_arr, var57); /* Direct call array#Array#add on <var_arr:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[String]>*/
}
var = var_arr;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#MClassType#java_type for (self: MClassType): String */
val* nitc__java___MClassType___MType__java_type(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : nullable ForeignType */;
val* var_ftype /* var ftype: nullable ForeignType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : String */;
val* var8 /* : String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var13 /* : Pattern */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : Pattern */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : Pattern */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : Pattern */;
val* var32 /* : MClass */;
val* var34 /* : MClass */;
val* var35 /* : String */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
short int var42 /* : Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : MClass */;
val* var49 /* : MClass */;
val* var50 /* : String */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : MClass */;
val* var64 /* : MClass */;
val* var65 /* : String */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
short int var72 /* : Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
val* var77 /* : MClass */;
val* var79 /* : MClass */;
val* var80 /* : String */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
short int var87 /* : Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : MClass */;
val* var94 /* : MClass */;
val* var95 /* : String */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
short int var102 /* : Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
val* var107 /* : MClass */;
val* var109 /* : MClass */;
val* var110 /* : String */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
short int var117 /* : Bool */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
val* var122 /* : MClass */;
val* var124 /* : MClass */;
val* var125 /* : String */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
short int var132 /* : Bool */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
val* var137 /* : MClass */;
val* var139 /* : MClass */;
val* var140 /* : String */;
val* var142 /* : String */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : CString */;
val* var146 /* : String */;
short int var147 /* : Bool */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : CString */;
val* var151 /* : String */;
val* var152 /* : MClass */;
val* var154 /* : MClass */;
val* var155 /* : String */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
short int var162 /* : Bool */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
val* var167 /* : MClass */;
val* var169 /* : MClass */;
val* var170 /* : String */;
val* var172 /* : String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : CString */;
val* var176 /* : String */;
short int var177 /* : Bool */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : CString */;
val* var181 /* : String */;
val* var182 /* : String */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__extern_classes___MClass___ftype(var1);
}
var_ftype = var4;
/* <var_ftype:nullable ForeignType> isa ForeignJavaType */
cltype = type_nitc__ForeignJavaType.color;
idtype = type_nitc__ForeignJavaType.id;
if(var_ftype == NULL) {
var5 = 0;
} else {
if(cltype >= var_ftype->type->table_size) {
var5 = 0;
} else {
var5 = var_ftype->type->type_table[cltype] == idtype;
}
}
if (var5){
{
{ /* Inline java#ForeignJavaType#java_type (var_ftype) on <var_ftype:nullable ForeignType(ForeignJavaType)> */
var8 = var_ftype->attrs[COLOR_nitc__java__ForeignJavaType___java_type].val; /* _java_type on <var_ftype:nullable ForeignType(ForeignJavaType)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _java_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 401);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = ".";
var11 = core__abstract_text___CString___to_s_full(var10, 1l, 1l);
var9 = var11;
varonce = var9;
}
{
var13 = (val*)((long)('/')<<2|2);
var12 = core__string_search___Text___replace(var6, var13, var9);
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ".";
var17 = core__abstract_text___CString___to_s_full(var16, 1l, 1l);
var15 = var17;
varonce14 = var15;
}
{
var19 = (val*)((long)('$')<<2|2);
var18 = core__string_search___Text___replace(var12, var19, var15);
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "";
var23 = core__abstract_text___CString___to_s_full(var22, 0l, 0l);
var21 = var23;
varonce20 = var21;
}
{
var25 = (val*)((long)(' ')<<2|2);
var24 = core__string_search___Text___replace(var18, var25, var21);
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "";
var29 = core__abstract_text___CString___to_s_full(var28, 0l, 0l);
var27 = var29;
varonce26 = var27;
}
{
var31 = (val*)((long)('\n')<<2|2);
var30 = core__string_search___Text___replace(var24, var31, var27);
}
var = var30;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var34 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model#MClass#name (var32) on <var32:MClass> */
var37 = var32->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var32:MClass> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Bool";
var41 = core__abstract_text___CString___to_s_full(var40, 4l, 4l);
var39 = var41;
varonce38 = var39;
}
{
var42 = ((short int(*)(val* self, val* p0))(var35->class->vft[COLOR_core__kernel__Object___61d_61d]))(var35, var39); /* == on <var35:String>*/
}
if (var42){
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "boolean";
var46 = core__abstract_text___CString___to_s_full(var45, 7l, 7l);
var44 = var46;
varonce43 = var44;
}
var = var44;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var49 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline model#MClass#name (var47) on <var47:MClass> */
var52 = var47->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var47:MClass> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "Char";
var56 = core__abstract_text___CString___to_s_full(var55, 4l, 4l);
var54 = var56;
varonce53 = var54;
}
{
var57 = ((short int(*)(val* self, val* p0))(var50->class->vft[COLOR_core__kernel__Object___61d_61d]))(var50, var54); /* == on <var50:String>*/
}
if (var57){
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "int";
var61 = core__abstract_text___CString___to_s_full(var60, 3l, 3l);
var59 = var61;
varonce58 = var59;
}
var = var59;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var64 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model#MClass#name (var62) on <var62:MClass> */
var67 = var62->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var62:MClass> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "Int";
var71 = core__abstract_text___CString___to_s_full(var70, 3l, 3l);
var69 = var71;
varonce68 = var69;
}
{
var72 = ((short int(*)(val* self, val* p0))(var65->class->vft[COLOR_core__kernel__Object___61d_61d]))(var65, var69); /* == on <var65:String>*/
}
if (var72){
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "long";
var76 = core__abstract_text___CString___to_s_full(var75, 4l, 4l);
var74 = var76;
varonce73 = var74;
}
var = var74;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var79 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline model#MClass#name (var77) on <var77:MClass> */
var82 = var77->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var77:MClass> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "Float";
var86 = core__abstract_text___CString___to_s_full(var85, 5l, 5l);
var84 = var86;
varonce83 = var84;
}
{
var87 = ((short int(*)(val* self, val* p0))(var80->class->vft[COLOR_core__kernel__Object___61d_61d]))(var80, var84); /* == on <var80:String>*/
}
if (var87){
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "double";
var91 = core__abstract_text___CString___to_s_full(var90, 6l, 6l);
var89 = var91;
varonce88 = var89;
}
var = var89;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var94 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline model#MClass#name (var92) on <var92:MClass> */
var97 = var92->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var92:MClass> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "Byte";
var101 = core__abstract_text___CString___to_s_full(var100, 4l, 4l);
var99 = var101;
varonce98 = var99;
}
{
var102 = ((short int(*)(val* self, val* p0))(var95->class->vft[COLOR_core__kernel__Object___61d_61d]))(var95, var99); /* == on <var95:String>*/
}
if (var102){
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "byte";
var106 = core__abstract_text___CString___to_s_full(var105, 4l, 4l);
var104 = var106;
varonce103 = var104;
}
var = var104;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var109 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var107 = var109;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline model#MClass#name (var107) on <var107:MClass> */
var112 = var107->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var107:MClass> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "Int8";
var116 = core__abstract_text___CString___to_s_full(var115, 4l, 4l);
var114 = var116;
varonce113 = var114;
}
{
var117 = ((short int(*)(val* self, val* p0))(var110->class->vft[COLOR_core__kernel__Object___61d_61d]))(var110, var114); /* == on <var110:String>*/
}
if (var117){
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "byte";
var121 = core__abstract_text___CString___to_s_full(var120, 4l, 4l);
var119 = var121;
varonce118 = var119;
}
var = var119;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var124 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline model#MClass#name (var122) on <var122:MClass> */
var127 = var122->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var122:MClass> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "Int16";
var131 = core__abstract_text___CString___to_s_full(var130, 5l, 5l);
var129 = var131;
varonce128 = var129;
}
{
var132 = ((short int(*)(val* self, val* p0))(var125->class->vft[COLOR_core__kernel__Object___61d_61d]))(var125, var129); /* == on <var125:String>*/
}
if (var132){
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "short";
var136 = core__abstract_text___CString___to_s_full(var135, 5l, 5l);
var134 = var136;
varonce133 = var134;
}
var = var134;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var139 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline model#MClass#name (var137) on <var137:MClass> */
var142 = var137->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var137:MClass> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "UInt16";
var146 = core__abstract_text___CString___to_s_full(var145, 6l, 6l);
var144 = var146;
varonce143 = var144;
}
{
var147 = ((short int(*)(val* self, val* p0))(var140->class->vft[COLOR_core__kernel__Object___61d_61d]))(var140, var144); /* == on <var140:String>*/
}
if (var147){
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "short";
var151 = core__abstract_text___CString___to_s_full(var150, 5l, 5l);
var149 = var151;
varonce148 = var149;
}
var = var149;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var154 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline model#MClass#name (var152) on <var152:MClass> */
var157 = var152->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var152:MClass> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "Int32";
var161 = core__abstract_text___CString___to_s_full(var160, 5l, 5l);
var159 = var161;
varonce158 = var159;
}
{
var162 = ((short int(*)(val* self, val* p0))(var155->class->vft[COLOR_core__kernel__Object___61d_61d]))(var155, var159); /* == on <var155:String>*/
}
if (var162){
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "int";
var166 = core__abstract_text___CString___to_s_full(var165, 3l, 3l);
var164 = var166;
varonce163 = var164;
}
var = var164;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var169 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline model#MClass#name (var167) on <var167:MClass> */
var172 = var167->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var167:MClass> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = "UInt32";
var176 = core__abstract_text___CString___to_s_full(var175, 6l, 6l);
var174 = var176;
varonce173 = var174;
}
{
var177 = ((short int(*)(val* self, val* p0))(var170->class->vft[COLOR_core__kernel__Object___61d_61d]))(var170, var174); /* == on <var170:String>*/
}
if (var177){
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "int";
var181 = core__abstract_text___CString___to_s_full(var180, 3l, 3l);
var179 = var181;
varonce178 = var179;
}
var = var179;
goto RET_LABEL;
} else {
}
{
var182 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__java___MClassType___MType__java_type]))(self); /* java_type on <self:MClassType>*/
}
var = var182;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#MClassType#jni_type for (self: MClassType): String */
val* nitc__java___MClassType___MType__jni_type(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : nullable ForeignType */;
val* var_ftype /* var ftype: nullable ForeignType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : MClass */;
val* var11 /* : MClass */;
val* var12 /* : String */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : MClass */;
val* var26 /* : MClass */;
val* var27 /* : String */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : MClass */;
val* var41 /* : MClass */;
val* var42 /* : String */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : MClass */;
val* var56 /* : MClass */;
val* var57 /* : String */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
short int var64 /* : Bool */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : MClass */;
val* var71 /* : MClass */;
val* var72 /* : String */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
short int var79 /* : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var84 /* : MClass */;
val* var86 /* : MClass */;
val* var87 /* : String */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
short int var94 /* : Bool */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : MClass */;
val* var101 /* : MClass */;
val* var102 /* : String */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
short int var109 /* : Bool */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
val* var114 /* : MClass */;
val* var116 /* : MClass */;
val* var117 /* : String */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : CString */;
val* var123 /* : String */;
short int var124 /* : Bool */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : MClass */;
val* var131 /* : MClass */;
val* var132 /* : String */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
short int var139 /* : Bool */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : CString */;
val* var143 /* : String */;
val* var144 /* : MClass */;
val* var146 /* : MClass */;
val* var147 /* : String */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
short int var154 /* : Bool */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : CString */;
val* var158 /* : String */;
val* var159 /* : String */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__extern_classes___MClass___ftype(var1);
}
var_ftype = var4;
/* <var_ftype:nullable ForeignType> isa ForeignJavaType */
cltype = type_nitc__ForeignJavaType.color;
idtype = type_nitc__ForeignJavaType.id;
if(var_ftype == NULL) {
var5 = 0;
} else {
if(cltype >= var_ftype->type->table_size) {
var5 = 0;
} else {
var5 = var_ftype->type->type_table[cltype] == idtype;
}
}
if (var5){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "jobject";
var8 = core__abstract_text___CString___to_s_full(var7, 7l, 7l);
var6 = var8;
varonce = var6;
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var11 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
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
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Bool";
var18 = core__abstract_text___CString___to_s_full(var17, 4l, 4l);
var16 = var18;
varonce15 = var16;
}
{
var19 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_core__kernel__Object___61d_61d]))(var12, var16); /* == on <var12:String>*/
}
if (var19){
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "jboolean";
var23 = core__abstract_text___CString___to_s_full(var22, 8l, 8l);
var21 = var23;
varonce20 = var21;
}
var = var21;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var26 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MClass#name (var24) on <var24:MClass> */
var29 = var24->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var24:MClass> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "Char";
var33 = core__abstract_text___CString___to_s_full(var32, 4l, 4l);
var31 = var33;
varonce30 = var31;
}
{
var34 = ((short int(*)(val* self, val* p0))(var27->class->vft[COLOR_core__kernel__Object___61d_61d]))(var27, var31); /* == on <var27:String>*/
}
if (var34){
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "jint";
var38 = core__abstract_text___CString___to_s_full(var37, 4l, 4l);
var36 = var38;
varonce35 = var36;
}
var = var36;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var41 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MClass#name (var39) on <var39:MClass> */
var44 = var39->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var39:MClass> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "Int";
var48 = core__abstract_text___CString___to_s_full(var47, 3l, 3l);
var46 = var48;
varonce45 = var46;
}
{
var49 = ((short int(*)(val* self, val* p0))(var42->class->vft[COLOR_core__kernel__Object___61d_61d]))(var42, var46); /* == on <var42:String>*/
}
if (var49){
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "jlong";
var53 = core__abstract_text___CString___to_s_full(var52, 5l, 5l);
var51 = var53;
varonce50 = var51;
}
var = var51;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var56 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline model#MClass#name (var54) on <var54:MClass> */
var59 = var54->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var54:MClass> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "Float";
var63 = core__abstract_text___CString___to_s_full(var62, 5l, 5l);
var61 = var63;
varonce60 = var61;
}
{
var64 = ((short int(*)(val* self, val* p0))(var57->class->vft[COLOR_core__kernel__Object___61d_61d]))(var57, var61); /* == on <var57:String>*/
}
if (var64){
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "jdouble";
var68 = core__abstract_text___CString___to_s_full(var67, 7l, 7l);
var66 = var68;
varonce65 = var66;
}
var = var66;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var71 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline model#MClass#name (var69) on <var69:MClass> */
var74 = var69->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var69:MClass> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "Byte";
var78 = core__abstract_text___CString___to_s_full(var77, 4l, 4l);
var76 = var78;
varonce75 = var76;
}
{
var79 = ((short int(*)(val* self, val* p0))(var72->class->vft[COLOR_core__kernel__Object___61d_61d]))(var72, var76); /* == on <var72:String>*/
}
if (var79){
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "jbyte";
var83 = core__abstract_text___CString___to_s_full(var82, 5l, 5l);
var81 = var83;
varonce80 = var81;
}
var = var81;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var86 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline model#MClass#name (var84) on <var84:MClass> */
var89 = var84->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var84:MClass> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "Int8";
var93 = core__abstract_text___CString___to_s_full(var92, 4l, 4l);
var91 = var93;
varonce90 = var91;
}
{
var94 = ((short int(*)(val* self, val* p0))(var87->class->vft[COLOR_core__kernel__Object___61d_61d]))(var87, var91); /* == on <var87:String>*/
}
if (var94){
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "jbyte";
var98 = core__abstract_text___CString___to_s_full(var97, 5l, 5l);
var96 = var98;
varonce95 = var96;
}
var = var96;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var101 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline model#MClass#name (var99) on <var99:MClass> */
var104 = var99->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var99:MClass> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "Int16";
var108 = core__abstract_text___CString___to_s_full(var107, 5l, 5l);
var106 = var108;
varonce105 = var106;
}
{
var109 = ((short int(*)(val* self, val* p0))(var102->class->vft[COLOR_core__kernel__Object___61d_61d]))(var102, var106); /* == on <var102:String>*/
}
if (var109){
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "jshort";
var113 = core__abstract_text___CString___to_s_full(var112, 6l, 6l);
var111 = var113;
varonce110 = var111;
}
var = var111;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var116 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline model#MClass#name (var114) on <var114:MClass> */
var119 = var114->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var114:MClass> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "UInt16";
var123 = core__abstract_text___CString___to_s_full(var122, 6l, 6l);
var121 = var123;
varonce120 = var121;
}
{
var124 = ((short int(*)(val* self, val* p0))(var117->class->vft[COLOR_core__kernel__Object___61d_61d]))(var117, var121); /* == on <var117:String>*/
}
if (var124){
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "jshort";
var128 = core__abstract_text___CString___to_s_full(var127, 6l, 6l);
var126 = var128;
varonce125 = var126;
}
var = var126;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var131 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline model#MClass#name (var129) on <var129:MClass> */
var134 = var129->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var129:MClass> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "Int32";
var138 = core__abstract_text___CString___to_s_full(var137, 5l, 5l);
var136 = var138;
varonce135 = var136;
}
{
var139 = ((short int(*)(val* self, val* p0))(var132->class->vft[COLOR_core__kernel__Object___61d_61d]))(var132, var136); /* == on <var132:String>*/
}
if (var139){
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "jint";
var143 = core__abstract_text___CString___to_s_full(var142, 4l, 4l);
var141 = var143;
varonce140 = var141;
}
var = var141;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var146 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline model#MClass#name (var144) on <var144:MClass> */
var149 = var144->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var144:MClass> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "UInt32";
var153 = core__abstract_text___CString___to_s_full(var152, 6l, 6l);
var151 = var153;
varonce150 = var151;
}
{
var154 = ((short int(*)(val* self, val* p0))(var147->class->vft[COLOR_core__kernel__Object___61d_61d]))(var147, var151); /* == on <var147:String>*/
}
if (var154){
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "jint";
var158 = core__abstract_text___CString___to_s_full(var157, 4l, 4l);
var156 = var158;
varonce155 = var156;
}
var = var156;
goto RET_LABEL;
} else {
}
{
var159 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__java___MClassType___MType__jni_type]))(self); /* jni_type on <self:MClassType>*/
}
var = var159;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#MClassType#jni_format for (self: MClassType): String */
val* nitc__java___MClassType___MType__jni_format(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : nullable ForeignType */;
val* var_ftype /* var ftype: nullable ForeignType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : String */;
val* var8 /* : String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var13 /* : Pattern */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : Pattern */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : Pattern */;
val* var_jni_type /* var jni_type: String */;
long var26 /* : Int */;
long var_i /* var i: Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name;
short int var32 /* : Bool */;
long var33 /* : Int */;
long var_j /* var j: Int */;
long var34 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : Sys */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : MClass */;
val* var53 /* : MClass */;
val* var54 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : Sys */;
val* var60 /* : Text */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var68 /* : Int */;
val* var69 /* : Text */;
val* var70 /* : Text */;
short int var71 /* : Bool */;
val* var72 /* : Pattern */;
val* var73 /* : SequenceRead[Char] */;
val* var74 /* : nullable Object */;
long var75 /* : Int */;
long var_depth /* var depth: Int */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var_java_type /* var java_type: String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
short int var89 /* : Bool */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var_short /* var short: nullable Object */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
short int var98 /* : Bool */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
short int var107 /* : Bool */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
short int var116 /* : Bool */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : CString */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
short int var125 /* : Bool */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
short int var134 /* : Bool */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
short int var143 /* : Bool */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : CString */;
val* var147 /* : String */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : CString */;
val* var151 /* : String */;
short int var152 /* : Bool */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : CString */;
val* var156 /* : String */;
val* var158 /* : NativeArray[String] */;
static val* varonce157;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
val* var172 /* : Text */;
val* var173 /* : Text */;
val* var175 /* : NativeArray[String] */;
static val* varonce174;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : CString */;
val* var183 /* : String */;
val* var184 /* : String */;
val* var185 /* : MClass */;
val* var187 /* : MClass */;
val* var188 /* : String */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : CString */;
val* var194 /* : String */;
short int var195 /* : Bool */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : CString */;
val* var199 /* : String */;
val* var200 /* : MClass */;
val* var202 /* : MClass */;
val* var203 /* : String */;
val* var205 /* : String */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : CString */;
val* var209 /* : String */;
short int var210 /* : Bool */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : CString */;
val* var214 /* : String */;
val* var215 /* : MClass */;
val* var217 /* : MClass */;
val* var218 /* : String */;
val* var220 /* : String */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : CString */;
val* var224 /* : String */;
short int var225 /* : Bool */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : CString */;
val* var229 /* : String */;
val* var230 /* : MClass */;
val* var232 /* : MClass */;
val* var233 /* : String */;
val* var235 /* : String */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : CString */;
val* var239 /* : String */;
short int var240 /* : Bool */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : MClass */;
val* var247 /* : MClass */;
val* var248 /* : String */;
val* var250 /* : String */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : CString */;
val* var254 /* : String */;
short int var255 /* : Bool */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : CString */;
val* var259 /* : String */;
val* var260 /* : MClass */;
val* var262 /* : MClass */;
val* var263 /* : String */;
val* var265 /* : String */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : CString */;
val* var269 /* : String */;
short int var270 /* : Bool */;
static val* varonce271;
val* var272 /* : String */;
char* var273 /* : CString */;
val* var274 /* : String */;
val* var275 /* : MClass */;
val* var277 /* : MClass */;
val* var278 /* : String */;
val* var280 /* : String */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : CString */;
val* var284 /* : String */;
short int var285 /* : Bool */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : CString */;
val* var289 /* : String */;
val* var290 /* : MClass */;
val* var292 /* : MClass */;
val* var293 /* : String */;
val* var295 /* : String */;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : CString */;
val* var299 /* : String */;
short int var300 /* : Bool */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : CString */;
val* var304 /* : String */;
val* var305 /* : MClass */;
val* var307 /* : MClass */;
val* var308 /* : String */;
val* var310 /* : String */;
static val* varonce311;
val* var312 /* : String */;
char* var313 /* : CString */;
val* var314 /* : String */;
short int var315 /* : Bool */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : CString */;
val* var319 /* : String */;
val* var320 /* : MClass */;
val* var322 /* : MClass */;
val* var323 /* : String */;
val* var325 /* : String */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : CString */;
val* var329 /* : String */;
short int var330 /* : Bool */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : CString */;
val* var334 /* : String */;
val* var335 /* : String */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__extern_classes___MClass___ftype(var1);
}
var_ftype = var4;
/* <var_ftype:nullable ForeignType> isa ForeignJavaType */
cltype = type_nitc__ForeignJavaType.color;
idtype = type_nitc__ForeignJavaType.id;
if(var_ftype == NULL) {
var5 = 0;
} else {
if(cltype >= var_ftype->type->table_size) {
var5 = 0;
} else {
var5 = var_ftype->type->type_table[cltype] == idtype;
}
}
if (var5){
{
{ /* Inline java#ForeignJavaType#java_type (var_ftype) on <var_ftype:nullable ForeignType(ForeignJavaType)> */
var8 = var_ftype->attrs[COLOR_nitc__java__ForeignJavaType___java_type].val; /* _java_type on <var_ftype:nullable ForeignType(ForeignJavaType)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _java_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 401);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "/";
var11 = core__abstract_text___CString___to_s_full(var10, 1l, 1l);
var9 = var11;
varonce = var9;
}
{
var13 = (val*)((long)('.')<<2|2);
var12 = core__string_search___Text___replace(var6, var13, var9);
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "";
var17 = core__abstract_text___CString___to_s_full(var16, 0l, 0l);
var15 = var17;
varonce14 = var15;
}
{
var19 = (val*)((long)(' ')<<2|2);
var18 = core__string_search___Text___replace(var12, var19, var15);
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "";
var23 = core__abstract_text___CString___to_s_full(var22, 0l, 0l);
var21 = var23;
varonce20 = var21;
}
{
var25 = (val*)((long)('\n')<<2|2);
var24 = core__string_search___Text___replace(var18, var25, var21);
}
var_jni_type = var24;
for(;;) {
{
var26 = core___core__Text___last_index_of(var_jni_type, '<');
}
var_i = var26;
{
{ /* Inline kernel#Int#>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var29 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var32 = var_i >= 0l;
var27 = var32;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
var33 = core___core__Text___index_of_from(var_jni_type, '>', var_i);
}
var_j = var33;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var36 = -1l;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_j,var34) on <var_j:Int> */
var39 = var_j == var34;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
var40 = glob_sys;
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "Error: missing closing \'>\' in extern Java type of \"";
var46 = core__abstract_text___CString___to_s_full(var45, 51l, 51l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[0]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "\"";
var50 = core__abstract_text___CString___to_s_full(var49, 1l, 1l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var42)->values[2]=var48;
} else {
var42 = varonce41;
varonce41 = NULL;
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var53 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline model#MClass#name (var51) on <var51:MClass> */
var56 = var51->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var51:MClass> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
((struct instance_core__NativeArray*)var42)->values[1]=var54;
{
var57 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
core__file___Sys___print(var40, var57); /* Direct call file#Sys#print on <var40:Sys>*/
}
var58 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var58,1l) on <var58:Sys> */
exit(1l);
RET_LABEL59:(void)0;
}
}
} else {
}
{
var60 = ((val*(*)(val* self, long p0, long p1))(var_jni_type->class->vft[COLOR_core__abstract_text__Text__substring]))(var_jni_type, 0l, var_i); /* substring on <var_jni_type:String>*/
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var67 = var_j + 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
{
var68 = ((long(*)(val* self))(var_jni_type->class->vft[COLOR_core__abstract_text__Text__length]))(var_jni_type); /* length on <var_jni_type:String>*/
}
{
var69 = ((val*(*)(val* self, long p0, long p1))(var_jni_type->class->vft[COLOR_core__abstract_text__Text__substring]))(var_jni_type, var61, var68); /* substring on <var_jni_type:String>*/
}
{
var70 = ((val*(*)(val* self, val* p0))(var60->class->vft[COLOR_core__abstract_text__Text___43d]))(var60, var69); /* + on <var60:Text(String)>*/
}
var_jni_type = var70;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var72 = (val*)((long)('[')<<2|2);
var71 = core__string_search___Text___has(var_jni_type, var72);
}
if (var71){
{
var73 = ((val*(*)(val* self))(var_jni_type->class->vft[COLOR_core__abstract_text__Text__chars]))(var_jni_type); /* chars on <var_jni_type:String>*/
}
{
var74 = (val*)((long)('[')<<2|2);
var75 = ((long(*)(val* self, val* p0))((((long)var73&3)?class_info[((long)var73&3)]:var73->class)->vft[COLOR_core__abstract_collection__Collection__count]))(var73, var74); /* count on <var73:SequenceRead[Char]>*/
}
var_depth = var75;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "[]";
var79 = core__abstract_text___CString___to_s_full(var78, 2l, 2l);
var77 = var79;
varonce76 = var77;
}
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "";
var83 = core__abstract_text___CString___to_s_full(var82, 0l, 0l);
var81 = var83;
varonce80 = var81;
}
{
var84 = core__string_search___Text___replace(var_jni_type, var77, var81);
}
var_java_type = var84;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "boolean";
var88 = core__abstract_text___CString___to_s_full(var87, 7l, 7l);
var86 = var88;
varonce85 = var86;
}
{
var89 = ((short int(*)(val* self, val* p0))(var_java_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_java_type, var86); /* == on <var_java_type:String>*/
}
if (var89){
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "Z";
var93 = core__abstract_text___CString___to_s_full(var92, 1l, 1l);
var91 = var93;
varonce90 = var91;
}
var_short = var91;
} else {
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "byte";
var97 = core__abstract_text___CString___to_s_full(var96, 4l, 4l);
var95 = var97;
varonce94 = var95;
}
{
var98 = ((short int(*)(val* self, val* p0))(var_java_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_java_type, var95); /* == on <var_java_type:String>*/
}
if (var98){
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "B";
var102 = core__abstract_text___CString___to_s_full(var101, 1l, 1l);
var100 = var102;
varonce99 = var100;
}
var_short = var100;
} else {
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "char";
var106 = core__abstract_text___CString___to_s_full(var105, 4l, 4l);
var104 = var106;
varonce103 = var104;
}
{
var107 = ((short int(*)(val* self, val* p0))(var_java_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_java_type, var104); /* == on <var_java_type:String>*/
}
if (var107){
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "C";
var111 = core__abstract_text___CString___to_s_full(var110, 1l, 1l);
var109 = var111;
varonce108 = var109;
}
var_short = var109;
} else {
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "short";
var115 = core__abstract_text___CString___to_s_full(var114, 5l, 5l);
var113 = var115;
varonce112 = var113;
}
{
var116 = ((short int(*)(val* self, val* p0))(var_java_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_java_type, var113); /* == on <var_java_type:String>*/
}
if (var116){
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "S";
var120 = core__abstract_text___CString___to_s_full(var119, 1l, 1l);
var118 = var120;
varonce117 = var118;
}
var_short = var118;
} else {
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "int";
var124 = core__abstract_text___CString___to_s_full(var123, 3l, 3l);
var122 = var124;
varonce121 = var122;
}
{
var125 = ((short int(*)(val* self, val* p0))(var_java_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_java_type, var122); /* == on <var_java_type:String>*/
}
if (var125){
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "I";
var129 = core__abstract_text___CString___to_s_full(var128, 1l, 1l);
var127 = var129;
varonce126 = var127;
}
var_short = var127;
} else {
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "long";
var133 = core__abstract_text___CString___to_s_full(var132, 4l, 4l);
var131 = var133;
varonce130 = var131;
}
{
var134 = ((short int(*)(val* self, val* p0))(var_java_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_java_type, var131); /* == on <var_java_type:String>*/
}
if (var134){
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "J";
var138 = core__abstract_text___CString___to_s_full(var137, 1l, 1l);
var136 = var138;
varonce135 = var136;
}
var_short = var136;
} else {
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "float";
var142 = core__abstract_text___CString___to_s_full(var141, 5l, 5l);
var140 = var142;
varonce139 = var140;
}
{
var143 = ((short int(*)(val* self, val* p0))(var_java_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_java_type, var140); /* == on <var_java_type:String>*/
}
if (var143){
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "F";
var147 = core__abstract_text___CString___to_s_full(var146, 1l, 1l);
var145 = var147;
varonce144 = var145;
}
var_short = var145;
} else {
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "double";
var151 = core__abstract_text___CString___to_s_full(var150, 6l, 6l);
var149 = var151;
varonce148 = var149;
}
{
var152 = ((short int(*)(val* self, val* p0))(var_java_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_java_type, var149); /* == on <var_java_type:String>*/
}
if (var152){
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "D";
var156 = core__abstract_text___CString___to_s_full(var155, 1l, 1l);
var154 = var156;
varonce153 = var154;
}
var_short = var154;
} else {
if (unlikely(varonce157==NULL)) {
var158 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "L";
var162 = core__abstract_text___CString___to_s_full(var161, 1l, 1l);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var158)->values[0]=var160;
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = ";";
var166 = core__abstract_text___CString___to_s_full(var165, 1l, 1l);
var164 = var166;
varonce163 = var164;
}
((struct instance_core__NativeArray*)var158)->values[2]=var164;
} else {
var158 = varonce157;
varonce157 = NULL;
}
((struct instance_core__NativeArray*)var158)->values[1]=var_java_type;
{
var167 = ((val*(*)(val* self))(var158->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var158); /* native_to_s on <var158:NativeArray[String]>*/
}
varonce157 = var158;
var_short = var167;
}
}
}
}
}
}
}
}
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "[";
var171 = core__abstract_text___CString___to_s_full(var170, 1l, 1l);
var169 = var171;
varonce168 = var169;
}
{
var172 = ((val*(*)(val* self, long p0))(var169->class->vft[COLOR_core__abstract_text__Text___42d]))(var169, var_depth); /* * on <var169:String>*/
}
{
var173 = ((val*(*)(val* self, val* p0))(var172->class->vft[COLOR_core__abstract_text__Text___43d]))(var172, var_short); /* + on <var172:Text(String)>*/
}
var = var173;
goto RET_LABEL;
} else {
}
if (unlikely(varonce174==NULL)) {
var175 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "L";
var179 = core__abstract_text___CString___to_s_full(var178, 1l, 1l);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var175)->values[0]=var177;
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = ";";
var183 = core__abstract_text___CString___to_s_full(var182, 1l, 1l);
var181 = var183;
varonce180 = var181;
}
((struct instance_core__NativeArray*)var175)->values[2]=var181;
} else {
var175 = varonce174;
varonce174 = NULL;
}
((struct instance_core__NativeArray*)var175)->values[1]=var_jni_type;
{
var184 = ((val*(*)(val* self))(var175->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var175); /* native_to_s on <var175:NativeArray[String]>*/
}
varonce174 = var175;
var = var184;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var187 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
{
{ /* Inline model#MClass#name (var185) on <var185:MClass> */
var190 = var185->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var185:MClass> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "Bool";
var194 = core__abstract_text___CString___to_s_full(var193, 4l, 4l);
var192 = var194;
varonce191 = var192;
}
{
var195 = ((short int(*)(val* self, val* p0))(var188->class->vft[COLOR_core__kernel__Object___61d_61d]))(var188, var192); /* == on <var188:String>*/
}
if (var195){
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "Z";
var199 = core__abstract_text___CString___to_s_full(var198, 1l, 1l);
var197 = var199;
varonce196 = var197;
}
var = var197;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var202 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var202 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var200 = var202;
RET_LABEL201:(void)0;
}
}
{
{ /* Inline model#MClass#name (var200) on <var200:MClass> */
var205 = var200->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var200:MClass> */
if (unlikely(var205 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var203 = var205;
RET_LABEL204:(void)0;
}
}
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = "Char";
var209 = core__abstract_text___CString___to_s_full(var208, 4l, 4l);
var207 = var209;
varonce206 = var207;
}
{
var210 = ((short int(*)(val* self, val* p0))(var203->class->vft[COLOR_core__kernel__Object___61d_61d]))(var203, var207); /* == on <var203:String>*/
}
if (var210){
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "I";
var214 = core__abstract_text___CString___to_s_full(var213, 1l, 1l);
var212 = var214;
varonce211 = var212;
}
var = var212;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var217 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
{ /* Inline model#MClass#name (var215) on <var215:MClass> */
var220 = var215->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var215:MClass> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = "Int";
var224 = core__abstract_text___CString___to_s_full(var223, 3l, 3l);
var222 = var224;
varonce221 = var222;
}
{
var225 = ((short int(*)(val* self, val* p0))(var218->class->vft[COLOR_core__kernel__Object___61d_61d]))(var218, var222); /* == on <var218:String>*/
}
if (var225){
if (likely(varonce226!=NULL)) {
var227 = varonce226;
} else {
var228 = "J";
var229 = core__abstract_text___CString___to_s_full(var228, 1l, 1l);
var227 = var229;
varonce226 = var227;
}
var = var227;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var232 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
{
{ /* Inline model#MClass#name (var230) on <var230:MClass> */
var235 = var230->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var230:MClass> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
if (likely(varonce236!=NULL)) {
var237 = varonce236;
} else {
var238 = "Float";
var239 = core__abstract_text___CString___to_s_full(var238, 5l, 5l);
var237 = var239;
varonce236 = var237;
}
{
var240 = ((short int(*)(val* self, val* p0))(var233->class->vft[COLOR_core__kernel__Object___61d_61d]))(var233, var237); /* == on <var233:String>*/
}
if (var240){
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "D";
var244 = core__abstract_text___CString___to_s_full(var243, 1l, 1l);
var242 = var244;
varonce241 = var242;
}
var = var242;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var247 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var247 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
{
{ /* Inline model#MClass#name (var245) on <var245:MClass> */
var250 = var245->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var245:MClass> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = "Byte";
var254 = core__abstract_text___CString___to_s_full(var253, 4l, 4l);
var252 = var254;
varonce251 = var252;
}
{
var255 = ((short int(*)(val* self, val* p0))(var248->class->vft[COLOR_core__kernel__Object___61d_61d]))(var248, var252); /* == on <var248:String>*/
}
if (var255){
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = "B";
var259 = core__abstract_text___CString___to_s_full(var258, 1l, 1l);
var257 = var259;
varonce256 = var257;
}
var = var257;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var262 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
{ /* Inline model#MClass#name (var260) on <var260:MClass> */
var265 = var260->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var260:MClass> */
if (unlikely(var265 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var263 = var265;
RET_LABEL264:(void)0;
}
}
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = "Int8";
var269 = core__abstract_text___CString___to_s_full(var268, 4l, 4l);
var267 = var269;
varonce266 = var267;
}
{
var270 = ((short int(*)(val* self, val* p0))(var263->class->vft[COLOR_core__kernel__Object___61d_61d]))(var263, var267); /* == on <var263:String>*/
}
if (var270){
if (likely(varonce271!=NULL)) {
var272 = varonce271;
} else {
var273 = "B";
var274 = core__abstract_text___CString___to_s_full(var273, 1l, 1l);
var272 = var274;
varonce271 = var272;
}
var = var272;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var277 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var277 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var275 = var277;
RET_LABEL276:(void)0;
}
}
{
{ /* Inline model#MClass#name (var275) on <var275:MClass> */
var280 = var275->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var275:MClass> */
if (unlikely(var280 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var278 = var280;
RET_LABEL279:(void)0;
}
}
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "Int16";
var284 = core__abstract_text___CString___to_s_full(var283, 5l, 5l);
var282 = var284;
varonce281 = var282;
}
{
var285 = ((short int(*)(val* self, val* p0))(var278->class->vft[COLOR_core__kernel__Object___61d_61d]))(var278, var282); /* == on <var278:String>*/
}
if (var285){
if (likely(varonce286!=NULL)) {
var287 = varonce286;
} else {
var288 = "S";
var289 = core__abstract_text___CString___to_s_full(var288, 1l, 1l);
var287 = var289;
varonce286 = var287;
}
var = var287;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var292 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var292 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
{
{ /* Inline model#MClass#name (var290) on <var290:MClass> */
var295 = var290->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var290:MClass> */
if (unlikely(var295 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var293 = var295;
RET_LABEL294:(void)0;
}
}
if (likely(varonce296!=NULL)) {
var297 = varonce296;
} else {
var298 = "UInt16";
var299 = core__abstract_text___CString___to_s_full(var298, 6l, 6l);
var297 = var299;
varonce296 = var297;
}
{
var300 = ((short int(*)(val* self, val* p0))(var293->class->vft[COLOR_core__kernel__Object___61d_61d]))(var293, var297); /* == on <var293:String>*/
}
if (var300){
if (likely(varonce301!=NULL)) {
var302 = varonce301;
} else {
var303 = "S";
var304 = core__abstract_text___CString___to_s_full(var303, 1l, 1l);
var302 = var304;
varonce301 = var302;
}
var = var302;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var307 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var307 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var305 = var307;
RET_LABEL306:(void)0;
}
}
{
{ /* Inline model#MClass#name (var305) on <var305:MClass> */
var310 = var305->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var305:MClass> */
if (unlikely(var310 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var308 = var310;
RET_LABEL309:(void)0;
}
}
if (likely(varonce311!=NULL)) {
var312 = varonce311;
} else {
var313 = "Int32";
var314 = core__abstract_text___CString___to_s_full(var313, 5l, 5l);
var312 = var314;
varonce311 = var312;
}
{
var315 = ((short int(*)(val* self, val* p0))(var308->class->vft[COLOR_core__kernel__Object___61d_61d]))(var308, var312); /* == on <var308:String>*/
}
if (var315){
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "I";
var319 = core__abstract_text___CString___to_s_full(var318, 1l, 1l);
var317 = var319;
varonce316 = var317;
}
var = var317;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var322 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var322 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var320 = var322;
RET_LABEL321:(void)0;
}
}
{
{ /* Inline model#MClass#name (var320) on <var320:MClass> */
var325 = var320->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var320:MClass> */
if (unlikely(var325 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var323 = var325;
RET_LABEL324:(void)0;
}
}
if (likely(varonce326!=NULL)) {
var327 = varonce326;
} else {
var328 = "UInt32";
var329 = core__abstract_text___CString___to_s_full(var328, 6l, 6l);
var327 = var329;
varonce326 = var327;
}
{
var330 = ((short int(*)(val* self, val* p0))(var323->class->vft[COLOR_core__kernel__Object___61d_61d]))(var323, var327); /* == on <var323:String>*/
}
if (var330){
if (likely(varonce331!=NULL)) {
var332 = varonce331;
} else {
var333 = "I";
var334 = core__abstract_text___CString___to_s_full(var333, 1l, 1l);
var332 = var334;
varonce331 = var332;
}
var = var332;
goto RET_LABEL;
} else {
}
{
var335 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__java___MClassType___MType__jni_format]))(self); /* jni_format on <self:MClassType>*/
}
var = var335;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#MClassType#jni_signature_alt for (self: MClassType): String */
val* nitc__java___MClassType___MType__jni_signature_alt(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : nullable ForeignType */;
val* var_ftype /* var ftype: nullable ForeignType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : MClass */;
val* var11 /* : MClass */;
val* var12 /* : String */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
short int var19 /* : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : MClass */;
val* var26 /* : MClass */;
val* var27 /* : String */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : MClass */;
val* var41 /* : MClass */;
val* var42 /* : String */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : MClass */;
val* var56 /* : MClass */;
val* var57 /* : String */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
short int var64 /* : Bool */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : MClass */;
val* var71 /* : MClass */;
val* var72 /* : String */;
val* var74 /* : String */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
short int var79 /* : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var84 /* : MClass */;
val* var86 /* : MClass */;
val* var87 /* : String */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
short int var94 /* : Bool */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : MClass */;
val* var101 /* : MClass */;
val* var102 /* : String */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
short int var109 /* : Bool */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
val* var114 /* : MClass */;
val* var116 /* : MClass */;
val* var117 /* : String */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : CString */;
val* var123 /* : String */;
short int var124 /* : Bool */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : MClass */;
val* var131 /* : MClass */;
val* var132 /* : String */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
short int var139 /* : Bool */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : CString */;
val* var143 /* : String */;
val* var144 /* : MClass */;
val* var146 /* : MClass */;
val* var147 /* : String */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
short int var154 /* : Bool */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : CString */;
val* var158 /* : String */;
val* var159 /* : String */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__extern_classes___MClass___ftype(var1);
}
var_ftype = var4;
/* <var_ftype:nullable ForeignType> isa ForeignJavaType */
cltype = type_nitc__ForeignJavaType.color;
idtype = type_nitc__ForeignJavaType.id;
if(var_ftype == NULL) {
var5 = 0;
} else {
if(cltype >= var_ftype->type->table_size) {
var5 = 0;
} else {
var5 = var_ftype->type->type_table[cltype] == idtype;
}
}
if (var5){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Object";
var8 = core__abstract_text___CString___to_s_full(var7, 6l, 6l);
var6 = var8;
varonce = var6;
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var11 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
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
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Bool";
var18 = core__abstract_text___CString___to_s_full(var17, 4l, 4l);
var16 = var18;
varonce15 = var16;
}
{
var19 = ((short int(*)(val* self, val* p0))(var12->class->vft[COLOR_core__kernel__Object___61d_61d]))(var12, var16); /* == on <var12:String>*/
}
if (var19){
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "Boolean";
var23 = core__abstract_text___CString___to_s_full(var22, 7l, 7l);
var21 = var23;
varonce20 = var21;
}
var = var21;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var26 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MClass#name (var24) on <var24:MClass> */
var29 = var24->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var24:MClass> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "Char";
var33 = core__abstract_text___CString___to_s_full(var32, 4l, 4l);
var31 = var33;
varonce30 = var31;
}
{
var34 = ((short int(*)(val* self, val* p0))(var27->class->vft[COLOR_core__kernel__Object___61d_61d]))(var27, var31); /* == on <var27:String>*/
}
if (var34){
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Int";
var38 = core__abstract_text___CString___to_s_full(var37, 3l, 3l);
var36 = var38;
varonce35 = var36;
}
var = var36;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var41 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MClass#name (var39) on <var39:MClass> */
var44 = var39->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var39:MClass> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "Int";
var48 = core__abstract_text___CString___to_s_full(var47, 3l, 3l);
var46 = var48;
varonce45 = var46;
}
{
var49 = ((short int(*)(val* self, val* p0))(var42->class->vft[COLOR_core__kernel__Object___61d_61d]))(var42, var46); /* == on <var42:String>*/
}
if (var49){
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "Long";
var53 = core__abstract_text___CString___to_s_full(var52, 4l, 4l);
var51 = var53;
varonce50 = var51;
}
var = var51;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var56 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline model#MClass#name (var54) on <var54:MClass> */
var59 = var54->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var54:MClass> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "Float";
var63 = core__abstract_text___CString___to_s_full(var62, 5l, 5l);
var61 = var63;
varonce60 = var61;
}
{
var64 = ((short int(*)(val* self, val* p0))(var57->class->vft[COLOR_core__kernel__Object___61d_61d]))(var57, var61); /* == on <var57:String>*/
}
if (var64){
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "Double";
var68 = core__abstract_text___CString___to_s_full(var67, 6l, 6l);
var66 = var68;
varonce65 = var66;
}
var = var66;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var71 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline model#MClass#name (var69) on <var69:MClass> */
var74 = var69->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var69:MClass> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "Byte";
var78 = core__abstract_text___CString___to_s_full(var77, 4l, 4l);
var76 = var78;
varonce75 = var76;
}
{
var79 = ((short int(*)(val* self, val* p0))(var72->class->vft[COLOR_core__kernel__Object___61d_61d]))(var72, var76); /* == on <var72:String>*/
}
if (var79){
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "Byte";
var83 = core__abstract_text___CString___to_s_full(var82, 4l, 4l);
var81 = var83;
varonce80 = var81;
}
var = var81;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var86 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline model#MClass#name (var84) on <var84:MClass> */
var89 = var84->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var84:MClass> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "Int8";
var93 = core__abstract_text___CString___to_s_full(var92, 4l, 4l);
var91 = var93;
varonce90 = var91;
}
{
var94 = ((short int(*)(val* self, val* p0))(var87->class->vft[COLOR_core__kernel__Object___61d_61d]))(var87, var91); /* == on <var87:String>*/
}
if (var94){
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "Byte";
var98 = core__abstract_text___CString___to_s_full(var97, 4l, 4l);
var96 = var98;
varonce95 = var96;
}
var = var96;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var101 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline model#MClass#name (var99) on <var99:MClass> */
var104 = var99->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var99:MClass> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "Int16";
var108 = core__abstract_text___CString___to_s_full(var107, 5l, 5l);
var106 = var108;
varonce105 = var106;
}
{
var109 = ((short int(*)(val* self, val* p0))(var102->class->vft[COLOR_core__kernel__Object___61d_61d]))(var102, var106); /* == on <var102:String>*/
}
if (var109){
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "Short";
var113 = core__abstract_text___CString___to_s_full(var112, 5l, 5l);
var111 = var113;
varonce110 = var111;
}
var = var111;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var116 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline model#MClass#name (var114) on <var114:MClass> */
var119 = var114->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var114:MClass> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "UInt16";
var123 = core__abstract_text___CString___to_s_full(var122, 6l, 6l);
var121 = var123;
varonce120 = var121;
}
{
var124 = ((short int(*)(val* self, val* p0))(var117->class->vft[COLOR_core__kernel__Object___61d_61d]))(var117, var121); /* == on <var117:String>*/
}
if (var124){
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "Short";
var128 = core__abstract_text___CString___to_s_full(var127, 5l, 5l);
var126 = var128;
varonce125 = var126;
}
var = var126;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var131 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline model#MClass#name (var129) on <var129:MClass> */
var134 = var129->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var129:MClass> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "Int32";
var138 = core__abstract_text___CString___to_s_full(var137, 5l, 5l);
var136 = var138;
varonce135 = var136;
}
{
var139 = ((short int(*)(val* self, val* p0))(var132->class->vft[COLOR_core__kernel__Object___61d_61d]))(var132, var136); /* == on <var132:String>*/
}
if (var139){
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "Int";
var143 = core__abstract_text___CString___to_s_full(var142, 3l, 3l);
var141 = var143;
varonce140 = var141;
}
var = var141;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var146 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline model#MClass#name (var144) on <var144:MClass> */
var149 = var144->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var144:MClass> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "UInt32";
var153 = core__abstract_text___CString___to_s_full(var152, 6l, 6l);
var151 = var153;
varonce150 = var151;
}
{
var154 = ((short int(*)(val* self, val* p0))(var147->class->vft[COLOR_core__kernel__Object___61d_61d]))(var147, var151); /* == on <var147:String>*/
}
if (var154){
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "Int";
var158 = core__abstract_text___CString___to_s_full(var157, 3l, 3l);
var156 = var158;
varonce155 = var156;
}
var = var156;
goto RET_LABEL;
} else {
}
{
var159 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__java___MClassType___MType__jni_signature_alt]))(self); /* jni_signature_alt on <self:MClassType>*/
}
var = var159;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#MMethod#build_jni_format for (self: MMethod, MClassType, MModule): String */
val* nitc__java___MMethod___build_jni_format(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var_from_mmodule /* var from_mmodule: MModule */;
val* var1 /* : MPropDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var2 /* : nullable MSignature */;
val* var4 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var5 /* : Array[String] */;
val* var_format /* var format: Array[String] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : String */;
val* var14 /* : Array[MParameter] */;
val* var16 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var17 /* : IndexedIterator[nullable Object] */;
val* var_18 /* var : IndexedIterator[MParameter] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var21 /* : MType */;
val* var23 /* : MType */;
val* var24 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : String */;
val* var34 /* : nullable MType */;
val* var36 /* : nullable MType */;
val* var_return_mtype /* var return_mtype: nullable MType */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : MType */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : String */;
var_recv_mtype = p0;
var_from_mmodule = p1;
{
var1 = nitc___nitc__MProperty___lookup_first_definition(self, var_from_mmodule, var_recv_mtype);
}
var_mmethoddef = var1;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var4 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_msignature = var2;
var5 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[String]>*/
}
var_format = var5;
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "(";
var8 = core__abstract_text___CString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce = var6;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_format, var6); /* Direct call array#Array#add on <var_format:Array[String]>*/
}
{
{ /* Inline model#MMethod#is_init (self) on <self:MMethod> */
var11 = self->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = !var9;
if (var12){
{
var13 = nitc__java___MClassType___MType__jni_format(var_recv_mtype);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_format, var13); /* Direct call array#Array#add on <var_format:Array[String]>*/
}
} else {
}
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 647);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature> */
if (unlikely(var_msignature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var16 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_ = var14;
{
var17 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:IndexedIterator[MParameter]>*/
}
if (var19){
} else {
goto BREAK_label;
}
{
var20 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:IndexedIterator[MParameter]>*/
}
var_p = var20;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var23 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var21->class->vft[COLOR_nitc__model__MType__resolve_for]))(var21, var_recv_mtype, var_recv_mtype, var_from_mmodule, 1); /* resolve_for on <var21:MType>*/
}
var_param_mtype = var24;
{
var25 = ((val*(*)(val* self))(var_param_mtype->class->vft[COLOR_nitc__java__MType__jni_format]))(var_param_mtype); /* jni_format on <var_param_mtype:MType>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_format, var25); /* Direct call array#Array#add on <var_format:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:IndexedIterator[MParameter]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:IndexedIterator[MParameter]>*/
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = ")";
var29 = core__abstract_text___CString___to_s_full(var28, 1l, 1l);
var27 = var29;
varonce26 = var27;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_format, var27); /* Direct call array#Array#add on <var_format:Array[String]>*/
}
{
{ /* Inline model#MMethod#is_init (self) on <self:MMethod> */
var32 = self->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30){
{
var33 = nitc__java___MClassType___MType__jni_format(var_recv_mtype);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_format, var33); /* Direct call array#Array#add on <var_format:Array[String]>*/
}
} else {
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 657);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature> */
if (unlikely(var_msignature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var36 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_return_mtype = var34;
if (var_return_mtype == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_return_mtype,((val*)NULL)) on <var_return_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var_return_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_return_mtype, var_other); /* == on <var_return_mtype:nullable MType(MType)>*/
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
{
var42 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_return_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_return_mtype, var_recv_mtype, var_recv_mtype, var_from_mmodule, 1); /* resolve_for on <var_return_mtype:nullable MType(MType)>*/
}
var_return_mtype = var42;
{
var43 = ((val*(*)(val* self))(var_return_mtype->class->vft[COLOR_nitc__java__MType__jni_format]))(var_return_mtype); /* jni_format on <var_return_mtype:nullable MType(MType)>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_format, var43); /* Direct call array#Array#add on <var_format:Array[String]>*/
}
} else {
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "V";
var47 = core__abstract_text___CString___to_s_full(var46, 1l, 1l);
var45 = var47;
varonce44 = var45;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_format, var45); /* Direct call array#Array#add on <var_format:Array[String]>*/
}
}
}
{
var48 = core__abstract_text___Collection___join(var_format, ((val*)NULL), ((val*)NULL));
}
var = var48;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#MMethod#build_c_implementation_signature for (self: MMethod, MClassType, MModule, nullable String, SignatureLength, CallContext): String */
val* nitc__java___MMethod___build_c_implementation_signature(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
val* var /* : String */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var_from_mmodule /* var from_mmodule: MModule */;
val* var_suffix /* var suffix: nullable String */;
val* var_length /* var length: SignatureLength */;
val* var_call_context /* var call_context: CallContext */;
val* var1 /* : MPropDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var2 /* : nullable MSignature */;
val* var4 /* : nullable MSignature */;
val* var_signature /* var signature: nullable MSignature */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : String */;
val* var_creturn_type /* var creturn_type: nullable Object */;
val* var14 /* : nullable MType */;
val* var16 /* : nullable MType */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable MType */;
val* var24 /* : nullable MType */;
val* var_ret_mtype /* var ret_mtype: nullable MType */;
val* var25 /* : MType */;
val* var26 /* : String */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var_cname /* var cname: String */;
val* var31 /* : List[String] */;
val* var_cparams /* var cparams: List[String] */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : Array[MParameter] */;
val* var55 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var56 /* : IndexedIterator[nullable Object] */;
val* var_57 /* var : IndexedIterator[MParameter] */;
short int var58 /* : Bool */;
val* var59 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var60 /* : MType */;
val* var62 /* : MType */;
val* var63 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var65 /* : NativeArray[String] */;
static val* varonce64;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var73 /* : String */;
val* var74 /* : String */;
val* var76 /* : NativeArray[String] */;
static val* varonce75;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var94 /* : String */;
var_recv_mtype = p0;
var_from_mmodule = p1;
var_suffix = p2;
var_length = p3;
var_call_context = p4;
{
var1 = nitc___nitc__MProperty___lookup_first_definition(self, var_from_mmodule, var_recv_mtype);
}
var_mmethoddef = var1;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var4 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_signature = var2;
if (var_signature == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_signature,((val*)NULL)) on <var_signature:nullable MSignature> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_signature->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_signature, var_other); /* == on <var_signature:nullable MSignature(MSignature)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 676);
fatal_exit(1);
}
{
{ /* Inline model#MMethod#is_init (self) on <self:MMethod> */
var12 = self->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var13 = ((val*(*)(val* self, val* p0))(var_call_context->class->vft[COLOR_nitc__nitni_utilities__CallContext__name_mtype]))(var_call_context, var_recv_mtype); /* name_mtype on <var_call_context:CallContext>*/
}
var_creturn_type = var13;
} else {
{
{ /* Inline model#MSignature#return_mtype (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var16 = var_signature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_signature:nullable MSignature(MSignature)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (var14 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var14,((val*)NULL)) on <var14:nullable MType> */
var_other = ((val*)NULL);
{
var20 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_core__kernel__Object___61d_61d]))(var14, var_other); /* == on <var14:nullable MType(MType)>*/
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
{
{ /* Inline model#MSignature#return_mtype (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var24 = var_signature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_signature:nullable MSignature(MSignature)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ret_mtype = var22;
if (var_ret_mtype == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__java, 683);
fatal_exit(1);
} else {
var25 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_ret_mtype, var_recv_mtype, var_recv_mtype, var_from_mmodule, 1); /* resolve_for on <var_ret_mtype:nullable MType>*/
}
var_ret_mtype = var25;
{
var26 = ((val*(*)(val* self, val* p0))(var_call_context->class->vft[COLOR_nitc__nitni_utilities__CallContext__name_mtype]))(var_call_context, var_ret_mtype); /* name_mtype on <var_call_context:CallContext>*/
}
var_creturn_type = var26;
} else {
if (likely(varonce!=NULL)) {
var27 = varonce;
} else {
var28 = "void";
var29 = core__abstract_text___CString___to_s_full(var28, 4l, 4l);
var27 = var29;
varonce = var27;
}
var_creturn_type = var27;
}
}
{
var30 = nitc__nitni_utilities___MMethod___build_cname(self, var_recv_mtype, var_from_mmodule, var_suffix, var_length);
}
var_cname = var30;
var31 = NEW_core__List(&type_core__List__core__String);
{
{ /* Inline list#List#init (var31) on <var31:List[String]> */
{
((void(*)(val* self))(var31->class->vft[COLOR_core___core__List___core__kernel__Object__init]))(var31); /* init on <var31:List[String]>*/
}
RET_LABEL32:(void)0;
}
}
var_cparams = var31;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "JNIEnv *env";
var36 = core__abstract_text___CString___to_s_full(var35, 11l, 11l);
var34 = var36;
varonce33 = var34;
}
{
core___core__Sequence___SimpleCollection__add(var_cparams, var34); /* Direct call abstract_collection#Sequence#add on <var_cparams:List[String]>*/
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "jclass clazz";
var40 = core__abstract_text___CString___to_s_full(var39, 12l, 12l);
var38 = var40;
varonce37 = var38;
}
{
core___core__Sequence___SimpleCollection__add(var_cparams, var38); /* Direct call abstract_collection#Sequence#add on <var_cparams:List[String]>*/
}
{
{ /* Inline model#MMethod#is_init (self) on <self:MMethod> */
var43 = self->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var44 = !var41;
if (var44){
if (unlikely(varonce45==NULL)) {
var46 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = " self";
var50 = core__abstract_text___CString___to_s_full(var49, 5l, 5l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var46)->values[1]=var48;
} else {
var46 = varonce45;
varonce45 = NULL;
}
{
var51 = ((val*(*)(val* self, val* p0))(var_call_context->class->vft[COLOR_nitc__nitni_utilities__CallContext__name_mtype]))(var_call_context, var_recv_mtype); /* name_mtype on <var_call_context:CallContext>*/
}
((struct instance_core__NativeArray*)var46)->values[0]=var51;
{
var52 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
core___core__Sequence___SimpleCollection__add(var_cparams, var52); /* Direct call abstract_collection#Sequence#add on <var_cparams:List[String]>*/
}
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_signature) on <var_signature:nullable MSignature(MSignature)> */
var55 = var_signature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_signature:nullable MSignature(MSignature)> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_ = var53;
{
var56 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_57 = var56;
for(;;) {
{
var58 = ((short int(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_57); /* is_ok on <var_57:IndexedIterator[MParameter]>*/
}
if (var58){
} else {
goto BREAK_label;
}
{
var59 = ((val*(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_57); /* item on <var_57:IndexedIterator[MParameter]>*/
}
var_p = var59;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var62 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var60->class->vft[COLOR_nitc__model__MType__resolve_for]))(var60, var_recv_mtype, var_recv_mtype, var_from_mmodule, 1); /* resolve_for on <var60:MType>*/
}
var_param_mtype = var63;
if (unlikely(varonce64==NULL)) {
var65 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = " ";
var69 = core__abstract_text___CString___to_s_full(var68, 1l, 1l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var65)->values[1]=var67;
} else {
var65 = varonce64;
varonce64 = NULL;
}
{
var70 = ((val*(*)(val* self, val* p0))(var_call_context->class->vft[COLOR_nitc__nitni_utilities__CallContext__name_mtype]))(var_call_context, var_param_mtype); /* name_mtype on <var_call_context:CallContext>*/
}
((struct instance_core__NativeArray*)var65)->values[0]=var70;
{
{ /* Inline model#MParameter#name (var_p) on <var_p:MParameter> */
var73 = var_p->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var_p:MParameter> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
((struct instance_core__NativeArray*)var65)->values[2]=var71;
{
var74 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
{
core___core__Sequence___SimpleCollection__add(var_cparams, var74); /* Direct call abstract_collection#Sequence#add on <var_cparams:List[String]>*/
}
{
((void(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_57); /* next on <var_57:IndexedIterator[MParameter]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_57); /* finish on <var_57:IndexedIterator[MParameter]>*/
}
if (unlikely(varonce75==NULL)) {
var76 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = " ";
var80 = core__abstract_text___CString___to_s_full(var79, 1l, 1l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var76)->values[1]=var78;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "( ";
var84 = core__abstract_text___CString___to_s_full(var83, 2l, 2l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var76)->values[3]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = " )";
var88 = core__abstract_text___CString___to_s_full(var87, 2l, 2l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var76)->values[5]=var86;
} else {
var76 = varonce75;
varonce75 = NULL;
}
((struct instance_core__NativeArray*)var76)->values[0]=var_creturn_type;
((struct instance_core__NativeArray*)var76)->values[2]=var_cname;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = ", ";
var92 = core__abstract_text___CString___to_s_full(var91, 2l, 2l);
var90 = var92;
varonce89 = var90;
}
{
var93 = core__abstract_text___Collection___join(var_cparams, var90, ((val*)NULL));
}
((struct instance_core__NativeArray*)var76)->values[4]=var93;
{
var94 = ((val*(*)(val* self))(var76->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
var = var94;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#CCompilationUnit#add_non_static_local_function for (self: CCompilationUnit, CFunction) */
void nitc__java___CCompilationUnit___add_non_static_local_function(val* self, val* p0) {
val* var_c_function /* var c_function: CFunction */;
val* var /* : Template */;
val* var2 /* : Template */;
val* var3 /* : String */;
val* var5 /* : String */;
val* var6 /* : Template */;
val* var8 /* : Template */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : Template */;
val* var14 /* : Template */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : Template */;
val* var21 /* : Template */;
val* var22 /* : Template */;
var_c_function = p0;
{
{ /* Inline c_tools#CCompilationUnit#body_decl (self) on <self:CCompilationUnit> */
var2 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <self:CCompilationUnit> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline c_tools#CFunction#signature (var_c_function) on <var_c_function:CFunction> */
var5 = var_c_function->attrs[COLOR_nitc__c_tools__CFunction___signature].val; /* _signature on <var_c_function:CFunction> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _signature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 86);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
template___template__Template___add(var, var3); /* Direct call template#Template#add on <var:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_decl (self) on <self:CCompilationUnit> */
var8 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <self:CCompilationUnit> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = ";\n";
var11 = core__abstract_text___CString___to_s_full(var10, 2l, 2l);
var9 = var11;
varonce = var9;
}
{
template___template__Template___add(var6, var9); /* Direct call template#Template#add on <var6:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_impl (self) on <self:CCompilationUnit> */
var14 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <self:CCompilationUnit> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 44);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "\n";
var18 = core__abstract_text___CString___to_s_full(var17, 1l, 1l);
var16 = var18;
varonce15 = var16;
}
{
template___template__Template___add(var12, var16); /* Direct call template#Template#add on <var12:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#body_impl (self) on <self:CCompilationUnit> */
var21 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val; /* _body_impl on <self:CCompilationUnit> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_impl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 44);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc___nitc__CFunction___to_writer(var_c_function);
}
{
template___template__Template___add(var19, var22); /* Direct call template#Template#add on <var19:Template>*/
}
RET_LABEL:;
}
/* method java#Sys#java_call_context for (self: Sys): JavaCallContext */
val* nitc__java___core__Sys___java_call_context(val* self) {
val* var /* : JavaCallContext */;
val* var1 /* : JavaCallContext */;
var1 = NEW_nitc__java__JavaCallContext(&type_nitc__java__JavaCallContext);
{
{ /* Inline kernel#Object#init (var1) on <var1:JavaCallContext> */
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#Sys#to_java_call_context for (self: Sys): ToJavaCallContext */
val* nitc__java___core__Sys___to_java_call_context(val* self) {
val* var /* : ToJavaCallContext */;
val* var1 /* : ToJavaCallContext */;
var1 = NEW_nitc__java__ToJavaCallContext(&type_nitc__java__ToJavaCallContext);
{
{ /* Inline kernel#Object#init (var1) on <var1:ToJavaCallContext> */
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method java#Sys#from_java_call_context for (self: Sys): FromJavaCallContext */
val* nitc__java___core__Sys___from_java_call_context(val* self) {
val* var /* : FromJavaCallContext */;
val* var1 /* : FromJavaCallContext */;
var1 = NEW_nitc__java__FromJavaCallContext(&type_nitc__java__FromJavaCallContext);
{
{ /* Inline kernel#Object#init (var1) on <var1:FromJavaCallContext> */
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
