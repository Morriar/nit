#include "core__flat.sep.0.h"
/* method flat$FlatSubstringsIter$tgt for (self: FlatSubstringsIter): nullable FlatText */
val* core__flat___core__flat__FlatSubstringsIter___tgt(val* self) {
val* var /* : nullable FlatText */;
val* var1 /* : nullable FlatText */;
var1 = self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val; /* _tgt on <self:FlatSubstringsIter> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatSubstringsIter$tgt= for (self: FlatSubstringsIter, nullable FlatText) */
void core__flat___core__flat__FlatSubstringsIter___tgt_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatSubstringsIter___tgt].val = p0; /* _tgt on <self:FlatSubstringsIter> */
RET_LABEL:;
}
/* method flat$FlatSubstringsIter$item for (self: FlatSubstringsIter): FlatText */
val* core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatText */;
short int var1 /* : Bool */;
val* var2 /* : nullable FlatText */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(self); /* is_ok on <self:FlatSubstringsIter>*/
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 28);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatSubstringsIter__tgt]))(self); /* tgt on <self:FlatSubstringsIter>*/
}
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 29);
fatal_exit(1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatSubstringsIter$is_ok for (self: FlatSubstringsIter): Bool */
short int core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable FlatText */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatSubstringsIter__tgt]))(self); /* tgt on <self:FlatSubstringsIter>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable FlatText>*/
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatSubstringsIter$next for (self: FlatSubstringsIter) */
void core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__next(val* self) {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__flat__FlatSubstringsIter__tgt_61d]))(self, ((val*)NULL)); /* tgt= on <self:FlatSubstringsIter>*/
}
RET_LABEL:;
}
/* method flat$FlatSubstringsIter$init for (self: FlatSubstringsIter) */
void core__flat___core__flat__FlatSubstringsIter___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatSubstringsIter___core__kernel__Object__init]))(self); /* init on <self:FlatSubstringsIter>*/
}
RET_LABEL:;
}
/* method flat$FlatText$first_byte for (self: FlatText): Int */
long core__flat___FlatText___first_byte(val* self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatText$last_byte for (self: FlatText): Int */
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
{ /* Inline kernel$Int$+ (var1,var2) on <var1:Int> */
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
{ /* Inline kernel$Int$- (var3,1l) on <var3:Int> */
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
/* method flat$FlatText$position for (self: FlatText): Int */
long core__flat___FlatText___position(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatText$position= for (self: FlatText, Int) */
void core__flat___FlatText___position_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatText___position].l = p0; /* _position on <self:FlatText> */
RET_LABEL:;
}
/* method flat$FlatText$bytepos for (self: FlatText): Int */
long core__flat___FlatText___bytepos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatText___bytepos].l; /* _bytepos on <self:FlatText> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatText$bytepos= for (self: FlatText, Int) */
void core__flat___FlatText___bytepos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatText___bytepos].l = p0; /* _bytepos on <self:FlatText> */
RET_LABEL:;
}
/* method flat$FlatText$char_to_byte_index for (self: FlatText, Int): Int */
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
{ /* Inline kernel$Int$- (var_index,var1) on <var_index:Int> */
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
{ /* Inline kernel$Int$== (var_dpos,1l) on <var_dpos:Int> */
var10 = var_dpos == 1l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline native$CString$[] (var_its,var_b) on <var_its:CString> */
var13 = (unsigned char)((int)var_its[var_b]);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline math$Byte$& (var11,((unsigned char)0x80)) on <var11:Byte> */
var16 = var11 & ((unsigned char)0x80);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var14,((unsigned char)0x00)) on <var14:Byte> */
var19 = var14 == ((unsigned char)0x00);
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline kernel$Int$+ (var_b,1l) on <var_b:Int> */
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
var27 = core___core__CString___length_of_char_at(var_its, var_b);
{
{ /* Inline kernel$Int$+ (var_b,var27) on <var_b:Int> */
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
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var37 = -1l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_dpos,var35) on <var_dpos:Int> */
var40 = var_dpos == var35;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
{ /* Inline kernel$Int$- (var_b,1l) on <var_b:Int> */
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
var48 = core___core__CString___find_beginning_of_char_at(var_its, var41);
var_b = var48;
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_b; /* _bytepos on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
var = var_b;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_dpos,0l) on <var_dpos:Int> */
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
{ /* Inline kernel$Int$- (var_ln,1l) on <var_ln:Int> */
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
{ /* Inline kernel$Int$- (var54,var_index) on <var54:Int> */
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
{ /* Inline kernel$Int$- (var_pos,var_index) on <var_pos:Int> */
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
var75 = core___core__Int___abs(var68);
var_delta_cache = var75;
var_min = var_delta_begin;
{
{ /* Inline kernel$Int$< (var_delta_cache,var_min) on <var_delta_cache:Int> */
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
{ /* Inline kernel$Int$< (var_delta_end,var_min) on <var_delta_end:Int> */
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
{ /* Inline kernel$Int$== (var_min,var_delta_cache) on <var_min:Int> */
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
{ /* Inline kernel$Int$== (var_min,var_delta_begin) on <var_min:Int> */
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
var98 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatText>*/
}
var99 = core___core__CString___find_beginning_of_char_at(var_its, var98);
var_ns_i = var99;
var100 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
{
{ /* Inline kernel$Int$- (var100,1l) on <var100:Int> */
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
var108 = core___core__CString___char_to_byte_index_cached(var_its, var_index, var_my_i, var_ns_i);
var_ns_i = var108;
self->attrs[COLOR_core__flat__FlatText___position].l = var_index; /* _position on <self:FlatText> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = var_ns_i; /* _bytepos on <self:FlatText> */
var = var_ns_i;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatText$chars_to_html_escape for (self: FlatText): Int */
long core__flat___FlatText___chars_to_html_escape(val* self) {
long var /* : Int */;
char* var1 /* : CString */;
char* var_its /* var its: CString */;
long var2 /* : Int */;
long var_max /* var max: Int */;
long var3 /* : Int */;
long var_pos /* var pos: Int */;
long var_endlen /* var endlen: Int */;
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
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatText>*/
}
var_max = var2;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_pos = var3;
var_endlen = 0l;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_pos,var_max) on <var_pos:Int> */
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
{ /* Inline native$CString$[] (var_its,var_pos) on <var_its:CString> */
var10 = (unsigned char)((int)var_its[var_pos]);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_c = var8;
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x3c)) on <var_c:Byte> */
var13 = var_c == ((unsigned char)0x3c);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline kernel$Int$+ (var_endlen,3l) on <var_endlen:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var16 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var_endlen + 3l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_endlen = var14;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x3e)) on <var_c:Byte> */
var23 = var_c == ((unsigned char)0x3e);
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline kernel$Int$+ (var_endlen,3l) on <var_endlen:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var26 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var30 = var_endlen + 3l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_endlen = var24;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x26)) on <var_c:Byte> */
var33 = var_c == ((unsigned char)0x26);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline kernel$Int$+ (var_endlen,4l) on <var_endlen:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var36 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var40 = var_endlen + 4l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_endlen = var34;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x22)) on <var_c:Byte> */
var43 = var_c == ((unsigned char)0x22);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline kernel$Int$+ (var_endlen,4l) on <var_endlen:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var46 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_endlen + 4l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_endlen = var44;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x27)) on <var_c:Byte> */
var53 = var_c == ((unsigned char)0x27);
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
{ /* Inline kernel$Int$+ (var_endlen,4l) on <var_endlen:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var56 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var60 = var_endlen + 4l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var_endlen = var54;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x2f)) on <var_c:Byte> */
var63 = var_c == ((unsigned char)0x2f);
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
{
{ /* Inline kernel$Int$+ (var_endlen,4l) on <var_endlen:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var66 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var70 = var_endlen + 4l;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var_endlen = var64;
} else {
}
}
}
}
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var73 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var77 = var_pos + 1l;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var_pos = var71;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_endlen;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatText$html_escape for (self: FlatText): String */
val* core__flat___FlatText___core__abstract_text__Text__html_escape(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_extra /* var extra: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
char* var6 /* : CString */;
char* var_its /* var its: CString */;
long var7 /* : Int */;
long var_max /* var max: Int */;
long var8 /* : Int */;
long var_pos /* var pos: Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var_nlen /* var nlen: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var14 /* : CString */;
char* var15 /* : CString */;
char* var16 /* : CString */;
char* var18 /* : CString */;
char* var_nits /* var nits: CString */;
long var_outpos /* var outpos: Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
unsigned char var26 /* : Byte */;
unsigned char var28 /* : Byte */;
unsigned char var_c /* var c: Byte */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
long var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
long var82 /* : Int */;
long var84 /* : Int */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
long var90 /* : Int */;
long var92 /* : Int */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
const char* var_class_name97;
long var98 /* : Int */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
long var103 /* : Int */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
long var109 /* : Int */;
long var111 /* : Int */;
short int var113 /* : Bool */;
int cltype114;
int idtype115;
const char* var_class_name116;
long var117 /* : Int */;
long var119 /* : Int */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
long var125 /* : Int */;
long var127 /* : Int */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
long var133 /* : Int */;
long var135 /* : Int */;
short int var137 /* : Bool */;
int cltype138;
int idtype139;
const char* var_class_name140;
long var141 /* : Int */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
long var146 /* : Int */;
short int var148 /* : Bool */;
int cltype149;
int idtype150;
const char* var_class_name151;
long var152 /* : Int */;
long var154 /* : Int */;
short int var156 /* : Bool */;
int cltype157;
int idtype158;
const char* var_class_name159;
long var160 /* : Int */;
long var162 /* : Int */;
short int var164 /* : Bool */;
int cltype165;
int idtype166;
const char* var_class_name167;
long var168 /* : Int */;
long var170 /* : Int */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
const char* var_class_name175;
long var176 /* : Int */;
long var178 /* : Int */;
short int var180 /* : Bool */;
int cltype181;
int idtype182;
const char* var_class_name183;
long var184 /* : Int */;
short int var185 /* : Bool */;
short int var187 /* : Bool */;
long var189 /* : Int */;
short int var191 /* : Bool */;
int cltype192;
int idtype193;
const char* var_class_name194;
long var195 /* : Int */;
long var197 /* : Int */;
short int var199 /* : Bool */;
int cltype200;
int idtype201;
const char* var_class_name202;
long var203 /* : Int */;
long var205 /* : Int */;
short int var207 /* : Bool */;
int cltype208;
int idtype209;
const char* var_class_name210;
long var211 /* : Int */;
long var213 /* : Int */;
short int var215 /* : Bool */;
int cltype216;
int idtype217;
const char* var_class_name218;
long var219 /* : Int */;
long var221 /* : Int */;
short int var223 /* : Bool */;
int cltype224;
int idtype225;
const char* var_class_name226;
long var227 /* : Int */;
short int var228 /* : Bool */;
short int var230 /* : Bool */;
long var232 /* : Int */;
short int var234 /* : Bool */;
int cltype235;
int idtype236;
const char* var_class_name237;
long var238 /* : Int */;
long var240 /* : Int */;
short int var242 /* : Bool */;
int cltype243;
int idtype244;
const char* var_class_name245;
long var246 /* : Int */;
long var248 /* : Int */;
short int var250 /* : Bool */;
int cltype251;
int idtype252;
const char* var_class_name253;
long var254 /* : Int */;
long var256 /* : Int */;
short int var258 /* : Bool */;
int cltype259;
int idtype260;
const char* var_class_name261;
long var262 /* : Int */;
long var264 /* : Int */;
short int var266 /* : Bool */;
int cltype267;
int idtype268;
const char* var_class_name269;
long var270 /* : Int */;
long var272 /* : Int */;
short int var274 /* : Bool */;
int cltype275;
int idtype276;
const char* var_class_name277;
long var278 /* : Int */;
long var279 /* : Int */;
short int var281 /* : Bool */;
int cltype282;
int idtype283;
const char* var_class_name284;
long var285 /* : Int */;
static val* varoncenew286;
static int varoncenew286_guard;
val* var287 /* : FlatString */;
val* var288 /* : FlatString */;
val* var289 /* : FlatString */;
val* var_s /* var s: FlatString */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__chars_to_html_escape]))(self); /* chars_to_html_escape on <self:FlatText>*/
}
var_extra = var1;
{
{ /* Inline kernel$Int$== (var_extra,0l) on <var_extra:Int> */
var4 = var_extra == 0l;
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
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatText>*/
}
var_max = var7;
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_pos = var8;
var9 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatText> */
{
{ /* Inline kernel$Int$+ (var_extra,var9) on <var_extra:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var_extra + var9;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_nlen = var10;
if (likely(varoncenew_guard)) {
var14 = varoncenew;
} else {
var15 = NULL/*special!*/;
var14 = var15;
varoncenew = var14;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var14,var_nlen) on <var14:CString> */
var18 = (char*)nit_alloc(var_nlen);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_nits = var16;
var_outpos = 0l;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_pos,var_max) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var21 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var25 = var_pos <= var_max;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline native$CString$[] (var_its,var_pos) on <var_its:CString> */
var28 = (unsigned char)((int)var_its[var_pos]);
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_c = var26;
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x3c)) on <var_c:Byte> */
var31 = var_c == ((unsigned char)0x3c);
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline native$CString$[]= (var_nits,var_outpos,((unsigned char)0x26)) on <var_nits:CString> */
var_nits[var_outpos]=(unsigned char)((unsigned char)0x26);
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var39 = var_outpos + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var33,((unsigned char)0x6c)) on <var_nits:CString> */
var_nits[var33]=(unsigned char)((unsigned char)0x6c);
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,2l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var43 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var47 = var_outpos + 2l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var41,((unsigned char)0x74)) on <var_nits:CString> */
var_nits[var41]=(unsigned char)((unsigned char)0x74);
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,3l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var51 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var55 = var_outpos + 3l;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var49,((unsigned char)0x3b)) on <var_nits:CString> */
var_nits[var49]=(unsigned char)((unsigned char)0x3b);
RET_LABEL56:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,4l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var59 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var63 = var_outpos + 4l;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var_outpos = var57;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x3e)) on <var_c:Byte> */
var66 = var_c == ((unsigned char)0x3e);
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (var64){
{
{ /* Inline native$CString$[]= (var_nits,var_outpos,((unsigned char)0x26)) on <var_nits:CString> */
var_nits[var_outpos]=(unsigned char)((unsigned char)0x26);
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var74 = var_outpos + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var68,((unsigned char)0x67)) on <var_nits:CString> */
var_nits[var68]=(unsigned char)((unsigned char)0x67);
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,2l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var78 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var82 = var_outpos + 2l;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var76,((unsigned char)0x74)) on <var_nits:CString> */
var_nits[var76]=(unsigned char)((unsigned char)0x74);
RET_LABEL83:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,3l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var86 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var90 = var_outpos + 3l;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var84,((unsigned char)0x3b)) on <var_nits:CString> */
var_nits[var84]=(unsigned char)((unsigned char)0x3b);
RET_LABEL91:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,4l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var94 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name97 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name97);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var98 = var_outpos + 4l;
var92 = var98;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_outpos = var92;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x26)) on <var_c:Byte> */
var101 = var_c == ((unsigned char)0x26);
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
if (var99){
{
{ /* Inline native$CString$[]= (var_nits,var_outpos,((unsigned char)0x26)) on <var_nits:CString> */
var_nits[var_outpos]=(unsigned char)((unsigned char)0x26);
RET_LABEL102:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var105 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var109 = var_outpos + 1l;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var103,((unsigned char)0x61)) on <var_nits:CString> */
var_nits[var103]=(unsigned char)((unsigned char)0x61);
RET_LABEL110:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,2l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var113 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var113)) {
var_class_name116 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name116);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var117 = var_outpos + 2l;
var111 = var117;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var111,((unsigned char)0x6d)) on <var_nits:CString> */
var_nits[var111]=(unsigned char)((unsigned char)0x6d);
RET_LABEL118:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,3l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var121 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var121)) {
var_class_name124 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var125 = var_outpos + 3l;
var119 = var125;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var119,((unsigned char)0x70)) on <var_nits:CString> */
var_nits[var119]=(unsigned char)((unsigned char)0x70);
RET_LABEL126:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,4l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var129 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var129)) {
var_class_name132 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var133 = var_outpos + 4l;
var127 = var133;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var127,((unsigned char)0x3b)) on <var_nits:CString> */
var_nits[var127]=(unsigned char)((unsigned char)0x3b);
RET_LABEL134:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,5l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var137 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var137)) {
var_class_name140 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name140);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var141 = var_outpos + 5l;
var135 = var141;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
var_outpos = var135;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x22)) on <var_c:Byte> */
var144 = var_c == ((unsigned char)0x22);
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
if (var142){
{
{ /* Inline native$CString$[]= (var_nits,var_outpos,((unsigned char)0x26)) on <var_nits:CString> */
var_nits[var_outpos]=(unsigned char)((unsigned char)0x26);
RET_LABEL145:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var148 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var148)) {
var_class_name151 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name151);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var152 = var_outpos + 1l;
var146 = var152;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var146,((unsigned char)0x23)) on <var_nits:CString> */
var_nits[var146]=(unsigned char)((unsigned char)0x23);
RET_LABEL153:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,2l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var156 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var156)) {
var_class_name159 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name159);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var160 = var_outpos + 2l;
var154 = var160;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var154,((unsigned char)0x33)) on <var_nits:CString> */
var_nits[var154]=(unsigned char)((unsigned char)0x33);
RET_LABEL161:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,3l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var164 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var164)) {
var_class_name167 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name167);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var168 = var_outpos + 3l;
var162 = var168;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var162,((unsigned char)0x34)) on <var_nits:CString> */
var_nits[var162]=(unsigned char)((unsigned char)0x34);
RET_LABEL169:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,4l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var172 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var172)) {
var_class_name175 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name175);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var176 = var_outpos + 4l;
var170 = var176;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var170,((unsigned char)0x3b)) on <var_nits:CString> */
var_nits[var170]=(unsigned char)((unsigned char)0x3b);
RET_LABEL177:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,5l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var180 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var180)) {
var_class_name183 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name183);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var184 = var_outpos + 5l;
var178 = var184;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
}
var_outpos = var178;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x27)) on <var_c:Byte> */
var187 = var_c == ((unsigned char)0x27);
var185 = var187;
goto RET_LABEL186;
RET_LABEL186:(void)0;
}
}
if (var185){
{
{ /* Inline native$CString$[]= (var_nits,var_outpos,((unsigned char)0x26)) on <var_nits:CString> */
var_nits[var_outpos]=(unsigned char)((unsigned char)0x26);
RET_LABEL188:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var191 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var191)) {
var_class_name194 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name194);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var195 = var_outpos + 1l;
var189 = var195;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var189,((unsigned char)0x23)) on <var_nits:CString> */
var_nits[var189]=(unsigned char)((unsigned char)0x23);
RET_LABEL196:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,2l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var199 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var199)) {
var_class_name202 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name202);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var203 = var_outpos + 2l;
var197 = var203;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var197,((unsigned char)0x33)) on <var_nits:CString> */
var_nits[var197]=(unsigned char)((unsigned char)0x33);
RET_LABEL204:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,3l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var207 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var207)) {
var_class_name210 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name210);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var211 = var_outpos + 3l;
var205 = var211;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var205,((unsigned char)0x39)) on <var_nits:CString> */
var_nits[var205]=(unsigned char)((unsigned char)0x39);
RET_LABEL212:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,4l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var215 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var215)) {
var_class_name218 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name218);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var219 = var_outpos + 4l;
var213 = var219;
goto RET_LABEL214;
RET_LABEL214:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var213,((unsigned char)0x3b)) on <var_nits:CString> */
var_nits[var213]=(unsigned char)((unsigned char)0x3b);
RET_LABEL220:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,5l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var223 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var223)) {
var_class_name226 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name226);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var227 = var_outpos + 5l;
var221 = var227;
goto RET_LABEL222;
RET_LABEL222:(void)0;
}
}
var_outpos = var221;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x2f)) on <var_c:Byte> */
var230 = var_c == ((unsigned char)0x2f);
var228 = var230;
goto RET_LABEL229;
RET_LABEL229:(void)0;
}
}
if (var228){
{
{ /* Inline native$CString$[]= (var_nits,var_outpos,((unsigned char)0x26)) on <var_nits:CString> */
var_nits[var_outpos]=(unsigned char)((unsigned char)0x26);
RET_LABEL231:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var234 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var234)) {
var_class_name237 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name237);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var238 = var_outpos + 1l;
var232 = var238;
goto RET_LABEL233;
RET_LABEL233:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var232,((unsigned char)0x23)) on <var_nits:CString> */
var_nits[var232]=(unsigned char)((unsigned char)0x23);
RET_LABEL239:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,2l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var242 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var242)) {
var_class_name245 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name245);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var246 = var_outpos + 2l;
var240 = var246;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var240,((unsigned char)0x34)) on <var_nits:CString> */
var_nits[var240]=(unsigned char)((unsigned char)0x34);
RET_LABEL247:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,3l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var250 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var250)) {
var_class_name253 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name253);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var254 = var_outpos + 3l;
var248 = var254;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var248,((unsigned char)0x37)) on <var_nits:CString> */
var_nits[var248]=(unsigned char)((unsigned char)0x37);
RET_LABEL255:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,4l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var258 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var258)) {
var_class_name261 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name261);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var262 = var_outpos + 4l;
var256 = var262;
goto RET_LABEL257;
RET_LABEL257:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nits,var256,((unsigned char)0x3b)) on <var_nits:CString> */
var_nits[var256]=(unsigned char)((unsigned char)0x3b);
RET_LABEL263:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,5l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <5l:Int> isa OTHER */
/* <5l:Int> isa OTHER */
var266 = 1; /* easy <5l:Int> isa OTHER*/
if (unlikely(!var266)) {
var_class_name269 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name269);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var270 = var_outpos + 5l;
var264 = var270;
goto RET_LABEL265;
RET_LABEL265:(void)0;
}
}
var_outpos = var264;
} else {
{
{ /* Inline native$CString$[]= (var_nits,var_outpos,var_c) on <var_nits:CString> */
var_nits[var_outpos]=(unsigned char)var_c;
RET_LABEL271:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_outpos,1l) on <var_outpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var274 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var274)) {
var_class_name277 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name277);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var278 = var_outpos + 1l;
var272 = var278;
goto RET_LABEL273;
RET_LABEL273:(void)0;
}
}
var_outpos = var272;
}
}
}
}
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var281 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var281)) {
var_class_name284 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name284);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var285 = var_pos + 1l;
var279 = var285;
goto RET_LABEL280;
RET_LABEL280:(void)0;
}
}
var_pos = var279;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varoncenew286_guard)) {
var287 = varoncenew286;
} else {
var288 = NEW_core__FlatString(&type_core__FlatString);
var287 = var288;
varoncenew286 = var287;
varoncenew286_guard = 1;
}
{
var289 = ((val*(*)(val* self, char* p0, long p1, long p2))(var287->class->vft[COLOR_core__flat__FlatString__with_infos]))(var287, var_nits, var_nlen, 0l); /* with_infos on <var287:FlatString>*/
}
var_s = var289;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatText$chars_to_escape_to_c for (self: FlatText): Int */
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
short int var72 /* : Bool */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
short int var78 /* : Bool */;
unsigned char var79 /* : Byte */;
unsigned char var81 /* : Byte */;
unsigned char var_next /* var next: Byte */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var_ /* var : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var_95 /* var : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var_99 /* var : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var_103 /* var : Bool */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
short int var_107 /* var : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var_111 /* var : Bool */;
short int var112 /* : Bool */;
short int var114 /* : Bool */;
short int var_115 /* var : Bool */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
long var119 /* : Int */;
short int var121 /* : Bool */;
int cltype122;
int idtype123;
const char* var_class_name124;
long var125 /* : Int */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
const char* var_class_name131;
short int var132 /* : Bool */;
long var133 /* : Int */;
short int var135 /* : Bool */;
int cltype136;
int idtype137;
const char* var_class_name138;
long var139 /* : Int */;
long var140 /* : Int */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name145;
long var146 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatText>*/
}
var_max = var2;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_pos = var3;
var_req_esc = 0l;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_pos,var_max) on <var_pos:Int> */
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
{ /* Inline native$CString$[] (var_its,var_pos) on <var_its:CString> */
var10 = (unsigned char)((int)var_its[var_pos]);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_c = var8;
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x0a)) on <var_c:Byte> */
var13 = var_c == ((unsigned char)0x0a);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline kernel$Int$+ (var_req_esc,1l) on <var_req_esc:Int> */
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
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x09)) on <var_c:Byte> */
var23 = var_c == ((unsigned char)0x09);
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline kernel$Int$+ (var_req_esc,1l) on <var_req_esc:Int> */
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
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x22)) on <var_c:Byte> */
var33 = var_c == ((unsigned char)0x22);
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline kernel$Int$+ (var_req_esc,1l) on <var_req_esc:Int> */
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
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x27)) on <var_c:Byte> */
var43 = var_c == ((unsigned char)0x27);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline kernel$Int$+ (var_req_esc,1l) on <var_req_esc:Int> */
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
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x5c)) on <var_c:Byte> */
var53 = var_c == ((unsigned char)0x5c);
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
{ /* Inline kernel$Int$+ (var_req_esc,1l) on <var_req_esc:Int> */
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
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x3f)) on <var_c:Byte> */
var63 = var_c == ((unsigned char)0x3f);
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
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
var71 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:FlatText>*/
}
{
{ /* Inline kernel$Int$< (var_j,var71) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var71:Int> isa OTHER */
/* <var71:Int> isa OTHER */
var74 = 1; /* easy <var71:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var78 = var_j < var71;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
if (var72){
{
{ /* Inline native$CString$[] (var_its,var_j) on <var_its:CString> */
var81 = (unsigned char)((int)var_its[var_j]);
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var_next = var79;
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x21)) on <var_next:Byte> */
var91 = var_next == ((unsigned char)0x21);
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var_ = var89;
if (var89){
var88 = var_;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x28)) on <var_next:Byte> */
var94 = var_next == ((unsigned char)0x28);
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var88 = var92;
}
var_95 = var88;
if (var88){
var87 = var_95;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x29)) on <var_next:Byte> */
var98 = var_next == ((unsigned char)0x29);
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var87 = var96;
}
var_99 = var87;
if (var87){
var86 = var_99;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x2d)) on <var_next:Byte> */
var102 = var_next == ((unsigned char)0x2d);
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var86 = var100;
}
var_103 = var86;
if (var86){
var85 = var_103;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x2f)) on <var_next:Byte> */
var106 = var_next == ((unsigned char)0x2f);
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
var85 = var104;
}
var_107 = var85;
if (var85){
var84 = var_107;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x3c)) on <var_next:Byte> */
var110 = var_next == ((unsigned char)0x3c);
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
var84 = var108;
}
var_111 = var84;
if (var84){
var83 = var_111;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x3d)) on <var_next:Byte> */
var114 = var_next == ((unsigned char)0x3d);
var112 = var114;
goto RET_LABEL113;
RET_LABEL113:(void)0;
}
}
var83 = var112;
}
var_115 = var83;
if (var83){
var82 = var_115;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x3e)) on <var_next:Byte> */
var118 = var_next == ((unsigned char)0x3e);
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
var82 = var116;
}
if (var82){
{
{ /* Inline kernel$Int$+ (var_req_esc,1l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var121 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var121)) {
var_class_name124 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name124);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var125 = var_req_esc + 1l;
var119 = var125;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
var_req_esc = var119;
} else {
}
} else {
}
} else {
{
{ /* Inline kernel$Byte$< (var_c,((unsigned char)0x20)) on <var_c:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x20):Byte> isa OTHER */
/* <((unsigned char)0x20):Byte> isa OTHER */
var128 = 1; /* easy <((unsigned char)0x20):Byte> isa OTHER*/
if (unlikely(!var128)) {
var_class_name131 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var132 = var_c < ((unsigned char)0x20);
var126 = var132;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
if (var126){
{
{ /* Inline kernel$Int$+ (var_req_esc,3l) on <var_req_esc:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var135 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var135)) {
var_class_name138 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name138);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var139 = var_req_esc + 3l;
var133 = var139;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
}
var_req_esc = var133;
} else {
}
}
}
}
}
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var142 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name145 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var146 = var_pos + 1l;
var140 = var146;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
var_pos = var140;
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
/* method flat$FlatText$escape_to_c for (self: FlatText): String */
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
static char* varoncenew;
static int varoncenew_guard;
char* var13 /* : CString */;
char* var14 /* : CString */;
char* var15 /* : CString */;
char* var17 /* : CString */;
char* var_nns /* var nns: CString */;
long var18 /* : Int */;
long var_pos /* var pos: Int */;
long var_opos /* var opos: Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
unsigned char var26 /* : Byte */;
unsigned char var28 /* : Byte */;
unsigned char var_c /* var c: Byte */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
long var52 /* : Int */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
long var58 /* : Int */;
long var60 /* : Int */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
long var90 /* : Int */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
long var96 /* : Int */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
long var109 /* : Int */;
short int var111 /* : Bool */;
int cltype112;
int idtype113;
const char* var_class_name114;
long var115 /* : Int */;
long var117 /* : Int */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
long var123 /* : Int */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
long var127 /* : Int */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
const char* var_class_name132;
long var133 /* : Int */;
long var_j /* var j: Int */;
long var134 /* : Int */;
short int var135 /* : Bool */;
short int var137 /* : Bool */;
int cltype138;
int idtype139;
const char* var_class_name140;
short int var141 /* : Bool */;
unsigned char var142 /* : Byte */;
unsigned char var144 /* : Byte */;
unsigned char var_next /* var next: Byte */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var_ /* var : Bool */;
short int var155 /* : Bool */;
short int var157 /* : Bool */;
short int var_158 /* var : Bool */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
short int var_162 /* var : Bool */;
short int var163 /* : Bool */;
short int var165 /* : Bool */;
short int var_166 /* var : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var_170 /* var : Bool */;
short int var171 /* : Bool */;
short int var173 /* : Bool */;
short int var_174 /* var : Bool */;
short int var175 /* : Bool */;
short int var177 /* : Bool */;
short int var_178 /* var : Bool */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
long var183 /* : Int */;
short int var185 /* : Bool */;
int cltype186;
int idtype187;
const char* var_class_name188;
long var189 /* : Int */;
long var191 /* : Int */;
short int var193 /* : Bool */;
int cltype194;
int idtype195;
const char* var_class_name196;
long var197 /* : Int */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
int cltype201;
int idtype202;
const char* var_class_name203;
short int var204 /* : Bool */;
long var206 /* : Int */;
short int var208 /* : Bool */;
int cltype209;
int idtype210;
const char* var_class_name211;
long var212 /* : Int */;
long var214 /* : Int */;
short int var216 /* : Bool */;
int cltype217;
int idtype218;
const char* var_class_name219;
long var220 /* : Int */;
unsigned char var221 /* : Byte */;
unsigned char var223 /* : Byte */;
unsigned char var224 /* : Byte */;
unsigned char var226 /* : Byte */;
unsigned char var227 /* : Byte */;
short int var229 /* : Bool */;
int cltype230;
int idtype231;
const char* var_class_name232;
unsigned char var233 /* : Byte */;
long var235 /* : Int */;
short int var237 /* : Bool */;
int cltype238;
int idtype239;
const char* var_class_name240;
long var241 /* : Int */;
unsigned char var242 /* : Byte */;
unsigned char var244 /* : Byte */;
unsigned char var245 /* : Byte */;
short int var247 /* : Bool */;
int cltype248;
int idtype249;
const char* var_class_name250;
unsigned char var251 /* : Byte */;
long var253 /* : Int */;
short int var255 /* : Bool */;
int cltype256;
int idtype257;
const char* var_class_name258;
long var259 /* : Int */;
long var261 /* : Int */;
short int var263 /* : Bool */;
int cltype264;
int idtype265;
const char* var_class_name266;
long var267 /* : Int */;
long var268 /* : Int */;
short int var270 /* : Bool */;
int cltype271;
int idtype272;
const char* var_class_name273;
long var274 /* : Int */;
val* var275 /* : String */;
val* var276 /* : nullable Int */;
val* var277 /* : nullable Bool */;
val* var278 /* : nullable Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__chars_to_escape_to_c]))(self); /* chars_to_escape_to_c on <self:FlatText>*/
}
var_ln_extra = var1;
{
{ /* Inline kernel$Int$== (var_ln_extra,0l) on <var_ln_extra:Int> */
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
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatText>*/
}
var_max = var7;
var8 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatText> */
{
{ /* Inline kernel$Int$+ (var8,var_ln_extra) on <var8:Int> */
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
if (likely(varoncenew_guard)) {
var13 = varoncenew;
} else {
var14 = NULL/*special!*/;
var13 = var14;
varoncenew = var13;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var13,var_nlen) on <var13:CString> */
var17 = (char*)nit_alloc(var_nlen);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_nns = var15;
{
var18 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
var_pos = var18;
var_opos = 0l;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_pos,var_max) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var21 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var25 = var_pos <= var_max;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline native$CString$[] (var_its,var_pos) on <var_its:CString> */
var28 = (unsigned char)((int)var_its[var_pos]);
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_c = var26;
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x09)) on <var_c:Byte> */
var31 = var_c == ((unsigned char)0x09);
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline native$CString$[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var39 = var_opos + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nns,var33,((unsigned char)0x74)) on <var_nns:CString> */
var_nns[var33]=(unsigned char)((unsigned char)0x74);
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var43 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var47 = var_opos + 2l;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_opos = var41;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x0a)) on <var_c:Byte> */
var50 = var_c == ((unsigned char)0x0a);
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
{ /* Inline native$CString$[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var54 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var58 = var_opos + 1l;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nns,var52,((unsigned char)0x6e)) on <var_nns:CString> */
var_nns[var52]=(unsigned char)((unsigned char)0x6e);
RET_LABEL59:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var62 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var66 = var_opos + 2l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_opos = var60;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x22)) on <var_c:Byte> */
var69 = var_c == ((unsigned char)0x22);
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
if (var67){
{
{ /* Inline native$CString$[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL70:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var73 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var77 = var_opos + 1l;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nns,var71,((unsigned char)0x22)) on <var_nns:CString> */
var_nns[var71]=(unsigned char)((unsigned char)0x22);
RET_LABEL78:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var81 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var85 = var_opos + 2l;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var_opos = var79;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x27)) on <var_c:Byte> */
var88 = var_c == ((unsigned char)0x27);
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
if (var86){
{
{ /* Inline native$CString$[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL89:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var92 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var96 = var_opos + 1l;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nns,var90,((unsigned char)0x27)) on <var_nns:CString> */
var_nns[var90]=(unsigned char)((unsigned char)0x27);
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var100 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var104 = var_opos + 2l;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var_opos = var98;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x5c)) on <var_c:Byte> */
var107 = var_c == ((unsigned char)0x5c);
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
if (var105){
{
{ /* Inline native$CString$[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL108:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var111 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var111)) {
var_class_name114 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name114);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var115 = var_opos + 1l;
var109 = var115;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nns,var109,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var109]=(unsigned char)((unsigned char)0x5c);
RET_LABEL116:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var119 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var123 = var_opos + 2l;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var_opos = var117;
} else {
{
{ /* Inline kernel$Byte$== (var_c,((unsigned char)0x3f)) on <var_c:Byte> */
var126 = var_c == ((unsigned char)0x3f);
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
if (var124){
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var129 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var129)) {
var_class_name132 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name132);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var133 = var_pos + 1l;
var127 = var133;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
var_j = var127;
{
var134 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:FlatText>*/
}
{
{ /* Inline kernel$Int$< (var_j,var134) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var134:Int> isa OTHER */
/* <var134:Int> isa OTHER */
var137 = 1; /* easy <var134:Int> isa OTHER*/
if (unlikely(!var137)) {
var_class_name140 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name140);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var141 = var_j < var134;
var135 = var141;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
if (var135){
{
{ /* Inline native$CString$[] (var_its,var_j) on <var_its:CString> */
var144 = (unsigned char)((int)var_its[var_j]);
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
var_next = var142;
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x21)) on <var_next:Byte> */
var154 = var_next == ((unsigned char)0x21);
var152 = var154;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
var_ = var152;
if (var152){
var151 = var_;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x28)) on <var_next:Byte> */
var157 = var_next == ((unsigned char)0x28);
var155 = var157;
goto RET_LABEL156;
RET_LABEL156:(void)0;
}
}
var151 = var155;
}
var_158 = var151;
if (var151){
var150 = var_158;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x29)) on <var_next:Byte> */
var161 = var_next == ((unsigned char)0x29);
var159 = var161;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
var150 = var159;
}
var_162 = var150;
if (var150){
var149 = var_162;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x2d)) on <var_next:Byte> */
var165 = var_next == ((unsigned char)0x2d);
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
}
var149 = var163;
}
var_166 = var149;
if (var149){
var148 = var_166;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x2f)) on <var_next:Byte> */
var169 = var_next == ((unsigned char)0x2f);
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
var148 = var167;
}
var_170 = var148;
if (var148){
var147 = var_170;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x3c)) on <var_next:Byte> */
var173 = var_next == ((unsigned char)0x3c);
var171 = var173;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
}
var147 = var171;
}
var_174 = var147;
if (var147){
var146 = var_174;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x3d)) on <var_next:Byte> */
var177 = var_next == ((unsigned char)0x3d);
var175 = var177;
goto RET_LABEL176;
RET_LABEL176:(void)0;
}
}
var146 = var175;
}
var_178 = var146;
if (var146){
var145 = var_178;
} else {
{
{ /* Inline kernel$Byte$== (var_next,((unsigned char)0x3e)) on <var_next:Byte> */
var181 = var_next == ((unsigned char)0x3e);
var179 = var181;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
}
var145 = var179;
}
if (var145){
{
{ /* Inline native$CString$[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL182:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var185 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var185)) {
var_class_name188 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name188);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var189 = var_opos + 1l;
var183 = var189;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
}
var_opos = var183;
} else {
}
} else {
}
{
{ /* Inline native$CString$[]= (var_nns,var_opos,((unsigned char)0x3f)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x3f);
RET_LABEL190:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var193 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var193)) {
var_class_name196 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name196);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var197 = var_opos + 1l;
var191 = var197;
goto RET_LABEL192;
RET_LABEL192:(void)0;
}
}
var_opos = var191;
} else {
{
{ /* Inline kernel$Byte$< (var_c,((unsigned char)0x20)) on <var_c:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x20):Byte> isa OTHER */
/* <((unsigned char)0x20):Byte> isa OTHER */
var200 = 1; /* easy <((unsigned char)0x20):Byte> isa OTHER*/
if (unlikely(!var200)) {
var_class_name203 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name203);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var204 = var_c < ((unsigned char)0x20);
var198 = var204;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
}
if (var198){
{
{ /* Inline native$CString$[]= (var_nns,var_opos,((unsigned char)0x5c)) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)((unsigned char)0x5c);
RET_LABEL205:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var208 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var208)) {
var_class_name211 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name211);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var212 = var_opos + 1l;
var206 = var212;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nns,var206,((unsigned char)0x30)) on <var_nns:CString> */
var_nns[var206]=(unsigned char)((unsigned char)0x30);
RET_LABEL213:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,2l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var216 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var216)) {
var_class_name219 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name219);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var220 = var_opos + 2l;
var214 = var220;
goto RET_LABEL215;
RET_LABEL215:(void)0;
}
}
{
{ /* Inline math$Byte$& (var_c,((unsigned char)0x38)) on <var_c:Byte> */
var223 = var_c & ((unsigned char)0x38);
var221 = var223;
goto RET_LABEL222;
RET_LABEL222:(void)0;
}
}
{
{ /* Inline kernel$Byte$>> (var221,3l) on <var221:Byte> */
var226 = var221 >> 3l;
var224 = var226;
goto RET_LABEL225;
RET_LABEL225:(void)0;
}
}
{
{ /* Inline kernel$Byte$+ (var224,((unsigned char)0x30)) on <var224:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x30):Byte> isa OTHER */
/* <((unsigned char)0x30):Byte> isa OTHER */
var229 = 1; /* easy <((unsigned char)0x30):Byte> isa OTHER*/
if (unlikely(!var229)) {
var_class_name232 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name232);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 622);
fatal_exit(1);
}
var233 = var224 + ((unsigned char)0x30);
var227 = var233;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nns,var214,var227) on <var_nns:CString> */
var_nns[var214]=(unsigned char)var227;
RET_LABEL234:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,3l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var237 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var237)) {
var_class_name240 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name240);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var241 = var_opos + 3l;
var235 = var241;
goto RET_LABEL236;
RET_LABEL236:(void)0;
}
}
{
{ /* Inline math$Byte$& (var_c,((unsigned char)0x07)) on <var_c:Byte> */
var244 = var_c & ((unsigned char)0x07);
var242 = var244;
goto RET_LABEL243;
RET_LABEL243:(void)0;
}
}
{
{ /* Inline kernel$Byte$+ (var242,((unsigned char)0x30)) on <var242:Byte> */
/* Covariant cast for argument 0 (i) <((unsigned char)0x30):Byte> isa OTHER */
/* <((unsigned char)0x30):Byte> isa OTHER */
var247 = 1; /* easy <((unsigned char)0x30):Byte> isa OTHER*/
if (unlikely(!var247)) {
var_class_name250 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name250);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 622);
fatal_exit(1);
}
var251 = var242 + ((unsigned char)0x30);
var245 = var251;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_nns,var235,var245) on <var_nns:CString> */
var_nns[var235]=(unsigned char)var245;
RET_LABEL252:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,4l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var255 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var255)) {
var_class_name258 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name258);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var259 = var_opos + 4l;
var253 = var259;
goto RET_LABEL254;
RET_LABEL254:(void)0;
}
}
var_opos = var253;
} else {
{
{ /* Inline native$CString$[]= (var_nns,var_opos,var_c) on <var_nns:CString> */
var_nns[var_opos]=(unsigned char)var_c;
RET_LABEL260:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_opos,1l) on <var_opos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var263 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var263)) {
var_class_name266 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name266);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var267 = var_opos + 1l;
var261 = var267;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
}
var_opos = var261;
}
}
}
}
}
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var270 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var270)) {
var_class_name273 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name273);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var274 = var_pos + 1l;
var268 = var274;
goto RET_LABEL269;
RET_LABEL269:(void)0;
}
}
var_pos = var268;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var276 = (val*)(var_nlen<<2|1);
var277 = (val*)((long)(0)<<2|3);
var278 = (val*)((long)(0)<<2|3);
var275 = core__flat___CString___to_s_unsafe(var_nns, var276, ((val*)NULL), var277, var278);
var = var275;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatText$[] for (self: FlatText, Int): Char */
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
uint32_t var106 /* : Char */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
const char* var_class_name113;
short int var114 /* : Bool */;
short int var_115 /* var : Bool */;
short int var116 /* : Bool */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
short int var122 /* : Bool */;
uint32_t var123 /* : Char */;
var_index = p0;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatText> */
var_len = var1;
var2 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatText> */
{
{ /* Inline kernel$Int$- (var_index,var2) on <var_index:Int> */
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
{ /* Inline kernel$Int$== (var_dpos,1l) on <var_dpos:Int> */
var11 = var_dpos == 1l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ = var9;
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
{ /* Inline kernel$Int$< (var_index,var12) on <var_index:Int> */
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
{ /* Inline native$CString$[] (var_its,var_b) on <var_its:CString> */
var29 = (unsigned char)((int)var_its[var_b]);
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_c = var27;
{
{ /* Inline math$Byte$& (var_c,((unsigned char)0x80)) on <var_c:Byte> */
var32 = var_c & ((unsigned char)0x80);
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var30,((unsigned char)0x00)) on <var30:Byte> */
var35 = var30 == ((unsigned char)0x00);
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
{
{ /* Inline kernel$Int$+ (var_b,1l) on <var_b:Int> */
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
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var46 = -1l;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_dpos,var44) on <var_dpos:Int> */
var49 = var_dpos == var44;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_50 = var47;
if (var47){
{
{ /* Inline kernel$Int$> (var_index,1l) on <var_index:Int> */
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
{ /* Inline kernel$Int$- (var_b,1l) on <var_b:Int> */
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
{ /* Inline native$CString$[] (var_its59,var60) on <var_its59:CString> */
var69 = (unsigned char)((int)var_its59[var60]);
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_c70 = var67;
{
{ /* Inline math$Byte$& (var_c70,((unsigned char)0x80)) on <var_c70:Byte> */
var73 = var_c70 & ((unsigned char)0x80);
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var71,((unsigned char)0x00)) on <var71:Byte> */
var76 = var71 == ((unsigned char)0x00);
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
if (var74){
{
{ /* Inline kernel$Int$- (var_b,1l) on <var_b:Int> */
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
{ /* Inline kernel$Byte$ascii (var_c70) on <var_c70:Byte> */
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
{ /* Inline kernel$Int$== (var_dpos,0l) on <var_dpos:Int> */
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
{ /* Inline native$CString$[] (var_its91,var_b) on <var_its91:CString> */
var94 = (unsigned char)((int)var_its91[var_b]);
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var_c95 = var92;
{
{ /* Inline math$Byte$& (var_c95,((unsigned char)0x80)) on <var_c95:Byte> */
var98 = var_c95 & ((unsigned char)0x80);
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var96,((unsigned char)0x00)) on <var96:Byte> */
var101 = var96 == ((unsigned char)0x00);
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
if (var99){
{
{ /* Inline kernel$Byte$ascii (var_c95) on <var_c95:Byte> */
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
var105 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__FlatText__items]))(self); /* items on <self:FlatText>*/
}
var106 = core___core__CString___char_at(var105, var_b);
var = var106;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var110 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var110)) {
var_class_name113 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name113);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var114 = var_index >= 0l;
var108 = var114;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
var_115 = var108;
if (var108){
{
{ /* Inline kernel$Int$< (var_index,var_len) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var118 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var122 = var_index < var_len;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
var107 = var116;
} else {
var107 = var_115;
}
if (unlikely(!var107)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 378);
fatal_exit(1);
}
{
var123 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__fetch_char_at]))(self, var_index); /* fetch_char_at on <self:FlatText>*/
}
var = var123;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatText$fetch_char_at for (self: FlatText, Int): Char */
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
{ /* Inline native$CString$[] (var_items,var_i) on <var_items:CString> */
var5 = (unsigned char)((int)var_items[var_i]);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_b = var3;
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var8 = var_b & ((unsigned char)0x80);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var6,((unsigned char)0x00)) on <var6:Byte> */
var11 = var6 == ((unsigned char)0x00);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel$Byte$ascii (var_b) on <var_b:Byte> */
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
var15 = core___core__CString___char_at(var_items, var_i);
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatText$to_hex for (self: FlatText, nullable Int, nullable Int): Int */
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
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var15 /* : Int */;
val* var16 /* : nullable Int */;
long var17 /* : Int */;
long var18 /* : Int */;
val* var19 /* : nullable Int */;
char* var20 /* : CString */;
char* var_its /* var its: CString */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
long var28 /* : Int */;
long var29 /* : Int */;
long var_max /* var max: Int */;
long var30 /* : Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var40 /* : Int */;
unsigned char var41 /* : Byte */;
unsigned char var43 /* : Byte */;
uint32_t var44 /* : Char */;
uint32_t var46 /* : Char */;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
long var55 /* : Int */;
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
var10 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:FlatText>*/
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
var17 = (long)(var_pos)>>2;
var18 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var17); /* char_to_byte_index on <self:FlatText>*/
}
var19 = (val*)(var18<<2|1);
var_pos = var19;
var20 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
var_its = var20;
{
{ /* Inline kernel$Int$+ (var_pos,var_ln) on <var_pos:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <var_ln:nullable Int(Int)> isa OTHER */
/* <var_ln:nullable Int(Int)> isa OTHER */
var23 = 1; /* easy <var_ln:nullable Int(Int)> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = var_ln == NULL ? "null" : (((long)var_ln&3)?type_info[((long)var_ln&3)]:var_ln->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var27 = (long)(var_pos)>>2;
var28 = (long)(var_ln)>>2;
var29 = var27 + var28;
var21 = var29;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_max = var21;
var30 = (long)(var_pos)>>2;
var_i = var30;
var_ = var_max;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var33 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var37 = var_i < var_;
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
{ /* Inline kernel$Int$<< (var_res,4l) on <var_res:Int> */
var40 = var_res << 4l;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_res = var38;
{
{ /* Inline native$CString$[] (var_its,var_i) on <var_its:CString> */
var43 = (unsigned char)((int)var_its[var_i]);
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel$Byte$ascii (var41) on <var41:Byte> */
var46 = (uint32_t)var41;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var47 = core__abstract_text___Char___from_hex(var44);
{
{ /* Inline kernel$Int$+ (var_res,var47) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var54 = var_res + var47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var_res = var48;
var55 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var55;
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatText$copy_to_native for (self: FlatText, CString, Int, Int, Int) */
void core__flat___FlatText___core__abstract_text__Text__copy_to_native(val* self, char* p0, long p1, long p2, long p3) {
char* var_dst /* var dst: CString */;
long var_n /* var n: Int */;
long var_src_off /* var src_off: Int */;
long var_dst_off /* var dst_off: Int */;
char* var /* : CString */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
var_dst = p0;
var_n = p1;
var_src_off = p2;
var_dst_off = p3;
var = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatText> */
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatText>*/
}
{
{ /* Inline kernel$Int$+ (var1,var_src_off) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var_src_off:Int> isa OTHER */
/* <var_src_off:Int> isa OTHER */
var4 = 1; /* easy <var_src_off:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = var1 + var_src_off;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline native$CString$copy_to (var,var_dst,var_n,var2,var_dst_off) on <var:CString> */
memmove(var_dst+var_dst_off,var+var2,var_n);
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method flat$FlatString$first_byte for (self: FlatString): Int */
long core___core__FlatString___FlatText__first_byte(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatString$first_byte= for (self: FlatString, Int) */
void core___core__FlatString___first_byte_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatString___first_byte].l = p0; /* _first_byte on <self:FlatString> */
RET_LABEL:;
}
/* method flat$FlatString$chars for (self: FlatString): SequenceRead[Char] */
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
/* method flat$FlatString$bytes for (self: FlatString): SequenceRead[Byte] */
val* core___core__FlatString___core__abstract_text__Text__bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
val* var1 /* : FlatStringByteView */;
var1 = NEW_core__flat__FlatStringByteView(&type_core__flat__FlatStringByteView);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__StringByteView__target_61d]))(var1, self); /* target= on <var1:FlatStringByteView>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringByteView>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$to_cstring for (self: FlatString): CString */
char* core___core__FlatString___core__abstract_text__Text__to_cstring(val* self) {
char* var /* : CString */;
long var1 /* : Int */;
long var_blen /* var blen: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var2 /* : CString */;
char* var3 /* : CString */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
char* var8 /* : CString */;
char* var10 /* : CString */;
char* var_new_items /* var new_items: CString */;
char* var11 /* : CString */;
long var12 /* : Int */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
var_blen = var1;
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NULL/*special!*/;
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_blen,1l) on <var_blen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var_blen + 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline native$CString$new (var2,var4) on <var2:CString> */
var10 = (char*)nit_alloc(var4);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_new_items = var8;
var11 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var12 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
{
{ /* Inline native$CString$copy_to (var11,var_new_items,var_blen,var12,0l) on <var11:CString> */
memmove(var_new_items+0l,var11+var12,var_blen);
RET_LABEL13:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_new_items,var_blen,((unsigned char)0x00)) on <var_new_items:CString> */
var_new_items[var_blen]=(unsigned char)((unsigned char)0x00);
RET_LABEL14:(void)0;
}
}
var = var_new_items;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$reversed for (self: FlatString): String */
val* core___core__FlatString___core__abstract_text__Text__reversed(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_b /* var b: FlatBuffer */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var_i /* var i: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
uint32_t var22 /* : Char */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
val* var30 /* : String */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
val* var_s /* var s: FlatString */;
long var35 /* : Int */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
var2 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
{
{ /* Inline kernel$Int$+ (var2,1l) on <var2:Int> */
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
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBuffer__with_capacity]))(var1, var3); /* with_capacity on <var1:FlatBuffer>*/
}
var_b = var1;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
{
{ /* Inline kernel$Int$- (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var7 - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_i = var8;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var21 = var_i >= 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var22 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__fetch_char_at]))(self, var_i); /* fetch_char_at on <self:FlatString>*/
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var22); /* add on <var_b:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var25 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var29 = var_i - 1l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_i = var23;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var30 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:FlatBuffer>*/
}
/* <var30:String> isa FlatString */
cltype32 = type_core__FlatString.color;
idtype33 = type_core__FlatString.id;
if(cltype32 >= var30->type->table_size) {
var31 = 0;
} else {
var31 = var30->type->type_table[cltype32] == idtype33;
}
if (unlikely(!var31)) {
var_class_name34 = var30 == NULL ? "null" : var30->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 442);
fatal_exit(1);
}
var_s = var30;
var35 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_s->attrs[COLOR_core__abstract_text__FlatText___length].l = var35; /* _length on <var_s:FlatString> */
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$fast_cstring for (self: FlatString): CString */
char* core___core__FlatString___core__abstract_text__FlatText__fast_cstring(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
long var2 /* : Int */;
char* var3 /* : CString */;
char* var5 /* : CString */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var2 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
{
{ /* Inline native$CString$fast_cstring (var1,var2) on <var1:CString> */
var5 = var1 + var2;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$substring for (self: FlatString, Int, Int): String */
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
val* var8 /* : nullable Int */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable Bool */;
long var41 /* : Int */;
long var_ln /* var ln: Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
short int var55 /* : Bool */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
short int var69 /* : Bool */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
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
long var_end_index /* var end_index: Int */;
val* var92 /* : String */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel$Int$<= (var_count,0l) on <var_count:Int> */
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
var8 = (val*)(0l<<2|1);
var9 = (val*)(0l<<2|1);
var10 = (val*)((long)(0)<<2|3);
var11 = (val*)((long)(0)<<2|3);
var7 = core__flat___CString___to_s_unsafe(var6, var8, var9, var10, var11);
var5 = var7;
varonce = var5;
}
var = var5;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var18 = var_from < 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline kernel$Int$+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var21 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var_count + var_from;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_count = var19;
{
{ /* Inline kernel$Int$<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var28 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var32 = var_count <= 0l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "";
var37 = (val*)(0l<<2|1);
var38 = (val*)(0l<<2|1);
var39 = (val*)((long)(0)<<2|3);
var40 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var35, var37, var38, var39, var40);
var34 = var36;
varonce33 = var34;
}
var = var34;
goto RET_LABEL;
} else {
}
var_from = 0l;
} else {
}
var41 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_ln = var41;
{
{ /* Inline kernel$Int$+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var44 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var48 = var_count + var_from;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var42,var_ln) on <var42:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var51 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var55 = var42 > var_ln;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
{ /* Inline kernel$Int$- (var_ln,var_from) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var58 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var62 = var_ln - var_from;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_count = var56;
} else {
}
{
{ /* Inline kernel$Int$<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var65 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var69 = var_count <= 0l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "";
var74 = (val*)(0l<<2|1);
var75 = (val*)(0l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
var = var71;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var80 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var84 = var_from + var_count;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var78,1l) on <var78:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var87 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var91 = var78 - 1l;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_end_index = var85;
{
var92 = ((val*(*)(val* self, long p0, long p1, long p2))(self->class->vft[COLOR_core__flat__FlatString__substring_impl]))(self, var_from, var_count, var_end_index); /* substring_impl on <self:FlatString>*/
}
var = var92;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$substring_impl for (self: FlatString, Int, Int, Int): String */
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
static val* varoncenew;
static int varoncenew_guard;
val* var42 /* : FlatString */;
val* var43 /* : FlatString */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
val* var58 /* : FlatString */;
val* var_s /* var s: FlatString */;
var_from = p0;
var_count = p1;
var_end_index = p2;
var1 = self->attrs[COLOR_core__flat__FlatText___position].l; /* _position on <self:FlatString> */
var_cache = var1;
{
{ /* Inline kernel$Int$- (var_cache,var_from) on <var_cache:Int> */
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
var6 = core___core__Int___abs(var2);
var_dfrom = var6;
{
{ /* Inline kernel$Int$- (var_end_index,var_from) on <var_end_index:Int> */
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
var14 = core___core__Int___abs(var7);
var_dend = var14;
{
{ /* Inline kernel$Int$< (var_dfrom,var_dend) on <var_dfrom:Int> */
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
var27 = core___core__CString___length_of_char_at(var_its, var_byteto);
{
{ /* Inline kernel$Int$- (var27,1l) on <var27:Int> */
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
{ /* Inline kernel$Int$+ (var_byteto,var28) on <var_byteto:Int> */
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
if (likely(varoncenew_guard)) {
var42 = varoncenew;
} else {
var43 = NEW_core__FlatString(&type_core__FlatString);
var42 = var43;
varoncenew = var42;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$- (var_byteto,var_bytefrom) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var_bytefrom:Int> isa OTHER */
/* <var_bytefrom:Int> isa OTHER */
var46 = 1; /* easy <var_bytefrom:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var50 = var_byteto - var_bytefrom;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var44,1l) on <var44:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var57 = var44 + 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
var58 = ((val*(*)(val* self, char* p0, long p1, long p2, long p3))(var42->class->vft[COLOR_core__flat__FlatString__full]))(var42, var_its, var51, var_bytefrom, var_count); /* full on <var42:FlatString>*/
}
var_s = var58;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$empty for (self: FlatString): String */
val* core___core__FlatString___core__abstract_text__Text__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var4 = (val*)(0l<<2|1);
var5 = (val*)(0l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
/* <var1:String> isa FlatString */
cltype = type_core__FlatString.color;
idtype = type_core__FlatString.id;
if(cltype >= var1->type->table_size) {
var8 = 0;
} else {
var8 = var1->type->type_table[cltype] == idtype;
}
if (unlikely(!var8)) {
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
/* method flat$FlatString$to_upper for (self: FlatString): String */
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
{ /* Inline kernel$Int$+ (var2,1l) on <var2:Int> */
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
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBuffer__with_capacity]))(var1, var3); /* with_capacity on <var1:FlatBuffer>*/
}
var_outstr = var1;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_mylen = var7;
var_pos = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_pos,var_mylen) on <var_pos:Int> */
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
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:FlatString>*/
}
{
var16 = ((val*(*)(val* self, long p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var15, var_pos); /* [] on <var15:SequenceRead[Char]>*/
}
var18 = (uint32_t)((long)(var16)>>2);
var17 = core___core__Char___to_upper(var18);
{
((void(*)(val* self, uint32_t p0))(var_outstr->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_outstr, var17); /* add on <var_outstr:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
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
var26 = ((val*(*)(val* self))(var_outstr->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_outstr); /* to_s on <var_outstr:FlatBuffer>*/
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$to_lower for (self: FlatString): String */
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
{ /* Inline kernel$Int$+ (var2,1l) on <var2:Int> */
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
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBuffer__with_capacity]))(var1, var3); /* with_capacity on <var1:FlatBuffer>*/
}
var_outstr = var1;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
var_mylen = var7;
var_pos = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_pos,var_mylen) on <var_pos:Int> */
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
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:FlatString>*/
}
{
var16 = ((val*(*)(val* self, long p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var15, var_pos); /* [] on <var15:SequenceRead[Char]>*/
}
var18 = (uint32_t)((long)(var16)>>2);
var17 = core___core__Char___to_lower(var18);
{
((void(*)(val* self, uint32_t p0))(var_outstr->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_outstr, var17); /* add on <var_outstr:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
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
var26 = ((val*(*)(val* self))(var_outstr->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_outstr); /* to_s on <var_outstr:FlatBuffer>*/
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$output for (self: FlatString) */
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
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:FlatString>*/
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
core___core__Char___Object__output(var_i); /* Direct call kernel$Char$output on <var_i:Char>*/
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
/* method flat$FlatString$with_infos for (self: FlatString, CString, Int, Int): FlatString */
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
{ /* Inline native$CString$utf8_length (var_items,var_from,var_byte_length) on <var_items:CString> */
var_from3 = var_from;
var_byte_length4 = var_byte_length;
var_st = var_from3;
var_ln = 0l;
for(;;) {
{
{ /* Inline kernel$Int$> (var_byte_length4,0l) on <var_byte_length4:Int> */
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
{ /* Inline kernel$Int$>= (var_byte_length4,4l) on <var_byte_length4:Int> */
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
{ /* Inline native$CString$fetch_4_chars (var_items,var_st) on <var_items:CString> */
var18 = *((uint32_t*)(var_items + var_st));
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_i = var16;
{
{ /* Inline fixed_ints$UInt32$& (var_i,UINT32_C(2155905152)) on <var_i:UInt32> */
var21 = var_i & UINT32_C(2155905152);
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$!= (var19,UINT32_C(0)) on <var19:UInt32> */
var24 = var19 == UINT32_C(0);
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
{ /* Inline kernel$Int$- (var_byte_length4,4l) on <var_byte_length4:Int> */
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
{ /* Inline kernel$Int$+ (var_st,4l) on <var_st:Int> */
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
{ /* Inline kernel$Int$+ (var_ln,4l) on <var_ln:Int> */
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
{ /* Inline kernel$Int$== (var_byte_length4,0l) on <var_byte_length4:Int> */
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
var51 = core___core__CString___length_of_char_at(var_items, var_st);
var_cln = var51;
{
{ /* Inline kernel$Int$+ (var_st,var_cln) on <var_st:Int> */
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
{ /* Inline kernel$Int$+ (var_ln,1l) on <var_ln:Int> */
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
{ /* Inline kernel$Int$- (var_byte_length4,var_cln) on <var_byte_length4:Int> */
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
{ /* Inline kernel$Int$== (var_byte_length,var_len) on <var_byte_length:Int> */
var75 = var_byte_length == var_len;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
if (var73){
var76 = NEW_core__flat__ASCIIFlatString(&type_core__flat__ASCIIFlatString);
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var76->class->vft[COLOR_core__flat__ASCIIFlatString__full_data]))(var76, var_items, var_byte_length, var_from, var_len); /* full_data on <var76:ASCIIFlatString>*/
}
var = var76;
goto RET_LABEL;
} else {
}
var77 = NEW_core__flat__UnicodeFlatString(&type_core__flat__UnicodeFlatString);
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var77->class->vft[COLOR_core__flat__UnicodeFlatString__full_data]))(var77, var_items, var_byte_length, var_from, var_len); /* full_data on <var77:UnicodeFlatString>*/
}
var = var77;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$full for (self: FlatString, CString, Int, Int, Int): FlatString */
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
{ /* Inline kernel$Int$== (var_byte_length,var_length) on <var_byte_length:Int> */
var3 = var_byte_length == var_length;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var4 = NEW_core__flat__ASCIIFlatString(&type_core__flat__ASCIIFlatString);
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var4->class->vft[COLOR_core__flat__ASCIIFlatString__full_data]))(var4, var_items, var_byte_length, var_from, var_length); /* full_data on <var4:ASCIIFlatString>*/
}
var = var4;
goto RET_LABEL;
} else {
}
var5 = NEW_core__flat__UnicodeFlatString(&type_core__flat__UnicodeFlatString);
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var5->class->vft[COLOR_core__flat__UnicodeFlatString__full_data]))(var5, var_items, var_byte_length, var_from, var_length); /* full_data on <var5:UnicodeFlatString>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$== for (self: FlatString, nullable Object): Bool */
short int core___core__FlatString___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var_my_length /* var my_length: Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var_my_index /* var my_index: Int */;
long var16 /* : Int */;
long var_its_index /* var its_index: Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name;
long var22 /* : Int */;
long var_last_iteration /* var last_iteration: Int */;
char* var23 /* : CString */;
char* var_its_items /* var its_items: CString */;
char* var24 /* : CString */;
char* var_my_items /* var my_items: CString */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
unsigned char var32 /* : Byte */;
unsigned char var34 /* : Byte */;
unsigned char var35 /* : Byte */;
unsigned char var37 /* : Byte */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
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
var4 = ((long(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__object_id]))(self); /* object_id on <self:FlatString>*/
}
{
var5 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__kernel__Object__object_id]))(var_other); /* object_id on <var_other:nullable Object(FlatText)>*/
}
{
{ /* Inline kernel$Int$== (var4,var5) on <var4:Int> */
var8 = var4 == var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = 1;
goto RET_LABEL;
} else {
}
var9 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
var_my_length = var9;
var10 = var_other->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_other:nullable Object(FlatText)> */
{
{ /* Inline kernel$Int$!= (var10,var_my_length) on <var10:Int> */
var13 = var10 == var_my_length;
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var = 0;
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_my_index = var15;
{
var16 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_other); /* first_byte on <var_other:nullable Object(FlatText)>*/
}
var_its_index = var16;
{
{ /* Inline kernel$Int$+ (var_my_index,var_my_length) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_my_length:Int> isa OTHER */
/* <var_my_length:Int> isa OTHER */
var19 = 1; /* easy <var_my_length:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_my_index + var_my_length;
var17 = var22;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_last_iteration = var17;
var23 = var_other->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_other:nullable Object(FlatText)> */
var_its_items = var23;
var24 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_my_items = var24;
for(;;) {
{
{ /* Inline kernel$Int$< (var_my_index,var_last_iteration) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <var_last_iteration:Int> isa OTHER */
/* <var_last_iteration:Int> isa OTHER */
var27 = 1; /* easy <var_last_iteration:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var31 = var_my_index < var_last_iteration;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline native$CString$[] (var_my_items,var_my_index) on <var_my_items:CString> */
var34 = (unsigned char)((int)var_my_items[var_my_index]);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline native$CString$[] (var_its_items,var_its_index) on <var_its_items:CString> */
var37 = (unsigned char)((int)var_its_items[var_its_index]);
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel$Byte$!= (var32,var35) on <var32:Byte> */
var40 = var32 == var35;
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_my_index,1l) on <var_my_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var44 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var48 = var_my_index + 1l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var_my_index = var42;
{
{ /* Inline kernel$Int$+ (var_its_index,1l) on <var_its_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var51 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var55 = var_its_index + 1l;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_its_index = var49;
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
/* method flat$FlatString$< for (self: FlatString, Text): Bool */
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
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
char* var12 /* : CString */;
char* var_myits /* var myits: CString */;
char* var13 /* : CString */;
char* var_itsits /* var itsits: CString */;
long var14 /* : Int */;
long var_mbt /* var mbt: Int */;
long var15 /* : Int */;
long var_obt /* var obt: Int */;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
long var_minln /* var minln: Int */;
long var24 /* : Int */;
long var_mst /* var mst: Int */;
long var25 /* : Int */;
long var_ost /* var ost: Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
unsigned char var33 /* : Byte */;
unsigned char var35 /* : Byte */;
unsigned char var_my_curr_char /* var my_curr_char: Byte */;
unsigned char var36 /* : Byte */;
unsigned char var38 /* : Byte */;
unsigned char var_its_curr_char /* var its_curr_char: Byte */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
short int var45 /* : Bool */;
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
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
long var67 /* : Int */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
short int var74 /* : Bool */;
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
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__object_id]))(self); /* object_id on <self:FlatString>*/
}
{
var8 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__kernel__Object__object_id]))(var_other); /* object_id on <var_other:Text(FlatText)>*/
}
{
{ /* Inline kernel$Int$== (var7,var8) on <var7:Int> */
var11 = var7 == var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
var12 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_myits = var12;
var13 = var_other->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_other:Text(FlatText)> */
var_itsits = var13;
var14 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
var_mbt = var14;
{
var15 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_other); /* byte_length on <var_other:Text(FlatText)>*/
}
var_obt = var15;
{
{ /* Inline kernel$Int$< (var_mbt,var_obt) on <var_mbt:Int> */
/* Covariant cast for argument 0 (i) <var_obt:Int> isa OTHER */
/* <var_obt:Int> isa OTHER */
var19 = 1; /* easy <var_obt:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var23 = var_mbt < var_obt;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
var16 = var_mbt;
} else {
var16 = var_obt;
}
var_minln = var16;
var24 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_mst = var24;
{
var25 = ((long(*)(val* self))(var_other->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_other); /* first_byte on <var_other:Text(FlatText)>*/
}
var_ost = var25;
var_i = 0l;
var_ = var_minln;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var28 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var32 = var_i < var_;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
} else {
goto BREAK_label;
}
{
{ /* Inline native$CString$[] (var_myits,var_mst) on <var_myits:CString> */
var35 = (unsigned char)((int)var_myits[var_mst]);
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_my_curr_char = var33;
{
{ /* Inline native$CString$[] (var_itsits,var_ost) on <var_itsits:CString> */
var38 = (unsigned char)((int)var_itsits[var_ost]);
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_its_curr_char = var36;
{
{ /* Inline kernel$Byte$> (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Byte> */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Byte> isa OTHER */
/* <var_its_curr_char:Byte> isa OTHER */
var41 = 1; /* easy <var_its_curr_char:Byte> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 621);
fatal_exit(1);
}
var45 = var_my_curr_char > var_its_curr_char;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Byte$< (var_my_curr_char,var_its_curr_char) on <var_my_curr_char:Byte> */
/* Covariant cast for argument 0 (i) <var_its_curr_char:Byte> isa OTHER */
/* <var_its_curr_char:Byte> isa OTHER */
var48 = 1; /* easy <var_its_curr_char:Byte> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Byte.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 619);
fatal_exit(1);
}
var52 = var_my_curr_char < var_its_curr_char;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_mst,1l) on <var_mst:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var59 = var_mst + 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_mst = var53;
{
{ /* Inline kernel$Int$+ (var_ost,1l) on <var_ost:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var62 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var66 = var_ost + 1l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var_ost = var60;
var67 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var67;
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$< (var_mbt,var_obt) on <var_mbt:Int> */
/* Covariant cast for argument 0 (i) <var_obt:Int> isa OTHER */
/* <var_obt:Int> isa OTHER */
var70 = 1; /* easy <var_obt:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var74 = var_mbt < var_obt;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var = var68;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$+ for (self: FlatString, Text): String */
val* core___core__FlatString___core__abstract_text__Text___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
long var3 /* : Int */;
long var_mlen /* var mlen: Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var_nlen /* var nlen: Int */;
char* var8 /* : CString */;
char* var_mits /* var mits: CString */;
long var9 /* : Int */;
long var_mifrom /* var mifrom: Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
char* var13 /* : CString */;
char* var_sits /* var sits: CString */;
long var14 /* : Int */;
long var_sifrom /* var sifrom: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var15 /* : CString */;
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
static val* varoncenew29;
static int varoncenew29_guard;
val* var30 /* : FlatString */;
val* var31 /* : FlatString */;
long var32 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
val* var41 /* : FlatString */;
var_o = p0;
{
var1 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_o); /* to_s on <var_o:Text>*/
}
var_s = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:String>*/
}
var_slen = var2;
var3 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
var_mlen = var3;
{
{ /* Inline kernel$Int$+ (var_mlen,var_slen) on <var_mlen:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var6 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var_mlen + var_slen;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_nlen = var4;
var8 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_mits = var8;
var9 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_mifrom = var9;
/* <var_s:String> isa FlatText */
cltype11 = type_core__FlatText.color;
idtype12 = type_core__FlatText.id;
if(cltype11 >= var_s->type->table_size) {
var10 = 0;
} else {
var10 = var_s->type->type_table[cltype11] == idtype12;
}
if (var10){
var13 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:String(FlatText)> */
var_sits = var13;
{
var14 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__flat__FlatText__first_byte]))(var_s); /* first_byte on <var_s:String(FlatText)>*/
}
var_sifrom = var14;
if (likely(varoncenew_guard)) {
var15 = varoncenew;
} else {
var16 = NULL/*special!*/;
var15 = var16;
varoncenew = var15;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nlen,1l) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = var_nlen + 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline native$CString$new (var15,var17) on <var15:CString> */
var26 = (char*)nit_alloc(var17);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_ns = var24;
{
{ /* Inline native$CString$copy_to (var_mits,var_ns,var_mlen,var_mifrom,0l) on <var_mits:CString> */
memmove(var_ns+0l,var_mits+var_mifrom,var_mlen);
RET_LABEL27:(void)0;
}
}
{
{ /* Inline native$CString$copy_to (var_sits,var_ns,var_slen,var_sifrom,var_mlen) on <var_sits:CString> */
memmove(var_ns+var_mlen,var_sits+var_sifrom,var_slen);
RET_LABEL28:(void)0;
}
}
if (likely(varoncenew29_guard)) {
var30 = varoncenew29;
} else {
var31 = NEW_core__FlatString(&type_core__FlatString);
var30 = var31;
varoncenew29 = var30;
varoncenew29_guard = 1;
}
var32 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatString> */
{
var33 = ((long(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Text__length]))(var_o); /* length on <var_o:Text>*/
}
{
{ /* Inline kernel$Int$+ (var32,var33) on <var32:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var40 = var32 + var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var41 = ((val*(*)(val* self, char* p0, long p1, long p2, long p3))(var30->class->vft[COLOR_core__flat__FlatString__full]))(var30, var_ns, var_nlen, 0l, var34); /* full on <var30:FlatString>*/
}
var = var41;
goto RET_LABEL;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 622);
fatal_exit(1);
}
RET_LABEL:;
return var;
}
/* method flat$FlatString$* for (self: FlatString, Int): String */
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
static char* varoncenew;
static int varoncenew_guard;
char* var16 /* : CString */;
char* var17 /* : CString */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
char* var25 /* : CString */;
char* var27 /* : CString */;
char* var_ns /* var ns: CString */;
long var_offset /* var offset: Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
static val* varoncenew51;
static int varoncenew51_guard;
val* var52 /* : FlatString */;
val* var53 /* : FlatString */;
val* var54 /* : FlatString */;
var_i = p0;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
var_mybtlen = var1;
{
{ /* Inline kernel$Int$* (var_mybtlen,var_i) on <var_mybtlen:Int> */
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
{ /* Inline kernel$Int$* (var_mylen,var_i) on <var_mylen:Int> */
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
if (likely(varoncenew_guard)) {
var16 = varoncenew;
} else {
var17 = NULL/*special!*/;
var16 = var17;
varoncenew = var16;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_new_byte_length,1l) on <var_new_byte_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var24 = var_new_byte_length + 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline native$CString$new (var16,var18) on <var16:CString> */
var27 = (char*)nit_alloc(var18);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_ns = var25;
{
{ /* Inline native$CString$[]= (var_ns,var_new_byte_length,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_new_byte_length]=(unsigned char)((unsigned char)0x00);
RET_LABEL28:(void)0;
}
}
var_offset = 0l;
for(;;) {
{
{ /* Inline kernel$Int$> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var31 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var35 = var_i > 0l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline native$CString$copy_to (var_its,var_ns,var_mybtlen,var_fb,var_offset) on <var_its:CString> */
memmove(var_ns+var_offset,var_its+var_fb,var_mybtlen);
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_offset,var_mybtlen) on <var_offset:Int> */
/* Covariant cast for argument 0 (i) <var_mybtlen:Int> isa OTHER */
/* <var_mybtlen:Int> isa OTHER */
var39 = 1; /* easy <var_mybtlen:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var43 = var_offset + var_mybtlen;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_offset = var37;
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var50 = var_i - 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_i = var44;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
if (likely(varoncenew51_guard)) {
var52 = varoncenew51;
} else {
var53 = NEW_core__FlatString(&type_core__FlatString);
var52 = var53;
varoncenew51 = var52;
varoncenew51_guard = 1;
}
{
var54 = ((val*(*)(val* self, char* p0, long p1, long p2, long p3))(var52->class->vft[COLOR_core__flat__FlatString__full]))(var52, var_ns, var_new_byte_length, 0l, var_newlen); /* full on <var52:FlatString>*/
}
var = var54;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$hash for (self: FlatString): Int */
long core___core__FlatString___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : nullable Int */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
long var_h /* var h: Int */;
long var6 /* : Int */;
long var_i /* var i: Int */;
char* var7 /* : CString */;
char* var_my_items /* var my_items: CString */;
long var8 /* : Int */;
long var_max /* var max: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
unsigned char var23 /* : Byte */;
unsigned char var25 /* : Byte */;
long var26 /* : Int */;
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
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
long var45 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache]))(self); /* hash_cache on <self:FlatString>*/
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
var6 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_i = var6;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_my_items = var7;
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatString>*/
}
var_max = var8;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_i,var_max) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_max:Int> isa OTHER */
/* <var_max:Int> isa OTHER */
var11 = 1; /* easy <var_max:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var12 = var_i <= var_max;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
{ /* Inline kernel$Int$<< (var_h,5l) on <var_h:Int> */
var15 = var_h << 5l;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var13,var_h) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var_h:Int> isa OTHER */
/* <var_h:Int> isa OTHER */
var18 = 1; /* easy <var_h:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var13 + var_h;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline native$CString$[] (var_my_items,var_i) on <var_my_items:CString> */
var25 = (unsigned char)((int)var_my_items[var_i]);
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel$Byte$to_i (var23) on <var23:Byte> */
var28 = (long)var23;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var16,var26) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var31 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var16 + var26;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_h = var29;
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var42 = var_i + 1l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_i = var36;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var43 = (val*)(var_h<<2|1);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache_61d]))(self, var43); /* hash_cache= on <self:FlatString>*/
}
} else {
}
{
var44 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__hash_cache]))(self); /* hash_cache on <self:FlatString>*/
}
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 662);
fatal_exit(1);
}
var45 = (long)(var44)>>2;
var = var45;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatString$substrings for (self: FlatString): Iterator[FlatText] */
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
/* method flat$UnicodeFlatString$full_data for (self: UnicodeFlatString, CString, Int, Int, Int) */
void core__flat___core__flat__UnicodeFlatString___full_data(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: CString */;
long var_byte_length /* var byte_length: Int */;
long var_from /* var from: Int */;
long var_length /* var length: Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:UnicodeFlatString>*/
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
/* method flat$UnicodeFlatString$substring_from for (self: UnicodeFlatString, Int): String */
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
val* var6 /* : Text */;
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
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
long var_fln /* var fln: Int */;
static val* varoncenew;
static int varoncenew_guard;
val* var31 /* : FlatString */;
val* var32 /* : FlatString */;
char* var33 /* : CString */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
val* var42 /* : FlatString */;
var_from = p0;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:UnicodeFlatString> */
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
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__empty]))(self); /* empty on <self:UnicodeFlatString>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$<= (var_from,0l) on <var_from:Int> */
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
var14 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_from); /* char_to_byte_index on <self:UnicodeFlatString>*/
}
var_c = var14;
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:UnicodeFlatString> */
{
{ /* Inline kernel$Int$- (var_c,var15) on <var_c:Int> */
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
var23 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:UnicodeFlatString>*/
}
{
{ /* Inline kernel$Int$- (var23,var_st) on <var23:Int> */
/* Covariant cast for argument 0 (i) <var_st:Int> isa OTHER */
/* <var_st:Int> isa OTHER */
var26 = 1; /* easy <var_st:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var30 = var23 - var_st;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_fln = var24;
if (likely(varoncenew_guard)) {
var31 = varoncenew;
} else {
var32 = NEW_core__FlatString(&type_core__FlatString);
var31 = var32;
varoncenew = var31;
varoncenew_guard = 1;
}
{
var33 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__FlatText__items]))(self); /* items on <self:UnicodeFlatString>*/
}
var34 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:UnicodeFlatString> */
{
{ /* Inline kernel$Int$- (var34,var_from) on <var34:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var37 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var41 = var34 - var_from;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
var42 = ((val*(*)(val* self, char* p0, long p1, long p2, long p3))(var31->class->vft[COLOR_core__flat__FlatString__full]))(var31, var33, var_fln, var_c, var35); /* full on <var31:FlatString>*/
}
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$ASCIIFlatString$full_data for (self: ASCIIFlatString, CString, Int, Int, Int) */
void core__flat___core__flat__ASCIIFlatString___full_data(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: CString */;
long var_byte_length /* var byte_length: Int */;
long var_from /* var from: Int */;
long var_length /* var length: Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:ASCIIFlatString>*/
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
/* method flat$ASCIIFlatString$[] for (self: ASCIIFlatString, Int): Char */
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
{ /* Inline kernel$Int$< (var_idx,var2) on <var_idx:Int> */
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
{ /* Inline kernel$Int$>= (var_idx,0l) on <var_idx:Int> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 705);
fatal_exit(1);
}
var14 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:ASCIIFlatString> */
var15 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:ASCIIFlatString> */
{
{ /* Inline kernel$Int$+ (var_idx,var15) on <var_idx:Int> */
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
{ /* Inline native$CString$[] (var14,var16) on <var14:CString> */
var25 = (unsigned char)((int)var14[var16]);
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel$Byte$ascii (var23) on <var23:Byte> */
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
/* method flat$ASCIIFlatString$substring for (self: ASCIIFlatString, Int, Int): String */
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
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
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
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Bool */;
val* var48 /* : nullable Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
short int var55 /* : Bool */;
long var56 /* : Int */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
long var62 /* : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
short int var69 /* : Bool */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
val* var78 /* : ASCIIFlatString */;
char* var79 /* : CString */;
long var80 /* : Int */;
long var81 /* : Int */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
long var87 /* : Int */;
var_from = p0;
var_count = p1;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:ASCIIFlatString> */
var_ln = var1;
{
{ /* Inline kernel$Int$<= (var_count,0l) on <var_count:Int> */
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
var9 = (val*)(0l<<2|1);
var10 = (val*)(0l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
var = var6;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var15 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var_count + var_from;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var13,var_ln) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var22 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var26 = var13 > var_ln;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
{
{ /* Inline kernel$Int$- (var_ln,var_from) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var29 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var33 = var_ln - var_from;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_count = var27;
} else {
}
{
{ /* Inline kernel$Int$<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var36 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var40 = var_count <= 0l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "";
var45 = (val*)(0l<<2|1);
var46 = (val*)(0l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce41 = var42;
}
var = var42;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var51 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var55 = var_from < 0l;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
{ /* Inline kernel$Int$+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var58 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var62 = var_count + var_from;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_count = var56;
{
{ /* Inline kernel$Int$<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var65 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var69 = var_count <= 0l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "";
var74 = (val*)(0l<<2|1);
var75 = (val*)(0l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
var = var71;
goto RET_LABEL;
} else {
}
var_from = 0l;
} else {
}
var78 = NEW_core__flat__ASCIIFlatString(&type_core__flat__ASCIIFlatString);
var79 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:ASCIIFlatString> */
var80 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:ASCIIFlatString> */
{
{ /* Inline kernel$Int$+ (var_from,var80) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var80:Int> isa OTHER */
/* <var80:Int> isa OTHER */
var83 = 1; /* easy <var80:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var87 = var_from + var80;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var78->class->vft[COLOR_core__flat__ASCIIFlatString__full_data]))(var78, var79, var_count, var81, var_count); /* full_data on <var78:ASCIIFlatString>*/
}
var = var78;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$ASCIIFlatString$reversed for (self: ASCIIFlatString): String */
val* core__flat___core__flat__ASCIIFlatString___core__abstract_text__Text__reversed(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var_b /* var b: FlatBuffer */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var_i /* var i: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
uint32_t var22 /* : Char */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
val* var30 /* : String */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
val* var_s /* var s: FlatString */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
var2 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:ASCIIFlatString> */
{
{ /* Inline kernel$Int$+ (var2,1l) on <var2:Int> */
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
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBuffer__with_capacity]))(var1, var3); /* with_capacity on <var1:FlatBuffer>*/
}
var_b = var1;
var7 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:ASCIIFlatString> */
{
{ /* Inline kernel$Int$- (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var7 - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_i = var8;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var21 = var_i >= 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var22 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:ASCIIFlatString>*/
}
{
((void(*)(val* self, uint32_t p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_b, var22); /* add on <var_b:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var25 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var29 = var_i - 1l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_i = var23;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var30 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:FlatBuffer>*/
}
/* <var30:String> isa FlatString */
cltype32 = type_core__FlatString.color;
idtype33 = type_core__FlatString.id;
if(cltype32 >= var30->type->table_size) {
var31 = 0;
} else {
var31 = var30->type->type_table[cltype32] == idtype33;
}
if (unlikely(!var31)) {
var_class_name34 = var30 == NULL ? "null" : var30->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 729);
fatal_exit(1);
}
var_s = var30;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$ASCIIFlatString$char_to_byte_index for (self: ASCIIFlatString, Int): Int */
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
{ /* Inline kernel$Int$+ (var_index,var1) on <var_index:Int> */
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
/* method flat$ASCIIFlatString$substring_impl for (self: ASCIIFlatString, Int, Int, Int): String */
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
{ /* Inline kernel$Int$+ (var_from,var3) on <var_from:Int> */
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
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var1->class->vft[COLOR_core__flat__ASCIIFlatString__full_data]))(var1, var2, var_count, var4, var_count); /* full_data on <var1:ASCIIFlatString>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$ASCIIFlatString$fetch_char_at for (self: ASCIIFlatString, Int): Char */
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
{ /* Inline kernel$Int$+ (var_i,var2) on <var_i:Int> */
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
{ /* Inline native$CString$[] (var1,var3) on <var1:CString> */
var9 = (unsigned char)((int)var1[var3]);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Byte$ascii (var7) on <var7:Byte> */
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
/* method flat$FlatStringCharReverseIterator$target for (self: FlatStringCharReverseIterator): FlatString */
val* core__flat___core__flat__FlatStringCharReverseIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___target].val; /* _target on <self:FlatStringCharReverseIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 745);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatStringCharReverseIterator$target= for (self: FlatStringCharReverseIterator, FlatString) */
void core__flat___core__flat__FlatStringCharReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___target].val = p0; /* _target on <self:FlatStringCharReverseIterator> */
RET_LABEL:;
}
/* method flat$FlatStringCharReverseIterator$curr_pos for (self: FlatStringCharReverseIterator): Int */
long core__flat___core__flat__FlatStringCharReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatStringCharReverseIterator$curr_pos= for (self: FlatStringCharReverseIterator, Int) */
void core__flat___core__flat__FlatStringCharReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringCharReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringCharReverseIterator> */
RET_LABEL:;
}
/* method flat$FlatStringCharReverseIterator$is_ok for (self: FlatStringCharReverseIterator): Bool */
short int core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringCharReverseIterator>*/
}
{
{ /* Inline kernel$Int$>= (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var1 >= 0l;
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
/* method flat$FlatStringCharReverseIterator$item for (self: FlatStringCharReverseIterator): Char */
uint32_t core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatString */;
long var2 /* : Int */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__target]))(self); /* target on <self:FlatStringCharReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringCharReverseIterator>*/
}
{
var3 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var2); /* [] on <var1:FlatString>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatStringCharReverseIterator$item for (self: Iterator[nullable Object]): nullable Object */
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
/* method flat$FlatStringCharReverseIterator$next for (self: FlatStringCharReverseIterator) */
void core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringCharReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringCharReverseIterator>*/
}
{
{ /* Inline kernel$Int$- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var4 = var - 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatStringCharReverseIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatStringCharReverseIterator$index for (self: FlatStringCharReverseIterator): Int */
long core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatStringCharReverseIterator$init for (self: FlatStringCharReverseIterator) */
void core__flat___core__flat__FlatStringCharReverseIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringCharReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringCharReverseIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatStringCharIterator$target for (self: FlatStringCharIterator): FlatString */
val* core__flat___core__flat__FlatStringCharIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharIterator___target].val; /* _target on <self:FlatStringCharIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 762);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatStringCharIterator$target= for (self: FlatStringCharIterator, FlatString) */
void core__flat___core__flat__FlatStringCharIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringCharIterator___target].val = p0; /* _target on <self:FlatStringCharIterator> */
RET_LABEL:;
}
/* method flat$FlatStringCharIterator$max for (self: FlatStringCharIterator): Int */
long core__flat___core__flat__FlatStringCharIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharIterator___max].l; /* _max on <self:FlatStringCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatStringCharIterator$max= for (self: FlatStringCharIterator, Int) */
void core__flat___core__flat__FlatStringCharIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringCharIterator___max].l = p0; /* _max on <self:FlatStringCharIterator> */
RET_LABEL:;
}
/* method flat$FlatStringCharIterator$curr_pos for (self: FlatStringCharIterator): Int */
long core__flat___core__flat__FlatStringCharIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l; /* _curr_pos on <self:FlatStringCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatStringCharIterator$curr_pos= for (self: FlatStringCharIterator, Int) */
void core__flat___core__flat__FlatStringCharIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringCharIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringCharIterator> */
RET_LABEL:;
}
/* method flat$FlatStringCharIterator$init for (self: FlatStringCharIterator) */
void core__flat___core__flat__FlatStringCharIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatString */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringCharIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringCharIterator>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__target]))(self); /* target on <self:FlatStringCharIterator>*/
}
var1 = var->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var:FlatString> */
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
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__max_61d]))(self, var2); /* max= on <self:FlatStringCharIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatStringCharIterator$is_ok for (self: FlatStringCharIterator): Bool */
short int core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringCharIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__max]))(self); /* max on <self:FlatStringCharIterator>*/
}
{
{ /* Inline kernel$Int$<= (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var6 = var1 <= var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatStringCharIterator$item for (self: FlatStringCharIterator): Char */
uint32_t core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatString */;
long var2 /* : Int */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__target]))(self); /* target on <self:FlatStringCharIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringCharIterator>*/
}
{
var3 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var2); /* [] on <var1:FlatString>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatStringCharIterator$item for (self: Iterator[nullable Object]): nullable Object */
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
/* method flat$FlatStringCharIterator$next for (self: FlatStringCharIterator) */
void core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringCharIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringCharIterator>*/
}
{
{ /* Inline kernel$Int$+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var4 = var + 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatStringCharIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatStringCharIterator$index for (self: FlatStringCharIterator): Int */
long core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringCharIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatStringCharView$[] for (self: FlatStringCharView, Int): Char */
uint32_t core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
uint32_t var2 /* : Char */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatStringCharView>*/
}
{
var2 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var_index); /* [] on <var1:Text(FlatString)>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatStringCharView$[] for (self: SequenceRead[nullable Object], Int): nullable Object */
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
/* method flat$FlatStringCharView$iterator_from for (self: FlatStringCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringCharIterator */;
val* var2 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringCharIterator(&type_core__flat__FlatStringCharIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatStringCharView>*/
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
/* method flat$FlatStringCharView$reverse_iterator_from for (self: FlatStringCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringCharReverseIterator */;
val* var2 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringCharReverseIterator(&type_core__flat__FlatStringCharReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatStringCharView>*/
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
/* method flat$FlatStringByteReverseIterator$target for (self: FlatStringByteReverseIterator): FlatString */
val* core__flat___core__flat__FlatStringByteReverseIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target].val; /* _target on <self:FlatStringByteReverseIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 796);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteReverseIterator$target= for (self: FlatStringByteReverseIterator, FlatString) */
void core__flat___core__flat__FlatStringByteReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target].val = p0; /* _target on <self:FlatStringByteReverseIterator> */
RET_LABEL:;
}
/* method flat$FlatStringByteReverseIterator$target_items for (self: FlatStringByteReverseIterator): CString */
char* core__flat___core__flat__FlatStringByteReverseIterator___target_items(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target_items].str; /* _target_items on <self:FlatStringByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteReverseIterator$target_items= for (self: FlatStringByteReverseIterator, CString) */
void core__flat___core__flat__FlatStringByteReverseIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___target_items].str = p0; /* _target_items on <self:FlatStringByteReverseIterator> */
RET_LABEL:;
}
/* method flat$FlatStringByteReverseIterator$curr_pos for (self: FlatStringByteReverseIterator): Int */
long core__flat___core__flat__FlatStringByteReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatStringByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteReverseIterator$curr_pos= for (self: FlatStringByteReverseIterator, Int) */
void core__flat___core__flat__FlatStringByteReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringByteReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringByteReverseIterator> */
RET_LABEL:;
}
/* method flat$FlatStringByteReverseIterator$init for (self: FlatStringByteReverseIterator) */
void core__flat___core__flat__FlatStringByteReverseIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatString */;
val* var_tgt /* var tgt: FlatString */;
char* var1 /* : CString */;
val* var_ /* var : FlatStringByteReverseIterator */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringByteReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringByteReverseIterator>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target]))(self); /* target on <self:FlatStringByteReverseIterator>*/
}
var_tgt = var;
var1 = var_tgt->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tgt:FlatString> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target_items_61d]))(self, var1); /* target_items= on <self:FlatStringByteReverseIterator>*/
}
var_ = self;
{
var2 = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringByteReverseIterator>*/
}
var3 = var_tgt->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tgt:FlatString> */
{
{ /* Inline kernel$Int$+ (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var2 + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos_61d]))(var_, var4); /* curr_pos= on <var_:FlatStringByteReverseIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatStringByteReverseIterator$is_ok for (self: FlatStringByteReverseIterator): Bool */
short int core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringByteReverseIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target]))(self); /* target on <self:FlatStringByteReverseIterator>*/
}
var3 = var2->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var2:FlatString> */
{
{ /* Inline kernel$Int$>= (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var7 = var1 >= var3;
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
/* method flat$FlatStringByteReverseIterator$item for (self: FlatStringByteReverseIterator): Byte */
unsigned char core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : CString */;
long var2 /* : Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target_items]))(self); /* target_items on <self:FlatStringByteReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringByteReverseIterator>*/
}
{
{ /* Inline native$CString$[] (var1,var2) on <var1:CString> */
var5 = (unsigned char)((int)var1[var2]);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteReverseIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteReverseIterator$next for (self: FlatStringByteReverseIterator) */
void core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringByteReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringByteReverseIterator>*/
}
{
{ /* Inline kernel$Int$- (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var4 = var - 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatStringByteReverseIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatStringByteReverseIterator$index for (self: FlatStringByteReverseIterator): Int */
long core__flat___core__flat__FlatStringByteReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringByteReverseIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target]))(self); /* target on <self:FlatStringByteReverseIterator>*/
}
var3 = var2->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var2:FlatString> */
{
{ /* Inline kernel$Int$- (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var1 - var3;
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
/* method flat$FlatStringByteIterator$target for (self: FlatStringByteIterator): FlatString */
val* core__flat___core__flat__FlatStringByteIterator___target(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteIterator___target].val; /* _target on <self:FlatStringByteIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 822);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteIterator$target= for (self: FlatStringByteIterator, FlatString) */
void core__flat___core__flat__FlatStringByteIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatStringByteIterator___target].val = p0; /* _target on <self:FlatStringByteIterator> */
RET_LABEL:;
}
/* method flat$FlatStringByteIterator$target_items for (self: FlatStringByteIterator): CString */
char* core__flat___core__flat__FlatStringByteIterator___target_items(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteIterator___target_items].str; /* _target_items on <self:FlatStringByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteIterator$target_items= for (self: FlatStringByteIterator, CString) */
void core__flat___core__flat__FlatStringByteIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatStringByteIterator___target_items].str = p0; /* _target_items on <self:FlatStringByteIterator> */
RET_LABEL:;
}
/* method flat$FlatStringByteIterator$curr_pos for (self: FlatStringByteIterator): Int */
long core__flat___core__flat__FlatStringByteIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l; /* _curr_pos on <self:FlatStringByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteIterator$curr_pos= for (self: FlatStringByteIterator, Int) */
void core__flat___core__flat__FlatStringByteIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatStringByteIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatStringByteIterator> */
RET_LABEL:;
}
/* method flat$FlatStringByteIterator$init for (self: FlatStringByteIterator) */
void core__flat___core__flat__FlatStringByteIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatString */;
val* var_tgt /* var tgt: FlatString */;
char* var1 /* : CString */;
val* var_ /* var : FlatStringByteIterator */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatStringByteIterator___core__kernel__Object__init]))(self); /* init on <self:FlatStringByteIterator>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__target]))(self); /* target on <self:FlatStringByteIterator>*/
}
var_tgt = var;
var1 = var_tgt->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tgt:FlatString> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__target_items_61d]))(self, var1); /* target_items= on <self:FlatStringByteIterator>*/
}
var_ = self;
{
var2 = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringByteIterator>*/
}
var3 = var_tgt->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tgt:FlatString> */
{
{ /* Inline kernel$Int$+ (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var2 + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos_61d]))(var_, var4); /* curr_pos= on <var_:FlatStringByteIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatStringByteIterator$is_ok for (self: FlatStringByteIterator): Bool */
short int core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringByteIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__target]))(self); /* target on <self:FlatStringByteIterator>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__flat__FlatText__last_byte]))(var2); /* last_byte on <var2:FlatString>*/
}
{
{ /* Inline kernel$Int$<= (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var7 = var1 <= var3;
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
/* method flat$FlatStringByteIterator$item for (self: FlatStringByteIterator): Byte */
unsigned char core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : CString */;
long var2 /* : Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__target_items]))(self); /* target_items on <self:FlatStringByteIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringByteIterator>*/
}
{
{ /* Inline native$CString$[] (var1,var2) on <var1:CString> */
var5 = (unsigned char)((int)var1[var2]);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteIterator$next for (self: FlatStringByteIterator) */
void core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatStringByteIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatStringByteIterator>*/
}
{
{ /* Inline kernel$Int$+ (var,1l) on <var:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var3 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var4 = var + 1l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatStringByteIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatStringByteIterator$index for (self: FlatStringByteIterator): Int */
long core__flat___core__flat__FlatStringByteIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
val* var2 /* : FlatString */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos]))(self); /* curr_pos on <self:FlatStringByteIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatStringByteIterator__target]))(self); /* target on <self:FlatStringByteIterator>*/
}
var3 = var2->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var2:FlatString> */
{
{ /* Inline kernel$Int$- (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var1 - var3;
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
/* method flat$FlatStringByteView$[] for (self: FlatStringByteView, Int): Byte */
unsigned char core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
val* var_target /* var target: FlatString */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var_ind /* var ind: Int */;
char* var23 /* : CString */;
unsigned char var24 /* : Byte */;
unsigned char var26 /* : Byte */;
var_index = p0;
var1 = self->attrs[COLOR_core__abstract_text__StringByteView___target].val; /* _target on <self:FlatStringByteView> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 854);
fatal_exit(1);
}
var_target = var1;
{
{ /* Inline kernel$Int$>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var6 = var_index >= 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var7 = var_target->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_target:FlatString> */
{
{ /* Inline kernel$Int$< (var_index,var7) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_index < var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var2 = var8;
} else {
var2 = var_;
}
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 855);
fatal_exit(1);
}
var15 = var_target->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_target:FlatString> */
{
{ /* Inline kernel$Int$+ (var_index,var15) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var15:Int> isa OTHER */
/* <var15:Int> isa OTHER */
var18 = 1; /* easy <var15:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_index + var15;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_ind = var16;
var23 = var_target->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_target:FlatString> */
{
{ /* Inline native$CString$[] (var23,var_ind) on <var23:CString> */
var26 = (unsigned char)((int)var23[var_ind]);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteView$[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteView$iterator_from for (self: FlatStringByteView, Int): IndexedIterator[Byte] */
val* core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringByteIterator */;
val* var2 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringByteIterator(&type_core__flat__FlatStringByteIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:FlatStringByteView>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatStringByteIterator__target_61d]))(var1, var2); /* target= on <var1:FlatStringByteIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatStringByteIterator__curr_pos_61d]))(var1, var_start); /* curr_pos= on <var1:FlatStringByteIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatStringByteView$reverse_iterator_from for (self: FlatStringByteView, Int): IndexedIterator[Byte] */
val* core__flat___core__flat__FlatStringByteView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_start /* var start: Int */;
val* var1 /* : FlatStringByteReverseIterator */;
val* var2 /* : Text */;
var_start = p0;
var1 = NEW_core__flat__FlatStringByteReverseIterator(&type_core__flat__FlatStringByteReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:FlatStringByteView>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__target_61d]))(var1, var2); /* target= on <var1:FlatStringByteReverseIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatStringByteReverseIterator__curr_pos_61d]))(var1, var_start); /* curr_pos= on <var1:FlatStringByteReverseIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatStringByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$Buffer$new for (self: Buffer): Buffer */
val* core__flat___Buffer___new(val* self) {
val* var /* : Buffer */;
val* var1 /* : FlatBuffer */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$Buffer$with_cap for (self: Buffer, Int): Buffer */
val* core__flat___Buffer___with_cap(val* self, long p0) {
val* var /* : Buffer */;
long var_i /* var i: Int */;
val* var1 /* : FlatBuffer */;
var_i = p0;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBuffer__with_capacity]))(var1, var_i); /* with_capacity on <var1:FlatBuffer>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBuffer$chars for (self: FlatBuffer): SequenceRead[Char] */
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
/* method flat$FlatBuffer$bytes for (self: FlatBuffer): SequenceRead[Byte] */
val* core___core__FlatBuffer___core__abstract_text__Text__bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
val* var1 /* : FlatBufferByteView */;
var1 = NEW_core__flat__FlatBufferByteView(&type_core__flat__FlatBufferByteView);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__StringByteView__target_61d]))(var1, self); /* target= on <var1:FlatBufferByteView>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferByteView>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBuffer$capacity for (self: FlatBuffer): Int */
long core___core__FlatBuffer___capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBuffer___capacity].l; /* _capacity on <self:FlatBuffer> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBuffer$capacity= for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___capacity_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = p0; /* _capacity on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat$FlatBuffer$fast_cstring for (self: FlatBuffer): CString */
char* core___core__FlatBuffer___core__abstract_text__FlatText__fast_cstring(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
char* var2 /* : CString */;
char* var4 /* : CString */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
{
{ /* Inline native$CString$fast_cstring (var1,0l) on <var1:CString> */
var4 = var1 + 0l;
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
/* method flat$FlatBuffer$substrings for (self: FlatBuffer): Iterator[FlatText] */
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
/* method flat$FlatBuffer$reset for (self: FlatBuffer) */
void core___core__FlatBuffer___reset(val* self) {
static char* varoncenew;
static int varoncenew_guard;
char* var /* : CString */;
char* var1 /* : CString */;
long var2 /* : Int */;
char* var3 /* : CString */;
char* var5 /* : CString */;
char* var_nns /* var nns: CString */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
char* var11 /* : CString */;
long var12 /* : Int */;
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NULL/*special!*/;
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
{ /* Inline native$CString$new (var,var2) on <var:CString> */
var5 = (char*)nit_alloc(var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_nns = var3;
var6 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
{
{ /* Inline kernel$Int$!= (var6,0l) on <var6:Int> */
var9 = var6 == 0l;
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var11 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var12 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
{
{ /* Inline native$CString$copy_to (var11,var_nns,var12,0l,0l) on <var11:CString> */
memmove(var_nns+0l,var11+0l,var12);
RET_LABEL13:(void)0;
}
}
} else {
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_nns; /* _items on <self:FlatBuffer> */
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 0); /* written= on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method flat$FlatBuffer$rshift_bytes for (self: FlatBuffer, Int, Int) */
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
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var30 /* : CString */;
char* var31 /* : CString */;
long var32 /* : Int */;
char* var33 /* : CString */;
char* var35 /* : CString */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
var_from = p0;
var_len = p1;
var = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_oit = var;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_nit = var1;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
var_bt = var2;
{
{ /* Inline kernel$Int$+ (var_bt,var_len) on <var_bt:Int> */
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
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$> (var3,var7) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var14 = var3 > var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$* (var15,2l) on <var15:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var18 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var22 = var15 * 2l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var16,2l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var25 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var29 = var16 + 2l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity_61d]))(self, var23); /* capacity= on <self:FlatBuffer>*/
}
if (likely(varoncenew_guard)) {
var30 = varoncenew;
} else {
var31 = NULL/*special!*/;
var30 = var31;
varoncenew = var30;
varoncenew_guard = 1;
}
{
var32 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
{ /* Inline native$CString$new (var30,var32) on <var30:CString> */
var35 = (char*)nit_alloc(var32);
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_nit = var33;
{
{ /* Inline native$CString$copy_to (var_oit,var_nit,0l,0l,var_from) on <var_oit:CString> */
memmove(var_nit+var_from,var_oit+0l,0l);
RET_LABEL36:(void)0;
}
}
} else {
}
{
{ /* Inline kernel$Int$- (var_bt,var_from) on <var_bt:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var39 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var43 = var_bt - var_from;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_from,var_len) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var46 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_from + var_len;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline native$CString$copy_to (var_oit,var_nit,var37,var_from,var44) on <var_oit:CString> */
memmove(var_nit+var44,var_oit+var_from,var37);
RET_LABEL51:(void)0;
}
}
RET_LABEL:;
}
/* method flat$FlatBuffer$lshift_bytes for (self: FlatBuffer, Int, Int) */
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
{ /* Inline kernel$Int$- (var1,var_from) on <var1:Int> */
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
{ /* Inline kernel$Int$- (var_from,var_len) on <var_from:Int> */
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
{ /* Inline native$CString$copy_to (var_it,var_it,var2,var_from,var6) on <var_it:CString> */
memmove(var_it+var6,var_it+var_from,var2);
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
