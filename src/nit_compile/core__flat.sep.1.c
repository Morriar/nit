#include "core__flat.sep.0.h"
/* method flat#FlatSubstringsIter#tgt for (self: FlatSubstringsIter): nullable FlatText */
val* core__flat___core__flat__FlatSubstringsIter___tgt(val* self) {
val* var /* : nullable FlatText */;
val* var1 /* : nullable FlatText */;
var1 = self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatSubstringsIter#tgt= for (self: FlatSubstringsIter, nullable FlatText) */
void core__flat___core__flat__FlatSubstringsIter___tgt_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val = p0; /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL:;
}
/* method flat#FlatSubstringsIter#item for (self: FlatSubstringsIter): FlatText */
val* core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatText */;
short int var1 /* : Bool */;
val* var2 /* : nullable FlatText */;
val* var4 /* : nullable FlatText */;
{
var1 = core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__is_ok(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 28);
fatal_exit(1);
}
{
{ /* Inline flat#FlatSubstringsIter#tgt (self) on <self:FlatSubstringsIter> */
var4 = self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 29);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatSubstringsIter#is_ok for (self: FlatSubstringsIter): Bool */
short int core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable FlatText */;
val* var3 /* : nullable FlatText */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
{
{ /* Inline flat#FlatSubstringsIter#tgt (self) on <self:FlatSubstringsIter> */
var3 = self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable FlatText> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable FlatText(FlatText)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatSubstringsIter#next for (self: FlatSubstringsIter) */
void core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__next(val* self) {
{
{ /* Inline flat#FlatSubstringsIter#tgt= (self,((val*)NULL)) on <self:FlatSubstringsIter> */
self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val = ((val*)NULL); /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatSubstringsIter#init for (self: FlatSubstringsIter) */
void core__flat___core__flat__FlatSubstringsIter___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatSubstringsIter___core__kernel__Object__init]))(self); /* init on <self:FlatSubstringsIter>*/
}
RET_LABEL:;
}
/* method flat#FlatText#first_byte for (self: FlatText): Int */
long core__flat___FlatText___first_byte(val* self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#last_byte for (self: FlatText): Int */
long core__flat___FlatText___last_byte(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var2 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatText> */
{
{ /* Inline kernel#Int#+ (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var1 + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var3 - 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#char_to_byte_index for (self: FlatText, Int): Int */
long core__flat___FlatText___char_to_byte_index(val* self, long p0) {
long var /* : Int */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_dpos /* var dpos: Int */;
long var6 /* : Int */;
long var_b /* var b: Int */;
char* var7 /* : CString */;
char* var_its /* var its: CString */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
unsigned char var11 /* : Byte */;
unsigned char var13 /* : Byte */;
unsigned char var14 /* : Byte */;
unsigned char var16 /* : Byte */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
long var52 /* : Int */;
long var_ln /* var ln: Int */;
long var53 /* : Int */;
long var_pos /* var pos: Int */;
long var_delta_begin /* var delta_begin: Int */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var_delta_end /* var delta_end: Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
long var75 /* : Int */;
long var_delta_cache /* var delta_cache: Int */;
long var_min /* var min: Int */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
long var93 /* : Int */;
long var_ns_i /* var ns_i: Int */;
long var_my_i /* var my_i: Int */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
long var97 /* : Int */;
long var98 /* : Int */;
long var99 /* : Int */;
long var100 /* : Int */;
long var101 /* : Int */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
long var107 /* : Int */;
long var108 /* : Int */;
var_index = p0;
var1 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatText> */
{
{ /* Inline kernel#Int#- (var_index,var1) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var_index - var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_dpos = var2;
var6 = self->attrs[COLOR_core__flat__FlatText___bytepos].l; /* _bytepos on <self:FlatText> */
var_b = var6;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var7;
{
{ /* Inline kernel#Int#== (var_dpos,1l) on <var_dpos:Int> */
var10 = var_dpos == 1l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline native#CString#[] (var_its,var_b) on <var_its:CString> */
var13 = (unsigned char)((int)var_its[var_b]);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline math#Byte#& (var11,((unsigned char)0x80)) on <var11:Byte> */
var16 = var11 & ((unsigned char)0x80);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var14,((unsigned char)0x00)) on <var14:Byte> */
var19 = var14 == ((unsigned char)0x00);
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline kernel#Int#+ (var_b,1l) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var_b + 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_b = var20;
} else {
{
var27 = core___core__CString___length_of_char_at(var_its, var_b);
}
{
{ /* Inline kernel#Int#+ (var_b,var27) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var34 = var_b + var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_b = var28;
}
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_b; /* _bytepos on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
var = var_b;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var37 = -1l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_dpos,var35) on <var_dpos:Int> */
var40 = var_dpos == var35;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
{ /* Inline kernel#Int#- (var_b,1l) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var43 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var47 = var_b - 1l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
var48 = core___core__CString___find_beginning_of_char_at(var_its, var41);
}
var_b = var48;
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_b; /* _bytepos on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
var = var_b;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_dpos,0l) on <var_dpos:Int> */
var51 = var_dpos == 0l;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
var = var_b;
goto RET_LABEL;
} else {
}
var52 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var_ln = var52;
var53 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatText> */
var_pos = var53;
var_delta_begin = var_index;
{
{ /* Inline kernel#Int#- (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var60 = var_ln - 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var54,var_index) on <var54:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var63 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var67 = var54 - var_index;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_delta_end = var61;
{
{ /* Inline kernel#Int#- (var_pos,var_index) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_index:Int> isa OTHER */
/* <var_index:Int> isa OTHER */
var70 = 1; /* easy <var_index:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var74 = var_pos - var_index;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
var75 = core___core__Int___abs(var68);
}
var_delta_cache = var75;
var_min = var_delta_begin;
{
{ /* Inline kernel#Int#< (var_delta_cache,var_min) on <var_delta_cache:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var78 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var82 = var_delta_cache < var_min;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
var_min = var_delta_cache;
} else {
}
{
{ /* Inline kernel#Int#< (var_delta_end,var_min) on <var_delta_end:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var85 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var89 = var_delta_end < var_min;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
if (var83){
var_min = var_delta_end;
} else {
}
{
{ /* Inline kernel#Int#== (var_min,var_delta_cache) on <var_min:Int> */
var92 = var_min == var_delta_cache;
var90 = var92;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
if (var90){
var93 = self->attrs[COLOR_core__flat__FlatText___bytepos].l; /* _bytepos on <self:FlatText> */
var_ns_i = var93;
var_my_i = var_pos;
} else {
{
{ /* Inline kernel#Int#== (var_min,var_delta_begin) on <var_min:Int> */
var96 = var_min == var_delta_begin;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
if (var94){
{
var97 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_ns_i = var97;
var_my_i = 0l;
} else {
{
var98 = core__flat___FlatText___last_byte(self);
}
{
var99 = core___core__CString___find_beginning_of_char_at(var_its, var98);
}
var_ns_i = var99;
var100 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
{
{ /* Inline kernel#Int#- (var100,1l) on <var100:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var103 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var107 = var100 - 1l;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
var_my_i = var101;
}
}
{
var108 = core___core__CString___char_to_byte_index_cached(var_its, var_index, var_my_i, var_ns_i);
}
var_ns_i = var108;
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_ns_i; /* _bytepos on <self:FlatText> */
var = var_ns_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#chars_to_escape_to_c for (self: FlatText): Int */
long core__flat___FlatText___chars_to_escape_to_c(val* self) {
long var /* : Int */;
char* var1 /* : CString */;
char* var_its /* var its: CString */;
long var2 /* : Int */;
long var_max /* var max: Int */;
long var3 /* : Int */;
long var_pos /* var pos: Int */;
long var_req_esc /* var req_esc: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
unsigned char var8 /* : Byte */;
unsigned char var10 /* : Byte */;
unsigned char var_c /* var c: Byte */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
long var64 /* : Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
long var70 /* : Int */;
long var_j /* var j: Int */;
long var71 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
short int var80 /* : Bool */;
unsigned char var81 /* : Byte */;
unsigned char var83 /* : Byte */;
unsigned char var_next /* var next: Byte */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
short int var_ /* var : Bool */;
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
long var121 /* : Int */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
const char* var_class_name126;
long var127 /* : Int */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
short int var134 /* : Bool */;
long var135 /* : Int */;
short int var137 /* : Bool */;
int cltype138;
int idtype139;
const char* var_class_name140;
long var141 /* : Int */;
long var142 /* : Int */;
short int var144 /* : Bool */;
int cltype145;
int idtype146;
const char* var_class_name147;
long var148 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var1;
{
var2 = core__flat___FlatText___last_byte(self);
}
var_max = var2;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_pos = var3;
var_req_esc = 0l;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_pos,var_max) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var6 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var7 = var_pos <= var_max;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline native#CString#[] (var_its,var_pos) on <var_its:CString> */
var10 = (unsigned char)((int)var_its[var_pos]);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_c = var8;
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x0a)) on <var_c:Byte> */
var13 = var_c == ((unsigned char)0x0a);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var_req_esc + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_req_esc = var14;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x09)) on <var_c:Byte> */
var23 = var_c == ((unsigned char)0x09);
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var30 = var_req_esc + 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_req_esc = var24;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x22)) on <var_c:Byte> */
var33 = var_c == ((unsigned char)0x22);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var36 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var40 = var_req_esc + 1l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_req_esc = var34;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x27)) on <var_c:Byte> */
var43 = var_c == ((unsigned char)0x27);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_req_esc + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_req_esc = var44;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x5c)) on <var_c:Byte> */
var53 = var_c == ((unsigned char)0x5c);
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var60 = var_req_esc + 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_req_esc = var54;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x3f)) on <var_c:Byte> */
var63 = var_c == ((unsigned char)0x3f);
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var66 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var70 = var_pos + 1l;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var_j = var64;
{
{ /* Inline abstract_text#FlatText#length (self) on <self:FlatText> */
var73 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_j,var71) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var71:Int> isa OTHER */
/* <var71:Int> isa OTHER */
var76 = 1; /* easy <var71:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var80 = var_j < var71;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
if (var74){
{
{ /* Inline native#CString#[] (var_its,var_j) on <var_its:CString> */
var83 = (unsigned char)((int)var_its[var_j]);
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var_next = var81;
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x21)) on <var_next:Byte> */
var93 = var_next == ((unsigned char)0x21);
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
var_ = var91;
if (var91){
var90 = var_;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x28)) on <var_next:Byte> */
var96 = var_next == ((unsigned char)0x28);
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var90 = var94;
}
var_97 = var90;
if (var90){
var89 = var_97;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x29)) on <var_next:Byte> */
var100 = var_next == ((unsigned char)0x29);
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var89 = var98;
}
var_101 = var89;
if (var89){
var88 = var_101;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x2d)) on <var_next:Byte> */
var104 = var_next == ((unsigned char)0x2d);
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var88 = var102;
}
var_105 = var88;
if (var88){
var87 = var_105;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x2f)) on <var_next:Byte> */
var108 = var_next == ((unsigned char)0x2f);
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var87 = var106;
}
var_109 = var87;
if (var87){
var86 = var_109;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x3c)) on <var_next:Byte> */
var112 = var_next == ((unsigned char)0x3c);
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var86 = var110;
}
var_113 = var86;
if (var86){
var85 = var_113;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x3d)) on <var_next:Byte> */
var116 = var_next == ((unsigned char)0x3d);
var114 = var116;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
var85 = var114;
}
var_117 = var85;
if (var85){
var84 = var_117;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x3e)) on <var_next:Byte> */
var120 = var_next == ((unsigned char)0x3e);
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
var84 = var118;
}
if (var84){
{
{ /* Inline kernel#Int#+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var123 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var123)) {
var_class_name126 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name126);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var127 = var_req_esc + 1l;
var121 = var127;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
var_req_esc = var121;
} else {
}
} else {
}
} else {
{
{ /* Inline kernel#Byte#< (var_c,((unsigned char)0x20)) on <var_c:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x20):Byte> isa OTHER */
/* <((unsigned char)0x20):Byte> isa OTHER */
var130 = 1; /* easy <((unsigned char)0x20):Byte> isa OTHER*/
if (unlikely(!var130)) {
var_class_name133 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name133);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var134 = var_c < ((unsigned char)0x20);
var128 = var134;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
if (var128){
{
{ /* Inline kernel#Int#+ (var_req_esc,3l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var137 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var137)) {
var_class_name140 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name140);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var141 = var_req_esc + 3l;
var135 = var141;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
var_req_esc = var135;
} else {
}
}
}
}
}
}
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var144 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var144)) {
var_class_name147 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name147);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var148 = var_pos + 1l;
var142 = var148;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
var_pos = var142;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_req_esc;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#escape_to_c for (self: FlatText): String */
val* core__flat___FlatText___core__abstract_text__Text__escape_to_c(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_ln_extra /* var ln_extra: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
char* var6 /* : CString */;
char* var_its /* var its: CString */;
long var7 /* : Int */;
long var_max /* var max: Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
long var_nlen /* var nlen: Int */;
char* var13 /* : CString */;
char* var14 /* : CString */;
char* var16 /* : CString */;
char* var_nns /* var nns: CString */;
long var17 /* : Int */;
long var_pos /* var pos: Int */;
long var_opos /* var opos: Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
unsigned char var25 /* : Byte */;
unsigned char var27 /* : Byte */;
unsigned char var_c /* var c: Byte */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var78 /* : Int */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
long var97 /* : Int */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
const char* var_class_name102;
long var103 /* : Int */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
long var108 /* : Int */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
const char* var_class_name113;
long var114 /* : Int */;
long var116 /* : Int */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
long var122 /* : Int */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
long var126 /* : Int */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
const char* var_class_name131;
long var132 /* : Int */;
long var_j /* var j: Int */;
long var133 /* : Int */;
long var135 /* : Int */;
short int var136 /* : Bool */;
short int var138 /* : Bool */;
int cltype139;
int idtype140;
const char* var_class_name141;
short int var142 /* : Bool */;
unsigned char var143 /* : Byte */;
unsigned char var145 /* : Byte */;
unsigned char var_next /* var next: Byte */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
short int var_ /* var : Bool */;
short int var156 /* : Bool */;
short int var158 /* : Bool */;
short int var_159 /* var : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
short int var_163 /* var : Bool */;
short int var164 /* : Bool */;
short int var166 /* : Bool */;
short int var_167 /* var : Bool */;
short int var168 /* : Bool */;
short int var170 /* : Bool */;
short int var_171 /* var : Bool */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
short int var_175 /* var : Bool */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
short int var_179 /* var : Bool */;
short int var180 /* : Bool */;
short int var182 /* : Bool */;
long var184 /* : Int */;
short int var186 /* : Bool */;
int cltype187;
int idtype188;
const char* var_class_name189;
long var190 /* : Int */;
long var192 /* : Int */;
short int var194 /* : Bool */;
int cltype195;
int idtype196;
const char* var_class_name197;
long var198 /* : Int */;
short int var199 /* : Bool */;
short int var201 /* : Bool */;
int cltype202;
int idtype203;
const char* var_class_name204;
short int var205 /* : Bool */;
long var207 /* : Int */;
short int var209 /* : Bool */;
int cltype210;
int idtype211;
const char* var_class_name212;
long var213 /* : Int */;
long var215 /* : Int */;
short int var217 /* : Bool */;
int cltype218;
int idtype219;
const char* var_class_name220;
long var221 /* : Int */;
unsigned char var222 /* : Byte */;
unsigned char var224 /* : Byte */;
unsigned char var225 /* : Byte */;
unsigned char var227 /* : Byte */;
unsigned char var228 /* : Byte */;
short int var230 /* : Bool */;
int cltype231;
int idtype232;
const char* var_class_name233;
unsigned char var234 /* : Byte */;
long var236 /* : Int */;
short int var238 /* : Bool */;
int cltype239;
int idtype240;
const char* var_class_name241;
long var242 /* : Int */;
unsigned char var243 /* : Byte */;
unsigned char var245 /* : Byte */;
unsigned char var246 /* : Byte */;
short int var248 /* : Bool */;
int cltype249;
int idtype250;
const char* var_class_name251;
unsigned char var252 /* : Byte */;
long var254 /* : Int */;
short int var256 /* : Bool */;
int cltype257;
int idtype258;
const char* var_class_name259;
long var260 /* : Int */;
long var262 /* : Int */;
short int var264 /* : Bool */;
int cltype265;
int idtype266;
const char* var_class_name267;
long var268 /* : Int */;
long var269 /* : Int */;
short int var271 /* : Bool */;
int cltype272;
int idtype273;
const char* var_class_name274;
long var275 /* : Int */;
val* var276 /* : String */;
val* var277 /* : nullable Int */;
val* var278 /* : nullable Bool */;
val* var279 /* : nullable Bool */;
{
var1 = core__flat___FlatText___chars_to_escape_to_c(self);
}
var_ln_extra = var1;
{
{ /* Inline kernel#Int#== (var_ln_extra,0l) on <var_ln_extra:Int> */
var4 = var_ln_extra == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:FlatText>*/
}
var = var5;
goto RET_LABEL;
} else {
}
var6 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var6;
{
var7 = core__flat___FlatText___last_byte(self);
}
var_max = var7;
var8 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatText> */
{
{ /* Inline kernel#Int#+ (var8,var_ln_extra) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var_ln_extra:Int> isa OTHER */
/* <var_ln_extra:Int> isa OTHER */
var11 = 1; /* easy <var_ln_extra:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var8 + var_ln_extra;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_nlen = var9;
var13 = NULL/*special!*/;
{
{ /* Inline native#CString#new (var13,var_nlen) on <var13:CString> */
var16 = (char*)nit_alloc(var_nlen);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_nns = var14;
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_pos = var17;
var_opos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_pos,var_max) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var20 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var24 = var_pos <= var_max;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
{ /* Inline native#CString#[] (var_its,var_pos) on <var_its:CString> */
var27 = (unsigned char)((int)var_its[var_pos]);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_c = var25;
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x09)) on <var_c:Byte> */
var30 = var_c == ((unsigned char)0x09);
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline native#CString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var38 = var_opos + 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline native#CString#[]= (var_nns,var32,((unsigned char)0x74)) on <var_nns:CString> */
var_nns[var32]=(unsigned char)((unsigned char)0x74);
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var42 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var46 = var_opos + 2l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_opos = var40;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x0a)) on <var_c:Byte> */
var49 = var_c == ((unsigned char)0x0a);
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
{ /* Inline native#CString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var57 = var_opos + 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline native#CString#[]= (var_nns,var51,((unsigned char)0x6e)) on <var_nns:CString> */
var_nns[var51]=(unsigned char)((unsigned char)0x6e);
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var61 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var65 = var_opos + 2l;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_opos = var59;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x22)) on <var_c:Byte> */
var68 = var_c == ((unsigned char)0x22);
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
if (var66){
{
{ /* Inline native#CString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var76 = var_opos + 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline native#CString#[]= (var_nns,var70,((unsigned char)0x22)) on <var_nns:CString> */
var_nns[var70]=(unsigned char)((unsigned char)0x22);
RET_LABEL77:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var80 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var84 = var_opos + 2l;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var_opos = var78;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x27)) on <var_c:Byte> */
var87 = var_c == ((unsigned char)0x27);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
{
{ /* Inline native#CString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL88:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var91 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var95 = var_opos + 1l;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline native#CString#[]= (var_nns,var89,((unsigned char)0x27)) on <var_nns:CString> */
var_nns[var89]=(unsigned char)((unsigned char)0x27);
RET_LABEL96:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var99 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var99)) {
var_class_name102 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name102);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var103 = var_opos + 2l;
var97 = var103;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var_opos = var97;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x5c)) on <var_c:Byte> */
var106 = var_c == ((unsigned char)0x5c);
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
if (var104){
{
{ /* Inline native#CString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL107:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var110 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var110)) {
var_class_name113 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name113);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var114 = var_opos + 1l;
var108 = var114;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline native#CString#[]= (var_nns,var108,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var108]=(unsigned char)((unsigned char)0x5c);
RET_LABEL115:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var118 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var122 = var_opos + 2l;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
var_opos = var116;
} else {
{
{ /* Inline kernel#Byte#== (var_c,((unsigned char)0x3f)) on <var_c:Byte> */
var125 = var_c == ((unsigned char)0x3f);
var123 = var125;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
if (var123){
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var128 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var128)) {
var_class_name131 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var132 = var_pos + 1l;
var126 = var132;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
var_j = var126;
{
{ /* Inline abstract_text#FlatText#length (self) on <self:FlatText> */
var135 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var_j,var133) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var133:Int> isa OTHER */
/* <var133:Int> isa OTHER */
var138 = 1; /* easy <var133:Int> isa OTHER*/
if (unlikely(!var138)) {
var_class_name141 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name141);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var142 = var_j < var133;
var136 = var142;
goto RET_LABEL137;
RET_LABEL137:(void)0;
}
}
if (var136){
{
{ /* Inline native#CString#[] (var_its,var_j) on <var_its:CString> */
var145 = (unsigned char)((int)var_its[var_j]);
var143 = var145;
goto RET_LABEL144;
RET_LABEL144:(void)0;
}
}
var_next = var143;
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x21)) on <var_next:Byte> */
var155 = var_next == ((unsigned char)0x21);
var153 = var155;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
var_ = var153;
if (var153){
var152 = var_;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x28)) on <var_next:Byte> */
var158 = var_next == ((unsigned char)0x28);
var156 = var158;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
}
var152 = var156;
}
var_159 = var152;
if (var152){
var151 = var_159;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x29)) on <var_next:Byte> */
var162 = var_next == ((unsigned char)0x29);
var160 = var162;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
var151 = var160;
}
var_163 = var151;
if (var151){
var150 = var_163;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x2d)) on <var_next:Byte> */
var166 = var_next == ((unsigned char)0x2d);
var164 = var166;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
var150 = var164;
}
var_167 = var150;
if (var150){
var149 = var_167;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x2f)) on <var_next:Byte> */
var170 = var_next == ((unsigned char)0x2f);
var168 = var170;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
}
var149 = var168;
}
var_171 = var149;
if (var149){
var148 = var_171;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x3c)) on <var_next:Byte> */
var174 = var_next == ((unsigned char)0x3c);
var172 = var174;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
}
var148 = var172;
}
var_175 = var148;
if (var148){
var147 = var_175;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x3d)) on <var_next:Byte> */
var178 = var_next == ((unsigned char)0x3d);
var176 = var178;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
var147 = var176;
}
var_179 = var147;
if (var147){
var146 = var_179;
} else {
{
{ /* Inline kernel#Byte#== (var_next,((unsigned char)0x3e)) on <var_next:Byte> */
var182 = var_next == ((unsigned char)0x3e);
var180 = var182;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
}
var146 = var180;
}
if (var146){
{
{ /* Inline native#CString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL183:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var186 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var186)) {
var_class_name189 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name189);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var190 = var_opos + 1l;
var184 = var190;
goto RET_LABEL185;
RET_LABEL185:(void)0;
}
}
var_opos = var184;
} else {
}
} else {
}
{
{ /* Inline native#CString#[]= (var_nns,var_opos,((unsigned char)0x3f)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x3f);
RET_LABEL191:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var194 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var194)) {
var_class_name197 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name197);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var198 = var_opos + 1l;
var192 = var198;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
}
var_opos = var192;
} else {
{
{ /* Inline kernel#Byte#< (var_c,((unsigned char)0x20)) on <var_c:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x20):Byte> isa OTHER */
/* <((unsigned char)0x20):Byte> isa OTHER */
var201 = 1; /* easy <((unsigned char)0x20):Byte> isa OTHER*/
if (unlikely(!var201)) {
var_class_name204 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name204);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var205 = var_c < ((unsigned char)0x20);
var199 = var205;
goto RET_LABEL200;
RET_LABEL200:(void)0;
}
}
if (var199){
{
{ /* Inline native#CString#[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL206:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var209 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var209)) {
var_class_name212 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name212);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var213 = var_opos + 1l;
var207 = var213;
goto RET_LABEL208;
RET_LABEL208:(void)0;
}
}
{
{ /* Inline native#CString#[]= (var_nns,var207,((unsigned char)0x30)) on <var_nns:CString> */
var_nns[var207]=(unsigned char)((unsigned char)0x30);
RET_LABEL214:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var217 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var217)) {
var_class_name220 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name220);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var221 = var_opos + 2l;
var215 = var221;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
}
{
{ /* Inline math#Byte#& (var_c,((unsigned char)0x38)) on <var_c:Byte> */
var224 = var_c & ((unsigned char)0x38);
var222 = var224;
goto RET_LABEL223;
RET_LABEL223:(void)0;
}
}
{
{ /* Inline kernel#Byte#>> (var222,3l) on <var222:Byte> */
var227 = var222 >> 3l;
var225 = var227;
goto RET_LABEL226;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline kernel#Byte#+ (var225,((unsigned char)0x30)) on <var225:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x30):Byte> isa OTHER */
/* <((unsigned char)0x30):Byte> isa OTHER */
var230 = 1; /* easy <((unsigned char)0x30):Byte> isa OTHER*/
if (unlikely(!var230)) {
var_class_name233 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name233);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 622);
fatal_exit(1);
}
var234 = var225 + ((unsigned char)0x30);
var228 = var234;
goto RET_LABEL229;
RET_LABEL229:(void)0;
}
}
{
{ /* Inline native#CString#[]= (var_nns,var215,var228) on <var_nns:CString> */
var_nns[var215]=(unsigned char)var228;
RET_LABEL235:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,3l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var238 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var238)) {
var_class_name241 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name241);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var242 = var_opos + 3l;
var236 = var242;
goto RET_LABEL237;
RET_LABEL237:(void)0;
}
}
{
{ /* Inline math#Byte#& (var_c,((unsigned char)0x07)) on <var_c:Byte> */
var245 = var_c & ((unsigned char)0x07);
var243 = var245;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
}
{
{ /* Inline kernel#Byte#+ (var243,((unsigned char)0x30)) on <var243:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x30):Byte> isa OTHER */
/* <((unsigned char)0x30):Byte> isa OTHER */
var248 = 1; /* easy <((unsigned char)0x30):Byte> isa OTHER*/
if (unlikely(!var248)) {
var_class_name251 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name251);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 622);
fatal_exit(1);
}
var252 = var243 + ((unsigned char)0x30);
var246 = var252;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline native#CString#[]= (var_nns,var236,var246) on <var_nns:CString> */
var_nns[var236]=(unsigned char)var246;
RET_LABEL253:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,4l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var256 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var256)) {
var_class_name259 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name259);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var260 = var_opos + 4l;
var254 = var260;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
}
var_opos = var254;
} else {
{
{ /* Inline native#CString#[]= (var_nns,var_opos,var_c) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)var_c;
RET_LABEL261:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var264 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var264)) {
var_class_name267 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name267);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var268 = var_opos + 1l;
var262 = var268;
goto RET_LABEL263;
RET_LABEL263:(void)0;
}
}
var_opos = var262;
}
}
}
}
}
}
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var271 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var271)) {
var_class_name274 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name274);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var275 = var_pos + 1l;
var269 = var275;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
}
var_pos = var269;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var277 = (val*)(var_nlen<<2|1);
var278 = (val*)((long)(0)<<2|3);
var279 = (val*)((long)(0)<<2|3);
var276 = core__flat___CString___to_s_unsafe(var_nns, var277, ((val*)NULL), var278, var279);
}
var = var276;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#[] for (self: FlatText, Int): Char */
uint32_t core__flat___FlatText___core__abstract_text__Text___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var_len /* var len: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_dpos /* var dpos: Int */;
long var7 /* : Int */;
long var_b /* var b: Int */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
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
char* var26 /* : CString */;
char* var_its /* var its: CString */;
unsigned char var27 /* : Byte */;
unsigned char var29 /* : Byte */;
unsigned char var_c /* var c: Byte */;
unsigned char var30 /* : Byte */;
unsigned char var32 /* : Byte */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
short int var43 /* : Bool */;
long var44 /* : Int */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var_50 /* var : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
char* var58 /* : CString */;
char* var_its59 /* var its: CString */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
unsigned char var67 /* : Byte */;
unsigned char var69 /* : Byte */;
unsigned char var_c70 /* var c: Byte */;
unsigned char var71 /* : Byte */;
unsigned char var73 /* : Byte */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
uint32_t var84 /* : Char */;
uint32_t var86 /* : Char */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
char* var90 /* : CString */;
char* var_its91 /* var its: CString */;
unsigned char var92 /* : Byte */;
unsigned char var94 /* : Byte */;
unsigned char var_c95 /* var c: Byte */;
unsigned char var96 /* : Byte */;
unsigned char var98 /* : Byte */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
uint32_t var102 /* : Char */;
uint32_t var104 /* : Char */;
char* var105 /* : CString */;
char* var107 /* : CString */;
uint32_t var108 /* : Char */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
short int var116 /* : Bool */;
short int var_117 /* var : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
short int var124 /* : Bool */;
uint32_t var125 /* : Char */;
var_index = p0;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var_len = var1;
var2 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatText> */
{
{ /* Inline kernel#Int#- (var_index,var2) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var_index - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_dpos = var3;
var7 = self->attrs[COLOR_core__flat__FlatText___bytepos].l; /* _bytepos on <self:FlatText> */
var_b = var7;
{
{ /* Inline kernel#Int#== (var_dpos,1l) on <var_dpos:Int> */
var11 = var_dpos == 1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ = var9;
if (var9){
{
{ /* Inline kernel#Int#- (var_len,1l) on <var_len:Int> */
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
{ /* Inline kernel#Int#< (var_index,var12) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var21 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var25 = var_index < var12;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var8 = var19;
} else {
var8 = var_;
}
if (var8){
var26 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var26;
{
{ /* Inline native#CString#[] (var_its,var_b) on <var_its:CString> */
var29 = (unsigned char)((int)var_its[var_b]);
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_c = var27;
{
{ /* Inline math#Byte#& (var_c,((unsigned char)0x80)) on <var_c:Byte> */
var32 = var_c & ((unsigned char)0x80);
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var30,((unsigned char)0x00)) on <var30:Byte> */
var35 = var30 == ((unsigned char)0x00);
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
{ /* Inline kernel#Int#+ (var_b,1l) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_b + 1l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_b = var36;
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_b; /* _bytepos on <self:FlatText> */
var_dpos = 0l;
} else {
}
} else {
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var46 = -1l;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_dpos,var44) on <var_dpos:Int> */
var49 = var_dpos == var44;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_50 = var47;
if (var47){
{
{ /* Inline kernel#Int#> (var_index,1l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var57 = var_index > 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var43 = var51;
} else {
var43 = var_50;
}
if (var43){
var58 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its59 = var58;
{
{ /* Inline kernel#Int#- (var_b,1l) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var66 = var_b - 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline native#CString#[] (var_its59,var60) on <var_its59:CString> */
var69 = (unsigned char)((int)var_its59[var60]);
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_c70 = var67;
{
{ /* Inline math#Byte#& (var_c70,((unsigned char)0x80)) on <var_c70:Byte> */
var73 = var_c70 & ((unsigned char)0x80);
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var71,((unsigned char)0x00)) on <var71:Byte> */
var76 = var71 == ((unsigned char)0x00);
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
if (var74){
{
{ /* Inline kernel#Int#- (var_b,1l) on <var_b:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var79 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var83 = var_b - 1l;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_b = var77;
var_dpos = 0l;
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_b; /* _bytepos on <self:FlatText> */
{
{ /* Inline kernel#Byte#ascii (var_c70) on <var_c70:Byte> */
var86 = (uint32_t)var_c70;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var = var84;
goto RET_LABEL;
} else {
}
} else {
}
}
{
{ /* Inline kernel#Int#== (var_dpos,0l) on <var_dpos:Int> */
var89 = var_dpos == 0l;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
var90 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its91 = var90;
{
{ /* Inline native#CString#[] (var_its91,var_b) on <var_its91:CString> */
var94 = (unsigned char)((int)var_its91[var_b]);
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_c95 = var92;
{
{ /* Inline math#Byte#& (var_c95,((unsigned char)0x80)) on <var_c95:Byte> */
var98 = var_c95 & ((unsigned char)0x80);
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var96,((unsigned char)0x00)) on <var96:Byte> */
var101 = var96 == ((unsigned char)0x00);
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
if (var99){
{
{ /* Inline kernel#Byte#ascii (var_c95) on <var_c95:Byte> */
var104 = (uint32_t)var_c95;
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var = var102;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_text#FlatText#items (self) on <self:FlatText> */
var107 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = core___core__CString___char_at(var105, var_b);
}
var = var108;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var112 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var116 = var_index >= 0l;
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var_117 = var110;
if (var110){
{
{ /* Inline kernel#Int#< (var_index,var_len) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var120 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name123 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var124 = var_index < var_len;
var118 = var124;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
var109 = var118;
} else {
var109 = var_117;
}
if (unlikely(!var109)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 378);
fatal_exit(1);
}
{
var125 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__fetch_char_at]))(self, var_index); /* fetch_char_at on <self:FlatText>*/
}
var = var125;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#fetch_char_at for (self: FlatText, Int): Char */
uint32_t core__flat___FlatText___fetch_char_at(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var_i /* var i: Int */;
char* var2 /* : CString */;
char* var_items /* var items: CString */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
unsigned char var_b /* var b: Byte */;
unsigned char var6 /* : Byte */;
unsigned char var8 /* : Byte */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
uint32_t var12 /* : Char */;
uint32_t var14 /* : Char */;
uint32_t var15 /* : Char */;
var_index = p0;
{
var1 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_index); /* char_to_byte_index on <self:FlatText>*/
}
var_i = var1;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_items = var2;
{
{ /* Inline native#CString#[] (var_items,var_i) on <var_items:CString> */
var5 = (unsigned char)((int)var_items[var_i]);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_b = var3;
{
{ /* Inline math#Byte#& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var8 = var_b & ((unsigned char)0x80);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var6,((unsigned char)0x00)) on <var6:Byte> */
var11 = var6 == ((unsigned char)0x00);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel#Byte#ascii (var_b) on <var_b:Byte> */
var14 = (uint32_t)var_b;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var = var12;
goto RET_LABEL;
} else {
}
{
var15 = core___core__CString___char_at(var_items, var_i);
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatText#to_hex for (self: FlatText, nullable Int, nullable Int): Int */
long core__flat___FlatText___core__abstract_text__Text__to_hex(val* self, val* p0, val* p1) {
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
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var16 /* : Int */;
long var17 /* : Int */;
val* var18 /* : nullable Int */;
long var19 /* : Int */;
long var20 /* : Int */;
val* var21 /* : nullable Int */;
char* var22 /* : CString */;
char* var_its /* var its: CString */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
long var_max /* var max: Int */;
long var32 /* : Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
long var40 /* : Int */;
long var42 /* : Int */;
unsigned char var43 /* : Byte */;
unsigned char var45 /* : Byte */;
uint32_t var46 /* : Char */;
uint32_t var48 /* : Char */;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
long var57 /* : Int */;
var_pos = p0;
var_ln = p1;
var_res = 0l;
if (var_pos == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_pos,((val*)NULL)) on <var_pos:nullable Int> */
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
{ /* Inline kernel#Int#== (var_ln,((val*)NULL)) on <var_ln:nullable Int> */
var9 = 0; /* incompatible types Int vs. null; cannot be NULL */
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
{ /* Inline abstract_text#FlatText#length (self) on <self:FlatText> */
var12 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var10,var_pos) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var_pos:nullable Int(Int)> isa OTHER */
/* <var_pos:nullable Int(Int)> isa OTHER */
var15 = 1; /* easy <var_pos:nullable Int(Int)> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = var_pos == NULL ? "null" : (((long)var_pos&3)?type_info[((long)var_pos&3)]:var_pos->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var16 = (long)(var_pos)>>2;
var17 = var10 - var16;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var18 = (val*)(var13<<2|1);
var_ln = var18;
} else {
}
{
var19 = (long)(var_pos)>>2;
var20 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var19); /* char_to_byte_index on <self:FlatText>*/
}
var21 = (val*)(var20<<2|1);
var_pos = var21;
var22 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var22;
{
{ /* Inline kernel#Int#+ (var_pos,var_ln) on <var_pos:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <var_ln:nullable Int(Int)> isa OTHER */
/* <var_ln:nullable Int(Int)> isa OTHER */
var25 = 1; /* easy <var_ln:nullable Int(Int)> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = var_ln == NULL ? "null" : (((long)var_ln&3)?type_info[((long)var_ln&3)]:var_ln->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var29 = (long)(var_pos)>>2;
var30 = (long)(var_ln)>>2;
var31 = var29 + var30;
var23 = var31;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_max = var23;
var32 = (long)(var_pos)>>2;
var_i = var32;
var_ = var_max;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var35 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var39 = var_i < var_;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel#Int#<< (var_res,4l) on <var_res:Int> */
var42 = var_res << 4l;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_res = var40;
{
{ /* Inline native#CString#[] (var_its,var_i) on <var_its:CString> */
var45 = (unsigned char)((int)var_its[var_i]);
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Byte#ascii (var43) on <var43:Byte> */
var48 = (uint32_t)var43;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
var49 = core__abstract_text___Char___from_hex(var46);
}
{
{ /* Inline kernel#Int#+ (var_res,var49) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var49:Int> isa OTHER */
/* <var49:Int> isa OTHER */
var52 = 1; /* easy <var49:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var_res + var49;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_res = var50;
{
var57 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var57;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#first_byte for (self: FlatString): Int */
long core___core__FlatString___FlatText__first_byte(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatString#chars for (self: FlatString): SequenceRead[Char] */
val* core___core__FlatString___core__abstract_text__Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
val* var1 /* : FlatStringCharView */;
var1 = NEW_core__flat__FlatStringCharView(&type_core__flat__FlatStringCharView);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__StringCharView__target_61d]))(var1, self); /* target= on <var1:FlatStringCharView>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringCharView>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#to_cstring for (self: FlatString): CString */
char* core___core__FlatString___core__abstract_text__Text__to_cstring(val* self) {
char* var /* : CString */;
long var1 /* : Int */;
long var_blen /* var blen: Int */;
char* var2 /* : CString */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
char* var7 /* : CString */;
char* var9 /* : CString */;
char* var_new_items /* var new_items: CString */;
char* var10 /* : CString */;
long var11 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
var_blen = var1;
var2 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_blen,1l) on <var_blen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var_blen + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline native#CString#new (var2,var3) on <var2:CString> */
var9 = (char*)nit_alloc(var3);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_new_items = var7;
var10 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var11 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
{
{ /* Inline native#CString#copy_to (var10,var_new_items,var_blen,var11,0l) on <var10:CString> */
memmove(var_new_items+0l,var10+var11,var_blen);
RET_LABEL12:(void)0;
}
}
{
{ /* Inline native#CString#[]= (var_new_items,var_blen,((unsigned char)0x00)) on <var_new_items:CString> */
var_new_items[var_blen]=(unsigned char)((unsigned char)0x00);
RET_LABEL13:(void)0;
}
}
var = var_new_items;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#substring for (self: FlatString, Int, Int): String */
val* core___core__FlatString___core__abstract_text__Text__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
long var33 /* : Int */;
long var_ln /* var ln: Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
long var_end_index /* var end_index: Int */;
val* var80 /* : String */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var4 = var_count <= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
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
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var10 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_from < 0l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var17 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var21 = var_count + var_from;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_count = var15;
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var24 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var28 = var_count <= 0l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "";
var32 = core__abstract_text___CString___to_s_full(var31, 0l, 0l);
var30 = var32;
varonce29 = var30;
}
var = var30;
goto RET_LABEL;
} else {
}
var_from = 0l;
} else {
}
var33 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_ln = var33;
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var36 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var40 = var_count + var_from;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var34,var_ln) on <var34:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var43 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var47 = var34 > var_ln;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline kernel#Int#- (var_ln,var_from) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var50 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var54 = var_ln - var_from;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_count = var48;
} else {
}
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var57 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var61 = var_count <= 0l;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "";
var65 = core__abstract_text___CString___to_s_full(var64, 0l, 0l);
var63 = var65;
varonce62 = var63;
}
var = var63;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var68 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var72 = var_from + var_count;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var66,1l) on <var66:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var75 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var79 = var66 - 1l;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var_end_index = var73;
{
var80 = ((val*(*)(val* self, long p0, long p1, long p2))(self->class->vft[COLOR_core__flat__FlatString__substring_impl]))(self, var_from, var_count, var_end_index); /* substring_impl on <self:FlatString>*/
}
var = var80;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#substring_impl for (self: FlatString, Int, Int, Int): String */
val* core___core__FlatString___substring_impl(val* self, long p0, long p1, long p2) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
long var_end_index /* var end_index: Int */;
long var1 /* : Int */;
long var_cache /* var cache: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var6 /* : Int */;
long var_dfrom /* var dfrom: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
long var_dend /* var dend: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
long var22 /* : Int */;
long var_bytefrom /* var bytefrom: Int */;
long var23 /* : Int */;
long var_byteto /* var byteto: Int */;
long var24 /* : Int */;
long var25 /* : Int */;
char* var26 /* : CString */;
char* var_its /* var its: CString */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
val* var42 /* : FlatString */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var_s /* var s: FlatString */;
var_from = p0;
var_count = p1;
var_end_index = p2;
var1 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatString> */
var_cache = var1;
{
{ /* Inline kernel#Int#- (var_cache,var_from) on <var_cache:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var4 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var_cache - var_from;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var6 = core___core__Int___abs(var2);
}
var_dfrom = var6;
{
{ /* Inline kernel#Int#- (var_end_index,var_from) on <var_end_index:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var9 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var_end_index - var_from;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
var14 = core___core__Int___abs(var7);
}
var_dend = var14;
{
{ /* Inline kernel#Int#< (var_dfrom,var_dend) on <var_dfrom:Int> */
/* Covariant cast for argument 0 (i) <var_dend:Int> isa OTHER */
/* <var_dend:Int> isa OTHER */
var17 = 1; /* easy <var_dend:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var21 = var_dfrom < var_dend;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var22 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_from); /* char_to_byte_index on <self:FlatString>*/
}
var_bytefrom = var22;
{
var23 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_end_index); /* char_to_byte_index on <self:FlatString>*/
}
var_byteto = var23;
} else {
{
var24 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_end_index); /* char_to_byte_index on <self:FlatString>*/
}
var_byteto = var24;
{
var25 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_from); /* char_to_byte_index on <self:FlatString>*/
}
var_bytefrom = var25;
}
var26 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var26;
{
var27 = core___core__CString___length_of_char_at(var_its, var_byteto);
}
{
{ /* Inline kernel#Int#- (var27,1l) on <var27:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var34 = var27 - 1l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_byteto,var28) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var37 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var41 = var_byteto + var28;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_byteto = var35;
var42 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline kernel#Int#- (var_byteto,var_bytefrom) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var_bytefrom:Int> isa OTHER */
/* <var_bytefrom:Int> isa OTHER */
var45 = 1; /* easy <var_bytefrom:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var49 = var_byteto - var_bytefrom;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var43,1l) on <var43:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var52 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var43 + 1l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var57 = core___core__FlatString___full(var42, var_its, var50, var_bytefrom, var_count);
}
var_s = var57;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#empty for (self: FlatString): String */
val* core___core__FlatString___core__abstract_text__Text__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = core__abstract_text___CString___to_s_full(var2, 0l, 0l);
var1 = var3;
varonce = var1;
}
/* <var1:String> isa FlatString */
cltype = type_core__FlatString.color;
idtype = type_core__FlatString.id;
if(cltype >= var1->type->table_size) {
var4 = 0;
} else {
var4 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 488);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#to_upper for (self: FlatString): String */
val* core___core__FlatString___core__abstract_text__Text__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_outstr /* var outstr: FlatBuffer */;
long var7 /* : Int */;
long var_mylen /* var mylen: Int */;
long var_pos /* var pos: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var15 /* : SequenceRead[Char] */;
val* var16 /* : nullable Object */;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
val* var26 /* : String */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
var2 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var2 + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
core___core__FlatBuffer___with_capacity(var1, var3); /* Direct call flat#FlatBuffer#with_capacity on <var1:FlatBuffer>*/
}
var_outstr = var1;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_mylen = var7;
var_pos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_pos,var_mylen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_mylen:Int> isa OTHER */
/* <var_mylen:Int> isa OTHER */
var10 = 1; /* easy <var_mylen:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_pos < var_mylen;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var15 = core___core__FlatString___core__abstract_text__Text__chars(self);
}
{
var16 = ((val*(*)(val* self, long p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var15, var_pos); /* [] on <var15:SequenceRead[Char]>*/
}
{
var18 = (uint32_t)((long)(var16)>>2);
var17 = core___core__Char___to_upper(var18);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var_outstr, var17); /* Direct call flat#FlatBuffer#add on <var_outstr:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var_pos + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_pos = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var26 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_outstr);
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#to_lower for (self: FlatString): String */
val* core___core__FlatString___core__abstract_text__Text__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_outstr /* var outstr: FlatBuffer */;
long var7 /* : Int */;
long var_mylen /* var mylen: Int */;
long var_pos /* var pos: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var15 /* : SequenceRead[Char] */;
val* var16 /* : nullable Object */;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
val* var26 /* : String */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
var2 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
{
{ /* Inline kernel#Int#+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var2 + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
core___core__FlatBuffer___with_capacity(var1, var3); /* Direct call flat#FlatBuffer#with_capacity on <var1:FlatBuffer>*/
}
var_outstr = var1;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_mylen = var7;
var_pos = 0l;
for(;;) {
{
{ /* Inline kernel#Int#< (var_pos,var_mylen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_mylen:Int> isa OTHER */
/* <var_mylen:Int> isa OTHER */
var10 = 1; /* easy <var_mylen:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_pos < var_mylen;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var15 = core___core__FlatString___core__abstract_text__Text__chars(self);
}
{
var16 = ((val*(*)(val* self, long p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var15, var_pos); /* [] on <var15:SequenceRead[Char]>*/
}
{
var18 = (uint32_t)((long)(var16)>>2);
var17 = core___core__Char___to_lower(var18);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var_outstr, var17); /* Direct call flat#FlatBuffer#add on <var_outstr:FlatBuffer>*/
}
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var_pos + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_pos = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var26 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_outstr);
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#output for (self: FlatString) */
void core___core__FlatString___core__kernel__Object__output(val* self) {
val* var /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : IndexedIterator[Char] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
uint32_t var5 /* : Char */;
uint32_t var_i /* var i: Char */;
{
var = core___core__FlatString___core__abstract_text__Text__chars(self);
}
var_ = var;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:IndexedIterator[Char]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:IndexedIterator[Char]>*/
}
var5 = (uint32_t)((long)(var4)>>2);
var_i = var5;
{
{ /* Inline kernel#Char#output (var_i) on <var_i:Char> */
kernel___Char_output___impl(var_i);
RET_LABEL6:(void)0;
}
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:IndexedIterator[Char]>*/
}
RET_LABEL:;
}
/* method flat#FlatString#with_infos for (self: FlatString, CString, Int, Int): FlatString */
val* core___core__FlatString___with_infos(val* self, char* p0, long p1, long p2) {
val* var /* : FlatString */;
char* var_items /* var items: CString */;
long var_byte_length /* var byte_length: Int */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_from3 /* var from: Int */;
long var_byte_length4 /* var byte_length: Int */;
long var_st /* var st: Int */;
long var_ln /* var ln: Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
uint32_t var16 /* : UInt32 */;
uint32_t var18 /* : UInt32 */;
uint32_t var_i /* var i: UInt32 */;
uint32_t var19 /* : UInt32 */;
uint32_t var21 /* : UInt32 */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
long var51 /* : Int */;
long var_cln /* var cln: Int */;
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
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
long var_len /* var len: Int */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
val* var76 /* : ASCIIFlatString */;
val* var77 /* : UnicodeFlatString */;
var_items = p0;
var_byte_length = p1;
var_from = p2;
{
{ /* Inline native#CString#utf8_length (var_items,var_from,var_byte_length) on <var_items:CString> */
var_from3 = var_from;
var_byte_length4 = var_byte_length;
var_st = var_from3;
var_ln = 0l;
for(;;) {
{
{ /* Inline kernel#Int#> (var_byte_length4,0l) on <var_byte_length4:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var8 = var_byte_length4 > 0l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
for(;;) {
{
{ /* Inline kernel#Int#>= (var_byte_length4,4l) on <var_byte_length4:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var11 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var15 = var_byte_length4 >= 4l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline native#CString#fetch_4_chars (var_items,var_st) on <var_items:CString> */
var18 = (long)*((uint32_t*)(var_items + var_st));
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_i = var16;
{
{ /* Inline fixed_ints#UInt32#& (var_i,((uint32_t)2155905152)) on <var_i:UInt32> */
var21 = var_i & ((uint32_t)2155905152);
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline fixed_ints#UInt32#!= (var19,((uint32_t)0)) on <var19:UInt32> */
var24 = var19 == ((uint32_t)0);
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel#Int#- (var_byte_length4,4l) on <var_byte_length4:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var28 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var32 = var_byte_length4 - 4l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_byte_length4 = var26;
{
{ /* Inline kernel#Int#+ (var_st,4l) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var35 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var39 = var_st + 4l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_st = var33;
{
{ /* Inline kernel#Int#+ (var_ln,4l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var42 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var46 = var_ln + 4l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_ln = var40;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_byte_length4,0l) on <var_byte_length4:Int> */
var49 = var_byte_length4 == 0l;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
goto BREAK_label50;
} else {
}
{
var51 = core___core__CString___length_of_char_at(var_items, var_st);
}
var_cln = var51;
{
{ /* Inline kernel#Int#+ (var_st,var_cln) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var54 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var58 = var_st + var_cln;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var_st = var52;
{
{ /* Inline kernel#Int#+ (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var61 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var65 = var_ln + 1l;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_ln = var59;
{
{ /* Inline kernel#Int#- (var_byte_length4,var_cln) on <var_byte_length4:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var68 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var72 = var_byte_length4 - var_cln;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var_byte_length4 = var66;
} else {
goto BREAK_label50;
}
}
BREAK_label50: (void)0;
var1 = var_ln;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_len = var1;
{
{ /* Inline kernel#Int#== (var_byte_length,var_len) on <var_byte_length:Int> */
var75 = var_byte_length == var_len;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
if (var73){
var76 = NEW_core__flat__ASCIIFlatString(&type_core__flat__ASCIIFlatString);
{
core__flat___core__flat__ASCIIFlatString___full_data(var76, var_items, var_byte_length, var_from, var_len); /* Direct call flat#ASCIIFlatString#full_data on <var76:ASCIIFlatString>*/
}
var = var76;
goto RET_LABEL;
} else {
}
var77 = NEW_core__flat__UnicodeFlatString(&type_core__flat__UnicodeFlatString);
{
core__flat___core__flat__UnicodeFlatString___full_data(var77, var_items, var_byte_length, var_from, var_len); /* Direct call flat#UnicodeFlatString#full_data on <var77:UnicodeFlatString>*/
}
var = var77;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#full for (self: FlatString, CString, Int, Int, Int): FlatString */
val* core___core__FlatString___full(val* self, char* p0, long p1, long p2, long p3) {
val* var /* : FlatString */;
char* var_items /* var items: CString */;
long var_byte_length /* var byte_length: Int */;
long var_from /* var from: Int */;
long var_length /* var length: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : ASCIIFlatString */;
val* var5 /* : UnicodeFlatString */;
var_items = p0;
var_byte_length = p1;
var_from = p2;
var_length = p3;
{
{ /* Inline kernel#Int#== (var_byte_length,var_length) on <var_byte_length:Int> */
var3 = var_byte_length == var_length;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var4 = NEW_core__flat__ASCIIFlatString(&type_core__flat__ASCIIFlatString);
{
core__flat___core__flat__ASCIIFlatString___full_data(var4, var_items, var_byte_length, var_from, var_length); /* Direct call flat#ASCIIFlatString#full_data on <var4:ASCIIFlatString>*/
}
var = var4;
goto RET_LABEL;
} else {
}
var5 = NEW_core__flat__UnicodeFlatString(&type_core__flat__UnicodeFlatString);
{
core__flat___core__flat__UnicodeFlatString___full_data(var5, var_items, var_byte_length, var_from, var_length); /* Direct call flat#UnicodeFlatString#full_data on <var5:UnicodeFlatString>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#== for (self: FlatString, nullable Object): Bool */
short int core___core__FlatString___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var_my_length /* var my_length: Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var_my_index /* var my_index: Int */;
long var20 /* : Int */;
long var_its_index /* var its_index: Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name;
long var26 /* : Int */;
long var_last_iteration /* var last_iteration: Int */;
char* var27 /* : CString */;
char* var_its_items /* var its_items: CString */;
char* var28 /* : CString */;
char* var_my_items /* var my_items: CString */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
unsigned char var36 /* : Byte */;
unsigned char var38 /* : Byte */;
unsigned char var39 /* : Byte */;
unsigned char var41 /* : Byte */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
var_other = p0;
/* <var_other:nullable Object> isa FlatText */
cltype = type_core__FlatText.color;
idtype = type_core__FlatText.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
{
var3 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core___core__FlatString___core__kernel__Object___61d_61d]))(self, p0); /* == on <self:FlatString>*/
}
var = var3;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#object_id (self) on <self:FlatString> */
var6 = (long)self;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Object#object_id (var_other) on <var_other:nullable Object(FlatText)> */
var9 = (long)var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var4,var7) on <var4:Int> */
var12 = var4 == var7;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = 1;
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
var_my_length = var13;
var14 = var_other->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_other:nullable Object(FlatText)> */
{
{ /* Inline kernel#Int#!= (var14,var_my_length) on <var14:Int> */
var17 = var14 == var_my_length;
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var = 0;
goto RET_LABEL;
} else {
}
var19 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_my_index = var19;
{
var20 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_other); /* first_byte on <var_other:nullable Object(FlatText)>*/
}
var_its_index = var20;
{
{ /* Inline kernel#Int#+ (var_my_index,var_my_length) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var23 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var_my_index + var_my_length;
var21 = var26;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_last_iteration = var21;
var27 = var_other->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_other:nullable Object(FlatText)> */
var_its_items = var27;
var28 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_my_items = var28;
for(;;) {
{
{ /* Inline kernel#Int#< (var_my_index,var_last_iteration) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_last_iteration:Int> isa OTHER */
/* <var_last_iteration:Int> isa OTHER */
var31 = 1; /* easy <var_last_iteration:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var35 = var_my_index < var_last_iteration;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline native#CString#[] (var_my_items,var_my_index) on <var_my_items:CString> */
var38 = (unsigned char)((int)var_my_items[var_my_index]);
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline native#CString#[] (var_its_items,var_its_index) on <var_its_items:CString> */
var41 = (unsigned char)((int)var_its_items[var_its_index]);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel#Byte#!= (var36,var39) on <var36:Byte> */
var44 = var36 == var39;
var45 = !var44;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_my_index,1l) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var48 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var52 = var_my_index + 1l;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var_my_index = var46;
{
{ /* Inline kernel#Int#+ (var_its_index,1l) on <var_its_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var59 = var_its_index + 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_its_index = var53;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#< for (self: FlatString, Text): Bool */
short int core___core__FlatString___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Text */;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
char* var16 /* : CString */;
char* var_myits /* var myits: CString */;
char* var17 /* : CString */;
char* var_itsits /* var itsits: CString */;
long var18 /* : Int */;
long var_mbt /* var mbt: Int */;
long var19 /* : Int */;
long var21 /* : Int */;
long var_obt /* var obt: Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
long var_minln /* var minln: Int */;
long var30 /* : Int */;
long var_mst /* var mst: Int */;
long var31 /* : Int */;
long var_ost /* var ost: Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
unsigned char var39 /* : Byte */;
unsigned char var41 /* : Byte */;
unsigned char var_my_curr_char /* var my_curr_char: Byte */;
unsigned char var42 /* : Byte */;
unsigned char var44 /* : Byte */;
unsigned char var_its_curr_char /* var its_curr_char: Byte */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
short int var58 /* : Bool */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const char* var_class_name79;
short int var80 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 577);
fatal_exit(1);
}
var_other = p0;
/* <var_other:Text> isa FlatText */
cltype3 = type_core__FlatText.color;
idtype4 = type_core__FlatText.id;
if(cltype3 >= var_other->type->table_size) {
var2 = 0;
} else {
var2 = var_other->type->type_table[cltype3] == idtype4;
}
var5 = !var2;
if (var5){
{
var6 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core___core__FlatString___core__kernel__Comparable___60d]))(self, p0); /* < on <self:FlatString>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#object_id (self) on <self:FlatString> */
var9 = (long)self;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Object#object_id (var_other) on <var_other:Text(FlatText)> */
var12 = (long)var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var7,var10) on <var7:Int> */
var15 = var7 == var10;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var = 0;
goto RET_LABEL;
} else {
}
var16 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_myits = var16;
var17 = var_other->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_other:Text(FlatText)> */
var_itsits = var17;
var18 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
var_mbt = var18;
{
{ /* Inline abstract_text#FlatText#byte_length (var_other) on <var_other:Text(FlatText)> */
var21 = var_other->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_other:Text(FlatText)> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_obt = var19;
{
{ /* Inline kernel#Int#< (var_mbt,var_obt) on <var_mbt:Int> */
/* Covariant cast for argument 0 (i) <var_obt:Int> isa OTHER */
/* <var_obt:Int> isa OTHER */
var25 = 1; /* easy <var_obt:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var29 = var_mbt < var_obt;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
if (var23){
var22 = var_mbt;
} else {
var22 = var_obt;
}
var_minln = var22;
var30 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_mst = var30;
{
var31 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_other); /* first_byte on <var_other:Text(FlatText)>*/
}
var_ost = var31;
var_i = 0l;
var_ = var_minln;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var34 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var38 = var_i < var_;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
} else {
goto BREAK_label;
}
{
{ /* Inline native#CString#[] (var_myits,var_mst) on <var_myits:CString> */
var41 = (unsigned char)((int)var_myits[var_mst]);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_my_curr_char = var39;
{
{ /* Inline native#CString#[] (var_itsits,var_ost) on <var_itsits:CString> */
var44 = (unsigned char)((int)var_itsits[var_ost]);
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_its_curr_char = var42;
{
{ /* Inline kernel#Byte#> (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Byte> */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Byte> isa OTHER */
/* <var_its_curr_char:Byte> isa OTHER */
var47 = 1; /* easy <var_its_curr_char:Byte> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 621);
fatal_exit(1);
}
var51 = var_my_curr_char > var_its_curr_char;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Byte#< (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Byte> */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Byte> isa OTHER */
/* <var_its_curr_char:Byte> isa OTHER */
var54 = 1; /* easy <var_its_curr_char:Byte> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var58 = var_my_curr_char < var_its_curr_char;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_mst,1l) on <var_mst:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var61 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var65 = var_mst + 1l;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var_mst = var59;
{
{ /* Inline kernel#Int#+ (var_ost,1l) on <var_ost:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var68 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var72 = var_ost + 1l;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var_ost = var66;
{
var73 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var73;
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#< (var_mbt,var_obt) on <var_mbt:Int> */
/* Covariant cast for argument 0 (i) <var_obt:Int> isa OTHER */
/* <var_obt:Int> isa OTHER */
var76 = 1; /* easy <var_obt:Int> isa OTHER*/
if (unlikely(!var76)) {
var_class_name79 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name79);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var80 = var_mbt < var_obt;
var74 = var80;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
var = var74;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#* for (self: FlatString, Int): String */
val* core___core__FlatString___core__abstract_text__Text___42d(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
long var1 /* : Int */;
long var_mybtlen /* var mybtlen: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_new_byte_length /* var new_byte_length: Int */;
long var6 /* : Int */;
long var_mylen /* var mylen: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var_newlen /* var newlen: Int */;
char* var14 /* : CString */;
char* var_its /* var its: CString */;
long var15 /* : Int */;
long var_fb /* var fb: Int */;
char* var16 /* : CString */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
char* var24 /* : CString */;
char* var26 /* : CString */;
char* var_ns /* var ns: CString */;
long var_offset /* var offset: Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : FlatString */;
var_i = p0;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
var_mybtlen = var1;
{
{ /* Inline kernel#Int#* (var_mybtlen,var_i) on <var_mybtlen:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var4 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var5 = var_mybtlen * var_i;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_new_byte_length = var2;
var6 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_mylen = var6;
{
{ /* Inline kernel#Int#* (var_mylen,var_i) on <var_mylen:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var9 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var13 = var_mylen * var_i;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_newlen = var7;
var14 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var14;
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_fb = var15;
var16 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_new_byte_length,1l) on <var_new_byte_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = var_new_byte_length + 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline native#CString#new (var16,var17) on <var16:CString> */
var26 = (char*)nit_alloc(var17);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_ns = var24;
{
{ /* Inline native#CString#[]= (var_ns,var_new_byte_length,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_new_byte_length]=(unsigned char)((unsigned char)0x00);
RET_LABEL27:(void)0;
}
}
var_offset = 0l;
for(;;) {
{
{ /* Inline kernel#Int#> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var30 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var34 = var_i > 0l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline native#CString#copy_to (var_its,var_ns,var_mybtlen,var_fb,var_offset) on <var_its:CString> */
memmove(var_ns+var_offset,var_its+var_fb,var_mybtlen);
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_offset,var_mybtlen) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var_mybtlen:Int> isa OTHER */
/* <var_mybtlen:Int> isa OTHER */
var38 = 1; /* easy <var_mybtlen:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_offset + var_mybtlen;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_offset = var36;
{
{ /* Inline kernel#Int#- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var45 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var49 = var_i - 1l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_i = var43;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var50 = NEW_core__FlatString(&type_core__FlatString);
{
var51 = core___core__FlatString___full(var50, var_ns, var_new_byte_length, 0l, var_newlen);
}
var = var51;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#hash for (self: FlatString): Int */
long core___core__FlatString___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Int */;
val* var3 /* : nullable Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var_h /* var h: Int */;
long var8 /* : Int */;
long var_i /* var i: Int */;
char* var9 /* : CString */;
char* var_my_items /* var my_items: CString */;
long var10 /* : Int */;
long var_max /* var max: Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
unsigned char var25 /* : Byte */;
unsigned char var27 /* : Byte */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var49 /* : nullable Int */;
long var50 /* : Int */;
{
{ /* Inline abstract_text#Text#hash_cache (self) on <self:FlatString> */
var3 = self->attrs[COLOR_core__abstract_text__Text___hash_cache].val; /* _hash_cache on <self:FlatString> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var1,((val*)NULL)) on <var1:nullable Int> */
var7 = 0; /* incompatible types Int vs. null; cannot be NULL */
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var_h = 5381l;
var8 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_i = var8;
var9 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_my_items = var9;
{
var10 = core__flat___FlatText___last_byte(self);
}
var_max = var10;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_max) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var13 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var14 = var_i <= var_max;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline kernel#Int#<< (var_h,5l) on <var_h:Int> */
var17 = var_h << 5l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var15,var_h) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var20 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var24 = var15 + var_h;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline native#CString#[] (var_my_items,var_i) on <var_my_items:CString> */
var27 = (unsigned char)((int)var_my_items[var_i]);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Byte#to_i (var25) on <var25:Byte> */
var30 = (long)var25;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var18,var28) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var28:Int> isa OTHER */
/* <var28:Int> isa OTHER */
var33 = 1; /* easy <var28:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var37 = var18 + var28;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_h = var31;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var40 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var44 = var_i + 1l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_i = var38;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_text#Text#hash_cache= (self,var_h) on <self:FlatString> */
var46 = (val*)(var_h<<2|1);
self->attrs[COLOR_core__abstract_text__Text___hash_cache].val = var46; /* _hash_cache on <self:FlatString> */
RET_LABEL45:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_text#Text#hash_cache (self) on <self:FlatString> */
var49 = self->attrs[COLOR_core__abstract_text__Text___hash_cache].val; /* _hash_cache on <self:FlatString> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 662);
fatal_exit(1);
}
var50 = (long)(var47)>>2;
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatString#substrings for (self: FlatString): Iterator[FlatText] */
val* core___core__FlatString___core__abstract_text__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_core__flat__FlatSubstringsIter(&type_core__flat__FlatSubstringsIter);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatSubstringsIter__tgt_61d]))(var1, self); /* tgt= on <var1:FlatSubstringsIter>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatSubstringsIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#UnicodeFlatString#full_data for (self: UnicodeFlatString, CString, Int, Int, Int) */
void core__flat___core__flat__UnicodeFlatString___full_data(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: CString */;
long var_byte_length /* var byte_length: Int */;
long var_from /* var from: Int */;
long var_length /* var length: Int */;
{
{ /* Inline kernel#Object#init (self) on <self:UnicodeFlatString> */
RET_LABEL1:(void)0;
}
}
var_items = p0;
var_byte_length = p1;
var_from = p2;
var_length = p3;
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_items; /* _items on <self:UnicodeFlatString> */
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var_length; /* _length on <self:UnicodeFlatString> */
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var_byte_length; /* _byte_length on <self:UnicodeFlatString> */
self->attrs[COLOR_core__flat__FlatString___first_byte].l = var_from; /* _first_byte on <self:UnicodeFlatString> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_from; /* _bytepos on <self:UnicodeFlatString> */
RET_LABEL:;
}
/* method flat#UnicodeFlatString#substring_from for (self: UnicodeFlatString, Int): String */
val* core__flat___core__flat__UnicodeFlatString___core__abstract_text__Text__substring_from(val* self, long p0) {
val* var /* : String */;
long var_from /* var from: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : String */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var_c /* var c: Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var_st /* var st: Int */;
long var23 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
long var_fln /* var fln: Int */;
val* var33 /* : FlatString */;
char* var34 /* : CString */;
char* var36 /* : CString */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
val* var45 /* : FlatString */;
var_from = p0;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:UnicodeFlatString> */
{
{ /* Inline kernel#Int#>= (var_from,var1) on <var_from:Int> */
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
var6 = core___core__FlatString___core__abstract_text__Text__empty(self);
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#<= (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var13 = var_from <= 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = self;
goto RET_LABEL;
} else {
}
{
var14 = core__flat___FlatText___char_to_byte_index(self, var_from);
}
var_c = var14;
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:UnicodeFlatString> */
{
{ /* Inline kernel#Int#- (var_c,var15) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var22 = var_c - var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_st = var16;
{
{ /* Inline abstract_text#FlatText#byte_length (self) on <self:UnicodeFlatString> */
var25 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:UnicodeFlatString> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var23,var_st) on <var23:Int> */
/* Covariant cast for argument 0 (i) <var_st:Int> isa OTHER */
/* <var_st:Int> isa OTHER */
var28 = 1; /* easy <var_st:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var32 = var23 - var_st;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_fln = var26;
var33 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline abstract_text#FlatText#items (self) on <self:UnicodeFlatString> */
var36 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:UnicodeFlatString> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:UnicodeFlatString> */
{
{ /* Inline kernel#Int#- (var37,var_from) on <var37:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var40 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var44 = var37 - var_from;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
var45 = core___core__FlatString___full(var33, var34, var_fln, var_c, var38);
}
var = var45;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#ASCIIFlatString#full_data for (self: ASCIIFlatString, CString, Int, Int, Int) */
void core__flat___core__flat__ASCIIFlatString___full_data(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: CString */;
long var_byte_length /* var byte_length: Int */;
long var_from /* var from: Int */;
long var_length /* var length: Int */;
{
{ /* Inline kernel#Object#init (self) on <self:ASCIIFlatString> */
RET_LABEL1:(void)0;
}
}
var_items = p0;
var_byte_length = p1;
var_from = p2;
var_length = p3;
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_items; /* _items on <self:ASCIIFlatString> */
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var_length; /* _length on <self:ASCIIFlatString> */
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var_byte_length; /* _byte_length on <self:ASCIIFlatString> */
self->attrs[COLOR_core__flat__FlatString___first_byte].l = var_from; /* _first_byte on <self:ASCIIFlatString> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_from; /* _bytepos on <self:ASCIIFlatString> */
RET_LABEL:;
}
/* method flat#ASCIIFlatString#[] for (self: ASCIIFlatString, Int): Char */
uint32_t core__flat___core__flat__ASCIIFlatString___core__abstract_text__Text___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_idx /* var idx: Int */;
short int var1 /* : Bool */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
char* var14 /* : CString */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
unsigned char var23 /* : Byte */;
unsigned char var25 /* : Byte */;
uint32_t var26 /* : Char */;
uint32_t var28 /* : Char */;
var_idx = p0;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:ASCIIFlatString> */
{
{ /* Inline kernel#Int#< (var_idx,var2) on <var_idx:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var_idx < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
{ /* Inline kernel#Int#>= (var_idx,0l) on <var_idx:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var13 = var_idx >= 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var1 = var7;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 705);
fatal_exit(1);
}
var14 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:ASCIIFlatString> */
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:ASCIIFlatString> */
{
{ /* Inline kernel#Int#+ (var_idx,var15) on <var_idx:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_idx + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline native#CString#[] (var14,var16) on <var14:CString> */
var25 = (unsigned char)((int)var14[var16]);
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Byte#ascii (var23) on <var23:Byte> */
var28 = (uint32_t)var23;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#ASCIIFlatString#substring for (self: ASCIIFlatString, Int, Int): String */
val* core__flat___core__flat__ASCIIFlatString___core__abstract_text__Text__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
long var1 /* : Int */;
long var_ln /* var ln: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : ASCIIFlatString */;
char* var67 /* : CString */;
long var68 /* : Int */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
var_from = p0;
var_count = p1;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:ASCIIFlatString> */
var_ln = var1;
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var5 = var_count <= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "";
var8 = core__abstract_text___CString___to_s_full(var7, 0l, 0l);
var6 = var8;
varonce = var6;
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var11 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var_count + var_from;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var9,var_ln) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var18 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var22 = var9 > var_ln;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline kernel#Int#- (var_ln,var_from) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var25 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var29 = var_ln - var_from;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_count = var23;
} else {
}
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var36 = var_count <= 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "";
var40 = core__abstract_text___CString___to_s_full(var39, 0l, 0l);
var38 = var40;
varonce37 = var38;
}
var = var38;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var43 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var47 = var_from < 0l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var50 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var54 = var_count + var_from;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_count = var48;
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var57 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var61 = var_count <= 0l;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "";
var65 = core__abstract_text___CString___to_s_full(var64, 0l, 0l);
var63 = var65;
varonce62 = var63;
}
var = var63;
goto RET_LABEL;
} else {
}
var_from = 0l;
} else {
}
var66 = NEW_core__flat__ASCIIFlatString(&type_core__flat__ASCIIFlatString);
var67 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:ASCIIFlatString> */
var68 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:ASCIIFlatString> */
{
{ /* Inline kernel#Int#+ (var_from,var68) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var68:Int> isa OTHER */
/* <var68:Int> isa OTHER */
var71 = 1; /* easy <var68:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var75 = var_from + var68;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
{
core__flat___core__flat__ASCIIFlatString___full_data(var66, var67, var_count, var69, var_count); /* Direct call flat#ASCIIFlatString#full_data on <var66:ASCIIFlatString>*/
}
var = var66;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#ASCIIFlatString#char_to_byte_index for (self: ASCIIFlatString, Int): Int */
long core__flat___core__flat__ASCIIFlatString___FlatText__char_to_byte_index(val* self, long p0) {
long var /* : Int */;
long var_index /* var index: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
var_index = p0;
var1 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:ASCIIFlatString> */
{
{ /* Inline kernel#Int#+ (var_index,var1) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = var_index + var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#ASCIIFlatString#substring_impl for (self: ASCIIFlatString, Int, Int, Int): String */
val* core__flat___core__flat__ASCIIFlatString___FlatString__substring_impl(val* self, long p0, long p1, long p2) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
long var_end_index /* var end_index: Int */;
val* var1 /* : ASCIIFlatString */;
char* var2 /* : CString */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
var_from = p0;
var_count = p1;
var_end_index = p2;
var1 = NEW_core__flat__ASCIIFlatString(&type_core__flat__ASCIIFlatString);
var2 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:ASCIIFlatString> */
var3 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:ASCIIFlatString> */
{
{ /* Inline kernel#Int#+ (var_from,var3) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var_from + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
core__flat___core__flat__ASCIIFlatString___full_data(var1, var2, var_count, var4, var_count); /* Direct call flat#ASCIIFlatString#full_data on <var1:ASCIIFlatString>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#ASCIIFlatString#fetch_char_at for (self: ASCIIFlatString, Int): Char */
uint32_t core__flat___core__flat__ASCIIFlatString___FlatText__fetch_char_at(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
char* var1 /* : CString */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
unsigned char var7 /* : Byte */;
unsigned char var9 /* : Byte */;
uint32_t var10 /* : Char */;
uint32_t var12 /* : Char */;
var_i = p0;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:ASCIIFlatString> */
var2 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:ASCIIFlatString> */
{
{ /* Inline kernel#Int#+ (var_i,var2) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var_i + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline native#CString#[] (var1,var3) on <var1:CString> */
var9 = (unsigned char)((int)var1[var3]);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Byte#ascii (var7) on <var7:Byte> */
var12 = (uint32_t)var7;
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
/* method flat#FlatStringCharReverseIterator#target for (self: FlatStringCharReverseIterator): FlatString */
val* core__flat___core__flat__FlatStringCharReverseIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___target].val; /* _target on <self:FlatStringCharReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 745);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#target= for (self: FlatStringCharReverseIterator, FlatString) */
void core__flat___core__flat__FlatStringCharReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___target].val = p0; /* _target on <self:FlatStringCharReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharReverseIterator#curr_pos for (self: FlatStringCharReverseIterator): Int */
long core__flat___core__flat__FlatStringCharReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#curr_pos= for (self: FlatStringCharReverseIterator, Int) */
void core__flat___core__flat__FlatStringCharReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringCharReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharReverseIterator#is_ok for (self: FlatStringCharReverseIterator): Bool */
short int core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
{ /* Inline flat#FlatStringCharReverseIterator#curr_pos (self) on <self:FlatStringCharReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var7 = var1 >= 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#item for (self: FlatStringCharReverseIterator): Char */
uint32_t core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatString */;
val* var3 /* : FlatString */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline flat#FlatStringCharReverseIterator#target (self) on <self:FlatStringCharReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___target].val; /* _target on <self:FlatStringCharReverseIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 745);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatStringCharReverseIterator#curr_pos (self) on <self:FlatStringCharReverseIterator> */
var6 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharReverseIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var4); /* [] on <var1:FlatString>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#next for (self: FlatStringCharReverseIterator) */
void core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringCharReverseIterator */;
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
{ /* Inline flat#FlatStringCharReverseIterator#curr_pos (var_) on <var_:FlatStringCharReverseIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l; /* _curr_pos on <var_:FlatStringCharReverseIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatStringCharReverseIterator#curr_pos= (var_,var3) on <var_:FlatStringCharReverseIterator> */
var_->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatStringCharReverseIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatStringCharReverseIterator#index for (self: FlatStringCharReverseIterator): Int */
long core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline flat#FlatStringCharReverseIterator#curr_pos (self) on <self:FlatStringCharReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharReverseIterator#init for (self: FlatStringCharReverseIterator) */
void core__flat___core__flat__FlatStringCharReverseIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringCharReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringCharReverseIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#target for (self: FlatStringCharIterator): FlatString */
val* core__flat___core__flat__FlatStringCharIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharIterator___target].val; /* _target on <self:FlatStringCharIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 762);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#target= for (self: FlatStringCharIterator, FlatString) */
void core__flat___core__flat__FlatStringCharIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringCharIterator___target].val = p0; /* _target on <self:FlatStringCharIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#max for (self: FlatStringCharIterator): Int */
long core__flat___core__flat__FlatStringCharIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharIterator___max].l; /* _max on <self:FlatStringCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#max= for (self: FlatStringCharIterator, Int) */
void core__flat___core__flat__FlatStringCharIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringCharIterator___max].l = p0; /* _max on <self:FlatStringCharIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#curr_pos for (self: FlatStringCharIterator): Int */
long core__flat___core__flat__FlatStringCharIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#curr_pos= for (self: FlatStringCharIterator, Int) */
void core__flat___core__flat__FlatStringCharIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringCharIterator> */
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#init for (self: FlatStringCharIterator) */
void core__flat___core__flat__FlatStringCharIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatString */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringCharIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringCharIterator>*/
}
{
{ /* Inline flat#FlatStringCharIterator#target (self) on <self:FlatStringCharIterator> */
var2 = self->attrs[COLOR_core__flat__FlatStringCharIterator___target].val; /* _target on <self:FlatStringCharIterator> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 762);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = var->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var:FlatString> */
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
{ /* Inline flat#FlatStringCharIterator#max= (self,var4) on <self:FlatStringCharIterator> */
self->attrs[COLOR_core__flat__FlatStringCharIterator___max].l = var4; /* _max on <self:FlatStringCharIterator> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#is_ok for (self: FlatStringCharIterator): Bool */
short int core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
{ /* Inline flat#FlatStringCharIterator#curr_pos (self) on <self:FlatStringCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatStringCharIterator#max (self) on <self:FlatStringCharIterator> */
var6 = self->attrs[COLOR_core__flat__FlatStringCharIterator___max].l; /* _max on <self:FlatStringCharIterator> */
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
/* method flat#FlatStringCharIterator#item for (self: FlatStringCharIterator): Char */
uint32_t core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatString */;
val* var3 /* : FlatString */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline flat#FlatStringCharIterator#target (self) on <self:FlatStringCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringCharIterator___target].val; /* _target on <self:FlatStringCharIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 762);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatStringCharIterator#curr_pos (self) on <self:FlatStringCharIterator> */
var6 = self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharIterator> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var4); /* [] on <var1:FlatString>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharIterator#next for (self: FlatStringCharIterator) */
void core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringCharIterator */;
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
{ /* Inline flat#FlatStringCharIterator#curr_pos (var_) on <var_:FlatStringCharIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l; /* _curr_pos on <var_:FlatStringCharIterator> */
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
{ /* Inline flat#FlatStringCharIterator#curr_pos= (var_,var3) on <var_:FlatStringCharIterator> */
var_->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatStringCharIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatStringCharIterator#index for (self: FlatStringCharIterator): Int */
long core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline flat#FlatStringCharIterator#curr_pos (self) on <self:FlatStringCharIterator> */
var3 = self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharView#[] for (self: FlatStringCharView, Int): Char */
uint32_t core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
uint32_t var4 /* : Char */;
var_index = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatStringCharView> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatStringCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1274);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var_index); /* [] on <var1:Text(FlatString)>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharView#iterator_from for (self: FlatStringCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringCharIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringCharIterator(&type_core__flat__FlatStringCharIterator);
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatStringCharView> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatStringCharView> */
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
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatStringCharIterator__target_61d]))(var1, var2); /* target= on <var1:FlatStringCharIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos_61d]))(var1, var_start); /* curr_pos= on <var1:FlatStringCharIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatStringCharView#reverse_iterator_from for (self: FlatStringCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringCharReverseIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringCharReverseIterator(&type_core__flat__FlatStringCharReverseIterator);
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatStringCharView> */
var4 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatStringCharView> */
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
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__target_61d]))(var1, var2); /* target= on <var1:FlatStringCharReverseIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos_61d]))(var1, var_start); /* curr_pos= on <var1:FlatStringCharReverseIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#Buffer#new for (self: Buffer): Buffer */
val* core__flat___Buffer___new(val* self) {
val* var /* : Buffer */;
val* var1 /* : FlatBuffer */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat#FlatBuffer#init (var1) on <var1:FlatBuffer> */
{
((void(*)(val* self))(var1->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#Buffer#with_cap for (self: Buffer, Int): Buffer */
val* core__flat___Buffer___with_cap(val* self, long p0) {
val* var /* : Buffer */;
long var_i /* var i: Int */;
val* var1 /* : FlatBuffer */;
var_i = p0;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
core___core__FlatBuffer___with_capacity(var1, var_i); /* Direct call flat#FlatBuffer#with_capacity on <var1:FlatBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#chars for (self: FlatBuffer): SequenceRead[Char] */
val* core___core__FlatBuffer___core__abstract_text__Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
val* var1 /* : FlatBufferCharView */;
var1 = NEW_core__flat__FlatBufferCharView(&type_core__flat__FlatBufferCharView);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__StringCharView__target_61d]))(var1, self); /* target= on <var1:FlatBufferCharView>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferCharView>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#capacity for (self: FlatBuffer): Int */
long core___core__FlatBuffer___capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#capacity= for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___capacity_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = p0; /* _capacity on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#substrings for (self: FlatBuffer): Iterator[FlatText] */
val* core___core__FlatBuffer___core__abstract_text__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : FlatSubstringsIter */;
var1 = NEW_core__flat__FlatSubstringsIter(&type_core__flat__FlatSubstringsIter);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatSubstringsIter__tgt_61d]))(var1, self); /* tgt= on <var1:FlatSubstringsIter>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatSubstringsIter>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#reset for (self: FlatBuffer) */
void core___core__FlatBuffer___reset(val* self) {
char* var /* : CString */;
long var1 /* : Int */;
long var3 /* : Int */;
char* var4 /* : CString */;
char* var6 /* : CString */;
char* var_nns /* var nns: CString */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
char* var12 /* : CString */;
long var13 /* : Int */;
var = NULL/*special!*/;
{
{ /* Inline flat#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var3 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline native#CString#new (var,var1) on <var:CString> */
var6 = (char*)nit_alloc(var1);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_nns = var4;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#!= (var7,0l) on <var7:Int> */
var10 = var7 == 0l;
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var12 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var13 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
{
{ /* Inline native#CString#copy_to (var12,var_nns,var13,0l,0l) on <var12:CString> */
memmove(var_nns+0l,var12+0l,var13);
RET_LABEL14:(void)0;
}
}
} else {
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_nns; /* _items on <self:FlatBuffer> */
{
{ /* Inline abstract_text#Buffer#written= (self,0) on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___written].s = 0; /* _written on <self:FlatBuffer> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#rshift_bytes for (self: FlatBuffer, Int, Int) */
void core___core__FlatBuffer___rshift_bytes(val* self, long p0, long p1) {
long var_from /* var from: Int */;
long var_len /* var len: Int */;
char* var /* : CString */;
char* var_oit /* var oit: CString */;
char* var1 /* : CString */;
char* var_nit /* var nit: CString */;
long var2 /* : Int */;
long var_bt /* var bt: Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
char* var35 /* : CString */;
long var36 /* : Int */;
long var38 /* : Int */;
char* var39 /* : CString */;
char* var41 /* : CString */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
var_from = p0;
var_len = p1;
var = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_oit = var;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_nit = var1;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
var_bt = var2;
{
{ /* Inline kernel#Int#+ (var_bt,var_len) on <var_bt:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var5 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var_bt + var_len;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var9 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var3,var7) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var12 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var16 = var3 > var7;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
{ /* Inline flat#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var19 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#* (var17,2l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var22 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var26 = var17 * 2l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var20,2l) on <var20:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var29 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var33 = var20 + 2l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline flat#FlatBuffer#capacity= (self,var27) on <self:FlatBuffer> */
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = var27; /* _capacity on <self:FlatBuffer> */
RET_LABEL34:(void)0;
}
}
var35 = NULL/*special!*/;
{
{ /* Inline flat#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var38 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline native#CString#new (var35,var36) on <var35:CString> */
var41 = (char*)nit_alloc(var36);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_nit = var39;
{
{ /* Inline native#CString#copy_to (var_oit,var_nit,0l,0l,var_from) on <var_oit:CString> */
memmove(var_nit+var_from,var_oit+0l,0l);
RET_LABEL42:(void)0;
}
}
} else {
}
{
{ /* Inline kernel#Int#- (var_bt,var_from) on <var_bt:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var45 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var49 = var_bt - var_from;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_from,var_len) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var52 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var_from + var_len;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline native#CString#copy_to (var_oit,var_nit,var43,var_from,var50) on <var_oit:CString> */
memmove(var_nit+var50,var_oit+var_from,var43);
RET_LABEL57:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#lshift_bytes for (self: FlatBuffer, Int, Int) */
void core___core__FlatBuffer___lshift_bytes(val* self, long p0, long p1) {
long var_from /* var from: Int */;
long var_len /* var len: Int */;
char* var /* : CString */;
char* var_it /* var it: CString */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
var_from = p0;
var_len = p1;
var = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#- (var1,var_from) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var4 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var1 - var_from;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_from,var_len) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var8 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var12 = var_from - var_len;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline native#CString#copy_to (var_it,var_it,var2,var_from,var6) on <var_it:CString> */
memmove(var_it+var6,var_it+var_from,var2);
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#[]= for (self: FlatBuffer, Int, Char) */
void core___core__FlatBuffer___core__abstract_text__Buffer___91d_93d_61d(val* self, long p0, uint32_t p1) {
long var_index /* var index: Int */;
uint32_t var_item /* var item: Char */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
char* var20 /* : CString */;
char* var_it /* var it: CString */;
long var21 /* : Int */;
long var_ip /* var ip: Int */;
uint32_t var22 /* : Char */;
uint32_t var_c /* var c: Char */;
long var23 /* : Int */;
long var_clen /* var clen: Int */;
long var24 /* : Int */;
long var_itemlen /* var itemlen: Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
long var_size_diff /* var size_diff: Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
short int var52 /* : Bool */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
long var60 /* : Int */;
long var62 /* : Int */;
val* var_63 /* var : FlatBuffer */;
long var64 /* : Int */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
var_index = p0;
var_item = p1;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var_index >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
var5 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#<= (var_index,var5) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var12 = var_index <= var5;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var = var6;
} else {
var = var_;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 923);
fatal_exit(1);
}
{
{ /* Inline abstract_text#Buffer#written (self) on <self:FlatBuffer> */
var15 = self->attrs[COLOR_core__abstract_text__Buffer___written].s; /* _written on <self:FlatBuffer> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13){
{
core___core__FlatBuffer___reset(self); /* Direct call flat#FlatBuffer#reset on <self:FlatBuffer>*/
}
} else {
}
var16 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#== (var_index,var16) on <var_index:Int> */
var19 = var_index == var16;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(self, var_item); /* Direct call flat#FlatBuffer#add on <self:FlatBuffer>*/
}
goto RET_LABEL;
} else {
}
var20 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var20;
{
var21 = core___core__CString___char_to_byte_index(var_it, var_index);
}
var_ip = var21;
{
var22 = core___core__CString___char_at(var_it, var_ip);
}
var_c = var22;
{
var23 = core__abstract_text___Char___u8char_len(var_c);
}
var_clen = var23;
{
var24 = core__abstract_text___Char___u8char_len(var_item);
}
var_itemlen = var24;
{
{ /* Inline kernel#Int#- (var_itemlen,var_clen) on <var_itemlen:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var27 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var31 = var_itemlen - var_clen;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_size_diff = var25;
{
{ /* Inline kernel#Int#> (var_size_diff,0l) on <var_size_diff:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var34 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var38 = var_size_diff > 0l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
{
{ /* Inline kernel#Int#+ (var_ip,var_clen) on <var_ip:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var41 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var45 = var_ip + var_clen;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
core___core__FlatBuffer___rshift_bytes(self, var39, var_size_diff); /* Direct call flat#FlatBuffer#rshift_bytes on <self:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel#Int#< (var_size_diff,0l) on <var_size_diff:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var48 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var52 = var_size_diff < 0l;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
{
{ /* Inline kernel#Int#+ (var_ip,var_clen) on <var_ip:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var55 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var59 = var_ip + var_clen;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline kernel#Int#unary - (var_size_diff) on <var_size_diff:Int> */
var62 = -var_size_diff;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
core___core__FlatBuffer___lshift_bytes(self, var53, var60); /* Direct call flat#FlatBuffer#lshift_bytes on <self:FlatBuffer>*/
}
} else {
}
}
var_63 = self;
var64 = var_63->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_63:FlatBuffer> */
{
{ /* Inline kernel#Int#+ (var64,var_size_diff) on <var64:Int> */
/* Covariant cast for argument 0 (i) <var_size_diff:Int> isa OTHER */
/* <var_size_diff:Int> isa OTHER */
var67 = 1; /* easy <var_size_diff:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var71 = var64 + var_size_diff;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_63->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var65; /* _byte_length on <var_63:FlatBuffer> */
{
core__flat___CString___set_char_at(var_it, var_ip, var_item); /* Direct call flat#CString#set_char_at on <var_it:CString>*/
}
RET_LABEL:;
}
/* method flat#FlatBuffer#insert_char for (self: FlatBuffer, Char, Int) */
void core___core__FlatBuffer___core__abstract_text__Buffer__insert_char(val* self, uint32_t p0, long p1) {
uint32_t var_c /* var c: Char */;
long var_pos /* var pos: Int */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
long var21 /* : Int */;
long var_clen /* var clen: Int */;
long var22 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
char* var32 /* : CString */;
char* var_it /* var it: CString */;
long var33 /* : Int */;
long var_shpos /* var shpos: Int */;
val* var_34 /* var : FlatBuffer */;
long var35 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
val* var_46 /* var : FlatBuffer */;
long var47 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
var_c = p0;
var_pos = p1;
{
{ /* Inline kernel#Int#>= (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var_pos >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
{
{ /* Inline abstract_text#FlatText#length (self) on <self:FlatBuffer> */
var7 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var_pos,var5) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var10 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var14 = var_pos <= var5;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
} else {
var = var_;
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 961);
fatal_exit(1);
}
{
{ /* Inline abstract_text#FlatText#length (self) on <self:FlatBuffer> */
var17 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_pos,var15) on <var_pos:Int> */
var20 = var_pos == var15;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(self, var_c); /* Direct call flat#FlatBuffer#add on <self:FlatBuffer>*/
}
goto RET_LABEL;
} else {
}
{
var21 = core__abstract_text___Char___u8char_len(var_c);
}
var_clen = var21;
{
{ /* Inline abstract_text#FlatText#byte_length (self) on <self:FlatBuffer> */
var24 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var22,var_clen) on <var22:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var27 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var31 = var22 + var_clen;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__enlarge(self, var25); /* Direct call flat#FlatBuffer#enlarge on <self:FlatBuffer>*/
}
var32 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var32;
{
var33 = core___core__CString___char_to_byte_index(var_it, var_pos);
}
var_shpos = var33;
{
core___core__FlatBuffer___rshift_bytes(self, var_shpos, var_clen); /* Direct call flat#FlatBuffer#rshift_bytes on <self:FlatBuffer>*/
}
{
core__flat___CString___set_char_at(var_it, var_shpos, var_c); /* Direct call flat#CString#set_char_at on <var_it:CString>*/
}
var_34 = self;
{
{ /* Inline abstract_text#FlatText#length (var_34) on <var_34:FlatBuffer> */
var37 = var_34->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_34:FlatBuffer> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var35,1l) on <var35:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var40 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var44 = var35 + 1l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_text#FlatText#length= (var_34,var38) on <var_34:FlatBuffer> */
var_34->attrs[COLOR_core__abstract_text__FlatText___length].l = var38; /* _length on <var_34:FlatBuffer> */
RET_LABEL45:(void)0;
}
}
var_46 = self;
{
{ /* Inline abstract_text#FlatText#byte_length (var_46) on <var_46:FlatBuffer> */
var49 = var_46->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_46:FlatBuffer> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var47,var_clen) on <var47:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var52 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var47 + var_clen;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline abstract_text#FlatText#byte_length= (var_46,var50) on <var_46:FlatBuffer> */
var_46->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var50; /* _byte_length on <var_46:FlatBuffer> */
RET_LABEL57:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#add for (self: FlatBuffer, Char) */
void core___core__FlatBuffer___core__abstract_text__Buffer__add(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
short int var /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var_clen /* var clen: Int */;
long var4 /* : Int */;
long var_bt /* var bt: Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
char* var9 /* : CString */;
val* var_ /* var : FlatBuffer */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
val* var_18 /* var : FlatBuffer */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
var_c = p0;
{
{ /* Inline abstract_text#Buffer#written (self) on <self:FlatBuffer> */
var2 = self->attrs[COLOR_core__abstract_text__Buffer___written].s; /* _written on <self:FlatBuffer> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
core___core__FlatBuffer___reset(self); /* Direct call flat#FlatBuffer#reset on <self:FlatBuffer>*/
}
} else {
}
{
var3 = core__abstract_text___Char___u8char_len(var_c);
}
var_clen = var3;
var4 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
var_bt = var4;
{
{ /* Inline kernel#Int#+ (var_bt,var_clen) on <var_bt:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var7 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var_bt + var_clen;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__enlarge(self, var5); /* Direct call flat#FlatBuffer#enlarge on <self:FlatBuffer>*/
}
var9 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
{
core__flat___CString___set_char_at(var9, var_bt, var_c); /* Direct call flat#CString#set_char_at on <var9:CString>*/
}
var_ = self;
var10 = var_->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_:FlatBuffer> */
{
{ /* Inline kernel#Int#+ (var10,var_clen) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var13 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var17 = var10 + var_clen;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var11; /* _byte_length on <var_:FlatBuffer> */
var_18 = self;
var19 = var_18->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_18:FlatBuffer> */
{
{ /* Inline kernel#Int#+ (var19,1l) on <var19:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var19 + 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_18->attrs[COLOR_core__abstract_text__FlatText___length].l = var20; /* _length on <var_18:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#empty for (self: FlatBuffer): Buffer */
val* core___core__FlatBuffer___core__abstract_text__Text__empty(val* self) {
val* var /* : Buffer */;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
var1 = NEW_core__Buffer(&type_core__Buffer);
{
var2 = core__flat___Buffer___new(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#enlarge for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___core__abstract_text__Buffer__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var2 /* : Int */;
long var_c /* var c: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
short int var20 /* : Bool */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
long var29 /* : Int */;
long var_bln /* var bln: Int */;
char* var30 /* : CString */;
char* var31 /* : CString */;
char* var33 /* : CString */;
char* var_a /* var a: CString */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
char* var41 /* : CString */;
char* var_it /* var it: CString */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
var_cap = p0;
{
{ /* Inline flat#FlatBuffer#capacity (self) on <self:FlatBuffer> */
var2 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_c = var;
{
{ /* Inline kernel#Int#<= (var_cap,var_c) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var5 = 1; /* easy <var_c:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var6 = var_cap <= var_c;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#<= (var_c,16l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <16l:Int> isa OTHER */
/* <16l:Int> isa OTHER */
var9 = 1; /* easy <16l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var13 = var_c <= 16l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var_c = 16l;
} else {
}
for(;;) {
{
{ /* Inline kernel#Int#<= (var_c,var_cap) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var16 = 1; /* easy <var_cap:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var20 = var_c <= var_cap;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
{ /* Inline kernel#Int#* (var_c,2l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var23 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var27 = var_c * 2l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_c = var21;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_text#Buffer#written= (self,0) on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___written].s = 0; /* _written on <self:FlatBuffer> */
RET_LABEL28:(void)0;
}
}
var29 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
var_bln = var29;
var30 = NULL/*special!*/;
{
{ /* Inline native#CString#new (var30,var_c) on <var30:CString> */
var33 = (char*)nit_alloc(var_c);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_a = var31;
{
{ /* Inline kernel#Int#> (var_bln,0l) on <var_bln:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var36 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var40 = var_bln > 0l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
var41 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var41;
{
{ /* Inline kernel#Int#> (var_bln,0l) on <var_bln:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var44 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var48 = var_bln > 0l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
{
{ /* Inline native#CString#copy_to (var_it,var_a,var_bln,0l,0l) on <var_it:CString> */
memmove(var_a+0l,var_it+0l,var_bln);
RET_LABEL49:(void)0;
}
}
} else {
}
} else {
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_a; /* _items on <self:FlatBuffer> */
{
{ /* Inline flat#FlatBuffer#capacity= (self,var_c) on <self:FlatBuffer> */
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = var_c; /* _capacity on <self:FlatBuffer> */
RET_LABEL50:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#to_s for (self: FlatBuffer): String */
val* core___core__FlatBuffer___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
long var2 /* : Int */;
long var_bln /* var bln: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
char* var6 /* : CString */;
char* var7 /* : CString */;
char* var9 /* : CString */;
val* var10 /* : FlatString */;
char* var11 /* : CString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
{
{ /* Inline abstract_text#Buffer#written= (self,1) on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__Buffer___written].s = 1; /* _written on <self:FlatBuffer> */
RET_LABEL1:(void)0;
}
}
var2 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
var_bln = var2;
{
{ /* Inline kernel#Int#== (var_bln,0l) on <var_bln:Int> */
var5 = var_bln == 0l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var6 = NULL/*special!*/;
{
{ /* Inline native#CString#new (var6,1l) on <var6:CString> */
var9 = (char*)nit_alloc(1l);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var7; /* _items on <self:FlatBuffer> */
} else {
}
var10 = NEW_core__FlatString(&type_core__FlatString);
var11 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var12 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
var13 = core___core__FlatString___full(var10, var11, var_bln, 0l, var12);
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#to_cstring for (self: FlatBuffer): CString */
char* core___core__FlatBuffer___core__abstract_text__Text__to_cstring(val* self) {
char* var /* : CString */;
long var1 /* : Int */;
long var_bln /* var bln: Int */;
char* var2 /* : CString */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
char* var7 /* : CString */;
char* var9 /* : CString */;
char* var_new_native /* var new_native: CString */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
char* var19 /* : CString */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
var_bln = var1;
var2 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_bln,1l) on <var_bln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var_bln + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline native#CString#new (var2,var3) on <var2:CString> */
var9 = (char*)nit_alloc(var3);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_new_native = var7;
{
{ /* Inline native#CString#[]= (var_new_native,var_bln,((unsigned char)0x00)) on <var_new_native:CString> */
var_new_native[var_bln]=(unsigned char)((unsigned char)0x00);
RET_LABEL10:(void)0;
}
}
var11 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#> (var11,0l) on <var11:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var18 = var11 > 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var19 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
{
{ /* Inline native#CString#copy_to (var19,var_new_native,var_bln,0l,0l) on <var19:CString> */
memmove(var_new_native+0l,var19+0l,var_bln);
RET_LABEL20:(void)0;
}
}
} else {
}
var = var_new_native;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#init for (self: FlatBuffer) */
void core___core__FlatBuffer___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method flat#FlatBuffer#with_infos for (self: FlatBuffer, CString, Int, Int, Int) */
void core___core__FlatBuffer___with_infos(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: CString */;
long var_capacity /* var capacity: Int */;
long var_byte_length /* var byte_length: Int */;
long var_length /* var length: Int */;
{
{ /* Inline flat#FlatBuffer#init (self) on <self:FlatBuffer> */
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL1:(void)0;
}
}
var_items = p0;
var_capacity = p1;
var_byte_length = p2;
var_length = p3;
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_items; /* _items on <self:FlatBuffer> */
{
{ /* Inline flat#FlatBuffer#capacity= (self,var_capacity) on <self:FlatBuffer> */
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = var_capacity; /* _capacity on <self:FlatBuffer> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var_byte_length; /* _byte_length on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var_length; /* _length on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#from for (self: FlatBuffer, Text) */
void core___core__FlatBuffer___from(val* self, val* p0) {
val* var_s /* var s: Text */;
char* var /* : CString */;
long var2 /* : Int */;
char* var3 /* : CString */;
char* var5 /* : CString */;
val* var6 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[FlatText] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_i /* var i: FlatText */;
char* var11 /* : CString */;
char* var12 /* : CString */;
long var13 /* : Int */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
{
{ /* Inline flat#FlatBuffer#init (self) on <self:FlatBuffer> */
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL1:(void)0;
}
}
var_s = p0;
var = NULL/*special!*/;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:Text>*/
}
{
{ /* Inline native#CString#new (var,var2) on <var:CString> */
var5 = (char*)nit_alloc(var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var3; /* _items on <self:FlatBuffer> */
{
var6 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_s); /* substrings on <var_s:Text>*/
}
var_ = var6;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[FlatText]>*/
}
if (var9){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[FlatText]>*/
}
var_i = var10;
var11 = var_i->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_i:FlatText> */
var12 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var13 = var_i->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_i:FlatText> */
{
var14 = core__flat___FlatText___first_byte(self);
}
{
{ /* Inline native#CString#copy_to (var11,var12,var13,var14,0l) on <var11:CString> */
memmove(var12+0l,var11+var14,var13);
RET_LABEL15:(void)0;
}
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[FlatText]>*/
}
{
var16 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:Text>*/
}
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var16; /* _byte_length on <self:FlatBuffer> */
{
var17 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text>*/
}
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var17; /* _length on <self:FlatBuffer> */
var18 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = var18; /* _capacity on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#with_capacity for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___with_capacity(val* self, long p0) {
long var_cap /* var cap: Int */;
short int var /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
char* var5 /* : CString */;
char* var6 /* : CString */;
char* var8 /* : CString */;
{
{ /* Inline flat#FlatBuffer#init (self) on <self:FlatBuffer> */
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL1:(void)0;
}
}
var_cap = p0;
{
{ /* Inline kernel#Int#>= (var_cap,0l) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var_cap >= 0l;
var = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1065);
fatal_exit(1);
}
var5 = NULL/*special!*/;
{
{ /* Inline native#CString#new (var5,var_cap) on <var5:CString> */
var8 = (char*)nit_alloc(var_cap);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var6; /* _items on <self:FlatBuffer> */
{
{ /* Inline flat#FlatBuffer#capacity= (self,var_cap) on <self:FlatBuffer> */
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = var_cap; /* _capacity on <self:FlatBuffer> */
RET_LABEL9:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = 0l; /* _byte_length on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#append for (self: FlatBuffer, Text) */
void core___core__FlatBuffer___core__abstract_text__Buffer__append(val* self, val* p0) {
val* var_s /* var s: Text */;
short int var /* : Bool */;
long var1 /* : Int */;
long var_sl /* var sl: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_nln /* var nln: Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
char* var10 /* : CString */;
char* var11 /* : CString */;
long var12 /* : Int */;
long var13 /* : Int */;
val* var15 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[FlatText] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_i /* var i: FlatText */;
val* var_20 /* var : FlatBuffer */;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
var_s = p0;
{
var = ((short int(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_s); /* is_empty on <var_s:Text>*/
}
if (var){
goto RET_LABEL;
} else {
}
{
var1 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:Text>*/
}
var_sl = var1;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#+ (var2,var_sl) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var5 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var2 + var_sl;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_nln = var3;
{
core___core__FlatBuffer___core__abstract_text__Buffer__enlarge(self, var_nln); /* Direct call flat#FlatBuffer#enlarge on <self:FlatBuffer>*/
}
/* <var_s:Text> isa FlatText */
cltype8 = type_core__FlatText.color;
idtype9 = type_core__FlatText.id;
if(cltype8 >= var_s->type->table_size) {
var7 = 0;
} else {
var7 = var_s->type->type_table[cltype8] == idtype9;
}
if (var7){
var10 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:Text(FlatText)> */
var11 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
{
var12 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_s); /* first_byte on <var_s:Text(FlatText)>*/
}
var13 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
{
{ /* Inline native#CString#copy_to (var10,var11,var_sl,var12,var13) on <var10:CString> */
memmove(var11+var13,var10+var12,var_sl);
RET_LABEL14:(void)0;
}
}
} else {
{
var15 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_s); /* substrings on <var_s:Text>*/
}
var_ = var15;
{
var16 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[FlatText]>*/
}
if (var18){
} else {
goto BREAK_label;
}
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[FlatText]>*/
}
var_i = var19;
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(self, var_i); /* Direct call flat#FlatBuffer#append on <self:FlatBuffer>*/
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[FlatText]>*/
}
goto RET_LABEL;
}
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var_nln; /* _byte_length on <self:FlatBuffer> */
var_20 = self;
var21 = var_20->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_20:FlatBuffer> */
{
{ /* Inline abstract_text#FlatText#length (var_s) on <var_s:Text(FlatText)> */
var24 = var_s->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_s:Text(FlatText)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var21,var22) on <var21:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var27 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var31 = var21 + var22;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_20->attrs[COLOR_core__abstract_text__FlatText___length].l = var25; /* _length on <var_20:FlatBuffer> */
RET_LABEL:;
}
/* method flat#FlatBuffer#substring for (self: FlatBuffer, Int, Int): Buffer */
val* core___core__FlatBuffer___core__abstract_text__Text__substring(val* self, long p0, long p1) {
val* var /* : Buffer */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
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
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
val* var42 /* : Buffer */;
val* var43 /* : Buffer */;
char* var44 /* : CString */;
char* var_its /* var its: CString */;
long var45 /* : Int */;
long var_bytefrom /* var bytefrom: Int */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
long var60 /* : Int */;
long var_byteto /* var byteto: Int */;
uint32_t var61 /* : Char */;
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
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
long var84 /* : Int */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
long var90 /* : Int */;
long var_byte_length /* var byte_length: Int */;
char* var91 /* : CString */;
char* var92 /* : CString */;
char* var94 /* : CString */;
char* var_r_items /* var r_items: CString */;
val* var96 /* : FlatBuffer */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel#Int#>= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var_count >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1099);
fatal_exit(1);
}
{
{ /* Inline kernel#Int#< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var11 = var_from < 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var_from = 0l;
} else {
}
{
{ /* Inline kernel#Int#+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var14 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var_from + var_count;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var19 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#> (var12,var19) on <var12:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var26 = var12 > var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var27 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel#Int#- (var27,var_from) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var30 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var34 = var27 - var_from;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_count = var28;
} else {
}
{
{ /* Inline kernel#Int#<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var37 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var41 = var_count <= 0l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
var42 = NEW_core__Buffer(&type_core__Buffer);
{
var43 = core__flat___Buffer___new(var42);
}
var = var43;
goto RET_LABEL;
} else {
}
var44 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_its = var44;
{
var45 = core___core__CString___char_to_byte_index(var_its, var_from);
}
var_bytefrom = var45;
{
{ /* Inline kernel#Int#+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var48 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var52 = var_count + var_from;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var46,1l) on <var46:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var59 = var46 - 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
var60 = core___core__CString___char_to_byte_index(var_its, var53);
}
var_byteto = var60;
{
var61 = core___core__CString___char_at(var_its, var_byteto);
}
{
var62 = core__abstract_text___Char___u8char_len(var61);
}
{
{ /* Inline kernel#Int#- (var62,1l) on <var62:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var69 = var62 - 1l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_byteto,var63) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var63:Int> isa OTHER */
/* <var63:Int> isa OTHER */
var72 = 1; /* easy <var63:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var76 = var_byteto + var63;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_byteto = var70;
{
{ /* Inline kernel#Int#- (var_byteto,var_bytefrom) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var_bytefrom:Int> isa OTHER */
/* <var_bytefrom:Int> isa OTHER */
var79 = 1; /* easy <var_bytefrom:Int> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var83 = var_byteto - var_bytefrom;
var77 = var83;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var77,1l) on <var77:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var86 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var90 = var77 + 1l;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var_byte_length = var84;
var91 = NULL/*special!*/;
{
{ /* Inline native#CString#new (var91,var_byte_length) on <var91:CString> */
var94 = (char*)nit_alloc(var_byte_length);
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_r_items = var92;
{
{ /* Inline native#CString#copy_to (var_its,var_r_items,var_byte_length,var_bytefrom,0l) on <var_its:CString> */
memmove(var_r_items+0l,var_its+var_bytefrom,var_byte_length);
RET_LABEL95:(void)0;
}
}
var96 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
core___core__FlatBuffer___with_infos(var96, var_r_items, var_byte_length, var_byte_length, var_count); /* Direct call flat#FlatBuffer#with_infos on <var96:FlatBuffer>*/
}
var = var96;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBuffer#remove_at for (self: FlatBuffer, Int, nullable Int) */
void core___core__FlatBuffer___core__abstract_text__Buffer__remove_at(val* self, long p0, val* p1) {
long var_p /* var p: Int */;
val* var_len /* var len: nullable Int */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
char* var9 /* : CString */;
char* var_its /* var its: CString */;
long var10 /* : Int */;
long var_bst /* var bst: Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var23 /* : Int */;
long var_bend /* var bend: Int */;
uint32_t var24 /* : Char */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
long var_blen /* var blen: Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
val* var_ /* var : FlatBuffer */;
long var47 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
val* var_58 /* var : FlatBuffer */;
long var59 /* : Int */;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
long var69 /* : Int */;
var_p = p0;
var_len = p1;
if (var_len == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_len,((val*)NULL)) on <var_len:nullable Int> */
var3 = 0; /* incompatible types Int vs. null; cannot be NULL */
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
var4 = (val*)(1l<<2|1);
var_len = var4;
} else {
}
{
{ /* Inline kernel#Int#== (var_len,0l) on <var_len:nullable Int(Int)> */
var8 = (long)(var_len)>>2;
var7 = var8 == 0l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_its = var9;
{
var10 = core__flat___FlatText___char_to_byte_index(self, var_p);
}
var_bst = var10;
{
{ /* Inline kernel#Int#+ (var_p,var_len) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_len:nullable Int(Int)> isa OTHER */
/* <var_len:nullable Int(Int)> isa OTHER */
var13 = 1; /* easy <var_len:nullable Int(Int)> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = var_len == NULL ? "null" : (((long)var_len&3)?type_info[((long)var_len&3)]:var_len->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = (long)(var_len)>>2;
var15 = var_p + var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var11,1l) on <var11:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var22 = var11 - 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
var23 = core__flat___FlatText___char_to_byte_index(self, var16);
}
var_bend = var23;
{
var24 = core___core__CString___char_at(var_its, var_bend);
}
{
var25 = core__abstract_text___Char___u8char_len(var24);
}
{
{ /* Inline kernel#Int#+ (var_bend,var25) on <var_bend:Int> */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var28 = 1; /* easy <var25:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var32 = var_bend + var25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_bend = var26;
{
{ /* Inline kernel#Int#- (var_bend,var_bst) on <var_bend:Int> */
/* Covariant cast for argument 0 (i) <var_bst:Int> isa OTHER */
/* <var_bst:Int> isa OTHER */
var35 = 1; /* easy <var_bst:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var39 = var_bend - var_bst;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_blen = var33;
{
{ /* Inline kernel#Int#- (var_bend,var_bst) on <var_bend:Int> */
/* Covariant cast for argument 0 (i) <var_bst:Int> isa OTHER */
/* <var_bst:Int> isa OTHER */
var42 = 1; /* easy <var_bst:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var46 = var_bend - var_bst;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
core___core__FlatBuffer___lshift_bytes(self, var_bend, var40); /* Direct call flat#FlatBuffer#lshift_bytes on <self:FlatBuffer>*/
}
var_ = self;
{
{ /* Inline abstract_text#FlatText#byte_length (var_) on <var_:FlatBuffer> */
var49 = var_->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_:FlatBuffer> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var47,var_blen) on <var47:Int> */
/* Covariant cast for argument 0 (i) <var_blen:Int> isa OTHER */
/* <var_blen:Int> isa OTHER */
var52 = 1; /* easy <var_blen:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var56 = var47 - var_blen;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline abstract_text#FlatText#byte_length= (var_,var50) on <var_:FlatBuffer> */
var_->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var50; /* _byte_length on <var_:FlatBuffer> */
RET_LABEL57:(void)0;
}
}
var_58 = self;
{
{ /* Inline abstract_text#FlatText#length (var_58) on <var_58:FlatBuffer> */
var61 = var_58->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_58:FlatBuffer> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var59,var_len) on <var59:Int> */
/* Covariant cast for argument 0 (i) <var_len:nullable Int(Int)> isa OTHER */
/* <var_len:nullable Int(Int)> isa OTHER */
var64 = 1; /* easy <var_len:nullable Int(Int)> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = var_len == NULL ? "null" : (((long)var_len&3)?type_info[((long)var_len&3)]:var_len->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var68 = (long)(var_len)>>2;
var69 = var59 - var68;
var62 = var69;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline abstract_text#FlatText#length= (var_58,var62) on <var_58:FlatBuffer> */
var_58->attrs[COLOR_core__abstract_text__FlatText___length].l = var62; /* _length on <var_58:FlatBuffer> */
RET_LABEL70:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBuffer#upper for (self: FlatBuffer) */
void core___core__FlatBuffer___core__abstract_text__Buffer__upper(val* self) {
short int var /* : Bool */;
short int var2 /* : Bool */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
uint32_t var8 /* : Char */;
uint32_t var9 /* : Char */;
long var10 /* : Int */;
{
{ /* Inline abstract_text#Buffer#written (self) on <self:FlatBuffer> */
var2 = self->attrs[COLOR_core__abstract_text__Buffer___written].s; /* _written on <self:FlatBuffer> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
core___core__FlatBuffer___reset(self); /* Direct call flat#FlatBuffer#reset on <self:FlatBuffer>*/
}
} else {
}
var_i = 0l;
var3 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
var_ = var3;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var6 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_i < var_;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
} else {
goto BREAK_label;
}
{
var8 = core__flat___FlatText___core__abstract_text__Text___91d_93d(self, var_i);
}
{
var9 = core___core__Char___to_upper(var8);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer___91d_93d_61d(self, var_i, var9); /* Direct call flat#FlatBuffer#[]= on <self:FlatBuffer>*/
}
{
var10 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var10;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flat#FlatBuffer#lower for (self: FlatBuffer) */
void core___core__FlatBuffer___core__abstract_text__Buffer__lower(val* self) {
short int var /* : Bool */;
short int var2 /* : Bool */;
long var_i /* var i: Int */;
long var3 /* : Int */;
long var_ /* var : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
uint32_t var8 /* : Char */;
uint32_t var9 /* : Char */;
long var10 /* : Int */;
{
{ /* Inline abstract_text#Buffer#written (self) on <self:FlatBuffer> */
var2 = self->attrs[COLOR_core__abstract_text__Buffer___written].s; /* _written on <self:FlatBuffer> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
core___core__FlatBuffer___reset(self); /* Direct call flat#FlatBuffer#reset on <self:FlatBuffer>*/
}
} else {
}
var_i = 0l;
var3 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
var_ = var3;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var6 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_i < var_;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
} else {
goto BREAK_label;
}
{
var8 = core__flat___FlatText___core__abstract_text__Text___91d_93d(self, var_i);
}
{
var9 = core___core__Char___to_lower(var8);
}
{
core___core__FlatBuffer___core__abstract_text__Buffer___91d_93d_61d(self, var_i, var9); /* Direct call flat#FlatBuffer#[]= on <self:FlatBuffer>*/
}
{
var10 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var10;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flat#FlatBufferCharReverseIterator#target for (self: FlatBufferCharReverseIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferCharReverseIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___target].val; /* _target on <self:FlatBufferCharReverseIterator> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1230);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#target= for (self: FlatBufferCharReverseIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferCharReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___target].val = p0; /* _target on <self:FlatBufferCharReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharReverseIterator#curr_pos for (self: FlatBufferCharReverseIterator): Int */
long core__flat___core__flat__FlatBufferCharReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#curr_pos= for (self: FlatBufferCharReverseIterator, Int) */
void core__flat___core__flat__FlatBufferCharReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
RET_LABEL:;
}
/* method flat#FlatBufferCharReverseIterator#index for (self: FlatBufferCharReverseIterator): Int */
long core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{
{ /* Inline flat#FlatBufferCharReverseIterator#curr_pos (self) on <self:FlatBufferCharReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#is_ok for (self: FlatBufferCharReverseIterator): Bool */
short int core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
{ /* Inline flat#FlatBufferCharReverseIterator#curr_pos (self) on <self:FlatBufferCharReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var7 = var1 >= 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#item for (self: FlatBufferCharReverseIterator): Char */
uint32_t core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatBuffer */;
val* var3 /* : FlatBuffer */;
long var4 /* : Int */;
long var6 /* : Int */;
uint32_t var7 /* : Char */;
{
{ /* Inline flat#FlatBufferCharReverseIterator#target (self) on <self:FlatBufferCharReverseIterator> */
var3 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___target].val; /* _target on <self:FlatBufferCharReverseIterator> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1230);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline flat#FlatBufferCharReverseIterator#curr_pos (self) on <self:FlatBufferCharReverseIterator> */
var6 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
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
/* method flat#FlatBufferCharReverseIterator#item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharReverseIterator#next for (self: FlatBufferCharReverseIterator) */
void core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferCharReverseIterator */;
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
{ /* Inline flat#FlatBufferCharReverseIterator#curr_pos (var_) on <var_:FlatBufferCharReverseIterator> */
var2 = var_->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l; /* _curr_pos on <var_:FlatBufferCharReverseIterator> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline flat#FlatBufferCharReverseIterator#curr_pos= (var_,var3) on <var_:FlatBufferCharReverseIterator> */
var_->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l = var3; /* _curr_pos on <var_:FlatBufferCharReverseIterator> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method flat#FlatBufferCharReverseIterator#init for (self: FlatBufferCharReverseIterator) */
void core__flat___core__flat__FlatBufferCharReverseIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferCharReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferCharReverseIterator>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#[] for (self: FlatBufferCharView, Int): Char */
uint32_t core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
val* var3 /* : Text */;
uint32_t var4 /* : Char */;
var_index = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1274);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core__flat___FlatText___core__abstract_text__Text___91d_93d(var1, var_index);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharView#[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method flat#FlatBufferCharView#[]= for (self: FlatBufferCharView, Int, Char) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, uint32_t p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var_index /* var index: Int */;
uint32_t var_item /* var item: Char */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : Text */;
val* var23 /* : Text */;
/* Covariant cast for argument 1 (item) <p1:Char> isa Char */
/* <p1:Char> isa Char */
var = 1; /* easy <p1:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1251);
fatal_exit(1);
}
var_index = p0;
var_item = p1;
{
{ /* Inline kernel#Int#>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var8 = var_index >= 0l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
var9 = core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__length(self);
}
{
{ /* Inline kernel#Int#<= (var_index,var9) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var16 = var_index <= var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var1 = var10;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1253);
fatal_exit(1);
}
{
var17 = core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__length(self);
}
{
{ /* Inline kernel#Int#== (var_index,var17) on <var_index:Int> */
var20 = var_index == var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(self, var_item); /* Direct call flat#FlatBufferCharView#add on <self:FlatBufferCharView>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var23 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1274);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer___91d_93d_61d(var21, var_index, var_item); /* Direct call flat#FlatBuffer#[]= on <var21:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p1)>>2);
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call flat#FlatBufferCharView#[]= on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method flat#FlatBufferCharView#push for (self: FlatBufferCharView, Char) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push(val* self, uint32_t p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
val* var3 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var = 1; /* easy <p0:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1261);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1274);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var1, var_c); /* Direct call flat#FlatBuffer#add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#push for (self: Sequence[nullable Object], nullable Object) */
void VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push(self, var); /* Direct call flat#FlatBufferCharView#push on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method flat#FlatBufferCharView#add for (self: FlatBufferCharView, Char) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(val* self, uint32_t p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
val* var3 /* : Text */;
/* Covariant cast for argument 0 (c) <p0:Char> isa Char */
/* <p0:Char> isa Char */
var = 1; /* easy <p0:Char> isa Char*/
if (unlikely(!var)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1266);
fatal_exit(1);
}
var_c = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var3 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1274);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var1, var_c); /* Direct call flat#FlatBuffer#add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(self, var); /* Direct call flat#FlatBufferCharView#add on <self:SimpleCollection[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method flat#FlatBufferCharView#enlarge for (self: FlatBufferCharView, Int) */
void core__flat___core__flat__FlatBufferCharView___enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
val* var /* : Text */;
val* var2 /* : Text */;
var_cap = p0;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var2 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1274);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__enlarge(var, var_cap); /* Direct call flat#FlatBuffer#enlarge on <var:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#append for (self: FlatBufferCharView, Collection[Char]) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_s /* var s: Collection[Char] */;
long var1 /* : Int */;
long var_s_length /* var s_length: Int */;
val* var2 /* : Text */;
val* var4 /* : Text */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : Text */;
val* var18 /* : Text */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var_ /* var : Collection[Char] */;
val* var27 /* : Iterator[nullable Object] */;
val* var_28 /* var : Iterator[Char] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
uint32_t var31 /* : Char */;
uint32_t var_i /* var i: Char */;
val* var32 /* : Text */;
val* var34 /* : Text */;
/* Covariant cast for argument 0 (s) <p0:Collection[Char]> isa Collection[Char] */
/* <p0:Collection[Char]> isa Collection[Char] */
var = 1; /* easy <p0:Collection[Char]> isa Collection[Char]*/
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[Char]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1276);
fatal_exit(1);
}
var_s = p0;
{
var1 = ((long(*)(val* self))((((long)var_s&3)?class_info[((long)var_s&3)]:var_s->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Collection[Char]>*/
}
var_s_length = var1;
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
{ /* Inline flat#FlatBuffer#capacity (var2) on <var2:Text(FlatBuffer)> */
var7 = var2->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <var2:Text(FlatBuffer)> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((long(*)(val* self))((((long)var_s&3)?class_info[((long)var_s&3)]:var_s->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Collection[Char]>*/
}
{
{ /* Inline kernel#Int#< (var5,var8) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var15 = var5 < var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var18 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1274);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = var16->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var16:Text(FlatBuffer)> */
{
{ /* Inline kernel#Int#+ (var_s_length,var19) on <var_s_length:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var_s_length + var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
core__flat___core__flat__FlatBufferCharView___enlarge(self, var20); /* Direct call flat#FlatBufferCharView#enlarge on <self:FlatBufferCharView>*/
}
} else {
}
var_ = var_s;
{
var27 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Char]>*/
}
var_28 = var27;
for(;;) {
{
var29 = ((short int(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_28); /* is_ok on <var_28:Iterator[Char]>*/
}
if (var29){
} else {
goto BREAK_label;
}
{
var30 = ((val*(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_28); /* item on <var_28:Iterator[Char]>*/
}
var31 = (uint32_t)((long)(var30)>>2);
var_i = var31;
{
{ /* Inline abstract_text#StringCharView#target (self) on <self:FlatBufferCharView> */
var34 = self->attrs[COLOR_core__abstract_text__StringCharView___target].val; /* _target on <self:FlatBufferCharView> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1274);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var32, var_i); /* Direct call flat#FlatBuffer#add on <var32:Text(FlatBuffer)>*/
}
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_28); /* next on <var_28:Iterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_28); /* finish on <var_28:Iterator[Char]>*/
}
RET_LABEL:;
}
/* method flat#FlatBufferCharView#iterator_from for (self: FlatBufferCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferCharIterator */;
val* var2 /* : Text */;
val* var4 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferCharIterator(&type_core__flat__FlatBufferCharIterator);
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
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatBufferCharIterator__target_61d]))(var1, var2); /* target= on <var1:FlatBufferCharIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos_61d]))(var1, var_pos); /* curr_pos= on <var1:FlatBufferCharIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
