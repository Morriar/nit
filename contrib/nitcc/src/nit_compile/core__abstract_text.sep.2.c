#include "core__abstract_text.sep.0.h"
/* method abstract_text$Buffer$* for (self: Buffer, Int): Buffer */
val* core___core__Buffer___Text___42d(val* self, long p0) {
val* var /* : Buffer */;
long var_i /* var i: Int */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var8 /* : Buffer */;
val* var_ret /* var ret: Buffer */;
long var_its /* var its: Int */;
long var_ /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
long var16 /* : Int */;
var_i = p0;
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
{ /* Inline kernel$Int$* (var3,var_i) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var6 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var7 = var3 * var_i;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var8 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var1, var4); /* with_cap on <var1:Buffer>*/
}
var_ret = var8;
var_its = 0l;
var_ = var_i;
for(;;) {
{
{ /* Inline kernel$Int$< (var_its,var_) on <var_its:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var11 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var15 = var_its < var_;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
} else {
goto BREAK_label;
}
{
((void(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_ret, self); /* append on <var_ret:Buffer>*/
}
var16 = core___core__Int___Discrete__successor(var_its, 1l);
var_its = var16;
}
BREAK_label: (void)0;
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$insert_at for (self: Buffer, String, Int): Buffer */
val* core___core__Buffer___Text__insert_at(val* self, val* p0, long p1) {
val* var /* : Buffer */;
val* var_s /* var s: String */;
long var_pos /* var pos: Int */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
val* var9 /* : Buffer */;
val* var_obuf /* var obuf: Buffer */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
var_s = p0;
var_pos = p1;
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
var4 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:String>*/
}
{
{ /* Inline kernel$Int$+ (var3,var4) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var3 + var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var9 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var1, var5); /* with_cap on <var1:Buffer>*/
}
var_obuf = var9;
{
((void(*)(val* self, val* p0, long p1, long p2))(var_obuf->class->vft[COLOR_core__abstract_text__Buffer__append_substring]))(var_obuf, self, 0l, var_pos); /* append_substring on <var_obuf:Buffer>*/
}
{
((void(*)(val* self, val* p0))(var_obuf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_obuf, var_s); /* append on <var_obuf:Buffer>*/
}
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Buffer>*/
}
{
{ /* Inline kernel$Int$- (var10,var_pos) on <var10:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var13 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var17 = var10 - var_pos;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
((void(*)(val* self, val* p0, long p1, long p2))(var_obuf->class->vft[COLOR_core__abstract_text__Buffer__append_substring]))(var_obuf, self, var_pos, var11); /* append_substring on <var_obuf:Buffer>*/
}
var = var_obuf;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$insert for (self: Buffer, Text, Int) */
void core___core__Buffer___insert(val* self, val* p0, long p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "insert", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1593);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$insert_char for (self: Buffer, Char, Int) */
void core___core__Buffer___insert_char(val* self, uint32_t p0, long p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "insert_char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1603);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$remove_at for (self: Buffer, Int, nullable Int) */
void core___core__Buffer___remove_at(val* self, long p0, val* p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "remove_at", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 1613);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_text$Buffer$reversed for (self: Buffer): Buffer */
val* core___core__Buffer___Text__reversed(val* self) {
val* var /* : Buffer */;
val* var1 /* : Cloneable */;
val* var_ret /* var ret: Buffer */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__kernel__Cloneable__clone]))(self); /* clone on <self:Buffer>*/
}
var_ret = var1;
{
((void(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Buffer__reverse]))(var_ret); /* reverse on <var_ret:Buffer>*/
}
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$to_upper for (self: Buffer): Buffer */
val* core___core__Buffer___Text__to_upper(val* self) {
val* var /* : Buffer */;
val* var1 /* : Cloneable */;
val* var_ret /* var ret: Buffer */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__kernel__Cloneable__clone]))(self); /* clone on <self:Buffer>*/
}
var_ret = var1;
{
((void(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Buffer__upper]))(var_ret); /* upper on <var_ret:Buffer>*/
}
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$to_lower for (self: Buffer): Buffer */
val* core___core__Buffer___Text__to_lower(val* self) {
val* var /* : Buffer */;
val* var1 /* : Cloneable */;
val* var_ret /* var ret: Buffer */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__kernel__Cloneable__clone]))(self); /* clone on <self:Buffer>*/
}
var_ret = var1;
{
((void(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Buffer__lower]))(var_ret); /* lower on <var_ret:Buffer>*/
}
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$to_snake_case for (self: Buffer): Buffer */
val* core___core__Buffer___Text__to_snake_case(val* self) {
val* var /* : Buffer */;
val* var1 /* : Cloneable */;
val* var_ret /* var ret: Buffer */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__kernel__Cloneable__clone]))(self); /* clone on <self:Buffer>*/
}
var_ret = var1;
{
((void(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Buffer__snake_case]))(var_ret); /* snake_case on <var_ret:Buffer>*/
}
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$snake_case for (self: Buffer) */
void core___core__Buffer___snake_case(val* self) {
short int var /* : Bool */;
short int var_prev_is_lower /* var prev_is_lower: Bool */;
short int var_prev_is_upper /* var prev_is_upper: Bool */;
long var_i /* var i: Int */;
long var1 /* : Int */;
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
short int var10 /* : Bool */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
short int var_35 /* var : Bool */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
uint32_t var43 /* : Char */;
short int var44 /* : Bool */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
uint32_t var52 /* : Char */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_lower]))(self); /* is_lower on <self:Buffer>*/
}
if (var){
goto RET_LABEL;
} else {
}
var_prev_is_lower = 0;
var_prev_is_upper = 0;
var_i = 0l;
for(;;) {
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Buffer>*/
}
{
{ /* Inline kernel$Int$< (var_i,var1) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_i < var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:Buffer>*/
}
{
var7 = ((val*(*)(val* self, long p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var6, var_i); /* [] on <var6:SequenceRead[Char](Sequence[Char])>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_char = var8;
var9 = core___core__Char___is_lower(var_char);
if (var9){
var_prev_is_lower = 1;
var_prev_is_upper = 0;
} else {
var10 = core___core__Char___is_upper(var_char);
if (var10){
if (var_prev_is_lower){
{
((void(*)(val* self, uint32_t p0, long p1))(self->class->vft[COLOR_core__abstract_text__Buffer__insert_char]))(self, '_', var_i); /* insert_char on <self:Buffer>*/
}
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
} else {
var_ = var_prev_is_upper;
if (var_prev_is_upper){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var_i + 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
var27 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Buffer>*/
}
{
{ /* Inline kernel$Int$< (var20,var27) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var34 = var20 < var27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var19 = var28;
} else {
var19 = var_;
}
var_35 = var19;
if (var19){
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
{
var43 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var36); /* [] on <self:Buffer>*/
}
var44 = core___core__Char___is_lower(var43);
var18 = var44;
} else {
var18 = var_35;
}
if (var18){
{
((void(*)(val* self, uint32_t p0, long p1))(self->class->vft[COLOR_core__abstract_text__Buffer__insert_char]))(self, '_', var_i); /* insert_char on <self:Buffer>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var47 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var51 = var_i + 1l;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_i = var45;
} else {
}
}
var52 = core___core__Char___to_lower(var_char);
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, var_i, var52); /* []= on <self:Buffer>*/
}
var_prev_is_lower = 0;
var_prev_is_upper = 1;
} else {
var_prev_is_lower = 0;
var_prev_is_upper = 0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
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
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_text$Buffer$to_camel_case for (self: Buffer): Buffer */
val* core___core__Buffer___Text__to_camel_case(val* self) {
val* var /* : Buffer */;
val* var1 /* : Cloneable */;
val* var_new_str /* var new_str: Buffer */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__kernel__Cloneable__clone]))(self); /* clone on <self:Buffer>*/
}
var_new_str = var1;
{
((void(*)(val* self))(var_new_str->class->vft[COLOR_core__abstract_text__Buffer__camel_case]))(var_new_str); /* camel_case on <var_new_str:Buffer>*/
}
var = var_new_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Buffer$camel_case for (self: Buffer) */
void core___core__Buffer___camel_case(val* self) {
short int var /* : Bool */;
long var_underscore_count /* var underscore_count: Int */;
long var_pos /* var pos: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
uint32_t var6 /* : Char */;
uint32_t var_char /* var char: Char */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
val* var31 /* : nullable Int */;
uint32_t var32 /* : Char */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var46 /* : Bool */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
val* var61 /* : nullable Int */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_upper]))(self); /* is_upper on <self:Buffer>*/
}
if (var){
goto RET_LABEL;
} else {
}
var_underscore_count = 0l;
var_pos = 1l;
for(;;) {
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Buffer>*/
}
{
{ /* Inline kernel$Int$< (var_pos,var1) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_pos < var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_pos); /* [] on <self:Buffer>*/
}
var_char = var6;
{
{ /* Inline kernel$Char$== (var_char,'_') on <var_char:Char> */
var9 = var_char == '_';
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline kernel$Int$+ (var_underscore_count,1l) on <var_underscore_count:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var16 = var_underscore_count + 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_underscore_count = var10;
} else {
{
{ /* Inline kernel$Int$> (var_underscore_count,0l) on <var_underscore_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var19 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var23 = var_underscore_count > 0l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline kernel$Int$- (var_pos,var_underscore_count) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_underscore_count:Int> isa OTHER */
/* <var_underscore_count:Int> isa OTHER */
var26 = 1; /* easy <var_underscore_count:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var30 = var_pos - var_underscore_count;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_pos = var24;
{
var31 = (val*)(var_underscore_count<<2|1);
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__abstract_text__Buffer__remove_at]))(self, var_pos, var31); /* remove_at on <self:Buffer>*/
}
var32 = core___core__Char___to_upper(var_char);
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, var_pos, var32); /* []= on <self:Buffer>*/
}
var_underscore_count = 0l;
} else {
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var39 = var_pos + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_pos = var33;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$> (var_underscore_count,0l) on <var_underscore_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var42 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var46 = var_underscore_count > 0l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
{
{ /* Inline kernel$Int$- (var_pos,var_underscore_count) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_underscore_count:Int> isa OTHER */
/* <var_underscore_count:Int> isa OTHER */
var49 = 1; /* easy <var_underscore_count:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var53 = var_pos - var_underscore_count;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var47,1l) on <var47:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var60 = var47 - 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var61 = (val*)(var_underscore_count<<2|1);
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__abstract_text__Buffer__remove_at]))(self, var54, var61); /* remove_at on <self:Buffer>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_text$Buffer$capitalized for (self: Buffer, nullable Bool): Buffer */
val* core___core__Buffer___Text__capitalized(val* self, val* p0) {
val* var /* : Buffer */;
val* var_keep_upper /* var keep_upper: nullable Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
static val* varoncenew;
static int varoncenew_guard;
val* var5 /* : Buffer */;
val* var6 /* : Buffer */;
long var7 /* : Int */;
val* var8 /* : Buffer */;
val* var_buf /* var buf: Buffer */;
var_keep_upper = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Buffer>*/
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
var = self;
goto RET_LABEL;
} else {
}
if (likely(varoncenew_guard)) {
var5 = varoncenew;
} else {
var6 = NEW_core__Buffer(&type_core__Buffer);
var5 = var6;
varoncenew = var5;
varoncenew_guard = 1;
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:Buffer>*/
}
{
var8 = ((val*(*)(val* self, long p0))(var5->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var5, var7); /* with_cap on <var5:Buffer>*/
}
var_buf = var8;
{
((void(*)(val* self, val* p0, val* p1))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__capitalize]))(var_buf, var_keep_upper, self); /* capitalize on <var_buf:Buffer>*/
}
var = var_buf;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Object$to_s for (self: Object): String */
val* core__abstract_text___Object___to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_text__Object__inspect]))(self); /* inspect on <self:Object>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Object$native_class_name for (self: Object): CString */
char* core__abstract_text___Object___native_class_name(val* self) {
char* var /* : CString */;
const char* var_class_name;
char* var1 /* : CString */;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
var1 = (char*)var_class_name;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Object$class_name for (self: Object): String */
val* core__abstract_text___Object___class_name(val* self) {
val* var /* : String */;
char* var1 /* : CString */;
const char* var_class_name;
char* var3 /* : CString */;
val* var4 /* : String */;
{
{ /* Inline abstract_text$Object$native_class_name (self) on <self:Object> */
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
var3 = (char*)var_class_name;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var4 = core__flat___CString___core__abstract_text__Object__to_s(var1);
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Object$inspect for (self: Object): String */
val* core__abstract_text___Object___inspect(val* self) {
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
val* var18 /* : String */;
val* var19 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "<";
var6 = (val*)(1l<<2|1);
var7 = (val*)(1l<<2|1);
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
var12 = ">";
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
var18 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_text__Object__inspect_head]))(self); /* inspect_head on <self:Object>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Object$inspect_head for (self: Object): String */
val* core__abstract_text___Object___inspect_head(val* self) {
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
long var11 /* : Int */;
val* var12 /* : String */;
val* var13 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ":#";
var6 = (val*)(2l<<2|1);
var7 = (val*)(2l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_text__Object__class_name]))(self); /* class_name on <self:Object>*/
}
((struct instance_core__NativeArray*)var1)->values[0]=var10;
{
var11 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Object__object_id]))(self); /* object_id on <self:Object>*/
}
var12 = core__abstract_text___Int___to_hex(var11);
((struct instance_core__NativeArray*)var1)->values[2]=var12;
{
var13 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Bool$to_s for (self: Bool): String */
val* core__abstract_text___Bool___Object__to_s(short int self) {
val* var /* : String */;
static val* varonce;
static int varonce_guard;
val* var1 /* : String */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
static val* varonce10;
static int varonce10_guard;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
if (self){
if (likely(varonce_guard)) {
var1 = varonce;
} else {
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "true";
var6 = (val*)(4l<<2|1);
var7 = (val*)(4l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
var1 = var3;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
} else {
if (likely(varonce10_guard)) {
var11 = varonce10;
} else {
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "false";
var16 = (val*)(5l<<2|1);
var17 = (val*)(5l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
var11 = var13;
varonce10 = var11;
varonce10_guard = 1;
}
var = var11;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_text$Bool$to_s for (self: Object): String */
val* VIRTUAL_core__abstract_text___Bool___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
short int var2 /* : Bool */;
var2 = (short int)((long)(self)>>2);
var1 = core__abstract_text___Bool___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Byte$byte_to_s_len for (self: Byte): Int */
long core__abstract_text___Byte___byte_to_s_len(unsigned char self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__abstract_text___Byte_byte_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Byte$native_byte_to_s for (self: Byte, CString, Int) */
void core__abstract_text___Byte___native_byte_to_s(unsigned char self, char* p0, long p1) {
core__abstract_text___Byte_native_byte_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method abstract_text$Byte$to_s for (self: Byte): String */
val* core__abstract_text___Byte___Object__to_s(unsigned char self) {
val* var /* : String */;
long var1 /* : Int */;
long var_nslen /* var nslen: Int */;
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
char* var_ns /* var ns: CString */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
var1 = core__abstract_text___Byte___byte_to_s_len(self);
var_nslen = var1;
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NULL/*special!*/;
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var_nslen + 1l;
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
var_ns = var8;
{
{ /* Inline native$CString$[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var_nslen + 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
core__abstract_text___Byte___native_byte_to_s(self, var_ns, var12); /* Direct call abstract_text$Byte$native_byte_to_s on <self:Byte>*/
var20 = (val*)(var_nslen<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var_ns, var20, ((val*)NULL), var21, var22);
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Byte$to_s for (self: Object): String */
val* VIRTUAL_core__abstract_text___Byte___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
unsigned char var2 /* : Byte */;
var2 = ((struct instance_core__Byte*)self)->value; /* autounbox from Object to Byte */;
var1 = core__abstract_text___Byte___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Int$strerror_ext for (self: Int): CString */
char* core__abstract_text___Int___strerror_ext(long self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = core__abstract_text___Int_strerror_ext___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Int$strerror for (self: Int): String */
val* core__abstract_text___Int___strerror(long self) {
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
var1 = core__abstract_text___Int___strerror_ext(self);
var2 = core__flat___CString___core__abstract_text__Object__to_s(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Int$fill_buffer for (self: Int, Buffer, Int) */
void core__abstract_text___Int___fill_buffer(long self, val* p0, long p1) {
val* var_s /* var s: Buffer */;
long var_base /* var base: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var6 /* : Int */;
long var_n /* var n: Int */;
val* var7 /* : SequenceRead[Char] */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : SequenceRead[Char] */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var_pos /* var pos: Int */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var37 /* : SequenceRead[Char] */;
long var38 /* : Int */;
long var40 /* : Int */;
uint32_t var41 /* : Char */;
val* var42 /* : nullable Object */;
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
var_s = p0;
var_base = p1;
{
{ /* Inline kernel$Int$< (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var3 = self < 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
{
{ /* Inline kernel$Int$unary - (self) on <self:Int> */
var6 = -self;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_n = var4;
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
var8 = (val*)((long)('-')<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var7, 0l, var8); /* []= on <var7:SequenceRead[Char](Sequence[Char])>*/
}
} else {
{
{ /* Inline kernel$Int$== (self,0l) on <self:Int> */
var11 = self == 0l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var12 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
var13 = (val*)((long)('0')<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var12, 0l, var13); /* []= on <var12:SequenceRead[Char](Sequence[Char])>*/
}
goto RET_LABEL;
} else {
var_n = self;
}
}
var14 = core___core__Int___digit_count(self, var_base);
{
{ /* Inline kernel$Int$- (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var21 = var14 - 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_pos = var15;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var25 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var29 = var_pos >= 0l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_ = var23;
if (var23){
{
{ /* Inline kernel$Int$> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var36 = var_n > 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var22 = var30;
} else {
var22 = var_;
}
if (var22){
{
var37 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
{ /* Inline kernel$Int$% (var_n,var_base) on <var_n:Int> */
var40 = var_n % var_base;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var41 = core___core__Int___to_c(var38);
{
var42 = (val*)((long)(var41)<<2|2);
((void(*)(val* self, long p0, val* p1))((((long)var37&3)?class_info[((long)var37&3)]:var37->class)->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var37, var_pos, var42); /* []= on <var37:SequenceRead[Char](Sequence[Char])>*/
}
{
{ /* Inline kernel$Int$/ (var_n,var_base) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_base:Int> isa OTHER */
/* <var_base:Int> isa OTHER */
var45 = 1; /* easy <var_base:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var49 = var_n / var_base;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_n = var43;
{
{ /* Inline kernel$Int$- (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var52 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var56 = var_pos - 1l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_pos = var50;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_text$Int$int_to_s_len for (self: Int): Int */
long core__abstract_text___Int___int_to_s_len(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__abstract_text___Int_int_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Int$native_int_to_s for (self: Int, CString, Int) */
void core__abstract_text___Int___native_int_to_s(long self, char* p0, long p1) {
core__abstract_text___Int_native_int_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method abstract_text$Int$to_base for (self: Int, Int): String */
val* core__abstract_text___Int___to_base(long self, long p0) {
val* var /* : String */;
long var_base /* var base: Int */;
long var1 /* : Int */;
long var_l /* var l: Int */;
static val* varoncenew;
static int varoncenew_guard;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var4 /* : Buffer */;
val* var_s /* var s: Buffer */;
long var_x /* var x: Int */;
long var_ /* var : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
long var9 /* : Int */;
val* var10 /* : String */;
var_base = p0;
var1 = core___core__Int___digit_count(self, var_base);
var_l = var1;
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NEW_core__Buffer(&type_core__Buffer);
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
var4 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Buffer__new]))(var2); /* new on <var2:Buffer>*/
}
var_s = var4;
{
((void(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__enlarge]))(var_s, var_l); /* enlarge on <var_s:Buffer>*/
}
var_x = 0l;
var_ = var_l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_x,var_) on <var_x:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var7 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_x < var_;
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
((void(*)(val* self, uint32_t p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_s, ' '); /* add on <var_s:Buffer>*/
}
var9 = core___core__Int___Discrete__successor(var_x, 1l);
var_x = var9;
}
BREAK_label: (void)0;
core__abstract_text___Int___fill_buffer(self, var_s, var_base); /* Direct call abstract_text$Int$fill_buffer on <self:Int>*/
{
var10 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Int$to_hex for (self: Int): String */
val* core__abstract_text___Int___to_hex(long self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = core__abstract_text___Int___to_base(self, 16l);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Float$to_s for (self: Float): String */
val* core__abstract_text___Float___Object__to_s(double self) {
val* var /* : String */;
val* var1 /* : String */;
val* var_str /* var str: String */;
short int var2 /* : Bool */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var_len /* var len: Int */;
long var_i /* var i: Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var_14 /* var : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
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
long var_j /* var j: Int */;
val* var36 /* : SequenceRead[Char] */;
val* var37 /* : nullable Object */;
uint32_t var38 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
val* var53 /* : Text */;
long var54 /* : Int */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
long var60 /* : Int */;
val* var61 /* : Text */;
long var62 /* : Int */;
var1 = core__abstract_text___Float___to_precision(self, 3l);
var_str = var1;
var3 = core__math___Float___is_inf(self);
{
{ /* Inline kernel$Int$!= (var3,0l) on <var3:Int> */
var6 = var3 == 0l;
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
var2 = var_;
} else {
var8 = core__math___Float___is_nan(self);
var2 = var8;
}
if (var2){
var = var_str;
goto RET_LABEL;
} else {
}
{
var9 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:String>*/
}
var_len = var9;
var_i = 0l;
{
{ /* Inline kernel$Int$- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var_len - 1l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_14 = var10;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_i,var_14) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_14:Int> isa OTHER */
/* <var_14:Int> isa OTHER */
var17 = 1; /* easy <var_14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var21 = var_i <= var_14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel$Int$- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var24 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var28 = var_len - 1l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var22,var_i) on <var22:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var31 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var35 = var22 - var_i;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_j = var29;
{
var36 = ((val*(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__chars]))(var_str); /* chars on <var_str:String>*/
}
{
var37 = ((val*(*)(val* self, long p0))((((long)var36&3)?class_info[((long)var36&3)]:var36->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var36, var_j); /* [] on <var36:SequenceRead[Char]>*/
}
var38 = (uint32_t)((long)(var37)>>2);
var_c = var38;
{
{ /* Inline kernel$Char$== (var_c,'0') on <var_c:Char> */
var41 = var_c == '0';
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
goto BREAK_label42;
} else {
{
{ /* Inline kernel$Char$== (var_c,'.') on <var_c:Char> */
var45 = var_c == '.';
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
{ /* Inline kernel$Int$+ (var_j,2l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var48 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var52 = var_j + 2l;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
var53 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 0l, var46); /* substring on <var_str:String>*/
}
var = var53;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var56 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var60 = var_j + 1l;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
var61 = ((val*(*)(val* self, long p0, long p1))(var_str->class->vft[COLOR_core__abstract_text__Text__substring]))(var_str, 0l, var54); /* substring on <var_str:String>*/
}
var = var61;
goto RET_LABEL;
}
}
BREAK_label42: (void)0;
var62 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var62;
}
BREAK_label: (void)0;
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Float$to_s for (self: Object): String */
val* VIRTUAL_core__abstract_text___Float___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
double var2 /* : Float */;
var2 = ((struct instance_core__Float*)self)->value; /* autounbox from Object to Float */;
var1 = core__abstract_text___Float___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Float$to_precision for (self: Float, Int): String */
val* core__abstract_text___Float___to_precision(double self, long p0) {
val* var /* : String */;
long var_decimals /* var decimals: Int */;
short int var1 /* : Bool */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
long var9 /* : Int */;
long var_isinf /* var isinf: Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
long var21 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
long var38 /* : Int */;
long var40 /* : Int */;
val* var41 /* : String */;
double var_f /* var f: Float */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var45 /* : Bool */;
double var46 /* : Float */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
double var52 /* : Float */;
long var53 /* : Int */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
short int var60 /* : Bool */;
double var61 /* : Float */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
double var67 /* : Float */;
double var68 /* : Float */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
double var74 /* : Float */;
long var75 /* : Int */;
long var77 /* : Int */;
long var_i78 /* var i: Int */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Bool */;
val* var97 /* : nullable Bool */;
val* var98 /* : Text */;
val* var99 /* : Text */;
long var100 /* : Int */;
val* var101 /* : String */;
val* var_s /* var s: String */;
long var102 /* : Int */;
long var_sl /* var sl: Int */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
short int var109 /* : Bool */;
long var110 /* : Int */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
long var116 /* : Int */;
val* var117 /* : Text */;
val* var_p1 /* var p1: nullable Object */;
long var118 /* : Int */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
long var124 /* : Int */;
val* var125 /* : Text */;
val* var_p2 /* var p2: nullable Object */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Bool */;
val* var133 /* : nullable Bool */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Bool */;
val* var141 /* : nullable Bool */;
long var142 /* : Int */;
short int var144 /* : Bool */;
int cltype145;
int idtype146;
const char* var_class_name147;
long var148 /* : Int */;
val* var149 /* : Text */;
val* var150 /* : Text */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
int cltype154;
int idtype155;
const char* var_class_name156;
short int var157 /* : Bool */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
val* var162 /* : nullable Int */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Bool */;
val* var165 /* : nullable Bool */;
val* var166 /* : Text */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Bool */;
val* var174 /* : nullable Bool */;
val* var175 /* : Text */;
val* var176 /* : Text */;
var_decimals = p0;
var1 = core__math___Float___is_nan(self);
if (var1){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "nan";
var5 = (val*)(3l<<2|1);
var6 = (val*)(3l<<2|1);
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
var9 = core__math___Float___is_inf(self);
var_isinf = var9;
{
{ /* Inline kernel$Int$== (var_isinf,1l) on <var_isinf:Int> */
var12 = var_isinf == 1l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "inf";
var17 = (val*)(3l<<2|1);
var18 = (val*)(3l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
var = var14;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var23 = -1l;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_isinf,var21) on <var_isinf:Int> */
var26 = var_isinf == var21;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "-inf";
var31 = (val*)(4l<<2|1);
var32 = (val*)(4l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
var = var28;
goto RET_LABEL;
} else {
}
}
{
{ /* Inline kernel$Int$== (var_decimals,0l) on <var_decimals:Int> */
var37 = var_decimals == 0l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
{
{ /* Inline kernel$Float$to_i (self) on <self:Float> */
var40 = (long)self;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var41 = core__flat___Int___core__abstract_text__Object__to_s(var38);
var = var41;
goto RET_LABEL;
} else {
}
var_f = self;
var_i = 0l;
var_ = var_decimals;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var44 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var45 = var_i < var_;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel$Float$* (var_f,10.0) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <10.0:Float> isa OTHER */
/* <10.0:Float> isa OTHER */
var48 = 1; /* easy <10.0:Float> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var52 = var_f * 10.0;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var_f = var46;
var53 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var53;
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Float$> (self,0.0) on <self:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var56 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 532);
fatal_exit(1);
}
var60 = self > 0.0;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
if (var54){
{
{ /* Inline kernel$Float$+ (var_f,0.5) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <0.5:Float> isa OTHER */
/* <0.5:Float> isa OTHER */
var63 = 1; /* easy <0.5:Float> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var67 = var_f + 0.5;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_f = var61;
} else {
{
{ /* Inline kernel$Float$- (var_f,0.5) on <var_f:Float> */
/* Covariant cast for argument 0 (i) <0.5:Float> isa OTHER */
/* <0.5:Float> isa OTHER */
var70 = 1; /* easy <0.5:Float> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var74 = var_f - 0.5;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_f = var68;
}
{
{ /* Inline kernel$Float$to_i (var_f) on <var_f:Float> */
var77 = (long)var_f;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_i78 = var75;
{
{ /* Inline kernel$Int$== (var_i78,0l) on <var_i78:Int> */
var81 = var_i78 == 0l;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "0.";
var86 = (val*)(2l<<2|1);
var87 = (val*)(2l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "0";
var94 = (val*)(1l<<2|1);
var95 = (val*)(1l<<2|1);
var96 = (val*)((long)(0)<<2|3);
var97 = (val*)((long)(0)<<2|3);
var93 = core__flat___CString___to_s_unsafe(var92, var94, var95, var96, var97);
var91 = var93;
varonce90 = var91;
}
{
var98 = ((val*(*)(val* self, long p0))(var91->class->vft[COLOR_core__abstract_text__Text___42d]))(var91, var_decimals); /* * on <var91:String>*/
}
{
var99 = ((val*(*)(val* self, val* p0))(var83->class->vft[COLOR_core__abstract_text__Text___43d]))(var83, var98); /* + on <var83:String>*/
}
var = var99;
goto RET_LABEL;
} else {
}
var100 = core___core__Int___abs(var_i78);
var101 = core__flat___Int___core__abstract_text__Object__to_s(var100);
var_s = var101;
{
var102 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:String>*/
}
var_sl = var102;
{
{ /* Inline kernel$Int$> (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var105 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var109 = var_sl > var_decimals;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
if (var103){
{
{ /* Inline kernel$Int$- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var112 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var116 = var_sl - var_decimals;
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
{
var117 = ((val*(*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_core__abstract_text__Text__substring]))(var_s, 0l, var110); /* substring on <var_s:String>*/
}
var_p1 = var117;
{
{ /* Inline kernel$Int$- (var_sl,var_decimals) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var_decimals:Int> isa OTHER */
/* <var_decimals:Int> isa OTHER */
var120 = 1; /* easy <var_decimals:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name123 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var124 = var_sl - var_decimals;
var118 = var124;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
{
var125 = ((val*(*)(val* self, long p0, long p1))(var_s->class->vft[COLOR_core__abstract_text__Text__substring]))(var_s, var118, var_decimals); /* substring on <var_s:String>*/
}
var_p2 = var125;
} else {
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "0";
var130 = (val*)(1l<<2|1);
var131 = (val*)(1l<<2|1);
var132 = (val*)((long)(0)<<2|3);
var133 = (val*)((long)(0)<<2|3);
var129 = core__flat___CString___to_s_unsafe(var128, var130, var131, var132, var133);
var127 = var129;
varonce126 = var127;
}
var_p1 = var127;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "0";
var138 = (val*)(1l<<2|1);
var139 = (val*)(1l<<2|1);
var140 = (val*)((long)(0)<<2|3);
var141 = (val*)((long)(0)<<2|3);
var137 = core__flat___CString___to_s_unsafe(var136, var138, var139, var140, var141);
var135 = var137;
varonce134 = var135;
}
{
{ /* Inline kernel$Int$- (var_decimals,var_sl) on <var_decimals:Int> */
/* Covariant cast for argument 0 (i) <var_sl:Int> isa OTHER */
/* <var_sl:Int> isa OTHER */
var144 = 1; /* easy <var_sl:Int> isa OTHER*/
if (unlikely(!var144)) {
var_class_name147 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name147);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var148 = var_decimals - var_sl;
var142 = var148;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
{
var149 = ((val*(*)(val* self, long p0))(var135->class->vft[COLOR_core__abstract_text__Text___42d]))(var135, var142); /* * on <var135:String>*/
}
{
var150 = ((val*(*)(val* self, val* p0))(var149->class->vft[COLOR_core__abstract_text__Text___43d]))(var149, var_s); /* + on <var149:Text(String)>*/
}
var_p2 = var150;
}
{
{ /* Inline kernel$Int$< (var_i78,0l) on <var_i78:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var153 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var153)) {
var_class_name156 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name156);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var157 = var_i78 < 0l;
var151 = var157;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
}
if (var151){
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "-";
var162 = (val*)(1l<<2|1);
var163 = (val*)(1l<<2|1);
var164 = (val*)((long)(0)<<2|3);
var165 = (val*)((long)(0)<<2|3);
var161 = core__flat___CString___to_s_unsafe(var160, var162, var163, var164, var165);
var159 = var161;
varonce158 = var159;
}
{
var166 = ((val*(*)(val* self, val* p0))(var159->class->vft[COLOR_core__abstract_text__Text___43d]))(var159, var_p1); /* + on <var159:String>*/
}
var_p1 = var166;
} else {
}
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = ".";
var171 = (val*)(1l<<2|1);
var172 = (val*)(1l<<2|1);
var173 = (val*)((long)(0)<<2|3);
var174 = (val*)((long)(0)<<2|3);
var170 = core__flat___CString___to_s_unsafe(var169, var171, var172, var173, var174);
var168 = var170;
varonce167 = var168;
}
{
var175 = ((val*(*)(val* self, val* p0))(var_p1->class->vft[COLOR_core__abstract_text__Text___43d]))(var_p1, var168); /* + on <var_p1:nullable Object(String)>*/
}
{
var176 = ((val*(*)(val* self, val* p0))(var175->class->vft[COLOR_core__abstract_text__Text___43d]))(var175, var_p2); /* + on <var175:Text(String)>*/
}
var = var176;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$bytes for (self: Char): SequenceRead[Byte] */
val* core__abstract_text___Char___bytes(uint32_t self) {
val* var /* : SequenceRead[Byte] */;
val* var1 /* : String */;
val* var2 /* : SequenceRead[Byte] */;
var1 = core__abstract_text___Char___Object__to_s(self);
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__bytes]))(var1); /* bytes on <var1:String>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$is_surrogate for (self: Char): Bool */
short int core__abstract_text___Char___is_surrogate(uint32_t self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_cp /* var cp: Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_cp = var1;
{
{ /* Inline kernel$Int$>= (var_cp,55296l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var7 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var8 = var_cp >= 55296l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
{
{ /* Inline kernel$Int$<= (var_cp,57343l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <57343l:Int> isa OTHER */
/* <57343l:Int> isa OTHER */
var11 = 1; /* easy <57343l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var15 = var_cp <= 57343l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var4 = var9;
} else {
var4 = var_;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$is_hi_surrogate for (self: Char): Bool */
short int core__abstract_text___Char___is_hi_surrogate(uint32_t self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_cp /* var cp: Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_cp = var1;
{
{ /* Inline kernel$Int$>= (var_cp,55296l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var7 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var8 = var_cp >= 55296l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
{
{ /* Inline kernel$Int$<= (var_cp,56319l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <56319l:Int> isa OTHER */
/* <56319l:Int> isa OTHER */
var11 = 1; /* easy <56319l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var15 = var_cp <= 56319l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var4 = var9;
} else {
var4 = var_;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$is_lo_surrogate for (self: Char): Bool */
short int core__abstract_text___Char___is_lo_surrogate(uint32_t self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_cp /* var cp: Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_cp = var1;
{
{ /* Inline kernel$Int$>= (var_cp,56320l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <56320l:Int> isa OTHER */
/* <56320l:Int> isa OTHER */
var7 = 1; /* easy <56320l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var8 = var_cp >= 56320l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
{
{ /* Inline kernel$Int$<= (var_cp,57343l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <57343l:Int> isa OTHER */
/* <57343l:Int> isa OTHER */
var11 = 1; /* easy <57343l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var15 = var_cp <= 57343l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var4 = var9;
} else {
var4 = var_;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$u8char_len for (self: Char): Int */
long core__abstract_text___Char___u8char_len(uint32_t self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_c /* var c: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_c = var1;
{
{ /* Inline kernel$Int$< (var_c,128l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var6 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_c < 128l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = 1l;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$<= (var_c,2047l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <2047l:Int> isa OTHER */
/* <2047l:Int> isa OTHER */
var10 = 1; /* easy <2047l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var14 = var_c <= 2047l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var = 2l;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$<= (var_c,65535l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <65535l:Int> isa OTHER */
/* <65535l:Int> isa OTHER */
var17 = 1; /* easy <65535l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var21 = var_c <= 65535l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var = 3l;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$<= (var_c,1114111l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <1114111l:Int> isa OTHER */
/* <1114111l:Int> isa OTHER */
var24 = 1; /* easy <1114111l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var28 = var_c <= 1114111l;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var = 4l;
goto RET_LABEL;
} else {
}
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$to_s for (self: Char): String */
val* core__abstract_text___Char___Object__to_s(uint32_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var_ln /* var ln: Int */;
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
char* var_ns /* var ns: CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
var1 = core__abstract_text___Char___u8char_len(self);
var_ln = var1;
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NULL/*special!*/;
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var_ln + 1l;
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
var_ns = var8;
core__abstract_text___Char___u8char_tos(self, var_ns, var_ln); /* Direct call abstract_text$Char$u8char_tos on <self:Char>*/
var12 = (val*)(var_ln<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var_ns, var12, ((val*)NULL), var13, var14);
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$to_s for (self: Object): String */
val* VIRTUAL_core__abstract_text___Char___Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
uint32_t var2 /* : Char */;
var2 = (uint32_t)((long)(self)>>2);
var1 = core__abstract_text___Char___Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$escape_to_utf16 for (self: Char): String */
val* core__abstract_text___Char___escape_to_utf16(uint32_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_cp /* var cp: Int */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
short int var_17 /* var : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
static val* varoncenew;
static int varoncenew_guard;
val* var25 /* : Buffer */;
val* var26 /* : Buffer */;
val* var27 /* : Buffer */;
val* var_buf /* var buf: Buffer */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
val* var35 /* : String */;
val* var_hx /* var hx: String */;
long var_outid /* var outid: Int */;
val* var36 /* : SequenceRead[Char] */;
val* var37 /* : IndexedIterator[nullable Object] */;
val* var_38 /* var : IndexedIterator[Char] */;
val* var39 /* : Iterator[nullable Object] */;
val* var_40 /* var : Iterator[Char] */;
short int var41 /* : Bool */;
val* var42 /* : nullable Object */;
uint32_t var43 /* : Char */;
uint32_t var_i /* var i: Char */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
static val* varoncenew51;
static int varoncenew51_guard;
val* var52 /* : Buffer */;
val* var53 /* : Buffer */;
val* var54 /* : Buffer */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
long var70 /* : Int */;
long var72 /* : Int */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
val* var80 /* : String */;
val* var_lo /* var lo: String */;
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
long var94 /* : Int */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name99;
long var100 /* : Int */;
val* var101 /* : String */;
val* var_hi /* var hi: String */;
long var_out /* var out: Int */;
val* var_102 /* var : String */;
val* var103 /* : Iterator[Char] */;
val* var_104 /* var : Iterator[Char] */;
short int var105 /* : Bool */;
val* var107 /* : nullable Object */;
uint32_t var108 /* : Char */;
uint32_t var_i109 /* var i: Char */;
long var110 /* : Int */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
long var116 /* : Int */;
val* var_117 /* var : String */;
val* var118 /* : Iterator[Char] */;
val* var_119 /* var : Iterator[Char] */;
short int var120 /* : Bool */;
val* var122 /* : nullable Object */;
uint32_t var123 /* : Char */;
uint32_t var_i124 /* var i: Char */;
long var125 /* : Int */;
short int var127 /* : Bool */;
int cltype128;
int idtype129;
const char* var_class_name130;
long var131 /* : Int */;
val* var132 /* : String */;
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var3 = (long)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_cp = var1;
{
{ /* Inline kernel$Int$< (var_cp,55296l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var7 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var8 = var_cp < 55296l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
var4 = var_;
} else {
{
{ /* Inline kernel$Int$>= (var_cp,57344l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <57344l:Int> isa OTHER */
/* <57344l:Int> isa OTHER */
var12 = 1; /* easy <57344l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var16 = var_cp >= 57344l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_17 = var10;
if (var10){
{
{ /* Inline kernel$Int$<= (var_cp,65535l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65535l:Int> isa OTHER */
/* <65535l:Int> isa OTHER */
var20 = 1; /* easy <65535l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var24 = var_cp <= 65535l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var9 = var18;
} else {
var9 = var_17;
}
var4 = var9;
}
if (var4){
if (likely(varoncenew_guard)) {
var25 = varoncenew;
} else {
var26 = NEW_core__Buffer(&type_core__Buffer);
var25 = var26;
varoncenew = var25;
varoncenew_guard = 1;
}
{
var27 = ((val*(*)(val* self, long p0))(var25->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var25, 6l); /* with_cap on <var25:Buffer>*/
}
var_buf = var27;
if (likely(varonce!=NULL)) {
var28 = varonce;
} else {
var29 = "\\u0000";
var31 = (val*)(6l<<2|1);
var32 = (val*)(6l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce = var28;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var28); /* append on <var_buf:Buffer>*/
}
var35 = core__abstract_text___Int___to_hex(var_cp);
var_hx = var35;
var_outid = 5l;
{
var36 = ((val*(*)(val* self))(var_hx->class->vft[COLOR_core__abstract_text__Text__chars]))(var_hx); /* chars on <var_hx:String>*/
}
{
var37 = ((val*(*)(val* self))((((long)var36&3)?class_info[((long)var36&3)]:var36->class)->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator]))(var36); /* reverse_iterator on <var36:SequenceRead[Char]>*/
}
var_38 = var37;
{
var39 = ((val*(*)(val* self))((((long)var_38&3)?class_info[((long)var_38&3)]:var_38->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_38); /* iterator on <var_38:IndexedIterator[Char]>*/
}
var_40 = var39;
for(;;) {
{
var41 = ((short int(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_40); /* is_ok on <var_40:Iterator[Char]>*/
}
if (var41){
} else {
goto BREAK_label;
}
{
var42 = ((val*(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_40); /* item on <var_40:Iterator[Char]>*/
}
var43 = (uint32_t)((long)(var42)>>2);
var_i = var43;
{
((void(*)(val* self, long p0, uint32_t p1))(var_buf->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(var_buf, var_outid, var_i); /* []= on <var_buf:Buffer>*/
}
{
{ /* Inline kernel$Int$- (var_outid,1l) on <var_outid:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var50 = var_outid - 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_outid = var44;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_40); /* next on <var_40:Iterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_40&3)?class_info[((long)var_40&3)]:var_40->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_40); /* finish on <var_40:Iterator[Char]>*/
}
} else {
if (likely(varoncenew51_guard)) {
var52 = varoncenew51;
} else {
var53 = NEW_core__Buffer(&type_core__Buffer);
var52 = var53;
varoncenew51 = var52;
varoncenew51_guard = 1;
}
{
var54 = ((val*(*)(val* self, long p0))(var52->class->vft[COLOR_core__abstract_text__Buffer__with_cap]))(var52, 12l); /* with_cap on <var52:Buffer>*/
}
var_buf = var54;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "\\u0000\\u0000";
var59 = (val*)(12l<<2|1);
var60 = (val*)(12l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_buf, var56); /* append on <var_buf:Buffer>*/
}
{
{ /* Inline kernel$Int$- (var_cp,65536l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65536l:Int> isa OTHER */
/* <65536l:Int> isa OTHER */
var65 = 1; /* easy <65536l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var69 = var_cp - 65536l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline math$Int$& (var63,1023l) on <var63:Int> */
var72 = var63 & 1023l;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var70,56320l) on <var70:Int> */
/* Covariant cast for argument 0 (i) <56320l:Int> isa OTHER */
/* <56320l:Int> isa OTHER */
var75 = 1; /* easy <56320l:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var79 = var70 + 56320l;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var80 = core__abstract_text___Int___to_hex(var73);
var_lo = var80;
{
{ /* Inline kernel$Int$- (var_cp,65536l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <65536l:Int> isa OTHER */
/* <65536l:Int> isa OTHER */
var83 = 1; /* easy <65536l:Int> isa OTHER*/
if (unlikely(!var83)) {
var_class_name86 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var87 = var_cp - 65536l;
var81 = var87;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline math$Int$& (var81,1047552l) on <var81:Int> */
var90 = var81 & 1047552l;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var88,10l) on <var88:Int> */
var93 = var88 >> 10l;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var91,55296l) on <var91:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var96 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var96)) {
var_class_name99 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name99);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var100 = var91 + 55296l;
var94 = var100;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var101 = core__abstract_text___Int___to_hex(var94);
var_hi = var101;
var_out = 2l;
var_102 = var_hi;
{
var103 = ((val*(*)(val* self))(var_102->class->vft[COLOR_core__abstract_text__Text__iterator]))(var_102); /* iterator on <var_102:String>*/
}
var_104 = var103;
for(;;) {
{
var105 = ((short int(*)(val* self))((((long)var_104&3)?class_info[((long)var_104&3)]:var_104->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_104); /* is_ok on <var_104:Iterator[Char]>*/
}
if (var105){
} else {
goto BREAK_label106;
}
{
var107 = ((val*(*)(val* self))((((long)var_104&3)?class_info[((long)var_104&3)]:var_104->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_104); /* item on <var_104:Iterator[Char]>*/
}
var108 = (uint32_t)((long)(var107)>>2);
var_i109 = var108;
{
((void(*)(val* self, long p0, uint32_t p1))(var_buf->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(var_buf, var_out, var_i109); /* []= on <var_buf:Buffer>*/
}
{
{ /* Inline kernel$Int$+ (var_out,1l) on <var_out:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var112 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var116 = var_out + 1l;
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var_out = var110;
{
((void(*)(val* self))((((long)var_104&3)?class_info[((long)var_104&3)]:var_104->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_104); /* next on <var_104:Iterator[Char]>*/
}
}
BREAK_label106: (void)0;
{
((void(*)(val* self))((((long)var_104&3)?class_info[((long)var_104&3)]:var_104->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_104); /* finish on <var_104:Iterator[Char]>*/
}
var_out = 8l;
var_117 = var_lo;
{
var118 = ((val*(*)(val* self))(var_117->class->vft[COLOR_core__abstract_text__Text__iterator]))(var_117); /* iterator on <var_117:String>*/
}
var_119 = var118;
for(;;) {
{
var120 = ((short int(*)(val* self))((((long)var_119&3)?class_info[((long)var_119&3)]:var_119->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_119); /* is_ok on <var_119:Iterator[Char]>*/
}
if (var120){
} else {
goto BREAK_label121;
}
{
var122 = ((val*(*)(val* self))((((long)var_119&3)?class_info[((long)var_119&3)]:var_119->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_119); /* item on <var_119:Iterator[Char]>*/
}
var123 = (uint32_t)((long)(var122)>>2);
var_i124 = var123;
{
((void(*)(val* self, long p0, uint32_t p1))(var_buf->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(var_buf, var_out, var_i124); /* []= on <var_buf:Buffer>*/
}
{
{ /* Inline kernel$Int$+ (var_out,1l) on <var_out:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var127 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var127)) {
var_class_name130 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name130);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var131 = var_out + 1l;
var125 = var131;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
var_out = var125;
{
((void(*)(val* self))((((long)var_119&3)?class_info[((long)var_119&3)]:var_119->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_119); /* next on <var_119:Iterator[Char]>*/
}
}
BREAK_label121: (void)0;
{
((void(*)(val* self))((((long)var_119&3)?class_info[((long)var_119&3)]:var_119->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_119); /* finish on <var_119:Iterator[Char]>*/
}
}
{
var132 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_buf); /* to_s on <var_buf:Buffer>*/
}
var = var132;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$u8char_tos for (self: Char, CString, Int) */
void core__abstract_text___Char___u8char_tos(uint32_t self, char* p0, long p1) {
core__abstract_text___Char_u8char_tos___impl(self, p0, p1);
RET_LABEL:;
}
/* method abstract_text$Char$is_numeric for (self: Char): Bool */
short int core__abstract_text___Char___is_numeric(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
{
{ /* Inline kernel$Char$>= (self,'0') on <self:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var4 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var5 = self >= '0';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel$Char$<= (self,'9') on <self:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var8 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var12 = self <= '9';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$is_alpha for (self: Char): Bool */
short int core__abstract_text___Char___is_alpha(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
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
short int var_14 /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
{
{ /* Inline kernel$Char$>= (self,'a') on <self:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var5 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var6 = self >= 'a';
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
{ /* Inline kernel$Char$<= (self,'z') on <self:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var9 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var13 = self <= 'z';
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var2 = var7;
} else {
var2 = var_;
}
var_14 = var2;
if (var2){
var1 = var_14;
} else {
{
{ /* Inline kernel$Char$>= (self,'A') on <self:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var18 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var22 = self >= 'A';
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_23 = var16;
if (var16){
{
{ /* Inline kernel$Char$<= (self,'Z') on <self:Char> */
/* Covariant cast for argument 0 (i) <'Z':Char> isa OTHER */
/* <'Z':Char> isa OTHER */
var26 = 1; /* easy <'Z':Char> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var30 = self <= 'Z';
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var15 = var24;
} else {
var15 = var_23;
}
var1 = var15;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$is_hexdigit for (self: Char): Bool */
short int core__abstract_text___Char___is_hexdigit(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
short int var48 /* : Bool */;
{
{ /* Inline kernel$Char$>= (self,'0') on <self:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var6 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var7 = self >= '0';
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
{
{ /* Inline kernel$Char$<= (self,'9') on <self:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var10 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var14 = self <= '9';
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var3 = var8;
} else {
var3 = var_;
}
var_15 = var3;
if (var3){
var2 = var_15;
} else {
{
{ /* Inline kernel$Char$>= (self,'A') on <self:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var19 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var23 = self >= 'A';
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_24 = var17;
if (var17){
{
{ /* Inline kernel$Char$<= (self,'F') on <self:Char> */
/* Covariant cast for argument 0 (i) <'F':Char> isa OTHER */
/* <'F':Char> isa OTHER */
var27 = 1; /* easy <'F':Char> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var31 = self <= 'F';
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var16 = var25;
} else {
var16 = var_24;
}
var2 = var16;
}
var_32 = var2;
if (var2){
var1 = var_32;
} else {
{
{ /* Inline kernel$Char$>= (self,'a') on <self:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var36 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var40 = self >= 'a';
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_41 = var34;
if (var34){
{
{ /* Inline kernel$Char$<= (self,'f') on <self:Char> */
/* Covariant cast for argument 0 (i) <'f':Char> isa OTHER */
/* <'f':Char> isa OTHER */
var44 = 1; /* easy <'f':Char> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var48 = self <= 'f';
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var33 = var42;
} else {
var33 = var_41;
}
var1 = var33;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$is_alphanumeric for (self: Char): Bool */
short int core__abstract_text___Char___is_alphanumeric(uint32_t self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
var2 = core__abstract_text___Char___is_numeric(self);
var_ = var2;
if (var2){
var1 = var_;
} else {
var3 = core__abstract_text___Char___is_alpha(self);
var1 = var3;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Char$from_hex for (self: Char): Int */
long core__abstract_text___Char___from_hex(uint32_t self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
short int var_31 /* var : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
long var39 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
short int var56 /* : Bool */;
short int var_57 /* var : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
short int var64 /* : Bool */;
long var65 /* : Int */;
long var67 /* : Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
short int var75 /* : Bool */;
{
{ /* Inline kernel$Char$>= (self,'0') on <self:Char> */
/* Covariant cast for argument 0 (i) <'0':Char> isa OTHER */
/* <'0':Char> isa OTHER */
var4 = 1; /* easy <'0':Char> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var5 = self >= '0';
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel$Char$<= (self,'9') on <self:Char> */
/* Covariant cast for argument 0 (i) <'9':Char> isa OTHER */
/* <'9':Char> isa OTHER */
var8 = 1; /* easy <'9':Char> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var12 = self <= '9';
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var1 = var6;
} else {
var1 = var_;
}
if (var1){
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var15 = (long)self;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var13,48l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <48l:Int> isa OTHER */
/* <48l:Int> isa OTHER */
var18 = 1; /* easy <48l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var22 = var13 - 48l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var = var16;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Char$>= (self,'A') on <self:Char> */
/* Covariant cast for argument 0 (i) <'A':Char> isa OTHER */
/* <'A':Char> isa OTHER */
var26 = 1; /* easy <'A':Char> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var30 = self >= 'A';
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_31 = var24;
if (var24){
{
{ /* Inline kernel$Char$<= (self,'F') on <self:Char> */
/* Covariant cast for argument 0 (i) <'F':Char> isa OTHER */
/* <'F':Char> isa OTHER */
var34 = 1; /* easy <'F':Char> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var38 = self <= 'F';
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var23 = var32;
} else {
var23 = var_31;
}
if (var23){
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var41 = (long)self;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var39,55l) on <var39:Int> */
/* Covariant cast for argument 0 (i) <55l:Int> isa OTHER */
/* <55l:Int> isa OTHER */
var44 = 1; /* easy <55l:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var48 = var39 - 55l;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Char$>= (self,'a') on <self:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var52 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var56 = self >= 'a';
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_57 = var50;
if (var50){
{
{ /* Inline kernel$Char$<= (self,'f') on <self:Char> */
/* Covariant cast for argument 0 (i) <'f':Char> isa OTHER */
/* <'f':Char> isa OTHER */
var60 = 1; /* easy <'f':Char> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var64 = self <= 'f';
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var49 = var58;
} else {
var49 = var_57;
}
if (var49){
{
{ /* Inline kernel$Char$code_point (self) on <self:Char> */
var67 = (long)self;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var65,87l) on <var65:Int> */
/* Covariant cast for argument 0 (i) <87l:Int> isa OTHER */
/* <87l:Int> isa OTHER */
var70 = 1; /* easy <87l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var74 = var65 - 87l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var = var68;
goto RET_LABEL;
} else {
}
var75 = core__abstract_text___Char___is_hexdigit(self);
if (unlikely(!var75)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2116);
fatal_exit(1);
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2118);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Collection$to_s for (self: Collection[nullable Object]): String */
val* core__abstract_text___Collection___Object__to_s(val* self) {
val* var /* : String */;
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
val* var16 /* : String */;
val* var17 /* : Text */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : Text */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "[";
var4 = (val*)(1l<<2|1);
var5 = (val*)(1l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = ",";
var12 = (val*)(1l<<2|1);
var13 = (val*)(1l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce8 = var9;
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_text__Collection__join]))(self, var9, ((val*)NULL)); /* join on <self:Collection[nullable Object]>*/
}
{
var17 = ((val*(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__Text___43d]))(var1, var16); /* + on <var1:String>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "]";
var22 = (val*)(1l<<2|1);
var23 = (val*)(1l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
{
var26 = ((val*(*)(val* self, val* p0))(var17->class->vft[COLOR_core__abstract_text__Text___43d]))(var17, var19); /* + on <var17:Text(String)>*/
}
var = var26;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Collection$plain_to_s for (self: Collection[nullable Object]): String */
val* core__abstract_text___Collection___plain_to_s(val* self) {
val* var /* : String */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : Buffer */;
val* var2 /* : Buffer */;
val* var3 /* : Buffer */;
val* var_s /* var s: Buffer */;
val* var_ /* var : Collection[nullable Object] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
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
var_s = var3;
var_ = self;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[nullable Object]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[nullable Object]>*/
}
var_e = var7;
if (var_e == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var8 = var9;
}
if (var8){
{
var10 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var10); /* append on <var_s:Buffer>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[nullable Object]>*/
}
{
var11 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Collection$join for (self: Collection[nullable Object], nullable Text, nullable Text): String */
val* core__abstract_text___Collection___join(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_separator /* var separator: nullable Text */;
val* var_last_separator /* var last_separator: nullable Text */;
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
val* var_s /* var s: Buffer */;
val* var12 /* : Iterator[nullable Object] */;
val* var_i /* var i: Iterator[nullable Object] */;
val* var13 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : String */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : String */;
val* var29 /* : String */;
var_separator = p0;
var_last_separator = p1;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:Collection[nullable Object]>*/
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
var_s = var11;
{
var12 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(self); /* iterator on <self:Collection[nullable Object]>*/
}
var_i = var12;
{
var13 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:Iterator[nullable Object]>*/
}
var_e = var13;
if (var_e == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var14 = var15;
}
if (var14){
{
var16 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var16); /* append on <var_s:Buffer>*/
}
} else {
}
if (var_last_separator == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
var18 = ((short int(*)(val* self, val* p0))(var_last_separator->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_last_separator, ((val*)NULL)); /* == on <var_last_separator:nullable Text>*/
var17 = var18;
}
if (var17){
var_last_separator = var_separator;
} else {
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:Iterator[nullable Object]>*/
}
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:Iterator[nullable Object]>*/
}
if (var19){
{
var20 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:Iterator[nullable Object]>*/
}
var_e = var20;
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:Iterator[nullable Object]>*/
}
{
var21 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:Iterator[nullable Object]>*/
}
if (var21){
if (var_separator == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
var23 = ((short int(*)(val* self, val* p0))(var_separator->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_separator, ((val*)NULL)); /* != on <var_separator:nullable Text>*/
var22 = var23;
}
if (var22){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var_separator); /* append on <var_s:Buffer>*/
}
} else {
}
} else {
if (var_last_separator == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
var25 = ((short int(*)(val* self, val* p0))(var_last_separator->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_last_separator, ((val*)NULL)); /* != on <var_last_separator:nullable Text>*/
var24 = var25;
}
if (var24){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var_last_separator); /* append on <var_s:Buffer>*/
}
} else {
}
}
if (var_e == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
var27 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var26 = var27;
}
if (var26){
{
var28 = ((val*(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:nullable Object(Object)>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var28); /* append on <var_s:Buffer>*/
}
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var29 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var29;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Map$join for (self: Map[nullable Object, nullable Object], String, String): String */
val* core__abstract_text___Map___join(val* self, val* p0, val* p1) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "join", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2194);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$Sys$args_cache for (self: Sys): nullable Sequence[String] */
val* core__abstract_text___Sys___args_cache(val* self) {
val* var /* : nullable Sequence[String] */;
val* var1 /* : nullable Sequence[String] */;
var1 = self->attrs[COLOR_core__abstract_text__Sys___args_cache].val; /* _args_cache on <self:Sys> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$Sys$args_cache= for (self: Sys, nullable Sequence[String]) */
void core__abstract_text___Sys___args_cache_61d(val* self, val* p0) {
self->attrs[COLOR_core__abstract_text__Sys___args_cache].val = p0; /* _args_cache on <self:Sys> */
RET_LABEL:;
}
/* method abstract_text$Sys$program_args for (self: Sys): Sequence[String] */
val* core__abstract_text___Sys___program_args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : nullable Sequence[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Sequence[String] */;
var1 = self->attrs[COLOR_core__abstract_text__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable Sequence[String]>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Sys__init_args]))(self); /* init_args on <self:Sys>*/
}
} else {
}
var4 = self->attrs[COLOR_core__abstract_text__Sys___args_cache].val; /* _args_cache on <self:Sys> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2212);
fatal_exit(1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Sys$program_name for (self: Sys): String */
val* core__abstract_text___Sys___program_name(val* self) {
val* var /* : String */;
char* var1 /* : CString */;
char* var3 /* : CString */;
val* var4 /* : String */;
{
{ /* Inline abstract_text$Sys$native_argv (self,0l) on <self:Sys> */
var3 = glob_argv[0l];
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var4 = core__flat___CString___core__abstract_text__Object__to_s(var1);
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Sys$init_args for (self: Sys) */
void core__abstract_text___Sys___init_args(val* self) {
long var /* : Int */;
long var2 /* : Int */;
long var_argc /* var argc: Int */;
val* var3 /* : Array[String] */;
val* var_args /* var args: Array[String] */;
long var_i /* var i: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
char* var15 /* : CString */;
char* var17 /* : CString */;
val* var18 /* : String */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
{
{ /* Inline abstract_text$Sys$native_argc (self) on <self:Sys> */
var2 = glob_argc;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_argc = var;
var3 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self, long p0))(var3->class->vft[COLOR_core__array__Array__with_capacity]))(var3, 0l); /* with_capacity on <var3:Array[String]>*/
}
var_args = var3;
var_i = 1l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_argc) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_argc:Int> isa OTHER */
/* <var_argc:Int> isa OTHER */
var6 = 1; /* easy <var_argc:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_i < var_argc;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var_i - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline abstract_text$Sys$native_argv (self,var_i) on <self:Sys> */
var17 = glob_argv[var_i];
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var18 = core__flat___CString___core__abstract_text__Object__to_s(var15);
{
((void(*)(val* self, long p0, val* p1))(var_args->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_args, var8, var18); /* []= on <var_args:Array[String]>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var_i + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_i = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_core__abstract_text__Sys___args_cache].val = var_args; /* _args_cache on <self:Sys> */
RET_LABEL:;
}
/* method abstract_text$Sys$native_argc for (self: Sys): Int */
long core__abstract_text___Sys___native_argc(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = glob_argc;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Sys$native_argv for (self: Sys, Int): CString */
char* core__abstract_text___Sys___native_argv(val* self, long p0) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = glob_argv[p0];
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Sys$alpha_comparator for (self: Sys): Comparator */
val* core__abstract_text___Sys___alpha_comparator(val* self) {
val* var /* : Comparator */;
static val* varonce;
static int varonce_guard;
val* var1 /* : AlphaComparator */;
val* var2 /* : AlphaComparator */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_core__abstract_text__AlphaComparator(&type_core__abstract_text__AlphaComparator);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:AlphaComparator>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$Sys$args for (self: Sys): Sequence[String] */
val* core__abstract_text___Sys___args(val* self) {
val* var /* : Sequence[String] */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : Sequence[String] */;
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Sys__program_args]))(var1); /* program_args on <var1:Sys>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$CachedAlphaComparator$cache for (self: CachedAlphaComparator): HashMap[Object, String] */
val* core___core__CachedAlphaComparator___cache(val* self) {
val* var /* : HashMap[Object, String] */;
val* var1 /* : HashMap[Object, String] */;
var1 = self->attrs[COLOR_core__abstract_text__CachedAlphaComparator___cache].val; /* _cache on <self:CachedAlphaComparator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2257);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_text$CachedAlphaComparator$cache= for (self: CachedAlphaComparator, HashMap[Object, String]) */
void core___core__CachedAlphaComparator___cache_61d(val* self, val* p0) {
self->attrs[COLOR_core__abstract_text__CachedAlphaComparator___cache].val = p0; /* _cache on <self:CachedAlphaComparator> */
RET_LABEL:;
}
/* method abstract_text$CachedAlphaComparator$do_to_s for (self: CachedAlphaComparator, Object): String */
val* core___core__CachedAlphaComparator___do_to_s(val* self, val* p0) {
val* var /* : String */;
val* var_a /* var a: Object */;
val* var1 /* : HashMap[Object, String] */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[Object, String] */;
val* var4 /* : nullable Object */;
val* var5 /* : String */;
val* var_res /* var res: String */;
val* var6 /* : HashMap[Object, String] */;
var_a = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__CachedAlphaComparator__cache]))(self); /* cache on <self:CachedAlphaComparator>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var1, var_a); /* has_key on <var1:HashMap[Object, String]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__CachedAlphaComparator__cache]))(self); /* cache on <self:CachedAlphaComparator>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var3, var_a); /* [] on <var3:HashMap[Object, String]>*/
}
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:Object>*/
}
var_res = var5;
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__CachedAlphaComparator__cache]))(self); /* cache on <self:CachedAlphaComparator>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var6->class->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var6, var_a, var_res); /* []= on <var6:HashMap[Object, String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$CachedAlphaComparator$compare for (self: CachedAlphaComparator, Object, Object): Int */
long core___core__CachedAlphaComparator___core__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
const char* var_class_name6;
val* var_a /* var a: Object */;
val* var_b /* var b: Object */;
val* var7 /* : String */;
val* var8 /* : String */;
long var9 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:Object> isa COMPARED */
/* <p0:Object> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2266);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:Object> isa COMPARED */
/* <p1:Object> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2266);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
{
var7 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__CachedAlphaComparator__do_to_s]))(self, var_a); /* do_to_s on <self:CachedAlphaComparator>*/
}
{
var8 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__CachedAlphaComparator__do_to_s]))(self, var_b); /* do_to_s on <self:CachedAlphaComparator>*/
}
{
var9 = ((long(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Comparable___60d_61d_62d]))(var7, var8); /* <=> on <var7:String>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$AlphaComparator$compare for (self: AlphaComparator, nullable Object, nullable Object): Int */
long core__abstract_text___core__abstract_text__AlphaComparator___core__sorter__Comparator__compare(val* self, val* p0, val* p1) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var2 /* : Bool */;
int cltype3;
int idtype4;
const struct type* type_struct5;
short int is_nullable6;
const char* var_class_name7;
val* var_a /* var a: nullable Object */;
val* var_b /* var b: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : String */;
val* var18 /* : String */;
long var19 /* : Int */;
/* Covariant cast for argument 0 (a) <p0:nullable Object> isa COMPARED */
/* <p0:nullable Object> isa COMPARED */
type_struct = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2274);
fatal_exit(1);
}
/* Covariant cast for argument 1 (b) <p1:nullable Object> isa COMPARED */
/* <p1:nullable Object> isa COMPARED */
type_struct5 = self->type->resolution_table->types[COLOR_core__sorter__Comparator__COMPARED];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
is_nullable6 = type_struct5->is_nullable;
if(p1 == NULL) {
var2 = is_nullable6;
} else {
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name7 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPARED", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2274);
fatal_exit(1);
}
var_a = p0;
var_b = p1;
if (var_a == NULL) {
var8 = (var_b == NULL);
} else {
var9 = ((short int(*)(val* self, val* p0))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_a, var_b); /* == on <var_a:nullable Object>*/
var8 = var9;
}
if (var8){
var = 0l;
goto RET_LABEL;
} else {
}
if (var_a == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_a, ((val*)NULL)); /* == on <var_a:nullable Object>*/
var10 = var11;
}
if (var10){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var14 = -1l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var = var12;
goto RET_LABEL;
} else {
}
if (var_b == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))((((long)var_b&3)?class_info[((long)var_b&3)]:var_b->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_b, ((val*)NULL)); /* == on <var_b:nullable Object>*/
var15 = var16;
}
if (var15){
var = 1l;
goto RET_LABEL;
} else {
}
{
var17 = ((val*(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_a); /* to_s on <var_a:nullable Object(Object)>*/
}
{
var18 = ((val*(*)(val* self))((((long)var_b&3)?class_info[((long)var_b&3)]:var_b->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:nullable Object(Object)>*/
}
{
var19 = ((long(*)(val* self, val* p0))(var17->class->vft[COLOR_core__kernel__Comparable___60d_61d_62d]))(var17, var18); /* <=> on <var17:String>*/
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$CString$to_s_unsafe for (self: CString, nullable Int, nullable Int, nullable Bool, nullable Bool): String */
val* core__abstract_text___CString___to_s_unsafe(char* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : String */;
const char* var_class_name;
var_class_name = type_core__CString.name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "to_s_unsafe", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2300);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_text$CString$to_s_full for (self: CString, Int, Int): String */
val* core__abstract_text___CString___to_s_full(char* self, long p0, long p1) {
val* var /* : String */;
long var_byte_length /* var byte_length: Int */;
long var_char_length /* var char_length: Int */;
val* var1 /* : String */;
val* var2 /* : nullable Int */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Bool */;
val* var5 /* : nullable Bool */;
var_byte_length = p0;
var_char_length = p1;
var2 = (val*)(var_byte_length<<2|1);
var3 = (val*)(var_char_length<<2|1);
var4 = (val*)((long)(0)<<2|3);
var5 = (val*)((long)(0)<<2|3);
var1 = core__flat___CString___to_s_unsafe(self, var2, var3, var4, var5);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_text$CString$fill_from for (self: CString, Text) */
void core__abstract_text___CString___fill_from(char* self, val* p0) {
val* var_src /* var src: Text */;
long var /* : Int */;
var_src = p0;
{
var = ((long(*)(val* self))(var_src->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_src); /* byte_length on <var_src:Text>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var_src->class->vft[COLOR_core__abstract_text__Text__copy_to_native]))(var_src, self, var, 0l, 0l); /* copy_to_native on <var_src:Text>*/
}
RET_LABEL:;
}
/* method abstract_text$NativeArray$native_to_s for (self: NativeArray[nullable Object]): String */
val* core__abstract_text___NativeArray___native_to_s(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "native_to_s", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_text, 2336);
fatal_exit(1);
RET_LABEL:;
return var;
}
