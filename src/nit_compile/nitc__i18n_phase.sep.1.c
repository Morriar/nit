#include "nitc__i18n_phase.sep.0.h"
/* method i18n_phase#I18NPhase#process_annotated_node for (self: I18NPhase, ANode, AAnnotation) */
void nitc__i18n_phase___nitc__i18n_phase__I18NPhase___nitc__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var10 /* : ToolContext */;
val* var11 /* : Location */;
val* var13 /* : Location */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : Message */;
val* var19 /* : AModuleName */;
val* var21 /* : AModuleName */;
val* var22 /* : TId */;
val* var24 /* : TId */;
val* var25 /* : String */;
val* var_domain /* var domain: String */;
val* var_lang /* var lang: nullable String */;
val* var26 /* : ANodes[AExpr] */;
val* var28 /* : ANodes[AExpr] */;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name;
short int var35 /* : Bool */;
val* var36 /* : ToolContext */;
val* var38 /* : ToolContext */;
val* var39 /* : ModelBuilder */;
val* var40 /* : nullable String */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : Location */;
val* var45 /* : Location */;
val* var46 /* : nullable SourceFile */;
val* var48 /* : nullable SourceFile */;
val* var49 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var_module_dir /* var module_dir: String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var_locale_dir /* var locale_dir: String */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var61 /* : nullable Error */;
val* var62 /* : nullable ANode */;
val* var64 /* : nullable ANode */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
val* var_amodule /* var amodule: AModule */;
val* var69 /* : StringFinder */;
val* var70 /* : ToolContext */;
val* var72 /* : ToolContext */;
val* var_vi /* var vi: StringFinder */;
val* var73 /* : Location */;
val* var75 /* : Location */;
val* var76 /* : nullable SourceFile */;
val* var78 /* : nullable SourceFile */;
val* var79 /* : String */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : String */;
val* var_module_name /* var module_name: String */;
val* var87 /* : String */;
val* var_pot_path /* var pot_path: String */;
val* var88 /* : HashMap[String, PObject] */;
val* var90 /* : HashMap[String, PObject] */;
val* var91 /* : RemovableCollection[nullable Object] */;
val* var92 /* : Array[nullable Object] */;
val* var_arr /* var arr: Array[PObject] */;
val* var93 /* : POFile */;
val* var_po /* var po: POFile */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
val* var99 /* : Array[PObject] */;
val* var101 /* : Array[PObject] */;
val* var_ /* var : Array[PObject] */;
val* var102 /* : IndexedIterator[nullable Object] */;
val* var_103 /* var : IndexedIterator[PObject] */;
short int var104 /* : Bool */;
val* var105 /* : nullable Object */;
val* var_i /* var i: PObject */;
val* var106 /* : String */;
val* var108 /* : String */;
val* var110 /* : String */;
val* var_lang_dir /* var lang_dir: String */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
val* var113 /* : nullable Error */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : String */;
val* var_messages_dir /* var messages_dir: String */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
val* var121 /* : nullable Error */;
val* var122 /* : String */;
val* var123 /* : LiteralVisitor */;
val* var124 /* : ToolContext */;
val* var126 /* : ToolContext */;
val* var_lit /* var lit: LiteralVisitor */;
var_nmodule = p0;
var_nat = p1;
{
var = nitc___nitc__AAnnotation___name(var_nat);
}
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "i18n";
var3 = core__abstract_text___CString___to_s_full(var2, 4l, 4l);
var1 = var3;
varonce = var1;
}
{
var4 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var1); /* == on <var:String>*/
}
var5 = !var4;
if (var5){
goto RET_LABEL;
} else {
}
/* <var_nmodule:ANode> isa AModuledecl */
cltype = type_nitc__AModuledecl.color;
idtype = type_nitc__AModuledecl.id;
if(cltype >= var_nmodule->type->table_size) {
var6 = 0;
} else {
var6 = var_nmodule->type->type_table[cltype] == idtype;
}
var7 = !var6;
if (var7){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:I18NPhase> */
var10 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:I18NPhase> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:ANode> */
var13 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:ANode> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "Error: The localized language can only be used on module declarations.";
var17 = core__abstract_text___CString___to_s_full(var16, 70l, 70l);
var15 = var17;
varonce14 = var15;
}
{
var18 = nitc___nitc__ToolContext___error(var8, var11, var15);
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AModuledecl#n_name (var_nmodule) on <var_nmodule:ANode(AModuledecl)> */
var21 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_nmodule:ANode(AModuledecl)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1149);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline parser_nodes#AModuleName#n_id (var19) on <var19:AModuleName> */
var24 = var19->attrs[COLOR_nitc__parser_nodes__AModuleName___n_id].val; /* _n_id on <var19:AModuleName> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2919);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nitc__lexer_work___Token___text(var22);
}
var_domain = var25;
var_lang = ((val*)NULL);
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_nat) on <var_nat:AAnnotation> */
var28 = var_nat->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_nat:AAnnotation> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var26);
}
{
{ /* Inline kernel#Int#> (var29,0l) on <var29:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var35 = var29 > 0l;
var30 = var35;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:I18NPhase> */
var38 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:I18NPhase> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = nitc__modelbuilder_base___ToolContext___modelbuilder(var36);
}
{
var40 = nitc__annotation___AAnnotation___arg_as_string(var_nat, var39);
}
var_lang = var40;
if (var_lang == NULL) {
var41 = 1; /* is null */
} else {
var41 = 0; /* arg is null but recv is not */
}
if (0) {
var42 = ((short int(*)(val* self, val* p0))(var_lang->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_lang, ((val*)NULL)); /* == on <var_lang:nullable String>*/
var41 = var42;
}
if (var41){
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:ANode(AModuledecl)> */
var45 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:ANode(AModuledecl)> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline location#Location#file (var43) on <var43:Location> */
var48 = var43->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var43:Location> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (var46 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 47);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var46) on <var46:nullable SourceFile> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var51 = var46->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var46:nullable SourceFile> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = core__file___String___dirname(var49);
}
{
var53 = core__file___String___realpath(var52);
}
var_module_dir = var53;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "languages";
var57 = core__abstract_text___CString___to_s_full(var56, 9l, 9l);
var55 = var57;
varonce54 = var55;
}
{
var58 = core__file___String____47d(var_module_dir, var55);
}
var_locale_dir = var58;
{
var59 = core__file___Text___file_exists(var_locale_dir);
}
var60 = !var59;
if (var60){
{
var61 = core__file___String___mkdir(var_locale_dir, ((val*)NULL));
}
} else {
}
{
{ /* Inline parser_nodes#ANode#parent (var_nmodule) on <var_nmodule:ANode(AModuledecl)> */
var64 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_nmodule:ANode(AModuledecl)> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
/* <var62:nullable ANode> isa AModule */
cltype66 = type_nitc__AModule.color;
idtype67 = type_nitc__AModule.id;
if(var62 == NULL) {
var65 = 0;
} else {
if(cltype66 >= var62->type->table_size) {
var65 = 0;
} else {
var65 = var62->type->type_table[cltype66] == idtype67;
}
}
if (unlikely(!var65)) {
var_class_name68 = var62 == NULL ? "null" : var62->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 52);
fatal_exit(1);
}
var_amodule = var62;
var69 = NEW_nitc__i18n_phase__StringFinder(&type_nitc__i18n_phase__StringFinder);
{
{ /* Inline phase#Phase#toolcontext (self) on <self:I18NPhase> */
var72 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:I18NPhase> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_nitc__i18n_phase__StringFinder__domain_61d]))(var69, var_domain); /* domain= on <var69:StringFinder>*/
}
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_nitc__i18n_phase__StringFinder__languages_location_61d]))(var69, var_locale_dir); /* languages_location= on <var69:StringFinder>*/
}
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_nitc__i18n_phase__StringFinder__toolcontext_61d]))(var69, var70); /* toolcontext= on <var69:StringFinder>*/
}
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_nitc__i18n_phase__StringFinder__amodule_61d]))(var69, var_amodule); /* amodule= on <var69:StringFinder>*/
}
{
((void(*)(val* self))(var69->class->vft[COLOR_core__kernel__Object__init]))(var69); /* init on <var69:StringFinder>*/
}
var_vi = var69;
{
nitc__i18n_phase___nitc__i18n_phase__StringFinder___nitc__parser_nodes__Visitor__enter_visit(var_vi, var_amodule); /* Direct call i18n_phase#StringFinder#enter_visit on <var_vi:StringFinder>*/
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:ANode(AModuledecl)> */
var75 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:ANode(AModuledecl)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline location#Location#file (var73) on <var73:Location> */
var78 = var73->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var73:Location> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (var76 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 57);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var76) on <var76:nullable SourceFile> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var81 = var76->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var76:nullable SourceFile> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = ".nit";
var85 = core__abstract_text___CString___to_s_full(var84, 4l, 4l);
var83 = var85;
varonce82 = var83;
}
{
var86 = ((val*(*)(val* self, val* p0))(var79->class->vft[COLOR_core__file__String__basename]))(var79, var83); /* basename on <var79:String>*/
}
var_module_name = var86;
{
var87 = core__file___String____47d(var_locale_dir, var_module_name);
}
var_pot_path = var87;
{
{ /* Inline i18n_phase#StringFinder#strings (var_vi) on <var_vi:StringFinder> */
var90 = var_vi->attrs[COLOR_nitc__i18n_phase__StringFinder___strings].val; /* _strings on <var_vi:StringFinder> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _strings");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 86);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = core___core__HashMap___core__abstract_collection__MapRead__values(var88);
}
{
var92 = core__array___Collection___to_a(var91);
}
var_arr = var92;
var93 = NEW_nitc__POFile(&type_nitc__POFile);
{
((void(*)(val* self, val* p0))(var93->class->vft[COLOR_nitc__i18n_phase__POFile__strings_61d]))(var93, var_arr); /* strings= on <var93:POFile>*/
}
{
((void(*)(val* self))(var93->class->vft[COLOR_core__kernel__Object__init]))(var93); /* init on <var93:POFile>*/
}
var_po = var93;
{
nitc___nitc__POFile___write_template(var_po, var_pot_path); /* Direct call i18n_phase#POFile#write_template on <var_po:POFile>*/
}
if (var_lang == NULL) {
var94 = 0; /* is null */
} else {
var94 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_lang,((val*)NULL)) on <var_lang:nullable String> */
var_other = ((val*)NULL);
{
var97 = ((short int(*)(val* self, val* p0))(var_lang->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_lang, var_other); /* == on <var_lang:nullable String(String)>*/
}
var98 = !var97;
var95 = var98;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
var94 = var95;
}
if (var94){
{
{ /* Inline i18n_phase#POFile#strings (var_po) on <var_po:POFile> */
var101 = var_po->attrs[COLOR_nitc__i18n_phase__POFile___strings].val; /* _strings on <var_po:POFile> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _strings");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 190);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
var_ = var99;
{
var102 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_103 = var102;
for(;;) {
{
var104 = ((short int(*)(val* self))((((long)var_103&3)?class_info[((long)var_103&3)]:var_103->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_103); /* is_ok on <var_103:IndexedIterator[PObject]>*/
}
if (var104){
} else {
goto BREAK_label;
}
{
var105 = ((val*(*)(val* self))((((long)var_103&3)?class_info[((long)var_103&3)]:var_103->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_103); /* item on <var_103:IndexedIterator[PObject]>*/
}
var_i = var105;
{
{ /* Inline i18n_phase#PObject#msgid (var_i) on <var_i:PObject> */
var108 = var_i->attrs[COLOR_nitc__i18n_phase__PObject___msgid].val; /* _msgid on <var_i:PObject> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msgid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 180);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline i18n_phase#PObject#msgstr= (var_i,var106) on <var_i:PObject> */
var_i->attrs[COLOR_nitc__i18n_phase__PObject___msgstr].val = var106; /* _msgstr on <var_i:PObject> */
RET_LABEL109:(void)0;
}
}
{
((void(*)(val* self))((((long)var_103&3)?class_info[((long)var_103&3)]:var_103->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_103); /* next on <var_103:IndexedIterator[PObject]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_103&3)?class_info[((long)var_103&3)]:var_103->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_103); /* finish on <var_103:IndexedIterator[PObject]>*/
}
{
var110 = core__file___String____47d(var_locale_dir, var_lang);
}
var_lang_dir = var110;
{
var111 = core__file___Text___file_exists(var_lang_dir);
}
var112 = !var111;
if (var112){
{
var113 = core__file___String___mkdir(var_lang_dir, ((val*)NULL));
}
} else {
}
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "LC_MESSAGES";
var117 = core__abstract_text___CString___to_s_full(var116, 11l, 11l);
var115 = var117;
varonce114 = var115;
}
{
var118 = core__file___String____47d(var_lang_dir, var115);
}
var_messages_dir = var118;
{
var119 = core__file___Text___file_exists(var_messages_dir);
}
var120 = !var119;
if (var120){
{
var121 = core__file___String___mkdir(var_messages_dir, ((val*)NULL));
}
} else {
}
{
var122 = core__file___String____47d(var_messages_dir, var_module_name);
}
{
nitc___nitc__POFile___core__file__Writable__write_to_file(var_po, var122); /* Direct call i18n_phase#POFile#write_to_file on <var_po:POFile>*/
}
} else {
}
var123 = NEW_nitc__literal__LiteralVisitor(&type_nitc__literal__LiteralVisitor);
{
{ /* Inline phase#Phase#toolcontext (self) on <self:I18NPhase> */
var126 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:I18NPhase> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var123->class->vft[COLOR_nitc__literal__LiteralVisitor__toolcontext_61d]))(var123, var124); /* toolcontext= on <var123:LiteralVisitor>*/
}
{
((void(*)(val* self))(var123->class->vft[COLOR_core__kernel__Object__init]))(var123); /* init on <var123:LiteralVisitor>*/
}
var_lit = var123;
{
nitc___nitc__Visitor___enter_visit(var_lit, var_amodule); /* Direct call parser_nodes#Visitor#enter_visit on <var_lit:LiteralVisitor>*/
}
RET_LABEL:;
}
/* method i18n_phase#StringFinder#strings for (self: StringFinder): HashMap[String, PObject] */
val* nitc__i18n_phase___nitc__i18n_phase__StringFinder___strings(val* self) {
val* var /* : HashMap[String, PObject] */;
val* var1 /* : HashMap[String, PObject] */;
var1 = self->attrs[COLOR_nitc__i18n_phase__StringFinder___strings].val; /* _strings on <self:StringFinder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _strings");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method i18n_phase#StringFinder#domain for (self: StringFinder): String */
val* nitc__i18n_phase___nitc__i18n_phase__StringFinder___domain(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__i18n_phase__StringFinder___domain].val; /* _domain on <self:StringFinder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _domain");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 89);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method i18n_phase#StringFinder#domain= for (self: StringFinder, String) */
void nitc__i18n_phase___nitc__i18n_phase__StringFinder___domain_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__i18n_phase__StringFinder___domain].val = p0; /* _domain on <self:StringFinder> */
RET_LABEL:;
}
/* method i18n_phase#StringFinder#languages_location for (self: StringFinder): String */
val* nitc__i18n_phase___nitc__i18n_phase__StringFinder___languages_location(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__i18n_phase__StringFinder___languages_location].val; /* _languages_location on <self:StringFinder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _languages_location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 92);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method i18n_phase#StringFinder#languages_location= for (self: StringFinder, String) */
void nitc__i18n_phase___nitc__i18n_phase__StringFinder___languages_location_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__i18n_phase__StringFinder___languages_location].val = p0; /* _languages_location on <self:StringFinder> */
RET_LABEL:;
}
/* method i18n_phase#StringFinder#toolcontext for (self: StringFinder): ToolContext */
val* nitc__i18n_phase___nitc__i18n_phase__StringFinder___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__i18n_phase__StringFinder___toolcontext].val; /* _toolcontext on <self:StringFinder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 95);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method i18n_phase#StringFinder#toolcontext= for (self: StringFinder, ToolContext) */
void nitc__i18n_phase___nitc__i18n_phase__StringFinder___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__i18n_phase__StringFinder___toolcontext].val = p0; /* _toolcontext on <self:StringFinder> */
RET_LABEL:;
}
/* method i18n_phase#StringFinder#amodule for (self: StringFinder): AModule */
val* nitc__i18n_phase___nitc__i18n_phase__StringFinder___amodule(val* self) {
val* var /* : AModule */;
val* var1 /* : AModule */;
var1 = self->attrs[COLOR_nitc__i18n_phase__StringFinder___amodule].val; /* _amodule on <self:StringFinder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _amodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 98);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method i18n_phase#StringFinder#amodule= for (self: StringFinder, AModule) */
void nitc__i18n_phase___nitc__i18n_phase__StringFinder___amodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__i18n_phase__StringFinder___amodule].val = p0; /* _amodule on <self:StringFinder> */
RET_LABEL:;
}
/* method i18n_phase#StringFinder#visit for (self: StringFinder, ANode) */
void nitc__i18n_phase___nitc__i18n_phase__StringFinder___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__i18n_phase__ANode__accept_string_finder]))(var_n, self); /* accept_string_finder on <var_n:ANode>*/
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
RET_LABEL:;
}
/* method i18n_phase#StringFinder#enter_visit for (self: StringFinder, nullable ANode) */
void nitc__i18n_phase___nitc__i18n_phase__StringFinder___nitc__parser_nodes__Visitor__enter_visit(val* self, val* p0) {
val* var_e /* var e: nullable ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
var_e = p0;
/* <var_e:nullable ANode> isa AAnnotation */
cltype = type_nitc__AAnnotation.color;
idtype = type_nitc__AAnnotation.id;
if(var_e == NULL) {
var = 0;
} else {
if(cltype >= var_e->type->table_size) {
var = 0;
} else {
var = var_e->type->type_table[cltype] == idtype;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__i18n_phase___nitc__i18n_phase__StringFinder___nitc__parser_nodes__Visitor__enter_visit]))(self, p0); /* enter_visit on <self:StringFinder>*/
}
RET_LABEL:;
}
/* method i18n_phase#StringFinder#add_string for (self: StringFinder, String, Location) */
void nitc__i18n_phase___nitc__i18n_phase__StringFinder___add_string(val* self, val* p0, val* p1) {
val* var_s /* var s: String */;
val* var_loc /* var loc: Location */;
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
val* var17 /* : AModule */;
val* var19 /* : AModule */;
val* var20 /* : nullable MModule */;
val* var22 /* : nullable MModule */;
val* var23 /* : nullable MGroup */;
val* var25 /* : nullable MGroup */;
val* var26 /* : String */;
val* var28 /* : String */;
val* var29 /* : AModule */;
val* var31 /* : AModule */;
val* var32 /* : nullable MModule */;
val* var34 /* : nullable MModule */;
val* var35 /* : String */;
val* var37 /* : String */;
long var38 /* : Int */;
long var40 /* : Int */;
val* var41 /* : String */;
long var42 /* : Int */;
long var44 /* : Int */;
val* var45 /* : String */;
long var46 /* : Int */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var_locstr /* var locstr: String */;
val* var51 /* : HashMap[String, PObject] */;
val* var53 /* : HashMap[String, PObject] */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : PObject */;
val* var57 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var_po /* var po: PObject */;
val* var62 /* : HashMap[String, PObject] */;
val* var64 /* : HashMap[String, PObject] */;
val* var65 /* : HashMap[String, PObject] */;
val* var67 /* : HashMap[String, PObject] */;
val* var68 /* : nullable Object */;
val* var69 /* : Array[String] */;
val* var71 /* : Array[String] */;
var_s = p0;
var_loc = p1;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "::";
var4 = core__abstract_text___CString___to_s_full(var3, 2l, 2l);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[1]=var2;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " ";
var8 = core__abstract_text___CString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var)->values[3]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "--";
var12 = core__abstract_text___CString___to_s_full(var11, 2l, 2l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var)->values[5]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ":";
var16 = core__abstract_text___CString___to_s_full(var15, 1l, 1l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var)->values[7]=var14;
} else {
var = varonce;
varonce = NULL;
}
{
{ /* Inline i18n_phase#StringFinder#amodule (self) on <self:StringFinder> */
var19 = self->attrs[COLOR_nitc__i18n_phase__StringFinder___amodule].val; /* _amodule on <self:StringFinder> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _amodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 98);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule (var17) on <var17:AModule> */
var22 = var17->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var17:AModule> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 116);
fatal_exit(1);
} else {
{ /* Inline mmodule#MModule#mgroup (var20) on <var20:nullable MModule> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 80);
fatal_exit(1);
}
var25 = var20->attrs[COLOR_nitc__mmodule__MModule___mgroup].val; /* _mgroup on <var20:nullable MModule> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 116);
fatal_exit(1);
} else {
{ /* Inline mpackage#MGroup#name (var23) on <var23:nullable MGroup> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 70);
fatal_exit(1);
}
var28 = var23->attrs[COLOR_nitc__mpackage__MGroup___name].val; /* _name on <var23:nullable MGroup> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 70);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
((struct instance_core__NativeArray*)var)->values[0]=var26;
{
{ /* Inline i18n_phase#StringFinder#amodule (self) on <self:StringFinder> */
var31 = self->attrs[COLOR_nitc__i18n_phase__StringFinder___amodule].val; /* _amodule on <self:StringFinder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _amodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 98);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline loader#AModule#mmodule (var29) on <var29:AModule> */
var34 = var29->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var29:AModule> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (var32 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 116);
fatal_exit(1);
} else {
{ /* Inline mmodule#MModule#name (var32) on <var32:nullable MModule> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var37 = var32->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var32:nullable MModule> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
((struct instance_core__NativeArray*)var)->values[2]=var35;
{
{ /* Inline location#Location#line_start (var_loc) on <var_loc:Location> */
var40 = var_loc->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var_loc:Location> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var41 = core__flat___Int___core__abstract_text__Object__to_s(var38);
((struct instance_core__NativeArray*)var)->values[4]=var41;
{
{ /* Inline location#Location#column_start (var_loc) on <var_loc:Location> */
var44 = var_loc->attrs[COLOR_nitc__location__Location___column_start].l; /* _column_start on <var_loc:Location> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var45 = core__flat___Int___core__abstract_text__Object__to_s(var42);
((struct instance_core__NativeArray*)var)->values[6]=var45;
{
{ /* Inline location#Location#column_end (var_loc) on <var_loc:Location> */
var48 = var_loc->attrs[COLOR_nitc__location__Location___column_end].l; /* _column_end on <var_loc:Location> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var49 = core__flat___Int___core__abstract_text__Object__to_s(var46);
((struct instance_core__NativeArray*)var)->values[8]=var49;
{
var50 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
var_locstr = var50;
{
{ /* Inline i18n_phase#StringFinder#strings (self) on <self:StringFinder> */
var53 = self->attrs[COLOR_nitc__i18n_phase__StringFinder___strings].val; /* _strings on <self:StringFinder> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _strings");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 86);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var51, var_s);
}
var55 = !var54;
if (var55){
var56 = NEW_nitc__PObject(&type_nitc__PObject);
var57 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var57, 1l); /* Direct call array#Array#with_capacity on <var57:Array[String]>*/
}
var_ = var57;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_locstr); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "";
var61 = core__abstract_text___CString___to_s_full(var60, 0l, 0l);
var59 = var61;
varonce58 = var59;
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_nitc__i18n_phase__PObject__locations_61d]))(var56, var_); /* locations= on <var56:PObject>*/
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_nitc__i18n_phase__PObject__msgid_61d]))(var56, var_s); /* msgid= on <var56:PObject>*/
}
{
((void(*)(val* self, val* p0))(var56->class->vft[COLOR_nitc__i18n_phase__PObject__msgstr_61d]))(var56, var59); /* msgstr= on <var56:PObject>*/
}
{
((void(*)(val* self))(var56->class->vft[COLOR_core__kernel__Object__init]))(var56); /* init on <var56:PObject>*/
}
var_po = var56;
{
{ /* Inline i18n_phase#StringFinder#strings (self) on <self:StringFinder> */
var64 = self->attrs[COLOR_nitc__i18n_phase__StringFinder___strings].val; /* _strings on <self:StringFinder> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _strings");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 86);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var62, var_s, var_po); /* Direct call hash_collection#HashMap#[]= on <var62:HashMap[String, PObject]>*/
}
} else {
{
{ /* Inline i18n_phase#StringFinder#strings (self) on <self:StringFinder> */
var67 = self->attrs[COLOR_nitc__i18n_phase__StringFinder___strings].val; /* _strings on <self:StringFinder> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _strings");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 86);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var65, var_s);
}
{
{ /* Inline i18n_phase#PObject#locations (var68) on <var68:nullable Object(PObject)> */
var71 = var68->attrs[COLOR_nitc__i18n_phase__PObject___locations].val; /* _locations on <var68:nullable Object(PObject)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _locations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 178);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var69, var_locstr); /* Direct call array#AbstractArray#push on <var69:Array[String]>*/
}
}
RET_LABEL:;
}
/* method i18n_phase#StringFinder#init for (self: StringFinder) */
void nitc__i18n_phase___nitc__i18n_phase__StringFinder___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__i18n_phase___nitc__i18n_phase__StringFinder___core__kernel__Object__init]))(self); /* init on <self:StringFinder>*/
}
RET_LABEL:;
}
/* method i18n_phase#ANode#accept_string_finder for (self: ANode, StringFinder) */
void nitc__i18n_phase___ANode___accept_string_finder(val* self, val* p0) {
val* var_v /* var v: StringFinder */;
var_v = p0;
RET_LABEL:;
}
/* method i18n_phase#AStringExpr#accept_string_finder for (self: AStringExpr, StringFinder) */
void nitc__i18n_phase___AStringExpr___ANode__accept_string_finder(val* self, val* p0) {
val* var_v /* var v: StringFinder */;
val* var /* : String */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var_str /* var str: String */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
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
val* var_code /* var code: String */;
val* var28 /* : ToolContext */;
val* var30 /* : ToolContext */;
val* var31 /* : AExpr */;
val* var_parse /* var parse: AExpr */;
val* var32 /* : Location */;
val* var34 /* : Location */;
var_v = p0;
{
{ /* Inline literal#AStringFormExpr#value (self) on <self:AStringExpr> */
var2 = self->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <self:AStringExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 201);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__i18n_phase___core__Text___escape_to_gettext(var);
}
var_str = var3;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "\"";
var8 = core__abstract_text___CString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "\".get_translation(\"";
var12 = core__abstract_text___CString___to_s_full(var11, 19l, 19l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "\", \"";
var16 = core__abstract_text___CString___to_s_full(var15, 4l, 4l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var4)->values[4]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "\")";
var20 = core__abstract_text___CString___to_s_full(var19, 2l, 2l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var4)->values[6]=var18;
} else {
var4 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var4)->values[1]=var_str;
{
{ /* Inline i18n_phase#StringFinder#domain (var_v) on <var_v:StringFinder> */
var23 = var_v->attrs[COLOR_nitc__i18n_phase__StringFinder___domain].val; /* _domain on <var_v:StringFinder> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _domain");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 89);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
((struct instance_core__NativeArray*)var4)->values[3]=var21;
{
{ /* Inline i18n_phase#StringFinder#languages_location (var_v) on <var_v:StringFinder> */
var26 = var_v->attrs[COLOR_nitc__i18n_phase__StringFinder___languages_location].val; /* _languages_location on <var_v:StringFinder> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _languages_location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 92);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
((struct instance_core__NativeArray*)var4)->values[5]=var24;
{
var27 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
var_code = var27;
{
{ /* Inline i18n_phase#StringFinder#toolcontext (var_v) on <var_v:StringFinder> */
var30 = var_v->attrs[COLOR_nitc__i18n_phase__StringFinder___toolcontext].val; /* _toolcontext on <var_v:StringFinder> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 95);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = nitc__parser_util___ToolContext___parse_expr(var28, var_code);
}
var_parse = var31;
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_parse); /* Direct call transform#AExpr#replace_with on <self:AStringExpr>*/
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AStringExpr> */
var34 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AStringExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
nitc__i18n_phase___nitc__i18n_phase__StringFinder___add_string(var_v, var_str, var32); /* Direct call i18n_phase#StringFinder#add_string on <var_v:StringFinder>*/
}
RET_LABEL:;
}
/* method i18n_phase#ASuperstringExpr#accept_string_finder for (self: ASuperstringExpr, StringFinder) */
void nitc__i18n_phase___ASuperstringExpr___ANode__accept_string_finder(val* self, val* p0) {
val* var_v /* var v: StringFinder */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var_fmt /* var fmt: String */;
val* var3 /* : Array[AExpr] */;
val* var_exprs /* var exprs: Array[AExpr] */;
val* var4 /* : ANodes[AExpr] */;
val* var6 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var7 /* : Iterator[ANode] */;
val* var_8 /* var : Iterator[AExpr] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_i /* var i: AExpr */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var_14 /* var : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
short int var_18 /* var : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
val* var25 /* : String */;
val* var27 /* : String */;
val* var_str /* var str: String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : Text */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : Text */;
long var43 /* : Int */;
long var45 /* : Int */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name;
long var51 /* : Int */;
val* var52 /* : String */;
val* var53 /* : Text */;
val* var54 /* : String */;
val* var55 /* : Location */;
val* var57 /* : Location */;
val* var59 /* : NativeArray[String] */;
static val* varonce58;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
val* var76 /* : String */;
val* var78 /* : String */;
val* var79 /* : String */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var_code /* var code: String */;
val* var83 /* : ToolContext */;
val* var85 /* : ToolContext */;
val* var86 /* : AExpr */;
val* var_parse /* var parse: AExpr */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
short int var90 /* : Bool */;
val* var91 /* : ToolContext */;
val* var93 /* : ToolContext */;
val* var94 /* : Location */;
val* var96 /* : Location */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : Message */;
val* var102 /* : AExprs */;
val* var104 /* : AExprs */;
val* var105 /* : ANodes[AExpr] */;
val* var107 /* : ANodes[AExpr] */;
val* var_parse_exprs /* var parse_exprs: ANodes[AExpr] */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = core__abstract_text___CString___to_s_full(var1, 0l, 0l);
var = var2;
varonce = var;
}
var_fmt = var;
var3 = NEW_core__Array(&type_core__Array__nitc__AExpr);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[AExpr]>*/
}
var_exprs = var3;
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var6 = self->attrs[COLOR_nitc__parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2645);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_ = var4;
{
var7 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[AExpr]>*/
}
if (var9){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[AExpr]>*/
}
var_i = var10;
/* <var_i:AExpr> isa AStartStringExpr */
cltype = type_nitc__AStartStringExpr.color;
idtype = type_nitc__AStartStringExpr.id;
if(cltype >= var_i->type->table_size) {
var13 = 0;
} else {
var13 = var_i->type->type_table[cltype] == idtype;
}
var_14 = var13;
if (var13){
var12 = var_14;
} else {
/* <var_i:AExpr> isa AEndStringExpr */
cltype16 = type_nitc__AEndStringExpr.color;
idtype17 = type_nitc__AEndStringExpr.id;
if(cltype16 >= var_i->type->table_size) {
var15 = 0;
} else {
var15 = var_i->type->type_table[cltype16] == idtype17;
}
var12 = var15;
}
var_18 = var12;
if (var12){
var11 = var_18;
} else {
/* <var_i:AExpr> isa AMidStringExpr */
cltype20 = type_nitc__AMidStringExpr.color;
idtype21 = type_nitc__AMidStringExpr.id;
if(cltype20 >= var_i->type->table_size) {
var19 = 0;
} else {
var19 = var_i->type->type_table[cltype20] == idtype21;
}
var11 = var19;
}
if (var11){
/* <var_i:AExpr> isa AStringFormExpr */
cltype23 = type_nitc__AStringFormExpr.color;
idtype24 = type_nitc__AStringFormExpr.id;
if(cltype23 >= var_i->type->table_size) {
var22 = 0;
} else {
var22 = var_i->type->type_table[cltype23] == idtype24;
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 148);
fatal_exit(1);
}
{
{ /* Inline literal#AStringFormExpr#value (var_i) on <var_i:AExpr(AStringFormExpr)> */
var27 = var_i->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <var_i:AExpr(AStringFormExpr)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 201);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_str = var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "%";
var31 = core__abstract_text___CString___to_s_full(var30, 1l, 1l);
var29 = var31;
varonce28 = var29;
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "%%";
var35 = core__abstract_text___CString___to_s_full(var34, 2l, 2l);
var33 = var35;
varonce32 = var33;
}
{
var36 = core__string_search___Text___replace(var_str, var29, var33);
}
{
var37 = ((val*(*)(val* self, val* p0))(var_fmt->class->vft[COLOR_core__abstract_text__Text___43d]))(var_fmt, var36); /* + on <var_fmt:String>*/
}
var_fmt = var37;
} else {
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "%";
var41 = core__abstract_text___CString___to_s_full(var40, 1l, 1l);
var39 = var41;
varonce38 = var39;
}
{
var42 = ((val*(*)(val* self, val* p0))(var_fmt->class->vft[COLOR_core__abstract_text__Text___43d]))(var_fmt, var39); /* + on <var_fmt:String>*/
}
var_fmt = var42;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_exprs, var_i); /* Direct call array#AbstractArray#push on <var_exprs:Array[AExpr]>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_exprs) on <var_exprs:Array[AExpr]> */
var45 = var_exprs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_exprs:Array[AExpr]> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var48 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var51 = var43 - 1l;
var46 = var51;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
var52 = core__flat___Int___core__abstract_text__Object__to_s(var46);
}
{
var53 = ((val*(*)(val* self, val* p0))(var_fmt->class->vft[COLOR_core__abstract_text__Text___43d]))(var_fmt, var52); /* + on <var_fmt:String>*/
}
var_fmt = var53;
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[AExpr]>*/
}
{
var54 = nitc__i18n_phase___core__Text___escape_to_gettext(var_fmt);
}
var_fmt = var54;
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ASuperstringExpr> */
var57 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:ASuperstringExpr> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
nitc__i18n_phase___nitc__i18n_phase__StringFinder___add_string(var_v, var_fmt, var55); /* Direct call i18n_phase#StringFinder#add_string on <var_v:StringFinder>*/
}
if (unlikely(varonce58==NULL)) {
var59 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "\"";
var63 = core__abstract_text___CString___to_s_full(var62, 1l, 1l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var59)->values[0]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "\".get_translation(\"";
var67 = core__abstract_text___CString___to_s_full(var66, 19l, 19l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var59)->values[2]=var65;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "\", \"";
var71 = core__abstract_text___CString___to_s_full(var70, 4l, 4l);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var59)->values[4]=var69;
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "\").format()";
var75 = core__abstract_text___CString___to_s_full(var74, 11l, 11l);
var73 = var75;
varonce72 = var73;
}
((struct instance_core__NativeArray*)var59)->values[6]=var73;
} else {
var59 = varonce58;
varonce58 = NULL;
}
((struct instance_core__NativeArray*)var59)->values[1]=var_fmt;
{
{ /* Inline i18n_phase#StringFinder#domain (var_v) on <var_v:StringFinder> */
var78 = var_v->attrs[COLOR_nitc__i18n_phase__StringFinder___domain].val; /* _domain on <var_v:StringFinder> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _domain");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 89);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
((struct instance_core__NativeArray*)var59)->values[3]=var76;
{
{ /* Inline i18n_phase#StringFinder#languages_location (var_v) on <var_v:StringFinder> */
var81 = var_v->attrs[COLOR_nitc__i18n_phase__StringFinder___languages_location].val; /* _languages_location on <var_v:StringFinder> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _languages_location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 92);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
((struct instance_core__NativeArray*)var59)->values[5]=var79;
{
var82 = ((val*(*)(val* self))(var59->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var59); /* native_to_s on <var59:NativeArray[String]>*/
}
varonce58 = var59;
var_code = var82;
{
{ /* Inline i18n_phase#StringFinder#toolcontext (var_v) on <var_v:StringFinder> */
var85 = var_v->attrs[COLOR_nitc__i18n_phase__StringFinder___toolcontext].val; /* _toolcontext on <var_v:StringFinder> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 95);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = nitc__parser_util___ToolContext___parse_expr(var83, var_code);
}
var_parse = var86;
/* <var_parse:AExpr> isa ACallExpr */
cltype88 = type_nitc__ACallExpr.color;
idtype89 = type_nitc__ACallExpr.id;
if(cltype88 >= var_parse->type->table_size) {
var87 = 0;
} else {
var87 = var_parse->type->type_table[cltype88] == idtype89;
}
var90 = !var87;
if (var90){
{
{ /* Inline i18n_phase#StringFinder#toolcontext (var_v) on <var_v:StringFinder> */
var93 = var_v->attrs[COLOR_nitc__i18n_phase__StringFinder___toolcontext].val; /* _toolcontext on <var_v:StringFinder> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 95);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ASuperstringExpr> */
var96 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:ASuperstringExpr> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "Fatal error in i18n annotation, the parsed superstring could not be generated properly";
var100 = core__abstract_text___CString___to_s_full(var99, 86l, 86l);
var98 = var100;
varonce97 = var98;
}
{
var101 = nitc___nitc__ToolContext___error(var91, var94, var98);
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (var_parse) on <var_parse:AExpr(ACallExpr)> */
var104 = var_parse->attrs[COLOR_nitc__parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <var_parse:AExpr(ACallExpr)> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2380);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var102) on <var102:AExprs> */
var107 = var102->attrs[COLOR_nitc__parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var102:AExprs> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2790);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
var_parse_exprs = var105;
{
core___core__SimpleCollection___add_all(var_parse_exprs, var_exprs); /* Direct call abstract_collection#SimpleCollection#add_all on <var_parse_exprs:ANodes[AExpr]>*/
}
{
nitc__transform___AExpr___nitc__parser_nodes__ANode__replace_with(self, var_parse); /* Direct call transform#AExpr#replace_with on <self:ASuperstringExpr>*/
}
RET_LABEL:;
}
/* method i18n_phase#PObject#locations for (self: PObject): Array[String] */
val* nitc___nitc__PObject___locations(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__i18n_phase__PObject___locations].val; /* _locations on <self:PObject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _locations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 178);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method i18n_phase#PObject#locations= for (self: PObject, Array[String]) */
void nitc___nitc__PObject___locations_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__i18n_phase__PObject___locations].val = p0; /* _locations on <self:PObject> */
RET_LABEL:;
}
/* method i18n_phase#PObject#msgid for (self: PObject): String */
val* nitc___nitc__PObject___msgid(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__i18n_phase__PObject___msgid].val; /* _msgid on <self:PObject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msgid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 180);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method i18n_phase#PObject#msgid= for (self: PObject, String) */
void nitc___nitc__PObject___msgid_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__i18n_phase__PObject___msgid].val = p0; /* _msgid on <self:PObject> */
RET_LABEL:;
}
/* method i18n_phase#PObject#msgstr for (self: PObject): String */
val* nitc___nitc__PObject___msgstr(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__i18n_phase__PObject___msgstr].val; /* _msgstr on <self:PObject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msgstr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 182);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method i18n_phase#PObject#msgstr= for (self: PObject, String) */
void nitc___nitc__PObject___msgstr_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__i18n_phase__PObject___msgstr].val = p0; /* _msgstr on <self:PObject> */
RET_LABEL:;
}
/* method i18n_phase#PObject#init for (self: PObject) */
void nitc___nitc__PObject___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__PObject___core__kernel__Object__init]))(self); /* init on <self:PObject>*/
}
RET_LABEL:;
}
/* method i18n_phase#POFile#strings for (self: POFile): Array[PObject] */
val* nitc___nitc__POFile___strings(val* self) {
val* var /* : Array[PObject] */;
val* var1 /* : Array[PObject] */;
var1 = self->attrs[COLOR_nitc__i18n_phase__POFile___strings].val; /* _strings on <self:POFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _strings");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 190);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method i18n_phase#POFile#strings= for (self: POFile, Array[PObject]) */
void nitc___nitc__POFile___strings_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__i18n_phase__POFile___strings].val = p0; /* _strings on <self:POFile> */
RET_LABEL:;
}
/* method i18n_phase#POFile#write_to_file for (self: POFile, String) */
void nitc___nitc__POFile___core__file__Writable__write_to_file(val* self, val* p0) {
val* var_path /* var path: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : Text */;
var_path = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = ".po";
var2 = core__abstract_text___CString___to_s_full(var1, 3l, 3l);
var = var2;
varonce = var;
}
{
var3 = core___core__Text___has_suffix(var_path, var);
}
var4 = !var3;
if (var4){
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = ".po";
var8 = core__abstract_text___CString___to_s_full(var7, 3l, 3l);
var6 = var8;
varonce5 = var6;
}
{
var9 = ((val*(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__abstract_text__Text___43d]))(var_path, var6); /* + on <var_path:String>*/
}
var_path = var9;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc___nitc__POFile___core__file__Writable__write_to_file]))(self, var_path); /* write_to_file on <self:POFile>*/
}
RET_LABEL:;
}
/* method i18n_phase#POFile#write_to for (self: POFile, Writer) */
void nitc___nitc__POFile___core__stream__Writable__write_to(val* self, val* p0) {
val* var_ofs /* var ofs: Writer */;
val* var /* : Array[PObject] */;
val* var2 /* : Array[PObject] */;
val* var_ /* var : Array[PObject] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[PObject] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_i /* var i: PObject */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : Array[String] */;
val* var18 /* : Array[String] */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var26 /* : NativeArray[String] */;
static val* varonce25;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var40 /* : NativeArray[String] */;
static val* varonce39;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
var_ofs = p0;
{
{ /* Inline i18n_phase#POFile#strings (self) on <self:POFile> */
var2 = self->attrs[COLOR_nitc__i18n_phase__POFile___strings].val; /* _strings on <self:POFile> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _strings");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 190);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[PObject]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[PObject]>*/
}
var_i = var6;
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "#: ";
var11 = core__abstract_text___CString___to_s_full(var10, 4l, 3l);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "\n";
var15 = core__abstract_text___CString___to_s_full(var14, 1l, 1l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var7)->values[2]=var13;
} else {
var7 = varonce;
varonce = NULL;
}
{
{ /* Inline i18n_phase#PObject#locations (var_i) on <var_i:PObject> */
var18 = var_i->attrs[COLOR_nitc__i18n_phase__PObject___locations].val; /* _locations on <var_i:PObject> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _locations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 178);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = ", ";
var22 = core__abstract_text___CString___to_s_full(var21, 2l, 2l);
var20 = var22;
varonce19 = var20;
}
{
var23 = core__abstract_text___Collection___join(var16, var20, ((val*)NULL));
}
((struct instance_core__NativeArray*)var7)->values[1]=var23;
{
var24 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
((void(*)(val* self, val* p0))(var_ofs->class->vft[COLOR_core__stream__Writer__write]))(var_ofs, var24); /* write on <var_ofs:Writer>*/
}
if (unlikely(varonce25==NULL)) {
var26 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "msgid \"";
var30 = core__abstract_text___CString___to_s_full(var29, 7l, 7l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[0]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "\"\n";
var34 = core__abstract_text___CString___to_s_full(var33, 2l, 2l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var26)->values[2]=var32;
} else {
var26 = varonce25;
varonce25 = NULL;
}
{
{ /* Inline i18n_phase#PObject#msgid (var_i) on <var_i:PObject> */
var37 = var_i->attrs[COLOR_nitc__i18n_phase__PObject___msgid].val; /* _msgid on <var_i:PObject> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msgid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 180);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
((struct instance_core__NativeArray*)var26)->values[1]=var35;
{
var38 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce25 = var26;
{
((void(*)(val* self, val* p0))(var_ofs->class->vft[COLOR_core__stream__Writer__write]))(var_ofs, var38); /* write on <var_ofs:Writer>*/
}
if (unlikely(varonce39==NULL)) {
var40 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "msgstr \"";
var44 = core__abstract_text___CString___to_s_full(var43, 8l, 8l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "\"\n\n";
var48 = core__abstract_text___CString___to_s_full(var47, 3l, 3l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var40)->values[2]=var46;
} else {
var40 = varonce39;
varonce39 = NULL;
}
{
{ /* Inline i18n_phase#PObject#msgstr (var_i) on <var_i:PObject> */
var51 = var_i->attrs[COLOR_nitc__i18n_phase__PObject___msgstr].val; /* _msgstr on <var_i:PObject> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msgstr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__i18n_phase, 182);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
((struct instance_core__NativeArray*)var40)->values[1]=var49;
{
var52 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
{
((void(*)(val* self, val* p0))(var_ofs->class->vft[COLOR_core__stream__Writer__write]))(var_ofs, var52); /* write on <var_ofs:Writer>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[PObject]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[PObject]>*/
}
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "# Generated file, do not modify\n";
var56 = core__abstract_text___CString___to_s_full(var55, 32l, 32l);
var54 = var56;
varonce53 = var54;
}
{
((void(*)(val* self, val* p0))(var_ofs->class->vft[COLOR_core__stream__Writer__write]))(var_ofs, var54); /* write on <var_ofs:Writer>*/
}
RET_LABEL:;
}
/* method i18n_phase#POFile#write_template for (self: POFile, String) */
void nitc___nitc__POFile___write_template(val* self, val* p0) {
val* var_path /* var path: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : Text */;
val* var10 /* : FileWriter */;
val* var_f /* var f: FileWriter */;
var_path = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = ".pot";
var2 = core__abstract_text___CString___to_s_full(var1, 4l, 4l);
var = var2;
varonce = var;
}
{
var3 = core___core__Text___has_suffix(var_path, var);
}
var4 = !var3;
if (var4){
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = ".pot";
var8 = core__abstract_text___CString___to_s_full(var7, 4l, 4l);
var6 = var8;
varonce5 = var6;
}
{
var9 = ((val*(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__abstract_text__Text___43d]))(var_path, var6); /* + on <var_path:String>*/
}
var_path = var9;
} else {
}
var10 = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var10, var_path); /* Direct call file#FileWriter#open on <var10:FileWriter>*/
}
var_f = var10;
{
nitc___nitc__POFile___core__stream__Writable__write_to(self, var_f); /* Direct call i18n_phase#POFile#write_to on <self:POFile>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_f); /* Direct call file#FileWriter#close on <var_f:FileWriter>*/
}
RET_LABEL:;
}
/* method i18n_phase#POFile#init for (self: POFile) */
void nitc___nitc__POFile___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__POFile___core__kernel__Object__init]))(self); /* init on <self:POFile>*/
}
RET_LABEL:;
}
/* method i18n_phase#Text#escape_to_gettext for (self: Text): String */
val* nitc__i18n_phase___core__Text___escape_to_gettext(val* self) {
val* var /* : String */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(self); /* escape_to_c on <self:Text>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "{";
var4 = core__abstract_text___CString___to_s_full(var3, 1l, 1l);
var2 = var4;
varonce = var2;
}
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "\\{";
var8 = core__abstract_text___CString___to_s_full(var7, 2l, 2l);
var6 = var8;
varonce5 = var6;
}
{
var9 = core__string_search___Text___replace(var1, var2, var6);
}
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "}";
var13 = core__abstract_text___CString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce10 = var11;
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "\\}";
var17 = core__abstract_text___CString___to_s_full(var16, 2l, 2l);
var15 = var17;
varonce14 = var15;
}
{
var18 = core__string_search___Text___replace(var9, var11, var15);
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
