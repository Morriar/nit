#include "nitc__serialize_model.sep.0.h"
/* method serialize_model#POSet#to_thin_json for (self: POSet[nullable Object]): String */
val* nitc__serialize_model___poset__POSet___to_thin_json(val* self) {
val* var /* : String */;
val* var1 /* : POSet[String] */;
val* var_thin_poset /* var thin_poset: POSet[String] */;
val* var_ /* var : POSet[nullable Object] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : Iterator[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var7 /* : Object */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var_from /* var from: String */;
val* var12 /* : POSetElement[nullable Object] */;
val* var13 /* : Collection[nullable Object] */;
val* var_14 /* var : Collection[nullable Object] */;
val* var15 /* : Iterator[nullable Object] */;
val* var_16 /* var : Iterator[nullable Object] */;
short int var17 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_g /* var g: nullable Object */;
val* var20 /* : Object */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var26 /* : String */;
var1 = NEW_poset__POSet(&type_poset__POSet__core__String);
{
{ /* Inline kernel#Object#init (var1) on <var1:POSet[String]> */
RET_LABEL2:(void)0;
}
}
var_thin_poset = var1;
var_ = self;
{
var3 = poset___poset__POSet___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[nullable Object]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[nullable Object]>*/
}
var_e = var6;
if (var_e!=NULL) {
var7 = var_e;
} else {
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "null";
var10 = core__abstract_text___CString___to_s_full(var9, 4l, 4l);
var8 = var10;
varonce = var8;
}
var7 = var8;
}
{
var11 = ((val*(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var7); /* to_s on <var7:Object>*/
}
var_from = var11;
{
var12 = poset___poset__POSet____91d_93d(self, var_e);
}
{
var13 = poset___poset__POSetElement___direct_greaters(var12);
}
var_14 = var13;
{
var15 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_14); /* iterator on <var_14:Collection[nullable Object]>*/
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:Iterator[nullable Object]>*/
}
if (var17){
} else {
goto BREAK_label18;
}
{
var19 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:Iterator[nullable Object]>*/
}
var_g = var19;
if (var_g!=NULL) {
var20 = var_g;
} else {
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "null";
var24 = core__abstract_text___CString___to_s_full(var23, 4l, 4l);
var22 = var24;
varonce21 = var22;
}
var20 = var22;
}
{
var25 = ((val*(*)(val* self))((((long)var20&3)?class_info[((long)var20&3)]:var20->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var20); /* to_s on <var20:Object>*/
}
{
poset___poset__POSet___add_edge(var_thin_poset, var_from, var25); /* Direct call poset#POSet#add_edge on <var_thin_poset:POSet[String]>*/
}
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:Iterator[nullable Object]>*/
}
}
BREAK_label18: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:Iterator[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[nullable Object]>*/
}
{
var26 = json__serialization_write___serialization__Serializable___serialize_to_json(var_thin_poset, ((val*)NULL), ((val*)NULL));
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
