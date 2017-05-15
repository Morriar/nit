#include "nitc__ffi.sep.0.h"
/* method ffi#MModule#finalize_ffi_wrapper for (self: MModule, String, MModule) */
void nitc__ffi___MModule___finalize_ffi_wrapper(val* self, val* p0, val* p1) {
val* var_compdir /* var compdir: String */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var2 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var3 /* : RemovableCollection[nullable Object] */;
val* var_ /* var : RemovableCollection[FFILanguage] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[FFILanguage] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_language /* var language: FFILanguage */;
val* var8 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var10 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var11 /* : nullable Object */;
val* var_12 /* var : Set[NitniCallback] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[NitniCallback] */;
short int var15 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_callback /* var callback: NitniCallback */;
val* var18 /* : nullable CCompilationUnit */;
val* var20 /* : nullable CCompilationUnit */;
val* var21 /* : nullable HashSet[MModule] */;
val* var23 /* : nullable HashSet[MModule] */;
val* var_24 /* var : nullable HashSet[MModule] */;
val* var25 /* : Iterator[nullable Object] */;
val* var_26 /* var : Iterator[MModule] */;
short int var27 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_mod /* var mod: MModule */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable CCompilationUnit */;
val* var35 /* : nullable CCompilationUnit */;
val* var36 /* : Template */;
val* var38 /* : Template */;
val* var39 /* : NativeArray[String] */;
static val* varonce;
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
var_compdir = p0;
var_mainmodule = p1;
{
{ /* Inline ffi_base#MModule#ffi_callbacks (self) on <self:MModule> */
var2 = self->attrs[COLOR_nitc__ffi_base__MModule___ffi_callbacks].val; /* _ffi_callbacks on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi_base, 28);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core___core__HashMap___core__abstract_collection__MapRead__keys(var);
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[FFILanguage]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[FFILanguage]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[FFILanguage]>*/
}
var_language = var7;
{
{ /* Inline ffi_base#MModule#ffi_callbacks (self) on <self:MModule> */
var10 = self->attrs[COLOR_nitc__ffi_base__MModule___ffi_callbacks].val; /* _ffi_callbacks on <self:MModule> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi_base, 28);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var8, var_language);
}
var_12 = var11;
{
var13 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_12); /* iterator on <var_12:Set[NitniCallback]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[NitniCallback]>*/
}
if (var15){
} else {
goto BREAK_label16;
}
{
var17 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[NitniCallback]>*/
}
var_callback = var17;
{
{ /* Inline light_ffi#MModule#ffi_ccu (self) on <self:MModule> */
var20 = self->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val; /* _ffi_ccu on <self:MModule> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi, 63);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2, val* p3))(var_language->class->vft[COLOR_nitc__ffi_base__FFILanguage__compile_callback]))(var_language, var_callback, self, var_mainmodule, var18); /* compile_callback on <var_language:FFILanguage>*/
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[NitniCallback]>*/
}
}
BREAK_label16: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[NitniCallback]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_language->class->vft[COLOR_nitc__light_ffi_base__FFILanguage__compile_to_files]))(var_language, self, var_compdir); /* compile_to_files on <var_language:FFILanguage>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[FFILanguage]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[FFILanguage]>*/
}
{
{ /* Inline header_dependency#MModule#header_dependencies (self) on <self:MModule> */
var23 = self->attrs[COLOR_nitc__header_dependency__MModule___header_dependencies].val; /* _header_dependencies on <self:MModule> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_24 = var21;
if (var_24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi, 70);
fatal_exit(1);
} else {
var25 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_24);
}
var_26 = var25;
for(;;) {
{
var27 = ((short int(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_26); /* is_ok on <var_26:Iterator[MModule]>*/
}
if (var27){
} else {
goto BREAK_label28;
}
{
var29 = ((val*(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_26); /* item on <var_26:Iterator[MModule]>*/
}
var_mod = var29;
{
{ /* Inline light_ffi#MModule#uses_ffi (var_mod) on <var_mod:MModule> */
var32 = var_mod->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s; /* _uses_ffi on <var_mod:MModule> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30){
{
{ /* Inline light_ffi#MModule#ffi_ccu (self) on <self:MModule> */
var35 = self->attrs[COLOR_nitc__light_ffi__MModule___ffi_ccu].val; /* _ffi_ccu on <self:MModule> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (var33 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi, 71);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_custom (var33) on <var33:nullable CCompilationUnit> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var38 = var33->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var33:nullable CCompilationUnit> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var39 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "#include \"";
var43 = core__abstract_text___CString___to_s_full(var42, 10l, 10l);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var39)->values[0]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "._ffi.h\"\n";
var47 = core__abstract_text___CString___to_s_full(var46, 9l, 9l);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var39)->values[2]=var45;
} else {
var39 = varonce;
varonce = NULL;
}
{
var48 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mod);
}
((struct instance_core__NativeArray*)var39)->values[1]=var48;
{
var49 = ((val*(*)(val* self))(var39->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var39); /* native_to_s on <var39:NativeArray[String]>*/
}
varonce = var39;
{
template___template__Template___add(var36, var49); /* Direct call template#Template#add on <var36:Template>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_26); /* next on <var_26:Iterator[MModule]>*/
}
}
BREAK_label28: (void)0;
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_26); /* finish on <var_26:Iterator[MModule]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__ffi___MModule___finalize_ffi_wrapper]))(self, p0, p1); /* finalize_ffi_wrapper on <self:MModule>*/
}
RET_LABEL:;
}
/* method ffi#VerifyNitniCallbacksPhase#process_npropdef for (self: VerifyNitniCallbacksPhase, APropdef) */
void nitc__ffi___VerifyNitniCallbacksPhase___nitc__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : nullable AExternCodeBlock */;
val* var4 /* : nullable AExternCodeBlock */;
val* var_code_block /* var code_block: nullable AExternCodeBlock */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable FFILanguage */;
val* var13 /* : nullable FFILanguage */;
val* var_lang /* var lang: nullable FFILanguage */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other17 /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : ForeignCallbackSet */;
val* var21 /* : Set[NitniCallback] */;
val* var_ /* var : Set[NitniCallback] */;
val* var22 /* : Iterator[nullable Object] */;
val* var_23 /* var : Iterator[NitniCallback] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_callback /* var callback: NitniCallback */;
val* var26 /* : nullable MPropDef */;
val* var28 /* : nullable MPropDef */;
val* var29 /* : MClassDef */;
val* var31 /* : MClassDef */;
val* var32 /* : MModule */;
val* var34 /* : MModule */;
val* var35 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var37 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var_map /* var map: HashMap[FFILanguage, Set[NitniCallback]] */;
val* var38 /* : RemovableCollection[nullable Object] */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : HashSet[NitniCallback] */;
val* var42 /* : nullable Object */;
var_npropdef = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__ffi___VerifyNitniCallbacksPhase___nitc__phase__Phase__process_npropdef]))(self, p0); /* process_npropdef on <self:VerifyNitniCallbacksPhase>*/
}
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var = 0;
} else {
var = var_npropdef->type->type_table[cltype] == idtype;
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var4 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <var_npropdef:APropdef(AMethPropdef)> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_code_block = var2;
if (var_code_block == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_code_block,((val*)NULL)) on <var_code_block:nullable AExternCodeBlock> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_code_block,var_other) on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var10 = var_code_block == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
goto RET_LABEL;
} else {
}
{
{ /* Inline light_ffi_base#AExternCodeBlock#language (var_code_block) on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var13 = var_code_block->attrs[COLOR_nitc__light_ffi_base__AExternCodeBlock___language].val; /* _language on <var_code_block:nullable AExternCodeBlock(AExternCodeBlock)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_lang = var11;
if (var_lang == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_lang,((val*)NULL)) on <var_lang:nullable FFILanguage> */
var_other17 = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_lang->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_lang, var_other17); /* == on <var_lang:nullable FFILanguage(FFILanguage)>*/
}
var19 = !var18;
var15 = var19;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (unlikely(!var14)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi, 90);
fatal_exit(1);
}
{
var20 = nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(var_npropdef);
}
{
var21 = nitc___nitc__ForeignCallbackSet___all(var20);
}
var_ = var21;
{
var22 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[NitniCallback]>*/
}
var_23 = var22;
for(;;) {
{
var24 = ((short int(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_23); /* is_ok on <var_23:Iterator[NitniCallback]>*/
}
if (var24){
} else {
goto BREAK_label;
}
{
var25 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_23); /* item on <var_23:Iterator[NitniCallback]>*/
}
var_callback = var25;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var28 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (var26 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi, 94);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var26) on <var26:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var31 = var26->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var26:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var29) on <var29:MClassDef> */
var34 = var29->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var29:MClassDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline ffi_base#MModule#ffi_callbacks (var32) on <var32:MModule> */
var37 = var32->attrs[COLOR_nitc__ffi_base__MModule___ffi_callbacks].val; /* _ffi_callbacks on <var32:MModule> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi_base, 28);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_map = var35;
{
var38 = core___core__HashMap___core__abstract_collection__MapRead__keys(var_map);
}
{
var39 = ((short int(*)(val* self, val* p0))((((long)var38&3)?class_info[((long)var38&3)]:var38->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var38, var_lang); /* has on <var38:RemovableCollection[nullable Object](RemovableCollection[FFILanguage])>*/
}
var40 = !var39;
if (var40){
var41 = NEW_core__HashSet(&type_core__HashSet__nitc__NitniCallback);
{
core___core__HashSet___core__kernel__Object__init(var41); /* Direct call hash_collection#HashSet#init on <var41:HashSet[NitniCallback]>*/
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var_lang, var41); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[FFILanguage, Set[NitniCallback]]>*/
}
} else {
}
{
var42 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_map, var_lang);
}
{
((void(*)(val* self, val* p0))((((long)var42&3)?class_info[((long)var42&3)]:var42->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var42, var_callback); /* add on <var42:nullable Object(Set[NitniCallback])>*/
}
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_23); /* next on <var_23:Iterator[NitniCallback]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_23); /* finish on <var_23:Iterator[NitniCallback]>*/
}
RET_LABEL:;
}
