#include "nitc__xcode_templates.sep.0.h"
/* method xcode_templates#Sys#pbx_file_types for (self: Sys): Map[String, String] */
val* nitc__xcode_templates___core__Sys___pbx_file_types(val* self) {
val* var /* : Map[String, String] */;
short int var1 /* : Bool */;
val* var2 /* : Map[String, String] */;
val* var3 /* : Map[String, String] */;
val* var5 /* : HashMap[String, String] */;
val* var_map /* var map: HashMap[String, String] */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
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
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
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
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
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
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : CString */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : CString */;
val* var144 /* : String */;
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
var1 = self->attrs[COLOR_nitc__xcode_templates__Sys___pbx_file_types].val != NULL; /* _pbx_file_types on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__xcode_templates__Sys___pbx_file_types].val; /* _pbx_file_types on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pbx_file_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 24);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__HashMap(&type_core__HashMap__core__String__core__String);
{
core___core__HashMap___core__kernel__Object__init(var5); /* Direct call hash_collection#HashMap#init on <var5:HashMap[String, String]>*/
}
var_map = var5;
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "m";
var8 = core__abstract_text___CString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce = var6;
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "sourcecode.c.objc";
var12 = core__abstract_text___CString___to_s_full(var11, 17l, 17l);
var10 = var12;
varonce9 = var10;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var6, var10); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "c";
var16 = core__abstract_text___CString___to_s_full(var15, 1l, 1l);
var14 = var16;
varonce13 = var14;
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "sourcecode.c.c";
var20 = core__abstract_text___CString___to_s_full(var19, 14l, 14l);
var18 = var20;
varonce17 = var18;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var14, var18); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "h";
var24 = core__abstract_text___CString___to_s_full(var23, 1l, 1l);
var22 = var24;
varonce21 = var22;
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "sourcecode.c.h";
var28 = core__abstract_text___CString___to_s_full(var27, 14l, 14l);
var26 = var28;
varonce25 = var26;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var22, var26); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "cpp";
var32 = core__abstract_text___CString___to_s_full(var31, 3l, 3l);
var30 = var32;
varonce29 = var30;
}
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "sourcecode.cpp.cpp";
var36 = core__abstract_text___CString___to_s_full(var35, 18l, 18l);
var34 = var36;
varonce33 = var34;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var30, var34); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "hpp";
var40 = core__abstract_text___CString___to_s_full(var39, 3l, 3l);
var38 = var40;
varonce37 = var38;
}
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "sourcecode.cpp.h";
var44 = core__abstract_text___CString___to_s_full(var43, 16l, 16l);
var42 = var44;
varonce41 = var42;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var38, var42); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "vsh";
var48 = core__abstract_text___CString___to_s_full(var47, 3l, 3l);
var46 = var48;
varonce45 = var46;
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "sourcecode.glsl";
var52 = core__abstract_text___CString___to_s_full(var51, 15l, 15l);
var50 = var52;
varonce49 = var50;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var46, var50); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "fsh";
var56 = core__abstract_text___CString___to_s_full(var55, 3l, 3l);
var54 = var56;
varonce53 = var54;
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "sourcecode.glsl";
var60 = core__abstract_text___CString___to_s_full(var59, 15l, 15l);
var58 = var60;
varonce57 = var58;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var54, var58); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "png";
var64 = core__abstract_text___CString___to_s_full(var63, 3l, 3l);
var62 = var64;
varonce61 = var62;
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "image.png";
var68 = core__abstract_text___CString___to_s_full(var67, 9l, 9l);
var66 = var68;
varonce65 = var66;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var62, var66); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "gif";
var72 = core__abstract_text___CString___to_s_full(var71, 3l, 3l);
var70 = var72;
varonce69 = var70;
}
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "image.gif";
var76 = core__abstract_text___CString___to_s_full(var75, 9l, 9l);
var74 = var76;
varonce73 = var74;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var70, var74); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "jpg";
var80 = core__abstract_text___CString___to_s_full(var79, 3l, 3l);
var78 = var80;
varonce77 = var78;
}
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "image.jpeg";
var84 = core__abstract_text___CString___to_s_full(var83, 10l, 10l);
var82 = var84;
varonce81 = var82;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var78, var82); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "jpeg";
var88 = core__abstract_text___CString___to_s_full(var87, 4l, 4l);
var86 = var88;
varonce85 = var86;
}
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "image.jpeg";
var92 = core__abstract_text___CString___to_s_full(var91, 10l, 10l);
var90 = var92;
varonce89 = var90;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var86, var90); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "pdf";
var96 = core__abstract_text___CString___to_s_full(var95, 3l, 3l);
var94 = var96;
varonce93 = var94;
}
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "image.pdf";
var100 = core__abstract_text___CString___to_s_full(var99, 9l, 9l);
var98 = var100;
varonce97 = var98;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var94, var98); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "ico";
var104 = core__abstract_text___CString___to_s_full(var103, 3l, 3l);
var102 = var104;
varonce101 = var102;
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "image.ico";
var108 = core__abstract_text___CString___to_s_full(var107, 9l, 9l);
var106 = var108;
varonce105 = var106;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var102, var106); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "app";
var112 = core__abstract_text___CString___to_s_full(var111, 3l, 3l);
var110 = var112;
varonce109 = var110;
}
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "wrapper.application";
var116 = core__abstract_text___CString___to_s_full(var115, 19l, 19l);
var114 = var116;
varonce113 = var114;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var110, var114); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "plist";
var120 = core__abstract_text___CString___to_s_full(var119, 5l, 5l);
var118 = var120;
varonce117 = var118;
}
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "text.plist.xml";
var124 = core__abstract_text___CString___to_s_full(var123, 14l, 14l);
var122 = var124;
varonce121 = var122;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var118, var122); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "storyboard";
var128 = core__abstract_text___CString___to_s_full(var127, 10l, 10l);
var126 = var128;
varonce125 = var126;
}
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "file.storyboard";
var132 = core__abstract_text___CString___to_s_full(var131, 15l, 15l);
var130 = var132;
varonce129 = var130;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var126, var130); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "xib";
var136 = core__abstract_text___CString___to_s_full(var135, 3l, 3l);
var134 = var136;
varonce133 = var134;
}
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "file.xib";
var140 = core__abstract_text___CString___to_s_full(var139, 8l, 8l);
var138 = var140;
varonce137 = var138;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var134, var138); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = "xcassets";
var144 = core__abstract_text___CString___to_s_full(var143, 8l, 8l);
var142 = var144;
varonce141 = var142;
}
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "folder.assetcatalog";
var148 = core__abstract_text___CString___to_s_full(var147, 19l, 19l);
var146 = var148;
varonce145 = var146;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var142, var146); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "xctest";
var152 = core__abstract_text___CString___to_s_full(var151, 6l, 6l);
var150 = var152;
varonce149 = var150;
}
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "wrapper.cfbundle";
var156 = core__abstract_text___CString___to_s_full(var155, 16l, 16l);
var154 = var156;
varonce153 = var154;
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_map, var150, var154); /* Direct call hash_collection#HashMap#[]= on <var_map:HashMap[String, String]>*/
}
var3 = var_map;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__xcode_templates__Sys___pbx_file_types].val = var3; /* _pbx_file_types on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method xcode_templates#Sys#pbx_uuid_generator for (self: Sys): PbxUUIDGenerator */
val* nitc__xcode_templates___core__Sys___pbx_uuid_generator(val* self) {
val* var /* : PbxUUIDGenerator */;
short int var1 /* : Bool */;
val* var2 /* : PbxUUIDGenerator */;
val* var3 /* : PbxUUIDGenerator */;
var1 = self->attrs[COLOR_nitc__xcode_templates__Sys___pbx_uuid_generator].val != NULL; /* _pbx_uuid_generator on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__xcode_templates__Sys___pbx_uuid_generator].val; /* _pbx_uuid_generator on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pbx_uuid_generator");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 56);
fatal_exit(1);
}
} else {
var3 = NEW_nitc__PbxUUIDGenerator(&type_nitc__PbxUUIDGenerator);
{
{ /* Inline kernel#Object#init (var3) on <var3:PbxUUIDGenerator> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_nitc__xcode_templates__Sys___pbx_uuid_generator].val = var3; /* _pbx_uuid_generator on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxUUIDGenerator#seed for (self: PbxUUIDGenerator): Int */
long nitc___nitc__PbxUUIDGenerator___seed(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__xcode_templates__PbxUUIDGenerator___seed].l; /* _seed on <self:PbxUUIDGenerator> */
var = var1;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxUUIDGenerator#seed= for (self: PbxUUIDGenerator, Int) */
void nitc___nitc__PbxUUIDGenerator___seed_61d(val* self, long p0) {
self->attrs[COLOR_nitc__xcode_templates__PbxUUIDGenerator___seed].l = p0; /* _seed on <self:PbxUUIDGenerator> */
RET_LABEL:;
}
/* method xcode_templates#PbxUUIDGenerator#next_uuid for (self: PbxUUIDGenerator): String */
val* nitc___nitc__PbxUUIDGenerator___next_uuid(val* self) {
val* var /* : String */;
val* var_ /* var : PbxUUIDGenerator */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : Text */;
val* var_hex_val /* var hex_val: String */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
val* var25 /* : Text */;
val* var26 /* : Text */;
var_ = self;
{
{ /* Inline xcode_templates#PbxUUIDGenerator#seed (var_) on <var_:PbxUUIDGenerator> */
var3 = var_->attrs[COLOR_nitc__xcode_templates__PbxUUIDGenerator___seed].l; /* _seed on <var_:PbxUUIDGenerator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var1 + 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline xcode_templates#PbxUUIDGenerator#seed= (var_,var4) on <var_:PbxUUIDGenerator> */
var_->attrs[COLOR_nitc__xcode_templates__PbxUUIDGenerator___seed].l = var4; /* _seed on <var_:PbxUUIDGenerator> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline xcode_templates#PbxUUIDGenerator#seed (self) on <self:PbxUUIDGenerator> */
var11 = self->attrs[COLOR_nitc__xcode_templates__PbxUUIDGenerator___seed].l; /* _seed on <self:PbxUUIDGenerator> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = core__abstract_text___Int___to_hex(var9);
}
{
var13 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__Text__to_upper]))(var12); /* to_upper on <var12:String>*/
}
var_hex_val = var13;
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "0";
var16 = core__abstract_text___CString___to_s_full(var15, 1l, 1l);
var14 = var16;
varonce = var14;
}
{
var17 = ((long(*)(val* self))(var_hex_val->class->vft[COLOR_core__abstract_text__Text__length]))(var_hex_val); /* length on <var_hex_val:String>*/
}
{
{ /* Inline kernel#Int#- (24l,var17) on <24l:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var24 = 24l - var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
var25 = ((val*(*)(val* self, long p0))(var14->class->vft[COLOR_core__abstract_text__Text___42d]))(var14, var18); /* * on <var14:String>*/
}
{
var26 = ((val*(*)(val* self, val* p0))(var25->class->vft[COLOR_core__abstract_text__Text___43d]))(var25, var_hex_val); /* + on <var25:Text(String)>*/
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxFile#path for (self: PbxFile): String */
val* nitc___nitc__PbxFile___path(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__xcode_templates__PbxFile___path].val; /* _path on <self:PbxFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 85);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxFile#path= for (self: PbxFile, String) */
void nitc___nitc__PbxFile___path_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__xcode_templates__PbxFile___path].val = p0; /* _path on <self:PbxFile> */
RET_LABEL:;
}
/* method xcode_templates#PbxFile#build_uuid for (self: PbxFile): String */
val* nitc___nitc__PbxFile___build_uuid(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : Sys */;
val* var5 /* : Sys */;
val* var6 /* : PbxUUIDGenerator */;
val* var7 /* : String */;
var1 = self->attrs[COLOR_nitc__xcode_templates__PbxFile___build_uuid].val != NULL; /* _build_uuid on <self:PbxFile> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__xcode_templates__PbxFile___build_uuid].val; /* _build_uuid on <self:PbxFile> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _build_uuid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 88);
fatal_exit(1);
}
} else {
{
{ /* Inline kernel#Object#sys (self) on <self:PbxFile> */
var5 = glob_sys;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__xcode_templates___core__Sys___pbx_uuid_generator(var3);
}
{
var7 = nitc___nitc__PbxUUIDGenerator___next_uuid(var6);
}
self->attrs[COLOR_nitc__xcode_templates__PbxFile___build_uuid].val = var7; /* _build_uuid on <self:PbxFile> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxFile#ref_uuid for (self: PbxFile): String */
val* nitc___nitc__PbxFile___ref_uuid(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : Sys */;
val* var5 /* : Sys */;
val* var6 /* : PbxUUIDGenerator */;
val* var7 /* : String */;
var1 = self->attrs[COLOR_nitc__xcode_templates__PbxFile___ref_uuid].val != NULL; /* _ref_uuid on <self:PbxFile> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__xcode_templates__PbxFile___ref_uuid].val; /* _ref_uuid on <self:PbxFile> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ref_uuid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 91);
fatal_exit(1);
}
} else {
{
{ /* Inline kernel#Object#sys (self) on <self:PbxFile> */
var5 = glob_sys;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__xcode_templates___core__Sys___pbx_uuid_generator(var3);
}
{
var7 = nitc___nitc__PbxUUIDGenerator___next_uuid(var6);
}
self->attrs[COLOR_nitc__xcode_templates__PbxFile___ref_uuid].val = var7; /* _ref_uuid on <self:PbxFile> */
var2 = var7;
}
var = var2;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxFile#doc for (self: PbxFile): String */
val* nitc___nitc__PbxFile___doc(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline xcode_templates#PbxFile#path (self) on <self:PbxFile> */
var3 = self->attrs[COLOR_nitc__xcode_templates__PbxFile___path].val; /* _path on <self:PbxFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 85);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxFile#file_type for (self: PbxFile): String */
val* nitc___nitc__PbxFile___file_type(val* self) {
val* var /* : String */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : Map[String, String] */;
val* var_map /* var map: Map[String, String] */;
val* var5 /* : String */;
val* var7 /* : String */;
val* var8 /* : nullable String */;
val* var_ext /* var ext: nullable String */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
val* var15 /* : Collection[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
{
{ /* Inline kernel#Object#sys (self) on <self:PbxFile> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__xcode_templates___core__Sys___pbx_file_types(var1);
}
var_map = var4;
{
{ /* Inline xcode_templates#PbxFile#path (self) on <self:PbxFile> */
var7 = self->attrs[COLOR_nitc__xcode_templates__PbxFile___path].val; /* _path on <self:PbxFile> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 85);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__file__String__file_extension]))(var5); /* file_extension on <var5:String>*/
}
var_ext = var8;
if (var_ext == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ext,((val*)NULL)) on <var_ext:nullable String> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var_other); /* == on <var_ext:nullable String(String)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
var_ = var10;
if (var10){
{
var15 = ((val*(*)(val* self))((((long)var_map&3)?class_info[((long)var_map&3)]:var_map->class)->vft[COLOR_core__abstract_collection__MapRead__keys]))(var_map); /* keys on <var_map:Map[String, String]>*/
}
{
var16 = ((short int(*)(val* self, val* p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var15, var_ext); /* has on <var15:Collection[nullable Object](RemovableCollection[String])>*/
}
var9 = var16;
} else {
var9 = var_;
}
if (var9){
{
var17 = ((val*(*)(val* self, val* p0))((((long)var_map&3)?class_info[((long)var_map&3)]:var_map->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var_map, var_ext); /* [] on <var_map:Map[String, String]>*/
}
var = var17;
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "unknown";
var20 = core__abstract_text___CString___to_s_full(var19, 7l, 7l);
var18 = var20;
varonce = var18;
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxFile#description for (self: PbxFile): Writable */
val* nitc___nitc__PbxFile___description(val* self) {
val* var /* : Writable */;
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
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "\t\t";
var5 = core__abstract_text___CString___to_s_full(var4, 2l, 2l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = " /* ";
var9 = core__abstract_text___CString___to_s_full(var8, 4l, 4l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = " */ = {\n\t\t\tisa = PBXFileReference;\n\t\t\tfileEncoding = 4;\n\t\t\tlastKnownFileType = ";
var13 = core__abstract_text___CString___to_s_full(var12, 79l, 79l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[4]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ";\n\t\t\tpath = ";
var17 = core__abstract_text___CString___to_s_full(var16, 12l, 12l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var1)->values[6]=var15;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = ";\n\t\t\tsourceTree = \"<group>\";\n\t\t\t};\n";
var21 = core__abstract_text___CString___to_s_full(var20, 35l, 35l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var1)->values[8]=var19;
} else {
var1 = varonce;
varonce = NULL;
}
{
var22 = nitc___nitc__PbxFile___ref_uuid(self);
}
((struct instance_core__NativeArray*)var1)->values[1]=var22;
{
var23 = nitc___nitc__PbxFile___doc(self);
}
((struct instance_core__NativeArray*)var1)->values[3]=var23;
{
var24 = nitc___nitc__PbxFile___file_type(self);
}
((struct instance_core__NativeArray*)var1)->values[5]=var24;
{
{ /* Inline xcode_templates#PbxFile#path (self) on <self:PbxFile> */
var27 = self->attrs[COLOR_nitc__xcode_templates__PbxFile___path].val; /* _path on <self:PbxFile> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 85);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
((struct instance_core__NativeArray*)var1)->values[7]=var25;
{
var28 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var28;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxFile#add_to_project for (self: PbxFile, PbxprojectTemplate) */
void nitc___nitc__PbxFile___add_to_project(val* self, val* p0) {
val* var_project /* var project: PbxprojectTemplate */;
val* var /* : Array[PbxFile] */;
val* var2 /* : Array[PbxFile] */;
val* var3 /* : Array[PbxFile] */;
val* var5 /* : Array[PbxFile] */;
var_project = p0;
{
{ /* Inline xcode_templates#PbxprojectTemplate#source_files (var_project) on <var_project:PbxprojectTemplate> */
var2 = var_project->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___source_files].val; /* _source_files on <var_project:PbxprojectTemplate> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _source_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 142);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var, self); /* Direct call array#Array#add on <var:Array[PbxFile]>*/
}
{
{ /* Inline xcode_templates#PbxprojectTemplate#files (var_project) on <var_project:PbxprojectTemplate> */
var5 = var_project->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___files].val; /* _files on <var_project:PbxprojectTemplate> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 148);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array#Array#add on <var3:Array[PbxFile]>*/
}
RET_LABEL:;
}
/* method xcode_templates#PbxFile#init for (self: PbxFile) */
void nitc___nitc__PbxFile___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__PbxFile___core__kernel__Object__init]))(self); /* init on <self:PbxFile>*/
}
RET_LABEL:;
}
/* method xcode_templates#PbxprojectTemplate#name for (self: PbxprojectTemplate): String */
val* nitc___nitc__PbxprojectTemplate___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxprojectTemplate#name= for (self: PbxprojectTemplate, String) */
void nitc___nitc__PbxprojectTemplate___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val = p0; /* _name on <self:PbxprojectTemplate> */
RET_LABEL:;
}
/* method xcode_templates#PbxprojectTemplate#source_files for (self: PbxprojectTemplate): Array[PbxFile] */
val* nitc___nitc__PbxprojectTemplate___source_files(val* self) {
val* var /* : Array[PbxFile] */;
val* var1 /* : Array[PbxFile] */;
var1 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___source_files].val; /* _source_files on <self:PbxprojectTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _source_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 142);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxprojectTemplate#asset_files for (self: PbxprojectTemplate): Array[PbxFile] */
val* nitc___nitc__PbxprojectTemplate___asset_files(val* self) {
val* var /* : Array[PbxFile] */;
val* var1 /* : Array[PbxFile] */;
var1 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___asset_files].val; /* _asset_files on <self:PbxprojectTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _asset_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 145);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxprojectTemplate#files for (self: PbxprojectTemplate): Array[PbxFile] */
val* nitc___nitc__PbxprojectTemplate___files(val* self) {
val* var /* : Array[PbxFile] */;
val* var1 /* : Array[PbxFile] */;
var1 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___files].val; /* _files on <self:PbxprojectTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 148);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method xcode_templates#PbxprojectTemplate#add_file for (self: PbxprojectTemplate, PbxFile) */
void nitc___nitc__PbxprojectTemplate___add_file(val* self, val* p0) {
val* var_file /* var file: PbxFile */;
var_file = p0;
{
nitc___nitc__PbxFile___add_to_project(var_file, self); /* Direct call xcode_templates#PbxFile#add_to_project on <var_file:PbxFile>*/
}
RET_LABEL:;
}
/* method xcode_templates#PbxprojectTemplate#rendering for (self: PbxprojectTemplate) */
void nitc___nitc__PbxprojectTemplate___template__Template__rendering(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : Array[Array[PbxFile]] */;
val* var_ /* var : Array[Array[PbxFile]] */;
val* var4 /* : Array[PbxFile] */;
val* var6 /* : Array[PbxFile] */;
val* var7 /* : Array[PbxFile] */;
val* var9 /* : Array[PbxFile] */;
val* var_10 /* var : Array[Array[PbxFile]] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[Array[PbxFile]] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_array /* var array: Array[PbxFile] */;
val* var_15 /* var : Array[PbxFile] */;
val* var16 /* : IndexedIterator[nullable Object] */;
val* var_17 /* var : IndexedIterator[PbxFile] */;
short int var18 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_file /* var file: PbxFile */;
val* var22 /* : NativeArray[String] */;
static val* varonce21;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
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
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : String */;
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
val* var62 /* : String */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var69 /* : Array[PbxFile] */;
val* var71 /* : Array[PbxFile] */;
val* var_72 /* var : Array[PbxFile] */;
val* var73 /* : IndexedIterator[nullable Object] */;
val* var_74 /* var : IndexedIterator[PbxFile] */;
short int var75 /* : Bool */;
val* var77 /* : nullable Object */;
val* var_file78 /* var file: PbxFile */;
val* var79 /* : Writable */;
val* var81 /* : NativeArray[String] */;
static val* varonce80;
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
val* var98 /* : String */;
val* var100 /* : String */;
val* var101 /* : String */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : Array[PbxFile] */;
val* var110 /* : Array[PbxFile] */;
val* var_111 /* var : Array[PbxFile] */;
val* var112 /* : IndexedIterator[nullable Object] */;
val* var_113 /* var : IndexedIterator[PbxFile] */;
short int var114 /* : Bool */;
val* var116 /* : nullable Object */;
val* var_file117 /* var file: PbxFile */;
val* var119 /* : NativeArray[String] */;
static val* varonce118;
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
val* var132 /* : String */;
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
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : CString */;
val* var168 /* : String */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : CString */;
val* var172 /* : String */;
val* var173 /* : String */;
val* var175 /* : String */;
val* var176 /* : String */;
val* var178 /* : String */;
val* var179 /* : String */;
val* var181 /* : String */;
val* var182 /* : String */;
val* var184 /* : String */;
val* var185 /* : String */;
val* var187 /* : String */;
val* var188 /* : String */;
val* var190 /* : String */;
val* var191 /* : String */;
val* var193 /* : String */;
val* var194 /* : String */;
val* var196 /* : String */;
val* var197 /* : String */;
val* var198 /* : Array[PbxFile] */;
val* var200 /* : Array[PbxFile] */;
val* var_201 /* var : Array[PbxFile] */;
val* var202 /* : IndexedIterator[nullable Object] */;
val* var_203 /* var : IndexedIterator[PbxFile] */;
short int var204 /* : Bool */;
val* var206 /* : nullable Object */;
val* var_file207 /* var file: PbxFile */;
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
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : CString */;
val* var221 /* : String */;
val* var222 /* : String */;
val* var223 /* : String */;
val* var224 /* : String */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : CString */;
val* var228 /* : String */;
val* var229 /* : Array[PbxFile] */;
val* var231 /* : Array[PbxFile] */;
val* var_232 /* var : Array[PbxFile] */;
val* var233 /* : IndexedIterator[nullable Object] */;
val* var_234 /* var : IndexedIterator[PbxFile] */;
short int var235 /* : Bool */;
val* var237 /* : nullable Object */;
val* var_file238 /* var file: PbxFile */;
val* var240 /* : NativeArray[String] */;
static val* varonce239;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
static val* varonce245;
val* var246 /* : String */;
char* var247 /* : CString */;
val* var248 /* : String */;
static val* varonce249;
val* var250 /* : String */;
char* var251 /* : CString */;
val* var252 /* : String */;
val* var253 /* : String */;
val* var254 /* : String */;
val* var255 /* : String */;
val* var257 /* : NativeArray[String] */;
static val* varonce256;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : CString */;
val* var261 /* : String */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : CString */;
val* var265 /* : String */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : CString */;
val* var269 /* : String */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : CString */;
val* var273 /* : String */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : CString */;
val* var277 /* : String */;
val* var278 /* : String */;
val* var280 /* : String */;
val* var281 /* : String */;
val* var283 /* : String */;
val* var284 /* : String */;
val* var286 /* : String */;
val* var287 /* : String */;
val* var289 /* : String */;
val* var290 /* : String */;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "// !$*UTF8*$!\n{\n\tarchiveVersion = 1;\n\tclasses = {\n\t};\n\tobjectVersion = 46;\n\tobjects = {\n\n/* Begin PBXBuildFile section */\n";
var2 = core__abstract_text___CString___to_s_full(var1, 122l, 122l);
var = var2;
varonce = var;
}
{
template___template__Template___add(self, var); /* Direct call template#Template#add on <self:PbxprojectTemplate>*/
}
var3 = NEW_core__Array(&type_core__Array__core__Array__nitc__PbxFile);
{
core___core__Array___with_capacity(var3, 2l); /* Direct call array#Array#with_capacity on <var3:Array[Array[PbxFile]]>*/
}
var_ = var3;
{
{ /* Inline xcode_templates#PbxprojectTemplate#source_files (self) on <self:PbxprojectTemplate> */
var6 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___source_files].val; /* _source_files on <self:PbxprojectTemplate> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _source_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 142);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var4); /* Direct call array#AbstractArray#push on <var_:Array[Array[PbxFile]]>*/
}
{
{ /* Inline xcode_templates#PbxprojectTemplate#asset_files (self) on <self:PbxprojectTemplate> */
var9 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___asset_files].val; /* _asset_files on <self:PbxprojectTemplate> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _asset_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 145);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var7); /* Direct call array#AbstractArray#push on <var_:Array[Array[PbxFile]]>*/
}
var_10 = var_;
{
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_10);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[Array[PbxFile]]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[Array[PbxFile]]>*/
}
var_array = var14;
var_15 = var_array;
{
var16 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_15);
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:IndexedIterator[PbxFile]>*/
}
if (var18){
} else {
goto BREAK_label19;
}
{
var20 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:IndexedIterator[PbxFile]>*/
}
var_file = var20;
if (unlikely(varonce21==NULL)) {
var22 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "\t\t";
var26 = core__abstract_text___CString___to_s_full(var25, 2l, 2l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[0]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " /* ";
var30 = core__abstract_text___CString___to_s_full(var29, 4l, 4l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var22)->values[2]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = " */ = {\n\t\t\tisa = PBXBuildFile;\n\t\t\tfileRef = ";
var34 = core__abstract_text___CString___to_s_full(var33, 44l, 44l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var22)->values[4]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = " /* ";
var38 = core__abstract_text___CString___to_s_full(var37, 4l, 4l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var22)->values[6]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " */;\n\t\t\t};\n";
var42 = core__abstract_text___CString___to_s_full(var41, 11l, 11l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var22)->values[8]=var40;
} else {
var22 = varonce21;
varonce21 = NULL;
}
{
var43 = nitc___nitc__PbxFile___build_uuid(var_file);
}
((struct instance_core__NativeArray*)var22)->values[1]=var43;
{
var44 = nitc___nitc__PbxFile___doc(var_file);
}
((struct instance_core__NativeArray*)var22)->values[3]=var44;
{
var45 = nitc___nitc__PbxFile___ref_uuid(var_file);
}
((struct instance_core__NativeArray*)var22)->values[5]=var45;
{
var46 = nitc___nitc__PbxFile___doc(var_file);
}
((struct instance_core__NativeArray*)var22)->values[7]=var46;
{
var47 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce21 = var22;
{
template___template__Template___add(self, var47); /* Direct call template#Template#add on <self:PbxprojectTemplate>*/
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:IndexedIterator[PbxFile]>*/
}
}
BREAK_label19: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:IndexedIterator[PbxFile]>*/
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[Array[PbxFile]]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[Array[PbxFile]]>*/
}
if (unlikely(varonce48==NULL)) {
var49 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "\t\t0FDD07A21C6F8E0E006FF70E /* LaunchScreen.storyboard in Resources */ = {isa = PBXBuildFile; fileRef = 0FDD07A11C6F8E0E006FF70E /* LaunchScreen.storyboard */; };\n/* End PBXBuildFile section */\n\n/* Begin PBXFileReference section */\n\t/* Static generated files */\n\t\tAF9F83CC1A5F0D21004B62C0 /* ";
var53 = core__abstract_text___CString___to_s_full(var52, 291l, 291l);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var49)->values[0]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = ".app */ = {\n\t\t\tisa = PBXFileReference;\n\t\t\texplicitFileType = wrapper.application;\n\t\t\tincludeInIndex = 0;\n\t\t\tpath = ";
var57 = core__abstract_text___CString___to_s_full(var56, 115l, 115l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var49)->values[2]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = ".app;\n\t\t\tsourceTree = BUILT_PRODUCTS_DIR;\n\t\t\t};\n\t\tAF9F83D01A5F0D21004B62C0 /* Info.plist */ = {\n\t\t\tisa = PBXFileReference;\n\t\t\tlastKnownFileType = text.plist.xml;\n\t\t\tpath = Info.plist;\n\t\t\tsourceTree = \"<group>\";\n\t\t\t};\n\t\tAF9F83DE1A5F0D21004B62C0 /* Base */ = {\n\t\t\tisa = PBXFileReference;\n\t\t\tlastKnownFileType = file.storyboard;\n\t\t\tname = Base;\n\t\t\tpath = Base.lproj/Main.storyboard;\n\t\t\tsourceTree = \"<group>\";\n\t\t\t};\n\t\tAF9F83E01A5F0D21004B62C0 /* Images.xcassets */ = {\n\t\t\tisa = PBXFileReference;\n\t\t\tlastKnownFileType = folder.assetcatalog;\n\t\t\tpath = Images.xcassets;\n\t\t\tsourceTree = \"<group>\";\n\t\t\t};\n\t\tAF9F83E31A5F0D21004B62C0 /* Base */ = {\n\t\t\tisa = PBXFileReference;\n\t\t\tlastKnownFileType = file.xib;\n\t\t\tname = Base;\n\t\t\tpath = Base.lproj/LaunchScreen.xib;\n\t\t\tsourceTree = \"<group>\";\n\t\t\t};\n\n\t/* Changing generated files */\n";
var61 = core__abstract_text___CString___to_s_full(var60, 820l, 820l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var49)->values[4]=var59;
} else {
var49 = varonce48;
varonce48 = NULL;
}
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var64 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
((struct instance_core__NativeArray*)var49)->values[1]=var62;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var67 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
((struct instance_core__NativeArray*)var49)->values[3]=var65;
{
var68 = ((val*(*)(val* self))(var49->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
{
template___template__Template___add(self, var68); /* Direct call template#Template#add on <self:PbxprojectTemplate>*/
}
{
{ /* Inline xcode_templates#PbxprojectTemplate#files (self) on <self:PbxprojectTemplate> */
var71 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___files].val; /* _files on <self:PbxprojectTemplate> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 148);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_72 = var69;
{
var73 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_72);
}
var_74 = var73;
for(;;) {
{
var75 = ((short int(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_74); /* is_ok on <var_74:IndexedIterator[PbxFile]>*/
}
if (var75){
} else {
goto BREAK_label76;
}
{
var77 = ((val*(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_74); /* item on <var_74:IndexedIterator[PbxFile]>*/
}
var_file78 = var77;
{
var79 = nitc___nitc__PbxFile___description(var_file78);
}
{
template___template__Template___add(self, var79); /* Direct call template#Template#add on <self:PbxprojectTemplate>*/
}
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_74); /* next on <var_74:IndexedIterator[PbxFile]>*/
}
}
BREAK_label76: (void)0;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_74); /* finish on <var_74:IndexedIterator[PbxFile]>*/
}
if (unlikely(varonce80==NULL)) {
var81 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "\t\t0FDD07A11C6F8E0E006FF70E /* LaunchScreen.storyboard */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = file.storyboard; path = LaunchScreen.storyboard; sourceTree = \"<group>\"; };\n/* End PBXFileReference section */\n\n/* Begin PBXFrameworksBuildPhase section */\n\t\tAF9F83C91A5F0D21004B62C0 /* Frameworks */ = {\n\t\t\tisa = PBXFrameworksBuildPhase;\n\t\t\tbuildActionMask = 2147483647;\n\t\t\tfiles = (\n\t\t\t);\n\t\t\trunOnlyForDeploymentPostprocessing = 0;\n\t\t};\n/* End PBXFrameworksBuildPhase section */\n\n/* Begin PBXGroup section */\n\t\tAF9F83C31A5F0D21004B62C0 = {\n\t\t\tisa = PBXGroup;\n\t\t\tchildren = (\n\t\t\t\tAF9F83CE1A5F0D21004B62C0 /* ";
var85 = core__abstract_text___CString___to_s_full(var84, 630l, 630l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var81)->values[0]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = " */,\n\t\t\t\tAF9F83CD1A5F0D21004B62C0 /* Products */,\n\t\t\t\t0FDD07A11C6F8E0E006FF70E /* LaunchScreen.storyboard */,\n\t\t\t);\n\t\t\tsourceTree = \"<group>\";\n\t\t};\n\t\tAF9F83CD1A5F0D21004B62C0 /* Products */ = {\n\t\t\tisa = PBXGroup;\n\t\t\tchildren = (\n\t\t\t\tAF9F83CC1A5F0D21004B62C0 /* ";
var89 = core__abstract_text___CString___to_s_full(var88, 261l, 261l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var81)->values[2]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = ".app */,\n\t\t\t);\n\t\t\tname = Products;\n\t\t\tsourceTree = \"<group>\";\n\t\t};\n\t\tAF9F83CE1A5F0D21004B62C0 /* ";
var93 = core__abstract_text___CString___to_s_full(var92, 97l, 97l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var81)->values[4]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = " */ = {\n\t\t\tisa = PBXGroup;\n\t\t\tchildren = (\n";
var97 = core__abstract_text___CString___to_s_full(var96, 43l, 43l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var81)->values[6]=var95;
} else {
var81 = varonce80;
varonce80 = NULL;
}
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var100 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
((struct instance_core__NativeArray*)var81)->values[1]=var98;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var103 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
((struct instance_core__NativeArray*)var81)->values[3]=var101;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var106 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
((struct instance_core__NativeArray*)var81)->values[5]=var104;
{
var107 = ((val*(*)(val* self))(var81->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var81); /* native_to_s on <var81:NativeArray[String]>*/
}
varonce80 = var81;
{
template___template__Template___add(self, var107); /* Direct call template#Template#add on <self:PbxprojectTemplate>*/
}
{
{ /* Inline xcode_templates#PbxprojectTemplate#files (self) on <self:PbxprojectTemplate> */
var110 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___files].val; /* _files on <self:PbxprojectTemplate> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 148);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
var_111 = var108;
{
var112 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_111);
}
var_113 = var112;
for(;;) {
{
var114 = ((short int(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_113); /* is_ok on <var_113:IndexedIterator[PbxFile]>*/
}
if (var114){
} else {
goto BREAK_label115;
}
{
var116 = ((val*(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_113); /* item on <var_113:IndexedIterator[PbxFile]>*/
}
var_file117 = var116;
if (unlikely(varonce118==NULL)) {
var119 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "\t\t\t\t";
var123 = core__abstract_text___CString___to_s_full(var122, 4l, 4l);
var121 = var123;
varonce120 = var121;
}
((struct instance_core__NativeArray*)var119)->values[0]=var121;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = " /* ";
var127 = core__abstract_text___CString___to_s_full(var126, 4l, 4l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var119)->values[2]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = " */,\n";
var131 = core__abstract_text___CString___to_s_full(var130, 5l, 5l);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var119)->values[4]=var129;
} else {
var119 = varonce118;
varonce118 = NULL;
}
{
var132 = nitc___nitc__PbxFile___ref_uuid(var_file117);
}
((struct instance_core__NativeArray*)var119)->values[1]=var132;
{
var133 = nitc___nitc__PbxFile___doc(var_file117);
}
((struct instance_core__NativeArray*)var119)->values[3]=var133;
{
var134 = ((val*(*)(val* self))(var119->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var119); /* native_to_s on <var119:NativeArray[String]>*/
}
varonce118 = var119;
{
template___template__Template___add(self, var134); /* Direct call template#Template#add on <self:PbxprojectTemplate>*/
}
{
((void(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_113); /* next on <var_113:IndexedIterator[PbxFile]>*/
}
}
BREAK_label115: (void)0;
{
((void(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_113); /* finish on <var_113:IndexedIterator[PbxFile]>*/
}
if (unlikely(varonce135==NULL)) {
var136 = NEW_core__NativeArray(17l, &type_core__NativeArray__core__String);
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "\t\t\t);\n\t\t\tpath = ";
var140 = core__abstract_text___CString___to_s_full(var139, 16l, 16l);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var136)->values[0]=var138;
if (likely(varonce141!=NULL)) {
var142 = varonce141;
} else {
var143 = ";\n\t\t\tsourceTree = \"<group>\";\n\t\t};\n/* End PBXGroup section */\n\n/* Begin PBXNativeTarget section */\n\t\tAF9F83CB1A5F0D21004B62C0 /* ";
var144 = core__abstract_text___CString___to_s_full(var143, 128l, 128l);
var142 = var144;
varonce141 = var142;
}
((struct instance_core__NativeArray*)var136)->values[2]=var142;
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = " */ = {\n\t\t\tisa = PBXNativeTarget;\n\t\t\tbuildConfigurationList = AF9F83F31A5F0D21004B62C0 /* Build configuration list for PBXNativeTarget \"";
var148 = core__abstract_text___CString___to_s_full(var147, 136l, 136l);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var136)->values[4]=var146;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "\" */;\n\t\t\tbuildPhases = (\n\t\t\t\tAF9F83C81A5F0D21004B62C0 /* Sources */,\n\t\t\t\tAF9F83C91A5F0D21004B62C0 /* Frameworks */,\n\t\t\t\tAF9F83CA1A5F0D21004B62C0 /* Resources */,\n\t\t\t);\n\t\t\tbuildRules = (\n\t\t\t);\n\t\t\tdependencies = (\n\t\t\t);\n\t\t\tname = ";
var152 = core__abstract_text___CString___to_s_full(var151, 228l, 228l);
var150 = var152;
varonce149 = var150;
}
((struct instance_core__NativeArray*)var136)->values[6]=var150;
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = ";\n\t\t\tproductName = ";
var156 = core__abstract_text___CString___to_s_full(var155, 19l, 19l);
var154 = var156;
varonce153 = var154;
}
((struct instance_core__NativeArray*)var136)->values[8]=var154;
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = ";\n\t\t\tproductReference = AF9F83CC1A5F0D21004B62C0 /* ";
var160 = core__abstract_text___CString___to_s_full(var159, 52l, 52l);
var158 = var160;
varonce157 = var158;
}
((struct instance_core__NativeArray*)var136)->values[10]=var158;
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = ".app */;\n\t\t\tproductType = \"com.apple.product-type.application\";\n\t\t};\n/* End PBXNativeTarget section */\n\n/* Begin PBXProject section */\n\t\tAF9F83C41A5F0D21004B62C0 /* Project object */ = {\n\t\t\tisa = PBXProject;\n\t\t\tattributes = {\n\t\t\t\tLastUpgradeCheck = 0610;\n\t\t\t\tTargetAttributes = {\n\t\t\t\t\tAF9F83CB1A5F0D21004B62C0 = {\n\t\t\t\t\t\tCreatedOnToolsVersion = 6.1.1;\n\t\t\t\t\t};\n\t\t\t\t};\n\t\t\t};\n\t\t\tbuildConfigurationList = AF9F83C71A5F0D21004B62C0 /* Build configuration list for PBXProject \"";
var164 = core__abstract_text___CString___to_s_full(var163, 469l, 469l);
var162 = var164;
varonce161 = var162;
}
((struct instance_core__NativeArray*)var136)->values[12]=var162;
if (likely(varonce165!=NULL)) {
var166 = varonce165;
} else {
var167 = "\" */;\n\t\t\tcompatibilityVersion = \"Xcode 3.2\";\n\t\t\tdevelopmentRegion = English;\n\t\t\thasScannedForEncodings = 0;\n\t\t\tknownRegions = (\n\t\t\t\ten,\n\t\t\t\tBase,\n\t\t\t);\n\t\t\tmainGroup = AF9F83C31A5F0D21004B62C0;\n\t\t\tproductRefGroup = AF9F83CD1A5F0D21004B62C0 /* Products */;\n\t\t\tprojectDirPath = \"\";\n\t\t\tprojectRoot = \"\";\n\t\t\ttargets = (\n\t\t\t\tAF9F83CB1A5F0D21004B62C0 /* ";
var168 = core__abstract_text___CString___to_s_full(var167, 347l, 347l);
var166 = var168;
varonce165 = var166;
}
((struct instance_core__NativeArray*)var136)->values[14]=var166;
if (likely(varonce169!=NULL)) {
var170 = varonce169;
} else {
var171 = " */,\n\t\t\t);\n\t\t};\n/* End PBXProject section */\n\n/* Begin PBXResourcesBuildPhase section */\n\t\tAF9F83CA1A5F0D21004B62C0 /* Resources */ = {\n\t\t\tisa = PBXResourcesBuildPhase;\n\t\t\tbuildActionMask = 2147483647;\n\t\t\tfiles = (\n";
var172 = core__abstract_text___CString___to_s_full(var171, 215l, 215l);
var170 = var172;
varonce169 = var170;
}
((struct instance_core__NativeArray*)var136)->values[16]=var170;
} else {
var136 = varonce135;
varonce135 = NULL;
}
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var175 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
((struct instance_core__NativeArray*)var136)->values[1]=var173;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var178 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
((struct instance_core__NativeArray*)var136)->values[3]=var176;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var181 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
((struct instance_core__NativeArray*)var136)->values[5]=var179;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var184 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
((struct instance_core__NativeArray*)var136)->values[7]=var182;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var187 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
((struct instance_core__NativeArray*)var136)->values[9]=var185;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var190 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
((struct instance_core__NativeArray*)var136)->values[11]=var188;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var193 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var193 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
((struct instance_core__NativeArray*)var136)->values[13]=var191;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var196 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
((struct instance_core__NativeArray*)var136)->values[15]=var194;
{
var197 = ((val*(*)(val* self))(var136->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var136); /* native_to_s on <var136:NativeArray[String]>*/
}
varonce135 = var136;
{
template___template__Template___add(self, var197); /* Direct call template#Template#add on <self:PbxprojectTemplate>*/
}
{
{ /* Inline xcode_templates#PbxprojectTemplate#asset_files (self) on <self:PbxprojectTemplate> */
var200 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___asset_files].val; /* _asset_files on <self:PbxprojectTemplate> */
if (unlikely(var200 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _asset_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 145);
fatal_exit(1);
}
var198 = var200;
RET_LABEL199:(void)0;
}
}
var_201 = var198;
{
var202 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_201);
}
var_203 = var202;
for(;;) {
{
var204 = ((short int(*)(val* self))((((long)var_203&3)?class_info[((long)var_203&3)]:var_203->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_203); /* is_ok on <var_203:IndexedIterator[PbxFile]>*/
}
if (var204){
} else {
goto BREAK_label205;
}
{
var206 = ((val*(*)(val* self))((((long)var_203&3)?class_info[((long)var_203&3)]:var_203->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_203); /* item on <var_203:IndexedIterator[PbxFile]>*/
}
var_file207 = var206;
if (unlikely(varonce208==NULL)) {
var209 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "\t\t\t\t";
var213 = core__abstract_text___CString___to_s_full(var212, 4l, 4l);
var211 = var213;
varonce210 = var211;
}
((struct instance_core__NativeArray*)var209)->values[0]=var211;
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = " /* ";
var217 = core__abstract_text___CString___to_s_full(var216, 4l, 4l);
var215 = var217;
varonce214 = var215;
}
((struct instance_core__NativeArray*)var209)->values[2]=var215;
if (likely(varonce218!=NULL)) {
var219 = varonce218;
} else {
var220 = " */,\n";
var221 = core__abstract_text___CString___to_s_full(var220, 5l, 5l);
var219 = var221;
varonce218 = var219;
}
((struct instance_core__NativeArray*)var209)->values[4]=var219;
} else {
var209 = varonce208;
varonce208 = NULL;
}
{
var222 = nitc___nitc__PbxFile___build_uuid(var_file207);
}
((struct instance_core__NativeArray*)var209)->values[1]=var222;
{
var223 = nitc___nitc__PbxFile___doc(var_file207);
}
((struct instance_core__NativeArray*)var209)->values[3]=var223;
{
var224 = ((val*(*)(val* self))(var209->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var209); /* native_to_s on <var209:NativeArray[String]>*/
}
varonce208 = var209;
{
template___template__Template___add(self, var224); /* Direct call template#Template#add on <self:PbxprojectTemplate>*/
}
{
((void(*)(val* self))((((long)var_203&3)?class_info[((long)var_203&3)]:var_203->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_203); /* next on <var_203:IndexedIterator[PbxFile]>*/
}
}
BREAK_label205: (void)0;
{
((void(*)(val* self))((((long)var_203&3)?class_info[((long)var_203&3)]:var_203->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_203); /* finish on <var_203:IndexedIterator[PbxFile]>*/
}
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = "\t\t\t\t0FDD07A21C6F8E0E006FF70E /* LaunchScreen.storyboard in Resources */,\n\t\t\t);\n\t\t\trunOnlyForDeploymentPostprocessing = 0;\n\t\t};\n/* End PBXResourcesBuildPhase section */\n\n/* Begin PBXSourcesBuildPhase section */\n\t\tAF9F83C81A5F0D21004B62C0 /* Sources */ = {\n\t\t\tisa = PBXSourcesBuildPhase;\n\t\t\tbuildActionMask = 2147483647;\n\t\t\tfiles = (\n";
var228 = core__abstract_text___CString___to_s_full(var227, 332l, 332l);
var226 = var228;
varonce225 = var226;
}
{
template___template__Template___add(self, var226); /* Direct call template#Template#add on <self:PbxprojectTemplate>*/
}
{
{ /* Inline xcode_templates#PbxprojectTemplate#source_files (self) on <self:PbxprojectTemplate> */
var231 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___source_files].val; /* _source_files on <self:PbxprojectTemplate> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _source_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 142);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
var_232 = var229;
{
var233 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_232);
}
var_234 = var233;
for(;;) {
{
var235 = ((short int(*)(val* self))((((long)var_234&3)?class_info[((long)var_234&3)]:var_234->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_234); /* is_ok on <var_234:IndexedIterator[PbxFile]>*/
}
if (var235){
} else {
goto BREAK_label236;
}
{
var237 = ((val*(*)(val* self))((((long)var_234&3)?class_info[((long)var_234&3)]:var_234->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_234); /* item on <var_234:IndexedIterator[PbxFile]>*/
}
var_file238 = var237;
if (unlikely(varonce239==NULL)) {
var240 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "\t\t\t\t";
var244 = core__abstract_text___CString___to_s_full(var243, 4l, 4l);
var242 = var244;
varonce241 = var242;
}
((struct instance_core__NativeArray*)var240)->values[0]=var242;
if (likely(varonce245!=NULL)) {
var246 = varonce245;
} else {
var247 = " /* ";
var248 = core__abstract_text___CString___to_s_full(var247, 4l, 4l);
var246 = var248;
varonce245 = var246;
}
((struct instance_core__NativeArray*)var240)->values[2]=var246;
if (likely(varonce249!=NULL)) {
var250 = varonce249;
} else {
var251 = " */,\n";
var252 = core__abstract_text___CString___to_s_full(var251, 5l, 5l);
var250 = var252;
varonce249 = var250;
}
((struct instance_core__NativeArray*)var240)->values[4]=var250;
} else {
var240 = varonce239;
varonce239 = NULL;
}
{
var253 = nitc___nitc__PbxFile___build_uuid(var_file238);
}
((struct instance_core__NativeArray*)var240)->values[1]=var253;
{
var254 = nitc___nitc__PbxFile___doc(var_file238);
}
((struct instance_core__NativeArray*)var240)->values[3]=var254;
{
var255 = ((val*(*)(val* self))(var240->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var240); /* native_to_s on <var240:NativeArray[String]>*/
}
varonce239 = var240;
{
template___template__Template___add(self, var255); /* Direct call template#Template#add on <self:PbxprojectTemplate>*/
}
{
((void(*)(val* self))((((long)var_234&3)?class_info[((long)var_234&3)]:var_234->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_234); /* next on <var_234:IndexedIterator[PbxFile]>*/
}
}
BREAK_label236: (void)0;
{
((void(*)(val* self))((((long)var_234&3)?class_info[((long)var_234&3)]:var_234->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_234); /* finish on <var_234:IndexedIterator[PbxFile]>*/
}
if (unlikely(varonce256==NULL)) {
var257 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce258!=NULL)) {
var259 = varonce258;
} else {
var260 = "\t\t\t);\n\t\t\trunOnlyForDeploymentPostprocessing = 0;\n\t\t};\n/* End PBXSourcesBuildPhase section */\n\n/* Begin XCBuildConfiguration section */\n\t\tAF9F83F11A5F0D21004B62C0 /* Debug */ = {\n\t\t\tisa = XCBuildConfiguration;\n\t\t\tbuildSettings = {\n\t\t\t\tALWAYS_SEARCH_USER_PATHS = NO;\n\t\t\t\tCLANG_CXX_LANGUAGE_STANDARD = \"gnu++0x\";\n\t\t\t\tCLANG_CXX_LIBRARY = \"libc++\";\n\t\t\t\tCLANG_ENABLE_MODULES = YES;\n\t\t\t\tCLANG_ENABLE_OBJC_ARC = YES;\n\t\t\t\tCLANG_WARN_OBJC_ROOT_CLASS = YES_ERROR;\n\t\t\t\tCLANG_WARN__DUPLICATE_METHOD_MATCH = YES;\n\t\t\t\t\"CODE_SIGN_IDENTITY[sdk=iphoneos*]\" = \"iPhone Developer\";\n\t\t\t\tCOPY_PHASE_STRIP = NO;\n\t\t\t\tENABLE_STRICT_OBJC_MSGSEND = YES;\n\t\t\t\tGCC_C_LANGUAGE_STANDARD = gnu99;\n\t\t\t\tGCC_DYNAMIC_NO_PIC = NO;\n\t\t\t\tGCC_OPTIMIZATION_LEVEL = 0;\n\t\t\t\tGCC_PREPROCESSOR_DEFINITIONS = (\n\t\t\t\t\t\"DEBUG=1\",\n\t\t\t\t\t\"$(inherited)\",\n\t\t\t\t);\n\t\t\t\tGCC_SYMBOLS_PRIVATE_EXTERN = NO;\n\t\t\t\tGCC_WARN_ABOUT_RETURN_TYPE = YES_ERROR;\n\t\t\t\tGCC_WARN_UNDECLARED_SELECTOR = YES;\n\t\t\t\tGCC_WARN_UNINITIALIZED_AUTOS = YES_AGGRESSIVE;\n\t\t\t\tIPHONEOS_DEPLOYMENT_TARGET = 8.1;\n\t\t\t\tMTL_ENABLE_DEBUG_INFO = YES;\n\t\t\t\tONLY_ACTIVE_ARCH = YES;\n\t\t\t\tSDKROOT = iphoneos;\n\t\t\t\tTARGETED_DEVICE_FAMILY = \"1,2\";\n\t\t\t};\n\t\t\tname = Debug;\n\t\t};\n\t\tAF9F83F21A5F0D21004B62C0 /* Release */ = {\n\t\t\tisa = XCBuildConfiguration;\n\t\t\tbuildSettings = {\n\t\t\t\tALWAYS_SEARCH_USER_PATHS = NO;\n\t\t\t\tCLANG_CXX_LANGUAGE_STANDARD = \"gnu++0x\";\n\t\t\t\tCLANG_CXX_LIBRARY = \"libc++\";\n\t\t\t\tCLANG_ENABLE_MODULES = YES;\n\t\t\t\tCLANG_ENABLE_OBJC_ARC = YES;\n\t\t\t\tCLANG_WARN_OBJC_ROOT_CLASS = YES_ERROR;\n\t\t\t\tCLANG_WARN__DUPLICATE_METHOD_MATCH = YES;\n\t\t\t\t\"CODE_SIGN_IDENTITY[sdk=iphoneos*]\" = \"iPhone Developer\";\n\t\t\t\tCOPY_PHASE_STRIP = YES;\n\t\t\t\tENABLE_NS_ASSERTIONS = NO;\n\t\t\t\tENABLE_STRICT_OBJC_MSGSEND = YES;\n\t\t\t\tGCC_C_LANGUAGE_STANDARD = gnu99;\n\t\t\t\tGCC_WARN_ABOUT_RETURN_TYPE = YES_ERROR;\n\t\t\t\tGCC_WARN_UNDECLARED_SELECTOR = YES;\n\t\t\t\tGCC_WARN_UNINITIALIZED_AUTOS = YES_AGGRESSIVE;\n\t\t\t\tIPHONEOS_DEPLOYMENT_TARGET = 8.1;\n\t\t\t\tMTL_ENABLE_DEBUG_INFO = NO;\n\t\t\t\tSDKROOT = iphoneos;\n\t\t\t\tTARGETED_DEVICE_FAMILY = \"1,2\";\n\t\t\t\tVALIDATE_PRODUCT = YES;\n\t\t\t};\n\t\t\tname = Release;\n\t\t};\n\t\tAF9F83F41A5F0D21004B62C0 /* Debug */ = {\n\t\t\tisa = XCBuildConfiguration;\n\t\t\tbuildSettings = {\n\t\t\t\tASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;\n\t\t\t\tINFOPLIST_FILE = ";
var261 = core__abstract_text___CString___to_s_full(var260, 2215l, 2215l);
var259 = var261;
varonce258 = var259;
}
((struct instance_core__NativeArray*)var257)->values[0]=var259;
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = "/Info.plist;\n\t\t\t\tLD_RUNPATH_SEARCH_PATHS = \"$(inherited) @executable_path/Frameworks\";\n\t\t\t\tPRODUCT_NAME = \"$(TARGET_NAME)\";\n\t\t\t};\n\t\t\tname = Debug;\n\t\t};\n\t\tAF9F83F51A5F0D21004B62C0 /* Release */ = {\n\t\t\tisa = XCBuildConfiguration;\n\t\t\tbuildSettings = {\n\t\t\t\tASSETCATALOG_COMPILER_APPICON_NAME = AppIcon;\n\t\t\t\tINFOPLIST_FILE = ";
var265 = core__abstract_text___CString___to_s_full(var264, 320l, 320l);
var263 = var265;
varonce262 = var263;
}
((struct instance_core__NativeArray*)var257)->values[2]=var263;
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = "/Info.plist;\n\t\t\t\tLD_RUNPATH_SEARCH_PATHS = \"$(inherited) @executable_path/Frameworks\";\n\t\t\t\tPRODUCT_NAME = \"$(TARGET_NAME)\";\n\t\t\t};\n\t\t\tname = Release;\n\t\t};\n/* End XCBuildConfiguration section */\n\n/* Begin XCConfigurationList section */\n\t\tAF9F83C71A5F0D21004B62C0 /* Build configuration list for PBXProject \"";
var269 = core__abstract_text___CString___to_s_full(var268, 305l, 305l);
var267 = var269;
varonce266 = var267;
}
((struct instance_core__NativeArray*)var257)->values[4]=var267;
if (likely(varonce270!=NULL)) {
var271 = varonce270;
} else {
var272 = "\" */ = {\n\t\t\tisa = XCConfigurationList;\n\t\t\tbuildConfigurations = (\n\t\t\t\tAF9F83F11A5F0D21004B62C0 /* Debug */,\n\t\t\t\tAF9F83F21A5F0D21004B62C0 /* Release */,\n\t\t\t);\n\t\t\tdefaultConfigurationIsVisible = 0;\n\t\t\tdefaultConfigurationName = Release;\n\t\t};\n\t\tAF9F83F31A5F0D21004B62C0 /* Build configuration list for PBXNativeTarget \"";
var273 = core__abstract_text___CString___to_s_full(var272, 316l, 316l);
var271 = var273;
varonce270 = var271;
}
((struct instance_core__NativeArray*)var257)->values[6]=var271;
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "\" */ = {\n\t\t\tisa = XCConfigurationList;\n\t\t\tbuildConfigurations = (\n\t\t\t\tAF9F83F41A5F0D21004B62C0 /* Debug */,\n\t\t\t\tAF9F83F51A5F0D21004B62C0 /* Release */,\n\t\t\t);\n\t\t\tdefaultConfigurationIsVisible = 0;\n\t\t};\n/* End XCConfigurationList section */\n\t};\n\trootObject = AF9F83C41A5F0D21004B62C0 /* Project object */;\n}\n";
var277 = core__abstract_text___CString___to_s_full(var276, 306l, 306l);
var275 = var277;
varonce274 = var275;
}
((struct instance_core__NativeArray*)var257)->values[8]=var275;
} else {
var257 = varonce256;
varonce256 = NULL;
}
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var280 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var280 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var278 = var280;
RET_LABEL279:(void)0;
}
}
((struct instance_core__NativeArray*)var257)->values[1]=var278;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var283 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var283 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
((struct instance_core__NativeArray*)var257)->values[3]=var281;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var286 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var286 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var284 = var286;
RET_LABEL285:(void)0;
}
}
((struct instance_core__NativeArray*)var257)->values[5]=var284;
{
{ /* Inline xcode_templates#PbxprojectTemplate#name (self) on <self:PbxprojectTemplate> */
var289 = self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___name].val; /* _name on <self:PbxprojectTemplate> */
if (unlikely(var289 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 139);
fatal_exit(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
((struct instance_core__NativeArray*)var257)->values[7]=var287;
{
var290 = ((val*(*)(val* self))(var257->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var257); /* native_to_s on <var257:NativeArray[String]>*/
}
varonce256 = var257;
{
template___template__Template___add(self, var290); /* Direct call template#Template#add on <self:PbxprojectTemplate>*/
}
RET_LABEL:;
}
/* method xcode_templates#PbxprojectTemplate#init for (self: PbxprojectTemplate) */
void nitc___nitc__PbxprojectTemplate___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__PbxprojectTemplate___core__kernel__Object__init]))(self); /* init on <self:PbxprojectTemplate>*/
}
RET_LABEL:;
}
/* method xcode_templates#PlistTemplate#product_name for (self: PlistTemplate): String */
val* nitc___nitc__PlistTemplate___product_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__xcode_templates__PlistTemplate___product_name].val; /* _product_name on <self:PlistTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _product_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 463);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method xcode_templates#PlistTemplate#product_name= for (self: PlistTemplate, String) */
void nitc___nitc__PlistTemplate___product_name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__xcode_templates__PlistTemplate___product_name].val = p0; /* _product_name on <self:PlistTemplate> */
RET_LABEL:;
}
/* method xcode_templates#PlistTemplate#bundle_identifier for (self: PlistTemplate): String */
val* nitc___nitc__PlistTemplate___bundle_identifier(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__xcode_templates__PlistTemplate___bundle_identifier].val; /* _bundle_identifier on <self:PlistTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bundle_identifier");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 466);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method xcode_templates#PlistTemplate#bundle_identifier= for (self: PlistTemplate, String) */
void nitc___nitc__PlistTemplate___bundle_identifier_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__xcode_templates__PlistTemplate___bundle_identifier].val = p0; /* _bundle_identifier on <self:PlistTemplate> */
RET_LABEL:;
}
/* method xcode_templates#PlistTemplate#short_version for (self: PlistTemplate): String */
val* nitc___nitc__PlistTemplate___short_version(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__xcode_templates__PlistTemplate___short_version].val; /* _short_version on <self:PlistTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _short_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 469);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method xcode_templates#PlistTemplate#short_version= for (self: PlistTemplate, String) */
void nitc___nitc__PlistTemplate___short_version_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__xcode_templates__PlistTemplate___short_version].val = p0; /* _short_version on <self:PlistTemplate> */
RET_LABEL:;
}
/* method xcode_templates#PlistTemplate#bundle_version for (self: PlistTemplate): String */
val* nitc___nitc__PlistTemplate___bundle_version(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__xcode_templates__PlistTemplate___bundle_version].val; /* _bundle_version on <self:PlistTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bundle_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 472);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method xcode_templates#PlistTemplate#bundle_version= for (self: PlistTemplate, String) */
void nitc___nitc__PlistTemplate___bundle_version_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__xcode_templates__PlistTemplate___bundle_version].val = p0; /* _bundle_version on <self:PlistTemplate> */
RET_LABEL:;
}
/* method xcode_templates#PlistTemplate#rendering for (self: PlistTemplate) */
void nitc___nitc__PlistTemplate___template__Template__rendering(val* self) {
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n<plist version=\"1.0\">\n<dict>\n\t<key>CFBundleDevelopmentRegion</key>\n\t<string>en</string>\n\t<key>CFBundleExecutable</key>\n\t<string>$(EXECUTABLE_NAME)</string>\n\t<key>CFBundleIdentifier</key>\n\t<string>";
var4 = core__abstract_text___CString___to_s_full(var3, 338l, 338l);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "</string>\n\t<key>CFBundleInfoDictionaryVersion</key>\n\t<string>6.0</string>\n\t<key>CFBundleName</key>\n\t<string>";
var8 = core__abstract_text___CString___to_s_full(var7, 108l, 108l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var)->values[2]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "</string>\n\t<key>CFBundlePackageType</key>\n\t<string>APPL</string>\n\t<key>CFBundleShortVersionString</key>\n\t<string>";
var12 = core__abstract_text___CString___to_s_full(var11, 113l, 113l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var)->values[4]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "</string>\n\t<key>CFBundleSignature</key>\n\t<string>????</string>\n\t<key>CFBundleVersion</key>\n\t<string>";
var16 = core__abstract_text___CString___to_s_full(var15, 100l, 100l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var)->values[6]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "</string>\n\t<key>LSRequiresIPhoneOS</key>\n\t<true/>\n\t<key>UIRequiredDeviceCapabilities</key>\n\t<array>\n\t\t<string>armv7</string>\n\t</array>\n\t<key>UISupportedInterfaceOrientations</key>\n\t<array>\n\t\t<string>UIInterfaceOrientationPortrait</string>\n\t\t<string>UIInterfaceOrientationLandscapeLeft</string>\n\t\t<string>UIInterfaceOrientationLandscapeRight</string>\n\t</array>\n\t<key>UISupportedInterfaceOrientations~ipad</key>\n\t<array>\n\t\t<string>UIInterfaceOrientationPortrait</string>\n\t\t<string>UIInterfaceOrientationPortraitUpsideDown</string>\n\t\t<string>UIInterfaceOrientationLandscapeLeft</string>\n\t\t<string>UIInterfaceOrientationLandscapeRight</string>\n\t</array>\n\n\t<key>UILaunchStoryboardName</key>\n\t<string>LaunchScreen</string>\n\n\t<key>NSAppTransportSecurity</key>\n\t<dict>\n\t\t<key>NSAllowsArbitraryLoads</key><true/>\n\t</dict>\n</dict>\n</plist>\n";
var20 = core__abstract_text___CString___to_s_full(var19, 830l, 830l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var)->values[8]=var18;
} else {
var = varonce;
varonce = NULL;
}
{
{ /* Inline xcode_templates#PlistTemplate#bundle_identifier (self) on <self:PlistTemplate> */
var23 = self->attrs[COLOR_nitc__xcode_templates__PlistTemplate___bundle_identifier].val; /* _bundle_identifier on <self:PlistTemplate> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bundle_identifier");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 466);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
((struct instance_core__NativeArray*)var)->values[1]=var21;
{
{ /* Inline xcode_templates#PlistTemplate#product_name (self) on <self:PlistTemplate> */
var26 = self->attrs[COLOR_nitc__xcode_templates__PlistTemplate___product_name].val; /* _product_name on <self:PlistTemplate> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _product_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 463);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
((struct instance_core__NativeArray*)var)->values[3]=var24;
{
{ /* Inline xcode_templates#PlistTemplate#short_version (self) on <self:PlistTemplate> */
var29 = self->attrs[COLOR_nitc__xcode_templates__PlistTemplate___short_version].val; /* _short_version on <self:PlistTemplate> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _short_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 469);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
((struct instance_core__NativeArray*)var)->values[5]=var27;
{
{ /* Inline xcode_templates#PlistTemplate#bundle_version (self) on <self:PlistTemplate> */
var32 = self->attrs[COLOR_nitc__xcode_templates__PlistTemplate___bundle_version].val; /* _bundle_version on <self:PlistTemplate> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bundle_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 472);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
((struct instance_core__NativeArray*)var)->values[7]=var30;
{
var33 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
template___template__Template___add(self, var33); /* Direct call template#Template#add on <self:PlistTemplate>*/
}
RET_LABEL:;
}
/* method xcode_templates#PlistTemplate#init for (self: PlistTemplate) */
void nitc___nitc__PlistTemplate___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__PlistTemplate___core__kernel__Object__init]))(self); /* init on <self:PlistTemplate>*/
}
RET_LABEL:;
}
/* method xcode_templates#LaunchScreenStoryboardTemplate#title for (self: LaunchScreenStoryboardTemplate): String */
val* nitc___nitc__LaunchScreenStoryboardTemplate___title(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__xcode_templates__LaunchScreenStoryboardTemplate___title].val; /* _title on <self:LaunchScreenStoryboardTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _title");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 537);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method xcode_templates#LaunchScreenStoryboardTemplate#title= for (self: LaunchScreenStoryboardTemplate, String) */
void nitc___nitc__LaunchScreenStoryboardTemplate___title_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__xcode_templates__LaunchScreenStoryboardTemplate___title].val = p0; /* _title on <self:LaunchScreenStoryboardTemplate> */
RET_LABEL:;
}
/* method xcode_templates#LaunchScreenStoryboardTemplate#subtitle for (self: LaunchScreenStoryboardTemplate): String */
val* nitc___nitc__LaunchScreenStoryboardTemplate___subtitle(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__xcode_templates__LaunchScreenStoryboardTemplate___subtitle].val; /* _subtitle on <self:LaunchScreenStoryboardTemplate> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subtitle");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 540);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method xcode_templates#LaunchScreenStoryboardTemplate#subtitle= for (self: LaunchScreenStoryboardTemplate, String) */
void nitc___nitc__LaunchScreenStoryboardTemplate___subtitle_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__xcode_templates__LaunchScreenStoryboardTemplate___subtitle].val = p0; /* _subtitle on <self:LaunchScreenStoryboardTemplate> */
RET_LABEL:;
}
/* method xcode_templates#LaunchScreenStoryboardTemplate#rendering for (self: LaunchScreenStoryboardTemplate) */
void nitc___nitc__LaunchScreenStoryboardTemplate___template__Template__rendering(val* self) {
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?>\n<document type=\"com.apple.InterfaceBuilder3.CocoaTouch.Storyboard.XIB\" version=\"3.0\" toolsVersion=\"9531\" systemVersion=\"15D21\" targetRuntime=\"iOS.CocoaTouch\" propertyAccessControl=\"none\" useAutolayout=\"YES\" launchScreen=\"YES\" useTraitCollections=\"YES\" initialViewController=\"01J-lp-oVM\">\n    <dependencies>\n        <deployment identifier=\"iOS\"/>\n        <plugIn identifier=\"com.apple.InterfaceBuilder.IBCocoaTouchPlugin\" version=\"9529\"/>\n        <capability name=\"Constraints with non-1.0 multipliers\" minToolsVersion=\"5.1\"/>\n    </dependencies>\n    <scenes>\n        <!--View Controller-->\n        <scene sceneID=\"EHf-IW-A2E\">\n            <objects>\n                <viewController id=\"01J-lp-oVM\" sceneMemberID=\"viewController\">\n                    <layoutGuides>\n                        <viewControllerLayoutGuide type=\"top\" id=\"Llm-lL-Icb\"/>\n                        <viewControllerLayoutGuide type=\"bottom\" id=\"xb3-aO-Qok\"/>\n                    </layoutGuides>\n                    <view key=\"view\" contentMode=\"scaleToFill\" id=\"Ze5-6b-2t3\">\n                        <rect key=\"frame\" x=\"0.0\" y=\"0.0\" width=\"600\" height=\"600\"/>\n                        <autoresizingMask key=\"autoresizingMask\" widthSizable=\"YES\" heightSizable=\"YES\"/>\n                        <subviews>\n                            <label opaque=\"NO\" clipsSubviews=\"YES\" userInteractionEnabled=\"NO\" contentMode=\"left\" horizontalHuggingPriority=\"251\" verticalHuggingPriority=\"251\" misplaced=\"YES\" text=\"";
var4 = core__abstract_text___CString___to_s_full(var3, 1522l, 1522l);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "\" textAlignment=\"center\" lineBreakMode=\"tailTruncation\" baselineAdjustment=\"alignBaselines\" minimumFontSize=\"9\" translatesAutoresizingMaskIntoConstraints=\"NO\" id=\"obG-Y5-kRd\">\n                                <rect key=\"frame\" x=\"20\" y=\"559\" width=\"560\" height=\"21\"/>\n                                <fontDescription key=\"fontDescription\" type=\"boldSystem\" pointSize=\"17\"/>\n                                <color key=\"textColor\" red=\"0.0\" green=\"0.0\" blue=\"0.0\" alpha=\"1\" colorSpace=\"calibratedRGB\"/>\n                                <nil key=\"highlightedColor\"/>\n                            </label>\n                            <label opaque=\"NO\" clipsSubviews=\"YES\" userInteractionEnabled=\"NO\" contentMode=\"left\" horizontalHuggingPriority=\"251\" verticalHuggingPriority=\"251\" misplaced=\"YES\" text=\"";
var8 = core__abstract_text___CString___to_s_full(var7, 797l, 797l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var)->values[2]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "\" textAlignment=\"center\" lineBreakMode=\"middleTruncation\" baselineAdjustment=\"alignBaselines\" minimumFontSize=\"18\" translatesAutoresizingMaskIntoConstraints=\"NO\" id=\"GJd-Yh-RWb\">\n                                <rect key=\"frame\" x=\"20\" y=\"176\" width=\"560\" height=\"43\"/>\n                                <fontDescription key=\"fontDescription\" type=\"boldSystem\" pointSize=\"36\"/>\n                                <color key=\"textColor\" red=\"0.0\" green=\"0.5\" blue=\"1\" alpha=\"1\" colorSpace=\"calibratedRGB\"/>\n                                <nil key=\"highlightedColor\"/>\n                            </label>\n                        </subviews>\n                        <color key=\"backgroundColor\" white=\"1\" alpha=\"1\" colorSpace=\"custom\" customColorSpace=\"calibratedWhite\"/>\n                        <constraints>\n                            <constraint firstAttribute=\"centerX\" secondItem=\"obG-Y5-kRd\" secondAttribute=\"centerX\" id=\"5cz-MP-9tL\"/>\n                            <constraint firstAttribute=\"centerX\" secondItem=\"GJd-Yh-RWb\" secondAttribute=\"centerX\" id=\"Q3B-4B-g5h\"/>\n                            <constraint firstItem=\"obG-Y5-kRd\" firstAttribute=\"leading\" secondItem=\"Ze5-6b-2t3\" secondAttribute=\"leading\" constant=\"20\" symbolic=\"YES\" id=\"SfN-ll-jLj\"/>\n                            <constraint firstAttribute=\"bottom\" secondItem=\"obG-Y5-kRd\" secondAttribute=\"bottom\" constant=\"20\" id=\"Y44-ml-fuU\"/>\n                            <constraint firstItem=\"GJd-Yh-RWb\" firstAttribute=\"centerY\" secondItem=\"Ze5-6b-2t3\" secondAttribute=\"bottom\" multiplier=\"1/3\" constant=\"1\" id=\"moa-c2-u7t\"/>\n                            <constraint firstItem=\"GJd-Yh-RWb\" firstAttribute=\"leading\" secondItem=\"Ze5-6b-2t3\" secondAttribute=\"leading\" constant=\"20\" symbolic=\"YES\" id=\"x7j-FC-K8j\"/>\n                        </constraints>\n                    </view>\n                </viewController>\n                <placeholder placeholderIdentifier=\"IBFirstResponder\" id=\"iYj-Kq-Ea1\" userLabel=\"First Responder\" sceneMemberID=\"firstResponder\"/>\n            </objects>\n            <point key=\"canvasLocation\" x=\"53\" y=\"375\"/>\n        </scene>\n    </scenes>\n</document>";
var12 = core__abstract_text___CString___to_s_full(var11, 2140l, 2140l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var)->values[4]=var10;
} else {
var = varonce;
varonce = NULL;
}
{
{ /* Inline xcode_templates#LaunchScreenStoryboardTemplate#subtitle (self) on <self:LaunchScreenStoryboardTemplate> */
var15 = self->attrs[COLOR_nitc__xcode_templates__LaunchScreenStoryboardTemplate___subtitle].val; /* _subtitle on <self:LaunchScreenStoryboardTemplate> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subtitle");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 540);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
((struct instance_core__NativeArray*)var)->values[1]=var13;
{
{ /* Inline xcode_templates#LaunchScreenStoryboardTemplate#title (self) on <self:LaunchScreenStoryboardTemplate> */
var18 = self->attrs[COLOR_nitc__xcode_templates__LaunchScreenStoryboardTemplate___title].val; /* _title on <self:LaunchScreenStoryboardTemplate> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _title");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__xcode_templates, 537);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
((struct instance_core__NativeArray*)var)->values[3]=var16;
{
var19 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
template___template__Template___add(self, var19); /* Direct call template#Template#add on <self:LaunchScreenStoryboardTemplate>*/
}
RET_LABEL:;
}
