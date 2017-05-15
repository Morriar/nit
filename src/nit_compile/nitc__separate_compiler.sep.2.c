#include "nitc__separate_compiler.sep.0.h"
/* method separate_compiler#SeparateCompiler#compile_type_resolution_table for (self: SeparateCompiler, MType) */
void nitc___nitc__SeparateCompiler___compile_type_resolution_table(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
val* var /* : MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : Map[MClassType, Array[nullable MType]] */;
val* var44 /* : Map[MClassType, Array[nullable MType]] */;
val* var45 /* : nullable Object */;
val* var_ /* var : Array[nullable MType] */;
val* var46 /* : IndexedIterator[nullable Object] */;
val* var_47 /* var : IndexedIterator[nullable MType] */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var_t /* var t: nullable MType */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : MModule */;
val* var62 /* : MModule */;
val* var63 /* : MType */;
val* var_tv /* var tv: MType */;
val* var64 /* : Map[MType, Int] */;
val* var66 /* : Map[MType, Int] */;
short int var67 /* : Bool */;
val* var69 /* : NativeArray[String] */;
static val* varonce68;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : String */;
val* var75 /* : String */;
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
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var113 /* : String */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : CString */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
var_mtype = p0;
{
var = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
/* <var:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var->type->table_size) {
var1 = 0;
} else {
var1 = var->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 781);
fatal_exit(1);
}
var_mclass_type = var;
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "resolution_table_";
var6 = core__abstract_text___CString___to_s_full(var5, 17l, 17l);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[0]=var4;
} else {
var2 = varonce;
varonce = NULL;
}
{
var7 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var2)->values[1]=var7;
{
var8 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
if (unlikely(varonce9==NULL)) {
var10 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "extern const struct types resolution_table_";
var14 = core__abstract_text___CString___to_s_full(var13, 43l, 43l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ";";
var18 = core__abstract_text___CString___to_s_full(var17, 1l, 1l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce9;
varonce9 = NULL;
}
{
var19 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var8, var20); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var21;
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "const struct types resolution_table_";
var27 = core__abstract_text___CString___to_s_full(var26, 36l, 36l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = " = {";
var31 = core__abstract_text___CString___to_s_full(var30, 4l, 4l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var23)->values[2]=var29;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
var32 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var23)->values[1]=var32;
{
var33 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "0, /* dummy */";
var37 = core__abstract_text___CString___to_s_full(var36, 14l, 14l);
var35 = var37;
varonce34 = var35;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "{";
var41 = core__abstract_text___CString___to_s_full(var40, 1l, 1l);
var39 = var41;
varonce38 = var39;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:SeparateCompiler> */
var44 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1072);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = ((val*(*)(val* self, val* p0))((((long)var42&3)?class_info[((long)var42&3)]:var42->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var42, var_mclass_type); /* [] on <var42:Map[MClassType, Array[nullable MType]]>*/
}
var_ = var45;
{
var46 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_47 = var46;
for(;;) {
{
var48 = ((short int(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_47); /* is_ok on <var_47:IndexedIterator[nullable MType]>*/
}
if (var48){
} else {
goto BREAK_label;
}
{
var49 = ((val*(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_47); /* item on <var_47:IndexedIterator[nullable MType]>*/
}
var_t = var49;
if (var_t == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var55 = var_t == var_other;
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
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "NULL, /* empty */";
var59 = core__abstract_text___CString___to_s_full(var58, 17l, 17l);
var57 = var59;
varonce56 = var57;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var57); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var62 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_t->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_t, var_mclass_type, var_mclass_type, var60, 1); /* resolve_for on <var_t:nullable MType(MType)>*/
}
var_tv = var63;
{
{ /* Inline separate_compiler#SeparateCompiler#type_ids (self) on <self:SeparateCompiler> */
var66 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_ids].val; /* _type_ids on <self:SeparateCompiler> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_ids");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 149);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = ((short int(*)(val* self, val* p0))((((long)var64&3)?class_info[((long)var64&3)]:var64->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var64, var_tv); /* has_key on <var64:Map[MType, Int]>*/
}
if (var67){
if (unlikely(varonce68==NULL)) {
var69 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "type_";
var73 = core__abstract_text___CString___to_s_full(var72, 5l, 5l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var69)->values[0]=var71;
} else {
var69 = varonce68;
varonce68 = NULL;
}
{
var74 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_tv); /* c_name on <var_tv:MType>*/
}
((struct instance_core__NativeArray*)var69)->values[1]=var74;
{
var75 = ((val*(*)(val* self))(var69->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce68 = var69;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var75); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "&type_";
var81 = core__abstract_text___CString___to_s_full(var80, 6l, 6l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[0]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = ", /* ";
var85 = core__abstract_text___CString___to_s_full(var84, 5l, 5l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var77)->values[2]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ": ";
var89 = core__abstract_text___CString___to_s_full(var88, 2l, 2l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var77)->values[4]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " */";
var93 = core__abstract_text___CString___to_s_full(var92, 3l, 3l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var77)->values[6]=var91;
} else {
var77 = varonce76;
varonce76 = NULL;
}
{
var94 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_tv); /* c_name on <var_tv:MType>*/
}
((struct instance_core__NativeArray*)var77)->values[1]=var94;
{
var95 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var77)->values[3]=var95;
{
var96 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_tv); /* to_s on <var_tv:MType>*/
}
((struct instance_core__NativeArray*)var77)->values[5]=var96;
{
var97 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var97); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "NULL, /* empty (";
var103 = core__abstract_text___CString___to_s_full(var102, 16l, 16l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = ": ";
var107 = core__abstract_text___CString___to_s_full(var106, 2l, 2l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var99)->values[2]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = " not a live type) */";
var111 = core__abstract_text___CString___to_s_full(var110, 20l, 20l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var99)->values[4]=var109;
} else {
var99 = varonce98;
varonce98 = NULL;
}
{
var112 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var99)->values[1]=var112;
{
var113 = ((val*(*)(val* self))(var_tv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_tv); /* to_s on <var_tv:MType>*/
}
((struct instance_core__NativeArray*)var99)->values[3]=var113;
{
var114 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var114); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
}
{
((void(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_47); /* next on <var_47:IndexedIterator[nullable MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_47); /* finish on <var_47:IndexedIterator[nullable MType]>*/
}
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "}";
var118 = core__abstract_text___CString___to_s_full(var117, 1l, 1l);
var116 = var118;
varonce115 = var116;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var116); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "};";
var122 = core__abstract_text___CString___to_s_full(var121, 2l, 2l);
var120 = var122;
varonce119 = var120;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var120); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_class_to_c for (self: SeparateCompiler, MClass) */
void nitc___nitc__SeparateCompiler___compile_class_to_c(val* self, val* p0) {
val* var_mclass /* var mclass: MClass */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var9 /* : String */;
val* var_c_name /* var c_name: String */;
val* var10 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var11 /* : nullable RapidTypeAnalysis */;
val* var13 /* : nullable RapidTypeAnalysis */;
val* var_rta /* var rta: nullable RapidTypeAnalysis */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
val* var20 /* : HashSet[MClass] */;
val* var22 /* : HashSet[MClass] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var_is_dead /* var is_dead: Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
val* var31 /* : MClassKind */;
val* var33 /* : MClassKind */;
val* var34 /* : Sys */;
val* var35 /* : MClassKind */;
short int var36 /* : Bool */;
val* var_other38 /* var other: nullable Object */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
val* var43 /* : MClassKind */;
val* var45 /* : MClassKind */;
val* var46 /* : Sys */;
val* var47 /* : MClassKind */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var_need_corpse /* var need_corpse: Bool */;
val* var53 /* : NativeArray[String] */;
static val* varonce;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var76 /* : String */;
val* var77 /* : String */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var_80 /* var : Bool */;
val* var82 /* : NativeArray[String] */;
static val* varonce81;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : String */;
val* var100 /* : NativeArray[String] */;
static val* varonce99;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : CString */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var111 /* : NativeArray[String] */;
static val* varonce110;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
long var116 /* : Int */;
val* var117 /* : String */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var125 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var126 /* : nullable Object */;
val* var_vft /* var vft: nullable Array[nullable MPropDef] */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
long var_i /* var i: Int */;
long var132 /* : Int */;
long var134 /* : Int */;
long var_135 /* var : Int */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var139 /* : Bool */;
val* var140 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : CString */;
val* var150 /* : String */;
short int var151 /* : Bool */;
int cltype152;
int idtype153;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var_160 /* var : Bool */;
val* var161 /* : HashSet[MMethodDef] */;
val* var163 /* : HashSet[MMethodDef] */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
val* var167 /* : NativeArray[String] */;
static val* varonce166;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
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
val* var184 /* : MModule */;
val* var186 /* : MModule */;
val* var187 /* : String */;
val* var188 /* : String */;
val* var189 /* : String */;
val* var190 /* : String */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var196 /* : Bool */;
short int var_197 /* var : Bool */;
val* var198 /* : nullable MSignature */;
val* var200 /* : nullable MSignature */;
short int var201 /* : Bool */;
short int var202 /* : Bool */;
short int var204 /* : Bool */;
short int var206 /* : Bool */;
short int var_207 /* var : Bool */;
val* var208 /* : MProperty */;
val* var210 /* : MProperty */;
short int var211 /* : Bool */;
short int var213 /* : Bool */;
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
static val* varonce228;
val* var229 /* : String */;
char* var230 /* : CString */;
val* var231 /* : String */;
val* var232 /* : MModule */;
val* var234 /* : MModule */;
val* var235 /* : String */;
val* var236 /* : String */;
val* var237 /* : String */;
val* var238 /* : String */;
val* var239 /* : SeparateRuntimeFunction */;
val* var_rf /* var rf: SeparateRuntimeFunction */;
val* var240 /* : String */;
val* var242 /* : NativeArray[String] */;
static val* varonce241;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : CString */;
val* var246 /* : String */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : CString */;
val* var250 /* : String */;
static val* varonce251;
val* var252 /* : String */;
char* var253 /* : CString */;
val* var254 /* : String */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : CString */;
val* var258 /* : String */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : CString */;
val* var262 /* : String */;
val* var263 /* : String */;
val* var264 /* : MModule */;
val* var266 /* : MModule */;
val* var267 /* : String */;
val* var268 /* : String */;
val* var269 /* : String */;
val* var270 /* : String */;
long var271 /* : Int */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : CString */;
val* var275 /* : String */;
static val* varonce276;
val* var277 /* : String */;
char* var278 /* : CString */;
val* var279 /* : String */;
short int var280 /* : Bool */;
short int var281 /* : Bool */;
short int var_282 /* var : Bool */;
val* var283 /* : MClass */;
val* var285 /* : MClass */;
val* var286 /* : String */;
val* var288 /* : String */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : CString */;
val* var292 /* : String */;
short int var293 /* : Bool */;
short int var294 /* : Bool */;
short int var296 /* : Bool */;
val* var297 /* : CodeWriter */;
val* var299 /* : CodeWriter */;
val* var301 /* : NativeArray[String] */;
static val* varonce300;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : CString */;
val* var305 /* : String */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : CString */;
val* var309 /* : String */;
val* var310 /* : String */;
val* var311 /* : CodeWriter */;
val* var313 /* : CodeWriter */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : CString */;
val* var317 /* : String */;
val* var318 /* : CodeWriter */;
val* var320 /* : CodeWriter */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : CString */;
val* var324 /* : String */;
val* var325 /* : CodeWriter */;
val* var327 /* : CodeWriter */;
val* var329 /* : NativeArray[String] */;
static val* varonce328;
static val* varonce330;
val* var331 /* : String */;
char* var332 /* : CString */;
val* var333 /* : String */;
val* var334 /* : String */;
val* var335 /* : String */;
val* var336 /* : CodeWriter */;
val* var338 /* : CodeWriter */;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : CString */;
val* var342 /* : String */;
short int var343 /* : Bool */;
short int var_344 /* var : Bool */;
val* var345 /* : MClass */;
val* var347 /* : MClass */;
val* var348 /* : String */;
val* var350 /* : String */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : CString */;
val* var354 /* : String */;
short int var355 /* : Bool */;
short int var357 /* : Bool */;
short int var358 /* : Bool */;
val* var360 /* : NativeArray[String] */;
static val* varonce359;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : CString */;
val* var364 /* : String */;
val* var365 /* : String */;
val* var367 /* : NativeArray[String] */;
static val* varonce366;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : CString */;
val* var371 /* : String */;
static val* varonce372;
val* var373 /* : String */;
char* var374 /* : CString */;
val* var375 /* : String */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : CString */;
val* var379 /* : String */;
val* var380 /* : String */;
val* var381 /* : String */;
val* var383 /* : NativeArray[String] */;
static val* varonce382;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : CString */;
val* var387 /* : String */;
static val* varonce388;
val* var389 /* : String */;
char* var390 /* : CString */;
val* var391 /* : String */;
val* var392 /* : String */;
val* var393 /* : String */;
val* var395 /* : NativeArray[String] */;
static val* varonce394;
static val* varonce396;
val* var397 /* : String */;
char* var398 /* : CString */;
val* var399 /* : String */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : CString */;
val* var403 /* : String */;
static val* varonce404;
val* var405 /* : String */;
char* var406 /* : CString */;
val* var407 /* : String */;
val* var408 /* : String */;
val* var409 /* : String */;
val* var410 /* : String */;
val* var412 /* : NativeArray[String] */;
static val* varonce411;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : CString */;
val* var416 /* : String */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : CString */;
val* var420 /* : String */;
val* var421 /* : String */;
val* var422 /* : String */;
val* var423 /* : String */;
val* var_alloc /* var alloc: String */;
val* var425 /* : NativeArray[String] */;
static val* varonce424;
static val* varonce426;
val* var427 /* : String */;
char* var428 /* : CString */;
val* var429 /* : String */;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : CString */;
val* var433 /* : String */;
static val* varonce434;
val* var435 /* : String */;
char* var436 /* : CString */;
val* var437 /* : String */;
val* var438 /* : String */;
val* var439 /* : AbstractCompiler */;
val* var441 /* : AbstractCompiler */;
val* var442 /* : Set[MType] */;
val* var444 /* : Set[MType] */;
val* var446 /* : NativeArray[String] */;
static val* varonce445;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : CString */;
val* var450 /* : String */;
val* var451 /* : String */;
val* var453 /* : NativeArray[String] */;
static val* varonce452;
static val* varonce454;
val* var455 /* : String */;
char* var456 /* : CString */;
val* var457 /* : String */;
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : CString */;
val* var461 /* : String */;
val* var462 /* : String */;
val* var464 /* : NativeArray[String] */;
static val* varonce463;
static val* varonce465;
val* var466 /* : String */;
char* var467 /* : CString */;
val* var468 /* : String */;
val* var469 /* : String */;
val* var471 /* : NativeArray[String] */;
static val* varonce470;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : CString */;
val* var475 /* : String */;
static val* varonce476;
val* var477 /* : String */;
char* var478 /* : CString */;
val* var479 /* : String */;
val* var480 /* : String */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : CString */;
val* var484 /* : String */;
static val* varonce485;
val* var486 /* : String */;
char* var487 /* : CString */;
val* var488 /* : String */;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : CString */;
val* var492 /* : String */;
val* var493 /* : MClass */;
val* var495 /* : MClass */;
val* var496 /* : String */;
val* var498 /* : String */;
static val* varonce499;
val* var500 /* : String */;
char* var501 /* : CString */;
val* var502 /* : String */;
short int var503 /* : Bool */;
short int var505 /* : Bool */;
short int var506 /* : Bool */;
val* var507 /* : AbstractCompilerVisitor */;
val* var509 /* : NativeArray[String] */;
static val* varonce508;
static val* varonce510;
val* var511 /* : String */;
char* var512 /* : CString */;
val* var513 /* : String */;
val* var514 /* : String */;
val* var516 /* : NativeArray[String] */;
static val* varonce515;
static val* varonce517;
val* var518 /* : String */;
char* var519 /* : CString */;
val* var520 /* : String */;
static val* varonce521;
val* var522 /* : String */;
char* var523 /* : CString */;
val* var524 /* : String */;
val* var525 /* : String */;
val* var526 /* : String */;
val* var528 /* : NativeArray[String] */;
static val* varonce527;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : CString */;
val* var532 /* : String */;
static val* varonce533;
val* var534 /* : String */;
char* var535 /* : CString */;
val* var536 /* : String */;
val* var537 /* : String */;
val* var538 /* : String */;
val* var540 /* : NativeArray[String] */;
static val* varonce539;
static val* varonce541;
val* var542 /* : String */;
char* var543 /* : CString */;
val* var544 /* : String */;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : CString */;
val* var548 /* : String */;
val* var549 /* : String */;
val* var550 /* : String */;
val* var552 /* : NativeArray[String] */;
static val* varonce551;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : CString */;
val* var556 /* : String */;
val* var557 /* : String */;
val* var558 /* : String */;
static val* varonce559;
val* var560 /* : String */;
char* var561 /* : CString */;
val* var562 /* : String */;
val* var563 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var566 /* : NativeArray[String] */;
static val* varonce565;
static val* varonce567;
val* var568 /* : String */;
char* var569 /* : CString */;
val* var570 /* : String */;
static val* varonce571;
val* var572 /* : String */;
char* var573 /* : CString */;
val* var574 /* : String */;
val* var575 /* : String */;
val* var576 /* : String */;
val* var577 /* : String */;
val* var578 /* : String */;
val* var580 /* : NativeArray[String] */;
static val* varonce579;
static val* varonce581;
val* var582 /* : String */;
char* var583 /* : CString */;
val* var584 /* : String */;
static val* varonce585;
val* var586 /* : String */;
char* var587 /* : CString */;
val* var588 /* : String */;
val* var589 /* : String */;
val* var590 /* : String */;
val* var592 /* : NativeArray[String] */;
static val* varonce591;
static val* varonce593;
val* var594 /* : String */;
char* var595 /* : CString */;
val* var596 /* : String */;
val* var597 /* : String */;
val* var598 /* : String */;
static val* varonce599;
val* var600 /* : String */;
char* var601 /* : CString */;
val* var602 /* : String */;
val* var604 /* : NativeArray[String] */;
static val* varonce603;
static val* varonce605;
val* var606 /* : String */;
char* var607 /* : CString */;
val* var608 /* : String */;
val* var609 /* : String */;
val* var611 /* : NativeArray[String] */;
static val* varonce610;
static val* varonce612;
val* var613 /* : String */;
char* var614 /* : CString */;
val* var615 /* : String */;
static val* varonce616;
val* var617 /* : String */;
char* var618 /* : CString */;
val* var619 /* : String */;
val* var620 /* : String */;
val* var621 /* : String */;
val* var623 /* : NativeArray[String] */;
static val* varonce622;
static val* varonce624;
val* var625 /* : String */;
char* var626 /* : CString */;
val* var627 /* : String */;
static val* varonce628;
val* var629 /* : String */;
char* var630 /* : CString */;
val* var631 /* : String */;
static val* varonce632;
val* var633 /* : String */;
char* var634 /* : CString */;
val* var635 /* : String */;
val* var636 /* : String */;
val* var637 /* : String */;
val* var638 /* : String */;
val* var640 /* : NativeArray[String] */;
static val* varonce639;
static val* varonce641;
val* var642 /* : String */;
char* var643 /* : CString */;
val* var644 /* : String */;
static val* varonce645;
val* var646 /* : String */;
char* var647 /* : CString */;
val* var648 /* : String */;
val* var649 /* : String */;
val* var650 /* : String */;
static val* varonce651;
val* var652 /* : String */;
char* var653 /* : CString */;
val* var654 /* : String */;
val* var655 /* : String */;
val* var657 /* : String */;
static val* varonce658;
val* var659 /* : String */;
char* var660 /* : CString */;
val* var661 /* : String */;
short int var662 /* : Bool */;
val* var663 /* : CodeWriter */;
val* var665 /* : CodeWriter */;
val* var667 /* : NativeArray[String] */;
static val* varonce666;
static val* varonce668;
val* var669 /* : String */;
char* var670 /* : CString */;
val* var671 /* : String */;
static val* varonce672;
val* var673 /* : String */;
char* var674 /* : CString */;
val* var675 /* : String */;
val* var676 /* : String */;
val* var677 /* : CodeWriter */;
val* var679 /* : CodeWriter */;
static val* varonce680;
val* var681 /* : String */;
char* var682 /* : CString */;
val* var683 /* : String */;
val* var684 /* : CodeWriter */;
val* var686 /* : CodeWriter */;
static val* varonce687;
val* var688 /* : String */;
char* var689 /* : CString */;
val* var690 /* : String */;
val* var691 /* : CodeWriter */;
val* var693 /* : CodeWriter */;
static val* varonce694;
val* var695 /* : String */;
char* var696 /* : CString */;
val* var697 /* : String */;
val* var698 /* : CodeWriter */;
val* var700 /* : CodeWriter */;
static val* varonce701;
val* var702 /* : String */;
char* var703 /* : CString */;
val* var704 /* : String */;
val* var705 /* : CodeWriter */;
val* var707 /* : CodeWriter */;
static val* varonce708;
val* var709 /* : String */;
char* var710 /* : CString */;
val* var711 /* : String */;
val* var713 /* : NativeArray[String] */;
static val* varonce712;
static val* varonce714;
val* var715 /* : String */;
char* var716 /* : CString */;
val* var717 /* : String */;
val* var718 /* : String */;
val* var720 /* : NativeArray[String] */;
static val* varonce719;
static val* varonce721;
val* var722 /* : String */;
char* var723 /* : CString */;
val* var724 /* : String */;
static val* varonce725;
val* var726 /* : String */;
char* var727 /* : CString */;
val* var728 /* : String */;
val* var729 /* : String */;
val* var730 /* : String */;
val* var732 /* : NativeArray[String] */;
static val* varonce731;
static val* varonce733;
val* var734 /* : String */;
char* var735 /* : CString */;
val* var736 /* : String */;
static val* varonce737;
val* var738 /* : String */;
char* var739 /* : CString */;
val* var740 /* : String */;
val* var741 /* : String */;
val* var742 /* : String */;
val* var744 /* : NativeArray[String] */;
static val* varonce743;
static val* varonce745;
val* var746 /* : String */;
char* var747 /* : CString */;
val* var748 /* : String */;
static val* varonce749;
val* var750 /* : String */;
char* var751 /* : CString */;
val* var752 /* : String */;
val* var753 /* : String */;
val* var754 /* : String */;
static val* varonce755;
val* var756 /* : String */;
char* var757 /* : CString */;
val* var758 /* : String */;
val* var759 /* : String */;
val* var_res760 /* var res: String */;
val* var762 /* : NativeArray[String] */;
static val* varonce761;
static val* varonce763;
val* var764 /* : String */;
char* var765 /* : CString */;
val* var766 /* : String */;
static val* varonce767;
val* var768 /* : String */;
char* var769 /* : CString */;
val* var770 /* : String */;
static val* varonce771;
val* var772 /* : String */;
char* var773 /* : CString */;
val* var774 /* : String */;
val* var775 /* : String */;
val* var776 /* : Array[MType] */;
val* var777 /* : nullable Object */;
val* var_mtype_elt /* var mtype_elt: MType */;
val* var779 /* : NativeArray[String] */;
static val* varonce778;
static val* varonce780;
val* var781 /* : String */;
char* var782 /* : CString */;
val* var783 /* : String */;
static val* varonce784;
val* var785 /* : String */;
char* var786 /* : CString */;
val* var787 /* : String */;
static val* varonce788;
val* var789 /* : String */;
char* var790 /* : CString */;
val* var791 /* : String */;
val* var792 /* : String */;
val* var793 /* : String */;
val* var794 /* : String */;
val* var795 /* : String */;
val* var_alloc796 /* var alloc: String */;
val* var798 /* : NativeArray[String] */;
static val* varonce797;
static val* varonce799;
val* var800 /* : String */;
char* var801 /* : CString */;
val* var802 /* : String */;
static val* varonce803;
val* var804 /* : String */;
char* var805 /* : CString */;
val* var806 /* : String */;
val* var807 /* : String */;
val* var809 /* : NativeArray[String] */;
static val* varonce808;
static val* varonce810;
val* var811 /* : String */;
char* var812 /* : CString */;
val* var813 /* : String */;
val* var814 /* : String */;
static val* varonce815;
val* var816 /* : String */;
char* var817 /* : CString */;
val* var818 /* : String */;
val* var820 /* : NativeArray[String] */;
static val* varonce819;
static val* varonce821;
val* var822 /* : String */;
char* var823 /* : CString */;
val* var824 /* : String */;
val* var825 /* : String */;
val* var827 /* : NativeArray[String] */;
static val* varonce826;
static val* varonce828;
val* var829 /* : String */;
char* var830 /* : CString */;
val* var831 /* : String */;
static val* varonce832;
val* var833 /* : String */;
char* var834 /* : CString */;
val* var835 /* : String */;
val* var836 /* : String */;
val* var838 /* : NativeArray[String] */;
static val* varonce837;
static val* varonce839;
val* var840 /* : String */;
char* var841 /* : CString */;
val* var842 /* : String */;
val* var843 /* : String */;
val* var845 /* : NativeArray[String] */;
static val* varonce844;
static val* varonce846;
val* var847 /* : String */;
char* var848 /* : CString */;
val* var849 /* : String */;
static val* varonce850;
val* var851 /* : String */;
char* var852 /* : CString */;
val* var853 /* : String */;
val* var854 /* : String */;
static val* varonce855;
val* var856 /* : String */;
char* var857 /* : CString */;
val* var858 /* : String */;
short int var859 /* : Bool */;
val* var860 /* : MClass */;
val* var862 /* : MClass */;
val* var863 /* : MClassKind */;
val* var865 /* : MClassKind */;
val* var866 /* : Sys */;
val* var867 /* : MClassKind */;
short int var868 /* : Bool */;
short int var870 /* : Bool */;
short int var872 /* : Bool */;
short int var_873 /* var : Bool */;
val* var874 /* : MClass */;
val* var876 /* : MClass */;
val* var877 /* : String */;
val* var879 /* : String */;
static val* varonce880;
val* var881 /* : String */;
char* var882 /* : CString */;
val* var883 /* : String */;
short int var884 /* : Bool */;
short int var886 /* : Bool */;
short int var887 /* : Bool */;
val* var888 /* : MModule */;
val* var890 /* : MModule */;
val* var891 /* : MClassType */;
val* var_pointer_type /* var pointer_type: MClassType */;
val* var893 /* : NativeArray[String] */;
static val* varonce892;
static val* varonce894;
val* var895 /* : String */;
char* var896 /* : CString */;
val* var897 /* : String */;
val* var898 /* : String */;
val* var900 /* : NativeArray[String] */;
static val* varonce899;
static val* varonce901;
val* var902 /* : String */;
char* var903 /* : CString */;
val* var904 /* : String */;
static val* varonce905;
val* var906 /* : String */;
char* var907 /* : CString */;
val* var908 /* : String */;
val* var909 /* : String */;
val* var910 /* : String */;
val* var912 /* : NativeArray[String] */;
static val* varonce911;
static val* varonce913;
val* var914 /* : String */;
char* var915 /* : CString */;
val* var916 /* : String */;
static val* varonce917;
val* var918 /* : String */;
char* var919 /* : CString */;
val* var920 /* : String */;
val* var921 /* : String */;
val* var922 /* : String */;
val* var924 /* : NativeArray[String] */;
static val* varonce923;
static val* varonce925;
val* var926 /* : String */;
char* var927 /* : CString */;
val* var928 /* : String */;
static val* varonce929;
val* var930 /* : String */;
char* var931 /* : CString */;
val* var932 /* : String */;
val* var933 /* : String */;
val* var934 /* : String */;
val* var936 /* : NativeArray[String] */;
static val* varonce935;
static val* varonce937;
val* var938 /* : String */;
char* var939 /* : CString */;
val* var940 /* : String */;
val* var941 /* : String */;
val* var942 /* : String */;
static val* varonce943;
val* var944 /* : String */;
char* var945 /* : CString */;
val* var946 /* : String */;
val* var947 /* : RuntimeVariable */;
val* var_res948 /* var res: RuntimeVariable */;
val* var951 /* : NativeArray[String] */;
static val* varonce950;
static val* varonce952;
val* var953 /* : String */;
char* var954 /* : CString */;
val* var955 /* : String */;
static val* varonce956;
val* var957 /* : String */;
char* var958 /* : CString */;
val* var959 /* : String */;
val* var960 /* : String */;
val* var961 /* : String */;
val* var962 /* : String */;
val* var963 /* : String */;
val* var_alloc964 /* var alloc: String */;
val* var966 /* : NativeArray[String] */;
static val* varonce965;
static val* varonce967;
val* var968 /* : String */;
char* var969 /* : CString */;
val* var970 /* : String */;
static val* varonce971;
val* var972 /* : String */;
char* var973 /* : CString */;
val* var974 /* : String */;
val* var975 /* : String */;
val* var976 /* : String */;
val* var978 /* : NativeArray[String] */;
static val* varonce977;
static val* varonce979;
val* var980 /* : String */;
char* var981 /* : CString */;
val* var982 /* : String */;
val* var983 /* : String */;
val* var984 /* : String */;
static val* varonce985;
val* var986 /* : String */;
char* var987 /* : CString */;
val* var988 /* : String */;
val* var990 /* : NativeArray[String] */;
static val* varonce989;
static val* varonce991;
val* var992 /* : String */;
char* var993 /* : CString */;
val* var994 /* : String */;
val* var995 /* : String */;
val* var997 /* : NativeArray[String] */;
static val* varonce996;
static val* varonce998;
val* var999 /* : String */;
char* var1000 /* : CString */;
val* var1001 /* : String */;
static val* varonce1002;
val* var1003 /* : String */;
char* var1004 /* : CString */;
val* var1005 /* : String */;
val* var1006 /* : String */;
val* var1007 /* : String */;
val* var1009 /* : NativeArray[String] */;
static val* varonce1008;
static val* varonce1010;
val* var1011 /* : String */;
char* var1012 /* : CString */;
val* var1013 /* : String */;
static val* varonce1014;
val* var1015 /* : String */;
char* var1016 /* : CString */;
val* var1017 /* : String */;
static val* varonce1018;
val* var1019 /* : String */;
char* var1020 /* : CString */;
val* var1021 /* : String */;
val* var1022 /* : String */;
val* var1023 /* : String */;
val* var1024 /* : String */;
val* var1026 /* : NativeArray[String] */;
static val* varonce1025;
static val* varonce1027;
val* var1028 /* : String */;
char* var1029 /* : CString */;
val* var1030 /* : String */;
static val* varonce1031;
val* var1032 /* : String */;
char* var1033 /* : CString */;
val* var1034 /* : String */;
val* var1035 /* : String */;
val* var1036 /* : String */;
static val* varonce1037;
val* var1038 /* : String */;
char* var1039 /* : CString */;
val* var1040 /* : String */;
val* var1042 /* : NativeArray[String] */;
static val* varonce1041;
static val* varonce1043;
val* var1044 /* : String */;
char* var1045 /* : CString */;
val* var1046 /* : String */;
val* var1047 /* : String */;
val* var1049 /* : NativeArray[String] */;
static val* varonce1048;
static val* varonce1050;
val* var1051 /* : String */;
char* var1052 /* : CString */;
val* var1053 /* : String */;
static val* varonce1054;
val* var1055 /* : String */;
char* var1056 /* : CString */;
val* var1057 /* : String */;
val* var1058 /* : String */;
val* var1059 /* : String */;
val* var1061 /* : NativeArray[String] */;
static val* varonce1060;
static val* varonce1062;
val* var1063 /* : String */;
char* var1064 /* : CString */;
val* var1065 /* : String */;
static val* varonce1066;
val* var1067 /* : String */;
char* var1068 /* : CString */;
val* var1069 /* : String */;
val* var1070 /* : String */;
val* var1071 /* : String */;
val* var1073 /* : NativeArray[String] */;
static val* varonce1072;
static val* varonce1074;
val* var1075 /* : String */;
char* var1076 /* : CString */;
val* var1077 /* : String */;
static val* varonce1078;
val* var1079 /* : String */;
char* var1080 /* : CString */;
val* var1081 /* : String */;
val* var1082 /* : String */;
val* var1083 /* : String */;
val* var1085 /* : NativeArray[String] */;
static val* varonce1084;
static val* varonce1086;
val* var1087 /* : String */;
char* var1088 /* : CString */;
val* var1089 /* : String */;
val* var1090 /* : String */;
val* var1091 /* : String */;
static val* varonce1092;
val* var1093 /* : String */;
char* var1094 /* : CString */;
val* var1095 /* : String */;
val* var1096 /* : RuntimeVariable */;
val* var_res1097 /* var res: RuntimeVariable */;
val* var1099 /* : Map[MClass, Array[nullable MProperty]] */;
val* var1101 /* : Map[MClass, Array[nullable MProperty]] */;
val* var1102 /* : nullable Object */;
val* var_attrs /* var attrs: nullable Array[nullable MProperty] */;
short int var1103 /* : Bool */;
short int var1104 /* : Bool */;
static val* varonce1105;
val* var1106 /* : String */;
char* var1107 /* : CString */;
val* var1108 /* : String */;
val* var1109 /* : String */;
val* var1110 /* : String */;
val* var_alloc1111 /* var alloc: String */;
val* var1113 /* : NativeArray[String] */;
static val* varonce1112;
static val* varonce1114;
val* var1115 /* : String */;
char* var1116 /* : CString */;
val* var1117 /* : String */;
static val* varonce1118;
val* var1119 /* : String */;
char* var1120 /* : CString */;
val* var1121 /* : String */;
val* var1122 /* : String */;
val* var1123 /* : String */;
val* var1125 /* : NativeArray[String] */;
static val* varonce1124;
static val* varonce1126;
val* var1127 /* : String */;
char* var1128 /* : CString */;
val* var1129 /* : String */;
static val* varonce1130;
val* var1131 /* : String */;
char* var1132 /* : CString */;
val* var1133 /* : String */;
long var1134 /* : Int */;
long var1136 /* : Int */;
val* var1137 /* : String */;
val* var1138 /* : String */;
val* var1139 /* : String */;
val* var1140 /* : String */;
val* var_alloc1141 /* var alloc: String */;
val* var1143 /* : NativeArray[String] */;
static val* varonce1142;
static val* varonce1144;
val* var1145 /* : String */;
char* var1146 /* : CString */;
val* var1147 /* : String */;
static val* varonce1148;
val* var1149 /* : String */;
char* var1150 /* : CString */;
val* var1151 /* : String */;
val* var1152 /* : String */;
val* var1153 /* : String */;
val* var1155 /* : NativeArray[String] */;
static val* varonce1154;
static val* varonce1156;
val* var1157 /* : String */;
char* var1158 /* : CString */;
val* var1159 /* : String */;
val* var1160 /* : String */;
val* var1161 /* : String */;
static val* varonce1162;
val* var1163 /* : String */;
char* var1164 /* : CString */;
val* var1165 /* : String */;
val* var1167 /* : NativeArray[String] */;
static val* varonce1166;
static val* varonce1168;
val* var1169 /* : String */;
char* var1170 /* : CString */;
val* var1171 /* : String */;
val* var1172 /* : String */;
val* var1174 /* : NativeArray[String] */;
static val* varonce1173;
static val* varonce1175;
val* var1176 /* : String */;
char* var1177 /* : CString */;
val* var1178 /* : String */;
static val* varonce1179;
val* var1180 /* : String */;
char* var1181 /* : CString */;
val* var1182 /* : String */;
val* var1183 /* : String */;
val* var1184 /* : String */;
short int var1185 /* : Bool */;
short int var1186 /* : Bool */;
short int var1188 /* : Bool */;
short int var1189 /* : Bool */;
val* var1191 /* : NativeArray[String] */;
static val* varonce1190;
static val* varonce1192;
val* var1193 /* : String */;
char* var1194 /* : CString */;
val* var1195 /* : String */;
static val* varonce1196;
val* var1197 /* : String */;
char* var1198 /* : CString */;
val* var1199 /* : String */;
val* var1200 /* : String */;
val* var1201 /* : String */;
static val* varonce1202;
val* var1203 /* : String */;
char* var1204 /* : CString */;
val* var1205 /* : String */;
var_mclass = p0;
{
{ /* Inline model_base#MEntity#is_broken (var_mclass) on <var_mclass:MClass> */
var2 = var_mclass->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mclass:MClass> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#intro (var_mclass) on <var_mclass:MClass> */
var5 = var_mclass->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_mclass:MClass> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mtype = var6;
{
var9 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_mclass);
}
var_c_name = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var10;
{
{ /* Inline separate_compiler#SeparateCompiler#runtime_type_analysis (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___runtime_type_analysis].val; /* _runtime_type_analysis on <self:SeparateCompiler> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_rta = var11;
if (var_rta == NULL) {
var15 = 0; /* is null */
} else {
var15 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
var_ = var15;
if (var15){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var22 = var_rta->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = core___core__HashSet___core__abstract_collection__Collection__has(var20, var_mclass);
}
var24 = !var23;
var14 = var24;
} else {
var14 = var_;
}
var_is_dead = var14;
var_28 = var_is_dead;
if (var_is_dead){
{
var29 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var27 = var29;
} else {
var27 = var_28;
}
var_30 = var27;
if (var27){
var26 = var_30;
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var33 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var34 = glob_sys;
{
var35 = nitc__model___core__Sys___extern_kind(var34);
}
{
{ /* Inline kernel#Object#== (var31,var35) on <var31:MClassKind> */
var_other38 = var35;
{
{ /* Inline kernel#Object#is_same_instance (var31,var_other38) on <var31:MClassKind> */
var41 = var31 == var_other38;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var36 = var39;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var26 = var36;
}
var_42 = var26;
if (var26){
var25 = var_42;
} else {
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var45 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var46 = glob_sys;
{
var47 = nitc__model___core__Sys___enum_kind(var46);
}
{
{ /* Inline kernel#Object#== (var43,var47) on <var43:MClassKind> */
var_other38 = var47;
{
{ /* Inline kernel#Object#is_same_instance (var43,var_other38) on <var43:MClassKind> */
var52 = var43 == var_other38;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var25 = var48;
}
var_need_corpse = var25;
if (unlikely(varonce==NULL)) {
var53 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "/* runtime class ";
var57 = core__abstract_text___CString___to_s_full(var56, 17l, 17l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[0]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = ": ";
var61 = core__abstract_text___CString___to_s_full(var60, 2l, 2l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var53)->values[2]=var59;
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = " (dead=";
var65 = core__abstract_text___CString___to_s_full(var64, 7l, 7l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var53)->values[4]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "; need_corpse=";
var69 = core__abstract_text___CString___to_s_full(var68, 14l, 14l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var53)->values[6]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = ")*/";
var73 = core__abstract_text___CString___to_s_full(var72, 3l, 3l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var53)->values[8]=var71;
} else {
var53 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var53)->values[1]=var_c_name;
{
var74 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
((struct instance_core__NativeArray*)var53)->values[3]=var74;
var75 = core__abstract_text___Bool___Object__to_s(var_is_dead);
((struct instance_core__NativeArray*)var53)->values[5]=var75;
var76 = core__abstract_text___Bool___Object__to_s(var_need_corpse);
((struct instance_core__NativeArray*)var53)->values[7]=var76;
{
var77 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce = var53;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var77); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var79 = !var_is_dead;
var_80 = var79;
if (var79){
var78 = var_80;
} else {
var78 = var_need_corpse;
}
if (var78){
if (unlikely(varonce81==NULL)) {
var82 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "class_";
var86 = core__abstract_text___CString___to_s_full(var85, 6l, 6l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var82)->values[0]=var84;
} else {
var82 = varonce81;
varonce81 = NULL;
}
((struct instance_core__NativeArray*)var82)->values[1]=var_c_name;
{
var87 = ((val*(*)(val* self))(var82->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var82); /* native_to_s on <var82:NativeArray[String]>*/
}
varonce81 = var82;
if (unlikely(varonce88==NULL)) {
var89 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "extern const struct class class_";
var93 = core__abstract_text___CString___to_s_full(var92, 32l, 32l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var89)->values[0]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = ";";
var97 = core__abstract_text___CString___to_s_full(var96, 1l, 1l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var89)->values[2]=var95;
} else {
var89 = varonce88;
varonce88 = NULL;
}
((struct instance_core__NativeArray*)var89)->values[1]=var_c_name;
{
var98 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var87, var98); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce99==NULL)) {
var100 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "const struct class class_";
var104 = core__abstract_text___CString___to_s_full(var103, 25l, 25l);
var102 = var104;
varonce101 = var102;
}
((struct instance_core__NativeArray*)var100)->values[0]=var102;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = " = {";
var108 = core__abstract_text___CString___to_s_full(var107, 4l, 4l);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var100)->values[2]=var106;
} else {
var100 = varonce99;
varonce99 = NULL;
}
((struct instance_core__NativeArray*)var100)->values[1]=var_c_name;
{
var109 = ((val*(*)(val* self))(var100->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var100); /* native_to_s on <var100:NativeArray[String]>*/
}
varonce99 = var100;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var109); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce110==NULL)) {
var111 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = ", /* box_kind */";
var115 = core__abstract_text___CString___to_s_full(var114, 16l, 16l);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var111)->values[1]=var113;
} else {
var111 = varonce110;
varonce110 = NULL;
}
{
var116 = nitc___nitc__SeparateCompiler___box_kind_of(self, var_mclass);
}
var117 = core__flat___Int___core__abstract_text__Object__to_s(var116);
((struct instance_core__NativeArray*)var111)->values[0]=var117;
{
var118 = ((val*(*)(val* self))(var111->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var111); /* native_to_s on <var111:NativeArray[String]>*/
}
varonce110 = var111;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var118); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "{";
var122 = core__abstract_text___CString___to_s_full(var121, 1l, 1l);
var120 = var122;
varonce119 = var120;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var120); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateCompiler> */
var125 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1073);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
var126 = ((val*(*)(val* self, val* p0))((((long)var123&3)?class_info[((long)var123&3)]:var123->class)->vft[COLOR_core__abstract_collection__MapRead__get_or_null]))(var123, var_mclass); /* get_or_null on <var123:Map[MClass, Array[nullable MPropDef]]>*/
}
var_vft = var126;
if (var_vft == NULL) {
var127 = 0; /* is null */
} else {
var127 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_vft,((val*)NULL)) on <var_vft:nullable Array[nullable MPropDef]> */
var_other = ((val*)NULL);
{
var130 = ((short int(*)(val* self, val* p0))(var_vft->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_vft, var_other); /* == on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])>*/
}
var131 = !var130;
var128 = var131;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
var127 = var128;
}
if (var127){
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_vft) on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])> */
var134 = var_vft->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_vft:nullable Array[nullable MPropDef](Array[nullable MPropDef])> */
var132 = var134;
RET_LABEL133:(void)0;
}
}
var_135 = var132;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_135) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_135:Int> isa OTHER */
/* <var_135:Int> isa OTHER */
var138 = 1; /* easy <var_135:Int> isa OTHER*/
if (unlikely(!var138)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var139 = var_i < var_135;
var136 = var139;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
if (var136){
} else {
goto BREAK_label;
}
{
var140 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_vft, var_i);
}
var_mpropdef = var140;
if (var_mpropdef == NULL) {
var141 = 1; /* is null */
} else {
var141 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MPropDef> */
var_other38 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other38) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var146 = var_mpropdef == var_other38;
var144 = var146;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
var141 = var142;
}
if (var141){
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "NULL, /* empty */";
var150 = core__abstract_text___CString___to_s_full(var149, 17l, 17l);
var148 = var150;
varonce147 = var148;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var148); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
/* <var_mpropdef:nullable MPropDef(MPropDef)> isa MMethodDef */
cltype152 = type_nitc__MMethodDef.color;
idtype153 = type_nitc__MMethodDef.id;
if(cltype152 >= var_mpropdef->type->table_size) {
var151 = 0;
} else {
var151 = var_mpropdef->type->type_table[cltype152] == idtype153;
}
if (unlikely(!var151)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 844);
fatal_exit(1);
}
if (var_rta == NULL) {
var155 = 0; /* is null */
} else {
var155 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rta,((val*)NULL)) on <var_rta:nullable RapidTypeAnalysis> */
var_other = ((val*)NULL);
{
var158 = ((short int(*)(val* self, val* p0))(var_rta->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rta, var_other); /* == on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)>*/
}
var159 = !var158;
var156 = var159;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
var155 = var156;
}
var_160 = var155;
if (var155){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (var_rta) on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
var163 = var_rta->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <var_rta:nullable RapidTypeAnalysis(RapidTypeAnalysis)> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
var164 = core___core__HashSet___core__abstract_collection__Collection__has(var161, var_mpropdef);
}
var165 = !var164;
var154 = var165;
} else {
var154 = var_160;
}
if (var154){
if (unlikely(varonce166==NULL)) {
var167 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "NULL, /* DEAD ";
var171 = core__abstract_text___CString___to_s_full(var170, 14l, 14l);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var167)->values[0]=var169;
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = ":";
var175 = core__abstract_text___CString___to_s_full(var174, 1l, 1l);
var173 = var175;
varonce172 = var173;
}
((struct instance_core__NativeArray*)var167)->values[2]=var173;
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = ":";
var179 = core__abstract_text___CString___to_s_full(var178, 1l, 1l);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var167)->values[4]=var177;
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = " */";
var183 = core__abstract_text___CString___to_s_full(var182, 3l, 3l);
var181 = var183;
varonce180 = var181;
}
((struct instance_core__NativeArray*)var167)->values[6]=var181;
} else {
var167 = varonce166;
varonce166 = NULL;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var186 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var186 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
{
var187 = ((val*(*)(val* self))(var184->class->vft[COLOR_core__abstract_text__Object__to_s]))(var184); /* to_s on <var184:MModule>*/
}
((struct instance_core__NativeArray*)var167)->values[1]=var187;
{
var188 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var167)->values[3]=var188;
{
var189 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var167)->values[5]=var189;
{
var190 = ((val*(*)(val* self))(var167->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var167); /* native_to_s on <var167:NativeArray[String]>*/
}
varonce166 = var167;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var190); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label191;
} else {
{
{ /* Inline model_base#MEntity#is_broken (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var196 = var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var194 = var196;
RET_LABEL195:(void)0;
}
}
var_197 = var194;
if (var194){
var193 = var_197;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var200 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var198 = var200;
RET_LABEL199:(void)0;
}
}
if (var198 == NULL) {
var201 = 1; /* is null */
} else {
var201 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var198,((val*)NULL)) on <var198:nullable MSignature> */
var_other38 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var198,var_other38) on <var198:nullable MSignature(MSignature)> */
var206 = var198 == var_other38;
var204 = var206;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
}
var202 = var204;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
var201 = var202;
}
var193 = var201;
}
var_207 = var193;
if (var193){
var192 = var_207;
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var210 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
{ /* Inline model_base#MEntity#is_broken (var208) on <var208:MProperty(MMethod)> */
var213 = var208->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var208:MProperty(MMethod)> */
var211 = var213;
RET_LABEL212:(void)0;
}
}
var192 = var211;
}
if (var192){
if (unlikely(varonce214==NULL)) {
var215 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "NULL, /* DEAD (BROKEN) ";
var219 = core__abstract_text___CString___to_s_full(var218, 23l, 23l);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var215)->values[0]=var217;
if (likely(varonce220!=NULL)) {
var221 = varonce220;
} else {
var222 = ":";
var223 = core__abstract_text___CString___to_s_full(var222, 1l, 1l);
var221 = var223;
varonce220 = var221;
}
((struct instance_core__NativeArray*)var215)->values[2]=var221;
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = ":";
var227 = core__abstract_text___CString___to_s_full(var226, 1l, 1l);
var225 = var227;
varonce224 = var225;
}
((struct instance_core__NativeArray*)var215)->values[4]=var225;
if (likely(varonce228!=NULL)) {
var229 = varonce228;
} else {
var230 = " */";
var231 = core__abstract_text___CString___to_s_full(var230, 3l, 3l);
var229 = var231;
varonce228 = var229;
}
((struct instance_core__NativeArray*)var215)->values[6]=var229;
} else {
var215 = varonce214;
varonce214 = NULL;
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var234 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
var235 = ((val*(*)(val* self))(var232->class->vft[COLOR_core__abstract_text__Object__to_s]))(var232); /* to_s on <var232:MModule>*/
}
((struct instance_core__NativeArray*)var215)->values[1]=var235;
{
var236 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var215)->values[3]=var236;
{
var237 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var215)->values[5]=var237;
{
var238 = ((val*(*)(val* self))(var215->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var215); /* native_to_s on <var215:NativeArray[String]>*/
}
varonce214 = var215;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var238); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
goto BREAK_label191;
} else {
}
}
{
var239 = nitc__separate_compiler___MMethodDef___virtual_runtime_function(var_mpropdef);
}
var_rf = var239;
{
var240 = nitc___nitc__AbstractRuntimeFunction___c_name(var_rf);
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var240); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce241==NULL)) {
var242 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = "(nitmethod_t)";
var246 = core__abstract_text___CString___to_s_full(var245, 13l, 13l);
var244 = var246;
varonce243 = var244;
}
((struct instance_core__NativeArray*)var242)->values[0]=var244;
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = ", /* pointer to ";
var250 = core__abstract_text___CString___to_s_full(var249, 16l, 16l);
var248 = var250;
varonce247 = var248;
}
((struct instance_core__NativeArray*)var242)->values[2]=var248;
if (likely(varonce251!=NULL)) {
var252 = varonce251;
} else {
var253 = ":";
var254 = core__abstract_text___CString___to_s_full(var253, 1l, 1l);
var252 = var254;
varonce251 = var252;
}
((struct instance_core__NativeArray*)var242)->values[4]=var252;
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = ":";
var258 = core__abstract_text___CString___to_s_full(var257, 1l, 1l);
var256 = var258;
varonce255 = var256;
}
((struct instance_core__NativeArray*)var242)->values[6]=var256;
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = " */";
var262 = core__abstract_text___CString___to_s_full(var261, 3l, 3l);
var260 = var262;
varonce259 = var260;
}
((struct instance_core__NativeArray*)var242)->values[8]=var260;
} else {
var242 = varonce241;
varonce241 = NULL;
}
{
var263 = nitc___nitc__AbstractRuntimeFunction___c_name(var_rf);
}
((struct instance_core__NativeArray*)var242)->values[1]=var263;
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var266 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
{
var267 = ((val*(*)(val* self))(var264->class->vft[COLOR_core__abstract_text__Object__to_s]))(var264); /* to_s on <var264:MModule>*/
}
((struct instance_core__NativeArray*)var242)->values[3]=var267;
{
var268 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var242)->values[5]=var268;
{
var269 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:nullable MPropDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var242)->values[7]=var269;
{
var270 = ((val*(*)(val* self))(var242->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var242); /* native_to_s on <var242:NativeArray[String]>*/
}
varonce241 = var242;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var270); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
BREAK_label191: (void)0;
{
var271 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var271;
}
BREAK_label: (void)0;
} else {
}
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = "}";
var275 = core__abstract_text___CString___to_s_full(var274, 1l, 1l);
var273 = var275;
varonce272 = var273;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var273); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce276!=NULL)) {
var277 = varonce276;
} else {
var278 = "};";
var279 = core__abstract_text___CString___to_s_full(var278, 2l, 2l);
var277 = var279;
varonce276 = var277;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var277); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
{
var281 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var_282 = var281;
if (var281){
var280 = var_282;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var285 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var285 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
{
{ /* Inline model#MClass#name (var283) on <var283:MClass> */
var288 = var283->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var283:MClass> */
if (unlikely(var288 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var286 = var288;
RET_LABEL287:(void)0;
}
}
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = "Pointer";
var292 = core__abstract_text___CString___to_s_full(var291, 7l, 7l);
var290 = var292;
varonce289 = var290;
}
{
var293 = ((short int(*)(val* self, val* p0))(var286->class->vft[COLOR_core__kernel__Object___61d_61d]))(var286, var290); /* == on <var286:String>*/
}
var280 = var293;
}
if (var280){
{
{ /* Inline separate_compiler#MType#is_tagged (var_mtype) on <var_mtype:MClassType> */
var296 = var_mtype->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s; /* _is_tagged on <var_mtype:MClassType> */
var294 = var296;
RET_LABEL295:(void)0;
}
}
if (var294){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var299 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var299 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var297 = var299;
RET_LABEL298:(void)0;
}
}
if (unlikely(varonce300==NULL)) {
var301 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce302!=NULL)) {
var303 = varonce302;
} else {
var304 = "struct instance_";
var305 = core__abstract_text___CString___to_s_full(var304, 16l, 16l);
var303 = var305;
varonce302 = var303;
}
((struct instance_core__NativeArray*)var301)->values[0]=var303;
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = " {";
var309 = core__abstract_text___CString___to_s_full(var308, 2l, 2l);
var307 = var309;
varonce306 = var307;
}
((struct instance_core__NativeArray*)var301)->values[2]=var307;
} else {
var301 = varonce300;
varonce300 = NULL;
}
((struct instance_core__NativeArray*)var301)->values[1]=var_c_name;
{
var310 = ((val*(*)(val* self))(var301->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var301); /* native_to_s on <var301:NativeArray[String]>*/
}
varonce300 = var301;
{
nitc___nitc__CodeWriter___add_decl(var297, var310); /* Direct call abstract_compiler#CodeWriter#add_decl on <var297:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var313 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var313 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var311 = var313;
RET_LABEL312:(void)0;
}
}
if (likely(varonce314!=NULL)) {
var315 = varonce314;
} else {
var316 = "const struct type *type;";
var317 = core__abstract_text___CString___to_s_full(var316, 24l, 24l);
var315 = var317;
varonce314 = var315;
}
{
nitc___nitc__CodeWriter___add_decl(var311, var315); /* Direct call abstract_compiler#CodeWriter#add_decl on <var311:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var320 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var320 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var318 = var320;
RET_LABEL319:(void)0;
}
}
if (likely(varonce321!=NULL)) {
var322 = varonce321;
} else {
var323 = "const struct class *class;";
var324 = core__abstract_text___CString___to_s_full(var323, 26l, 26l);
var322 = var324;
varonce321 = var322;
}
{
nitc___nitc__CodeWriter___add_decl(var318, var322); /* Direct call abstract_compiler#CodeWriter#add_decl on <var318:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var327 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var327 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var325 = var327;
RET_LABEL326:(void)0;
}
}
if (unlikely(varonce328==NULL)) {
var329 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce330!=NULL)) {
var331 = varonce330;
} else {
var332 = " value;";
var333 = core__abstract_text___CString___to_s_full(var332, 7l, 7l);
var331 = var333;
varonce330 = var331;
}
((struct instance_core__NativeArray*)var329)->values[1]=var331;
} else {
var329 = varonce328;
varonce328 = NULL;
}
{
var334 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var329)->values[0]=var334;
{
var335 = ((val*(*)(val* self))(var329->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var329); /* native_to_s on <var329:NativeArray[String]>*/
}
varonce328 = var329;
{
nitc___nitc__CodeWriter___add_decl(var325, var335); /* Direct call abstract_compiler#CodeWriter#add_decl on <var325:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var338 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var338 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var336 = var338;
RET_LABEL337:(void)0;
}
}
if (likely(varonce339!=NULL)) {
var340 = varonce339;
} else {
var341 = "};";
var342 = core__abstract_text___CString___to_s_full(var341, 2l, 2l);
var340 = var342;
varonce339 = var340;
}
{
nitc___nitc__CodeWriter___add_decl(var336, var340); /* Direct call abstract_compiler#CodeWriter#add_decl on <var336:CodeWriter>*/
}
var_344 = var_is_dead;
if (var_is_dead){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var347 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var347 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var345 = var347;
RET_LABEL346:(void)0;
}
}
{
{ /* Inline model#MClass#name (var345) on <var345:MClass> */
var350 = var345->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var345:MClass> */
if (unlikely(var350 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var348 = var350;
RET_LABEL349:(void)0;
}
}
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = "Pointer";
var354 = core__abstract_text___CString___to_s_full(var353, 7l, 7l);
var352 = var354;
varonce351 = var352;
}
{
{ /* Inline kernel#Object#!= (var348,var352) on <var348:String> */
var_other = var352;
{
var357 = ((short int(*)(val* self, val* p0))(var348->class->vft[COLOR_core__kernel__Object___61d_61d]))(var348, var_other); /* == on <var348:String>*/
}
var358 = !var357;
var355 = var358;
goto RET_LABEL356;
RET_LABEL356:(void)0;
}
}
var343 = var355;
} else {
var343 = var_344;
}
if (var343){
goto RET_LABEL;
} else {
}
if (unlikely(varonce359==NULL)) {
var360 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce361!=NULL)) {
var362 = varonce361;
} else {
var363 = "BOX_";
var364 = core__abstract_text___CString___to_s_full(var363, 4l, 4l);
var362 = var364;
varonce361 = var362;
}
((struct instance_core__NativeArray*)var360)->values[0]=var362;
} else {
var360 = varonce359;
varonce359 = NULL;
}
((struct instance_core__NativeArray*)var360)->values[1]=var_c_name;
{
var365 = ((val*(*)(val* self))(var360->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var360); /* native_to_s on <var360:NativeArray[String]>*/
}
varonce359 = var360;
if (unlikely(varonce366==NULL)) {
var367 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce368!=NULL)) {
var369 = varonce368;
} else {
var370 = "val* BOX_";
var371 = core__abstract_text___CString___to_s_full(var370, 9l, 9l);
var369 = var371;
varonce368 = var369;
}
((struct instance_core__NativeArray*)var367)->values[0]=var369;
if (likely(varonce372!=NULL)) {
var373 = varonce372;
} else {
var374 = "(";
var375 = core__abstract_text___CString___to_s_full(var374, 1l, 1l);
var373 = var375;
varonce372 = var373;
}
((struct instance_core__NativeArray*)var367)->values[2]=var373;
if (likely(varonce376!=NULL)) {
var377 = varonce376;
} else {
var378 = ");";
var379 = core__abstract_text___CString___to_s_full(var378, 2l, 2l);
var377 = var379;
varonce376 = var377;
}
((struct instance_core__NativeArray*)var367)->values[4]=var377;
} else {
var367 = varonce366;
varonce366 = NULL;
}
((struct instance_core__NativeArray*)var367)->values[1]=var_c_name;
{
var380 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var367)->values[3]=var380;
{
var381 = ((val*(*)(val* self))(var367->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var367); /* native_to_s on <var367:NativeArray[String]>*/
}
varonce366 = var367;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var365, var381); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce382==NULL)) {
var383 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce384!=NULL)) {
var385 = varonce384;
} else {
var386 = "/* allocate ";
var387 = core__abstract_text___CString___to_s_full(var386, 12l, 12l);
var385 = var387;
varonce384 = var385;
}
((struct instance_core__NativeArray*)var383)->values[0]=var385;
if (likely(varonce388!=NULL)) {
var389 = varonce388;
} else {
var390 = " */";
var391 = core__abstract_text___CString___to_s_full(var390, 3l, 3l);
var389 = var391;
varonce388 = var389;
}
((struct instance_core__NativeArray*)var383)->values[2]=var389;
} else {
var383 = varonce382;
varonce382 = NULL;
}
{
var392 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var383)->values[1]=var392;
{
var393 = ((val*(*)(val* self))(var383->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var383); /* native_to_s on <var383:NativeArray[String]>*/
}
varonce382 = var383;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var393); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce394==NULL)) {
var395 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce396!=NULL)) {
var397 = varonce396;
} else {
var398 = "val* BOX_";
var399 = core__abstract_text___CString___to_s_full(var398, 9l, 9l);
var397 = var399;
varonce396 = var397;
}
((struct instance_core__NativeArray*)var395)->values[0]=var397;
if (likely(varonce400!=NULL)) {
var401 = varonce400;
} else {
var402 = "(";
var403 = core__abstract_text___CString___to_s_full(var402, 1l, 1l);
var401 = var403;
varonce400 = var401;
}
((struct instance_core__NativeArray*)var395)->values[2]=var401;
if (likely(varonce404!=NULL)) {
var405 = varonce404;
} else {
var406 = " value) {";
var407 = core__abstract_text___CString___to_s_full(var406, 9l, 9l);
var405 = var407;
varonce404 = var405;
}
((struct instance_core__NativeArray*)var395)->values[4]=var405;
} else {
var395 = varonce394;
varonce394 = NULL;
}
{
var408 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var395)->values[1]=var408;
{
var409 = nitc__abstract_compiler___MClassType___MType__ctype_extern(var_mtype);
}
((struct instance_core__NativeArray*)var395)->values[3]=var409;
{
var410 = ((val*(*)(val* self))(var395->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var395); /* native_to_s on <var395:NativeArray[String]>*/
}
varonce394 = var395;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var410); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce411==NULL)) {
var412 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "sizeof(struct instance_";
var416 = core__abstract_text___CString___to_s_full(var415, 23l, 23l);
var414 = var416;
varonce413 = var414;
}
((struct instance_core__NativeArray*)var412)->values[0]=var414;
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = ")";
var420 = core__abstract_text___CString___to_s_full(var419, 1l, 1l);
var418 = var420;
varonce417 = var418;
}
((struct instance_core__NativeArray*)var412)->values[2]=var418;
} else {
var412 = varonce411;
varonce411 = NULL;
}
((struct instance_core__NativeArray*)var412)->values[1]=var_c_name;
{
var421 = ((val*(*)(val* self))(var412->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var412); /* native_to_s on <var412:NativeArray[String]>*/
}
varonce411 = var412;
{
var422 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
{
var423 = nitc__memory_logger___AbstractCompilerVisitor___nit_alloc(var_v, var421, var422);
}
var_alloc = var423;
if (unlikely(varonce424==NULL)) {
var425 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce426!=NULL)) {
var427 = varonce426;
} else {
var428 = "struct instance_";
var429 = core__abstract_text___CString___to_s_full(var428, 16l, 16l);
var427 = var429;
varonce426 = var427;
}
((struct instance_core__NativeArray*)var425)->values[0]=var427;
if (likely(varonce430!=NULL)) {
var431 = varonce430;
} else {
var432 = "*res = ";
var433 = core__abstract_text___CString___to_s_full(var432, 7l, 7l);
var431 = var433;
varonce430 = var431;
}
((struct instance_core__NativeArray*)var425)->values[2]=var431;
if (likely(varonce434!=NULL)) {
var435 = varonce434;
} else {
var436 = ";";
var437 = core__abstract_text___CString___to_s_full(var436, 1l, 1l);
var435 = var437;
varonce434 = var435;
}
((struct instance_core__NativeArray*)var425)->values[4]=var435;
} else {
var425 = varonce424;
varonce424 = NULL;
}
((struct instance_core__NativeArray*)var425)->values[1]=var_c_name;
((struct instance_core__NativeArray*)var425)->values[3]=var_alloc;
{
var438 = ((val*(*)(val* self))(var425->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var425); /* native_to_s on <var425:NativeArray[String]>*/
}
varonce424 = var425;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var438); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var441 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
if (unlikely(var441 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var439 = var441;
RET_LABEL440:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (var439) on <var439:AbstractCompiler(SeparateCompiler)> */
var444 = var439->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <var439:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var444 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var442 = var444;
RET_LABEL443:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var442&3)?class_info[((long)var442&3)]:var442->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var442, var_mtype); /* add on <var442:Set[MType]>*/
}
if (unlikely(varonce445==NULL)) {
var446 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce447!=NULL)) {
var448 = varonce447;
} else {
var449 = "type_";
var450 = core__abstract_text___CString___to_s_full(var449, 5l, 5l);
var448 = var450;
varonce447 = var448;
}
((struct instance_core__NativeArray*)var446)->values[0]=var448;
} else {
var446 = varonce445;
varonce445 = NULL;
}
((struct instance_core__NativeArray*)var446)->values[1]=var_c_name;
{
var451 = ((val*(*)(val* self))(var446->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var446); /* native_to_s on <var446:NativeArray[String]>*/
}
varonce445 = var446;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var451); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce452==NULL)) {
var453 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce454!=NULL)) {
var455 = varonce454;
} else {
var456 = "res->type = &type_";
var457 = core__abstract_text___CString___to_s_full(var456, 18l, 18l);
var455 = var457;
varonce454 = var455;
}
((struct instance_core__NativeArray*)var453)->values[0]=var455;
if (likely(varonce458!=NULL)) {
var459 = varonce458;
} else {
var460 = ";";
var461 = core__abstract_text___CString___to_s_full(var460, 1l, 1l);
var459 = var461;
varonce458 = var459;
}
((struct instance_core__NativeArray*)var453)->values[2]=var459;
} else {
var453 = varonce452;
varonce452 = NULL;
}
((struct instance_core__NativeArray*)var453)->values[1]=var_c_name;
{
var462 = ((val*(*)(val* self))(var453->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var453); /* native_to_s on <var453:NativeArray[String]>*/
}
varonce452 = var453;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var462); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce463==NULL)) {
var464 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce465!=NULL)) {
var466 = varonce465;
} else {
var467 = "class_";
var468 = core__abstract_text___CString___to_s_full(var467, 6l, 6l);
var466 = var468;
varonce465 = var466;
}
((struct instance_core__NativeArray*)var464)->values[0]=var466;
} else {
var464 = varonce463;
varonce463 = NULL;
}
((struct instance_core__NativeArray*)var464)->values[1]=var_c_name;
{
var469 = ((val*(*)(val* self))(var464->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var464); /* native_to_s on <var464:NativeArray[String]>*/
}
varonce463 = var464;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var469); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce470==NULL)) {
var471 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce472!=NULL)) {
var473 = varonce472;
} else {
var474 = "res->class = &class_";
var475 = core__abstract_text___CString___to_s_full(var474, 20l, 20l);
var473 = var475;
varonce472 = var473;
}
((struct instance_core__NativeArray*)var471)->values[0]=var473;
if (likely(varonce476!=NULL)) {
var477 = varonce476;
} else {
var478 = ";";
var479 = core__abstract_text___CString___to_s_full(var478, 1l, 1l);
var477 = var479;
varonce476 = var477;
}
((struct instance_core__NativeArray*)var471)->values[2]=var477;
} else {
var471 = varonce470;
varonce470 = NULL;
}
((struct instance_core__NativeArray*)var471)->values[1]=var_c_name;
{
var480 = ((val*(*)(val* self))(var471->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var471); /* native_to_s on <var471:NativeArray[String]>*/
}
varonce470 = var471;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var480); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce481!=NULL)) {
var482 = varonce481;
} else {
var483 = "res->value = value;";
var484 = core__abstract_text___CString___to_s_full(var483, 19l, 19l);
var482 = var484;
varonce481 = var482;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var482); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce485!=NULL)) {
var486 = varonce485;
} else {
var487 = "return (val*)res;";
var488 = core__abstract_text___CString___to_s_full(var487, 17l, 17l);
var486 = var488;
varonce485 = var486;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var486); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce489!=NULL)) {
var490 = varonce489;
} else {
var491 = "}";
var492 = core__abstract_text___CString___to_s_full(var491, 1l, 1l);
var490 = var492;
varonce489 = var490;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var490); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var495 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var495 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var493 = var495;
RET_LABEL494:(void)0;
}
}
{
{ /* Inline model#MClass#name (var493) on <var493:MClass> */
var498 = var493->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var493:MClass> */
if (unlikely(var498 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var496 = var498;
RET_LABEL497:(void)0;
}
}
if (likely(varonce499!=NULL)) {
var500 = varonce499;
} else {
var501 = "Pointer";
var502 = core__abstract_text___CString___to_s_full(var501, 7l, 7l);
var500 = var502;
varonce499 = var500;
}
{
{ /* Inline kernel#Object#!= (var496,var500) on <var496:String> */
var_other = var500;
{
var505 = ((short int(*)(val* self, val* p0))(var496->class->vft[COLOR_core__kernel__Object___61d_61d]))(var496, var_other); /* == on <var496:String>*/
}
var506 = !var505;
var503 = var506;
goto RET_LABEL504;
RET_LABEL504:(void)0;
}
}
if (var503){
goto RET_LABEL;
} else {
}
{
var507 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var507;
if (unlikely(varonce508==NULL)) {
var509 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce510!=NULL)) {
var511 = varonce510;
} else {
var512 = "NEW_";
var513 = core__abstract_text___CString___to_s_full(var512, 4l, 4l);
var511 = var513;
varonce510 = var511;
}
((struct instance_core__NativeArray*)var509)->values[0]=var511;
} else {
var509 = varonce508;
varonce508 = NULL;
}
((struct instance_core__NativeArray*)var509)->values[1]=var_c_name;
{
var514 = ((val*(*)(val* self))(var509->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var509); /* native_to_s on <var509:NativeArray[String]>*/
}
varonce508 = var509;
if (unlikely(varonce515==NULL)) {
var516 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce517!=NULL)) {
var518 = varonce517;
} else {
var519 = " NEW_";
var520 = core__abstract_text___CString___to_s_full(var519, 5l, 5l);
var518 = var520;
varonce517 = var518;
}
((struct instance_core__NativeArray*)var516)->values[1]=var518;
if (likely(varonce521!=NULL)) {
var522 = varonce521;
} else {
var523 = "(const struct type* type);";
var524 = core__abstract_text___CString___to_s_full(var523, 26l, 26l);
var522 = var524;
varonce521 = var522;
}
((struct instance_core__NativeArray*)var516)->values[3]=var522;
} else {
var516 = varonce515;
varonce515 = NULL;
}
{
var525 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var516)->values[0]=var525;
((struct instance_core__NativeArray*)var516)->values[2]=var_c_name;
{
var526 = ((val*(*)(val* self))(var516->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var516); /* native_to_s on <var516:NativeArray[String]>*/
}
varonce515 = var516;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var514, var526); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce527==NULL)) {
var528 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce529!=NULL)) {
var530 = varonce529;
} else {
var531 = "/* allocate ";
var532 = core__abstract_text___CString___to_s_full(var531, 12l, 12l);
var530 = var532;
varonce529 = var530;
}
((struct instance_core__NativeArray*)var528)->values[0]=var530;
if (likely(varonce533!=NULL)) {
var534 = varonce533;
} else {
var535 = " */";
var536 = core__abstract_text___CString___to_s_full(var535, 3l, 3l);
var534 = var536;
varonce533 = var534;
}
((struct instance_core__NativeArray*)var528)->values[2]=var534;
} else {
var528 = varonce527;
varonce527 = NULL;
}
{
var537 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var528)->values[1]=var537;
{
var538 = ((val*(*)(val* self))(var528->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var528); /* native_to_s on <var528:NativeArray[String]>*/
}
varonce527 = var528;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var538); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce539==NULL)) {
var540 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce541!=NULL)) {
var542 = varonce541;
} else {
var543 = " NEW_";
var544 = core__abstract_text___CString___to_s_full(var543, 5l, 5l);
var542 = var544;
varonce541 = var542;
}
((struct instance_core__NativeArray*)var540)->values[1]=var542;
if (likely(varonce545!=NULL)) {
var546 = varonce545;
} else {
var547 = "(const struct type* type) {";
var548 = core__abstract_text___CString___to_s_full(var547, 27l, 27l);
var546 = var548;
varonce545 = var546;
}
((struct instance_core__NativeArray*)var540)->values[3]=var546;
} else {
var540 = varonce539;
varonce539 = NULL;
}
{
var549 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var540)->values[0]=var549;
((struct instance_core__NativeArray*)var540)->values[2]=var_c_name;
{
var550 = ((val*(*)(val* self))(var540->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var540); /* native_to_s on <var540:NativeArray[String]>*/
}
varonce539 = var540;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var550); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce551==NULL)) {
var552 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce553!=NULL)) {
var554 = varonce553;
} else {
var555 = " is DEAD";
var556 = core__abstract_text___CString___to_s_full(var555, 8l, 8l);
var554 = var556;
varonce553 = var554;
}
((struct instance_core__NativeArray*)var552)->values[1]=var554;
} else {
var552 = varonce551;
varonce551 = NULL;
}
{
var557 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var552)->values[0]=var557;
{
var558 = ((val*(*)(val* self))(var552->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var552); /* native_to_s on <var552:NativeArray[String]>*/
}
varonce551 = var552;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var558); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce559!=NULL)) {
var560 = varonce559;
} else {
var561 = "self";
var562 = core__abstract_text___CString___to_s_full(var561, 4l, 4l);
var560 = var562;
varonce559 = var560;
}
{
var563 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var560);
}
var_res = var563;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res,1) on <var_res:RuntimeVariable> */
var_res->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res:RuntimeVariable> */
RET_LABEL564:(void)0;
}
}
if (unlikely(varonce565==NULL)) {
var566 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce567!=NULL)) {
var568 = varonce567;
} else {
var569 = "sizeof(struct instance_";
var570 = core__abstract_text___CString___to_s_full(var569, 23l, 23l);
var568 = var570;
varonce567 = var568;
}
((struct instance_core__NativeArray*)var566)->values[0]=var568;
if (likely(varonce571!=NULL)) {
var572 = varonce571;
} else {
var573 = ")";
var574 = core__abstract_text___CString___to_s_full(var573, 1l, 1l);
var572 = var574;
varonce571 = var572;
}
((struct instance_core__NativeArray*)var566)->values[2]=var572;
} else {
var566 = varonce565;
varonce565 = NULL;
}
{
var575 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var566)->values[1]=var575;
{
var576 = ((val*(*)(val* self))(var566->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var566); /* native_to_s on <var566:NativeArray[String]>*/
}
varonce565 = var566;
{
var577 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
{
var578 = nitc__memory_logger___AbstractCompilerVisitor___nit_alloc(var_v, var576, var577);
}
var_alloc = var578;
if (unlikely(varonce579==NULL)) {
var580 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce581!=NULL)) {
var582 = varonce581;
} else {
var583 = " = ";
var584 = core__abstract_text___CString___to_s_full(var583, 3l, 3l);
var582 = var584;
varonce581 = var582;
}
((struct instance_core__NativeArray*)var580)->values[1]=var582;
if (likely(varonce585!=NULL)) {
var586 = varonce585;
} else {
var587 = ";";
var588 = core__abstract_text___CString___to_s_full(var587, 1l, 1l);
var586 = var588;
varonce585 = var586;
}
((struct instance_core__NativeArray*)var580)->values[3]=var586;
} else {
var580 = varonce579;
varonce579 = NULL;
}
{
var589 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var580)->values[0]=var589;
((struct instance_core__NativeArray*)var580)->values[2]=var_alloc;
{
var590 = ((val*(*)(val* self))(var580->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var580); /* native_to_s on <var580:NativeArray[String]>*/
}
varonce579 = var580;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var590); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce591==NULL)) {
var592 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce593!=NULL)) {
var594 = varonce593;
} else {
var595 = "->type = type;";
var596 = core__abstract_text___CString___to_s_full(var595, 14l, 14l);
var594 = var596;
varonce593 = var594;
}
((struct instance_core__NativeArray*)var592)->values[1]=var594;
} else {
var592 = varonce591;
varonce591 = NULL;
}
{
var597 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var592)->values[0]=var597;
{
var598 = ((val*(*)(val* self))(var592->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var592); /* native_to_s on <var592:NativeArray[String]>*/
}
varonce591 = var592;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var598); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce599!=NULL)) {
var600 = varonce599;
} else {
var601 = "type";
var602 = core__abstract_text___CString___to_s_full(var601, 4l, 4l);
var600 = var602;
varonce599 = var600;
}
{
nitc___nitc__SeparateCompiler___hardening_live_type(self, var_v, var600); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce603==NULL)) {
var604 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce605!=NULL)) {
var606 = varonce605;
} else {
var607 = "class_";
var608 = core__abstract_text___CString___to_s_full(var607, 6l, 6l);
var606 = var608;
varonce605 = var606;
}
((struct instance_core__NativeArray*)var604)->values[0]=var606;
} else {
var604 = varonce603;
varonce603 = NULL;
}
((struct instance_core__NativeArray*)var604)->values[1]=var_c_name;
{
var609 = ((val*(*)(val* self))(var604->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var604); /* native_to_s on <var604:NativeArray[String]>*/
}
varonce603 = var604;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var609); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce610==NULL)) {
var611 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce612!=NULL)) {
var613 = varonce612;
} else {
var614 = "->class = &class_";
var615 = core__abstract_text___CString___to_s_full(var614, 17l, 17l);
var613 = var615;
varonce612 = var613;
}
((struct instance_core__NativeArray*)var611)->values[1]=var613;
if (likely(varonce616!=NULL)) {
var617 = varonce616;
} else {
var618 = ";";
var619 = core__abstract_text___CString___to_s_full(var618, 1l, 1l);
var617 = var619;
varonce616 = var617;
}
((struct instance_core__NativeArray*)var611)->values[3]=var617;
} else {
var611 = varonce610;
varonce610 = NULL;
}
{
var620 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var611)->values[0]=var620;
((struct instance_core__NativeArray*)var611)->values[2]=var_c_name;
{
var621 = ((val*(*)(val* self))(var611->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var611); /* native_to_s on <var611:NativeArray[String]>*/
}
varonce610 = var611;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var621); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce622==NULL)) {
var623 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce624!=NULL)) {
var625 = varonce624;
} else {
var626 = "((struct instance_";
var627 = core__abstract_text___CString___to_s_full(var626, 18l, 18l);
var625 = var627;
varonce624 = var625;
}
((struct instance_core__NativeArray*)var623)->values[0]=var625;
if (likely(varonce628!=NULL)) {
var629 = varonce628;
} else {
var630 = "*)";
var631 = core__abstract_text___CString___to_s_full(var630, 2l, 2l);
var629 = var631;
varonce628 = var629;
}
((struct instance_core__NativeArray*)var623)->values[2]=var629;
if (likely(varonce632!=NULL)) {
var633 = varonce632;
} else {
var634 = ")->value = NULL;";
var635 = core__abstract_text___CString___to_s_full(var634, 16l, 16l);
var633 = var635;
varonce632 = var633;
}
((struct instance_core__NativeArray*)var623)->values[4]=var633;
} else {
var623 = varonce622;
varonce622 = NULL;
}
{
var636 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_mtype); /* c_name on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var623)->values[1]=var636;
{
var637 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var623)->values[3]=var637;
{
var638 = ((val*(*)(val* self))(var623->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var623); /* native_to_s on <var623:NativeArray[String]>*/
}
varonce622 = var623;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var638); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce639==NULL)) {
var640 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce641!=NULL)) {
var642 = varonce641;
} else {
var643 = "return ";
var644 = core__abstract_text___CString___to_s_full(var643, 7l, 7l);
var642 = var644;
varonce641 = var642;
}
((struct instance_core__NativeArray*)var640)->values[0]=var642;
if (likely(varonce645!=NULL)) {
var646 = varonce645;
} else {
var647 = ";";
var648 = core__abstract_text___CString___to_s_full(var647, 1l, 1l);
var646 = var648;
varonce645 = var646;
}
((struct instance_core__NativeArray*)var640)->values[2]=var646;
} else {
var640 = varonce639;
varonce639 = NULL;
}
{
var649 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var640)->values[1]=var649;
{
var650 = ((val*(*)(val* self))(var640->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var640); /* native_to_s on <var640:NativeArray[String]>*/
}
varonce639 = var640;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var650); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce651!=NULL)) {
var652 = varonce651;
} else {
var653 = "}";
var654 = core__abstract_text___CString___to_s_full(var653, 1l, 1l);
var652 = var654;
varonce651 = var652;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var652); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClass#name (var_mclass) on <var_mclass:MClass> */
var657 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var657 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var655 = var657;
RET_LABEL656:(void)0;
}
}
if (likely(varonce658!=NULL)) {
var659 = varonce658;
} else {
var660 = "NativeArray";
var661 = core__abstract_text___CString___to_s_full(var660, 11l, 11l);
var659 = var661;
varonce658 = var659;
}
{
var662 = ((short int(*)(val* self, val* p0))(var655->class->vft[COLOR_core__kernel__Object___61d_61d]))(var655, var659); /* == on <var655:String>*/
}
if (var662){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var665 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var665 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var663 = var665;
RET_LABEL664:(void)0;
}
}
if (unlikely(varonce666==NULL)) {
var667 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce668!=NULL)) {
var669 = varonce668;
} else {
var670 = "struct instance_";
var671 = core__abstract_text___CString___to_s_full(var670, 16l, 16l);
var669 = var671;
varonce668 = var669;
}
((struct instance_core__NativeArray*)var667)->values[0]=var669;
if (likely(varonce672!=NULL)) {
var673 = varonce672;
} else {
var674 = " {";
var675 = core__abstract_text___CString___to_s_full(var674, 2l, 2l);
var673 = var675;
varonce672 = var673;
}
((struct instance_core__NativeArray*)var667)->values[2]=var673;
} else {
var667 = varonce666;
varonce666 = NULL;
}
((struct instance_core__NativeArray*)var667)->values[1]=var_c_name;
{
var676 = ((val*(*)(val* self))(var667->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var667); /* native_to_s on <var667:NativeArray[String]>*/
}
varonce666 = var667;
{
nitc___nitc__CodeWriter___add_decl(var663, var676); /* Direct call abstract_compiler#CodeWriter#add_decl on <var663:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var679 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var679 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var677 = var679;
RET_LABEL678:(void)0;
}
}
if (likely(varonce680!=NULL)) {
var681 = varonce680;
} else {
var682 = "const struct type *type;";
var683 = core__abstract_text___CString___to_s_full(var682, 24l, 24l);
var681 = var683;
varonce680 = var681;
}
{
nitc___nitc__CodeWriter___add_decl(var677, var681); /* Direct call abstract_compiler#CodeWriter#add_decl on <var677:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var686 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var686 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var684 = var686;
RET_LABEL685:(void)0;
}
}
if (likely(varonce687!=NULL)) {
var688 = varonce687;
} else {
var689 = "const struct class *class;";
var690 = core__abstract_text___CString___to_s_full(var689, 26l, 26l);
var688 = var690;
varonce687 = var688;
}
{
nitc___nitc__CodeWriter___add_decl(var684, var688); /* Direct call abstract_compiler#CodeWriter#add_decl on <var684:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var693 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var693 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var691 = var693;
RET_LABEL692:(void)0;
}
}
if (likely(varonce694!=NULL)) {
var695 = varonce694;
} else {
var696 = "int length;";
var697 = core__abstract_text___CString___to_s_full(var696, 11l, 11l);
var695 = var697;
varonce694 = var695;
}
{
nitc___nitc__CodeWriter___add_decl(var691, var695); /* Direct call abstract_compiler#CodeWriter#add_decl on <var691:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var700 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var700 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var698 = var700;
RET_LABEL699:(void)0;
}
}
if (likely(varonce701!=NULL)) {
var702 = varonce701;
} else {
var703 = "val* values[0];";
var704 = core__abstract_text___CString___to_s_full(var703, 15l, 15l);
var702 = var704;
varonce701 = var702;
}
{
nitc___nitc__CodeWriter___add_decl(var698, var702); /* Direct call abstract_compiler#CodeWriter#add_decl on <var698:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var707 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var707 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var705 = var707;
RET_LABEL706:(void)0;
}
}
if (likely(varonce708!=NULL)) {
var709 = varonce708;
} else {
var710 = "};";
var711 = core__abstract_text___CString___to_s_full(var710, 2l, 2l);
var709 = var711;
varonce708 = var709;
}
{
nitc___nitc__CodeWriter___add_decl(var705, var709); /* Direct call abstract_compiler#CodeWriter#add_decl on <var705:CodeWriter>*/
}
if (unlikely(varonce712==NULL)) {
var713 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce714!=NULL)) {
var715 = varonce714;
} else {
var716 = "NEW_";
var717 = core__abstract_text___CString___to_s_full(var716, 4l, 4l);
var715 = var717;
varonce714 = var715;
}
((struct instance_core__NativeArray*)var713)->values[0]=var715;
} else {
var713 = varonce712;
varonce712 = NULL;
}
((struct instance_core__NativeArray*)var713)->values[1]=var_c_name;
{
var718 = ((val*(*)(val* self))(var713->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var713); /* native_to_s on <var713:NativeArray[String]>*/
}
varonce712 = var713;
if (unlikely(varonce719==NULL)) {
var720 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce721!=NULL)) {
var722 = varonce721;
} else {
var723 = " NEW_";
var724 = core__abstract_text___CString___to_s_full(var723, 5l, 5l);
var722 = var724;
varonce721 = var722;
}
((struct instance_core__NativeArray*)var720)->values[1]=var722;
if (likely(varonce725!=NULL)) {
var726 = varonce725;
} else {
var727 = "(int length, const struct type* type);";
var728 = core__abstract_text___CString___to_s_full(var727, 38l, 38l);
var726 = var728;
varonce725 = var726;
}
((struct instance_core__NativeArray*)var720)->values[3]=var726;
} else {
var720 = varonce719;
varonce719 = NULL;
}
{
var729 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var720)->values[0]=var729;
((struct instance_core__NativeArray*)var720)->values[2]=var_c_name;
{
var730 = ((val*(*)(val* self))(var720->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var720); /* native_to_s on <var720:NativeArray[String]>*/
}
varonce719 = var720;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var718, var730); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce731==NULL)) {
var732 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce733!=NULL)) {
var734 = varonce733;
} else {
var735 = "/* allocate ";
var736 = core__abstract_text___CString___to_s_full(var735, 12l, 12l);
var734 = var736;
varonce733 = var734;
}
((struct instance_core__NativeArray*)var732)->values[0]=var734;
if (likely(varonce737!=NULL)) {
var738 = varonce737;
} else {
var739 = " */";
var740 = core__abstract_text___CString___to_s_full(var739, 3l, 3l);
var738 = var740;
varonce737 = var738;
}
((struct instance_core__NativeArray*)var732)->values[2]=var738;
} else {
var732 = varonce731;
varonce731 = NULL;
}
{
var741 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var732)->values[1]=var741;
{
var742 = ((val*(*)(val* self))(var732->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var732); /* native_to_s on <var732:NativeArray[String]>*/
}
varonce731 = var732;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var742); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce743==NULL)) {
var744 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce745!=NULL)) {
var746 = varonce745;
} else {
var747 = " NEW_";
var748 = core__abstract_text___CString___to_s_full(var747, 5l, 5l);
var746 = var748;
varonce745 = var746;
}
((struct instance_core__NativeArray*)var744)->values[1]=var746;
if (likely(varonce749!=NULL)) {
var750 = varonce749;
} else {
var751 = "(int length, const struct type* type) {";
var752 = core__abstract_text___CString___to_s_full(var751, 39l, 39l);
var750 = var752;
varonce749 = var750;
}
((struct instance_core__NativeArray*)var744)->values[3]=var750;
} else {
var744 = varonce743;
varonce743 = NULL;
}
{
var753 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var744)->values[0]=var753;
((struct instance_core__NativeArray*)var744)->values[2]=var_c_name;
{
var754 = ((val*(*)(val* self))(var744->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var744); /* native_to_s on <var744:NativeArray[String]>*/
}
varonce743 = var744;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var754); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce755!=NULL)) {
var756 = varonce755;
} else {
var757 = "self";
var758 = core__abstract_text___CString___to_s_full(var757, 4l, 4l);
var756 = var758;
varonce755 = var756;
}
{
var759 = nitc___nitc__AbstractCompilerVisitor___get_name(var_v, var756);
}
var_res760 = var759;
if (unlikely(varonce761==NULL)) {
var762 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce763!=NULL)) {
var764 = varonce763;
} else {
var765 = "struct instance_";
var766 = core__abstract_text___CString___to_s_full(var765, 16l, 16l);
var764 = var766;
varonce763 = var764;
}
((struct instance_core__NativeArray*)var762)->values[0]=var764;
if (likely(varonce767!=NULL)) {
var768 = varonce767;
} else {
var769 = " *";
var770 = core__abstract_text___CString___to_s_full(var769, 2l, 2l);
var768 = var770;
varonce767 = var768;
}
((struct instance_core__NativeArray*)var762)->values[2]=var768;
if (likely(varonce771!=NULL)) {
var772 = varonce771;
} else {
var773 = ";";
var774 = core__abstract_text___CString___to_s_full(var773, 1l, 1l);
var772 = var774;
varonce771 = var772;
}
((struct instance_core__NativeArray*)var762)->values[4]=var772;
} else {
var762 = varonce761;
varonce761 = NULL;
}
((struct instance_core__NativeArray*)var762)->values[1]=var_c_name;
((struct instance_core__NativeArray*)var762)->values[3]=var_res760;
{
var775 = ((val*(*)(val* self))(var762->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var762); /* native_to_s on <var762:NativeArray[String]>*/
}
varonce761 = var762;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var775); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
{
var776 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MClassType>*/
}
{
var777 = core___core__SequenceRead___Collection__first(var776);
}
var_mtype_elt = var777;
if (unlikely(varonce778==NULL)) {
var779 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce780!=NULL)) {
var781 = varonce780;
} else {
var782 = "sizeof(struct instance_";
var783 = core__abstract_text___CString___to_s_full(var782, 23l, 23l);
var781 = var783;
varonce780 = var781;
}
((struct instance_core__NativeArray*)var779)->values[0]=var781;
if (likely(varonce784!=NULL)) {
var785 = varonce784;
} else {
var786 = ") + length*sizeof(";
var787 = core__abstract_text___CString___to_s_full(var786, 18l, 18l);
var785 = var787;
varonce784 = var785;
}
((struct instance_core__NativeArray*)var779)->values[2]=var785;
if (likely(varonce788!=NULL)) {
var789 = varonce788;
} else {
var790 = ")";
var791 = core__abstract_text___CString___to_s_full(var790, 1l, 1l);
var789 = var791;
varonce788 = var789;
}
((struct instance_core__NativeArray*)var779)->values[4]=var789;
} else {
var779 = varonce778;
varonce778 = NULL;
}
((struct instance_core__NativeArray*)var779)->values[1]=var_c_name;
{
var792 = ((val*(*)(val* self))(var_mtype_elt->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype_elt); /* ctype on <var_mtype_elt:MType>*/
}
((struct instance_core__NativeArray*)var779)->values[3]=var792;
{
var793 = ((val*(*)(val* self))(var779->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var779); /* native_to_s on <var779:NativeArray[String]>*/
}
varonce778 = var779;
{
var794 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
{
var795 = nitc__memory_logger___AbstractCompilerVisitor___nit_alloc(var_v, var793, var794);
}
var_alloc796 = var795;
if (unlikely(varonce797==NULL)) {
var798 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce799!=NULL)) {
var800 = varonce799;
} else {
var801 = " = ";
var802 = core__abstract_text___CString___to_s_full(var801, 3l, 3l);
var800 = var802;
varonce799 = var800;
}
((struct instance_core__NativeArray*)var798)->values[1]=var800;
if (likely(varonce803!=NULL)) {
var804 = varonce803;
} else {
var805 = ";";
var806 = core__abstract_text___CString___to_s_full(var805, 1l, 1l);
var804 = var806;
varonce803 = var804;
}
((struct instance_core__NativeArray*)var798)->values[3]=var804;
} else {
var798 = varonce797;
varonce797 = NULL;
}
((struct instance_core__NativeArray*)var798)->values[0]=var_res760;
((struct instance_core__NativeArray*)var798)->values[2]=var_alloc796;
{
var807 = ((val*(*)(val* self))(var798->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var798); /* native_to_s on <var798:NativeArray[String]>*/
}
varonce797 = var798;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var807); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce808==NULL)) {
var809 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce810!=NULL)) {
var811 = varonce810;
} else {
var812 = "->type = type;";
var813 = core__abstract_text___CString___to_s_full(var812, 14l, 14l);
var811 = var813;
varonce810 = var811;
}
((struct instance_core__NativeArray*)var809)->values[1]=var811;
} else {
var809 = varonce808;
varonce808 = NULL;
}
((struct instance_core__NativeArray*)var809)->values[0]=var_res760;
{
var814 = ((val*(*)(val* self))(var809->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var809); /* native_to_s on <var809:NativeArray[String]>*/
}
varonce808 = var809;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var814); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce815!=NULL)) {
var816 = varonce815;
} else {
var817 = "type";
var818 = core__abstract_text___CString___to_s_full(var817, 4l, 4l);
var816 = var818;
varonce815 = var816;
}
{
nitc___nitc__SeparateCompiler___hardening_live_type(self, var_v, var816); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce819==NULL)) {
var820 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce821!=NULL)) {
var822 = varonce821;
} else {
var823 = "class_";
var824 = core__abstract_text___CString___to_s_full(var823, 6l, 6l);
var822 = var824;
varonce821 = var822;
}
((struct instance_core__NativeArray*)var820)->values[0]=var822;
} else {
var820 = varonce819;
varonce819 = NULL;
}
((struct instance_core__NativeArray*)var820)->values[1]=var_c_name;
{
var825 = ((val*(*)(val* self))(var820->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var820); /* native_to_s on <var820:NativeArray[String]>*/
}
varonce819 = var820;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var825); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce826==NULL)) {
var827 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce828!=NULL)) {
var829 = varonce828;
} else {
var830 = "->class = &class_";
var831 = core__abstract_text___CString___to_s_full(var830, 17l, 17l);
var829 = var831;
varonce828 = var829;
}
((struct instance_core__NativeArray*)var827)->values[1]=var829;
if (likely(varonce832!=NULL)) {
var833 = varonce832;
} else {
var834 = ";";
var835 = core__abstract_text___CString___to_s_full(var834, 1l, 1l);
var833 = var835;
varonce832 = var833;
}
((struct instance_core__NativeArray*)var827)->values[3]=var833;
} else {
var827 = varonce826;
varonce826 = NULL;
}
((struct instance_core__NativeArray*)var827)->values[0]=var_res760;
((struct instance_core__NativeArray*)var827)->values[2]=var_c_name;
{
var836 = ((val*(*)(val* self))(var827->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var827); /* native_to_s on <var827:NativeArray[String]>*/
}
varonce826 = var827;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var836); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce837==NULL)) {
var838 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce839!=NULL)) {
var840 = varonce839;
} else {
var841 = "->length = length;";
var842 = core__abstract_text___CString___to_s_full(var841, 18l, 18l);
var840 = var842;
varonce839 = var840;
}
((struct instance_core__NativeArray*)var838)->values[1]=var840;
} else {
var838 = varonce837;
varonce837 = NULL;
}
((struct instance_core__NativeArray*)var838)->values[0]=var_res760;
{
var843 = ((val*(*)(val* self))(var838->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var838); /* native_to_s on <var838:NativeArray[String]>*/
}
varonce837 = var838;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var843); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce844==NULL)) {
var845 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce846!=NULL)) {
var847 = varonce846;
} else {
var848 = "return (val*)";
var849 = core__abstract_text___CString___to_s_full(var848, 13l, 13l);
var847 = var849;
varonce846 = var847;
}
((struct instance_core__NativeArray*)var845)->values[0]=var847;
if (likely(varonce850!=NULL)) {
var851 = varonce850;
} else {
var852 = ";";
var853 = core__abstract_text___CString___to_s_full(var852, 1l, 1l);
var851 = var853;
varonce850 = var851;
}
((struct instance_core__NativeArray*)var845)->values[2]=var851;
} else {
var845 = varonce844;
varonce844 = NULL;
}
((struct instance_core__NativeArray*)var845)->values[1]=var_res760;
{
var854 = ((val*(*)(val* self))(var845->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var845); /* native_to_s on <var845:NativeArray[String]>*/
}
varonce844 = var845;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var854); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce855!=NULL)) {
var856 = varonce855;
} else {
var857 = "}";
var858 = core__abstract_text___CString___to_s_full(var857, 1l, 1l);
var856 = var858;
varonce855 = var856;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var856); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var862 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var862 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var860 = var862;
RET_LABEL861:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var860) on <var860:MClass> */
var865 = var860->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var860:MClass> */
if (unlikely(var865 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var863 = var865;
RET_LABEL864:(void)0;
}
}
var866 = glob_sys;
{
var867 = nitc__model___core__Sys___extern_kind(var866);
}
{
{ /* Inline kernel#Object#== (var863,var867) on <var863:MClassKind> */
var_other38 = var867;
{
{ /* Inline kernel#Object#is_same_instance (var863,var_other38) on <var863:MClassKind> */
var872 = var863 == var_other38;
var870 = var872;
goto RET_LABEL871;
RET_LABEL871:(void)0;
}
}
var868 = var870;
goto RET_LABEL869;
RET_LABEL869:(void)0;
}
}
var_873 = var868;
if (var868){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var876 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var876 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var874 = var876;
RET_LABEL875:(void)0;
}
}
{
{ /* Inline model#MClass#name (var874) on <var874:MClass> */
var879 = var874->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var874:MClass> */
if (unlikely(var879 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var877 = var879;
RET_LABEL878:(void)0;
}
}
if (likely(varonce880!=NULL)) {
var881 = varonce880;
} else {
var882 = "CString";
var883 = core__abstract_text___CString___to_s_full(var882, 7l, 7l);
var881 = var883;
varonce880 = var881;
}
{
{ /* Inline kernel#Object#!= (var877,var881) on <var877:String> */
var_other = var881;
{
var886 = ((short int(*)(val* self, val* p0))(var877->class->vft[COLOR_core__kernel__Object___61d_61d]))(var877, var_other); /* == on <var877:String>*/
}
var887 = !var886;
var884 = var887;
goto RET_LABEL885;
RET_LABEL885:(void)0;
}
}
var859 = var884;
} else {
var859 = var_873;
}
if (var859){
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var890 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var890 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var888 = var890;
RET_LABEL889:(void)0;
}
}
{
var891 = nitc__model___MModule___pointer_type(var888);
}
var_pointer_type = var891;
if (unlikely(varonce892==NULL)) {
var893 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce894!=NULL)) {
var895 = varonce894;
} else {
var896 = "NEW_";
var897 = core__abstract_text___CString___to_s_full(var896, 4l, 4l);
var895 = var897;
varonce894 = var895;
}
((struct instance_core__NativeArray*)var893)->values[0]=var895;
} else {
var893 = varonce892;
varonce892 = NULL;
}
((struct instance_core__NativeArray*)var893)->values[1]=var_c_name;
{
var898 = ((val*(*)(val* self))(var893->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var893); /* native_to_s on <var893:NativeArray[String]>*/
}
varonce892 = var893;
if (unlikely(varonce899==NULL)) {
var900 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce901!=NULL)) {
var902 = varonce901;
} else {
var903 = " NEW_";
var904 = core__abstract_text___CString___to_s_full(var903, 5l, 5l);
var902 = var904;
varonce901 = var902;
}
((struct instance_core__NativeArray*)var900)->values[1]=var902;
if (likely(varonce905!=NULL)) {
var906 = varonce905;
} else {
var907 = "(const struct type* type);";
var908 = core__abstract_text___CString___to_s_full(var907, 26l, 26l);
var906 = var908;
varonce905 = var906;
}
((struct instance_core__NativeArray*)var900)->values[3]=var906;
} else {
var900 = varonce899;
varonce899 = NULL;
}
{
var909 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var900)->values[0]=var909;
((struct instance_core__NativeArray*)var900)->values[2]=var_c_name;
{
var910 = ((val*(*)(val* self))(var900->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var900); /* native_to_s on <var900:NativeArray[String]>*/
}
varonce899 = var900;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var898, var910); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce911==NULL)) {
var912 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce913!=NULL)) {
var914 = varonce913;
} else {
var915 = "/* allocate extern ";
var916 = core__abstract_text___CString___to_s_full(var915, 19l, 19l);
var914 = var916;
varonce913 = var914;
}
((struct instance_core__NativeArray*)var912)->values[0]=var914;
if (likely(varonce917!=NULL)) {
var918 = varonce917;
} else {
var919 = " */";
var920 = core__abstract_text___CString___to_s_full(var919, 3l, 3l);
var918 = var920;
varonce917 = var918;
}
((struct instance_core__NativeArray*)var912)->values[2]=var918;
} else {
var912 = varonce911;
varonce911 = NULL;
}
{
var921 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var912)->values[1]=var921;
{
var922 = ((val*(*)(val* self))(var912->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var912); /* native_to_s on <var912:NativeArray[String]>*/
}
varonce911 = var912;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var922); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce923==NULL)) {
var924 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce925!=NULL)) {
var926 = varonce925;
} else {
var927 = " NEW_";
var928 = core__abstract_text___CString___to_s_full(var927, 5l, 5l);
var926 = var928;
varonce925 = var926;
}
((struct instance_core__NativeArray*)var924)->values[1]=var926;
if (likely(varonce929!=NULL)) {
var930 = varonce929;
} else {
var931 = "(const struct type* type) {";
var932 = core__abstract_text___CString___to_s_full(var931, 27l, 27l);
var930 = var932;
varonce929 = var930;
}
((struct instance_core__NativeArray*)var924)->values[3]=var930;
} else {
var924 = varonce923;
varonce923 = NULL;
}
{
var933 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var924)->values[0]=var933;
((struct instance_core__NativeArray*)var924)->values[2]=var_c_name;
{
var934 = ((val*(*)(val* self))(var924->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var924); /* native_to_s on <var924:NativeArray[String]>*/
}
varonce923 = var924;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var934); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce935==NULL)) {
var936 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce937!=NULL)) {
var938 = varonce937;
} else {
var939 = " is DEAD";
var940 = core__abstract_text___CString___to_s_full(var939, 8l, 8l);
var938 = var940;
varonce937 = var938;
}
((struct instance_core__NativeArray*)var936)->values[1]=var938;
} else {
var936 = varonce935;
varonce935 = NULL;
}
{
var941 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var936)->values[0]=var941;
{
var942 = ((val*(*)(val* self))(var936->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var936); /* native_to_s on <var936:NativeArray[String]>*/
}
varonce935 = var936;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var942); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce943!=NULL)) {
var944 = varonce943;
} else {
var945 = "self";
var946 = core__abstract_text___CString___to_s_full(var945, 4l, 4l);
var944 = var946;
varonce943 = var944;
}
{
var947 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var944);
}
var_res948 = var947;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res948,1) on <var_res948:RuntimeVariable> */
var_res948->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res948:RuntimeVariable> */
RET_LABEL949:(void)0;
}
}
if (unlikely(varonce950==NULL)) {
var951 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce952!=NULL)) {
var953 = varonce952;
} else {
var954 = "sizeof(struct instance_";
var955 = core__abstract_text___CString___to_s_full(var954, 23l, 23l);
var953 = var955;
varonce952 = var953;
}
((struct instance_core__NativeArray*)var951)->values[0]=var953;
if (likely(varonce956!=NULL)) {
var957 = varonce956;
} else {
var958 = ")";
var959 = core__abstract_text___CString___to_s_full(var958, 1l, 1l);
var957 = var959;
varonce956 = var957;
}
((struct instance_core__NativeArray*)var951)->values[2]=var957;
} else {
var951 = varonce950;
varonce950 = NULL;
}
{
var960 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var951)->values[1]=var960;
{
var961 = ((val*(*)(val* self))(var951->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var951); /* native_to_s on <var951:NativeArray[String]>*/
}
varonce950 = var951;
{
var962 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
{
var963 = nitc__memory_logger___AbstractCompilerVisitor___nit_alloc(var_v, var961, var962);
}
var_alloc964 = var963;
if (unlikely(varonce965==NULL)) {
var966 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce967!=NULL)) {
var968 = varonce967;
} else {
var969 = " = ";
var970 = core__abstract_text___CString___to_s_full(var969, 3l, 3l);
var968 = var970;
varonce967 = var968;
}
((struct instance_core__NativeArray*)var966)->values[1]=var968;
if (likely(varonce971!=NULL)) {
var972 = varonce971;
} else {
var973 = ";";
var974 = core__abstract_text___CString___to_s_full(var973, 1l, 1l);
var972 = var974;
varonce971 = var972;
}
((struct instance_core__NativeArray*)var966)->values[3]=var972;
} else {
var966 = varonce965;
varonce965 = NULL;
}
{
var975 = ((val*(*)(val* self))(var_res948->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res948); /* to_s on <var_res948:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var966)->values[0]=var975;
((struct instance_core__NativeArray*)var966)->values[2]=var_alloc964;
{
var976 = ((val*(*)(val* self))(var966->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var966); /* native_to_s on <var966:NativeArray[String]>*/
}
varonce965 = var966;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var976); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce977==NULL)) {
var978 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce979!=NULL)) {
var980 = varonce979;
} else {
var981 = "->type = type;";
var982 = core__abstract_text___CString___to_s_full(var981, 14l, 14l);
var980 = var982;
varonce979 = var980;
}
((struct instance_core__NativeArray*)var978)->values[1]=var980;
} else {
var978 = varonce977;
varonce977 = NULL;
}
{
var983 = ((val*(*)(val* self))(var_res948->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res948); /* to_s on <var_res948:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var978)->values[0]=var983;
{
var984 = ((val*(*)(val* self))(var978->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var978); /* native_to_s on <var978:NativeArray[String]>*/
}
varonce977 = var978;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var984); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce985!=NULL)) {
var986 = varonce985;
} else {
var987 = "type";
var988 = core__abstract_text___CString___to_s_full(var987, 4l, 4l);
var986 = var988;
varonce985 = var986;
}
{
nitc___nitc__SeparateCompiler___hardening_live_type(self, var_v, var986); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce989==NULL)) {
var990 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce991!=NULL)) {
var992 = varonce991;
} else {
var993 = "class_";
var994 = core__abstract_text___CString___to_s_full(var993, 6l, 6l);
var992 = var994;
varonce991 = var992;
}
((struct instance_core__NativeArray*)var990)->values[0]=var992;
} else {
var990 = varonce989;
varonce989 = NULL;
}
((struct instance_core__NativeArray*)var990)->values[1]=var_c_name;
{
var995 = ((val*(*)(val* self))(var990->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var990); /* native_to_s on <var990:NativeArray[String]>*/
}
varonce989 = var990;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var995); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce996==NULL)) {
var997 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce998!=NULL)) {
var999 = varonce998;
} else {
var1000 = "->class = &class_";
var1001 = core__abstract_text___CString___to_s_full(var1000, 17l, 17l);
var999 = var1001;
varonce998 = var999;
}
((struct instance_core__NativeArray*)var997)->values[1]=var999;
if (likely(varonce1002!=NULL)) {
var1003 = varonce1002;
} else {
var1004 = ";";
var1005 = core__abstract_text___CString___to_s_full(var1004, 1l, 1l);
var1003 = var1005;
varonce1002 = var1003;
}
((struct instance_core__NativeArray*)var997)->values[3]=var1003;
} else {
var997 = varonce996;
varonce996 = NULL;
}
{
var1006 = ((val*(*)(val* self))(var_res948->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res948); /* to_s on <var_res948:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var997)->values[0]=var1006;
((struct instance_core__NativeArray*)var997)->values[2]=var_c_name;
{
var1007 = ((val*(*)(val* self))(var997->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var997); /* native_to_s on <var997:NativeArray[String]>*/
}
varonce996 = var997;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1007); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1008==NULL)) {
var1009 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce1010!=NULL)) {
var1011 = varonce1010;
} else {
var1012 = "((struct instance_";
var1013 = core__abstract_text___CString___to_s_full(var1012, 18l, 18l);
var1011 = var1013;
varonce1010 = var1011;
}
((struct instance_core__NativeArray*)var1009)->values[0]=var1011;
if (likely(varonce1014!=NULL)) {
var1015 = varonce1014;
} else {
var1016 = "*)";
var1017 = core__abstract_text___CString___to_s_full(var1016, 2l, 2l);
var1015 = var1017;
varonce1014 = var1015;
}
((struct instance_core__NativeArray*)var1009)->values[2]=var1015;
if (likely(varonce1018!=NULL)) {
var1019 = varonce1018;
} else {
var1020 = ")->value = NULL;";
var1021 = core__abstract_text___CString___to_s_full(var1020, 16l, 16l);
var1019 = var1021;
varonce1018 = var1019;
}
((struct instance_core__NativeArray*)var1009)->values[4]=var1019;
} else {
var1009 = varonce1008;
varonce1008 = NULL;
}
{
var1022 = ((val*(*)(val* self))(var_pointer_type->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_pointer_type); /* c_name on <var_pointer_type:MClassType>*/
}
((struct instance_core__NativeArray*)var1009)->values[1]=var1022;
{
var1023 = ((val*(*)(val* self))(var_res948->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res948); /* to_s on <var_res948:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1009)->values[3]=var1023;
{
var1024 = ((val*(*)(val* self))(var1009->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1009); /* native_to_s on <var1009:NativeArray[String]>*/
}
varonce1008 = var1009;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1024); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1025==NULL)) {
var1026 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1027!=NULL)) {
var1028 = varonce1027;
} else {
var1029 = "return ";
var1030 = core__abstract_text___CString___to_s_full(var1029, 7l, 7l);
var1028 = var1030;
varonce1027 = var1028;
}
((struct instance_core__NativeArray*)var1026)->values[0]=var1028;
if (likely(varonce1031!=NULL)) {
var1032 = varonce1031;
} else {
var1033 = ";";
var1034 = core__abstract_text___CString___to_s_full(var1033, 1l, 1l);
var1032 = var1034;
varonce1031 = var1032;
}
((struct instance_core__NativeArray*)var1026)->values[2]=var1032;
} else {
var1026 = varonce1025;
varonce1025 = NULL;
}
{
var1035 = ((val*(*)(val* self))(var_res948->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res948); /* to_s on <var_res948:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1026)->values[1]=var1035;
{
var1036 = ((val*(*)(val* self))(var1026->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1026); /* native_to_s on <var1026:NativeArray[String]>*/
}
varonce1025 = var1026;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1036); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce1037!=NULL)) {
var1038 = varonce1037;
} else {
var1039 = "}";
var1040 = core__abstract_text___CString___to_s_full(var1039, 1l, 1l);
var1038 = var1040;
varonce1037 = var1038;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1038); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
if (unlikely(varonce1041==NULL)) {
var1042 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1043!=NULL)) {
var1044 = varonce1043;
} else {
var1045 = "NEW_";
var1046 = core__abstract_text___CString___to_s_full(var1045, 4l, 4l);
var1044 = var1046;
varonce1043 = var1044;
}
((struct instance_core__NativeArray*)var1042)->values[0]=var1044;
} else {
var1042 = varonce1041;
varonce1041 = NULL;
}
((struct instance_core__NativeArray*)var1042)->values[1]=var_c_name;
{
var1047 = ((val*(*)(val* self))(var1042->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1042); /* native_to_s on <var1042:NativeArray[String]>*/
}
varonce1041 = var1042;
if (unlikely(varonce1048==NULL)) {
var1049 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce1050!=NULL)) {
var1051 = varonce1050;
} else {
var1052 = " NEW_";
var1053 = core__abstract_text___CString___to_s_full(var1052, 5l, 5l);
var1051 = var1053;
varonce1050 = var1051;
}
((struct instance_core__NativeArray*)var1049)->values[1]=var1051;
if (likely(varonce1054!=NULL)) {
var1055 = varonce1054;
} else {
var1056 = "(const struct type* type);";
var1057 = core__abstract_text___CString___to_s_full(var1056, 26l, 26l);
var1055 = var1057;
varonce1054 = var1055;
}
((struct instance_core__NativeArray*)var1049)->values[3]=var1055;
} else {
var1049 = varonce1048;
varonce1048 = NULL;
}
{
var1058 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1049)->values[0]=var1058;
((struct instance_core__NativeArray*)var1049)->values[2]=var_c_name;
{
var1059 = ((val*(*)(val* self))(var1049->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1049); /* native_to_s on <var1049:NativeArray[String]>*/
}
varonce1048 = var1049;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var1047, var1059); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:SeparateCompiler>*/
}
if (unlikely(varonce1060==NULL)) {
var1061 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1062!=NULL)) {
var1063 = varonce1062;
} else {
var1064 = "/* allocate ";
var1065 = core__abstract_text___CString___to_s_full(var1064, 12l, 12l);
var1063 = var1065;
varonce1062 = var1063;
}
((struct instance_core__NativeArray*)var1061)->values[0]=var1063;
if (likely(varonce1066!=NULL)) {
var1067 = varonce1066;
} else {
var1068 = " */";
var1069 = core__abstract_text___CString___to_s_full(var1068, 3l, 3l);
var1067 = var1069;
varonce1066 = var1067;
}
((struct instance_core__NativeArray*)var1061)->values[2]=var1067;
} else {
var1061 = varonce1060;
varonce1060 = NULL;
}
{
var1070 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var1061)->values[1]=var1070;
{
var1071 = ((val*(*)(val* self))(var1061->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1061); /* native_to_s on <var1061:NativeArray[String]>*/
}
varonce1060 = var1061;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1071); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1072==NULL)) {
var1073 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce1074!=NULL)) {
var1075 = varonce1074;
} else {
var1076 = " NEW_";
var1077 = core__abstract_text___CString___to_s_full(var1076, 5l, 5l);
var1075 = var1077;
varonce1074 = var1075;
}
((struct instance_core__NativeArray*)var1073)->values[1]=var1075;
if (likely(varonce1078!=NULL)) {
var1079 = varonce1078;
} else {
var1080 = "(const struct type* type) {";
var1081 = core__abstract_text___CString___to_s_full(var1080, 27l, 27l);
var1079 = var1081;
varonce1078 = var1079;
}
((struct instance_core__NativeArray*)var1073)->values[3]=var1079;
} else {
var1073 = varonce1072;
varonce1072 = NULL;
}
{
var1082 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var1073)->values[0]=var1082;
((struct instance_core__NativeArray*)var1073)->values[2]=var_c_name;
{
var1083 = ((val*(*)(val* self))(var1073->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1073); /* native_to_s on <var1073:NativeArray[String]>*/
}
varonce1072 = var1073;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1083); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (var_is_dead){
if (unlikely(varonce1084==NULL)) {
var1085 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1086!=NULL)) {
var1087 = varonce1086;
} else {
var1088 = " is DEAD";
var1089 = core__abstract_text___CString___to_s_full(var1088, 8l, 8l);
var1087 = var1089;
varonce1086 = var1087;
}
((struct instance_core__NativeArray*)var1085)->values[1]=var1087;
} else {
var1085 = varonce1084;
varonce1084 = NULL;
}
{
var1090 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var1085)->values[0]=var1090;
{
var1091 = ((val*(*)(val* self))(var1085->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1085); /* native_to_s on <var1085:NativeArray[String]>*/
}
varonce1084 = var1085;
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var1091); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (likely(varonce1092!=NULL)) {
var1093 = varonce1092;
} else {
var1094 = "self";
var1095 = core__abstract_text___CString___to_s_full(var1094, 4l, 4l);
var1093 = var1095;
varonce1092 = var1093;
}
{
var1096 = nitc___nitc__AbstractCompilerVisitor___new_named_var(var_v, var_mtype, var1093);
}
var_res1097 = var1096;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (var_res1097,1) on <var_res1097:RuntimeVariable> */
var_res1097->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = 1; /* _is_exact on <var_res1097:RuntimeVariable> */
RET_LABEL1098:(void)0;
}
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateCompiler> */
var1101 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var1101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1074);
fatal_exit(1);
}
var1099 = var1101;
RET_LABEL1100:(void)0;
}
}
{
var1102 = ((val*(*)(val* self, val* p0))((((long)var1099&3)?class_info[((long)var1099&3)]:var1099->class)->vft[COLOR_core__abstract_collection__MapRead__get_or_null]))(var1099, var_mclass); /* get_or_null on <var1099:Map[MClass, Array[nullable MProperty]]>*/
}
var_attrs = var1102;
if (var_attrs == NULL) {
var1103 = 1; /* is null */
} else {
var1103 = 0; /* arg is null but recv is not */
}
if (0) {
var1104 = core___core__Array___core__kernel__Object___61d_61d(var_attrs, ((val*)NULL));
var1103 = var1104;
}
if (var1103){
if (likely(varonce1105!=NULL)) {
var1106 = varonce1105;
} else {
var1107 = "sizeof(struct instance)";
var1108 = core__abstract_text___CString___to_s_full(var1107, 23l, 23l);
var1106 = var1108;
varonce1105 = var1106;
}
{
var1109 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
{
var1110 = nitc__memory_logger___AbstractCompilerVisitor___nit_alloc(var_v, var1106, var1109);
}
var_alloc1111 = var1110;
if (unlikely(varonce1112==NULL)) {
var1113 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce1114!=NULL)) {
var1115 = varonce1114;
} else {
var1116 = " = ";
var1117 = core__abstract_text___CString___to_s_full(var1116, 3l, 3l);
var1115 = var1117;
varonce1114 = var1115;
}
((struct instance_core__NativeArray*)var1113)->values[1]=var1115;
if (likely(varonce1118!=NULL)) {
var1119 = varonce1118;
} else {
var1120 = ";";
var1121 = core__abstract_text___CString___to_s_full(var1120, 1l, 1l);
var1119 = var1121;
varonce1118 = var1119;
}
((struct instance_core__NativeArray*)var1113)->values[3]=var1119;
} else {
var1113 = varonce1112;
varonce1112 = NULL;
}
{
var1122 = ((val*(*)(val* self))(var_res1097->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1097); /* to_s on <var_res1097:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1113)->values[0]=var1122;
((struct instance_core__NativeArray*)var1113)->values[2]=var_alloc1111;
{
var1123 = ((val*(*)(val* self))(var1113->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1113); /* native_to_s on <var1113:NativeArray[String]>*/
}
varonce1112 = var1113;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1123); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce1124==NULL)) {
var1125 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1126!=NULL)) {
var1127 = varonce1126;
} else {
var1128 = "sizeof(struct instance) + ";
var1129 = core__abstract_text___CString___to_s_full(var1128, 26l, 26l);
var1127 = var1129;
varonce1126 = var1127;
}
((struct instance_core__NativeArray*)var1125)->values[0]=var1127;
if (likely(varonce1130!=NULL)) {
var1131 = varonce1130;
} else {
var1132 = "*sizeof(nitattribute_t)";
var1133 = core__abstract_text___CString___to_s_full(var1132, 23l, 23l);
var1131 = var1133;
varonce1130 = var1131;
}
((struct instance_core__NativeArray*)var1125)->values[2]=var1131;
} else {
var1125 = varonce1124;
varonce1124 = NULL;
}
{
{ /* Inline array#AbstractArrayRead#length (var_attrs) on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])> */
var1136 = var_attrs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])> */
var1134 = var1136;
RET_LABEL1135:(void)0;
}
}
var1137 = core__flat___Int___core__abstract_text__Object__to_s(var1134);
((struct instance_core__NativeArray*)var1125)->values[1]=var1137;
{
var1138 = ((val*(*)(val* self))(var1125->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1125); /* native_to_s on <var1125:NativeArray[String]>*/
}
varonce1124 = var1125;
{
var1139 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
{
var1140 = nitc__memory_logger___AbstractCompilerVisitor___nit_alloc(var_v, var1138, var1139);
}
var_alloc1141 = var1140;
if (unlikely(varonce1142==NULL)) {
var1143 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce1144!=NULL)) {
var1145 = varonce1144;
} else {
var1146 = " = ";
var1147 = core__abstract_text___CString___to_s_full(var1146, 3l, 3l);
var1145 = var1147;
varonce1144 = var1145;
}
((struct instance_core__NativeArray*)var1143)->values[1]=var1145;
if (likely(varonce1148!=NULL)) {
var1149 = varonce1148;
} else {
var1150 = ";";
var1151 = core__abstract_text___CString___to_s_full(var1150, 1l, 1l);
var1149 = var1151;
varonce1148 = var1149;
}
((struct instance_core__NativeArray*)var1143)->values[3]=var1149;
} else {
var1143 = varonce1142;
varonce1142 = NULL;
}
{
var1152 = ((val*(*)(val* self))(var_res1097->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1097); /* to_s on <var_res1097:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1143)->values[0]=var1152;
((struct instance_core__NativeArray*)var1143)->values[2]=var_alloc1141;
{
var1153 = ((val*(*)(val* self))(var1143->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1143); /* native_to_s on <var1143:NativeArray[String]>*/
}
varonce1142 = var1143;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1153); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (unlikely(varonce1154==NULL)) {
var1155 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1156!=NULL)) {
var1157 = varonce1156;
} else {
var1158 = "->type = type;";
var1159 = core__abstract_text___CString___to_s_full(var1158, 14l, 14l);
var1157 = var1159;
varonce1156 = var1157;
}
((struct instance_core__NativeArray*)var1155)->values[1]=var1157;
} else {
var1155 = varonce1154;
varonce1154 = NULL;
}
{
var1160 = ((val*(*)(val* self))(var_res1097->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1097); /* to_s on <var_res1097:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1155)->values[0]=var1160;
{
var1161 = ((val*(*)(val* self))(var1155->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1155); /* native_to_s on <var1155:NativeArray[String]>*/
}
varonce1154 = var1155;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1161); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce1162!=NULL)) {
var1163 = varonce1162;
} else {
var1164 = "type";
var1165 = core__abstract_text___CString___to_s_full(var1164, 4l, 4l);
var1163 = var1165;
varonce1162 = var1163;
}
{
nitc___nitc__SeparateCompiler___hardening_live_type(self, var_v, var1163); /* Direct call separate_compiler#SeparateCompiler#hardening_live_type on <self:SeparateCompiler>*/
}
if (unlikely(varonce1166==NULL)) {
var1167 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1168!=NULL)) {
var1169 = varonce1168;
} else {
var1170 = "class_";
var1171 = core__abstract_text___CString___to_s_full(var1170, 6l, 6l);
var1169 = var1171;
varonce1168 = var1169;
}
((struct instance_core__NativeArray*)var1167)->values[0]=var1169;
} else {
var1167 = varonce1166;
varonce1166 = NULL;
}
((struct instance_core__NativeArray*)var1167)->values[1]=var_c_name;
{
var1172 = ((val*(*)(val* self))(var1167->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1167); /* native_to_s on <var1167:NativeArray[String]>*/
}
varonce1166 = var1167;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var1172); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce1173==NULL)) {
var1174 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce1175!=NULL)) {
var1176 = varonce1175;
} else {
var1177 = "->class = &class_";
var1178 = core__abstract_text___CString___to_s_full(var1177, 17l, 17l);
var1176 = var1178;
varonce1175 = var1176;
}
((struct instance_core__NativeArray*)var1174)->values[1]=var1176;
if (likely(varonce1179!=NULL)) {
var1180 = varonce1179;
} else {
var1181 = ";";
var1182 = core__abstract_text___CString___to_s_full(var1181, 1l, 1l);
var1180 = var1182;
varonce1179 = var1180;
}
((struct instance_core__NativeArray*)var1174)->values[3]=var1180;
} else {
var1174 = varonce1173;
varonce1173 = NULL;
}
{
var1183 = ((val*(*)(val* self))(var_res1097->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1097); /* to_s on <var_res1097:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1174)->values[0]=var1183;
((struct instance_core__NativeArray*)var1174)->values[2]=var_c_name;
{
var1184 = ((val*(*)(val* self))(var1174->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1174); /* native_to_s on <var1174:NativeArray[String]>*/
}
varonce1173 = var1174;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1184); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (var_attrs == NULL) {
var1185 = 0; /* is null */
} else {
var1185 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_attrs,((val*)NULL)) on <var_attrs:nullable Array[nullable MProperty]> */
var_other = ((val*)NULL);
{
var1188 = ((short int(*)(val* self, val* p0))(var_attrs->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_attrs, var_other); /* == on <var_attrs:nullable Array[nullable MProperty](Array[nullable MProperty])>*/
}
var1189 = !var1188;
var1186 = var1189;
goto RET_LABEL1187;
RET_LABEL1187:(void)0;
}
var1185 = var1186;
}
if (var1185){
{
nitc___nitc__AbstractCompiler___generate_init_attr(self, var_v, var_res1097, var_mtype); /* Direct call abstract_compiler#AbstractCompiler#generate_init_attr on <self:SeparateCompiler>*/
}
{
nitc___nitc__AbstractCompilerVisitor___set_finalizer(var_v, var_res1097); /* Direct call abstract_compiler#AbstractCompilerVisitor#set_finalizer on <var_v:SeparateCompilerVisitor>*/
}
} else {
}
if (unlikely(varonce1190==NULL)) {
var1191 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1192!=NULL)) {
var1193 = varonce1192;
} else {
var1194 = "return ";
var1195 = core__abstract_text___CString___to_s_full(var1194, 7l, 7l);
var1193 = var1195;
varonce1192 = var1193;
}
((struct instance_core__NativeArray*)var1191)->values[0]=var1193;
if (likely(varonce1196!=NULL)) {
var1197 = varonce1196;
} else {
var1198 = ";";
var1199 = core__abstract_text___CString___to_s_full(var1198, 1l, 1l);
var1197 = var1199;
varonce1196 = var1197;
}
((struct instance_core__NativeArray*)var1191)->values[2]=var1197;
} else {
var1191 = varonce1190;
varonce1190 = NULL;
}
{
var1200 = ((val*(*)(val* self))(var_res1097->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1097); /* to_s on <var_res1097:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1191)->values[1]=var1200;
{
var1201 = ((val*(*)(val* self))(var1191->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1191); /* native_to_s on <var1191:NativeArray[String]>*/
}
varonce1190 = var1191;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1201); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
}
if (likely(varonce1202!=NULL)) {
var1203 = varonce1202;
} else {
var1204 = "}";
var1205 = core__abstract_text___CString___to_s_full(var1204, 1l, 1l);
var1203 = var1205;
varonce1202 = var1203;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1203); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_class_infos for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___compile_class_infos(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : Array[nullable MClass] */;
val* var_class_info /* var class_info: Array[nullable MClass] */;
val* var14 /* : HashMap[MClass, Int] */;
val* var16 /* : HashMap[MClass, Int] */;
val* var17 /* : RemovableCollection[nullable Object] */;
val* var_ /* var : RemovableCollection[MClass] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : Iterator[MClass] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_t /* var t: MClass */;
val* var22 /* : String */;
val* var24 /* : String */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
short int var28 /* : Bool */;
val* var29 /* : MClassType */;
val* var31 /* : MClassType */;
val* var33 /* : String */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
short int var40 /* : Bool */;
val* var41 /* : MClassType */;
val* var43 /* : MClassType */;
val* var45 /* : String */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
short int var52 /* : Bool */;
val* var53 /* : MClassType */;
val* var55 /* : MClassType */;
val* var58 /* : MClassType */;
val* var60 /* : MClassType */;
val* var62 /* : AbstractCompilerVisitor */;
val* var_v /* var v: SeparateCompilerVisitor */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var_67 /* var : Array[nullable MClass] */;
val* var68 /* : IndexedIterator[nullable Object] */;
val* var_69 /* var : IndexedIterator[nullable MClass] */;
short int var70 /* : Bool */;
val* var72 /* : nullable Object */;
val* var_t73 /* var t: nullable MClass */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var85 /* : NativeArray[String] */;
static val* varonce84;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var_s /* var s: String */;
val* var93 /* : NativeArray[String] */;
static val* varonce92;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var_111 /* var : Array[nullable MClass] */;
val* var112 /* : IndexedIterator[nullable Object] */;
val* var_113 /* var : IndexedIterator[nullable MClass] */;
short int var114 /* : Bool */;
val* var116 /* : nullable Object */;
val* var_t117 /* var t: nullable MClass */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : CString */;
val* var127 /* : String */;
val* var129 /* : NativeArray[String] */;
static val* varonce128;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
val* var134 /* : String */;
val* var135 /* : String */;
val* var_s136 /* var s: String */;
val* var137 /* : Set[MType] */;
val* var139 /* : Set[MType] */;
val* var140 /* : MClassType */;
val* var142 /* : MClassType */;
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
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_no_tag_primitives (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_no_tag_primitives].val; /* _opt_no_tag_primitives on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_tag_primitives");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 32);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts#Option#value (var6) on <var6:OptionBool> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionBool> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = (short int)((long)(var9)>>2);
if (var12){
goto RET_LABEL;
} else {
}
var13 = NEW_core__Array(&type_core__Array__nullable__nitc__MClass);
{
core___core__Array___filled_with(var13, ((val*)NULL), 4l); /* Direct call array#Array#filled_with on <var13:Array[nullable MClass]>*/
}
var_class_info = var13;
{
{ /* Inline separate_compiler#SeparateCompiler#box_kinds (self) on <self:SeparateCompiler> */
var16 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___box_kinds].val; /* _box_kinds on <self:SeparateCompiler> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _box_kinds");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 264);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = core___core__HashMap___core__abstract_collection__MapRead__keys(var14);
}
var_ = var17;
{
var18 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[MClass]>*/
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:Iterator[MClass]>*/
}
if (var20){
} else {
goto BREAK_label;
}
{
var21 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:Iterator[MClass]>*/
}
var_t = var21;
{
{ /* Inline model#MClass#name (var_t) on <var_t:MClass> */
var24 = var_t->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_t:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "Int";
var27 = core__abstract_text___CString___to_s_full(var26, 3l, 3l);
var25 = var27;
varonce = var25;
}
{
var28 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_core__kernel__Object___61d_61d]))(var22, var25); /* == on <var22:String>*/
}
if (var28){
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_class_info, 1l, var_t); /* Direct call array#Array#[]= on <var_class_info:Array[nullable MClass]>*/
}
{
{ /* Inline model#MClass#mclass_type (var_t) on <var_t:MClass> */
var31 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline separate_compiler#MType#tag_value= (var29,1l) on <var29:MClassType> */
var29->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 1l; /* _tag_value on <var29:MClassType> */
RET_LABEL32:(void)0;
}
}
} else {
{
{ /* Inline model#MClass#name (var_t) on <var_t:MClass> */
var35 = var_t->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_t:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Char";
var39 = core__abstract_text___CString___to_s_full(var38, 4l, 4l);
var37 = var39;
varonce36 = var37;
}
{
var40 = ((short int(*)(val* self, val* p0))(var33->class->vft[COLOR_core__kernel__Object___61d_61d]))(var33, var37); /* == on <var33:String>*/
}
if (var40){
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_class_info, 2l, var_t); /* Direct call array#Array#[]= on <var_class_info:Array[nullable MClass]>*/
}
{
{ /* Inline model#MClass#mclass_type (var_t) on <var_t:MClass> */
var43 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline separate_compiler#MType#tag_value= (var41,2l) on <var41:MClassType> */
var41->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 2l; /* _tag_value on <var41:MClassType> */
RET_LABEL44:(void)0;
}
}
} else {
{
{ /* Inline model#MClass#name (var_t) on <var_t:MClass> */
var47 = var_t->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_t:MClass> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Bool";
var51 = core__abstract_text___CString___to_s_full(var50, 4l, 4l);
var49 = var51;
varonce48 = var49;
}
{
var52 = ((short int(*)(val* self, val* p0))(var45->class->vft[COLOR_core__kernel__Object___61d_61d]))(var45, var49); /* == on <var45:String>*/
}
if (var52){
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_class_info, 3l, var_t); /* Direct call array#Array#[]= on <var_class_info:Array[nullable MClass]>*/
}
{
{ /* Inline model#MClass#mclass_type (var_t) on <var_t:MClass> */
var55 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline separate_compiler#MType#tag_value= (var53,3l) on <var53:MClassType> */
var53->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 3l; /* _tag_value on <var53:MClassType> */
RET_LABEL56:(void)0;
}
}
} else {
goto BREAK_label57;
}
}
}
{
{ /* Inline model#MClass#mclass_type (var_t) on <var_t:MClass> */
var60 = var_t->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t:MClass> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline separate_compiler#MType#is_tagged= (var58,1) on <var58:MClassType> */
var58->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 1; /* _is_tagged on <var58:MClassType> */
RET_LABEL61:(void)0;
}
}
BREAK_label57: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:Iterator[MClass]>*/
}
{
var62 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:SeparateCompiler>*/
}
var_v = var62;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "const struct class *class_info[4] = {";
var66 = core__abstract_text___CString___to_s_full(var65, 37l, 37l);
var64 = var66;
varonce63 = var64;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var_67 = var_class_info;
{
var68 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_67);
}
var_69 = var68;
for(;;) {
{
var70 = ((short int(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_69); /* is_ok on <var_69:IndexedIterator[nullable MClass]>*/
}
if (var70){
} else {
goto BREAK_label71;
}
{
var72 = ((val*(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_69); /* item on <var_69:IndexedIterator[nullable MClass]>*/
}
var_t73 = var72;
if (var_t73 == NULL) {
var74 = 1; /* is null */
} else {
var74 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t73,((val*)NULL)) on <var_t73:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t73,var_other) on <var_t73:nullable MClass(MClass)> */
var79 = var_t73 == var_other;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
if (var74){
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "NULL,";
var83 = core__abstract_text___CString___to_s_full(var82, 5l, 5l);
var81 = var83;
varonce80 = var81;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var81); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce84==NULL)) {
var85 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "class_";
var89 = core__abstract_text___CString___to_s_full(var88, 6l, 6l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var85)->values[0]=var87;
} else {
var85 = varonce84;
varonce84 = NULL;
}
{
var90 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_t73);
}
((struct instance_core__NativeArray*)var85)->values[1]=var90;
{
var91 = ((val*(*)(val* self))(var85->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var85); /* native_to_s on <var85:NativeArray[String]>*/
}
varonce84 = var85;
var_s = var91;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var_s); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce92==NULL)) {
var93 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "&";
var97 = core__abstract_text___CString___to_s_full(var96, 1l, 1l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var93)->values[0]=var95;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = ",";
var101 = core__abstract_text___CString___to_s_full(var100, 1l, 1l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var93)->values[2]=var99;
} else {
var93 = varonce92;
varonce92 = NULL;
}
((struct instance_core__NativeArray*)var93)->values[1]=var_s;
{
var102 = ((val*(*)(val* self))(var93->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var93); /* native_to_s on <var93:NativeArray[String]>*/
}
varonce92 = var93;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var102); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
((void(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_69); /* next on <var_69:IndexedIterator[nullable MClass]>*/
}
}
BREAK_label71: (void)0;
{
((void(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_69); /* finish on <var_69:IndexedIterator[nullable MClass]>*/
}
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "};";
var106 = core__abstract_text___CString___to_s_full(var105, 2l, 2l);
var104 = var106;
varonce103 = var104;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var104); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "const struct type *type_info[4] = {";
var110 = core__abstract_text___CString___to_s_full(var109, 35l, 35l);
var108 = var110;
varonce107 = var108;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var108); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
var_111 = var_class_info;
{
var112 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_111);
}
var_113 = var112;
for(;;) {
{
var114 = ((short int(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_113); /* is_ok on <var_113:IndexedIterator[nullable MClass]>*/
}
if (var114){
} else {
goto BREAK_label115;
}
{
var116 = ((val*(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_113); /* item on <var_113:IndexedIterator[nullable MClass]>*/
}
var_t117 = var116;
if (var_t117 == NULL) {
var118 = 1; /* is null */
} else {
var118 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t117,((val*)NULL)) on <var_t117:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t117,var_other) on <var_t117:nullable MClass(MClass)> */
var123 = var_t117 == var_other;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
var119 = var121;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
var118 = var119;
}
if (var118){
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "NULL,";
var127 = core__abstract_text___CString___to_s_full(var126, 5l, 5l);
var125 = var127;
varonce124 = var125;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var125); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
} else {
if (unlikely(varonce128==NULL)) {
var129 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "type_";
var133 = core__abstract_text___CString___to_s_full(var132, 5l, 5l);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var129)->values[0]=var131;
} else {
var129 = varonce128;
varonce128 = NULL;
}
{
var134 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var_t117);
}
((struct instance_core__NativeArray*)var129)->values[1]=var134;
{
var135 = ((val*(*)(val* self))(var129->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var129); /* native_to_s on <var129:NativeArray[String]>*/
}
varonce128 = var129;
var_s136 = var135;
{
{ /* Inline separate_compiler#SeparateCompiler#undead_types (self) on <self:SeparateCompiler> */
var139 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___undead_types].val; /* _undead_types on <self:SeparateCompiler> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _undead_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 146);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_t117) on <var_t117:nullable MClass(MClass)> */
var142 = var_t117->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_t117:nullable MClass(MClass)> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var137&3)?class_info[((long)var137&3)]:var137->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var137, var140); /* add on <var137:Set[MType]>*/
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(var_v, var_s136); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce143==NULL)) {
var144 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "&";
var148 = core__abstract_text___CString___to_s_full(var147, 1l, 1l);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var144)->values[0]=var146;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = ",";
var152 = core__abstract_text___CString___to_s_full(var151, 1l, 1l);
var150 = var152;
varonce149 = var150;
}
((struct instance_core__NativeArray*)var144)->values[2]=var150;
} else {
var144 = varonce143;
varonce143 = NULL;
}
((struct instance_core__NativeArray*)var144)->values[1]=var_s136;
{
var153 = ((val*(*)(val* self))(var144->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var144); /* native_to_s on <var144:NativeArray[String]>*/
}
varonce143 = var144;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var153); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
}
{
((void(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_113); /* next on <var_113:IndexedIterator[nullable MClass]>*/
}
}
BREAK_label115: (void)0;
{
((void(*)(val* self))((((long)var_113&3)?class_info[((long)var_113&3)]:var_113->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_113); /* finish on <var_113:IndexedIterator[nullable MClass]>*/
}
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "};";
var157 = core__abstract_text___CString___to_s_full(var156, 2l, 2l);
var155 = var157;
varonce154 = var155;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var155); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#hardening_live_type for (self: SeparateCompiler, SeparateCompilerVisitor, String) */
void nitc___nitc__SeparateCompiler___hardening_live_type(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: SeparateCompilerVisitor */;
val* var_t /* var t: String */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
val* var10 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : NativeArray[String] */;
static val* varonce;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : String */;
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
val* var48 /* : NativeArray[String] */;
static val* varonce47;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
/* Covariant cast for argument 0 (v) <p0:SeparateCompilerVisitor> isa VISITOR */
/* <p0:SeparateCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1054);
fatal_exit(1);
}
var_v = p0;
var_t = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:SeparateCompilerVisitor> */
var3 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:SeparateCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler(SeparateCompiler)> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler(SeparateCompiler)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var4) on <var4:ModelBuilder> */
var9 = var4->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var4:ModelBuilder> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (var7) on <var7:ToolContext> */
var12 = var7->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var7:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 46);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline opts#Option#value (var10) on <var10:OptionBool> */
var15 = var10->attrs[COLOR_opts__Option___value].val; /* _value on <var10:OptionBool> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = (short int)((long)(var13)>>2);
var17 = !var16;
if (var17){
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "if(";
var22 = core__abstract_text___CString___to_s_full(var21, 3l, 3l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = " == NULL) {";
var26 = core__abstract_text___CString___to_s_full(var25, 11l, 11l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var18)->values[2]=var24;
} else {
var18 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var18)->values[1]=var_t;
{
var27 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "type null";
var31 = core__abstract_text___CString___to_s_full(var30, 9l, 9l);
var29 = var31;
varonce28 = var29;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "}";
var35 = core__abstract_text___CString___to_s_full(var34, 1l, 1l);
var33 = var35;
varonce32 = var33;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "if(";
var41 = core__abstract_text___CString___to_s_full(var40, 3l, 3l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "->table_size < 0) {";
var45 = core__abstract_text___CString___to_s_full(var44, 19l, 19l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[2]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
((struct instance_core__NativeArray*)var37)->values[1]=var_t;
{
var46 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var46); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (unlikely(varonce47==NULL)) {
var48 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "PRINT_ERROR(\"Instantiation of a dead type: %s\\n\", ";
var52 = core__abstract_text___CString___to_s_full(var51, 50l, 50l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var48)->values[0]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "->name);";
var56 = core__abstract_text___CString___to_s_full(var55, 8l, 8l);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var48)->values[2]=var54;
} else {
var48 = varonce47;
varonce47 = NULL;
}
((struct instance_core__NativeArray*)var48)->values[1]=var_t;
{
var57 = ((val*(*)(val* self))(var48->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce47 = var48;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var57); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "type dead";
var61 = core__abstract_text___CString___to_s_full(var60, 9l, 9l);
var59 = var61;
varonce58 = var59;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_v, var59); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_v:SeparateCompilerVisitor>*/
}
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "}";
var65 = core__abstract_text___CString___to_s_full(var64, 1l, 1l);
var63 = var65;
varonce62 = var63;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var63); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:SeparateCompilerVisitor>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#new_visitor for (self: SeparateCompiler): SeparateCompilerVisitor */
val* nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__new_visitor(val* self) {
val* var /* : SeparateCompilerVisitor */;
val* var1 /* : SeparateCompilerVisitor */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var1 = NEW_nitc__SeparateCompilerVisitor(&type_nitc__SeparateCompilerVisitor);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compiler_61d]))(var1, self); /* compiler= on <var1:SeparateCompilerVisitor>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:SeparateCompilerVisitor>*/
}
/* <var1:SeparateCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1067);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables for (self: SeparateCompiler): Map[MType, Array[nullable MType]] */
val* nitc___nitc__SeparateCompiler___type_tables(val* self) {
val* var /* : Map[MType, Array[nullable MType]] */;
val* var1 /* : Map[MType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1071);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#type_tables= for (self: SeparateCompiler, Map[MType, Array[nullable MType]]) */
void nitc___nitc__SeparateCompiler___type_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val = p0; /* _type_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#resolution_tables for (self: SeparateCompiler): Map[MClassType, Array[nullable MType]] */
val* nitc___nitc__SeparateCompiler___resolution_tables(val* self) {
val* var /* : Map[MClassType, Array[nullable MType]] */;
val* var1 /* : Map[MClassType, Array[nullable MType]] */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1072);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#resolution_tables= for (self: SeparateCompiler, Map[MClassType, Array[nullable MType]]) */
void nitc___nitc__SeparateCompiler___resolution_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val = p0; /* _resolution_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#method_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MPropDef]] */
val* nitc___nitc__SeparateCompiler___method_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MPropDef]] */;
val* var1 /* : Map[MClass, Array[nullable MPropDef]] */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1073);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#method_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MPropDef]]) */
void nitc___nitc__SeparateCompiler___method_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val = p0; /* _method_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_tables for (self: SeparateCompiler): Map[MClass, Array[nullable MProperty]] */
val* nitc___nitc__SeparateCompiler___attr_tables(val* self) {
val* var /* : Map[MClass, Array[nullable MProperty]] */;
val* var1 /* : Map[MClass, Array[nullable MProperty]] */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1074);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_tables= for (self: SeparateCompiler, Map[MClass, Array[nullable MProperty]]) */
void nitc___nitc__SeparateCompiler___attr_tables_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val = p0; /* _attr_tables on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_stats for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__display_stats(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
val* var19 /* : OptionBool */;
val* var21 /* : OptionBool */;
val* var22 /* : nullable Object */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
val* var26 /* : ModelBuilder */;
val* var28 /* : ModelBuilder */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
val* var_tc /* var tc: ToolContext */;
static val* varonce;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : ModelBuilder */;
val* var37 /* : ModelBuilder */;
long var38 /* : Int */;
long var40 /* : Int */;
val* var41 /* : ModelBuilder */;
val* var43 /* : ModelBuilder */;
long var44 /* : Int */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var50 /* : Int */;
val* var51 /* : ModelBuilder */;
val* var53 /* : ModelBuilder */;
long var54 /* : Int */;
long var56 /* : Int */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
long var_nb_invok_total /* var nb_invok_total: Int */;
val* var65 /* : NativeArray[String] */;
static val* varonce64;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var73 /* : NativeArray[String] */;
static val* varonce72;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : ModelBuilder */;
val* var88 /* : ModelBuilder */;
long var89 /* : Int */;
long var91 /* : Int */;
val* var92 /* : String */;
val* var93 /* : Sys */;
val* var94 /* : ModelBuilder */;
val* var96 /* : ModelBuilder */;
long var97 /* : Int */;
long var99 /* : Int */;
val* var100 /* : String */;
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
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
val* var116 /* : ModelBuilder */;
val* var118 /* : ModelBuilder */;
long var119 /* : Int */;
long var121 /* : Int */;
val* var122 /* : String */;
val* var123 /* : Sys */;
val* var124 /* : ModelBuilder */;
val* var126 /* : ModelBuilder */;
long var127 /* : Int */;
long var129 /* : Int */;
val* var130 /* : String */;
val* var131 /* : String */;
val* var133 /* : NativeArray[String] */;
static val* varonce132;
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
val* var146 /* : ModelBuilder */;
val* var148 /* : ModelBuilder */;
long var149 /* : Int */;
long var151 /* : Int */;
val* var152 /* : String */;
val* var153 /* : Sys */;
val* var154 /* : ModelBuilder */;
val* var156 /* : ModelBuilder */;
long var157 /* : Int */;
long var159 /* : Int */;
val* var160 /* : String */;
val* var161 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__display_stats]))(self); /* display_stats on <self:SeparateCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline separate_compiler#ToolContext#opt_tables_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_tables_metrics].val; /* _opt_tables_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_tables_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 60);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts#Option#value (var6) on <var6:OptionBool> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionBool> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = (short int)((long)(var9)>>2);
if (var12){
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__separate_compiler__SeparateCompiler__display_sizes]))(self); /* display_sizes on <self:SeparateCompiler>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var13) on <var13:ModelBuilder> */
var18 = var13->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var13:ModelBuilder> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var16:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts#Option#value (var19) on <var19:OptionBool> */
var24 = var19->attrs[COLOR_opts__Option___value].val; /* _value on <var19:OptionBool> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var25 = (short int)((long)(var22)>>2);
if (var25){
{
nitc___nitc__SeparateCompiler___display_isset_checks(self); /* Direct call separate_compiler#SeparateCompiler#display_isset_checks on <self:SeparateCompiler>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var28 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var26) on <var26:ModelBuilder> */
var31 = var26->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var26:ModelBuilder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_tc = var29;
if (likely(varonce!=NULL)) {
var32 = varonce;
} else {
var33 = "# implementation of method invocation";
var34 = core__abstract_text___CString___to_s_full(var33, 37l, 37l);
var32 = var34;
varonce = var32;
}
{
nitc___nitc__ToolContext___info(var_tc, var32, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var37 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var35) on <var35:ModelBuilder> */
var40 = var35->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var35:ModelBuilder> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var43 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var41) on <var41:ModelBuilder> */
var46 = var41->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var41:ModelBuilder> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var38,var44) on <var38:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var49 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var38 + var44;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var53 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var51) on <var51:ModelBuilder> */
var56 = var51->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var51:ModelBuilder> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var47,var54) on <var47:Int> */
/* Covariant cast for argument 0 (i) <var54:Int> isa OTHER */
/* <var54:Int> isa OTHER */
var59 = 1; /* easy <var54:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var63 = var47 + var54;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var_nb_invok_total = var57;
if (unlikely(varonce64==NULL)) {
var65 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "total number of invocations: ";
var69 = core__abstract_text___CString___to_s_full(var68, 29l, 29l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var65)->values[0]=var67;
} else {
var65 = varonce64;
varonce64 = NULL;
}
var70 = core__flat___Int___core__abstract_text__Object__to_s(var_nb_invok_total);
((struct instance_core__NativeArray*)var65)->values[1]=var70;
{
var71 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
{
nitc___nitc__ToolContext___info(var_tc, var71, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (unlikely(varonce72==NULL)) {
var73 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "invocations by VFT send:     ";
var77 = core__abstract_text___CString___to_s_full(var76, 29l, 29l);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var73)->values[0]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " (";
var81 = core__abstract_text___CString___to_s_full(var80, 2l, 2l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var73)->values[2]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "%)";
var85 = core__abstract_text___CString___to_s_full(var84, 2l, 2l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var73)->values[4]=var83;
} else {
var73 = varonce72;
varonce72 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var88 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var86) on <var86:ModelBuilder> */
var91 = var86->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var86:ModelBuilder> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
var92 = core__flat___Int___core__abstract_text__Object__to_s(var89);
((struct instance_core__NativeArray*)var73)->values[1]=var92;
var93 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var96 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_tables (var94) on <var94:ModelBuilder> */
var99 = var94->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l; /* _nb_invok_by_tables on <var94:ModelBuilder> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = counter___core__Sys___div(var93, var97, var_nb_invok_total);
}
((struct instance_core__NativeArray*)var73)->values[3]=var100;
{
var101 = ((val*(*)(val* self))(var73->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var73); /* native_to_s on <var73:NativeArray[String]>*/
}
varonce72 = var73;
{
nitc___nitc__ToolContext___info(var_tc, var101, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (unlikely(varonce102==NULL)) {
var103 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "invocations by direct call:  ";
var107 = core__abstract_text___CString___to_s_full(var106, 29l, 29l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var103)->values[0]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = " (";
var111 = core__abstract_text___CString___to_s_full(var110, 2l, 2l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var103)->values[2]=var109;
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "%)";
var115 = core__abstract_text___CString___to_s_full(var114, 2l, 2l);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var103)->values[4]=var113;
} else {
var103 = varonce102;
varonce102 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var118 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var116) on <var116:ModelBuilder> */
var121 = var116->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var116:ModelBuilder> */
var119 = var121;
RET_LABEL120:(void)0;
}
}
var122 = core__flat___Int___core__abstract_text__Object__to_s(var119);
((struct instance_core__NativeArray*)var103)->values[1]=var122;
var123 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var126 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_direct (var124) on <var124:ModelBuilder> */
var129 = var124->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l; /* _nb_invok_by_direct on <var124:ModelBuilder> */
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
var130 = counter___core__Sys___div(var123, var127, var_nb_invok_total);
}
((struct instance_core__NativeArray*)var103)->values[3]=var130;
{
var131 = ((val*(*)(val* self))(var103->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
{
nitc___nitc__ToolContext___info(var_tc, var131, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
if (unlikely(varonce132==NULL)) {
var133 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "invocations by inlining:     ";
var137 = core__abstract_text___CString___to_s_full(var136, 29l, 29l);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var133)->values[0]=var135;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = " (";
var141 = core__abstract_text___CString___to_s_full(var140, 2l, 2l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var133)->values[2]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "%)";
var145 = core__abstract_text___CString___to_s_full(var144, 2l, 2l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var133)->values[4]=var143;
} else {
var133 = varonce132;
varonce132 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var148 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var146) on <var146:ModelBuilder> */
var151 = var146->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var146:ModelBuilder> */
var149 = var151;
RET_LABEL150:(void)0;
}
}
var152 = core__flat___Int___core__abstract_text__Object__to_s(var149);
((struct instance_core__NativeArray*)var133)->values[1]=var152;
var153 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:SeparateCompiler> */
var156 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:SeparateCompiler> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline separate_compiler#ModelBuilder#nb_invok_by_inline (var154) on <var154:ModelBuilder> */
var159 = var154->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l; /* _nb_invok_by_inline on <var154:ModelBuilder> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
var160 = counter___core__Sys___div(var153, var157, var_nb_invok_total);
}
((struct instance_core__NativeArray*)var133)->values[3]=var160;
{
var161 = ((val*(*)(val* self))(var133->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var133); /* native_to_s on <var133:NativeArray[String]>*/
}
varonce132 = var133;
{
nitc___nitc__ToolContext___info(var_tc, var161, 2l); /* Direct call toolcontext#ToolContext#info on <var_tc:ToolContext>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_sizes for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___display_sizes(val* self) {
val* var /* : Sys */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : Sys */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
long var_total /* var total: Int */;
long var_holes /* var holes: Int */;
val* var9 /* : Map[MType, Array[nullable MType]] */;
val* var11 /* : Map[MType, Array[nullable MType]] */;
val* var_ /* var : Map[MType, Array[nullable MType]] */;
val* var12 /* : MapIterator[nullable Object, nullable Object] */;
val* var_13 /* var : MapIterator[MType, Array[nullable MType]] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var16 /* : nullable Object */;
val* var_table /* var table: Array[nullable MType] */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var23 /* : Int */;
val* var_24 /* var : Array[nullable MType] */;
val* var25 /* : IndexedIterator[nullable Object] */;
val* var_26 /* var : IndexedIterator[nullable MType] */;
short int var27 /* : Bool */;
val* var29 /* : nullable Object */;
val* var_e /* var e: nullable MType */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
val* var44 /* : Sys */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : Sys */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : Sys */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : Map[MClassType, Array[nullable MType]] */;
val* var70 /* : Map[MClassType, Array[nullable MType]] */;
val* var_71 /* var : Map[MClassType, Array[nullable MType]] */;
val* var72 /* : MapIterator[nullable Object, nullable Object] */;
val* var_73 /* var : MapIterator[MClassType, Array[nullable MType]] */;
short int var74 /* : Bool */;
val* var76 /* : nullable Object */;
val* var_t77 /* var t: MClassType */;
val* var78 /* : nullable Object */;
val* var_table79 /* var table: Array[nullable MType] */;
long var80 /* : Int */;
long var82 /* : Int */;
long var83 /* : Int */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
long var89 /* : Int */;
val* var_90 /* var : Array[nullable MType] */;
val* var91 /* : IndexedIterator[nullable Object] */;
val* var_92 /* var : IndexedIterator[nullable MType] */;
short int var93 /* : Bool */;
val* var95 /* : nullable Object */;
val* var_e96 /* var e: nullable MType */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
long var103 /* : Int */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
long var109 /* : Int */;
val* var111 /* : Sys */;
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
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : String */;
val* var125 /* : Sys */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
val* var130 /* : Sys */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var137 /* : Map[MClass, Array[nullable MPropDef]] */;
val* var_138 /* var : Map[MClass, Array[nullable MPropDef]] */;
val* var139 /* : MapIterator[nullable Object, nullable Object] */;
val* var_140 /* var : MapIterator[MClass, Array[nullable MPropDef]] */;
short int var141 /* : Bool */;
val* var143 /* : nullable Object */;
val* var_t144 /* var t: MClass */;
val* var145 /* : nullable Object */;
val* var_table146 /* var table: Array[nullable MPropDef] */;
long var147 /* : Int */;
long var149 /* : Int */;
long var150 /* : Int */;
short int var152 /* : Bool */;
int cltype153;
int idtype154;
const char* var_class_name155;
long var156 /* : Int */;
val* var_157 /* var : Array[nullable MPropDef] */;
val* var158 /* : IndexedIterator[nullable Object] */;
val* var_159 /* var : IndexedIterator[nullable MPropDef] */;
short int var160 /* : Bool */;
val* var162 /* : nullable Object */;
val* var_e163 /* var e: nullable MPropDef */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
long var170 /* : Int */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
const char* var_class_name175;
long var176 /* : Int */;
val* var178 /* : Sys */;
val* var180 /* : NativeArray[String] */;
static val* varonce179;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : CString */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : String */;
val* var190 /* : String */;
val* var191 /* : String */;
val* var192 /* : Sys */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : CString */;
val* var196 /* : String */;
val* var197 /* : Sys */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
val* var202 /* : Map[MClass, Array[nullable MProperty]] */;
val* var204 /* : Map[MClass, Array[nullable MProperty]] */;
val* var_205 /* var : Map[MClass, Array[nullable MProperty]] */;
val* var206 /* : MapIterator[nullable Object, nullable Object] */;
val* var_207 /* var : MapIterator[MClass, Array[nullable MProperty]] */;
short int var208 /* : Bool */;
val* var210 /* : nullable Object */;
val* var_t211 /* var t: MClass */;
val* var212 /* : nullable Object */;
val* var_table213 /* var table: Array[nullable MProperty] */;
long var214 /* : Int */;
long var216 /* : Int */;
long var217 /* : Int */;
short int var219 /* : Bool */;
int cltype220;
int idtype221;
const char* var_class_name222;
long var223 /* : Int */;
val* var_224 /* var : Array[nullable MProperty] */;
val* var225 /* : IndexedIterator[nullable Object] */;
val* var_226 /* var : IndexedIterator[nullable MProperty] */;
short int var227 /* : Bool */;
val* var229 /* : nullable Object */;
val* var_e230 /* var e: nullable MProperty */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var236 /* : Bool */;
long var237 /* : Int */;
short int var239 /* : Bool */;
int cltype240;
int idtype241;
const char* var_class_name242;
long var243 /* : Int */;
val* var245 /* : Sys */;
val* var247 /* : NativeArray[String] */;
static val* varonce246;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : CString */;
val* var251 /* : String */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : CString */;
val* var255 /* : String */;
val* var256 /* : String */;
val* var257 /* : String */;
val* var258 /* : String */;
var = glob_sys;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "# size of subtyping tables";
var3 = core__abstract_text___CString___to_s_full(var2, 26l, 26l);
var1 = var3;
varonce = var1;
}
{
core__file___Sys___print(var, var1); /* Direct call file#Sys#print on <var:Sys>*/
}
var4 = glob_sys;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "\ttotal \tholes";
var8 = core__abstract_text___CString___to_s_full(var7, 13l, 13l);
var6 = var8;
varonce5 = var6;
}
{
core__file___Sys___print(var4, var6); /* Direct call file#Sys#print on <var4:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#type_tables (self) on <self:SeparateCompiler> */
var11 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___type_tables].val; /* _type_tables on <self:SeparateCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1071);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ = var9;
{
var12 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:Map[MType, Array[nullable MType]]>*/
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_13); /* is_ok on <var_13:MapIterator[MType, Array[nullable MType]]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_13); /* key on <var_13:MapIterator[MType, Array[nullable MType]]>*/
}
var_t = var15;
{
var16 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_13); /* item on <var_13:MapIterator[MType, Array[nullable MType]]>*/
}
var_table = var16;
{
{ /* Inline array#AbstractArrayRead#length (var_table) on <var_table:Array[nullable MType]> */
var19 = var_table->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table:Array[nullable MType]> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var17) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var22 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = var_total + var17;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_total = var20;
var_24 = var_table;
{
var25 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_24);
}
var_26 = var25;
for(;;) {
{
var27 = ((short int(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_26); /* is_ok on <var_26:IndexedIterator[nullable MType]>*/
}
if (var27){
} else {
goto BREAK_label28;
}
{
var29 = ((val*(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_26); /* item on <var_26:IndexedIterator[nullable MType]>*/
}
var_e = var29;
if (var_e == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,((val*)NULL)) on <var_e:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable MType(MType)> */
var35 = var_e == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_holes + 1l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_holes = var36;
} else {
}
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_26); /* next on <var_26:IndexedIterator[nullable MType]>*/
}
}
BREAK_label28: (void)0;
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_26); /* finish on <var_26:IndexedIterator[nullable MType]>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_13); /* next on <var_13:MapIterator[MType, Array[nullable MType]]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_13) on <var_13:MapIterator[MType, Array[nullable MType]]> */
RET_LABEL43:(void)0;
}
}
var44 = glob_sys;
if (unlikely(varonce45==NULL)) {
var46 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "\t";
var50 = core__abstract_text___CString___to_s_full(var49, 1l, 1l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var46)->values[0]=var48;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "\t";
var54 = core__abstract_text___CString___to_s_full(var53, 1l, 1l);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var46)->values[2]=var52;
} else {
var46 = varonce45;
varonce45 = NULL;
}
var55 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var46)->values[1]=var55;
var56 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var46)->values[3]=var56;
{
var57 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
core__file___Sys___print(var44, var57); /* Direct call file#Sys#print on <var44:Sys>*/
}
var58 = glob_sys;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "# size of resolution tables";
var62 = core__abstract_text___CString___to_s_full(var61, 27l, 27l);
var60 = var62;
varonce59 = var60;
}
{
core__file___Sys___print(var58, var60); /* Direct call file#Sys#print on <var58:Sys>*/
}
var63 = glob_sys;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "\ttotal \tholes";
var67 = core__abstract_text___CString___to_s_full(var66, 13l, 13l);
var65 = var67;
varonce64 = var65;
}
{
core__file___Sys___print(var63, var65); /* Direct call file#Sys#print on <var63:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#resolution_tables (self) on <self:SeparateCompiler> */
var70 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___resolution_tables].val; /* _resolution_tables on <self:SeparateCompiler> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _resolution_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1072);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_71 = var68;
{
var72 = ((val*(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_71); /* iterator on <var_71:Map[MClassType, Array[nullable MType]]>*/
}
var_73 = var72;
for(;;) {
{
var74 = ((short int(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_73); /* is_ok on <var_73:MapIterator[MClassType, Array[nullable MType]]>*/
}
if (var74){
} else {
goto BREAK_label75;
}
{
var76 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_73); /* key on <var_73:MapIterator[MClassType, Array[nullable MType]]>*/
}
var_t77 = var76;
{
var78 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_73); /* item on <var_73:MapIterator[MClassType, Array[nullable MType]]>*/
}
var_table79 = var78;
{
{ /* Inline array#AbstractArrayRead#length (var_table79) on <var_table79:Array[nullable MType]> */
var82 = var_table79->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table79:Array[nullable MType]> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var80) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var80:Int> isa OTHER */
/* <var80:Int> isa OTHER */
var85 = 1; /* easy <var80:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var89 = var_total + var80;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var_total = var83;
var_90 = var_table79;
{
var91 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_90);
}
var_92 = var91;
for(;;) {
{
var93 = ((short int(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_92); /* is_ok on <var_92:IndexedIterator[nullable MType]>*/
}
if (var93){
} else {
goto BREAK_label94;
}
{
var95 = ((val*(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_92); /* item on <var_92:IndexedIterator[nullable MType]>*/
}
var_e96 = var95;
if (var_e96 == NULL) {
var97 = 1; /* is null */
} else {
var97 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e96,((val*)NULL)) on <var_e96:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e96,var_other) on <var_e96:nullable MType(MType)> */
var102 = var_e96 == var_other;
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var97 = var98;
}
if (var97){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var105 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var109 = var_holes + 1l;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_holes = var103;
} else {
}
{
((void(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_92); /* next on <var_92:IndexedIterator[nullable MType]>*/
}
}
BREAK_label94: (void)0;
{
((void(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_92); /* finish on <var_92:IndexedIterator[nullable MType]>*/
}
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_73); /* next on <var_73:MapIterator[MClassType, Array[nullable MType]]>*/
}
}
BREAK_label75: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_73) on <var_73:MapIterator[MClassType, Array[nullable MType]]> */
RET_LABEL110:(void)0;
}
}
var111 = glob_sys;
if (unlikely(varonce112==NULL)) {
var113 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "\t";
var117 = core__abstract_text___CString___to_s_full(var116, 1l, 1l);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var113)->values[0]=var115;
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "\t";
var121 = core__abstract_text___CString___to_s_full(var120, 1l, 1l);
var119 = var121;
varonce118 = var119;
}
((struct instance_core__NativeArray*)var113)->values[2]=var119;
} else {
var113 = varonce112;
varonce112 = NULL;
}
var122 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var113)->values[1]=var122;
var123 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var113)->values[3]=var123;
{
var124 = ((val*(*)(val* self))(var113->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var113); /* native_to_s on <var113:NativeArray[String]>*/
}
varonce112 = var113;
{
core__file___Sys___print(var111, var124); /* Direct call file#Sys#print on <var111:Sys>*/
}
var125 = glob_sys;
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "# size of methods tables";
var129 = core__abstract_text___CString___to_s_full(var128, 24l, 24l);
var127 = var129;
varonce126 = var127;
}
{
core__file___Sys___print(var125, var127); /* Direct call file#Sys#print on <var125:Sys>*/
}
var130 = glob_sys;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "\ttotal \tholes";
var134 = core__abstract_text___CString___to_s_full(var133, 13l, 13l);
var132 = var134;
varonce131 = var132;
}
{
core__file___Sys___print(var130, var132); /* Direct call file#Sys#print on <var130:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#method_tables (self) on <self:SeparateCompiler> */
var137 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___method_tables].val; /* _method_tables on <self:SeparateCompiler> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _method_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1073);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
var_138 = var135;
{
var139 = ((val*(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_138); /* iterator on <var_138:Map[MClass, Array[nullable MPropDef]]>*/
}
var_140 = var139;
for(;;) {
{
var141 = ((short int(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_140); /* is_ok on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
if (var141){
} else {
goto BREAK_label142;
}
{
var143 = ((val*(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_140); /* key on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_t144 = var143;
{
var145 = ((val*(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_140); /* item on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
var_table146 = var145;
{
{ /* Inline array#AbstractArrayRead#length (var_table146) on <var_table146:Array[nullable MPropDef]> */
var149 = var_table146->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table146:Array[nullable MPropDef]> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var147) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var147:Int> isa OTHER */
/* <var147:Int> isa OTHER */
var152 = 1; /* easy <var147:Int> isa OTHER*/
if (unlikely(!var152)) {
var_class_name155 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name155);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var156 = var_total + var147;
var150 = var156;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
var_total = var150;
var_157 = var_table146;
{
var158 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_157);
}
var_159 = var158;
for(;;) {
{
var160 = ((short int(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_159); /* is_ok on <var_159:IndexedIterator[nullable MPropDef]>*/
}
if (var160){
} else {
goto BREAK_label161;
}
{
var162 = ((val*(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_159); /* item on <var_159:IndexedIterator[nullable MPropDef]>*/
}
var_e163 = var162;
if (var_e163 == NULL) {
var164 = 1; /* is null */
} else {
var164 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e163,((val*)NULL)) on <var_e163:nullable MPropDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e163,var_other) on <var_e163:nullable MPropDef(MPropDef)> */
var169 = var_e163 == var_other;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
var165 = var167;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
var164 = var165;
}
if (var164){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var172 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var172)) {
var_class_name175 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name175);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var176 = var_holes + 1l;
var170 = var176;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
}
var_holes = var170;
} else {
}
{
((void(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_159); /* next on <var_159:IndexedIterator[nullable MPropDef]>*/
}
}
BREAK_label161: (void)0;
{
((void(*)(val* self))((((long)var_159&3)?class_info[((long)var_159&3)]:var_159->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_159); /* finish on <var_159:IndexedIterator[nullable MPropDef]>*/
}
{
((void(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_140); /* next on <var_140:MapIterator[MClass, Array[nullable MPropDef]]>*/
}
}
BREAK_label142: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_140) on <var_140:MapIterator[MClass, Array[nullable MPropDef]]> */
RET_LABEL177:(void)0;
}
}
var178 = glob_sys;
if (unlikely(varonce179==NULL)) {
var180 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "\t";
var184 = core__abstract_text___CString___to_s_full(var183, 1l, 1l);
var182 = var184;
varonce181 = var182;
}
((struct instance_core__NativeArray*)var180)->values[0]=var182;
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "\t";
var188 = core__abstract_text___CString___to_s_full(var187, 1l, 1l);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var180)->values[2]=var186;
} else {
var180 = varonce179;
varonce179 = NULL;
}
var189 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var180)->values[1]=var189;
var190 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var180)->values[3]=var190;
{
var191 = ((val*(*)(val* self))(var180->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var180); /* native_to_s on <var180:NativeArray[String]>*/
}
varonce179 = var180;
{
core__file___Sys___print(var178, var191); /* Direct call file#Sys#print on <var178:Sys>*/
}
var192 = glob_sys;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "# size of attributes tables";
var196 = core__abstract_text___CString___to_s_full(var195, 27l, 27l);
var194 = var196;
varonce193 = var194;
}
{
core__file___Sys___print(var192, var194); /* Direct call file#Sys#print on <var192:Sys>*/
}
var197 = glob_sys;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "\ttotal \tholes";
var201 = core__abstract_text___CString___to_s_full(var200, 13l, 13l);
var199 = var201;
varonce198 = var199;
}
{
core__file___Sys___print(var197, var199); /* Direct call file#Sys#print on <var197:Sys>*/
}
var_total = 0l;
var_holes = 0l;
{
{ /* Inline separate_compiler#SeparateCompiler#attr_tables (self) on <self:SeparateCompiler> */
var204 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_tables].val; /* _attr_tables on <self:SeparateCompiler> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _attr_tables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1074);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_205 = var202;
{
var206 = ((val*(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_205); /* iterator on <var_205:Map[MClass, Array[nullable MProperty]]>*/
}
var_207 = var206;
for(;;) {
{
var208 = ((short int(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_207); /* is_ok on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
if (var208){
} else {
goto BREAK_label209;
}
{
var210 = ((val*(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_207); /* key on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
var_t211 = var210;
{
var212 = ((val*(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_207); /* item on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
var_table213 = var212;
{
{ /* Inline array#AbstractArrayRead#length (var_table213) on <var_table213:Array[nullable MProperty]> */
var216 = var_table213->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_table213:Array[nullable MProperty]> */
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_total,var214) on <var_total:Int> */
/* Covariant cast for argument 0 (i) <var214:Int> isa OTHER */
/* <var214:Int> isa OTHER */
var219 = 1; /* easy <var214:Int> isa OTHER*/
if (unlikely(!var219)) {
var_class_name222 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name222);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var223 = var_total + var214;
var217 = var223;
goto RET_LABEL218;
RET_LABEL218:(void)0;
}
}
var_total = var217;
var_224 = var_table213;
{
var225 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_224);
}
var_226 = var225;
for(;;) {
{
var227 = ((short int(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_226); /* is_ok on <var_226:IndexedIterator[nullable MProperty]>*/
}
if (var227){
} else {
goto BREAK_label228;
}
{
var229 = ((val*(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_226); /* item on <var_226:IndexedIterator[nullable MProperty]>*/
}
var_e230 = var229;
if (var_e230 == NULL) {
var231 = 1; /* is null */
} else {
var231 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e230,((val*)NULL)) on <var_e230:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e230,var_other) on <var_e230:nullable MProperty(MProperty)> */
var236 = var_e230 == var_other;
var234 = var236;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
}
var232 = var234;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
var231 = var232;
}
if (var231){
{
{ /* Inline kernel#Int#+ (var_holes,1l) on <var_holes:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var239 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var239)) {
var_class_name242 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name242);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var243 = var_holes + 1l;
var237 = var243;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
}
var_holes = var237;
} else {
}
{
((void(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_226); /* next on <var_226:IndexedIterator[nullable MProperty]>*/
}
}
BREAK_label228: (void)0;
{
((void(*)(val* self))((((long)var_226&3)?class_info[((long)var_226&3)]:var_226->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_226); /* finish on <var_226:IndexedIterator[nullable MProperty]>*/
}
{
((void(*)(val* self))((((long)var_207&3)?class_info[((long)var_207&3)]:var_207->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_207); /* next on <var_207:MapIterator[MClass, Array[nullable MProperty]]>*/
}
}
BREAK_label209: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_207) on <var_207:MapIterator[MClass, Array[nullable MProperty]]> */
RET_LABEL244:(void)0;
}
}
var245 = glob_sys;
if (unlikely(varonce246==NULL)) {
var247 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "\t";
var251 = core__abstract_text___CString___to_s_full(var250, 1l, 1l);
var249 = var251;
varonce248 = var249;
}
((struct instance_core__NativeArray*)var247)->values[0]=var249;
if (likely(varonce252!=NULL)) {
var253 = varonce252;
} else {
var254 = "\t";
var255 = core__abstract_text___CString___to_s_full(var254, 1l, 1l);
var253 = var255;
varonce252 = var253;
}
((struct instance_core__NativeArray*)var247)->values[2]=var253;
} else {
var247 = varonce246;
varonce246 = NULL;
}
var256 = core__flat___Int___core__abstract_text__Object__to_s(var_total);
((struct instance_core__NativeArray*)var247)->values[1]=var256;
var257 = core__flat___Int___core__abstract_text__Object__to_s(var_holes);
((struct instance_core__NativeArray*)var247)->values[3]=var257;
{
var258 = ((val*(*)(val* self))(var247->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var247); /* native_to_s on <var247:NativeArray[String]>*/
}
varonce246 = var247;
{
core__file___Sys___print(var245, var258); /* Direct call file#Sys#print on <var245:Sys>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#isset_checks_count for (self: SeparateCompiler): Int */
long nitc___nitc__SeparateCompiler___isset_checks_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#isset_checks_count= for (self: SeparateCompiler, Int) */
void nitc___nitc__SeparateCompiler___isset_checks_count_61d(val* self, long p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l = p0; /* _isset_checks_count on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#attr_read_count for (self: SeparateCompiler): Int */
long nitc___nitc__SeparateCompiler___attr_read_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:SeparateCompiler> */
var = var1;
RET_LABEL:;
return var;
}
/* method separate_compiler#SeparateCompiler#attr_read_count= for (self: SeparateCompiler, Int) */
void nitc___nitc__SeparateCompiler___attr_read_count_61d(val* self, long p0) {
self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l = p0; /* _attr_read_count on <self:SeparateCompiler> */
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#display_isset_checks for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___display_isset_checks(val* self) {
val* var /* : Sys */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : Sys */;
val* var6 /* : NativeArray[String] */;
static val* varonce5;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
long var11 /* : Int */;
long var13 /* : Int */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : Sys */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : Sys */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
long var28 /* : Int */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : String */;
var = glob_sys;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "# total number of compiled attribute reads";
var3 = core__abstract_text___CString___to_s_full(var2, 42l, 42l);
var1 = var3;
varonce = var1;
}
{
core__file___Sys___print(var, var1); /* Direct call file#Sys#print on <var:Sys>*/
}
var4 = glob_sys;
if (unlikely(varonce5==NULL)) {
var6 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "\t";
var10 = core__abstract_text___CString___to_s_full(var9, 1l, 1l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
} else {
var6 = varonce5;
varonce5 = NULL;
}
{
{ /* Inline separate_compiler#SeparateCompiler#attr_read_count (self) on <self:SeparateCompiler> */
var13 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___attr_read_count].l; /* _attr_read_count on <self:SeparateCompiler> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = core__flat___Int___core__abstract_text__Object__to_s(var11);
((struct instance_core__NativeArray*)var6)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce5 = var6;
{
core__file___Sys___print(var4, var15); /* Direct call file#Sys#print on <var4:Sys>*/
}
var16 = glob_sys;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "# total number of compiled isset-checks";
var20 = core__abstract_text___CString___to_s_full(var19, 39l, 39l);
var18 = var20;
varonce17 = var18;
}
{
core__file___Sys___print(var16, var18); /* Direct call file#Sys#print on <var16:Sys>*/
}
var21 = glob_sys;
if (unlikely(varonce22==NULL)) {
var23 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "\t";
var27 = core__abstract_text___CString___to_s_full(var26, 1l, 1l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
{ /* Inline separate_compiler#SeparateCompiler#isset_checks_count (self) on <self:SeparateCompiler> */
var30 = self->attrs[COLOR_nitc__separate_compiler__SeparateCompiler___isset_checks_count].l; /* _isset_checks_count on <self:SeparateCompiler> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = core__flat___Int___core__abstract_text__Object__to_s(var28);
((struct instance_core__NativeArray*)var23)->values[1]=var31;
{
var32 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
{
core__file___Sys___print(var21, var32); /* Direct call file#Sys#print on <var21:Sys>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#compile_nitni_structs for (self: SeparateCompiler) */
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "struct nitni_instance {\n\tstruct nitni_instance *next,\n\t\t*prev; /* adjacent global references in global list */\n\tint count; /* number of time this global reference has been marked */\n\tstruct instance *value;\n};\n";
var5 = core__abstract_text___CString___to_s_full(var4, 210l, 210l);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs]))(self); /* compile_nitni_structs on <self:SeparateCompiler>*/
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompiler#finalize_ffi_for_module for (self: SeparateCompiler, MModule) */
void nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__finalize_ffi_for_module(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var_old_module /* var old_module: MModule */;
var_mmodule = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:SeparateCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:SeparateCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_old_module = var;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_mmodule) on <self:SeparateCompiler> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var_mmodule; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc___nitc__SeparateCompiler___nitc__abstract_compiler__AbstractCompiler__finalize_ffi_for_module]))(self, p0); /* finalize_ffi_for_module on <self:SeparateCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule= (self,var_old_module) on <self:SeparateCompiler> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = var_old_module; /* _mainmodule on <self:SeparateCompiler> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#adapt_signature for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable MSignature */;
val* var2 /* : nullable MSignature */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var22 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
val* var23 /* : MType */;
val* var25 /* : MType */;
val* var26 /* : String */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : MClass */;
val* var32 /* : MClass */;
val* var33 /* : MClassType */;
val* var35 /* : MClassType */;
val* var36 /* : String */;
short int var37 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var42 /* : MClassDef */;
val* var44 /* : MClassDef */;
val* var45 /* : MClass */;
val* var47 /* : MClass */;
val* var48 /* : MClassType */;
val* var50 /* : MClassType */;
val* var51 /* : RuntimeVariable */;
long var_i /* var i: Int */;
long var52 /* : Int */;
long var_ /* var : Int */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var56 /* : Bool */;
val* var57 /* : Array[MParameter] */;
val* var59 /* : Array[MParameter] */;
val* var60 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var61 /* : MType */;
val* var63 /* : MType */;
val* var_t /* var t: MType */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
val* var74 /* : nullable Object */;
val* var75 /* : MType */;
val* var77 /* : MType */;
long var78 /* : Int */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
long var84 /* : Int */;
long var85 /* : Int */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
long var91 /* : Int */;
val* var92 /* : nullable Object */;
val* var93 /* : RuntimeVariable */;
long var94 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
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
{ /* Inline model#MClassDef#mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1177);
fatal_exit(1);
} else {
var21 = nitc___nitc__MSignature___MType__resolve_for(var, var6, var12, var18, 1);
}
var_msignature = var21;
{
var22 = core___core__SequenceRead___Collection__first(var_args);
}
var_recv = var22;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var25 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((val*(*)(val* self))(var23->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var23); /* ctype on <var23:MType>*/
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var29 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var27) on <var27:MClassDef> */
var32 = var27->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var27:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var30:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = nitc__abstract_compiler___MClassType___MType__ctype(var33);
}
{
{ /* Inline kernel#Object#!= (var26,var36) on <var26:String> */
var_other = var36;
{
var39 = ((short int(*)(val* self, val* p0))(var26->class->vft[COLOR_core__kernel__Object___61d_61d]))(var26, var_other); /* == on <var26:String>*/
}
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var41 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var44 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var42) on <var42:MClassDef> */
var47 = var42->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var42:MClassDef> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var45) on <var45:MClass> */
var50 = var45->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var45:MClass> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var41, var48);
}
{
core___core__Sequence___first_61d(var_args, var51); /* Direct call abstract_collection#Sequence#first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var_i = 0l;
{
var52 = nitc___nitc__MSignature___arity(var_msignature);
}
var_ = var52;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var55 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var56 = var_i < var_;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
} else {
goto BREAK_label;
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var59 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var57, var_i);
}
var_mp = var60;
{
{ /* Inline model#MParameter#mtype (var_mp) on <var_mp:MParameter> */
var63 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
var_t = var61;
{
{ /* Inline model#MParameter#is_vararg (var_mp) on <var_mp:MParameter> */
var66 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var69 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var73 = var_i + 1l;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
var74 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var67);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var74) on <var74:nullable Object(RuntimeVariable)> */
var77 = var74->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var74:nullable Object(RuntimeVariable)> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_t = var75;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var80 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var84 = var_i + 1l;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var87 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var91 = var_i + 1l;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
{
var92 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var85);
}
{
var93 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var92, var_t);
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_args, var78, var93); /* Direct call array#Array#[]= on <var_args:Array[RuntimeVariable]>*/
}
{
var94 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var94;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method separate_compiler#SeparateCompilerVisitor#unbox_signature_extern for (self: SeparateCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern(val* self, val* p0, val* p1) {
val* var_m /* var m: MMethodDef */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var /* : nullable MSignature */;
val* var2 /* : nullable MSignature */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var22 /* : Bool */;
val* var23 /* : MProperty */;
val* var25 /* : MProperty */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var34 /* : MClassDef */;
val* var36 /* : MClassDef */;
val* var37 /* : MClass */;
val* var39 /* : MClass */;
val* var40 /* : MClassType */;
val* var42 /* : MClassType */;
val* var43 /* : RuntimeVariable */;
long var_i /* var i: Int */;
long var44 /* : Int */;
long var_45 /* var : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var49 /* : Bool */;
val* var50 /* : Array[MParameter] */;
val* var52 /* : Array[MParameter] */;
val* var53 /* : nullable Object */;
val* var_mp /* var mp: MParameter */;
val* var54 /* : MType */;
val* var56 /* : MType */;
val* var_t /* var t: MType */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
val* var67 /* : nullable Object */;
val* var68 /* : MType */;
val* var70 /* : MType */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
long var74 /* : Int */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
long var80 /* : Int */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
val* var88 /* : nullable Object */;
val* var89 /* : RuntimeVariable */;
long var90 /* : Int */;
var_m = p0;
var_args = p1;
{
{ /* Inline model#MMethodDef#msignature (var_m) on <var_m:MMethodDef> */
var2 = var_m->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_m:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var5 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var11 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var9) on <var9:MClassDef> */
var14 = var9->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var9:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var17 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
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
{ /* Inline model#MClassDef#mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 1194);
fatal_exit(1);
} else {
var21 = nitc___nitc__MSignature___MType__resolve_for(var, var6, var12, var18, 1);
}
var_msignature = var21;
{
{ /* Inline model#MPropDef#mproperty (var_m) on <var_m:MMethodDef> */
var25 = var_m->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_m:MMethodDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var23) on <var23:MProperty(MMethod)> */
var28 = var23->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var23:MProperty(MMethod)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = !var26;
var_ = var29;
if (var29){
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:MMethodDef> */
var32 = var_m->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var22 = var30;
} else {
var22 = var_;
}
if (var22){
{
var33 = core___core__SequenceRead___Collection__first(var_args);
}
{
{ /* Inline model#MPropDef#mclassdef (var_m) on <var_m:MMethodDef> */
var36 = var_m->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_m:MMethodDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var34) on <var34:MClassDef> */
var39 = var34->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var34:MClassDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var37) on <var37:MClass> */
var42 = var37->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var37:MClass> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var33, var40); /* unbox_extern on <self:SeparateCompilerVisitor>*/
}
{
core___core__Sequence___first_61d(var_args, var43); /* Direct call abstract_collection#Sequence#first= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
var_i = 0l;
{
var44 = nitc___nitc__MSignature___arity(var_msignature);
}
var_45 = var44;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_45) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_45:Int> isa OTHER */
/* <var_45:Int> isa OTHER */
var48 = 1; /* easy <var_45:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var49 = var_i < var_45;
var46 = var49;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
} else {
goto BREAK_label;
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var52 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var50, var_i);
}
var_mp = var53;
{
{ /* Inline model#MParameter#mtype (var_mp) on <var_mp:MParameter> */
var56 = var_mp->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mp:MParameter> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_t = var54;
{
{ /* Inline model#MParameter#is_vararg (var_mp) on <var_mp:MParameter> */
var59 = var_mp->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mp:MParameter> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var66 = var_i + 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
var67 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var60);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var67) on <var67:nullable Object(RuntimeVariable)> */
var70 = var67->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var67:nullable Object(RuntimeVariable)> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
var_t = var68;
} else {
}
{
{ /* Inline model#MMethodDef#is_extern (var_m) on <var_m:MMethodDef> */
var73 = var_m->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_m:MMethodDef> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var71){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var76 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var80 = var_i + 1l;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var83 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var87 = var_i + 1l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
var88 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var81);
}
{
var89 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(self, var88, var_t); /* unbox_extern on <self:SeparateCompilerVisitor>*/
}
{
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_args, var74, var89); /* Direct call array#Array#[]= on <var_args:Array[RuntimeVariable]>*/
}
} else {
}
{
var90 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var90;
}
BREAK_label: (void)0;
RET_LABEL:;
}
