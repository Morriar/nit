#include "nitc__c.sep.0.h"
/* method c#CLanguage#compile_callback for (self: CLanguage, NitniCallback, MModule, MModule, CCompilationUnit) */
void nitc__c___CLanguage___nitc__ffi_base__FFILanguage__compile_callback(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_callback /* var callback: NitniCallback */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var_ecc /* var ecc: CCompilationUnit */;
var_callback = p0;
var_mmodule = p1;
var_mainmodule = p2;
var_ecc = p3;
{
((void(*)(val* self, val* p0, val* p1))((((long)var_callback&3)?class_info[((long)var_callback&3)]:var_callback->class)->vft[COLOR_nitc__c__NitniCallback__compile_callback_to_c]))(var_callback, var_mainmodule, var_ecc); /* compile_callback_to_c on <var_callback:NitniCallback>*/
}
RET_LABEL:;
}
/* method c#NitniCallback#compile_callback_to_c for (self: NitniCallback, MModule, CCompilationUnit) */
void nitc__c___NitniCallback___compile_callback_to_c(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_ffi_ccu /* var ffi_ccu: CCompilationUnit */;
var_mmodule = p0;
var_ffi_ccu = p1;
RET_LABEL:;
}
/* method c#MExplicitCall#compile_callback_to_c for (self: MExplicitCall, MModule, CCompilationUnit) */
void nitc__c___MExplicitCall___NitniCallback__compile_callback_to_c(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_ffi_ccu /* var ffi_ccu: CCompilationUnit */;
val* var /* : MProperty */;
val* var2 /* : MProperty */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mproperty /* var mproperty: MMethod */;
val* var4 /* : MClassType */;
val* var6 /* : MClassType */;
val* var7 /* : Sys */;
val* var8 /* : SignatureLength */;
val* var9 /* : String */;
val* var_full_cname /* var full_cname: String */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
val* var13 /* : Sys */;
val* var14 /* : SignatureLength */;
val* var15 /* : String */;
val* var_friendly_cname /* var friendly_cname: String */;
val* var16 /* : Template */;
val* var18 /* : Template */;
val* var19 /* : NativeArray[String] */;
static val* varonce;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : String */;
var_mmodule = p0;
var_ffi_ccu = p1;
{
{ /* Inline nitni_callbacks#MExplicitCall#mproperty (self) on <self:MExplicitCall> */
var2 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___mproperty].val; /* _mproperty on <self:MExplicitCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 170);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var->type->table_size) {
var3 = 0;
} else {
var3 = var->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethod", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c, 37);
fatal_exit(1);
}
var_mproperty = var;
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var6 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = glob_sys;
{
var8 = nitc__nitni_utilities___core__Sys___long_signature(var7);
}
{
var9 = nitc__nitni_utilities___MMethod___build_cname(var_mproperty, var4, var_mmodule, ((val*)NULL), var8);
}
var_full_cname = var9;
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var12 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = glob_sys;
{
var14 = nitc__nitni_utilities___core__Sys___short_signature(var13);
}
{
var15 = nitc__nitni_utilities___MMethod___build_cname(var_mproperty, var10, var_mmodule, ((val*)NULL), var14);
}
var_friendly_cname = var15;
{
{ /* Inline c_tools#CCompilationUnit#body_decl (var_ffi_ccu) on <var_ffi_ccu:CCompilationUnit> */
var18 = var_ffi_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ffi_ccu:CCompilationUnit> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var19 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "#define ";
var23 = core__abstract_text___CString___to_s_full(var22, 8l, 8l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var19)->values[0]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = " ";
var27 = core__abstract_text___CString___to_s_full(var26, 1l, 1l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var19)->values[2]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "\n";
var31 = core__abstract_text___CString___to_s_full(var30, 1l, 1l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var19)->values[4]=var29;
} else {
var19 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var19)->values[1]=var_friendly_cname;
((struct instance_core__NativeArray*)var19)->values[3]=var_full_cname;
{
var32 = ((val*(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var19); /* native_to_s on <var19:NativeArray[String]>*/
}
varonce = var19;
{
template___template__Template___add(var16, var32); /* Direct call template#Template#add on <var16:Template>*/
}
RET_LABEL:;
}
