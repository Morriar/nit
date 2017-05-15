#include "serialization__engine_tools.sep.0.h"
/* method engine_tools#StrictHashMap#index_at for (self: StrictHashMap[nullable Object, nullable Object], nullable Object): Int */
long serialization___serialization__StrictHashMap___core__hash_collection__HashCollection__index_at(val* self, val* p0) {
long var /* : Int */;
val* var_k /* var k: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
long var7 /* : Int */;
long var_i /* var i: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var14 /* : Int */;
var_k = p0;
if (var_k == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))((((long)var_k&3)?class_info[((long)var_k&3)]:var_k->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_k, ((val*)NULL)); /* == on <var_k:nullable Object>*/
var1 = var2;
}
if (var1){
var = 0l;
goto RET_LABEL;
} else {
}
{
var3 = serialization___core__Object___serialization_hash(var_k);
}
var4 = self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l; /* _capacity on <self:StrictHashMap[nullable Object, nullable Object]> */
{
{ /* Inline kernel#Int#% (var3,var4) on <var3:Int> */
var7 = var3 % var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_i = var5;
{
{ /* Inline kernel#Int#< (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var10 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var11 = var_i < 0l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline kernel#Int#unary - (var_i) on <var_i:Int> */
var14 = -var_i;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_i = var12;
} else {
}
var = var_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method engine_tools#StrictHashMap#node_at_idx for (self: StrictHashMap[nullable Object, nullable Object], Int, nullable Object): nullable HashMapNode[nullable Object, nullable Object] */
val* serialization___serialization__StrictHashMap___core__hash_collection__HashCollection__node_at_idx(val* self, long p0, val* p1) {
val* var /* : nullable HashMapNode[nullable Object, nullable Object] */;
long var_i /* var i: Int */;
val* var_k /* var k: nullable Object */;
val* var1 /* : NativeArray[nullable HashNode[nullable Object]] */;
val* var2 /* : nullable Object */;
val* var4 /* : Object */;
val* var_c /* var c: nullable HashMapNode[nullable Object, nullable Object] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_ck /* var ck: nullable Object */;
short int var11 /* : Bool */;
val* var12 /* : nullable HashNode[nullable Object] */;
var_i = p0;
var_k = p1;
var1 = self->attrs[COLOR_core__hash_collection__HashCollection___array].val; /* _array on <self:StrictHashMap[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _array");
PRINT_ERROR(" (%s:%d)\n", FILE_serialization__engine_tools, 36);
fatal_exit(1);
}
{
{ /* Inline array#NativeArray#[] (var1,var_i) on <var1:NativeArray[nullable HashNode[nullable Object]](NativeArray[nullable HashMapNode[nullable Object, nullable Object]])> */
var4 = ((struct instance_core__NativeArray*)var1)->values[var_i];
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_c = var2;
for(;;) {
if (var_c == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_c,((val*)NULL)) on <var_c:nullable HashMapNode[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var_c->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_c, var_other); /* == on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var10 = var_c->attrs[COLOR_core__hash_collection__HashNode___key].val; /* _key on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_ck = var10;
if (var_ck == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_serialization__engine_tools, 39);
fatal_exit(1);
} else {
var11 = serialization___core__Object___is_same_serialized(var_ck, var_k);
}
if (var11){
goto BREAK_label;
} else {
}
var12 = var_c->attrs[COLOR_core__hash_collection__HashNode___next_in_bucklet].val; /* _next_in_bucklet on <var_c:nullable HashMapNode[nullable Object, nullable Object](HashMapNode[nullable Object, nullable Object])> */
var_c = var12;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_c;
goto RET_LABEL;
RET_LABEL:;
return var;
}
