#include "nitc__cpp.sep.0.h"
/* method cpp#MModule#cpp_file for (self: MModule): nullable CPPCompilationUnit */
val* nitc__cpp___MModule___cpp_file(val* self) {
val* var /* : nullable CPPCompilationUnit */;
val* var1 /* : nullable CPPCompilationUnit */;
var1 = self->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#MModule#cpp_file= for (self: MModule, nullable CPPCompilationUnit) */
void nitc__cpp___MModule___cpp_file_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__cpp__MModule___cpp_file].val = p0; /* _cpp_file on <self:MModule> */
RET_LABEL:;
}
/* method cpp#MModule#cppflags for (self: MModule): MultiHashMap[String, String] */
val* nitc__cpp___MModule___cppflags(val* self) {
val* var /* : MultiHashMap[String, String] */;
val* var1 /* : MultiHashMap[String, String] */;
var1 = self->attrs[COLOR_nitc__cpp__MModule___cppflags].val; /* _cppflags on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cppflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#CPPLanguage#identify_language for (self: CPPLanguage, AExternCodeBlock): Bool */
short int nitc___nitc__CPPLanguage___nitc__light_ffi_base__FFILanguage__identify_language(val* self, val* p0) {
short int var /* : Bool */;
val* var_n /* var n: AExternCodeBlock */;
short int var1 /* : Bool */;
var_n = p0;
{
var1 = nitc__cpp___AExternCodeBlock___is_cpp(var_n);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#CPPLanguage#compile_module_block for (self: CPPLanguage, AExternCodeBlock, CCompilationUnit, MModule) */
void nitc___nitc__CPPLanguage___nitc__light_ffi_base__FFILanguage__compile_module_block(val* self, val* p0, val* p1, val* p2) {
val* var_block /* var block: AExternCodeBlock */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : nullable CPPCompilationUnit */;
val* var2 /* : nullable CPPCompilationUnit */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : CPPCompilationUnit */;
short int var12 /* : Bool */;
val* var13 /* : nullable CPPCompilationUnit */;
val* var15 /* : nullable CPPCompilationUnit */;
val* var16 /* : Template */;
val* var18 /* : Template */;
val* var19 /* : Location */;
val* var21 /* : Location */;
val* var22 /* : String */;
val* var23 /* : nullable CPPCompilationUnit */;
val* var25 /* : nullable CPPCompilationUnit */;
val* var26 /* : Template */;
val* var28 /* : Template */;
val* var29 /* : String */;
short int var30 /* : Bool */;
val* var31 /* : nullable CPPCompilationUnit */;
val* var33 /* : nullable CPPCompilationUnit */;
val* var34 /* : Template */;
val* var36 /* : Template */;
val* var37 /* : Location */;
val* var39 /* : Location */;
val* var40 /* : String */;
val* var41 /* : nullable CPPCompilationUnit */;
val* var43 /* : nullable CPPCompilationUnit */;
val* var44 /* : Template */;
val* var46 /* : Template */;
val* var47 /* : String */;
var_block = p0;
var_ecc = p1;
var_mmodule = p2;
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var2 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var,((val*)NULL)) on <var:nullable CPPCompilationUnit> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable CPPCompilationUnit(CPPCompilationUnit)> */
var8 = var == var_other;
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
var9 = NEW_nitc__CPPCompilationUnit(&type_nitc__CPPCompilationUnit);
{
{ /* Inline kernel#Object#init (var9) on <var9:CPPCompilationUnit> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline cpp#MModule#cpp_file= (var_mmodule,var9) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val = var9; /* _cpp_file on <var_mmodule:MModule> */
RET_LABEL11:(void)0;
}
}
} else {
}
{
var12 = nitc__cpp___AExternCodeBlock___is_cpp_header(var_block);
}
if (var12){
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var15 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 44);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_custom (var13) on <var13:nullable CPPCompilationUnit> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var18 = var13->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var13:nullable CPPCompilationUnit> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_block) on <var_block:AExternCodeBlock> */
var21 = var_block->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_block:AExternCodeBlock> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc__light_c___Location___as_line_pragma(var19);
}
{
template___template__Template___add(var16, var22); /* Direct call template#Template#add on <var16:Template>*/
}
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var25 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 45);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_custom (var23) on <var23:nullable CPPCompilationUnit> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var28 = var23->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var23:nullable CPPCompilationUnit> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var26, var29); /* Direct call template#Template#add on <var26:Template>*/
}
} else {
{
var30 = nitc__cpp___AExternCodeBlock___is_cpp_body(var_block);
}
if (var30){
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var33 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 47);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#body_custom (var31) on <var31:nullable CPPCompilationUnit> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 41);
fatal_exit(1);
}
var36 = var31->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_custom].val; /* _body_custom on <var31:nullable CPPCompilationUnit> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 41);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_block) on <var_block:AExternCodeBlock> */
var39 = var_block->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_block:AExternCodeBlock> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = nitc__light_c___Location___as_line_pragma(var37);
}
{
template___template__Template___add(var34, var40); /* Direct call template#Template#add on <var34:Template>*/
}
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var43 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (var41 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 48);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#body_custom (var41) on <var41:nullable CPPCompilationUnit> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 41);
fatal_exit(1);
}
var46 = var41->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_custom].val; /* _body_custom on <var41:nullable CPPCompilationUnit> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 41);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var44, var47); /* Direct call template#Template#add on <var44:Template>*/
}
} else {
}
}
RET_LABEL:;
}
/* method cpp#CPPLanguage#compile_extern_method for (self: CPPLanguage, AExternCodeBlock, AMethPropdef, CCompilationUnit, MModule) */
void nitc___nitc__CPPLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_method(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AMethPropdef */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : nullable CPPCompilationUnit */;
val* var2 /* : nullable CPPCompilationUnit */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : CPPCompilationUnit */;
val* var12 /* : nullable ANode */;
val* var14 /* : nullable ANode */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var16 /* : nullable MClass */;
val* var18 /* : nullable MClass */;
val* var19 /* : MClassType */;
val* var21 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var22 /* : nullable MPropDef */;
val* var24 /* : nullable MPropDef */;
val* var25 /* : MProperty */;
val* var27 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : Sys */;
val* var32 /* : SignatureLength */;
val* var33 /* : Sys */;
val* var34 /* : CallContext */;
val* var35 /* : String */;
val* var_indirection_sig /* var indirection_sig: String */;
val* var36 /* : Template */;
val* var38 /* : Template */;
val* var40 /* : NativeArray[String] */;
static val* varonce39;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : ExternCFunction */;
val* var_fc /* var fc: CFunction */;
val* var47 /* : Template */;
val* var49 /* : Template */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : Sys */;
val* var55 /* : SignatureLength */;
val* var56 /* : Sys */;
val* var57 /* : CppCallContext */;
val* var58 /* : String */;
val* var59 /* : Template */;
val* var61 /* : Template */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable CPPCompilationUnit */;
val* var68 /* : nullable CPPCompilationUnit */;
val* var69 /* : Template */;
val* var71 /* : Template */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
val* var76 /* : nullable CPPCompilationUnit */;
val* var78 /* : nullable CPPCompilationUnit */;
val* var79 /* : Template */;
val* var81 /* : Template */;
val* var83 /* : NativeArray[String] */;
static val* varonce82;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var89 /* : nullable CPPCompilationUnit */;
val* var91 /* : nullable CPPCompilationUnit */;
val* var92 /* : Template */;
val* var94 /* : Template */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : CFunction */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
val* var_param_name /* var param_name: String */;
val* var108 /* : Sys */;
val* var109 /* : ToCppCallContext */;
val* var110 /* : String */;
val* var_type_name /* var type_name: String */;
val* var111 /* : MClass */;
val* var113 /* : MClass */;
val* var114 /* : nullable ForeignType */;
short int var115 /* : Bool */;
int cltype116;
int idtype117;
val* var118 /* : Template */;
val* var120 /* : Template */;
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
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var140 /* : Template */;
val* var142 /* : Template */;
val* var144 /* : NativeArray[String] */;
static val* varonce143;
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
val* var157 /* : String */;
val* var158 /* : nullable MPropDef */;
val* var160 /* : nullable MPropDef */;
val* var161 /* : nullable MSignature */;
val* var163 /* : nullable MSignature */;
val* var164 /* : Array[MParameter] */;
val* var166 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var167 /* : IndexedIterator[nullable Object] */;
val* var_168 /* var : IndexedIterator[MParameter] */;
short int var169 /* : Bool */;
val* var170 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var171 /* : String */;
val* var173 /* : String */;
val* var_param_name174 /* var param_name: String */;
val* var175 /* : Sys */;
val* var176 /* : ToCppCallContext */;
val* var177 /* : MType */;
val* var179 /* : MType */;
val* var180 /* : String */;
val* var_type_name181 /* var type_name: String */;
val* var182 /* : MClass */;
val* var184 /* : MClass */;
val* var185 /* : nullable ForeignType */;
short int var186 /* : Bool */;
int cltype187;
int idtype188;
val* var189 /* : Template */;
val* var191 /* : Template */;
val* var193 /* : NativeArray[String] */;
static val* varonce192;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : CString */;
val* var197 /* : String */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : CString */;
val* var205 /* : String */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : CString */;
val* var209 /* : String */;
val* var210 /* : String */;
val* var211 /* : Template */;
val* var213 /* : Template */;
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
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : CString */;
val* var227 /* : String */;
val* var228 /* : String */;
val* var229 /* : Template */;
val* var231 /* : Template */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : CString */;
val* var235 /* : String */;
val* var236 /* : Sys */;
val* var237 /* : SignatureLength */;
val* var238 /* : Sys */;
val* var239 /* : CppCallContext */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : CString */;
val* var243 /* : String */;
val* var244 /* : String */;
val* var245 /* : Template */;
val* var247 /* : Template */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : CString */;
val* var251 /* : String */;
val* var252 /* : nullable CPPCompilationUnit */;
val* var254 /* : nullable CPPCompilationUnit */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : CString */;
val* var258 /* : String */;
val* var259 /* : Sys */;
val* var260 /* : SignatureLength */;
val* var261 /* : Sys */;
val* var262 /* : CppCallContext */;
val* var263 /* : String */;
val* var_cpp_signature /* var cpp_signature: String */;
val* var264 /* : CFunction */;
val* var265 /* : Template */;
val* var267 /* : Template */;
val* var268 /* : Location */;
val* var270 /* : Location */;
val* var271 /* : String */;
val* var272 /* : Template */;
val* var274 /* : Template */;
val* var275 /* : String */;
val* var276 /* : nullable CPPCompilationUnit */;
val* var278 /* : nullable CPPCompilationUnit */;
var_block = p0;
var_m = p1;
var_ecc = p2;
var_mmodule = p3;
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var2 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var,((val*)NULL)) on <var:nullable CPPCompilationUnit> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable CPPCompilationUnit(CPPCompilationUnit)> */
var8 = var == var_other;
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
var9 = NEW_nitc__CPPCompilationUnit(&type_nitc__CPPCompilationUnit);
{
{ /* Inline kernel#Object#init (var9) on <var9:CPPCompilationUnit> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline cpp#MModule#cpp_file= (var_mmodule,var9) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val = var9; /* _cpp_file on <var_mmodule:MModule> */
RET_LABEL11:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#ANode#parent (var_m) on <var_m:AMethPropdef> */
var14 = var_m->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_m:AMethPropdef> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
/* <var12:nullable ANode> isa AClassdef */
cltype = type_nitc__AClassdef.color;
idtype = type_nitc__AClassdef.id;
if(var12 == NULL) {
var15 = 0;
} else {
if(cltype >= var12->type->table_size) {
var15 = 0;
} else {
var15 = var12->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var15)) {
var_class_name = var12 == NULL ? "null" : var12->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AClassdef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 60);
fatal_exit(1);
}
{
{ /* Inline modelize_class#AClassdef#mclass (var12) on <var12:nullable ANode(AClassdef)> */
var18 = var12->attrs[COLOR_nitc__modelize_class__AClassdef___mclass].val; /* _mclass on <var12:nullable ANode(AClassdef)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 60);
fatal_exit(1);
} else {
{ /* Inline model#MClass#mclass_type (var16) on <var16:nullable MClass> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var21 = var16->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var16:nullable MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_mclass_type = var19;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_m) on <var_m:AMethPropdef> */
var24 = var_m->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_m:AMethPropdef> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 61);
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
if (likely(varonce!=NULL)) {
var28 = varonce;
} else {
var29 = "___cpp_impl_mid";
var30 = core__abstract_text___CString___to_s_full(var29, 15l, 15l);
var28 = var30;
varonce = var28;
}
var31 = glob_sys;
{
var32 = nitc__nitni_utilities___core__Sys___long_signature(var31);
}
var33 = glob_sys;
{
var34 = nitc__nitni_utilities___core__Sys___internal_call_context(var33);
}
{
var35 = nitc__nitni_utilities___MMethod___build_csignature(var_mproperty, var_mclass_type, var_mmodule, var28, var32, var34);
}
var_indirection_sig = var35;
{
{ /* Inline c_tools#CCompilationUnit#body_decl (var_ecc) on <var_ecc:CCompilationUnit> */
var38 = var_ecc->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val; /* _body_decl on <var_ecc:CCompilationUnit> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 37);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (unlikely(varonce39==NULL)) {
var40 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = ";\n";
var44 = core__abstract_text___CString___to_s_full(var43, 2l, 2l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[1]=var42;
} else {
var40 = varonce39;
varonce39 = NULL;
}
((struct instance_core__NativeArray*)var40)->values[0]=var_indirection_sig;
{
var45 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
{
template___template__Template___add(var36, var45); /* Direct call template#Template#add on <var36:Template>*/
}
var46 = NEW_nitc__ExternCFunction(&type_nitc__ExternCFunction);
{
nitc___nitc__ExternCFunction___init(var46, var_m, var_mmodule); /* Direct call light_c#ExternCFunction#init on <var46:ExternCFunction>*/
}
var_fc = var46;
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:CFunction> */
var49 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:CFunction> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "___cpp_impl_mid";
var53 = core__abstract_text___CString___to_s_full(var52, 15l, 15l);
var51 = var53;
varonce50 = var51;
}
var54 = glob_sys;
{
var55 = nitc__nitni_utilities___core__Sys___long_signature(var54);
}
var56 = glob_sys;
{
var57 = nitc__cpp___core__Sys___cpp_call_context(var56);
}
{
var58 = nitc__nitni_utilities___MMethod___build_ccall(var_mproperty, var_mclass_type, var_mmodule, var51, var55, var57, ((val*)NULL));
}
{
template___template__Template___add(var47, var58); /* Direct call template#Template#add on <var47:Template>*/
}
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:CFunction> */
var61 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:CFunction> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "\n";
var65 = core__abstract_text___CString___to_s_full(var64, 1l, 1l);
var63 = var65;
varonce62 = var63;
}
{
template___template__Template___add(var59, var63); /* Direct call template#Template#add on <var59:Template>*/
}
{
nitc___nitc__CCompilationUnit___add_exported_function(var_ecc, var_fc); /* Direct call c_tools#CCompilationUnit#add_exported_function on <var_ecc:CCompilationUnit>*/
}
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var68 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
if (var66 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 80);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_decl (var66) on <var66:nullable CPPCompilationUnit> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var71 = var66->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var66:nullable CPPCompilationUnit> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "extern \"C\" {\n";
var75 = core__abstract_text___CString___to_s_full(var74, 13l, 13l);
var73 = var75;
varonce72 = var73;
}
{
template___template__Template___add(var69, var73); /* Direct call template#Template#add on <var69:Template>*/
}
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var78 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (var76 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 81);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_decl (var76) on <var76:nullable CPPCompilationUnit> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var81 = var76->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var76:nullable CPPCompilationUnit> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (unlikely(varonce82==NULL)) {
var83 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = ";\n";
var87 = core__abstract_text___CString___to_s_full(var86, 2l, 2l);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var83)->values[1]=var85;
} else {
var83 = varonce82;
varonce82 = NULL;
}
((struct instance_core__NativeArray*)var83)->values[0]=var_indirection_sig;
{
var88 = ((val*(*)(val* self))(var83->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var83); /* native_to_s on <var83:NativeArray[String]>*/
}
varonce82 = var83;
{
template___template__Template___add(var79, var88); /* Direct call template#Template#add on <var79:Template>*/
}
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var91 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
if (var89 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 82);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_decl (var89) on <var89:nullable CPPCompilationUnit> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var94 = var89->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var89:nullable CPPCompilationUnit> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "}\n";
var98 = core__abstract_text___CString___to_s_full(var97, 2l, 2l);
var96 = var98;
varonce95 = var96;
}
{
template___template__Template___add(var92, var96); /* Direct call template#Template#add on <var92:Template>*/
}
var99 = NEW_nitc__CFunction(&type_nitc__CFunction);
{
((void(*)(val* self, val* p0))(var99->class->vft[COLOR_nitc__c_tools__CFunction__signature_61d]))(var99, var_indirection_sig); /* signature= on <var99:CFunction>*/
}
{
((void(*)(val* self))(var99->class->vft[COLOR_core__kernel__Object__init]))(var99); /* init on <var99:CFunction>*/
}
var_fc = var99;
{
{ /* Inline model#MMethod#is_init (var_mproperty) on <var_mproperty:MMethod> */
var102 = var_mproperty->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_mproperty:MMethod> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
var103 = !var100;
if (var103){
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "self";
var107 = core__abstract_text___CString___to_s_full(var106, 4l, 4l);
var105 = var107;
varonce104 = var105;
}
var_param_name = var105;
var108 = glob_sys;
{
var109 = nitc__cpp___core__Sys___to_cpp_call_context(var108);
}
{
var110 = nitc__cpp___nitc__cpp__CppCallContext___nitc__nitni_utilities__CallContext__name_mtype(var109, var_mclass_type);
}
var_type_name = var110;
{
{ /* Inline model#MClassType#mclass (var_mclass_type) on <var_mclass_type:MClassType> */
var113 = var_mclass_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mclass_type:MClassType> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
var114 = nitc__extern_classes___MClass___ftype(var111);
}
/* <var114:nullable ForeignType> isa ForeignCppType */
cltype116 = type_nitc__ForeignCppType.color;
idtype117 = type_nitc__ForeignCppType.id;
if(var114 == NULL) {
var115 = 0;
} else {
if(cltype116 >= var114->type->table_size) {
var115 = 0;
} else {
var115 = var114->type->type_table[cltype116] == idtype117;
}
}
if (var115){
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:CFunction> */
var120 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:CFunction> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
if (unlikely(varonce121==NULL)) {
var122 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = " ";
var126 = core__abstract_text___CString___to_s_full(var125, 1l, 1l);
var124 = var126;
varonce123 = var124;
}
((struct instance_core__NativeArray*)var122)->values[1]=var124;
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "_for_cpp = static_cast<";
var130 = core__abstract_text___CString___to_s_full(var129, 23l, 23l);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var122)->values[3]=var128;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = ">(";
var134 = core__abstract_text___CString___to_s_full(var133, 2l, 2l);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var122)->values[5]=var132;
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = ");\n";
var138 = core__abstract_text___CString___to_s_full(var137, 3l, 3l);
var136 = var138;
varonce135 = var136;
}
((struct instance_core__NativeArray*)var122)->values[7]=var136;
} else {
var122 = varonce121;
varonce121 = NULL;
}
((struct instance_core__NativeArray*)var122)->values[0]=var_type_name;
((struct instance_core__NativeArray*)var122)->values[2]=var_param_name;
((struct instance_core__NativeArray*)var122)->values[4]=var_type_name;
((struct instance_core__NativeArray*)var122)->values[6]=var_param_name;
{
var139 = ((val*(*)(val* self))(var122->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var122); /* native_to_s on <var122:NativeArray[String]>*/
}
varonce121 = var122;
{
template___template__Template___add(var118, var139); /* Direct call template#Template#add on <var118:Template>*/
}
} else {
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:CFunction> */
var142 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:CFunction> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
if (unlikely(varonce143==NULL)) {
var144 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = " ";
var148 = core__abstract_text___CString___to_s_full(var147, 1l, 1l);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var144)->values[1]=var146;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "_for_cpp = ";
var152 = core__abstract_text___CString___to_s_full(var151, 11l, 11l);
var150 = var152;
varonce149 = var150;
}
((struct instance_core__NativeArray*)var144)->values[3]=var150;
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = ";\n";
var156 = core__abstract_text___CString___to_s_full(var155, 2l, 2l);
var154 = var156;
varonce153 = var154;
}
((struct instance_core__NativeArray*)var144)->values[5]=var154;
} else {
var144 = varonce143;
varonce143 = NULL;
}
((struct instance_core__NativeArray*)var144)->values[0]=var_type_name;
((struct instance_core__NativeArray*)var144)->values[2]=var_param_name;
((struct instance_core__NativeArray*)var144)->values[4]=var_param_name;
{
var157 = ((val*(*)(val* self))(var144->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var144); /* native_to_s on <var144:NativeArray[String]>*/
}
varonce143 = var144;
{
template___template__Template___add(var140, var157); /* Direct call template#Template#add on <var140:Template>*/
}
}
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_m) on <var_m:AMethPropdef> */
var160 = var_m->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_m:AMethPropdef> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
if (var158 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 96);
fatal_exit(1);
} else {
{ /* Inline model#MMethodDef#msignature (var158) on <var158:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var158 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2483);
fatal_exit(1);
}
var163 = var158->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var158:nullable MPropDef(nullable MMethodDef)> */
var161 = var163;
RET_LABEL162:(void)0;
}
}
if (var161 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 96);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var161) on <var161:nullable MSignature> */
if (unlikely(var161 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var166 = var161->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var161:nullable MSignature> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
var_ = var164;
{
var167 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_168 = var167;
for(;;) {
{
var169 = ((short int(*)(val* self))((((long)var_168&3)?class_info[((long)var_168&3)]:var_168->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_168); /* is_ok on <var_168:IndexedIterator[MParameter]>*/
}
if (var169){
} else {
goto BREAK_label;
}
{
var170 = ((val*(*)(val* self))((((long)var_168&3)?class_info[((long)var_168&3)]:var_168->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_168); /* item on <var_168:IndexedIterator[MParameter]>*/
}
var_param = var170;
{
{ /* Inline model#MParameter#name (var_param) on <var_param:MParameter> */
var173 = var_param->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var_param:MParameter> */
if (unlikely(var173 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
var_param_name174 = var171;
var175 = glob_sys;
{
var176 = nitc__cpp___core__Sys___to_cpp_call_context(var175);
}
{
{ /* Inline model#MParameter#mtype (var_param) on <var_param:MParameter> */
var179 = var_param->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param:MParameter> */
if (unlikely(var179 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
{
var180 = nitc__cpp___nitc__cpp__CppCallContext___nitc__nitni_utilities__CallContext__name_mtype(var176, var177);
}
var_type_name181 = var180;
{
{ /* Inline model#MClassType#mclass (var_mclass_type) on <var_mclass_type:MClassType> */
var184 = var_mclass_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mclass_type:MClassType> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
var185 = nitc__extern_classes___MClass___ftype(var182);
}
/* <var185:nullable ForeignType> isa ForeignCppType */
cltype187 = type_nitc__ForeignCppType.color;
idtype188 = type_nitc__ForeignCppType.id;
if(var185 == NULL) {
var186 = 0;
} else {
if(cltype187 >= var185->type->table_size) {
var186 = 0;
} else {
var186 = var185->type->type_table[cltype187] == idtype188;
}
}
if (var186){
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:CFunction> */
var191 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:CFunction> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
if (unlikely(varonce192==NULL)) {
var193 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = " ";
var197 = core__abstract_text___CString___to_s_full(var196, 1l, 1l);
var195 = var197;
varonce194 = var195;
}
((struct instance_core__NativeArray*)var193)->values[1]=var195;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "_for_cpp = static_cast<";
var201 = core__abstract_text___CString___to_s_full(var200, 23l, 23l);
var199 = var201;
varonce198 = var199;
}
((struct instance_core__NativeArray*)var193)->values[3]=var199;
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = ">(";
var205 = core__abstract_text___CString___to_s_full(var204, 2l, 2l);
var203 = var205;
varonce202 = var203;
}
((struct instance_core__NativeArray*)var193)->values[5]=var203;
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = ");\n";
var209 = core__abstract_text___CString___to_s_full(var208, 3l, 3l);
var207 = var209;
varonce206 = var207;
}
((struct instance_core__NativeArray*)var193)->values[7]=var207;
} else {
var193 = varonce192;
varonce192 = NULL;
}
((struct instance_core__NativeArray*)var193)->values[0]=var_type_name181;
((struct instance_core__NativeArray*)var193)->values[2]=var_param_name174;
((struct instance_core__NativeArray*)var193)->values[4]=var_type_name181;
((struct instance_core__NativeArray*)var193)->values[6]=var_param_name174;
{
var210 = ((val*(*)(val* self))(var193->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var193); /* native_to_s on <var193:NativeArray[String]>*/
}
varonce192 = var193;
{
template___template__Template___add(var189, var210); /* Direct call template#Template#add on <var189:Template>*/
}
} else {
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:CFunction> */
var213 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:CFunction> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
if (unlikely(varonce214==NULL)) {
var215 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = " ";
var219 = core__abstract_text___CString___to_s_full(var218, 1l, 1l);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var215)->values[1]=var217;
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = "_for_cpp = ";
var223 = core__abstract_text___CString___to_s_full(var222, 11l, 11l);
var221 = var223;
varonce220 = var221;
}
((struct instance_core__NativeArray*)var215)->values[3]=var221;
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = ";\n";
var227 = core__abstract_text___CString___to_s_full(var226, 2l, 2l);
var225 = var227;
varonce224 = var225;
}
((struct instance_core__NativeArray*)var215)->values[5]=var225;
} else {
var215 = varonce214;
varonce214 = NULL;
}
((struct instance_core__NativeArray*)var215)->values[0]=var_type_name181;
((struct instance_core__NativeArray*)var215)->values[2]=var_param_name174;
((struct instance_core__NativeArray*)var215)->values[4]=var_param_name174;
{
var228 = ((val*(*)(val* self))(var215->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var215); /* native_to_s on <var215:NativeArray[String]>*/
}
varonce214 = var215;
{
template___template__Template___add(var211, var228); /* Direct call template#Template#add on <var211:Template>*/
}
}
{
((void(*)(val* self))((((long)var_168&3)?class_info[((long)var_168&3)]:var_168->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_168); /* next on <var_168:IndexedIterator[MParameter]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_168&3)?class_info[((long)var_168&3)]:var_168->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_168); /* finish on <var_168:IndexedIterator[MParameter]>*/
}
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:CFunction> */
var231 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:CFunction> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
if (likely(varonce232!=NULL)) {
var233 = varonce232;
} else {
var234 = "___cpp_impl";
var235 = core__abstract_text___CString___to_s_full(var234, 11l, 11l);
var233 = var235;
varonce232 = var233;
}
var236 = glob_sys;
{
var237 = nitc__nitni_utilities___core__Sys___long_signature(var236);
}
var238 = glob_sys;
{
var239 = nitc__cpp___core__Sys___cpp_call_context(var238);
}
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "_for_cpp";
var243 = core__abstract_text___CString___to_s_full(var242, 8l, 8l);
var241 = var243;
varonce240 = var241;
}
{
var244 = nitc__nitni_utilities___MMethod___build_ccall(var_mproperty, var_mclass_type, var_mmodule, var233, var237, var239, var241);
}
{
template___template__Template___add(var229, var244); /* Direct call template#Template#add on <var229:Template>*/
}
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:CFunction> */
var247 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:CFunction> */
if (unlikely(var247 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "\n";
var251 = core__abstract_text___CString___to_s_full(var250, 1l, 1l);
var249 = var251;
varonce248 = var249;
}
{
template___template__Template___add(var245, var249); /* Direct call template#Template#add on <var245:Template>*/
}
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var254 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var252 = var254;
RET_LABEL253:(void)0;
}
}
if (var252 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 107);
fatal_exit(1);
} else {
nitc___nitc__CCompilationUnit___add_exported_function(var252, var_fc); /* Direct call c_tools#CCompilationUnit#add_exported_function on <var252:nullable CPPCompilationUnit>*/
}
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = "___cpp_impl";
var258 = core__abstract_text___CString___to_s_full(var257, 11l, 11l);
var256 = var258;
varonce255 = var256;
}
var259 = glob_sys;
{
var260 = nitc__nitni_utilities___core__Sys___long_signature(var259);
}
var261 = glob_sys;
{
var262 = nitc__cpp___core__Sys___cpp_call_context(var261);
}
{
var263 = nitc__nitni_utilities___MMethod___build_csignature(var_mproperty, var_mclass_type, var_mmodule, var256, var260, var262);
}
var_cpp_signature = var263;
var264 = NEW_nitc__CFunction(&type_nitc__CFunction);
{
((void(*)(val* self, val* p0))(var264->class->vft[COLOR_nitc__c_tools__CFunction__signature_61d]))(var264, var_cpp_signature); /* signature= on <var264:CFunction>*/
}
{
((void(*)(val* self))(var264->class->vft[COLOR_core__kernel__Object__init]))(var264); /* init on <var264:CFunction>*/
}
var_fc = var264;
{
{ /* Inline c_tools#CFunction#decls (var_fc) on <var_fc:CFunction> */
var267 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___decls].val; /* _decls on <var_fc:CFunction> */
if (unlikely(var267 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 88);
fatal_exit(1);
}
var265 = var267;
RET_LABEL266:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_block) on <var_block:AExternCodeBlock> */
var270 = var_block->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_block:AExternCodeBlock> */
if (unlikely(var270 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var268 = var270;
RET_LABEL269:(void)0;
}
}
{
var271 = nitc__light_c___Location___as_line_pragma(var268);
}
{
template___template__Template___add(var265, var271); /* Direct call template#Template#add on <var265:Template>*/
}
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:CFunction> */
var274 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:CFunction> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
{
var275 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var272, var275); /* Direct call template#Template#add on <var272:Template>*/
}
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var278 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var276 = var278;
RET_LABEL277:(void)0;
}
}
if (var276 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 114);
fatal_exit(1);
} else {
nitc___nitc__CCompilationUnit___add_local_function(var276, var_fc); /* Direct call c_tools#CCompilationUnit#add_local_function on <var276:nullable CPPCompilationUnit>*/
}
RET_LABEL:;
}
/* method cpp#CPPLanguage#compile_extern_class for (self: CPPLanguage, AExternCodeBlock, AClassdef, CCompilationUnit, MModule) */
void nitc___nitc__CPPLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_class(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_mmodule /* var mmodule: MModule */;
var_block = p0;
var_m = p1;
var_ecc = p2;
var_mmodule = p3;
RET_LABEL:;
}
/* method cpp#CPPLanguage#get_ftype for (self: CPPLanguage, AExternCodeBlock, AClassdef): ForeignType */
val* nitc___nitc__CPPLanguage___nitc__light_ffi_base__FFILanguage__get_ftype(val* self, val* p0, val* p1) {
val* var /* : ForeignType */;
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var1 /* : ForeignCppType */;
val* var2 /* : String */;
var_block = p0;
var_m = p1;
var1 = NEW_nitc__ForeignCppType(&type_nitc__ForeignCppType);
{
var2 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__cpp__ForeignCppType__cpp_type_61d]))(var1, var2); /* cpp_type= on <var1:ForeignCppType>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ForeignCppType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#CPPLanguage#compile_to_files for (self: CPPLanguage, MModule, String) */
void nitc___nitc__CPPLanguage___nitc__light_ffi_base__FFILanguage__compile_to_files(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_compdir /* var compdir: String */;
val* var /* : nullable CPPCompilationUnit */;
val* var2 /* : nullable CPPCompilationUnit */;
val* var_cpp_file /* var cpp_file: nullable CPPCompilationUnit */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Template */;
val* var10 /* : Template */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : Template */;
val* var16 /* : Template */;
val* var18 /* : NativeArray[String] */;
static val* varonce17;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : Template */;
val* var31 /* : Template */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : ExternCppFile */;
val* var_file /* var file: ExternCppFile */;
val* var37 /* : Array[ExternFile] */;
val* var39 /* : Array[ExternFile] */;
val* var40 /* : MultiHashMap[String, String] */;
val* var42 /* : MultiHashMap[String, String] */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
var_mmodule = p0;
var_compdir = p1;
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var2 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_cpp_file = var;
if (var_cpp_file == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cpp_file,((val*)NULL)) on <var_cpp_file:nullable CPPCompilationUnit> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_cpp_file->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cpp_file, var_other); /* == on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 124);
fatal_exit(1);
}
{
{ /* Inline c_tools#CCompilationUnit#header_custom (var_cpp_file) on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)> */
var10 = var_cpp_file->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "extern \"C\" {\n";
var13 = core__abstract_text___CString___to_s_full(var12, 13l, 13l);
var11 = var13;
varonce = var11;
}
{
template___template__Template___add(var8, var11); /* Direct call template#Template#add on <var8:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_custom (var_cpp_file) on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)> */
var16 = var_cpp_file->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(varonce17==NULL)) {
var18 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "#include \"";
var22 = core__abstract_text___CString___to_s_full(var21, 10l, 10l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "._ffi.h\"\n";
var26 = core__abstract_text___CString___to_s_full(var25, 9l, 9l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var18)->values[2]=var24;
} else {
var18 = varonce17;
varonce17 = NULL;
}
{
var27 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mmodule);
}
((struct instance_core__NativeArray*)var18)->values[1]=var27;
{
var28 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce17 = var18;
{
template___template__Template___add(var14, var28); /* Direct call template#Template#add on <var14:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_custom (var_cpp_file) on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)> */
var31 = var_cpp_file->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var_cpp_file:nullable CPPCompilationUnit(CPPCompilationUnit)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "}\n";
var35 = core__abstract_text___CString___to_s_full(var34, 2l, 2l);
var33 = var35;
varonce32 = var33;
}
{
template___template__Template___add(var29, var33); /* Direct call template#Template#add on <var29:Template>*/
}
{
var36 = nitc___nitc__CPPCompilationUnit___write_to_files(var_cpp_file, var_mmodule, var_compdir);
}
var_file = var36;
{
{ /* Inline light_ffi_base#MModule#ffi_files (var_mmodule) on <var_mmodule:MModule> */
var39 = var_mmodule->attrs[COLOR_nitc__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <var_mmodule:MModule> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 82);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var37, var_file); /* Direct call array#Array#add on <var37:Array[ExternFile]>*/
}
{
{ /* Inline light_c#MModule#ldflags (var_mmodule) on <var_mmodule:MModule> */
var42 = var_mmodule->attrs[COLOR_nitc__light_c__MModule___ldflags].val; /* _ldflags on <var_mmodule:MModule> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ldflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 80);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "";
var46 = core__abstract_text___CString___to_s_full(var45, 0l, 0l);
var44 = var46;
varonce43 = var44;
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "-lstdc++";
var50 = core__abstract_text___CString___to_s_full(var49, 8l, 8l);
var48 = var50;
varonce47 = var48;
}
{
more_collections___more_collections__MultiHashMap___add_one(var40, var44, var48); /* Direct call more_collections#MultiHashMap#add_one on <var40:MultiHashMap[String, String]>*/
}
RET_LABEL:;
}
/* method cpp#CPPLanguage#compile_callback for (self: CPPLanguage, NitniCallback, MModule, MModule, CCompilationUnit) */
void nitc___nitc__CPPLanguage___nitc__ffi_base__FFILanguage__compile_callback(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_callback /* var callback: NitniCallback */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var_ecc /* var ecc: CCompilationUnit */;
var_callback = p0;
var_mmodule = p1;
var_mainmodule = p2;
var_ecc = p3;
{
((void(*)(val* self, val* p0, val* p1))((((long)var_callback&3)?class_info[((long)var_callback&3)]:var_callback->class)->vft[COLOR_nitc__cpp__NitniCallback__compile_callback_to_cpp]))(var_callback, var_mmodule, var_mainmodule); /* compile_callback_to_cpp on <var_callback:NitniCallback>*/
}
RET_LABEL:;
}
/* method cpp#AExternCodeBlock#is_cpp for (self: AExternCodeBlock): Bool */
short int nitc__cpp___AExternCodeBlock___is_cpp(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable String */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable String */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
val* var16 /* : nullable String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
short int var21 /* : Bool */;
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
var9 = nitc__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "c++";
var12 = core__abstract_text___CString___to_s_full(var11, 3l, 3l);
var10 = var12;
varonce = var10;
}
if (var9 == NULL) {
var13 = 0; /* <var10:String> cannot be null */
} else {
var14 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_core__kernel__Object___61d_61d]))(var9, var10); /* == on <var9:nullable String>*/
var13 = var14;
}
var_15 = var13;
if (var13){
var8 = var_15;
} else {
{
var16 = nitc__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "c++ ";
var20 = core__abstract_text___CString___to_s_full(var19, 4l, 4l);
var18 = var20;
varonce17 = var18;
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 148);
fatal_exit(1);
} else {
var21 = core___core__Text___has_prefix(var16, var18);
}
var8 = var21;
}
var1 = var8;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#AExternCodeBlock#is_cpp_body for (self: AExternCodeBlock): Bool */
short int nitc__cpp___AExternCodeBlock___is_cpp_body(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable String */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable String */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
val* var16 /* : nullable String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
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
var9 = nitc__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "c++";
var12 = core__abstract_text___CString___to_s_full(var11, 3l, 3l);
var10 = var12;
varonce = var10;
}
if (var9 == NULL) {
var13 = 0; /* <var10:String> cannot be null */
} else {
var14 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_core__kernel__Object___61d_61d]))(var9, var10); /* == on <var9:nullable String>*/
var13 = var14;
}
var_15 = var13;
if (var13){
var8 = var_15;
} else {
{
var16 = nitc__light_ffi_base___AExternCodeBlock___language_name_lowered(self);
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "c++ body";
var20 = core__abstract_text___CString___to_s_full(var19, 8l, 8l);
var18 = var20;
varonce17 = var18;
}
if (var16 == NULL) {
var21 = 0; /* <var18:String> cannot be null */
} else {
var22 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_core__kernel__Object___61d_61d]))(var16, var18); /* == on <var16:nullable String>*/
var21 = var22;
}
var8 = var21;
}
var1 = var8;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#AExternCodeBlock#is_cpp_header for (self: AExternCodeBlock): Bool */
short int nitc__cpp___AExternCodeBlock___is_cpp_header(val* self) {
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
var10 = "c++ header";
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
/* method cpp#CPPCompilationUnit#write_to_files for (self: CPPCompilationUnit, MModule, String): ExternCppFile */
val* nitc___nitc__CPPCompilationUnit___write_to_files(val* self, val* p0, val* p1) {
val* var /* : ExternCppFile */;
val* var_mmodule /* var mmodule: MModule */;
val* var_compdir /* var compdir: String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : String */;
val* var_base_name /* var base_name: String */;
val* var9 /* : NativeArray[String] */;
static val* varonce8;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_h_file /* var h_file: String */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : Text */;
val* var24 /* : String */;
val* var_guard /* var guard: String */;
val* var26 /* : NativeArray[String] */;
static val* varonce25;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : Array[String] */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var_c_file /* var c_file: String */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var57 /* : NativeArray[String] */;
static val* varonce56;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var67 /* : Array[String] */;
val* var69 /* : Array[String] */;
val* var71 /* : NativeArray[String] */;
static val* varonce70;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
val* var76 /* : String */;
val* var77 /* : ExternCppFile */;
val* var79 /* : NativeArray[String] */;
static val* varonce78;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var84 /* : String */;
var_mmodule = p0;
var_compdir = p1;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "._ffi";
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
var6 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mmodule);
}
((struct instance_core__NativeArray*)var1)->values[0]=var6;
{
var7 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var_base_name = var7;
if (unlikely(varonce8==NULL)) {
var9 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ".hpp";
var13 = core__abstract_text___CString___to_s_full(var12, 4l, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[1]=var11;
} else {
var9 = varonce8;
varonce8 = NULL;
}
((struct instance_core__NativeArray*)var9)->values[0]=var_base_name;
{
var14 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce8 = var9;
var_h_file = var14;
if (unlikely(varonce15==NULL)) {
var16 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "_NIT_HPP";
var20 = core__abstract_text___CString___to_s_full(var19, 8l, 8l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var16)->values[1]=var18;
} else {
var16 = varonce15;
varonce15 = NULL;
}
{
var21 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mmodule);
}
{
var22 = core___core__String___Object__to_s(var21);
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__Text__to_upper]))(var22); /* to_upper on <var22:String>*/
}
((struct instance_core__NativeArray*)var16)->values[0]=var23;
{
var24 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var_guard = var24;
if (unlikely(varonce25==NULL)) {
var26 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "/";
var30 = core__abstract_text___CString___to_s_full(var29, 1l, 1l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[1]=var28;
} else {
var26 = varonce25;
varonce25 = NULL;
}
((struct instance_core__NativeArray*)var26)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var26)->values[2]=var_h_file;
{
var31 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce25 = var26;
var32 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var32); /* Direct call array#Array#init on <var32:Array[String]>*/
}
{
nitc__light_ffi_base___CCompilationUnit___write_header_to_file(self, var_mmodule, var31, var32, var_guard); /* Direct call light_ffi_base#CCompilationUnit#write_header_to_file on <self:CPPCompilationUnit>*/
}
if (unlikely(varonce33==NULL)) {
var34 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = ".cpp";
var38 = core__abstract_text___CString___to_s_full(var37, 4l, 4l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[1]=var36;
} else {
var34 = varonce33;
varonce33 = NULL;
}
((struct instance_core__NativeArray*)var34)->values[0]=var_base_name;
{
var39 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
var_c_file = var39;
if (unlikely(varonce40==NULL)) {
var41 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "/";
var45 = core__abstract_text___CString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[1]=var43;
} else {
var41 = varonce40;
varonce40 = NULL;
}
((struct instance_core__NativeArray*)var41)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var41)->values[2]=var_c_file;
{
var46 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
var47 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var47, 3l); /* Direct call array#Array#with_capacity on <var47:Array[String]>*/
}
var_ = var47;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "<string>";
var51 = core__abstract_text___CString___to_s_full(var50, 8l, 8l);
var49 = var51;
varonce48 = var49;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var49); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "<iostream>";
var55 = core__abstract_text___CString___to_s_full(var54, 10l, 10l);
var53 = var55;
varonce52 = var53;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var53); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (unlikely(varonce56==NULL)) {
var57 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "\"";
var61 = core__abstract_text___CString___to_s_full(var60, 1l, 1l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var57)->values[0]=var59;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "\"";
var65 = core__abstract_text___CString___to_s_full(var64, 1l, 1l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var57)->values[2]=var63;
} else {
var57 = varonce56;
varonce56 = NULL;
}
((struct instance_core__NativeArray*)var57)->values[1]=var_h_file;
{
var66 = ((val*(*)(val* self))(var57->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var57); /* native_to_s on <var57:NativeArray[String]>*/
}
varonce56 = var57;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var66); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
nitc__light_ffi_base___CCompilationUnit___write_body_to_file(self, var_mmodule, var46, var_); /* Direct call light_ffi_base#CCompilationUnit#write_body_to_file on <self:CPPCompilationUnit>*/
}
{
{ /* Inline c_tools#CCompilationUnit#files (self) on <self:CPPCompilationUnit> */
var69 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val; /* _files on <self:CPPCompilationUnit> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (unlikely(varonce70==NULL)) {
var71 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "/";
var75 = core__abstract_text___CString___to_s_full(var74, 1l, 1l);
var73 = var75;
varonce72 = var73;
}
((struct instance_core__NativeArray*)var71)->values[1]=var73;
} else {
var71 = varonce70;
varonce70 = NULL;
}
((struct instance_core__NativeArray*)var71)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var71)->values[2]=var_c_file;
{
var76 = ((val*(*)(val* self))(var71->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var71); /* native_to_s on <var71:NativeArray[String]>*/
}
varonce70 = var71;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var67, var76); /* Direct call array#Array#add on <var67:Array[String]>*/
}
var77 = NEW_nitc__ExternCppFile(&type_nitc__ExternCppFile);
if (unlikely(varonce78==NULL)) {
var79 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "/";
var83 = core__abstract_text___CString___to_s_full(var82, 1l, 1l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var79)->values[1]=var81;
} else {
var79 = varonce78;
varonce78 = NULL;
}
((struct instance_core__NativeArray*)var79)->values[0]=var_compdir;
((struct instance_core__NativeArray*)var79)->values[2]=var_c_file;
{
var84 = ((val*(*)(val* self))(var79->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var79); /* native_to_s on <var79:NativeArray[String]>*/
}
varonce78 = var79;
{
((void(*)(val* self, val* p0))(var77->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var77, var84); /* filename= on <var77:ExternCppFile>*/
}
{
((void(*)(val* self, val* p0))(var77->class->vft[COLOR_nitc__cpp__ExternCppFile__mmodule_61d]))(var77, var_mmodule); /* mmodule= on <var77:ExternCppFile>*/
}
{
((void(*)(val* self))(var77->class->vft[COLOR_core__kernel__Object__init]))(var77); /* init on <var77:ExternCppFile>*/
}
var = var77;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#ExternCppFile#mmodule for (self: ExternCppFile): MModule */
val* nitc___nitc__ExternCppFile___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__cpp__ExternCppFile___mmodule].val; /* _mmodule on <self:ExternCppFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 181);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#ExternCppFile#mmodule= for (self: ExternCppFile, MModule) */
void nitc___nitc__ExternCppFile___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__cpp__ExternCppFile___mmodule].val = p0; /* _mmodule on <self:ExternCppFile> */
RET_LABEL:;
}
/* method cpp#ExternCppFile#makefile_rule_name for (self: ExternCppFile): String */
val* nitc___nitc__ExternCppFile___nitc__c_tools__ExternFile__makefile_rule_name(val* self) {
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
val* var10 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ".o";
var5 = core__abstract_text___CString___to_s_full(var4, 2l, 2l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCppFile> */
var8 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCppFile> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val*(*)(val* self, val* p0))(var6->class->vft[COLOR_core__file__String__basename]))(var6, ((val*)NULL)); /* basename on <var6:String>*/
}
((struct instance_core__NativeArray*)var1)->values[0]=var9;
{
var10 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#ExternCppFile#makefile_rule_content for (self: ExternCppFile): String */
val* nitc___nitc__ExternCppFile___nitc__c_tools__ExternFile__makefile_rule_content(val* self) {
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
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : MultiHashMap[String, String] */;
val* var23 /* : MultiHashMap[String, String] */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Object */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "$(CXX) $(CFLAGS) ";
var5 = core__abstract_text___CString___to_s_full(var4, 17l, 17l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = " -c ";
var9 = core__abstract_text___CString___to_s_full(var8, 4l, 4l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = " -o ";
var13 = core__abstract_text___CString___to_s_full(var12, 4l, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[4]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = ".o";
var17 = core__abstract_text___CString___to_s_full(var16, 2l, 2l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var1)->values[6]=var15;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline cpp#ExternCppFile#mmodule (self) on <self:ExternCppFile> */
var20 = self->attrs[COLOR_nitc__cpp__ExternCppFile___mmodule].val; /* _mmodule on <self:ExternCppFile> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 181);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline cpp#MModule#cppflags (var18) on <var18:MModule> */
var23 = var18->attrs[COLOR_nitc__cpp__MModule___cppflags].val; /* _cppflags on <var18:MModule> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cppflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 30);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "";
var27 = core__abstract_text___CString___to_s_full(var26, 0l, 0l);
var25 = var27;
varonce24 = var25;
}
{
var28 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var21, var25);
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " ";
var32 = core__abstract_text___CString___to_s_full(var31, 1l, 1l);
var30 = var32;
varonce29 = var30;
}
{
var33 = core__abstract_text___Collection___join(var28, var30, ((val*)NULL));
}
((struct instance_core__NativeArray*)var1)->values[1]=var33;
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCppFile> */
var36 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCppFile> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = ((val*(*)(val* self, val* p0))(var34->class->vft[COLOR_core__file__String__basename]))(var34, ((val*)NULL)); /* basename on <var34:String>*/
}
((struct instance_core__NativeArray*)var1)->values[3]=var37;
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternCppFile> */
var40 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternCppFile> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = ((val*(*)(val* self, val* p0))(var38->class->vft[COLOR_core__file__String__basename]))(var38, ((val*)NULL)); /* basename on <var38:String>*/
}
((struct instance_core__NativeArray*)var1)->values[5]=var41;
{
var42 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#ExternCppFile#compiles_to_o_file for (self: ExternCppFile): Bool */
short int nitc___nitc__ExternCppFile___nitc__c_tools__ExternFile__compiles_to_o_file(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#ExternCppFile#init for (self: ExternCppFile) */
void nitc___nitc__ExternCppFile___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ExternCppFile___core__kernel__Object__init]))(self); /* init on <self:ExternCppFile>*/
}
RET_LABEL:;
}
/* method cpp#ForeignCppType#cpp_type for (self: ForeignCppType): String */
val* nitc___nitc__ForeignCppType___cpp_type(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__cpp__ForeignCppType___cpp_type].val; /* _cpp_type on <self:ForeignCppType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cpp_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 191);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method cpp#ForeignCppType#cpp_type= for (self: ForeignCppType, String) */
void nitc___nitc__ForeignCppType___cpp_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__cpp__ForeignCppType___cpp_type].val = p0; /* _cpp_type on <self:ForeignCppType> */
RET_LABEL:;
}
/* method cpp#ForeignCppType#init for (self: ForeignCppType) */
void nitc___nitc__ForeignCppType___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ForeignCppType___core__kernel__Object__init]))(self); /* init on <self:ForeignCppType>*/
}
RET_LABEL:;
}
/* method cpp#NitniCallback#compile_callback_to_cpp for (self: NitniCallback, MModule, MModule) */
void nitc__cpp___NitniCallback___compile_callback_to_cpp(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
var_mmodule = p0;
var_mainmodule = p1;
RET_LABEL:;
}
/* method cpp#MExplicitCall#compile_callback_to_cpp for (self: MExplicitCall, MModule, MModule) */
void nitc__cpp___MExplicitCall___NitniCallback__compile_callback_to_cpp(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var /* : MProperty */;
val* var2 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : MClassType */;
val* var6 /* : MClassType */;
val* var7 /* : Sys */;
val* var8 /* : SignatureLength */;
val* var9 /* : Sys */;
val* var10 /* : FromCppCallContext */;
val* var11 /* : String */;
val* var_cpp_signature /* var cpp_signature: String */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : Sys */;
val* var16 /* : SignatureLength */;
val* var17 /* : Sys */;
val* var18 /* : FromCppCallContext */;
val* var19 /* : String */;
val* var_ccall /* var ccall: String */;
val* var20 /* : CFunction */;
val* var_fc /* var fc: CFunction */;
val* var21 /* : Template */;
val* var23 /* : Template */;
val* var24 /* : nullable CPPCompilationUnit */;
val* var26 /* : nullable CPPCompilationUnit */;
var_mmodule = p0;
var_mainmodule = p1;
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
var_mproperty = var;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var3 = 0;
} else {
var3 = var_mproperty->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 206);
fatal_exit(1);
}
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
var8 = nitc__nitni_utilities___core__Sys___short_signature(var7);
}
var9 = glob_sys;
{
var10 = nitc__cpp___core__Sys___from_cpp_call_context(var9);
}
{
var11 = nitc__nitni_utilities___MMethod___build_csignature(var_mproperty, var4, var_mainmodule, ((val*)NULL), var8, var10);
}
var_cpp_signature = var11;
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
var15 = glob_sys;
{
var16 = nitc__nitni_utilities___core__Sys___long_signature(var15);
}
var17 = glob_sys;
{
var18 = nitc__cpp___core__Sys___from_cpp_call_context(var17);
}
{
var19 = nitc__nitni_utilities___MMethod___build_ccall(var_mproperty, var12, var_mainmodule, ((val*)NULL), var16, var18, ((val*)NULL));
}
var_ccall = var19;
var20 = NEW_nitc__CFunction(&type_nitc__CFunction);
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_nitc__c_tools__CFunction__signature_61d]))(var20, var_cpp_signature); /* signature= on <var20:CFunction>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__init]))(var20); /* init on <var20:CFunction>*/
}
var_fc = var20;
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:CFunction> */
var23 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:CFunction> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
template___template__Template___add(var21, var_ccall); /* Direct call template#Template#add on <var21:Template>*/
}
{
{ /* Inline cpp#MModule#cpp_file (var_mmodule) on <var_mmodule:MModule> */
var26 = var_mmodule->attrs[COLOR_nitc__cpp__MModule___cpp_file].val; /* _cpp_file on <var_mmodule:MModule> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (var24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 212);
fatal_exit(1);
} else {
nitc___nitc__CCompilationUnit___add_local_function(var24, var_fc); /* Direct call c_tools#CCompilationUnit#add_local_function on <var24:nullable CPPCompilationUnit>*/
}
RET_LABEL:;
}
/* method cpp#CppCallContext#name_mtype for (self: CppCallContext, MType): String */
val* nitc__cpp___nitc__cpp__CppCallContext___nitc__nitni_utilities__CallContext__name_mtype(val* self, val* p0) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : MClass */;
val* var4 /* : MClass */;
val* var5 /* : nullable ForeignType */;
val* var_ftype /* var ftype: nullable ForeignType */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
var_mtype = p0;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var1 = 0;
} else {
var1 = var_mtype->type->type_table[cltype] == idtype;
}
if (var1){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var4 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = nitc__extern_classes___MClass___ftype(var2);
}
var_ftype = var5;
/* <var_ftype:nullable ForeignType> isa ForeignCppType */
cltype7 = type_nitc__ForeignCppType.color;
idtype8 = type_nitc__ForeignCppType.id;
if(var_ftype == NULL) {
var6 = 0;
} else {
if(cltype7 >= var_ftype->type->table_size) {
var6 = 0;
} else {
var6 = var_ftype->type->type_table[cltype7] == idtype8;
}
}
if (var6){
{
{ /* Inline cpp#ForeignCppType#cpp_type (var_ftype) on <var_ftype:nullable ForeignType(ForeignCppType)> */
var11 = var_ftype->attrs[COLOR_nitc__cpp__ForeignCppType___cpp_type].val; /* _cpp_type on <var_ftype:nullable ForeignType(ForeignCppType)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cpp_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__cpp, 191);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
}
} else {
}
{
var12 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__nitni_base__MType__cname]))(var_mtype); /* cname on <var_mtype:MType>*/
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#ToCppCallContext#cast_to for (self: ToCppCallContext, MType, String): String */
val* nitc___nitc__ToCppCallContext___nitc__nitni_utilities__CallContext__cast_to(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : MClass */;
val* var5 /* : MClass */;
val* var6 /* : nullable ForeignType */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
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
var_mtype = p0;
var_name = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var2 = 0;
} else {
var2 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var5 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__extern_classes___MClass___ftype(var3);
}
/* <var6:nullable ForeignType> isa ForeignCppType */
cltype8 = type_nitc__ForeignCppType.color;
idtype9 = type_nitc__ForeignCppType.id;
if(var6 == NULL) {
var7 = 0;
} else {
if(cltype8 >= var6->type->table_size) {
var7 = 0;
} else {
var7 = var6->type->type_table[cltype8] == idtype9;
}
}
var1 = var7;
} else {
var1 = var_;
}
if (var1){
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "(void*)(";
var14 = core__abstract_text___CString___to_s_full(var13, 8l, 8l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ")";
var18 = core__abstract_text___CString___to_s_full(var17, 1l, 1l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_name;
{
var19 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
var = var19;
goto RET_LABEL;
} else {
var = var_name;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method cpp#FromCppCallContext#cast_from for (self: FromCppCallContext, MType, String): String */
val* nitc__cpp___nitc__cpp__FromCppCallContext___nitc__nitni_utilities__CallContext__cast_from(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : MClass */;
val* var5 /* : MClass */;
val* var6 /* : nullable ForeignType */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
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
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
var_mtype = p0;
var_name = p1;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var2 = 0;
} else {
var2 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var2;
if (var2){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var5 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__extern_classes___MClass___ftype(var3);
}
/* <var6:nullable ForeignType> isa ForeignCppType */
cltype8 = type_nitc__ForeignCppType.color;
idtype9 = type_nitc__ForeignCppType.id;
if(var6 == NULL) {
var7 = 0;
} else {
if(cltype8 >= var6->type->table_size) {
var7 = 0;
} else {
var7 = var6->type->type_table[cltype8] == idtype9;
}
}
var1 = var7;
} else {
var1 = var_;
}
if (var1){
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "static_cast<";
var14 = core__abstract_text___CString___to_s_full(var13, 12l, 12l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ">(";
var18 = core__abstract_text___CString___to_s_full(var17, 2l, 2l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = ")";
var22 = core__abstract_text___CString___to_s_full(var21, 1l, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var10)->values[4]=var20;
} else {
var10 = varonce;
varonce = NULL;
}
{
var23 = nitc__cpp___nitc__cpp__CppCallContext___nitc__nitni_utilities__CallContext__name_mtype(self, var_mtype);
}
((struct instance_core__NativeArray*)var10)->values[1]=var23;
((struct instance_core__NativeArray*)var10)->values[3]=var_name;
{
var24 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
var = var24;
goto RET_LABEL;
} else {
var = var_name;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method cpp#Sys#cpp_call_context for (self: Sys): CppCallContext */
val* nitc__cpp___core__Sys___cpp_call_context(val* self) {
val* var /* : CppCallContext */;
static val* varonce;
static int varonce_guard;
val* var1 /* : CppCallContext */;
val* var2 /* : CppCallContext */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__cpp__CppCallContext(&type_nitc__cpp__CppCallContext);
{
{ /* Inline kernel#Object#init (var2) on <var2:CppCallContext> */
RET_LABEL3:(void)0;
}
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#Sys#to_cpp_call_context for (self: Sys): ToCppCallContext */
val* nitc__cpp___core__Sys___to_cpp_call_context(val* self) {
val* var /* : ToCppCallContext */;
static val* varonce;
static int varonce_guard;
val* var1 /* : ToCppCallContext */;
val* var2 /* : ToCppCallContext */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__ToCppCallContext(&type_nitc__ToCppCallContext);
{
{ /* Inline kernel#Object#init (var2) on <var2:ToCppCallContext> */
RET_LABEL3:(void)0;
}
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method cpp#Sys#from_cpp_call_context for (self: Sys): FromCppCallContext */
val* nitc__cpp___core__Sys___from_cpp_call_context(val* self) {
val* var /* : FromCppCallContext */;
static val* varonce;
static int varonce_guard;
val* var1 /* : FromCppCallContext */;
val* var2 /* : FromCppCallContext */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__cpp__FromCppCallContext(&type_nitc__cpp__FromCppCallContext);
{
{ /* Inline kernel#Object#init (var2) on <var2:FromCppCallContext> */
RET_LABEL3:(void)0;
}
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
