#include "serialization.sep.0.h"
/* method serialization#Serializer#serialize_attribute for (self: Serializer, String, nullable Object) */
void serialization___serialization__Serializer___serialize_attribute(val* self, val* p0, val* p1) {
val* var_name /* var name: String */;
val* var_value /* var value: nullable Object */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : String */;
var_name = p0;
var_value = p1;
{
var = serialization___serialization__Serializer___try_to_serialize(self, var_value);
}
var1 = !var;
if (var1){
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "argument ";
var6 = core__abstract_text___CString___to_s_full(var5, 9l, 9l);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[0]=var4;
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = " of type ";
var10 = core__abstract_text___CString___to_s_full(var9, 9l, 9l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var2)->values[2]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = " is not serializable.";
var14 = core__abstract_text___CString___to_s_full(var13, 21l, 21l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var2)->values[4]=var12;
} else {
var2 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var2)->values[1]=var_name;
if (var_value == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_serialization, 69);
fatal_exit(1);
} else {
var15 = core__abstract_text___Object___class_name(var_value);
}
((struct instance_core__NativeArray*)var2)->values[3]=var15;
{
var16 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
{
serialization___serialization__Serializer___warn(self, var16); /* Direct call serialization#Serializer#warn on <self:Serializer>*/
}
} else {
}
RET_LABEL:;
}
/* method serialization#Serializer#try_to_serialize for (self: Serializer, nullable Object): Bool */
short int serialization___serialization__Serializer___try_to_serialize(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var_value = p0;
/* <var_value:nullable Object> isa Serializable */
cltype = type_serialization__Serializable.color;
idtype = type_serialization__Serializable.id;
if(var_value == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_value&3)?type_info[((long)var_value&3)]:var_value->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_value&3)?type_info[((long)var_value&3)]:var_value->type)->type_table[cltype] == idtype;
}
}
if (var1){
{
((void(*)(val* self, val* p0))((((long)var_value&3)?class_info[((long)var_value&3)]:var_value->class)->vft[COLOR_serialization__Serializable__serialize_to_or_delay]))(var_value, self); /* serialize_to_or_delay on <var_value:nullable Object(Serializable)>*/
}
} else {
if (var_value == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var_value&3)?class_info[((long)var_value&3)]:var_value->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_value, ((val*)NULL)); /* == on <var_value:nullable Object>*/
var2 = var3;
}
if (var2){
{
json___json__JsonSerializer___serialization__Serializer__serialize(self, var_value); /* Direct call serialization_write#JsonSerializer#serialize on <self:Serializer>*/
}
} else {
var = 0;
goto RET_LABEL;
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization#Serializer#warn for (self: Serializer, String) */
void serialization___serialization__Serializer___warn(val* self, val* p0) {
val* var_msg /* var msg: String */;
val* var /* : Sys */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : String */;
var_msg = p0;
var = glob_sys;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "Serialization warning: ";
var5 = core__abstract_text___CString___to_s_full(var4, 23l, 23l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var1)->values[1]=var_msg;
{
var6 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
core__file___Sys___print(var, var6); /* Direct call file#Sys#print on <var:Sys>*/
}
RET_LABEL:;
}
/* method serialization#Serializable#serialize_to for (self: Serializable, Serializer) */
void serialization___serialization__Serializable___serialize_to(val* self, val* p0) {
val* var_serializer /* var serializer: Serializer */;
var_serializer = p0;
{
json___json__JsonSerializer___serialization__Serializer__serialize(var_serializer, self); /* Direct call serialization_write#JsonSerializer#serialize on <var_serializer:Serializer>*/
}
RET_LABEL:;
}
/* method serialization#Serializable#core_serialize_to for (self: Serializable, Serializer) */
void serialization___serialization__Serializable___core_serialize_to(val* self, val* p0) {
val* var_serializer /* var serializer: Serializer */;
var_serializer = p0;
RET_LABEL:;
}
/* method serialization#Serializable#serialize_to_or_delay for (self: Serializable, Serializer) */
void serialization___serialization__Serializable___serialize_to_or_delay(val* self, val* p0) {
val* var_v /* var v: Serializer */;
var_v = p0;
{
json___json__JsonSerializer___serialization__Serializer__serialize_reference(var_v, self); /* Direct call serialization_write#JsonSerializer#serialize_reference on <var_v:Serializer>*/
}
RET_LABEL:;
}
/* method serialization#Object#is_same_serialized for (self: Object, nullable Object): Bool */
short int serialization___core__Object___is_same_serialized(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
var_other = p0;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other) on <self:Object> */
var3 = self == var_other || (var_other != NULL && (!((long)self&3)) && (!((long)var_other&3)) && self->class == var_other->class && ((self->class->box_kind == 3 && ((struct instance_core__Byte*)self)->value == ((struct instance_core__Byte*)var_other)->value) || (self->class->box_kind == 5 && ((struct instance_core__Float*)self)->value == ((struct instance_core__Float*)var_other)->value) || (self->class->box_kind == 6 && ((struct instance_core__CString*)self)->value == ((struct instance_core__CString*)var_other)->value) || (self->class->box_kind == 7 && ((struct instance_core__Pointer*)self)->value == ((struct instance_core__Pointer*)var_other)->value) || (self->class->box_kind == 8 && ((struct instance_core__Int8*)self)->value == ((struct instance_core__Int8*)var_other)->value) || (self->class->box_kind == 9 && ((struct instance_core__Int16*)self)->value == ((struct instance_core__Int16*)var_other)->value) || (self->class->box_kind == 10 && ((struct instance_core__UInt16*)self)->value == ((struct instance_core__UInt16*)var_other)->value) || (self->class->box_kind == 11 && ((struct instance_core__Int32*)self)->value == ((struct instance_core__Int32*)var_other)->value) || (self->class->box_kind == 12 && ((struct instance_core__UInt32*)self)->value == ((struct instance_core__UInt32*)var_other)->value)));
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization#Object#serialization_hash for (self: Object): Int */
long serialization___core__Object___serialization_hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Object__object_id]))(self); /* object_id on <self:Object>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization#DirectSerializable#serialize_to_or_delay for (self: DirectSerializable, Serializer) */
void serialization___serialization__DirectSerializable___Serializable__serialize_to_or_delay(val* self, val* p0) {
val* var_v /* var v: Serializer */;
var_v = p0;
{
serialization___serialization__Serializable___serialize_to(self, var_v); /* Direct call serialization#Serializable#serialize_to on <self:DirectSerializable>*/
}
RET_LABEL:;
}
/* method serialization#Couple#core_serialize_to for (self: Couple[nullable Object, nullable Object], Serializer) */
void serialization___core__Couple___Serializable__core_serialize_to(val* self, val* p0) {
val* var_v /* var v: Serializer */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Object */;
val* var12 /* : nullable Object */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "first";
var2 = core__abstract_text___CString___to_s_full(var1, 5l, 5l);
var = var2;
varonce = var;
}
{
{ /* Inline abstract_collection#Couple#first (self) on <self:Couple[nullable Object, nullable Object]> */
var5 = self->attrs[COLOR_core__abstract_collection__Couple___first].val; /* _first on <self:Couple[nullable Object, nullable Object]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
json___json__JsonSerializer___serialization__Serializer__serialize_attribute(var_v, var, var3); /* Direct call serialization_write#JsonSerializer#serialize_attribute on <var_v:Serializer>*/
}
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "second";
var9 = core__abstract_text___CString___to_s_full(var8, 6l, 6l);
var7 = var9;
varonce6 = var7;
}
{
{ /* Inline abstract_collection#Couple#second (self) on <self:Couple[nullable Object, nullable Object]> */
var12 = self->attrs[COLOR_core__abstract_collection__Couple___second].val; /* _second on <self:Couple[nullable Object, nullable Object]> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
json___json__JsonSerializer___serialization__Serializer__serialize_attribute(var_v, var7, var10); /* Direct call serialization_write#JsonSerializer#serialize_attribute on <var_v:Serializer>*/
}
RET_LABEL:;
}
/* method serialization#Ref#core_serialize_to for (self: Ref[nullable Object], Serializer) */
void serialization___core__Ref___Serializable__core_serialize_to(val* self, val* p0) {
val* var_v /* var v: Serializer */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Object */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "item";
var2 = core__abstract_text___CString___to_s_full(var1, 4l, 4l);
var = var2;
varonce = var;
}
{
var3 = core___core__Ref___Collection__first(self);
}
{
json___json__JsonSerializer___serialization__Serializer__serialize_attribute(var_v, var, var3); /* Direct call serialization_write#JsonSerializer#serialize_attribute on <var_v:Serializer>*/
}
RET_LABEL:;
}
/* method serialization#Error#core_serialize_to for (self: Error, Serializer) */
void serialization___core__Error___Serializable__core_serialize_to(val* self, val* p0) {
val* var_v /* var v: Serializer */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Error */;
val* var12 /* : nullable Error */;
var_v = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "message";
var2 = core__abstract_text___CString___to_s_full(var1, 7l, 7l);
var = var2;
varonce = var;
}
{
{ /* Inline error#Error#message (self) on <self:Error> */
var5 = self->attrs[COLOR_core__error__Error___message].val; /* _message on <self:Error> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_core__error, 19);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
json___json__JsonSerializer___serialization__Serializer__serialize_attribute(var_v, var, var3); /* Direct call serialization_write#JsonSerializer#serialize_attribute on <var_v:Serializer>*/
}
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "cause";
var9 = core__abstract_text___CString___to_s_full(var8, 5l, 5l);
var7 = var9;
varonce6 = var7;
}
{
{ /* Inline error#Error#cause (self) on <self:Error> */
var12 = self->attrs[COLOR_core__error__Error___cause].val; /* _cause on <self:Error> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
json___json__JsonSerializer___serialization__Serializer__serialize_attribute(var_v, var7, var10); /* Direct call serialization_write#JsonSerializer#serialize_attribute on <var_v:Serializer>*/
}
RET_LABEL:;
}
