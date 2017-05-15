#include "nitc__no_warning.sep.0.h"
/* method no_warning#ToolContext#no_warning_phase for (self: ToolContext): Phase */
val* nitc__no_warning___ToolContext___no_warning_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__no_warning__ToolContext___no_warning_phase].val; /* _no_warning_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _no_warning_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__no_warning, 22);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method no_warning#NoWarningPhase#process_nmodule for (self: NoWarningPhase, AModule) */
void nitc__no_warning___nitc__no_warning__NoWarningPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Location */;
val* var11 /* : Location */;
val* var12 /* : nullable SourceFile */;
val* var14 /* : nullable SourceFile */;
val* var_source /* var source: nullable SourceFile */;
val* var15 /* : nullable AModuledecl */;
val* var17 /* : nullable AModuledecl */;
val* var_nmoduledecl /* var nmoduledecl: nullable AModuledecl */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
val* var25 /* : nullable ADoc */;
val* var27 /* : nullable ADoc */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var_other37 /* var other: nullable Object */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : ToolContext */;
val* var42 /* : ToolContext */;
val* var43 /* : MultiHashMap[SourceFile, String] */;
val* var45 /* : MultiHashMap[SourceFile, String] */;
val* var46 /* : nullable Object */;
static val* varonce;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : ToolContext */;
val* var58 /* : ToolContext */;
val* var59 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var_66 /* var : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : Array[AAnnotation] */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : ToolContext */;
val* var76 /* : ToolContext */;
val* var77 /* : MultiHashMap[SourceFile, String] */;
val* var79 /* : MultiHashMap[SourceFile, String] */;
val* var80 /* : nullable Object */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var_name /* var name: String */;
val* var89 /* : Array[AAnnotation] */;
val* var_annots /* var annots: Array[AAnnotation] */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
val* var97 /* : nullable Object */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var103 /* : NativeArray[String] */;
static val* varonce102;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var_113 /* var : Array[AAnnotation] */;
val* var114 /* : IndexedIterator[nullable Object] */;
val* var_115 /* var : IndexedIterator[AAnnotation] */;
short int var116 /* : Bool */;
val* var117 /* : nullable Object */;
val* var_annot /* var annot: AAnnotation */;
val* var118 /* : ANodes[AExpr] */;
val* var120 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
short int var121 /* : Bool */;
val* var123 /* : NativeArray[String] */;
static val* varonce122;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : CString */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
val* var132 /* : String */;
val* var_134 /* var : ANodes[AExpr] */;
val* var135 /* : Iterator[ANode] */;
val* var_136 /* var : Iterator[AExpr] */;
short int var137 /* : Bool */;
val* var139 /* : nullable Object */;
val* var_arg /* var arg: AExpr */;
val* var140 /* : nullable String */;
val* var_tag /* var tag: nullable String */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
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
val* var153 /* : String */;
val* var155 /* : ToolContext */;
val* var157 /* : ToolContext */;
val* var158 /* : MultiHashMap[SourceFile, String] */;
val* var160 /* : MultiHashMap[SourceFile, String] */;
val* var161 /* : nullable Object */;
var_nmodule = p0;
{
{ /* Inline loader#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var2 = var_nmodule->attrs[COLOR_nitc__loader__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mmodule = var;
if (var_mmodule == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var8 = var_mmodule == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var11 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline location#Location#file (var9) on <var9:Location> */
var14 = var9->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var9:Location> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_source = var12;
{
{ /* Inline parser_nodes#AModule#n_moduledecl (var_nmodule) on <var_nmodule:AModule> */
var17 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_nmodule:AModule> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_nmoduledecl = var15;
if (var_nmoduledecl == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmoduledecl,((val*)NULL)) on <var_nmoduledecl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmoduledecl,var_other) on <var_nmoduledecl:nullable AModuledecl(AModuledecl)> */
var24 = var_nmoduledecl == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
var_ = var19;
if (var19){
var18 = var_;
} else {
{
{ /* Inline parser_nodes#ADefinition#n_doc (var_nmoduledecl) on <var_nmoduledecl:nullable AModuledecl(AModuledecl)> */
var27 = var_nmoduledecl->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <var_nmoduledecl:nullable AModuledecl(AModuledecl)> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var25,((val*)NULL)) on <var25:nullable ADoc> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var25,var_other) on <var25:nullable ADoc(ADoc)> */
var33 = var25 == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
var18 = var28;
}
if (var18){
if (var_source == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_source,((val*)NULL)) on <var_source:nullable SourceFile> */
var_other37 = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var_source->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_source, var_other37); /* == on <var_source:nullable SourceFile(SourceFile)>*/
}
var39 = !var38;
var35 = var39;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:NoWarningPhase> */
var42 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:NoWarningPhase> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#warning_blacklist (var40) on <var40:ToolContext> */
var45 = var40->attrs[COLOR_nitc__toolcontext__ToolContext___warning_blacklist].val; /* _warning_blacklist on <var40:ToolContext> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _warning_blacklist");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 167);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var43, var_source);
}
if (likely(varonce!=NULL)) {
var47 = varonce;
} else {
var48 = "missing-doc";
var49 = core__abstract_text___CString___to_s_full(var48, 11l, 11l);
var47 = var49;
varonce = var47;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var46, var47); /* Direct call array#Array#add on <var46:nullable Object(Array[String])>*/
}
} else {
}
} else {
}
if (var_nmoduledecl == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmoduledecl,((val*)NULL)) on <var_nmoduledecl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmoduledecl,var_other) on <var_nmoduledecl:nullable AModuledecl(AModuledecl)> */
var55 = var_nmoduledecl == var_other;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:NoWarningPhase> */
var58 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:NoWarningPhase> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nitc__modelbuilder_base___ToolContext___modelbuilder(var56);
}
var_modelbuilder = var59;
if (var_source == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_source,((val*)NULL)) on <var_source:nullable SourceFile> */
var_other37 = ((val*)NULL);
{
var64 = ((short int(*)(val* self, val* p0))(var_source->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_source, var_other37); /* == on <var_source:nullable SourceFile(SourceFile)>*/
}
var65 = !var64;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
var_66 = var61;
if (var61){
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "test_suite";
var70 = core__abstract_text___CString___to_s_full(var69, 10l, 10l);
var68 = var70;
varonce67 = var68;
}
{
var71 = nitc___nitc__Prod___get_annotations(var_nmoduledecl, var68);
}
{
var72 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var71);
}
var73 = !var72;
var60 = var73;
} else {
var60 = var_66;
}
if (var60){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:NoWarningPhase> */
var76 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:NoWarningPhase> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#warning_blacklist (var74) on <var74:ToolContext> */
var79 = var74->attrs[COLOR_nitc__toolcontext__ToolContext___warning_blacklist].val; /* _warning_blacklist on <var74:ToolContext> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _warning_blacklist");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 167);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var77, var_source);
}
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "missing-doc";
var84 = core__abstract_text___CString___to_s_full(var83, 11l, 11l);
var82 = var84;
varonce81 = var82;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var80, var82); /* Direct call array#Array#add on <var80:nullable Object(Array[String])>*/
}
} else {
}
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "no_warning";
var88 = core__abstract_text___CString___to_s_full(var87, 10l, 10l);
var86 = var88;
varonce85 = var86;
}
var_name = var86;
{
var89 = nitc___nitc__Prod___get_annotations(var_nmoduledecl, var_name);
}
var_annots = var89;
{
var90 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_annots);
}
if (var90){
goto RET_LABEL;
} else {
}
if (var_source == NULL) {
var91 = 1; /* is null */
} else {
var91 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_source,((val*)NULL)) on <var_source:nullable SourceFile> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_source,var_other) on <var_source:nullable SourceFile(SourceFile)> */
var96 = var_source == var_other;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var91 = var92;
}
if (var91){
{
var97 = core___core__SequenceRead___Collection__first(var_annots);
}
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "file-less-module";
var101 = core__abstract_text___CString___to_s_full(var100, 16l, 16l);
var99 = var101;
varonce98 = var99;
}
if (unlikely(varonce102==NULL)) {
var103 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "Warning: `";
var107 = core__abstract_text___CString___to_s_full(var106, 10l, 10l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var103)->values[0]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "` does not currently work on file-less modules.";
var111 = core__abstract_text___CString___to_s_full(var110, 47l, 47l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var103)->values[2]=var109;
} else {
var103 = varonce102;
varonce102 = NULL;
}
((struct instance_core__NativeArray*)var103)->values[1]=var_name;
{
var112 = ((val*(*)(val* self))(var103->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
{
nitc___nitc__ModelBuilder___warning(var_modelbuilder, var97, var99, var112); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var_113 = var_annots;
{
var114 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_113);
}
var_115 = var114;
for(;;) {
{
var116 = ((short int(*)(val* self))((((long)var_115&3)?class_info[((long)var_115&3)]:var_115->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_115); /* is_ok on <var_115:IndexedIterator[AAnnotation]>*/
}
if (var116){
} else {
goto BREAK_label;
}
{
var117 = ((val*(*)(val* self))((((long)var_115&3)?class_info[((long)var_115&3)]:var_115->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_115); /* item on <var_115:IndexedIterator[AAnnotation]>*/
}
var_annot = var117;
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_annot) on <var_annot:AAnnotation> */
var120 = var_annot->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_annot:AAnnotation> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
var_args = var118;
{
var121 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var_args);
}
if (var121){
if (unlikely(varonce122==NULL)) {
var123 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "Syntax Error: `";
var127 = core__abstract_text___CString___to_s_full(var126, 15l, 15l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var123)->values[0]=var125;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "` expects a list of warnings. Use `\"all\"` to disable all warnings.";
var131 = core__abstract_text___CString___to_s_full(var130, 66l, 66l);
var129 = var131;
varonce128 = var129;
}
((struct instance_core__NativeArray*)var123)->values[2]=var129;
} else {
var123 = varonce122;
varonce122 = NULL;
}
((struct instance_core__NativeArray*)var123)->values[1]=var_name;
{
var132 = ((val*(*)(val* self))(var123->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var123); /* native_to_s on <var123:NativeArray[String]>*/
}
varonce122 = var123;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_annot, var132); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label133;
} else {
}
var_134 = var_args;
{
var135 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_134);
}
var_136 = var135;
for(;;) {
{
var137 = ((short int(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_136); /* is_ok on <var_136:Iterator[AExpr]>*/
}
if (var137){
} else {
goto BREAK_label138;
}
{
var139 = ((val*(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_136); /* item on <var_136:Iterator[AExpr]>*/
}
var_arg = var139;
{
var140 = nitc__literal___AExpr___as_string(var_arg);
}
var_tag = var140;
if (var_tag == NULL) {
var141 = 1; /* is null */
} else {
var141 = 0; /* arg is null but recv is not */
}
if (0) {
var142 = ((short int(*)(val* self, val* p0))(var_tag->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_tag, ((val*)NULL)); /* == on <var_tag:nullable String>*/
var141 = var142;
}
if (var141){
if (unlikely(varonce143==NULL)) {
var144 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "Syntax Error: `";
var148 = core__abstract_text___CString___to_s_full(var147, 15l, 15l);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var144)->values[0]=var146;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "` expects String as arguments.";
var152 = core__abstract_text___CString___to_s_full(var151, 30l, 30l);
var150 = var152;
varonce149 = var150;
}
((struct instance_core__NativeArray*)var144)->values[2]=var150;
} else {
var144 = varonce143;
varonce143 = NULL;
}
((struct instance_core__NativeArray*)var144)->values[1]=var_name;
{
var153 = ((val*(*)(val* self))(var144->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var144); /* native_to_s on <var144:NativeArray[String]>*/
}
varonce143 = var144;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_arg, var153); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label154;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:NoWarningPhase> */
var157 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:NoWarningPhase> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#warning_blacklist (var155) on <var155:ToolContext> */
var160 = var155->attrs[COLOR_nitc__toolcontext__ToolContext___warning_blacklist].val; /* _warning_blacklist on <var155:ToolContext> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _warning_blacklist");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 167);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
var161 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var158, var_source);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var161, var_tag); /* Direct call array#Array#add on <var161:nullable Object(Array[String])>*/
}
BREAK_label154: (void)0;
{
((void(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_136); /* next on <var_136:Iterator[AExpr]>*/
}
}
BREAK_label138: (void)0;
{
((void(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_136); /* finish on <var_136:Iterator[AExpr]>*/
}
BREAK_label133: (void)0;
{
((void(*)(val* self))((((long)var_115&3)?class_info[((long)var_115&3)]:var_115->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_115); /* next on <var_115:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_115&3)?class_info[((long)var_115&3)]:var_115->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_115); /* finish on <var_115:IndexedIterator[AAnnotation]>*/
}
RET_LABEL:;
}
