#include "nitc__android.sep.0.h"
/* method android#ToolContext#platform_from_name for (self: ToolContext, String): nullable Platform */
val* nitc__android___ToolContext___platform_from_name(val* self, val* p0) {
val* var /* : nullable Platform */;
val* var_name /* var name: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
val* var5 /* : AndroidPlatform */;
val* var7 /* : nullable Platform */;
var_name = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "android";
var3 = core__abstract_text___CString___to_s_full(var2, 7l, 7l);
var1 = var3;
varonce = var1;
}
{
var4 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var1); /* == on <var_name:String>*/
}
if (var4){
var5 = NEW_nitc__AndroidPlatform(&type_nitc__AndroidPlatform);
{
{ /* Inline kernel#Object#init (var5) on <var5:AndroidPlatform> */
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__android___ToolContext___platform_from_name]))(self, p0); /* platform_from_name on <self:ToolContext>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method android#AndroidPlatform#name for (self: AndroidPlatform): nullable String */
val* nitc___nitc__AndroidPlatform___nitc__platform__Platform__name(val* self) {
val* var /* : nullable String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "android";
var3 = core__abstract_text___CString___to_s_full(var2, 7l, 7l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method android#AndroidPlatform#supports_libgc for (self: AndroidPlatform): Bool */
short int nitc___nitc__AndroidPlatform___nitc__platform__Platform__supports_libgc(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method android#AndroidPlatform#supports_libunwind for (self: AndroidPlatform): Bool */
short int nitc___nitc__AndroidPlatform___nitc__platform__Platform__supports_libunwind(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method android#AndroidPlatform#supports_linker_script for (self: AndroidPlatform): Bool */
short int nitc___nitc__AndroidPlatform___nitc__platform__Platform__supports_linker_script(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method android#AndroidPlatform#toolchain for (self: AndroidPlatform, ToolContext, AbstractCompiler): Toolchain */
val* nitc___nitc__AndroidPlatform___nitc__abstract_compiler__Platform__toolchain(val* self, val* p0, val* p1) {
val* var /* : Toolchain */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : AndroidToolchain */;
var_toolcontext = p0;
var_compiler = p1;
var1 = NEW_nitc__AndroidToolchain(&type_nitc__AndroidToolchain);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__Toolchain__toolcontext_61d]))(var1, var_toolcontext); /* toolcontext= on <var1:AndroidToolchain>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__Toolchain__compiler_61d]))(var1, var_compiler); /* compiler= on <var1:AndroidToolchain>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:AndroidToolchain>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method android#AndroidToolchain#android_project_root for (self: AndroidToolchain): nullable String */
val* nitc___nitc__AndroidToolchain___android_project_root(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__android__AndroidToolchain___android_project_root].val; /* _android_project_root on <self:AndroidToolchain> */
var = var1;
RET_LABEL:;
return var;
}
/* method android#AndroidToolchain#android_project_root= for (self: AndroidToolchain, nullable String) */
void nitc___nitc__AndroidToolchain___android_project_root_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__android__AndroidToolchain___android_project_root].val = p0; /* _android_project_root on <self:AndroidToolchain> */
RET_LABEL:;
}
/* method android#AndroidToolchain#compile_dir for (self: AndroidToolchain): String */
val* nitc___nitc__AndroidToolchain___nitc__abstract_compiler__Toolchain__compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : String */;
val* var_android_project_root /* var android_project_root: String */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "/android/";
var5 = core__abstract_text___CString___to_s_full(var4, 9l, 9l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var6 = nitc___nitc__Toolchain___root_compile_dir(self);
}
((struct instance_core__NativeArray*)var1)->values[0]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_android_project_root = var7;
{
{ /* Inline android#AndroidToolchain#android_project_root= (self,var_android_project_root) on <self:AndroidToolchain> */
self->attrs[COLOR_nitc__android__AndroidToolchain___android_project_root].val = var_android_project_root; /* _android_project_root on <self:AndroidToolchain> */
RET_LABEL8:(void)0;
}
}
if (unlikely(varonce9==NULL)) {
var10 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "/jni/nit_compile/";
var14 = core__abstract_text___CString___to_s_full(var13, 17l, 17l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[1]=var12;
} else {
var10 = varonce9;
varonce9 = NULL;
}
((struct instance_core__NativeArray*)var10)->values[0]=var_android_project_root;
{
var15 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method android#AndroidToolchain#default_outname for (self: AndroidToolchain): String */
val* nitc___nitc__AndroidToolchain___nitc__abstract_compiler__MakefileToolchain__default_outname(val* self) {
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
var4 = ".apk";
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
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc___nitc__AndroidToolchain___nitc__abstract_compiler__MakefileToolchain__default_outname]))(self); /* default_outname on <self:AndroidToolchain>*/
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
/* method android#AndroidToolchain#write_files for (self: AndroidToolchain, String, Array[String]) */
void nitc___nitc__AndroidToolchain___nitc__abstract_compiler__MakefileToolchain__write_files(val* self, val* p0, val* p1) {
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : nullable String */;
val* var2 /* : nullable String */;
val* var_android_project_root /* var android_project_root: String */;
val* var3 /* : AndroidProject */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
val* var7 /* : ModelBuilder */;
val* var8 /* : AbstractCompiler */;
val* var10 /* : AbstractCompiler */;
val* var11 /* : MModule */;
val* var13 /* : MModule */;
val* var_project /* var project: AndroidProject */;
val* var14 /* : ToolContext */;
val* var16 /* : ToolContext */;
val* var17 /* : OptionBool */;
val* var19 /* : OptionBool */;
val* var20 /* : nullable Object */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
short int var_release /* var release: Bool */;
val* var24 /* : String */;
val* var_app_name /* var app_name: String */;
short int var25 /* : Bool */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : Text */;
val* var30 /* : String */;
val* var_short_project_name /* var short_project_name: String */;
val* var31 /* : String */;
val* var_app_package /* var app_package: String */;
short int var32 /* : Bool */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : Text */;
val* var38 /* : String */;
val* var40 /* : String */;
val* var_app_version /* var app_version: String */;
val* var41 /* : nullable Int */;
val* var43 /* : nullable Int */;
val* var_app_min_api /* var app_min_api: nullable Int */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var_app_target_api /* var app_target_api: nullable Int */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var_app_max_api /* var app_max_api: String */;
val* var60 /* : nullable Int */;
val* var62 /* : nullable Int */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
val* var78 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : String */;
long var82 /* : Int */;
val* var83 /* : String */;
short int var84 /* : Bool */;
val* var85 /* : nullable Error */;
val* var86 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var112 /* : NativeArray[String] */;
static val* varonce111;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
val* var117 /* : String */;
long var118 /* : Int */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : CString */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : CString */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
val* var_args /* var args: Array[String] */;
val* var132 /* : ToolContext */;
val* var134 /* : ToolContext */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
val* var140 /* : NativeArray[String] */;
static val* varonce139;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var_dir /* var dir: String */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
val* var148 /* : nullable Error */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
val* var151 /* : nullable Error */;
val* var152 /* : AbstractCompiler */;
val* var154 /* : AbstractCompiler */;
val* var155 /* : MModule */;
val* var157 /* : MModule */;
val* var158 /* : POSetElement[MModule] */;
val* var160 /* : POSetElement[MModule] */;
val* var161 /* : Collection[nullable Object] */;
val* var_162 /* var : Collection[MModule] */;
val* var163 /* : Iterator[nullable Object] */;
val* var_164 /* var : Iterator[MModule] */;
short int var165 /* : Bool */;
val* var166 /* : nullable Object */;
val* var_mod /* var mod: MModule */;
val* var167 /* : nullable JavaClassTemplate */;
val* var169 /* : nullable JavaClassTemplate */;
val* var_java_ffi_file /* var java_ffi_file: nullable JavaClassTemplate */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
val* var176 /* : NativeArray[String] */;
static val* varonce175;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : CString */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : CString */;
val* var184 /* : String */;
val* var185 /* : String */;
val* var186 /* : AbstractCompiler */;
val* var188 /* : AbstractCompiler */;
val* var189 /* : Array[ExternFile] */;
val* var191 /* : Array[ExternFile] */;
val* var_192 /* var : Array[ExternFile] */;
val* var193 /* : IndexedIterator[nullable Object] */;
val* var_194 /* var : IndexedIterator[ExternFile] */;
short int var195 /* : Bool */;
val* var197 /* : nullable Object */;
val* var_f /* var f: ExternFile */;
short int var198 /* : Bool */;
int cltype;
int idtype;
val* var199 /* : String */;
val* var201 /* : String */;
val* var202 /* : String */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : CString */;
val* var206 /* : String */;
val* var_project_root /* var project_root: String */;
val* var207 /* : AbstractCompiler */;
val* var209 /* : AbstractCompiler */;
val* var210 /* : MModule */;
val* var212 /* : MModule */;
val* var213 /* : MModule */;
val* var215 /* : MModule */;
val* var216 /* : nullable MPackage */;
val* var_mpackage /* var mpackage: nullable MPackage */;
short int var217 /* : Bool */;
short int var218 /* : Bool */;
short int var220 /* : Bool */;
short int var221 /* : Bool */;
val* var222 /* : nullable MGroup */;
val* var224 /* : nullable MGroup */;
val* var_root /* var root: nullable MGroup */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
short int var229 /* : Bool */;
val* var230 /* : nullable String */;
val* var_filepath /* var filepath: nullable String */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
val* var237 /* : NativeArray[String] */;
static val* varonce236;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : CString */;
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : CString */;
val* var245 /* : String */;
val* var246 /* : String */;
val* var248 /* : NativeArray[String] */;
static val* varonce247;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : CString */;
val* var252 /* : String */;
val* var253 /* : String */;
val* var254 /* : Array[String] */;
val* var_255 /* var : Array[String] */;
val* var_app_files /* var app_files: Array[String] */;
val* var256 /* : Array[String] */;
val* var258 /* : Array[String] */;
val* var_259 /* var : Array[String] */;
val* var260 /* : IndexedIterator[nullable Object] */;
val* var_261 /* var : IndexedIterator[String] */;
short int var262 /* : Bool */;
val* var264 /* : nullable Object */;
val* var_path /* var path: String */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : CString */;
val* var268 /* : String */;
val* var269 /* : String */;
val* var_assets_dir /* var assets_dir: String */;
short int var270 /* : Bool */;
val* var271 /* : String */;
val* var272 /* : ToolContext */;
val* var274 /* : ToolContext */;
val* var275 /* : Array[String] */;
val* var_276 /* var : Array[String] */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : CString */;
val* var280 /* : String */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : CString */;
val* var284 /* : String */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : CString */;
val* var288 /* : String */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : CString */;
val* var292 /* : String */;
val* var293 /* : String */;
val* var_android_dir /* var android_dir: String */;
short int var294 /* : Bool */;
val* var295 /* : String */;
val* var296 /* : ToolContext */;
val* var298 /* : ToolContext */;
val* var299 /* : Array[String] */;
val* var_300 /* var : Array[String] */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : CString */;
val* var304 /* : String */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : CString */;
val* var308 /* : String */;
val* var309 /* : String */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : CString */;
val* var313 /* : String */;
val* var314 /* : Array[String] */;
val* var_315 /* var : Array[String] */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : CString */;
val* var319 /* : String */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : CString */;
val* var323 /* : String */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : CString */;
val* var327 /* : String */;
static val* varonce328;
val* var329 /* : String */;
char* var330 /* : CString */;
val* var331 /* : String */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : CString */;
val* var335 /* : String */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : CString */;
val* var339 /* : String */;
val* var_resolutions /* var resolutions: Array[String] */;
short int var_icon_available /* var icon_available: Bool */;
val* var_340 /* var : Array[String] */;
val* var341 /* : IndexedIterator[nullable Object] */;
val* var_342 /* var : IndexedIterator[String] */;
short int var343 /* : Bool */;
val* var345 /* : nullable Object */;
val* var_res /* var res: String */;
val* var347 /* : NativeArray[String] */;
static val* varonce346;
static val* varonce348;
val* var349 /* : String */;
char* var350 /* : CString */;
val* var351 /* : String */;
static val* varonce352;
val* var353 /* : String */;
char* var354 /* : CString */;
val* var355 /* : String */;
val* var356 /* : String */;
val* var357 /* : String */;
val* var_path358 /* var path: String */;
short int var359 /* : Bool */;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : CString */;
val* var363 /* : String */;
val* var_icon_declaration /* var icon_declaration: nullable Object */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : CString */;
val* var367 /* : String */;
val* var369 /* : NativeArray[String] */;
static val* varonce368;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : CString */;
val* var373 /* : String */;
val* var374 /* : String */;
val* var375 /* : AbstractCompiler */;
val* var377 /* : AbstractCompiler */;
val* var378 /* : MModule */;
val* var380 /* : MModule */;
val* var381 /* : POSetElement[MModule] */;
val* var383 /* : POSetElement[MModule] */;
val* var384 /* : Collection[nullable Object] */;
val* var_385 /* var : Collection[MModule] */;
val* var386 /* : Iterator[nullable Object] */;
val* var_387 /* var : Iterator[MModule] */;
short int var388 /* : Bool */;
val* var390 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var391 /* : nullable Array[JavaFile] */;
val* var393 /* : nullable Array[JavaFile] */;
val* var_extra_java_files /* var extra_java_files: nullable Array[JavaFile] */;
short int var394 /* : Bool */;
short int var395 /* : Bool */;
short int var397 /* : Bool */;
short int var398 /* : Bool */;
val* var_399 /* var : Array[JavaFile] */;
val* var400 /* : IndexedIterator[nullable Object] */;
val* var_401 /* var : IndexedIterator[JavaFile] */;
short int var402 /* : Bool */;
val* var404 /* : nullable Object */;
val* var_file /* var file: JavaFile */;
val* var405 /* : String */;
val* var407 /* : String */;
val* var_path408 /* var path: String */;
val* var409 /* : String */;
val* var410 /* : String */;
val* var412 /* : NativeArray[String] */;
static val* varonce411;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : CString */;
val* var416 /* : String */;
val* var417 /* : String */;
val* var419 /* : NativeArray[String] */;
static val* varonce418;
static val* varonce420;
val* var421 /* : String */;
char* var422 /* : CString */;
val* var423 /* : String */;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : CString */;
val* var427 /* : String */;
val* var428 /* : String */;
long var429 /* : Int */;
val* var430 /* : String */;
val* var432 /* : NativeArray[String] */;
static val* varonce431;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : CString */;
val* var436 /* : String */;
val* var437 /* : String */;
static val* varonce438;
val* var439 /* : String */;
char* var440 /* : CString */;
val* var441 /* : String */;
val* var443 /* : NativeArray[String] */;
static val* varonce442;
static val* varonce444;
val* var445 /* : String */;
char* var446 /* : CString */;
val* var447 /* : String */;
val* var448 /* : String */;
val* var449 /* : Array[String] */;
val* var_ldflags /* var ldflags: Array[String] */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : CString */;
val* var453 /* : String */;
val* var_platform_name /* var platform_name: String */;
val* var454 /* : AbstractCompiler */;
val* var456 /* : AbstractCompiler */;
val* var457 /* : MModule */;
val* var459 /* : MModule */;
val* var460 /* : POSetElement[MModule] */;
val* var462 /* : POSetElement[MModule] */;
val* var463 /* : Collection[nullable Object] */;
val* var_464 /* var : Collection[MModule] */;
val* var465 /* : Iterator[nullable Object] */;
val* var_466 /* var : Iterator[MModule] */;
short int var467 /* : Bool */;
val* var469 /* : nullable Object */;
val* var_mmodule470 /* var mmodule: MModule */;
val* var471 /* : MultiHashMap[String, String] */;
val* var473 /* : MultiHashMap[String, String] */;
val* var474 /* : RemovableCollection[nullable Object] */;
short int var475 /* : Bool */;
val* var476 /* : MultiHashMap[String, String] */;
val* var478 /* : MultiHashMap[String, String] */;
val* var479 /* : nullable Object */;
val* var481 /* : NativeArray[String] */;
static val* varonce480;
static val* varonce482;
val* var483 /* : String */;
char* var484 /* : CString */;
val* var485 /* : String */;
static val* varonce486;
val* var487 /* : String */;
char* var488 /* : CString */;
val* var489 /* : String */;
static val* varonce490;
val* var491 /* : String */;
char* var492 /* : CString */;
val* var493 /* : String */;
static val* varonce494;
val* var495 /* : String */;
char* var496 /* : CString */;
val* var497 /* : String */;
val* var498 /* : String */;
static val* varonce499;
val* var500 /* : String */;
char* var501 /* : CString */;
val* var502 /* : String */;
val* var503 /* : String */;
val* var504 /* : String */;
val* var506 /* : NativeArray[String] */;
static val* varonce505;
static val* varonce507;
val* var508 /* : String */;
char* var509 /* : CString */;
val* var510 /* : String */;
val* var511 /* : String */;
val* var512 /* : FileWriter */;
val* var514 /* : NativeArray[String] */;
static val* varonce513;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : CString */;
val* var518 /* : String */;
val* var519 /* : String */;
val* var_manifest_file /* var manifest_file: FileWriter */;
val* var521 /* : NativeArray[String] */;
static val* varonce520;
static val* varonce522;
val* var523 /* : String */;
char* var524 /* : CString */;
val* var525 /* : String */;
static val* varonce526;
val* var527 /* : String */;
char* var528 /* : CString */;
val* var529 /* : String */;
static val* varonce530;
val* var531 /* : String */;
char* var532 /* : CString */;
val* var533 /* : String */;
static val* varonce534;
val* var535 /* : String */;
char* var536 /* : CString */;
val* var537 /* : String */;
static val* varonce538;
val* var539 /* : String */;
char* var540 /* : CString */;
val* var541 /* : String */;
static val* varonce542;
val* var543 /* : String */;
char* var544 /* : CString */;
val* var545 /* : String */;
static val* varonce546;
val* var547 /* : String */;
char* var548 /* : CString */;
val* var549 /* : String */;
static val* varonce550;
val* var551 /* : String */;
char* var552 /* : CString */;
val* var553 /* : String */;
static val* varonce554;
val* var555 /* : String */;
char* var556 /* : CString */;
val* var557 /* : String */;
long var558 /* : Int */;
val* var559 /* : String */;
val* var560 /* : String */;
long var561 /* : Int */;
val* var562 /* : String */;
long var563 /* : Int */;
short int var564 /* : Bool */;
val* var565 /* : String */;
val* var566 /* : String */;
val* var567 /* : Array[String] */;
val* var569 /* : Array[String] */;
val* var_570 /* var : Array[String] */;
val* var571 /* : IndexedIterator[nullable Object] */;
val* var_572 /* var : IndexedIterator[String] */;
short int var573 /* : Bool */;
val* var575 /* : nullable Object */;
val* var_activity /* var activity: String */;
val* var577 /* : NativeArray[String] */;
static val* varonce576;
static val* varonce578;
val* var579 /* : String */;
char* var580 /* : CString */;
val* var581 /* : String */;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : CString */;
val* var585 /* : String */;
static val* varonce586;
val* var587 /* : String */;
char* var588 /* : CString */;
val* var589 /* : String */;
static val* varonce590;
val* var591 /* : String */;
char* var592 /* : CString */;
val* var593 /* : String */;
val* var594 /* : Array[String] */;
val* var596 /* : Array[String] */;
static val* varonce597;
val* var598 /* : String */;
char* var599 /* : CString */;
val* var600 /* : String */;
val* var601 /* : String */;
val* var602 /* : String */;
val* var604 /* : NativeArray[String] */;
static val* varonce603;
static val* varonce605;
val* var606 /* : String */;
char* var607 /* : CString */;
val* var608 /* : String */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : CString */;
val* var612 /* : String */;
val* var613 /* : Array[String] */;
val* var615 /* : Array[String] */;
static val* varonce616;
val* var617 /* : String */;
char* var618 /* : CString */;
val* var619 /* : String */;
val* var620 /* : String */;
val* var621 /* : Array[String] */;
val* var623 /* : Array[String] */;
static val* varonce624;
val* var625 /* : String */;
char* var626 /* : CString */;
val* var627 /* : String */;
val* var628 /* : String */;
val* var629 /* : String */;
val* var630 /* : ToolContext */;
val* var632 /* : ToolContext */;
val* var633 /* : nullable String */;
val* var635 /* : nullable String */;
val* var_nit_dir /* var nit_dir: nullable String */;
static val* varonce636;
val* var637 /* : String */;
char* var638 /* : CString */;
val* var639 /* : String */;
val* var640 /* : String */;
val* var_share_dir /* var share_dir: String */;
short int var641 /* : Bool */;
short int var642 /* : Bool */;
val* var643 /* : Sys */;
static val* varonce644;
val* var645 /* : String */;
char* var646 /* : CString */;
val* var647 /* : String */;
val* var648 /* : Sys */;
val* var650 /* : String */;
val* var652 /* : NativeArray[String] */;
static val* varonce651;
static val* varonce653;
val* var654 /* : String */;
char* var655 /* : CString */;
val* var656 /* : String */;
val* var657 /* : String */;
short int var658 /* : Bool */;
short int var659 /* : Bool */;
val* var660 /* : ToolContext */;
val* var662 /* : ToolContext */;
val* var663 /* : Array[String] */;
val* var_664 /* var : Array[String] */;
val* var666 /* : NativeArray[String] */;
static val* varonce665;
static val* varonce667;
val* var668 /* : String */;
char* var669 /* : CString */;
val* var670 /* : String */;
val* var671 /* : String */;
static val* varonce672;
val* var673 /* : String */;
char* var674 /* : CString */;
val* var675 /* : String */;
val* var676 /* : Array[String] */;
val* var_677 /* var : Array[String] */;
static val* varonce678;
val* var679 /* : String */;
char* var680 /* : CString */;
val* var681 /* : String */;
static val* varonce682;
val* var683 /* : String */;
char* var684 /* : CString */;
val* var685 /* : String */;
static val* varonce686;
val* var687 /* : String */;
char* var688 /* : CString */;
val* var689 /* : String */;
val* var_690 /* var : Array[String] */;
val* var691 /* : IndexedIterator[nullable Object] */;
val* var_692 /* var : IndexedIterator[String] */;
short int var693 /* : Bool */;
val* var695 /* : nullable Object */;
val* var_arch /* var arch: String */;
val* var696 /* : String */;
val* var697 /* : nullable Error */;
val* var698 /* : ToolContext */;
val* var700 /* : ToolContext */;
val* var701 /* : Array[String] */;
val* var_702 /* var : Array[String] */;
static val* varonce703;
val* var704 /* : String */;
char* var705 /* : CString */;
val* var706 /* : String */;
val* var708 /* : NativeArray[String] */;
static val* varonce707;
static val* varonce709;
val* var710 /* : String */;
char* var711 /* : CString */;
val* var712 /* : String */;
static val* varonce713;
val* var714 /* : String */;
char* var715 /* : CString */;
val* var716 /* : String */;
val* var717 /* : String */;
static val* varonce718;
val* var719 /* : String */;
char* var720 /* : CString */;
val* var721 /* : String */;
val* var722 /* : String */;
static val* varonce723;
val* var724 /* : String */;
char* var725 /* : CString */;
val* var726 /* : String */;
val* var727 /* : ToolContext */;
val* var729 /* : ToolContext */;
val* var730 /* : Array[String] */;
val* var_731 /* var : Array[String] */;
static val* varonce732;
val* var733 /* : String */;
char* var734 /* : CString */;
val* var735 /* : String */;
static val* varonce736;
val* var737 /* : String */;
char* var738 /* : CString */;
val* var739 /* : String */;
val* var741 /* : NativeArray[String] */;
static val* varonce740;
static val* varonce742;
val* var743 /* : String */;
char* var744 /* : CString */;
val* var745 /* : String */;
val* var746 /* : String */;
val* var748 /* : NativeArray[String] */;
static val* varonce747;
static val* varonce749;
val* var750 /* : String */;
char* var751 /* : CString */;
val* var752 /* : String */;
val* var753 /* : String */;
static val* varonce754;
val* var755 /* : String */;
char* var756 /* : CString */;
val* var757 /* : String */;
var_compile_dir = p0;
var_cfiles = p1;
{
{ /* Inline android#AndroidToolchain#android_project_root (self) on <self:AndroidToolchain> */
var2 = self->attrs[COLOR_nitc__android__AndroidToolchain___android_project_root].val; /* _android_project_root on <self:AndroidToolchain> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android, 64);
fatal_exit(1);
}
var_android_project_root = var;
var3 = NEW_nitc__AndroidProject(&type_nitc__AndroidProject);
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var6 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__modelbuilder_base___ToolContext___modelbuilder(var4);
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:AndroidToolchain> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:AndroidToolchain> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var8) on <var8:AbstractCompiler> */
var13 = var8->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var8:AbstractCompiler> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__app_annotations__AppProject__modelbuilder_61d]))(var3, var7); /* modelbuilder= on <var3:AndroidProject>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__app_annotations__AppProject__mainmodule_61d]))(var3, var11); /* mainmodule= on <var3:AndroidProject>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:AndroidProject>*/
}
var_project = var3;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var16 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_release (var14) on <var14:ToolContext> */
var19 = var14->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <var14:ToolContext> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 70);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline opts#Option#value (var17) on <var17:OptionBool> */
var22 = var17->attrs[COLOR_opts__Option___value].val; /* _value on <var17:OptionBool> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = (short int)((long)(var20)>>2);
var_release = var23;
{
var24 = nitc___nitc__AppProject___name(var_project);
}
var_app_name = var24;
var25 = !var_release;
if (var25){
if (likely(varonce!=NULL)) {
var26 = varonce;
} else {
var27 = " Debug";
var28 = core__abstract_text___CString___to_s_full(var27, 6l, 6l);
var26 = var28;
varonce = var26;
}
{
var29 = ((val*(*)(val* self, val* p0))(var_app_name->class->vft[COLOR_core__abstract_text__Text___43d]))(var_app_name, var26); /* + on <var_app_name:String>*/
}
var_app_name = var29;
} else {
}
{
var30 = nitc___nitc__AppProject___short_name(var_project);
}
var_short_project_name = var30;
{
var31 = nitc___nitc__AppProject___namespace(var_project);
}
var_app_package = var31;
var32 = !var_release;
if (var32){
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "_debug";
var36 = core__abstract_text___CString___to_s_full(var35, 6l, 6l);
var34 = var36;
varonce33 = var34;
}
{
var37 = ((val*(*)(val* self, val* p0))(var_app_package->class->vft[COLOR_core__abstract_text__Text___43d]))(var_app_package, var34); /* + on <var_app_package:String>*/
}
var_app_package = var37;
} else {
}
{
{ /* Inline app_annotations#AppProject#version (var_project) on <var_project:AndroidProject> */
var40 = var_project->attrs[COLOR_nitc__app_annotations__AppProject___version].val; /* _version on <var_project:AndroidProject> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 35);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_app_version = var38;
{
{ /* Inline android_annotations#AndroidProject#min_api (var_project) on <var_project:AndroidProject> */
var43 = var_project->attrs[COLOR_nitc__android_annotations__AndroidProject___min_api].val; /* _min_api on <var_project:AndroidProject> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_app_min_api = var41;
if (var_app_min_api == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_app_min_api,((val*)NULL)) on <var_app_min_api:nullable Int> */
var47 = 0; /* incompatible types Int vs. null; cannot be NULL */
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
var48 = (val*)(10l<<2|1);
var_app_min_api = var48;
} else {
}
{
{ /* Inline android_annotations#AndroidProject#target_api (var_project) on <var_project:AndroidProject> */
var51 = var_project->attrs[COLOR_nitc__android_annotations__AndroidProject___target_api].val; /* _target_api on <var_project:AndroidProject> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_app_target_api = var49;
if (var_app_target_api == NULL) {
var52 = 1; /* is null */
} else {
var52 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_app_target_api,((val*)NULL)) on <var_app_target_api:nullable Int> */
var55 = 0; /* incompatible types Int vs. null; cannot be NULL */
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
var_app_target_api = var_app_min_api;
} else {
}
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "";
var59 = core__abstract_text___CString___to_s_full(var58, 0l, 0l);
var57 = var59;
varonce56 = var57;
}
var_app_max_api = var57;
{
{ /* Inline android_annotations#AndroidProject#max_api (var_project) on <var_project:AndroidProject> */
var62 = var_project->attrs[COLOR_nitc__android_annotations__AndroidProject___max_api].val; /* _max_api on <var_project:AndroidProject> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (var60 == NULL) {
var63 = 0; /* is null */
} else {
var63 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Int#!= (var60,((val*)NULL)) on <var60:nullable Int> */
var66 = 0; /* incompatible types Int vs. null; cannot be NULL */
var67 = !var66;
var64 = var67;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
if (unlikely(varonce68==NULL)) {
var69 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "android:maxSdkVersion=\"";
var73 = core__abstract_text___CString___to_s_full(var72, 23l, 23l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var69)->values[0]=var71;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "\"";
var77 = core__abstract_text___CString___to_s_full(var76, 1l, 1l);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var69)->values[2]=var75;
} else {
var69 = varonce68;
varonce68 = NULL;
}
{
{ /* Inline android_annotations#AndroidProject#max_api (var_project) on <var_project:AndroidProject> */
var80 = var_project->attrs[COLOR_nitc__android_annotations__AndroidProject___max_api].val; /* _max_api on <var_project:AndroidProject> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android, 85);
fatal_exit(1);
}
var82 = (long)(var78)>>2;
var81 = core__flat___Int___core__abstract_text__Object__to_s(var82);
((struct instance_core__NativeArray*)var69)->values[1]=var81;
{
var83 = ((val*(*)(val* self))(var69->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
var_app_max_api = var83;
} else {
}
{
var84 = core__file___Text___file_exists(var_android_project_root);
}
if (var84){
{
var85 = core__file___String___rmdir(var_android_project_root);
}
} else {
}
var86 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var86, 14l); /* Direct call array#Array#with_capacity on <var86:Array[String]>*/
}
var_ = var86;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "android";
var90 = core__abstract_text___CString___to_s_full(var89, 7l, 7l);
var88 = var90;
varonce87 = var88;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var88); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "-s";
var94 = core__abstract_text___CString___to_s_full(var93, 2l, 2l);
var92 = var94;
varonce91 = var92;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var92); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "create";
var98 = core__abstract_text___CString___to_s_full(var97, 6l, 6l);
var96 = var98;
varonce95 = var96;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var96); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "project";
var102 = core__abstract_text___CString___to_s_full(var101, 7l, 7l);
var100 = var102;
varonce99 = var100;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var100); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "--name";
var106 = core__abstract_text___CString___to_s_full(var105, 6l, 6l);
var104 = var106;
varonce103 = var104;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var104); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_short_project_name); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "--target";
var110 = core__abstract_text___CString___to_s_full(var109, 8l, 8l);
var108 = var110;
varonce107 = var108;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var108); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (unlikely(varonce111==NULL)) {
var112 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "android-";
var116 = core__abstract_text___CString___to_s_full(var115, 8l, 8l);
var114 = var116;
varonce113 = var114;
}
((struct instance_core__NativeArray*)var112)->values[0]=var114;
} else {
var112 = varonce111;
varonce111 = NULL;
}
var118 = (long)(var_app_target_api)>>2;
var117 = core__flat___Int___core__abstract_text__Object__to_s(var118);
((struct instance_core__NativeArray*)var112)->values[1]=var117;
{
var119 = ((val*(*)(val* self))(var112->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var112); /* native_to_s on <var112:NativeArray[String]>*/
}
varonce111 = var112;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var119); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "--path";
var123 = core__abstract_text___CString___to_s_full(var122, 6l, 6l);
var121 = var123;
varonce120 = var121;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var121); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_android_project_root); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "--package";
var127 = core__abstract_text___CString___to_s_full(var126, 9l, 9l);
var125 = var127;
varonce124 = var125;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var125); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_app_package); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "--activity";
var131 = core__abstract_text___CString___to_s_full(var130, 10l, 10l);
var129 = var131;
varonce128 = var129;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var129); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_short_project_name); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
var_args = var_;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var134 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "Android project error";
var138 = core__abstract_text___CString___to_s_full(var137, 21l, 21l);
var136 = var138;
varonce135 = var136;
}
{
nitc___nitc__ToolContext___exec_and_check(var132, var_args, var136); /* Direct call toolcontext#ToolContext#exec_and_check on <var132:ToolContext>*/
}
if (unlikely(varonce139==NULL)) {
var140 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "/jni/";
var144 = core__abstract_text___CString___to_s_full(var143, 5l, 5l);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var140)->values[1]=var142;
} else {
var140 = varonce139;
varonce139 = NULL;
}
((struct instance_core__NativeArray*)var140)->values[0]=var_android_project_root;
{
var145 = ((val*(*)(val* self))(var140->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var140); /* native_to_s on <var140:NativeArray[String]>*/
}
varonce139 = var140;
var_dir = var145;
{
var146 = core__file___Text___file_exists(var_dir);
}
var147 = !var146;
if (var147){
{
var148 = core__file___String___mkdir(var_dir, ((val*)NULL));
}
} else {
}
var_dir = var_compile_dir;
{
var149 = core__file___Text___file_exists(var_dir);
}
var150 = !var149;
if (var150){
{
var151 = core__file___String___mkdir(var_dir, ((val*)NULL));
}
} else {
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:AndroidToolchain> */
var154 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:AndroidToolchain> */
if (unlikely(var154 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var152) on <var152:AbstractCompiler> */
var157 = var152->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var152:AbstractCompiler> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var155) on <var155:MModule> */
var160 = var155->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var155:MModule> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
var161 = poset___poset__POSetElement___greaters(var158);
}
var_162 = var161;
{
var163 = ((val*(*)(val* self))((((long)var_162&3)?class_info[((long)var_162&3)]:var_162->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_162); /* iterator on <var_162:Collection[MModule]>*/
}
var_164 = var163;
for(;;) {
{
var165 = ((short int(*)(val* self))((((long)var_164&3)?class_info[((long)var_164&3)]:var_164->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_164); /* is_ok on <var_164:Iterator[MModule]>*/
}
if (var165){
} else {
goto BREAK_label;
}
{
var166 = ((val*(*)(val* self))((((long)var_164&3)?class_info[((long)var_164&3)]:var_164->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_164); /* item on <var_164:Iterator[MModule]>*/
}
var_mod = var166;
{
{ /* Inline java#MModule#java_file (var_mod) on <var_mod:MModule> */
var169 = var_mod->attrs[COLOR_nitc__java__MModule___java_file].val; /* _java_file on <var_mod:MModule> */
var167 = var169;
RET_LABEL168:(void)0;
}
}
var_java_ffi_file = var167;
if (var_java_ffi_file == NULL) {
var170 = 0; /* is null */
} else {
var170 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_java_ffi_file,((val*)NULL)) on <var_java_ffi_file:nullable JavaClassTemplate> */
var_other = ((val*)NULL);
{
var173 = ((short int(*)(val* self, val* p0))(var_java_ffi_file->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_java_ffi_file, var_other); /* == on <var_java_ffi_file:nullable JavaClassTemplate(JavaClassTemplate)>*/
}
var174 = !var173;
var171 = var174;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
var170 = var171;
}
if (var170){
if (unlikely(varonce175==NULL)) {
var176 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "import ";
var180 = core__abstract_text___CString___to_s_full(var179, 7l, 7l);
var178 = var180;
varonce177 = var178;
}
((struct instance_core__NativeArray*)var176)->values[0]=var178;
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = ".R;";
var184 = core__abstract_text___CString___to_s_full(var183, 3l, 3l);
var182 = var184;
varonce181 = var182;
}
((struct instance_core__NativeArray*)var176)->values[2]=var182;
} else {
var176 = varonce175;
varonce175 = NULL;
}
((struct instance_core__NativeArray*)var176)->values[1]=var_app_package;
{
var185 = ((val*(*)(val* self))(var176->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var176); /* native_to_s on <var176:NativeArray[String]>*/
}
varonce175 = var176;
{
template___template__Template___add(var_java_ffi_file, var185); /* Direct call template#Template#add on <var_java_ffi_file:nullable JavaClassTemplate(JavaClassTemplate)>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_164&3)?class_info[((long)var_164&3)]:var_164->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_164); /* next on <var_164:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_164&3)?class_info[((long)var_164&3)]:var_164->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_164); /* finish on <var_164:Iterator[MModule]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc___nitc__AndroidToolchain___nitc__abstract_compiler__MakefileToolchain__write_files]))(self, p0, p1); /* write_files on <self:AndroidToolchain>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:AndroidToolchain> */
var188 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:AndroidToolchain> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var186) on <var186:AbstractCompiler> */
var191 = var186->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var186:AbstractCompiler> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1061);
fatal_exit(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
var_192 = var189;
{
var193 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_192);
}
var_194 = var193;
for(;;) {
{
var195 = ((short int(*)(val* self))((((long)var_194&3)?class_info[((long)var_194&3)]:var_194->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_194); /* is_ok on <var_194:IndexedIterator[ExternFile]>*/
}
if (var195){
} else {
goto BREAK_label196;
}
{
var197 = ((val*(*)(val* self))((((long)var_194&3)?class_info[((long)var_194&3)]:var_194->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_194); /* item on <var_194:IndexedIterator[ExternFile]>*/
}
var_f = var197;
/* <var_f:ExternFile> isa ExternCFile */
cltype = type_nitc__ExternCFile.color;
idtype = type_nitc__ExternCFile.id;
if(cltype >= var_f->type->table_size) {
var198 = 0;
} else {
var198 = var_f->type->type_table[cltype] == idtype;
}
if (var198){
{
{ /* Inline c_tools#ExternFile#filename (var_f) on <var_f:ExternFile(ExternCFile)> */
var201 = var_f->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <var_f:ExternFile(ExternCFile)> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
var202 = ((val*(*)(val* self, val* p0))(var199->class->vft[COLOR_core__file__String__basename]))(var199, ((val*)NULL)); /* basename on <var199:String>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_cfiles, var202); /* Direct call array#Array#add on <var_cfiles:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_194&3)?class_info[((long)var_194&3)]:var_194->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_194); /* next on <var_194:IndexedIterator[ExternFile]>*/
}
}
BREAK_label196: (void)0;
{
((void(*)(val* self))((((long)var_194&3)?class_info[((long)var_194&3)]:var_194->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_194); /* finish on <var_194:IndexedIterator[ExternFile]>*/
}
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = ".";
var206 = core__abstract_text___CString___to_s_full(var205, 1l, 1l);
var204 = var206;
varonce203 = var204;
}
var_project_root = var204;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:AndroidToolchain> */
var209 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:AndroidToolchain> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var207) on <var207:AbstractCompiler> */
var212 = var207->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var207:AbstractCompiler> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
{
{ /* Inline mmodule#MModule#first_real_mmodule (var210) on <var210:MModule> */
var215 = var210->attrs[COLOR_nitc__mmodule__MModule___first_real_mmodule].val; /* _first_real_mmodule on <var210:MModule> */
if (unlikely(var215 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first_real_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 254);
fatal_exit(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
{
var216 = nitc___nitc__MModule___mpackage(var213);
}
var_mpackage = var216;
if (var_mpackage == NULL) {
var217 = 0; /* is null */
} else {
var217 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mpackage,((val*)NULL)) on <var_mpackage:nullable MPackage> */
var_other = ((val*)NULL);
{
var220 = ((short int(*)(val* self, val* p0))(var_mpackage->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mpackage, var_other); /* == on <var_mpackage:nullable MPackage(MPackage)>*/
}
var221 = !var220;
var218 = var221;
goto RET_LABEL219;
RET_LABEL219:(void)0;
}
var217 = var218;
}
if (var217){
{
{ /* Inline mpackage#MPackage#root (var_mpackage) on <var_mpackage:nullable MPackage(MPackage)> */
var224 = var_mpackage->attrs[COLOR_nitc__mpackage__MPackage___root].val; /* _root on <var_mpackage:nullable MPackage(MPackage)> */
var222 = var224;
RET_LABEL223:(void)0;
}
}
var_root = var222;
if (var_root == NULL) {
var225 = 0; /* is null */
} else {
var225 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_root,((val*)NULL)) on <var_root:nullable MGroup> */
var_other = ((val*)NULL);
{
var228 = ((short int(*)(val* self, val* p0))(var_root->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_root, var_other); /* == on <var_root:nullable MGroup(MGroup)>*/
}
var229 = !var228;
var226 = var229;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
var225 = var226;
}
if (var225){
{
var230 = nitc___nitc__MGroup___filepath(var_root);
}
var_filepath = var230;
if (var_filepath == NULL) {
var231 = 0; /* is null */
} else {
var231 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_filepath,((val*)NULL)) on <var_filepath:nullable String> */
var_other = ((val*)NULL);
{
var234 = ((short int(*)(val* self, val* p0))(var_filepath->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_filepath, var_other); /* == on <var_filepath:nullable String(String)>*/
}
var235 = !var234;
var232 = var235;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
var231 = var232;
}
if (var231){
var_project_root = var_filepath;
} else {
}
} else {
}
} else {
}
if (unlikely(varonce236==NULL)) {
var237 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce238!=NULL)) {
var239 = varonce238;
} else {
var240 = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<resources>\n    <string name=\"app_name\">";
var241 = core__abstract_text___CString___to_s_full(var240, 79l, 79l);
var239 = var241;
varonce238 = var239;
}
((struct instance_core__NativeArray*)var237)->values[0]=var239;
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = "</string>\n</resources>";
var245 = core__abstract_text___CString___to_s_full(var244, 22l, 22l);
var243 = var245;
varonce242 = var243;
}
((struct instance_core__NativeArray*)var237)->values[2]=var243;
} else {
var237 = varonce236;
varonce236 = NULL;
}
((struct instance_core__NativeArray*)var237)->values[1]=var_app_name;
{
var246 = ((val*(*)(val* self))(var237->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var237); /* native_to_s on <var237:NativeArray[String]>*/
}
varonce236 = var237;
if (unlikely(varonce247==NULL)) {
var248 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce249!=NULL)) {
var250 = varonce249;
} else {
var251 = "/res/values/strings.xml";
var252 = core__abstract_text___CString___to_s_full(var251, 23l, 23l);
var250 = var252;
varonce249 = var250;
}
((struct instance_core__NativeArray*)var248)->values[1]=var250;
} else {
var248 = varonce247;
varonce247 = NULL;
}
((struct instance_core__NativeArray*)var248)->values[0]=var_android_project_root;
{
var253 = ((val*(*)(val* self))(var248->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var248); /* native_to_s on <var248:NativeArray[String]>*/
}
varonce247 = var248;
{
core__file___Writable___write_to_file(var246, var253); /* Direct call file#Writable#write_to_file on <var246:String>*/
}
var254 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var254, 1l); /* Direct call array#Array#with_capacity on <var254:Array[String]>*/
}
var_255 = var254;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_255, var_project_root); /* Direct call array#AbstractArray#push on <var_255:Array[String]>*/
}
var_app_files = var_255;
{
{ /* Inline app_annotations#AppProject#files (var_project) on <var_project:AndroidProject> */
var258 = var_project->attrs[COLOR_nitc__app_annotations__AppProject___files].val; /* _files on <var_project:AndroidProject> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 47);
fatal_exit(1);
}
var256 = var258;
RET_LABEL257:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_app_files, var256); /* Direct call array#Array#add_all on <var_app_files:Array[String]>*/
}
var_259 = var_app_files;
{
var260 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_259);
}
var_261 = var260;
for(;;) {
{
var262 = ((short int(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_261); /* is_ok on <var_261:IndexedIterator[String]>*/
}
if (var262){
} else {
goto BREAK_label263;
}
{
var264 = ((val*(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_261); /* item on <var_261:IndexedIterator[String]>*/
}
var_path = var264;
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "assets";
var268 = core__abstract_text___CString___to_s_full(var267, 6l, 6l);
var266 = var268;
varonce265 = var266;
}
{
var269 = core__file___String____47d(var_path, var266);
}
var_assets_dir = var269;
{
var270 = core__file___Text___file_exists(var_assets_dir);
}
if (var270){
{
var271 = core__file___String___realpath(var_assets_dir);
}
var_assets_dir = var271;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var274 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
var275 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var275, 4l); /* Direct call array#Array#with_capacity on <var275:Array[String]>*/
}
var_276 = var275;
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "cp";
var280 = core__abstract_text___CString___to_s_full(var279, 2l, 2l);
var278 = var280;
varonce277 = var278;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_276, var278); /* Direct call array#AbstractArray#push on <var_276:Array[String]>*/
}
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "-r";
var284 = core__abstract_text___CString___to_s_full(var283, 2l, 2l);
var282 = var284;
varonce281 = var282;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_276, var282); /* Direct call array#AbstractArray#push on <var_276:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_276, var_assets_dir); /* Direct call array#AbstractArray#push on <var_276:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_276, var_android_project_root); /* Direct call array#AbstractArray#push on <var_276:Array[String]>*/
}
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = "Android project error";
var288 = core__abstract_text___CString___to_s_full(var287, 21l, 21l);
var286 = var288;
varonce285 = var286;
}
{
nitc___nitc__ToolContext___exec_and_check(var272, var_276, var286); /* Direct call toolcontext#ToolContext#exec_and_check on <var272:ToolContext>*/
}
} else {
}
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = "android";
var292 = core__abstract_text___CString___to_s_full(var291, 7l, 7l);
var290 = var292;
varonce289 = var290;
}
{
var293 = core__file___String____47d(var_path, var290);
}
var_android_dir = var293;
{
var294 = core__file___Text___file_exists(var_android_dir);
}
if (var294){
{
var295 = core__file___String___realpath(var_android_dir);
}
var_android_dir = var295;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var298 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var298 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
var299 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var299, 4l); /* Direct call array#Array#with_capacity on <var299:Array[String]>*/
}
var_300 = var299;
if (likely(varonce301!=NULL)) {
var302 = varonce301;
} else {
var303 = "cp";
var304 = core__abstract_text___CString___to_s_full(var303, 2l, 2l);
var302 = var304;
varonce301 = var302;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_300, var302); /* Direct call array#AbstractArray#push on <var_300:Array[String]>*/
}
if (likely(varonce305!=NULL)) {
var306 = varonce305;
} else {
var307 = "-r";
var308 = core__abstract_text___CString___to_s_full(var307, 2l, 2l);
var306 = var308;
varonce305 = var306;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_300, var306); /* Direct call array#AbstractArray#push on <var_300:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_300, var_android_dir); /* Direct call array#AbstractArray#push on <var_300:Array[String]>*/
}
{
var309 = nitc___nitc__Toolchain___root_compile_dir(self);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_300, var309); /* Direct call array#AbstractArray#push on <var_300:Array[String]>*/
}
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "Android project error";
var313 = core__abstract_text___CString___to_s_full(var312, 21l, 21l);
var311 = var313;
varonce310 = var311;
}
{
nitc___nitc__ToolContext___exec_and_check(var296, var_300, var311); /* Direct call toolcontext#ToolContext#exec_and_check on <var296:ToolContext>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_261); /* next on <var_261:IndexedIterator[String]>*/
}
}
BREAK_label263: (void)0;
{
((void(*)(val* self))((((long)var_261&3)?class_info[((long)var_261&3)]:var_261->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_261); /* finish on <var_261:IndexedIterator[String]>*/
}
var314 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var314, 6l); /* Direct call array#Array#with_capacity on <var314:Array[String]>*/
}
var_315 = var314;
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "ldpi";
var319 = core__abstract_text___CString___to_s_full(var318, 4l, 4l);
var317 = var319;
varonce316 = var317;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_315, var317); /* Direct call array#AbstractArray#push on <var_315:Array[String]>*/
}
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = "mdpi";
var323 = core__abstract_text___CString___to_s_full(var322, 4l, 4l);
var321 = var323;
varonce320 = var321;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_315, var321); /* Direct call array#AbstractArray#push on <var_315:Array[String]>*/
}
if (likely(varonce324!=NULL)) {
var325 = varonce324;
} else {
var326 = "hdpi";
var327 = core__abstract_text___CString___to_s_full(var326, 4l, 4l);
var325 = var327;
varonce324 = var325;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_315, var325); /* Direct call array#AbstractArray#push on <var_315:Array[String]>*/
}
if (likely(varonce328!=NULL)) {
var329 = varonce328;
} else {
var330 = "xhdpi";
var331 = core__abstract_text___CString___to_s_full(var330, 5l, 5l);
var329 = var331;
varonce328 = var329;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_315, var329); /* Direct call array#AbstractArray#push on <var_315:Array[String]>*/
}
if (likely(varonce332!=NULL)) {
var333 = varonce332;
} else {
var334 = "xxhdpi";
var335 = core__abstract_text___CString___to_s_full(var334, 6l, 6l);
var333 = var335;
varonce332 = var333;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_315, var333); /* Direct call array#AbstractArray#push on <var_315:Array[String]>*/
}
if (likely(varonce336!=NULL)) {
var337 = varonce336;
} else {
var338 = "xxxhdpi";
var339 = core__abstract_text___CString___to_s_full(var338, 7l, 7l);
var337 = var339;
varonce336 = var337;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_315, var337); /* Direct call array#AbstractArray#push on <var_315:Array[String]>*/
}
var_resolutions = var_315;
var_icon_available = 0;
var_340 = var_resolutions;
{
var341 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_340);
}
var_342 = var341;
for(;;) {
{
var343 = ((short int(*)(val* self))((((long)var_342&3)?class_info[((long)var_342&3)]:var_342->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_342); /* is_ok on <var_342:IndexedIterator[String]>*/
}
if (var343){
} else {
goto BREAK_label344;
}
{
var345 = ((val*(*)(val* self))((((long)var_342&3)?class_info[((long)var_342&3)]:var_342->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_342); /* item on <var_342:IndexedIterator[String]>*/
}
var_res = var345;
if (unlikely(varonce346==NULL)) {
var347 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce348!=NULL)) {
var349 = varonce348;
} else {
var350 = "android/res/drawable-";
var351 = core__abstract_text___CString___to_s_full(var350, 21l, 21l);
var349 = var351;
varonce348 = var349;
}
((struct instance_core__NativeArray*)var347)->values[0]=var349;
if (likely(varonce352!=NULL)) {
var353 = varonce352;
} else {
var354 = "/icon.png";
var355 = core__abstract_text___CString___to_s_full(var354, 9l, 9l);
var353 = var355;
varonce352 = var353;
}
((struct instance_core__NativeArray*)var347)->values[2]=var353;
} else {
var347 = varonce346;
varonce346 = NULL;
}
((struct instance_core__NativeArray*)var347)->values[1]=var_res;
{
var356 = ((val*(*)(val* self))(var347->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var347); /* native_to_s on <var347:NativeArray[String]>*/
}
varonce346 = var347;
{
var357 = core__file___String____47d(var_project_root, var356);
}
var_path358 = var357;
{
var359 = core__file___Text___file_exists(var_path358);
}
if (var359){
var_icon_available = 1;
goto BREAK_label344;
} else {
}
{
((void(*)(val* self))((((long)var_342&3)?class_info[((long)var_342&3)]:var_342->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_342); /* next on <var_342:IndexedIterator[String]>*/
}
}
BREAK_label344: (void)0;
{
((void(*)(val* self))((((long)var_342&3)?class_info[((long)var_342&3)]:var_342->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_342); /* finish on <var_342:IndexedIterator[String]>*/
}
if (var_icon_available){
if (likely(varonce360!=NULL)) {
var361 = varonce360;
} else {
var362 = "android:icon=\"@drawable/icon\"";
var363 = core__abstract_text___CString___to_s_full(var362, 29l, 29l);
var361 = var363;
varonce360 = var361;
}
var_icon_declaration = var361;
} else {
if (likely(varonce364!=NULL)) {
var365 = varonce364;
} else {
var366 = "";
var367 = core__abstract_text___CString___to_s_full(var366, 0l, 0l);
var365 = var367;
varonce364 = var365;
}
var_icon_declaration = var365;
}
if (unlikely(varonce368==NULL)) {
var369 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce370!=NULL)) {
var371 = varonce370;
} else {
var372 = "/src/";
var373 = core__abstract_text___CString___to_s_full(var372, 5l, 5l);
var371 = var373;
varonce370 = var371;
}
((struct instance_core__NativeArray*)var369)->values[1]=var371;
} else {
var369 = varonce368;
varonce368 = NULL;
}
((struct instance_core__NativeArray*)var369)->values[0]=var_android_project_root;
{
var374 = ((val*(*)(val* self))(var369->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var369); /* native_to_s on <var369:NativeArray[String]>*/
}
varonce368 = var369;
var_dir = var374;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:AndroidToolchain> */
var377 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:AndroidToolchain> */
if (unlikely(var377 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var375 = var377;
RET_LABEL376:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var375) on <var375:AbstractCompiler> */
var380 = var375->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var375:AbstractCompiler> */
if (unlikely(var380 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var378 = var380;
RET_LABEL379:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var378) on <var378:MModule> */
var383 = var378->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var378:MModule> */
if (unlikely(var383 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var381 = var383;
RET_LABEL382:(void)0;
}
}
{
var384 = poset___poset__POSetElement___greaters(var381);
}
var_385 = var384;
{
var386 = ((val*(*)(val* self))((((long)var_385&3)?class_info[((long)var_385&3)]:var_385->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_385); /* iterator on <var_385:Collection[MModule]>*/
}
var_387 = var386;
for(;;) {
{
var388 = ((short int(*)(val* self))((((long)var_387&3)?class_info[((long)var_387&3)]:var_387->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_387); /* is_ok on <var_387:Iterator[MModule]>*/
}
if (var388){
} else {
goto BREAK_label389;
}
{
var390 = ((val*(*)(val* self))((((long)var_387&3)?class_info[((long)var_387&3)]:var_387->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_387); /* item on <var_387:Iterator[MModule]>*/
}
var_mmodule = var390;
{
{ /* Inline extra_java_files#MModule#extra_java_files (var_mmodule) on <var_mmodule:MModule> */
var393 = var_mmodule->attrs[COLOR_nitc__extra_java_files__MModule___extra_java_files].val; /* _extra_java_files on <var_mmodule:MModule> */
var391 = var393;
RET_LABEL392:(void)0;
}
}
var_extra_java_files = var391;
if (var_extra_java_files == NULL) {
var394 = 0; /* is null */
} else {
var394 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_extra_java_files,((val*)NULL)) on <var_extra_java_files:nullable Array[JavaFile]> */
var_other = ((val*)NULL);
{
var397 = ((short int(*)(val* self, val* p0))(var_extra_java_files->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_extra_java_files, var_other); /* == on <var_extra_java_files:nullable Array[JavaFile](Array[JavaFile])>*/
}
var398 = !var397;
var395 = var398;
goto RET_LABEL396;
RET_LABEL396:(void)0;
}
var394 = var395;
}
if (var394){
var_399 = var_extra_java_files;
{
var400 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_399);
}
var_401 = var400;
for(;;) {
{
var402 = ((short int(*)(val* self))((((long)var_401&3)?class_info[((long)var_401&3)]:var_401->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_401); /* is_ok on <var_401:IndexedIterator[JavaFile]>*/
}
if (var402){
} else {
goto BREAK_label403;
}
{
var404 = ((val*(*)(val* self))((((long)var_401&3)?class_info[((long)var_401&3)]:var_401->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_401); /* item on <var_401:IndexedIterator[JavaFile]>*/
}
var_file = var404;
{
{ /* Inline c_tools#ExternFile#filename (var_file) on <var_file:JavaFile> */
var407 = var_file->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <var_file:JavaFile> */
if (unlikely(var407 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var405 = var407;
RET_LABEL406:(void)0;
}
}
var_path408 = var405;
{
var409 = ((val*(*)(val* self, val* p0))(var_path408->class->vft[COLOR_core__file__String__basename]))(var_path408, ((val*)NULL)); /* basename on <var_path408:String>*/
}
{
var410 = core__file___String____47d(var_dir, var409);
}
{
core__file___String___file_copy_to(var_path408, var410); /* Direct call file#String#file_copy_to on <var_path408:String>*/
}
{
((void(*)(val* self))((((long)var_401&3)?class_info[((long)var_401&3)]:var_401->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_401); /* next on <var_401:IndexedIterator[JavaFile]>*/
}
}
BREAK_label403: (void)0;
{
((void(*)(val* self))((((long)var_401&3)?class_info[((long)var_401&3)]:var_401->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_401); /* finish on <var_401:IndexedIterator[JavaFile]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_387&3)?class_info[((long)var_387&3)]:var_387->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_387); /* next on <var_387:Iterator[MModule]>*/
}
}
BREAK_label389: (void)0;
{
((void(*)(val* self))((((long)var_387&3)?class_info[((long)var_387&3)]:var_387->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_387); /* finish on <var_387:Iterator[MModule]>*/
}
if (unlikely(varonce411==NULL)) {
var412 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "/jni/";
var416 = core__abstract_text___CString___to_s_full(var415, 5l, 5l);
var414 = var416;
varonce413 = var414;
}
((struct instance_core__NativeArray*)var412)->values[1]=var414;
} else {
var412 = varonce411;
varonce411 = NULL;
}
((struct instance_core__NativeArray*)var412)->values[0]=var_android_project_root;
{
var417 = ((val*(*)(val* self))(var412->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var412); /* native_to_s on <var412:NativeArray[String]>*/
}
varonce411 = var412;
var_dir = var417;
if (unlikely(varonce418==NULL)) {
var419 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce420!=NULL)) {
var421 = varonce420;
} else {
var422 = "APP_ABI := armeabi armeabi-v7a x86\nAPP_PLATFORM := android-";
var423 = core__abstract_text___CString___to_s_full(var422, 59l, 59l);
var421 = var423;
varonce420 = var421;
}
((struct instance_core__NativeArray*)var419)->values[0]=var421;
if (likely(varonce424!=NULL)) {
var425 = varonce424;
} else {
var426 = "\n";
var427 = core__abstract_text___CString___to_s_full(var426, 1l, 1l);
var425 = var427;
varonce424 = var425;
}
((struct instance_core__NativeArray*)var419)->values[2]=var425;
} else {
var419 = varonce418;
varonce418 = NULL;
}
var429 = (long)(var_app_target_api)>>2;
var428 = core__flat___Int___core__abstract_text__Object__to_s(var429);
((struct instance_core__NativeArray*)var419)->values[1]=var428;
{
var430 = ((val*(*)(val* self))(var419->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var419); /* native_to_s on <var419:NativeArray[String]>*/
}
varonce418 = var419;
if (unlikely(varonce431==NULL)) {
var432 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce433!=NULL)) {
var434 = varonce433;
} else {
var435 = "/Application.mk";
var436 = core__abstract_text___CString___to_s_full(var435, 15l, 15l);
var434 = var436;
varonce433 = var434;
}
((struct instance_core__NativeArray*)var432)->values[1]=var434;
} else {
var432 = varonce431;
varonce431 = NULL;
}
((struct instance_core__NativeArray*)var432)->values[0]=var_dir;
{
var437 = ((val*(*)(val* self))(var432->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var432); /* native_to_s on <var432:NativeArray[String]>*/
}
varonce431 = var432;
{
core__file___Writable___write_to_file(var430, var437); /* Direct call file#Writable#write_to_file on <var430:String>*/
}
if (likely(varonce438!=NULL)) {
var439 = varonce438;
} else {
var440 = "include $(call all-subdir-makefiles)\n";
var441 = core__abstract_text___CString___to_s_full(var440, 37l, 37l);
var439 = var441;
varonce438 = var439;
}
if (unlikely(varonce442==NULL)) {
var443 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce444!=NULL)) {
var445 = varonce444;
} else {
var446 = "/Android.mk";
var447 = core__abstract_text___CString___to_s_full(var446, 11l, 11l);
var445 = var447;
varonce444 = var445;
}
((struct instance_core__NativeArray*)var443)->values[1]=var445;
} else {
var443 = varonce442;
varonce442 = NULL;
}
((struct instance_core__NativeArray*)var443)->values[0]=var_dir;
{
var448 = ((val*(*)(val* self))(var443->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var443); /* native_to_s on <var443:NativeArray[String]>*/
}
varonce442 = var443;
{
core__file___Writable___write_to_file(var439, var448); /* Direct call file#Writable#write_to_file on <var439:String>*/
}
var449 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var449); /* Direct call array#Array#init on <var449:Array[String]>*/
}
var_ldflags = var449;
if (likely(varonce450!=NULL)) {
var451 = varonce450;
} else {
var452 = "android";
var453 = core__abstract_text___CString___to_s_full(var452, 7l, 7l);
var451 = var453;
varonce450 = var451;
}
var_platform_name = var451;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:AndroidToolchain> */
var456 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:AndroidToolchain> */
if (unlikely(var456 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var454 = var456;
RET_LABEL455:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var454) on <var454:AbstractCompiler> */
var459 = var454->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var454:AbstractCompiler> */
if (unlikely(var459 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var457 = var459;
RET_LABEL458:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var457) on <var457:MModule> */
var462 = var457->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var457:MModule> */
if (unlikely(var462 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var460 = var462;
RET_LABEL461:(void)0;
}
}
{
var463 = poset___poset__POSetElement___greaters(var460);
}
var_464 = var463;
{
var465 = ((val*(*)(val* self))((((long)var_464&3)?class_info[((long)var_464&3)]:var_464->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_464); /* iterator on <var_464:Collection[MModule]>*/
}
var_466 = var465;
for(;;) {
{
var467 = ((short int(*)(val* self))((((long)var_466&3)?class_info[((long)var_466&3)]:var_466->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_466); /* is_ok on <var_466:Iterator[MModule]>*/
}
if (var467){
} else {
goto BREAK_label468;
}
{
var469 = ((val*(*)(val* self))((((long)var_466&3)?class_info[((long)var_466&3)]:var_466->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_466); /* item on <var_466:Iterator[MModule]>*/
}
var_mmodule470 = var469;
{
{ /* Inline light_c#MModule#ldflags (var_mmodule470) on <var_mmodule470:MModule> */
var473 = var_mmodule470->attrs[COLOR_nitc__light_c__MModule___ldflags].val; /* _ldflags on <var_mmodule470:MModule> */
if (unlikely(var473 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ldflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 80);
fatal_exit(1);
}
var471 = var473;
RET_LABEL472:(void)0;
}
}
{
var474 = core___core__HashMap___core__abstract_collection__MapRead__keys(var471);
}
{
var475 = ((short int(*)(val* self, val* p0))((((long)var474&3)?class_info[((long)var474&3)]:var474->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var474, var_platform_name); /* has on <var474:RemovableCollection[nullable Object](RemovableCollection[String])>*/
}
if (var475){
{
{ /* Inline light_c#MModule#ldflags (var_mmodule470) on <var_mmodule470:MModule> */
var478 = var_mmodule470->attrs[COLOR_nitc__light_c__MModule___ldflags].val; /* _ldflags on <var_mmodule470:MModule> */
if (unlikely(var478 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ldflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 80);
fatal_exit(1);
}
var476 = var478;
RET_LABEL477:(void)0;
}
}
{
var479 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var476, var_platform_name);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_ldflags, var479); /* Direct call array#Array#add_all on <var_ldflags:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_466&3)?class_info[((long)var_466&3)]:var_466->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_466); /* next on <var_466:Iterator[MModule]>*/
}
}
BREAK_label468: (void)0;
{
((void(*)(val* self))((((long)var_466&3)?class_info[((long)var_466&3)]:var_466->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_466); /* finish on <var_466:Iterator[MModule]>*/
}
var_dir = var_compile_dir;
if (unlikely(varonce480==NULL)) {
var481 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce482!=NULL)) {
var483 = varonce482;
} else {
var484 = "LOCAL_PATH := $(call my-dir)\ninclude $(CLEAR_VARS)\n\nLOCAL_CFLAGS\t:= -D ANDROID -D WITH_LIBGC\nLOCAL_MODULE    := main\nLOCAL_SRC_FILES := \\\n";
var485 = core__abstract_text___CString___to_s_full(var484, 138l, 138l);
var483 = var485;
varonce482 = var483;
}
((struct instance_core__NativeArray*)var481)->values[0]=var483;
if (likely(varonce486!=NULL)) {
var487 = varonce486;
} else {
var488 = "\nLOCAL_LDLIBS    := ";
var489 = core__abstract_text___CString___to_s_full(var488, 20l, 20l);
var487 = var489;
varonce486 = var487;
}
((struct instance_core__NativeArray*)var481)->values[2]=var487;
if (likely(varonce490!=NULL)) {
var491 = varonce490;
} else {
var492 = " $(TARGET_ARCH)/libgc.a\nLOCAL_STATIC_LIBRARIES := android_native_app_glue\n\ninclude $(BUILD_SHARED_LIBRARY)\n\n$(call import-module,android/native_app_glue)\n\t\t";
var493 = core__abstract_text___CString___to_s_full(var492, 156l, 156l);
var491 = var493;
varonce490 = var491;
}
((struct instance_core__NativeArray*)var481)->values[4]=var491;
} else {
var481 = varonce480;
varonce480 = NULL;
}
if (likely(varonce494!=NULL)) {
var495 = varonce494;
} else {
var496 = " \\\n";
var497 = core__abstract_text___CString___to_s_full(var496, 3l, 3l);
var495 = var497;
varonce494 = var495;
}
{
var498 = core__abstract_text___Collection___join(var_cfiles, var495, ((val*)NULL));
}
((struct instance_core__NativeArray*)var481)->values[1]=var498;
if (likely(varonce499!=NULL)) {
var500 = varonce499;
} else {
var501 = " ";
var502 = core__abstract_text___CString___to_s_full(var501, 1l, 1l);
var500 = var502;
varonce499 = var500;
}
{
var503 = core__abstract_text___Collection___join(var_ldflags, var500, ((val*)NULL));
}
((struct instance_core__NativeArray*)var481)->values[3]=var503;
{
var504 = ((val*(*)(val* self))(var481->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var481); /* native_to_s on <var481:NativeArray[String]>*/
}
varonce480 = var481;
if (unlikely(varonce505==NULL)) {
var506 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce507!=NULL)) {
var508 = varonce507;
} else {
var509 = "/Android.mk";
var510 = core__abstract_text___CString___to_s_full(var509, 11l, 11l);
var508 = var510;
varonce507 = var508;
}
((struct instance_core__NativeArray*)var506)->values[1]=var508;
} else {
var506 = varonce505;
varonce505 = NULL;
}
((struct instance_core__NativeArray*)var506)->values[0]=var_dir;
{
var511 = ((val*(*)(val* self))(var506->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var506); /* native_to_s on <var506:NativeArray[String]>*/
}
varonce505 = var506;
{
core__file___Writable___write_to_file(var504, var511); /* Direct call file#Writable#write_to_file on <var504:String>*/
}
var_dir = var_android_project_root;
var512 = NEW_core__FileWriter(&type_core__FileWriter);
if (unlikely(varonce513==NULL)) {
var514 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce515!=NULL)) {
var516 = varonce515;
} else {
var517 = "/AndroidManifest.xml";
var518 = core__abstract_text___CString___to_s_full(var517, 20l, 20l);
var516 = var518;
varonce515 = var516;
}
((struct instance_core__NativeArray*)var514)->values[1]=var516;
} else {
var514 = varonce513;
varonce513 = NULL;
}
((struct instance_core__NativeArray*)var514)->values[0]=var_dir;
{
var519 = ((val*(*)(val* self))(var514->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var514); /* native_to_s on <var514:NativeArray[String]>*/
}
varonce513 = var514;
{
core___core__FileWriter___open(var512, var519); /* Direct call file#FileWriter#open on <var512:FileWriter>*/
}
var_manifest_file = var512;
if (unlikely(varonce520==NULL)) {
var521 = NEW_core__NativeArray(17l, &type_core__NativeArray__core__String);
if (likely(varonce522!=NULL)) {
var523 = varonce522;
} else {
var524 = "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<!-- BEGIN_INCLUDE(manifest) -->\n<manifest xmlns:android=\"http://schemas.android.com/apk/res/android\"\n        package=\"";
var525 = core__abstract_text___CString___to_s_full(var524, 158l, 158l);
var523 = var525;
varonce522 = var523;
}
((struct instance_core__NativeArray*)var521)->values[0]=var523;
if (likely(varonce526!=NULL)) {
var527 = varonce526;
} else {
var528 = "\"\n        android:versionCode=\"";
var529 = core__abstract_text___CString___to_s_full(var528, 31l, 31l);
var527 = var529;
varonce526 = var527;
}
((struct instance_core__NativeArray*)var521)->values[2]=var527;
if (likely(varonce530!=NULL)) {
var531 = varonce530;
} else {
var532 = "\"\n        android:versionName=\"";
var533 = core__abstract_text___CString___to_s_full(var532, 31l, 31l);
var531 = var533;
varonce530 = var531;
}
((struct instance_core__NativeArray*)var521)->values[4]=var531;
if (likely(varonce534!=NULL)) {
var535 = varonce534;
} else {
var536 = "\">\n\n    <uses-sdk\n        android:minSdkVersion=\"";
var537 = core__abstract_text___CString___to_s_full(var536, 49l, 49l);
var535 = var537;
varonce534 = var535;
}
((struct instance_core__NativeArray*)var521)->values[6]=var535;
if (likely(varonce538!=NULL)) {
var539 = varonce538;
} else {
var540 = "\"\n        android:targetSdkVersion=\"";
var541 = core__abstract_text___CString___to_s_full(var540, 36l, 36l);
var539 = var541;
varonce538 = var539;
}
((struct instance_core__NativeArray*)var521)->values[8]=var539;
if (likely(varonce542!=NULL)) {
var543 = varonce542;
} else {
var544 = "\"\n        ";
var545 = core__abstract_text___CString___to_s_full(var544, 10l, 10l);
var543 = var545;
varonce542 = var543;
}
((struct instance_core__NativeArray*)var521)->values[10]=var543;
if (likely(varonce546!=NULL)) {
var547 = varonce546;
} else {
var548 = " />\n\n    <application\n\t\tandroid:label=\"@string/app_name\"\n\t\tandroid:hasCode=\"true\"\n\t\tandroid:debuggable=\"";
var549 = core__abstract_text___CString___to_s_full(var548, 104l, 104l);
var547 = var549;
varonce546 = var547;
}
((struct instance_core__NativeArray*)var521)->values[12]=var547;
if (likely(varonce550!=NULL)) {
var551 = varonce550;
} else {
var552 = "\"\n\t\t";
var553 = core__abstract_text___CString___to_s_full(var552, 4l, 4l);
var551 = var553;
varonce550 = var551;
}
((struct instance_core__NativeArray*)var521)->values[14]=var551;
if (likely(varonce554!=NULL)) {
var555 = varonce554;
} else {
var556 = ">\n";
var557 = core__abstract_text___CString___to_s_full(var556, 2l, 2l);
var555 = var557;
varonce554 = var555;
}
((struct instance_core__NativeArray*)var521)->values[16]=var555;
} else {
var521 = varonce520;
varonce520 = NULL;
}
((struct instance_core__NativeArray*)var521)->values[1]=var_app_package;
{
var558 = nitc___nitc__AppProject___version_code(var_project);
}
var559 = core__flat___Int___core__abstract_text__Object__to_s(var558);
((struct instance_core__NativeArray*)var521)->values[3]=var559;
((struct instance_core__NativeArray*)var521)->values[5]=var_app_version;
var561 = (long)(var_app_min_api)>>2;
var560 = core__flat___Int___core__abstract_text__Object__to_s(var561);
((struct instance_core__NativeArray*)var521)->values[7]=var560;
var563 = (long)(var_app_target_api)>>2;
var562 = core__flat___Int___core__abstract_text__Object__to_s(var563);
((struct instance_core__NativeArray*)var521)->values[9]=var562;
((struct instance_core__NativeArray*)var521)->values[11]=var_app_max_api;
var564 = !var_release;
var565 = core__abstract_text___Bool___Object__to_s(var564);
((struct instance_core__NativeArray*)var521)->values[13]=var565;
((struct instance_core__NativeArray*)var521)->values[15]=var_icon_declaration;
{
var566 = ((val*(*)(val* self))(var521->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var521); /* native_to_s on <var521:NativeArray[String]>*/
}
varonce520 = var521;
{
core___core__FileWriter___core__stream__Writer__write(var_manifest_file, var566); /* Direct call file#FileWriter#write on <var_manifest_file:FileWriter>*/
}
{
{ /* Inline android_annotations#AndroidProject#activities (var_project) on <var_project:AndroidProject> */
var569 = var_project->attrs[COLOR_nitc__android_annotations__AndroidProject___activities].val; /* _activities on <var_project:AndroidProject> */
if (unlikely(var569 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _activities");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 44);
fatal_exit(1);
}
var567 = var569;
RET_LABEL568:(void)0;
}
}
var_570 = var567;
{
var571 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_570);
}
var_572 = var571;
for(;;) {
{
var573 = ((short int(*)(val* self))((((long)var_572&3)?class_info[((long)var_572&3)]:var_572->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_572); /* is_ok on <var_572:IndexedIterator[String]>*/
}
if (var573){
} else {
goto BREAK_label574;
}
{
var575 = ((val*(*)(val* self))((((long)var_572&3)?class_info[((long)var_572&3)]:var_572->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_572); /* item on <var_572:IndexedIterator[String]>*/
}
var_activity = var575;
if (unlikely(varonce576==NULL)) {
var577 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce578!=NULL)) {
var579 = varonce578;
} else {
var580 = "        <activity android:name=\"";
var581 = core__abstract_text___CString___to_s_full(var580, 32l, 32l);
var579 = var581;
varonce578 = var579;
}
((struct instance_core__NativeArray*)var577)->values[0]=var579;
if (likely(varonce582!=NULL)) {
var583 = varonce582;
} else {
var584 = "\"\n                android:label=\"@string/app_name\"\n                ";
var585 = core__abstract_text___CString___to_s_full(var584, 67l, 67l);
var583 = var585;
varonce582 = var583;
}
((struct instance_core__NativeArray*)var577)->values[2]=var583;
if (likely(varonce586!=NULL)) {
var587 = varonce586;
} else {
var588 = "\n                ";
var589 = core__abstract_text___CString___to_s_full(var588, 17l, 17l);
var587 = var589;
varonce586 = var587;
}
((struct instance_core__NativeArray*)var577)->values[4]=var587;
if (likely(varonce590!=NULL)) {
var591 = varonce590;
} else {
var592 = ">\n            <intent-filter>\n                <action android:name=\"android.intent.action.MAIN\" />\n                <category android:name=\"android.intent.category.LAUNCHER\" />\n            </intent-filter>\n        </activity>\n";
var593 = core__abstract_text___CString___to_s_full(var592, 225l, 225l);
var591 = var593;
varonce590 = var591;
}
((struct instance_core__NativeArray*)var577)->values[6]=var591;
} else {
var577 = varonce576;
varonce576 = NULL;
}
((struct instance_core__NativeArray*)var577)->values[1]=var_activity;
{
{ /* Inline android_annotations#AndroidProject#manifest_activity_attributes (var_project) on <var_project:AndroidProject> */
var596 = var_project->attrs[COLOR_nitc__android_annotations__AndroidProject___manifest_activity_attributes].val; /* _manifest_activity_attributes on <var_project:AndroidProject> */
if (unlikely(var596 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _manifest_activity_attributes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 32);
fatal_exit(1);
}
var594 = var596;
RET_LABEL595:(void)0;
}
}
if (likely(varonce597!=NULL)) {
var598 = varonce597;
} else {
var599 = "\n";
var600 = core__abstract_text___CString___to_s_full(var599, 1l, 1l);
var598 = var600;
varonce597 = var598;
}
{
var601 = core__abstract_text___Collection___join(var594, var598, ((val*)NULL));
}
((struct instance_core__NativeArray*)var577)->values[3]=var601;
((struct instance_core__NativeArray*)var577)->values[5]=var_icon_declaration;
{
var602 = ((val*(*)(val* self))(var577->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var577); /* native_to_s on <var577:NativeArray[String]>*/
}
varonce576 = var577;
{
core___core__FileWriter___core__stream__Writer__write(var_manifest_file, var602); /* Direct call file#FileWriter#write on <var_manifest_file:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_572&3)?class_info[((long)var_572&3)]:var_572->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_572); /* next on <var_572:IndexedIterator[String]>*/
}
}
BREAK_label574: (void)0;
{
((void(*)(val* self))((((long)var_572&3)?class_info[((long)var_572&3)]:var_572->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_572); /* finish on <var_572:IndexedIterator[String]>*/
}
if (unlikely(varonce603==NULL)) {
var604 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce605!=NULL)) {
var606 = varonce605;
} else {
var607 = "\n\n    </application>\n\n";
var608 = core__abstract_text___CString___to_s_full(var607, 22l, 22l);
var606 = var608;
varonce605 = var606;
}
((struct instance_core__NativeArray*)var604)->values[1]=var606;
if (likely(varonce609!=NULL)) {
var610 = varonce609;
} else {
var611 = "\n\n</manifest>\n<!-- END_INCLUDE(manifest) -->\n";
var612 = core__abstract_text___CString___to_s_full(var611, 45l, 45l);
var610 = var612;
varonce609 = var610;
}
((struct instance_core__NativeArray*)var604)->values[3]=var610;
} else {
var604 = varonce603;
varonce603 = NULL;
}
{
{ /* Inline android_annotations#AndroidProject#manifest_application_lines (var_project) on <var_project:AndroidProject> */
var615 = var_project->attrs[COLOR_nitc__android_annotations__AndroidProject___manifest_application_lines].val; /* _manifest_application_lines on <var_project:AndroidProject> */
if (unlikely(var615 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _manifest_application_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 29);
fatal_exit(1);
}
var613 = var615;
RET_LABEL614:(void)0;
}
}
if (likely(varonce616!=NULL)) {
var617 = varonce616;
} else {
var618 = "\n";
var619 = core__abstract_text___CString___to_s_full(var618, 1l, 1l);
var617 = var619;
varonce616 = var617;
}
{
var620 = core__abstract_text___Collection___join(var613, var617, ((val*)NULL));
}
((struct instance_core__NativeArray*)var604)->values[0]=var620;
{
{ /* Inline android_annotations#AndroidProject#manifest_lines (var_project) on <var_project:AndroidProject> */
var623 = var_project->attrs[COLOR_nitc__android_annotations__AndroidProject___manifest_lines].val; /* _manifest_lines on <var_project:AndroidProject> */
if (unlikely(var623 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _manifest_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 26);
fatal_exit(1);
}
var621 = var623;
RET_LABEL622:(void)0;
}
}
if (likely(varonce624!=NULL)) {
var625 = varonce624;
} else {
var626 = "\n";
var627 = core__abstract_text___CString___to_s_full(var626, 1l, 1l);
var625 = var627;
varonce624 = var625;
}
{
var628 = core__abstract_text___Collection___join(var621, var625, ((val*)NULL));
}
((struct instance_core__NativeArray*)var604)->values[2]=var628;
{
var629 = ((val*(*)(val* self))(var604->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var604); /* native_to_s on <var604:NativeArray[String]>*/
}
varonce603 = var604;
{
core___core__FileWriter___core__stream__Writer__write(var_manifest_file, var629); /* Direct call file#FileWriter#write on <var_manifest_file:FileWriter>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_manifest_file); /* Direct call file#FileWriter#close on <var_manifest_file:FileWriter>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var632 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var632 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var630 = var632;
RET_LABEL631:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#nit_dir (var630) on <var630:ToolContext> */
var635 = var630->attrs[COLOR_nitc__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <var630:ToolContext> */
var633 = var635;
RET_LABEL634:(void)0;
}
}
var_nit_dir = var633;
if (likely(varonce636!=NULL)) {
var637 = varonce636;
} else {
var638 = "share/";
var639 = core__abstract_text___CString___to_s_full(var638, 6l, 6l);
var637 = var639;
varonce636 = var637;
}
if (var_nit_dir == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android, 279);
fatal_exit(1);
} else {
var640 = core__file___String____47d(var_nit_dir, var637);
}
var_share_dir = var640;
{
var641 = core__file___Text___file_exists(var_share_dir);
}
var642 = !var641;
if (var642){
var643 = glob_sys;
if (likely(varonce644!=NULL)) {
var645 = varonce644;
} else {
var646 = "Android project error: Nit share directory not found, please use the environment variable NIT_DIR";
var647 = core__abstract_text___CString___to_s_full(var646, 97l, 97l);
var645 = var647;
varonce644 = var645;
}
{
core__file___Sys___print(var643, var645); /* Direct call file#Sys#print on <var643:Sys>*/
}
var648 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var648,1l) on <var648:Sys> */
exit(1l);
RET_LABEL649:(void)0;
}
}
} else {
}
{
var650 = core__file___String___realpath(var_share_dir);
}
var_share_dir = var650;
if (unlikely(varonce651==NULL)) {
var652 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce653!=NULL)) {
var654 = varonce653;
} else {
var655 = "/libgc/arm/lib";
var656 = core__abstract_text___CString___to_s_full(var655, 14l, 14l);
var654 = var656;
varonce653 = var654;
}
((struct instance_core__NativeArray*)var652)->values[1]=var654;
} else {
var652 = varonce651;
varonce651 = NULL;
}
((struct instance_core__NativeArray*)var652)->values[0]=var_share_dir;
{
var657 = ((val*(*)(val* self))(var652->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var652); /* native_to_s on <var652:NativeArray[String]>*/
}
varonce651 = var652;
{
var658 = core__file___Text___file_exists(var657);
}
var659 = !var658;
if (var659){
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var662 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var662 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var660 = var662;
RET_LABEL661:(void)0;
}
}
var663 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var663, 1l); /* Direct call array#Array#with_capacity on <var663:Array[String]>*/
}
var_664 = var663;
if (unlikely(varonce665==NULL)) {
var666 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce667!=NULL)) {
var668 = varonce667;
} else {
var669 = "/libgc/android-setup-libgc.sh";
var670 = core__abstract_text___CString___to_s_full(var669, 29l, 29l);
var668 = var670;
varonce667 = var668;
}
((struct instance_core__NativeArray*)var666)->values[1]=var668;
} else {
var666 = varonce665;
varonce665 = NULL;
}
((struct instance_core__NativeArray*)var666)->values[0]=var_share_dir;
{
var671 = ((val*(*)(val* self))(var666->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var666); /* native_to_s on <var666:NativeArray[String]>*/
}
varonce665 = var666;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_664, var671); /* Direct call array#AbstractArray#push on <var_664:Array[String]>*/
}
if (likely(varonce672!=NULL)) {
var673 = varonce672;
} else {
var674 = "Android project error";
var675 = core__abstract_text___CString___to_s_full(var674, 21l, 21l);
var673 = var675;
varonce672 = var673;
}
{
nitc___nitc__ToolContext___exec_and_check(var660, var_664, var673); /* Direct call toolcontext#ToolContext#exec_and_check on <var660:ToolContext>*/
}
} else {
}
var676 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var676, 3l); /* Direct call array#Array#with_capacity on <var676:Array[String]>*/
}
var_677 = var676;
if (likely(varonce678!=NULL)) {
var679 = varonce678;
} else {
var680 = "arm";
var681 = core__abstract_text___CString___to_s_full(var680, 3l, 3l);
var679 = var681;
varonce678 = var679;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_677, var679); /* Direct call array#AbstractArray#push on <var_677:Array[String]>*/
}
if (likely(varonce682!=NULL)) {
var683 = varonce682;
} else {
var684 = "x86";
var685 = core__abstract_text___CString___to_s_full(var684, 3l, 3l);
var683 = var685;
varonce682 = var683;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_677, var683); /* Direct call array#AbstractArray#push on <var_677:Array[String]>*/
}
if (likely(varonce686!=NULL)) {
var687 = varonce686;
} else {
var688 = "mips";
var689 = core__abstract_text___CString___to_s_full(var688, 4l, 4l);
var687 = var689;
varonce686 = var687;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_677, var687); /* Direct call array#AbstractArray#push on <var_677:Array[String]>*/
}
var_690 = var_677;
{
var691 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_690);
}
var_692 = var691;
for(;;) {
{
var693 = ((short int(*)(val* self))((((long)var_692&3)?class_info[((long)var_692&3)]:var_692->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_692); /* is_ok on <var_692:IndexedIterator[String]>*/
}
if (var693){
} else {
goto BREAK_label694;
}
{
var695 = ((val*(*)(val* self))((((long)var_692&3)?class_info[((long)var_692&3)]:var_692->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_692); /* item on <var_692:IndexedIterator[String]>*/
}
var_arch = var695;
{
var696 = core__file___String____47d(var_android_project_root, var_arch);
}
var_dir = var696;
{
var697 = core__file___String___mkdir(var_dir, ((val*)NULL));
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var700 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var700 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var698 = var700;
RET_LABEL699:(void)0;
}
}
var701 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var701, 3l); /* Direct call array#Array#with_capacity on <var701:Array[String]>*/
}
var_702 = var701;
if (likely(varonce703!=NULL)) {
var704 = varonce703;
} else {
var705 = "cp";
var706 = core__abstract_text___CString___to_s_full(var705, 2l, 2l);
var704 = var706;
varonce703 = var704;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_702, var704); /* Direct call array#AbstractArray#push on <var_702:Array[String]>*/
}
if (unlikely(varonce707==NULL)) {
var708 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce709!=NULL)) {
var710 = varonce709;
} else {
var711 = "/libgc/";
var712 = core__abstract_text___CString___to_s_full(var711, 7l, 7l);
var710 = var712;
varonce709 = var710;
}
((struct instance_core__NativeArray*)var708)->values[1]=var710;
if (likely(varonce713!=NULL)) {
var714 = varonce713;
} else {
var715 = "/lib/libgc.a";
var716 = core__abstract_text___CString___to_s_full(var715, 12l, 12l);
var714 = var716;
varonce713 = var714;
}
((struct instance_core__NativeArray*)var708)->values[3]=var714;
} else {
var708 = varonce707;
varonce707 = NULL;
}
((struct instance_core__NativeArray*)var708)->values[0]=var_share_dir;
((struct instance_core__NativeArray*)var708)->values[2]=var_arch;
{
var717 = ((val*(*)(val* self))(var708->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var708); /* native_to_s on <var708:NativeArray[String]>*/
}
varonce707 = var708;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_702, var717); /* Direct call array#AbstractArray#push on <var_702:Array[String]>*/
}
if (likely(varonce718!=NULL)) {
var719 = varonce718;
} else {
var720 = "libgc.a";
var721 = core__abstract_text___CString___to_s_full(var720, 7l, 7l);
var719 = var721;
varonce718 = var719;
}
{
var722 = core__file___String____47d(var_dir, var719);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_702, var722); /* Direct call array#AbstractArray#push on <var_702:Array[String]>*/
}
if (likely(varonce723!=NULL)) {
var724 = varonce723;
} else {
var725 = "Android project error";
var726 = core__abstract_text___CString___to_s_full(var725, 21l, 21l);
var724 = var726;
varonce723 = var724;
}
{
nitc___nitc__ToolContext___exec_and_check(var698, var_702, var724); /* Direct call toolcontext#ToolContext#exec_and_check on <var698:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_692&3)?class_info[((long)var_692&3)]:var_692->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_692); /* next on <var_692:IndexedIterator[String]>*/
}
}
BREAK_label694: (void)0;
{
((void(*)(val* self))((((long)var_692&3)?class_info[((long)var_692&3)]:var_692->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_692); /* finish on <var_692:IndexedIterator[String]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var729 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var729 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var727 = var729;
RET_LABEL728:(void)0;
}
}
var730 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var730, 4l); /* Direct call array#Array#with_capacity on <var730:Array[String]>*/
}
var_731 = var730;
if (likely(varonce732!=NULL)) {
var733 = varonce732;
} else {
var734 = "ln";
var735 = core__abstract_text___CString___to_s_full(var734, 2l, 2l);
var733 = var735;
varonce732 = var733;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_731, var733); /* Direct call array#AbstractArray#push on <var_731:Array[String]>*/
}
if (likely(varonce736!=NULL)) {
var737 = varonce736;
} else {
var738 = "-s";
var739 = core__abstract_text___CString___to_s_full(var738, 2l, 2l);
var737 = var739;
varonce736 = var737;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_731, var737); /* Direct call array#AbstractArray#push on <var_731:Array[String]>*/
}
if (unlikely(varonce740==NULL)) {
var741 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce742!=NULL)) {
var743 = varonce742;
} else {
var744 = "/libgc/arm/include/gc/";
var745 = core__abstract_text___CString___to_s_full(var744, 22l, 22l);
var743 = var745;
varonce742 = var743;
}
((struct instance_core__NativeArray*)var741)->values[1]=var743;
} else {
var741 = varonce740;
varonce740 = NULL;
}
((struct instance_core__NativeArray*)var741)->values[0]=var_share_dir;
{
var746 = ((val*(*)(val* self))(var741->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var741); /* native_to_s on <var741:NativeArray[String]>*/
}
varonce740 = var741;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_731, var746); /* Direct call array#AbstractArray#push on <var_731:Array[String]>*/
}
if (unlikely(varonce747==NULL)) {
var748 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce749!=NULL)) {
var750 = varonce749;
} else {
var751 = "/gc";
var752 = core__abstract_text___CString___to_s_full(var751, 3l, 3l);
var750 = var752;
varonce749 = var750;
}
((struct instance_core__NativeArray*)var748)->values[1]=var750;
} else {
var748 = varonce747;
varonce747 = NULL;
}
((struct instance_core__NativeArray*)var748)->values[0]=var_compile_dir;
{
var753 = ((val*(*)(val* self))(var748->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var748); /* native_to_s on <var748:NativeArray[String]>*/
}
varonce747 = var748;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_731, var753); /* Direct call array#AbstractArray#push on <var_731:Array[String]>*/
}
if (likely(varonce754!=NULL)) {
var755 = varonce754;
} else {
var756 = "Android project error";
var757 = core__abstract_text___CString___to_s_full(var756, 21l, 21l);
var755 = var757;
varonce754 = var755;
}
{
nitc___nitc__ToolContext___exec_and_check(var727, var_731, var755); /* Direct call toolcontext#ToolContext#exec_and_check on <var727:ToolContext>*/
}
RET_LABEL:;
}
/* method android#AndroidToolchain#write_makefile for (self: AndroidToolchain, String, Array[String]) */
void nitc___nitc__AndroidToolchain___nitc__abstract_compiler__MakefileToolchain__write_makefile(val* self, val* p0, val* p1) {
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
var_compile_dir = p0;
var_cfiles = p1;
RET_LABEL:;
}
/* method android#AndroidToolchain#compile_c_code for (self: AndroidToolchain, String) */
void nitc___nitc__AndroidToolchain___nitc__abstract_compiler__MakefileToolchain__compile_c_code(val* self, val* p0) {
val* var_compile_dir /* var compile_dir: String */;
val* var /* : nullable String */;
val* var2 /* : nullable String */;
val* var_android_project_root /* var android_project_root: String */;
val* var3 /* : AbstractCompiler */;
val* var5 /* : AbstractCompiler */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : String */;
val* var11 /* : String */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var_short_project_name /* var short_project_name: String */;
val* var20 /* : ToolContext */;
val* var22 /* : ToolContext */;
val* var23 /* : OptionBool */;
val* var25 /* : OptionBool */;
val* var26 /* : nullable Object */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
short int var_release /* var release: Bool */;
val* var30 /* : ToolContext */;
val* var32 /* : ToolContext */;
val* var33 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : Array[String] */;
val* var_55 /* var : Array[String] */;
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
val* var68 /* : Text */;
val* var_args /* var args: Array[String] */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
val* var77 /* : ToolContext */;
val* var79 /* : ToolContext */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var84 /* : AbstractCompiler */;
val* var86 /* : AbstractCompiler */;
val* var87 /* : MModule */;
val* var89 /* : MModule */;
val* var90 /* : String */;
val* var_outname /* var outname: String */;
val* var92 /* : NativeArray[String] */;
static val* varonce91;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : String */;
val* var_apk_path /* var apk_path: String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var_keystore_path /* var keystore_path: String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var111 /* : String */;
val* var_key_alias /* var key_alias: String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var_tsa_server /* var tsa_server: String */;
short int var117 /* : Bool */;
val* var118 /* : ToolContext */;
val* var120 /* : ToolContext */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : nullable Message */;
val* var130 /* : Array[String] */;
val* var_131 /* var : Array[String] */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
val* var136 /* : ToolContext */;
val* var138 /* : ToolContext */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
val* var143 /* : Array[String] */;
val* var_144 /* var : Array[String] */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : CString */;
val* var152 /* : String */;
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
short int var165 /* : Bool */;
short int var166 /* : Bool */;
val* var167 /* : Array[String] */;
val* var_168 /* var : Array[String] */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : CString */;
val* var172 /* : String */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
val* var175 /* : Array[String] */;
val* var_176 /* var : Array[String] */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : CString */;
val* var180 /* : String */;
val* var181 /* : ToolContext */;
val* var183 /* : ToolContext */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : CString */;
val* var187 /* : String */;
val* var188 /* : Path */;
short int var189 /* : Bool */;
val* var190 /* : Path */;
val* var191 /* : Array[String] */;
val* var_192 /* var : Array[String] */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : CString */;
val* var196 /* : String */;
static val* varonce197;
val* var198 /* : String */;
char* var199 /* : CString */;
val* var200 /* : String */;
val* var201 /* : ToolContext */;
val* var203 /* : ToolContext */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : CString */;
val* var207 /* : String */;
val* var208 /* : Array[String] */;
val* var_209 /* var : Array[String] */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : CString */;
val* var213 /* : String */;
val* var215 /* : NativeArray[String] */;
static val* varonce214;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : CString */;
val* var219 /* : String */;
static val* varonce220;
val* var221 /* : String */;
char* var222 /* : CString */;
val* var223 /* : String */;
val* var224 /* : String */;
val* var225 /* : ToolContext */;
val* var227 /* : ToolContext */;
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : CString */;
val* var231 /* : String */;
var_compile_dir = p0;
{
{ /* Inline android#AndroidToolchain#android_project_root (self) on <self:AndroidToolchain> */
var2 = self->attrs[COLOR_nitc__android__AndroidToolchain___android_project_root].val; /* _android_project_root on <self:AndroidToolchain> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android, 310);
fatal_exit(1);
}
var_android_project_root = var;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:AndroidToolchain> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:AndroidToolchain> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var3) on <var3:AbstractCompiler> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var3:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
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
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "-";
var14 = core__abstract_text___CString___to_s_full(var13, 1l, 1l);
var12 = var14;
varonce = var12;
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "_";
var18 = core__abstract_text___CString___to_s_full(var17, 1l, 1l);
var16 = var18;
varonce15 = var16;
}
{
var19 = core__string_search___Text___replace(var9, var12, var16);
}
var_short_project_name = var19;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var22 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_release (var20) on <var20:ToolContext> */
var25 = var20->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <var20:ToolContext> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 70);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline opts#Option#value (var23) on <var23:OptionBool> */
var28 = var23->attrs[COLOR_opts__Option___value].val; /* _value on <var23:OptionBool> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = (short int)((long)(var26)>>2);
var_release = var29;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var32 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var33 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var33, 5l); /* Direct call array#Array#with_capacity on <var33:Array[String]>*/
}
var_ = var33;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "ndk-build";
var37 = core__abstract_text___CString___to_s_full(var36, 9l, 9l);
var35 = var37;
varonce34 = var35;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var35); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "-s";
var41 = core__abstract_text___CString___to_s_full(var40, 2l, 2l);
var39 = var41;
varonce38 = var39;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var39); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "-j";
var45 = core__abstract_text___CString___to_s_full(var44, 2l, 2l);
var43 = var45;
varonce42 = var43;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var43); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "-C";
var49 = core__abstract_text___CString___to_s_full(var48, 2l, 2l);
var47 = var49;
varonce46 = var47;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var47); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_android_project_root); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "Android project error";
var53 = core__abstract_text___CString___to_s_full(var52, 21l, 21l);
var51 = var53;
varonce50 = var51;
}
{
nitc___nitc__ToolContext___exec_and_check(var30, var_, var51); /* Direct call toolcontext#ToolContext#exec_and_check on <var30:ToolContext>*/
}
var54 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var54, 3l); /* Direct call array#Array#with_capacity on <var54:Array[String]>*/
}
var_55 = var54;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "ant";
var59 = core__abstract_text___CString___to_s_full(var58, 3l, 3l);
var57 = var59;
varonce56 = var57;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_55, var57); /* Direct call array#AbstractArray#push on <var_55:Array[String]>*/
}
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "-f";
var63 = core__abstract_text___CString___to_s_full(var62, 2l, 2l);
var61 = var63;
varonce60 = var61;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_55, var61); /* Direct call array#AbstractArray#push on <var_55:Array[String]>*/
}
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "/build.xml";
var67 = core__abstract_text___CString___to_s_full(var66, 10l, 10l);
var65 = var67;
varonce64 = var65;
}
{
var68 = ((val*(*)(val* self, val* p0))(var_android_project_root->class->vft[COLOR_core__abstract_text__Text___43d]))(var_android_project_root, var65); /* + on <var_android_project_root:String>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_55, var68); /* Direct call array#AbstractArray#push on <var_55:Array[String]>*/
}
var_args = var_55;
if (var_release){
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "release";
var72 = core__abstract_text___CString___to_s_full(var71, 7l, 7l);
var70 = var72;
varonce69 = var70;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var70); /* Direct call array#Array#add on <var_args:Array[String]>*/
}
} else {
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "debug";
var76 = core__abstract_text___CString___to_s_full(var75, 5l, 5l);
var74 = var76;
varonce73 = var74;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var74); /* Direct call array#Array#add on <var_args:Array[String]>*/
}
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var79 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "Android project error";
var83 = core__abstract_text___CString___to_s_full(var82, 21l, 21l);
var81 = var83;
varonce80 = var81;
}
{
nitc___nitc__ToolContext___exec_and_check(var77, var_args, var81); /* Direct call toolcontext#ToolContext#exec_and_check on <var77:ToolContext>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:AndroidToolchain> */
var86 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:AndroidToolchain> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var84) on <var84:AbstractCompiler> */
var89 = var84->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var84:AbstractCompiler> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
var90 = nitc___nitc__MakefileToolchain___outfile(self, var87);
}
var_outname = var90;
if (var_release){
if (unlikely(varonce91==NULL)) {
var92 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "/bin/";
var96 = core__abstract_text___CString___to_s_full(var95, 5l, 5l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var92)->values[1]=var94;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "-release-unsigned.apk";
var100 = core__abstract_text___CString___to_s_full(var99, 21l, 21l);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var92)->values[3]=var98;
} else {
var92 = varonce91;
varonce91 = NULL;
}
((struct instance_core__NativeArray*)var92)->values[0]=var_android_project_root;
((struct instance_core__NativeArray*)var92)->values[2]=var_short_project_name;
{
var101 = ((val*(*)(val* self))(var92->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var92); /* native_to_s on <var92:NativeArray[String]>*/
}
varonce91 = var92;
var_apk_path = var101;
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "KEYSTORE";
var105 = core__abstract_text___CString___to_s_full(var104, 8l, 8l);
var103 = var105;
varonce102 = var103;
}
{
var106 = core__environ___String___environ(var103);
}
var_keystore_path = var106;
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "KEY_ALIAS";
var110 = core__abstract_text___CString___to_s_full(var109, 9l, 9l);
var108 = var110;
varonce107 = var108;
}
{
var111 = core__environ___String___environ(var108);
}
var_key_alias = var111;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "TSA_SERVER";
var115 = core__abstract_text___CString___to_s_full(var114, 10l, 10l);
var113 = var115;
varonce112 = var113;
}
{
var116 = core__environ___String___environ(var113);
}
var_tsa_server = var116;
{
var117 = ((short int(*)(val* self))(var_key_alias->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_key_alias); /* is_empty on <var_key_alias:String>*/
}
if (var117){
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var120 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "key-alias";
var124 = core__abstract_text___CString___to_s_full(var123, 9l, 9l);
var122 = var124;
varonce121 = var122;
}
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "Warning: the environment variable `KEY_ALIAS` is not set, the APK file will not be signed.";
var128 = core__abstract_text___CString___to_s_full(var127, 90l, 90l);
var126 = var128;
varonce125 = var126;
}
{
var129 = nitc___nitc__ToolContext___warning(var118, ((val*)NULL), var122, var126);
}
var130 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var130, 3l); /* Direct call array#Array#with_capacity on <var130:Array[String]>*/
}
var_131 = var130;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "mv";
var135 = core__abstract_text___CString___to_s_full(var134, 2l, 2l);
var133 = var135;
varonce132 = var133;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_131, var133); /* Direct call array#AbstractArray#push on <var_131:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_131, var_apk_path); /* Direct call array#AbstractArray#push on <var_131:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_131, var_outname); /* Direct call array#AbstractArray#push on <var_131:Array[String]>*/
}
var_args = var_131;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var138 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "Android project error";
var142 = core__abstract_text___CString___to_s_full(var141, 21l, 21l);
var140 = var142;
varonce139 = var140;
}
{
nitc___nitc__ToolContext___exec_and_check(var136, var_args, var140); /* Direct call toolcontext#ToolContext#exec_and_check on <var136:ToolContext>*/
}
goto RET_LABEL;
} else {
}
var143 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var143, 7l); /* Direct call array#Array#with_capacity on <var143:Array[String]>*/
}
var_144 = var143;
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "jarsigner";
var148 = core__abstract_text___CString___to_s_full(var147, 9l, 9l);
var146 = var148;
varonce145 = var146;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_144, var146); /* Direct call array#AbstractArray#push on <var_144:Array[String]>*/
}
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "-sigalg";
var152 = core__abstract_text___CString___to_s_full(var151, 7l, 7l);
var150 = var152;
varonce149 = var150;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_144, var150); /* Direct call array#AbstractArray#push on <var_144:Array[String]>*/
}
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "MD5withRSA";
var156 = core__abstract_text___CString___to_s_full(var155, 10l, 10l);
var154 = var156;
varonce153 = var154;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_144, var154); /* Direct call array#AbstractArray#push on <var_144:Array[String]>*/
}
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = "-digestalg";
var160 = core__abstract_text___CString___to_s_full(var159, 10l, 10l);
var158 = var160;
varonce157 = var158;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_144, var158); /* Direct call array#AbstractArray#push on <var_144:Array[String]>*/
}
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = "SHA1";
var164 = core__abstract_text___CString___to_s_full(var163, 4l, 4l);
var162 = var164;
varonce161 = var162;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_144, var162); /* Direct call array#AbstractArray#push on <var_144:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_144, var_apk_path); /* Direct call array#AbstractArray#push on <var_144:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_144, var_key_alias); /* Direct call array#AbstractArray#push on <var_144:Array[String]>*/
}
var_args = var_144;
{
var165 = ((short int(*)(val* self))(var_keystore_path->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_keystore_path); /* is_empty on <var_keystore_path:String>*/
}
var166 = !var165;
if (var166){
var167 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var167, 2l); /* Direct call array#Array#with_capacity on <var167:Array[String]>*/
}
var_168 = var167;
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = "-keystore";
var172 = core__abstract_text___CString___to_s_full(var171, 9l, 9l);
var170 = var172;
varonce169 = var170;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_168, var170); /* Direct call array#AbstractArray#push on <var_168:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_168, var_keystore_path); /* Direct call array#AbstractArray#push on <var_168:Array[String]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_args, var_168); /* Direct call array#Array#add_all on <var_args:Array[String]>*/
}
} else {
}
{
var173 = ((short int(*)(val* self))(var_tsa_server->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_tsa_server); /* is_empty on <var_tsa_server:String>*/
}
var174 = !var173;
if (var174){
var175 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var175, 2l); /* Direct call array#Array#with_capacity on <var175:Array[String]>*/
}
var_176 = var175;
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "-tsa";
var180 = core__abstract_text___CString___to_s_full(var179, 4l, 4l);
var178 = var180;
varonce177 = var178;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_176, var178); /* Direct call array#AbstractArray#push on <var_176:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_176, var_tsa_server); /* Direct call array#AbstractArray#push on <var_176:Array[String]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_args, var_176); /* Direct call array#Array#add_all on <var_args:Array[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var183 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "Android project error";
var187 = core__abstract_text___CString___to_s_full(var186, 21l, 21l);
var185 = var187;
varonce184 = var185;
}
{
nitc___nitc__ToolContext___exec_and_check(var181, var_args, var185); /* Direct call toolcontext#ToolContext#exec_and_check on <var181:ToolContext>*/
}
{
var188 = core__file___Text___to_path(var_outname);
}
{
var189 = core___core__Path___exists(var188);
}
if (var189){
{
var190 = core__file___Text___to_path(var_outname);
}
{
core___core__Path___delete(var190); /* Direct call file#Path#delete on <var190:Path>*/
}
} else {
}
var191 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var191, 4l); /* Direct call array#Array#with_capacity on <var191:Array[String]>*/
}
var_192 = var191;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "zipalign";
var196 = core__abstract_text___CString___to_s_full(var195, 8l, 8l);
var194 = var196;
varonce193 = var194;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_192, var194); /* Direct call array#AbstractArray#push on <var_192:Array[String]>*/
}
if (likely(varonce197!=NULL)) {
var198 = varonce197;
} else {
var199 = "4";
var200 = core__abstract_text___CString___to_s_full(var199, 1l, 1l);
var198 = var200;
varonce197 = var198;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_192, var198); /* Direct call array#AbstractArray#push on <var_192:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_192, var_apk_path); /* Direct call array#AbstractArray#push on <var_192:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_192, var_outname); /* Direct call array#AbstractArray#push on <var_192:Array[String]>*/
}
var_args = var_192;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var203 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var203 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var201 = var203;
RET_LABEL202:(void)0;
}
}
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = "Android project error";
var207 = core__abstract_text___CString___to_s_full(var206, 21l, 21l);
var205 = var207;
varonce204 = var205;
}
{
nitc___nitc__ToolContext___exec_and_check(var201, var_args, var205); /* Direct call toolcontext#ToolContext#exec_and_check on <var201:ToolContext>*/
}
} else {
var208 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var208, 3l); /* Direct call array#Array#with_capacity on <var208:Array[String]>*/
}
var_209 = var208;
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "mv";
var213 = core__abstract_text___CString___to_s_full(var212, 2l, 2l);
var211 = var213;
varonce210 = var211;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_209, var211); /* Direct call array#AbstractArray#push on <var_209:Array[String]>*/
}
if (unlikely(varonce214==NULL)) {
var215 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "/bin/";
var219 = core__abstract_text___CString___to_s_full(var218, 5l, 5l);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var215)->values[1]=var217;
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = "-debug.apk";
var223 = core__abstract_text___CString___to_s_full(var222, 10l, 10l);
var221 = var223;
varonce220 = var221;
}
((struct instance_core__NativeArray*)var215)->values[3]=var221;
} else {
var215 = varonce214;
varonce214 = NULL;
}
((struct instance_core__NativeArray*)var215)->values[0]=var_android_project_root;
((struct instance_core__NativeArray*)var215)->values[2]=var_short_project_name;
{
var224 = ((val*(*)(val* self))(var215->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var215); /* native_to_s on <var215:NativeArray[String]>*/
}
varonce214 = var215;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_209, var224); /* Direct call array#AbstractArray#push on <var_209:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_209, var_outname); /* Direct call array#AbstractArray#push on <var_209:Array[String]>*/
}
var_args = var_209;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:AndroidToolchain> */
var227 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:AndroidToolchain> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = "Android project error";
var231 = core__abstract_text___CString___to_s_full(var230, 21l, 21l);
var229 = var231;
varonce228 = var229;
}
{
nitc___nitc__ToolContext___exec_and_check(var225, var_args, var229); /* Direct call toolcontext#ToolContext#exec_and_check on <var225:ToolContext>*/
}
}
RET_LABEL:;
}
/* method android#JavaClassTemplate#write_to_files for (self: JavaClassTemplate, String): ExternFile */
val* nitc__android___JavaClassTemplate___write_to_files(val* self, val* p0) {
val* var /* : ExternFile */;
val* var_compdir /* var compdir: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var_jni_path /* var jni_path: String */;
short int var4 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce5;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
long var11 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var16 /* : Int */;
val* var17 /* : Text */;
val* var18 /* : String */;
val* var_path /* var path: String */;
val* var19 /* : ExternFile */;
val* var20 /* : ExternFile */;
var_compdir = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "jni/nit_compile/";
var3 = core__abstract_text___CString___to_s_full(var2, 16l, 16l);
var1 = var3;
varonce = var1;
}
var_jni_path = var1;
{
var4 = core___core__Text___has_suffix(var_compdir, var_jni_path);
}
if (var4){
if (unlikely(varonce5==NULL)) {
var6 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "/src/";
var10 = core__abstract_text___CString___to_s_full(var9, 5l, 5l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[1]=var8;
} else {
var6 = varonce5;
varonce5 = NULL;
}
{
var11 = ((long(*)(val* self))(var_compdir->class->vft[COLOR_core__abstract_text__Text__length]))(var_compdir); /* length on <var_compdir:String>*/
}
{
var12 = ((long(*)(val* self))(var_jni_path->class->vft[COLOR_core__abstract_text__Text__length]))(var_jni_path); /* length on <var_jni_path:String>*/
}
{
{ /* Inline kernel#Int#- (var11,var12) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var16 = var11 - var12;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
var17 = ((val*(*)(val* self, long p0, long p1))(var_compdir->class->vft[COLOR_core__abstract_text__Text__substring]))(var_compdir, 0l, var13); /* substring on <var_compdir:String>*/
}
((struct instance_core__NativeArray*)var6)->values[0]=var17;
{
var18 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce5 = var6;
var_path = var18;
{
var19 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__android___JavaClassTemplate___write_to_files]))(self, var_path); /* write_to_files on <self:JavaClassTemplate>*/
}
var = var19;
goto RET_LABEL;
} else {
{
var20 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__android___JavaClassTemplate___write_to_files]))(self, p0); /* write_to_files on <self:JavaClassTemplate>*/
}
var = var20;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
