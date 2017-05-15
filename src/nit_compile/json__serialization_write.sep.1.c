#include "json__serialization_write.sep.0.h"
/* method serialization_write#JsonSerializer#stream for (self: JsonSerializer): Writer */
val* json___json__JsonSerializer___stream(val* self) {
val* var /* : Writer */;
val* var1 /* : Writer */;
var1 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_write#JsonSerializer#stream= for (self: JsonSerializer, Writer) */
void json___json__JsonSerializer___stream_61d(val* self, val* p0) {
self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val = p0; /* _stream on <self:JsonSerializer> */
RET_LABEL:;
}
/* method serialization_write#JsonSerializer#plain_json for (self: JsonSerializer): Bool */
short int json___json__JsonSerializer___plain_json(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s; /* _plain_json on <self:JsonSerializer> */
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_write#JsonSerializer#plain_json= for (self: JsonSerializer, Bool) */
void json___json__JsonSerializer___plain_json_61d(val* self, short int p0) {
self->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s = p0; /* _plain_json on <self:JsonSerializer> */
RET_LABEL:;
}
/* method serialization_write#JsonSerializer#pretty_json for (self: JsonSerializer): Bool */
short int json___json__JsonSerializer___pretty_json(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_json__serialization_write__JsonSerializer___pretty_json].s; /* _pretty_json on <self:JsonSerializer> */
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_write#JsonSerializer#pretty_json= for (self: JsonSerializer, Bool) */
void json___json__JsonSerializer___pretty_json_61d(val* self, short int p0) {
self->attrs[COLOR_json__serialization_write__JsonSerializer___pretty_json].s = p0; /* _pretty_json on <self:JsonSerializer> */
RET_LABEL:;
}
/* method serialization_write#JsonSerializer#indent_level for (self: JsonSerializer): Int */
long json___json__JsonSerializer___indent_level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l; /* _indent_level on <self:JsonSerializer> */
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_write#JsonSerializer#indent_level= for (self: JsonSerializer, Int) */
void json___json__JsonSerializer___indent_level_61d(val* self, long p0) {
self->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l = p0; /* _indent_level on <self:JsonSerializer> */
RET_LABEL:;
}
/* method serialization_write#JsonSerializer#open_objects for (self: JsonSerializer): Array[Object] */
val* json___json__JsonSerializer___open_objects(val* self) {
val* var /* : Array[Object] */;
val* var1 /* : Array[Object] */;
var1 = self->attrs[COLOR_json__serialization_write__JsonSerializer___open_objects].val; /* _open_objects on <self:JsonSerializer> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _open_objects");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 62);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_write#JsonSerializer#first_attribute for (self: JsonSerializer): Bool */
short int json___json__JsonSerializer___first_attribute(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_json__serialization_write__JsonSerializer___first_attribute].s; /* _first_attribute on <self:JsonSerializer> */
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_write#JsonSerializer#first_attribute= for (self: JsonSerializer, Bool) */
void json___json__JsonSerializer___first_attribute_61d(val* self, short int p0) {
self->attrs[COLOR_json__serialization_write__JsonSerializer___first_attribute].s = p0; /* _first_attribute on <self:JsonSerializer> */
RET_LABEL:;
}
/* method serialization_write#JsonSerializer#serialize for (self: JsonSerializer, nullable Serializable) */
void json___json__JsonSerializer___serialization__Serializer__serialize(val* self, val* p0) {
val* var_object /* var object: nullable Serializable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var4 /* : Writer */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Array[Object] */;
val* var13 /* : Array[Object] */;
val* var_ /* var : Array[Object] */;
val* var14 /* : IndexedIterator[nullable Object] */;
val* var_15 /* var : IndexedIterator[Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_o /* var o: Object */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : Writer */;
val* var25 /* : Writer */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : Array[Object] */;
val* var32 /* : Array[Object] */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : Array[Object] */;
val* var40 /* : Array[Object] */;
val* var41 /* : nullable Object */;
var_object = p0;
if (var_object == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
var1 = ((short int(*)(val* self, val* p0))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_object, ((val*)NULL)); /* == on <var_object:nullable Serializable>*/
var = var1;
}
if (var){
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var4 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "null";
var7 = core__abstract_text___CString___to_s_full(var6, 4l, 4l);
var5 = var7;
varonce = var5;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__stream__Writer__write]))(var2, var5); /* write on <var2:Writer>*/
}
} else {
{
{ /* Inline serialization_write#JsonSerializer#plain_json (self) on <self:JsonSerializer> */
var10 = self->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s; /* _plain_json on <self:JsonSerializer> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline serialization_write#JsonSerializer#open_objects (self) on <self:JsonSerializer> */
var13 = self->attrs[COLOR_json__serialization_write__JsonSerializer___open_objects].val; /* _open_objects on <self:JsonSerializer> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _open_objects");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 62);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_ = var11;
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_15 = var14;
for(;;) {
{
var16 = ((short int(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_15); /* is_ok on <var_15:IndexedIterator[Object]>*/
}
if (var16){
} else {
goto BREAK_label;
}
{
var17 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_15); /* item on <var_15:IndexedIterator[Object]>*/
}
var_o = var17;
{
var18 = serialization___core__Object___is_same_serialized(var_object, var_o);
}
if (var18){
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "Cycle detected in serialized object, replacing reference with \'null\'.";
var22 = core__abstract_text___CString___to_s_full(var21, 69l, 69l);
var20 = var22;
varonce19 = var20;
}
{
serialization___serialization__Serializer___warn(self, var20); /* Direct call serialization#Serializer#warn on <self:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var25 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "null";
var29 = core__abstract_text___CString___to_s_full(var28, 4l, 4l);
var27 = var29;
varonce26 = var27;
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__stream__Writer__write]))(var23, var27); /* write on <var23:Writer>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_15); /* next on <var_15:IndexedIterator[Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_15); /* finish on <var_15:IndexedIterator[Object]>*/
}
{
{ /* Inline serialization_write#JsonSerializer#open_objects (self) on <self:JsonSerializer> */
var32 = self->attrs[COLOR_json__serialization_write__JsonSerializer___open_objects].val; /* _open_objects on <self:JsonSerializer> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _open_objects");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 62);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var30, var_object); /* Direct call array#Array#add on <var30:Array[Object]>*/
}
} else {
}
{
{ /* Inline serialization_write#JsonSerializer#first_attribute= (self,1) on <self:JsonSerializer> */
self->attrs[COLOR_json__serialization_write__JsonSerializer___first_attribute].s = 1; /* _first_attribute on <self:JsonSerializer> */
RET_LABEL33:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_json__serialization_write__Serializable__accept_json_serializer]))(var_object, self); /* accept_json_serializer on <var_object:nullable Serializable(Serializable)>*/
}
{
{ /* Inline serialization_write#JsonSerializer#first_attribute= (self,0) on <self:JsonSerializer> */
self->attrs[COLOR_json__serialization_write__JsonSerializer___first_attribute].s = 0; /* _first_attribute on <self:JsonSerializer> */
RET_LABEL34:(void)0;
}
}
{
{ /* Inline serialization_write#JsonSerializer#plain_json (self) on <self:JsonSerializer> */
var37 = self->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s; /* _plain_json on <self:JsonSerializer> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (var35){
{
{ /* Inline serialization_write#JsonSerializer#open_objects (self) on <self:JsonSerializer> */
var40 = self->attrs[COLOR_json__serialization_write__JsonSerializer___open_objects].val; /* _open_objects on <self:JsonSerializer> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _open_objects");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 62);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var38);
}
} else {
}
}
RET_LABEL:;
}
/* method serialization_write#JsonSerializer#serialize_attribute for (self: JsonSerializer, String, nullable Object) */
void json___json__JsonSerializer___serialization__Serializer__serialize_attribute(val* self, val* p0, val* p1) {
val* var_name /* var name: String */;
val* var_value /* var value: nullable Object */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Writer */;
val* var11 /* : Writer */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var16 /* : Writer */;
val* var18 /* : Writer */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : Writer */;
val* var25 /* : Writer */;
val* var26 /* : Writer */;
val* var28 /* : Writer */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : Writer */;
val* var38 /* : Writer */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
var_name = p0;
var_value = p1;
{
{ /* Inline serialization_write#JsonSerializer#plain_json (self) on <self:JsonSerializer> */
var3 = self->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s; /* _plain_json on <self:JsonSerializer> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
var_ = var4;
if (var4){
var = var_;
} else {
{
{ /* Inline serialization_write#JsonSerializer#first_attribute (self) on <self:JsonSerializer> */
var7 = self->attrs[COLOR_json__serialization_write__JsonSerializer___first_attribute].s; /* _first_attribute on <self:JsonSerializer> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = !var5;
var = var8;
}
if (var){
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var11 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = ",";
var14 = core__abstract_text___CString___to_s_full(var13, 1l, 1l);
var12 = var14;
varonce = var12;
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_core__stream__Writer__write]))(var9, var12); /* write on <var9:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#first_attribute= (self,0) on <self:JsonSerializer> */
self->attrs[COLOR_json__serialization_write__JsonSerializer___first_attribute].s = 0; /* _first_attribute on <self:JsonSerializer> */
RET_LABEL15:(void)0;
}
}
} else {
}
{
json___json__JsonSerializer___new_line_and_indent(self); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <self:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var18 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "\"";
var22 = core__abstract_text___CString___to_s_full(var21, 1l, 1l);
var20 = var22;
varonce19 = var20;
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_core__stream__Writer__write]))(var16, var20); /* write on <var16:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var25 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__stream__Writer__write]))(var23, var_name); /* write on <var23:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var28 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "\":";
var32 = core__abstract_text___CString___to_s_full(var31, 2l, 2l);
var30 = var32;
varonce29 = var30;
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_core__stream__Writer__write]))(var26, var30); /* write on <var26:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#pretty_json (self) on <self:JsonSerializer> */
var35 = self->attrs[COLOR_json__serialization_write__JsonSerializer___pretty_json].s; /* _pretty_json on <self:JsonSerializer> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (var33){
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var38 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = " ";
var42 = core__abstract_text___CString___to_s_full(var41, 1l, 1l);
var40 = var42;
varonce39 = var40;
}
{
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_core__stream__Writer__write]))(var36, var40); /* write on <var36:Writer>*/
}
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_json___json__JsonSerializer___serialization__Serializer__serialize_attribute]))(self, p0, p1); /* serialize_attribute on <self:JsonSerializer>*/
}
RET_LABEL:;
}
/* method serialization_write#JsonSerializer#serialize_reference for (self: JsonSerializer, Serializable) */
void json___json__JsonSerializer___serialization__Serializer__serialize_reference(val* self, val* p0) {
val* var_object /* var object: Serializable */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
val* var5 /* : SerializerCache */;
short int var6 /* : Bool */;
val* var7 /* : SerializerCache */;
long var8 /* : Int */;
long var_id /* var id: Int */;
val* var9 /* : Writer */;
val* var11 /* : Writer */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var_15 /* var : JsonSerializer */;
long var16 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var22 /* : Int */;
val* var24 /* : Writer */;
val* var26 /* : Writer */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : Writer */;
val* var33 /* : Writer */;
val* var34 /* : String */;
val* var_35 /* var : JsonSerializer */;
long var36 /* : Int */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
val* var47 /* : Writer */;
val* var49 /* : Writer */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
var_object = p0;
{
{ /* Inline serialization_write#JsonSerializer#plain_json (self) on <self:JsonSerializer> */
var3 = self->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s; /* _plain_json on <self:JsonSerializer> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
var_ = var4;
if (var4){
{
var5 = serialization___serialization__CachingSerializer___cache(self);
}
{
var6 = serialization___serialization__SerializerCache___has_object(var5, var_object);
}
var = var6;
} else {
var = var_;
}
if (var){
{
var7 = serialization___serialization__CachingSerializer___cache(self);
}
{
var8 = serialization___serialization__SerializerCache___id_for(var7, var_object);
}
var_id = var8;
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var11 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "{";
var14 = core__abstract_text___CString___to_s_full(var13, 1l, 1l);
var12 = var14;
varonce = var12;
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_core__stream__Writer__write]))(var9, var12); /* write on <var9:Writer>*/
}
var_15 = self;
{
{ /* Inline serialization_write#JsonSerializer#indent_level (var_15) on <var_15:JsonSerializer> */
var18 = var_15->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l; /* _indent_level on <var_15:JsonSerializer> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var16 + 1l;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline serialization_write#JsonSerializer#indent_level= (var_15,var19) on <var_15:JsonSerializer> */
var_15->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l = var19; /* _indent_level on <var_15:JsonSerializer> */
RET_LABEL23:(void)0;
}
}
{
json___json__JsonSerializer___new_line_and_indent(self); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <self:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var26 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "\"__kind\": \"ref\", \"__id\": ";
var30 = core__abstract_text___CString___to_s_full(var29, 25l, 25l);
var28 = var30;
varonce27 = var28;
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_core__stream__Writer__write]))(var24, var28); /* write on <var24:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var33 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = core__flat___Int___core__abstract_text__Object__to_s(var_id);
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_core__stream__Writer__write]))(var31, var34); /* write on <var31:Writer>*/
}
var_35 = self;
{
{ /* Inline serialization_write#JsonSerializer#indent_level (var_35) on <var_35:JsonSerializer> */
var38 = var_35->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l; /* _indent_level on <var_35:JsonSerializer> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var36,1l) on <var36:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var41 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var45 = var36 - 1l;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline serialization_write#JsonSerializer#indent_level= (var_35,var39) on <var_35:JsonSerializer> */
var_35->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l = var39; /* _indent_level on <var_35:JsonSerializer> */
RET_LABEL46:(void)0;
}
}
{
json___json__JsonSerializer___new_line_and_indent(self); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <self:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var49 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "}";
var53 = core__abstract_text___CString___to_s_full(var52, 1l, 1l);
var51 = var53;
varonce50 = var51;
}
{
((void(*)(val* self, val* p0))(var47->class->vft[COLOR_core__stream__Writer__write]))(var47, var51); /* write on <var47:Writer>*/
}
} else {
{
json___json__JsonSerializer___serialization__Serializer__serialize(self, var_object); /* Direct call serialization_write#JsonSerializer#serialize on <self:JsonSerializer>*/
}
}
RET_LABEL:;
}
/* method serialization_write#JsonSerializer#new_line_and_indent for (self: JsonSerializer) */
void json___json__JsonSerializer___new_line_and_indent(val* self) {
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : Writer */;
val* var5 /* : Writer */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
long var9 /* : Int */;
long var11 /* : Int */;
val* var12 /* : Range[Int] */;
val* var_ /* var : Range[Int] */;
val* var13 /* : Iterator[Discrete] */;
val* var_14 /* var : Iterator[Int] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
long var_i /* var i: Int */;
val* var18 /* : Writer */;
val* var20 /* : Writer */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
{
{ /* Inline serialization_write#JsonSerializer#pretty_json (self) on <self:JsonSerializer> */
var2 = self->attrs[COLOR_json__serialization_write__JsonSerializer___pretty_json].s; /* _pretty_json on <self:JsonSerializer> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var5 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "\n";
var8 = core__abstract_text___CString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__stream__Writer__write]))(var3, var6); /* write on <var3:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#indent_level (self) on <self:JsonSerializer> */
var11 = self->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l; /* _indent_level on <self:JsonSerializer> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = core__range___Int___times(var9);
}
var_ = var12;
{
var13 = core___core__Range___core__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[Int]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[Int]>*/
}
var17 = (long)(var16)>>2;
var_i = var17;
{
{ /* Inline serialization_write#JsonSerializer#stream (self) on <self:JsonSerializer> */
var20 = self->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <self:JsonSerializer> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "\t";
var24 = core__abstract_text___CString___to_s_full(var23, 1l, 1l);
var22 = var24;
varonce21 = var22;
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_core__stream__Writer__write]))(var18, var22); /* write on <var18:Writer>*/
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[Int]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[Int]>*/
}
} else {
}
RET_LABEL:;
}
/* method serialization_write#JsonSerializer#init for (self: JsonSerializer) */
void json___json__JsonSerializer___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_json___json__JsonSerializer___core__kernel__Object__init]))(self); /* init on <self:JsonSerializer>*/
}
RET_LABEL:;
}
/* method serialization_write#Text#accept_json_serializer for (self: Text, JsonSerializer) */
void json__serialization_write___core__Text___Serializable__accept_json_serializer(val* self, val* p0) {
val* var_v /* var v: JsonSerializer */;
val* var /* : Writer */;
val* var2 /* : Writer */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
long var_i /* var i: Int */;
long var6 /* : Int */;
long var_ /* var : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
uint32_t var11 /* : Char */;
uint32_t var_char /* var char: Char */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Writer */;
val* var17 /* : Writer */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : Writer */;
val* var27 /* : Writer */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : Writer */;
val* var44 /* : Writer */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : Writer */;
val* var54 /* : Writer */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : Writer */;
val* var64 /* : Writer */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : Writer */;
val* var71 /* : Writer */;
val* var72 /* : String */;
val* var73 /* : Writer */;
val* var75 /* : Writer */;
val* var76 /* : String */;
long var77 /* : Int */;
val* var78 /* : Writer */;
val* var80 /* : Writer */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
var_v = p0;
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var2 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "\"";
var5 = core__abstract_text___CString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce = var3;
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__stream__Writer__write]))(var, var3); /* write on <var:Writer>*/
}
var_i = 0l;
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var6;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var9 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var10 = var_i < var_;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
} else {
goto BREAK_label;
}
{
var11 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
var_char = var11;
{
{ /* Inline kernel#Char#== (var_char,'\\') on <var_char:Char> */
var14 = var_char == '\\';
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var17 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "\\\\";
var21 = core__abstract_text___CString___to_s_full(var20, 2l, 2l);
var19 = var21;
varonce18 = var19;
}
{
((void(*)(val* self, val* p0))(var15->class->vft[COLOR_core__stream__Writer__write]))(var15, var19); /* write on <var15:Writer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_char,'\"') on <var_char:Char> */
var24 = var_char == '\"';
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var27 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "\\\"";
var31 = core__abstract_text___CString___to_s_full(var30, 2l, 2l);
var29 = var31;
varonce28 = var29;
}
{
((void(*)(val* self, val* p0))(var25->class->vft[COLOR_core__stream__Writer__write]))(var25, var29); /* write on <var25:Writer>*/
}
} else {
{
{ /* Inline kernel#Char#< (var_char,' ') on <var_char:Char> */
/* Covariant cast for argument 0 (i) <' ':Char> isa OTHER */
/* <' ':Char> isa OTHER */
var34 = 1; /* easy <' ':Char> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 914);
fatal_exit(1);
}
var38 = var_char < ' ';
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
{
{ /* Inline kernel#Char#== (var_char,'\n') on <var_char:Char> */
var41 = var_char == '\n';
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var44 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "\\n";
var48 = core__abstract_text___CString___to_s_full(var47, 2l, 2l);
var46 = var48;
varonce45 = var46;
}
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_core__stream__Writer__write]))(var42, var46); /* write on <var42:Writer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_char,'\015') on <var_char:Char> */
var51 = var_char == '\015';
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var54 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "\\r";
var58 = core__abstract_text___CString___to_s_full(var57, 2l, 2l);
var56 = var58;
varonce55 = var56;
}
{
((void(*)(val* self, val* p0))(var52->class->vft[COLOR_core__stream__Writer__write]))(var52, var56); /* write on <var52:Writer>*/
}
} else {
{
{ /* Inline kernel#Char#== (var_char,'\t') on <var_char:Char> */
var61 = var_char == '\t';
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var64 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "\\t";
var68 = core__abstract_text___CString___to_s_full(var67, 2l, 2l);
var66 = var68;
varonce65 = var66;
}
{
((void(*)(val* self, val* p0))(var62->class->vft[COLOR_core__stream__Writer__write]))(var62, var66); /* write on <var62:Writer>*/
}
} else {
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var71 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = core__abstract_text___Char___escape_to_utf16(var_char);
}
{
((void(*)(val* self, val* p0))(var69->class->vft[COLOR_core__stream__Writer__write]))(var69, var72); /* write on <var69:Writer>*/
}
}
}
}
} else {
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var75 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = core__abstract_text___Char___Object__to_s(var_char);
}
{
((void(*)(val* self, val* p0))(var73->class->vft[COLOR_core__stream__Writer__write]))(var73, var76); /* write on <var73:Writer>*/
}
}
}
}
{
var77 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var77;
}
BREAK_label: (void)0;
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var80 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "\"";
var84 = core__abstract_text___CString___to_s_full(var83, 1l, 1l);
var82 = var84;
varonce81 = var82;
}
{
((void(*)(val* self, val* p0))(var78->class->vft[COLOR_core__stream__Writer__write]))(var78, var82); /* write on <var78:Writer>*/
}
RET_LABEL:;
}
/* method serialization_write#Serializable#serialize_to_json for (self: Serializable, nullable Bool, nullable Bool): String */
val* json__serialization_write___serialization__Serializable___serialize_to_json(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_plain /* var plain: nullable Bool */;
val* var_pretty /* var pretty: nullable Bool */;
val* var1 /* : StringWriter */;
val* var_stream /* var stream: StringWriter */;
val* var3 /* : JsonSerializer */;
val* var_serializer /* var serializer: JsonSerializer */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var10 /* : String */;
var_plain = p0;
var_pretty = p1;
var1 = NEW_core__StringWriter(&type_core__StringWriter);
{
{ /* Inline kernel#Object#init (var1) on <var1:StringWriter> */
RET_LABEL2:(void)0;
}
}
var_stream = var1;
var3 = NEW_json__JsonSerializer(&type_json__JsonSerializer);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_json__serialization_write__JsonSerializer__stream_61d]))(var3, var_stream); /* stream= on <var3:JsonSerializer>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:JsonSerializer>*/
}
var_serializer = var3;
if (var_plain!=NULL) {
var5 = (short int)((long)(var_plain)>>2);
var4 = var5;
} else {
var4 = 0;
}
{
{ /* Inline serialization_write#JsonSerializer#plain_json= (var_serializer,var4) on <var_serializer:JsonSerializer> */
var_serializer->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s = var4; /* _plain_json on <var_serializer:JsonSerializer> */
RET_LABEL6:(void)0;
}
}
if (var_pretty!=NULL) {
var8 = (short int)((long)(var_pretty)>>2);
var7 = var8;
} else {
var7 = 0;
}
{
{ /* Inline serialization_write#JsonSerializer#pretty_json= (var_serializer,var7) on <var_serializer:JsonSerializer> */
var_serializer->attrs[COLOR_json__serialization_write__JsonSerializer___pretty_json].s = var7; /* _pretty_json on <var_serializer:JsonSerializer> */
RET_LABEL9:(void)0;
}
}
{
json___json__JsonSerializer___serialization__Serializer__serialize(var_serializer, self); /* Direct call serialization_write#JsonSerializer#serialize on <var_serializer:JsonSerializer>*/
}
{
core___core__StringWriter___Stream__close(var_stream); /* Direct call stream#StringWriter#close on <var_stream:StringWriter>*/
}
{
var10 = core___core__StringWriter___core__abstract_text__Object__to_s(var_stream);
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_write#Serializable#accept_json_serializer for (self: Serializable, JsonSerializer) */
void json__serialization_write___serialization__Serializable___accept_json_serializer(val* self, val* p0) {
val* var_v /* var v: JsonSerializer */;
val* var /* : SerializerCache */;
long var1 /* : Int */;
long var_id /* var id: Int */;
val* var2 /* : Writer */;
val* var4 /* : Writer */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
val* var_ /* var : JsonSerializer */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : Writer */;
val* var22 /* : Writer */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : Writer */;
val* var29 /* : Writer */;
val* var30 /* : String */;
val* var31 /* : Writer */;
val* var33 /* : Writer */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : Writer */;
val* var40 /* : Writer */;
val* var41 /* : String */;
val* var42 /* : Writer */;
val* var44 /* : Writer */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var_49 /* var : JsonSerializer */;
long var50 /* : Int */;
long var52 /* : Int */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
val* var61 /* : Writer */;
val* var63 /* : Writer */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
var_v = p0;
{
var = serialization___serialization__CachingSerializer___cache(var_v);
}
{
var1 = serialization___serialization__SerializerCache___new_id_for(var, self);
}
var_id = var1;
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var4 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "{";
var7 = core__abstract_text___CString___to_s_full(var6, 1l, 1l);
var5 = var7;
varonce = var5;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__stream__Writer__write]))(var2, var5); /* write on <var2:Writer>*/
}
var_ = var_v;
{
{ /* Inline serialization_write#JsonSerializer#indent_level (var_) on <var_:JsonSerializer> */
var10 = var_->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l; /* _indent_level on <var_:JsonSerializer> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var8,1l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var8 + 1l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline serialization_write#JsonSerializer#indent_level= (var_,var11) on <var_:JsonSerializer> */
var_->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l = var11; /* _indent_level on <var_:JsonSerializer> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline serialization_write#JsonSerializer#plain_json (var_v) on <var_v:JsonSerializer> */
var18 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s; /* _plain_json on <var_v:JsonSerializer> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = !var16;
if (var19){
{
json___json__JsonSerializer___new_line_and_indent(var_v); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <var_v:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var22 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "\"__kind\": \"obj\", \"__id\": ";
var26 = core__abstract_text___CString___to_s_full(var25, 25l, 25l);
var24 = var26;
varonce23 = var24;
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_core__stream__Writer__write]))(var20, var24); /* write on <var20:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var29 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = core__flat___Int___core__abstract_text__Object__to_s(var_id);
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_core__stream__Writer__write]))(var27, var30); /* write on <var27:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var33 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ", \"__class\": \"";
var37 = core__abstract_text___CString___to_s_full(var36, 14l, 14l);
var35 = var37;
varonce34 = var35;
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_core__stream__Writer__write]))(var31, var35); /* write on <var31:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var40 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = core__abstract_text___Object___class_name(self);
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_core__stream__Writer__write]))(var38, var41); /* write on <var38:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var44 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "\"";
var48 = core__abstract_text___CString___to_s_full(var47, 1l, 1l);
var46 = var48;
varonce45 = var46;
}
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_core__stream__Writer__write]))(var42, var46); /* write on <var42:Writer>*/
}
} else {
}
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_serialization__Serializable__core_serialize_to]))(self, var_v); /* core_serialize_to on <self:Serializable>*/
}
var_49 = var_v;
{
{ /* Inline serialization_write#JsonSerializer#indent_level (var_49) on <var_49:JsonSerializer> */
var52 = var_49->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l; /* _indent_level on <var_49:JsonSerializer> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var50,1l) on <var50:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var59 = var50 - 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline serialization_write#JsonSerializer#indent_level= (var_49,var53) on <var_49:JsonSerializer> */
var_49->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l = var53; /* _indent_level on <var_49:JsonSerializer> */
RET_LABEL60:(void)0;
}
}
{
json___json__JsonSerializer___new_line_and_indent(var_v); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <var_v:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var63 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "}";
var67 = core__abstract_text___CString___to_s_full(var66, 1l, 1l);
var65 = var67;
varonce64 = var65;
}
{
((void(*)(val* self, val* p0))(var61->class->vft[COLOR_core__stream__Writer__write]))(var61, var65); /* write on <var61:Writer>*/
}
RET_LABEL:;
}
/* method serialization_write#Int#accept_json_serializer for (self: Int, JsonSerializer) */
void json__serialization_write___core__Int___Serializable__accept_json_serializer(long self, val* p0) {
val* var_v /* var v: JsonSerializer */;
val* var /* : Writer */;
val* var2 /* : Writer */;
val* var3 /* : String */;
var_v = p0;
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var2 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core__flat___Int___core__abstract_text__Object__to_s(self);
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__stream__Writer__write]))(var, var3); /* write on <var:Writer>*/
}
RET_LABEL:;
}
/* method serialization_write#Int#accept_json_serializer for (self: Serializable, JsonSerializer) */
void VIRTUAL_json__serialization_write___core__Int___Serializable__accept_json_serializer(val* self, val* p0) {
long var /* : Int */;
var = (long)(self)>>2;
json__serialization_write___core__Int___Serializable__accept_json_serializer(var, p0); /* Direct call serialization_write#Int#accept_json_serializer on <var:Int>*/
RET_LABEL:;
}
/* method serialization_write#Float#accept_json_serializer for (self: Float, JsonSerializer) */
void json__serialization_write___core__Float___Serializable__accept_json_serializer(double self, val* p0) {
val* var_v /* var v: JsonSerializer */;
val* var /* : Writer */;
val* var2 /* : Writer */;
val* var3 /* : String */;
var_v = p0;
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var2 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core__abstract_text___Float___Object__to_s(self);
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__stream__Writer__write]))(var, var3); /* write on <var:Writer>*/
}
RET_LABEL:;
}
/* method serialization_write#Float#accept_json_serializer for (self: Serializable, JsonSerializer) */
void VIRTUAL_json__serialization_write___core__Float___Serializable__accept_json_serializer(val* self, val* p0) {
double var /* : Float */;
var = ((struct instance_core__Float*)self)->value; /* autounbox from Serializable to Float */;
json__serialization_write___core__Float___Serializable__accept_json_serializer(var, p0); /* Direct call serialization_write#Float#accept_json_serializer on <var:Float>*/
RET_LABEL:;
}
/* method serialization_write#Bool#accept_json_serializer for (self: Bool, JsonSerializer) */
void json__serialization_write___core__Bool___Serializable__accept_json_serializer(short int self, val* p0) {
val* var_v /* var v: JsonSerializer */;
val* var /* : Writer */;
val* var2 /* : Writer */;
val* var3 /* : String */;
var_v = p0;
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var2 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core__abstract_text___Bool___Object__to_s(self);
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__stream__Writer__write]))(var, var3); /* write on <var:Writer>*/
}
RET_LABEL:;
}
/* method serialization_write#Bool#accept_json_serializer for (self: Serializable, JsonSerializer) */
void VIRTUAL_json__serialization_write___core__Bool___Serializable__accept_json_serializer(val* self, val* p0) {
short int var /* : Bool */;
var = (short int)((long)(self)>>2);
json__serialization_write___core__Bool___Serializable__accept_json_serializer(var, p0); /* Direct call serialization_write#Bool#accept_json_serializer on <var:Bool>*/
RET_LABEL:;
}
/* method serialization_write#Char#accept_json_serializer for (self: Char, JsonSerializer) */
void json__serialization_write___core__Char___Serializable__accept_json_serializer(uint32_t self, val* p0) {
val* var_v /* var v: JsonSerializer */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : String */;
val* var4 /* : Writer */;
val* var6 /* : Writer */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : Writer */;
val* var13 /* : Writer */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
var_v = p0;
{
{ /* Inline serialization_write#JsonSerializer#plain_json (var_v) on <var_v:JsonSerializer> */
var2 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s; /* _plain_json on <var_v:JsonSerializer> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
var3 = core__abstract_text___Char___Object__to_s(self);
}
{
json__serialization_write___core__Text___Serializable__accept_json_serializer(var3, var_v); /* Direct call serialization_write#Text#accept_json_serializer on <var3:String>*/
}
} else {
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var6 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "{\"__kind\": \"char\", \"__val\": ";
var9 = core__abstract_text___CString___to_s_full(var8, 28l, 28l);
var7 = var9;
varonce = var7;
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__stream__Writer__write]))(var4, var7); /* write on <var4:Writer>*/
}
{
var10 = core__abstract_text___Char___Object__to_s(self);
}
{
json__serialization_write___core__Text___Serializable__accept_json_serializer(var10, var_v); /* Direct call serialization_write#Text#accept_json_serializer on <var10:String>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var13 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "}";
var17 = core__abstract_text___CString___to_s_full(var16, 1l, 1l);
var15 = var17;
varonce14 = var15;
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_core__stream__Writer__write]))(var11, var15); /* write on <var11:Writer>*/
}
}
RET_LABEL:;
}
/* method serialization_write#Char#accept_json_serializer for (self: Serializable, JsonSerializer) */
void VIRTUAL_json__serialization_write___core__Char___Serializable__accept_json_serializer(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(self)>>2);
json__serialization_write___core__Char___Serializable__accept_json_serializer(var, p0); /* Direct call serialization_write#Char#accept_json_serializer on <var:Char>*/
RET_LABEL:;
}
/* method serialization_write#CString#accept_json_serializer for (self: CString, JsonSerializer) */
void json__serialization_write___core__CString___Serializable__accept_json_serializer(char* self, val* p0) {
val* var_v /* var v: JsonSerializer */;
val* var /* : String */;
var_v = p0;
{
var = core__flat___CString___core__abstract_text__Object__to_s(self);
}
{
json__serialization_write___core__Text___Serializable__accept_json_serializer(var, var_v); /* Direct call serialization_write#Text#accept_json_serializer on <var:String>*/
}
RET_LABEL:;
}
/* method serialization_write#CString#accept_json_serializer for (self: Serializable, JsonSerializer) */
void VIRTUAL_json__serialization_write___core__CString___Serializable__accept_json_serializer(val* self, val* p0) {
char* var /* : CString */;
var = ((struct instance_core__CString*)self)->value; /* autounbox from Serializable to CString */;
json__serialization_write___core__CString___Serializable__accept_json_serializer(var, p0); /* Direct call serialization_write#CString#accept_json_serializer on <var:CString>*/
RET_LABEL:;
}
/* method serialization_write#Collection#serialize_to_pure_json for (self: Collection[nullable Object], JsonSerializer) */
void json__serialization_write___core__Collection___serialize_to_pure_json(val* self, val* p0) {
val* var_v /* var v: JsonSerializer */;
val* var /* : Writer */;
val* var2 /* : Writer */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
short int var_is_first /* var is_first: Bool */;
val* var_ /* var : Collection[nullable Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var10 /* : Writer */;
val* var12 /* : Writer */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : Writer */;
val* var22 /* : Writer */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var32 /* : NativeArray[String] */;
static val* varonce31;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : Writer */;
val* var45 /* : Writer */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : Writer */;
val* var52 /* : Writer */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
var_v = p0;
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var2 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "[";
var5 = core__abstract_text___CString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce = var3;
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__stream__Writer__write]))(var, var3); /* write on <var:Writer>*/
}
var_is_first = 1;
var_ = self;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[nullable Object]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[nullable Object]>*/
}
var_e = var9;
if (var_is_first){
var_is_first = 0;
} else {
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var12 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ",";
var16 = core__abstract_text___CString___to_s_full(var15, 1l, 1l);
var14 = var16;
varonce13 = var14;
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__stream__Writer__write]))(var10, var14); /* write on <var10:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#pretty_json (var_v) on <var_v:JsonSerializer> */
var19 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___pretty_json].s; /* _pretty_json on <var_v:JsonSerializer> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var22 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = " ";
var26 = core__abstract_text___CString___to_s_full(var25, 1l, 1l);
var24 = var26;
varonce23 = var24;
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_core__stream__Writer__write]))(var20, var24); /* write on <var20:Writer>*/
}
} else {
}
}
{
var27 = serialization___serialization__Serializer___try_to_serialize(var_v, var_e);
}
var28 = !var27;
if (var28){
if (var_e == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
var30 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var29 = var30;
}
if (unlikely(!var29)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 280);
fatal_exit(1);
}
if (unlikely(varonce31==NULL)) {
var32 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "element of type ";
var36 = core__abstract_text___CString___to_s_full(var35, 16l, 16l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var32)->values[0]=var34;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = " is not serializable.";
var40 = core__abstract_text___CString___to_s_full(var39, 21l, 21l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var32)->values[2]=var38;
} else {
var32 = varonce31;
varonce31 = NULL;
}
{
var41 = core__abstract_text___Object___class_name(var_e);
}
((struct instance_core__NativeArray*)var32)->values[1]=var41;
{
var42 = ((val*(*)(val* self))(var32->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var32); /* native_to_s on <var32:NativeArray[String]>*/
}
varonce31 = var32;
{
serialization___serialization__Serializer___warn(var_v, var42); /* Direct call serialization#Serializer#warn on <var_v:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var45 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "null";
var49 = core__abstract_text___CString___to_s_full(var48, 4l, 4l);
var47 = var49;
varonce46 = var47;
}
{
((void(*)(val* self, val* p0))(var43->class->vft[COLOR_core__stream__Writer__write]))(var43, var47); /* write on <var43:Writer>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[nullable Object]>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var52 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "]";
var56 = core__abstract_text___CString___to_s_full(var55, 1l, 1l);
var54 = var56;
varonce53 = var54;
}
{
((void(*)(val* self, val* p0))(var50->class->vft[COLOR_core__stream__Writer__write]))(var50, var54); /* write on <var50:Writer>*/
}
RET_LABEL:;
}
/* method serialization_write#SimpleCollection#accept_json_serializer for (self: SimpleCollection[nullable Object], JsonSerializer) */
void json__serialization_write___core__SimpleCollection___Serializable__accept_json_serializer(val* self, val* p0) {
val* var_v /* var v: JsonSerializer */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : SerializerCache */;
long var5 /* : Int */;
long var_id /* var id: Int */;
val* var6 /* : Writer */;
val* var8 /* : Writer */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var_ /* var : JsonSerializer */;
long var12 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var18 /* : Int */;
val* var20 /* : Writer */;
val* var22 /* : Writer */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : Writer */;
val* var29 /* : Writer */;
val* var30 /* : String */;
val* var31 /* : Writer */;
val* var33 /* : Writer */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : Writer */;
val* var40 /* : Writer */;
val* var41 /* : String */;
val* var42 /* : Writer */;
val* var44 /* : Writer */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : Writer */;
val* var51 /* : Writer */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var_serializer /* var serializer: Serializer */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var_61 /* var : JsonSerializer */;
long var62 /* : Int */;
long var64 /* : Int */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
val* var73 /* : Writer */;
val* var75 /* : Writer */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
var_v = p0;
{
{ /* Inline serialization_write#JsonSerializer#plain_json (var_v) on <var_v:JsonSerializer> */
var2 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s; /* _plain_json on <var_v:JsonSerializer> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = !var;
if (var3){
{
var4 = serialization___serialization__CachingSerializer___cache(var_v);
}
{
var5 = serialization___serialization__SerializerCache___new_id_for(var4, self);
}
var_id = var5;
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var8 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "{";
var11 = core__abstract_text___CString___to_s_full(var10, 1l, 1l);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__stream__Writer__write]))(var6, var9); /* write on <var6:Writer>*/
}
var_ = var_v;
{
{ /* Inline serialization_write#JsonSerializer#indent_level (var_) on <var_:JsonSerializer> */
var14 = var_->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l; /* _indent_level on <var_:JsonSerializer> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var12,1l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var12 + 1l;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline serialization_write#JsonSerializer#indent_level= (var_,var15) on <var_:JsonSerializer> */
var_->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l = var15; /* _indent_level on <var_:JsonSerializer> */
RET_LABEL19:(void)0;
}
}
{
json___json__JsonSerializer___new_line_and_indent(var_v); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <var_v:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var22 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "\"__kind\": \"obj\", \"__id\": ";
var26 = core__abstract_text___CString___to_s_full(var25, 25l, 25l);
var24 = var26;
varonce23 = var24;
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_core__stream__Writer__write]))(var20, var24); /* write on <var20:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var29 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = core__flat___Int___core__abstract_text__Object__to_s(var_id);
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_core__stream__Writer__write]))(var27, var30); /* write on <var27:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var33 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ", \"__class\": \"";
var37 = core__abstract_text___CString___to_s_full(var36, 14l, 14l);
var35 = var37;
varonce34 = var35;
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_core__stream__Writer__write]))(var31, var35); /* write on <var31:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var40 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = core__abstract_text___Object___class_name(self);
}
{
((void(*)(val* self, val* p0))(var38->class->vft[COLOR_core__stream__Writer__write]))(var38, var41); /* write on <var38:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var44 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "\",";
var48 = core__abstract_text___CString___to_s_full(var47, 2l, 2l);
var46 = var48;
varonce45 = var46;
}
{
((void(*)(val* self, val* p0))(var42->class->vft[COLOR_core__stream__Writer__write]))(var42, var46); /* write on <var42:Writer>*/
}
{
json___json__JsonSerializer___new_line_and_indent(var_v); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <var_v:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var51 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "\"__items\": ";
var55 = core__abstract_text___CString___to_s_full(var54, 11l, 11l);
var53 = var55;
varonce52 = var53;
}
{
((void(*)(val* self, val* p0))(var49->class->vft[COLOR_core__stream__Writer__write]))(var49, var53); /* write on <var49:Writer>*/
}
{
{ /* Inline serialization#Serializable#core_serialize_to (self,var_v) on <self:SimpleCollection[nullable Object]> */
var_serializer = var_v;
RET_LABEL56:(void)0;
}
}
} else {
}
{
json__serialization_write___core__Collection___serialize_to_pure_json(self, var_v); /* Direct call serialization_write#Collection#serialize_to_pure_json on <self:SimpleCollection[nullable Object]>*/
}
{
{ /* Inline serialization_write#JsonSerializer#plain_json (var_v) on <var_v:JsonSerializer> */
var59 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s; /* _plain_json on <var_v:JsonSerializer> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var60 = !var57;
if (var60){
var_61 = var_v;
{
{ /* Inline serialization_write#JsonSerializer#indent_level (var_61) on <var_61:JsonSerializer> */
var64 = var_61->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l; /* _indent_level on <var_61:JsonSerializer> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var62,1l) on <var62:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var67 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var71 = var62 - 1l;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline serialization_write#JsonSerializer#indent_level= (var_61,var65) on <var_61:JsonSerializer> */
var_61->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l = var65; /* _indent_level on <var_61:JsonSerializer> */
RET_LABEL72:(void)0;
}
}
{
json___json__JsonSerializer___new_line_and_indent(var_v); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <var_v:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var75 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "}";
var79 = core__abstract_text___CString___to_s_full(var78, 1l, 1l);
var77 = var79;
varonce76 = var77;
}
{
((void(*)(val* self, val* p0))(var73->class->vft[COLOR_core__stream__Writer__write]))(var73, var77); /* write on <var73:Writer>*/
}
} else {
}
RET_LABEL:;
}
/* method serialization_write#Map#accept_json_serializer for (self: Map[nullable Object, nullable Object], JsonSerializer) */
void json__serialization_write___core__Map___Serializable__accept_json_serializer(val* self, val* p0) {
val* var_v /* var v: JsonSerializer */;
val* var /* : SerializerCache */;
long var1 /* : Int */;
long var_id /* var id: Int */;
val* var2 /* : Writer */;
val* var4 /* : Writer */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
val* var_ /* var : JsonSerializer */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var_first /* var first: Bool */;
val* var_19 /* var : Map[nullable Object, nullable Object] */;
val* var20 /* : MapIterator[nullable Object, nullable Object] */;
val* var_21 /* var : MapIterator[nullable Object, nullable Object] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_key /* var key: nullable Object */;
val* var24 /* : nullable Object */;
val* var_val /* var val: nullable Object */;
short int var25 /* : Bool */;
val* var26 /* : Writer */;
val* var28 /* : Writer */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : Object */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var_k /* var k: Object */;
val* var38 /* : String */;
val* var39 /* : Writer */;
val* var41 /* : Writer */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : Writer */;
val* var51 /* : Writer */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var61 /* : NativeArray[String] */;
static val* varonce60;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : Writer */;
val* var74 /* : Writer */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var80 /* : Writer */;
val* var82 /* : Writer */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : Writer */;
val* var89 /* : Writer */;
val* var90 /* : String */;
val* var91 /* : Writer */;
val* var93 /* : Writer */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : Writer */;
val* var100 /* : Writer */;
val* var101 /* : String */;
val* var102 /* : Writer */;
val* var104 /* : Writer */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : Writer */;
val* var111 /* : Writer */;
long var112 /* : Int */;
val* var113 /* : String */;
val* var114 /* : Writer */;
val* var116 /* : Writer */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : CString */;
val* var120 /* : String */;
val* var121 /* : Writer */;
val* var123 /* : Writer */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : CString */;
val* var127 /* : String */;
val* var128 /* : Collection[nullable Object] */;
val* var129 /* : Writer */;
val* var131 /* : Writer */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
val* var136 /* : Writer */;
val* var138 /* : Writer */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
val* var143 /* : Collection[nullable Object] */;
val* var_serializer /* var serializer: Serializer */;
val* var_145 /* var : JsonSerializer */;
long var146 /* : Int */;
long var148 /* : Int */;
long var149 /* : Int */;
short int var151 /* : Bool */;
int cltype152;
int idtype153;
const char* var_class_name154;
long var155 /* : Int */;
val* var157 /* : Writer */;
val* var159 /* : Writer */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : CString */;
val* var163 /* : String */;
var_v = p0;
{
var = serialization___serialization__CachingSerializer___cache(var_v);
}
{
var1 = serialization___serialization__SerializerCache___new_id_for(var, self);
}
var_id = var1;
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var4 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "{";
var7 = core__abstract_text___CString___to_s_full(var6, 1l, 1l);
var5 = var7;
varonce = var5;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__stream__Writer__write]))(var2, var5); /* write on <var2:Writer>*/
}
var_ = var_v;
{
{ /* Inline serialization_write#JsonSerializer#indent_level (var_) on <var_:JsonSerializer> */
var10 = var_->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l; /* _indent_level on <var_:JsonSerializer> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var8,1l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var8 + 1l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline serialization_write#JsonSerializer#indent_level= (var_,var11) on <var_:JsonSerializer> */
var_->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l = var11; /* _indent_level on <var_:JsonSerializer> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline serialization_write#JsonSerializer#plain_json (var_v) on <var_v:JsonSerializer> */
var18 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s; /* _plain_json on <var_v:JsonSerializer> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16){
var_first = 1;
var_19 = self;
{
var20 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_19); /* iterator on <var_19:Map[nullable Object, nullable Object]>*/
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_21); /* is_ok on <var_21:MapIterator[nullable Object, nullable Object]>*/
}
if (var22){
} else {
goto BREAK_label;
}
{
var23 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_21); /* key on <var_21:MapIterator[nullable Object, nullable Object]>*/
}
var_key = var23;
{
var24 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_21); /* item on <var_21:MapIterator[nullable Object, nullable Object]>*/
}
var_val = var24;
var25 = !var_first;
if (var25){
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var28 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = ",";
var32 = core__abstract_text___CString___to_s_full(var31, 1l, 1l);
var30 = var32;
varonce29 = var30;
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_core__stream__Writer__write]))(var26, var30); /* write on <var26:Writer>*/
}
} else {
var_first = 0;
}
{
json___json__JsonSerializer___new_line_and_indent(var_v); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <var_v:JsonSerializer>*/
}
if (var_key!=NULL) {
var33 = var_key;
} else {
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "null";
var37 = core__abstract_text___CString___to_s_full(var36, 4l, 4l);
var35 = var37;
varonce34 = var35;
}
var33 = var35;
}
var_k = var33;
{
var38 = ((val*(*)(val* self))((((long)var_k&3)?class_info[((long)var_k&3)]:var_k->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_k); /* to_s on <var_k:Object>*/
}
{
json__serialization_write___core__Text___Serializable__accept_json_serializer(var38, var_v); /* Direct call serialization_write#Text#accept_json_serializer on <var38:String>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var41 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ":";
var45 = core__abstract_text___CString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_core__stream__Writer__write]))(var39, var43); /* write on <var39:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#pretty_json (var_v) on <var_v:JsonSerializer> */
var48 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___pretty_json].s; /* _pretty_json on <var_v:JsonSerializer> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (var46){
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var51 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = " ";
var55 = core__abstract_text___CString___to_s_full(var54, 1l, 1l);
var53 = var55;
varonce52 = var53;
}
{
((void(*)(val* self, val* p0))(var49->class->vft[COLOR_core__stream__Writer__write]))(var49, var53); /* write on <var49:Writer>*/
}
} else {
}
{
var56 = serialization___serialization__Serializer___try_to_serialize(var_v, var_val);
}
var57 = !var56;
if (var57){
if (var_val == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
var59 = ((short int(*)(val* self, val* p0))((((long)var_val&3)?class_info[((long)var_val&3)]:var_val->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_val, ((val*)NULL)); /* != on <var_val:nullable Object>*/
var58 = var59;
}
if (unlikely(!var58)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 341);
fatal_exit(1);
}
if (unlikely(varonce60==NULL)) {
var61 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "element of type ";
var65 = core__abstract_text___CString___to_s_full(var64, 16l, 16l);
var63 = var65;
varonce62 = var63;
}
((struct instance_core__NativeArray*)var61)->values[0]=var63;
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = " is not serializable.";
var69 = core__abstract_text___CString___to_s_full(var68, 21l, 21l);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var61)->values[2]=var67;
} else {
var61 = varonce60;
varonce60 = NULL;
}
{
var70 = core__abstract_text___Object___class_name(var_val);
}
((struct instance_core__NativeArray*)var61)->values[1]=var70;
{
var71 = ((val*(*)(val* self))(var61->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var61); /* native_to_s on <var61:NativeArray[String]>*/
}
varonce60 = var61;
{
serialization___serialization__Serializer___warn(var_v, var71); /* Direct call serialization#Serializer#warn on <var_v:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var74 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "null";
var78 = core__abstract_text___CString___to_s_full(var77, 4l, 4l);
var76 = var78;
varonce75 = var76;
}
{
((void(*)(val* self, val* p0))(var72->class->vft[COLOR_core__stream__Writer__write]))(var72, var76); /* write on <var72:Writer>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_21); /* next on <var_21:MapIterator[nullable Object, nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_21) on <var_21:MapIterator[nullable Object, nullable Object]> */
RET_LABEL79:(void)0;
}
}
} else {
{
json___json__JsonSerializer___new_line_and_indent(var_v); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <var_v:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var82 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "\"__kind\": \"obj\", \"__id\": ";
var86 = core__abstract_text___CString___to_s_full(var85, 25l, 25l);
var84 = var86;
varonce83 = var84;
}
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_core__stream__Writer__write]))(var80, var84); /* write on <var80:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var89 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
var90 = core__flat___Int___core__abstract_text__Object__to_s(var_id);
}
{
((void(*)(val* self, val* p0))(var87->class->vft[COLOR_core__stream__Writer__write]))(var87, var90); /* write on <var87:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var93 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = ", \"__class\": \"";
var97 = core__abstract_text___CString___to_s_full(var96, 14l, 14l);
var95 = var97;
varonce94 = var95;
}
{
((void(*)(val* self, val* p0))(var91->class->vft[COLOR_core__stream__Writer__write]))(var91, var95); /* write on <var91:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var100 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
var101 = core__abstract_text___Object___class_name(self);
}
{
((void(*)(val* self, val* p0))(var98->class->vft[COLOR_core__stream__Writer__write]))(var98, var101); /* write on <var98:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var104 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "\", \"__length\": ";
var108 = core__abstract_text___CString___to_s_full(var107, 15l, 15l);
var106 = var108;
varonce105 = var106;
}
{
((void(*)(val* self, val* p0))(var102->class->vft[COLOR_core__stream__Writer__write]))(var102, var106); /* write on <var102:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var111 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
var112 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__length]))(self); /* length on <self:Map[nullable Object, nullable Object]>*/
}
{
var113 = core__flat___Int___core__abstract_text__Object__to_s(var112);
}
{
((void(*)(val* self, val* p0))(var109->class->vft[COLOR_core__stream__Writer__write]))(var109, var113); /* write on <var109:Writer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var116 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = ",";
var120 = core__abstract_text___CString___to_s_full(var119, 1l, 1l);
var118 = var120;
varonce117 = var118;
}
{
((void(*)(val* self, val* p0))(var114->class->vft[COLOR_core__stream__Writer__write]))(var114, var118); /* write on <var114:Writer>*/
}
{
json___json__JsonSerializer___new_line_and_indent(var_v); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <var_v:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var123 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "\"__keys\": ";
var127 = core__abstract_text___CString___to_s_full(var126, 10l, 10l);
var125 = var127;
varonce124 = var125;
}
{
((void(*)(val* self, val* p0))(var121->class->vft[COLOR_core__stream__Writer__write]))(var121, var125); /* write on <var121:Writer>*/
}
{
var128 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__keys]))(self); /* keys on <self:Map[nullable Object, nullable Object]>*/
}
{
json__serialization_write___core__Collection___serialize_to_pure_json(var128, var_v); /* Direct call serialization_write#Collection#serialize_to_pure_json on <var128:Collection[nullable Object](RemovableCollection[nullable Object])>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var131 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = ",";
var135 = core__abstract_text___CString___to_s_full(var134, 1l, 1l);
var133 = var135;
varonce132 = var133;
}
{
((void(*)(val* self, val* p0))(var129->class->vft[COLOR_core__stream__Writer__write]))(var129, var133); /* write on <var129:Writer>*/
}
{
json___json__JsonSerializer___new_line_and_indent(var_v); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <var_v:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var138 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var138 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var136 = var138;
RET_LABEL137:(void)0;
}
}
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "\"__values\": ";
var142 = core__abstract_text___CString___to_s_full(var141, 12l, 12l);
var140 = var142;
varonce139 = var140;
}
{
((void(*)(val* self, val* p0))(var136->class->vft[COLOR_core__stream__Writer__write]))(var136, var140); /* write on <var136:Writer>*/
}
{
var143 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__values]))(self); /* values on <self:Map[nullable Object, nullable Object]>*/
}
{
json__serialization_write___core__Collection___serialize_to_pure_json(var143, var_v); /* Direct call serialization_write#Collection#serialize_to_pure_json on <var143:Collection[nullable Object](RemovableCollection[nullable Object])>*/
}
{
{ /* Inline serialization#Serializable#core_serialize_to (self,var_v) on <self:Map[nullable Object, nullable Object]> */
var_serializer = var_v;
RET_LABEL144:(void)0;
}
}
}
var_145 = var_v;
{
{ /* Inline serialization_write#JsonSerializer#indent_level (var_145) on <var_145:JsonSerializer> */
var148 = var_145->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l; /* _indent_level on <var_145:JsonSerializer> */
var146 = var148;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var146,1l) on <var146:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var151 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var151)) {
var_class_name154 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name154);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var155 = var146 - 1l;
var149 = var155;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
{
{ /* Inline serialization_write#JsonSerializer#indent_level= (var_145,var149) on <var_145:JsonSerializer> */
var_145->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l = var149; /* _indent_level on <var_145:JsonSerializer> */
RET_LABEL156:(void)0;
}
}
{
json___json__JsonSerializer___new_line_and_indent(var_v); /* Direct call serialization_write#JsonSerializer#new_line_and_indent on <var_v:JsonSerializer>*/
}
{
{ /* Inline serialization_write#JsonSerializer#stream (var_v) on <var_v:JsonSerializer> */
var159 = var_v->attrs[COLOR_json__serialization_write__JsonSerializer___stream].val; /* _stream on <var_v:JsonSerializer> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_json__serialization_write, 25);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "}";
var163 = core__abstract_text___CString___to_s_full(var162, 1l, 1l);
var161 = var163;
varonce160 = var161;
}
{
((void(*)(val* self, val* p0))(var157->class->vft[COLOR_core__stream__Writer__write]))(var157, var161); /* write on <var157:Writer>*/
}
RET_LABEL:;
}
