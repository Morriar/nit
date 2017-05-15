#include "core__abstract_text.sep.0.h"
/* method abstract_text$Text$chars for (self: Text): SequenceRead[Char] */
val* core___core__Text___chars(val* self) {
val* var /* : SequenceRead[Char] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "chars", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 35);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$bytes for (self: Text): SequenceRead[Byte] */
val* core___core__Text___bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "bytes", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 40);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$length for (self: Text): Int */
long core___core__Text___length(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "length", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 45);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$byte_length for (self: Text): Int */
long core___core__Text___byte_length(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "byte_length", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 52);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$substring for (self: Text, Int, Int): Text */
val* core___core__Text___substring(val* self, long p0, long p1) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "substring", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 58);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$substrings for (self: Text): Iterator[FlatText] */
val* core___core__Text___substrings(val* self) {
val* var /* : Iterator[FlatText] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "substrings", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 71);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_empty for (self: Text): Bool */
short int core___core__Text___is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$empty for (self: Text): Text */
val* core___core__Text___empty(val* self) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "empty", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 80);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_buffer for (self: Text): Buffer */
val* core___core__Text___to_buffer(val* self) {
val* var /* : Buffer */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_buffer", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 86);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$first for (self: Text): Char */
uint32_t core___core__Text___first(val* self) {
uint32_t var /* : Char */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var1, 0l); /* [] on <var1:SequenceRead[Char]>*/
}
var3 = (uint32_t)((long)(var2)>>2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$[] for (self: Text, Int): Char */
uint32_t core___core__Text____91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
uint32_t var3 /* : Char */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var1, var_index); /* [] on <var1:SequenceRead[Char]>*/
}
var3 = (uint32_t)((long)(var2)>>2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$index_of for (self: Text, Char): Int */
long core___core__Text___index_of(val* self, uint32_t p0) {
long var /* : Int */;
uint32_t var_c /* var c: Char */;
long var1 /* : Int */;
var_c = p0;
{
var1 = ((long(*)(val* self, uint32_t p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__index_of_from]))(self, var_c, 0l); /* index_of_from on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$last for (self: Text): Char */
uint32_t core___core__Text___last(val* self) {
uint32_t var /* : Char */;
val* var1 /* : SequenceRead[Char] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var2 - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var1, var3); /* [] on <var1:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$index_of_from for (self: Text, Char, Int): Int */
long core___core__Text___index_of_from(val* self, uint32_t p0, long p1) {
long var /* : Int */;
uint32_t var_c /* var c: Char */;
long var_pos /* var pos: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : IndexedIterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
uint32_t var8 /* : Char */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
var_c = p0;
var_pos = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, long p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(var1, var_pos); /* iterator_from on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel$Char$== (var4,var_c) on <var4:nullable Object(Char)> */
var8 = (uint32_t)((long)(var4)>>2);
var7 = var8 == var_c;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
var = var9;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var12 = -1l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$last_index_of for (self: Text, Char): Int */
long core___core__Text___last_index_of(val* self, uint32_t p0) {
long var /* : Int */;
uint32_t var_c /* var c: Char */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var6 /* : Int */;
var_c = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var6 = ((long(*)(val* self, uint32_t p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__last_index_of_from]))(self, var_c, var2); /* last_index_of_from on <self:Text>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_cstring for (self: Text): CString */
char* core___core__Text___to_cstring(val* self) {
char* var /* : CString */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_cstring", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 141);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$last_index_of_from for (self: Text, Char, Int): Int */
long core___core__Text___last_index_of_from(val* self, uint32_t p0, long p1) {
long var /* : Int */;
uint32_t var_item /* var item: Char */;
long var_pos /* var pos: Int */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
long var3 /* : Int */;
var_item = p0;
var_pos = p1;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = (val*)((long)(var_item)<<2|2);
var3 = ((long(*)(val* self, val* p0, long p1))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var1, var2, var_pos); /* last_index_of_from on <var1:SequenceRead[Char]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$+ for (self: Text, Text): Text */
val* core___core__Text____43d(val* self, val* p0) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "+", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 155);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$iterator for (self: Text): Iterator[Char] */
val* core___core__Text___iterator(val* self) {
val* var /* : Iterator[Char] */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var1); /* iterator on <var1:SequenceRead[Char]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_a for (self: Text): Array[Char] */
val* core___core__Text___to_a(val* self) {
val* var /* : Array[Char] */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : Array[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__array__Collection__to_a]))(var1); /* to_a on <var1:SequenceRead[Char]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$substring_from for (self: Text, Int): Text */
val* core___core__Text___substring_from(val* self, long p0) {
val* var /* : Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Text */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
val* var22 /* : Text */;
var_from = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$>= (var_from,var1) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var_from >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var_from < 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var_from = 0l;
} else {
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var14,var_from) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var17 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var21 = var14 - var_from;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var22 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_from, var15); /* substring on <self:Text>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$has_substring for (self: Text, String, Int): Bool */
short int core___core__Text___has_substring(val* self, val* p0, long p1) {
short int var /* : Bool */;
val* var_str /* var str: String */;
long var_pos /* var pos: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
val* var23 /* : SequenceRead[Char] */;
val* var24 /* : IndexedIterator[nullable Object] */;
val* var_myiter /* var myiter: IndexedIterator[Char] */;
val* var25 /* : SequenceRead[Char] */;
val* var26 /* : Iterator[nullable Object] */;
val* var_itsiter /* var itsiter: IndexedIterator[Char] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var_29 /* var : Bool */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var32 /* : nullable Object */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
var_str = p0;
var_pos = p1;
{
var1 = ((short int(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_str); /* is_empty on <var_str:String>*/
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$< (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var_pos < 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var2 = var_;
} else {
{
var7 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
{
{ /* Inline kernel$Int$+ (var_pos,var7) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_pos + var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$> (var8,var15) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var22 = var8 > var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var2 = var16;
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var24 = ((val*(*)(val* self, long p0))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(var23, var_pos); /* iterator_from on <var23:SequenceRead[Char]>*/
}
var_myiter = var24;
{
var25 = ((val*(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var26 = ((val*(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var25); /* iterator on <var25:SequenceRead[Char]>*/
}
var_itsiter = var26;
for(;;) {
{
var28 = ((short int(*)(val* self))((((long)var_myiter&3)?class_info[((long)var_myiter&3)]:var_myiter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_myiter); /* is_ok on <var_myiter:IndexedIterator[Char]>*/
}
var_29 = var28;
if (var28){
{
var30 = ((short int(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_itsiter); /* is_ok on <var_itsiter:IndexedIterator[Char]>*/
}
var27 = var30;
} else {
var27 = var_29;
}
if (var27){
{
var31 = ((val*(*)(val* self))((((long)var_myiter&3)?class_info[((long)var_myiter&3)]:var_myiter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_myiter); /* item on <var_myiter:IndexedIterator[Char]>*/
}
{
var32 = ((val*(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_itsiter); /* item on <var_itsiter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel$Char$!= (var31,var32) on <var31:nullable Object(Char)> */
var35 = var31 == var32;
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_myiter&3)?class_info[((long)var_myiter&3)]:var_myiter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_myiter); /* next on <var_myiter:IndexedIterator[Char]>*/
}
{
((void(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_itsiter); /* next on <var_itsiter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var37 = ((short int(*)(val* self))((((long)var_itsiter&3)?class_info[((long)var_itsiter&3)]:var_itsiter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_itsiter); /* is_ok on <var_itsiter:IndexedIterator[Char]>*/
}
if (var37){
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$has_prefix for (self: Text, String): Bool */
short int core___core__Text___has_prefix(val* self, val* p0) {
short int var /* : Bool */;
val* var_prefix /* var prefix: String */;
short int var1 /* : Bool */;
var_prefix = p0;
{
var1 = ((short int(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__has_substring]))(self, var_prefix, 0l); /* has_substring on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$has_suffix for (self: Text, String): Bool */
short int core___core__Text___has_suffix(val* self, val* p0) {
short int var /* : Bool */;
val* var_suffix /* var suffix: String */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
short int var7 /* : Bool */;
var_suffix = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var2 = ((long(*)(val* self))(var_suffix->class->vft[COLOR_core__abstract_text__Text__length]))(var_suffix); /* length on <var_suffix:String>*/
}
{
{ /* Inline kernel$Int$- (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var1 - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((short int(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__has_substring]))(self, var_suffix, var3); /* has_substring on <self:Text>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_i for (self: Text): Int */
long core___core__Text___to_i(val* self) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_i", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 236);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_f for (self: Text): Float */
double core___core__Text___to_f(val* self) {
double var /* : Float */;
val* var1 /* : String */;
char* var2 /* : CString */;
double var3 /* : Float */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
var3 = core___core__CString___atof(var2);
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_hex for (self: Text, nullable Int, nullable Int): Int */
long core___core__Text___to_hex(val* self, val* p0, val* p1) {
long var /* : Int */;
val* var_pos /* var pos: nullable Int */;
val* var_ln /* var ln: nullable Int */;
long var_res /* var res: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var15 /* : Int */;
val* var16 /* : nullable Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
long var_max /* var max: Int */;
long var26 /* : Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var36 /* : Int */;
uint32_t var37 /* : Char */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
long var46 /* : Int */;
var_pos = p0;
var_ln = p1;
var_res = 0l;
if (var_pos == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var_pos,((val*)NULL)) on <var_pos:nullable Int> */
var4 = 0; /* incompatible types Int vs. null; cannot be NULL */
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
var5 = (val*)(0l<<2|1);
var_pos = var5;
} else {
}
if (var_ln == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var_ln,((val*)NULL)) on <var_ln:nullable Int> */
var9 = 0; /* incompatible types Int vs. null; cannot be NULL */
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var10,var_pos) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var_pos:nullable Int(Int)> isa OTHER */
/* <var_pos:nullable Int(Int)> isa OTHER */
var13 = 1; /* easy <var_pos:nullable Int(Int)> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = var_pos == NULL ? "null" : (((long)var_pos&3)?type_info[((long)var_pos&3)]:var_pos->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = (long)(var_pos)>>2;
var15 = var10 - var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var16 = (val*)(var11<<2|1);
var_ln = var16;
} else {
}
{
{ /* Inline kernel$Int$+ (var_pos,var_ln) on <var_pos:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <var_ln:nullable Int(Int)> isa OTHER */
/* <var_ln:nullable Int(Int)> isa OTHER */
var19 = 1; /* easy <var_ln:nullable Int(Int)> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = var_ln == NULL ? "null" : (((long)var_ln&3)?type_info[((long)var_ln&3)]:var_ln->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = (long)(var_pos)>>2;
var24 = (long)(var_ln)>>2;
var25 = var23 + var24;
var17 = var25;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_max = var17;
var26 = (long)(var_pos)>>2;
var_i = var26;
var_ = var_max;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var29 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var33 = var_i < var_;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel$Int$<< (var_res,4l) on <var_res:Int> */
var36 = var_res << 4l;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_res = var34;
{
var37 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
var38 = core__abstract_text___Char___from_hex(var37);
{
{ /* Inline kernel$Int$+ (var_res,var38) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var38:Int> isa OTHER */
/* <var38:Int> isa OTHER */
var41 = 1; /* easy <var38:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var45 = var_res + var38;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_res = var39;
var46 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var46;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_oct for (self: Text): Int */
long core___core__Text___to_oct(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__a_to]))(self, 8l); /* a_to on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_bin for (self: Text): Int */
long core___core__Text___to_bin(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__a_to]))(self, 2l); /* a_to on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_dec for (self: Text): Int */
long core___core__Text___to_dec(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__a_to]))(self, 10l); /* a_to on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$a_to for (self: Text, Int): Int */
long core___core__Text___a_to(val* self, long p0) {
long var /* : Int */;
long var_base /* var base: Int */;
long var_i /* var i: Int */;
short int var_neg /* var neg: Bool */;
long var_j /* var j: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_c /* var c: Char */;
long var9 /* : Int */;
long var_v /* var v: Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
long var44 /* : Int */;
var_base = p0;
var_i = 0l;
var_neg = 0;
var_j = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_j < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_j); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_c = var8;
var9 = core___core__Char___to_i(var_c);
var_v = var9;
{
{ /* Inline kernel$Int$> (var_v,var_base) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var12 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var16 = var_v > var_base;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (var_neg){
{
{ /* Inline kernel$Int$unary - (var_i) on <var_i:Int> */
var19 = -var_i;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var = var17;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
} else {
{
{ /* Inline kernel$Int$< (var_v,0l) on <var_v:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var22 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var26 = var_v < 0l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var_neg = 1;
} else {
{
{ /* Inline kernel$Int$* (var_i,var_base) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var29 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var33 = var_i * var_base;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var27,var_v) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_v:Int> isa OTHER */
/* <var_v:Int> isa OTHER */
var36 = 1; /* easy <var_v:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var40 = var27 + var_v;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_i = var34;
}
}
var41 = core___core__Int___Discrete__successor(var_j, 1l);
var_j = var41;
}
BREAK_label: (void)0;
if (var_neg){
{
{ /* Inline kernel$Int$unary - (var_i) on <var_i:Int> */
var44 = -var_i;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
} else {
var = var_i;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_numeric for (self: Text): Bool */
short int core___core__Text___is_numeric(val* self) {
short int var /* : Bool */;
short int var_has_point /* var has_point: Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_e_index /* var e_index: Int */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
uint32_t var11 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_18 /* var : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_27 /* var : Bool */;
long var28 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
short int var_58 /* var : Bool */;
val* var59 /* : SequenceRead[Char] */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
val* var67 /* : nullable Object */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
uint32_t var71 /* : Char */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var_78 /* var : Bool */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var_89 /* var : Bool */;
long var90 /* : Int */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
long var97 /* : Int */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
short int var104 /* : Bool */;
long var105 /* : Int */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
var_has_point = 0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var3 = -1l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_e_index = var1;
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (uint32_t)((long)(var10)>>2);
var_c = var11;
var12 = core__abstract_text___Char___is_numeric(var_c);
var13 = !var12;
if (var13){
{
{ /* Inline kernel$Char$== (var_c,'.') on <var_c:Char> */
var17 = var_c == '.';
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_18 = var15;
if (var15){
var19 = !var_has_point;
var14 = var19;
} else {
var14 = var_18;
}
if (var14){
var_has_point = 1;
} else {
{
{ /* Inline kernel$Char$== (var_c,'e') on <var_c:Char> */
var26 = var_c == 'e';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_27 = var24;
if (var24){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var30 = -1l;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_e_index,var28) on <var_e_index:Int> */
var33 = var_e_index == var28;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var23 = var31;
} else {
var23 = var_27;
}
var_34 = var23;
if (var23){
{
{ /* Inline kernel$Int$> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var37 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var41 = var_i > 0l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var22 = var35;
} else {
var22 = var_34;
}
var_42 = var22;
if (var22){
{
var43 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var50 = var43 - 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_i,var44) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var53 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var57 = var_i < var44;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var21 = var51;
} else {
var21 = var_42;
}
var_58 = var21;
if (var21){
{
var59 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var66 = var_i - 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
var67 = ((val*(*)(val* self, long p0))((((long)var59&3)?class_info[((long)var59&3)]:var59->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var59, var60); /* [] on <var59:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$!= (var67,'-') on <var67:nullable Object(Char)> */
var71 = (uint32_t)((long)(var67)>>2);
var70 = var71 == '-';
var72 = !var70;
var68 = var72;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var20 = var68;
} else {
var20 = var_58;
}
if (var20){
var_e_index = var_i;
} else {
{
{ /* Inline kernel$Char$== (var_c,'-') on <var_c:Char> */
var77 = var_c == '-';
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_78 = var75;
if (var75){
{
{ /* Inline kernel$Int$+ (var_e_index,1l) on <var_e_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var81 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var85 = var_e_index + 1l;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_i,var79) on <var_i:Int> */
var88 = var_i == var79;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var74 = var86;
} else {
var74 = var_78;
}
var_89 = var74;
if (var74){
{
var90 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var90,1l) on <var90:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var93 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var97 = var90 - 1l;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_i,var91) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var91:Int> isa OTHER */
/* <var91:Int> isa OTHER */
var100 = 1; /* easy <var91:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var104 = var_i < var91;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var73 = var98;
} else {
var73 = var_89;
}
if (var73){
} else {
var = 0;
goto RET_LABEL;
}
}
}
} else {
}
var105 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var105;
}
BREAK_label: (void)0;
{
var106 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_empty]))(self); /* is_empty on <self:Text>*/
}
var107 = !var106;
var = var107;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_hex for (self: Text): Bool */
short int core___core__Text___is_hex(val* self) {
short int var /* : Bool */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
long var64 /* : Int */;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_c = var8;
{
{ /* Inline kernel$Char$>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var14 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var18 = var_c >= 'a';
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_19 = var12;
if (var12){
{
{ /* Inline kernel$Char$<= (var_c,'f') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'f':Char> isa OTHER */
/* <'f':Char> isa OTHER */
var22 = 1; /* easy <'f':Char> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var26 = var_c <= 'f';
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var11 = var20;
} else {
var11 = var_19;
}
var27 = !var11;
var_28 = var27;
if (var27){
{
{ /* Inline kernel$Char$>= (var_c,'A') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var32 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var36 = var_c >= 'A';
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_37 = var30;
if (var30){
{
{ /* Inline kernel$Char$<= (var_c,'F') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'F':Char> isa OTHER */
/* <'F':Char> isa OTHER */
var40 = 1; /* easy <'F':Char> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var44 = var_c <= 'F';
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var29 = var38;
} else {
var29 = var_37;
}
var45 = !var29;
var10 = var45;
} else {
var10 = var_28;
}
var_46 = var10;
if (var10){
{
{ /* Inline kernel$Char$>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var50 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var54 = var_c >= '0';
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_55 = var48;
if (var48){
{
{ /* Inline kernel$Char$<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var58 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var62 = var_c <= '9';
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var47 = var56;
} else {
var47 = var_55;
}
var63 = !var47;
var9 = var63;
} else {
var9 = var_46;
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var64 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var64;
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_bin for (self: Text): Bool */
short int core___core__Text___is_bin(val* self) {
short int var /* : Bool */;
val* var1 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[Char] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
uint32_t var6 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:IndexedIterator[Char]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var5)>>2);
var_i = var6;
{
{ /* Inline kernel$Char$!= (var_i,'0') on <var_i:Char> */
var10 = var_i == '0';
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_12 = var8;
if (var8){
{
{ /* Inline kernel$Char$!= (var_i,'1') on <var_i:Char> */
var15 = var_i == '1';
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var7 = var13;
} else {
var7 = var_12;
}
if (var7){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_oct for (self: Text): Bool */
short int core___core__Text___is_oct(val* self) {
short int var /* : Bool */;
val* var1 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[Char] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
uint32_t var6 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:IndexedIterator[Char]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var5)>>2);
var_i = var6;
{
{ /* Inline kernel$Char$< (var_i,'0') on <var_i:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var10 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 914);
fatal_exit(1);
}
var11 = var_i < '0';
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_12 = var8;
if (var8){
var7 = var_12;
} else {
{
{ /* Inline kernel$Char$> (var_i,'7') on <var_i:Char> */
/* Covariant cast for argument 0 (i) <'7':Char> isa OTHER */
/* <'7':Char> isa OTHER */
var15 = 1; /* easy <'7':Char> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 916);
fatal_exit(1);
}
var19 = var_i > '7';
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var7 = var13;
}
if (var7){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_dec for (self: Text): Bool */
short int core___core__Text___is_dec(val* self) {
short int var /* : Bool */;
val* var1 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[Char] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
uint32_t var6 /* : Char */;
uint32_t var_i /* var i: Char */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var_12 /* var : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:IndexedIterator[Char]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var5)>>2);
var_i = var6;
{
{ /* Inline kernel$Char$< (var_i,'0') on <var_i:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var10 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 914);
fatal_exit(1);
}
var11 = var_i < '0';
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_12 = var8;
if (var8){
var7 = var_12;
} else {
{
{ /* Inline kernel$Char$> (var_i,'9') on <var_i:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var15 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 916);
fatal_exit(1);
}
var19 = var_i > '9';
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var7 = var13;
}
if (var7){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_upper for (self: Text): Bool */
short int core___core__Text___is_upper(val* self) {
short int var /* : Bool */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_char /* var char: Char */;
short int var9 /* : Bool */;
long var10 /* : Int */;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_char = var8;
var9 = core___core__Char___is_lower(var_char);
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var10 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var10;
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_lower for (self: Text): Bool */
short int core___core__Text___is_lower(val* self) {
short int var /* : Bool */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_ /* var : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_char /* var char: Char */;
short int var9 /* : Bool */;
long var10 /* : Int */;
var_i = 0l;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var1;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var4 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_i < var_;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_char = var8;
var9 = core___core__Char___is_upper(var_char);
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var10 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var10;
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$l_trim for (self: Text): Text */
val* core___core__Text___l_trim(val* self) {
val* var /* : Text */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
uint32_t var6 /* : Char */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Text */;
long var14 /* : Int */;
val* var15 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var1); /* iterator on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var4)>>2);
var5 = core___core__Char___is_whitespace(var6);
var7 = !var5;
if (var7){
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var8 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$== (var8,var9) on <var8:Int> */
var12 = var8 == var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var13;
goto RET_LABEL;
} else {
}
{
var14 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
var15 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, var14); /* substring_from on <self:Text>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$r_trim for (self: Text): Text */
val* core___core__Text___r_trim(val* self) {
val* var /* : Text */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : IndexedIterator[nullable Object] */;
val* var_iter /* var iter: IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
uint32_t var6 /* : Char */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var13 /* : Text */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
val* var22 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator]))(var1); /* reverse_iterator on <var1:SequenceRead[Char]>*/
}
var_iter = var2;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_iter); /* is_ok on <var_iter:IndexedIterator[Char]>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_iter); /* item on <var_iter:IndexedIterator[Char]>*/
}
var6 = (uint32_t)((long)(var4)>>2);
var5 = core___core__Char___is_whitespace(var6);
var7 = !var5;
if (var7){
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_iter); /* next on <var_iter:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var8 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel$Int$< (var8,0l) on <var8:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var8 < 0l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__empty]))(self); /* empty on <self:Text>*/
}
var = var13;
goto RET_LABEL;
} else {
}
{
var14 = ((long(*)(val* self))((((long)var_iter&3)?class_info[((long)var_iter&3)]:var_iter->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_iter); /* index on <var_iter:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel$Int$+ (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var21 = var14 + 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var22 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var15); /* substring on <self:Text>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$trim for (self: Text): Text */
val* core___core__Text___trim(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
val* var2 /* : Text */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__l_trim]))(self); /* l_trim on <self:Text>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__r_trim]))(var1); /* r_trim on <var1:Text>*/
}
/* <var2:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var2->type->table_size) {
var3 = 0;
} else {
var3 = var2->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
var_class_name = var2 == NULL ? "null" : var2->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 456);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$is_whitespace for (self: Text): Bool */
short int core___core__Text___is_whitespace(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[Char] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
uint32_t var7 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_empty]))(self); /* is_empty on <self:Text>*/
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[Char]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[Char]>*/
}
var7 = (uint32_t)((long)(var6)>>2);
var_c = var7;
var8 = core___core__Char___is_whitespace(var_c);
var9 = !var8;
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[Char]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$chomp for (self: Text): Text */
val* core___core__Text___chomp(val* self) {
val* var /* : Text */;
long var1 /* : Int */;
long var_len /* var len: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var6 /* : SequenceRead[Char] */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_l /* var l: Char */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : Text */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const struct type* type_struct27;
const char* var_class_name28;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
short int var_ /* var : Bool */;
val* var37 /* : SequenceRead[Char] */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
val* var45 /* : nullable Object */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
uint32_t var49 /* : Char */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
val* var57 /* : Text */;
long var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
long var64 /* : Int */;
val* var65 /* : Text */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_len = var1;
{
{ /* Inline kernel$Int$== (var_len,0l) on <var_len:Int> */
var4 = var_len == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
/* <self:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var5 = 0;
} else {
var5 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 495);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
} else {
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var7 = ((val*(*)(val* self))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var6); /* last on <var6:SequenceRead[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_l = var8;
{
{ /* Inline kernel$Char$== (var_l,'\015') on <var_l:Char> */
var11 = var_l == '\015';
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel$Int$- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var18 = var_len - 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var19 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var12); /* substring on <self:Text>*/
}
var = var19;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Char$!= (var_l,'\n') on <var_l:Char> */
var22 = var_l == '\n';
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
/* <self:Text> isa SELFTYPE */
type_struct27 = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype25 = type_struct27->color;
idtype26 = type_struct27->id;
if(cltype25 >= self->type->table_size) {
var24 = 0;
} else {
var24 = self->type->type_table[cltype25] == idtype26;
}
if (unlikely(!var24)) {
var_class_name28 = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 500);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$> (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var36 = var_len > 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_ = var30;
if (var30){
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var_len,2l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var40 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var44 = var_len - 2l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
var45 = ((val*(*)(val* self, long p0))((((long)var37&3)?class_info[((long)var37&3)]:var37->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var37, var38); /* [] on <var37:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var45,'\015') on <var45:nullable Object(Char)> */
var49 = (uint32_t)((long)(var45)>>2);
var48 = var49 == '\015';
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var29 = var46;
} else {
var29 = var_;
}
if (var29){
{
{ /* Inline kernel$Int$- (var_len,2l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var52 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var56 = var_len - 2l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var57 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var50); /* substring on <self:Text>*/
}
var = var57;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var60 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var64 = var_len - 1l;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
{
var65 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var58); /* substring on <self:Text>*/
}
var = var65;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_text$Text$justify for (self: Text, Int, Float, nullable Char): String */
val* core___core__Text___justify(val* self, long p0, double p1, val* p2) {
val* var /* : String */;
long var_length /* var length: Int */;
double var_left /* var left: Float */;
val* var_char /* var char: nullable Char */;
uint32_t var1 /* : Char */;
uint32_t var2 /* : Char */;
val* var3 /* : String */;
val* var_pad /* var pad: String */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
long var_diff /* var diff: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : String */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
double var32 /* : Float */;
double var34 /* : Float */;
double var35 /* : Float */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
double var41 /* : Float */;
long var42 /* : Int */;
long var44 /* : Int */;
long var_before /* var before: Int */;
val* var45 /* : Text */;
val* var46 /* : Text */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
val* var54 /* : Text */;
val* var55 /* : Text */;
var_length = p0;
var_left = p1;
var_char = p2;
if (var_char!=NULL) {
var2 = (uint32_t)((long)(var_char)>>2);
var1 = var2;
} else {
var1 = ' ';
}
var3 = core__abstract_text___Char___Object__to_s(var1);
var_pad = var3;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var_length,var4) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var8 = var_length - var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_diff = var5;
{
{ /* Inline kernel$Int$<= (var_diff,0l) on <var_diff:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var15 = var_diff <= 0l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
var = var16;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Float$>= (var_left,0.0) on <var_left:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var20 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 531);
fatal_exit(1);
}
var24 = var_left >= 0.0;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_ = var18;
if (var18){
{
{ /* Inline kernel$Float$<= (var_left,1.0) on <var_left:Float> */
/* Covariant cast for argument 0 (i) <1.0:Float> isa OTHER */
/* <1.0:Float> isa OTHER */
var27 = 1; /* easy <1.0:Float> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 529);
fatal_exit(1);
}
var31 = var_left <= 1.0;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var17 = var25;
} else {
var17 = var_;
}
if (unlikely(!var17)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 536);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$to_f (var_diff) on <var_diff:Int> */
var34 = (double)var_diff;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var32,var_left) on <var32:Float> */
/* Covariant cast for argument 0 (i) <var_left:Float> isa OTHER */
/* <var_left:Float> isa OTHER */
var37 = 1; /* easy <var_left:Float> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var41 = var32 * var_left;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel$Float$to_i (var35) on <var35:Float> */
var44 = (long)var35;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_before = var42;
{
var45 = ((val*(*)(val* self, long p0))(var_pad->class->vft[COLOR_core__abstract_text__Text___42d]))(var_pad, var_before); /* * on <var_pad:String>*/
}
{
var46 = ((val*(*)(val* self, val* p0))(var45->class->vft[COLOR_core__abstract_text__Text___43d]))(var45, self); /* + on <var45:Text(String)>*/
}
{
{ /* Inline kernel$Int$- (var_diff,var_before) on <var_diff:Int> */
/* Covariant cast for argument 0 (i) <var_before:Int> isa OTHER */
/* <var_before:Int> isa OTHER */
var49 = 1; /* easy <var_before:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var53 = var_diff - var_before;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
var54 = ((val*(*)(val* self, long p0))(var_pad->class->vft[COLOR_core__abstract_text__Text___42d]))(var_pad, var47); /* * on <var_pad:String>*/
}
{
var55 = ((val*(*)(val* self, val* p0))(var46->class->vft[COLOR_core__abstract_text__Text___43d]))(var46, var54); /* + on <var46:Text(String)>*/
}
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_cmangle for (self: Text): String */
val* core___core__Text___to_cmangle(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
static val* varoncenew;
static int varoncenew_guard;
val* var9 /* : Buffer */;
val* var10 /* : Buffer */;
val* var11 /* : Buffer */;
val* var_res /* var res: Buffer */;
short int var_underscore /* var underscore: Bool */;
long var_start /* var start: Int */;
uint32_t var12 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
long var25 /* : Int */;
long var27 /* : Int */;
val* var28 /* : String */;
long var_i /* var i: Int */;
long var29 /* : Int */;
long var_30 /* var : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
uint32_t var38 /* : Char */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
short int var_48 /* var : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
short int var55 /* : Bool */;
short int var_56 /* var : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
short int var64 /* : Bool */;
short int var_65 /* var : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
short int var72 /* : Bool */;
long var74 /* : Int */;
long var76 /* : Int */;
val* var77 /* : String */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
short int var85 /* : Bool */;
short int var_86 /* var : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
long var97 /* : Int */;
long var99 /* : Int */;
val* var100 /* : String */;
long var101 /* : Int */;
long var102 /* : Int */;
long var104 /* : Int */;
val* var105 /* : String */;
val* var106 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_empty]))(self); /* is_empty on <self:Text>*/
}
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var5 = (val*)(0l<<2|1);
var6 = (val*)(0l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
var = var2;
goto RET_LABEL;
} else {
}
if (likely(varoncenew_guard)) {
var9 = varoncenew;
} else {
var10 = NEW_core__Buffer(&type_core__Buffer);
var9 = var10;
varoncenew = var9;
varoncenew_guard = 1;
}
{
var11 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__Buffer__new]))(var9); /* new on <var9:Buffer>*/
}
var_res = var11;
var_underscore = 0;
var_start = 0l;
{
var12 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, 0l); /* [] on <self:Text>*/
}
var_c = var12;
{
{ /* Inline kernel$Char$>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var16 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var17 = var_c >= '0';
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_ = var14;
if (var14){
{
{ /* Inline kernel$Char$<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var20 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var24 = var_c <= '9';
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var13 = var18;
} else {
var13 = var_;
}
if (var13){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '_'); /* add on <var_res:Buffer>*/
}
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var27 = (long)var_c;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var28 = core__flat___Int___core__abstract_text__Object__to_s(var25);
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var28); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
var_start = 1l;
} else {
}
var_i = var_start;
{
var29 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_30 = var29;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_30) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_30:Int> isa OTHER */
/* <var_30:Int> isa OTHER */
var33 = 1; /* easy <var_30:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var37 = var_i < var_30;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
} else {
goto BREAK_label;
}
{
var38 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
var_c = var38;
{
{ /* Inline kernel$Char$>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var43 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var47 = var_c >= 'a';
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_48 = var41;
if (var41){
{
{ /* Inline kernel$Char$<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var51 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var55 = var_c <= 'z';
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var40 = var49;
} else {
var40 = var_48;
}
var_56 = var40;
if (var40){
var39 = var_56;
} else {
{
{ /* Inline kernel$Char$>= (var_c,'A') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var60 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var64 = var_c >= 'A';
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var_65 = var58;
if (var58){
{
{ /* Inline kernel$Char$<= (var_c,'Z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var68 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var72 = var_c <= 'Z';
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var57 = var66;
} else {
var57 = var_65;
}
var39 = var57;
}
if (var39){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
var_underscore = 0;
goto BREAK_label73;
} else {
}
if (var_underscore){
{
{ /* Inline kernel$Char$code_point ('_') on <'_':Char> */
var76 = (long)'_';
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
var77 = core__flat___Int___core__abstract_text__Object__to_s(var74);
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var77); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
} else {
}
{
{ /* Inline kernel$Char$>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var81 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var85 = var_c >= '0';
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var_86 = var79;
if (var79){
{
{ /* Inline kernel$Char$<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var89 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var89)) {
var_class_name92 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var93 = var_c <= '9';
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var78 = var87;
} else {
var78 = var_86;
}
if (var78){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
var_underscore = 0;
} else {
{
{ /* Inline kernel$Char$== (var_c,'_') on <var_c:Char> */
var96 = var_c == '_';
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
if (var94){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
var_underscore = 1;
} else {
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '_'); /* add on <var_res:Buffer>*/
}
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var99 = (long)var_c;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var100 = core__flat___Int___core__abstract_text__Object__to_s(var97);
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var100); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
var_underscore = 0;
}
}
BREAK_label73: (void)0;
var101 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var101;
}
BREAK_label: (void)0;
if (var_underscore){
{
{ /* Inline kernel$Char$code_point ('_') on <'_':Char> */
var104 = (long)'_';
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var105 = core__flat___Int___core__abstract_text__Object__to_s(var102);
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_res, var105); /* append on <var_res:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, 'd'); /* add on <var_res:Buffer>*/
}
} else {
}
{
var106 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:Buffer>*/
}
var = var106;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$escape_to_c for (self: Text): String */
val* core___core__Text___escape_to_c(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_b /* var b: Buffer */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
uint32_t var11 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Bool */;
val* var65 /* : nullable Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
long var_j /* var j: Int */;
long var76 /* : Int */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
short int var83 /* : Bool */;
val* var84 /* : SequenceRead[Char] */;
val* var85 /* : nullable Object */;
uint32_t var86 /* : Char */;
uint32_t var_next /* var next: Char */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var_97 /* var : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var_101 /* var : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
short int var_105 /* var : Bool */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
short int var_109 /* var : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
short int var_113 /* var : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var_117 /* var : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var_121 /* var : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
long var125 /* : Int */;
long var127 /* : Int */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
short int var134 /* : Bool */;
long var135 /* : Int */;
long var137 /* : Int */;
val* var138 /* : String */;
val* var_oct /* var oct: String */;
long var139 /* : Int */;
short int var140 /* : Bool */;
short int var142 /* : Bool */;
long var143 /* : Int */;
short int var144 /* : Bool */;
short int var146 /* : Bool */;
long var147 /* : Int */;
val* var148 /* : String */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_b = var3;
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (uint32_t)((long)(var10)>>2);
var_c = var11;
{
{ /* Inline kernel$Char$== (var_c,'\n') on <var_c:Char> */
var14 = var_c == '\n';
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "\\n";
var18 = (val*)(2l<<2|1);
var19 = (val*)(2l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce = var15;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var15); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'\t') on <var_c:Char> */
var24 = var_c == '\t';
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "\\t";
var29 = (val*)(2l<<2|1);
var30 = (val*)(2l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce25 = var26;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var26); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'\"') on <var_c:Char> */
var35 = var_c == '\"';
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "\\\"";
var40 = (val*)(2l<<2|1);
var41 = (val*)(2l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var37); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'\'') on <var_c:Char> */
var46 = var_c == '\'';
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "\\\'";
var51 = (val*)(2l<<2|1);
var52 = (val*)(2l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var48); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'\\') on <var_c:Char> */
var57 = var_c == '\\';
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "\\\\";
var62 = (val*)(2l<<2|1);
var63 = (val*)(2l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var59); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'?') on <var_c:Char> */
var68 = var_c == '?';
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var71 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var75 = var_i + 1l;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var_j = var69;
{
var76 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$< (var_j,var76) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var76:Int> isa OTHER */
/* <var76:Int> isa OTHER */
var79 = 1; /* easy <var76:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var83 = var_j < var76;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
if (var77){
{
var84 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var85 = ((val*(*)(val* self, long p0))((((long)var84&3)?class_info[((long)var84&3)]:var84->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var84, var_j); /* [] on <var84:SequenceRead[Char]>*/
}
var86 = (uint32_t)((long)(var85)>>2);
var_next = var86;
{
{ /* Inline kernel$Char$== (var_next,'!') on <var_next:Char> */
var96 = var_next == '!';
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_97 = var94;
if (var94){
var93 = var_97;
} else {
{
{ /* Inline kernel$Char$== (var_next,'(') on <var_next:Char> */
var100 = var_next == '(';
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var93 = var98;
}
var_101 = var93;
if (var93){
var92 = var_101;
} else {
{
{ /* Inline kernel$Char$== (var_next,')') on <var_next:Char> */
var104 = var_next == ')';
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var92 = var102;
}
var_105 = var92;
if (var92){
var91 = var_105;
} else {
{
{ /* Inline kernel$Char$== (var_next,'-') on <var_next:Char> */
var108 = var_next == '-';
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var91 = var106;
}
var_109 = var91;
if (var91){
var90 = var_109;
} else {
{
{ /* Inline kernel$Char$== (var_next,'/') on <var_next:Char> */
var112 = var_next == '/';
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var90 = var110;
}
var_113 = var90;
if (var90){
var89 = var_113;
} else {
{
{ /* Inline kernel$Char$== (var_next,'<') on <var_next:Char> */
var116 = var_next == '<';
var114 = var116;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
var89 = var114;
}
var_117 = var89;
if (var89){
var88 = var_117;
} else {
{
{ /* Inline kernel$Char$== (var_next,'=') on <var_next:Char> */
var120 = var_next == '=';
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
var88 = var118;
}
var_121 = var88;
if (var88){
var87 = var_121;
} else {
{
{ /* Inline kernel$Char$== (var_next,'>') on <var_next:Char> */
var124 = var_next == '>';
var122 = var124;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
var87 = var122;
}
if (var87){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '\\'); /* add on <var_b:Buffer>*/
}
} else {
}
} else {
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '?'); /* add on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var127 = (long)var_c;
var125 = var127;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var125,32l) on <var125:Int> */
/* Covariant cast for argument 0 (i) <32l:Int> isa OTHER */
/* <32l:Int> isa OTHER */
var130 = 1; /* easy <32l:Int> isa OTHER*/
if (unlikely(!var130)) {
var_class_name133 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name133);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var134 = var125 < 32l;
var128 = var134;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
if (var128){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '\\'); /* add on <var_b:Buffer>*/
}
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var137 = (long)var_c;
var135 = var137;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
var138 = core__abstract_text___Int___to_base(var135, 8l);
var_oct = var138;
{
var139 = ((long(*)(val* self))(var_oct->class->vft[COLOR_core__abstract_text__Text__length]))(var_oct); /* length on <var_oct:String>*/
}
{
{ /* Inline kernel$Int$== (var139,1l) on <var139:Int> */
var142 = var139 == 1l;
var140 = var142;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
if (var140){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '0'); /* add on <var_b:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '0'); /* add on <var_b:Buffer>*/
}
} else {
{
var143 = ((long(*)(val* self))(var_oct->class->vft[COLOR_core__abstract_text__Text__length]))(var_oct); /* length on <var_oct:String>*/
}
{
{ /* Inline kernel$Int$== (var143,2l) on <var143:Int> */
var146 = var143 == 2l;
var144 = var146;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
if (var144){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '0'); /* add on <var_b:Buffer>*/
}
} else {
}
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var_oct); /* append on <var_b:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
}
}
}
}
}
}
}
var147 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var147;
}
BREAK_label: (void)0;
{
var148 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var148;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$escape_more_to_c for (self: Text, String): String */
val* core___core__Text___escape_more_to_c(val* self, val* p0) {
val* var /* : String */;
val* var_chars /* var chars: String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_b /* var b: Buffer */;
val* var4 /* : String */;
val* var5 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : IndexedIterator[Char] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
uint32_t var10 /* : Char */;
uint32_t var_c /* var c: Char */;
val* var11 /* : SequenceRead[Char] */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
val* var14 /* : String */;
var_chars = p0;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_b = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(self); /* escape_to_c on <self:Text>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__Text__chars]))(var4); /* chars on <var4:String>*/
}
var_ = var5;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:IndexedIterator[Char]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:IndexedIterator[Char]>*/
}
var10 = (uint32_t)((long)(var9)>>2);
var_c = var10;
{
var11 = ((val*(*)(val* self))(var_chars->class->vft[COLOR_core__abstract_text__Text__chars]))(var_chars); /* chars on <var_chars:String>*/
}
{
var12 = (val*)((long)(var_c)<<2|2);
var13 = ((short int(*)(val* self, val* p0))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var11, var12); /* has on <var11:SequenceRead[Char]>*/
}
if (var13){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '\\'); /* add on <var_b:Buffer>*/
}
} else {
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:IndexedIterator[Char]>*/
}
{
var14 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$escape_to_nit for (self: Text): String */
val* core___core__Text___escape_to_nit(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "{}";
var4 = (val*)(2l<<2|1);
var5 = (val*)(2l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
var8 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__escape_more_to_c]))(self, var1); /* escape_more_to_c on <self:Text>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$escape_to_sh for (self: Text): String */
val* core___core__Text___escape_to_sh(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_b /* var b: Buffer */;
val* var4 /* : SequenceRead[Char] */;
val* var5 /* : nullable Object */;
long var_i /* var i: Int */;
long var6 /* : Int */;
long var_ /* var : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : SequenceRead[Char] */;
val* var12 /* : nullable Object */;
uint32_t var13 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
long var28 /* : Int */;
val* var29 /* : SequenceRead[Char] */;
val* var30 /* : nullable Object */;
val* var31 /* : String */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_b = var3;
{
var4 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Text__chars]))(var_b); /* chars on <var_b:Buffer>*/
}
{
var5 = (val*)((long)('\'')<<2|2);
((void(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var4, var5); /* add on <var4:SequenceRead[Char](Sequence[Char])>*/
}
var_i = 0l;
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var6;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
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
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var12 = ((val*(*)(val* self, long p0))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var11, var_i); /* [] on <var11:SequenceRead[Char]>*/
}
var13 = (uint32_t)((long)(var12)>>2);
var_c = var13;
{
{ /* Inline kernel$Char$== (var_c,'\'') on <var_c:Char> */
var16 = var_c == '\'';
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
if (likely(varonce!=NULL)) {
var17 = varonce;
} else {
var18 = "\'\\\'\'";
var20 = (val*)(4l<<2|1);
var21 = (val*)(4l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce = var17;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var17); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$!= (var_c,'\000') on <var_c:Char> */
var26 = var_c == '\000';
var27 = !var26;
var24 = var27;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (unlikely(!var24)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'without_null_byte\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 705);
fatal_exit(1);
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
}
var28 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var28;
}
BREAK_label: (void)0;
{
var29 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Text__chars]))(var_b); /* chars on <var_b:Buffer>*/
}
{
var30 = (val*)((long)('\'')<<2|2);
((void(*)(val* self, val* p0))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var29, var30); /* add on <var29:SequenceRead[Char](Sequence[Char])>*/
}
{
var31 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$escape_to_mk for (self: Text): String */
val* core___core__Text___escape_to_mk(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_b /* var b: Buffer */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
uint32_t var11 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_27 /* var : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
long var39 /* : Int */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
short int var_49 /* var : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var_53 /* var : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var_57 /* var : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var_61 /* var : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
val* var66 /* : NativeArray[String] */;
static val* varonce65;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
long var75 /* : Int */;
long var77 /* : Int */;
val* var78 /* : String */;
val* var79 /* : String */;
long var80 /* : Int */;
val* var81 /* : String */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_b = var3;
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (uint32_t)((long)(var10)>>2);
var_c = var11;
{
{ /* Inline kernel$Char$== (var_c,'$') on <var_c:Char> */
var14 = var_c == '$';
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "$$";
var18 = (val*)(2l<<2|1);
var19 = (val*)(2l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce = var15;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var15); /* append on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,':') on <var_c:Char> */
var26 = var_c == ':';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_27 = var24;
if (var24){
var23 = var_27;
} else {
{
{ /* Inline kernel$Char$== (var_c,' ') on <var_c:Char> */
var30 = var_c == ' ';
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var23 = var28;
}
var_31 = var23;
if (var23){
var22 = var_31;
} else {
{
{ /* Inline kernel$Char$== (var_c,'#') on <var_c:Char> */
var34 = var_c == '#';
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var22 = var32;
}
if (var22){
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, '\\'); /* add on <var_b:Buffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var41 = (long)var_c;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var39,32l) on <var39:Int> */
/* Covariant cast for argument 0 (i) <32l:Int> isa OTHER */
/* <32l:Int> isa OTHER */
var44 = 1; /* easy <32l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var48 = var39 < 32l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_49 = var42;
if (var42){
var38 = var_49;
} else {
{
{ /* Inline kernel$Char$== (var_c,';') on <var_c:Char> */
var52 = var_c == ';';
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var38 = var50;
}
var_53 = var38;
if (var38){
var37 = var_53;
} else {
{
{ /* Inline kernel$Char$== (var_c,'|') on <var_c:Char> */
var56 = var_c == '|';
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var37 = var54;
}
var_57 = var37;
if (var37){
var36 = var_57;
} else {
{
{ /* Inline kernel$Char$== (var_c,'\\') on <var_c:Char> */
var60 = var_c == '\\';
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var36 = var58;
}
var_61 = var36;
if (var36){
var35 = var_61;
} else {
{
{ /* Inline kernel$Char$== (var_c,'=') on <var_c:Char> */
var64 = var_c == '=';
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var35 = var62;
}
if (var35){
if (unlikely(varonce65==NULL)) {
var66 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "?";
var71 = (val*)(1l<<2|1);
var72 = (val*)(1l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var66)->values[0]=var68;
} else {
var66 = varonce65;
varonce65 = NULL;
}
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var77 = (long)var_c;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var78 = core__abstract_text___Int___to_base(var75, 16l);
((struct instance_core__NativeArray*)var66)->values[1]=var78;
{
var79 = ((val*(*)(val* self))(var66->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var66); /* native_to_s on <var66:NativeArray[String]>*/
}
varonce65 = var66;
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var79); /* append on <var_b:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var_c); /* add on <var_b:Buffer>*/
}
}
}
}
var80 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var80;
}
BREAK_label: (void)0;
{
var81 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Buffer>*/
}
var = var81;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$unescape_nit for (self: Text): String */
val* core___core__Text___unescape_nit(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
long var3 /* : Int */;
val* var4 /* : Buffer */;
val* var_res /* var res: Buffer */;
short int var_was_slash /* var was_slash: Bool */;
long var_i /* var i: Int */;
long var5 /* : Int */;
long var_ /* var : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : SequenceRead[Char] */;
val* var11 /* : nullable Object */;
uint32_t var12 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
long var30 /* : Int */;
val* var31 /* : String */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var4 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var1, var3); /* with_cap on <var1:Buffer>*/
}
var_res = var4;
var_was_slash = 0;
var_i = 0l;
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var5;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var9 = var_i < var_;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var11 = ((val*(*)(val* self, long p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var10, var_i); /* [] on <var10:SequenceRead[Char]>*/
}
var12 = (uint32_t)((long)(var11)>>2);
var_c = var12;
var13 = !var_was_slash;
if (var13){
{
{ /* Inline kernel$Char$== (var_c,'\\') on <var_c:Char> */
var16 = var_c == '\\';
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var_was_slash = 1;
} else {
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
}
goto BREAK_label17;
} else {
}
var_was_slash = 0;
{
{ /* Inline kernel$Char$== (var_c,'n') on <var_c:Char> */
var20 = var_c == 'n';
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '\n'); /* add on <var_res:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'r') on <var_c:Char> */
var23 = var_c == 'r';
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '\015'); /* add on <var_res:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'t') on <var_c:Char> */
var26 = var_c == 't';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '\t'); /* add on <var_res:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'0') on <var_c:Char> */
var29 = var_c == '0';
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, '\000'); /* add on <var_res:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_res->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_res, var_c); /* add on <var_res:Buffer>*/
}
}
}
}
}
BREAK_label17: (void)0;
var30 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var30;
}
BREAK_label: (void)0;
{
var31 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:Buffer>*/
}
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$escape_to_utf16 for (self: Text): String */
val* core___core__Text___escape_to_utf16(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_buf /* var buf: Buffer */;
val* var4 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[Char] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
uint32_t var9 /* : Char */;
uint32_t var_i /* var i: Char */;
val* var10 /* : String */;
val* var11 /* : String */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_buf = var3;
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var4;
{
var5 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[Char]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[Char]>*/
}
var9 = (uint32_t)((long)(var8)>>2);
var_i = var9;
var10 = core__abstract_text___Char___escape_to_utf16(var_i);
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var10); /* append on <var_buf:Buffer>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[Char]>*/
}
{
var11 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_buf); /* to_s on <var_buf:Buffer>*/
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$from_utf16_escape for (self: Text, nullable Int, nullable Int): Char */
uint32_t core___core__Text___from_utf16_escape(val* self, val* p0, val* p1) {
uint32_t var /* : Char */;
val* var_pos /* var pos: nullable Int */;
val* var_ln /* var ln: nullable Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var15 /* : Int */;
val* var16 /* : nullable Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
short int var24 /* : Bool */;
uint32_t var25 /* : Char */;
uint32_t var27 /* : Char */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
val* var36 /* : nullable Int */;
long var37 /* : Int */;
uint32_t var38 /* : UInt32 */;
uint32_t var40 /* : UInt32 */;
uint32_t var_cp /* var cp: UInt32 */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
uint32_t var48 /* : Char */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
short int var55 /* : Bool */;
uint32_t var56 /* : Char */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
short int var63 /* : Bool */;
uint32_t var64 /* : Char */;
uint32_t var66 /* : Char */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
long var70 /* : Int */;
uint32_t var71 /* : Char */;
uint32_t var73 /* : Char */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
long var80 /* : Int */;
short int var81 /* : Bool */;
uint32_t var82 /* : Char */;
uint32_t var84 /* : Char */;
uint32_t var85 /* : UInt32 */;
uint32_t var87 /* : UInt32 */;
long var88 /* : Int */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
long var94 /* : Int */;
long var95 /* : Int */;
val* var96 /* : nullable Int */;
long var97 /* : Int */;
uint32_t var98 /* : UInt32 */;
uint32_t var100 /* : UInt32 */;
uint32_t var101 /* : UInt32 */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
uint32_t var107 /* : UInt32 */;
uint32_t var108 /* : UInt32 */;
uint32_t var110 /* : UInt32 */;
uint32_t var_cplo /* var cplo: UInt32 */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
int cltype114;
int idtype115;
const char* var_class_name116;
short int var117 /* : Bool */;
uint32_t var118 /* : Char */;
uint32_t var120 /* : Char */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
const char* var_class_name126;
short int var127 /* : Bool */;
uint32_t var128 /* : Char */;
uint32_t var130 /* : Char */;
uint32_t var131 /* : UInt32 */;
uint32_t var132 /* : Char */;
var_pos = p0;
var_ln = p1;
if (var_pos == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var_pos,((val*)NULL)) on <var_pos:nullable Int> */
var4 = 0; /* incompatible types Int vs. null; cannot be NULL */
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
var5 = (val*)(0l<<2|1);
var_pos = var5;
} else {
}
if (var_ln == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var_ln,((val*)NULL)) on <var_ln:nullable Int> */
var9 = 0; /* incompatible types Int vs. null; cannot be NULL */
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var10,var_pos) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var_pos:nullable Int(Int)> isa OTHER */
/* <var_pos:nullable Int(Int)> isa OTHER */
var13 = 1; /* easy <var_pos:nullable Int(Int)> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = var_pos == NULL ? "null" : (((long)var_pos&3)?type_info[((long)var_pos&3)]:var_pos->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = (long)(var_pos)>>2;
var15 = var10 - var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var16 = (val*)(var11<<2|1);
var_ln = var16;
} else {
}
{
{ /* Inline kernel$Int$< (var_ln,6l) on <var_ln:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <6l:Int> isa OTHER */
/* <6l:Int> isa OTHER */
var19 = 1; /* easy <6l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var23 = (long)(var_ln)>>2;
var24 = var23 < 6l;
var17 = var24;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline kernel$Int$code_point (65533l) on <65533l:Int> */
var27 = (uint32_t)65533l;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var = var25;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_pos,2l) on <var_pos:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var30 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var34 = (long)(var_pos)>>2;
var35 = var34 + 2l;
var28 = var35;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
var36 = (val*)(var28<<2|1);
var37 = ((long(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__from_utf16_digit]))(self, var36); /* from_utf16_digit on <self:Text>*/
}
{
{ /* Inline fixed_ints$Int$to_u32 (var37) on <var37:Int> */
var40 = (uint32_t)var37;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_cp = var38;
{
{ /* Inline fixed_ints$UInt32$< (var_cp,UINT32_C(55296)) on <var_cp:UInt32> */
/* Covariant cast for argument 0 (i) <UINT32_C(55296):UInt32> isa OTHER */
/* <UINT32_C(55296):UInt32> isa OTHER */
var43 = 1; /* easy <UINT32_C(55296):UInt32> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 615);
fatal_exit(1);
}
var47 = var_cp < UINT32_C(55296);
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
var48 = core__native___UInt32___code_point(var_cp);
var = var48;
goto RET_LABEL;
} else {
}
{
{ /* Inline fixed_ints$UInt32$> (var_cp,UINT32_C(57343)) on <var_cp:UInt32> */
/* Covariant cast for argument 0 (i) <UINT32_C(57343):UInt32> isa OTHER */
/* <UINT32_C(57343):UInt32> isa OTHER */
var51 = 1; /* easy <UINT32_C(57343):UInt32> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 617);
fatal_exit(1);
}
var55 = var_cp > UINT32_C(57343);
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
var56 = core__native___UInt32___code_point(var_cp);
var = var56;
goto RET_LABEL;
} else {
}
{
{ /* Inline fixed_ints$UInt32$> (var_cp,UINT32_C(56319)) on <var_cp:UInt32> */
/* Covariant cast for argument 0 (i) <UINT32_C(56319):UInt32> isa OTHER */
/* <UINT32_C(56319):UInt32> isa OTHER */
var59 = 1; /* easy <UINT32_C(56319):UInt32> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 617);
fatal_exit(1);
}
var63 = var_cp > UINT32_C(56319);
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
{
{ /* Inline kernel$Int$code_point (65533l) on <65533l:Int> */
var66 = (uint32_t)65533l;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var = var64;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_ln,6l) on <var_ln:nullable Int(Int)> */
var70 = (long)(var_ln)>>2;
var69 = var70 == 6l;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
if (var67){
{
{ /* Inline kernel$Int$code_point (65533l) on <65533l:Int> */
var73 = (uint32_t)65533l;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var = var71;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$< (var_ln,12l) on <var_ln:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <12l:Int> isa OTHER */
/* <12l:Int> isa OTHER */
var76 = 1; /* easy <12l:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var80 = (long)(var_ln)>>2;
var81 = var80 < 12l;
var74 = var81;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
if (var74){
{
{ /* Inline kernel$Int$code_point (65533l) on <65533l:Int> */
var84 = (uint32_t)65533l;
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var = var82;
goto RET_LABEL;
} else {
}
{
{ /* Inline fixed_ints$UInt32$<< (var_cp,16l) on <var_cp:UInt32> */
var87 = var_cp << 16l;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_cp = var85;
{
{ /* Inline kernel$Int$+ (var_pos,8l) on <var_pos:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <8l:Int> isa OTHER */
/* <8l:Int> isa OTHER */
var90 = 1; /* easy <8l:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var94 = (long)(var_pos)>>2;
var95 = var94 + 8l;
var88 = var95;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
var96 = (val*)(var88<<2|1);
var97 = ((long(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__from_utf16_digit]))(self, var96); /* from_utf16_digit on <self:Text>*/
}
{
{ /* Inline fixed_ints$Int$to_u32 (var97) on <var97:Int> */
var100 = (uint32_t)var97;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$+ (var_cp,var98) on <var_cp:UInt32> */
/* Covariant cast for argument 0 (i) <var98:UInt32> isa OTHER */
/* <var98:UInt32> isa OTHER */
var103 = 1; /* easy <var98:UInt32> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 618);
fatal_exit(1);
}
var107 = var_cp + var98;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
var_cp = var101;
{
{ /* Inline fixed_ints$UInt32$& (var_cp,UINT32_C(65535)) on <var_cp:UInt32> */
var110 = var_cp & UINT32_C(65535);
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
var_cplo = var108;
{
{ /* Inline fixed_ints$UInt32$< (var_cplo,UINT32_C(56320)) on <var_cplo:UInt32> */
/* Covariant cast for argument 0 (i) <UINT32_C(56320):UInt32> isa OTHER */
/* <UINT32_C(56320):UInt32> isa OTHER */
var113 = 1; /* easy <UINT32_C(56320):UInt32> isa OTHER*/
if (unlikely(!var113)) {
var_class_name116 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name116);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 615);
fatal_exit(1);
}
var117 = var_cplo < UINT32_C(56320);
var111 = var117;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
if (var111){
{
{ /* Inline kernel$Int$code_point (65533l) on <65533l:Int> */
var120 = (uint32_t)65533l;
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
var = var118;
goto RET_LABEL;
} else {
}
{
{ /* Inline fixed_ints$UInt32$> (var_cplo,UINT32_C(57343)) on <var_cplo:UInt32> */
/* Covariant cast for argument 0 (i) <UINT32_C(57343):UInt32> isa OTHER */
/* <UINT32_C(57343):UInt32> isa OTHER */
var123 = 1; /* easy <UINT32_C(57343):UInt32> isa OTHER*/
if (unlikely(!var123)) {
var_class_name126 = type_core__UInt32.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name126);
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints, 617);
fatal_exit(1);
}
var127 = var_cplo > UINT32_C(57343);
var121 = var127;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
if (var121){
{
{ /* Inline kernel$Int$code_point (65533l) on <65533l:Int> */
var130 = (uint32_t)65533l;
var128 = var130;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
var = var128;
goto RET_LABEL;
} else {
}
var131 = core__native___UInt32___from_utf16_surr(var_cp);
var132 = core__native___UInt32___code_point(var131);
var = var132;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$from_utf16_digit for (self: Text, nullable Int): Int */
long core___core__Text___from_utf16_digit(val* self, val* p0) {
long var /* : Int */;
val* var_pos /* var pos: nullable Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
long var7 /* : Int */;
var_pos = p0;
if (var_pos == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var_pos,((val*)NULL)) on <var_pos:nullable Int> */
var4 = 0; /* incompatible types Int vs. null; cannot be NULL */
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
var5 = (val*)(0l<<2|1);
var_pos = var5;
} else {
}
{
var6 = (val*)(4l<<2|1);
var7 = ((long(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_core__abstract_text__Text__to_hex]))(self, var_pos, var6); /* to_hex on <self:Text>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_percent_encoding for (self: Text): String */
val* core___core__Text___to_percent_encoding(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_buf /* var buf: Buffer */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
uint32_t var11 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
short int var_43 /* var : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
short int var_51 /* var : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
short int var59 /* : Bool */;
short int var_60 /* var : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
short int var67 /* : Bool */;
short int var_68 /* var : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var_72 /* var : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var_76 /* var : Bool */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var_80 /* var : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : String */;
val* var85 /* : SequenceRead[Byte] */;
val* var_bytes /* var bytes: SequenceRead[Byte] */;
val* var_86 /* var : SequenceRead[Byte] */;
val* var87 /* : Iterator[nullable Object] */;
val* var_88 /* var : IndexedIterator[Byte] */;
short int var89 /* : Bool */;
val* var91 /* : nullable Object */;
unsigned char var92 /* : Byte */;
unsigned char var_b /* var b: Byte */;
val* var93 /* : NativeArray[String] */;
static val* varonce;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Bool */;
val* var101 /* : nullable Bool */;
long var102 /* : Int */;
long var104 /* : Int */;
val* var105 /* : String */;
val* var106 /* : String */;
long var107 /* : Int */;
val* var108 /* : String */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_buf = var3;
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (uint32_t)((long)(var10)>>2);
var_c = var11;
{
{ /* Inline kernel$Char$>= (var_c,'0') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var21 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var25 = var_c >= '0';
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_26 = var19;
if (var19){
{
{ /* Inline kernel$Char$<= (var_c,'9') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var29 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var33 = var_c <= '9';
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var18 = var27;
} else {
var18 = var_26;
}
var_34 = var18;
if (var18){
var17 = var_34;
} else {
{
{ /* Inline kernel$Char$>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var38 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var42 = var_c >= 'a';
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_43 = var36;
if (var36){
{
{ /* Inline kernel$Char$<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var46 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var50 = var_c <= 'z';
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var35 = var44;
} else {
var35 = var_43;
}
var17 = var35;
}
var_51 = var17;
if (var17){
var16 = var_51;
} else {
{
{ /* Inline kernel$Char$>= (var_c,'A') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var55 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var59 = var_c >= 'A';
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_60 = var53;
if (var53){
{
{ /* Inline kernel$Char$<= (var_c,'Z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var63 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var67 = var_c <= 'Z';
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var52 = var61;
} else {
var52 = var_60;
}
var16 = var52;
}
var_68 = var16;
if (var16){
var15 = var_68;
} else {
{
{ /* Inline kernel$Char$== (var_c,'-') on <var_c:Char> */
var71 = var_c == '-';
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var15 = var69;
}
var_72 = var15;
if (var15){
var14 = var_72;
} else {
{
{ /* Inline kernel$Char$== (var_c,'.') on <var_c:Char> */
var75 = var_c == '.';
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var14 = var73;
}
var_76 = var14;
if (var14){
var13 = var_76;
} else {
{
{ /* Inline kernel$Char$== (var_c,'_') on <var_c:Char> */
var79 = var_c == '_';
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var13 = var77;
}
var_80 = var13;
if (var13){
var12 = var_80;
} else {
{
{ /* Inline kernel$Char$== (var_c,'~') on <var_c:Char> */
var83 = var_c == '~';
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var12 = var81;
}
if (var12){
{
((void(*)(val* self, uint32_t p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buf, var_c); /* add on <var_buf:Buffer>*/
}
} else {
var84 = core__abstract_text___Char___Object__to_s(var_c);
{
var85 = ((val*(*)(val* self))(var84->class->vft[COLOR_core__abstract_text__Text__bytes]))(var84); /* bytes on <var84:String>*/
}
var_bytes = var85;
var_86 = var_bytes;
{
var87 = ((val*(*)(val* self))((((long)var_86&3)?class_info[((long)var_86&3)]:var_86->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_86); /* iterator on <var_86:SequenceRead[Byte]>*/
}
var_88 = var87;
for(;;) {
{
var89 = ((short int(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_88); /* is_ok on <var_88:IndexedIterator[Byte]>*/
}
if (var89){
} else {
goto BREAK_label90;
}
{
var91 = ((val*(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_88); /* item on <var_88:IndexedIterator[Byte]>*/
}
var92 = ((struct instance_core__Byte*)var91)->value; /* autounbox from nullable Object to Byte */;
var_b = var92;
if (unlikely(varonce==NULL)) {
var93 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = "%";
var98 = (val*)(1l<<2|1);
var99 = (val*)(1l<<2|1);
var100 = (val*)((long)(0)<<2|3);
var101 = (val*)((long)(0)<<2|3);
var97 = core__flat___CString___to_s_unsafe(var96, var98, var99, var100, var101);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var93)->values[0]=var95;
} else {
var93 = varonce;
varonce = NULL;
}
{
{ /* Inline kernel$Byte$to_i (var_b) on <var_b:Byte> */
var104 = (long)var_b;
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var105 = core__abstract_text___Int___to_hex(var102);
((struct instance_core__NativeArray*)var93)->values[1]=var105;
{
var106 = ((val*(*)(val* self))(var93->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var93); /* native_to_s on <var93:NativeArray[String]>*/
}
varonce = var93;
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var106); /* append on <var_buf:Buffer>*/
}
{
((void(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_88); /* next on <var_88:IndexedIterator[Byte]>*/
}
}
BREAK_label90: (void)0;
{
((void(*)(val* self))((((long)var_88&3)?class_info[((long)var_88&3)]:var_88->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_88); /* finish on <var_88:IndexedIterator[Byte]>*/
}
}
var107 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var107;
}
BREAK_label: (void)0;
{
var108 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_buf); /* to_s on <var_buf:Buffer>*/
}
var = var108;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$from_percent_encoding for (self: Text): String */
val* core___core__Text___from_percent_encoding(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_len /* var len: Int */;
short int var_has_percent /* var has_percent: Bool */;
val* var2 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[Char] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
uint32_t var7 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
short int var15 /* : Bool */;
val* var16 /* : String */;
static char* varoncenew;
static int varoncenew_guard;
char* var17 /* : CString */;
char* var18 /* : CString */;
char* var19 /* : CString */;
char* var21 /* : CString */;
char* var_buf /* var buf: CString */;
long var_i /* var i: Int */;
long var_l /* var l: Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
val* var30 /* : SequenceRead[Char] */;
val* var31 /* : nullable Object */;
uint32_t var32 /* : Char */;
uint32_t var_c33 /* var c: Char */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
unsigned char var52 /* : Byte */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
val* var61 /* : Text */;
val* var_hex_s /* var hex_s: Text */;
short int var62 /* : Bool */;
long var63 /* : Int */;
long var_hex_i /* var hex_i: Int */;
unsigned char var64 /* : Byte */;
unsigned char var66 /* : Byte */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
unsigned char var75 /* : Byte */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
unsigned char var84 /* : Byte */;
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
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:Text>*/
}
var_len = var1;
var_has_percent = 0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
var_ = var2;
{
var3 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[Char]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[Char]>*/
}
var7 = (uint32_t)((long)(var6)>>2);
var_c = var7;
{
{ /* Inline kernel$Char$== (var_c,'%') on <var_c:Char> */
var10 = var_c == '%';
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline kernel$Int$- (var_len,2l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var13 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var_len - 2l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_len = var11;
var_has_percent = 1;
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[Char]>*/
}
var15 = !var_has_percent;
if (var15){
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
var = var16;
goto RET_LABEL;
} else {
}
if (likely(varoncenew_guard)) {
var17 = varoncenew;
} else {
var18 = NULL/*special!*/;
var17 = var18;
varoncenew = var17;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var17,var_len) on <var17:CString> */
var21 = (char*)nit_alloc(var_len);
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_buf = var19;
var_i = 0l;
var_l = 0l;
for(;;) {
{
var22 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$< (var_i,var22) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var29 = var_i < var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
{
var30 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var31 = ((val*(*)(val* self, long p0))((((long)var30&3)?class_info[((long)var30&3)]:var30->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var30, var_i); /* [] on <var30:SequenceRead[Char]>*/
}
var32 = (uint32_t)((long)(var31)>>2);
var_c33 = var32;
{
{ /* Inline kernel$Char$== (var_c33,'%') on <var_c33:Char> */
var36 = var_c33 == '%';
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
{
{ /* Inline kernel$Int$+ (var_i,2l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var39 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var43 = var_i + 2l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
var44 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$>= (var37,var44) on <var37:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var47 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var51 = var37 >= var44;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
var52 = core___core__Char___ascii('%');
{
{ /* Inline native$CString$[]= (var_buf,var_l,var52) on <var_buf:CString> */
var_buf[var_l]=(unsigned char)var52;
RET_LABEL53:(void)0;
}
}
} else {
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var60 = var_i + 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_i = var54;
{
var61 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_i, 2l); /* substring on <self:Text>*/
}
var_hex_s = var61;
{
var62 = ((short int(*)(val* self))(var_hex_s->class->vft[COLOR_core__abstract_text__Text__is_hex]))(var_hex_s); /* is_hex on <var_hex_s:Text>*/
}
if (var62){
{
var63 = ((long(*)(val* self, val* p0, val* p1))(var_hex_s->class->vft[COLOR_core__abstract_text__Text__to_hex]))(var_hex_s, ((val*)NULL), ((val*)NULL)); /* to_hex on <var_hex_s:Text>*/
}
var_hex_i = var63;
{
{ /* Inline kernel$Int$to_b (var_hex_i) on <var_hex_i:Int> */
var66 = (unsigned char)var_hex_i;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_buf,var_l,var64) on <var_buf:CString> */
var_buf[var_l]=(unsigned char)var64;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var74 = var_i + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_i = var68;
} else {
var75 = core___core__Char___ascii('%');
{
{ /* Inline native$CString$[]= (var_buf,var_l,var75) on <var_buf:CString> */
var_buf[var_l]=(unsigned char)var75;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var79 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var83 = var_i - 1l;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_i = var77;
}
}
} else {
var84 = core___core__Char___ascii(var_c33);
{
{ /* Inline native$CString$[]= (var_buf,var_l,var84) on <var_buf:CString> */
var_buf[var_l]=(unsigned char)var84;
RET_LABEL85:(void)0;
}
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var88 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var92 = var_i + 1l;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var_i = var86;
{
{ /* Inline kernel$Int$+ (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var95 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var95)) {
var_class_name98 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name98);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var99 = var_l + 1l;
var93 = var99;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
var_l = var93;
} else {
goto BREAK_label100;
}
}
BREAK_label100: (void)0;
var102 = (val*)(var_l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var_buf, var102, ((val*)NULL), var103, ((val*)NULL));
var = var101;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$html_escape for (self: Text): String */
val* core___core__Text___html_escape(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_buf /* var buf: Buffer */;
long var_i /* var i: Int */;
long var4 /* : Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
val* var10 /* : nullable Object */;
uint32_t var11 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Bool */;
val* var65 /* : nullable Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Bool */;
val* var76 /* : nullable Bool */;
long var77 /* : Int */;
val* var78 /* : String */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var_buf = var3;
var_i = 0l;
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var4;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_i < var_;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var10 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var_i); /* [] on <var9:SequenceRead[Char]>*/
}
var11 = (uint32_t)((long)(var10)>>2);
var_c = var11;
{
{ /* Inline kernel$Char$== (var_c,'&') on <var_c:Char> */
var14 = var_c == '&';
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (likely(varonce!=NULL)) {
var15 = varonce;
} else {
var16 = "&amp;";
var18 = (val*)(5l<<2|1);
var19 = (val*)(5l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce = var15;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var15); /* append on <var_buf:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'<') on <var_c:Char> */
var24 = var_c == '<';
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "&lt;";
var29 = (val*)(4l<<2|1);
var30 = (val*)(4l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce25 = var26;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var26); /* append on <var_buf:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'>') on <var_c:Char> */
var35 = var_c == '>';
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "&gt;";
var40 = (val*)(4l<<2|1);
var41 = (val*)(4l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var37); /* append on <var_buf:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'\"') on <var_c:Char> */
var46 = var_c == '\"';
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "&#34;";
var51 = (val*)(5l<<2|1);
var52 = (val*)(5l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var48); /* append on <var_buf:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'\'') on <var_c:Char> */
var57 = var_c == '\'';
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "&#39;";
var62 = (val*)(5l<<2|1);
var63 = (val*)(5l<<2|1);
var64 = (val*)((long)(0)<<2|3);
var65 = (val*)((long)(0)<<2|3);
var61 = core__flat___CString___to_s_unsafe(var60, var62, var63, var64, var65);
var59 = var61;
varonce58 = var59;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var59); /* append on <var_buf:Buffer>*/
}
} else {
{
{ /* Inline kernel$Char$== (var_c,'/') on <var_c:Char> */
var68 = var_c == '/';
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "&#47;";
var73 = (val*)(5l<<2|1);
var74 = (val*)(5l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var70); /* append on <var_buf:Buffer>*/
}
} else {
{
((void(*)(val* self, uint32_t p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buf, var_c); /* add on <var_buf:Buffer>*/
}
}
}
}
}
}
}
var77 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var77;
}
BREAK_label: (void)0;
{
var78 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_buf); /* to_s on <var_buf:Buffer>*/
}
var = var78;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$== for (self: Text, nullable Object): Bool */
short int core___core__Text___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : SequenceRead[Char] */;
short int var16 /* : Bool */;
var_o = p0;
if (var_o == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_o, ((val*)NULL)); /* == on <var_o:nullable Object>*/
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
/* <var_o:nullable Object(Object)> isa Text */
cltype = type_core__Text.color;
idtype = type_core__Text.id;
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
var4 = !var3;
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Object$is_same_instance (self,var_o) on <self:Text> */
var7 = self == var_o;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 1;
goto RET_LABEL;
} else {
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var9 = ((long(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Text__length]))(var_o); /* length on <var_o:nullable Object(Text)>*/
}
{
{ /* Inline kernel$Int$!= (var8,var9) on <var8:Int> */
var12 = var8 == var9;
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = 0;
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var15 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Text__chars]))(var_o); /* chars on <var_o:nullable Object(Text)>*/
}
{
var16 = ((short int(*)(val* self, val* p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var14, var15); /* == on <var14:SequenceRead[Char]>*/
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$< for (self: Text, Text): Bool */
short int core___core__Text___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Text */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : Iterator[nullable Object] */;
val* var_self_chars /* var self_chars: IndexedIterator[Char] */;
val* var4 /* : SequenceRead[Char] */;
val* var5 /* : Iterator[nullable Object] */;
val* var_other_chars /* var other_chars: IndexedIterator[Char] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
uint32_t var28 /* : Char */;
uint32_t var29 /* : Char */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Text> isa OTHER */
/* <p0:Text> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 955);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var3 = ((val*(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var2); /* iterator on <var2:SequenceRead[Char]>*/
}
var_self_chars = var3;
{
var4 = ((val*(*)(val* self))(var_other->class->vft[COLOR_core__abstract_text__Text__chars]))(var_other); /* chars on <var_other:Text>*/
}
{
var5 = ((val*(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var4); /* iterator on <var4:SequenceRead[Char]>*/
}
var_other_chars = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_self_chars); /* is_ok on <var_self_chars:IndexedIterator[Char]>*/
}
var_ = var7;
if (var7){
{
var8 = ((short int(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_other_chars); /* is_ok on <var_other_chars:IndexedIterator[Char]>*/
}
var6 = var8;
} else {
var6 = var_;
}
if (var6){
{
var9 = ((val*(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_self_chars); /* item on <var_self_chars:IndexedIterator[Char]>*/
}
{
var10 = ((val*(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_other_chars); /* item on <var_other_chars:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel$Char$< (var9,var10) on <var9:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var10:nullable Object(Char)> isa OTHER */
/* <var10:nullable Object(Char)> isa OTHER */
var13 = 1; /* easy <var10:nullable Object(Char)> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = var10 == NULL ? "null" : (((long)var10&3)?type_info[((long)var10&3)]:var10->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 914);
fatal_exit(1);
}
var17 = (uint32_t)((long)(var9)>>2);
var18 = (uint32_t)((long)(var10)>>2);
var19 = var17 < var18;
var11 = var19;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var = 1;
goto RET_LABEL;
} else {
}
{
var20 = ((val*(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_self_chars); /* item on <var_self_chars:IndexedIterator[Char]>*/
}
{
var21 = ((val*(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_other_chars); /* item on <var_other_chars:IndexedIterator[Char]>*/
}
{
{ /* Inline kernel$Char$> (var20,var21) on <var20:nullable Object(Char)> */
/* Covariant cast for argument 0 (i) <var21:nullable Object(Char)> isa OTHER */
/* <var21:nullable Object(Char)> isa OTHER */
var24 = 1; /* easy <var21:nullable Object(Char)> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = var21 == NULL ? "null" : (((long)var21&3)?type_info[((long)var21&3)]:var21->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 916);
fatal_exit(1);
}
var28 = (uint32_t)((long)(var20)>>2);
var29 = (uint32_t)((long)(var21)>>2);
var30 = var28 > var29;
var22 = var30;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_self_chars); /* next on <var_self_chars:IndexedIterator[Char]>*/
}
{
((void(*)(val* self))((((long)var_other_chars&3)?class_info[((long)var_other_chars&3)]:var_other_chars->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_other_chars); /* next on <var_other_chars:IndexedIterator[Char]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var31 = ((short int(*)(val* self))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_self_chars); /* is_ok on <var_self_chars:IndexedIterator[Char]>*/
}
if (var31){
var = 0;
goto RET_LABEL;
} else {
var = 1;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_text$Text$escape_to_dot for (self: Text): String */
val* core___core__Text___escape_to_dot(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "|{}<>";
var4 = (val*)(5l<<2|1);
var5 = (val*)(5l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
var8 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__escape_more_to_c]))(self, var1); /* escape_more_to_c on <self:Text>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$hash_cache for (self: Text): nullable Int */
val* core___core__Text___hash_cache(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_core__abstract_text__Text___hash_cache].val; /* _hash_cache on <self:Text> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$hash_cache= for (self: Text, nullable Int) */
void core___core__Text___hash_cache_61d(val* self, val* p0) {
self->attrs[COLOR_core__abstract_text__Text___hash_cache].val = p0; /* _hash_cache on <self:Text> */
RET_LABEL:;
}
/* method abstract_text$Text$hash for (self: Text): Int */
long core___core__Text___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Int */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var_h /* var h: Int */;
long var_i /* var i: Int */;
long var6 /* : Int */;
long var_ /* var : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : SequenceRead[Char] */;
val* var12 /* : nullable Object */;
uint32_t var13 /* : Char */;
uint32_t var_char /* var char: Char */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
long var34 /* : Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
long var37 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache]))(self); /* hash_cache on <self:Text>*/
}
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var1,((val*)NULL)) on <var1:nullable Int> */
var5 = 0; /* incompatible types Int vs. null; cannot be NULL */
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var_h = 5381l;
var_i = 0l;
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_ = var6;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
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
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Text>*/
}
{
var12 = ((val*(*)(val* self, long p0))((((long)var11&3)?class_info[((long)var11&3)]:var11->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var11, var_i); /* [] on <var11:SequenceRead[Char]>*/
}
var13 = (uint32_t)((long)(var12)>>2);
var_char = var13;
{
{ /* Inline kernel$Int$<< (var_h,5l) on <var_h:Int> */
var16 = var_h << 5l;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var14,var_h) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var19 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = var14 + var_h;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel$Char$code_point (var_char) on <var_char:Char> */
var26 = (long)var_char;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var17,var24) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var29 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var33 = var17 + var24;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_h = var27;
var34 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var34;
}
BREAK_label: (void)0;
{
var35 = (val*)(var_h<<2|1);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache_61d]))(self, var35); /* hash_cache= on <self:Text>*/
}
} else {
}
{
var36 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache]))(self); /* hash_cache on <self:Text>*/
}
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1001);
fatal_exit(1);
}
var37 = (long)(var36)>>2;
var = var37;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$format for (self: Text, Array[Object]): String */
val* core___core__Text___format(val* self, val* p0) {
val* var /* : String */;
val* var_args /* var args: Array[Object] */;
val* var1 /* : Array[Text] */;
val* var_s /* var s: Array[Text] */;
long var_curr_st /* var curr_st: Int */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
uint32_t var7 /* : Char */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var_fmt_st /* var fmt_st: Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
long var_ciph_st /* var ciph_st: Int */;
short int var18 /* : Bool */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
uint32_t var27 /* : Char */;
short int var28 /* : Bool */;
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
long var_ciph_len /* var ciph_len: Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
val* var53 /* : Text */;
short int var54 /* : Bool */;
long var55 /* : Int */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
short int var62 /* : Bool */;
short int var_63 /* var : Bool */;
uint32_t var64 /* : Char */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
val* var76 /* : Text */;
long var77 /* : Int */;
long var_arg_index /* var arg_index: Int */;
long var78 /* : Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
short int var85 /* : Bool */;
long var86 /* : Int */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
long var92 /* : Int */;
val* var93 /* : Text */;
val* var94 /* : nullable Object */;
val* var95 /* : String */;
long var96 /* : Int */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
long var102 /* : Int */;
long var103 /* : Int */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
long var109 /* : Int */;
long var111 /* : Int */;
long var112 /* : Int */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
const char* var_class_name117;
long var118 /* : Int */;
val* var119 /* : Text */;
val* var120 /* : String */;
var_args = p0;
var1 = NEW_core__Array(&type_core__Array__core__Text);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[Text]>*/
}
var_s = var1;
var_curr_st = 0l;
var_i = 0l;
for(;;) {
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$< (var_i,var2) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var_i < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
{
var7 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
{
{ /* Inline kernel$Char$== (var7,'%') on <var7:Char> */
var10 = var7 == '%';
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var_fmt_st = var_i;
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var17 = var_i + 1l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_i = var11;
var_ciph_st = var_i;
for(;;) {
{
var19 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$< (var_i,var19) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var26 = var_i < var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_ = var20;
if (var20){
{
var27 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
var28 = core__abstract_text___Char___is_numeric(var27);
var18 = var28;
} else {
var18 = var_;
}
if (var18){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_i + 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_i = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$- (var_i,var_ciph_st) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_ciph_st:Int> isa OTHER */
/* <var_ciph_st:Int> isa OTHER */
var38 = 1; /* easy <var_ciph_st:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var42 = var_i - var_ciph_st;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_ciph_len = var36;
{
{ /* Inline kernel$Int$== (var_ciph_len,0l) on <var_ciph_len:Int> */
var45 = var_ciph_len == 0l;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
{ /* Inline kernel$Int$- (var_i,var_curr_st) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_curr_st:Int> isa OTHER */
/* <var_curr_st:Int> isa OTHER */
var48 = 1; /* easy <var_curr_st:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var52 = var_i - var_curr_st;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
var53 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_curr_st, var46); /* substring on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_s, var53); /* push on <var_s:Array[Text]>*/
}
{
var55 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$< (var_i,var55) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var55:Int> isa OTHER */
/* <var55:Int> isa OTHER */
var58 = 1; /* easy <var55:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var62 = var_i < var55;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_63 = var56;
if (var56){
{
var64 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
{
{ /* Inline kernel$Char$== (var64,'%') on <var64:Char> */
var67 = var64 == '%';
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var54 = var65;
} else {
var54 = var_63;
}
if (var54){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var74 = var_i + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_i = var68;
} else {
}
var_curr_st = var_i;
goto BREAK_label75;
} else {
}
{
var76 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_ciph_st, var_ciph_len); /* substring on <self:Text>*/
}
{
var77 = ((long(*)(val* self))(var76->class->vft[COLOR_core__abstract_text__Text__to_i]))(var76); /* to_i on <var76:Text>*/
}
var_arg_index = var77;
{
var78 = ((long(*)(val* self))(var_args->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_args); /* length on <var_args:Array[Object]>*/
}
{
{ /* Inline kernel$Int$>= (var_arg_index,var78) on <var_arg_index:Int> */
/* Covariant cast for argument 0 (i) <var78:Int> isa OTHER */
/* <var78:Int> isa OTHER */
var81 = 1; /* easy <var78:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var85 = var_arg_index >= var78;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
goto BREAK_label75;
} else {
}
{
{ /* Inline kernel$Int$- (var_fmt_st,var_curr_st) on <var_fmt_st:Int> */
/* Covariant cast for argument 0 (i) <var_curr_st:Int> isa OTHER */
/* <var_curr_st:Int> isa OTHER */
var88 = 1; /* easy <var_curr_st:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var92 = var_fmt_st - var_curr_st;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
{
var93 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_curr_st, var86); /* substring on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_s, var93); /* push on <var_s:Array[Text]>*/
}
{
var94 = ((val*(*)(val* self, long p0))(var_args->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_args, var_arg_index); /* [] on <var_args:Array[Object]>*/
}
{
var95 = ((val*(*)(val* self))((((long)var94&3)?class_info[((long)var94&3)]:var94->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var94); /* to_s on <var94:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_s, var95); /* push on <var_s:Array[Text]>*/
}
var_curr_st = var_i;
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var98 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var102 = var_i - 1l;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var_i = var96;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var105 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var109 = var_i + 1l;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_i = var103;
} else {
goto BREAK_label110;
}
BREAK_label75: (void)0;
}
BREAK_label110: (void)0;
{
var111 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var111,var_curr_st) on <var111:Int> */
/* Covariant cast for argument 0 (i) <var_curr_st:Int> isa OTHER */
/* <var_curr_st:Int> isa OTHER */
var114 = 1; /* easy <var_curr_st:Int> isa OTHER*/
if (unlikely(!var114)) {
var_class_name117 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name117);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var118 = var111 - var_curr_st;
var112 = var118;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
{
var119 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_curr_st, var112); /* substring on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_s, var119); /* push on <var_s:Array[Text]>*/
}
{
var120 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Collection__plain_to_s]))(var_s); /* plain_to_s on <var_s:Array[Text]>*/
}
var = var120;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$levenshtein_distance for (self: Text, String): Int */
long core___core__Text___levenshtein_distance(val* self, val* p0) {
long var /* : Int */;
val* var_other /* var other: String */;
long var1 /* : Int */;
long var_slen /* var slen: Int */;
long var2 /* : Int */;
long var_olen /* var olen: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : Array[Int] */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
val* var_v0 /* var v0: Array[Int] */;
val* var15 /* : Array[Int] */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
val* var_v1 /* var v1: Array[Int] */;
long var_j /* var j: Int */;
long var_ /* var : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
long var31 /* : Int */;
long var_i /* var i: Int */;
long var_32 /* var : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
val* var48 /* : nullable Object */;
long var_j49 /* var j: Int */;
long var_50 /* var : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
val* var59 /* : nullable Object */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
long var67 /* : Int */;
long var_cost1 /* var cost1: Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
val* var75 /* : nullable Object */;
long var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
long var82 /* : Int */;
long var83 /* : Int */;
long var_cost2 /* var cost2: Int */;
val* var84 /* : nullable Object */;
long var85 /* : Int */;
long var_cost3 /* var cost3: Int */;
uint32_t var86 /* : Char */;
uint32_t var87 /* : Char */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
long var92 /* : Int */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
long var98 /* : Int */;
long var99 /* : Int */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
long var105 /* : Int */;
long var106 /* : Int */;
long var107 /* : Int */;
val* var108 /* : nullable Object */;
long var109 /* : Int */;
val* var_tmp /* var tmp: Array[Int] */;
long var110 /* : Int */;
val* var111 /* : nullable Object */;
long var112 /* : Int */;
var_other = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_slen = var1;
{
var2 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__abstract_text__Text__length]))(var_other); /* length on <var_other:String>*/
}
var_olen = var2;
{
{ /* Inline kernel$Int$== (var_slen,0l) on <var_slen:Int> */
var5 = var_slen == 0l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var = var_olen;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_olen,0l) on <var_olen:Int> */
var8 = var_olen == 0l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = var_slen;
goto RET_LABEL;
} else {
}
{
var9 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__kernel__Object___61d_61d]))(self, var_other); /* == on <self:Text>*/
}
if (var9){
var = 0l;
goto RET_LABEL;
} else {
}
var10 = NEW_core__Array(&type_core__Array__core__Int);
{
{ /* Inline kernel$Int$+ (var_olen,1l) on <var_olen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_olen + 1l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_core__array__Array__with_capacity]))(var10, var11); /* with_capacity on <var10:Array[Int]>*/
}
var_v0 = var10;
var15 = NEW_core__Array(&type_core__Array__core__Int);
{
{ /* Inline kernel$Int$+ (var_olen,1l) on <var_olen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_olen + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
((void(*)(val* self, long p0))(var15->class->vft[COLOR_core__array__Array__with_capacity]))(var15, var16); /* with_capacity on <var15:Array[Int]>*/
}
var_v1 = var15;
var_j = 0l;
var_ = var_olen;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var25 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var29 = var_j <= var_;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
} else {
goto BREAK_label;
}
{
var30 = (val*)(var_j<<2|1);
((void(*)(val* self, long p0, val* p1))(var_v0->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_v0, var_j, var30); /* []= on <var_v0:Array[Int]>*/
}
var31 = core___core__Int___Discrete__successor(var_j, 1l);
var_j = var31;
}
BREAK_label: (void)0;
var_i = 0l;
var_32 = var_slen;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_32) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_32:Int> isa OTHER */
/* <var_32:Int> isa OTHER */
var35 = 1; /* easy <var_32:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var39 = var_i < var_32;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
} else {
goto BREAK_label40;
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var43 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var47 = var_i + 1l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
var48 = (val*)(var41<<2|1);
((void(*)(val* self, long p0, val* p1))(var_v1->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_v1, 0l, var48); /* []= on <var_v1:Array[Int]>*/
}
var_j49 = 0l;
var_50 = var_olen;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j49,var_50) on <var_j49:Int> */
/* Covariant cast for argument 0 (i) <var_50:Int> isa OTHER */
/* <var_50:Int> isa OTHER */
var53 = 1; /* easy <var_50:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var57 = var_j49 < var_50;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
} else {
goto BREAK_label58;
}
{
var59 = ((val*(*)(val* self, long p0))(var_v1->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_v1, var_j49); /* [] on <var_v1:Array[Int]>*/
}
{
{ /* Inline kernel$Int$+ (var59,1l) on <var59:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var66 = (long)(var59)>>2;
var67 = var66 + 1l;
var60 = var67;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_cost1 = var60;
{
{ /* Inline kernel$Int$+ (var_j49,1l) on <var_j49:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var74 = var_j49 + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
var75 = ((val*(*)(val* self, long p0))(var_v0->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_v0, var68); /* [] on <var_v0:Array[Int]>*/
}
{
{ /* Inline kernel$Int$+ (var75,1l) on <var75:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var78 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var82 = (long)(var75)>>2;
var83 = var82 + 1l;
var76 = var83;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var_cost2 = var76;
{
var84 = ((val*(*)(val* self, long p0))(var_v0->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_v0, var_j49); /* [] on <var_v0:Array[Int]>*/
}
var85 = (long)(var84)>>2;
var_cost3 = var85;
{
var86 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
{
var87 = ((uint32_t(*)(val* self, long p0))(var_other->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_other, var_j49); /* [] on <var_other:String>*/
}
{
{ /* Inline kernel$Char$!= (var86,var87) on <var86:Char> */
var90 = var86 == var87;
var91 = !var90;
var88 = var91;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline kernel$Int$+ (var_cost3,1l) on <var_cost3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var94 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name97 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var98 = var_cost3 + 1l;
var92 = var98;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_cost3 = var92;
} else {
}
{
{ /* Inline kernel$Int$+ (var_j49,1l) on <var_j49:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var101 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var105 = var_j49 + 1l;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var106 = core___core__Int___Comparable__min(var_cost1, var_cost2);
var107 = core___core__Int___Comparable__min(var106, var_cost3);
{
var108 = (val*)(var107<<2|1);
((void(*)(val* self, long p0, val* p1))(var_v1->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_v1, var99, var108); /* []= on <var_v1:Array[Int]>*/
}
var109 = core___core__Int___Discrete__successor(var_j49, 1l);
var_j49 = var109;
}
BREAK_label58: (void)0;
var_tmp = var_v1;
var_v1 = var_v0;
var_v0 = var_tmp;
var110 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var110;
}
BREAK_label40: (void)0;
{
var111 = ((val*(*)(val* self, long p0))(var_v0->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_v0, var_olen); /* [] on <var_v0:Array[Int]>*/
}
var112 = (long)(var111)>>2;
var = var112;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$copy_to_native for (self: Text, CString, Int, Int, Int) */
void core___core__Text___copy_to_native(val* self, char* p0, long p1, long p2, long p3) {
char* var_dest /* var dest: CString */;
long var_n /* var n: Int */;
long var_src_offset /* var src_offset: Int */;
long var_dest_offset /* var dest_offset: Int */;
long var_mypos /* var mypos: Int */;
long var_itspos /* var itspos: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
val* var4 /* : SequenceRead[Byte] */;
val* var5 /* : nullable Object */;
unsigned char var7 /* : Byte */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
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
var_dest = p0;
var_n = p1;
var_src_offset = p2;
var_dest_offset = p3;
var_mypos = var_src_offset;
var_itspos = var_dest_offset;
for(;;) {
{
{ /* Inline kernel$Int$> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var3 = var_n > 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__bytes]))(self); /* bytes on <self:Text>*/
}
{
var5 = ((val*(*)(val* self, long p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var4, var_mypos); /* [] on <var4:SequenceRead[Byte]>*/
}
{
{ /* Inline native$CString$[]= (var_dest,var_itspos,var5) on <var_dest:CString> */
var7 = ((struct instance_core__Byte*)var5)->value; /* autounbox from nullable Object to Byte */;
var_dest[var_itspos]=(unsigned char)var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_itspos,1l) on <var_itspos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_itspos + 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_itspos = var8;
{
{ /* Inline kernel$Int$+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var21 = var_mypos + 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_mypos = var15;
{
{ /* Inline kernel$Int$- (var_n,1l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var28 = var_n - 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_n = var22;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_text$Text$pack_l for (self: Text, Int): Array[Text] */
val* core___core__Text___pack_l(val* self, long p0) {
val* var /* : Array[Text] */;
long var_ln /* var ln: Int */;
long var_st /* var st: Int */;
val* var1 /* : Array[Text] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
val* var_retarr /* var retarr: Array[Text] */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var26 /* : Text */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
var_ln = p0;
var_st = 0l;
var1 = NEW_core__Array(&type_core__Array__core__Text);
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$/ (var2,var_ln) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var5 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var6 = var2 / var_ln;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$% (var7,var_ln) on <var7:Int> */
var10 = var7 % var_ln;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var3,var8) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var13 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var17 = var3 + var8;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__array__Array__with_capacity]))(var1, var11); /* with_capacity on <var1:Array[Text]>*/
}
var_retarr = var1;
for(;;) {
{
var18 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$< (var_st,var18) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var25 = var_st < var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
var26 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_st, var_ln); /* substring on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var_retarr->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_retarr, var26); /* add on <var_retarr:Array[Text]>*/
}
{
{ /* Inline kernel$Int$+ (var_st,var_ln) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var29 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var33 = var_st + var_ln;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_st = var27;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_retarr;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$pack_r for (self: Text, Int): Array[Text] */
val* core___core__Text___pack_r(val* self, long p0) {
val* var /* : Array[Text] */;
long var_ln /* var ln: Int */;
long var1 /* : Int */;
long var_st /* var st: Int */;
val* var2 /* : Array[Text] */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var_retarr /* var retarr: Array[Text] */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
val* var33 /* : Text */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
val* var41 /* : Array[nullable Object] */;
var_ln = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_st = var1;
var2 = NEW_core__Array(&type_core__Array__core__Text);
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$/ (var3,var_ln) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var6 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var7 = var3 / var_ln;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$% (var8,var_ln) on <var8:Int> */
var11 = var8 % var_ln;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var4,var9) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var14 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var4 + var9;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_core__array__Array__with_capacity]))(var2, var12); /* with_capacity on <var2:Array[Text]>*/
}
var_retarr = var2;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_st,0l) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var21 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var25 = var_st >= 0l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline kernel$Int$- (var_st,var_ln) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var28 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var32 = var_st - var_ln;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
var33 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var26, var_ln); /* substring on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var_retarr->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_retarr, var33); /* add on <var_retarr:Array[Text]>*/
}
{
{ /* Inline kernel$Int$- (var_st,var_ln) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var36 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var40 = var_st - var_ln;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_st = var34;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var41 = ((val*(*)(val* self))(var_retarr->class->vft[COLOR_core__array__AbstractArrayRead__reversed]))(var_retarr); /* reversed on <var_retarr:Array[Text]>*/
}
var = var41;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Text$* for (self: Text, Int): Text */
val* core___core__Text____42d(val* self, long p0) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "*", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1165);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$insert_at for (self: Text, String, Int): Text */
val* core___core__Text___insert_at(val* self, val* p0, long p1) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "insert_at", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1178);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$reversed for (self: Text): Text */
val* core___core__Text___reversed(val* self) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "reversed", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1189);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_upper for (self: Text): Text */
val* core___core__Text___to_upper(val* self) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_upper", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1196);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_lower for (self: Text): Text */
val* core___core__Text___to_lower(val* self) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_lower", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1201);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_snake_case for (self: Text): Text */
val* core___core__Text___to_snake_case(val* self) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_snake_case", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1206);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$to_camel_case for (self: Text): Text */
val* core___core__Text___to_camel_case(val* self) {
val* var /* : Text */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_camel_case", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1229);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Text$capitalized for (self: Text, nullable Bool): Text */
val* core___core__Text___capitalized(val* self, val* p0) {
val* var /* : Text */;
val* var_keep_upper /* var keep_upper: nullable Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
static val* varoncenew;
static int varoncenew_guard;
val* var6 /* : Buffer */;
val* var7 /* : Buffer */;
long var8 /* : Int */;
val* var9 /* : Buffer */;
val* var_buf /* var buf: Buffer */;
val* var10 /* : String */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const struct type* type_struct14;
const char* var_class_name15;
var_keep_upper = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
/* <self:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var5 = 0;
} else {
var5 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1260);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
} else {
}
if (likely(varoncenew_guard)) {
var6 = varoncenew;
} else {
var7 = NEW_core__Buffer(&type_core__Buffer);
var6 = var7;
varoncenew = var6;
varoncenew_guard = 1;
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var9 = ((val*(*)(val* self, long p0))(var6->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var6, var8); /* with_cap on <var6:Buffer>*/
}
var_buf = var9;
{
((void(*)(val* self, val* p0, val* p1))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__capitalize]))(var_buf, var_keep_upper, self); /* capitalize on <var_buf:Buffer>*/
}
{
var10 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_buf); /* to_s on <var_buf:Buffer>*/
}
/* <var10:String> isa SELFTYPE */
type_struct14 = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype12 = type_struct14->color;
idtype13 = type_struct14->id;
if(cltype12 >= var10->type->table_size) {
var11 = 0;
} else {
var11 = var10->type->type_table[cltype12] == idtype13;
}
if (unlikely(!var11)) {
var_class_name15 = var10 == NULL ? "null" : var10->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1264);
fatal_exit(1);
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$FlatText$items for (self: FlatText): CString */
char* core___core__FlatText___items(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$FlatText$items= for (self: FlatText, CString) */
void core___core__FlatText___items_61d(val* self, char* p0) {
self->attrs[COLOR_core__abstract_text__FlatText___items].str = p0; /* _items on <self:FlatText> */
RET_LABEL:;
}
/* method abstract_text$FlatText$fast_cstring for (self: FlatText): CString */
char* core___core__FlatText___fast_cstring(val* self) {
char* var /* : CString */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "fast_cstring", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1278);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$FlatText$length for (self: FlatText): Int */
long core___core__FlatText___Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$FlatText$length= for (self: FlatText, Int) */
void core___core__FlatText___length_61d(val* self, long p0) {
self->attrs[COLOR_core__abstract_text__FlatText___length].l = p0; /* _length on <self:FlatText> */
RET_LABEL:;
}
/* method abstract_text$FlatText$byte_length for (self: FlatText): Int */
long core___core__FlatText___Text__byte_length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$FlatText$byte_length= for (self: FlatText, Int) */
void core___core__FlatText___byte_length_61d(val* self, long p0) {
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = p0; /* _byte_length on <self:FlatText> */
RET_LABEL:;
}
/* method abstract_text$FlatText$output for (self: FlatText) */
void core___core__FlatText___core__kernel__Object__output(val* self) {
long var_i /* var i: Int */;
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
char* var5 /* : CString */;
unsigned char var6 /* : Byte */;
unsigned char var8 /* : Byte */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
var_i = 0l;
for(;;) {
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:FlatText>*/
}
{
{ /* Inline kernel$Int$< (var_i,var) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var3 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = var_i < var;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
var5 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__FlatText__items]))(self); /* items on <self:FlatText>*/
}
{
{ /* Inline native$CString$[] (var5,var_i) on <var5:CString> */
var8 = (unsigned char)((int)var5[var_i]);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel$Byte$output (var6) on <var6:Byte> */
printf("%x\n", var6);
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var16 = var_i + 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_i = var10;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_text$FlatText$copy_to_native for (self: FlatText, CString, Int, Int, Int) */
void core___core__FlatText___Text__copy_to_native(val* self, char* p0, long p1, long p2, long p3) {
char* var_dest /* var dest: CString */;
long var_n /* var n: Int */;
long var_src_offset /* var src_offset: Int */;
long var_dest_offset /* var dest_offset: Int */;
char* var /* : CString */;
var_dest = p0;
var_n = p1;
var_src_offset = p2;
var_dest_offset = p3;
{
var = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__FlatText__items]))(self); /* items on <self:FlatText>*/
}
{
{ /* Inline native$CString$copy_to (var,var_dest,var_n,var_src_offset,var_dest_offset) on <var:CString> */
memmove(var_dest+var_dest_offset,var+var_src_offset,var_n);
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_text$StringCharView$target for (self: StringCharView): Text */
val* core__abstract_text___core__abstract_text__StringCharView___target(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:StringCharView> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1320);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$StringCharView$target= for (self: StringCharView, Text) */
void core__abstract_text___core__abstract_text__StringCharView___target_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (target) <p0:Text> isa SELFTYPE */
/* <p0:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__StringCharView__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1320);
fatal_exit(1);
}
self->attrs[COLOR_core__abstract_text__StringCharView___target].val = p0; /* _target on <self:StringCharView> */
RET_LABEL:;
}
/* method abstract_text$StringCharView$is_empty for (self: StringCharView): Bool */
short int core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Text */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:StringCharView>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var1); /* is_empty on <var1:Text>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$StringCharView$length for (self: StringCharView): Int */
long core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : Text */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:StringCharView>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:Text>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$StringCharView$iterator for (self: StringCharView): IndexedIterator[Char] */
val* core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
val* var1 /* : IndexedIterator[nullable Object] */;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(self, 0l); /* iterator_from on <self:StringCharView>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$StringCharView$reverse_iterator for (self: StringCharView): IndexedIterator[Char] */
val* core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__SequenceRead__reverse_iterator(val* self) {
val* var /* : IndexedIterator[Char] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
val* var6 /* : IndexedIterator[nullable Object] */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:StringCharView>*/
}
{
{ /* Inline kernel$Int$- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var6 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator_from]))(self, var2); /* reverse_iterator_from on <self:StringCharView>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$StringCharView$init for (self: StringCharView) */
void core__abstract_text___core__abstract_text__StringCharView___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__abstract_text___core__abstract_text__StringCharView___core__kernel__Object__init]))(self); /* init on <self:StringCharView>*/
}
RET_LABEL:;
}
/* method abstract_text$StringByteView$target for (self: StringByteView): Text */
val* core__abstract_text___core__abstract_text__StringByteView___target(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:StringByteView> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1338);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$StringByteView$target= for (self: StringByteView, Text) */
void core__abstract_text___core__abstract_text__StringByteView___target_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (target) <p0:Text> isa SELFTYPE */
/* <p0:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__StringByteView__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1338);
fatal_exit(1);
}
self->attrs[COLOR_core__abstract_text__StringByteView___target].val = p0; /* _target on <self:StringByteView> */
RET_LABEL:;
}
/* method abstract_text$StringByteView$is_empty for (self: StringByteView): Bool */
short int core__abstract_text___core__abstract_text__StringByteView___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Text */;
short int var2 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:StringByteView>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var1); /* is_empty on <var1:Text>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$StringByteView$length for (self: StringByteView): Int */
long core__abstract_text___core__abstract_text__StringByteView___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
val* var1 /* : Text */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:StringByteView>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var1); /* byte_length on <var1:Text>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$StringByteView$iterator for (self: StringByteView): Iterator[Byte] */
val* core__abstract_text___core__abstract_text__StringByteView___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[Byte] */;
val* var1 /* : IndexedIterator[nullable Object] */;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead__iterator_from]))(self, 0l); /* iterator_from on <self:StringByteView>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$StringByteView$reverse_iterator for (self: StringByteView): IndexedIterator[Byte] */
val* core__abstract_text___core__abstract_text__StringByteView___core__abstract_collection__SequenceRead__reverse_iterator(val* self) {
val* var /* : IndexedIterator[Byte] */;
val* var1 /* : Text */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : IndexedIterator[nullable Object] */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:StringByteView>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var1); /* byte_length on <var1:Text>*/
}
{
{ /* Inline kernel$Int$- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var2 - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
var7 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator_from]))(self, var3); /* reverse_iterator_from on <self:StringByteView>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$StringByteView$init for (self: StringByteView) */
void core__abstract_text___core__abstract_text__StringByteView___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__abstract_text___core__abstract_text__StringByteView___core__kernel__Object__init]))(self); /* init on <self:StringByteView>*/
}
RET_LABEL:;
}
/* method abstract_text$String$to_s for (self: String): String */
val* core___core__String___Object__to_s(val* self) {
val* var /* : String */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$String$clone for (self: String): String */
val* core___core__String___core__kernel__Cloneable__clone(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* <self:String> isa SELF */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Object__SELF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1361);
fatal_exit(1);
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$String$to_buffer for (self: String): Buffer */
val* core___core__String___Text__to_buffer(val* self) {
val* var /* : Buffer */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__from_text]))(var1, self); /* from_text on <var1:Buffer>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$String$to_camel_case for (self: String): String */
val* core___core__String___Text__to_camel_case(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
static val* varoncenew;
static int varoncenew_guard;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
long var4 /* : Int */;
val* var5 /* : Buffer */;
val* var_new_str /* var new_str: Buffer */;
val* var6 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_upper]))(self); /* is_upper on <self:String>*/
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NEW_core__Buffer(&type_core__Buffer);
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
var5 = ((val*(*)(val* self, long p0))(var2->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var2, var4); /* with_cap on <var2:Buffer>*/
}
var_new_str = var5;
{
((void(*)(val* self, val* p0))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_new_str, self); /* append on <var_new_str:Buffer>*/
}
{
((void(*)(val* self))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__camel_case]))(var_new_str); /* camel_case on <var_new_str:Buffer>*/
}
{
var6 = ((val*(*)(val* self))(var_new_str->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_new_str); /* to_s on <var_new_str:Buffer>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$String$to_snake_case for (self: String): String */
val* core___core__String___Text__to_snake_case(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
static val* varoncenew;
static int varoncenew_guard;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
long var4 /* : Int */;
val* var5 /* : Buffer */;
val* var_new_str /* var new_str: Buffer */;
val* var6 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_lower]))(self); /* is_lower on <self:String>*/
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NEW_core__Buffer(&type_core__Buffer);
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
var5 = ((val*(*)(val* self, long p0))(var2->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var2, var4); /* with_cap on <var2:Buffer>*/
}
var_new_str = var5;
{
((void(*)(val* self, val* p0))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_new_str, self); /* append on <var_new_str:Buffer>*/
}
{
((void(*)(val* self))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__snake_case]))(var_new_str); /* snake_case on <var_new_str:Buffer>*/
}
{
var6 = ((val*(*)(val* self))(var_new_str->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_new_str); /* to_s on <var_new_str:Buffer>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$new for (self: Buffer): Buffer */
val* core___core__Buffer___new(val* self) {
val* var /* : Buffer */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "new", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1388);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$with_cap for (self: Buffer, Int): Buffer */
val* core___core__Buffer___with_cap(val* self, long p0) {
val* var /* : Buffer */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "with_cap", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1391);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$from_text for (self: Buffer, Text): Buffer */
val* core___core__Buffer___from_text(val* self, val* p0) {
val* var /* : Buffer */;
val* var_t /* var t: Text */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
long var3 /* : Int */;
val* var4 /* : Buffer */;
val* var_ret /* var ret: Buffer */;
var_t = p0;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_t); /* byte_length on <var_t:Text>*/
}
{
var4 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var1, var3); /* with_cap on <var1:Buffer>*/
}
var_ret = var4;
{
((void(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_ret, var_t); /* append on <var_ret:Buffer>*/
}
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$written for (self: Buffer): Bool */
short int core___core__Buffer___written(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__abstract_text__Buffer___written].s; /* _written on <self:Buffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$written= for (self: Buffer, Bool) */
void core___core__Buffer___written_61d(val* self, short int p0) {
self->attrs[COLOR_core__abstract_text__Buffer___written].s = p0; /* _written on <self:Buffer> */
RET_LABEL:;
}
/* method abstract_text$Buffer$[]= for (self: Buffer, Int, Char) */
void core___core__Buffer____91d_93d_61d(val* self, long p0, uint32_t p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "[]=", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1411);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$to_buffer for (self: Buffer): Buffer */
val* core___core__Buffer___Text__to_buffer(val* self) {
val* var /* : Buffer */;
val* var1 /* : Cloneable */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__kernel__Cloneable__clone]))(self); /* clone on <self:Buffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$clone for (self: Buffer): Buffer */
val* core___core__Buffer___core__kernel__Cloneable__clone(val* self) {
val* var /* : Buffer */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
long var3 /* : Int */;
val* var4 /* : Buffer */;
val* var_cln /* var cln: Buffer */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__Buffer(&type_core__Buffer);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:Buffer>*/
}
{
var4 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var1, var3); /* with_cap on <var1:Buffer>*/
}
var_cln = var4;
{
((void(*)(val* self, val* p0))(var_cln->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_cln, self); /* append on <var_cln:Buffer>*/
}
/* <var_cln:Buffer> isa SELF */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Object__SELF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_cln->type->table_size) {
var5 = 0;
} else {
var5 = var_cln->type->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = var_cln == NULL ? "null" : var_cln->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1427);
fatal_exit(1);
}
var = var_cln;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$add for (self: Buffer, Char) */
void core___core__Buffer___add(val* self, uint32_t p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "add", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1430);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$clear for (self: Buffer) */
void core___core__Buffer___clear(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "clear", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1435);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$enlarge for (self: Buffer, Int) */
void core___core__Buffer___enlarge(val* self, long p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "enlarge", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1444);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$append for (self: Buffer, Text) */
void core___core__Buffer___append(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "append", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1447);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$times for (self: Buffer, Int) */
void core___core__Buffer___times(val* self, long p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "times", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1455);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$reverse for (self: Buffer) */
void core___core__Buffer___reverse(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "reverse", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1463);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$upper for (self: Buffer) */
void core___core__Buffer___upper(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "upper", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1471);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$lower for (self: Buffer) */
void core___core__Buffer___lower(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "lower", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1479);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$capitalize for (self: Buffer, nullable Bool, nullable Text) */
void core___core__Buffer___capitalize(val* self, val* p0, val* p1) {
val* var_keep_upper /* var keep_upper: nullable Bool */;
val* var_src /* var src: nullable Text */;
val* var /* : Text */;
long var1 /* : Int */;
long var_length /* var length: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Bool */;
uint32_t var8 /* : Char */;
uint32_t var9 /* : Char */;
uint32_t var_c /* var c: Char */;
uint32_t var_prev /* var prev: Char */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var13 /* : Bool */;
uint32_t var14 /* : Char */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
long var19 /* : Int */;
var_keep_upper = p0;
var_src = p1;
if (var_src!=NULL) {
var = var_src;
} else {
var = self;
}
var_src = var;
{
var1 = ((long(*)(val* self))(var_src->class->vft[COLOR_core__abstract_text__Text__length]))(var_src); /* length on <var_src:nullable Text(Text)>*/
}
var_length = var1;
{
{ /* Inline kernel$Int$== (var_length,0l) on <var_length:Int> */
var4 = var_length == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
goto RET_LABEL;
} else {
}
if (var_keep_upper!=NULL) {
var6 = (short int)((long)(var_keep_upper)>>2);
var5 = var6;
} else {
var5 = 0;
}
var7 = (val*)((long)(var5)<<2|3);
var_keep_upper = var7;
{
var8 = ((uint32_t(*)(val* self, long p0))(var_src->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_src, 0l); /* [] on <var_src:nullable Text(Text)>*/
}
var9 = core___core__Char___to_upper(var8);
var_c = var9;
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, 0l, var_c); /* []= on <self:Buffer>*/
}
var_prev = var_c;
var_i = 1l;
var_ = var_length;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var12 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var_i < var_;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
} else {
goto BREAK_label;
}
var_prev = var_c;
{
var14 = ((uint32_t(*)(val* self, long p0))(var_src->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_src, var_i); /* [] on <var_src:nullable Text(Text)>*/
}
var_c = var14;
var15 = core___core__Char___is_letter(var_prev);
if (var15){
var16 = (short int)((long)(var_keep_upper)>>2);
if (var16){
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, var_i, var_c); /* []= on <self:Buffer>*/
}
} else {
var17 = core___core__Char___to_lower(var_c);
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, var_i, var17); /* []= on <self:Buffer>*/
}
}
} else {
var18 = core___core__Char___to_upper(var_c);
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, var_i, var18); /* []= on <self:Buffer>*/
}
}
var19 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var19;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_text$Buffer$chars for (self: Buffer): Sequence[Char] */
val* core___core__Buffer___Text__chars(val* self) {
val* var /* : Sequence[Char] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "chars", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1542);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$append_substring for (self: Buffer, Text, Int, Int) */
void core___core__Buffer___append_substring(val* self, val* p0, long p1, long p2) {
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var_length /* var length: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
long var10 /* : Int */;
long var11 /* : Int */;
long var_ln /* var ln: Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
var_s = p0;
var_from = p1;
var_length = p2;
{
{ /* Inline kernel$Int$< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var3 = var_from < 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
{
{ /* Inline kernel$Int$+ (var_length,var_from) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var6 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var10 = var_length + var_from;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_length = var4;
var_from = 0l;
} else {
}
{
var11 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_ln = var11;
{
{ /* Inline kernel$Int$+ (var_length,var_from) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var14 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var_length + var_from;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var12,var_ln) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var21 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var25 = var12 > var_ln;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline kernel$Int$- (var_ln,var_from) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var28 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var32 = var_ln - var_from;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_length = var26;
} else {
}
{
{ /* Inline kernel$Int$<= (var_length,0l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var35 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var39 = var_length <= 0l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0, long p1, long p2))(self->class->vft[COLOR_core__abstract_text__Buffer__append_substring_impl]))(self, var_s, var_from, var_length); /* append_substring_impl on <self:Buffer>*/
}
RET_LABEL:;
}
/* method abstract_text$Buffer$append_substring_impl for (self: Buffer, Text, Int, Int) */
void core___core__Buffer___append_substring_impl(val* self, val* p0, long p1, long p2) {
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var_length /* var length: Int */;
long var /* : Int */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var3 /* : Int */;
long var_max /* var max: Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name9;
short int var10 /* : Bool */;
uint32_t var11 /* : Char */;
long var12 /* : Int */;
var_s = p0;
var_from = p1;
var_length = p2;
{
{ /* Inline kernel$Int$+ (var_from,var_length) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_length:Int> isa OTHER */
/* <var_length:Int> isa OTHER */
var2 = 1; /* easy <var_length:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var3 = var_from + var_length;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_max = var;
var_i = var_from;
var_ = var_max;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var6 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name9 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name9);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var10 = var_i < var_;
var4 = var10;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
} else {
goto BREAK_label;
}
{
var11 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var_i); /* [] on <var_s:Text>*/
}
{
((void(*)(val* self, uint32_t p0))(self->class->vft[COLOR_core__abstract_text__Buffer__add]))(self, var11); /* add on <self:Buffer>*/
}
var12 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var12;
}
BREAK_label: (void)0;
RET_LABEL:;
}
