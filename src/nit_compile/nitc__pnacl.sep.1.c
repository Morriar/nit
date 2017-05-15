#include "nitc__pnacl.sep.0.h"
/* method pnacl#ToolContext#platform_from_name for (self: ToolContext, String): nullable Platform */
val* nitc__pnacl___ToolContext___platform_from_name(val* self, val* p0) {
val* var /* : nullable Platform */;
val* var_name /* var name: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
val* var5 /* : PnaclPlatform */;
val* var7 /* : nullable Platform */;
var_name = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "pnacl";
var3 = core__abstract_text___CString___to_s_full(var2, 5l, 5l);
var1 = var3;
varonce = var1;
}
{
var4 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var1); /* == on <var_name:String>*/
}
if (var4){
var5 = NEW_nitc__PnaclPlatform(&type_nitc__PnaclPlatform);
{
{ /* Inline kernel#Object#init (var5) on <var5:PnaclPlatform> */
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__pnacl___ToolContext___platform_from_name]))(self, p0); /* platform_from_name on <self:ToolContext>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method pnacl#PnaclPlatform#name for (self: PnaclPlatform): nullable String */
val* nitc___nitc__PnaclPlatform___nitc__platform__Platform__name(val* self) {
val* var /* : nullable String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "pnacl";
var3 = core__abstract_text___CString___to_s_full(var2, 5l, 5l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method pnacl#PnaclPlatform#supports_libunwind for (self: PnaclPlatform): Bool */
short int nitc___nitc__PnaclPlatform___nitc__platform__Platform__supports_libunwind(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method pnacl#PnaclPlatform#no_main for (self: PnaclPlatform): Bool */
short int nitc___nitc__PnaclPlatform___nitc__platform__Platform__no_main(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method pnacl#PnaclPlatform#toolchain for (self: PnaclPlatform, ToolContext, AbstractCompiler): Toolchain */
val* nitc___nitc__PnaclPlatform___nitc__abstract_compiler__Platform__toolchain(val* self, val* p0, val* p1) {
val* var /* : Toolchain */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : PnaclToolchain */;
var_toolcontext = p0;
var_compiler = p1;
var1 = NEW_nitc__PnaclToolchain(&type_nitc__PnaclToolchain);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__Toolchain__toolcontext_61d]))(var1, var_toolcontext); /* toolcontext= on <var1:PnaclToolchain>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__Toolchain__compiler_61d]))(var1, var_compiler); /* compiler= on <var1:PnaclToolchain>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:PnaclToolchain>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method pnacl#PnaclToolchain#write_files for (self: PnaclToolchain, String, Array[String]) */
void nitc___nitc__PnaclToolchain___nitc__abstract_compiler__MakefileToolchain__write_files(val* self, val* p0, val* p1) {
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var6 /* : String */;
val* var8 /* : String */;
val* var_app_name /* var app_name: String */;
val* var_dir /* var dir: String */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable Error */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : Array[ExternFile] */;
val* var17 /* : Array[ExternFile] */;
val* var_ /* var : Array[ExternFile] */;
val* var18 /* : IndexedIterator[nullable Object] */;
val* var_19 /* var : IndexedIterator[ExternFile] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_f /* var f: ExternFile */;
short int var22 /* : Bool */;
int cltype;
int idtype;
val* var23 /* : String */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : ToolContext */;
val* var29 /* : ToolContext */;
val* var30 /* : OptionString */;
val* var32 /* : OptionString */;
val* var33 /* : nullable Object */;
val* var35 /* : nullable Object */;
val* var_outname /* var outname: nullable String */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : NativeArray[String] */;
static val* varonce;
val* var39 /* : AbstractCompiler */;
val* var41 /* : AbstractCompiler */;
val* var42 /* : MModule */;
val* var44 /* : MModule */;
val* var45 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
val* var49 /* : Array[String] */;
val* var_ofiles /* var ofiles: Array[String] */;
val* var_50 /* var : Array[String] */;
val* var51 /* : IndexedIterator[nullable Object] */;
val* var_52 /* var : IndexedIterator[String] */;
short int var53 /* : Bool */;
val* var55 /* : nullable Object */;
val* var_cfile /* var cfile: String */;
long var56 /* : Int */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name;
long var62 /* : Int */;
val* var63 /* : Text */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : Text */;
val* var70 /* : NativeArray[String] */;
static val* varonce69;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var_file /* var file: String */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
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
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
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
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
val* var114 /* : String */;
val* var115 /* : String */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
val* var118 /* : nullable Error */;
val* var120 /* : NativeArray[String] */;
static val* varonce119;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
val* var125 /* : String */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
val* var129 /* : NativeArray[String] */;
static val* varonce128;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var152 /* : NativeArray[String] */;
static val* varonce151;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : CString */;
val* var156 /* : String */;
val* var157 /* : String */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
val* var160 /* : nullable Error */;
val* var162 /* : NativeArray[String] */;
static val* varonce161;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
val* var167 /* : String */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
val* var171 /* : NativeArray[String] */;
static val* varonce170;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : CString */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : CString */;
val* var183 /* : String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : CString */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : CString */;
val* var191 /* : String */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : CString */;
val* var195 /* : String */;
val* var196 /* : String */;
val* var198 /* : NativeArray[String] */;
static val* varonce197;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : CString */;
val* var202 /* : String */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : CString */;
val* var206 /* : String */;
val* var207 /* : String */;
val* var209 /* : NativeArray[String] */;
static val* varonce208;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : CString */;
val* var213 /* : String */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : CString */;
val* var217 /* : String */;
val* var218 /* : String */;
var_compile_dir = p0;
var_cfiles = p1;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:PnaclToolchain> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:PnaclToolchain> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
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
var_app_name = var6;
var_dir = var_compile_dir;
{
var9 = core__file___Text___file_exists(var_dir);
}
var10 = !var9;
if (var10){
{
var11 = core__file___String___mkdir(var_dir, ((val*)NULL));
}
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc___nitc__PnaclToolchain___nitc__abstract_compiler__MakefileToolchain__write_files]))(self, p0, p1); /* write_files on <self:PnaclToolchain>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:PnaclToolchain> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:PnaclToolchain> */
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
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var12) on <var12:AbstractCompiler> */
var17 = var12->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var12:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1061);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_ = var15;
{
var18 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:IndexedIterator[ExternFile]>*/
}
if (var20){
} else {
goto BREAK_label;
}
{
var21 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:IndexedIterator[ExternFile]>*/
}
var_f = var21;
/* <var_f:ExternFile> isa ExternCFile */
cltype = type_nitc__ExternCFile.color;
idtype = type_nitc__ExternCFile.id;
if(cltype >= var_f->type->table_size) {
var22 = 0;
} else {
var22 = var_f->type->type_table[cltype] == idtype;
}
if (var22){
{
{ /* Inline c_tools#ExternFile#filename (var_f) on <var_f:ExternFile(ExternCFile)> */
var25 = var_f->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <var_f:ExternFile(ExternCFile)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self, val* p0))(var23->class->vft[COLOR_core__file__String__basename]))(var23, ((val*)NULL)); /* basename on <var23:String>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_cfiles, var26); /* Direct call array#Array#add on <var_cfiles:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:IndexedIterator[ExternFile]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:IndexedIterator[ExternFile]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:PnaclToolchain> */
var29 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:PnaclToolchain> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_output (var27) on <var27:ToolContext> */
var32 = var27->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <var27:ToolContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 30);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline opts#Option#value (var30) on <var30:OptionString> */
var35 = var30->attrs[COLOR_opts__Option___value].val; /* _value on <var30:OptionString> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_outname = var33;
if (var_outname == NULL) {
var36 = 1; /* is null */
} else {
var36 = 0; /* arg is null but recv is not */
}
if (0) {
var37 = ((short int(*)(val* self, val* p0))(var_outname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_outname, ((val*)NULL)); /* == on <var_outname:nullable String>*/
var36 = var37;
}
if (var36){
if (unlikely(varonce==NULL)) {
var38 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__String);
} else {
var38 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:PnaclToolchain> */
var41 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:PnaclToolchain> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var39) on <var39:AbstractCompiler> */
var44 = var39->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var39:AbstractCompiler> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var42) on <var42:MModule> */
var47 = var42->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var42:MModule> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
((struct instance_core__NativeArray*)var38)->values[0]=var45;
{
var48 = ((val*(*)(val* self))(var38->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce = var38;
var_outname = var48;
} else {
}
var49 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var49); /* Direct call array#Array#init on <var49:Array[String]>*/
}
var_ofiles = var49;
var_50 = var_cfiles;
{
var51 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_50);
}
var_52 = var51;
for(;;) {
{
var53 = ((short int(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_52); /* is_ok on <var_52:IndexedIterator[String]>*/
}
if (var53){
} else {
goto BREAK_label54;
}
{
var55 = ((val*(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_52); /* item on <var_52:IndexedIterator[String]>*/
}
var_cfile = var55;
{
var56 = ((long(*)(val* self))(var_cfile->class->vft[COLOR_core__abstract_text__Text__length]))(var_cfile); /* length on <var_cfile:String>*/
}
{
{ /* Inline kernel#Int#- (var56,2l) on <var56:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var59 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var62 = var56 - 2l;
var57 = var62;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
var63 = ((val*(*)(val* self, long p0, long p1))(var_cfile->class->vft[COLOR_core__abstract_text__Text__substring]))(var_cfile, 0l, var57); /* substring on <var_cfile:String>*/
}
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = ".o";
var67 = core__abstract_text___CString___to_s_full(var66, 2l, 2l);
var65 = var67;
varonce64 = var65;
}
{
var68 = ((val*(*)(val* self, val* p0))(var63->class->vft[COLOR_core__abstract_text__Text___43d]))(var63, var65); /* + on <var63:Text(String)>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ofiles, var68); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_52); /* next on <var_52:IndexedIterator[String]>*/
}
}
BREAK_label54: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_52); /* finish on <var_52:IndexedIterator[String]>*/
}
if (unlikely(varonce69==NULL)) {
var70 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "/Makefile";
var74 = core__abstract_text___CString___to_s_full(var73, 9l, 9l);
var72 = var74;
varonce71 = var72;
}
((struct instance_core__NativeArray*)var70)->values[1]=var72;
} else {
var70 = varonce69;
varonce69 = NULL;
}
((struct instance_core__NativeArray*)var70)->values[0]=var_dir;
{
var75 = ((val*(*)(val* self))(var70->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var70); /* native_to_s on <var70:NativeArray[String]>*/
}
varonce69 = var70;
var_file = var75;
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray(15l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "# This file was generated by Nit, any modification will be lost.\n\n# Get pepper directory for toolchain and includes.\n#\n# If NACL_SDK_ROOT is not set, then assume it can be found five directories up.\n#\nTHIS_MAKEFILE := $(abspath $(lastword $(MAKEFILE_LIST)))\nNACL_SDK_ROOT ?= $(abspath $(dir $(THIS_MAKEFILE))../../../..)\n\n# Project Build flags\nWARNINGS := -Wno-long-long -Wno-unused-value -Wno-unused-label -Wno-duplicate-decl-specifier -Wno-switch -Wno-embedded-directive\nCXXFLAGS := -pthread $(WARNINGS)\n\nCXXFLAGS += -g -O0 # Debug\n# CXXFLAGS += -O3  # Release\n\n#\n# Compute tool paths\n#\nGETOS := python $(NACL_SDK_ROOT)/tools/getos.py\nOSHELPERS = python $(NACL_SDK_ROOT)/tools/oshelpers.py\nOSNAME := $(shell $(GETOS))\n\nPNACL_TC_PATH := $(abspath $(NACL_SDK_ROOT)/toolchain/$(OSNAME)_pnacl)\nPNACL_CXX := $(PNACL_TC_PATH)/bin/pnacl-clang\nPNACL_FINALIZE := $(PNACL_TC_PATH)/bin/pnacl-finalize\nCXXFLAGS += -I$(NACL_SDK_ROOT)/include -I$(NACL_SDK_ROOT)/include/pnacl\nLDFLAGS := -L$(NACL_SDK_ROOT)/lib/pnacl/Release -lppapi_cpp -lppapi -lm\n\n#\n# Disable DOS PATH warning when using Cygwin based tools Windows\n#\nCYGWIN ?= nodosfilewarning\nexport CYGWIN\n\n# Declare the ALL target first, to make the \'all\' target the default build\nall: ../";
var81 = core__abstract_text___CString___to_s_full(var80, 1231l, 1231l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[0]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "/";
var85 = core__abstract_text___CString___to_s_full(var84, 1l, 1l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var77)->values[2]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ".pexe\n\n.c.o:\n\t$(PNACL_CXX) -c $< -g -O0 $(CXXFLAGS)\n\n";
var89 = core__abstract_text___CString___to_s_full(var88, 53l, 53l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var77)->values[4]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = ".pexe: ";
var93 = core__abstract_text___CString___to_s_full(var92, 7l, 7l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var77)->values[6]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "\n\t$(PNACL_CXX) -o $@ $^ $(LDFLAGS)\n\n../";
var97 = core__abstract_text___CString___to_s_full(var96, 39l, 39l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var77)->values[8]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "/";
var101 = core__abstract_text___CString___to_s_full(var100, 1l, 1l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var77)->values[10]=var99;
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = ".pexe: ";
var105 = core__abstract_text___CString___to_s_full(var104, 7l, 7l);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var77)->values[12]=var103;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = ".pexe\n\t$(PNACL_FINALIZE) -o $@ $<\n\t\t";
var109 = core__abstract_text___CString___to_s_full(var108, 36l, 36l);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var77)->values[14]=var107;
} else {
var77 = varonce76;
varonce76 = NULL;
}
((struct instance_core__NativeArray*)var77)->values[1]=var_outname;
((struct instance_core__NativeArray*)var77)->values[3]=var_app_name;
((struct instance_core__NativeArray*)var77)->values[5]=var_app_name;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = " ";
var113 = core__abstract_text___CString___to_s_full(var112, 1l, 1l);
var111 = var113;
varonce110 = var111;
}
{
var114 = core__abstract_text___Collection___join(var_ofiles, var111, ((val*)NULL));
}
((struct instance_core__NativeArray*)var77)->values[7]=var114;
((struct instance_core__NativeArray*)var77)->values[9]=var_outname;
((struct instance_core__NativeArray*)var77)->values[11]=var_app_name;
((struct instance_core__NativeArray*)var77)->values[13]=var_app_name;
{
var115 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
core__file___Writable___write_to_file(var115, var_file); /* Direct call file#Writable#write_to_file on <var115:String>*/
}
{
var116 = core__file___Text___file_exists(var_outname);
}
var117 = !var116;
if (var117){
{
var118 = core__file___String___mkdir(var_outname, ((val*)NULL));
}
} else {
}
if (unlikely(varonce119==NULL)) {
var120 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "/index.html";
var124 = core__abstract_text___CString___to_s_full(var123, 11l, 11l);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var120)->values[1]=var122;
} else {
var120 = varonce119;
varonce119 = NULL;
}
((struct instance_core__NativeArray*)var120)->values[0]=var_outname;
{
var125 = ((val*(*)(val* self))(var120->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var120); /* native_to_s on <var120:NativeArray[String]>*/
}
varonce119 = var120;
var_file = var125;
{
var126 = core__file___Text___file_exists(var_file);
}
var127 = !var126;
if (var127){
if (unlikely(varonce128==NULL)) {
var129 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "<!DOCTYPE html>\n<html>\n  <!--\n  This file was generated by Nit, any modification will be lost.\n  -->\n<head>\n\t<title>";
var133 = core__abstract_text___CString___to_s_full(var132, 116l, 116l);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var129)->values[0]=var131;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "</title>\n\t<script src=\"js/pnacl_js.js\"></script>\n</head>\n<body onload=\"pageDidLoad()\">\n\t<h1>PNaCl : Minimal HTML for ";
var137 = core__abstract_text___CString___to_s_full(var136, 117l, 117l);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var129)->values[2]=var135;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "</h1>\n\t<p>\n  <!--\n  Load the published pexe.\n  Note: Since this module does not use any real-estate in the browser, its\n  width and height are set to 0.\n\n  Note: The <embed> element is wrapped inside a <div>, which has both a \'load\'\n  and a \'message\' event listener attached.  This wrapping method is used\n  instead of attaching the event listeners directly to the <embed> element to\n  ensure that the listeners are active before the NaCl module \'load\' event\n  fires.  This also allows you to use PPB_Messaging.PostMessage() (in C) or\n  pp::Instance.PostMessage() (in C++) from within the initialization code in\n  your module.\n  -->\n\t\t<div id=\"listener\">\n\t\t\t<script type=\"text/javascript\">\n\t\t\t\tvar listener = document.getElementById(\'listener\');\n\t\t\t\tlistener.addEventListener(\'load\', moduleDidLoad, true);\n\t\t\t\tlistener.addEventListener(\'message\', handleMessage, true);\n\t\t\t</script>\n\n\t\t\t<embed id=\"";
var141 = core__abstract_text___CString___to_s_full(var140, 897l, 897l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var129)->values[4]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "\"\n\t\t\t\twidth=0 height=0\n\t\t\t\tsrc=\"";
var145 = core__abstract_text___CString___to_s_full(var144, 32l, 32l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var129)->values[6]=var143;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = ".nmf\"\n\t\t\t\ttype=\"application/x-pnacl\" />\n\t\t</div>\n\t\t</p>\n\t\t<h2>Status <code id=\"statusField\">NO-STATUS</code></h2>\n</body>\n</html>\n\t\t";
var149 = core__abstract_text___CString___to_s_full(var148, 132l, 132l);
var147 = var149;
varonce146 = var147;
}
((struct instance_core__NativeArray*)var129)->values[8]=var147;
} else {
var129 = varonce128;
varonce128 = NULL;
}
((struct instance_core__NativeArray*)var129)->values[1]=var_app_name;
((struct instance_core__NativeArray*)var129)->values[3]=var_app_name;
((struct instance_core__NativeArray*)var129)->values[5]=var_app_name;
((struct instance_core__NativeArray*)var129)->values[7]=var_app_name;
{
var150 = ((val*(*)(val* self))(var129->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var129); /* native_to_s on <var129:NativeArray[String]>*/
}
varonce128 = var129;
{
core__file___Writable___write_to_file(var150, var_file); /* Direct call file#Writable#write_to_file on <var150:String>*/
}
} else {
}
if (unlikely(varonce151==NULL)) {
var152 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "/js/";
var156 = core__abstract_text___CString___to_s_full(var155, 4l, 4l);
var154 = var156;
varonce153 = var154;
}
((struct instance_core__NativeArray*)var152)->values[1]=var154;
} else {
var152 = varonce151;
varonce151 = NULL;
}
((struct instance_core__NativeArray*)var152)->values[0]=var_outname;
{
var157 = ((val*(*)(val* self))(var152->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var152); /* native_to_s on <var152:NativeArray[String]>*/
}
varonce151 = var152;
var_dir = var157;
{
var158 = core__file___Text___file_exists(var_dir);
}
var159 = !var158;
if (var159){
{
var160 = core__file___String___mkdir(var_dir, ((val*)NULL));
}
} else {
}
if (unlikely(varonce161==NULL)) {
var162 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "/pnacl_js.js";
var166 = core__abstract_text___CString___to_s_full(var165, 12l, 12l);
var164 = var166;
varonce163 = var164;
}
((struct instance_core__NativeArray*)var162)->values[1]=var164;
} else {
var162 = varonce161;
varonce161 = NULL;
}
((struct instance_core__NativeArray*)var162)->values[0]=var_dir;
{
var167 = ((val*(*)(val* self))(var162->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var162); /* native_to_s on <var162:NativeArray[String]>*/
}
varonce161 = var162;
var_file = var167;
{
var168 = core__file___Text___file_exists(var_file);
}
var169 = !var168;
if (var169){
if (unlikely(varonce170==NULL)) {
var171 = NEW_core__NativeArray(11l, &type_core__NativeArray__core__String);
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = "// This file was generated by Nit, any modification will be lost.\n\n";
var175 = core__abstract_text___CString___to_s_full(var174, 67l, 67l);
var173 = var175;
varonce172 = var173;
}
((struct instance_core__NativeArray*)var171)->values[0]=var173;
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "Module = null;  // Global application object.\nstatusText = \'NO-STATUS\';\n\n// Indicate load success.\nfunction moduleDidLoad() {\n\t";
var179 = core__abstract_text___CString___to_s_full(var178, 127l, 127l);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var171)->values[2]=var177;
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "Module = document.getElementById(\'";
var183 = core__abstract_text___CString___to_s_full(var182, 34l, 34l);
var181 = var183;
varonce180 = var181;
}
((struct instance_core__NativeArray*)var171)->values[4]=var181;
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "\');\n\tupdateStatus(\'SUCCESS\');\n\t// Send a message to the Native Client module like that\n\t//";
var187 = core__abstract_text___CString___to_s_full(var186, 90l, 90l);
var185 = var187;
varonce184 = var185;
}
((struct instance_core__NativeArray*)var171)->values[6]=var185;
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = "Module.postMessage(\'Hello World\');\n}\n\n// The \'message\' event handler.  This handler is fired when the NaCl module\n// posts a message to the browser by calling PPB_Messaging.PostMessage()\n// (in C) or pp::Instance.PostMessage() (in C++).  This implementation\n// simply displays the content of the message in an alert panel.\nfunction handleMessage(message_event) {\n\tconsole.log(message_event.data);\n}\n\n// If the page loads before the Native Client module loads, then set the\n// status message indicating that the module is still loading.  Otherwise,\n// do not change the status message.\nfunction pageDidLoad() {\n\tif (";
var191 = core__abstract_text___CString___to_s_full(var190, 615l, 615l);
var189 = var191;
varonce188 = var189;
}
((struct instance_core__NativeArray*)var171)->values[8]=var189;
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = "Module == null) {\n\t        updateStatus(\'LOADING...\');\n\t} else {\n\t\t// It\'s possible that the Native Client module onload event fired\n\t\t// before the page\'s onload event.  In this case, the status message\n\t\t// will reflect \'SUCCESS\', but won\'t be displayed.  This call will\n\t\t// display the current message.\n\t\tupdateStatus();\n\t}\n}\n\n// Set the global status message.  If the element with id \'statusField\'\n// exists, then set its HTML to the status message as well.\n// opt_message The message test.  If this is null or undefined, then\n// attempt to set the element with id \'statusField\' to the value of\n// |statusText|.\nfunction updateStatus(opt_message) {\n\tif (opt_message)\n\t        statusText = opt_message;\n\tvar statusField = document.getElementById(\'statusField\');\n\tif (statusField) {\n\t        statusField.innerHTML = statusText;\n\t}\n}\n\t\t";
var195 = core__abstract_text___CString___to_s_full(var194, 838l, 838l);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var171)->values[10]=var193;
} else {
var171 = varonce170;
varonce170 = NULL;
}
((struct instance_core__NativeArray*)var171)->values[1]=var_app_name;
((struct instance_core__NativeArray*)var171)->values[3]=var_app_name;
((struct instance_core__NativeArray*)var171)->values[5]=var_app_name;
((struct instance_core__NativeArray*)var171)->values[7]=var_app_name;
((struct instance_core__NativeArray*)var171)->values[9]=var_app_name;
{
var196 = ((val*(*)(val* self))(var171->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var171); /* native_to_s on <var171:NativeArray[String]>*/
}
varonce170 = var171;
{
core__file___Writable___write_to_file(var196, var_file); /* Direct call file#Writable#write_to_file on <var196:String>*/
}
} else {
}
if (unlikely(varonce197==NULL)) {
var198 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "/";
var202 = core__abstract_text___CString___to_s_full(var201, 1l, 1l);
var200 = var202;
varonce199 = var200;
}
((struct instance_core__NativeArray*)var198)->values[1]=var200;
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = ".nmf";
var206 = core__abstract_text___CString___to_s_full(var205, 4l, 4l);
var204 = var206;
varonce203 = var204;
}
((struct instance_core__NativeArray*)var198)->values[3]=var204;
} else {
var198 = varonce197;
varonce197 = NULL;
}
((struct instance_core__NativeArray*)var198)->values[0]=var_outname;
((struct instance_core__NativeArray*)var198)->values[2]=var_app_name;
{
var207 = ((val*(*)(val* self))(var198->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var198); /* native_to_s on <var198:NativeArray[String]>*/
}
varonce197 = var198;
var_file = var207;
if (unlikely(varonce208==NULL)) {
var209 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "{\n\t\"program\": {\n\t\t\"portable\": {\n\t\t\t\"pnacl-translate\": {\n\t\t\t\t\"url\": \"";
var213 = core__abstract_text___CString___to_s_full(var212, 68l, 68l);
var211 = var213;
varonce210 = var211;
}
((struct instance_core__NativeArray*)var209)->values[0]=var211;
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = ".pexe\"\n\t\t\t}\n\t\t}\n\t}\n}\n\t\t";
var217 = core__abstract_text___CString___to_s_full(var216, 23l, 23l);
var215 = var217;
varonce214 = var215;
}
((struct instance_core__NativeArray*)var209)->values[2]=var215;
} else {
var209 = varonce208;
varonce208 = NULL;
}
((struct instance_core__NativeArray*)var209)->values[1]=var_app_name;
{
var218 = ((val*(*)(val* self))(var209->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var209); /* native_to_s on <var209:NativeArray[String]>*/
}
varonce208 = var209;
{
core__file___Writable___write_to_file(var218, var_file); /* Direct call file#Writable#write_to_file on <var218:String>*/
}
RET_LABEL:;
}
/* method pnacl#PnaclToolchain#write_makefile for (self: PnaclToolchain, String, Array[String]) */
void nitc___nitc__PnaclToolchain___nitc__abstract_compiler__MakefileToolchain__write_makefile(val* self, val* p0, val* p1) {
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
var_compile_dir = p0;
var_cfiles = p1;
RET_LABEL:;
}
/* method pnacl#PnaclToolchain#compile_c_code for (self: PnaclToolchain, String) */
void nitc___nitc__PnaclToolchain___nitc__abstract_compiler__MakefileToolchain__compile_c_code(val* self, val* p0) {
val* var_compile_dir /* var compile_dir: String */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
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
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
var_compile_dir = p0;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:PnaclToolchain> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:PnaclToolchain> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var3, 5l); /* Direct call array#Array#with_capacity on <var3:Array[String]>*/
}
var_ = var3;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "make";
var6 = core__abstract_text___CString___to_s_full(var5, 4l, 4l);
var4 = var6;
varonce = var4;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var4); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "-C";
var10 = core__abstract_text___CString___to_s_full(var9, 2l, 2l);
var8 = var10;
varonce7 = var8;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var8); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_compile_dir); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "-j";
var14 = core__abstract_text___CString___to_s_full(var13, 2l, 2l);
var12 = var14;
varonce11 = var12;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var12); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "4";
var18 = core__abstract_text___CString___to_s_full(var17, 1l, 1l);
var16 = var18;
varonce15 = var16;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var16); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "PNaCl project error";
var22 = core__abstract_text___CString___to_s_full(var21, 19l, 19l);
var20 = var22;
varonce19 = var20;
}
{
nitc___nitc__ToolContext___exec_and_check(var, var_, var20); /* Direct call toolcontext#ToolContext#exec_and_check on <var:ToolContext>*/
}
RET_LABEL:;
}
