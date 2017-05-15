#include "nitc__glsl_validation.sep.0.h"
/* method glsl_validation#GLSLValidationPhase#annot_name_vertex for (self: GLSLValidationPhase): String */
val* nitc__glsl_validation___nitc__glsl_validation__GLSLValidationPhase___annot_name_vertex(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "glsl_vertex_shader";
var3 = core__abstract_text___CString___to_s_full(var2, 18l, 18l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glsl_validation#GLSLValidationPhase#annot_name_fragment for (self: GLSLValidationPhase): String */
val* nitc__glsl_validation___nitc__glsl_validation__GLSLValidationPhase___annot_name_fragment(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "glsl_fragment_shader";
var3 = core__abstract_text___CString___to_s_full(var2, 20l, 20l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method glsl_validation#GLSLValidationPhase#tool_is_in_path for (self: GLSLValidationPhase): nullable Bool */
val* nitc__glsl_validation___nitc__glsl_validation__GLSLValidationPhase___tool_is_in_path(val* self) {
val* var /* : nullable Bool */;
val* var1 /* : nullable Bool */;
var1 = self->attrs[COLOR_nitc__glsl_validation__GLSLValidationPhase___tool_is_in_path].val; /* _tool_is_in_path on <self:GLSLValidationPhase> */
var = var1;
RET_LABEL:;
return var;
}
/* method glsl_validation#GLSLValidationPhase#tool_is_in_path= for (self: GLSLValidationPhase, nullable Bool) */
void nitc__glsl_validation___nitc__glsl_validation__GLSLValidationPhase___tool_is_in_path_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__glsl_validation__GLSLValidationPhase___tool_is_in_path].val = p0; /* _tool_is_in_path on <self:GLSLValidationPhase> */
RET_LABEL:;
}
/* method glsl_validation#GLSLValidationPhase#process_annotated_node for (self: GLSLValidationPhase, ANode, AAnnotation) */
void nitc__glsl_validation___nitc__glsl_validation__GLSLValidationPhase___nitc__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nstring /* var nstring: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : AAtid */;
val* var2 /* : AAtid */;
val* var3 /* : Token */;
val* var5 /* : Token */;
val* var6 /* : String */;
val* var_annot_name /* var annot_name: String */;
val* var7 /* : String */;
short int var8 /* : Bool */;
short int var_is_vertex /* var is_vertex: Bool */;
val* var9 /* : String */;
short int var10 /* : Bool */;
short int var_is_fragment /* var is_fragment: Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
short int var15 /* : Bool */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
val* var19 /* : Location */;
val* var21 /* : Location */;
val* var22 /* : NativeArray[String] */;
static val* varonce;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : Message */;
val* var33 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
val* var_in_path /* var in_path: nullable Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : ProcessReader */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : Array[Text] */;
val* var50 /* : NativeArray[Text] */;
val* var_proc_which /* var proc_which: ProcessReader */;
long var51 /* : Int */;
long var_status /* var status: Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : nullable Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : ToolContext */;
val* var61 /* : ToolContext */;
val* var62 /* : Location */;
val* var64 /* : Location */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Message */;
val* var74 /* : String */;
val* var76 /* : String */;
val* var_shader /* var shader: String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var_tmp /* var tmp: String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var_ext /* var ext: nullable Object */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var94 /* : Text */;
val* var_path /* var path: String */;
val* var95 /* : ProcessReader */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : CString */;
val* var99 /* : String */;
val* var100 /* : Array[Text] */;
val* var101 /* : NativeArray[Text] */;
val* var_proc_validator /* var proc_validator: ProcessReader */;
val* var102 /* : String */;
val* var103 /* : Array[String] */;
val* var104 /* : Pattern */;
val* var_lines /* var lines: Array[String] */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : Regex */;
val* var_regex /* var regex: Regex */;
val* var_110 /* var : Array[String] */;
val* var111 /* : IndexedIterator[nullable Object] */;
val* var_112 /* var : IndexedIterator[String] */;
short int var113 /* : Bool */;
val* var114 /* : nullable Object */;
val* var_line /* var line: String */;
val* var115 /* : nullable Match */;
val* var_match /* var match: nullable Match */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
val* var121 /* : Array[nullable Match] */;
val* var122 /* : nullable Object */;
val* var123 /* : String */;
long var124 /* : Int */;
long var_shader_line_no /* var shader_line_no: Int */;
val* var125 /* : Array[nullable Match] */;
val* var126 /* : nullable Object */;
val* var127 /* : String */;
val* var_msg /* var msg: String */;
val* var128 /* : Location */;
val* var130 /* : Location */;
long var131 /* : Int */;
long var133 /* : Int */;
long var134 /* : Int */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name;
long var139 /* : Int */;
long var_line_start /* var line_start: Int */;
long var_char_start /* var char_start: Int */;
long var_char_end /* var char_end: Int */;
val* var140 /* : Location */;
val* var141 /* : Location */;
val* var143 /* : Location */;
val* var144 /* : nullable SourceFile */;
val* var146 /* : nullable SourceFile */;
val* var_loc /* var loc: Location */;
val* var147 /* : ToolContext */;
val* var149 /* : ToolContext */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
val* var155 /* : NativeArray[String] */;
static val* varonce154;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : CString */;
val* var159 /* : String */;
val* var160 /* : String */;
val* var161 /* : nullable Message */;
var_nstring = p0;
var_nat = p1;
{
{ /* Inline parser_nodes#AAnnotation#n_atid (var_nat) on <var_nat:AAnnotation> */
var2 = var_nat->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <var_nat:AAnnotation> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3001);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AAtid#n_id (var) on <var:AAtid> */
var5 = var->attrs[COLOR_nitc__parser_nodes__AAtid___n_id].val; /* _n_id on <var:AAtid> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3024);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__lexer_work___Token___text(var3);
}
var_annot_name = var6;
{
var7 = nitc__glsl_validation___nitc__glsl_validation__GLSLValidationPhase___annot_name_vertex(self);
}
{
var8 = ((short int(*)(val* self, val* p0))(var_annot_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annot_name, var7); /* == on <var_annot_name:String>*/
}
var_is_vertex = var8;
{
var9 = nitc__glsl_validation___nitc__glsl_validation__GLSLValidationPhase___annot_name_fragment(self);
}
{
var10 = ((short int(*)(val* self, val* p0))(var_annot_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annot_name, var9); /* == on <var_annot_name:String>*/
}
var_is_fragment = var10;
var12 = !var_is_vertex;
var_ = var12;
if (var12){
var13 = !var_is_fragment;
var11 = var13;
} else {
var11 = var_;
}
if (var11){
goto RET_LABEL;
} else {
}
/* <var_nstring:ANode> isa AStringFormExpr */
cltype = type_nitc__AStringFormExpr.color;
idtype = type_nitc__AStringFormExpr.id;
if(cltype >= var_nstring->type->table_size) {
var14 = 0;
} else {
var14 = var_nstring->type->type_table[cltype] == idtype;
}
var15 = !var14;
if (var15){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:GLSLValidationPhase> */
var18 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:GLSLValidationPhase> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nstring) on <var_nstring:ANode> */
var21 = var_nstring->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nstring:ANode> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var22 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Syntax Error: only a string literal can be annotated as `";
var26 = core__abstract_text___CString___to_s_full(var25, 57l, 57l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[0]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "`.";
var30 = core__abstract_text___CString___to_s_full(var29, 2l, 2l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var22)->values[2]=var28;
} else {
var22 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var22)->values[1]=var_annot_name;
{
var31 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce = var22;
{
var32 = nitc___nitc__ToolContext___error(var16, var19, var31);
}
goto RET_LABEL;
} else {
}
{
{ /* Inline glsl_validation#GLSLValidationPhase#tool_is_in_path (self) on <self:GLSLValidationPhase> */
var35 = self->attrs[COLOR_nitc__glsl_validation__GLSLValidationPhase___tool_is_in_path].val; /* _tool_is_in_path on <self:GLSLValidationPhase> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_in_path = var33;
if (var_in_path == NULL) {
var36 = 1; /* is null */
} else {
var36 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Bool#== (var_in_path,((val*)NULL)) on <var_in_path:nullable Bool> */
var39 = 0; /* incompatible types Bool vs. null; cannot be NULL */
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (var36){
var40 = NEW_core__ProcessReader(&type_core__ProcessReader);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "which";
var44 = core__abstract_text___CString___to_s_full(var43, 5l, 5l);
var42 = var44;
varonce41 = var42;
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "glslangValidator";
var48 = core__abstract_text___CString___to_s_full(var47, 16l, 16l);
var46 = var48;
varonce45 = var46;
}
var49 = NEW_core__Array(&type_core__Array__core__Text);
{ /* var49 = array_instance Array[Text] */
var50 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Text);
((struct instance_core__NativeArray*)var50)->values[0] = (val*) var46;
{
((void(*)(val* self, val* p0, long p1))(var49->class->vft[COLOR_core__array__Array__with_native]))(var49, var50, 1l); /* with_native on <var49:Array[Text]>*/
}
}
{
core___core__Process___init(var40, var42, var49); /* Direct call exec#Process#init on <var40:ProcessReader>*/
}
var_proc_which = var40;
{
core___core__Process___wait(var_proc_which); /* Direct call exec#Process#wait on <var_proc_which:ProcessReader>*/
}
{
core___core__ProcessReader___core__stream__Stream__close(var_proc_which); /* Direct call exec#ProcessReader#close on <var_proc_which:ProcessReader>*/
}
{
var51 = core___core__Process___status(var_proc_which);
}
var_status = var51;
{
{ /* Inline kernel#Int#== (var_status,0l) on <var_status:Int> */
var54 = var_status == 0l;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var55 = (val*)((long)(var52)<<2|3);
var_in_path = var55;
{
{ /* Inline glsl_validation#GLSLValidationPhase#tool_is_in_path= (self,var_in_path) on <self:GLSLValidationPhase> */
self->attrs[COLOR_nitc__glsl_validation__GLSLValidationPhase___tool_is_in_path].val = var_in_path; /* _tool_is_in_path on <self:GLSLValidationPhase> */
RET_LABEL56:(void)0;
}
}
} else {
}
var57 = (short int)((long)(var_in_path)>>2);
var58 = !var57;
if (var58){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:GLSLValidationPhase> */
var61 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:GLSLValidationPhase> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nat) on <var_nat:AAnnotation> */
var64 = var_nat->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nat:AAnnotation> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "glslvalidator";
var68 = core__abstract_text___CString___to_s_full(var67, 13l, 13l);
var66 = var68;
varonce65 = var66;
}
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "Warning: program `glslangValidator` not in PATH, cannot validate this shader.";
var72 = core__abstract_text___CString___to_s_full(var71, 77l, 77l);
var70 = var72;
varonce69 = var70;
}
{
var73 = nitc___nitc__ToolContext___advice(var59, var62, var66, var70);
}
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AStringFormExpr#value (var_nstring) on <var_nstring:ANode(AStringFormExpr)> */
var76 = var_nstring->attrs[COLOR_nitc__literal__AStringFormExpr___value].val; /* _value on <var_nstring:ANode(AStringFormExpr)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _value");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 201);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
var_shader = var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "/tmp/";
var80 = core__abstract_text___CString___to_s_full(var79, 5l, 5l);
var78 = var80;
varonce77 = var78;
}
var_tmp = var78;
if (var_is_vertex){
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "vert";
var84 = core__abstract_text___CString___to_s_full(var83, 4l, 4l);
var82 = var84;
varonce81 = var82;
}
var_ext = var82;
} else {
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "frag";
var88 = core__abstract_text___CString___to_s_full(var87, 4l, 4l);
var86 = var88;
varonce85 = var86;
}
var_ext = var86;
}
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "nit_shader.";
var92 = core__abstract_text___CString___to_s_full(var91, 11l, 11l);
var90 = var92;
varonce89 = var90;
}
{
var93 = core__file___String____47d(var_tmp, var90);
}
{
var94 = ((val*(*)(val* self, val* p0))(var93->class->vft[COLOR_core__abstract_text__Text___43d]))(var93, var_ext); /* + on <var93:String>*/
}
var_path = var94;
{
core__file___Writable___write_to_file(var_shader, var_path); /* Direct call file#Writable#write_to_file on <var_shader:String>*/
}
var95 = NEW_core__ProcessReader(&type_core__ProcessReader);
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "glslangValidator";
var99 = core__abstract_text___CString___to_s_full(var98, 16l, 16l);
var97 = var99;
varonce96 = var97;
}
var100 = NEW_core__Array(&type_core__Array__core__Text);
{ /* var100 = array_instance Array[Text] */
var101 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Text);
((struct instance_core__NativeArray*)var101)->values[0] = (val*) var_path;
{
((void(*)(val* self, val* p0, long p1))(var100->class->vft[COLOR_core__array__Array__with_native]))(var100, var101, 1l); /* with_native on <var100:Array[Text]>*/
}
}
{
core___core__Process___init(var95, var97, var100); /* Direct call exec#Process#init on <var95:ProcessReader>*/
}
var_proc_validator = var95;
{
core___core__Process___wait(var_proc_validator); /* Direct call exec#Process#wait on <var_proc_validator:ProcessReader>*/
}
{
var102 = core___core__Reader___read_all(var_proc_validator);
}
{
var104 = (val*)((long)('\n')<<2|2);
var103 = core__string_search___Text___split(var102, var104);
}
var_lines = var103;
{
core___core__ProcessReader___core__stream__Stream__close(var_proc_validator); /* Direct call exec#ProcessReader#close on <var_proc_validator:ProcessReader>*/
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "[A-Z]+: ([0-9]+):([0-9]+): (.*)";
var108 = core__abstract_text___CString___to_s_full(var107, 31l, 31l);
var106 = var108;
varonce105 = var106;
}
{
var109 = core__re___Text___to_re(var106);
}
var_regex = var109;
var_110 = var_lines;
{
var111 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_110);
}
var_112 = var111;
for(;;) {
{
var113 = ((short int(*)(val* self))((((long)var_112&3)?class_info[((long)var_112&3)]:var_112->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_112); /* is_ok on <var_112:IndexedIterator[String]>*/
}
if (var113){
} else {
goto BREAK_label;
}
{
var114 = ((val*(*)(val* self))((((long)var_112&3)?class_info[((long)var_112&3)]:var_112->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_112); /* item on <var_112:IndexedIterator[String]>*/
}
var_line = var114;
{
var115 = core__string_search___Text___search(var_line, var_regex);
}
var_match = var115;
if (var_match == NULL) {
var116 = 0; /* is null */
} else {
var116 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_match,((val*)NULL)) on <var_match:nullable Match> */
var_other = ((val*)NULL);
{
var119 = ((short int(*)(val* self, val* p0))(var_match->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_match, var_other); /* == on <var_match:nullable Match(Match)>*/
}
var120 = !var119;
var117 = var120;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
var116 = var117;
}
if (var116){
{
var121 = core__re___Match___subs(var_match);
}
{
var122 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var121, 1l);
}
if (var122 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__glsl_validation, 105);
fatal_exit(1);
} else {
var123 = core___core__Match___core__abstract_text__Object__to_s(var122);
}
{
var124 = core__fixed_ints_text___Text___to_i(var123);
}
var_shader_line_no = var124;
{
var125 = core__re___Match___subs(var_match);
}
{
var126 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var125, 2l);
}
if (var126 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__glsl_validation, 106);
fatal_exit(1);
} else {
var127 = core___core__Match___core__abstract_text__Object__to_s(var126);
}
var_msg = var127;
{
{ /* Inline parser_nodes#ANode#location (var_nstring) on <var_nstring:ANode(AStringFormExpr)> */
var130 = var_nstring->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nstring:ANode(AStringFormExpr)> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var128) on <var128:Location> */
var133 = var128->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var128:Location> */
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var131,var_shader_line_no) on <var131:Int> */
/* Covariant cast for argument 0 (i) <var_shader_line_no:Int> isa OTHER */
/* <var_shader_line_no:Int> isa OTHER */
var136 = 1; /* easy <var_shader_line_no:Int> isa OTHER*/
if (unlikely(!var136)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var139 = var131 + var_shader_line_no;
var134 = var139;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
var_line_start = var134;
var_char_start = 0l;
var_char_end = 0l;
var140 = NEW_nitc__Location(&type_nitc__Location);
{
{ /* Inline parser_nodes#ANode#location (var_nat) on <var_nat:AAnnotation> */
var143 = var_nat->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nat:AAnnotation> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline location#Location#file (var141) on <var141:Location> */
var146 = var141->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var141:Location> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var140->class->vft[COLOR_nitc__location__Location__file_61d]))(var140, var144); /* file= on <var140:Location>*/
}
{
((void(*)(val* self, long p0))(var140->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var140, var_line_start); /* line_start= on <var140:Location>*/
}
{
((void(*)(val* self, long p0))(var140->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var140, var_line_start); /* line_end= on <var140:Location>*/
}
{
((void(*)(val* self, long p0))(var140->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var140, var_char_start); /* column_start= on <var140:Location>*/
}
{
((void(*)(val* self, long p0))(var140->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var140, var_char_end); /* column_end= on <var140:Location>*/
}
{
((void(*)(val* self))(var140->class->vft[COLOR_core__kernel__Object__init]))(var140); /* init on <var140:Location>*/
}
var_loc = var140;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:GLSLValidationPhase> */
var149 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:GLSLValidationPhase> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "glslvalidator";
var153 = core__abstract_text___CString___to_s_full(var152, 13l, 13l);
var151 = var153;
varonce150 = var151;
}
if (unlikely(varonce154==NULL)) {
var155 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "Shader error on ";
var159 = core__abstract_text___CString___to_s_full(var158, 16l, 16l);
var157 = var159;
varonce156 = var157;
}
((struct instance_core__NativeArray*)var155)->values[0]=var157;
} else {
var155 = varonce154;
varonce154 = NULL;
}
((struct instance_core__NativeArray*)var155)->values[1]=var_msg;
{
var160 = ((val*(*)(val* self))(var155->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var155); /* native_to_s on <var155:NativeArray[String]>*/
}
varonce154 = var155;
{
var161 = nitc___nitc__ToolContext___warning(var147, var_loc, var151, var160);
}
} else {
}
{
((void(*)(val* self))((((long)var_112&3)?class_info[((long)var_112&3)]:var_112->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_112); /* next on <var_112:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_112&3)?class_info[((long)var_112&3)]:var_112->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_112); /* finish on <var_112:IndexedIterator[String]>*/
}
RET_LABEL:;
}
