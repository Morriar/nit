#include "nitc__app_annotations.sep.0.h"
/* method app_annotations#AppProject#name for (self: AppProject): String */
val* nitc___nitc__AppProject___name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : String */;
val* var11 /* : String */;
var1 = self->attrs[COLOR_nitc__app_annotations__AppProject___name].val != NULL; /* _name on <self:AppProject> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__app_annotations__AppProject___name].val; /* _name on <self:AppProject> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 26);
fatal_exit(1);
}
} else {
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AppProject> */
var5 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AppProject> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline mmodule#MModule#first_real_mmodule (var3) on <var3:MModule> */
var8 = var3->attrs[COLOR_nitc__mmodule__MModule___first_real_mmodule].val; /* _first_real_mmodule on <var3:MModule> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first_real_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 254);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var6) on <var6:MModule> */
var11 = var6->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var6:MModule> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
self->attrs[COLOR_nitc__app_annotations__AppProject___name].val = var9; /* _name on <self:AppProject> */
var2 = var9;
}
var = var2;
RET_LABEL:;
return var;
}
/* method app_annotations#AppProject#name= for (self: AppProject, String) */
void nitc___nitc__AppProject___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__app_annotations__AppProject___name].val = p0; /* _name on <self:AppProject> */
RET_LABEL:;
}
/* method app_annotations#AppProject#short_name for (self: AppProject): String */
val* nitc___nitc__AppProject___short_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var6 /* : String */;
val* var8 /* : String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : String */;
var1 = self->attrs[COLOR_nitc__app_annotations__AppProject___short_name].val != NULL; /* _short_name on <self:AppProject> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__app_annotations__AppProject___short_name].val; /* _short_name on <self:AppProject> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _short_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 29);
fatal_exit(1);
}
} else {
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AppProject> */
var5 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AppProject> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var3) on <var3:MModule> */
var8 = var3->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var3:MModule> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "-";
var11 = core__abstract_text___CString___to_s_full(var10, 1l, 1l);
var9 = var11;
varonce = var9;
}
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "_";
var15 = core__abstract_text___CString___to_s_full(var14, 1l, 1l);
var13 = var15;
varonce12 = var13;
}
{
var16 = core__string_search___Text___replace(var6, var9, var13);
}
self->attrs[COLOR_nitc__app_annotations__AppProject___short_name].val = var16; /* _short_name on <self:AppProject> */
var2 = var16;
}
var = var2;
RET_LABEL:;
return var;
}
/* method app_annotations#AppProject#namespace for (self: AppProject): String */
val* nitc___nitc__AppProject___namespace(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var9 /* : String */;
var1 = self->attrs[COLOR_nitc__app_annotations__AppProject___namespace].val != NULL; /* _namespace on <self:AppProject> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__app_annotations__AppProject___namespace].val; /* _namespace on <self:AppProject> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _namespace");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 32);
fatal_exit(1);
}
} else {
if (unlikely(varonce==NULL)) {
var3 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "org.nitlanguage.";
var7 = core__abstract_text___CString___to_s_full(var6, 16l, 16l);
var5 = var7;
varonce4 = var5;
}
((struct instance_core__NativeArray*)var3)->values[0]=var5;
} else {
var3 = varonce;
varonce = NULL;
}
{
var8 = nitc___nitc__AppProject___short_name(self);
}
((struct instance_core__NativeArray*)var3)->values[1]=var8;
{
var9 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
self->attrs[COLOR_nitc__app_annotations__AppProject___namespace].val = var9; /* _namespace on <self:AppProject> */
var2 = var9;
}
var = var2;
RET_LABEL:;
return var;
}
/* method app_annotations#AppProject#namespace= for (self: AppProject, String) */
void nitc___nitc__AppProject___namespace_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__app_annotations__AppProject___namespace].val = p0; /* _namespace on <self:AppProject> */
RET_LABEL:;
}
/* method app_annotations#AppProject#version for (self: AppProject): String */
val* nitc___nitc__AppProject___version(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__app_annotations__AppProject___version].val; /* _version on <self:AppProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 35);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method app_annotations#AppProject#version= for (self: AppProject, String) */
void nitc___nitc__AppProject___version_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__app_annotations__AppProject___version].val = p0; /* _version on <self:AppProject> */
RET_LABEL:;
}
/* method app_annotations#AppProject#version_code for (self: AppProject): Int */
long nitc___nitc__AppProject___version_code(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var5 /* : Tm */;
val* var6 /* : Tm */;
val* var_local_time /* var local_time: Tm */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : String */;
const char* var_class_name;
val* var_local_time_s /* var local_time_s: String */;
long var12 /* : Int */;
var1 = self->attrs[COLOR_nitc__app_annotations__AppProject__lazy_32d_version_code].s; /* lazy _version_code on <self:AppProject> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__app_annotations__AppProject___version_code].l; /* _version_code on <self:AppProject> */
} else {
{
var5 = NEW_core__Tm(&type_core__Tm);
{
var6 = core___core__Tm___localtime(var5);
}
var_local_time = var6;
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "%y%m%d%H%M";
var9 = core__abstract_text___CString___to_s_full(var8, 10l, 10l);
var7 = var9;
varonce = var7;
}
{
{ /* Inline time#Tm#strftime (var_local_time,var7) on <var_local_time:Tm> */
var_class_name = var_local_time == NULL ? "null" : var_local_time->type->name;
PRINT_ERROR("Runtime error: uncompiled method `%s` called on `%s`. NOT YET IMPLEMENTED", "strftime", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__time, 142);
fatal_exit(1);
RET_LABEL11:(void)0;
}
}
var_local_time_s = var10;
{
var12 = core__fixed_ints_text___Text___to_i(var_local_time_s);
}
var3 = var12;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__app_annotations__AppProject___version_code].l = var3; /* _version_code on <self:AppProject> */
var2 = var3;
self->attrs[COLOR_nitc__app_annotations__AppProject__lazy_32d_version_code].s = 1; /* lazy _version_code on <self:AppProject> */
}
var = var2;
RET_LABEL:;
return var;
}
/* method app_annotations#AppProject#files for (self: AppProject): Array[String] */
val* nitc___nitc__AppProject___files(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__app_annotations__AppProject___files].val; /* _files on <self:AppProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 47);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method app_annotations#AppProject#modelbuilder for (self: AppProject): ModelBuilder */
val* nitc___nitc__AppProject___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AppProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method app_annotations#AppProject#modelbuilder= for (self: AppProject, ModelBuilder) */
void nitc___nitc__AppProject___modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val = p0; /* _modelbuilder on <self:AppProject> */
RET_LABEL:;
}
/* method app_annotations#AppProject#mainmodule for (self: AppProject): MModule */
val* nitc___nitc__AppProject___mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AppProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method app_annotations#AppProject#mainmodule= for (self: AppProject, MModule) */
void nitc___nitc__AppProject___mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val = p0; /* _mainmodule on <self:AppProject> */
RET_LABEL:;
}
/* method app_annotations#AppProject#init for (self: AppProject) */
void nitc___nitc__AppProject___core__kernel__Object__init(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : nullable AAnnotation */;
val* var_annot /* var annot: nullable AAnnotation */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : ModelBuilder */;
val* var17 /* : ModelBuilder */;
val* var18 /* : nullable String */;
val* var_val /* var val: nullable String */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : ModelBuilder */;
val* var26 /* : ModelBuilder */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : MModule */;
val* var33 /* : MModule */;
val* var34 /* : nullable AAnnotation */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : ModelBuilder */;
val* var42 /* : ModelBuilder */;
val* var43 /* : String */;
val* var45 /* : ModelBuilder */;
val* var47 /* : ModelBuilder */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
val* var52 /* : MModule */;
val* var54 /* : MModule */;
val* var55 /* : nullable AAnnotation */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : ModelBuilder */;
val* var63 /* : ModelBuilder */;
val* var64 /* : nullable String */;
val* var_val65 /* var val: nullable String */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : ModelBuilder */;
val* var73 /* : ModelBuilder */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
val* var78 /* : MModule */;
val* var80 /* : MModule */;
val* var81 /* : Array[AAnnotation] */;
val* var_annots /* var annots: Array[AAnnotation] */;
val* var_ /* var : Array[AAnnotation] */;
val* var82 /* : IndexedIterator[nullable Object] */;
val* var_83 /* var : IndexedIterator[AAnnotation] */;
short int var84 /* : Bool */;
val* var85 /* : nullable Object */;
val* var_a /* var a: AAnnotation */;
val* var86 /* : Array[String] */;
val* var88 /* : Array[String] */;
val* var89 /* : ModelBuilder */;
val* var91 /* : ModelBuilder */;
val* var92 /* : Array[String] */;
val* var93 /* : ModelBuilder */;
val* var95 /* : ModelBuilder */;
val* var96 /* : ToolContext */;
val* var98 /* : ToolContext */;
short int var99 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__AppProject___core__kernel__Object__init]))(self); /* init on <self:AppProject>*/
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AppProject> */
var2 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AppProject> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "app_name";
var5 = core__abstract_text___CString___to_s_full(var4, 8l, 8l);
var3 = var5;
varonce = var3;
}
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AppProject> */
var8 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AppProject> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nitc__annotation___ModelBuilder___lookup_annotation_on_modules(var, var3, var6);
}
var_annot = var9;
if (var_annot == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_annot,((val*)NULL)) on <var_annot:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_annot->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annot, var_other); /* == on <var_annot:nullable AAnnotation(AAnnotation)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AppProject> */
var17 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AppProject> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc__annotation___AAnnotation___arg_as_string(var_annot, var15);
}
var_val = var18;
if (var_val == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val,((val*)NULL)) on <var_val:nullable String> */
var_other = ((val*)NULL);
{
var22 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var_other); /* == on <var_val:nullable String(String)>*/
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
nitc___nitc__AppProject___name_61d(self, var_val); /* Direct call app_annotations#AppProject#name= on <self:AppProject>*/
}
} else {
}
} else {
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AppProject> */
var26 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AppProject> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "app_version";
var30 = core__abstract_text___CString___to_s_full(var29, 11l, 11l);
var28 = var30;
varonce27 = var28;
}
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AppProject> */
var33 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AppProject> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = nitc__annotation___ModelBuilder___lookup_annotation_on_modules(var24, var28, var31);
}
var_annot = var34;
if (var_annot == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_annot,((val*)NULL)) on <var_annot:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var_annot->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annot, var_other); /* == on <var_annot:nullable AAnnotation(AAnnotation)>*/
}
var39 = !var38;
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AppProject> */
var42 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AppProject> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = nitc__app_annotations___AAnnotation___as_version(var_annot, var40);
}
{
{ /* Inline app_annotations#AppProject#version= (self,var43) on <self:AppProject> */
self->attrs[COLOR_nitc__app_annotations__AppProject___version].val = var43; /* _version on <self:AppProject> */
RET_LABEL44:(void)0;
}
}
} else {
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AppProject> */
var47 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AppProject> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "app_namespace";
var51 = core__abstract_text___CString___to_s_full(var50, 13l, 13l);
var49 = var51;
varonce48 = var49;
}
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AppProject> */
var54 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AppProject> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = nitc__annotation___ModelBuilder___lookup_annotation_on_modules(var45, var49, var52);
}
var_annot = var55;
if (var_annot == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_annot,((val*)NULL)) on <var_annot:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var59 = ((short int(*)(val* self, val* p0))(var_annot->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annot, var_other); /* == on <var_annot:nullable AAnnotation(AAnnotation)>*/
}
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AppProject> */
var63 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AppProject> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = nitc__annotation___AAnnotation___arg_as_string(var_annot, var61);
}
var_val65 = var64;
if (var_val65 == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val65,((val*)NULL)) on <var_val65:nullable String> */
var_other = ((val*)NULL);
{
var69 = ((short int(*)(val* self, val* p0))(var_val65->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val65, var_other); /* == on <var_val65:nullable String(String)>*/
}
var70 = !var69;
var67 = var70;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (var66){
{
nitc___nitc__AppProject___namespace_61d(self, var_val65); /* Direct call app_annotations#AppProject#namespace= on <self:AppProject>*/
}
} else {
}
} else {
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AppProject> */
var73 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AppProject> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "app_files";
var77 = core__abstract_text___CString___to_s_full(var76, 9l, 9l);
var75 = var77;
varonce74 = var75;
}
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AppProject> */
var80 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AppProject> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = nitc__annotation___ModelBuilder___collect_annotations_on_modules(var71, var75, var78);
}
var_annots = var81;
var_ = var_annots;
{
var82 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_83 = var82;
for(;;) {
{
var84 = ((short int(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_83); /* is_ok on <var_83:IndexedIterator[AAnnotation]>*/
}
if (var84){
} else {
goto BREAK_label;
}
{
var85 = ((val*(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_83); /* item on <var_83:IndexedIterator[AAnnotation]>*/
}
var_a = var85;
{
{ /* Inline app_annotations#AppProject#files (self) on <self:AppProject> */
var88 = self->attrs[COLOR_nitc__app_annotations__AppProject___files].val; /* _files on <self:AppProject> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 47);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AppProject> */
var91 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AppProject> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = nitc__app_annotations___AAnnotation___as_relative_paths(var_a, var89);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var86, var92); /* Direct call array#Array#add_all on <var86:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_83); /* next on <var_83:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_83); /* finish on <var_83:IndexedIterator[AAnnotation]>*/
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AppProject> */
var95 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AppProject> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var93) on <var93:ModelBuilder> */
var98 = var93->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var93:ModelBuilder> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
var99 = nitc___nitc__ToolContext___check_errors(var96);
}
RET_LABEL:;
}
/* method app_annotations#AppProject#to_s for (self: AppProject): String */
val* nitc___nitc__AppProject___core__abstract_text__Object__to_s(val* self) {
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
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "name: ";
var5 = core__abstract_text___CString___to_s_full(var4, 6l, 6l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "\nnamespace: ";
var9 = core__abstract_text___CString___to_s_full(var8, 12l, 12l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "\nversion: ";
var13 = core__abstract_text___CString___to_s_full(var12, 10l, 10l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[4]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var14 = nitc___nitc__AppProject___name(self);
}
((struct instance_core__NativeArray*)var1)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__app_annotations__AppProject__namespace]))(self); /* namespace on <self:AppProject>*/
}
((struct instance_core__NativeArray*)var1)->values[3]=var15;
{
{ /* Inline app_annotations#AppProject#version (self) on <self:AppProject> */
var18 = self->attrs[COLOR_nitc__app_annotations__AppProject___version].val; /* _version on <self:AppProject> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 35);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
((struct instance_core__NativeArray*)var1)->values[5]=var16;
{
var19 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method app_annotations#AAnnotation#as_version for (self: AAnnotation, ModelBuilder): String */
val* nitc__app_annotations___AAnnotation___as_version(val* self, val* p0) {
val* var /* : String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : Array[Object] */;
val* var_version_fields /* var version_fields: Array[Object] */;
val* var2 /* : ANodes[AExpr] */;
val* var4 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
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
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var_ /* var : ANodes[AExpr] */;
val* var25 /* : Iterator[ANode] */;
val* var_26 /* var : Iterator[AExpr] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_arg /* var arg: AExpr */;
val* var29 /* : nullable Int */;
val* var_value /* var value: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var36 /* : nullable String */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : nullable String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : ProcessReader */;
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
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : Array[Text] */;
val* var67 /* : NativeArray[Text] */;
val* var_proc /* var proc: ProcessReader */;
long var68 /* : Int */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : String */;
val* var_lines /* var lines: String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : Array[String] */;
val* var91 /* : nullable Object */;
val* var_revision /* var revision: String */;
val* var92 /* : ProcessReader */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : CString */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : Array[Text] */;
val* var110 /* : NativeArray[Text] */;
long var111 /* : Int */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var_dirty /* var dirty: Bool */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : CString */;
val* var119 /* : String */;
val* var120 /* : Text */;
val* var122 /* : NativeArray[String] */;
static val* varonce121;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : CString */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
val* var131 /* : String */;
val* var132 /* : String */;
val* var_format_error /* var format_error: String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
val* var141 /* : String */;
var_modelbuilder = p0;
var1 = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[Object]>*/
}
var_version_fields = var1;
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var4 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_args = var2;
{
var5 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_args);
}
{
{ /* Inline kernel#Int#< (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var9 = var5 < 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Syntax Error: `";
var14 = core__abstract_text___CString___to_s_full(var13, 15l, 15l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "` expects at least one argument.";
var18 = core__abstract_text___CString___to_s_full(var17, 32l, 32l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
{
var19 = nitc___nitc__AAnnotation___name(self);
}
((struct instance_core__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var20); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "";
var24 = core__abstract_text___CString___to_s_full(var23, 0l, 0l);
var22 = var24;
varonce21 = var22;
}
var = var22;
goto RET_LABEL;
} else {
var_ = var_args;
{
var25 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_26 = var25;
for(;;) {
{
var27 = ((short int(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_26); /* is_ok on <var_26:Iterator[AExpr]>*/
}
if (var27){
} else {
goto BREAK_label;
}
{
var28 = ((val*(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_26); /* item on <var_26:Iterator[AExpr]>*/
}
var_arg = var28;
{
var29 = nitc__literal___AExpr___as_int(var_arg);
}
var_value = var29;
if (var_value == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Int#!= (var_value,((val*)NULL)) on <var_value:nullable Object(nullable Int)> */
var33 = 0; /* incompatible types Int vs. null; cannot be NULL */
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_version_fields, var_value); /* Direct call array#Array#add on <var_version_fields:Array[Object]>*/
}
goto BREAK_label35;
} else {
}
{
var36 = nitc__literal___AExpr___as_string(var_arg);
}
var_value = var36;
if (var_value == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_value,((val*)NULL)) on <var_value:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var_value->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_value, var_other); /* == on <var_value:nullable String(String)>*/
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
core___core__Array___core__abstract_collection__SimpleCollection__add(var_version_fields, var_value); /* Direct call array#Array#add on <var_version_fields:Array[Object]>*/
}
} else {
}
{
var42 = nitc__parser_work___AExpr___as_id(var_arg);
}
var_value = var42;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "git_revision";
var46 = core__abstract_text___CString___to_s_full(var45, 12l, 12l);
var44 = var46;
varonce43 = var44;
}
if (var_value == NULL) {
var47 = 0; /* <var44:String> cannot be null */
} else {
var48 = ((short int(*)(val* self, val* p0))(var_value->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_value, var44); /* == on <var_value:nullable Object(nullable String)>*/
var47 = var48;
}
if (var47){
var49 = NEW_core__ProcessReader(&type_core__ProcessReader);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "git";
var53 = core__abstract_text___CString___to_s_full(var52, 3l, 3l);
var51 = var53;
varonce50 = var51;
}
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "rev-parse";
var57 = core__abstract_text___CString___to_s_full(var56, 9l, 9l);
var55 = var57;
varonce54 = var55;
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "--short";
var61 = core__abstract_text___CString___to_s_full(var60, 7l, 7l);
var59 = var61;
varonce58 = var59;
}
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "HEAD";
var65 = core__abstract_text___CString___to_s_full(var64, 4l, 4l);
var63 = var65;
varonce62 = var63;
}
var66 = NEW_core__Array(&type_core__Array__core__Text);
{ /* var66 = array_instance Array[Text] */
var67 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__Text);
((struct instance_core__NativeArray*)var67)->values[0] = (val*) var55;
((struct instance_core__NativeArray*)var67)->values[1] = (val*) var59;
((struct instance_core__NativeArray*)var67)->values[2] = (val*) var63;
{
((void(*)(val* self, val* p0, long p1))(var66->class->vft[COLOR_core__array__Array__with_native]))(var66, var67, 3l); /* with_native on <var66:Array[Text]>*/
}
}
{
core___core__Process___init(var49, var51, var66); /* Direct call exec#Process#init on <var49:ProcessReader>*/
}
var_proc = var49;
{
core___core__Process___wait(var_proc); /* Direct call exec#Process#wait on <var_proc:ProcessReader>*/
}
{
var68 = core___core__Process___status(var_proc);
}
{
{ /* Inline kernel#Int#!= (var68,0l) on <var68:Int> */
var71 = var68 == 0l;
var72 = !var71;
var69 = var72;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
if (var69){
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "0";
var76 = core__abstract_text___CString___to_s_full(var75, 1l, 1l);
var74 = var76;
varonce73 = var74;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_version_fields, var74); /* Direct call array#Array#add on <var_version_fields:Array[Object]>*/
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "git_revision";
var80 = core__abstract_text___CString___to_s_full(var79, 12l, 12l);
var78 = var80;
varonce77 = var78;
}
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "Warning: `git_revision` used outside of a git repository or git binaries not available";
var84 = core__abstract_text___CString___to_s_full(var83, 86l, 86l);
var82 = var84;
varonce81 = var82;
}
{
nitc___nitc__ModelBuilder___warning(var_modelbuilder, self, var78, var82); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label35;
} else {
}
{
var85 = core___core__Reader___read_all(var_proc);
}
var_lines = var85;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "\n";
var89 = core__abstract_text___CString___to_s_full(var88, 1l, 1l);
var87 = var89;
varonce86 = var87;
}
{
var90 = core__string_search___Text___split(var_lines, var87);
}
{
var91 = core___core__SequenceRead___Collection__first(var90);
}
var_revision = var91;
var92 = NEW_core__ProcessReader(&type_core__ProcessReader);
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "git";
var96 = core__abstract_text___CString___to_s_full(var95, 3l, 3l);
var94 = var96;
varonce93 = var94;
}
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "diff-index";
var100 = core__abstract_text___CString___to_s_full(var99, 10l, 10l);
var98 = var100;
varonce97 = var98;
}
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "--quiet";
var104 = core__abstract_text___CString___to_s_full(var103, 7l, 7l);
var102 = var104;
varonce101 = var102;
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "HEAD";
var108 = core__abstract_text___CString___to_s_full(var107, 4l, 4l);
var106 = var108;
varonce105 = var106;
}
var109 = NEW_core__Array(&type_core__Array__core__Text);
{ /* var109 = array_instance Array[Text] */
var110 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__Text);
((struct instance_core__NativeArray*)var110)->values[0] = (val*) var98;
((struct instance_core__NativeArray*)var110)->values[1] = (val*) var102;
((struct instance_core__NativeArray*)var110)->values[2] = (val*) var106;
{
((void(*)(val* self, val* p0, long p1))(var109->class->vft[COLOR_core__array__Array__with_native]))(var109, var110, 3l); /* with_native on <var109:Array[Text]>*/
}
}
{
core___core__Process___init(var92, var94, var109); /* Direct call exec#Process#init on <var92:ProcessReader>*/
}
var_proc = var92;
{
core___core__Process___wait(var_proc); /* Direct call exec#Process#wait on <var_proc:ProcessReader>*/
}
{
var111 = core___core__Process___status(var_proc);
}
{
{ /* Inline kernel#Int#!= (var111,0l) on <var111:Int> */
var114 = var111 == 0l;
var115 = !var114;
var112 = var115;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var_dirty = var112;
if (var_dirty){
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = ".d";
var119 = core__abstract_text___CString___to_s_full(var118, 2l, 2l);
var117 = var119;
varonce116 = var117;
}
{
var120 = ((val*(*)(val* self, val* p0))(var_revision->class->vft[COLOR_core__abstract_text__Text___43d]))(var_revision, var117); /* + on <var_revision:String>*/
}
var_revision = var120;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_version_fields, var_revision); /* Direct call array#Array#add on <var_version_fields:Array[Object]>*/
}
goto BREAK_label35;
} else {
}
if (unlikely(varonce121==NULL)) {
var122 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "Syntax Error: `";
var126 = core__abstract_text___CString___to_s_full(var125, 15l, 15l);
var124 = var126;
varonce123 = var124;
}
((struct instance_core__NativeArray*)var122)->values[0]=var124;
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "` expects its arguments to be of type Int or a call to `git_revision`.";
var130 = core__abstract_text___CString___to_s_full(var129, 70l, 70l);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var122)->values[2]=var128;
} else {
var122 = varonce121;
varonce121 = NULL;
}
{
var131 = nitc___nitc__AAnnotation___name(self);
}
((struct instance_core__NativeArray*)var122)->values[1]=var131;
{
var132 = ((val*(*)(val* self))(var122->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var122); /* native_to_s on <var122:NativeArray[String]>*/
}
varonce121 = var122;
var_format_error = var132;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var_format_error); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "";
var136 = core__abstract_text___CString___to_s_full(var135, 0l, 0l);
var134 = var136;
varonce133 = var134;
}
var = var134;
goto RET_LABEL;
BREAK_label35: (void)0;
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_26); /* next on <var_26:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_26); /* finish on <var_26:Iterator[AExpr]>*/
}
}
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = ".";
var140 = core__abstract_text___CString___to_s_full(var139, 1l, 1l);
var138 = var140;
varonce137 = var138;
}
{
var141 = core__abstract_text___Collection___join(var_version_fields, var138, ((val*)NULL));
}
var = var141;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method app_annotations#AAnnotation#as_relative_paths for (self: AAnnotation, ModelBuilder): Array[String] */
val* nitc__app_annotations___AAnnotation___as_relative_paths(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : Array[String] */;
val* var_paths /* var paths: Array[String] */;
val* var2 /* : Location */;
val* var4 /* : Location */;
val* var5 /* : nullable SourceFile */;
val* var7 /* : nullable SourceFile */;
val* var_file /* var file: nullable SourceFile */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : ANodes[AExpr] */;
val* var16 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
short int var17 /* : Bool */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var_ /* var : ANodes[AExpr] */;
val* var22 /* : Iterator[ANode] */;
val* var_23 /* var : Iterator[AExpr] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_arg /* var arg: AExpr */;
val* var26 /* : nullable String */;
val* var_val /* var val: nullable String */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other30 /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : String */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
static val* varonce;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
var_modelbuilder = p0;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
var_paths = var1;
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAnnotation> */
var4 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAnnotation> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline location#Location#file (var2) on <var2:Location> */
var7 = var2->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var2:Location> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_file = var5;
if (var_file == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,((val*)NULL)) on <var_file:nullable SourceFile> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other) on <var_file:nullable SourceFile(SourceFile)> */
var13 = var_file == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var = var_paths;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var16 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_args = var14;
{
var17 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var_args);
}
if (var17){
{
{ /* Inline location#SourceFile#filename (var_file) on <var_file:nullable SourceFile(SourceFile)> */
var20 = var_file->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var_file:nullable SourceFile(SourceFile)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core__file___String___dirname(var18);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_paths, var21); /* Direct call array#Array#add on <var_paths:Array[String]>*/
}
} else {
var_ = var_args;
{
var22 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_23 = var22;
for(;;) {
{
var24 = ((short int(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_23); /* is_ok on <var_23:Iterator[AExpr]>*/
}
if (var24){
} else {
goto BREAK_label;
}
{
var25 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_23); /* item on <var_23:Iterator[AExpr]>*/
}
var_arg = var25;
{
var26 = nitc__literal___AExpr___as_string(var_arg);
}
var_val = var26;
if (var_val == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val,((val*)NULL)) on <var_val:nullable String> */
var_other30 = ((val*)NULL);
{
var31 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var_other30); /* == on <var_val:nullable String(String)>*/
}
var32 = !var31;
var28 = var32;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
{ /* Inline location#SourceFile#filename (var_file) on <var_file:nullable SourceFile(SourceFile)> */
var35 = var_file->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var_file:nullable SourceFile(SourceFile)> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = core__file___String___dirname(var33);
}
{
var37 = core__file___String____47d(var36, var_val);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_paths, var37); /* Direct call array#Array#add on <var_paths:Array[String]>*/
}
} else {
if (likely(varonce!=NULL)) {
var38 = varonce;
} else {
var39 = "Syntax Error: `app_files` expects String literals as arguments.";
var40 = core__abstract_text___CString___to_s_full(var39, 63l, 63l);
var38 = var40;
varonce = var38;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_arg, var38); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
}
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_23); /* next on <var_23:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_23); /* finish on <var_23:Iterator[AExpr]>*/
}
}
var = var_paths;
goto RET_LABEL;
RET_LABEL:;
return var;
}
