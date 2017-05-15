#include "core__flat.sep.0.h"
/* method flat#FlatBufferCharView#reverse_iterator_from for (self: FlatBufferCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferCharReverseIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferCharReverseIterator(&type_core__flat__FlatBufferCharReverseIterator);
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1274);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__target_61d]))(var1, var2); /* target= on <var1:FlatBufferCharReverseIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos_61d]))(var1, var_pos); /* curr_pos= on <var1:FlatBufferCharReverseIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#target for (self: FlatBufferCharIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferCharIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1292);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#target= for (self: FlatBufferCharIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferCharIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val = p0; /* _target on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharIterator#max for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l; /* _max on <self:FlatBufferCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#max= for (self: FlatBufferCharIterator, Int) */
void core__flat___core__flat__FlatBufferCharIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l = p0; /* _max on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharIterator#curr_pos for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#curr_pos= for (self: FlatBufferCharIterator, Int) */
void core__flat___core__flat__FlatBufferCharIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharIterator#init for (self: FlatBufferCharIterator) */
void core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatBuffer */;
val* var2 /* : FlatBuffer */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferCharIterator>*/
}
{
{ /* Inline flat#FlatBufferCharIterator#target (self) on <self:FlatBufferCharIterator> */
var2 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1292);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = var->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var:FlatBuffer> */
{
{ /* Inline kernel#Int#- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var3 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline flat#FlatBufferCharIterator#max= (self,var4) on <self:FlatBufferCharIterator> */
self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l = var4; /* _max on <self:FlatBufferCharIterator> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBufferCharIterator#index for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline flat#FlatBufferCharIterator#curr_pos (self) on <self:FlatBufferCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#is_ok for (self: FlatBufferCharIterator): Bool */
short int core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
{
{ /* Inline flat#FlatBufferCharIterator#curr_pos (self) on <self:FlatBufferCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatBufferCharIterator#max (self) on <self:FlatBufferCharIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l; /* _max on <self:FlatBufferCharIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var9 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var10 = var1 <= var4;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#item for (self: FlatBufferCharIterator): Char */
uint32_t core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatBuffer */;
val* var3 /* : FlatBuffer */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline flat#FlatBufferCharIterator#target (self) on <self:FlatBufferCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1292);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatBufferCharIterator#curr_pos (self) on <self:FlatBufferCharIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core__flat___FlatText___core__abstract_text__Text___91d_93d(var1, var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharIterator#next for (self: FlatBufferCharIterator) */
void core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferCharIterator */;
long var /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
var_ = self;
{
{ /* Inline flat#FlatBufferCharIterator#curr_pos (var_) on <var_:FlatBufferCharIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <var_:FlatBufferCharIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatBufferCharIterator#curr_pos= (var_,var3) on <var_:FlatBufferCharIterator> */
var_->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatBufferCharIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat#CString#to_s for (self: CString): String */
val* core__flat___CString___core__abstract_text__Object__to_s(char* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = core__flat___CString___to_s_unsafe(self, ((val*)NULL), ((val*)NULL), ((val*)NULL), ((val*)NULL));
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#CString#to_s for (self: Object): String */
val* VIRTUAL_core__flat___CString___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
char* var2 /* : CString */;
var2 = ((struct instance_core__CString*)self)->value; /* autounbox from Object to CString */;
var1 = core__flat___CString___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method flat#CString#to_s_unsafe for (self: CString, nullable Int, nullable Int, nullable Bool, nullable Bool): String */
val* core__flat___CString___to_s_unsafe(char* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : String */;
val* var_byte_length /* var byte_length: nullable Int */;
val* var_char_length /* var char_length: nullable Int */;
val* var_copy /* var copy: nullable Bool */;
val* var_clean /* var clean: nullable Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : nullable Int */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Bool */;
val* var_str /* var str: nullable Object */;
short int var11 /* : Bool */;
val* var12 /* : FlatString */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
val* var17 /* : nullable Int */;
long var18 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var22 /* : Int */;
long var_from /* var from: Int */;
long var_byte_length23 /* var byte_length: Int */;
long var_st /* var st: Int */;
long var_ln /* var ln: Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
uint32_t var35 /* : UInt32 */;
uint32_t var37 /* : UInt32 */;
uint32_t var_i /* var i: UInt32 */;
uint32_t var38 /* : UInt32 */;
uint32_t var40 /* : UInt32 */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
long var70 /* : Int */;
long var_cln /* var cln: Int */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
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
val* var92 /* : nullable Int */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var_ /* var : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var_98 /* var : Bool */;
char* var99 /* : CString */;
char* var101 /* : CString */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
char* var105 /* : CString */;
long var106 /* : Int */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
const char* var_class_name111;
long var112 /* : Int */;
long var113 /* : Int */;
char* var114 /* : CString */;
char* var116 /* : CString */;
char* var_new_cstr /* var new_cstr: CString */;
long var118 /* : Int */;
long var120 /* : Int */;
val* var121 /* : FlatString */;
val* var122 /* : FlatString */;
long var123 /* : Int */;
long var124 /* : Int */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
val* var127 /* : FlatString */;
val* var128 /* : FlatString */;
long var129 /* : Int */;
long var130 /* : Int */;
var_byte_length = p0;
var_char_length = p1;
var_copy = p2;
var_clean = p3;
if (var_byte_length!=NULL) {
var2 = (long)(var_byte_length)>>2;
var1 = var2;
} else {
{
var3 = core___core__CString___cstring_length(self);
}
var1 = var3;
}
var4 = (val*)(var1<<2|1);
var_byte_length = var4;
if (var_clean!=NULL) {
var6 = (short int)((long)(var_clean)>>2);
var5 = var6;
} else {
var5 = 1;
}
var7 = (val*)((long)(var5)<<2|3);
var_clean = var7;
if (var_copy!=NULL) {
var9 = (short int)((long)(var_copy)>>2);
var8 = var9;
} else {
var8 = 1;
}
var10 = (val*)((long)(var8)<<2|3);
var_copy = var10;
var_str = ((val*)NULL);
var11 = (short int)((long)(var_clean)>>2);
if (var11){
{
var13 = (long)(var_byte_length)>>2;
var12 = core__flat___CString___clean_utf8(self, var13);
}
var_str = var12;
{
{ /* Inline abstract_text#FlatText#length (var_str) on <var_str:nullable Object(FlatString)> */
var16 = var_str->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_str:nullable Object(FlatString)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = (val*)(var14<<2|1);
var_char_length = var17;
} else {
if (var_char_length!=NULL) {
var19 = (long)(var_char_length)>>2;
var18 = var19;
} else {
{
{ /* Inline native#CString#utf8_length (self,0l,var_byte_length) on <self:CString> */
var22 = (long)(var_byte_length)>>2;
var_from = 0l;
var_byte_length23 = var22;
var_st = var_from;
var_ln = 0l;
for(;;) {
{
{ /* Inline kernel#Int#> (var_byte_length23,0l) on <var_byte_length23:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var26 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var27 = var_byte_length23 > 0l;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
for(;;) {
{
{ /* Inline kernel#Int#>= (var_byte_length23,4l) on <var_byte_length23:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var30 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var34 = var_byte_length23 >= 4l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline native#CString#fetch_4_chars (self,var_st) on <self:CString> */
var37 = (long)*((uint32_t*)(self + var_st));
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_i = var35;
{
{ /* Inline fixed_ints#UInt32#& (var_i,((uint32_t)2155905152)) on <var_i:UInt32> */
var40 = var_i & ((uint32_t)2155905152);
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline fixed_ints#UInt32#!= (var38,((uint32_t)0)) on <var38:UInt32> */
var43 = var38 == ((uint32_t)0);
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel#Int#- (var_byte_length23,4l) on <var_byte_length23:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var47 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var51 = var_byte_length23 - 4l;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_byte_length23 = var45;
{
{ /* Inline kernel#Int#+ (var_st,4l) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var54 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var58 = var_st + 4l;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var_st = var52;
{
{ /* Inline kernel#Int#+ (var_ln,4l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var61 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var65 = var_ln + 4l;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_ln = var59;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_byte_length23,0l) on <var_byte_length23:Int> */
var68 = var_byte_length23 == 0l;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
goto BREAK_label69;
} else {
}
{
var70 = core___core__CString___length_of_char_at(self, var_st);
}
var_cln = var70;
{
{ /* Inline kernel#Int#+ (var_st,var_cln) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var73 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var77 = var_st + var_cln;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var_st = var71;
{
{ /* Inline kernel#Int#+ (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var80 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var84 = var_ln + 1l;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var_ln = var78;
{
{ /* Inline kernel#Int#- (var_byte_length23,var_cln) on <var_byte_length23:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var87 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var91 = var_byte_length23 - var_cln;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_byte_length23 = var85;
} else {
goto BREAK_label69;
}
}
BREAK_label69: (void)0;
var20 = var_ln;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
}
var92 = (val*)(var18<<2|1);
var_char_length = var92;
}
var94 = (short int)((long)(var_copy)>>2);
var_ = var94;
if (var94){
if (var_str == NULL) {
var96 = 1; /* is null */
} else {
var96 = 0; /* arg is null but recv is not */
}
if (0) {
var97 = core___core__FlatString___core__kernel__Object___61d_61d(var_str, ((val*)NULL));
var96 = var97;
}
var_98 = var96;
if (var96){
var95 = var_98;
} else {
{
{ /* Inline abstract_text#FlatText#items (var_str) on <var_str:nullable Object(FlatString)> */
var101 = var_str->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_str:nullable Object(FlatString)> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline native#CString#== (var99,self) on <var99:CString> */
var104 = var99 == self;
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var95 = var102;
}
var93 = var95;
} else {
var93 = var_;
}
if (var93){
var105 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_byte_length,1l) on <var_byte_length:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var108 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var108)) {
var_class_name111 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name111);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var112 = (long)(var_byte_length)>>2;
var113 = var112 + 1l;
var106 = var113;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline native#CString#new (var105,var106) on <var105:CString> */
var116 = (char*)nit_alloc(var106);
var114 = var116;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
var_new_cstr = var114;
{
{ /* Inline native#CString#copy_to (self,var_new_cstr,var_byte_length,0l,0l) on <self:CString> */
var118 = (long)(var_byte_length)>>2;
memmove(var_new_cstr+0l,self+0l,var118);
RET_LABEL117:(void)0;
}
}
{
{ /* Inline native#CString#[]= (var_new_cstr,var_byte_length,((unsigned char)0x00)) on <var_new_cstr:CString> */
var120 = (long)(var_byte_length)>>2;
var_new_cstr[var120]=(unsigned char)((unsigned char)0x00);
RET_LABEL119:(void)0;
}
}
var121 = NEW_core__FlatString(&type_core__FlatString);
{
var123 = (long)(var_byte_length)>>2;
var124 = (long)(var_char_length)>>2;
var122 = core___core__FlatString___full(var121, var_new_cstr, var123, 0l, var124);
}
var_str = var122;
} else {
}
if (var_str == NULL) {
var125 = 1; /* is null */
} else {
var125 = 0; /* arg is null but recv is not */
}
if (0) {
var126 = core___core__FlatString___core__kernel__Object___61d_61d(var_str, ((val*)NULL));
var125 = var126;
}
if (var125){
var127 = NEW_core__FlatString(&type_core__FlatString);
{
var129 = (long)(var_byte_length)>>2;
var130 = (long)(var_char_length)>>2;
var128 = core___core__FlatString___full(var127, self, var129, 0l, var130);
}
var_str = var128;
} else {
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#CString#clean_utf8 for (self: CString, Int): FlatString */
val* core__flat___CString___clean_utf8(char* self, long p0) {
val* var /* : FlatString */;
long var_len /* var len: Int */;
val* var_replacements /* var replacements: nullable Array[Int] */;
long var_end_length /* var end_length: Int */;
long var_pos /* var pos: Int */;
long var_chr_ln /* var chr_ln: Int */;
long var_rem /* var rem: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
uint32_t var12 /* : UInt32 */;
uint32_t var14 /* : UInt32 */;
uint32_t var_i /* var i: UInt32 */;
uint32_t var15 /* : UInt32 */;
uint32_t var17 /* : UInt32 */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
unsigned char var47 /* : Byte */;
unsigned char var49 /* : Byte */;
unsigned char var_b /* var b: Byte */;
unsigned char var50 /* : Byte */;
unsigned char var52 /* : Byte */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var78 /* : Int */;
long var_nxst /* var nxst: Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
unsigned char var82 /* : Byte */;
unsigned char var84 /* : Byte */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var_ok_st /* var ok_st: Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
unsigned char var91 /* : Byte */;
unsigned char var93 /* : Byte */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
unsigned char var100 /* : Byte */;
unsigned char var102 /* : Byte */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
unsigned char var106 /* : Byte */;
unsigned char var108 /* : Byte */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
val* var115 /* : Array[Int] */;
val* var116 /* : nullable Object */;
long var117 /* : Int */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
long var123 /* : Int */;
long var124 /* : Int */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
const char* var_class_name129;
long var130 /* : Int */;
long var131 /* : Int */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
long var137 /* : Int */;
long var138 /* : Int */;
short int var140 /* : Bool */;
int cltype141;
int idtype142;
const char* var_class_name143;
long var144 /* : Int */;
uint32_t var145 /* : Char */;
uint32_t var_c /* var c: Char */;
long var146 /* : Int */;
long var148 /* : Int */;
long var_cp /* var cp: Int */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
int cltype156;
int idtype157;
const char* var_class_name158;
short int var159 /* : Bool */;
short int var_ /* var : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
const char* var_class_name165;
short int var166 /* : Bool */;
short int var_ok_c /* var ok_c: Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
int cltype174;
int idtype175;
const char* var_class_name176;
short int var177 /* : Bool */;
short int var_178 /* var : Bool */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
int cltype182;
int idtype183;
const char* var_class_name184;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
short int var192 /* : Bool */;
int cltype193;
int idtype194;
const char* var_class_name195;
short int var196 /* : Bool */;
short int var_197 /* var : Bool */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
int cltype201;
int idtype202;
const char* var_class_name203;
short int var204 /* : Bool */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
short int var_208 /* var : Bool */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
int cltype213;
int idtype214;
const char* var_class_name215;
short int var216 /* : Bool */;
short int var_217 /* var : Bool */;
short int var218 /* : Bool */;
short int var220 /* : Bool */;
int cltype221;
int idtype222;
const char* var_class_name223;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var_226 /* var : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var_231 /* var : Bool */;
short int var232 /* : Bool */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var239 /* : Bool */;
int cltype240;
int idtype241;
const char* var_class_name242;
short int var243 /* : Bool */;
short int var_244 /* var : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
int cltype248;
int idtype249;
const char* var_class_name250;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
val* var255 /* : Array[Int] */;
val* var256 /* : nullable Object */;
long var257 /* : Int */;
short int var259 /* : Bool */;
int cltype260;
int idtype261;
const char* var_class_name262;
long var263 /* : Int */;
long var264 /* : Int */;
short int var266 /* : Bool */;
int cltype267;
int idtype268;
const char* var_class_name269;
long var270 /* : Int */;
long var271 /* : Int */;
short int var273 /* : Bool */;
int cltype274;
int idtype275;
const char* var_class_name276;
long var277 /* : Int */;
long var278 /* : Int */;
short int var280 /* : Bool */;
int cltype281;
int idtype282;
const char* var_class_name283;
long var284 /* : Int */;
long var285 /* : Int */;
long var_clen /* var clen: Int */;
long var286 /* : Int */;
short int var288 /* : Bool */;
int cltype289;
int idtype290;
const char* var_class_name291;
long var292 /* : Int */;
long var293 /* : Int */;
short int var295 /* : Bool */;
int cltype296;
int idtype297;
const char* var_class_name298;
long var299 /* : Int */;
long var300 /* : Int */;
short int var302 /* : Bool */;
int cltype303;
int idtype304;
const char* var_class_name305;
long var306 /* : Int */;
char* var_ret /* var ret: CString */;
short int var307 /* : Bool */;
short int var309 /* : Bool */;
short int var310 /* : Bool */;
char* var311 /* : CString */;
char* var312 /* : CString */;
char* var314 /* : CString */;
long var_old_repl /* var old_repl: Int */;
long var_off /* var off: Int */;
val* var_repls /* var repls: Array[Int] */;
val* var315 /* : nullable NativeArray[nullable Object] */;
val* var317 /* : nullable NativeArray[nullable Object] */;
val* var_r /* var r: NativeArray[Int] */;
long var318 /* : Int */;
long var320 /* : Int */;
long var_imax /* var imax: Int */;
long var_i321 /* var i: Int */;
long var_322 /* var : Int */;
short int var323 /* : Bool */;
short int var325 /* : Bool */;
int cltype326;
int idtype327;
const char* var_class_name328;
short int var329 /* : Bool */;
val* var331 /* : nullable Object */;
val* var333 /* : Object */;
long var334 /* : Int */;
long var_repl_pos /* var repl_pos: Int */;
long var335 /* : Int */;
short int var337 /* : Bool */;
int cltype338;
int idtype339;
const char* var_class_name340;
long var341 /* : Int */;
long var_chkln /* var chkln: Int */;
long var343 /* : Int */;
short int var345 /* : Bool */;
int cltype346;
int idtype347;
const char* var_class_name348;
long var349 /* : Int */;
long var351 /* : Int */;
short int var353 /* : Bool */;
int cltype354;
int idtype355;
const char* var_class_name356;
long var357 /* : Int */;
long var359 /* : Int */;
short int var361 /* : Bool */;
int cltype362;
int idtype363;
const char* var_class_name364;
long var365 /* : Int */;
long var367 /* : Int */;
short int var369 /* : Bool */;
int cltype370;
int idtype371;
const char* var_class_name372;
long var373 /* : Int */;
long var374 /* : Int */;
short int var376 /* : Bool */;
int cltype377;
int idtype378;
const char* var_class_name379;
long var380 /* : Int */;
long var381 /* : Int */;
long var382 /* : Int */;
short int var384 /* : Bool */;
int cltype385;
int idtype386;
const char* var_class_name387;
long var388 /* : Int */;
val* var390 /* : FlatString */;
val* var391 /* : FlatString */;
var_len = p0;
var_replacements = ((val*)NULL);
var_end_length = var_len;
var_pos = 0l;
var_chr_ln = 0l;
var_rem = var_len;
for(;;) {
{
{ /* Inline kernel#Int#> (var_rem,0l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var4 = var_rem > 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
for(;;) {
{
{ /* Inline kernel#Int#>= (var_rem,4l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var7 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var11 = var_rem >= 4l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline native#CString#fetch_4_chars (self,var_pos) on <self:CString> */
var14 = (long)*((uint32_t*)(self + var_pos));
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_i = var12;
{
{ /* Inline fixed_ints#UInt32#& (var_i,((uint32_t)2155905152)) on <var_i:UInt32> */
var17 = var_i & ((uint32_t)2155905152);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline fixed_ints#UInt32#!= (var15,((uint32_t)0)) on <var15:UInt32> */
var20 = var15 == ((uint32_t)0);
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel#Int#+ (var_pos,4l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var24 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_pos + 4l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_pos = var22;
{
{ /* Inline kernel#Int#+ (var_chr_ln,4l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var31 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_chr_ln + 4l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_chr_ln = var29;
{
{ /* Inline kernel#Int#- (var_rem,4l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var38 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var42 = var_rem - 4l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_rem = var36;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_rem,0l) on <var_rem:Int> */
var45 = var_rem == 0l;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
goto BREAK_label46;
} else {
}
{
{ /* Inline native#CString#[] (self,var_pos) on <self:CString> */
var49 = (unsigned char)((int)self[var_pos]);
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_b = var47;
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var52 = var_b & ((unsigned char)0x80);
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var50,((unsigned char)0x00)) on <var50:Byte> */
var55 = var50 == ((unsigned char)0x00);
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var58 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var62 = var_pos + 1l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_pos = var56;
{
{ /* Inline kernel#Int#+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var69 = var_chr_ln + 1l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_chr_ln = var63;
{
{ /* Inline kernel#Int#- (var_rem,1l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var76 = var_rem - 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_rem = var70;
goto BREAK_label77;
} else {
}
{
var78 = core___core__CString___length_of_char_at(self, var_pos);
}
var_nxst = var78;
{
{ /* Inline kernel#Int#== (var_nxst,1l) on <var_nxst:Int> */
var81 = var_nxst == 1l;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var84 = var_b & ((unsigned char)0x80);
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var82,((unsigned char)0x00)) on <var82:Byte> */
var87 = var82 == ((unsigned char)0x00);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_ok_st = var85;
} else {
{
{ /* Inline kernel#Int#== (var_nxst,2l) on <var_nxst:Int> */
var90 = var_nxst == 2l;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0xe0)) on <var_b:Byte> */
var93 = var_b & ((unsigned char)0xe0);
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var91,((unsigned char)0xc0)) on <var91:Byte> */
var96 = var91 == ((unsigned char)0xc0);
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_ok_st = var94;
} else {
{
{ /* Inline kernel#Int#== (var_nxst,3l) on <var_nxst:Int> */
var99 = var_nxst == 3l;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
if (var97){
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0xf0)) on <var_b:Byte> */
var102 = var_b & ((unsigned char)0xf0);
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var100,((unsigned char)0xe0)) on <var100:Byte> */
var105 = var100 == ((unsigned char)0xe0);
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_ok_st = var103;
} else {
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0xf8)) on <var_b:Byte> */
var108 = var_b & ((unsigned char)0xf8);
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var106,((unsigned char)0xf0)) on <var106:Byte> */
var111 = var106 == ((unsigned char)0xf0);
var109 = var111;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
var_ok_st = var109;
}
}
}
var112 = !var_ok_st;
if (var112){
if (var_replacements == NULL) {
var113 = 1; /* is null */
} else {
var113 = 0; /* arg is null but recv is not */
}
if (0) {
var114 = core___core__Array___core__kernel__Object___61d_61d(var_replacements, ((val*)NULL));
var113 = var114;
}
if (var113){
var115 = NEW_core__Array(&type_core__Array__core__Int);
{
core___core__Array___core__kernel__Object__init(var115); /* Direct call array#Array#init on <var115:Array[Int]>*/
}
var_replacements = var115;
} else {
}
{
var116 = (val*)(var_pos<<2|1);
core___core__Array___core__abstract_collection__SimpleCollection__add(var_replacements, var116); /* Direct call array#Array#add on <var_replacements:nullable Array[Int](Array[Int])>*/
}
{
{ /* Inline kernel#Int#+ (var_end_length,2l) on <var_end_length:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var119 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var123 = var_end_length + 2l;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var_end_length = var117;
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var126 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var126)) {
var_class_name129 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var130 = var_pos + 1l;
var124 = var130;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
var_pos = var124;
{
{ /* Inline kernel#Int#- (var_rem,1l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var133 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name136 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var137 = var_rem - 1l;
var131 = var137;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
var_rem = var131;
{
{ /* Inline kernel#Int#+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var140 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var140)) {
var_class_name143 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name143);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var144 = var_chr_ln + 1l;
var138 = var144;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
var_chr_ln = var138;
goto BREAK_label77;
} else {
}
{
var145 = core___core__CString___char_at(self, var_pos);
}
var_c = var145;
{
{ /* Inline kernel#Char#code_point (var_c) on <var_c:Char> */
var148 = (long)var_c;
var146 = var148;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
var_cp = var146;
{
{ /* Inline kernel#Int#== (var_nxst,1l) on <var_nxst:Int> */
var151 = var_nxst == 1l;
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
if (var149){
{
{ /* Inline kernel#Int#>= (var_cp,0l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var155 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var155)) {
var_class_name158 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name158);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var159 = var_cp >= 0l;
var153 = var159;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
var_ = var153;
if (var153){
{
{ /* Inline kernel#Int#<= (var_cp,127l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <127l:Int> isa OTHER */
/* <127l:Int> isa OTHER */
var162 = 1; /* easy <127l:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name165 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name165);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var166 = var_cp <= 127l;
var160 = var166;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
var152 = var160;
} else {
var152 = var_;
}
var_ok_c = var152;
} else {
{
{ /* Inline kernel#Int#== (var_nxst,2l) on <var_nxst:Int> */
var169 = var_nxst == 2l;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
if (var167){
{
{ /* Inline kernel#Int#>= (var_cp,128l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var173 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var173)) {
var_class_name176 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name176);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var177 = var_cp >= 128l;
var171 = var177;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
}
var_178 = var171;
if (var171){
{
{ /* Inline kernel#Int#<= (var_cp,2047l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <2047l:Int> isa OTHER */
/* <2047l:Int> isa OTHER */
var181 = 1; /* easy <2047l:Int> isa OTHER*/
if (unlikely(!var181)) {
var_class_name184 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name184);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var185 = var_cp <= 2047l;
var179 = var185;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
var170 = var179;
} else {
var170 = var_178;
}
var_ok_c = var170;
} else {
{
{ /* Inline kernel#Int#== (var_nxst,3l) on <var_nxst:Int> */
var188 = var_nxst == 3l;
var186 = var188;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
if (var186){
{
{ /* Inline kernel#Int#>= (var_cp,2048l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <2048l:Int> isa OTHER */
/* <2048l:Int> isa OTHER */
var192 = 1; /* easy <2048l:Int> isa OTHER*/
if (unlikely(!var192)) {
var_class_name195 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name195);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var196 = var_cp >= 2048l;
var190 = var196;
goto RET_LABEL191;
RET_LABEL191:(void)0;
}
}
var_197 = var190;
if (var190){
{
{ /* Inline kernel#Int#<= (var_cp,65535l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65535l:Int> isa OTHER */
/* <65535l:Int> isa OTHER */
var200 = 1; /* easy <65535l:Int> isa OTHER*/
if (unlikely(!var200)) {
var_class_name203 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name203);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var204 = var_cp <= 65535l;
var198 = var204;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
}
var189 = var198;
} else {
var189 = var_197;
}
var_ok_c = var189;
var_208 = var_ok_c;
if (var_ok_c){
{
{ /* Inline kernel#Int#>= (var_cp,55296l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var212 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var212)) {
var_class_name215 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name215);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var216 = var_cp >= 55296l;
var210 = var216;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
}
var_217 = var210;
if (var210){
{
{ /* Inline kernel#Int#<= (var_cp,57343l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <57343l:Int> isa OTHER */
/* <57343l:Int> isa OTHER */
var220 = 1; /* easy <57343l:Int> isa OTHER*/
if (unlikely(!var220)) {
var_class_name223 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name223);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var224 = var_cp <= 57343l;
var218 = var224;
goto RET_LABEL219;
RET_LABEL219:(void)0;
}
}
var209 = var218;
} else {
var209 = var_217;
}
var225 = !var209;
var207 = var225;
} else {
var207 = var_208;
}
var_226 = var207;
if (var207){
{
{ /* Inline kernel#Int#!= (var_cp,65534l) on <var_cp:Int> */
var229 = var_cp == 65534l;
var230 = !var229;
var227 = var230;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
var206 = var227;
} else {
var206 = var_226;
}
var_231 = var206;
if (var206){
{
{ /* Inline kernel#Int#!= (var_cp,65535l) on <var_cp:Int> */
var234 = var_cp == 65535l;
var235 = !var234;
var232 = var235;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
}
var205 = var232;
} else {
var205 = var_231;
}
var_ok_c = var205;
} else {
{
{ /* Inline kernel#Int#>= (var_cp,65536l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65536l:Int> isa OTHER */
/* <65536l:Int> isa OTHER */
var239 = 1; /* easy <65536l:Int> isa OTHER*/
if (unlikely(!var239)) {
var_class_name242 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name242);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var243 = var_cp >= 65536l;
var237 = var243;
goto RET_LABEL238;
RET_LABEL238:(void)0;
}
}
var_244 = var237;
if (var237){
{
{ /* Inline kernel#Int#<= (var_cp,1114111l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <1114111l:Int> isa OTHER */
/* <1114111l:Int> isa OTHER */
var247 = 1; /* easy <1114111l:Int> isa OTHER*/
if (unlikely(!var247)) {
var_class_name250 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name250);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var251 = var_cp <= 1114111l;
var245 = var251;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
}
var236 = var245;
} else {
var236 = var_244;
}
var_ok_c = var236;
}
}
}
var252 = !var_ok_c;
if (var252){
if (var_replacements == NULL) {
var253 = 1; /* is null */
} else {
var253 = 0; /* arg is null but recv is not */
}
if (0) {
var254 = core___core__Array___core__kernel__Object___61d_61d(var_replacements, ((val*)NULL));
var253 = var254;
}
if (var253){
var255 = NEW_core__Array(&type_core__Array__core__Int);
{
core___core__Array___core__kernel__Object__init(var255); /* Direct call array#Array#init on <var255:Array[Int]>*/
}
var_replacements = var255;
} else {
}
{
var256 = (val*)(var_pos<<2|1);
core___core__Array___core__abstract_collection__SimpleCollection__add(var_replacements, var256); /* Direct call array#Array#add on <var_replacements:nullable Array[Int](Array[Int])>*/
}
{
{ /* Inline kernel#Int#+ (var_end_length,2l) on <var_end_length:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var259 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var259)) {
var_class_name262 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name262);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var263 = var_end_length + 2l;
var257 = var263;
goto RET_LABEL258;
RET_LABEL258:(void)0;
}
}
var_end_length = var257;
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var266 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var266)) {
var_class_name269 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name269);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var270 = var_pos + 1l;
var264 = var270;
goto RET_LABEL265;
RET_LABEL265:(void)0;
}
}
var_pos = var264;
{
{ /* Inline kernel#Int#+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var273 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var273)) {
var_class_name276 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name276);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var277 = var_chr_ln + 1l;
var271 = var277;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
}
var_chr_ln = var271;
{
{ /* Inline kernel#Int#- (var_rem,1l) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var280 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var280)) {
var_class_name283 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name283);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var284 = var_rem - 1l;
var278 = var284;
goto RET_LABEL279;
RET_LABEL279:(void)0;
}
}
var_rem = var278;
goto BREAK_label77;
} else {
}
{
var285 = core__abstract_text___Char___u8char_len(var_c);
}
var_clen = var285;
{
{ /* Inline kernel#Int#+ (var_pos,var_clen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var288 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var288)) {
var_class_name291 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name291);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var292 = var_pos + var_clen;
var286 = var292;
goto RET_LABEL287;
RET_LABEL287:(void)0;
}
}
var_pos = var286;
{
{ /* Inline kernel#Int#- (var_rem,var_clen) on <var_rem:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var295 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var295)) {
var_class_name298 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name298);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var299 = var_rem - var_clen;
var293 = var299;
goto RET_LABEL294;
RET_LABEL294:(void)0;
}
}
var_rem = var293;
{
{ /* Inline kernel#Int#+ (var_chr_ln,1l) on <var_chr_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var302 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var302)) {
var_class_name305 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name305);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var306 = var_chr_ln + 1l;
var300 = var306;
goto RET_LABEL301;
RET_LABEL301:(void)0;
}
}
var_chr_ln = var300;
} else {
goto BREAK_label46;
}
BREAK_label77: (void)0;
}
BREAK_label46: (void)0;
var_ret = self;
{
{ /* Inline kernel#Int#!= (var_end_length,var_len) on <var_end_length:Int> */
var309 = var_end_length == var_len;
var310 = !var309;
var307 = var310;
goto RET_LABEL308;
RET_LABEL308:(void)0;
}
}
if (var307){
var311 = NULL/*special!*/;
{
{ /* Inline native#CString#new (var311,var_end_length) on <var311:CString> */
var314 = (char*)nit_alloc(var_end_length);
var312 = var314;
goto RET_LABEL313;
RET_LABEL313:(void)0;
}
}
var_ret = var312;
var_old_repl = 0l;
var_off = 0l;
if (unlikely(var_replacements == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1427);
fatal_exit(1);
}
var_repls = var_replacements;
{
{ /* Inline array#Array#items (var_repls) on <var_repls:Array[Int]> */
var317 = var_repls->attrs[COLOR_core__array__Array___items].val; /* _items on <var_repls:Array[Int]> */
var315 = var317;
RET_LABEL316:(void)0;
}
}
if (unlikely(var315 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1428);
fatal_exit(1);
}
var_r = var315;
{
{ /* Inline array#AbstractArrayRead#length (var_repls) on <var_repls:Array[Int]> */
var320 = var_repls->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_repls:Array[Int]> */
var318 = var320;
RET_LABEL319:(void)0;
}
}
var_imax = var318;
var_i321 = 0l;
var_322 = var_imax;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i321,var_322) on <var_i321:Int> */
/* Covariant cast for argument 0 (i) <var_322:Int> isa OTHER */
/* <var_322:Int> isa OTHER */
var325 = 1; /* easy <var_322:Int> isa OTHER*/
if (unlikely(!var325)) {
var_class_name328 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name328);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var329 = var_i321 < var_322;
var323 = var329;
goto RET_LABEL324;
RET_LABEL324:(void)0;
}
}
if (var323){
} else {
goto BREAK_label330;
}
{
{ /* Inline array#NativeArray#[] (var_r,var_i321) on <var_r:NativeArray[Int]> */
var333 = ((struct instance_core__NativeArray*)var_r)->values[var_i321];
var331 = var333;
goto RET_LABEL332;
RET_LABEL332:(void)0;
}
}
var334 = (long)(var331)>>2;
var_repl_pos = var334;
{
{ /* Inline kernel#Int#- (var_repl_pos,var_old_repl) on <var_repl_pos:Int> */
/* Covariant cast for argument 0 (i) <var_old_repl:Int> isa OTHER */
/* <var_old_repl:Int> isa OTHER */
var337 = 1; /* easy <var_old_repl:Int> isa OTHER*/
if (unlikely(!var337)) {
var_class_name340 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name340);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var341 = var_repl_pos - var_old_repl;
var335 = var341;
goto RET_LABEL336;
RET_LABEL336:(void)0;
}
}
var_chkln = var335;
{
{ /* Inline native#CString#copy_to (self,var_ret,var_chkln,var_old_repl,var_off) on <self:CString> */
memmove(var_ret+var_off,self+var_old_repl,var_chkln);
RET_LABEL342:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_chkln) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_chkln:Int> isa OTHER */
/* <var_chkln:Int> isa OTHER */
var345 = 1; /* easy <var_chkln:Int> isa OTHER*/
if (unlikely(!var345)) {
var_class_name348 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name348);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var349 = var_off + var_chkln;
var343 = var349;
goto RET_LABEL344;
RET_LABEL344:(void)0;
}
}
var_off = var343;
{
{ /* Inline native#CString#[]= (var_ret,var_off,((unsigned char)0xef)) on <var_ret:CString> */
var_ret[var_off]=(unsigned char)((unsigned char)0xef);
RET_LABEL350:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,1l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var353 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var353)) {
var_class_name356 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name356);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var357 = var_off + 1l;
var351 = var357;
goto RET_LABEL352;
RET_LABEL352:(void)0;
}
}
{
{ /* Inline native#CString#[]= (var_ret,var351,((unsigned char)0xbf)) on <var_ret:CString> */
var_ret[var351]=(unsigned char)((unsigned char)0xbf);
RET_LABEL358:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,2l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var361 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var361)) {
var_class_name364 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name364);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var365 = var_off + 2l;
var359 = var365;
goto RET_LABEL360;
RET_LABEL360:(void)0;
}
}
{
{ /* Inline native#CString#[]= (var_ret,var359,((unsigned char)0xbd)) on <var_ret:CString> */
var_ret[var359]=(unsigned char)((unsigned char)0xbd);
RET_LABEL366:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_repl_pos,1l) on <var_repl_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var369 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var369)) {
var_class_name372 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name372);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var373 = var_repl_pos + 1l;
var367 = var373;
goto RET_LABEL368;
RET_LABEL368:(void)0;
}
}
var_old_repl = var367;
{
{ /* Inline kernel#Int#+ (var_off,3l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var376 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var376)) {
var_class_name379 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name379);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var380 = var_off + 3l;
var374 = var380;
goto RET_LABEL375;
RET_LABEL375:(void)0;
}
}
var_off = var374;
{
var381 = core___core__Int___Discrete__successor(var_i321, 1l);
}
var_i321 = var381;
}
BREAK_label330: (void)0;
{
{ /* Inline kernel#Int#- (var_len,var_old_repl) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_old_repl:Int> isa OTHER */
/* <var_old_repl:Int> isa OTHER */
var384 = 1; /* easy <var_old_repl:Int> isa OTHER*/
if (unlikely(!var384)) {
var_class_name387 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name387);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var388 = var_len - var_old_repl;
var382 = var388;
goto RET_LABEL383;
RET_LABEL383:(void)0;
}
}
{
{ /* Inline native#CString#copy_to (self,var_ret,var382,var_old_repl,var_off) on <self:CString> */
memmove(var_ret+var_off,self+var_old_repl,var382);
RET_LABEL389:(void)0;
}
}
} else {
}
var390 = NEW_core__FlatString(&type_core__FlatString);
{
var391 = core___core__FlatString___full(var390, var_ret, var_end_length, 0l, var_chr_ln);
}
var = var391;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#CString#set_char_at for (self: CString, Int, Char) */
void core__flat___CString___set_char_at(char* self, long p0, uint32_t p1) {
long var_pos /* var pos: Int */;
uint32_t var_c /* var c: Char */;
long var /* : Int */;
long var2 /* : Int */;
long var_cp /* var cp: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
unsigned char var7 /* : Byte */;
unsigned char var9 /* : Byte */;
long var11 /* : Int */;
long var_ln /* var ln: Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
long var23 /* : Int */;
unsigned char var24 /* : Byte */;
unsigned char var26 /* : Byte */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
long var40 /* : Int */;
unsigned char var41 /* : Byte */;
unsigned char var43 /* : Byte */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
long var48 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
long var54 /* : Int */;
long var56 /* : Int */;
unsigned char var57 /* : Byte */;
unsigned char var59 /* : Byte */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var68 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
long var73 /* : Int */;
long var74 /* : Int */;
long var76 /* : Int */;
unsigned char var77 /* : Byte */;
unsigned char var79 /* : Byte */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
long var88 /* : Int */;
long var90 /* : Int */;
long var91 /* : Int */;
long var93 /* : Int */;
unsigned char var94 /* : Byte */;
unsigned char var96 /* : Byte */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
long var101 /* : Int */;
long var103 /* : Int */;
long var104 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
long var109 /* : Int */;
unsigned char var110 /* : Byte */;
unsigned char var112 /* : Byte */;
long var114 /* : Int */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
long var120 /* : Int */;
long var121 /* : Int */;
long var123 /* : Int */;
long var124 /* : Int */;
long var126 /* : Int */;
long var127 /* : Int */;
long var129 /* : Int */;
unsigned char var130 /* : Byte */;
unsigned char var132 /* : Byte */;
long var134 /* : Int */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
long var140 /* : Int */;
long var141 /* : Int */;
long var143 /* : Int */;
long var144 /* : Int */;
long var146 /* : Int */;
long var147 /* : Int */;
long var149 /* : Int */;
unsigned char var150 /* : Byte */;
unsigned char var152 /* : Byte */;
long var154 /* : Int */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
const char* var_class_name159;
long var160 /* : Int */;
long var161 /* : Int */;
long var163 /* : Int */;
long var164 /* : Int */;
long var166 /* : Int */;
unsigned char var167 /* : Byte */;
unsigned char var169 /* : Byte */;
var_pos = p0;
var_c = p1;
{
{ /* Inline kernel#Char#code_point (var_c) on <var_c:Char> */
var2 = (long)var_c;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_cp = var;
{
{ /* Inline kernel#Int#< (var_cp,128l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var5 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var_cp < 128l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
{ /* Inline kernel#Int#to_b (var_cp) on <var_cp:Int> */
var9 = (unsigned char)var_cp;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline native#CString#[]= (self,var_pos,var7) on <self:CString> */
self[var_pos]=(unsigned char)var7;
RET_LABEL10:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var11 = core__abstract_text___Char___u8char_len(var_c);
}
var_ln = var11;
{
{ /* Inline kernel#Int#== (var_ln,2l) on <var_ln:Int> */
var14 = var_ln == 2l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline math#Int#& (var_cp,1984l) on <var_cp:Int> */
var17 = var_cp & 1984l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#>> (var15,6l) on <var15:Int> */
var20 = var15 >> 6l;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline math#Int#| (192l,var18) on <192l:Int> */
var23 = 192l | var18;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#to_b (var21) on <var21:Int> */
var26 = (unsigned char)var21;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline native#CString#[]= (self,var_pos,var24) on <self:CString> */
self[var_pos]=(unsigned char)var24;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var34 = var_pos + 1l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline math#Int#& (var_cp,63l) on <var_cp:Int> */
var37 = var_cp & 63l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline math#Int#| (128l,var35) on <128l:Int> */
var40 = 128l | var35;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel#Int#to_b (var38) on <var38:Int> */
var43 = (unsigned char)var38;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline native#CString#[]= (self,var28,var41) on <self:CString> */
self[var28]=(unsigned char)var41;
RET_LABEL44:(void)0;
}
}
} else {
{
{ /* Inline kernel#Int#== (var_ln,3l) on <var_ln:Int> */
var47 = var_ln == 3l;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
{ /* Inline math#Int#& (var_cp,61440l) on <var_cp:Int> */
var50 = var_cp & 61440l;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel#Int#>> (var48,12l) on <var48:Int> */
var53 = var48 >> 12l;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline math#Int#| (224l,var51) on <224l:Int> */
var56 = 224l | var51;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#to_b (var54) on <var54:Int> */
var59 = (unsigned char)var54;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline native#CString#[]= (self,var_pos,var57) on <self:CString> */
self[var_pos]=(unsigned char)var57;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var67 = var_pos + 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline math#Int#& (var_cp,4032l) on <var_cp:Int> */
var70 = var_cp & 4032l;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel#Int#>> (var68,6l) on <var68:Int> */
var73 = var68 >> 6l;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline math#Int#| (128l,var71) on <128l:Int> */
var76 = 128l | var71;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel#Int#to_b (var74) on <var74:Int> */
var79 = (unsigned char)var74;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline native#CString#[]= (self,var61,var77) on <self:CString> */
self[var61]=(unsigned char)var77;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_pos,2l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var83 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var87 = var_pos + 2l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline math#Int#& (var_cp,63l) on <var_cp:Int> */
var90 = var_cp & 63l;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline math#Int#| (128l,var88) on <128l:Int> */
var93 = 128l | var88;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel#Int#to_b (var91) on <var91:Int> */
var96 = (unsigned char)var91;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline native#CString#[]= (self,var81,var94) on <self:CString> */
self[var81]=(unsigned char)var94;
RET_LABEL97:(void)0;
}
}
} else {
{
{ /* Inline kernel#Int#== (var_ln,4l) on <var_ln:Int> */
var100 = var_ln == 4l;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
if (var98){
{
{ /* Inline math#Int#& (var_cp,1835008l) on <var_cp:Int> */
var103 = var_cp & 1835008l;
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline kernel#Int#>> (var101,18l) on <var101:Int> */
var106 = var101 >> 18l;
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline math#Int#| (240l,var104) on <240l:Int> */
var109 = 240l | var104;
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline kernel#Int#to_b (var107) on <var107:Int> */
var112 = (unsigned char)var107;
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline native#CString#[]= (self,var_pos,var110) on <self:CString> */
self[var_pos]=(unsigned char)var110;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var116 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var116)) {
var_class_name119 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var120 = var_pos + 1l;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline math#Int#& (var_cp,258048l) on <var_cp:Int> */
var123 = var_cp & 258048l;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
{
{ /* Inline kernel#Int#>> (var121,12l) on <var121:Int> */
var126 = var121 >> 12l;
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline math#Int#| (128l,var124) on <128l:Int> */
var129 = 128l | var124;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline kernel#Int#to_b (var127) on <var127:Int> */
var132 = (unsigned char)var127;
var130 = var132;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline native#CString#[]= (self,var114,var130) on <self:CString> */
self[var114]=(unsigned char)var130;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_pos,2l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var136 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var136)) {
var_class_name139 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var140 = var_pos + 2l;
var134 = var140;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
{
{ /* Inline math#Int#& (var_cp,4032l) on <var_cp:Int> */
var143 = var_cp & 4032l;
var141 = var143;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline kernel#Int#>> (var141,6l) on <var141:Int> */
var146 = var141 >> 6l;
var144 = var146;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline math#Int#| (128l,var144) on <128l:Int> */
var149 = 128l | var144;
var147 = var149;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline kernel#Int#to_b (var147) on <var147:Int> */
var152 = (unsigned char)var147;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline native#CString#[]= (self,var134,var150) on <self:CString> */
self[var134]=(unsigned char)var150;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_pos,3l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var156 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var156)) {
var_class_name159 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name159);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var160 = var_pos + 3l;
var154 = var160;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline math#Int#& (var_cp,63l) on <var_cp:Int> */
var163 = var_cp & 63l;
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline math#Int#| (128l,var161) on <128l:Int> */
var166 = 128l | var161;
var164 = var166;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline kernel#Int#to_b (var164) on <var164:Int> */
var169 = (unsigned char)var164;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline native#CString#[]= (self,var154,var167) on <self:CString> */
self[var154]=(unsigned char)var167;
RET_LABEL170:(void)0;
}
}
} else {
}
}
}
RET_LABEL:;
}
/* method flat#Int#to_s for (self: Int): String */
val* core__flat___Int___core__abstract_text__Object__to_s(long self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
long var14 /* : Int */;
long var16 /* : Int */;
long var_nslen /* var nslen: Int */;
char* var17 /* : CString */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var21 /* : Int */;
char* var22 /* : CString */;
char* var24 /* : CString */;
char* var_ns /* var ns: CString */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
val* var34 /* : FlatString */;
val* var35 /* : FlatString */;
{
{ /* Inline kernel#Int#== (self,0l) on <self:Int> */
var3 = self == 0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "0";
var6 = core__abstract_text___CString___to_s_full(var5, 1l, 1l);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (self,1l) on <self:Int> */
var9 = self == 1l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "1";
var13 = core__abstract_text___CString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce10 = var11;
}
var = var11;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_text#Int#int_to_s_len (self) on <self:Int> */
var16 = abstract_text___Int_int_to_s_len___impl(self);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_nslen = var14;
var17 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var21 = var_nslen + 1l;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline native#CString#new (var17,var18) on <var17:CString> */
var24 = (char*)nit_alloc(var18);
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_ns = var22;
{
{ /* Inline native#CString#[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var32 = var_nslen + 1l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline abstract_text#Int#native_int_to_s (self,var_ns,var26) on <self:Int> */
abstract_text___Int_native_int_to_s___impl(self, var_ns, var26);
RET_LABEL33:(void)0;
}
}
var34 = NEW_core__FlatString(&type_core__FlatString);
{
var35 = core___core__FlatString___full(var34, var_ns, var_nslen, 0l, var_nslen);
}
var = var35;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#Int#to_s for (self: Object): String */
val* VIRTUAL_core__flat___Int___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = core__flat___Int___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method flat#Array#plain_to_s for (self: Array[nullable Object]): String */
val* core__flat___Array___core__abstract_text__Collection__plain_to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_l /* var l: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
val* var8 /* : nullable NativeArray[nullable Object] */;
val* var_its /* var its: NativeArray[nullable Object] */;
val* var9 /* : nullable Object */;
val* var11 /* : Object */;
val* var_first /* var first: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : NativeArray[String] */;
val* var_na /* var na: NativeArray[String] */;
long var_i /* var i: Int */;
long var_sl /* var sl: Int */;
long var_mypos /* var mypos: Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var29 /* : Object */;
val* var_itsi /* var itsi: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
val* var39 /* : String */;
val* var_tmp /* var tmp: String */;
long var40 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const struct type* type_struct;
const char* var_class_name52;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
char* var68 /* : CString */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
char* var76 /* : CString */;
char* var78 /* : CString */;
char* var_ns /* var ns: CString */;
long var_off /* var off: Int */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
val* var89 /* : Object */;
val* var_tmp90 /* var tmp: String */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
long var94 /* : Int */;
long var_tpl /* var tpl: Int */;
char* var95 /* : CString */;
long var96 /* : Int */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
val* var105 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var106 /* : Iterator[nullable Object] */;
val* var_107 /* var : Iterator[FlatText] */;
short int var108 /* : Bool */;
val* var110 /* : nullable Object */;
val* var_j /* var j: FlatText */;
short int var111 /* : Bool */;
int cltype112;
int idtype113;
const char* var_class_name114;
val* var_s /* var s: FlatString */;
long var115 /* : Int */;
long var_slen /* var slen: Int */;
char* var116 /* : CString */;
long var117 /* : Int */;
long var119 /* : Int */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
long var125 /* : Int */;
long var126 /* : Int */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
const char* var_class_name131;
long var132 /* : Int */;
val* var134 /* : FlatString */;
val* var135 /* : FlatString */;
var1 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var_l = var1;
{
{ /* Inline kernel#Int#== (var_l,0l) on <var_l:Int> */
var4 = var_l == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "";
var7 = core__abstract_text___CString___to_s_full(var6, 0l, 0l);
var5 = var7;
varonce = var5;
}
var = var5;
goto RET_LABEL;
} else {
}
var8 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1497);
fatal_exit(1);
}
var_its = var8;
{
{ /* Inline array#NativeArray#[] (var_its,0l) on <var_its:NativeArray[nullable Object]> */
var11 = ((struct instance_core__NativeArray*)var_its)->values[0l];
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_first = var9;
{
{ /* Inline kernel#Int#== (var_l,1l) on <var_l:Int> */
var14 = var_l == 1l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (var_first == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))((((long)var_first&3)?class_info[((long)var_first&3)]:var_first->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_first, ((val*)NULL)); /* == on <var_first:nullable Object>*/
var15 = var16;
}
if (var15){
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "";
var20 = core__abstract_text___CString___to_s_full(var19, 0l, 0l);
var18 = var20;
varonce17 = var18;
}
var = var18;
goto RET_LABEL;
} else {
{
var21 = ((val*(*)(val* self))((((long)var_first&3)?class_info[((long)var_first&3)]:var_first->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_first); /* to_s on <var_first:nullable Object(Object)>*/
}
var = var21;
goto RET_LABEL;
}
} else {
}
var22 = NEW_core__NativeArray(var_l, &type_core__NativeArray__core__String);
var_na = var22;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var25 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var26 = var_i < var_l;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
{ /* Inline array#NativeArray#[] (var_its,var_i) on <var_its:NativeArray[nullable Object]> */
var29 = ((struct instance_core__NativeArray*)var_its)->values[var_i];
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_itsi = var27;
if (var_itsi == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
var31 = ((short int(*)(val* self, val* p0))((((long)var_itsi&3)?class_info[((long)var_itsi&3)]:var_itsi->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_itsi, ((val*)NULL)); /* == on <var_itsi:nullable Object>*/
var30 = var31;
}
if (var30){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var38 = var_i + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_i = var32;
goto BREAK_label;
} else {
}
{
var39 = ((val*(*)(val* self))((((long)var_itsi&3)?class_info[((long)var_itsi&3)]:var_itsi->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_itsi); /* to_s on <var_itsi:nullable Object(Object)>*/
}
var_tmp = var39;
{
var40 = ((long(*)(val* self))(var_tmp->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_tmp); /* byte_length on <var_tmp:String>*/
}
{
{ /* Inline kernel#Int#+ (var_sl,var40) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var40:Int> isa OTHER */
/* <var40:Int> isa OTHER */
var43 = 1; /* easy <var40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var47 = var_sl + var40;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_sl = var41;
{
{ /* Inline array#NativeArray#[]= (var_na,var_mypos,var_tmp) on <var_na:NativeArray[String]> */
/* Covariant cast for argument 1 (item) <var_tmp:String> isa E */
/* <var_tmp:String> isa E */
type_struct = var_na->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype50 = type_struct->color;
idtype51 = type_struct->id;
if(cltype50 >= var_tmp->type->table_size) {
var49 = 0;
} else {
var49 = var_tmp->type->type_table[cltype50] == idtype51;
}
if (unlikely(!var49)) {
var_class_name52 = var_tmp == NULL ? "null" : var_tmp->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var_na)->values[var_mypos]=var_tmp;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var59 = var_i + 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_i = var53;
{
{ /* Inline kernel#Int#+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var66 = var_mypos + 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_mypos = var60;
} else {
goto BREAK_label67;
}
BREAK_label: (void)0;
}
BREAK_label67: (void)0;
var68 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var71 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var75 = var_sl + 1l;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline native#CString#new (var68,var69) on <var68:CString> */
var78 = (char*)nit_alloc(var69);
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var_ns = var76;
{
{ /* Inline native#CString#[]= (var_ns,var_sl,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_sl]=(unsigned char)((unsigned char)0x00);
RET_LABEL79:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var82 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var82)) {
var_class_name85 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var86 = var_i < var_mypos;
var80 = var86;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
if (var80){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var89 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var_tmp90 = var87;
/* <var_tmp90:String> isa FlatString */
cltype92 = type_core__FlatString.color;
idtype93 = type_core__FlatString.id;
if(cltype92 >= var_tmp90->type->table_size) {
var91 = 0;
} else {
var91 = var_tmp90->type->type_table[cltype92] == idtype93;
}
if (var91){
var94 = var_tmp90->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_tmp90:String(FlatString)> */
var_tpl = var94;
var95 = var_tmp90->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tmp90:String(FlatString)> */
var96 = var_tmp90->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tmp90:String(FlatString)> */
{
{ /* Inline native#CString#copy_to (var95,var_ns,var_tpl,var96,var_off) on <var95:CString> */
memmove(var_ns+var_off,var95+var96,var_tpl);
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var100 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var104 = var_off + var_tpl;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var_off = var98;
} else {
{
var105 = ((val*(*)(val* self))(var_tmp90->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_tmp90); /* substrings on <var_tmp90:String>*/
}
var_ = var105;
{
var106 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_107 = var106;
for(;;) {
{
var108 = ((short int(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_107); /* is_ok on <var_107:Iterator[FlatText]>*/
}
if (var108){
} else {
goto BREAK_label109;
}
{
var110 = ((val*(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_107); /* item on <var_107:Iterator[FlatText]>*/
}
var_j = var110;
/* <var_j:FlatText> isa FlatString */
cltype112 = type_core__FlatString.color;
idtype113 = type_core__FlatString.id;
if(cltype112 >= var_j->type->table_size) {
var111 = 0;
} else {
var111 = var_j->type->type_table[cltype112] == idtype113;
}
if (unlikely(!var111)) {
var_class_name114 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name114);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1528);
fatal_exit(1);
}
var_s = var_j;
var115 = var_s->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_s:FlatString> */
var_slen = var115;
var116 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
var117 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:FlatString> */
{
{ /* Inline native#CString#copy_to (var116,var_ns,var_slen,var117,var_off) on <var116:CString> */
memmove(var_ns+var_off,var116+var117,var_slen);
RET_LABEL118:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var121 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var121)) {
var_class_name124 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var125 = var_off + var_slen;
var119 = var125;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
var_off = var119;
{
((void(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_107); /* next on <var_107:Iterator[FlatText]>*/
}
}
BREAK_label109: (void)0;
{
((void(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_107); /* finish on <var_107:Iterator[FlatText]>*/
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var128 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var128)) {
var_class_name131 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var132 = var_i + 1l;
var126 = var132;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
var_i = var126;
} else {
goto BREAK_label133;
}
}
BREAK_label133: (void)0;
var134 = NEW_core__FlatString(&type_core__FlatString);
{
var135 = core___core__FlatString___with_infos(var134, var_ns, var_sl, 0l);
}
var = var135;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#NativeArray#native_to_s for (self: NativeArray[nullable Object]): String */
val* core__flat___NativeArray___native_to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
long var2 /* : Int */;
long var4 /* : Int */;
long var_l /* var l: Int */;
val* var_na /* var na: NativeArray[String] */;
long var_i /* var i: Int */;
long var_sl /* var sl: Int */;
long var_mypos /* var mypos: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var13 /* : Object */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
char* var36 /* : CString */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
char* var44 /* : CString */;
char* var46 /* : CString */;
char* var_ns /* var ns: CString */;
long var_off /* var off: Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
val* var55 /* : nullable Object */;
val* var57 /* : Object */;
val* var_tmp /* var tmp: String */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
long var61 /* : Int */;
long var_tpl /* var tpl: Int */;
char* var62 /* : CString */;
long var63 /* : Int */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
val* var72 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var73 /* : Iterator[nullable Object] */;
val* var_74 /* var : Iterator[FlatText] */;
short int var75 /* : Bool */;
val* var77 /* : nullable Object */;
val* var_j /* var j: FlatText */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
val* var_s /* var s: FlatString */;
long var82 /* : Int */;
long var_slen /* var slen: Int */;
char* var83 /* : CString */;
long var84 /* : Int */;
long var86 /* : Int */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
long var92 /* : Int */;
long var93 /* : Int */;
short int var95 /* : Bool */;
int cltype96;
int idtype97;
const char* var_class_name98;
long var99 /* : Int */;
val* var101 /* : FlatString */;
val* var102 /* : FlatString */;
/* <self:NativeArray[nullable Object]> isa NativeArray[String] */
cltype = type_core__NativeArray__core__String.color;
idtype = type_core__NativeArray__core__String.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1542);
fatal_exit(1);
}
{
{ /* Inline array#NativeArray#length (self) on <self:NativeArray[nullable Object](NativeArray[String])> */
var4 = ((struct instance_core__NativeArray*)self)->length;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_l = var2;
var_na = self;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var7 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var10 = var_i < var_l;
var5 = var10;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var13 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var14 = ((long(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var11); /* byte_length on <var11:nullable Object(String)>*/
}
{
{ /* Inline kernel#Int#+ (var_sl,var14) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var21 = var_sl + var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_sl = var15;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_i + 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_i = var22;
{
{ /* Inline kernel#Int#+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_mypos + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_mypos = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var36 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var43 = var_sl + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline native#CString#new (var36,var37) on <var36:CString> */
var46 = (char*)nit_alloc(var37);
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_ns = var44;
{
{ /* Inline native#CString#[]= (var_ns,var_sl,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_sl]=(unsigned char)((unsigned char)0x00);
RET_LABEL47:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var50 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var54 = var_i < var_mypos;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
{ /* Inline array#NativeArray#[] (var_na,var_i) on <var_na:NativeArray[String]> */
var57 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_tmp = var55;
/* <var_tmp:String> isa FlatString */
cltype59 = type_core__FlatString.color;
idtype60 = type_core__FlatString.id;
if(cltype59 >= var_tmp->type->table_size) {
var58 = 0;
} else {
var58 = var_tmp->type->type_table[cltype59] == idtype60;
}
if (var58){
var61 = var_tmp->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_tmp:String(FlatString)> */
var_tpl = var61;
var62 = var_tmp->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tmp:String(FlatString)> */
var63 = var_tmp->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tmp:String(FlatString)> */
{
{ /* Inline native#CString#copy_to (var62,var_ns,var_tpl,var63,var_off) on <var62:CString> */
memmove(var_ns+var_off,var62+var63,var_tpl);
RET_LABEL64:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var67 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var71 = var_off + var_tpl;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_off = var65;
} else {
{
var72 = ((val*(*)(val* self))(var_tmp->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_tmp); /* substrings on <var_tmp:String>*/
}
var_ = var72;
{
var73 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_74 = var73;
for(;;) {
{
var75 = ((short int(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_74); /* is_ok on <var_74:Iterator[FlatText]>*/
}
if (var75){
} else {
goto BREAK_label76;
}
{
var77 = ((val*(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_74); /* item on <var_74:Iterator[FlatText]>*/
}
var_j = var77;
/* <var_j:FlatText> isa FlatString */
cltype79 = type_core__FlatString.color;
idtype80 = type_core__FlatString.id;
if(cltype79 >= var_j->type->table_size) {
var78 = 0;
} else {
var78 = var_j->type->type_table[cltype79] == idtype80;
}
if (unlikely(!var78)) {
var_class_name81 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1565);
fatal_exit(1);
}
var_s = var_j;
var82 = var_s->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_s:FlatString> */
var_slen = var82;
var83 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
var84 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:FlatString> */
{
{ /* Inline native#CString#copy_to (var83,var_ns,var_slen,var84,var_off) on <var83:CString> */
memmove(var_ns+var_off,var83+var84,var_slen);
RET_LABEL85:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var88 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var92 = var_off + var_slen;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var_off = var86;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_74); /* next on <var_74:Iterator[FlatText]>*/
}
}
BREAK_label76: (void)0;
{
((void(*)(val* self))((((long)var_74&3)?class_info[((long)var_74&3)]:var_74->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_74); /* finish on <var_74:Iterator[FlatText]>*/
}
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var95 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var95)) {
var_class_name98 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name98);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var99 = var_i + 1l;
var93 = var99;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
var_i = var93;
} else {
goto BREAK_label100;
}
}
BREAK_label100: (void)0;
var101 = NEW_core__FlatString(&type_core__FlatString);
{
var102 = core___core__FlatString___with_infos(var101, var_ns, var_sl, 0l);
}
var = var102;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#Map#join for (self: Map[nullable Object, nullable Object], String, String): String */
val* core__flat___Map___join(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_sep /* var sep: String */;
val* var_couple_sep /* var couple_sep: String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : Buffer */;
val* var6 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var7 /* : MapIterator[nullable Object, nullable Object] */;
val* var_i /* var i: MapIterator[nullable Object, nullable Object] */;
val* var8 /* : nullable Object */;
val* var_k /* var k: nullable Object */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var11 /* : NativeArray[String] */;
static val* varonce10;
val* var12 /* : Object */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : Object */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var27 /* : nullable Object */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
val* var30 /* : Object */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : Object */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
var_sep = p0;
var_couple_sep = p1;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__is_empty]))(self); /* is_empty on <self:Map[nullable Object, nullable Object]>*/
}
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = core__abstract_text___CString___to_s_full(var3, 0l, 0l);
var2 = var4;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
var5 = NEW_core__Buffer(&type_core__Buffer);
{
var6 = core__flat___Buffer___new(var5);
}
var_s = var6;
{
var7 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(self); /* iterator on <self:Map[nullable Object, nullable Object]>*/
}
var_i = var7;
{
var8 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var8;
{
var9 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_e = var9;
if (unlikely(varonce10==NULL)) {
var11 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
} else {
var11 = varonce10;
varonce10 = NULL;
}
if (var_k!=NULL) {
var12 = var_k;
} else {
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "<null>";
var16 = core__abstract_text___CString___to_s_full(var15, 6l, 6l);
var14 = var16;
varonce13 = var14;
}
var12 = var14;
}
{
var17 = ((val*(*)(val* self))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var12); /* to_s on <var12:Object>*/
}
((struct instance_core__NativeArray*)var11)->values[0]=var17;
((struct instance_core__NativeArray*)var11)->values[1]=var_couple_sep;
if (var_e!=NULL) {
var18 = var_e;
} else {
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "<null>";
var22 = core__abstract_text___CString___to_s_full(var21, 6l, 6l);
var20 = var22;
varonce19 = var20;
}
var18 = var20;
}
{
var23 = ((val*(*)(val* self))((((long)var18&3)?class_info[((long)var18&3)]:var18->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var18); /* to_s on <var18:Object>*/
}
((struct instance_core__NativeArray*)var11)->values[2]=var23;
{
var24 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce10 = var11;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var24); /* append on <var_s:Buffer>*/
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
for(;;) {
{
var25 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_i); /* is_ok on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
if (var25){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var_sep); /* append on <var_s:Buffer>*/
}
{
var26 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var26;
{
var27 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_e = var27;
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
} else {
var29 = varonce28;
varonce28 = NULL;
}
if (var_k!=NULL) {
var30 = var_k;
} else {
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "<null>";
var34 = core__abstract_text___CString___to_s_full(var33, 6l, 6l);
var32 = var34;
varonce31 = var32;
}
var30 = var32;
}
{
var35 = ((val*(*)(val* self))((((long)var30&3)?class_info[((long)var30&3)]:var30->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var30); /* to_s on <var30:Object>*/
}
((struct instance_core__NativeArray*)var29)->values[0]=var35;
((struct instance_core__NativeArray*)var29)->values[1]=var_couple_sep;
if (var_e!=NULL) {
var36 = var_e;
} else {
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "<null>";
var40 = core__abstract_text___CString___to_s_full(var39, 6l, 6l);
var38 = var40;
varonce37 = var38;
}
var36 = var38;
}
{
var41 = ((val*(*)(val* self))((((long)var36&3)?class_info[((long)var36&3)]:var36->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var36); /* to_s on <var36:Object>*/
}
((struct instance_core__NativeArray*)var29)->values[2]=var41;
{
var42 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var42); /* append on <var_s:Buffer>*/
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var43 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var43;
goto RET_LABEL;
RET_LABEL:;
return var;
}
