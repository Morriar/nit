#include "nitc__check_annotation.sep.0.h"
/* method check_annotation#CheckAnnotationPhase#declared_annotations for (self: CheckAnnotationPhase): MModuleMultiData[String] */
val* nitc__check_annotation___nitc__check_annotation__CheckAnnotationPhase___declared_annotations(val* self) {
val* var /* : MModuleMultiData[String] */;
short int var1 /* : Bool */;
val* var2 /* : MModuleMultiData[String] */;
val* var3 /* : MModuleMultiData[String] */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
val* var7 /* : ModelBuilder */;
val* var8 /* : Model */;
val* var10 /* : Model */;
var1 = self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___declared_annotations].val != NULL; /* _declared_annotations on <self:CheckAnnotationPhase> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___declared_annotations].val; /* _declared_annotations on <self:CheckAnnotationPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _declared_annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__check_annotation, 32);
fatal_exit(1);
}
} else {
var3 = NEW_nitc__MModuleMultiData(&type_nitc__MModuleMultiData__core__String);
{
{ /* Inline phase#Phase#toolcontext (self) on <self:CheckAnnotationPhase> */
var6 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:CheckAnnotationPhase> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
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
{ /* Inline modelbuilder_base#ModelBuilder#model (var7) on <var7:ModelBuilder> */
var10 = var7->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <var7:ModelBuilder> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__mmodule_data__MModuleData__model_61d]))(var3, var8); /* model= on <var3:MModuleMultiData[String]>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:MModuleMultiData[String]>*/
}
self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___declared_annotations].val = var3; /* _declared_annotations on <self:CheckAnnotationPhase> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method check_annotation#CheckAnnotationPhase#mmodule for (self: CheckAnnotationPhase): nullable MModule */
val* nitc__check_annotation___nitc__check_annotation__CheckAnnotationPhase___mmodule(val* self) {
val* var /* : nullable MModule */;
val* var1 /* : nullable MModule */;
var1 = self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___mmodule].val; /* _mmodule on <self:CheckAnnotationPhase> */
var = var1;
RET_LABEL:;
return var;
}
/* method check_annotation#CheckAnnotationPhase#mmodule= for (self: CheckAnnotationPhase, nullable MModule) */
void nitc__check_annotation___nitc__check_annotation__CheckAnnotationPhase___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___mmodule].val = p0; /* _mmodule on <self:CheckAnnotationPhase> */
RET_LABEL:;
}
/* method check_annotation#CheckAnnotationPhase#process_nmodule for (self: CheckAnnotationPhase, AModule) */
void nitc__check_annotation___nitc__check_annotation__CheckAnnotationPhase___nitc__phase__Phase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : nullable MModule */;
val* var2 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var10 /* : nullable AModuledecl */;
val* var12 /* : nullable AModuledecl */;
val* var_nmoduledecl /* var nmoduledecl: nullable AModuledecl */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : ToolContext */;
val* var21 /* : ToolContext */;
val* var22 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : Array[AAnnotation] */;
val* var_annots /* var annots: Array[AAnnotation] */;
val* var27 /* : MModuleMultiData[String] */;
val* var28 /* : Sys */;
val* var29 /* : MVisibility */;
val* var30 /* : Sequence[MModule] */;
val* var_super_mmodules /* var super_mmodules: Sequence[MModule] */;
val* var_ /* var : Array[AAnnotation] */;
val* var31 /* : IndexedIterator[nullable Object] */;
val* var_32 /* var : IndexedIterator[AAnnotation] */;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_annot /* var annot: AAnnotation */;
val* var35 /* : nullable String */;
val* var_name /* var name: nullable String */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var_39 /* var : Sequence[MModule] */;
val* var40 /* : Iterator[nullable Object] */;
val* var_41 /* var : IndexedIterator[MModule] */;
short int var42 /* : Bool */;
val* var43 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var44 /* : MModuleMultiData[String] */;
val* var45 /* : nullable Array[nullable Object] */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var52 /* : NativeArray[String] */;
static val* varonce51;
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
val* var65 /* : String */;
val* var66 /* : String */;
val* var67 /* : MModuleMultiData[String] */;
val* var68 /* : nullable Array[nullable Object] */;
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
{ /* Inline check_annotation#CheckAnnotationPhase#mmodule= (self,var_mmodule) on <self:CheckAnnotationPhase> */
self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___mmodule].val = var_mmodule; /* _mmodule on <self:CheckAnnotationPhase> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline parser_nodes#AModule#n_moduledecl (var_nmodule) on <var_nmodule:AModule> */
var12 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_moduledecl].val; /* _n_moduledecl on <var_nmodule:AModule> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_nmoduledecl = var10;
if (var_nmoduledecl == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nmoduledecl,((val*)NULL)) on <var_nmoduledecl:nullable AModuledecl> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nmoduledecl,var_other) on <var_nmoduledecl:nullable AModuledecl(AModuledecl)> */
var18 = var_nmoduledecl == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:CheckAnnotationPhase> */
var21 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:CheckAnnotationPhase> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc__modelbuilder_base___ToolContext___modelbuilder(var19);
}
var_modelbuilder = var22;
if (likely(varonce!=NULL)) {
var23 = varonce;
} else {
var24 = "new_annotation";
var25 = core__abstract_text___CString___to_s_full(var24, 14l, 14l);
var23 = var25;
varonce = var23;
}
{
var26 = nitc___nitc__Prod___get_annotations(var_nmoduledecl, var23);
}
var_annots = var26;
{
var27 = nitc__check_annotation___nitc__check_annotation__CheckAnnotationPhase___declared_annotations(self);
}
var28 = glob_sys;
{
var29 = nitc__model_base___core__Sys___private_visibility(var28);
}
{
var30 = nitc___nitc__MModuleData___lookup_all_modules(var27, var_mmodule, var29);
}
var_super_mmodules = var30;
var_ = var_annots;
{
var31 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_32 = var31;
for(;;) {
{
var33 = ((short int(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_32); /* is_ok on <var_32:IndexedIterator[AAnnotation]>*/
}
if (var33){
} else {
goto BREAK_;
}
{
var34 = ((val*(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_32); /* item on <var_32:IndexedIterator[AAnnotation]>*/
}
var_annot = var34;
{
var35 = nitc__annotation___AAnnotation___arg_as_id(var_annot, var_modelbuilder);
}
var_name = var35;
if (var_name == NULL) {
var36 = 1; /* is null */
} else {
var36 = 0; /* arg is null but recv is not */
}
if (0) {
var37 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, ((val*)NULL)); /* == on <var_name:nullable String>*/
var36 = var37;
}
if (var36){
goto BREAK_38;
} else {
}
var_39 = var_super_mmodules;
{
var40 = ((val*(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_39); /* iterator on <var_39:Sequence[MModule]>*/
}
var_41 = var40;
for(;;) {
{
var42 = ((short int(*)(val* self))((((long)var_41&3)?class_info[((long)var_41&3)]:var_41->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_41); /* is_ok on <var_41:IndexedIterator[MModule]>*/
}
if (var42){
} else {
goto BREAK_label;
}
{
var43 = ((val*(*)(val* self))((((long)var_41&3)?class_info[((long)var_41&3)]:var_41->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_41); /* item on <var_41:IndexedIterator[MModule]>*/
}
var_m = var43;
{
var44 = nitc__check_annotation___nitc__check_annotation__CheckAnnotationPhase___declared_annotations(self);
}
{
var45 = nitc___nitc__MModuleMultiData___MModuleData___91d_93d(var44, var_m);
}
if (var45 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__check_annotation, 63);
fatal_exit(1);
} else {
var46 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var45, var_name);
}
if (var46){
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "multiple-annotation-declarations";
var50 = core__abstract_text___CString___to_s_full(var49, 32l, 32l);
var48 = var50;
varonce47 = var48;
}
if (unlikely(varonce51==NULL)) {
var52 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "Warning: an annotation `";
var56 = core__abstract_text___CString___to_s_full(var55, 24l, 24l);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var52)->values[0]=var54;
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "` is already declared in module `";
var60 = core__abstract_text___CString___to_s_full(var59, 33l, 33l);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var52)->values[2]=var58;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "`.";
var64 = core__abstract_text___CString___to_s_full(var63, 2l, 2l);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var52)->values[4]=var62;
} else {
var52 = varonce51;
varonce51 = NULL;
}
((struct instance_core__NativeArray*)var52)->values[1]=var_name;
{
var65 = ((val*(*)(val* self))(var_m->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_m); /* to_s on <var_m:MModule>*/
}
((struct instance_core__NativeArray*)var52)->values[3]=var65;
{
var66 = ((val*(*)(val* self))(var52->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var52); /* native_to_s on <var52:NativeArray[String]>*/
}
varonce51 = var52;
{
nitc___nitc__ModelBuilder___warning(var_modelbuilder, var_annot, var48, var66); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_;
} else {
}
{
((void(*)(val* self))((((long)var_41&3)?class_info[((long)var_41&3)]:var_41->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_41); /* next on <var_41:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_41&3)?class_info[((long)var_41&3)]:var_41->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_41); /* finish on <var_41:IndexedIterator[MModule]>*/
}
{
var67 = nitc__check_annotation___nitc__check_annotation__CheckAnnotationPhase___declared_annotations(self);
}
{
var68 = nitc___nitc__MModuleMultiData___MModuleData___91d_93d(var67, var_mmodule);
}
if (var68 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__check_annotation, 69);
fatal_exit(1);
} else {
core___core__Array___core__abstract_collection__SimpleCollection__add(var68, var_name); /* Direct call array#Array#add on <var68:nullable Array[nullable Object](nullable Array[String])>*/
}
BREAK_38: (void)0;
{
((void(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_32); /* next on <var_32:IndexedIterator[AAnnotation]>*/
}
}
BREAK_: (void)0;
{
((void(*)(val* self))((((long)var_32&3)?class_info[((long)var_32&3)]:var_32->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_32); /* finish on <var_32:IndexedIterator[AAnnotation]>*/
}
RET_LABEL:;
}
/* method check_annotation#CheckAnnotationPhase#primtives_annotations_list for (self: CheckAnnotationPhase): String */
val* nitc__check_annotation___nitc__check_annotation__CheckAnnotationPhase___primtives_annotations_list(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___primtives_annotations_list].val; /* _primtives_annotations_list on <self:CheckAnnotationPhase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _primtives_annotations_list");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__check_annotation, 74);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method check_annotation#CheckAnnotationPhase#primtives_annotations for (self: CheckAnnotationPhase): HashSet[String] */
val* nitc__check_annotation___nitc__check_annotation__CheckAnnotationPhase___primtives_annotations(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___primtives_annotations].val; /* _primtives_annotations on <self:CheckAnnotationPhase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _primtives_annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__check_annotation, 108);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method check_annotation#CheckAnnotationPhase#user_annotations for (self: CheckAnnotationPhase): HashMap[MModule, HashSet[String]] */
val* nitc__check_annotation___nitc__check_annotation__CheckAnnotationPhase___user_annotations(val* self) {
val* var /* : HashMap[MModule, HashSet[String]] */;
val* var1 /* : HashMap[MModule, HashSet[String]] */;
var1 = self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___user_annotations].val; /* _user_annotations on <self:CheckAnnotationPhase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _user_annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__check_annotation, 111);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method check_annotation#CheckAnnotationPhase#process_annotated_node for (self: CheckAnnotationPhase, ANode, AAnnotation) */
void nitc__check_annotation___nitc__check_annotation__CheckAnnotationPhase___nitc__phase__Phase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : String */;
val* var_name /* var name: String */;
val* var1 /* : HashSet[String] */;
val* var3 /* : HashSet[String] */;
short int var4 /* : Bool */;
val* var5 /* : nullable MModule */;
val* var7 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : HashMap[MModule, HashSet[String]] */;
val* var16 /* : HashMap[MModule, HashSet[String]] */;
val* var17 /* : nullable Object */;
val* var_annots /* var annots: nullable HashSet[String] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : HashSet[String] */;
val* var21 /* : MModuleMultiData[String] */;
val* var22 /* : Sys */;
val* var23 /* : MVisibility */;
val* var24 /* : Sequence[nullable Object] */;
val* var25 /* : HashMap[MModule, HashSet[String]] */;
val* var27 /* : HashMap[MModule, HashSet[String]] */;
short int var28 /* : Bool */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
val* var32 /* : ModelBuilder */;
static val* varonce;
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
var_node = p0;
var_nat = p1;
{
var = nitc___nitc__AAnnotation___name(var_nat);
}
var_name = var;
{
{ /* Inline check_annotation#CheckAnnotationPhase#primtives_annotations (self) on <self:CheckAnnotationPhase> */
var3 = self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___primtives_annotations].val; /* _primtives_annotations on <self:CheckAnnotationPhase> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _primtives_annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__check_annotation, 108);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashSet___core__abstract_collection__Collection__has(var1, var_name);
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline check_annotation#CheckAnnotationPhase#mmodule (self) on <self:CheckAnnotationPhase> */
var7 = self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___mmodule].val; /* _mmodule on <self:CheckAnnotationPhase> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_mmodule = var5;
if (var_mmodule == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mmodule,((val*)NULL)) on <var_mmodule:nullable MModule> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:nullable MModule(MModule)> */
var13 = var_mmodule == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline check_annotation#CheckAnnotationPhase#user_annotations (self) on <self:CheckAnnotationPhase> */
var16 = self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___user_annotations].val; /* _user_annotations on <self:CheckAnnotationPhase> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _user_annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__check_annotation, 111);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var14, var_mmodule);
}
var_annots = var17;
if (var_annots == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
var19 = core___core__Set___core__kernel__Object___61d_61d(var_annots, ((val*)NULL));
var18 = var19;
}
if (var18){
var20 = NEW_core__HashSet(&type_core__HashSet__core__String);
{
core___core__HashSet___core__kernel__Object__init(var20); /* Direct call hash_collection#HashSet#init on <var20:HashSet[String]>*/
}
var_annots = var20;
{
var21 = nitc__check_annotation___nitc__check_annotation__CheckAnnotationPhase___declared_annotations(self);
}
var22 = glob_sys;
{
var23 = nitc__model_base___core__Sys___private_visibility(var22);
}
{
var24 = nitc___nitc__MModuleMultiData___lookup_joined_values(var21, var_mmodule, var23);
}
{
core___core__SimpleCollection___add_all(var_annots, var24); /* Direct call abstract_collection#SimpleCollection#add_all on <var_annots:nullable HashSet[String](HashSet[String])>*/
}
{
{ /* Inline check_annotation#CheckAnnotationPhase#user_annotations (self) on <self:CheckAnnotationPhase> */
var27 = self->attrs[COLOR_nitc__check_annotation__CheckAnnotationPhase___user_annotations].val; /* _user_annotations on <self:CheckAnnotationPhase> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _user_annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__check_annotation, 111);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var25, var_mmodule, var_annots); /* Direct call hash_collection#HashMap#[]= on <var25:HashMap[MModule, HashSet[String]]>*/
}
} else {
}
{
var28 = core___core__HashSet___core__abstract_collection__Collection__has(var_annots, var_name);
}
if (var28){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:CheckAnnotationPhase> */
var31 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:CheckAnnotationPhase> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = nitc__modelbuilder_base___ToolContext___modelbuilder(var29);
}
if (likely(varonce!=NULL)) {
var33 = varonce;
} else {
var34 = "unknown-annotation";
var35 = core__abstract_text___CString___to_s_full(var34, 18l, 18l);
var33 = var35;
varonce = var33;
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Warning: unknown annotation `";
var41 = core__abstract_text___CString___to_s_full(var40, 29l, 29l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "`.";
var45 = core__abstract_text___CString___to_s_full(var44, 2l, 2l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[2]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
((struct instance_core__NativeArray*)var37)->values[1]=var_name;
{
var46 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__ModelBuilder___warning(var32, var_nat, var33, var46); /* Direct call modelbuilder_base#ModelBuilder#warning on <var32:ModelBuilder>*/
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_annots, var_name); /* Direct call hash_collection#HashSet#add on <var_annots:nullable HashSet[String](HashSet[String])>*/
}
RET_LABEL:;
}
