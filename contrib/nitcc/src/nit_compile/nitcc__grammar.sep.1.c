#include "nitcc__grammar.sep.0.h"
/* method grammar$Gram$prods for (self: Gram): Array[Production] */
val* nitcc___nitcc__Gram___prods(val* self) {
val* var /* : Array[Production] */;
val* var1 /* : Array[Production] */;
var1 = self->attrs[COLOR_nitcc__grammar__Gram___prods].val; /* _prods on <self:Gram> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _prods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 17);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Gram$prods= for (self: Gram, Array[Production]) */
void nitcc___nitcc__Gram___prods_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Gram___prods].val = p0; /* _prods on <self:Gram> */
RET_LABEL:;
}
/* method grammar$Gram$ast_prods for (self: Gram): Array[Production] */
val* nitcc___nitcc__Gram___ast_prods(val* self) {
val* var /* : Array[Production] */;
val* var1 /* : Array[Production] */;
var1 = self->attrs[COLOR_nitcc__grammar__Gram___ast_prods].val; /* _ast_prods on <self:Gram> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ast_prods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 20);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Gram$ast_prods= for (self: Gram, Array[Production]) */
void nitcc___nitcc__Gram___ast_prods_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Gram___ast_prods].val = p0; /* _ast_prods on <self:Gram> */
RET_LABEL:;
}
/* method grammar$Gram$tokens for (self: Gram): Array[Token] */
val* nitcc___nitcc__Gram___tokens(val* self) {
val* var /* : Array[Token] */;
val* var1 /* : Array[Token] */;
var1 = self->attrs[COLOR_nitcc__grammar__Gram___tokens].val; /* _tokens on <self:Gram> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tokens");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Gram$tokens= for (self: Gram, Array[Token]) */
void nitcc___nitcc__Gram___tokens_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Gram___tokens].val = p0; /* _tokens on <self:Gram> */
RET_LABEL:;
}
/* method grammar$Gram$pretty for (self: Gram): String */
val* nitcc___nitcc__Gram___pretty(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_res /* var res: FlatBuffer */;
val* var2 /* : Array[Production] */;
val* var_ /* var : Array[Production] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[Production] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_p /* var p: Production */;
val* var7 /* : nullable Production */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var27 /* : String */;
val* var28 /* : nullable Production */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var32 /* : NativeArray[String] */;
static val* varonce31;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable Bool */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var_last /* var last: nullable Object */;
val* var43 /* : Array[Alternative] */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : Array[Alternative] */;
val* var47 /* : nullable Object */;
val* var48 /* : Array[Alternative] */;
val* var_49 /* var : Array[Alternative] */;
val* var50 /* : Iterator[nullable Object] */;
val* var_51 /* var : IndexedIterator[Alternative] */;
short int var52 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_a /* var a: Alternative */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable Bool */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Bool */;
val* var72 /* : nullable Bool */;
val* var73 /* : String */;
val* var74 /* : Array[Element] */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var85 /* : nullable Array[Code] */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Bool */;
val* var97 /* : nullable Bool */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Bool */;
val* var105 /* : nullable Bool */;
val* var106 /* : nullable Array[Code] */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Bool */;
val* var114 /* : nullable Bool */;
val* var115 /* : String */;
val* var116 /* : String */;
short int var117 /* : Bool */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Bool */;
val* var125 /* : nullable Bool */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Bool */;
val* var133 /* : nullable Bool */;
short int var134 /* : Bool */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Bool */;
val* var142 /* : nullable Bool */;
val* var143 /* : HashSet[Item] */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Bool */;
val* var153 /* : nullable Bool */;
val* var154 /* : HashSet[Item] */;
val* var_155 /* var : HashSet[Item] */;
val* var156 /* : Iterator[nullable Object] */;
val* var_157 /* var : Iterator[Item] */;
short int var158 /* : Bool */;
val* var160 /* : nullable Object */;
val* var_x /* var x: Item */;
val* var162 /* : NativeArray[String] */;
static val* varonce161;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Bool */;
val* var170 /* : nullable Bool */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : CString */;
val* var174 /* : String */;
val* var175 /* : nullable Int */;
val* var176 /* : nullable Int */;
val* var177 /* : nullable Bool */;
val* var178 /* : nullable Bool */;
val* var179 /* : String */;
val* var180 /* : String */;
val* var181 /* : HashSet[Item] */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : CString */;
val* var187 /* : String */;
val* var188 /* : nullable Int */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Bool */;
val* var191 /* : nullable Bool */;
val* var192 /* : HashSet[Item] */;
val* var_193 /* var : HashSet[Item] */;
val* var194 /* : Iterator[nullable Object] */;
val* var_195 /* var : Iterator[Item] */;
short int var196 /* : Bool */;
val* var198 /* : nullable Object */;
val* var_x199 /* var x: Item */;
val* var201 /* : NativeArray[String] */;
static val* varonce200;
static val* varonce202;
val* var203 /* : String */;
char* var204 /* : CString */;
val* var205 /* : String */;
val* var206 /* : nullable Int */;
val* var207 /* : nullable Int */;
val* var208 /* : nullable Bool */;
val* var209 /* : nullable Bool */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : CString */;
val* var213 /* : String */;
val* var214 /* : nullable Int */;
val* var215 /* : nullable Int */;
val* var216 /* : nullable Bool */;
val* var217 /* : nullable Bool */;
val* var218 /* : String */;
val* var219 /* : String */;
val* var220 /* : String */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Gram__prods]))(self); /* prods on <self:Gram>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Production]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[Production]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[Production]>*/
}
var_p = var6;
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__spe]))(var_p); /* spe on <var_p:Production>*/
}
if (var7 == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Object___33d_61d]))(var7, ((val*)NULL)); /* != on <var7:nullable Production>*/
var8 = var9;
}
if (var8){
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = " {-> ";
var15 = (val*)(5l<<2|1);
var16 = (val*)(5l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[1]=var12;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "}=\n";
var23 = (val*)(3l<<2|1);
var24 = (val*)(3l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var10)->values[3]=var20;
} else {
var10 = varonce;
varonce = NULL;
}
{
var27 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Element__name]))(var_p); /* name on <var_p:Production>*/
}
((struct instance_core__NativeArray*)var10)->values[0]=var27;
{
var28 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__spe]))(var_p); /* spe on <var_p:Production>*/
}
if (var28 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 33);
fatal_exit(1);
} else {
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_nitcc__grammar__Element__name]))(var28); /* name on <var28:nullable Production>*/
}
((struct instance_core__NativeArray*)var10)->values[2]=var29;
{
var30 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var30); /* append on <var_res:FlatBuffer>*/
}
} else {
if (unlikely(varonce31==NULL)) {
var32 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = " =\n";
var37 = (val*)(3l<<2|1);
var38 = (val*)(3l<<2|1);
var39 = (val*)((long)(0)<<2|3);
var40 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var35, var37, var38, var39, var40);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var32)->values[1]=var34;
} else {
var32 = varonce31;
varonce31 = NULL;
}
{
var41 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Element__name]))(var_p); /* name on <var_p:Production>*/
}
((struct instance_core__NativeArray*)var32)->values[0]=var41;
{
var42 = ((val*(*)(val* self))(var32->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var32); /* native_to_s on <var32:NativeArray[String]>*/
}
varonce31 = var32;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var42); /* append on <var_res:FlatBuffer>*/
}
}
var_last = ((val*)NULL);
{
var43 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__alts]))(var_p); /* alts on <var_p:Production>*/
}
{
var44 = ((short int(*)(val* self))(var43->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var43); /* is_empty on <var43:Array[Alternative]>*/
}
var45 = !var44;
if (var45){
{
var46 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__alts]))(var_p); /* alts on <var_p:Production>*/
}
{
var47 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var46); /* last on <var46:Array[Alternative]>*/
}
var_last = var47;
} else {
}
{
var48 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__alts]))(var_p); /* alts on <var_p:Production>*/
}
var_49 = var48;
{
var50 = ((val*(*)(val* self))(var_49->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_49); /* iterator on <var_49:Array[Alternative]>*/
}
var_51 = var50;
for(;;) {
{
var52 = ((short int(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_51); /* is_ok on <var_51:IndexedIterator[Alternative]>*/
}
if (var52){
} else {
goto BREAK_label53;
}
{
var54 = ((val*(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_51); /* item on <var_51:IndexedIterator[Alternative]>*/
}
var_a = var54;
if (unlikely(varonce55==NULL)) {
var56 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "\t{";
var61 = (val*)(2l<<2|1);
var62 = (val*)(2l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var56)->values[0]=var58;
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = ":} ";
var69 = (val*)(3l<<2|1);
var70 = (val*)(3l<<2|1);
var71 = (val*)((long)(0)<<2|3);
var72 = (val*)((long)(0)<<2|3);
var68 = core__flat___CString___to_s_unsafe(var67, var69, var70, var71, var72);
var66 = var68;
varonce65 = var66;
}
((struct instance_core__NativeArray*)var56)->values[2]=var66;
} else {
var56 = varonce55;
varonce55 = NULL;
}
{
var73 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__name]))(var_a); /* name on <var_a:Alternative>*/
}
((struct instance_core__NativeArray*)var56)->values[1]=var73;
{
var74 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_a); /* elems on <var_a:Alternative>*/
}
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = " ";
var79 = (val*)(1l<<2|1);
var80 = (val*)(1l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
{
var83 = ((val*(*)(val* self, val* p0, val* p1))(var74->class->vft[COLOR_core__abstract_text__Collection__join]))(var74, var76, ((val*)NULL)); /* join on <var74:Array[Element]>*/
}
((struct instance_core__NativeArray*)var56)->values[3]=var83;
{
var84 = ((val*(*)(val* self))(var56->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var84); /* append on <var_res:FlatBuffer>*/
}
{
var85 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(var_a); /* codes on <var_a:Alternative>*/
}
if (var85 == NULL) {
var86 = 1; /* is null */
} else {
var86 = 0; /* arg is null but recv is not */
}
if (0) {
var87 = ((short int(*)(val* self, val* p0))(var85->class->vft[COLOR_core__kernel__Object___61d_61d]))(var85, ((val*)NULL)); /* == on <var85:nullable Array[Code]>*/
var86 = var87;
}
if (var86){
{
((void(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__make_codes]))(var_a); /* make_codes on <var_a:Alternative>*/
}
} else {
}
if (unlikely(varonce88==NULL)) {
var89 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "\n\t\t{-> ";
var94 = (val*)(7l<<2|1);
var95 = (val*)(7l<<2|1);
var96 = (val*)((long)(0)<<2|3);
var97 = (val*)((long)(0)<<2|3);
var93 = core__flat___CString___to_s_unsafe(var92, var94, var95, var96, var97);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var89)->values[0]=var91;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "}";
var102 = (val*)(1l<<2|1);
var103 = (val*)(1l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var89)->values[2]=var99;
} else {
var89 = varonce88;
varonce88 = NULL;
}
{
var106 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(var_a); /* codes on <var_a:Alternative>*/
}
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = ", ";
var111 = (val*)(2l<<2|1);
var112 = (val*)(2l<<2|1);
var113 = (val*)((long)(0)<<2|3);
var114 = (val*)((long)(0)<<2|3);
var110 = core__flat___CString___to_s_unsafe(var109, var111, var112, var113, var114);
var108 = var110;
varonce107 = var108;
}
if (var106 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 42);
fatal_exit(1);
} else {
var115 = ((val*(*)(val* self, val* p0, val* p1))(var106->class->vft[COLOR_core__abstract_text__Collection__join]))(var106, var108, ((val*)NULL)); /* join on <var106:nullable Array[Code]>*/
}
((struct instance_core__NativeArray*)var89)->values[1]=var115;
{
var116 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var116); /* append on <var_res:FlatBuffer>*/
}
{
var117 = ((short int(*)(val* self, val* p0))(var_a->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_a, var_last); /* == on <var_a:Alternative>*/
}
if (var117){
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = " ;\n";
var122 = (val*)(3l<<2|1);
var123 = (val*)(3l<<2|1);
var124 = (val*)((long)(0)<<2|3);
var125 = (val*)((long)(0)<<2|3);
var121 = core__flat___CString___to_s_unsafe(var120, var122, var123, var124, var125);
var119 = var121;
varonce118 = var119;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var119); /* append on <var_res:FlatBuffer>*/
}
} else {
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = " |\n";
var130 = (val*)(3l<<2|1);
var131 = (val*)(3l<<2|1);
var132 = (val*)((long)(0)<<2|3);
var133 = (val*)((long)(0)<<2|3);
var129 = core__flat___CString___to_s_unsafe(var128, var130, var131, var132, var133);
var127 = var129;
varonce126 = var127;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var127); /* append on <var_res:FlatBuffer>*/
}
}
{
((void(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_51); /* next on <var_51:IndexedIterator[Alternative]>*/
}
}
BREAK_label53: (void)0;
{
((void(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_51); /* finish on <var_51:IndexedIterator[Alternative]>*/
}
{
var134 = ((short int(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__is_nullable]))(var_p); /* is_nullable on <var_p:Production>*/
}
if (var134){
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "\t// is nullable\n";
var139 = (val*)(16l<<2|1);
var140 = (val*)(16l<<2|1);
var141 = (val*)((long)(0)<<2|3);
var142 = (val*)((long)(0)<<2|3);
var138 = core__flat___CString___to_s_unsafe(var137, var139, var140, var141, var142);
var136 = var138;
varonce135 = var136;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var136); /* append on <var_res:FlatBuffer>*/
}
} else {
}
{
var143 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__firsts]))(var_p); /* firsts on <var_p:Production>*/
}
{
var144 = ((short int(*)(val* self))(var143->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var143); /* is_empty on <var143:HashSet[Item]>*/
}
var145 = !var144;
if (var145){
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "\t// firsts:\n";
var150 = (val*)(12l<<2|1);
var151 = (val*)(12l<<2|1);
var152 = (val*)((long)(0)<<2|3);
var153 = (val*)((long)(0)<<2|3);
var149 = core__flat___CString___to_s_unsafe(var148, var150, var151, var152, var153);
var147 = var149;
varonce146 = var147;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var147); /* append on <var_res:FlatBuffer>*/
}
{
var154 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__firsts]))(var_p); /* firsts on <var_p:Production>*/
}
var_155 = var154;
{
var156 = ((val*(*)(val* self))(var_155->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_155); /* iterator on <var_155:HashSet[Item]>*/
}
var_157 = var156;
for(;;) {
{
var158 = ((short int(*)(val* self))((((long)var_157&3)?class_info[((long)var_157&3)]:var_157->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_157); /* is_ok on <var_157:Iterator[Item]>*/
}
if (var158){
} else {
goto BREAK_label159;
}
{
var160 = ((val*(*)(val* self))((((long)var_157&3)?class_info[((long)var_157&3)]:var_157->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_157); /* item on <var_157:Iterator[Item]>*/
}
var_x = var160;
if (unlikely(varonce161==NULL)) {
var162 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "\t//   ";
var167 = (val*)(6l<<2|1);
var168 = (val*)(6l<<2|1);
var169 = (val*)((long)(0)<<2|3);
var170 = (val*)((long)(0)<<2|3);
var166 = core__flat___CString___to_s_unsafe(var165, var167, var168, var169, var170);
var164 = var166;
varonce163 = var164;
}
((struct instance_core__NativeArray*)var162)->values[0]=var164;
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "\n";
var175 = (val*)(1l<<2|1);
var176 = (val*)(1l<<2|1);
var177 = (val*)((long)(0)<<2|3);
var178 = (val*)((long)(0)<<2|3);
var174 = core__flat___CString___to_s_unsafe(var173, var175, var176, var177, var178);
var172 = var174;
varonce171 = var172;
}
((struct instance_core__NativeArray*)var162)->values[2]=var172;
} else {
var162 = varonce161;
varonce161 = NULL;
}
{
var179 = ((val*(*)(val* self))(var_x->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_x); /* to_s on <var_x:Item>*/
}
((struct instance_core__NativeArray*)var162)->values[1]=var179;
{
var180 = ((val*(*)(val* self))(var162->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var162); /* native_to_s on <var162:NativeArray[String]>*/
}
varonce161 = var162;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var180); /* append on <var_res:FlatBuffer>*/
}
{
((void(*)(val* self))((((long)var_157&3)?class_info[((long)var_157&3)]:var_157->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_157); /* next on <var_157:Iterator[Item]>*/
}
}
BREAK_label159: (void)0;
{
((void(*)(val* self))((((long)var_157&3)?class_info[((long)var_157&3)]:var_157->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_157); /* finish on <var_157:Iterator[Item]>*/
}
} else {
}
{
var181 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__afters]))(var_p); /* afters on <var_p:Production>*/
}
{
var182 = ((short int(*)(val* self))(var181->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var181); /* is_empty on <var181:HashSet[Item]>*/
}
var183 = !var182;
if (var183){
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "\t// afters:\n";
var188 = (val*)(12l<<2|1);
var189 = (val*)(12l<<2|1);
var190 = (val*)((long)(0)<<2|3);
var191 = (val*)((long)(0)<<2|3);
var187 = core__flat___CString___to_s_unsafe(var186, var188, var189, var190, var191);
var185 = var187;
varonce184 = var185;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var185); /* append on <var_res:FlatBuffer>*/
}
{
var192 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__afters]))(var_p); /* afters on <var_p:Production>*/
}
var_193 = var192;
{
var194 = ((val*(*)(val* self))(var_193->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_193); /* iterator on <var_193:HashSet[Item]>*/
}
var_195 = var194;
for(;;) {
{
var196 = ((short int(*)(val* self))((((long)var_195&3)?class_info[((long)var_195&3)]:var_195->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_195); /* is_ok on <var_195:Iterator[Item]>*/
}
if (var196){
} else {
goto BREAK_label197;
}
{
var198 = ((val*(*)(val* self))((((long)var_195&3)?class_info[((long)var_195&3)]:var_195->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_195); /* item on <var_195:Iterator[Item]>*/
}
var_x199 = var198;
if (unlikely(varonce200==NULL)) {
var201 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce202!=NULL)) {
var203 = varonce202;
} else {
var204 = "\t//   ";
var206 = (val*)(6l<<2|1);
var207 = (val*)(6l<<2|1);
var208 = (val*)((long)(0)<<2|3);
var209 = (val*)((long)(0)<<2|3);
var205 = core__flat___CString___to_s_unsafe(var204, var206, var207, var208, var209);
var203 = var205;
varonce202 = var203;
}
((struct instance_core__NativeArray*)var201)->values[0]=var203;
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "\n";
var214 = (val*)(1l<<2|1);
var215 = (val*)(1l<<2|1);
var216 = (val*)((long)(0)<<2|3);
var217 = (val*)((long)(0)<<2|3);
var213 = core__flat___CString___to_s_unsafe(var212, var214, var215, var216, var217);
var211 = var213;
varonce210 = var211;
}
((struct instance_core__NativeArray*)var201)->values[2]=var211;
} else {
var201 = varonce200;
varonce200 = NULL;
}
{
var218 = ((val*(*)(val* self))(var_x199->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_x199); /* to_s on <var_x199:Item>*/
}
((struct instance_core__NativeArray*)var201)->values[1]=var218;
{
var219 = ((val*(*)(val* self))(var201->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var201); /* native_to_s on <var201:NativeArray[String]>*/
}
varonce200 = var201;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var219); /* append on <var_res:FlatBuffer>*/
}
{
((void(*)(val* self))((((long)var_195&3)?class_info[((long)var_195&3)]:var_195->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_195); /* next on <var_195:Iterator[Item]>*/
}
}
BREAK_label197: (void)0;
{
((void(*)(val* self))((((long)var_195&3)?class_info[((long)var_195&3)]:var_195->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_195); /* finish on <var_195:Iterator[Item]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[Production]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[Production]>*/
}
{
var220 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:FlatBuffer>*/
}
var = var220;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Gram$inline for (self: Gram, Collection[Production]) */
void nitcc___nitcc__Gram___inline(val* self, val* p0) {
val* var_prods /* var prods: Collection[Production] */;
val* var /* : Array[Production] */;
val* var_ /* var : Array[Production] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : IndexedIterator[Production] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_p /* var p: Production */;
val* var5 /* : Array[Alternative] */;
val* var6 /* : Array[nullable Object] */;
val* var_7 /* var : Array[Alternative] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : IndexedIterator[Alternative] */;
short int var10 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_a /* var a: Alternative */;
short int var13 /* : Bool */;
short int var_to_inline /* var to_inline: Bool */;
val* var15 /* : Array[Element] */;
val* var_16 /* var : Array[Element] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : IndexedIterator[Element] */;
short int var19 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_e /* var e: Element */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype;
int idtype;
short int var_24 /* var : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable Array[Code] */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : Alternative */;
val* var31 /* : String */;
val* var32 /* : Array[Element] */;
val* var_a0 /* var a0: Alternative */;
val* var33 /* : Array[Code] */;
val* var34 /* : Array[Alternative] */;
val* var_35 /* var : Array[Alternative] */;
val* var_pool /* var pool: Array[Alternative] */;
val* var36 /* : Array[Alternative] */;
val* var_pool2 /* var pool2: Array[Alternative] */;
val* var37 /* : Array[Element] */;
val* var_38 /* var : Array[Element] */;
val* var39 /* : Iterator[nullable Object] */;
val* var_40 /* var : IndexedIterator[Element] */;
short int var41 /* : Bool */;
val* var43 /* : nullable Object */;
val* var_e44 /* var e: Element */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
short int var49 /* : Bool */;
short int var_50 /* var : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var_53 /* var : Array[Alternative] */;
val* var54 /* : Iterator[nullable Object] */;
val* var_55 /* var : IndexedIterator[Alternative] */;
short int var56 /* : Bool */;
val* var58 /* : nullable Object */;
val* var_x /* var x: Alternative */;
val* var59 /* : Array[Element] */;
val* var60 /* : nullable Array[Code] */;
val* var61 /* : CodePop */;
short int var63 /* : Bool */;
val* var64 /* : Sys */;
val* var65 /* : NativeArray[String] */;
static val* varonce;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Bool */;
val* var81 /* : nullable Bool */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var85 /* : Array[Alternative] */;
val* var_86 /* var : Array[Alternative] */;
val* var87 /* : Iterator[nullable Object] */;
val* var_88 /* var : IndexedIterator[Alternative] */;
short int var89 /* : Bool */;
val* var91 /* : nullable Object */;
val* var_a2 /* var a2: Alternative */;
short int var92 /* : Bool */;
val* var94 /* : nullable Array[Code] */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var_97 /* var : Array[Alternative] */;
val* var98 /* : Iterator[nullable Object] */;
val* var_99 /* var : IndexedIterator[Alternative] */;
short int var100 /* : Bool */;
val* var102 /* : nullable Object */;
val* var_x103 /* var x: Alternative */;
val* var104 /* : String */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
val* var113 /* : Text */;
long var114 /* : Int */;
val* var115 /* : String */;
val* var116 /* : Text */;
val* var_name /* var name: String */;
val* var117 /* : Alternative */;
val* var118 /* : Array[Element] */;
val* var_na /* var na: Alternative */;
val* var119 /* : Array[Element] */;
val* var120 /* : Array[Element] */;
val* var121 /* : Array[Element] */;
val* var122 /* : Array[Element] */;
val* var123 /* : Array[Code] */;
val* var124 /* : nullable Array[Code] */;
val* var125 /* : nullable Array[Code] */;
val* var126 /* : nullable Array[Code] */;
val* var127 /* : nullable Array[Code] */;
val* var_tmp /* var tmp: Array[Alternative] */;
val* var_128 /* var : Array[Alternative] */;
val* var129 /* : Iterator[nullable Object] */;
val* var_130 /* var : IndexedIterator[Alternative] */;
short int var131 /* : Bool */;
val* var133 /* : nullable Object */;
val* var_x134 /* var x: Alternative */;
val* var135 /* : nullable Array[Code] */;
val* var136 /* : nullable Array[Code] */;
val* var137 /* : nullable Object */;
val* var138 /* : Array[Alternative] */;
val* var139 /* : Array[Alternative] */;
val* var140 /* : Array[Alternative] */;
val* var_141 /* var : Collection[Production] */;
val* var142 /* : Iterator[nullable Object] */;
val* var_143 /* var : Iterator[Production] */;
short int var144 /* : Bool */;
val* var146 /* : nullable Object */;
val* var_p147 /* var p: Production */;
val* var148 /* : Array[Production] */;
val* var149 /* : Array[Production] */;
var_prods = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Gram__prods]))(self); /* prods on <self:Gram>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Production]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:IndexedIterator[Production]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:IndexedIterator[Production]>*/
}
var_p = var4;
{
var5 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__alts]))(var_p); /* alts on <var_p:Production>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__array__Collection__to_a]))(var5); /* to_a on <var5:Array[Alternative]>*/
}
var_7 = var6;
{
var8 = ((val*(*)(val* self))(var_7->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_7); /* iterator on <var_7:Array[Alternative]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:IndexedIterator[Alternative]>*/
}
if (var10){
} else {
goto BREAK_label11;
}
{
var12 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:IndexedIterator[Alternative]>*/
}
var_a = var12;
{
var13 = ((short int(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__phony]))(var_a); /* phony on <var_a:Alternative>*/
}
if (var13){
goto BREAK_label14;
} else {
}
var_to_inline = 0;
{
var15 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_a); /* elems on <var_a:Alternative>*/
}
var_16 = var15;
{
var17 = ((val*(*)(val* self))(var_16->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_16); /* iterator on <var_16:Array[Element]>*/
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:IndexedIterator[Element]>*/
}
if (var19){
} else {
goto BREAK_label20;
}
{
var21 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:IndexedIterator[Element]>*/
}
var_e = var21;
/* <var_e:Element> isa Production */
cltype = type_nitcc__Production.color;
idtype = type_nitcc__Production.id;
if(cltype >= var_e->type->table_size) {
var23 = 0;
} else {
var23 = var_e->type->type_table[cltype] == idtype;
}
var_24 = var23;
if (var23){
{
var25 = ((short int(*)(val* self, val* p0))((((long)var_prods&3)?class_info[((long)var_prods&3)]:var_prods->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var_prods, var_e); /* has on <var_prods:Collection[Production]>*/
}
var22 = var25;
} else {
var22 = var_24;
}
if (var22){
var_to_inline = 1;
} else {
}
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:IndexedIterator[Element]>*/
}
}
BREAK_label20: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:IndexedIterator[Element]>*/
}
var26 = !var_to_inline;
if (var26){
goto BREAK_label14;
} else {
}
{
var27 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(var_a); /* codes on <var_a:Alternative>*/
}
if (var27 == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
var29 = ((short int(*)(val* self, val* p0))(var27->class->vft[COLOR_core__kernel__Object___61d_61d]))(var27, ((val*)NULL)); /* == on <var27:nullable Array[Code]>*/
var28 = var29;
}
if (var28){
{
((void(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__make_codes]))(var_a); /* make_codes on <var_a:Alternative>*/
}
} else {
}
var30 = NEW_nitcc__Alternative(&type_nitcc__Alternative);
{
var31 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__name]))(var_a); /* name on <var_a:Alternative>*/
}
var32 = NEW_core__Array(&type_core__Array__nitcc__Element);
{
((void(*)(val* self))(var32->class->vft[COLOR_core__kernel__Object__init]))(var32); /* init on <var32:Array[Element]>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_nitcc__grammar__Alternative__prod_61d]))(var30, var_p); /* prod= on <var30:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_nitcc__grammar__Alternative__name_61d]))(var30, var31); /* name= on <var30:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_nitcc__grammar__Alternative__elems_61d]))(var30, var32); /* elems= on <var30:Alternative>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:Alternative>*/
}
var_a0 = var30;
{
((void(*)(val* self, short int p0))(var_a0->class->vft[COLOR_nitcc__grammar__Alternative__trans_61d]))(var_a0, 1); /* trans= on <var_a0:Alternative>*/
}
var33 = NEW_core__Array(&type_core__Array__nitcc__Code);
{
((void(*)(val* self))(var33->class->vft[COLOR_core__kernel__Object__init]))(var33); /* init on <var33:Array[Code]>*/
}
{
((void(*)(val* self, val* p0))(var_a0->class->vft[COLOR_nitcc__grammar__Alternative__codes_61d]))(var_a0, var33); /* codes= on <var_a0:Alternative>*/
}
var34 = NEW_core__Array(&type_core__Array__nitcc__Alternative);
{
((void(*)(val* self, long p0))(var34->class->vft[COLOR_core__array__Array__with_capacity]))(var34, 1l); /* with_capacity on <var34:Array[Alternative]>*/
}
var_35 = var34;
{
((void(*)(val* self, val* p0))(var_35->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_35, var_a0); /* push on <var_35:Array[Alternative]>*/
}
var_pool = var_35;
var36 = NEW_core__Array(&type_core__Array__nitcc__Alternative);
{
((void(*)(val* self))(var36->class->vft[COLOR_core__kernel__Object__init]))(var36); /* init on <var36:Array[Alternative]>*/
}
var_pool2 = var36;
{
var37 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_a); /* elems on <var_a:Alternative>*/
}
var_38 = var37;
{
var39 = ((val*(*)(val* self))(var_38->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_38); /* iterator on <var_38:Array[Element]>*/
}
var_40 = var39;
for(;;) {
{
var41 = ((short int(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_40); /* is_ok on <var_40:IndexedIterator[Element]>*/
}
if (var41){
} else {
goto BREAK_label42;
}
{
var43 = ((val*(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_40); /* item on <var_40:IndexedIterator[Element]>*/
}
var_e44 = var43;
/* <var_e44:Element> isa Production */
cltype47 = type_nitcc__Production.color;
idtype48 = type_nitcc__Production.id;
if(cltype47 >= var_e44->type->table_size) {
var46 = 0;
} else {
var46 = var_e44->type->type_table[cltype47] == idtype48;
}
var49 = !var46;
var_50 = var49;
if (var49){
var45 = var_50;
} else {
{
var51 = ((short int(*)(val* self, val* p0))((((long)var_prods&3)?class_info[((long)var_prods&3)]:var_prods->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var_prods, var_e44); /* has on <var_prods:Collection[Production]>*/
}
var52 = !var51;
var45 = var52;
}
if (var45){
var_53 = var_pool;
{
var54 = ((val*(*)(val* self))(var_53->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_53); /* iterator on <var_53:Array[Alternative]>*/
}
var_55 = var54;
for(;;) {
{
var56 = ((short int(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_55); /* is_ok on <var_55:IndexedIterator[Alternative]>*/
}
if (var56){
} else {
goto BREAK_label57;
}
{
var58 = ((val*(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_55); /* item on <var_55:IndexedIterator[Alternative]>*/
}
var_x = var58;
{
var59 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_x); /* elems on <var_x:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var59->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var59, var_e44); /* add on <var59:Array[Element]>*/
}
{
var60 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(var_x); /* codes on <var_x:Alternative>*/
}
var61 = NEW_nitcc__CodePop(&type_nitcc__CodePop);
{
((void(*)(val* self))(var61->class->vft[COLOR_core__kernel__Object__init]))(var61); /* init on <var61:CodePop>*/
}
if (var60 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 82);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var60->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var60, var61); /* add on <var60:nullable Array[Code]>*/
}
{
((void(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_55); /* next on <var_55:IndexedIterator[Alternative]>*/
}
}
BREAK_label57: (void)0;
{
((void(*)(val* self))((((long)var_55&3)?class_info[((long)var_55&3)]:var_55->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_55); /* finish on <var_55:IndexedIterator[Alternative]>*/
}
goto BREAK_label62;
} else {
}
{
var63 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, var_e44); /* == on <var_p:Production>*/
}
if (var63){
var64 = glob_sys;
if (unlikely(varonce==NULL)) {
var65 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "Circular inlining on ";
var70 = (val*)(21l<<2|1);
var71 = (val*)(21l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var65)->values[0]=var67;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = " :: ";
var78 = (val*)(4l<<2|1);
var79 = (val*)(4l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var65)->values[2]=var75;
} else {
var65 = varonce;
varonce = NULL;
}
{
var82 = ((val*(*)(val* self))(var_p->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_p); /* to_s on <var_p:Production>*/
}
((struct instance_core__NativeArray*)var65)->values[1]=var82;
{
var83 = ((val*(*)(val* self))(var_a->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:Alternative>*/
}
((struct instance_core__NativeArray*)var65)->values[3]=var83;
{
var84 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce = var65;
{
((void(*)(val* self, val* p0))(var64->class->vft[COLOR_core__file__Sys__print]))(var64, var84); /* print on <var64:Sys>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 88);
fatal_exit(1);
} else {
}
{
((void(*)(val* self))(var_pool2->class->vft[COLOR_core__abstract_collection__RemovableCollection__clear]))(var_pool2); /* clear on <var_pool2:Array[Alternative]>*/
}
{
var85 = ((val*(*)(val* self))(var_e44->class->vft[COLOR_nitcc__grammar__Production__alts]))(var_e44); /* alts on <var_e44:Element(Production)>*/
}
var_86 = var85;
{
var87 = ((val*(*)(val* self))(var_86->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_86); /* iterator on <var_86:Array[Alternative]>*/
}
var_88 = var87;
for(;;) {
{
var89 = ((short int(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_88); /* is_ok on <var_88:IndexedIterator[Alternative]>*/
}
if (var89){
} else {
goto BREAK_label90;
}
{
var91 = ((val*(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_88); /* item on <var_88:IndexedIterator[Alternative]>*/
}
var_a2 = var91;
{
var92 = ((short int(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__phony]))(var_a); /* phony on <var_a:Alternative>*/
}
if (var92){
goto BREAK_label93;
} else {
}
{
var94 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(var_a2); /* codes on <var_a2:Alternative>*/
}
if (var94 == NULL) {
var95 = 1; /* is null */
} else {
var95 = 0; /* arg is null but recv is not */
}
if (0) {
var96 = ((short int(*)(val* self, val* p0))(var94->class->vft[COLOR_core__kernel__Object___61d_61d]))(var94, ((val*)NULL)); /* == on <var94:nullable Array[Code]>*/
var95 = var96;
}
if (var95){
{
((void(*)(val* self))(var_a2->class->vft[COLOR_nitcc__grammar__Alternative__make_codes]))(var_a2); /* make_codes on <var_a2:Alternative>*/
}
} else {
}
var_97 = var_pool;
{
var98 = ((val*(*)(val* self))(var_97->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_97); /* iterator on <var_97:Array[Alternative]>*/
}
var_99 = var98;
for(;;) {
{
var100 = ((short int(*)(val* self))((((long)var_99&3)?class_info[((long)var_99&3)]:var_99->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_99); /* is_ok on <var_99:IndexedIterator[Alternative]>*/
}
if (var100){
} else {
goto BREAK_label101;
}
{
var102 = ((val*(*)(val* self))((((long)var_99&3)?class_info[((long)var_99&3)]:var_99->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_99); /* item on <var_99:IndexedIterator[Alternative]>*/
}
var_x103 = var102;
{
var104 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__name]))(var_a); /* name on <var_a:Alternative>*/
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "_";
var109 = (val*)(1l<<2|1);
var110 = (val*)(1l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
{
var113 = ((val*(*)(val* self, val* p0))(var104->class->vft[COLOR_core__abstract_text__Text___43d]))(var104, var106); /* + on <var104:String>*/
}
{
var114 = ((long(*)(val* self))(var_pool2->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_pool2); /* length on <var_pool2:Array[Alternative]>*/
}
var115 = core__flat___Int___core__abstract_text__Object__to_s(var114);
{
var116 = ((val*(*)(val* self, val* p0))(var113->class->vft[COLOR_core__abstract_text__Text___43d]))(var113, var115); /* + on <var113:Text(String)>*/
}
var_name = var116;
var117 = NEW_nitcc__Alternative(&type_nitcc__Alternative);
var118 = NEW_core__Array(&type_core__Array__nitcc__Element);
{
((void(*)(val* self))(var118->class->vft[COLOR_core__kernel__Object__init]))(var118); /* init on <var118:Array[Element]>*/
}
{
((void(*)(val* self, val* p0))(var117->class->vft[COLOR_nitcc__grammar__Alternative__prod_61d]))(var117, var_p); /* prod= on <var117:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var117->class->vft[COLOR_nitcc__grammar__Alternative__name_61d]))(var117, var_name); /* name= on <var117:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var117->class->vft[COLOR_nitcc__grammar__Alternative__elems_61d]))(var117, var118); /* elems= on <var117:Alternative>*/
}
{
((void(*)(val* self))(var117->class->vft[COLOR_core__kernel__Object__init]))(var117); /* init on <var117:Alternative>*/
}
var_na = var117;
{
((void(*)(val* self, short int p0))(var_na->class->vft[COLOR_nitcc__grammar__Alternative__trans_61d]))(var_na, 1); /* trans= on <var_na:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var_pool2->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_pool2, var_na); /* add on <var_pool2:Array[Alternative]>*/
}
{
var119 = ((val*(*)(val* self))(var_na->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_na); /* elems on <var_na:Alternative>*/
}
{
var120 = ((val*(*)(val* self))(var_x103->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_x103); /* elems on <var_x103:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var119->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var119, var120); /* add_all on <var119:Array[Element]>*/
}
{
var121 = ((val*(*)(val* self))(var_na->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_na); /* elems on <var_na:Alternative>*/
}
{
var122 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_a2); /* elems on <var_a2:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var121->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var121, var122); /* add_all on <var121:Array[Element]>*/
}
var123 = NEW_core__Array(&type_core__Array__nitcc__Code);
{
((void(*)(val* self))(var123->class->vft[COLOR_core__kernel__Object__init]))(var123); /* init on <var123:Array[Code]>*/
}
{
((void(*)(val* self, val* p0))(var_na->class->vft[COLOR_nitcc__grammar__Alternative__codes_61d]))(var_na, var123); /* codes= on <var_na:Alternative>*/
}
{
var124 = ((val*(*)(val* self))(var_na->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(var_na); /* codes on <var_na:Alternative>*/
}
{
var125 = ((val*(*)(val* self))(var_x103->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(var_x103); /* codes on <var_x103:Alternative>*/
}
if (unlikely(var125 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 102);
fatal_exit(1);
}
if (var124 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 102);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var124->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var124, var125); /* add_all on <var124:nullable Array[Code]>*/
}
{
var126 = ((val*(*)(val* self))(var_na->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(var_na); /* codes on <var_na:Alternative>*/
}
{
var127 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(var_a2); /* codes on <var_a2:Alternative>*/
}
if (unlikely(var127 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 103);
fatal_exit(1);
}
if (var126 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 103);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var126->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var126, var127); /* add_all on <var126:nullable Array[Code]>*/
}
{
((void(*)(val* self))((((long)var_99&3)?class_info[((long)var_99&3)]:var_99->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_99); /* next on <var_99:IndexedIterator[Alternative]>*/
}
}
BREAK_label101: (void)0;
{
((void(*)(val* self))((((long)var_99&3)?class_info[((long)var_99&3)]:var_99->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_99); /* finish on <var_99:IndexedIterator[Alternative]>*/
}
BREAK_label93: (void)0;
{
((void(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_88); /* next on <var_88:IndexedIterator[Alternative]>*/
}
}
BREAK_label90: (void)0;
{
((void(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_88); /* finish on <var_88:IndexedIterator[Alternative]>*/
}
var_tmp = var_pool;
var_pool = var_pool2;
var_pool2 = var_tmp;
BREAK_label62: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_40); /* next on <var_40:IndexedIterator[Element]>*/
}
}
BREAK_label42: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_40); /* finish on <var_40:IndexedIterator[Element]>*/
}
var_128 = var_pool;
{
var129 = ((val*(*)(val* self))(var_128->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_128); /* iterator on <var_128:Array[Alternative]>*/
}
var_130 = var129;
for(;;) {
{
var131 = ((short int(*)(val* self))((((long)var_130&3)?class_info[((long)var_130&3)]:var_130->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_130); /* is_ok on <var_130:IndexedIterator[Alternative]>*/
}
if (var131){
} else {
goto BREAK_label132;
}
{
var133 = ((val*(*)(val* self))((((long)var_130&3)?class_info[((long)var_130&3)]:var_130->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_130); /* item on <var_130:IndexedIterator[Alternative]>*/
}
var_x134 = var133;
{
var135 = ((val*(*)(val* self))(var_x134->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(var_x134); /* codes on <var_x134:Alternative>*/
}
{
var136 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(var_a); /* codes on <var_a:Alternative>*/
}
if (var136 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 111);
fatal_exit(1);
} else {
var137 = ((val*(*)(val* self))(var136->class->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var136); /* last on <var136:nullable Array[Code]>*/
}
if (var135 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 111);
fatal_exit(1);
} else {
((void(*)(val* self, val* p0))(var135->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var135, var137); /* add on <var135:nullable Array[Code]>*/
}
{
((void(*)(val* self))((((long)var_130&3)?class_info[((long)var_130&3)]:var_130->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_130); /* next on <var_130:IndexedIterator[Alternative]>*/
}
}
BREAK_label132: (void)0;
{
((void(*)(val* self))((((long)var_130&3)?class_info[((long)var_130&3)]:var_130->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_130); /* finish on <var_130:IndexedIterator[Alternative]>*/
}
{
var138 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__ast_alts]))(var_p); /* ast_alts on <var_p:Production>*/
}
{
((void(*)(val* self, val* p0))(var138->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var138, var_a); /* add on <var138:Array[Alternative]>*/
}
{
var139 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__alts]))(var_p); /* alts on <var_p:Production>*/
}
{
((void(*)(val* self, val* p0))(var139->class->vft[COLOR_core__abstract_collection__RemovableCollection__remove]))(var139, var_a); /* remove on <var139:Array[Alternative]>*/
}
{
var140 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__alts]))(var_p); /* alts on <var_p:Production>*/
}
{
((void(*)(val* self, val* p0))(var140->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var140, var_pool); /* add_all on <var140:Array[Alternative]>*/
}
BREAK_label14: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:IndexedIterator[Alternative]>*/
}
}
BREAK_label11: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:IndexedIterator[Alternative]>*/
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:IndexedIterator[Production]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:IndexedIterator[Production]>*/
}
var_141 = var_prods;
{
var142 = ((val*(*)(val* self))((((long)var_141&3)?class_info[((long)var_141&3)]:var_141->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_141); /* iterator on <var_141:Collection[Production]>*/
}
var_143 = var142;
for(;;) {
{
var144 = ((short int(*)(val* self))((((long)var_143&3)?class_info[((long)var_143&3)]:var_143->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_143); /* is_ok on <var_143:Iterator[Production]>*/
}
if (var144){
} else {
goto BREAK_label145;
}
{
var146 = ((val*(*)(val* self))((((long)var_143&3)?class_info[((long)var_143&3)]:var_143->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_143); /* item on <var_143:Iterator[Production]>*/
}
var_p147 = var146;
{
var148 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Gram__prods]))(self); /* prods on <self:Gram>*/
}
{
((void(*)(val* self, val* p0))(var148->class->vft[COLOR_core__abstract_collection__RemovableCollection__remove]))(var148, var_p147); /* remove on <var148:Array[Production]>*/
}
{
var149 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Gram__ast_prods]))(self); /* ast_prods on <self:Gram>*/
}
{
((void(*)(val* self, val* p0))(var149->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var149, var_p147); /* add on <var149:Array[Production]>*/
}
{
((void(*)(val* self))((((long)var_143&3)?class_info[((long)var_143&3)]:var_143->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_143); /* next on <var_143:Iterator[Production]>*/
}
}
BREAK_label145: (void)0;
{
((void(*)(val* self))((((long)var_143&3)?class_info[((long)var_143&3)]:var_143->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_143); /* finish on <var_143:Iterator[Production]>*/
}
RET_LABEL:;
}
/* method grammar$Gram$lr0 for (self: Gram): LRAutomaton */
val* nitcc___nitcc__Gram___lr0(val* self) {
val* var /* : LRAutomaton */;
val* var1 /* : Production */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
val* var_start /* var start: Production */;
val* var9 /* : Token */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var_eof /* var eof: Token */;
val* var18 /* : Array[Token] */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var27 /* : Array[Production] */;
val* var28 /* : nullable Object */;
val* var29 /* : Array[Element] */;
val* var30 /* : NativeArray[Element] */;
val* var31 /* : Alternative */;
val* var32 /* : Array[Production] */;
val* var33 /* : LRState */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
val* var_first /* var first: LRState */;
val* var42 /* : Array[Item] */;
val* var_ /* var : Array[Item] */;
val* var43 /* : Iterator[nullable Object] */;
val* var_44 /* var : IndexedIterator[Item] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_i /* var i: Item */;
short int var47 /* : Bool */;
val* var48 /* : LRAutomaton */;
val* var_automaton /* var automaton: LRAutomaton */;
val* var49 /* : List[LRState] */;
val* var_todo /* var todo: List[LRState] */;
val* var50 /* : HashSet[LRState] */;
val* var_seen /* var seen: HashSet[LRState] */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable Object */;
val* var_state /* var state: LRState */;
val* var54 /* : Array[LRState] */;
val* var55 /* : HashMap[Element, LRState] */;
val* var_nexts /* var nexts: HashMap[Element, LRState] */;
val* var56 /* : HashSet[Item] */;
val* var_57 /* var : HashSet[Item] */;
val* var58 /* : Iterator[nullable Object] */;
val* var_59 /* var : Iterator[Item] */;
short int var60 /* : Bool */;
val* var62 /* : nullable Object */;
val* var_i63 /* var i: Item */;
val* var64 /* : nullable Element */;
val* var_e /* var e: nullable Element */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : nullable Object */;
val* var70 /* : Item */;
short int var71 /* : Bool */;
val* var72 /* : Array[LRState] */;
val* var73 /* : nullable Object */;
short int var74 /* : Bool */;
val* var75 /* : String */;
val* var_name /* var name: nullable Object */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
val* var86 /* : String */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var89 /* : LRState */;
val* var_next /* var next: LRState */;
val* var90 /* : Item */;
short int var91 /* : Bool */;
val* var_92 /* var : HashMap[Element, LRState] */;
val* var93 /* : MapIterator[nullable Object, nullable Object] */;
val* var_94 /* var : MapIterator[Element, LRState] */;
short int var95 /* : Bool */;
val* var97 /* : nullable Object */;
val* var_e98 /* var e: Element */;
val* var99 /* : nullable Object */;
val* var_next100 /* var next: LRState */;
short int var_new_state /* var new_state: Bool */;
val* var_101 /* var : HashSet[LRState] */;
val* var102 /* : Iterator[nullable Object] */;
val* var_103 /* var : Iterator[LRState] */;
short int var104 /* : Bool */;
val* var106 /* : nullable Object */;
val* var_n /* var n: LRState */;
short int var107 /* : Bool */;
long var108 /* : Int */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
val* var111 /* : LRTransition */;
val* var_t /* var t: LRTransition */;
val* var112 /* : Array[LRTransition] */;
val* var113 /* : Array[LRTransition] */;
var1 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "_start";
var5 = (val*)(6l<<2|1);
var6 = (val*)(6l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var1, var2); /* name= on <var1:Production>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Production>*/
}
var_start = var1;
{
((void(*)(val* self, short int p0))(var_start->class->vft[COLOR_nitcc__grammar__Production__accept_61d]))(var_start, 1); /* accept= on <var_start:Production>*/
}
var9 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Eof";
var14 = (val*)(3l<<2|1);
var15 = (val*)(3l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var9, var11); /* name= on <var9:Token>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:Token>*/
}
var_eof = var9;
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Gram__tokens]))(self); /* tokens on <self:Gram>*/
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var18, var_eof); /* add on <var18:Array[Token]>*/
}
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "Start";
var23 = (val*)(5l<<2|1);
var24 = (val*)(5l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Gram__prods]))(self); /* prods on <self:Gram>*/
}
{
var28 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_collection__Collection__first]))(var27); /* first on <var27:Array[Production]>*/
}
var29 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var29 = array_instance Array[Element] */
var30 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var30)->values[0] = (val*) var28;
((struct instance_core__NativeArray*)var30)->values[1] = (val*) var_eof;
{
((void(*)(val* self, val* p0, long p1))(var29->class->vft[COLOR_core__array__Array__with_native]))(var29, var30, 2l); /* with_native on <var29:Array[Element]>*/
}
}
{
var31 = ((val*(*)(val* self, val* p0, val* p1))(var_start->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_start, var20, var29); /* new_alt on <var_start:Production>*/
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Gram__prods]))(self); /* prods on <self:Gram>*/
}
{
((void(*)(val* self, val* p0))(var32->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var32, var_start); /* add on <var32:Array[Production]>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Gram__analyse]))(self); /* analyse on <self:Gram>*/
}
var33 = NEW_nitcc__LRState(&type_nitcc__LRState);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Start";
var38 = (val*)(5l<<2|1);
var39 = (val*)(5l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_nitcc__grammar__LRState__name_61d]))(var33, var35); /* name= on <var33:LRState>*/
}
{
((void(*)(val* self))(var33->class->vft[COLOR_core__kernel__Object__init]))(var33); /* init on <var33:LRState>*/
}
var_first = var33;
{
((void(*)(val* self, long p0))(var_first->class->vft[COLOR_nitcc__grammar__LRState__number_61d]))(var_first, 0l); /* number= on <var_first:LRState>*/
}
{
var42 = ((val*(*)(val* self))(var_start->class->vft[COLOR_nitcc__grammar__Production__start_state]))(var_start); /* start_state on <var_start:Production>*/
}
var_ = var42;
{
var43 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Item]>*/
}
var_44 = var43;
for(;;) {
{
var45 = ((short int(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_44); /* is_ok on <var_44:IndexedIterator[Item]>*/
}
if (var45){
} else {
goto BREAK_label;
}
{
var46 = ((val*(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_44); /* item on <var_44:IndexedIterator[Item]>*/
}
var_i = var46;
{
var47 = ((short int(*)(val* self, val* p0))(var_first->class->vft[COLOR_nitcc__grammar__LRState__add]))(var_first, var_i); /* add on <var_first:LRState>*/
}
{
((void(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_44); /* next on <var_44:IndexedIterator[Item]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_44); /* finish on <var_44:IndexedIterator[Item]>*/
}
var48 = NEW_nitcc__LRAutomaton(&type_nitcc__LRAutomaton);
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nitcc__grammar__LRAutomaton__grammar_61d]))(var48, self); /* grammar= on <var48:LRAutomaton>*/
}
{
((void(*)(val* self))(var48->class->vft[COLOR_core__kernel__Object__init]))(var48); /* init on <var48:LRAutomaton>*/
}
var_automaton = var48;
var49 = NEW_core__List(&type_core__List__nitcc__LRState);
{
((void(*)(val* self))(var49->class->vft[COLOR_core__kernel__Object__init]))(var49); /* init on <var49:List[LRState]>*/
}
var_todo = var49;
{
((void(*)(val* self, val* p0))(var_todo->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_todo, var_first); /* add on <var_todo:List[LRState]>*/
}
var50 = NEW_core__HashSet(&type_core__HashSet__nitcc__LRState);
{
((void(*)(val* self))(var50->class->vft[COLOR_core__kernel__Object__init]))(var50); /* init on <var50:HashSet[LRState]>*/
}
var_seen = var50;
{
((void(*)(val* self, val* p0))(var_seen->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_seen, var_first); /* add on <var_seen:HashSet[LRState]>*/
}
for(;;) {
{
var51 = ((short int(*)(val* self))(var_todo->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_todo); /* is_empty on <var_todo:List[LRState]>*/
}
var52 = !var51;
if (var52){
{
var53 = ((val*(*)(val* self))(var_todo->class->vft[COLOR_core__abstract_collection__Sequence__shift]))(var_todo); /* shift on <var_todo:List[LRState]>*/
}
var_state = var53;
{
var54 = ((val*(*)(val* self))(var_automaton->class->vft[COLOR_nitcc__grammar__LRAutomaton__states]))(var_automaton); /* states on <var_automaton:LRAutomaton>*/
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var54, var_state); /* add on <var54:Array[LRState]>*/
}
{
((void(*)(val* self))(var_state->class->vft[COLOR_nitcc__grammar__LRState__analysis]))(var_state); /* analysis on <var_state:LRState>*/
}
var55 = NEW_core__HashMap(&type_core__HashMap__nitcc__Element__nitcc__LRState);
{
((void(*)(val* self))(var55->class->vft[COLOR_core__kernel__Object__init]))(var55); /* init on <var55:HashMap[Element, LRState]>*/
}
var_nexts = var55;
{
var56 = ((val*(*)(val* self))(var_state->class->vft[COLOR_nitcc__grammar__LRState__items]))(var_state); /* items on <var_state:LRState>*/
}
var_57 = var56;
{
var58 = ((val*(*)(val* self))(var_57->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_57); /* iterator on <var_57:HashSet[Item]>*/
}
var_59 = var58;
for(;;) {
{
var60 = ((short int(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_59); /* is_ok on <var_59:Iterator[Item]>*/
}
if (var60){
} else {
goto BREAK_label61;
}
{
var62 = ((val*(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_59); /* item on <var_59:Iterator[Item]>*/
}
var_i63 = var62;
{
var64 = ((val*(*)(val* self))(var_i63->class->vft[COLOR_nitcc__grammar__Item__next]))(var_i63); /* next on <var_i63:Item>*/
}
var_e = var64;
if (var_e == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
var66 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_e, ((val*)NULL)); /* == on <var_e:nullable Element>*/
var65 = var66;
}
if (var65){
goto BREAK_label67;
} else {
}
{
var68 = ((short int(*)(val* self, val* p0))(var_nexts->class->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var_nexts, var_e); /* has_key on <var_nexts:HashMap[Element, LRState]>*/
}
if (var68){
{
var69 = ((val*(*)(val* self, val* p0))(var_nexts->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var_nexts, var_e); /* [] on <var_nexts:HashMap[Element, LRState]>*/
}
{
var70 = ((val*(*)(val* self))(var_i63->class->vft[COLOR_nitcc__grammar__Item__avance]))(var_i63); /* avance on <var_i63:Item>*/
}
{
var71 = ((short int(*)(val* self, val* p0))(var69->class->vft[COLOR_nitcc__grammar__LRState__add]))(var69, var70); /* add on <var69:nullable Object(LRState)>*/
}
} else {
{
var72 = ((val*(*)(val* self))(var_automaton->class->vft[COLOR_nitcc__grammar__LRAutomaton__states]))(var_automaton); /* states on <var_automaton:LRAutomaton>*/
}
{
var73 = ((val*(*)(val* self))(var72->class->vft[COLOR_core__abstract_collection__Collection__first]))(var72); /* first on <var72:Array[LRState]>*/
}
{
var74 = ((short int(*)(val* self, val* p0))(var_state->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_state, var73); /* == on <var_state:LRState>*/
}
if (var74){
{
var75 = ((val*(*)(val* self))(var_e->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:nullable Element(Element)>*/
}
var_name = var75;
} else {
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " ";
var82 = (val*)(1l<<2|1);
var83 = (val*)(1l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[1]=var79;
} else {
var77 = varonce76;
varonce76 = NULL;
}
{
var86 = ((val*(*)(val* self))(var_state->class->vft[COLOR_nitcc__grammar__LRState__name]))(var_state); /* name on <var_state:LRState>*/
}
((struct instance_core__NativeArray*)var77)->values[0]=var86;
{
var87 = ((val*(*)(val* self))(var_e->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:nullable Element(Element)>*/
}
((struct instance_core__NativeArray*)var77)->values[2]=var87;
{
var88 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
var_name = var88;
}
var89 = NEW_nitcc__LRState(&type_nitcc__LRState);
{
((void(*)(val* self, val* p0))(var89->class->vft[COLOR_nitcc__grammar__LRState__name_61d]))(var89, var_name); /* name= on <var89:LRState>*/
}
{
((void(*)(val* self))(var89->class->vft[COLOR_core__kernel__Object__init]))(var89); /* init on <var89:LRState>*/
}
var_next = var89;
{
((void(*)(val* self, val* p0, val* p1))(var_nexts->class->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var_nexts, var_e, var_next); /* []= on <var_nexts:HashMap[Element, LRState]>*/
}
{
var90 = ((val*(*)(val* self))(var_i63->class->vft[COLOR_nitcc__grammar__Item__avance]))(var_i63); /* avance on <var_i63:Item>*/
}
{
var91 = ((short int(*)(val* self, val* p0))(var_next->class->vft[COLOR_nitcc__grammar__LRState__add]))(var_next, var90); /* add on <var_next:LRState>*/
}
}
BREAK_label67: (void)0;
{
((void(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_59); /* next on <var_59:Iterator[Item]>*/
}
}
BREAK_label61: (void)0;
{
((void(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_59); /* finish on <var_59:Iterator[Item]>*/
}
var_92 = var_nexts;
{
var93 = ((val*(*)(val* self))(var_92->class->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_92); /* iterator on <var_92:HashMap[Element, LRState]>*/
}
var_94 = var93;
for(;;) {
{
var95 = ((short int(*)(val* self))((((long)var_94&3)?class_info[((long)var_94&3)]:var_94->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_94); /* is_ok on <var_94:MapIterator[Element, LRState]>*/
}
if (var95){
} else {
goto BREAK_label96;
}
{
var97 = ((val*(*)(val* self))((((long)var_94&3)?class_info[((long)var_94&3)]:var_94->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_94); /* key on <var_94:MapIterator[Element, LRState]>*/
}
var_e98 = var97;
{
var99 = ((val*(*)(val* self))((((long)var_94&3)?class_info[((long)var_94&3)]:var_94->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_94); /* item on <var_94:MapIterator[Element, LRState]>*/
}
var_next100 = var99;
var_new_state = 1;
var_101 = var_seen;
{
var102 = ((val*(*)(val* self))(var_101->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_101); /* iterator on <var_101:HashSet[LRState]>*/
}
var_103 = var102;
for(;;) {
{
var104 = ((short int(*)(val* self))((((long)var_103&3)?class_info[((long)var_103&3)]:var_103->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_103); /* is_ok on <var_103:Iterator[LRState]>*/
}
if (var104){
} else {
goto BREAK_label105;
}
{
var106 = ((val*(*)(val* self))((((long)var_103&3)?class_info[((long)var_103&3)]:var_103->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_103); /* item on <var_103:Iterator[LRState]>*/
}
var_n = var106;
{
var107 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, var_next100); /* == on <var_n:LRState>*/
}
if (var107){
var_next100 = var_n;
var_new_state = 0;
goto BREAK_label105;
} else {
}
{
((void(*)(val* self))((((long)var_103&3)?class_info[((long)var_103&3)]:var_103->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_103); /* next on <var_103:Iterator[LRState]>*/
}
}
BREAK_label105: (void)0;
{
((void(*)(val* self))((((long)var_103&3)?class_info[((long)var_103&3)]:var_103->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_103); /* finish on <var_103:Iterator[LRState]>*/
}
if (var_new_state){
{
var108 = ((long(*)(val* self))(var_seen->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_seen); /* length on <var_seen:HashSet[LRState]>*/
}
{
((void(*)(val* self, long p0))(var_next100->class->vft[COLOR_nitcc__grammar__LRState__number_61d]))(var_next100, var108); /* number= on <var_next100:LRState>*/
}
{
var109 = ((short int(*)(val* self, val* p0))(var_seen->class->vft[COLOR_core__abstract_collection__Collection__has]))(var_seen, var_next100); /* has on <var_seen:HashSet[LRState]>*/
}
var110 = !var109;
if (unlikely(!var110)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 190);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_seen->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_seen, var_next100); /* add on <var_seen:HashSet[LRState]>*/
}
{
((void(*)(val* self, val* p0))(var_todo->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_todo, var_next100); /* add on <var_todo:List[LRState]>*/
}
} else {
}
var111 = NEW_nitcc__LRTransition(&type_nitcc__LRTransition);
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_nitcc__grammar__LRTransition__from_61d]))(var111, var_state); /* from= on <var111:LRTransition>*/
}
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_nitcc__grammar__LRTransition__to_61d]))(var111, var_next100); /* to= on <var111:LRTransition>*/
}
{
((void(*)(val* self, val* p0))(var111->class->vft[COLOR_nitcc__grammar__LRTransition__elem_61d]))(var111, var_e98); /* elem= on <var111:LRTransition>*/
}
{
((void(*)(val* self))(var111->class->vft[COLOR_core__kernel__Object__init]))(var111); /* init on <var111:LRTransition>*/
}
var_t = var111;
{
var112 = ((val*(*)(val* self))(var_state->class->vft[COLOR_nitcc__grammar__LRState__outs]))(var_state); /* outs on <var_state:LRState>*/
}
{
((void(*)(val* self, val* p0))(var112->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var112, var_t); /* add on <var112:Array[LRTransition]>*/
}
{
var113 = ((val*(*)(val* self))(var_next100->class->vft[COLOR_nitcc__grammar__LRState__ins]))(var_next100); /* ins on <var_next100:LRState>*/
}
{
((void(*)(val* self, val* p0))(var113->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var113, var_t); /* add on <var113:Array[LRTransition]>*/
}
{
((void(*)(val* self))((((long)var_94&3)?class_info[((long)var_94&3)]:var_94->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_94); /* next on <var_94:MapIterator[Element, LRState]>*/
}
}
BREAK_label96: (void)0;
{
((void(*)(val* self))((((long)var_94&3)?class_info[((long)var_94&3)]:var_94->class)->vft[COLOR_core__abstract_collection__MapIterator__finish]))(var_94); /* finish on <var_94:MapIterator[Element, LRState]>*/
}
} else {
goto BREAK_label114;
}
}
BREAK_label114: (void)0;
var = var_automaton;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Gram$analyse for (self: Gram) */
void nitcc___nitcc__Gram___analyse(val* self) {
short int var_changed /* var changed: Bool */;
val* var /* : Array[Production] */;
val* var_ /* var : Array[Production] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : IndexedIterator[Production] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_p /* var p: Production */;
short int var5 /* : Bool */;
val* var7 /* : Array[Alternative] */;
val* var_8 /* var : Array[Alternative] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[Alternative] */;
short int var11 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_a /* var a: Alternative */;
short int var14 /* : Bool */;
short int var_nullabl /* var nullabl: Bool */;
val* var16 /* : Array[Element] */;
val* var_17 /* var : Array[Element] */;
val* var18 /* : Iterator[nullable Object] */;
val* var_19 /* var : IndexedIterator[Element] */;
short int var20 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_e /* var e: Element */;
short int var23 /* : Bool */;
int cltype;
int idtype;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var_changed31 /* var changed: Bool */;
val* var32 /* : Array[Production] */;
val* var_33 /* var : Array[Production] */;
val* var34 /* : Iterator[nullable Object] */;
val* var_35 /* var : IndexedIterator[Production] */;
short int var36 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_p39 /* var p: Production */;
val* var40 /* : HashSet[Item] */;
val* var_fs /* var fs: HashSet[Item] */;
val* var41 /* : Array[Alternative] */;
val* var_42 /* var : Array[Alternative] */;
val* var43 /* : Iterator[nullable Object] */;
val* var_44 /* var : IndexedIterator[Alternative] */;
short int var45 /* : Bool */;
val* var47 /* : nullable Object */;
val* var_a48 /* var a: Alternative */;
short int var49 /* : Bool */;
val* var51 /* : Item */;
val* var_i /* var i: Item */;
val* var52 /* : nullable Element */;
val* var_e53 /* var e: nullable Element */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
val* var64 /* : HashSet[Item] */;
val* var_65 /* var : HashSet[Item] */;
val* var66 /* : Iterator[nullable Object] */;
val* var_67 /* var : Iterator[Item] */;
short int var68 /* : Bool */;
val* var70 /* : nullable Object */;
val* var_t /* var t: Item */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : Item */;
short int var75 /* : Bool */;
short int var_changed77 /* var changed: Bool */;
val* var78 /* : Array[Production] */;
val* var_79 /* var : Array[Production] */;
val* var80 /* : Iterator[nullable Object] */;
val* var_81 /* var : IndexedIterator[Production] */;
short int var82 /* : Bool */;
val* var84 /* : nullable Object */;
val* var_p1 /* var p1: Production */;
val* var85 /* : Array[Alternative] */;
val* var_86 /* var : Array[Alternative] */;
val* var87 /* : Iterator[nullable Object] */;
val* var_88 /* var : IndexedIterator[Alternative] */;
short int var89 /* : Bool */;
val* var91 /* : nullable Object */;
val* var_a92 /* var a: Alternative */;
short int var93 /* : Bool */;
val* var_p0 /* var p0: nullable Production */;
val* var95 /* : Item */;
val* var_i96 /* var i: Item */;
val* var97 /* : nullable Element */;
val* var_e98 /* var e: nullable Element */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
val* var_p102 /* var p: nullable Production */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : Item */;
val* var110 /* : HashSet[Item] */;
val* var_afs /* var afs: HashSet[Item] */;
short int var111 /* : Bool */;
int cltype112;
int idtype113;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
int cltype116;
int idtype117;
val* var118 /* : HashSet[Item] */;
val* var_119 /* var : HashSet[Item] */;
val* var120 /* : Iterator[nullable Object] */;
val* var_121 /* var : Iterator[Item] */;
short int var122 /* : Bool */;
val* var124 /* : nullable Object */;
val* var_t125 /* var t: Item */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
val* var128 /* : HashSet[Item] */;
val* var_129 /* var : HashSet[Item] */;
val* var130 /* : Iterator[nullable Object] */;
val* var_131 /* var : Iterator[Item] */;
short int var132 /* : Bool */;
val* var134 /* : nullable Object */;
val* var_t135 /* var t: Item */;
short int var136 /* : Bool */;
val* var137 /* : Item */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
val* var140 /* : HashSet[Item] */;
val* var_afs141 /* var afs: HashSet[Item] */;
val* var142 /* : HashSet[Item] */;
val* var_143 /* var : HashSet[Item] */;
val* var144 /* : Iterator[nullable Object] */;
val* var_145 /* var : Iterator[Item] */;
short int var146 /* : Bool */;
val* var148 /* : nullable Object */;
val* var_t149 /* var t: Item */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
for(;;) {
var_changed = 0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Gram__prods]))(self); /* prods on <self:Gram>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Production]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:IndexedIterator[Production]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:IndexedIterator[Production]>*/
}
var_p = var4;
{
var5 = ((short int(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__is_nullable]))(var_p); /* is_nullable on <var_p:Production>*/
}
if (var5){
goto BREAK_label6;
} else {
}
{
var7 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__alts]))(var_p); /* alts on <var_p:Production>*/
}
var_8 = var7;
{
var9 = ((val*(*)(val* self))(var_8->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_8); /* iterator on <var_8:Array[Alternative]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[Alternative]>*/
}
if (var11){
} else {
goto BREAK_label12;
}
{
var13 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[Alternative]>*/
}
var_a = var13;
{
var14 = ((short int(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__phony]))(var_a); /* phony on <var_a:Alternative>*/
}
if (var14){
goto BREAK_label15;
} else {
}
var_nullabl = 1;
{
var16 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_a); /* elems on <var_a:Alternative>*/
}
var_17 = var16;
{
var18 = ((val*(*)(val* self))(var_17->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_17); /* iterator on <var_17:Array[Element]>*/
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:IndexedIterator[Element]>*/
}
if (var20){
} else {
goto BREAK_label21;
}
{
var22 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:IndexedIterator[Element]>*/
}
var_e = var22;
/* <var_e:Element> isa Token */
cltype = type_nitcc__Token.color;
idtype = type_nitcc__Token.id;
if(cltype >= var_e->type->table_size) {
var23 = 0;
} else {
var23 = var_e->type->type_table[cltype] == idtype;
}
if (var23){
var_nullabl = 0;
goto BREAK_label21;
} else {
/* <var_e:Element> isa Production */
cltype25 = type_nitcc__Production.color;
idtype26 = type_nitcc__Production.id;
if(cltype25 >= var_e->type->table_size) {
var24 = 0;
} else {
var24 = var_e->type->type_table[cltype25] == idtype26;
}
if (var24){
{
var27 = ((short int(*)(val* self))(var_e->class->vft[COLOR_nitcc__grammar__Production__is_nullable]))(var_e); /* is_nullable on <var_e:Element(Production)>*/
}
var28 = !var27;
if (var28){
var_nullabl = 0;
} else {
}
goto BREAK_label21;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 222);
fatal_exit(1);
}
}
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:IndexedIterator[Element]>*/
}
}
BREAK_label21: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:IndexedIterator[Element]>*/
}
if (var_nullabl){
{
((void(*)(val* self, short int p0))(var_p->class->vft[COLOR_nitcc__grammar__Production__is_nullable_61d]))(var_p, 1); /* is_nullable= on <var_p:Production>*/
}
var_changed = 1;
} else {
}
BREAK_label15: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[Alternative]>*/
}
}
BREAK_label12: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[Alternative]>*/
}
BREAK_label6: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:IndexedIterator[Production]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:IndexedIterator[Production]>*/
}
var29 = !var_changed;
if (var29){
goto BREAK_label30;
} else {
}
}
BREAK_label30: (void)0;
for(;;) {
var_changed31 = 0;
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Gram__prods]))(self); /* prods on <self:Gram>*/
}
var_33 = var32;
{
var34 = ((val*(*)(val* self))(var_33->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_33); /* iterator on <var_33:Array[Production]>*/
}
var_35 = var34;
for(;;) {
{
var36 = ((short int(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_35); /* is_ok on <var_35:IndexedIterator[Production]>*/
}
if (var36){
} else {
goto BREAK_label37;
}
{
var38 = ((val*(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_35); /* item on <var_35:IndexedIterator[Production]>*/
}
var_p39 = var38;
{
var40 = ((val*(*)(val* self))(var_p39->class->vft[COLOR_nitcc__grammar__Production__firsts]))(var_p39); /* firsts on <var_p39:Production>*/
}
var_fs = var40;
{
var41 = ((val*(*)(val* self))(var_p39->class->vft[COLOR_nitcc__grammar__Production__alts]))(var_p39); /* alts on <var_p39:Production>*/
}
var_42 = var41;
{
var43 = ((val*(*)(val* self))(var_42->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_42); /* iterator on <var_42:Array[Alternative]>*/
}
var_44 = var43;
for(;;) {
{
var45 = ((short int(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_44); /* is_ok on <var_44:IndexedIterator[Alternative]>*/
}
if (var45){
} else {
goto BREAK_label46;
}
{
var47 = ((val*(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_44); /* item on <var_44:IndexedIterator[Alternative]>*/
}
var_a48 = var47;
{
var49 = ((short int(*)(val* self))(var_a48->class->vft[COLOR_nitcc__grammar__Alternative__phony]))(var_a48); /* phony on <var_a48:Alternative>*/
}
if (var49){
goto BREAK_label50;
} else {
}
{
var51 = ((val*(*)(val* self))(var_a48->class->vft[COLOR_nitcc__grammar__Alternative__first_item]))(var_a48); /* first_item on <var_a48:Alternative>*/
}
var_i = var51;
for(;;) {
{
var52 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nitcc__grammar__Item__next]))(var_i); /* next on <var_i:Item>*/
}
var_e53 = var52;
if (var_e53 == NULL) {
var54 = 1; /* is null */
} else {
var54 = 0; /* arg is null but recv is not */
}
if (0) {
var55 = ((short int(*)(val* self, val* p0))(var_e53->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_e53, ((val*)NULL)); /* == on <var_e53:nullable Element>*/
var54 = var55;
}
if (var54){
goto BREAK_label56;
} else {
}
/* <var_e53:nullable Element(Element)> isa Token */
cltype58 = type_nitcc__Token.color;
idtype59 = type_nitcc__Token.id;
if(cltype58 >= var_e53->type->table_size) {
var57 = 0;
} else {
var57 = var_e53->type->type_table[cltype58] == idtype59;
}
if (var57){
{
var60 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitcc__grammar__Gram__try_add]))(self, var_fs, var_i); /* try_add on <self:Gram>*/
}
if (var60){
var_changed31 = 1;
} else {
}
goto BREAK_label56;
} else {
/* <var_e53:nullable Element(Element)> isa Production */
cltype62 = type_nitcc__Production.color;
idtype63 = type_nitcc__Production.id;
if(cltype62 >= var_e53->type->table_size) {
var61 = 0;
} else {
var61 = var_e53->type->type_table[cltype62] == idtype63;
}
if (var61){
{
var64 = ((val*(*)(val* self))(var_e53->class->vft[COLOR_nitcc__grammar__Production__firsts]))(var_e53); /* firsts on <var_e53:nullable Element(Production)>*/
}
var_65 = var64;
{
var66 = ((val*(*)(val* self))(var_65->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_65); /* iterator on <var_65:HashSet[Item]>*/
}
var_67 = var66;
for(;;) {
{
var68 = ((short int(*)(val* self))((((long)var_67&3)?class_info[((long)var_67&3)]:var_67->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_67); /* is_ok on <var_67:Iterator[Item]>*/
}
if (var68){
} else {
goto BREAK_label69;
}
{
var70 = ((val*(*)(val* self))((((long)var_67&3)?class_info[((long)var_67&3)]:var_67->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_67); /* item on <var_67:Iterator[Item]>*/
}
var_t = var70;
{
var71 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitcc__grammar__Gram__try_add]))(self, var_fs, var_t); /* try_add on <self:Gram>*/
}
if (var71){
var_changed31 = 1;
} else {
}
{
((void(*)(val* self))((((long)var_67&3)?class_info[((long)var_67&3)]:var_67->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_67); /* next on <var_67:Iterator[Item]>*/
}
}
BREAK_label69: (void)0;
{
((void(*)(val* self))((((long)var_67&3)?class_info[((long)var_67&3)]:var_67->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_67); /* finish on <var_67:Iterator[Item]>*/
}
{
var72 = ((short int(*)(val* self))(var_e53->class->vft[COLOR_nitcc__grammar__Production__is_nullable]))(var_e53); /* is_nullable on <var_e53:nullable Element(Production)>*/
}
var73 = !var72;
if (var73){
goto BREAK_label56;
} else {
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 253);
fatal_exit(1);
}
}
{
var74 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nitcc__grammar__Item__avance]))(var_i); /* avance on <var_i:Item>*/
}
var_i = var74;
}
BREAK_label56: (void)0;
BREAK_label50: (void)0;
{
((void(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_44); /* next on <var_44:IndexedIterator[Alternative]>*/
}
}
BREAK_label46: (void)0;
{
((void(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_44); /* finish on <var_44:IndexedIterator[Alternative]>*/
}
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_35); /* next on <var_35:IndexedIterator[Production]>*/
}
}
BREAK_label37: (void)0;
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_35); /* finish on <var_35:IndexedIterator[Production]>*/
}
var75 = !var_changed31;
if (var75){
goto BREAK_label76;
} else {
}
}
BREAK_label76: (void)0;
for(;;) {
var_changed77 = 0;
{
var78 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Gram__prods]))(self); /* prods on <self:Gram>*/
}
var_79 = var78;
{
var80 = ((val*(*)(val* self))(var_79->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_79); /* iterator on <var_79:Array[Production]>*/
}
var_81 = var80;
for(;;) {
{
var82 = ((short int(*)(val* self))((((long)var_81&3)?class_info[((long)var_81&3)]:var_81->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_81); /* is_ok on <var_81:IndexedIterator[Production]>*/
}
if (var82){
} else {
goto BREAK_label83;
}
{
var84 = ((val*(*)(val* self))((((long)var_81&3)?class_info[((long)var_81&3)]:var_81->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_81); /* item on <var_81:IndexedIterator[Production]>*/
}
var_p1 = var84;
{
var85 = ((val*(*)(val* self))(var_p1->class->vft[COLOR_nitcc__grammar__Production__alts]))(var_p1); /* alts on <var_p1:Production>*/
}
var_86 = var85;
{
var87 = ((val*(*)(val* self))(var_86->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_86); /* iterator on <var_86:Array[Alternative]>*/
}
var_88 = var87;
for(;;) {
{
var89 = ((short int(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_88); /* is_ok on <var_88:IndexedIterator[Alternative]>*/
}
if (var89){
} else {
goto BREAK_label90;
}
{
var91 = ((val*(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_88); /* item on <var_88:IndexedIterator[Alternative]>*/
}
var_a92 = var91;
{
var93 = ((short int(*)(val* self))(var_a92->class->vft[COLOR_nitcc__grammar__Alternative__phony]))(var_a92); /* phony on <var_a92:Alternative>*/
}
if (var93){
goto BREAK_label94;
} else {
}
var_p0 = ((val*)NULL);
{
var95 = ((val*(*)(val* self))(var_a92->class->vft[COLOR_nitcc__grammar__Alternative__first_item]))(var_a92); /* first_item on <var_a92:Alternative>*/
}
var_i96 = var95;
for(;;) {
{
var97 = ((val*(*)(val* self))(var_i96->class->vft[COLOR_nitcc__grammar__Item__next]))(var_i96); /* next on <var_i96:Item>*/
}
var_e98 = var97;
if (var_e98 == NULL) {
var99 = 1; /* is null */
} else {
var99 = 0; /* arg is null but recv is not */
}
if (0) {
var100 = ((short int(*)(val* self, val* p0))(var_e98->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_e98, ((val*)NULL)); /* == on <var_e98:nullable Element>*/
var99 = var100;
}
if (var99){
goto BREAK_label101;
} else {
}
var_p102 = var_p0;
/* <var_e98:nullable Element(Element)> isa Production */
cltype104 = type_nitcc__Production.color;
idtype105 = type_nitcc__Production.id;
if(cltype104 >= var_e98->type->table_size) {
var103 = 0;
} else {
var103 = var_e98->type->type_table[cltype104] == idtype105;
}
if (var103){
var_p0 = var_e98;
} else {
var_p0 = ((val*)NULL);
}
if (var_p102 == NULL) {
var106 = 1; /* is null */
} else {
var106 = 0; /* arg is null but recv is not */
}
if (0) {
var107 = ((short int(*)(val* self, val* p0))(var_p102->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p102, ((val*)NULL)); /* == on <var_p102:nullable Production>*/
var106 = var107;
}
if (var106){
{
var108 = ((val*(*)(val* self))(var_i96->class->vft[COLOR_nitcc__grammar__Item__avance]))(var_i96); /* avance on <var_i96:Item>*/
}
var_i96 = var108;
goto BREAK_label109;
} else {
}
{
var110 = ((val*(*)(val* self))(var_p102->class->vft[COLOR_nitcc__grammar__Production__afters]))(var_p102); /* afters on <var_p102:nullable Production(Production)>*/
}
var_afs = var110;
/* <var_e98:nullable Element(Element)> isa Token */
cltype112 = type_nitcc__Token.color;
idtype113 = type_nitcc__Token.id;
if(cltype112 >= var_e98->type->table_size) {
var111 = 0;
} else {
var111 = var_e98->type->type_table[cltype112] == idtype113;
}
if (var111){
{
var114 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitcc__grammar__Gram__try_add]))(self, var_afs, var_i96); /* try_add on <self:Gram>*/
}
if (var114){
var_changed77 = 1;
} else {
}
} else {
/* <var_e98:nullable Element(Element)> isa Production */
cltype116 = type_nitcc__Production.color;
idtype117 = type_nitcc__Production.id;
if(cltype116 >= var_e98->type->table_size) {
var115 = 0;
} else {
var115 = var_e98->type->type_table[cltype116] == idtype117;
}
if (var115){
{
var118 = ((val*(*)(val* self))(var_e98->class->vft[COLOR_nitcc__grammar__Production__firsts]))(var_e98); /* firsts on <var_e98:nullable Element(Production)>*/
}
var_119 = var118;
{
var120 = ((val*(*)(val* self))(var_119->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_119); /* iterator on <var_119:HashSet[Item]>*/
}
var_121 = var120;
for(;;) {
{
var122 = ((short int(*)(val* self))((((long)var_121&3)?class_info[((long)var_121&3)]:var_121->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_121); /* is_ok on <var_121:Iterator[Item]>*/
}
if (var122){
} else {
goto BREAK_label123;
}
{
var124 = ((val*(*)(val* self))((((long)var_121&3)?class_info[((long)var_121&3)]:var_121->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_121); /* item on <var_121:Iterator[Item]>*/
}
var_t125 = var124;
{
var126 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitcc__grammar__Gram__try_add]))(self, var_afs, var_t125); /* try_add on <self:Gram>*/
}
if (var126){
var_changed77 = 1;
} else {
}
{
((void(*)(val* self))((((long)var_121&3)?class_info[((long)var_121&3)]:var_121->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_121); /* next on <var_121:Iterator[Item]>*/
}
}
BREAK_label123: (void)0;
{
((void(*)(val* self))((((long)var_121&3)?class_info[((long)var_121&3)]:var_121->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_121); /* finish on <var_121:Iterator[Item]>*/
}
{
var127 = ((short int(*)(val* self))(var_e98->class->vft[COLOR_nitcc__grammar__Production__is_nullable]))(var_e98); /* is_nullable on <var_e98:nullable Element(Production)>*/
}
if (var127){
{
var128 = ((val*(*)(val* self))(var_e98->class->vft[COLOR_nitcc__grammar__Production__afters]))(var_e98); /* afters on <var_e98:nullable Element(Production)>*/
}
var_129 = var128;
{
var130 = ((val*(*)(val* self))(var_129->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_129); /* iterator on <var_129:HashSet[Item]>*/
}
var_131 = var130;
for(;;) {
{
var132 = ((short int(*)(val* self))((((long)var_131&3)?class_info[((long)var_131&3)]:var_131->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_131); /* is_ok on <var_131:Iterator[Item]>*/
}
if (var132){
} else {
goto BREAK_label133;
}
{
var134 = ((val*(*)(val* self))((((long)var_131&3)?class_info[((long)var_131&3)]:var_131->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_131); /* item on <var_131:Iterator[Item]>*/
}
var_t135 = var134;
{
var136 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitcc__grammar__Gram__try_add]))(self, var_afs, var_t135); /* try_add on <self:Gram>*/
}
if (var136){
var_changed77 = 1;
} else {
}
{
((void(*)(val* self))((((long)var_131&3)?class_info[((long)var_131&3)]:var_131->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_131); /* next on <var_131:Iterator[Item]>*/
}
}
BREAK_label133: (void)0;
{
((void(*)(val* self))((((long)var_131&3)?class_info[((long)var_131&3)]:var_131->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_131); /* finish on <var_131:Iterator[Item]>*/
}
} else {
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 293);
fatal_exit(1);
}
}
{
var137 = ((val*(*)(val* self))(var_i96->class->vft[COLOR_nitcc__grammar__Item__avance]))(var_i96); /* avance on <var_i96:Item>*/
}
var_i96 = var137;
BREAK_label109: (void)0;
}
BREAK_label101: (void)0;
if (var_p0 == NULL) {
var138 = 0; /* is null */
} else {
var138 = 1; /* arg is null and recv is not */
}
if (0) {
var139 = ((short int(*)(val* self, val* p0))(var_p0->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_p0, ((val*)NULL)); /* != on <var_p0:nullable Production>*/
var138 = var139;
}
if (var138){
{
var140 = ((val*(*)(val* self))(var_p0->class->vft[COLOR_nitcc__grammar__Production__afters]))(var_p0); /* afters on <var_p0:nullable Production(Production)>*/
}
var_afs141 = var140;
{
var142 = ((val*(*)(val* self))(var_p1->class->vft[COLOR_nitcc__grammar__Production__afters]))(var_p1); /* afters on <var_p1:Production>*/
}
var_143 = var142;
{
var144 = ((val*(*)(val* self))(var_143->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_143); /* iterator on <var_143:HashSet[Item]>*/
}
var_145 = var144;
for(;;) {
{
var146 = ((short int(*)(val* self))((((long)var_145&3)?class_info[((long)var_145&3)]:var_145->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_145); /* is_ok on <var_145:Iterator[Item]>*/
}
if (var146){
} else {
goto BREAK_label147;
}
{
var148 = ((val*(*)(val* self))((((long)var_145&3)?class_info[((long)var_145&3)]:var_145->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_145); /* item on <var_145:Iterator[Item]>*/
}
var_t149 = var148;
{
var150 = ((short int(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitcc__grammar__Gram__try_add]))(self, var_afs141, var_t149); /* try_add on <self:Gram>*/
}
if (var150){
var_changed77 = 1;
} else {
}
{
((void(*)(val* self))((((long)var_145&3)?class_info[((long)var_145&3)]:var_145->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_145); /* next on <var_145:Iterator[Item]>*/
}
}
BREAK_label147: (void)0;
{
((void(*)(val* self))((((long)var_145&3)?class_info[((long)var_145&3)]:var_145->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_145); /* finish on <var_145:Iterator[Item]>*/
}
} else {
}
BREAK_label94: (void)0;
{
((void(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_88); /* next on <var_88:IndexedIterator[Alternative]>*/
}
}
BREAK_label90: (void)0;
{
((void(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_88); /* finish on <var_88:IndexedIterator[Alternative]>*/
}
{
((void(*)(val* self))((((long)var_81&3)?class_info[((long)var_81&3)]:var_81->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_81); /* next on <var_81:IndexedIterator[Production]>*/
}
}
BREAK_label83: (void)0;
{
((void(*)(val* self))((((long)var_81&3)?class_info[((long)var_81&3)]:var_81->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_81); /* finish on <var_81:IndexedIterator[Production]>*/
}
var151 = !var_changed77;
if (var151){
goto BREAK_label152;
} else {
}
}
BREAK_label152: (void)0;
RET_LABEL:;
}
/* method grammar$Gram$try_add for (self: Gram, Set[Item], Item): Bool */
short int nitcc___nitcc__Gram___try_add(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_set /* var set: Set[Item] */;
val* var_t /* var t: Item */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_res /* var res: Bool */;
var_set = p0;
var_t = p1;
{
var1 = ((short int(*)(val* self, val* p0))((((long)var_set&3)?class_info[((long)var_set&3)]:var_set->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var_set, var_t); /* has on <var_set:Set[Item]>*/
}
var2 = !var1;
var_res = var2;
if (var_res){
{
((void(*)(val* self, val* p0))((((long)var_set&3)?class_info[((long)var_set&3)]:var_set->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_set, var_t); /* add on <var_set:Set[Item]>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Production$alts for (self: Production): Array[Alternative] */
val* nitcc___nitcc__Production___alts(val* self) {
val* var /* : Array[Alternative] */;
val* var1 /* : Array[Alternative] */;
var1 = self->attrs[COLOR_nitcc__grammar__Production___alts].val; /* _alts on <self:Production> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _alts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 322);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Production$alts= for (self: Production, Array[Alternative]) */
void nitcc___nitcc__Production___alts_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Production___alts].val = p0; /* _alts on <self:Production> */
RET_LABEL:;
}
/* method grammar$Production$ast_alts for (self: Production): Array[Alternative] */
val* nitcc___nitcc__Production___ast_alts(val* self) {
val* var /* : Array[Alternative] */;
val* var1 /* : Array[Alternative] */;
var1 = self->attrs[COLOR_nitcc__grammar__Production___ast_alts].val; /* _ast_alts on <self:Production> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ast_alts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 325);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Production$ast_alts= for (self: Production, Array[Alternative]) */
void nitcc___nitcc__Production___ast_alts_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Production___ast_alts].val = p0; /* _ast_alts on <self:Production> */
RET_LABEL:;
}
/* method grammar$Production$accept for (self: Production): Bool */
short int nitcc___nitcc__Production___accept(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitcc__grammar__Production___accept].s; /* _accept on <self:Production> */
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Production$accept= for (self: Production, Bool) */
void nitcc___nitcc__Production___accept_61d(val* self, short int p0) {
self->attrs[COLOR_nitcc__grammar__Production___accept].s = p0; /* _accept on <self:Production> */
RET_LABEL:;
}
/* method grammar$Production$spe for (self: Production): nullable Production */
val* nitcc___nitcc__Production___spe(val* self) {
val* var /* : nullable Production */;
val* var1 /* : nullable Production */;
var1 = self->attrs[COLOR_nitcc__grammar__Production___spe].val; /* _spe on <self:Production> */
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Production$spe= for (self: Production, nullable Production) */
void nitcc___nitcc__Production___spe_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Production___spe].val = p0; /* _spe on <self:Production> */
RET_LABEL:;
}
/* method grammar$Production$altone for (self: Production): Bool */
short int nitcc___nitcc__Production___altone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitcc__grammar__Production___altone].s; /* _altone on <self:Production> */
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Production$altone= for (self: Production, Bool) */
void nitcc___nitcc__Production___altone_61d(val* self, short int p0) {
self->attrs[COLOR_nitcc__grammar__Production___altone].s = p0; /* _altone on <self:Production> */
RET_LABEL:;
}
/* method grammar$Production$acname for (self: Production): String */
val* nitcc___nitcc__Production___Element__acname(val* self) {
val* var /* : String */;
val* var1 /* : nullable Production */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Production */;
val* var5 /* : String */;
val* var6 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Production__spe]))(self); /* spe on <self:Production>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable Production>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Production__spe]))(self); /* spe on <self:Production>*/
}
if (var4 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 342);
fatal_exit(1);
} else {
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_nitcc__grammar__Element__acname]))(var4); /* acname on <var4:nullable Production>*/
}
var = var5;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc___nitcc__Production___Element__acname]))(self); /* acname on <self:Production>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Production$is_nullable for (self: Production): Bool */
short int nitcc___nitcc__Production___is_nullable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitcc__grammar__Production___is_nullable].s; /* _is_nullable on <self:Production> */
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Production$is_nullable= for (self: Production, Bool) */
void nitcc___nitcc__Production___is_nullable_61d(val* self, short int p0) {
self->attrs[COLOR_nitcc__grammar__Production___is_nullable].s = p0; /* _is_nullable on <self:Production> */
RET_LABEL:;
}
/* method grammar$Production$firsts for (self: Production): HashSet[Item] */
val* nitcc___nitcc__Production___firsts(val* self) {
val* var /* : HashSet[Item] */;
val* var1 /* : HashSet[Item] */;
var1 = self->attrs[COLOR_nitcc__grammar__Production___firsts].val; /* _firsts on <self:Production> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _firsts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 349);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Production$firsts= for (self: Production, HashSet[Item]) */
void nitcc___nitcc__Production___firsts_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Production___firsts].val = p0; /* _firsts on <self:Production> */
RET_LABEL:;
}
/* method grammar$Production$afters for (self: Production): HashSet[Item] */
val* nitcc___nitcc__Production___afters(val* self) {
val* var /* : HashSet[Item] */;
val* var1 /* : HashSet[Item] */;
var1 = self->attrs[COLOR_nitcc__grammar__Production___afters].val; /* _afters on <self:Production> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _afters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 352);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Production$afters= for (self: Production, HashSet[Item]) */
void nitcc___nitcc__Production___afters_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Production___afters].val = p0; /* _afters on <self:Production> */
RET_LABEL:;
}
/* method grammar$Production$new_alt0 for (self: Production, String): Alternative */
val* nitcc___nitcc__Production___new_alt0(val* self, val* p0) {
val* var /* : Alternative */;
val* var_name /* var name: String */;
val* var1 /* : Alternative */;
val* var2 /* : Array[Element] */;
val* var_a /* var a: Alternative */;
val* var3 /* : Array[Alternative] */;
var_name = p0;
var1 = NEW_nitcc__Alternative(&type_nitcc__Alternative);
var2 = NEW_core__Array(&type_core__Array__nitcc__Element);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:Array[Element]>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitcc__grammar__Alternative__prod_61d]))(var1, self); /* prod= on <var1:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitcc__grammar__Alternative__name_61d]))(var1, var_name); /* name= on <var1:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitcc__grammar__Alternative__elems_61d]))(var1, var2); /* elems= on <var1:Alternative>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Alternative>*/
}
var_a = var1;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Production__alts]))(self); /* alts on <self:Production>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var3, var_a); /* add on <var3:Array[Alternative]>*/
}
var = var_a;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Production$new_alt for (self: Production, String, Array[Element]): Alternative */
val* nitcc___nitcc__Production___new_alt(val* self, val* p0, val* p1) {
val* var /* : Alternative */;
val* var_name /* var name: String */;
val* var_elems /* var elems: Array[Element] */;
val* var1 /* : Alternative */;
val* var_a /* var a: Alternative */;
val* var2 /* : Array[Alternative] */;
var_name = p0;
var_elems = p1;
var1 = NEW_nitcc__Alternative(&type_nitcc__Alternative);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitcc__grammar__Alternative__prod_61d]))(var1, self); /* prod= on <var1:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitcc__grammar__Alternative__name_61d]))(var1, var_name); /* name= on <var1:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitcc__grammar__Alternative__elems_61d]))(var1, var_elems); /* elems= on <var1:Alternative>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Alternative>*/
}
var_a = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Production__alts]))(self); /* alts on <self:Production>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var2, var_a); /* add on <var2:Array[Alternative]>*/
}
var = var_a;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Production$new_alt2 for (self: Production, String, Array[Element]): Alternative */
val* nitcc___nitcc__Production___new_alt2(val* self, val* p0, val* p1) {
val* var /* : Alternative */;
val* var_name /* var name: String */;
val* var_elems /* var elems: Array[Element] */;
val* var1 /* : Alternative */;
val* var_a /* var a: Alternative */;
val* var2 /* : Array[Alternative] */;
var_name = p0;
var_elems = p1;
var1 = NEW_nitcc__Alternative(&type_nitcc__Alternative);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitcc__grammar__Alternative__prod_61d]))(var1, self); /* prod= on <var1:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitcc__grammar__Alternative__name_61d]))(var1, var_name); /* name= on <var1:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitcc__grammar__Alternative__elems_61d]))(var1, var_elems); /* elems= on <var1:Alternative>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Alternative>*/
}
var_a = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Production__alts]))(self); /* alts on <self:Production>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var2, var_a); /* add on <var2:Array[Alternative]>*/
}
var = var_a;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Production$start_state for (self: Production): Array[Item] */
val* nitcc___nitcc__Production___start_state(val* self) {
val* var /* : Array[Item] */;
val* var1 /* : Array[Item] */;
val* var_res /* var res: Array[Item] */;
val* var2 /* : Array[Alternative] */;
val* var_ /* var : Array[Alternative] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[Alternative] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_a /* var a: Alternative */;
short int var7 /* : Bool */;
val* var9 /* : Item */;
var1 = NEW_core__Array(&type_core__Array__nitcc__Item);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[Item]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Production__alts]))(self); /* alts on <self:Production>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Alternative]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[Alternative]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[Alternative]>*/
}
var_a = var6;
{
var7 = ((short int(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__phony]))(var_a); /* phony on <var_a:Alternative>*/
}
if (var7){
goto BREAK_label8;
} else {
}
{
var9 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__first_item]))(var_a); /* first_item on <var_a:Alternative>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var9); /* add on <var_res:Array[Item]>*/
}
BREAK_label8: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[Alternative]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[Alternative]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Production$gotos for (self: Production): ArraySet[LRState] */
val* nitcc___nitcc__Production___gotos(val* self) {
val* var /* : ArraySet[LRState] */;
val* var1 /* : ArraySet[LRState] */;
var1 = self->attrs[COLOR_nitcc__grammar__Production___gotos].val; /* _gotos on <self:Production> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _gotos");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 391);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Production$gotos= for (self: Production, ArraySet[LRState]) */
void nitcc___nitcc__Production___gotos_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Production___gotos].val = p0; /* _gotos on <self:Production> */
RET_LABEL:;
}
/* method grammar$Alternative$prod for (self: Alternative): Production */
val* nitcc___nitcc__Alternative___prod(val* self) {
val* var /* : Production */;
val* var1 /* : Production */;
var1 = self->attrs[COLOR_nitcc__grammar__Alternative___prod].val; /* _prod on <self:Alternative> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _prod");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 397);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Alternative$prod= for (self: Alternative, Production) */
void nitcc___nitcc__Alternative___prod_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Alternative___prod].val = p0; /* _prod on <self:Alternative> */
RET_LABEL:;
}
/* method grammar$Alternative$name for (self: Alternative): String */
val* nitcc___nitcc__Alternative___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitcc__grammar__Alternative___name].val; /* _name on <self:Alternative> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 400);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Alternative$name= for (self: Alternative, String) */
void nitcc___nitcc__Alternative___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Alternative___name].val = p0; /* _name on <self:Alternative> */
RET_LABEL:;
}
/* method grammar$Alternative$elems for (self: Alternative): Array[Element] */
val* nitcc___nitcc__Alternative___elems(val* self) {
val* var /* : Array[Element] */;
val* var1 /* : Array[Element] */;
var1 = self->attrs[COLOR_nitcc__grammar__Alternative___elems].val; /* _elems on <self:Alternative> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elems");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 403);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Alternative$elems= for (self: Alternative, Array[Element]) */
void nitcc___nitcc__Alternative___elems_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Alternative___elems].val = p0; /* _elems on <self:Alternative> */
RET_LABEL:;
}
/* method grammar$Alternative$first_item for (self: Alternative): Item */
val* nitcc___nitcc__Alternative___first_item(val* self) {
val* var /* : Item */;
val* var1 /* : Item */;
var1 = self->attrs[COLOR_nitcc__grammar__Alternative___first_item].val; /* _first_item on <self:Alternative> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first_item");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 406);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Alternative$first_item= for (self: Alternative, Item) */
void nitcc___nitcc__Alternative___first_item_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Alternative___first_item].val = p0; /* _first_item on <self:Alternative> */
RET_LABEL:;
}
/* method grammar$Alternative$elems_names for (self: Alternative): Array[nullable String] */
val* nitcc___nitcc__Alternative___elems_names(val* self) {
val* var /* : Array[nullable String] */;
val* var1 /* : Array[nullable String] */;
var1 = self->attrs[COLOR_nitcc__grammar__Alternative___elems_names].val; /* _elems_names on <self:Alternative> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elems_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 409);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Alternative$elems_names= for (self: Alternative, Array[nullable String]) */
void nitcc___nitcc__Alternative___elems_names_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Alternative___elems_names].val = p0; /* _elems_names on <self:Alternative> */
RET_LABEL:;
}
/* method grammar$Alternative$elemname for (self: Alternative, Int): String */
val* nitcc___nitcc__Alternative___elemname(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var1 /* : Array[nullable String] */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : Array[nullable String] */;
val* var11 /* : nullable Object */;
val* var_n /* var n: nullable String */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var15 /* : NativeArray[String] */;
static val* varonce14;
val* var16 /* : String */;
val* var17 /* : String */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Alternative__elems_names]))(self); /* elems_names on <self:Alternative>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_collection__Collection__length]))(var1); /* length on <var1:Array[nullable String]>*/
}
{
{ /* Inline kernel$Int$>= (var_i,var2) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var6 = var_i >= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__String);
} else {
var7 = varonce;
varonce = NULL;
}
var8 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var7)->values[0]=var8;
{
var9 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
var = var9;
goto RET_LABEL;
} else {
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Alternative__elems_names]))(self); /* elems_names on <self:Alternative>*/
}
{
var11 = ((val*(*)(val* self, long p0))(var10->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var10, var_i); /* [] on <var10:Array[nullable String]>*/
}
var_n = var11;
if (var_n == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
var13 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, ((val*)NULL)); /* == on <var_n:nullable String>*/
var12 = var13;
}
if (var12){
if (unlikely(varonce14==NULL)) {
var15 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__String);
} else {
var15 = varonce14;
varonce14 = NULL;
}
var16 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var15)->values[0]=var16;
{
var17 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce14 = var15;
var = var17;
goto RET_LABEL;
} else {
}
var = var_n;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Alternative$to_s for (self: Alternative): String */
val* nitcc___nitcc__Alternative___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : Production */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : Array[Element] */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Bool */;
val* var29 /* : nullable Bool */;
val* var30 /* : String */;
val* var31 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "::";
var6 = (val*)(2l<<2|1);
var7 = (val*)(2l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "=";
var14 = (val*)(1l<<2|1);
var15 = (val*)(1l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[3]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Alternative__prod]))(self); /* prod on <self:Alternative>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nitcc__grammar__Element__name]))(var18); /* name on <var18:Production>*/
}
((struct instance_core__NativeArray*)var1)->values[0]=var19;
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Alternative__name]))(self); /* name on <self:Alternative>*/
}
((struct instance_core__NativeArray*)var1)->values[2]=var20;
{
var21 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(self); /* elems on <self:Alternative>*/
}
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " ";
var26 = (val*)(1l<<2|1);
var27 = (val*)(1l<<2|1);
var28 = (val*)((long)(0)<<2|3);
var29 = (val*)((long)(0)<<2|3);
var25 = core__flat___CString___to_s_unsafe(var24, var26, var27, var28, var29);
var23 = var25;
varonce22 = var23;
}
{
var30 = ((val*(*)(val* self, val* p0, val* p1))(var21->class->vft[COLOR_core__abstract_text__Collection__join]))(var21, var23, ((val*)NULL)); /* join on <var21:Array[Element]>*/
}
((struct instance_core__NativeArray*)var1)->values[4]=var30;
{
var31 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Alternative$cname for (self: Alternative): String */
val* nitcc___nitcc__Alternative___cname(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "N";
var6 = (val*)(1l<<2|1);
var7 = (val*)(1l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Alternative__name]))(self); /* name on <self:Alternative>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__Text__to_cmangle]))(var10); /* to_cmangle on <var10:String>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var11;
{
var12 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Alternative$codes for (self: Alternative): nullable Array[Code] */
val* nitcc___nitcc__Alternative___codes(val* self) {
val* var /* : nullable Array[Code] */;
val* var1 /* : nullable Array[Code] */;
var1 = self->attrs[COLOR_nitcc__grammar__Alternative___codes].val; /* _codes on <self:Alternative> */
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Alternative$codes= for (self: Alternative, nullable Array[Code]) */
void nitcc___nitcc__Alternative___codes_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Alternative___codes].val = p0; /* _codes on <self:Alternative> */
RET_LABEL:;
}
/* method grammar$Alternative$trans for (self: Alternative): Bool */
short int nitcc___nitcc__Alternative___trans(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitcc__grammar__Alternative___trans].s; /* _trans on <self:Alternative> */
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Alternative$trans= for (self: Alternative, Bool) */
void nitcc___nitcc__Alternative___trans_61d(val* self, short int p0) {
self->attrs[COLOR_nitcc__grammar__Alternative___trans].s = p0; /* _trans on <self:Alternative> */
RET_LABEL:;
}
/* method grammar$Alternative$phony for (self: Alternative): Bool */
short int nitcc___nitcc__Alternative___phony(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitcc__grammar__Alternative___phony].s; /* _phony on <self:Alternative> */
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Alternative$phony= for (self: Alternative, Bool) */
void nitcc___nitcc__Alternative___phony_61d(val* self, short int p0) {
self->attrs[COLOR_nitcc__grammar__Alternative___phony].s = p0; /* _phony on <self:Alternative> */
RET_LABEL:;
}
/* method grammar$Alternative$make_codes for (self: Alternative) */
void nitcc___nitcc__Alternative___make_codes(val* self) {
val* var /* : nullable Array[Code] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Array[Code] */;
val* var_codes /* var codes: Array[Code] */;
val* var4 /* : Array[Element] */;
val* var_ /* var : Array[Element] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[Element] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_e /* var e: Element */;
val* var9 /* : CodePop */;
val* var10 /* : CodeNew */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(self); /* codes on <self:Alternative>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable Array[Code]>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var3 = NEW_core__Array(&type_core__Array__nitcc__Code);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Array[Code]>*/
}
var_codes = var3;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Alternative__codes_61d]))(self, var_codes); /* codes= on <self:Alternative>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(self); /* elems on <self:Alternative>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Element]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[Element]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[Element]>*/
}
var_e = var8;
var9 = NEW_nitcc__CodePop(&type_nitcc__CodePop);
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:CodePop>*/
}
{
((void(*)(val* self, val* p0))(var_codes->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_codes, var9); /* add on <var_codes:Array[Code]>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[Element]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[Element]>*/
}
var10 = NEW_nitcc__CodeNew(&type_nitcc__CodeNew);
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitcc__grammar__CodeNew__alt_61d]))(var10, self); /* alt= on <var10:CodeNew>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:CodeNew>*/
}
{
((void(*)(val* self, val* p0))(var_codes->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_codes, var10); /* add on <var_codes:Array[Code]>*/
}
RET_LABEL:;
}
/* method grammar$Alternative$init for (self: Alternative) */
void nitcc___nitcc__Alternative___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitcc___nitcc__Alternative___core__kernel__Object__init]))(self); /* init on <self:Alternative>*/
}
RET_LABEL:;
}
/* method grammar$CodePop$to_s for (self: CodePop): String */
val* nitcc___nitcc__CodePop___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "pop";
var4 = (val*)(3l<<2|1);
var5 = (val*)(3l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$CodeNew$alt for (self: CodeNew): Alternative */
val* nitcc___nitcc__CodeNew___alt(val* self) {
val* var /* : Alternative */;
val* var1 /* : Alternative */;
var1 = self->attrs[COLOR_nitcc__grammar__CodeNew___alt].val; /* _alt on <self:CodeNew> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _alt");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 465);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$CodeNew$alt= for (self: CodeNew, Alternative) */
void nitcc___nitcc__CodeNew___alt_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__CodeNew___alt].val = p0; /* _alt on <self:CodeNew> */
RET_LABEL:;
}
/* method grammar$CodeNew$to_s for (self: CodeNew): String */
val* nitcc___nitcc__CodeNew___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : Alternative */;
val* var19 /* : String */;
val* var20 /* : Alternative */;
val* var21 /* : Array[Element] */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "New ";
var6 = (val*)(4l<<2|1);
var7 = (val*)(4l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "/";
var14 = (val*)(1l<<2|1);
var15 = (val*)(1l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[2]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__CodeNew__alt]))(self); /* alt on <self:CodeNew>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_nitcc__grammar__Alternative__name]))(var18); /* name on <var18:Alternative>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__CodeNew__alt]))(self); /* alt on <self:CodeNew>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var20); /* elems on <var20:Alternative>*/
}
{
var22 = ((long(*)(val* self))(var21->class->vft[COLOR_core__abstract_collection__Collection__length]))(var21); /* length on <var21:Array[Element]>*/
}
var23 = core__flat___Int___core__abstract_text__Object__to_s(var22);
((struct instance_core__NativeArray*)var1)->values[3]=var23;
{
var24 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$CodeNew$init for (self: CodeNew) */
void nitcc___nitcc__CodeNew___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitcc___nitcc__CodeNew___core__kernel__Object__init]))(self); /* init on <self:CodeNew>*/
}
RET_LABEL:;
}
/* method grammar$CodeNull$to_s for (self: CodeNull): String */
val* nitcc___nitcc__CodeNull___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "null";
var4 = (val*)(4l<<2|1);
var5 = (val*)(4l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Element$name for (self: Element): String */
val* nitcc___nitcc__Element___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitcc__grammar__Element___name].val; /* _name on <self:Element> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 480);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Element$name= for (self: Element, String) */
void nitcc___nitcc__Element___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Element___name].val = p0; /* _name on <self:Element> */
RET_LABEL:;
}
/* method grammar$Element$to_s for (self: Element): String */
val* nitcc___nitcc__Element___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Element__name]))(self); /* name on <self:Element>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Element$acname_cache for (self: Element): nullable String */
val* nitcc___nitcc__Element___acname_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitcc__grammar__Element___acname_cache].val; /* _acname_cache on <self:Element> */
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Element$acname_cache= for (self: Element, nullable String) */
void nitcc___nitcc__Element___acname_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Element___acname_cache].val = p0; /* _acname_cache on <self:Element> */
RET_LABEL:;
}
/* method grammar$Element$cname for (self: Element): String */
val* nitcc___nitcc__Element___cname(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "N";
var6 = (val*)(1l<<2|1);
var7 = (val*)(1l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Element__name]))(self); /* name on <self:Element>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__Text__to_cmangle]))(var10); /* to_cmangle on <var10:String>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var11;
{
var12 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Element$acname for (self: Element): String */
val* nitcc___nitcc__Element___acname(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_res /* var res: nullable String */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Element__acname_cache]))(self); /* acname_cache on <self:Element>*/
}
var_res = var1;
if (var_res == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, ((val*)NULL)); /* == on <var_res:nullable String>*/
var2 = var3;
}
if (var2){
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "N";
var9 = (val*)(1l<<2|1);
var10 = (val*)(1l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Element>*/
}
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__Text__to_cmangle]))(var13); /* to_cmangle on <var13:String>*/
}
((struct instance_core__NativeArray*)var4)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
var_res = var15;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Element__acname_cache_61d]))(self, var_res); /* acname_cache= on <self:Element>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Element$acname= for (self: Element, String) */
void nitcc___nitcc__Element___acname_61d(val* self, val* p0) {
val* var_s /* var s: String */;
var_s = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Element__acname_cache_61d]))(self, var_s); /* acname_cache= on <self:Element>*/
}
RET_LABEL:;
}
/* method grammar$Element$init for (self: Element) */
void nitcc___nitcc__Element___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitcc___nitcc__Element___core__kernel__Object__init]))(self); /* init on <self:Element>*/
}
RET_LABEL:;
}
/* method grammar$Token$shifts for (self: Token): ArraySet[LRState] */
val* nitcc___nitcc__Token___shifts(val* self) {
val* var /* : ArraySet[LRState] */;
val* var1 /* : ArraySet[LRState] */;
var1 = self->attrs[COLOR_nitcc__grammar__Token___shifts].val; /* _shifts on <self:Token> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _shifts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 506);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Token$shifts= for (self: Token, ArraySet[LRState]) */
void nitcc___nitcc__Token___shifts_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Token___shifts].val = p0; /* _shifts on <self:Token> */
RET_LABEL:;
}
/* method grammar$Token$reduces for (self: Token): ArraySet[LRState] */
val* nitcc___nitcc__Token___reduces(val* self) {
val* var /* : ArraySet[LRState] */;
val* var1 /* : ArraySet[LRState] */;
var1 = self->attrs[COLOR_nitcc__grammar__Token___reduces].val; /* _reduces on <self:Token> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _reduces");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 508);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Token$reduces= for (self: Token, ArraySet[LRState]) */
void nitcc___nitcc__Token___reduces_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Token___reduces].val = p0; /* _reduces on <self:Token> */
RET_LABEL:;
}
/* method grammar$LRAutomaton$grammar for (self: LRAutomaton): Gram */
val* nitcc___nitcc__LRAutomaton___grammar(val* self) {
val* var /* : Gram */;
val* var1 /* : Gram */;
var1 = self->attrs[COLOR_nitcc__grammar__LRAutomaton___grammar].val; /* _grammar on <self:LRAutomaton> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _grammar");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 516);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRAutomaton$grammar= for (self: LRAutomaton, Gram) */
void nitcc___nitcc__LRAutomaton___grammar_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRAutomaton___grammar].val = p0; /* _grammar on <self:LRAutomaton> */
RET_LABEL:;
}
/* method grammar$LRAutomaton$states for (self: LRAutomaton): Array[LRState] */
val* nitcc___nitcc__LRAutomaton___states(val* self) {
val* var /* : Array[LRState] */;
val* var1 /* : Array[LRState] */;
var1 = self->attrs[COLOR_nitcc__grammar__LRAutomaton___states].val; /* _states on <self:LRAutomaton> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _states");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 519);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRAutomaton$states= for (self: LRAutomaton, Array[LRState]) */
void nitcc___nitcc__LRAutomaton___states_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRAutomaton___states].val = p0; /* _states on <self:LRAutomaton> */
RET_LABEL:;
}
/* method grammar$LRAutomaton$pretty for (self: LRAutomaton): String */
val* nitcc___nitcc__LRAutomaton___pretty(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
val* var19 /* : Array[LRState] */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : Array[LRState] */;
val* var_ /* var : Array[LRState] */;
val* var24 /* : Iterator[nullable Object] */;
val* var_25 /* var : IndexedIterator[LRState] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_s /* var s: LRState */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Bool */;
val* var45 /* : nullable Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Bool */;
val* var65 /* : nullable Bool */;
val* var66 /* : HashSet[Item] */;
val* var_67 /* var : HashSet[Item] */;
val* var68 /* : Iterator[nullable Object] */;
val* var_69 /* var : Iterator[Item] */;
short int var70 /* : Bool */;
val* var72 /* : nullable Object */;
val* var_i /* var i: Item */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Bool */;
val* var90 /* : nullable Bool */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var93 /* : nullable Element */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
val* var97 /* : Set[Item] */;
val* var_98 /* var : Set[Item] */;
val* var99 /* : Iterator[nullable Object] */;
val* var_100 /* var : Iterator[Item] */;
short int var101 /* : Bool */;
val* var103 /* : nullable Object */;
val* var_i2 /* var i2: Item */;
val* var105 /* : NativeArray[String] */;
static val* varonce104;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Bool */;
val* var113 /* : nullable Bool */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Int */;
val* var120 /* : nullable Bool */;
val* var121 /* : nullable Bool */;
val* var122 /* : String */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : CString */;
val* var127 /* : String */;
val* var128 /* : nullable Int */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Bool */;
val* var131 /* : nullable Bool */;
val* var132 /* : HashSet[Item] */;
val* var_133 /* var : HashSet[Item] */;
val* var134 /* : Iterator[nullable Object] */;
val* var_135 /* var : Iterator[Item] */;
short int var136 /* : Bool */;
val* var138 /* : nullable Object */;
val* var_i139 /* var i: Item */;
val* var140 /* : HashSet[Item] */;
short int var141 /* : Bool */;
val* var144 /* : NativeArray[String] */;
static val* varonce143;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Bool */;
val* var152 /* : nullable Bool */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : CString */;
val* var156 /* : String */;
val* var157 /* : nullable Int */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Bool */;
val* var160 /* : nullable Bool */;
val* var161 /* : String */;
val* var162 /* : String */;
val* var163 /* : nullable Element */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
val* var166 /* : Set[Item] */;
val* var_167 /* var : Set[Item] */;
val* var168 /* : Iterator[nullable Object] */;
val* var_169 /* var : Iterator[Item] */;
short int var170 /* : Bool */;
val* var172 /* : nullable Object */;
val* var_i2173 /* var i2: Item */;
val* var175 /* : NativeArray[String] */;
static val* varonce174;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Bool */;
val* var183 /* : nullable Bool */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : CString */;
val* var187 /* : String */;
val* var188 /* : nullable Int */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Bool */;
val* var191 /* : nullable Bool */;
val* var192 /* : String */;
val* var193 /* : String */;
val* var195 /* : NativeArray[String] */;
static val* varonce194;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : CString */;
val* var199 /* : String */;
val* var200 /* : nullable Int */;
val* var201 /* : nullable Int */;
val* var202 /* : nullable Bool */;
val* var203 /* : nullable Bool */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : CString */;
val* var207 /* : String */;
val* var208 /* : nullable Int */;
val* var209 /* : nullable Int */;
val* var210 /* : nullable Bool */;
val* var211 /* : nullable Bool */;
val* var212 /* : Array[LRTransition] */;
long var213 /* : Int */;
val* var214 /* : String */;
val* var215 /* : String */;
val* var216 /* : Array[LRTransition] */;
val* var_217 /* var : Array[LRTransition] */;
val* var218 /* : Iterator[nullable Object] */;
val* var_219 /* var : IndexedIterator[LRTransition] */;
short int var220 /* : Bool */;
val* var222 /* : nullable Object */;
val* var_t /* var t: LRTransition */;
val* var224 /* : NativeArray[String] */;
static val* varonce223;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : CString */;
val* var228 /* : String */;
val* var229 /* : nullable Int */;
val* var230 /* : nullable Int */;
val* var231 /* : nullable Bool */;
val* var232 /* : nullable Bool */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
val* var237 /* : nullable Int */;
val* var238 /* : nullable Int */;
val* var239 /* : nullable Bool */;
val* var240 /* : nullable Bool */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Int */;
val* var247 /* : nullable Bool */;
val* var248 /* : nullable Bool */;
val* var249 /* : Element */;
val* var250 /* : String */;
val* var251 /* : LRState */;
long var252 /* : Int */;
val* var253 /* : String */;
val* var254 /* : String */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : CString */;
val* var258 /* : String */;
val* var259 /* : nullable Int */;
val* var260 /* : nullable Int */;
val* var261 /* : nullable Bool */;
val* var262 /* : nullable Bool */;
short int var263 /* : Bool */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : CString */;
val* var267 /* : String */;
val* var268 /* : nullable Int */;
val* var269 /* : nullable Int */;
val* var270 /* : nullable Bool */;
val* var271 /* : nullable Bool */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : CString */;
val* var275 /* : String */;
val* var276 /* : nullable Int */;
val* var277 /* : nullable Int */;
val* var278 /* : nullable Bool */;
val* var279 /* : nullable Bool */;
val* var280 /* : HashMap[Token, Set[Item]] */;
val* var_281 /* var : HashMap[Token, Set[Item]] */;
val* var282 /* : MapIterator[nullable Object, nullable Object] */;
val* var_283 /* var : MapIterator[Token, Set[Item]] */;
short int var284 /* : Bool */;
val* var286 /* : nullable Object */;
val* var_t287 /* var t: Token */;
val* var288 /* : nullable Object */;
val* var_a /* var a: Set[Item] */;
long var289 /* : Int */;
short int var290 /* : Bool */;
short int var292 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var293 /* : Bool */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : CString */;
val* var297 /* : String */;
val* var298 /* : nullable Int */;
val* var299 /* : nullable Int */;
val* var300 /* : nullable Bool */;
val* var301 /* : nullable Bool */;
val* var302 /* : ArraySet[Token] */;
short int var303 /* : Bool */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : CString */;
val* var307 /* : String */;
val* var308 /* : nullable Int */;
val* var309 /* : nullable Int */;
val* var310 /* : nullable Bool */;
val* var311 /* : nullable Bool */;
val* var312 /* : ArraySet[Token] */;
short int var313 /* : Bool */;
short int var314 /* : Bool */;
val* var316 /* : NativeArray[String] */;
static val* varonce315;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : CString */;
val* var320 /* : String */;
val* var321 /* : nullable Int */;
val* var322 /* : nullable Int */;
val* var323 /* : nullable Bool */;
val* var324 /* : nullable Bool */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : CString */;
val* var328 /* : String */;
val* var329 /* : nullable Int */;
val* var330 /* : nullable Int */;
val* var331 /* : nullable Bool */;
val* var332 /* : nullable Bool */;
val* var333 /* : ArraySet[Token] */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : CString */;
val* var337 /* : String */;
val* var338 /* : nullable Int */;
val* var339 /* : nullable Int */;
val* var340 /* : nullable Bool */;
val* var341 /* : nullable Bool */;
val* var342 /* : String */;
val* var343 /* : String */;
val* var344 /* : ArraySet[Alternative] */;
val* var_345 /* var : ArraySet[Alternative] */;
val* var346 /* : Iterator[nullable Object] */;
val* var_347 /* var : Iterator[Alternative] */;
short int var348 /* : Bool */;
val* var350 /* : nullable Object */;
val* var_r /* var r: Alternative */;
val* var352 /* : NativeArray[String] */;
static val* varonce351;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : CString */;
val* var356 /* : String */;
val* var357 /* : nullable Int */;
val* var358 /* : nullable Int */;
val* var359 /* : nullable Bool */;
val* var360 /* : nullable Bool */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : CString */;
val* var364 /* : String */;
val* var365 /* : nullable Int */;
val* var366 /* : nullable Int */;
val* var367 /* : nullable Bool */;
val* var368 /* : nullable Bool */;
val* var369 /* : String */;
val* var370 /* : String */;
val* var371 /* : String */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_res = var1;
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "* LRAutomaton: ";
var7 = (val*)(15l<<2|1);
var8 = (val*)(15l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[0]=var4;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = " states\n";
var15 = (val*)(8l<<2|1);
var16 = (val*)(8l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var2)->values[2]=var12;
} else {
var2 = varonce;
varonce = NULL;
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRAutomaton__states]))(self); /* states on <self:LRAutomaton>*/
}
{
var20 = ((long(*)(val* self))(var19->class->vft[COLOR_core__abstract_collection__Collection__length]))(var19); /* length on <var19:Array[LRState]>*/
}
var21 = core__flat___Int___core__abstract_text__Object__to_s(var20);
((struct instance_core__NativeArray*)var2)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var22); /* add on <var_res:Array[String]>*/
}
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRAutomaton__states]))(self); /* states on <self:LRAutomaton>*/
}
var_ = var23;
{
var24 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[LRState]>*/
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:IndexedIterator[LRState]>*/
}
if (var26){
} else {
goto BREAK_label;
}
{
var27 = ((val*(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:IndexedIterator[LRState]>*/
}
var_s = var27;
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "s";
var34 = (val*)(1l<<2|1);
var35 = (val*)(1l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[0]=var31;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " ";
var42 = (val*)(1l<<2|1);
var43 = (val*)(1l<<2|1);
var44 = (val*)((long)(0)<<2|3);
var45 = (val*)((long)(0)<<2|3);
var41 = core__flat___CString___to_s_unsafe(var40, var42, var43, var44, var45);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var29)->values[2]=var39;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "\n";
var50 = (val*)(1l<<2|1);
var51 = (val*)(1l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var29)->values[4]=var47;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var54 = ((long(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__number]))(var_s); /* number on <var_s:LRState>*/
}
var55 = core__flat___Int___core__abstract_text__Object__to_s(var54);
((struct instance_core__NativeArray*)var29)->values[1]=var55;
{
var56 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__name]))(var_s); /* name on <var_s:LRState>*/
}
((struct instance_core__NativeArray*)var29)->values[3]=var56;
{
var57 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var57); /* add on <var_res:Array[String]>*/
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "\tCORE\n";
var62 = (val*)(6l<<2|1);
var63 = (val*)(6l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var59); /* add on <var_res:Array[String]>*/
}
{
var66 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__core]))(var_s); /* core on <var_s:LRState>*/
}
var_67 = var66;
{
var68 = ((val*(*)(val* self))(var_67->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_67); /* iterator on <var_67:HashSet[Item]>*/
}
var_69 = var68;
for(;;) {
{
var70 = ((short int(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_69); /* is_ok on <var_69:Iterator[Item]>*/
}
if (var70){
} else {
goto BREAK_label71;
}
{
var72 = ((val*(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_69); /* item on <var_69:Iterator[Item]>*/
}
var_i = var72;
if (unlikely(varonce73==NULL)) {
var74 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "\t\t";
var79 = (val*)(2l<<2|1);
var80 = (val*)(2l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[0]=var76;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "\n";
var87 = (val*)(1l<<2|1);
var88 = (val*)(1l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var74)->values[2]=var84;
} else {
var74 = varonce73;
varonce73 = NULL;
}
{
var91 = ((val*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i); /* to_s on <var_i:Item>*/
}
((struct instance_core__NativeArray*)var74)->values[1]=var91;
{
var92 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var92); /* add on <var_res:Array[String]>*/
}
{
var93 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nitcc__grammar__Item__next]))(var_i); /* next on <var_i:Item>*/
}
if (var93 == NULL) {
var94 = 0; /* is null */
} else {
var94 = 1; /* arg is null and recv is not */
}
if (0) {
var95 = ((short int(*)(val* self, val* p0))(var93->class->vft[COLOR_core__kernel__Object___33d_61d]))(var93, ((val*)NULL)); /* != on <var93:nullable Element>*/
var94 = var95;
}
if (var94){
goto BREAK_label96;
} else {
}
{
var97 = ((val*(*)(val* self, val* p0))(var_s->class->vft[COLOR_nitcc__grammar__LRState__lookahead]))(var_s, var_i); /* lookahead on <var_s:LRState>*/
}
var_98 = var97;
{
var99 = ((val*(*)(val* self))((((long)var_98&3)?class_info[((long)var_98&3)]:var_98->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_98); /* iterator on <var_98:Set[Item]>*/
}
var_100 = var99;
for(;;) {
{
var101 = ((short int(*)(val* self))((((long)var_100&3)?class_info[((long)var_100&3)]:var_100->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_100); /* is_ok on <var_100:Iterator[Item]>*/
}
if (var101){
} else {
goto BREAK_label102;
}
{
var103 = ((val*(*)(val* self))((((long)var_100&3)?class_info[((long)var_100&3)]:var_100->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_100); /* item on <var_100:Iterator[Item]>*/
}
var_i2 = var103;
if (unlikely(varonce104==NULL)) {
var105 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "\t\t\t";
var110 = (val*)(3l<<2|1);
var111 = (val*)(3l<<2|1);
var112 = (val*)((long)(0)<<2|3);
var113 = (val*)((long)(0)<<2|3);
var109 = core__flat___CString___to_s_unsafe(var108, var110, var111, var112, var113);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var105)->values[0]=var107;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "\n";
var118 = (val*)(1l<<2|1);
var119 = (val*)(1l<<2|1);
var120 = (val*)((long)(0)<<2|3);
var121 = (val*)((long)(0)<<2|3);
var117 = core__flat___CString___to_s_unsafe(var116, var118, var119, var120, var121);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var105)->values[2]=var115;
} else {
var105 = varonce104;
varonce104 = NULL;
}
{
var122 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i2); /* to_s on <var_i2:Item>*/
}
((struct instance_core__NativeArray*)var105)->values[1]=var122;
{
var123 = ((val*(*)(val* self))(var105->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var105); /* native_to_s on <var105:NativeArray[String]>*/
}
varonce104 = var105;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var123); /* add on <var_res:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_100&3)?class_info[((long)var_100&3)]:var_100->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_100); /* next on <var_100:Iterator[Item]>*/
}
}
BREAK_label102: (void)0;
{
((void(*)(val* self))((((long)var_100&3)?class_info[((long)var_100&3)]:var_100->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_100); /* finish on <var_100:Iterator[Item]>*/
}
BREAK_label96: (void)0;
{
((void(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_69); /* next on <var_69:Iterator[Item]>*/
}
}
BREAK_label71: (void)0;
{
((void(*)(val* self))((((long)var_69&3)?class_info[((long)var_69&3)]:var_69->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_69); /* finish on <var_69:Iterator[Item]>*/
}
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "\tOTHER ITEMS\n";
var128 = (val*)(13l<<2|1);
var129 = (val*)(13l<<2|1);
var130 = (val*)((long)(0)<<2|3);
var131 = (val*)((long)(0)<<2|3);
var127 = core__flat___CString___to_s_unsafe(var126, var128, var129, var130, var131);
var125 = var127;
varonce124 = var125;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var125); /* add on <var_res:Array[String]>*/
}
{
var132 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__items]))(var_s); /* items on <var_s:LRState>*/
}
var_133 = var132;
{
var134 = ((val*(*)(val* self))(var_133->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_133); /* iterator on <var_133:HashSet[Item]>*/
}
var_135 = var134;
for(;;) {
{
var136 = ((short int(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_135); /* is_ok on <var_135:Iterator[Item]>*/
}
if (var136){
} else {
goto BREAK_label137;
}
{
var138 = ((val*(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_135); /* item on <var_135:Iterator[Item]>*/
}
var_i139 = var138;
{
var140 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__core]))(var_s); /* core on <var_s:LRState>*/
}
{
var141 = ((short int(*)(val* self, val* p0))(var140->class->vft[COLOR_core__abstract_collection__Collection__has]))(var140, var_i139); /* has on <var140:HashSet[Item]>*/
}
if (var141){
goto BREAK_label142;
} else {
}
if (unlikely(varonce143==NULL)) {
var144 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "\t\t";
var149 = (val*)(2l<<2|1);
var150 = (val*)(2l<<2|1);
var151 = (val*)((long)(0)<<2|3);
var152 = (val*)((long)(0)<<2|3);
var148 = core__flat___CString___to_s_unsafe(var147, var149, var150, var151, var152);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var144)->values[0]=var146;
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "\n";
var157 = (val*)(1l<<2|1);
var158 = (val*)(1l<<2|1);
var159 = (val*)((long)(0)<<2|3);
var160 = (val*)((long)(0)<<2|3);
var156 = core__flat___CString___to_s_unsafe(var155, var157, var158, var159, var160);
var154 = var156;
varonce153 = var154;
}
((struct instance_core__NativeArray*)var144)->values[2]=var154;
} else {
var144 = varonce143;
varonce143 = NULL;
}
{
var161 = ((val*(*)(val* self))(var_i139->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i139); /* to_s on <var_i139:Item>*/
}
((struct instance_core__NativeArray*)var144)->values[1]=var161;
{
var162 = ((val*(*)(val* self))(var144->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var144); /* native_to_s on <var144:NativeArray[String]>*/
}
varonce143 = var144;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var162); /* add on <var_res:Array[String]>*/
}
{
var163 = ((val*(*)(val* self))(var_i139->class->vft[COLOR_nitcc__grammar__Item__next]))(var_i139); /* next on <var_i139:Item>*/
}
if (var163 == NULL) {
var164 = 0; /* is null */
} else {
var164 = 1; /* arg is null and recv is not */
}
if (0) {
var165 = ((short int(*)(val* self, val* p0))(var163->class->vft[COLOR_core__kernel__Object___33d_61d]))(var163, ((val*)NULL)); /* != on <var163:nullable Element>*/
var164 = var165;
}
if (var164){
goto BREAK_label142;
} else {
}
{
var166 = ((val*(*)(val* self, val* p0))(var_s->class->vft[COLOR_nitcc__grammar__LRState__lookahead]))(var_s, var_i139); /* lookahead on <var_s:LRState>*/
}
var_167 = var166;
{
var168 = ((val*(*)(val* self))((((long)var_167&3)?class_info[((long)var_167&3)]:var_167->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_167); /* iterator on <var_167:Set[Item]>*/
}
var_169 = var168;
for(;;) {
{
var170 = ((short int(*)(val* self))((((long)var_169&3)?class_info[((long)var_169&3)]:var_169->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_169); /* is_ok on <var_169:Iterator[Item]>*/
}
if (var170){
} else {
goto BREAK_label171;
}
{
var172 = ((val*(*)(val* self))((((long)var_169&3)?class_info[((long)var_169&3)]:var_169->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_169); /* item on <var_169:Iterator[Item]>*/
}
var_i2173 = var172;
if (unlikely(varonce174==NULL)) {
var175 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "\t\t\t";
var180 = (val*)(3l<<2|1);
var181 = (val*)(3l<<2|1);
var182 = (val*)((long)(0)<<2|3);
var183 = (val*)((long)(0)<<2|3);
var179 = core__flat___CString___to_s_unsafe(var178, var180, var181, var182, var183);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var175)->values[0]=var177;
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "\n";
var188 = (val*)(1l<<2|1);
var189 = (val*)(1l<<2|1);
var190 = (val*)((long)(0)<<2|3);
var191 = (val*)((long)(0)<<2|3);
var187 = core__flat___CString___to_s_unsafe(var186, var188, var189, var190, var191);
var185 = var187;
varonce184 = var185;
}
((struct instance_core__NativeArray*)var175)->values[2]=var185;
} else {
var175 = varonce174;
varonce174 = NULL;
}
{
var192 = ((val*(*)(val* self))(var_i2173->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i2173); /* to_s on <var_i2173:Item>*/
}
((struct instance_core__NativeArray*)var175)->values[1]=var192;
{
var193 = ((val*(*)(val* self))(var175->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var175); /* native_to_s on <var175:NativeArray[String]>*/
}
varonce174 = var175;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var193); /* add on <var_res:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_169&3)?class_info[((long)var_169&3)]:var_169->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_169); /* next on <var_169:Iterator[Item]>*/
}
}
BREAK_label171: (void)0;
{
((void(*)(val* self))((((long)var_169&3)?class_info[((long)var_169&3)]:var_169->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_169); /* finish on <var_169:Iterator[Item]>*/
}
BREAK_label142: (void)0;
{
((void(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_135); /* next on <var_135:Iterator[Item]>*/
}
}
BREAK_label137: (void)0;
{
((void(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_135); /* finish on <var_135:Iterator[Item]>*/
}
if (unlikely(varonce194==NULL)) {
var195 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "\tTRANSITIONS ";
var200 = (val*)(13l<<2|1);
var201 = (val*)(13l<<2|1);
var202 = (val*)((long)(0)<<2|3);
var203 = (val*)((long)(0)<<2|3);
var199 = core__flat___CString___to_s_unsafe(var198, var200, var201, var202, var203);
var197 = var199;
varonce196 = var197;
}
((struct instance_core__NativeArray*)var195)->values[0]=var197;
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = "\n";
var208 = (val*)(1l<<2|1);
var209 = (val*)(1l<<2|1);
var210 = (val*)((long)(0)<<2|3);
var211 = (val*)((long)(0)<<2|3);
var207 = core__flat___CString___to_s_unsafe(var206, var208, var209, var210, var211);
var205 = var207;
varonce204 = var205;
}
((struct instance_core__NativeArray*)var195)->values[2]=var205;
} else {
var195 = varonce194;
varonce194 = NULL;
}
{
var212 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__outs]))(var_s); /* outs on <var_s:LRState>*/
}
{
var213 = ((long(*)(val* self))(var212->class->vft[COLOR_core__abstract_collection__Collection__length]))(var212); /* length on <var212:Array[LRTransition]>*/
}
var214 = core__flat___Int___core__abstract_text__Object__to_s(var213);
((struct instance_core__NativeArray*)var195)->values[1]=var214;
{
var215 = ((val*(*)(val* self))(var195->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var195); /* native_to_s on <var195:NativeArray[String]>*/
}
varonce194 = var195;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var215); /* add on <var_res:Array[String]>*/
}
{
var216 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__outs]))(var_s); /* outs on <var_s:LRState>*/
}
var_217 = var216;
{
var218 = ((val*(*)(val* self))(var_217->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_217); /* iterator on <var_217:Array[LRTransition]>*/
}
var_219 = var218;
for(;;) {
{
var220 = ((short int(*)(val* self))((((long)var_219&3)?class_info[((long)var_219&3)]:var_219->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_219); /* is_ok on <var_219:IndexedIterator[LRTransition]>*/
}
if (var220){
} else {
goto BREAK_label221;
}
{
var222 = ((val*(*)(val* self))((((long)var_219&3)?class_info[((long)var_219&3)]:var_219->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_219); /* item on <var_219:IndexedIterator[LRTransition]>*/
}
var_t = var222;
if (unlikely(varonce223==NULL)) {
var224 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = "\t\t";
var229 = (val*)(2l<<2|1);
var230 = (val*)(2l<<2|1);
var231 = (val*)((long)(0)<<2|3);
var232 = (val*)((long)(0)<<2|3);
var228 = core__flat___CString___to_s_unsafe(var227, var229, var230, var231, var232);
var226 = var228;
varonce225 = var226;
}
((struct instance_core__NativeArray*)var224)->values[0]=var226;
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = " |-> s";
var237 = (val*)(6l<<2|1);
var238 = (val*)(6l<<2|1);
var239 = (val*)((long)(0)<<2|3);
var240 = (val*)((long)(0)<<2|3);
var236 = core__flat___CString___to_s_unsafe(var235, var237, var238, var239, var240);
var234 = var236;
varonce233 = var234;
}
((struct instance_core__NativeArray*)var224)->values[2]=var234;
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "\n";
var245 = (val*)(1l<<2|1);
var246 = (val*)(1l<<2|1);
var247 = (val*)((long)(0)<<2|3);
var248 = (val*)((long)(0)<<2|3);
var244 = core__flat___CString___to_s_unsafe(var243, var245, var246, var247, var248);
var242 = var244;
varonce241 = var242;
}
((struct instance_core__NativeArray*)var224)->values[4]=var242;
} else {
var224 = varonce223;
varonce223 = NULL;
}
{
var249 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitcc__grammar__LRTransition__elem]))(var_t); /* elem on <var_t:LRTransition>*/
}
{
var250 = ((val*(*)(val* self))(var249->class->vft[COLOR_core__abstract_text__Object__to_s]))(var249); /* to_s on <var249:Element>*/
}
((struct instance_core__NativeArray*)var224)->values[1]=var250;
{
var251 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitcc__grammar__LRTransition__to]))(var_t); /* to on <var_t:LRTransition>*/
}
{
var252 = ((long(*)(val* self))(var251->class->vft[COLOR_nitcc__grammar__LRState__number]))(var251); /* number on <var251:LRState>*/
}
var253 = core__flat___Int___core__abstract_text__Object__to_s(var252);
((struct instance_core__NativeArray*)var224)->values[3]=var253;
{
var254 = ((val*(*)(val* self))(var224->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var224); /* native_to_s on <var224:NativeArray[String]>*/
}
varonce223 = var224;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var254); /* add on <var_res:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_219&3)?class_info[((long)var_219&3)]:var_219->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_219); /* next on <var_219:IndexedIterator[LRTransition]>*/
}
}
BREAK_label221: (void)0;
{
((void(*)(val* self))((((long)var_219&3)?class_info[((long)var_219&3)]:var_219->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_219); /* finish on <var_219:IndexedIterator[LRTransition]>*/
}
if (likely(varonce255!=NULL)) {
var256 = varonce255;
} else {
var257 = "\tACTIONS\n";
var259 = (val*)(9l<<2|1);
var260 = (val*)(9l<<2|1);
var261 = (val*)((long)(0)<<2|3);
var262 = (val*)((long)(0)<<2|3);
var258 = core__flat___CString___to_s_unsafe(var257, var259, var260, var261, var262);
var256 = var258;
varonce255 = var256;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var256); /* add on <var_res:Array[String]>*/
}
{
var263 = ((short int(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__is_lr0]))(var_s); /* is_lr0 on <var_s:LRState>*/
}
if (var263){
if (likely(varonce264!=NULL)) {
var265 = varonce264;
} else {
var266 = "\t\tSTATE LR0\n";
var268 = (val*)(12l<<2|1);
var269 = (val*)(12l<<2|1);
var270 = (val*)((long)(0)<<2|3);
var271 = (val*)((long)(0)<<2|3);
var267 = core__flat___CString___to_s_unsafe(var266, var268, var269, var270, var271);
var265 = var267;
varonce264 = var265;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var265); /* add on <var_res:Array[String]>*/
}
} else {
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = "\t\tSTATE SLR\n";
var276 = (val*)(12l<<2|1);
var277 = (val*)(12l<<2|1);
var278 = (val*)((long)(0)<<2|3);
var279 = (val*)((long)(0)<<2|3);
var275 = core__flat___CString___to_s_unsafe(var274, var276, var277, var278, var279);
var273 = var275;
varonce272 = var273;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var273); /* add on <var_res:Array[String]>*/
}
{
var280 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__guarded_reduce]))(var_s); /* guarded_reduce on <var_s:LRState>*/
}
var_281 = var280;
{
var282 = ((val*(*)(val* self))(var_281->class->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_281); /* iterator on <var_281:HashMap[Token, Set[Item]]>*/
}
var_283 = var282;
for(;;) {
{
var284 = ((short int(*)(val* self))((((long)var_283&3)?class_info[((long)var_283&3)]:var_283->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_283); /* is_ok on <var_283:MapIterator[Token, Set[Item]]>*/
}
if (var284){
} else {
goto BREAK_label285;
}
{
var286 = ((val*(*)(val* self))((((long)var_283&3)?class_info[((long)var_283&3)]:var_283->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_283); /* key on <var_283:MapIterator[Token, Set[Item]]>*/
}
var_t287 = var286;
{
var288 = ((val*(*)(val* self))((((long)var_283&3)?class_info[((long)var_283&3)]:var_283->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_283); /* item on <var_283:MapIterator[Token, Set[Item]]>*/
}
var_a = var288;
{
var289 = ((long(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_a); /* length on <var_a:Set[Item]>*/
}
{
{ /* Inline kernel$Int$> (var289,1l) on <var289:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var292 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var292)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var293 = var289 > 1l;
var290 = var293;
goto RET_LABEL291;
RET_LABEL291:(void)0;
}
}
if (var290){
if (likely(varonce294!=NULL)) {
var295 = varonce294;
} else {
var296 = "\t\t/!\\ REDUCE/REDUCE CONFLICT\n";
var298 = (val*)(29l<<2|1);
var299 = (val*)(29l<<2|1);
var300 = (val*)((long)(0)<<2|3);
var301 = (val*)((long)(0)<<2|3);
var297 = core__flat___CString___to_s_unsafe(var296, var298, var299, var300, var301);
var295 = var297;
varonce294 = var295;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var295); /* add on <var_res:Array[String]>*/
}
goto BREAK_label285;
} else {
{
var302 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__shifts]))(var_s); /* shifts on <var_s:LRState>*/
}
{
var303 = ((short int(*)(val* self, val* p0))(var302->class->vft[COLOR_core__abstract_collection__Collection__has]))(var302, var_t287); /* has on <var302:ArraySet[Token]>*/
}
if (var303){
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "\t\t/!\\ SHIFT/REDUCE CONFLICT\n";
var308 = (val*)(28l<<2|1);
var309 = (val*)(28l<<2|1);
var310 = (val*)((long)(0)<<2|3);
var311 = (val*)((long)(0)<<2|3);
var307 = core__flat___CString___to_s_unsafe(var306, var308, var309, var310, var311);
var305 = var307;
varonce304 = var305;
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var305); /* add on <var_res:Array[String]>*/
}
goto BREAK_label285;
} else {
}
}
{
((void(*)(val* self))((((long)var_283&3)?class_info[((long)var_283&3)]:var_283->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_283); /* next on <var_283:MapIterator[Token, Set[Item]]>*/
}
}
BREAK_label285: (void)0;
{
((void(*)(val* self))((((long)var_283&3)?class_info[((long)var_283&3)]:var_283->class)->vft[COLOR_core__abstract_collection__MapIterator__finish]))(var_283); /* finish on <var_283:MapIterator[Token, Set[Item]]>*/
}
}
{
var312 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__shifts]))(var_s); /* shifts on <var_s:LRState>*/
}
{
var313 = ((short int(*)(val* self))(var312->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var312); /* is_empty on <var312:ArraySet[Token]>*/
}
var314 = !var313;
if (var314){
if (unlikely(varonce315==NULL)) {
var316 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce317!=NULL)) {
var318 = varonce317;
} else {
var319 = "\t\tSHIFT ";
var321 = (val*)(8l<<2|1);
var322 = (val*)(8l<<2|1);
var323 = (val*)((long)(0)<<2|3);
var324 = (val*)((long)(0)<<2|3);
var320 = core__flat___CString___to_s_unsafe(var319, var321, var322, var323, var324);
var318 = var320;
varonce317 = var318;
}
((struct instance_core__NativeArray*)var316)->values[0]=var318;
if (likely(varonce325!=NULL)) {
var326 = varonce325;
} else {
var327 = "\n";
var329 = (val*)(1l<<2|1);
var330 = (val*)(1l<<2|1);
var331 = (val*)((long)(0)<<2|3);
var332 = (val*)((long)(0)<<2|3);
var328 = core__flat___CString___to_s_unsafe(var327, var329, var330, var331, var332);
var326 = var328;
varonce325 = var326;
}
((struct instance_core__NativeArray*)var316)->values[2]=var326;
} else {
var316 = varonce315;
varonce315 = NULL;
}
{
var333 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__shifts]))(var_s); /* shifts on <var_s:LRState>*/
}
if (likely(varonce334!=NULL)) {
var335 = varonce334;
} else {
var336 = " ";
var338 = (val*)(1l<<2|1);
var339 = (val*)(1l<<2|1);
var340 = (val*)((long)(0)<<2|3);
var341 = (val*)((long)(0)<<2|3);
var337 = core__flat___CString___to_s_unsafe(var336, var338, var339, var340, var341);
var335 = var337;
varonce334 = var335;
}
{
var342 = ((val*(*)(val* self, val* p0, val* p1))(var333->class->vft[COLOR_core__abstract_text__Collection__join]))(var333, var335, ((val*)NULL)); /* join on <var333:ArraySet[Token]>*/
}
((struct instance_core__NativeArray*)var316)->values[1]=var342;
{
var343 = ((val*(*)(val* self))(var316->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var316); /* native_to_s on <var316:NativeArray[String]>*/
}
varonce315 = var316;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var343); /* add on <var_res:Array[String]>*/
}
} else {
}
{
var344 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__reduces]))(var_s); /* reduces on <var_s:LRState>*/
}
var_345 = var344;
{
var346 = ((val*(*)(val* self))(var_345->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_345); /* iterator on <var_345:ArraySet[Alternative]>*/
}
var_347 = var346;
for(;;) {
{
var348 = ((short int(*)(val* self))((((long)var_347&3)?class_info[((long)var_347&3)]:var_347->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_347); /* is_ok on <var_347:Iterator[Alternative]>*/
}
if (var348){
} else {
goto BREAK_label349;
}
{
var350 = ((val*(*)(val* self))((((long)var_347&3)?class_info[((long)var_347&3)]:var_347->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_347); /* item on <var_347:Iterator[Alternative]>*/
}
var_r = var350;
if (unlikely(varonce351==NULL)) {
var352 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce353!=NULL)) {
var354 = varonce353;
} else {
var355 = "\t\tREDUCE ";
var357 = (val*)(9l<<2|1);
var358 = (val*)(9l<<2|1);
var359 = (val*)((long)(0)<<2|3);
var360 = (val*)((long)(0)<<2|3);
var356 = core__flat___CString___to_s_unsafe(var355, var357, var358, var359, var360);
var354 = var356;
varonce353 = var354;
}
((struct instance_core__NativeArray*)var352)->values[0]=var354;
if (likely(varonce361!=NULL)) {
var362 = varonce361;
} else {
var363 = "\n";
var365 = (val*)(1l<<2|1);
var366 = (val*)(1l<<2|1);
var367 = (val*)((long)(0)<<2|3);
var368 = (val*)((long)(0)<<2|3);
var364 = core__flat___CString___to_s_unsafe(var363, var365, var366, var367, var368);
var362 = var364;
varonce361 = var362;
}
((struct instance_core__NativeArray*)var352)->values[2]=var362;
} else {
var352 = varonce351;
varonce351 = NULL;
}
{
var369 = ((val*(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_r); /* to_s on <var_r:Alternative>*/
}
((struct instance_core__NativeArray*)var352)->values[1]=var369;
{
var370 = ((val*(*)(val* self))(var352->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var352); /* native_to_s on <var352:NativeArray[String]>*/
}
varonce351 = var352;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var370); /* add on <var_res:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_347&3)?class_info[((long)var_347&3)]:var_347->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_347); /* next on <var_347:Iterator[Alternative]>*/
}
}
BREAK_label349: (void)0;
{
((void(*)(val* self))((((long)var_347&3)?class_info[((long)var_347&3)]:var_347->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_347); /* finish on <var_347:Iterator[Alternative]>*/
}
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:IndexedIterator[LRState]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:IndexedIterator[LRState]>*/
}
{
var371 = ((val*(*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_core__abstract_text__Collection__join]))(var_res, ((val*)NULL), ((val*)NULL)); /* join on <var_res:Array[String]>*/
}
var = var371;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$LRAutomaton$to_dot for (self: LRAutomaton, String) */
void nitcc___nitcc__LRAutomaton___to_dot(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : FileWriter */;
val* var_f /* var f: FileWriter */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
val* var24 /* : Array[LRState] */;
val* var_ /* var : Array[LRState] */;
val* var25 /* : Iterator[nullable Object] */;
val* var_26 /* var : IndexedIterator[LRState] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_s /* var s: LRState */;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Bool */;
val* var38 /* : nullable Bool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Bool */;
val* var46 /* : nullable Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
long var63 /* : Int */;
val* var64 /* : String */;
long var65 /* : Int */;
val* var66 /* : String */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : HashSet[Item] */;
val* var_71 /* var : HashSet[Item] */;
val* var72 /* : Iterator[nullable Object] */;
val* var_73 /* var : Iterator[Item] */;
short int var74 /* : Bool */;
val* var76 /* : nullable Object */;
val* var_i /* var i: Item */;
val* var78 /* : NativeArray[String] */;
static val* varonce77;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Bool */;
val* var97 /* : nullable Bool */;
val* var98 /* : HashSet[Item] */;
val* var_99 /* var : HashSet[Item] */;
val* var100 /* : Iterator[nullable Object] */;
val* var_101 /* var : Iterator[Item] */;
short int var102 /* : Bool */;
val* var104 /* : nullable Object */;
val* var_i105 /* var i: Item */;
val* var106 /* : HashSet[Item] */;
short int var107 /* : Bool */;
val* var110 /* : NativeArray[String] */;
static val* varonce109;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var121 /* : String */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Bool */;
val* var129 /* : nullable Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var_conflict /* var conflict: Bool */;
val* var132 /* : HashMap[Token, Set[Item]] */;
val* var_133 /* var : HashMap[Token, Set[Item]] */;
val* var134 /* : MapIterator[nullable Object, nullable Object] */;
val* var_135 /* var : MapIterator[Token, Set[Item]] */;
short int var136 /* : Bool */;
val* var138 /* : nullable Object */;
val* var_t /* var t: Token */;
val* var139 /* : nullable Object */;
val* var_a /* var a: Set[Item] */;
long var140 /* : Int */;
short int var141 /* : Bool */;
short int var143 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var144 /* : Bool */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Bool */;
val* var152 /* : nullable Bool */;
val* var153 /* : ArraySet[Token] */;
short int var154 /* : Bool */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : CString */;
val* var158 /* : String */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Int */;
val* var161 /* : nullable Bool */;
val* var162 /* : nullable Bool */;
short int var163 /* : Bool */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Int */;
val* var170 /* : nullable Bool */;
val* var171 /* : nullable Bool */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : CString */;
val* var175 /* : String */;
val* var176 /* : nullable Int */;
val* var177 /* : nullable Int */;
val* var178 /* : nullable Bool */;
val* var179 /* : nullable Bool */;
val* var180 /* : Array[LRTransition] */;
val* var_181 /* var : Array[LRTransition] */;
val* var182 /* : Iterator[nullable Object] */;
val* var_183 /* var : IndexedIterator[LRTransition] */;
short int var184 /* : Bool */;
val* var186 /* : nullable Object */;
val* var_t187 /* var t: LRTransition */;
val* var189 /* : NativeArray[String] */;
static val* varonce188;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : CString */;
val* var193 /* : String */;
val* var194 /* : nullable Int */;
val* var195 /* : nullable Int */;
val* var196 /* : nullable Bool */;
val* var197 /* : nullable Bool */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
val* var202 /* : nullable Int */;
val* var203 /* : nullable Int */;
val* var204 /* : nullable Bool */;
val* var205 /* : nullable Bool */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : CString */;
val* var209 /* : String */;
val* var210 /* : nullable Int */;
val* var211 /* : nullable Int */;
val* var212 /* : nullable Bool */;
val* var213 /* : nullable Bool */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : CString */;
val* var217 /* : String */;
val* var218 /* : nullable Int */;
val* var219 /* : nullable Int */;
val* var220 /* : nullable Bool */;
val* var221 /* : nullable Bool */;
long var222 /* : Int */;
val* var223 /* : String */;
val* var224 /* : LRState */;
long var225 /* : Int */;
val* var226 /* : String */;
val* var227 /* : Element */;
val* var228 /* : String */;
val* var229 /* : String */;
val* var230 /* : String */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : CString */;
val* var234 /* : String */;
val* var235 /* : nullable Int */;
val* var236 /* : nullable Int */;
val* var237 /* : nullable Bool */;
val* var238 /* : nullable Bool */;
var_path = p0;
var = NEW_core__FileWriter(&type_core__FileWriter);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__file__FileWriter__open]))(var, var_path); /* open on <var:FileWriter>*/
}
var_f = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "digraph g {\n";
var4 = (val*)(12l<<2|1);
var5 = (val*)(12l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var1); /* write on <var_f:FileWriter>*/
}
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "rankdir=LR;\n";
var12 = (val*)(12l<<2|1);
var13 = (val*)(12l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce8 = var9;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var9); /* write on <var_f:FileWriter>*/
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "node[shape=Mrecord,height=0];\n";
var20 = (val*)(30l<<2|1);
var21 = (val*)(30l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce16 = var17;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var17); /* write on <var_f:FileWriter>*/
}
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRAutomaton__states]))(self); /* states on <self:LRAutomaton>*/
}
var_ = var24;
{
var25 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[LRState]>*/
}
var_26 = var25;
for(;;) {
{
var27 = ((short int(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_26); /* is_ok on <var_26:IndexedIterator[LRState]>*/
}
if (var27){
} else {
goto BREAK_label;
}
{
var28 = ((val*(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_26); /* item on <var_26:IndexedIterator[LRState]>*/
}
var_s = var28;
if (unlikely(varonce29==NULL)) {
var30 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "s";
var35 = (val*)(1l<<2|1);
var36 = (val*)(1l<<2|1);
var37 = (val*)((long)(0)<<2|3);
var38 = (val*)((long)(0)<<2|3);
var34 = core__flat___CString___to_s_unsafe(var33, var35, var36, var37, var38);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var30)->values[0]=var32;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " [label=\"";
var43 = (val*)(9l<<2|1);
var44 = (val*)(9l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var30)->values[2]=var40;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = " ";
var51 = (val*)(1l<<2|1);
var52 = (val*)(1l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var30)->values[4]=var48;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "|";
var59 = (val*)(1l<<2|1);
var60 = (val*)(1l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var30)->values[6]=var56;
} else {
var30 = varonce29;
varonce29 = NULL;
}
{
var63 = ((long(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__number]))(var_s); /* number on <var_s:LRState>*/
}
var64 = core__flat___Int___core__abstract_text__Object__to_s(var63);
((struct instance_core__NativeArray*)var30)->values[1]=var64;
{
var65 = ((long(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__number]))(var_s); /* number on <var_s:LRState>*/
}
var66 = core__flat___Int___core__abstract_text__Object__to_s(var65);
((struct instance_core__NativeArray*)var30)->values[3]=var66;
{
var67 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__name]))(var_s); /* name on <var_s:LRState>*/
}
{
var68 = ((val*(*)(val* self))(var67->class->vft[COLOR_core__abstract_text__Text__escape_to_dot]))(var67); /* escape_to_dot on <var67:String>*/
}
((struct instance_core__NativeArray*)var30)->values[5]=var68;
{
var69 = ((val*(*)(val* self))(var30->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var69); /* write on <var_f:FileWriter>*/
}
{
var70 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__core]))(var_s); /* core on <var_s:LRState>*/
}
var_71 = var70;
{
var72 = ((val*(*)(val* self))(var_71->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_71); /* iterator on <var_71:HashSet[Item]>*/
}
var_73 = var72;
for(;;) {
{
var74 = ((short int(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_73); /* is_ok on <var_73:Iterator[Item]>*/
}
if (var74){
} else {
goto BREAK_label75;
}
{
var76 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_73); /* item on <var_73:Iterator[Item]>*/
}
var_i = var76;
if (unlikely(varonce77==NULL)) {
var78 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "\\l";
var83 = (val*)(2l<<2|1);
var84 = (val*)(2l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var78)->values[1]=var80;
} else {
var78 = varonce77;
varonce77 = NULL;
}
{
var87 = ((val*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i); /* to_s on <var_i:Item>*/
}
{
var88 = ((val*(*)(val* self))(var87->class->vft[COLOR_core__abstract_text__Text__escape_to_dot]))(var87); /* escape_to_dot on <var87:String>*/
}
((struct instance_core__NativeArray*)var78)->values[0]=var88;
{
var89 = ((val*(*)(val* self))(var78->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var78); /* native_to_s on <var78:NativeArray[String]>*/
}
varonce77 = var78;
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var89); /* write on <var_f:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_73); /* next on <var_73:Iterator[Item]>*/
}
}
BREAK_label75: (void)0;
{
((void(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_73); /* finish on <var_73:Iterator[Item]>*/
}
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "|";
var94 = (val*)(1l<<2|1);
var95 = (val*)(1l<<2|1);
var96 = (val*)((long)(0)<<2|3);
var97 = (val*)((long)(0)<<2|3);
var93 = core__flat___CString___to_s_unsafe(var92, var94, var95, var96, var97);
var91 = var93;
varonce90 = var91;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var91); /* write on <var_f:FileWriter>*/
}
{
var98 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__items]))(var_s); /* items on <var_s:LRState>*/
}
var_99 = var98;
{
var100 = ((val*(*)(val* self))(var_99->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_99); /* iterator on <var_99:HashSet[Item]>*/
}
var_101 = var100;
for(;;) {
{
var102 = ((short int(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_101); /* is_ok on <var_101:Iterator[Item]>*/
}
if (var102){
} else {
goto BREAK_label103;
}
{
var104 = ((val*(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_101); /* item on <var_101:Iterator[Item]>*/
}
var_i105 = var104;
{
var106 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__core]))(var_s); /* core on <var_s:LRState>*/
}
{
var107 = ((short int(*)(val* self, val* p0))(var106->class->vft[COLOR_core__abstract_collection__Collection__has]))(var106, var_i105); /* has on <var106:HashSet[Item]>*/
}
if (var107){
goto BREAK_label108;
} else {
}
if (unlikely(varonce109==NULL)) {
var110 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "\\l";
var115 = (val*)(2l<<2|1);
var116 = (val*)(2l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var110)->values[1]=var112;
} else {
var110 = varonce109;
varonce109 = NULL;
}
{
var119 = ((val*(*)(val* self))(var_i105->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i105); /* to_s on <var_i105:Item>*/
}
{
var120 = ((val*(*)(val* self))(var119->class->vft[COLOR_core__abstract_text__Text__escape_to_dot]))(var119); /* escape_to_dot on <var119:String>*/
}
((struct instance_core__NativeArray*)var110)->values[0]=var120;
{
var121 = ((val*(*)(val* self))(var110->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var110); /* native_to_s on <var110:NativeArray[String]>*/
}
varonce109 = var110;
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var121); /* write on <var_f:FileWriter>*/
}
BREAK_label108: (void)0;
{
((void(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_101); /* next on <var_101:Iterator[Item]>*/
}
}
BREAK_label103: (void)0;
{
((void(*)(val* self))((((long)var_101&3)?class_info[((long)var_101&3)]:var_101->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_101); /* finish on <var_101:Iterator[Item]>*/
}
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "\"";
var126 = (val*)(1l<<2|1);
var127 = (val*)(1l<<2|1);
var128 = (val*)((long)(0)<<2|3);
var129 = (val*)((long)(0)<<2|3);
var125 = core__flat___CString___to_s_unsafe(var124, var126, var127, var128, var129);
var123 = var125;
varonce122 = var123;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var123); /* write on <var_f:FileWriter>*/
}
{
var130 = ((short int(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__is_lr0]))(var_s); /* is_lr0 on <var_s:LRState>*/
}
var131 = !var130;
if (var131){
var_conflict = 0;
{
var132 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__guarded_reduce]))(var_s); /* guarded_reduce on <var_s:LRState>*/
}
var_133 = var132;
{
var134 = ((val*(*)(val* self))(var_133->class->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_133); /* iterator on <var_133:HashMap[Token, Set[Item]]>*/
}
var_135 = var134;
for(;;) {
{
var136 = ((short int(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_135); /* is_ok on <var_135:MapIterator[Token, Set[Item]]>*/
}
if (var136){
} else {
goto BREAK_label137;
}
{
var138 = ((val*(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_135); /* key on <var_135:MapIterator[Token, Set[Item]]>*/
}
var_t = var138;
{
var139 = ((val*(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_135); /* item on <var_135:MapIterator[Token, Set[Item]]>*/
}
var_a = var139;
{
var140 = ((long(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_a); /* length on <var_a:Set[Item]>*/
}
{
{ /* Inline kernel$Int$> (var140,1l) on <var140:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var143 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var143)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var144 = var140 > 1l;
var141 = var144;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
if (var141){
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = ",color=red";
var149 = (val*)(10l<<2|1);
var150 = (val*)(10l<<2|1);
var151 = (val*)((long)(0)<<2|3);
var152 = (val*)((long)(0)<<2|3);
var148 = core__flat___CString___to_s_unsafe(var147, var149, var150, var151, var152);
var146 = var148;
varonce145 = var146;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var146); /* write on <var_f:FileWriter>*/
}
var_conflict = 1;
goto BREAK_label137;
} else {
{
var153 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__shifts]))(var_s); /* shifts on <var_s:LRState>*/
}
{
var154 = ((short int(*)(val* self, val* p0))(var153->class->vft[COLOR_core__abstract_collection__Collection__has]))(var153, var_t); /* has on <var153:ArraySet[Token]>*/
}
if (var154){
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = ",color=orange";
var159 = (val*)(13l<<2|1);
var160 = (val*)(13l<<2|1);
var161 = (val*)((long)(0)<<2|3);
var162 = (val*)((long)(0)<<2|3);
var158 = core__flat___CString___to_s_unsafe(var157, var159, var160, var161, var162);
var156 = var158;
varonce155 = var156;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var156); /* write on <var_f:FileWriter>*/
}
var_conflict = 1;
goto BREAK_label137;
} else {
}
}
{
((void(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_135); /* next on <var_135:MapIterator[Token, Set[Item]]>*/
}
}
BREAK_label137: (void)0;
{
((void(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__MapIterator__finish]))(var_135); /* finish on <var_135:MapIterator[Token, Set[Item]]>*/
}
var163 = !var_conflict;
if (var163){
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = ",color=blue";
var168 = (val*)(11l<<2|1);
var169 = (val*)(11l<<2|1);
var170 = (val*)((long)(0)<<2|3);
var171 = (val*)((long)(0)<<2|3);
var167 = core__flat___CString___to_s_unsafe(var166, var168, var169, var170, var171);
var165 = var167;
varonce164 = var165;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var165); /* write on <var_f:FileWriter>*/
}
} else {
}
} else {
}
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = "];\n";
var176 = (val*)(3l<<2|1);
var177 = (val*)(3l<<2|1);
var178 = (val*)((long)(0)<<2|3);
var179 = (val*)((long)(0)<<2|3);
var175 = core__flat___CString___to_s_unsafe(var174, var176, var177, var178, var179);
var173 = var175;
varonce172 = var173;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var173); /* write on <var_f:FileWriter>*/
}
{
var180 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__outs]))(var_s); /* outs on <var_s:LRState>*/
}
var_181 = var180;
{
var182 = ((val*(*)(val* self))(var_181->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_181); /* iterator on <var_181:Array[LRTransition]>*/
}
var_183 = var182;
for(;;) {
{
var184 = ((short int(*)(val* self))((((long)var_183&3)?class_info[((long)var_183&3)]:var_183->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_183); /* is_ok on <var_183:IndexedIterator[LRTransition]>*/
}
if (var184){
} else {
goto BREAK_label185;
}
{
var186 = ((val*(*)(val* self))((((long)var_183&3)?class_info[((long)var_183&3)]:var_183->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_183); /* item on <var_183:IndexedIterator[LRTransition]>*/
}
var_t187 = var186;
if (unlikely(varonce188==NULL)) {
var189 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = "s";
var194 = (val*)(1l<<2|1);
var195 = (val*)(1l<<2|1);
var196 = (val*)((long)(0)<<2|3);
var197 = (val*)((long)(0)<<2|3);
var193 = core__flat___CString___to_s_unsafe(var192, var194, var195, var196, var197);
var191 = var193;
varonce190 = var191;
}
((struct instance_core__NativeArray*)var189)->values[0]=var191;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = " -> s";
var202 = (val*)(5l<<2|1);
var203 = (val*)(5l<<2|1);
var204 = (val*)((long)(0)<<2|3);
var205 = (val*)((long)(0)<<2|3);
var201 = core__flat___CString___to_s_unsafe(var200, var202, var203, var204, var205);
var199 = var201;
varonce198 = var199;
}
((struct instance_core__NativeArray*)var189)->values[2]=var199;
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = " [label=\"";
var210 = (val*)(9l<<2|1);
var211 = (val*)(9l<<2|1);
var212 = (val*)((long)(0)<<2|3);
var213 = (val*)((long)(0)<<2|3);
var209 = core__flat___CString___to_s_unsafe(var208, var210, var211, var212, var213);
var207 = var209;
varonce206 = var207;
}
((struct instance_core__NativeArray*)var189)->values[4]=var207;
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = "\"];\n";
var218 = (val*)(4l<<2|1);
var219 = (val*)(4l<<2|1);
var220 = (val*)((long)(0)<<2|3);
var221 = (val*)((long)(0)<<2|3);
var217 = core__flat___CString___to_s_unsafe(var216, var218, var219, var220, var221);
var215 = var217;
varonce214 = var215;
}
((struct instance_core__NativeArray*)var189)->values[6]=var215;
} else {
var189 = varonce188;
varonce188 = NULL;
}
{
var222 = ((long(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__number]))(var_s); /* number on <var_s:LRState>*/
}
var223 = core__flat___Int___core__abstract_text__Object__to_s(var222);
((struct instance_core__NativeArray*)var189)->values[1]=var223;
{
var224 = ((val*(*)(val* self))(var_t187->class->vft[COLOR_nitcc__grammar__LRTransition__to]))(var_t187); /* to on <var_t187:LRTransition>*/
}
{
var225 = ((long(*)(val* self))(var224->class->vft[COLOR_nitcc__grammar__LRState__number]))(var224); /* number on <var224:LRState>*/
}
var226 = core__flat___Int___core__abstract_text__Object__to_s(var225);
((struct instance_core__NativeArray*)var189)->values[3]=var226;
{
var227 = ((val*(*)(val* self))(var_t187->class->vft[COLOR_nitcc__grammar__LRTransition__elem]))(var_t187); /* elem on <var_t187:LRTransition>*/
}
{
var228 = ((val*(*)(val* self))(var227->class->vft[COLOR_core__abstract_text__Object__to_s]))(var227); /* to_s on <var227:Element>*/
}
{
var229 = ((val*(*)(val* self))(var228->class->vft[COLOR_core__abstract_text__Text__escape_to_dot]))(var228); /* escape_to_dot on <var228:String>*/
}
((struct instance_core__NativeArray*)var189)->values[5]=var229;
{
var230 = ((val*(*)(val* self))(var189->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var189); /* native_to_s on <var189:NativeArray[String]>*/
}
varonce188 = var189;
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var230); /* write on <var_f:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_183&3)?class_info[((long)var_183&3)]:var_183->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_183); /* next on <var_183:IndexedIterator[LRTransition]>*/
}
}
BREAK_label185: (void)0;
{
((void(*)(val* self))((((long)var_183&3)?class_info[((long)var_183&3)]:var_183->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_183); /* finish on <var_183:IndexedIterator[LRTransition]>*/
}
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_26); /* next on <var_26:IndexedIterator[LRState]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_26&3)?class_info[((long)var_26&3)]:var_26->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_26); /* finish on <var_26:IndexedIterator[LRState]>*/
}
if (likely(varonce231!=NULL)) {
var232 = varonce231;
} else {
var233 = "}\n";
var235 = (val*)(2l<<2|1);
var236 = (val*)(2l<<2|1);
var237 = (val*)((long)(0)<<2|3);
var238 = (val*)((long)(0)<<2|3);
var234 = core__flat___CString___to_s_unsafe(var233, var235, var236, var237, var238);
var232 = var234;
varonce231 = var232;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var232); /* write on <var_f:FileWriter>*/
}
{
((void(*)(val* self))(var_f->class->vft[COLOR_core__stream__Stream__close]))(var_f); /* close on <var_f:FileWriter>*/
}
RET_LABEL:;
}
/* method grammar$LRAutomaton$gen_to_nit for (self: LRAutomaton, String, String) */
void nitcc___nitcc__LRAutomaton___gen_to_nit(val* self, val* p0, val* p1) {
val* var_filepath /* var filepath: String */;
val* var_name /* var name: String */;
val* var /* : Generator */;
val* var_gen /* var gen: Generator */;
val* var1 /* : FileWriter */;
val* var_f /* var f: FileWriter */;
val* var2 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[String] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_s /* var s: String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
var_filepath = p0;
var_name = p1;
var = NEW_nitcc__grammar__Generator(&type_nitcc__grammar__Generator);
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Generator>*/
}
var_gen = var;
{
((void(*)(val* self, val* p0, val* p1))(var_gen->class->vft[COLOR_nitcc__grammar__Generator__gen_to_nit]))(var_gen, self, var_name); /* gen_to_nit on <var_gen:Generator>*/
}
var1 = NEW_core__FileWriter(&type_core__FileWriter);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__FileWriter__open]))(var1, var_filepath); /* open on <var1:FileWriter>*/
}
var_f = var1;
{
var2 = ((val*(*)(val* self))(var_gen->class->vft[COLOR_nitcc__grammar__Generator__out]))(var_gen); /* out on <var_gen:Generator>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[String]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[String]>*/
}
var_s = var6;
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var_s); /* write on <var_f:FileWriter>*/
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "\n";
var10 = (val*)(1l<<2|1);
var11 = (val*)(1l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce = var7;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var7); /* write on <var_f:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[String]>*/
}
{
((void(*)(val* self))(var_f->class->vft[COLOR_core__stream__Stream__close]))(var_f); /* close on <var_f:FileWriter>*/
}
RET_LABEL:;
}
/* method grammar$LRAutomaton$init for (self: LRAutomaton) */
void nitcc___nitcc__LRAutomaton___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitcc___nitcc__LRAutomaton___core__kernel__Object__init]))(self); /* init on <self:LRAutomaton>*/
}
RET_LABEL:;
}
/* method grammar$Generator$out for (self: Generator): Array[String] */
val* nitcc__grammar___nitcc__grammar__Generator___out(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitcc__grammar__Generator___out].val; /* _out on <self:Generator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _out");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 635);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Generator$out= for (self: Generator, Array[String]) */
void nitcc__grammar___nitcc__grammar__Generator___out_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Generator___out].val = p0; /* _out on <self:Generator> */
RET_LABEL:;
}
/* method grammar$Generator$add for (self: Generator, String) */
void nitcc__grammar___nitcc__grammar__Generator___add(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : Array[String] */;
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Generator__out]))(self); /* out on <self:Generator>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var, var_s); /* add on <var:Array[String]>*/
}
RET_LABEL:;
}
