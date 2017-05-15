#include "nitc__ios.sep.0.h"
/* method ios#ToolContext#platform_from_name for (self: ToolContext, String): nullable Platform */
val* nitc__ios___ToolContext___platform_from_name(val* self, val* p0) {
val* var /* : nullable Platform */;
val* var_name /* var name: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
val* var5 /* : IOSPlatform */;
val* var7 /* : nullable Platform */;
var_name = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "ios";
var3 = core__abstract_text___CString___to_s_full(var2, 3l, 3l);
var1 = var3;
varonce = var1;
}
{
var4 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var1); /* == on <var_name:String>*/
}
if (var4){
var5 = NEW_nitc__ios__IOSPlatform(&type_nitc__ios__IOSPlatform);
{
{ /* Inline kernel#Object#init (var5) on <var5:IOSPlatform> */
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__ios___ToolContext___platform_from_name]))(self, p0); /* platform_from_name on <self:ToolContext>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ios#IOSPlatform#supports_libunwind for (self: IOSPlatform): Bool */
short int nitc__ios___nitc__ios__IOSPlatform___nitc__platform__Platform__supports_libunwind(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ios#IOSPlatform#supports_libgc for (self: IOSPlatform): Bool */
short int nitc__ios___nitc__ios__IOSPlatform___nitc__platform__Platform__supports_libgc(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ios#IOSPlatform#toolchain for (self: IOSPlatform, ToolContext, AbstractCompiler): Toolchain */
val* nitc__ios___nitc__ios__IOSPlatform___nitc__abstract_compiler__Platform__toolchain(val* self, val* p0, val* p1) {
val* var /* : Toolchain */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : IOSToolchain */;
var_toolcontext = p0;
var_compiler = p1;
var1 = NEW_nitc__ios__IOSToolchain(&type_nitc__ios__IOSToolchain);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__Toolchain__toolcontext_61d]))(var1, var_toolcontext); /* toolcontext= on <var1:IOSToolchain>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__Toolchain__compiler_61d]))(var1, var_compiler); /* compiler= on <var1:IOSToolchain>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:IOSToolchain>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ios#IosProject#namespace for (self: IosProject): String */
val* nitc__ios___nitc__ios__IosProject___nitc__app_annotations__AppProject__namespace(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__ios___nitc__ios__IosProject___nitc__app_annotations__AppProject__namespace]))(self); /* namespace on <self:IosProject>*/
}
{
var2 = core___core__String___Text__to_camel_case(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ios#IOSToolchain#ios_project_root for (self: IOSToolchain): String */
val* nitc__ios___nitc__ios__IOSToolchain___ios_project_root(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__ios__IOSToolchain___ios_project_root].val; /* _ios_project_root on <self:IOSToolchain> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ios_project_root");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ios, 48);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ios#IOSToolchain#ios_project_root= for (self: IOSToolchain, String) */
void nitc__ios___nitc__ios__IOSToolchain___ios_project_root_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__ios__IOSToolchain___ios_project_root].val = p0; /* _ios_project_root on <self:IOSToolchain> */
RET_LABEL:;
}
/* method ios#IOSToolchain#app_project for (self: IOSToolchain): IosProject */
val* nitc__ios___nitc__ios__IOSToolchain___app_project(val* self) {
val* var /* : IosProject */;
short int var1 /* : Bool */;
val* var2 /* : IosProject */;
val* var3 /* : IosProject */;
val* var4 /* : AbstractCompiler */;
val* var6 /* : AbstractCompiler */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : AbstractCompiler */;
val* var12 /* : AbstractCompiler */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
var1 = self->attrs[COLOR_nitc__ios__IOSToolchain___app_project].val != NULL; /* _app_project on <self:IOSToolchain> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__ios__IOSToolchain___app_project].val; /* _app_project on <self:IOSToolchain> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _app_project");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ios, 51);
fatal_exit(1);
}
} else {
var3 = NEW_nitc__ios__IosProject(&type_nitc__ios__IosProject);
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:IOSToolchain> */
var6 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:IOSToolchain> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var4) on <var4:AbstractCompiler> */
var9 = var4->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var4:AbstractCompiler> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:IOSToolchain> */
var12 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:IOSToolchain> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var10) on <var10:AbstractCompiler> */
var15 = var10->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var10:AbstractCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__app_annotations__AppProject__modelbuilder_61d]))(var3, var7); /* modelbuilder= on <var3:IosProject>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__app_annotations__AppProject__mainmodule_61d]))(var3, var13); /* mainmodule= on <var3:IosProject>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:IosProject>*/
}
self->attrs[COLOR_nitc__ios__IOSToolchain___app_project].val = var3; /* _app_project on <self:IOSToolchain> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method ios#IOSToolchain#default_outname for (self: IOSToolchain): String */
val* nitc__ios___nitc__ios__IOSToolchain___nitc__abstract_compiler__MakefileToolchain__default_outname(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ".app";
var5 = core__abstract_text___CString___to_s_full(var4, 4l, 4l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__ios___nitc__ios__IOSToolchain___nitc__abstract_compiler__MakefileToolchain__default_outname]))(self); /* default_outname on <self:IOSToolchain>*/
}
((struct instance_core__NativeArray*)var1)->values[0]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ios#IOSToolchain#compile_dir for (self: IOSToolchain): String */
val* nitc__ios___nitc__ios__IOSToolchain___nitc__abstract_compiler__Toolchain__compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var7 /* : String */;
val* var9 /* : String */;
val* var10 /* : IosProject */;
val* var11 /* : String */;
val* var12 /* : String */;
{
var1 = nitc___nitc__Toolchain___root_compile_dir(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "ios";
var4 = core__abstract_text___CString___to_s_full(var3, 3l, 3l);
var2 = var4;
varonce = var2;
}
{
var5 = core__file___String____47d(var1, var2);
}
{
{ /* Inline ios#IOSToolchain#ios_project_root= (self,var5) on <self:IOSToolchain> */
self->attrs[COLOR_nitc__ios__IOSToolchain___ios_project_root].val = var5; /* _ios_project_root on <self:IOSToolchain> */
RET_LABEL6:(void)0;
}
}
{
{ /* Inline ios#IOSToolchain#ios_project_root (self) on <self:IOSToolchain> */
var9 = self->attrs[COLOR_nitc__ios__IOSToolchain___ios_project_root].val; /* _ios_project_root on <self:IOSToolchain> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ios_project_root");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ios, 48);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc__ios___nitc__ios__IOSToolchain___app_project(self);
}
{
var11 = nitc___nitc__AppProject___short_name(var10);
}
{
var12 = core__file___String____47d(var7, var11);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ios#IOSToolchain#write_files for (self: IOSToolchain, String, Array[String]) */
void nitc__ios___nitc__ios__IOSToolchain___nitc__abstract_compiler__MakefileToolchain__write_files(val* self, val* p0, val* p1) {
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : String */;
val* var2 /* : String */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var6 /* : String */;
val* var7 /* : nullable Error */;
val* var8 /* : nullable Error */;
var_compile_dir = p0;
var_cfiles = p1;
{
{ /* Inline ios#IOSToolchain#ios_project_root (self) on <self:IOSToolchain> */
var2 = self->attrs[COLOR_nitc__ios__IOSToolchain___ios_project_root].val; /* _ios_project_root on <self:IOSToolchain> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ios_project_root");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ios, 48);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core__file___Text___file_exists(var);
}
if (var3){
{
{ /* Inline ios#IOSToolchain#ios_project_root (self) on <self:IOSToolchain> */
var6 = self->attrs[COLOR_nitc__ios__IOSToolchain___ios_project_root].val; /* _ios_project_root on <self:IOSToolchain> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ios_project_root");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ios, 48);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core__file___String___rmdir(var4);
}
} else {
}
{
var8 = core__file___String___mkdir(var_compile_dir, ((val*)NULL));
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__ios___nitc__ios__IOSToolchain___nitc__abstract_compiler__MakefileToolchain__write_files]))(self, p0, p1); /* write_files on <self:IOSToolchain>*/
}
RET_LABEL:;
}
/* method ios#IOSToolchain#write_makefile for (self: IOSToolchain, String, Array[String]) */
void nitc__ios___nitc__ios__IOSToolchain___nitc__abstract_compiler__MakefileToolchain__write_makefile(val* self, val* p0, val* p1) {
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : IosProject */;
val* var1 /* : String */;
val* var_project_name /* var project_name: String */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Error */;
val* var5 /* : PlistTemplate */;
val* var6 /* : IosProject */;
val* var7 /* : String */;
val* var8 /* : IosProject */;
val* var9 /* : String */;
val* var10 /* : IosProject */;
val* var11 /* : String */;
val* var13 /* : String */;
val* var14 /* : IosProject */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var_plist /* var plist: PlistTemplate */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var_project_root /* var project_root: String */;
val* var25 /* : AbstractCompiler */;
val* var27 /* : AbstractCompiler */;
val* var28 /* : MModule */;
val* var30 /* : MModule */;
val* var31 /* : MModule */;
val* var33 /* : MModule */;
val* var34 /* : nullable MPackage */;
val* var_mpackage /* var mpackage: nullable MPackage */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : nullable MGroup */;
val* var42 /* : nullable MGroup */;
val* var_root /* var root: nullable MGroup */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : nullable String */;
val* var_filepath /* var filepath: nullable String */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var_app_files /* var app_files: Array[String] */;
val* var55 /* : IosProject */;
val* var56 /* : Array[String] */;
val* var58 /* : Array[String] */;
short int var_icons_found /* var icons_found: Bool */;
val* var_59 /* var : Array[String] */;
val* var60 /* : IndexedIterator[nullable Object] */;
val* var_61 /* var : IndexedIterator[String] */;
short int var62 /* : Bool */;
val* var63 /* : nullable Object */;
val* var_path /* var path: String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var_icon_dir /* var icon_dir: String */;
short int var74 /* : Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var_target_assets_dir /* var target_assets_dir: String */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : nullable Error */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var93 /* : ToolContext */;
val* var95 /* : ToolContext */;
val* var96 /* : Array[String] */;
val* var_97 /* var : Array[String] */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
val* var110 /* : String */;
val* var112 /* : String */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : Text */;
val* var_dir /* var dir: String */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
val* var121 /* : nullable Error */;
val* var122 /* : PbxprojectTemplate */;
val* var_pbx /* var pbx: PbxprojectTemplate */;
val* var_123 /* var : Array[String] */;
val* var124 /* : IndexedIterator[nullable Object] */;
val* var_125 /* var : IndexedIterator[String] */;
short int var126 /* : Bool */;
val* var128 /* : nullable Object */;
val* var_file /* var file: String */;
val* var129 /* : PbxFile */;
val* var130 /* : AbstractCompiler */;
val* var132 /* : AbstractCompiler */;
val* var133 /* : Array[ExternFile] */;
val* var135 /* : Array[ExternFile] */;
val* var_136 /* var : Array[ExternFile] */;
val* var137 /* : IndexedIterator[nullable Object] */;
val* var_138 /* var : IndexedIterator[ExternFile] */;
short int var139 /* : Bool */;
val* var141 /* : nullable Object */;
val* var_file142 /* var file: ExternFile */;
val* var143 /* : PbxFile */;
val* var144 /* : String */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var148 /* : LaunchScreenStoryboardTemplate */;
val* var_launch_screen_storyboard /* var launch_screen_storyboard: LaunchScreenStoryboardTemplate */;
val* var150 /* : IosProject */;
val* var151 /* : String */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : CString */;
val* var156 /* : String */;
val* var158 /* : String */;
val* var160 /* : String */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : CString */;
val* var164 /* : String */;
val* var165 /* : String */;
val* var166 /* : PbxFile */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var_xcassets /* var xcassets: PbxFile */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : CString */;
val* var174 /* : String */;
val* var175 /* : String */;
var_compile_dir = p0;
var_cfiles = p1;
{
var = nitc__ios___nitc__ios__IOSToolchain___app_project(self);
}
{
var1 = nitc___nitc__AppProject___short_name(var);
}
var_project_name = var1;
{
var2 = core__file___Text___file_exists(var_compile_dir);
}
var3 = !var2;
if (var3){
{
var4 = core__file___String___mkdir(var_compile_dir, ((val*)NULL));
}
} else {
}
var5 = NEW_nitc__PlistTemplate(&type_nitc__PlistTemplate);
{
var6 = nitc__ios___nitc__ios__IOSToolchain___app_project(self);
}
{
var7 = nitc___nitc__AppProject___name(var6);
}
{
var8 = nitc__ios___nitc__ios__IOSToolchain___app_project(self);
}
{
var9 = nitc__ios___nitc__ios__IosProject___nitc__app_annotations__AppProject__namespace(var8);
}
{
var10 = nitc__ios___nitc__ios__IOSToolchain___app_project(self);
}
{
{ /* Inline app_annotations#AppProject#version (var10) on <var10:IosProject> */
var13 = var10->attrs[COLOR_nitc__app_annotations__AppProject___version].val; /* _version on <var10:IosProject> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 35);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nitc__ios___nitc__ios__IOSToolchain___app_project(self);
}
{
var15 = nitc___nitc__AppProject___version_code(var14);
}
{
var16 = core__flat___Int___core__abstract_text__Object__to_s(var15);
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nitc__xcode_templates__PlistTemplate__product_name_61d]))(var5, var7); /* product_name= on <var5:PlistTemplate>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nitc__xcode_templates__PlistTemplate__bundle_identifier_61d]))(var5, var9); /* bundle_identifier= on <var5:PlistTemplate>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nitc__xcode_templates__PlistTemplate__short_version_61d]))(var5, var11); /* short_version= on <var5:PlistTemplate>*/
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_nitc__xcode_templates__PlistTemplate__bundle_version_61d]))(var5, var16); /* bundle_version= on <var5:PlistTemplate>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:PlistTemplate>*/
}
var_plist = var5;
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "Info.plist";
var19 = core__abstract_text___CString___to_s_full(var18, 10l, 10l);
var17 = var19;
varonce = var17;
}
{
var20 = core__file___String____47d(var_compile_dir, var17);
}
{
core__file___Writable___write_to_file(var_plist, var20); /* Direct call file#Writable#write_to_file on <var_plist:PlistTemplate>*/
}
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = ".";
var24 = core__abstract_text___CString___to_s_full(var23, 1l, 1l);
var22 = var24;
varonce21 = var22;
}
var_project_root = var22;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:IOSToolchain> */
var27 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:IOSToolchain> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var25) on <var25:AbstractCompiler> */
var30 = var25->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var25:AbstractCompiler> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline mmodule#MModule#first_real_mmodule (var28) on <var28:MModule> */
var33 = var28->attrs[COLOR_nitc__mmodule__MModule___first_real_mmodule].val; /* _first_real_mmodule on <var28:MModule> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first_real_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 254);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = nitc___nitc__MModule___mpackage(var31);
}
var_mpackage = var34;
if (var_mpackage == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mpackage,((val*)NULL)) on <var_mpackage:nullable MPackage> */
var_other = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var_mpackage->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mpackage, var_other); /* == on <var_mpackage:nullable MPackage(MPackage)>*/
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
{ /* Inline mpackage#MPackage#root (var_mpackage) on <var_mpackage:nullable MPackage(MPackage)> */
var42 = var_mpackage->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <var_mpackage:nullable MPackage(MPackage)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_root = var40;
if (var_root == NULL) {
var43 = 0; /* is null */
} else {
var43 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_root,((val*)NULL)) on <var_root:nullable MGroup> */
var_other = ((val*)NULL);
{
var46 = ((short int(*)(val* self, val* p0))(var_root->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_root, var_other); /* == on <var_root:nullable MGroup(MGroup)>*/
}
var47 = !var46;
var44 = var47;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
if (var43){
{
var48 = nitc___nitc__MGroup___filepath(var_root);
}
var_filepath = var48;
if (var_filepath == NULL) {
var49 = 0; /* is null */
} else {
var49 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_filepath,((val*)NULL)) on <var_filepath:nullable String> */
var_other = ((val*)NULL);
{
var52 = ((short int(*)(val* self, val* p0))(var_filepath->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_filepath, var_other); /* == on <var_filepath:nullable String(String)>*/
}
var53 = !var52;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
if (var49){
var_project_root = var_filepath;
} else {
}
} else {
}
} else {
}
var54 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var54, 1l); /* Direct call array#Array#with_capacity on <var54:Array[String]>*/
}
var_ = var54;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_project_root); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
var_app_files = var_;
{
var55 = nitc__ios___nitc__ios__IOSToolchain___app_project(self);
}
{
{ /* Inline app_annotations#AppProject#files (var55) on <var55:IosProject> */
var58 = var55->attrs[COLOR_nitc__app_annotations__AppProject___files].val; /* _files on <var55:IosProject> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 47);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_app_files, var56); /* Direct call array#Array#add_all on <var_app_files:Array[String]>*/
}
var_icons_found = 0;
var_59 = var_app_files;
{
var60 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_59);
}
var_61 = var60;
for(;;) {
{
var62 = ((short int(*)(val* self))((((long)var_61&3)?class_info[((long)var_61&3)]:var_61->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_61); /* is_ok on <var_61:IndexedIterator[String]>*/
}
if (var62){
} else {
goto BREAK_label;
}
{
var63 = ((val*(*)(val* self))((((long)var_61&3)?class_info[((long)var_61&3)]:var_61->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_61); /* item on <var_61:IndexedIterator[String]>*/
}
var_path = var63;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "ios";
var67 = core__abstract_text___CString___to_s_full(var66, 3l, 3l);
var65 = var67;
varonce64 = var65;
}
{
var68 = core__file___String____47d(var_path, var65);
}
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "AppIcon.appiconset";
var72 = core__abstract_text___CString___to_s_full(var71, 18l, 18l);
var70 = var72;
varonce69 = var70;
}
{
var73 = core__file___String____47d(var68, var70);
}
var_icon_dir = var73;
{
var74 = core__file___Text___file_exists(var_icon_dir);
}
if (var74){
var_icons_found = 1;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "Assets.xcassets";
var78 = core__abstract_text___CString___to_s_full(var77, 15l, 15l);
var76 = var78;
varonce75 = var76;
}
{
var79 = core__file___String____47d(var_compile_dir, var76);
}
var_target_assets_dir = var79;
{
var80 = core__file___Text___file_exists(var_target_assets_dir);
}
var81 = !var80;
if (var81){
{
var82 = core__file___String___mkdir(var_target_assets_dir, ((val*)NULL));
}
} else {
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "{\n  \"info\" : {\n\t\"version\" : 1,\n\t\"author\" : \"nitc\"\n  }\n}";
var86 = core__abstract_text___CString___to_s_full(var85, 55l, 55l);
var84 = var86;
varonce83 = var84;
}
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "Contents.json";
var90 = core__abstract_text___CString___to_s_full(var89, 13l, 13l);
var88 = var90;
varonce87 = var88;
}
{
var91 = core__file___String____47d(var_target_assets_dir, var88);
}
{
core__file___Writable___write_to_file(var84, var91); /* Direct call file#Writable#write_to_file on <var84:String>*/
}
{
var92 = core__file___String___realpath(var_icon_dir);
}
var_icon_dir = var92;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:IOSToolchain> */
var95 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:IOSToolchain> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
var96 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var96, 4l); /* Direct call array#Array#with_capacity on <var96:Array[String]>*/
}
var_97 = var96;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "cp";
var101 = core__abstract_text___CString___to_s_full(var100, 2l, 2l);
var99 = var101;
varonce98 = var99;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_97, var99); /* Direct call array#AbstractArray#push on <var_97:Array[String]>*/
}
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "-R";
var105 = core__abstract_text___CString___to_s_full(var104, 2l, 2l);
var103 = var105;
varonce102 = var103;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_97, var103); /* Direct call array#AbstractArray#push on <var_97:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_97, var_icon_dir); /* Direct call array#AbstractArray#push on <var_97:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_97, var_target_assets_dir); /* Direct call array#AbstractArray#push on <var_97:Array[String]>*/
}
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "iOS project error";
var109 = core__abstract_text___CString___to_s_full(var108, 17l, 17l);
var107 = var109;
varonce106 = var107;
}
{
nitc___nitc__ToolContext___exec_and_check(var93, var_97, var107); /* Direct call toolcontext#ToolContext#exec_and_check on <var93:ToolContext>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_61&3)?class_info[((long)var_61&3)]:var_61->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_61); /* next on <var_61:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_61&3)?class_info[((long)var_61&3)]:var_61->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_61); /* finish on <var_61:IndexedIterator[String]>*/
}
{
{ /* Inline ios#IOSToolchain#ios_project_root (self) on <self:IOSToolchain> */
var112 = self->attrs[COLOR_nitc__ios__IOSToolchain___ios_project_root].val; /* _ios_project_root on <self:IOSToolchain> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ios_project_root");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ios, 48);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
var113 = core__file___String____47d(var110, var_project_name);
}
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = ".xcodeproj";
var117 = core__abstract_text___CString___to_s_full(var116, 10l, 10l);
var115 = var117;
varonce114 = var115;
}
{
var118 = ((val*(*)(val* self, val* p0))(var113->class->vft[COLOR_core__abstract_text__Text___43d]))(var113, var115); /* + on <var113:String>*/
}
var_dir = var118;
{
var119 = core__file___Text___file_exists(var_dir);
}
var120 = !var119;
if (var120){
{
var121 = core__file___String___mkdir(var_dir, ((val*)NULL));
}
} else {
}
var122 = NEW_nitc__PbxprojectTemplate(&type_nitc__PbxprojectTemplate);
{
((void(*)(val* self, val* p0))(var122->class->vft[COLOR_nitc__xcode_templates__PbxprojectTemplate__name_61d]))(var122, var_project_name); /* name= on <var122:PbxprojectTemplate>*/
}
{
((void(*)(val* self))(var122->class->vft[COLOR_core__kernel__Object__init]))(var122); /* init on <var122:PbxprojectTemplate>*/
}
var_pbx = var122;
var_123 = var_cfiles;
{
var124 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_123);
}
var_125 = var124;
for(;;) {
{
var126 = ((short int(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_125); /* is_ok on <var_125:IndexedIterator[String]>*/
}
if (var126){
} else {
goto BREAK_label127;
}
{
var128 = ((val*(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_125); /* item on <var_125:IndexedIterator[String]>*/
}
var_file = var128;
var129 = NEW_nitc__PbxFile(&type_nitc__PbxFile);
{
((void(*)(val* self, val* p0))(var129->class->vft[COLOR_nitc__xcode_templates__PbxFile__path_61d]))(var129, var_file); /* path= on <var129:PbxFile>*/
}
{
((void(*)(val* self))(var129->class->vft[COLOR_core__kernel__Object__init]))(var129); /* init on <var129:PbxFile>*/
}
{
nitc___nitc__PbxprojectTemplate___add_file(var_pbx, var129); /* Direct call xcode_templates#PbxprojectTemplate#add_file on <var_pbx:PbxprojectTemplate>*/
}
{
((void(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_125); /* next on <var_125:IndexedIterator[String]>*/
}
}
BREAK_label127: (void)0;
{
((void(*)(val* self))((((long)var_125&3)?class_info[((long)var_125&3)]:var_125->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_125); /* finish on <var_125:IndexedIterator[String]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:IOSToolchain> */
var132 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:IOSToolchain> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var130) on <var130:AbstractCompiler> */
var135 = var130->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var130:AbstractCompiler> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1061);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
var_136 = var133;
{
var137 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_136);
}
var_138 = var137;
for(;;) {
{
var139 = ((short int(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_138); /* is_ok on <var_138:IndexedIterator[ExternFile]>*/
}
if (var139){
} else {
goto BREAK_label140;
}
{
var141 = ((val*(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_138); /* item on <var_138:IndexedIterator[ExternFile]>*/
}
var_file142 = var141;
var143 = NEW_nitc__PbxFile(&type_nitc__PbxFile);
{
{ /* Inline c_tools#ExternFile#filename (var_file142) on <var_file142:ExternFile> */
var146 = var_file142->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <var_file142:ExternFile> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = ((val*(*)(val* self, val* p0))(var144->class->vft[COLOR_core__file__String__basename]))(var144, ((val*)NULL)); /* basename on <var144:String>*/
}
{
((void(*)(val* self, val* p0))(var143->class->vft[COLOR_nitc__xcode_templates__PbxFile__path_61d]))(var143, var147); /* path= on <var143:PbxFile>*/
}
{
((void(*)(val* self))(var143->class->vft[COLOR_core__kernel__Object__init]))(var143); /* init on <var143:PbxFile>*/
}
{
nitc___nitc__PbxprojectTemplate___add_file(var_pbx, var143); /* Direct call xcode_templates#PbxprojectTemplate#add_file on <var_pbx:PbxprojectTemplate>*/
}
{
((void(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_138); /* next on <var_138:IndexedIterator[ExternFile]>*/
}
}
BREAK_label140: (void)0;
{
((void(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_138); /* finish on <var_138:IndexedIterator[ExternFile]>*/
}
var148 = NEW_nitc__LaunchScreenStoryboardTemplate(&type_nitc__LaunchScreenStoryboardTemplate);
{
{ /* Inline kernel#Object#init (var148) on <var148:LaunchScreenStoryboardTemplate> */
RET_LABEL149:(void)0;
}
}
var_launch_screen_storyboard = var148;
{
var150 = nitc__ios___nitc__ios__IOSToolchain___app_project(self);
}
{
var151 = nitc___nitc__AppProject___name(var150);
}
{
{ /* Inline xcode_templates#LaunchScreenStoryboardTemplate#title= (var_launch_screen_storyboard,var151) on <var_launch_screen_storyboard:LaunchScreenStoryboardTemplate> */
var_launch_screen_storyboard->attrs[COLOR_nitc__xcode_templates__LaunchScreenStoryboardTemplate___title].val = var151; /* _title on <var_launch_screen_storyboard:LaunchScreenStoryboardTemplate> */
RET_LABEL152:(void)0;
}
}
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "app.nit";
var156 = core__abstract_text___CString___to_s_full(var155, 7l, 7l);
var154 = var156;
varonce153 = var154;
}
{
{ /* Inline xcode_templates#LaunchScreenStoryboardTemplate#subtitle= (var_launch_screen_storyboard,var154) on <var_launch_screen_storyboard:LaunchScreenStoryboardTemplate> */
var_launch_screen_storyboard->attrs[COLOR_nitc__xcode_templates__LaunchScreenStoryboardTemplate___subtitle].val = var154; /* _subtitle on <var_launch_screen_storyboard:LaunchScreenStoryboardTemplate> */
RET_LABEL157:(void)0;
}
}
{
{ /* Inline ios#IOSToolchain#ios_project_root (self) on <self:IOSToolchain> */
var160 = self->attrs[COLOR_nitc__ios__IOSToolchain___ios_project_root].val; /* _ios_project_root on <self:IOSToolchain> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ios_project_root");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ios, 48);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = "LaunchScreen.storyboard";
var164 = core__abstract_text___CString___to_s_full(var163, 23l, 23l);
var162 = var164;
varonce161 = var162;
}
{
var165 = core__file___String____47d(var158, var162);
}
{
core__file___Writable___write_to_file(var_launch_screen_storyboard, var165); /* Direct call file#Writable#write_to_file on <var_launch_screen_storyboard:LaunchScreenStoryboardTemplate>*/
}
if (var_icons_found){
var166 = NEW_nitc__PbxFile(&type_nitc__PbxFile);
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "Assets.xcassets";
var170 = core__abstract_text___CString___to_s_full(var169, 15l, 15l);
var168 = var170;
varonce167 = var168;
}
{
((void(*)(val* self, val* p0))(var166->class->vft[COLOR_nitc__xcode_templates__PbxFile__path_61d]))(var166, var168); /* path= on <var166:PbxFile>*/
}
{
((void(*)(val* self))(var166->class->vft[COLOR_core__kernel__Object__init]))(var166); /* init on <var166:PbxFile>*/
}
var_xcassets = var166;
{
nitc___nitc__PbxprojectTemplate___add_file(var_pbx, var_xcassets); /* Direct call xcode_templates#PbxprojectTemplate#add_file on <var_pbx:PbxprojectTemplate>*/
}
} else {
}
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "project.pbxproj";
var174 = core__abstract_text___CString___to_s_full(var173, 15l, 15l);
var172 = var174;
varonce171 = var172;
}
{
var175 = core__file___String____47d(var_dir, var172);
}
{
core__file___Writable___write_to_file(var_pbx, var175); /* Direct call file#Writable#write_to_file on <var_pbx:PbxprojectTemplate>*/
}
RET_LABEL:;
}
/* method ios#IOSToolchain#compile_c_code for (self: IOSToolchain, String) */
void nitc__ios___nitc__ios__IOSToolchain___nitc__abstract_compiler__MakefileToolchain__compile_c_code(val* self, val* p0) {
val* var_compile_dir /* var compile_dir: String */;
val* var /* : IosProject */;
val* var1 /* : String */;
val* var_project_name /* var project_name: String */;
val* var2 /* : ToolContext */;
val* var4 /* : ToolContext */;
val* var5 /* : OptionBool */;
val* var7 /* : OptionBool */;
val* var8 /* : nullable Object */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var_release /* var release: Bool */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var18 /* : String */;
val* var_outfile /* var outfile: String */;
val* var19 /* : String */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var_compile_mode /* var compile_mode: String */;
val* var27 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var61 /* : Text */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : Text */;
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
val* var78 /* : Text */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : Text */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : Text */;
val* var_args /* var args: Array[String] */;
val* var89 /* : ToolContext */;
val* var91 /* : ToolContext */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : CString */;
val* var95 /* : String */;
short int var96 /* : Bool */;
val* var97 /* : nullable Error */;
val* var_error /* var error: nullable Error */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
val* var103 /* : Sys */;
val* var104 /* : Sys */;
val* var106 /* : Array[String] */;
val* var_107 /* var : Array[String] */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
val* var113 /* : NativeArray[String] */;
static val* varonce112;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
val* var126 /* : String */;
val* var128 /* : String */;
val* var129 /* : String */;
val* var130 /* : ToolContext */;
val* var132 /* : ToolContext */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
var_compile_dir = p0;
{
var = nitc__ios___nitc__ios__IOSToolchain___app_project(self);
}
{
var1 = nitc___nitc__AppProject___short_name(var);
}
var_project_name = var1;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:IOSToolchain> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:IOSToolchain> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_release (var2) on <var2:ToolContext> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <var2:ToolContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 70);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline opts#Option#value (var5) on <var5:OptionBool> */
var10 = var5->attrs[COLOR_opts__Option___value].val; /* _value on <var5:OptionBool> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = (short int)((long)(var8)>>2);
var_release = var11;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:IOSToolchain> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:IOSToolchain> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var12) on <var12:AbstractCompiler> */
var17 = var12->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var12:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc___nitc__MakefileToolchain___outfile(self, var15);
}
var_outfile = var18;
if (var_release){
if (likely(varonce!=NULL)) {
var20 = varonce;
} else {
var21 = "Release";
var22 = core__abstract_text___CString___to_s_full(var21, 7l, 7l);
var20 = var22;
varonce = var20;
}
var19 = var20;
} else {
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Debug";
var26 = core__abstract_text___CString___to_s_full(var25, 5l, 5l);
var24 = var26;
varonce23 = var24;
}
var19 = var24;
}
var_compile_mode = var19;
var27 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var27, 3l); /* Direct call array#Array#with_capacity on <var27:Array[String]>*/
}
var_ = var27;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "sh";
var31 = core__abstract_text___CString___to_s_full(var30, 2l, 2l);
var29 = var31;
varonce28 = var29;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var29); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "-c";
var35 = core__abstract_text___CString___to_s_full(var34, 2l, 2l);
var33 = var35;
varonce32 = var33;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var33); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "cd ";
var41 = core__abstract_text___CString___to_s_full(var40, 3l, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "; ";
var45 = core__abstract_text___CString___to_s_full(var44, 2l, 2l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[2]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
{ /* Inline ios#IOSToolchain#ios_project_root (self) on <self:IOSToolchain> */
var48 = self->attrs[COLOR_nitc__ios__IOSToolchain___ios_project_root].val; /* _ios_project_root on <self:IOSToolchain> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ios_project_root");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ios, 48);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
((struct instance_core__NativeArray*)var37)->values[1]=var46;
{
var49 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "xcodebuild -quiet -target \'";
var55 = core__abstract_text___CString___to_s_full(var54, 27l, 27l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "\' ";
var59 = core__abstract_text___CString___to_s_full(var58, 2l, 2l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var51)->values[2]=var57;
} else {
var51 = varonce50;
varonce50 = NULL;
}
((struct instance_core__NativeArray*)var51)->values[1]=var_project_name;
{
var60 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
var61 = ((val*(*)(val* self, val* p0))(var49->class->vft[COLOR_core__abstract_text__Text___43d]))(var49, var60); /* + on <var49:String>*/
}
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "-destination \'platform=iOS Simulator,name=iPhone\' ";
var65 = core__abstract_text___CString___to_s_full(var64, 50l, 50l);
var63 = var65;
varonce62 = var63;
}
{
var66 = ((val*(*)(val* self, val* p0))(var61->class->vft[COLOR_core__abstract_text__Text___43d]))(var61, var63); /* + on <var61:Text(String)>*/
}
if (unlikely(varonce67==NULL)) {
var68 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "-configuration ";
var72 = core__abstract_text___CString___to_s_full(var71, 15l, 15l);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var68)->values[0]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = " ";
var76 = core__abstract_text___CString___to_s_full(var75, 1l, 1l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var68)->values[2]=var74;
} else {
var68 = varonce67;
varonce67 = NULL;
}
((struct instance_core__NativeArray*)var68)->values[1]=var_compile_mode;
{
var77 = ((val*(*)(val* self))(var68->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce67 = var68;
{
var78 = ((val*(*)(val* self, val* p0))(var66->class->vft[COLOR_core__abstract_text__Text___43d]))(var66, var77); /* + on <var66:Text(String)>*/
}
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "ONLY_ACTIVE_ARCH=NO ";
var82 = core__abstract_text___CString___to_s_full(var81, 20l, 20l);
var80 = var82;
varonce79 = var80;
}
{
var83 = ((val*(*)(val* self, val* p0))(var78->class->vft[COLOR_core__abstract_text__Text___43d]))(var78, var80); /* + on <var78:Text(String)>*/
}
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "-sdk iphonesimulator build";
var87 = core__abstract_text___CString___to_s_full(var86, 26l, 26l);
var85 = var87;
varonce84 = var85;
}
{
var88 = ((val*(*)(val* self, val* p0))(var83->class->vft[COLOR_core__abstract_text__Text___43d]))(var83, var85); /* + on <var83:Text(String)>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var88); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
var_args = var_;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:IOSToolchain> */
var91 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:IOSToolchain> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = "iOS project error";
var95 = core__abstract_text___CString___to_s_full(var94, 17l, 17l);
var93 = var95;
varonce92 = var93;
}
{
nitc___nitc__ToolContext___exec_and_check(var89, var_args, var93); /* Direct call toolcontext#ToolContext#exec_and_check on <var89:ToolContext>*/
}
{
var96 = core__file___Text___file_exists(var_outfile);
}
if (var96){
{
var97 = core__file___String___rmdir(var_outfile);
}
var_error = var97;
if (var_error == NULL) {
var98 = 0; /* is null */
} else {
var98 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_error,((val*)NULL)) on <var_error:nullable Error> */
var_other = ((val*)NULL);
{
var101 = ((short int(*)(val* self, val* p0))(var_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_error, var_other); /* == on <var_error:nullable Error(Error)>*/
}
var102 = !var101;
var99 = var102;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
var98 = var99;
}
if (var98){
var103 = glob_sys;
{
core__file___Sys___print_error(var103, var_error); /* Direct call file#Sys#print_error on <var103:Sys>*/
}
var104 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var104,1l) on <var104:Sys> */
exit(1l);
RET_LABEL105:(void)0;
}
}
} else {
}
} else {
}
var106 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var106, 3l); /* Direct call array#Array#with_capacity on <var106:Array[String]>*/
}
var_107 = var106;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "mv";
var111 = core__abstract_text___CString___to_s_full(var110, 2l, 2l);
var109 = var111;
varonce108 = var109;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_107, var109); /* Direct call array#AbstractArray#push on <var_107:Array[String]>*/
}
if (unlikely(varonce112==NULL)) {
var113 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "/build/";
var117 = core__abstract_text___CString___to_s_full(var116, 7l, 7l);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var113)->values[1]=var115;
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "-iphonesimulator/";
var121 = core__abstract_text___CString___to_s_full(var120, 17l, 17l);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var113)->values[3]=var119;
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = ".app";
var125 = core__abstract_text___CString___to_s_full(var124, 4l, 4l);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var113)->values[5]=var123;
} else {
var113 = varonce112;
varonce112 = NULL;
}
{
{ /* Inline ios#IOSToolchain#ios_project_root (self) on <self:IOSToolchain> */
var128 = self->attrs[COLOR_nitc__ios__IOSToolchain___ios_project_root].val; /* _ios_project_root on <self:IOSToolchain> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ios_project_root");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ios, 48);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
((struct instance_core__NativeArray*)var113)->values[0]=var126;
((struct instance_core__NativeArray*)var113)->values[2]=var_compile_mode;
((struct instance_core__NativeArray*)var113)->values[4]=var_project_name;
{
var129 = ((val*(*)(val* self))(var113->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var113); /* native_to_s on <var113:NativeArray[String]>*/
}
varonce112 = var113;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_107, var129); /* Direct call array#AbstractArray#push on <var_107:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_107, var_outfile); /* Direct call array#AbstractArray#push on <var_107:Array[String]>*/
}
var_args = var_107;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:IOSToolchain> */
var132 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:IOSToolchain> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "iOS project error";
var136 = core__abstract_text___CString___to_s_full(var135, 17l, 17l);
var134 = var136;
varonce133 = var134;
}
{
nitc___nitc__ToolContext___exec_and_check(var130, var_args, var134); /* Direct call toolcontext#ToolContext#exec_and_check on <var130:ToolContext>*/
}
RET_LABEL:;
}
