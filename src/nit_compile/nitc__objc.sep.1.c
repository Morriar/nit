#include "nitc__objc.sep.0.h"
/* method objc#MModule#objc_file for (self: MModule): nullable ObjCCompilationUnit */
val* nitc__objc___MModule___objc_file(val* self) {
val* var /* : nullable ObjCCompilationUnit */;
val* var1 /* : nullable ObjCCompilationUnit */;
var1 = self->attrs[COLOR_nitc__objc__MModule___objc_file].val; /* _objc_file on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method objc#MModule#objc_file= for (self: MModule, nullable ObjCCompilationUnit) */
void nitc__objc___MModule___objc_file_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__objc__MModule___objc_file].val = p0; /* _objc_file on <self:MModule> */
RET_LABEL:;
}
/* method objc#MModule#has_public_objc_header for (self: MModule): Bool */
short int nitc__objc___MModule___has_public_objc_header(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__objc__MModule___has_public_objc_header].s; /* _has_public_objc_header on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method objc#MModule#has_public_objc_header= for (self: MModule, Bool) */
void nitc__objc___MModule___has_public_objc_header_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__objc__MModule___has_public_objc_header].s = p0; /* _has_public_objc_header on <self:MModule> */
RET_LABEL:;
}
/* method objc#MModule#objc_imported_headers for (self: MModule): HashSet[MModule] */
val* nitc__objc___MModule___objc_imported_headers(val* self) {
val* var /* : HashSet[MModule] */;
short int var1 /* : Bool */;
val* var2 /* : HashSet[MModule] */;
val* var3 /* : HashSet[MModule] */;
val* var5 /* : HashSet[MModule] */;
val* var_dep /* var dep: HashSet[MModule] */;
val* var6 /* : POSetElement[MModule] */;
val* var8 /* : POSetElement[MModule] */;
val* var9 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var10 /* : Iterator[nullable Object] */;
val* var_11 /* var : Iterator[MModule] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var14 /* : HashSet[MModule] */;
val* var_import_dep /* var import_dep: HashSet[MModule] */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
var1 = self->attrs[COLOR_nitc__objc__MModule___objc_imported_headers].val != NULL; /* _objc_imported_headers on <self:MModule> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__objc__MModule___objc_imported_headers].val; /* _objc_imported_headers on <self:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _objc_imported_headers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 38);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__HashSet(&type_core__HashSet__nitc__MModule);
{
core___core__HashSet___core__kernel__Object__init(var5); /* Direct call hash_collection#HashSet#init on <var5:HashSet[MModule]>*/
}
var_dep = var5;
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var8 = self->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = poset___poset__POSetElement___direct_greaters(var6);
}
var_ = var9;
{
var10 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:Iterator[MModule]>*/
}
if (var12){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:Iterator[MModule]>*/
}
var_m = var13;
{
var14 = nitc__objc___MModule___objc_imported_headers(var_m);
}
var_import_dep = var14;
{
var15 = core___core__HashSet___core__abstract_collection__Collection__is_empty(var_import_dep);
}
var16 = !var15;
if (var16){
{
core___core__SimpleCollection___add_all(var_dep, var_import_dep); /* Direct call abstract_collection#SimpleCollection#add_all on <var_dep:HashSet[MModule]>*/
}
} else {
}
{
{ /* Inline objc#MModule#has_public_objc_header (var_m) on <var_m:MModule> */
var19 = var_m->attrs[COLOR_nitc__objc__MModule___has_public_objc_header].s; /* _has_public_objc_header on <var_m:MModule> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17){
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_dep, var_m); /* Direct call hash_collection#HashSet#add on <var_dep:HashSet[MModule]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:Iterator[MModule]>*/
}
var3 = var_dep;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__objc__MModule___objc_imported_headers].val = var3; /* _objc_imported_headers on <self:MModule> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method objc#ObjCLanguage#identify_language for (self: ObjCLanguage, AExternCodeBlock): Bool */
short int nitc___nitc__ObjCLanguage___nitc__light_ffi_base__FFILanguage__identify_language(val* self, val* p0) {
short int var /* : Bool */;
val* var_n /* var n: AExternCodeBlock */;
short int var1 /* : Bool */;
var_n = p0;
{
var1 = nitc__objc___AExternCodeBlock___is_objc(var_n);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method objc#ObjCLanguage#compile_module_block for (self: ObjCLanguage, AExternCodeBlock, CCompilationUnit, MModule) */
void nitc___nitc__ObjCLanguage___nitc__light_ffi_base__FFILanguage__compile_module_block(val* self, val* p0, val* p1, val* p2) {
val* var_block /* var block: AExternCodeBlock */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : nullable ObjCCompilationUnit */;
val* var2 /* : nullable ObjCCompilationUnit */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ObjCCompilationUnit */;
short int var12 /* : Bool */;
val* var13 /* : nullable ObjCCompilationUnit */;
val* var15 /* : nullable ObjCCompilationUnit */;
val* var16 /* : Template */;
val* var18 /* : Template */;
val* var19 /* : Location */;
val* var21 /* : Location */;
val* var22 /* : String */;
val* var23 /* : nullable ObjCCompilationUnit */;
val* var25 /* : nullable ObjCCompilationUnit */;
val* var26 /* : Template */;
val* var28 /* : Template */;
val* var29 /* : String */;
short int var31 /* : Bool */;
val* var32 /* : nullable ObjCCompilationUnit */;
val* var34 /* : nullable ObjCCompilationUnit */;
val* var35 /* : Template */;
val* var37 /* : Template */;
val* var38 /* : Location */;
val* var40 /* : Location */;
val* var41 /* : String */;
val* var42 /* : nullable ObjCCompilationUnit */;
val* var44 /* : nullable ObjCCompilationUnit */;
val* var45 /* : Template */;
val* var47 /* : Template */;
val* var48 /* : String */;
var_block = p0;
var_ecc = p1;
var_mmodule = p2;
{
{ /* Inline objc#MModule#objc_file (var_mmodule) on <var_mmodule:MModule> */
var2 = var_mmodule->attrs[COLOR_nitc__objc__MModule___objc_file].val; /* _objc_file on <var_mmodule:MModule> */
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
{ /* Inline kernel#Object#== (var,((val*)NULL)) on <var:nullable ObjCCompilationUnit> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable ObjCCompilationUnit(ObjCCompilationUnit)> */
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
var9 = NEW_nitc__objc__ObjCCompilationUnit(&type_nitc__objc__ObjCCompilationUnit);
{
{ /* Inline kernel#Object#init (var9) on <var9:ObjCCompilationUnit> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline objc#MModule#objc_file= (var_mmodule,var9) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__objc__MModule___objc_file].val = var9; /* _objc_file on <var_mmodule:MModule> */
RET_LABEL11:(void)0;
}
}
} else {
}
{
var12 = nitc__objc___AExternCodeBlock___is_objc_header(var_block);
}
if (var12){
{
{ /* Inline objc#MModule#objc_file (var_mmodule) on <var_mmodule:MModule> */
var15 = var_mmodule->attrs[COLOR_nitc__objc__MModule___objc_file].val; /* _objc_file on <var_mmodule:MModule> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 69);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_custom (var13) on <var13:nullable ObjCCompilationUnit> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var18 = var13->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var13:nullable ObjCCompilationUnit> */
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
{ /* Inline objc#MModule#objc_file (var_mmodule) on <var_mmodule:MModule> */
var25 = var_mmodule->attrs[COLOR_nitc__objc__MModule___objc_file].val; /* _objc_file on <var_mmodule:MModule> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 70);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_custom (var23) on <var23:nullable ObjCCompilationUnit> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var28 = var23->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var23:nullable ObjCCompilationUnit> */
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
{
{ /* Inline objc#MModule#has_public_objc_header= (var_mmodule,1) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__objc__MModule___has_public_objc_header].s = 1; /* _has_public_objc_header on <var_mmodule:MModule> */
RET_LABEL30:(void)0;
}
}
} else {
{
var31 = nitc__objc___AExternCodeBlock___is_objc_body(var_block);
}
if (var31){
{
{ /* Inline objc#MModule#objc_file (var_mmodule) on <var_mmodule:MModule> */
var34 = var_mmodule->attrs[COLOR_nitc__objc__MModule___objc_file].val; /* _objc_file on <var_mmodule:MModule> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 74);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#body_custom (var32) on <var32:nullable ObjCCompilationUnit> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 41);
fatal_exit(1);
}
var37 = var32->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_custom].val; /* _body_custom on <var32:nullable ObjCCompilationUnit> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 41);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_block) on <var_block:AExternCodeBlock> */
var40 = var_block->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_block:AExternCodeBlock> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = nitc__light_c___Location___as_line_pragma(var38);
}
{
template___template__Template___add(var35, var41); /* Direct call template#Template#add on <var35:Template>*/
}
{
{ /* Inline objc#MModule#objc_file (var_mmodule) on <var_mmodule:MModule> */
var44 = var_mmodule->attrs[COLOR_nitc__objc__MModule___objc_file].val; /* _objc_file on <var_mmodule:MModule> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 75);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#body_custom (var42) on <var42:nullable ObjCCompilationUnit> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 41);
fatal_exit(1);
}
var47 = var42->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_custom].val; /* _body_custom on <var42:nullable ObjCCompilationUnit> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _body_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 41);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var45, var48); /* Direct call template#Template#add on <var45:Template>*/
}
} else {
}
}
RET_LABEL:;
}
/* method objc#ObjCLanguage#compile_extern_method for (self: ObjCLanguage, AExternCodeBlock, AMethPropdef, CCompilationUnit, MModule) */
void nitc___nitc__ObjCLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_method(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AMethPropdef */;
val* var_ecc /* var ecc: CCompilationUnit */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : nullable ObjCCompilationUnit */;
val* var2 /* : nullable ObjCCompilationUnit */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ObjCCompilationUnit */;
val* var12 /* : nullable MPropDef */;
val* var14 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MClassType */;
val* var20 /* : MClassType */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var21 /* : MProperty */;
val* var23 /* : MProperty */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : Sys */;
val* var28 /* : SignatureLength */;
val* var29 /* : Sys */;
val* var30 /* : FromObjCCallContext */;
val* var31 /* : String */;
val* var_csignature /* var csignature: String */;
val* var32 /* : CFunction */;
val* var_fc /* var fc: CFunction */;
val* var33 /* : Template */;
val* var35 /* : Template */;
val* var36 /* : Location */;
val* var38 /* : Location */;
val* var39 /* : String */;
val* var40 /* : Template */;
val* var42 /* : Template */;
val* var43 /* : String */;
val* var44 /* : nullable ObjCCompilationUnit */;
val* var46 /* : nullable ObjCCompilationUnit */;
var_block = p0;
var_m = p1;
var_ecc = p2;
var_mmodule = p3;
{
{ /* Inline objc#MModule#objc_file (var_mmodule) on <var_mmodule:MModule> */
var2 = var_mmodule->attrs[COLOR_nitc__objc__MModule___objc_file].val; /* _objc_file on <var_mmodule:MModule> */
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
{ /* Inline kernel#Object#== (var,((val*)NULL)) on <var:nullable ObjCCompilationUnit> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable ObjCCompilationUnit(ObjCCompilationUnit)> */
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
var9 = NEW_nitc__objc__ObjCCompilationUnit(&type_nitc__objc__ObjCCompilationUnit);
{
{ /* Inline kernel#Object#init (var9) on <var9:ObjCCompilationUnit> */
RET_LABEL10:(void)0;
}
}
{
{ /* Inline objc#MModule#objc_file= (var_mmodule,var9) on <var_mmodule:MModule> */
var_mmodule->attrs[COLOR_nitc__objc__MModule___objc_file].val = var9; /* _objc_file on <var_mmodule:MModule> */
RET_LABEL11:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_m) on <var_m:AMethPropdef> */
var14 = var_m->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_m:AMethPropdef> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mpropdef = var12;
if (var_mpropdef == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 84);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef> */
if (unlikely(var_mpropdef == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var17 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_recv_mtype = var18;
if (var_mpropdef == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 85);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef> */
if (unlikely(var_mpropdef == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var23 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "___impl";
var26 = core__abstract_text___CString___to_s_full(var25, 7l, 7l);
var24 = var26;
varonce = var24;
}
var27 = glob_sys;
{
var28 = nitc__nitni_utilities___core__Sys___long_signature(var27);
}
var29 = glob_sys;
{
var30 = nitc__objc___core__Sys___from_objc_call_context(var29);
}
{
var31 = nitc__nitni_utilities___MMethod___build_csignature(var21, var_recv_mtype, var_mmodule, var24, var28, var30);
}
var_csignature = var31;
var32 = NEW_nitc__CFunction(&type_nitc__CFunction);
{
((void(*)(val* self, val* p0))(var32->class->vft[COLOR_nitc__c_tools__CFunction__signature_61d]))(var32, var_csignature); /* signature= on <var32:CFunction>*/
}
{
((void(*)(val* self))(var32->class->vft[COLOR_core__kernel__Object__init]))(var32); /* init on <var32:CFunction>*/
}
var_fc = var32;
{
{ /* Inline c_tools#CFunction#decls (var_fc) on <var_fc:CFunction> */
var35 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___decls].val; /* _decls on <var_fc:CFunction> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 88);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_block) on <var_block:AExternCodeBlock> */
var38 = var_block->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_block:AExternCodeBlock> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = nitc__light_c___Location___as_line_pragma(var36);
}
{
template___template__Template___add(var33, var39); /* Direct call template#Template#add on <var33:Template>*/
}
{
{ /* Inline c_tools#CFunction#exprs (var_fc) on <var_fc:CFunction> */
var42 = var_fc->attrs[COLOR_nitc__c_tools__CFunction___exprs].val; /* _exprs on <var_fc:CFunction> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 89);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
template___template__Template___add(var40, var43); /* Direct call template#Template#add on <var40:Template>*/
}
{
{ /* Inline objc#MModule#objc_file (var_mmodule) on <var_mmodule:MModule> */
var46 = var_mmodule->attrs[COLOR_nitc__objc__MModule___objc_file].val; /* _objc_file on <var_mmodule:MModule> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (var44 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 91);
fatal_exit(1);
} else {
nitc___nitc__CCompilationUnit___add_exported_function(var44, var_fc); /* Direct call c_tools#CCompilationUnit#add_exported_function on <var44:nullable ObjCCompilationUnit>*/
}
RET_LABEL:;
}
/* method objc#ObjCLanguage#compile_extern_class for (self: ObjCLanguage, AExternCodeBlock, AClassdef, CCompilationUnit, MModule) */
void nitc___nitc__ObjCLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_class(val* self, val* p0, val* p1, val* p2, val* p3) {
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
/* method objc#ObjCLanguage#get_ftype for (self: ObjCLanguage, AExternCodeBlock, AClassdef): ForeignType */
val* nitc___nitc__ObjCLanguage___nitc__light_ffi_base__FFILanguage__get_ftype(val* self, val* p0, val* p1) {
val* var /* : ForeignType */;
val* var_block /* var block: AExternCodeBlock */;
val* var_m /* var m: AClassdef */;
val* var1 /* : ForeignObjCType */;
val* var2 /* : String */;
var_block = p0;
var_m = p1;
var1 = NEW_nitc__ForeignObjCType(&type_nitc__ForeignObjCType);
{
var2 = nitc__light_ffi_base___AExternCodeBlock___code(var_block);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__objc__ForeignObjCType__objc_type_61d]))(var1, var2); /* objc_type= on <var1:ForeignObjCType>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ForeignObjCType>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method objc#ObjCLanguage#compile_to_files for (self: ObjCLanguage, MModule, String) */
void nitc___nitc__ObjCLanguage___nitc__light_ffi_base__FFILanguage__compile_to_files(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_compdir /* var compdir: String */;
val* var /* : nullable ObjCCompilationUnit */;
val* var2 /* : nullable ObjCCompilationUnit */;
val* var_objc_file /* var objc_file: nullable ObjCCompilationUnit */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : HashSet[MModule] */;
val* var_dep /* var dep: HashSet[MModule] */;
val* var_ /* var : HashSet[MModule] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : Iterator[MModule] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_mod /* var mod: MModule */;
val* var13 /* : Template */;
val* var15 /* : Template */;
val* var16 /* : NativeArray[String] */;
static val* varonce;
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
val* var27 /* : nullable ObjCCompilationUnit */;
val* var29 /* : nullable ObjCCompilationUnit */;
val* var30 /* : Template */;
val* var32 /* : Template */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
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
val* var45 /* : ExternObjCFile */;
val* var_file /* var file: ExternObjCFile */;
val* var46 /* : Array[ExternFile] */;
val* var48 /* : Array[ExternFile] */;
var_mmodule = p0;
var_compdir = p1;
{
{ /* Inline objc#MModule#objc_file (var_mmodule) on <var_mmodule:MModule> */
var2 = var_mmodule->attrs[COLOR_nitc__objc__MModule___objc_file].val; /* _objc_file on <var_mmodule:MModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_objc_file = var;
if (var_objc_file == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_objc_file,((val*)NULL)) on <var_objc_file:nullable ObjCCompilationUnit> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_objc_file->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_objc_file, var_other); /* == on <var_objc_file:nullable ObjCCompilationUnit(ObjCCompilationUnit)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 101);
fatal_exit(1);
}
{
var8 = nitc__objc___MModule___objc_imported_headers(var_mmodule);
}
var_dep = var8;
var_ = var_dep;
{
var9 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:Iterator[MModule]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:Iterator[MModule]>*/
}
var_mod = var12;
{
{ /* Inline c_tools#CCompilationUnit#header_custom (var_objc_file) on <var_objc_file:nullable ObjCCompilationUnit(ObjCCompilationUnit)> */
var15 = var_objc_file->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val; /* _header_custom on <var_objc_file:nullable ObjCCompilationUnit(ObjCCompilationUnit)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_custom");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 28);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var16 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "#include \"";
var20 = core__abstract_text___CString___to_s_full(var19, 10l, 10l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var16)->values[0]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "._ffi_m.h\"\n";
var24 = core__abstract_text___CString___to_s_full(var23, 11l, 11l);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var16)->values[2]=var22;
} else {
var16 = varonce;
varonce = NULL;
}
{
var25 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mod);
}
((struct instance_core__NativeArray*)var16)->values[1]=var25;
{
var26 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce = var16;
{
template___template__Template___add(var13, var26); /* Direct call template#Template#add on <var13:Template>*/
}
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:Iterator[MModule]>*/
}
{
{ /* Inline objc#MModule#objc_file (var_mmodule) on <var_mmodule:MModule> */
var29 = var_mmodule->attrs[COLOR_nitc__objc__MModule___objc_file].val; /* _objc_file on <var_mmodule:MModule> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 110);
fatal_exit(1);
} else {
{ /* Inline c_tools#CCompilationUnit#header_c_types (var27) on <var27:nullable ObjCCompilationUnit> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var32 = var27->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val; /* _header_c_types on <var27:nullable ObjCCompilationUnit> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_c_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 31);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (unlikely(varonce33==NULL)) {
var34 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "\t#include \"";
var38 = core__abstract_text___CString___to_s_full(var37, 11l, 11l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[0]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "._ffi.h\"\n";
var42 = core__abstract_text___CString___to_s_full(var41, 9l, 9l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var34)->values[2]=var40;
} else {
var34 = varonce33;
varonce33 = NULL;
}
{
var43 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mmodule);
}
((struct instance_core__NativeArray*)var34)->values[1]=var43;
{
var44 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
template___template__Template___add(var30, var44); /* Direct call template#Template#add on <var30:Template>*/
}
{
var45 = nitc__objc___nitc__objc__ObjCCompilationUnit___write_to_files(var_objc_file, var_mmodule, var_compdir);
}
var_file = var45;
{
{ /* Inline light_ffi_base#MModule#ffi_files (var_mmodule) on <var_mmodule:MModule> */
var48 = var_mmodule->attrs[COLOR_nitc__light_ffi_base__MModule___ffi_files].val; /* _ffi_files on <var_mmodule:MModule> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_ffi_base, 82);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var46, var_file); /* Direct call array#Array#add on <var46:Array[ExternFile]>*/
}
RET_LABEL:;
}
/* method objc#ObjCLanguage#compile_callback for (self: ObjCLanguage, NitniCallback, MModule, MModule, CCompilationUnit) */
void nitc___nitc__ObjCLanguage___nitc__ffi_base__FFILanguage__compile_callback(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var_callback /* var callback: NitniCallback */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var_ecc /* var ecc: CCompilationUnit */;
var_callback = p0;
var_mmodule = p1;
var_mainmodule = p2;
var_ecc = p3;
{
((void(*)(val* self, val* p0, val* p1))((((long)var_callback&3)?class_info[((long)var_callback&3)]:var_callback->class)->vft[COLOR_nitc__objc__NitniCallback__compile_callback_to_objc]))(var_callback, var_mmodule, var_mainmodule); /* compile_callback_to_objc on <var_callback:NitniCallback>*/
}
RET_LABEL:;
}
/* method objc#AExternCodeBlock#is_objc for (self: AExternCodeBlock): Bool */
short int nitc__objc___AExternCodeBlock___is_objc(val* self) {
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
var11 = "objc";
var12 = core__abstract_text___CString___to_s_full(var11, 4l, 4l);
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
var19 = "objc ";
var20 = core__abstract_text___CString___to_s_full(var19, 5l, 5l);
var18 = var20;
varonce17 = var18;
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 129);
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
/* method objc#AExternCodeBlock#is_objc_body for (self: AExternCodeBlock): Bool */
short int nitc__objc___AExternCodeBlock___is_objc_body(val* self) {
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
var11 = "objc";
var12 = core__abstract_text___CString___to_s_full(var11, 4l, 4l);
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
var19 = "objc body";
var20 = core__abstract_text___CString___to_s_full(var19, 9l, 9l);
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
/* method objc#AExternCodeBlock#is_objc_header for (self: AExternCodeBlock): Bool */
short int nitc__objc___AExternCodeBlock___is_objc_header(val* self) {
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
var10 = "objc header";
var11 = core__abstract_text___CString___to_s_full(var10, 11l, 11l);
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
/* method objc#ObjCCompilationUnit#write_to_files for (self: ObjCCompilationUnit, MModule, String): ExternObjCFile */
val* nitc__objc___nitc__objc__ObjCCompilationUnit___write_to_files(val* self, val* p0, val* p1) {
val* var /* : ExternObjCFile */;
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
val* var22 /* : Text */;
val* var23 /* : String */;
val* var_guard /* var guard: String */;
val* var24 /* : String */;
val* var25 /* : Array[String] */;
val* var27 /* : NativeArray[String] */;
static val* varonce26;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var_c_file /* var c_file: String */;
val* var33 /* : String */;
val* var34 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : Array[String] */;
val* var48 /* : Array[String] */;
val* var49 /* : String */;
val* var50 /* : MultiHashMap[String, String] */;
val* var52 /* : MultiHashMap[String, String] */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : ExternObjCFile */;
val* var62 /* : String */;
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
var12 = "_m.h";
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
var19 = "_NIT_OBJC_H";
var20 = core__abstract_text___CString___to_s_full(var19, 11l, 11l);
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
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__Text__to_upper]))(var21); /* to_upper on <var21:String>*/
}
((struct instance_core__NativeArray*)var16)->values[0]=var22;
{
var23 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var_guard = var23;
{
var24 = core__file___String____47d(var_compdir, var_h_file);
}
var25 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var25); /* Direct call array#Array#init on <var25:Array[String]>*/
}
{
nitc__light_ffi_base___CCompilationUnit___write_header_to_file(self, var_mmodule, var24, var25, var_guard); /* Direct call light_ffi_base#CCompilationUnit#write_header_to_file on <self:ObjCCompilationUnit>*/
}
if (unlikely(varonce26==NULL)) {
var27 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = ".m";
var31 = core__abstract_text___CString___to_s_full(var30, 2l, 2l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var27)->values[1]=var29;
} else {
var27 = varonce26;
varonce26 = NULL;
}
((struct instance_core__NativeArray*)var27)->values[0]=var_base_name;
{
var32 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce26 = var27;
var_c_file = var32;
{
var33 = core__file___String____47d(var_compdir, var_c_file);
}
var34 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var34, 1l); /* Direct call array#Array#with_capacity on <var34:Array[String]>*/
}
var_ = var34;
if (unlikely(varonce35==NULL)) {
var36 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "\"";
var40 = core__abstract_text___CString___to_s_full(var39, 1l, 1l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var36)->values[0]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "\"";
var44 = core__abstract_text___CString___to_s_full(var43, 1l, 1l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var36)->values[2]=var42;
} else {
var36 = varonce35;
varonce35 = NULL;
}
((struct instance_core__NativeArray*)var36)->values[1]=var_h_file;
{
var45 = ((val*(*)(val* self))(var36->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var45); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
nitc__light_ffi_base___CCompilationUnit___write_body_to_file(self, var_mmodule, var33, var_); /* Direct call light_ffi_base#CCompilationUnit#write_body_to_file on <self:ObjCCompilationUnit>*/
}
{
{ /* Inline c_tools#CCompilationUnit#files (self) on <self:ObjCCompilationUnit> */
var48 = self->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val; /* _files on <self:ObjCCompilationUnit> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 47);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = core__file___String____47d(var_compdir, var_c_file);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var46, var49); /* Direct call array#Array#add on <var46:Array[String]>*/
}
{
{ /* Inline light_c#MModule#ldflags (var_mmodule) on <var_mmodule:MModule> */
var52 = var_mmodule->attrs[COLOR_nitc__light_c__MModule___ldflags].val; /* _ldflags on <var_mmodule:MModule> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ldflags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light_c, 80);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "";
var56 = core__abstract_text___CString___to_s_full(var55, 0l, 0l);
var54 = var56;
varonce53 = var54;
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "-lobjc";
var60 = core__abstract_text___CString___to_s_full(var59, 6l, 6l);
var58 = var60;
varonce57 = var58;
}
{
more_collections___more_collections__MultiHashMap___add_one(var50, var54, var58); /* Direct call more_collections#MultiHashMap#add_one on <var50:MultiHashMap[String, String]>*/
}
var61 = NEW_nitc__ExternObjCFile(&type_nitc__ExternObjCFile);
{
var62 = core__file___String____47d(var_compdir, var_c_file);
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var61, var62); /* filename= on <var61:ExternObjCFile>*/
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_nitc__objc__ExternObjCFile__mmodule_61d]))(var61, var_mmodule); /* mmodule= on <var61:ExternObjCFile>*/
}
{
((void(*)(val* self))(var61->class->vft[COLOR_core__kernel__Object__init]))(var61); /* init on <var61:ExternObjCFile>*/
}
var = var61;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method objc#ExternObjCFile#mmodule= for (self: ExternObjCFile, MModule) */
void nitc___nitc__ExternObjCFile___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__objc__ExternObjCFile___mmodule].val = p0; /* _mmodule on <self:ExternObjCFile> */
RET_LABEL:;
}
/* method objc#ExternObjCFile#makefile_rule_name for (self: ExternObjCFile): String */
val* nitc___nitc__ExternObjCFile___nitc__c_tools__ExternFile__makefile_rule_name(val* self) {
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
var4 = "_m.o";
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
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternObjCFile> */
var8 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternObjCFile> */
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
var11 = ".m";
var12 = core__abstract_text___CString___to_s_full(var11, 2l, 2l);
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
/* method objc#ExternObjCFile#makefile_rule_content for (self: ExternObjCFile): String */
val* nitc___nitc__ExternObjCFile___nitc__c_tools__ExternFile__makefile_rule_content(val* self) {
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
val* var15 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "clang $(CFLAGS) -c ";
var5 = core__abstract_text___CString___to_s_full(var4, 19l, 19l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = " -o ";
var9 = core__abstract_text___CString___to_s_full(var8, 4l, 4l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline c_tools#ExternFile#filename (self) on <self:ExternObjCFile> */
var12 = self->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <self:ExternObjCFile> */
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
var14 = nitc___nitc__ExternObjCFile___nitc__c_tools__ExternFile__makefile_rule_name(self);
}
((struct instance_core__NativeArray*)var1)->values[3]=var14;
{
var15 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method objc#ExternObjCFile#compiles_to_o_file for (self: ExternObjCFile): Bool */
short int nitc___nitc__ExternObjCFile___nitc__c_tools__ExternFile__compiles_to_o_file(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method objc#ExternObjCFile#init for (self: ExternObjCFile) */
void nitc___nitc__ExternObjCFile___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ExternObjCFile___core__kernel__Object__init]))(self); /* init on <self:ExternObjCFile>*/
}
RET_LABEL:;
}
/* method objc#ForeignObjCType#objc_type for (self: ForeignObjCType): String */
val* nitc___nitc__ForeignObjCType___objc_type(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__objc__ForeignObjCType___objc_type].val; /* _objc_type on <self:ForeignObjCType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _objc_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 181);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method objc#ForeignObjCType#objc_type= for (self: ForeignObjCType, String) */
void nitc___nitc__ForeignObjCType___objc_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__objc__ForeignObjCType___objc_type].val = p0; /* _objc_type on <self:ForeignObjCType> */
RET_LABEL:;
}
/* method objc#ForeignObjCType#init for (self: ForeignObjCType) */
void nitc___nitc__ForeignObjCType___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ForeignObjCType___core__kernel__Object__init]))(self); /* init on <self:ForeignObjCType>*/
}
RET_LABEL:;
}
/* method objc#NitniCallback#compile_callback_to_objc for (self: NitniCallback, MModule, MModule) */
void nitc__objc___NitniCallback___compile_callback_to_objc(val* self, val* p0, val* p1) {
val* var_mmodule /* var mmodule: MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
var_mmodule = p0;
var_mainmodule = p1;
RET_LABEL:;
}
/* method objc#MExplicitCall#compile_callback_to_objc for (self: MExplicitCall, MModule, MModule) */
void nitc__objc___MExplicitCall___NitniCallback__compile_callback_to_objc(val* self, val* p0, val* p1) {
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
val* var10 /* : FromObjCCallContext */;
val* var11 /* : String */;
val* var_objc_signature /* var objc_signature: String */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : Sys */;
val* var16 /* : SignatureLength */;
val* var17 /* : Sys */;
val* var18 /* : FromObjCCallContext */;
val* var19 /* : String */;
val* var_ccall /* var ccall: String */;
val* var20 /* : CFunction */;
val* var_fc /* var fc: CFunction */;
val* var21 /* : Template */;
val* var23 /* : Template */;
val* var24 /* : nullable ObjCCompilationUnit */;
val* var26 /* : nullable ObjCCompilationUnit */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 194);
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
var10 = nitc__objc___core__Sys___from_objc_call_context(var9);
}
{
var11 = nitc__nitni_utilities___MMethod___build_csignature(var_mproperty, var4, var_mainmodule, ((val*)NULL), var8, var10);
}
var_objc_signature = var11;
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
var18 = nitc__objc___core__Sys___from_objc_call_context(var17);
}
{
var19 = nitc__nitni_utilities___MMethod___build_ccall(var_mproperty, var12, var_mainmodule, ((val*)NULL), var16, var18, ((val*)NULL));
}
var_ccall = var19;
var20 = NEW_nitc__CFunction(&type_nitc__CFunction);
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_nitc__c_tools__CFunction__signature_61d]))(var20, var_objc_signature); /* signature= on <var20:CFunction>*/
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
{ /* Inline objc#MModule#objc_file (var_mmodule) on <var_mmodule:MModule> */
var26 = var_mmodule->attrs[COLOR_nitc__objc__MModule___objc_file].val; /* _objc_file on <var_mmodule:MModule> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (var24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 200);
fatal_exit(1);
} else {
nitc___nitc__CCompilationUnit___add_local_function(var24, var_fc); /* Direct call c_tools#CCompilationUnit#add_local_function on <var24:nullable ObjCCompilationUnit>*/
}
RET_LABEL:;
}
/* method objc#ObjCCallContext#name_mtype for (self: ObjCCallContext, MType): String */
val* nitc__objc___nitc__objc__ObjCCallContext___nitc__nitni_utilities__CallContext__name_mtype(val* self, val* p0) {
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
/* <var_ftype:nullable ForeignType> isa ForeignObjCType */
cltype7 = type_nitc__ForeignObjCType.color;
idtype8 = type_nitc__ForeignObjCType.id;
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
{ /* Inline objc#ForeignObjCType#objc_type (var_ftype) on <var_ftype:nullable ForeignType(ForeignObjCType)> */
var11 = var_ftype->attrs[COLOR_nitc__objc__ForeignObjCType___objc_type].val; /* _objc_type on <var_ftype:nullable ForeignType(ForeignObjCType)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _objc_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__objc, 181);
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
/* method objc#FromObjCCallContext#cast_to for (self: FromObjCCallContext, MType, String): String */
val* nitc__objc___nitc__objc__FromObjCCallContext___nitc__nitni_utilities__CallContext__cast_to(val* self, val* p0, val* p1) {
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
/* <var6:nullable ForeignType> isa ForeignObjCType */
cltype8 = type_nitc__ForeignObjCType.color;
idtype9 = type_nitc__ForeignObjCType.id;
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
var13 = "(__bridge void*)(";
var14 = core__abstract_text___CString___to_s_full(var13, 17l, 17l);
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
/* method objc#FromObjCCallContext#cast_from for (self: FromObjCCallContext, MType, String): String */
val* nitc__objc___nitc__objc__FromObjCCallContext___nitc__nitni_utilities__CallContext__cast_from(val* self, val* p0, val* p1) {
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
/* <var6:nullable ForeignType> isa ForeignObjCType */
cltype8 = type_nitc__ForeignObjCType.color;
idtype9 = type_nitc__ForeignObjCType.id;
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
var13 = "(__bridge ";
var14 = core__abstract_text___CString___to_s_full(var13, 10l, 10l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ")(";
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
var23 = nitc__objc___nitc__objc__ObjCCallContext___nitc__nitni_utilities__CallContext__name_mtype(self, var_mtype);
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
/* method objc#Sys#from_objc_call_context for (self: Sys): FromObjCCallContext */
val* nitc__objc___core__Sys___from_objc_call_context(val* self) {
val* var /* : FromObjCCallContext */;
static val* varonce;
static int varonce_guard;
val* var1 /* : FromObjCCallContext */;
val* var2 /* : FromObjCCallContext */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__objc__FromObjCCallContext(&type_nitc__objc__FromObjCCallContext);
{
{ /* Inline kernel#Object#init (var2) on <var2:FromObjCCallContext> */
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
