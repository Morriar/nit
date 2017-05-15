#include "serialization__caching.sep.0.h"
/* method caching#CachingSerializer#cache for (self: CachingSerializer): SerializerCache */
val* serialization___serialization__CachingSerializer___cache(val* self) {
val* var /* : SerializerCache */;
short int var1 /* : Bool */;
val* var2 /* : SerializerCache */;
val* var3 /* : SerializerCache */;
var1 = self->attrs[COLOR_serialization__caching__CachingSerializer___cache].val != NULL; /* _cache on <self:CachingSerializer> */
if(likely(var1)) {
var2 = self->attrs[COLOR_serialization__caching__CachingSerializer___cache].val; /* _cache on <self:CachingSerializer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_serialization__caching, 25);
fatal_exit(1);
}
} else {
var3 = NEW_serialization__SerializerCache(&type_serialization__SerializerCache);
{
{ /* Inline kernel#Object#init (var3) on <var3:SerializerCache> */
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_serialization__caching__CachingSerializer___cache].val = var3; /* _cache on <self:CachingSerializer> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method caching#SerializerCache#sent for (self: SerializerCache): Map[Serializable, Int] */
val* serialization___serialization__SerializerCache___sent(val* self) {
val* var /* : Map[Serializable, Int] */;
val* var1 /* : Map[Serializable, Int] */;
var1 = self->attrs[COLOR_serialization__caching__SerializerCache___sent].val; /* _sent on <self:SerializerCache> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sent");
PRINT_ERROR(" (%s:%d)\n", FILE_serialization__caching, 57);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method caching#SerializerCache#has_object for (self: SerializerCache, Serializable): Bool */
short int serialization___serialization__SerializerCache___has_object(val* self, val* p0) {
short int var /* : Bool */;
val* var_object /* var object: Serializable */;
val* var1 /* : Map[Serializable, Int] */;
val* var3 /* : Map[Serializable, Int] */;
val* var4 /* : Collection[nullable Object] */;
short int var5 /* : Bool */;
var_object = p0;
{
{ /* Inline caching#SerializerCache#sent (self) on <self:SerializerCache> */
var3 = self->attrs[COLOR_serialization__caching__SerializerCache___sent].val; /* _sent on <self:SerializerCache> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sent");
PRINT_ERROR(" (%s:%d)\n", FILE_serialization__caching, 57);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapRead__keys]))(var1); /* keys on <var1:Map[Serializable, Int]>*/
}
{
var5 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var4, var_object); /* has on <var4:Collection[nullable Object](RemovableCollection[Serializable])>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method caching#SerializerCache#id_for for (self: SerializerCache, Serializable): Int */
long serialization___serialization__SerializerCache___id_for(val* self, val* p0) {
long var /* : Int */;
val* var_object /* var object: Serializable */;
val* var1 /* : Map[Serializable, Int] */;
val* var3 /* : Map[Serializable, Int] */;
val* var4 /* : Collection[nullable Object] */;
short int var5 /* : Bool */;
val* var6 /* : Map[Serializable, Int] */;
val* var8 /* : Map[Serializable, Int] */;
val* var9 /* : nullable Object */;
long var10 /* : Int */;
var_object = p0;
{
{ /* Inline caching#SerializerCache#sent (self) on <self:SerializerCache> */
var3 = self->attrs[COLOR_serialization__caching__SerializerCache___sent].val; /* _sent on <self:SerializerCache> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sent");
PRINT_ERROR(" (%s:%d)\n", FILE_serialization__caching, 57);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapRead__keys]))(var1); /* keys on <var1:Map[Serializable, Int]>*/
}
{
var5 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var4, var_object); /* has on <var4:Collection[nullable Object](RemovableCollection[Serializable])>*/
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_serialization__caching, 68);
fatal_exit(1);
}
{
{ /* Inline caching#SerializerCache#sent (self) on <self:SerializerCache> */
var8 = self->attrs[COLOR_serialization__caching__SerializerCache___sent].val; /* _sent on <self:SerializerCache> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sent");
PRINT_ERROR(" (%s:%d)\n", FILE_serialization__caching, 57);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val*(*)(val* self, val* p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var6, var_object); /* [] on <var6:Map[Serializable, Int]>*/
}
var10 = (long)(var9)>>2;
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method caching#SerializerCache#new_id_for for (self: SerializerCache, Serializable): Int */
long serialization___serialization__SerializerCache___new_id_for(val* self, val* p0) {
long var /* : Int */;
val* var_object /* var object: Serializable */;
long var1 /* : Int */;
long var_id /* var id: Int */;
val* var2 /* : Map[Serializable, Int] */;
val* var4 /* : Map[Serializable, Int] */;
val* var5 /* : nullable Object */;
var_object = p0;
{
var1 = serialization___serialization__SerializerCache___next_available_id(self);
}
var_id = var1;
{
{ /* Inline caching#SerializerCache#sent (self) on <self:SerializerCache> */
var4 = self->attrs[COLOR_serialization__caching__SerializerCache___sent].val; /* _sent on <self:SerializerCache> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sent");
PRINT_ERROR(" (%s:%d)\n", FILE_serialization__caching, 57);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = (val*)(var_id<<2|1);
((void(*)(val* self, val* p0, val* p1))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var2, var_object, var5); /* []= on <var2:Map[Serializable, Int]>*/
}
var = var_id;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method caching#SerializerCache#next_available_id for (self: SerializerCache): Int */
long serialization___serialization__SerializerCache___next_available_id(val* self) {
long var /* : Int */;
val* var1 /* : Map[Serializable, Int] */;
val* var3 /* : Map[Serializable, Int] */;
long var4 /* : Int */;
{
{ /* Inline caching#SerializerCache#sent (self) on <self:SerializerCache> */
var3 = self->attrs[COLOR_serialization__caching__SerializerCache___sent].val; /* _sent on <self:SerializerCache> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _sent");
PRINT_ERROR(" (%s:%d)\n", FILE_serialization__caching, 57);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapRead__length]))(var1); /* length on <var1:Map[Serializable, Int]>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
