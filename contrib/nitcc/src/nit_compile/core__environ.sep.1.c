#include "core__environ.sep.0.h"
/* method environ$String$environ for (self: String): String */
val* core__environ___String___environ(val* self) {
val* var /* : String */;
char* var1 /* : CString */;
char* var2 /* : CString */;
char* var_res /* var res: CString */;
static char* varonce;
static int varonce_guard;
char* var3 /* : CString */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Bool */;
char* var12 /* : CString */;
char* var13 /* : CString */;
char* var_nulstr /* var nulstr: CString */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__environ___CString___get_environ(var1);
var_res = var2;
if (likely(varonce_guard)) {
var3 = varonce;
} else {
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "";
var8 = (val*)(0l<<2|1);
var9 = (val*)(0l<<2|1);
var10 = (val*)((long)(0)<<2|3);
var11 = (val*)((long)(0)<<2|3);
var7 = core__flat___CString___to_s_unsafe(var6, var8, var9, var10, var11);
var5 = var7;
varonce4 = var5;
}
{
var12 = ((char*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var5); /* to_cstring on <var5:String>*/
}
var13 = core__environ___CString___get_environ(var12);
var3 = var13;
varonce = var3;
varonce_guard = 1;
}
var_nulstr = var3;
{
{ /* Inline native$CString$!= (var_res,var_nulstr) on <var_res:CString> */
var16 = var_res == var_nulstr;
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var18 = core__flat___CString___core__abstract_text__Object__to_s(var_res);
var = var18;
goto RET_LABEL;
} else {
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "";
var23 = (val*)(0l<<2|1);
var24 = (val*)(0l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
var = var20;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method environ$String$setenv for (self: String, String) */
void core__environ___String___setenv(val* self, val* p0) {
val* var_v /* var v: String */;
char* var /* : CString */;
char* var1 /* : CString */;
var_v = p0;
{
var = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
var1 = ((char*(*)(val* self))(var_v->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_v); /* to_cstring on <var_v:String>*/
}
core__environ___CString___setenv(var, var1); /* Direct call environ$CString$setenv on <var:CString>*/
RET_LABEL:;
}
/* method environ$String$program_is_in_path for (self: String): Bool */
short int core__environ___String___program_is_in_path(val* self) {
short int var /* : Bool */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : String */;
val* var_full_path /* var full_path: String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
val* var17 /* : Array[String] */;
val* var_paths /* var paths: Array[String] */;
val* var_ /* var : Array[String] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : IndexedIterator[String] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_path /* var path: String */;
short int var22 /* : Bool */;
val* var23 /* : String */;
short int var24 /* : Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "PATH";
var4 = (val*)(4l<<2|1);
var5 = (val*)(4l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
var8 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__environ__String__environ]))(var1); /* environ on <var1:String>*/
}
var_full_path = var8;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ":";
var13 = (val*)(1l<<2|1);
var14 = (val*)(1l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce9 = var10;
}
{
var17 = ((val*(*)(val* self, val* p0))(var_full_path->class->vft[COLOR_core__string_search__Text__split]))(var_full_path, var10); /* split on <var_full_path:String>*/
}
var_paths = var17;
var_ = var_paths;
{
var18 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
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
var_path = var21;
{
var22 = ((short int(*)(val* self))(var_path->class->vft[COLOR_core__file__Text__file_exists]))(var_path); /* file_exists on <var_path:String>*/
}
if (var22){
{
var23 = ((val*(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__file__String__join_path]))(var_path, self); /* join_path on <var_path:String>*/
}
{
var24 = ((short int(*)(val* self))(var23->class->vft[COLOR_core__file__Text__file_exists]))(var23); /* file_exists on <var23:String>*/
}
if (var24){
var = 1;
goto RET_LABEL;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:IndexedIterator[String]>*/
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method environ$CString$get_environ for (self: CString): CString */
char* core__environ___CString___get_environ(char* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = core__environ___CString_get_environ___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method environ$CString$setenv for (self: CString, CString) */
void core__environ___CString___setenv(char* self, char* p0) {
core__environ___CString_setenv___impl(self, p0);
RET_LABEL:;
}
/* method environ$Sys$init for (self: Sys) */
void core__environ___Sys___core__kernel__Object__init(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
val* var7 /* : String */;
val* var_x /* var x: String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__environ___Sys___core__kernel__Object__init]))(self); /* init on <self:Sys>*/
}
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "NIT_SRAND";
var3 = (val*)(9l<<2|1);
var4 = (val*)(9l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
var7 = ((val*(*)(val* self))(var->class->vft[COLOR_core__environ__String__environ]))(var); /* environ on <var:String>*/
}
var_x = var7;
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "";
var12 = (val*)(0l<<2|1);
var13 = (val*)(0l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce8 = var9;
}
{
var16 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_x, var9); /* != on <var_x:String>*/
}
if (var16){
{
var17 = ((long(*)(val* self))(var_x->class->vft[COLOR_core__abstract_text__Text__to_i]))(var_x); /* to_i on <var_x:String>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__math__Sys__srand_from]))(self, var17); /* srand_from on <self:Sys>*/
}
} else {
}
RET_LABEL:;
}
