#include "core__flat.sep.0.h"
/* method flat$FlatBuffer$[]= for (self: FlatBuffer, Int, Char) */
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
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
char* var18 /* : CString */;
char* var_it /* var it: CString */;
long var19 /* : Int */;
long var_ip /* var ip: Int */;
uint32_t var20 /* : Char */;
uint32_t var_c /* var c: Char */;
long var21 /* : Int */;
long var_clen /* var clen: Int */;
long var22 /* : Int */;
long var_itemlen /* var itemlen: Int */;
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
long var_size_diff /* var size_diff: Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
long var58 /* : Int */;
long var60 /* : Int */;
val* var_61 /* var : FlatBuffer */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
var_index = p0;
var_item = p1;
{
{ /* Inline kernel$Int$>= (var_index,0l) on <var_index:Int> */
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
{ /* Inline kernel$Int$<= (var_index,var5) on <var_index:Int> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 923);
fatal_exit(1);
}
{
var13 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var13){
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
var14 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel$Int$== (var_index,var14) on <var_index:Int> */
var17 = var_index == var14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
((void(*)(val* self, uint32_t p0))(self->class->vft[COLOR_core__abstract_text__Buffer__add]))(self, var_item); /* add on <self:FlatBuffer>*/
}
goto RET_LABEL;
} else {
}
var18 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var18;
var19 = core___core__CString___char_to_byte_index(var_it, var_index);
var_ip = var19;
var20 = core___core__CString___char_at(var_it, var_ip);
var_c = var20;
var21 = core__abstract_text___Char___u8char_len(var_c);
var_clen = var21;
var22 = core__abstract_text___Char___u8char_len(var_item);
var_itemlen = var22;
{
{ /* Inline kernel$Int$- (var_itemlen,var_clen) on <var_itemlen:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var25 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var29 = var_itemlen - var_clen;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_size_diff = var23;
{
{ /* Inline kernel$Int$> (var_size_diff,0l) on <var_size_diff:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var36 = var_size_diff > 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
{ /* Inline kernel$Int$+ (var_ip,var_clen) on <var_ip:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var39 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var43 = var_ip + var_clen;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__flat__FlatBuffer__rshift_bytes]))(self, var37, var_size_diff); /* rshift_bytes on <self:FlatBuffer>*/
}
} else {
{
{ /* Inline kernel$Int$< (var_size_diff,0l) on <var_size_diff:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var46 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var50 = var_size_diff < 0l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
{
{ /* Inline kernel$Int$+ (var_ip,var_clen) on <var_ip:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var53 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var57 = var_ip + var_clen;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel$Int$unary - (var_size_diff) on <var_size_diff:Int> */
var60 = -var_size_diff;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__flat__FlatBuffer__lshift_bytes]))(self, var51, var58); /* lshift_bytes on <self:FlatBuffer>*/
}
} else {
}
}
var_61 = self;
var62 = var_61->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_61:FlatBuffer> */
{
{ /* Inline kernel$Int$+ (var62,var_size_diff) on <var62:Int> */
/* Covariant cast for argument 0 (i) <var_size_diff:Int> isa OTHER */
/* <var_size_diff:Int> isa OTHER */
var65 = 1; /* easy <var_size_diff:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var69 = var62 + var_size_diff;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_61->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var63; /* _byte_length on <var_61:FlatBuffer> */
core__flat___CString___set_char_at(var_it, var_ip, var_item); /* Direct call flat$CString$set_char_at on <var_it:CString>*/
RET_LABEL:;
}
/* method flat$FlatBuffer$insert for (self: FlatBuffer, Text, Int) */
void core___core__FlatBuffer___core__abstract_text__Buffer__insert(val* self, val* p0, long p1) {
val* var_s /* var s: Text */;
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
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var_slen /* var slen: Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
char* var26 /* : CString */;
char* var_it /* var it: CString */;
long var27 /* : Int */;
long var_shpos /* var shpos: Int */;
val* var_28 /* var : FlatBuffer */;
long var29 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
val* var_38 /* var : FlatBuffer */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
var_s = p0;
var_pos = p1;
{
{ /* Inline kernel$Int$>= (var_pos,0l) on <var_pos:Int> */
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
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$<= (var_pos,var5) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var12 = var_pos <= var5;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 945);
fatal_exit(1);
}
{
var13 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$== (var_pos,var13) on <var_pos:Int> */
var16 = var_pos == var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Buffer__append]))(self, var_s); /* append on <self:FlatBuffer>*/
}
goto RET_LABEL;
} else {
}
{
var17 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:Text>*/
}
var_slen = var17;
{
var18 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$+ (var18,var_slen) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var21 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var18 + var_slen;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Buffer__enlarge]))(self, var19); /* enlarge on <self:FlatBuffer>*/
}
var26 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var26;
var27 = core___core__CString___char_to_byte_index(var_it, var_pos);
var_shpos = var27;
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__flat__FlatBuffer__rshift_bytes]))(self, var_shpos, var_slen); /* rshift_bytes on <self:FlatBuffer>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var_s->class->vft[COLOR_core__abstract_text__Text__copy_to_native]))(var_s, var_it, var_slen, 0l, var_shpos); /* copy_to_native on <var_s:Text>*/
}
var_28 = self;
{
var29 = ((long(*)(val* self))(var_28->class->vft[COLOR_core__abstract_text__Text__length]))(var_28); /* length on <var_28:FlatBuffer>*/
}
{
var30 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text>*/
}
{
{ /* Inline kernel$Int$+ (var29,var30) on <var29:Int> */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var33 = 1; /* easy <var30:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var37 = var29 + var30;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_28->class->vft[COLOR_core__abstract_text__FlatText__length_61d]))(var_28, var31); /* length= on <var_28:FlatBuffer>*/
}
var_38 = self;
{
var39 = ((long(*)(val* self))(var_38->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_38); /* byte_length on <var_38:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$+ (var39,var_slen) on <var39:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var42 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var46 = var39 + var_slen;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_38->class->vft[COLOR_core__abstract_text__FlatText__byte_length_61d]))(var_38, var40); /* byte_length= on <var_38:FlatBuffer>*/
}
RET_LABEL:;
}
/* method flat$FlatBuffer$insert_char for (self: FlatBuffer, Char, Int) */
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
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var_clen /* var clen: Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
char* var26 /* : CString */;
char* var_it /* var it: CString */;
long var27 /* : Int */;
long var_shpos /* var shpos: Int */;
val* var_28 /* var : FlatBuffer */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
val* var_37 /* var : FlatBuffer */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
var_c = p0;
var_pos = p1;
{
{ /* Inline kernel$Int$>= (var_pos,0l) on <var_pos:Int> */
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
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$<= (var_pos,var5) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var12 = var_pos <= var5;
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 961);
fatal_exit(1);
}
{
var13 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$== (var_pos,var13) on <var_pos:Int> */
var16 = var_pos == var13;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
{
((void(*)(val* self, uint32_t p0))(self->class->vft[COLOR_core__abstract_text__Buffer__add]))(self, var_c); /* add on <self:FlatBuffer>*/
}
goto RET_LABEL;
} else {
}
var17 = core__abstract_text___Char___u8char_len(var_c);
var_clen = var17;
{
var18 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$+ (var18,var_clen) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var21 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var18 + var_clen;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Buffer__enlarge]))(self, var19); /* enlarge on <self:FlatBuffer>*/
}
var26 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var26;
var27 = core___core__CString___char_to_byte_index(var_it, var_pos);
var_shpos = var27;
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__flat__FlatBuffer__rshift_bytes]))(self, var_shpos, var_clen); /* rshift_bytes on <self:FlatBuffer>*/
}
core__flat___CString___set_char_at(var_it, var_shpos, var_c); /* Direct call flat$CString$set_char_at on <var_it:CString>*/
var_28 = self;
{
var29 = ((long(*)(val* self))(var_28->class->vft[COLOR_core__abstract_text__Text__length]))(var_28); /* length on <var_28:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$+ (var29,1l) on <var29:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var36 = var29 + 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_28->class->vft[COLOR_core__abstract_text__FlatText__length_61d]))(var_28, var30); /* length= on <var_28:FlatBuffer>*/
}
var_37 = self;
{
var38 = ((long(*)(val* self))(var_37->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_37); /* byte_length on <var_37:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$+ (var38,var_clen) on <var38:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var41 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var45 = var38 + var_clen;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_37->class->vft[COLOR_core__abstract_text__FlatText__byte_length_61d]))(var_37, var39); /* byte_length= on <var_37:FlatBuffer>*/
}
RET_LABEL:;
}
/* method flat$FlatBuffer$add for (self: FlatBuffer, Char) */
void core___core__FlatBuffer___core__abstract_text__Buffer__add(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
short int var /* : Bool */;
long var1 /* : Int */;
long var_clen /* var clen: Int */;
long var2 /* : Int */;
long var_bt /* var bt: Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
char* var7 /* : CString */;
val* var_ /* var : FlatBuffer */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
val* var_16 /* var : FlatBuffer */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
var_c = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
var1 = core__abstract_text___Char___u8char_len(var_c);
var_clen = var1;
var2 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
var_bt = var2;
{
{ /* Inline kernel$Int$+ (var_bt,var_clen) on <var_bt:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var5 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var_bt + var_clen;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Buffer__enlarge]))(self, var3); /* enlarge on <self:FlatBuffer>*/
}
var7 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
core__flat___CString___set_char_at(var7, var_bt, var_c); /* Direct call flat$CString$set_char_at on <var7:CString>*/
var_ = self;
var8 = var_->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_:FlatBuffer> */
{
{ /* Inline kernel$Int$+ (var8,var_clen) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var_clen:Int> isa OTHER */
/* <var_clen:Int> isa OTHER */
var11 = 1; /* easy <var_clen:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var8 + var_clen;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var9; /* _byte_length on <var_:FlatBuffer> */
var_16 = self;
var17 = var_16->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_16:FlatBuffer> */
{
{ /* Inline kernel$Int$+ (var17,1l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var24 = var17 + 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_16->attrs[COLOR_core__abstract_text__FlatText___length].l = var18; /* _length on <var_16:FlatBuffer> */
RET_LABEL:;
}
/* method flat$FlatBuffer$clear for (self: FlatBuffer) */
void core___core__FlatBuffer___core__abstract_text__Buffer__clear(val* self) {
short int var /* : Bool */;
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = 0l; /* _byte_length on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__FlatText___length].l = 0l; /* _length on <self:FlatBuffer> */
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var){
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = 16l; /* _capacity on <self:FlatBuffer> */
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
RET_LABEL:;
}
/* method flat$FlatBuffer$empty for (self: FlatBuffer): Buffer */
val* core___core__FlatBuffer___core__abstract_text__Text__empty(val* self) {
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
var3 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Buffer__new]))(var1); /* new on <var1:Buffer>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBuffer$enlarge for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___core__abstract_text__Buffer__enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
long var /* : Int */;
long var_c /* var c: Int */;
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
long var26 /* : Int */;
long var_bln /* var bln: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var27 /* : CString */;
char* var28 /* : CString */;
char* var29 /* : CString */;
char* var31 /* : CString */;
char* var_a /* var a: CString */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
short int var38 /* : Bool */;
char* var39 /* : CString */;
char* var_it /* var it: CString */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
short int var46 /* : Bool */;
var_cap = p0;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
var_c = var;
{
{ /* Inline kernel$Int$<= (var_cap,var_c) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <var_c:Int> isa OTHER */
/* <var_c:Int> isa OTHER */
var3 = 1; /* easy <var_c:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var4 = var_cap <= var_c;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$<= (var_c,16l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <16l:Int> isa OTHER */
/* <16l:Int> isa OTHER */
var7 = 1; /* easy <16l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var11 = var_c <= 16l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var_c = 16l;
} else {
}
for(;;) {
{
{ /* Inline kernel$Int$<= (var_c,var_cap) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var_cap:Int> isa OTHER */
/* <var_cap:Int> isa OTHER */
var14 = 1; /* easy <var_cap:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var18 = var_c <= var_cap;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline kernel$Int$* (var_c,2l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var21 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var25 = var_c * 2l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_c = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 0); /* written= on <self:FlatBuffer>*/
}
var26 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
var_bln = var26;
if (likely(varoncenew_guard)) {
var27 = varoncenew;
} else {
var28 = NULL/*special!*/;
var27 = var28;
varoncenew = var27;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var27,var_c) on <var27:CString> */
var31 = (char*)nit_alloc(var_c);
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_a = var29;
{
{ /* Inline kernel$Int$> (var_bln,0l) on <var_bln:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var34 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var38 = var_bln > 0l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
var39 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_it = var39;
{
{ /* Inline kernel$Int$> (var_bln,0l) on <var_bln:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var42 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var46 = var_bln > 0l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
{
{ /* Inline native$CString$copy_to (var_it,var_a,var_bln,0l,0l) on <var_it:CString> */
memmove(var_a+0l,var_it+0l,var_bln);
RET_LABEL47:(void)0;
}
}
} else {
}
} else {
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_a; /* _items on <self:FlatBuffer> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity_61d]))(self, var_c); /* capacity= on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method flat$FlatBuffer$to_s for (self: FlatBuffer): String */
val* core___core__FlatBuffer___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var_bln /* var bln: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
static char* varoncenew;
static int varoncenew_guard;
char* var5 /* : CString */;
char* var6 /* : CString */;
char* var7 /* : CString */;
char* var9 /* : CString */;
static val* varoncenew10;
static int varoncenew10_guard;
val* var11 /* : FlatString */;
val* var12 /* : FlatString */;
char* var13 /* : CString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 1); /* written= on <self:FlatBuffer>*/
}
var1 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
var_bln = var1;
{
{ /* Inline kernel$Int$== (var_bln,0l) on <var_bln:Int> */
var4 = var_bln == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
if (likely(varoncenew_guard)) {
var5 = varoncenew;
} else {
var6 = NULL/*special!*/;
var5 = var6;
varoncenew = var5;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var5,1l) on <var5:CString> */
var9 = (char*)nit_alloc(1l);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var7; /* _items on <self:FlatBuffer> */
} else {
}
if (likely(varoncenew10_guard)) {
var11 = varoncenew10;
} else {
var12 = NEW_core__FlatString(&type_core__FlatString);
var11 = var12;
varoncenew10 = var11;
varoncenew10_guard = 1;
}
var13 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var14 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
var15 = ((val*(*)(val* self, char* p0, long p1, long p2, long p3))(var11->class->vft[COLOR_core__flat__FlatString__full]))(var11, var13, var_bln, 0l, var14); /* full on <var11:FlatString>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBuffer$to_cstring for (self: FlatBuffer): CString */
char* core___core__FlatBuffer___core__abstract_text__Text__to_cstring(val* self) {
char* var /* : CString */;
long var1 /* : Int */;
long var_bln /* var bln: Int */;
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
char* var_new_native /* var new_native: CString */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
char* var20 /* : CString */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
var_bln = var1;
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NULL/*special!*/;
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_bln,1l) on <var_bln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var_bln + 1l;
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
var_new_native = var8;
{
{ /* Inline native$CString$[]= (var_new_native,var_bln,((unsigned char)0x00)) on <var_new_native:CString> */
var_new_native[var_bln]=(unsigned char)((unsigned char)0x00);
RET_LABEL11:(void)0;
}
}
var12 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
{ /* Inline kernel$Int$> (var12,0l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var15 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var19 = var12 > 0l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var20 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
{
{ /* Inline native$CString$copy_to (var20,var_new_native,var_bln,0l,0l) on <var20:CString> */
memmove(var_new_native+0l,var20+0l,var_bln);
RET_LABEL21:(void)0;
}
}
} else {
}
var = var_new_native;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBuffer$init for (self: FlatBuffer) */
void core___core__FlatBuffer___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
RET_LABEL:;
}
/* method flat$FlatBuffer$with_infos for (self: FlatBuffer, CString, Int, Int, Int) */
void core___core__FlatBuffer___with_infos(val* self, char* p0, long p1, long p2, long p3) {
char* var_items /* var items: CString */;
long var_capacity /* var capacity: Int */;
long var_byte_length /* var byte_length: Int */;
long var_length /* var length: Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
var_items = p0;
var_capacity = p1;
var_byte_length = p2;
var_length = p3;
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var_items; /* _items on <self:FlatBuffer> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity_61d]))(self, var_capacity); /* capacity= on <self:FlatBuffer>*/
}
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var_byte_length; /* _byte_length on <self:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__FlatText___length].l = var_length; /* _length on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat$FlatBuffer$from for (self: FlatBuffer, Text) */
void core___core__FlatBuffer___from(val* self, val* p0) {
val* var_s /* var s: Text */;
static char* varoncenew;
static int varoncenew_guard;
char* var /* : CString */;
char* var1 /* : CString */;
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
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
var_s = p0;
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NULL/*special!*/;
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:Text>*/
}
{
{ /* Inline native$CString$new (var,var2) on <var:CString> */
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
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatBuffer>*/
}
{
{ /* Inline native$CString$copy_to (var11,var12,var13,var14,0l) on <var11:CString> */
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
/* method flat$FlatBuffer$with_capacity for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___with_capacity(val* self, long p0) {
long var_cap /* var cap: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
static char* varoncenew;
static int varoncenew_guard;
char* var4 /* : CString */;
char* var5 /* : CString */;
char* var6 /* : CString */;
char* var8 /* : CString */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FlatBuffer>*/
}
var_cap = p0;
{
{ /* Inline kernel$Int$>= (var_cap,0l) on <var_cap:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var3 = var_cap >= 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (unlikely(!var)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1065);
fatal_exit(1);
}
if (likely(varoncenew_guard)) {
var4 = varoncenew;
} else {
var5 = NULL/*special!*/;
var4 = var5;
varoncenew = var4;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var4,var_cap) on <var4:CString> */
var8 = (char*)nit_alloc(var_cap);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var6; /* _items on <self:FlatBuffer> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity_61d]))(self, var_cap); /* capacity= on <self:FlatBuffer>*/
}
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = 0l; /* _byte_length on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat$FlatBuffer$append for (self: FlatBuffer, Text) */
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
long var23 /* : Int */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
long var29 /* : Int */;
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
{ /* Inline kernel$Int$+ (var2,var_sl) on <var2:Int> */
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
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Buffer__enlarge]))(self, var_nln); /* enlarge on <self:FlatBuffer>*/
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
{ /* Inline native$CString$copy_to (var10,var11,var_sl,var12,var13) on <var10:CString> */
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Buffer__append]))(self, var_i); /* append on <self:FlatBuffer>*/
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
var22 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text(FlatText)>*/
}
{
{ /* Inline kernel$Int$+ (var21,var22) on <var21:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var29 = var21 + var22;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_20->attrs[COLOR_core__abstract_text__FlatText___length].l = var23; /* _length on <var_20:FlatBuffer> */
RET_LABEL:;
}
/* method flat$FlatBuffer$copy for (self: FlatBuffer, Int, Int, Buffer, Int) */
void core___core__FlatBuffer___copy(val* self, long p0, long p1, val* p2, long p3) {
long var_start /* var start: Int */;
long var_len /* var len: Int */;
val* var_dest /* var dest: Buffer */;
long var_new_start /* var new_start: Int */;
val* var /* : SequenceRead[Char] */;
val* var_self_chars /* var self_chars: SequenceRead[Char] */;
val* var1 /* : SequenceRead[Char] */;
val* var_dest_chars /* var dest_chars: Sequence[Char] */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_ /* var : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : nullable Object */;
long var28 /* : Int */;
var_start = p0;
var_len = p1;
var_dest = p2;
var_new_start = p3;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:FlatBuffer>*/
}
var_self_chars = var;
{
var1 = ((val*(*)(val* self))(var_dest->class->vft[COLOR_core__abstract_text__Text__chars]))(var_dest); /* chars on <var_dest:Buffer>*/
}
var_dest_chars = var1;
var_i = 0l;
{
{ /* Inline kernel$Int$- (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var_len - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var12 = var_i <= var_;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel$Int$+ (var_new_start,var_i) on <var_new_start:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var15 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var_new_start + var_i;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_start,var_i) on <var_start:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var22 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var_start + var_i;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
var27 = ((val*(*)(val* self, long p0))((((long)var_self_chars&3)?class_info[((long)var_self_chars&3)]:var_self_chars->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_self_chars, var20); /* [] on <var_self_chars:SequenceRead[Char]>*/
}
{
((void(*)(val* self, long p0, val* p1))((((long)var_dest_chars&3)?class_info[((long)var_dest_chars&3)]:var_dest_chars->class)->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_dest_chars, var13, var27); /* []= on <var_dest_chars:Sequence[Char]>*/
}
var28 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var28;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flat$FlatBuffer$substring for (self: FlatBuffer, Int, Int): Buffer */
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
static val* varoncenew;
static int varoncenew_guard;
val* var42 /* : Buffer */;
val* var43 /* : Buffer */;
val* var44 /* : Buffer */;
char* var45 /* : CString */;
char* var_its /* var its: CString */;
long var46 /* : Int */;
long var_bytefrom /* var bytefrom: Int */;
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
long var61 /* : Int */;
long var_byteto /* var byteto: Int */;
uint32_t var62 /* : Char */;
long var63 /* : Int */;
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
long var_byte_length /* var byte_length: Int */;
static char* varoncenew92;
static int varoncenew92_guard;
char* var93 /* : CString */;
char* var94 /* : CString */;
char* var95 /* : CString */;
char* var97 /* : CString */;
char* var_r_items /* var r_items: CString */;
val* var99 /* : FlatBuffer */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel$Int$>= (var_count,0l) on <var_count:Int> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1099);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$< (var_from,0l) on <var_from:Int> */
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
{ /* Inline kernel$Int$+ (var_from,var_count) on <var_from:Int> */
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
{ /* Inline kernel$Int$> (var12,var19) on <var12:Int> */
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
{ /* Inline kernel$Int$- (var27,var_from) on <var27:Int> */
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
{ /* Inline kernel$Int$<= (var_count,0l) on <var_count:Int> */
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
if (likely(varoncenew_guard)) {
var42 = varoncenew;
} else {
var43 = NEW_core__Buffer(&type_core__Buffer);
var42 = var43;
varoncenew = var42;
varoncenew_guard = 1;
}
{
var44 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__Buffer__new]))(var42); /* new on <var42:Buffer>*/
}
var = var44;
goto RET_LABEL;
} else {
}
var45 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var_its = var45;
var46 = core___core__CString___char_to_byte_index(var_its, var_from);
var_bytefrom = var46;
{
{ /* Inline kernel$Int$+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var49 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var53 = var_count + var_from;
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
var61 = core___core__CString___char_to_byte_index(var_its, var54);
var_byteto = var61;
var62 = core___core__CString___char_at(var_its, var_byteto);
var63 = core__abstract_text___Char___u8char_len(var62);
{
{ /* Inline kernel$Int$- (var63,1l) on <var63:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var66 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var70 = var63 - 1l;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_byteto,var64) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var73 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var77 = var_byteto + var64;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var_byteto = var71;
{
{ /* Inline kernel$Int$- (var_byteto,var_bytefrom) on <var_byteto:Int> */
/* Covariant cast for argument 0 (i) <var_bytefrom:Int> isa OTHER */
/* <var_bytefrom:Int> isa OTHER */
var80 = 1; /* easy <var_bytefrom:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var84 = var_byteto - var_bytefrom;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var78,1l) on <var78:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var87 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var91 = var78 + 1l;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_byte_length = var85;
if (likely(varoncenew92_guard)) {
var93 = varoncenew92;
} else {
var94 = NULL/*special!*/;
var93 = var94;
varoncenew92 = var93;
varoncenew92_guard = 1;
}
{
{ /* Inline native$CString$new (var93,var_byte_length) on <var93:CString> */
var97 = (char*)nit_alloc(var_byte_length);
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var_r_items = var95;
{
{ /* Inline native$CString$copy_to (var_its,var_r_items,var_byte_length,var_bytefrom,0l) on <var_its:CString> */
memmove(var_r_items+0l,var_its+var_bytefrom,var_byte_length);
RET_LABEL98:(void)0;
}
}
var99 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var99->class->vft[COLOR_core__flat__FlatBuffer__with_infos]))(var99, var_r_items, var_byte_length, var_byte_length, var_count); /* with_infos on <var99:FlatBuffer>*/
}
var = var99;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBuffer$append_substring_impl for (self: FlatBuffer, Text, Int, Int) */
void core___core__FlatBuffer___core__abstract_text__Buffer__append_substring_impl(val* self, val* p0, long p1, long p2) {
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var_length /* var length: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
short int var7 /* : Bool */;
char* var8 /* : CString */;
char* var_sits /* var sits: CString */;
long var9 /* : Int */;
long var_bytest /* var bytest: Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
long var24 /* : Int */;
long var_bytend /* var bytend: Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
uint32_t var32 /* : Char */;
long var33 /* : Int */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var_btln /* var btln: Int */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
char* var49 /* : CString */;
long var50 /* : Int */;
val* var_ /* var : FlatBuffer */;
long var52 /* : Int */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
val* var_60 /* var : FlatBuffer */;
long var61 /* : Int */;
long var62 /* : Int */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
const char* var_class_name67;
long var68 /* : Int */;
var_s = p0;
var_from = p1;
var_length = p2;
{
{ /* Inline kernel$Int$<= (var_length,0l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var3 = var_length <= 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
goto RET_LABEL;
} else {
}
/* <var_s:Text> isa FlatText */
cltype5 = type_core__FlatText.color;
idtype6 = type_core__FlatText.id;
if(cltype5 >= var_s->type->table_size) {
var4 = 0;
} else {
var4 = var_s->type->type_table[cltype5] == idtype6;
}
var7 = !var4;
if (var7){
{
((void(*)(val* self, val* p0, long p1, long p2))(self->class->vft[COLOR_core___core__FlatBuffer___core__abstract_text__Buffer__append_substring_impl]))(self, p0, p1, p2); /* append_substring_impl on <self:FlatBuffer>*/
}
goto RET_LABEL;
} else {
}
var8 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:Text(FlatText)> */
var_sits = var8;
{
var9 = ((long(*)(val* self, long p0))(var_s->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(var_s, var_from); /* char_to_byte_index on <var_s:Text(FlatText)>*/
}
var_bytest = var9;
{
{ /* Inline kernel$Int$+ (var_from,var_length) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_length:Int> isa OTHER */
/* <var_length:Int> isa OTHER */
var12 = 1; /* easy <var_length:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var16 = var_from + var_length;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var10,1l) on <var10:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var23 = var10 - 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
var24 = ((long(*)(val* self, long p0))(var_s->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(var_s, var17); /* char_to_byte_index on <var_s:Text(FlatText)>*/
}
var_bytend = var24;
{
{ /* Inline kernel$Int$- (var_bytend,var_bytest) on <var_bytend:Int> */
/* Covariant cast for argument 0 (i) <var_bytest:Int> isa OTHER */
/* <var_bytest:Int> isa OTHER */
var27 = 1; /* easy <var_bytest:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var31 = var_bytend - var_bytest;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var32 = core___core__CString___char_at(var_sits, var_bytend);
var33 = core__abstract_text___Char___u8char_len(var32);
{
{ /* Inline kernel$Int$+ (var25,var33) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var33:Int> isa OTHER */
/* <var33:Int> isa OTHER */
var36 = 1; /* easy <var33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var40 = var25 + var33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_btln = var34;
var41 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
{
{ /* Inline kernel$Int$+ (var_btln,var41) on <var_btln:Int> */
/* Covariant cast for argument 0 (i) <var41:Int> isa OTHER */
/* <var41:Int> isa OTHER */
var44 = 1; /* easy <var41:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var48 = var_btln + var41;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Buffer__enlarge]))(self, var42); /* enlarge on <self:FlatBuffer>*/
}
var49 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var50 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
{
{ /* Inline native$CString$copy_to (var_sits,var49,var_btln,var_bytest,var50) on <var_sits:CString> */
memmove(var49+var50,var_sits+var_bytest,var_btln);
RET_LABEL51:(void)0;
}
}
var_ = self;
var52 = var_->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_:FlatBuffer> */
{
{ /* Inline kernel$Int$+ (var52,var_btln) on <var52:Int> */
/* Covariant cast for argument 0 (i) <var_btln:Int> isa OTHER */
/* <var_btln:Int> isa OTHER */
var55 = 1; /* easy <var_btln:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var59 = var52 + var_btln;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = var53; /* _byte_length on <var_:FlatBuffer> */
var_60 = self;
var61 = var_60->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_60:FlatBuffer> */
{
{ /* Inline kernel$Int$+ (var61,var_length) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var_length:Int> isa OTHER */
/* <var_length:Int> isa OTHER */
var64 = 1; /* easy <var_length:Int> isa OTHER*/
if (unlikely(!var64)) {
var_class_name67 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name67);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var68 = var61 + var_length;
var62 = var68;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
var_60->attrs[COLOR_core__abstract_text__FlatText___length].l = var62; /* _length on <var_60:FlatBuffer> */
RET_LABEL:;
}
/* method flat$FlatBuffer$remove_at for (self: FlatBuffer, Int, nullable Int) */
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
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
val* var_55 /* var : FlatBuffer */;
long var56 /* : Int */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
long var64 /* : Int */;
var_p = p0;
var_len = p1;
if (var_len == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var_len,((val*)NULL)) on <var_len:nullable Int> */
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
{ /* Inline kernel$Int$== (var_len,0l) on <var_len:nullable Int(Int)> */
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
var10 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var_p); /* char_to_byte_index on <self:FlatBuffer>*/
}
var_bst = var10;
{
{ /* Inline kernel$Int$+ (var_p,var_len) on <var_p:Int> */
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
{ /* Inline kernel$Int$- (var11,1l) on <var11:Int> */
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
var23 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatText__char_to_byte_index]))(self, var16); /* char_to_byte_index on <self:FlatBuffer>*/
}
var_bend = var23;
var24 = core___core__CString___char_at(var_its, var_bend);
var25 = core__abstract_text___Char___u8char_len(var24);
{
{ /* Inline kernel$Int$+ (var_bend,var25) on <var_bend:Int> */
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
{ /* Inline kernel$Int$- (var_bend,var_bst) on <var_bend:Int> */
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
{ /* Inline kernel$Int$- (var_bend,var_bst) on <var_bend:Int> */
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
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__flat__FlatBuffer__lshift_bytes]))(self, var_bend, var40); /* lshift_bytes on <self:FlatBuffer>*/
}
var_ = self;
{
var47 = ((long(*)(val* self))(var_->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_); /* byte_length on <var_:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$- (var47,var_blen) on <var47:Int> */
/* Covariant cast for argument 0 (i) <var_blen:Int> isa OTHER */
/* <var_blen:Int> isa OTHER */
var50 = 1; /* easy <var_blen:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var54 = var47 - var_blen;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__abstract_text__FlatText__byte_length_61d]))(var_, var48); /* byte_length= on <var_:FlatBuffer>*/
}
var_55 = self;
{
var56 = ((long(*)(val* self))(var_55->class->vft[COLOR_core__abstract_text__Text__length]))(var_55); /* length on <var_55:FlatBuffer>*/
}
{
{ /* Inline kernel$Int$- (var56,var_len) on <var56:Int> */
/* Covariant cast for argument 0 (i) <var_len:nullable Int(Int)> isa OTHER */
/* <var_len:nullable Int(Int)> isa OTHER */
var59 = 1; /* easy <var_len:nullable Int(Int)> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = var_len == NULL ? "null" : (((long)var_len&3)?type_info[((long)var_len&3)]:var_len->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var63 = (long)(var_len)>>2;
var64 = var56 - var63;
var57 = var64;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_55->class->vft[COLOR_core__abstract_text__FlatText__length_61d]))(var_55, var57); /* length= on <var_55:FlatBuffer>*/
}
RET_LABEL:;
}
/* method flat$FlatBuffer$reverse for (self: FlatBuffer) */
void core___core__FlatBuffer___core__abstract_text__Buffer__reverse(val* self) {
val* var /* : FlatBuffer */;
long var1 /* : Int */;
val* var_ns /* var ns: FlatBuffer */;
val* var2 /* : SequenceRead[Char] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_ /* var : IndexedIterator[Char] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[Char] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
uint32_t var8 /* : Char */;
uint32_t var_i /* var i: Char */;
char* var9 /* : CString */;
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__abstract_text__Buffer__written_61d]))(self, 0); /* written= on <self:FlatBuffer>*/
}
var = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(self); /* capacity on <self:FlatBuffer>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_core__flat__FlatBuffer__with_capacity]))(var, var1); /* with_capacity on <var:FlatBuffer>*/
}
var_ns = var;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:FlatBuffer>*/
}
{
var3 = ((val*(*)(val* self))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator]))(var2); /* reverse_iterator on <var2:SequenceRead[Char]>*/
}
var_ = var3;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:IndexedIterator[Char]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:Iterator[Char]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:Iterator[Char]>*/
}
var8 = (uint32_t)((long)(var7)>>2);
var_i = var8;
{
((void(*)(val* self, uint32_t p0))(var_ns->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_ns, var_i); /* add on <var_ns:FlatBuffer>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[Char]>*/
}
var9 = var_ns->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_ns:FlatBuffer> */
self->attrs[COLOR_core__abstract_text__FlatText___items].str = var9; /* _items on <self:FlatBuffer> */
RET_LABEL:;
}
/* method flat$FlatBuffer$times for (self: FlatBuffer, Int) */
void core___core__FlatBuffer___core__abstract_text__Buffer__times(val* self, long p0) {
long var_repeats /* var repeats: Int */;
long var /* : Int */;
long var_bln /* var bln: Int */;
static val* varoncenew;
static int varoncenew_guard;
val* var1 /* : FlatString */;
val* var2 /* : FlatString */;
char* var3 /* : CString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var_x /* var x: FlatString */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
long var10 /* : Int */;
var_repeats = p0;
var = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatBuffer> */
var_bln = var;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NEW_core__FlatString(&type_core__FlatString);
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
var3 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatBuffer> */
var4 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
{
var5 = ((val*(*)(val* self, char* p0, long p1, long p2, long p3))(var1->class->vft[COLOR_core__flat__FlatString__full]))(var1, var3, var_bln, 0l, var4); /* full on <var1:FlatString>*/
}
var_x = var5;
var_i = 1l;
var_ = var_repeats;
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Buffer__append]))(self, var_x); /* append on <self:FlatBuffer>*/
}
var10 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var10;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flat$FlatBuffer$upper for (self: FlatBuffer) */
void core___core__FlatBuffer___core__abstract_text__Buffer__upper(val* self) {
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
uint32_t var6 /* : Char */;
uint32_t var7 /* : Char */;
long var8 /* : Int */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
var_i = 0l;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
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
var6 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:FlatBuffer>*/
}
var7 = core___core__Char___to_upper(var6);
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, var_i, var7); /* []= on <self:FlatBuffer>*/
}
var8 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var8;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flat$FlatBuffer$lower for (self: FlatBuffer) */
void core___core__FlatBuffer___core__abstract_text__Buffer__lower(val* self) {
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
uint32_t var6 /* : Char */;
uint32_t var7 /* : Char */;
long var8 /* : Int */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Buffer__written]))(self); /* written on <self:FlatBuffer>*/
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBuffer__reset]))(self); /* reset on <self:FlatBuffer>*/
}
} else {
}
var_i = 0l;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <self:FlatBuffer> */
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
var6 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:FlatBuffer>*/
}
var7 = core___core__Char___to_lower(var6);
{
((void(*)(val* self, long p0, uint32_t p1))(self->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(self, var_i, var7); /* []= on <self:FlatBuffer>*/
}
var8 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var8;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method flat$FlatBufferByteReverseIterator$target for (self: FlatBufferByteReverseIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferByteReverseIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target].val; /* _target on <self:FlatBufferByteReverseIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1175);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteReverseIterator$target= for (self: FlatBufferByteReverseIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferByteReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target].val = p0; /* _target on <self:FlatBufferByteReverseIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferByteReverseIterator$target_items for (self: FlatBufferByteReverseIterator): CString */
char* core__flat___core__flat__FlatBufferByteReverseIterator___target_items(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target_items].str; /* _target_items on <self:FlatBufferByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteReverseIterator$target_items= for (self: FlatBufferByteReverseIterator, CString) */
void core__flat___core__flat__FlatBufferByteReverseIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___target_items].str = p0; /* _target_items on <self:FlatBufferByteReverseIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferByteReverseIterator$curr_pos for (self: FlatBufferByteReverseIterator): Int */
long core__flat___core__flat__FlatBufferByteReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteReverseIterator$curr_pos= for (self: FlatBufferByteReverseIterator, Int) */
void core__flat___core__flat__FlatBufferByteReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferByteReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferByteReverseIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferByteReverseIterator$init for (self: FlatBufferByteReverseIterator) */
void core__flat___core__flat__FlatBufferByteReverseIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatBuffer */;
char* var1 /* : CString */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferByteReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferByteReverseIterator>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__target]))(self); /* target on <self:FlatBufferByteReverseIterator>*/
}
var1 = var->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var:FlatBuffer> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__target_items_61d]))(self, var1); /* target_items= on <self:FlatBufferByteReverseIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatBufferByteReverseIterator$index for (self: FlatBufferByteReverseIterator): Int */
long core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteReverseIterator$is_ok for (self: FlatBufferByteReverseIterator): Bool */
short int core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferByteReverseIterator>*/
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
/* method flat$FlatBufferByteReverseIterator$item for (self: FlatBufferByteReverseIterator): Byte */
unsigned char core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : CString */;
long var2 /* : Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__target_items]))(self); /* target_items on <self:FlatBufferByteReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferByteReverseIterator>*/
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
/* method flat$FlatBufferByteReverseIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteReverseIterator$next for (self: FlatBufferByteReverseIterator) */
void core__flat___core__flat__FlatBufferByteReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferByteReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatBufferByteReverseIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatBufferByteReverseIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatBufferByteView$[] for (self: FlatBufferByteView, Int): Byte */
unsigned char core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
char* var2 /* : CString */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:FlatBufferByteView>*/
}
var2 = var1->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var1:Text(FlatBuffer)> */
{
{ /* Inline native$CString$[] (var2,var_index) on <var2:CString> */
var5 = (unsigned char)((int)var2[var_index]);
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
/* method flat$FlatBufferByteView$[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteView$iterator_from for (self: FlatBufferByteView, Int): IndexedIterator[Byte] */
val* core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferByteIterator */;
val* var2 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferByteIterator(&type_core__flat__FlatBufferByteIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:FlatBufferByteView>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatBufferByteIterator__target_61d]))(var1, var2); /* target= on <var1:FlatBufferByteIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos_61d]))(var1, var_pos); /* curr_pos= on <var1:FlatBufferByteIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteView$reverse_iterator_from for (self: FlatBufferByteView, Int): IndexedIterator[Byte] */
val* core__flat___core__flat__FlatBufferByteView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferByteReverseIterator */;
val* var2 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferByteReverseIterator(&type_core__flat__FlatBufferByteReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:FlatBufferByteView>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__target_61d]))(var1, var2); /* target= on <var1:FlatBufferByteReverseIterator>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__flat__FlatBufferByteReverseIterator__curr_pos_61d]))(var1, var_pos); /* curr_pos= on <var1:FlatBufferByteReverseIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBufferByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteIterator$target for (self: FlatBufferByteIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferByteIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___target].val; /* _target on <self:FlatBufferByteIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1209);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteIterator$target= for (self: FlatBufferByteIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferByteIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferByteIterator___target].val = p0; /* _target on <self:FlatBufferByteIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferByteIterator$target_items for (self: FlatBufferByteIterator): CString */
char* core__flat___core__flat__FlatBufferByteIterator___target_items(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___target_items].str; /* _target_items on <self:FlatBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteIterator$target_items= for (self: FlatBufferByteIterator, CString) */
void core__flat___core__flat__FlatBufferByteIterator___target_items_61d(val* self, char* p0) {
self->attrs[COLOR_core__flat__FlatBufferByteIterator___target_items].str = p0; /* _target_items on <self:FlatBufferByteIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferByteIterator$curr_pos for (self: FlatBufferByteIterator): Int */
long core__flat___core__flat__FlatBufferByteIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferByteIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteIterator$curr_pos= for (self: FlatBufferByteIterator, Int) */
void core__flat___core__flat__FlatBufferByteIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferByteIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferByteIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferByteIterator$init for (self: FlatBufferByteIterator) */
void core__flat___core__flat__FlatBufferByteIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatBuffer */;
char* var1 /* : CString */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferByteIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferByteIterator>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__target]))(self); /* target on <self:FlatBufferByteIterator>*/
}
var1 = var->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var:FlatBuffer> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__target_items_61d]))(self, var1); /* target_items= on <self:FlatBufferByteIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatBufferByteIterator$index for (self: FlatBufferByteIterator): Int */
long core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteIterator$is_ok for (self: FlatBufferByteIterator): Bool */
short int core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : FlatBuffer */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferByteIterator>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__target]))(self); /* target on <self:FlatBufferByteIterator>*/
}
var3 = var2->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var2:FlatBuffer> */
{
{ /* Inline kernel$Int$< (var1,var3) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var1 < var3;
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
/* method flat$FlatBufferByteIterator$item for (self: FlatBufferByteIterator): Byte */
unsigned char core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : CString */;
long var2 /* : Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__target_items]))(self); /* target_items on <self:FlatBufferByteIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferByteIterator>*/
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
/* method flat$FlatBufferByteIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferByteIterator$next for (self: FlatBufferByteIterator) */
void core__flat___core__flat__FlatBufferByteIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferByteIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatBufferByteIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatBufferByteIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatBufferByteIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatBufferCharReverseIterator$target for (self: FlatBufferCharReverseIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferCharReverseIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___target].val; /* _target on <self:FlatBufferCharReverseIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1230);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharReverseIterator$target= for (self: FlatBufferCharReverseIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferCharReverseIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___target].val = p0; /* _target on <self:FlatBufferCharReverseIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferCharReverseIterator$curr_pos for (self: FlatBufferCharReverseIterator): Int */
long core__flat___core__flat__FlatBufferCharReverseIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharReverseIterator$curr_pos= for (self: FlatBufferCharReverseIterator, Int) */
void core__flat___core__flat__FlatBufferCharReverseIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharReverseIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferCharReverseIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferCharReverseIterator$index for (self: FlatBufferCharReverseIterator): Int */
long core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharReverseIterator$is_ok for (self: FlatBufferCharReverseIterator): Bool */
short int core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferCharReverseIterator>*/
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
/* method flat$FlatBufferCharReverseIterator$item for (self: FlatBufferCharReverseIterator): Char */
uint32_t core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__target]))(self); /* target on <self:FlatBufferCharReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferCharReverseIterator>*/
}
{
var3 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var2); /* [] on <var1:FlatBuffer>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharReverseIterator$item for (self: Iterator[nullable Object]): nullable Object */
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
/* method flat$FlatBufferCharReverseIterator$next for (self: FlatBufferCharReverseIterator) */
void core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferCharReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatBufferCharReverseIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatBufferCharReverseIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatBufferCharReverseIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatBufferCharReverseIterator$init for (self: FlatBufferCharReverseIterator) */
void core__flat___core__flat__FlatBufferCharReverseIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferCharReverseIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferCharReverseIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatBufferCharView$[] for (self: FlatBufferCharView, Int): Char */
uint32_t core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_index /* var index: Int */;
val* var1 /* : Text */;
uint32_t var2 /* : Char */;
var_index = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
var2 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var_index); /* [] on <var1:Text(FlatBuffer)>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharView$[] for (self: SequenceRead[nullable Object], Int): nullable Object */
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
/* method flat$FlatBufferCharView$[]= for (self: FlatBufferCharView, Int, Char) */
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
val* var21 /* : nullable Object */;
val* var22 /* : Text */;
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
{ /* Inline kernel$Int$>= (var_index,0l) on <var_index:Int> */
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
var9 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:FlatBufferCharView>*/
}
{
{ /* Inline kernel$Int$<= (var_index,var9) on <var_index:Int> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1253);
fatal_exit(1);
}
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:FlatBufferCharView>*/
}
{
{ /* Inline kernel$Int$== (var_index,var17) on <var_index:Int> */
var20 = var_index == var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
var21 = (val*)((long)(var_item)<<2|2);
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(self, var21); /* add on <self:FlatBufferCharView>*/
}
goto RET_LABEL;
} else {
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, long p0, uint32_t p1))(var22->class->vft[COLOR_core__abstract_text__Buffer___91d_93d_61d]))(var22, var_index, var_item); /* []= on <var22:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat$FlatBufferCharView$[]= for (self: Sequence[nullable Object], Int, nullable Object) */
void VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p1)>>2);
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence___91d_93d_61d(self, p0, var); /* Direct call flat$FlatBufferCharView$[]= on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method flat$FlatBufferCharView$push for (self: FlatBufferCharView, Char) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push(val* self, uint32_t p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
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
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, uint32_t p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__add]))(var1, var_c); /* add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat$FlatBufferCharView$push for (self: Sequence[nullable Object], nullable Object) */
void VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push(self, var); /* Direct call flat$FlatBufferCharView$push on <self:Sequence[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method flat$FlatBufferCharView$add for (self: FlatBufferCharView, Char) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(val* self, uint32_t p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
uint32_t var_c /* var c: Char */;
val* var1 /* : Text */;
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
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, uint32_t p0))(var1->class->vft[COLOR_core__abstract_text__Buffer__add]))(var1, var_c); /* add on <var1:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat$FlatBufferCharView$add for (self: SimpleCollection[nullable Object], nullable Object) */
void VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(val* self, val* p0) {
uint32_t var /* : Char */;
var = (uint32_t)((long)(p0)>>2);
core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add(self, var); /* Direct call flat$FlatBufferCharView$add on <self:SimpleCollection[nullable Object](FlatBufferCharView)>*/
RET_LABEL:;
}
/* method flat$FlatBufferCharView$enlarge for (self: FlatBufferCharView, Int) */
void core__flat___core__flat__FlatBufferCharView___enlarge(val* self, long p0) {
long var_cap /* var cap: Int */;
val* var /* : Text */;
var_cap = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_core__abstract_text__Buffer__enlarge]))(var, var_cap); /* enlarge on <var:Text(FlatBuffer)>*/
}
RET_LABEL:;
}
/* method flat$FlatBufferCharView$append for (self: FlatBufferCharView, Collection[Char]) */
void core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_s /* var s: Collection[Char] */;
long var1 /* : Int */;
long var_s_length /* var s_length: Int */;
val* var2 /* : Text */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
short int var11 /* : Bool */;
val* var12 /* : Text */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
val* var_ /* var : Collection[Char] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : Iterator[Char] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
uint32_t var25 /* : Char */;
uint32_t var_i /* var i: Char */;
val* var26 /* : Text */;
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
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__flat__FlatBuffer__capacity]))(var2); /* capacity on <var2:Text(FlatBuffer)>*/
}
{
var4 = ((long(*)(val* self))((((long)var_s&3)?class_info[((long)var_s&3)]:var_s->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Collection[Char]>*/
}
{
{ /* Inline kernel$Int$< (var3,var4) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var11 = var3 < var4;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
var13 = var12->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var12:Text(FlatBuffer)> */
{
{ /* Inline kernel$Int$+ (var_s_length,var13) on <var_s_length:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var_s_length + var13;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatBufferCharView__enlarge]))(self, var14); /* enlarge on <self:FlatBufferCharView>*/
}
} else {
}
var_ = var_s;
{
var21 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Char]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:Iterator[Char]>*/
}
if (var23){
} else {
goto BREAK_label;
}
{
var24 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:Iterator[Char]>*/
}
var25 = (uint32_t)((long)(var24)>>2);
var_i = var25;
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
}
{
((void(*)(val* self, uint32_t p0))(var26->class->vft[COLOR_core__abstract_text__Buffer__add]))(var26, var_i); /* add on <var26:Text(FlatBuffer)>*/
}
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:Iterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:Iterator[Char]>*/
}
RET_LABEL:;
}
/* method flat$FlatBufferCharView$iterator_from for (self: FlatBufferCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferCharIterator */;
val* var2 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferCharIterator(&type_core__flat__FlatBufferCharIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
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
/* method flat$FlatBufferCharView$reverse_iterator_from for (self: FlatBufferCharView, Int): IndexedIterator[Char] */
val* core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_pos /* var pos: Int */;
val* var1 /* : FlatBufferCharReverseIterator */;
val* var2 /* : Text */;
var_pos = p0;
var1 = NEW_core__flat__FlatBufferCharReverseIterator(&type_core__flat__FlatBufferCharReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:FlatBufferCharView>*/
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
/* method flat$FlatBufferCharIterator$target for (self: FlatBufferCharIterator): FlatBuffer */
val* core__flat___core__flat__FlatBufferCharIterator___target(val* self) {
val* var /* : FlatBuffer */;
val* var1 /* : FlatBuffer */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val; /* _target on <self:FlatBufferCharIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1292);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$target= for (self: FlatBufferCharIterator, FlatBuffer) */
void core__flat___core__flat__FlatBufferCharIterator___target_61d(val* self, val* p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___target].val = p0; /* _target on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferCharIterator$max for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l; /* _max on <self:FlatBufferCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$max= for (self: FlatBufferCharIterator, Int) */
void core__flat___core__flat__FlatBufferCharIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___max].l = p0; /* _max on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferCharIterator$curr_pos for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___curr_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l; /* _curr_pos on <self:FlatBufferCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$curr_pos= for (self: FlatBufferCharIterator, Int) */
void core__flat___core__flat__FlatBufferCharIterator___curr_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__flat__FlatBufferCharIterator___curr_pos].l = p0; /* _curr_pos on <self:FlatBufferCharIterator> */
RET_LABEL:;
}
/* method flat$FlatBufferCharIterator$init for (self: FlatBufferCharIterator) */
void core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init(val* self) {
val* var /* : FlatBuffer */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init]))(self); /* init on <self:FlatBufferCharIterator>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__target]))(self); /* target on <self:FlatBufferCharIterator>*/
}
var1 = var->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var:FlatBuffer> */
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
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__max_61d]))(self, var2); /* max= on <self:FlatBufferCharIterator>*/
}
RET_LABEL:;
}
/* method flat$FlatBufferCharIterator$index for (self: FlatBufferCharIterator): Int */
long core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$is_ok for (self: FlatBufferCharIterator): Bool */
short int core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferCharIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__max]))(self); /* max on <self:FlatBufferCharIterator>*/
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
/* method flat$FlatBufferCharIterator$item for (self: FlatBufferCharIterator): Char */
uint32_t core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : FlatBuffer */;
long var2 /* : Int */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__target]))(self); /* target on <self:FlatBufferCharIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos]))(self); /* curr_pos on <self:FlatBufferCharIterator>*/
}
{
var3 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var2); /* [] on <var1:FlatBuffer>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$FlatBufferCharIterator$item for (self: Iterator[nullable Object]): nullable Object */
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
/* method flat$FlatBufferCharIterator$next for (self: FlatBufferCharIterator) */
void core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : FlatBufferCharIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos]))(var_); /* curr_pos on <var_:FlatBufferCharIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__flat__FlatBufferCharIterator__curr_pos_61d]))(var_, var1); /* curr_pos= on <var_:FlatBufferCharIterator>*/
}
RET_LABEL:;
}
/* method flat$CString$to_s for (self: CString): String */
val* core__flat___CString___core__abstract_text__Object__to_s(char* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = core__flat___CString___to_s_unsafe(self, ((val*)NULL), ((val*)NULL), ((val*)NULL), ((val*)NULL));
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$CString$to_s for (self: Object): String */
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
/* method flat$CString$to_s_with_length for (self: CString, Int): String */
val* core__flat___CString___to_s_with_length(char* self, long p0) {
val* var /* : String */;
long var_byte_length /* var byte_length: Int */;
val* var1 /* : String */;
val* var2 /* : nullable Int */;
var_byte_length = p0;
var2 = (val*)(var_byte_length<<2|1);
var1 = core__flat___CString___to_s_unsafe(self, var2, ((val*)NULL), ((val*)NULL), ((val*)NULL));
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$CString$to_s_unsafe for (self: CString, nullable Int, nullable Int, nullable Bool, nullable Bool): String */
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
val* var15 /* : nullable Int */;
long var16 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
long var_from /* var from: Int */;
long var_byte_length21 /* var byte_length: Int */;
long var_st /* var st: Int */;
long var_ln /* var ln: Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
uint32_t var33 /* : UInt32 */;
uint32_t var35 /* : UInt32 */;
uint32_t var_i /* var i: UInt32 */;
uint32_t var36 /* : UInt32 */;
uint32_t var38 /* : UInt32 */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
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
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
long var68 /* : Int */;
long var_cln /* var cln: Int */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
long var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
long var82 /* : Int */;
long var83 /* : Int */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
long var89 /* : Int */;
val* var90 /* : nullable Int */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var_ /* var : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var_96 /* var : Bool */;
char* var97 /* : CString */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
static char* varoncenew;
static int varoncenew_guard;
char* var101 /* : CString */;
char* var102 /* : CString */;
long var103 /* : Int */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
long var109 /* : Int */;
long var110 /* : Int */;
char* var111 /* : CString */;
char* var113 /* : CString */;
char* var_new_cstr /* var new_cstr: CString */;
long var115 /* : Int */;
long var117 /* : Int */;
static val* varoncenew118;
static int varoncenew118_guard;
val* var119 /* : FlatString */;
val* var120 /* : FlatString */;
long var121 /* : Int */;
long var122 /* : Int */;
val* var123 /* : FlatString */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
static val* varoncenew126;
static int varoncenew126_guard;
val* var127 /* : FlatString */;
val* var128 /* : FlatString */;
long var129 /* : Int */;
long var130 /* : Int */;
val* var131 /* : FlatString */;
var_byte_length = p0;
var_char_length = p1;
var_copy = p2;
var_clean = p3;
if (var_byte_length!=NULL) {
var2 = (long)(var_byte_length)>>2;
var1 = var2;
} else {
var3 = core___core__CString___cstring_length(self);
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
var13 = (long)(var_byte_length)>>2;
var12 = core__flat___CString___clean_utf8(self, var13);
var_str = var12;
{
var14 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__length]))(var_str); /* length on <var_str:nullable Object(FlatString)>*/
}
var15 = (val*)(var14<<2|1);
var_char_length = var15;
} else {
if (var_char_length!=NULL) {
var17 = (long)(var_char_length)>>2;
var16 = var17;
} else {
{
{ /* Inline native$CString$utf8_length (self,0l,var_byte_length) on <self:CString> */
var20 = (long)(var_byte_length)>>2;
var_from = 0l;
var_byte_length21 = var20;
var_st = var_from;
var_ln = 0l;
for(;;) {
{
{ /* Inline kernel$Int$> (var_byte_length21,0l) on <var_byte_length21:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var24 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var25 = var_byte_length21 > 0l;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
for(;;) {
{
{ /* Inline kernel$Int$>= (var_byte_length21,4l) on <var_byte_length21:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var28 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var32 = var_byte_length21 >= 4l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
{
{ /* Inline native$CString$fetch_4_chars (self,var_st) on <self:CString> */
var35 = *((uint32_t*)(self + var_st));
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_i = var33;
{
{ /* Inline fixed_ints$UInt32$& (var_i,UINT32_C(2155905152)) on <var_i:UInt32> */
var38 = var_i & UINT32_C(2155905152);
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$!= (var36,UINT32_C(0)) on <var36:UInt32> */
var41 = var36 == UINT32_C(0);
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel$Int$- (var_byte_length21,4l) on <var_byte_length21:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var45 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var49 = var_byte_length21 - 4l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_byte_length21 = var43;
{
{ /* Inline kernel$Int$+ (var_st,4l) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var52 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var_st + 4l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var_st = var50;
{
{ /* Inline kernel$Int$+ (var_ln,4l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var59 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var63 = var_ln + 4l;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var_ln = var57;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$== (var_byte_length21,0l) on <var_byte_length21:Int> */
var66 = var_byte_length21 == 0l;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (var64){
goto BREAK_label67;
} else {
}
var68 = core___core__CString___length_of_char_at(self, var_st);
var_cln = var68;
{
{ /* Inline kernel$Int$+ (var_st,var_cln) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var71 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var75 = var_st + var_cln;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var_st = var69;
{
{ /* Inline kernel$Int$+ (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var78 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var82 = var_ln + 1l;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
var_ln = var76;
{
{ /* Inline kernel$Int$- (var_byte_length21,var_cln) on <var_byte_length21:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var85 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var89 = var_byte_length21 - var_cln;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var_byte_length21 = var83;
} else {
goto BREAK_label67;
}
}
BREAK_label67: (void)0;
var18 = var_ln;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
}
var90 = (val*)(var16<<2|1);
var_char_length = var90;
}
var92 = (short int)((long)(var_copy)>>2);
var_ = var92;
if (var92){
if (var_str == NULL) {
var94 = 1; /* is null */
} else {
var94 = 0; /* arg is null but recv is not */
}
if (0) {
var95 = ((short int(*)(val* self, val* p0))(var_str->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_str, ((val*)NULL)); /* == on <var_str:nullable Object(nullable FlatString)>*/
var94 = var95;
}
var_96 = var94;
if (var94){
var93 = var_96;
} else {
{
var97 = ((char*(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__FlatText__items]))(var_str); /* items on <var_str:nullable Object(FlatString)>*/
}
{
{ /* Inline native$CString$== (var97,self) on <var97:CString> */
var100 = var97 == self;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var93 = var98;
}
var91 = var93;
} else {
var91 = var_;
}
if (var91){
if (likely(varoncenew_guard)) {
var101 = varoncenew;
} else {
var102 = NULL/*special!*/;
var101 = var102;
varoncenew = var101;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_byte_length,1l) on <var_byte_length:nullable Int(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var105 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var109 = (long)(var_byte_length)>>2;
var110 = var109 + 1l;
var103 = var110;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline native$CString$new (var101,var103) on <var101:CString> */
var113 = (char*)nit_alloc(var103);
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
var_new_cstr = var111;
{
{ /* Inline native$CString$copy_to (self,var_new_cstr,var_byte_length,0l,0l) on <self:CString> */
var115 = (long)(var_byte_length)>>2;
memmove(var_new_cstr+0l,self+0l,var115);
RET_LABEL114:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_new_cstr,var_byte_length,((unsigned char)0x00)) on <var_new_cstr:CString> */
var117 = (long)(var_byte_length)>>2;
var_new_cstr[var117]=(unsigned char)((unsigned char)0x00);
RET_LABEL116:(void)0;
}
}
if (likely(varoncenew118_guard)) {
var119 = varoncenew118;
} else {
var120 = NEW_core__FlatString(&type_core__FlatString);
var119 = var120;
varoncenew118 = var119;
varoncenew118_guard = 1;
}
{
var121 = (long)(var_byte_length)>>2;
var122 = (long)(var_char_length)>>2;
var123 = ((val*(*)(val* self, char* p0, long p1, long p2, long p3))(var119->class->vft[COLOR_core__flat__FlatString__full]))(var119, var_new_cstr, var121, 0l, var122); /* full on <var119:FlatString>*/
}
var_str = var123;
} else {
}
if (var_str == NULL) {
var124 = 1; /* is null */
} else {
var124 = 0; /* arg is null but recv is not */
}
if (0) {
var125 = ((short int(*)(val* self, val* p0))(var_str->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_str, ((val*)NULL)); /* == on <var_str:nullable Object(nullable FlatString)>*/
var124 = var125;
}
if (var124){
if (likely(varoncenew126_guard)) {
var127 = varoncenew126;
} else {
var128 = NEW_core__FlatString(&type_core__FlatString);
var127 = var128;
varoncenew126 = var127;
varoncenew126_guard = 1;
}
{
var129 = (long)(var_byte_length)>>2;
var130 = (long)(var_char_length)>>2;
var131 = ((val*(*)(val* self, char* p0, long p1, long p2, long p3))(var127->class->vft[COLOR_core__flat__FlatString__full]))(var127, self, var129, 0l, var130); /* full on <var127:FlatString>*/
}
var_str = var131;
} else {
}
var = var_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$CString$clean_utf8 for (self: CString, Int): FlatString */
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
static char* varoncenew;
static int varoncenew_guard;
char* var311 /* : CString */;
char* var312 /* : CString */;
char* var313 /* : CString */;
char* var315 /* : CString */;
long var_old_repl /* var old_repl: Int */;
long var_off /* var off: Int */;
val* var_repls /* var repls: Array[Int] */;
val* var316 /* : nullable NativeArray[nullable Object] */;
val* var_r /* var r: NativeArray[Int] */;
long var317 /* : Int */;
long var_imax /* var imax: Int */;
long var_i318 /* var i: Int */;
long var_319 /* var : Int */;
short int var320 /* : Bool */;
short int var322 /* : Bool */;
int cltype323;
int idtype324;
const char* var_class_name325;
short int var326 /* : Bool */;
val* var328 /* : nullable Object */;
val* var330 /* : Object */;
long var331 /* : Int */;
long var_repl_pos /* var repl_pos: Int */;
long var332 /* : Int */;
short int var334 /* : Bool */;
int cltype335;
int idtype336;
const char* var_class_name337;
long var338 /* : Int */;
long var_chkln /* var chkln: Int */;
long var340 /* : Int */;
short int var342 /* : Bool */;
int cltype343;
int idtype344;
const char* var_class_name345;
long var346 /* : Int */;
long var348 /* : Int */;
short int var350 /* : Bool */;
int cltype351;
int idtype352;
const char* var_class_name353;
long var354 /* : Int */;
long var356 /* : Int */;
short int var358 /* : Bool */;
int cltype359;
int idtype360;
const char* var_class_name361;
long var362 /* : Int */;
long var364 /* : Int */;
short int var366 /* : Bool */;
int cltype367;
int idtype368;
const char* var_class_name369;
long var370 /* : Int */;
long var371 /* : Int */;
short int var373 /* : Bool */;
int cltype374;
int idtype375;
const char* var_class_name376;
long var377 /* : Int */;
long var378 /* : Int */;
long var379 /* : Int */;
short int var381 /* : Bool */;
int cltype382;
int idtype383;
const char* var_class_name384;
long var385 /* : Int */;
static val* varoncenew387;
static int varoncenew387_guard;
val* var388 /* : FlatString */;
val* var389 /* : FlatString */;
val* var390 /* : FlatString */;
var_len = p0;
var_replacements = ((val*)NULL);
var_end_length = var_len;
var_pos = 0l;
var_chr_ln = 0l;
var_rem = var_len;
for(;;) {
{
{ /* Inline kernel$Int$> (var_rem,0l) on <var_rem:Int> */
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
{ /* Inline kernel$Int$>= (var_rem,4l) on <var_rem:Int> */
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
{ /* Inline native$CString$fetch_4_chars (self,var_pos) on <self:CString> */
var14 = *((uint32_t*)(self + var_pos));
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_i = var12;
{
{ /* Inline fixed_ints$UInt32$& (var_i,UINT32_C(2155905152)) on <var_i:UInt32> */
var17 = var_i & UINT32_C(2155905152);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline fixed_ints$UInt32$!= (var15,UINT32_C(0)) on <var15:UInt32> */
var20 = var15 == UINT32_C(0);
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
{ /* Inline kernel$Int$+ (var_pos,4l) on <var_pos:Int> */
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
{ /* Inline kernel$Int$+ (var_chr_ln,4l) on <var_chr_ln:Int> */
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
{ /* Inline kernel$Int$- (var_rem,4l) on <var_rem:Int> */
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
{ /* Inline kernel$Int$== (var_rem,0l) on <var_rem:Int> */
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
{ /* Inline native$CString$[] (self,var_pos) on <self:CString> */
var49 = (unsigned char)((int)self[var_pos]);
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_b = var47;
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var52 = var_b & ((unsigned char)0x80);
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var50,((unsigned char)0x00)) on <var50:Byte> */
var55 = var50 == ((unsigned char)0x00);
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
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
{ /* Inline kernel$Int$+ (var_chr_ln,1l) on <var_chr_ln:Int> */
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
{ /* Inline kernel$Int$- (var_rem,1l) on <var_rem:Int> */
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
var78 = core___core__CString___length_of_char_at(self, var_pos);
var_nxst = var78;
{
{ /* Inline kernel$Int$== (var_nxst,1l) on <var_nxst:Int> */
var81 = var_nxst == 1l;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
if (var79){
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0x80)) on <var_b:Byte> */
var84 = var_b & ((unsigned char)0x80);
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var82,((unsigned char)0x00)) on <var82:Byte> */
var87 = var82 == ((unsigned char)0x00);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_ok_st = var85;
} else {
{
{ /* Inline kernel$Int$== (var_nxst,2l) on <var_nxst:Int> */
var90 = var_nxst == 2l;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0xe0)) on <var_b:Byte> */
var93 = var_b & ((unsigned char)0xe0);
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var91,((unsigned char)0xc0)) on <var91:Byte> */
var96 = var91 == ((unsigned char)0xc0);
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_ok_st = var94;
} else {
{
{ /* Inline kernel$Int$== (var_nxst,3l) on <var_nxst:Int> */
var99 = var_nxst == 3l;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
if (var97){
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0xf0)) on <var_b:Byte> */
var102 = var_b & ((unsigned char)0xf0);
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var100,((unsigned char)0xe0)) on <var100:Byte> */
var105 = var100 == ((unsigned char)0xe0);
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_ok_st = var103;
} else {
{
{ /* Inline math$Byte$& (var_b,((unsigned char)0xf8)) on <var_b:Byte> */
var108 = var_b & ((unsigned char)0xf8);
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var106,((unsigned char)0xf0)) on <var106:Byte> */
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
var114 = ((short int(*)(val* self, val* p0))(var_replacements->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_replacements, ((val*)NULL)); /* == on <var_replacements:nullable Array[Int]>*/
var113 = var114;
}
if (var113){
var115 = NEW_core__Array(&type_core__Array__core__Int);
{
((void(*)(val* self))(var115->class->vft[COLOR_core__kernel__Object__init]))(var115); /* init on <var115:Array[Int]>*/
}
var_replacements = var115;
} else {
}
{
var116 = (val*)(var_pos<<2|1);
((void(*)(val* self, val* p0))(var_replacements->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_replacements, var116); /* add on <var_replacements:nullable Array[Int](Array[Int])>*/
}
{
{ /* Inline kernel$Int$+ (var_end_length,2l) on <var_end_length:Int> */
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
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
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
{ /* Inline kernel$Int$- (var_rem,1l) on <var_rem:Int> */
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
{ /* Inline kernel$Int$+ (var_chr_ln,1l) on <var_chr_ln:Int> */
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
var145 = core___core__CString___char_at(self, var_pos);
var_c = var145;
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var148 = (long)var_c;
var146 = var148;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
var_cp = var146;
{
{ /* Inline kernel$Int$== (var_nxst,1l) on <var_nxst:Int> */
var151 = var_nxst == 1l;
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
if (var149){
{
{ /* Inline kernel$Int$>= (var_cp,0l) on <var_cp:Int> */
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
{ /* Inline kernel$Int$<= (var_cp,127l) on <var_cp:Int> */
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
{ /* Inline kernel$Int$== (var_nxst,2l) on <var_nxst:Int> */
var169 = var_nxst == 2l;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
if (var167){
{
{ /* Inline kernel$Int$>= (var_cp,128l) on <var_cp:Int> */
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
{ /* Inline kernel$Int$<= (var_cp,2047l) on <var_cp:Int> */
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
{ /* Inline kernel$Int$== (var_nxst,3l) on <var_nxst:Int> */
var188 = var_nxst == 3l;
var186 = var188;
goto RET_LABEL187;
RET_LABEL187:(void)0;
}
}
if (var186){
{
{ /* Inline kernel$Int$>= (var_cp,2048l) on <var_cp:Int> */
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
{ /* Inline kernel$Int$<= (var_cp,65535l) on <var_cp:Int> */
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
{ /* Inline kernel$Int$>= (var_cp,55296l) on <var_cp:Int> */
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
{ /* Inline kernel$Int$<= (var_cp,57343l) on <var_cp:Int> */
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
{ /* Inline kernel$Int$!= (var_cp,65534l) on <var_cp:Int> */
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
{ /* Inline kernel$Int$!= (var_cp,65535l) on <var_cp:Int> */
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
{ /* Inline kernel$Int$>= (var_cp,65536l) on <var_cp:Int> */
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
{ /* Inline kernel$Int$<= (var_cp,1114111l) on <var_cp:Int> */
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
var254 = ((short int(*)(val* self, val* p0))(var_replacements->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_replacements, ((val*)NULL)); /* == on <var_replacements:nullable Array[Int]>*/
var253 = var254;
}
if (var253){
var255 = NEW_core__Array(&type_core__Array__core__Int);
{
((void(*)(val* self))(var255->class->vft[COLOR_core__kernel__Object__init]))(var255); /* init on <var255:Array[Int]>*/
}
var_replacements = var255;
} else {
}
{
var256 = (val*)(var_pos<<2|1);
((void(*)(val* self, val* p0))(var_replacements->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_replacements, var256); /* add on <var_replacements:nullable Array[Int](Array[Int])>*/
}
{
{ /* Inline kernel$Int$+ (var_end_length,2l) on <var_end_length:Int> */
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
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
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
{ /* Inline kernel$Int$+ (var_chr_ln,1l) on <var_chr_ln:Int> */
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
{ /* Inline kernel$Int$- (var_rem,1l) on <var_rem:Int> */
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
var285 = core__abstract_text___Char___u8char_len(var_c);
var_clen = var285;
{
{ /* Inline kernel$Int$+ (var_pos,var_clen) on <var_pos:Int> */
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
{ /* Inline kernel$Int$- (var_rem,var_clen) on <var_rem:Int> */
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
{ /* Inline kernel$Int$+ (var_chr_ln,1l) on <var_chr_ln:Int> */
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
{ /* Inline kernel$Int$!= (var_end_length,var_len) on <var_end_length:Int> */
var309 = var_end_length == var_len;
var310 = !var309;
var307 = var310;
goto RET_LABEL308;
RET_LABEL308:(void)0;
}
}
if (var307){
if (likely(varoncenew_guard)) {
var311 = varoncenew;
} else {
var312 = NULL/*special!*/;
var311 = var312;
varoncenew = var311;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var311,var_end_length) on <var311:CString> */
var315 = (char*)nit_alloc(var_end_length);
var313 = var315;
goto RET_LABEL314;
RET_LABEL314:(void)0;
}
}
var_ret = var313;
var_old_repl = 0l;
var_off = 0l;
if (unlikely(var_replacements == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1427);
fatal_exit(1);
}
var_repls = var_replacements;
{
var316 = ((val*(*)(val* self))(var_repls->class->vft[COLOR_core__array__Array__items]))(var_repls); /* items on <var_repls:Array[Int]>*/
}
if (unlikely(var316 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1428);
fatal_exit(1);
}
var_r = var316;
{
var317 = ((long(*)(val* self))(var_repls->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_repls); /* length on <var_repls:Array[Int]>*/
}
var_imax = var317;
var_i318 = 0l;
var_319 = var_imax;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i318,var_319) on <var_i318:Int> */
/* Covariant cast for argument 0 (i) <var_319:Int> isa OTHER */
/* <var_319:Int> isa OTHER */
var322 = 1; /* easy <var_319:Int> isa OTHER*/
if (unlikely(!var322)) {
var_class_name325 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name325);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var326 = var_i318 < var_319;
var320 = var326;
goto RET_LABEL321;
RET_LABEL321:(void)0;
}
}
if (var320){
} else {
goto BREAK_label327;
}
{
{ /* Inline array$NativeArray$[] (var_r,var_i318) on <var_r:NativeArray[Int]> */
var330 = ((struct instance_core__NativeArray*)var_r)->values[var_i318];
var328 = var330;
goto RET_LABEL329;
RET_LABEL329:(void)0;
}
}
var331 = (long)(var328)>>2;
var_repl_pos = var331;
{
{ /* Inline kernel$Int$- (var_repl_pos,var_old_repl) on <var_repl_pos:Int> */
/* Covariant cast for argument 0 (i) <var_old_repl:Int> isa OTHER */
/* <var_old_repl:Int> isa OTHER */
var334 = 1; /* easy <var_old_repl:Int> isa OTHER*/
if (unlikely(!var334)) {
var_class_name337 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name337);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var338 = var_repl_pos - var_old_repl;
var332 = var338;
goto RET_LABEL333;
RET_LABEL333:(void)0;
}
}
var_chkln = var332;
{
{ /* Inline native$CString$copy_to (self,var_ret,var_chkln,var_old_repl,var_off) on <self:CString> */
memmove(var_ret+var_off,self+var_old_repl,var_chkln);
RET_LABEL339:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_chkln) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_chkln:Int> isa OTHER */
/* <var_chkln:Int> isa OTHER */
var342 = 1; /* easy <var_chkln:Int> isa OTHER*/
if (unlikely(!var342)) {
var_class_name345 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name345);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var346 = var_off + var_chkln;
var340 = var346;
goto RET_LABEL341;
RET_LABEL341:(void)0;
}
}
var_off = var340;
{
{ /* Inline native$CString$[]= (var_ret,var_off,((unsigned char)0xef)) on <var_ret:CString> */
var_ret[var_off]=(unsigned char)((unsigned char)0xef);
RET_LABEL347:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,1l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var350 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var350)) {
var_class_name353 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name353);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var354 = var_off + 1l;
var348 = var354;
goto RET_LABEL349;
RET_LABEL349:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_ret,var348,((unsigned char)0xbf)) on <var_ret:CString> */
var_ret[var348]=(unsigned char)((unsigned char)0xbf);
RET_LABEL355:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,2l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var358 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var358)) {
var_class_name361 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name361);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var362 = var_off + 2l;
var356 = var362;
goto RET_LABEL357;
RET_LABEL357:(void)0;
}
}
{
{ /* Inline native$CString$[]= (var_ret,var356,((unsigned char)0xbd)) on <var_ret:CString> */
var_ret[var356]=(unsigned char)((unsigned char)0xbd);
RET_LABEL363:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_repl_pos,1l) on <var_repl_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var366 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var366)) {
var_class_name369 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name369);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var370 = var_repl_pos + 1l;
var364 = var370;
goto RET_LABEL365;
RET_LABEL365:(void)0;
}
}
var_old_repl = var364;
{
{ /* Inline kernel$Int$+ (var_off,3l) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var373 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var373)) {
var_class_name376 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name376);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var377 = var_off + 3l;
var371 = var377;
goto RET_LABEL372;
RET_LABEL372:(void)0;
}
}
var_off = var371;
var378 = core___core__Int___Discrete__successor(var_i318, 1l);
var_i318 = var378;
}
BREAK_label327: (void)0;
{
{ /* Inline kernel$Int$- (var_len,var_old_repl) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_old_repl:Int> isa OTHER */
/* <var_old_repl:Int> isa OTHER */
var381 = 1; /* easy <var_old_repl:Int> isa OTHER*/
if (unlikely(!var381)) {
var_class_name384 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name384);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var385 = var_len - var_old_repl;
var379 = var385;
goto RET_LABEL380;
RET_LABEL380:(void)0;
}
}
{
{ /* Inline native$CString$copy_to (self,var_ret,var379,var_old_repl,var_off) on <self:CString> */
memmove(var_ret+var_off,self+var_old_repl,var379);
RET_LABEL386:(void)0;
}
}
} else {
}
if (likely(varoncenew387_guard)) {
var388 = varoncenew387;
} else {
var389 = NEW_core__FlatString(&type_core__FlatString);
var388 = var389;
varoncenew387 = var388;
varoncenew387_guard = 1;
}
{
var390 = ((val*(*)(val* self, char* p0, long p1, long p2, long p3))(var388->class->vft[COLOR_core__flat__FlatString__full]))(var388, var_ret, var_end_length, 0l, var_chr_ln); /* full on <var388:FlatString>*/
}
var = var390;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$CString$set_char_at for (self: CString, Int, Char) */
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
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var2 = (long)var_c;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_cp = var;
{
{ /* Inline kernel$Int$< (var_cp,128l) on <var_cp:Int> */
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
{ /* Inline kernel$Int$to_b (var_cp) on <var_cp:Int> */
var9 = (unsigned char)var_cp;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var_pos,var7) on <self:CString> */
self[var_pos]=(unsigned char)var7;
RET_LABEL10:(void)0;
}
}
goto RET_LABEL;
} else {
}
var11 = core__abstract_text___Char___u8char_len(var_c);
var_ln = var11;
{
{ /* Inline kernel$Int$== (var_ln,2l) on <var_ln:Int> */
var14 = var_ln == 2l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline math$Int$& (var_cp,1984l) on <var_cp:Int> */
var17 = var_cp & 1984l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var15,6l) on <var15:Int> */
var20 = var15 >> 6l;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline math$Int$| (192l,var18) on <192l:Int> */
var23 = 192l | var18;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var21) on <var21:Int> */
var26 = (unsigned char)var21;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var_pos,var24) on <self:CString> */
self[var_pos]=(unsigned char)var24;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
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
{ /* Inline math$Int$& (var_cp,63l) on <var_cp:Int> */
var37 = var_cp & 63l;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var35) on <128l:Int> */
var40 = 128l | var35;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var38) on <var38:Int> */
var43 = (unsigned char)var38;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var28,var41) on <self:CString> */
self[var28]=(unsigned char)var41;
RET_LABEL44:(void)0;
}
}
} else {
{
{ /* Inline kernel$Int$== (var_ln,3l) on <var_ln:Int> */
var47 = var_ln == 3l;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
{ /* Inline math$Int$& (var_cp,61440l) on <var_cp:Int> */
var50 = var_cp & 61440l;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var48,12l) on <var48:Int> */
var53 = var48 >> 12l;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline math$Int$| (224l,var51) on <224l:Int> */
var56 = 224l | var51;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var54) on <var54:Int> */
var59 = (unsigned char)var54;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var_pos,var57) on <self:CString> */
self[var_pos]=(unsigned char)var57;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
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
{ /* Inline math$Int$& (var_cp,4032l) on <var_cp:Int> */
var70 = var_cp & 4032l;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var68,6l) on <var68:Int> */
var73 = var68 >> 6l;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var71) on <128l:Int> */
var76 = 128l | var71;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var74) on <var74:Int> */
var79 = (unsigned char)var74;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var61,var77) on <self:CString> */
self[var61]=(unsigned char)var77;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,2l) on <var_pos:Int> */
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
{ /* Inline math$Int$& (var_cp,63l) on <var_cp:Int> */
var90 = var_cp & 63l;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var88) on <128l:Int> */
var93 = 128l | var88;
var91 = var93;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var91) on <var91:Int> */
var96 = (unsigned char)var91;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var81,var94) on <self:CString> */
self[var81]=(unsigned char)var94;
RET_LABEL97:(void)0;
}
}
} else {
{
{ /* Inline kernel$Int$== (var_ln,4l) on <var_ln:Int> */
var100 = var_ln == 4l;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
if (var98){
{
{ /* Inline math$Int$& (var_cp,1835008l) on <var_cp:Int> */
var103 = var_cp & 1835008l;
var101 = var103;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var101,18l) on <var101:Int> */
var106 = var101 >> 18l;
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
{
{ /* Inline math$Int$| (240l,var104) on <240l:Int> */
var109 = 240l | var104;
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var107) on <var107:Int> */
var112 = (unsigned char)var107;
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var_pos,var110) on <self:CString> */
self[var_pos]=(unsigned char)var110;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
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
{ /* Inline math$Int$& (var_cp,258048l) on <var_cp:Int> */
var123 = var_cp & 258048l;
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var121,12l) on <var121:Int> */
var126 = var121 >> 12l;
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var124) on <128l:Int> */
var129 = 128l | var124;
var127 = var129;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var127) on <var127:Int> */
var132 = (unsigned char)var127;
var130 = var132;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var114,var130) on <self:CString> */
self[var114]=(unsigned char)var130;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,2l) on <var_pos:Int> */
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
{ /* Inline math$Int$& (var_cp,4032l) on <var_cp:Int> */
var143 = var_cp & 4032l;
var141 = var143;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var141,6l) on <var141:Int> */
var146 = var141 >> 6l;
var144 = var146;
goto RET_LABEL145;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var144) on <128l:Int> */
var149 = 128l | var144;
var147 = var149;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var147) on <var147:Int> */
var152 = (unsigned char)var147;
var150 = var152;
goto RET_LABEL151;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var134,var150) on <self:CString> */
self[var134]=(unsigned char)var150;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_pos,3l) on <var_pos:Int> */
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
{ /* Inline math$Int$& (var_cp,63l) on <var_cp:Int> */
var163 = var_cp & 63l;
var161 = var163;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
{
{ /* Inline math$Int$| (128l,var161) on <128l:Int> */
var166 = 128l | var161;
var164 = var166;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline kernel$Int$to_b (var164) on <var164:Int> */
var169 = (unsigned char)var164;
var167 = var169;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline native$CString$[]= (self,var154,var167) on <self:CString> */
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
/* method flat$Int$to_s for (self: Int): String */
val* core__flat___Int___core__abstract_text__Object__to_s(long self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
long var22 /* : Int */;
long var_nslen /* var nslen: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var23 /* : CString */;
char* var24 /* : CString */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var28 /* : Int */;
char* var29 /* : CString */;
char* var31 /* : CString */;
char* var_ns /* var ns: CString */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
static val* varoncenew40;
static int varoncenew40_guard;
val* var41 /* : FlatString */;
val* var42 /* : FlatString */;
val* var43 /* : FlatString */;
{
{ /* Inline kernel$Int$== (self,0l) on <self:Int> */
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
var7 = (val*)(1l<<2|1);
var8 = (val*)(1l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (self,1l) on <self:Int> */
var13 = self == 1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "1";
var18 = (val*)(1l<<2|1);
var19 = (val*)(1l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce14 = var15;
}
var = var15;
goto RET_LABEL;
} else {
}
var22 = core__abstract_text___Int___int_to_s_len(self);
var_nslen = var22;
if (likely(varoncenew_guard)) {
var23 = varoncenew;
} else {
var24 = NULL/*special!*/;
var23 = var24;
varoncenew = var23;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var27 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_nslen + 1l;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline native$CString$new (var23,var25) on <var23:CString> */
var31 = (char*)nit_alloc(var25);
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_ns = var29;
{
{ /* Inline native$CString$[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var39 = var_nslen + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
core__abstract_text___Int___native_int_to_s(self, var_ns, var33); /* Direct call abstract_text$Int$native_int_to_s on <self:Int>*/
if (likely(varoncenew40_guard)) {
var41 = varoncenew40;
} else {
var42 = NEW_core__FlatString(&type_core__FlatString);
var41 = var42;
varoncenew40 = var41;
varoncenew40_guard = 1;
}
{
var43 = ((val*(*)(val* self, char* p0, long p1, long p2, long p3))(var41->class->vft[COLOR_core__flat__FlatString__full]))(var41, var_ns, var_nslen, 0l, var_nslen); /* full on <var41:FlatString>*/
}
var = var43;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$Int$to_s for (self: Object): String */
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
/* method flat$Array$plain_to_s for (self: Array[nullable Object]): String */
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
val* var8 /* : nullable Int */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable NativeArray[nullable Object] */;
val* var_its /* var its: NativeArray[nullable Object] */;
val* var13 /* : nullable Object */;
val* var15 /* : Object */;
val* var_first /* var first: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
val* var29 /* : String */;
val* var30 /* : NativeArray[String] */;
val* var_na /* var na: NativeArray[String] */;
long var_i /* var i: Int */;
long var_sl /* var sl: Int */;
long var_mypos /* var mypos: Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var37 /* : Object */;
val* var_itsi /* var itsi: nullable Object */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
val* var47 /* : String */;
val* var_tmp /* var tmp: String */;
long var48 /* : Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const struct type* type_struct;
const char* var_class_name60;
long var61 /* : Int */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
long var67 /* : Int */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var76 /* : CString */;
char* var77 /* : CString */;
long var78 /* : Int */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
long var84 /* : Int */;
char* var85 /* : CString */;
char* var87 /* : CString */;
char* var_ns /* var ns: CString */;
long var_off /* var off: Int */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
short int var95 /* : Bool */;
val* var96 /* : nullable Object */;
val* var98 /* : Object */;
val* var_tmp99 /* var tmp: String */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
long var103 /* : Int */;
long var_tpl /* var tpl: Int */;
char* var104 /* : CString */;
long var105 /* : Int */;
long var107 /* : Int */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
long var113 /* : Int */;
val* var114 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var115 /* : Iterator[nullable Object] */;
val* var_116 /* var : Iterator[FlatText] */;
short int var117 /* : Bool */;
val* var119 /* : nullable Object */;
val* var_j /* var j: FlatText */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
val* var_s /* var s: FlatString */;
long var124 /* : Int */;
long var_slen /* var slen: Int */;
char* var125 /* : CString */;
long var126 /* : Int */;
long var128 /* : Int */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
long var134 /* : Int */;
long var135 /* : Int */;
short int var137 /* : Bool */;
int cltype138;
int idtype139;
const char* var_class_name140;
long var141 /* : Int */;
static val* varoncenew143;
static int varoncenew143_guard;
val* var144 /* : FlatString */;
val* var145 /* : FlatString */;
val* var146 /* : FlatString */;
var1 = self->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <self:Array[nullable Object]> */
var_l = var1;
{
{ /* Inline kernel$Int$== (var_l,0l) on <var_l:Int> */
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
var12 = self->attrs[COLOR_core__array__Array___items].val; /* _items on <self:Array[nullable Object]> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1497);
fatal_exit(1);
}
var_its = var12;
{
{ /* Inline array$NativeArray$[] (var_its,0l) on <var_its:NativeArray[nullable Object]> */
var15 = ((struct instance_core__NativeArray*)var_its)->values[0l];
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_first = var13;
{
{ /* Inline kernel$Int$== (var_l,1l) on <var_l:Int> */
var18 = var_l == 1l;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
if (var_first == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
var20 = ((short int(*)(val* self, val* p0))((((long)var_first&3)?class_info[((long)var_first&3)]:var_first->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_first, ((val*)NULL)); /* == on <var_first:nullable Object>*/
var19 = var20;
}
if (var19){
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "";
var25 = (val*)(0l<<2|1);
var26 = (val*)(0l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce21 = var22;
}
var = var22;
goto RET_LABEL;
} else {
{
var29 = ((val*(*)(val* self))((((long)var_first&3)?class_info[((long)var_first&3)]:var_first->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_first); /* to_s on <var_first:nullable Object(Object)>*/
}
var = var29;
goto RET_LABEL;
}
} else {
}
var30 = NEW_core__NativeArray((int)var_l, &type_core__NativeArray__core__String);
var_na = var30;
var_i = 0l;
var_sl = 0l;
var_mypos = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var33 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var34 = var_i < var_l;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline array$NativeArray$[] (var_its,var_i) on <var_its:NativeArray[nullable Object]> */
var37 = ((struct instance_core__NativeArray*)var_its)->values[var_i];
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_itsi = var35;
if (var_itsi == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
var39 = ((short int(*)(val* self, val* p0))((((long)var_itsi&3)?class_info[((long)var_itsi&3)]:var_itsi->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_itsi, ((val*)NULL)); /* == on <var_itsi:nullable Object>*/
var38 = var39;
}
if (var38){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var42 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var46 = var_i + 1l;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_i = var40;
goto BREAK_label;
} else {
}
{
var47 = ((val*(*)(val* self))((((long)var_itsi&3)?class_info[((long)var_itsi&3)]:var_itsi->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_itsi); /* to_s on <var_itsi:nullable Object(Object)>*/
}
var_tmp = var47;
{
var48 = ((long(*)(val* self))(var_tmp->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_tmp); /* byte_length on <var_tmp:String>*/
}
{
{ /* Inline kernel$Int$+ (var_sl,var48) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <var48:Int> isa OTHER */
/* <var48:Int> isa OTHER */
var51 = 1; /* easy <var48:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var55 = var_sl + var48;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_sl = var49;
{
{ /* Inline array$NativeArray$[]= (var_na,var_mypos,var_tmp) on <var_na:NativeArray[String]> */
/* Covariant cast for argument 1 (item) <var_tmp:String> isa E */
/* <var_tmp:String> isa E */
type_struct = var_na->type->resolution_table->types[COLOR_core__NativeArray___35dE];
cltype58 = type_struct->color;
idtype59 = type_struct->id;
if(cltype58 >= var_tmp->type->table_size) {
var57 = 0;
} else {
var57 = var_tmp->type->type_table[cltype58] == idtype59;
}
if (unlikely(!var57)) {
var_class_name60 = var_tmp == NULL ? "null" : var_tmp->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 991);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var_na)->values[var_mypos]=var_tmp;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var63 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var67 = var_i + 1l;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_i = var61;
{
{ /* Inline kernel$Int$+ (var_mypos,1l) on <var_mypos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var74 = var_mypos + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_mypos = var68;
} else {
goto BREAK_label75;
}
BREAK_label: (void)0;
}
BREAK_label75: (void)0;
if (likely(varoncenew_guard)) {
var76 = varoncenew;
} else {
var77 = NULL/*special!*/;
var76 = var77;
varoncenew = var76;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var80 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var84 = var_sl + 1l;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline native$CString$new (var76,var78) on <var76:CString> */
var87 = (char*)nit_alloc(var78);
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var_ns = var85;
{
{ /* Inline native$CString$[]= (var_ns,var_sl,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_sl]=(unsigned char)((unsigned char)0x00);
RET_LABEL88:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var91 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var95 = var_i < var_mypos;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
if (var89){
{
{ /* Inline array$NativeArray$[] (var_na,var_i) on <var_na:NativeArray[String]> */
var98 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var_tmp99 = var96;
/* <var_tmp99:String> isa FlatString */
cltype101 = type_core__FlatString.color;
idtype102 = type_core__FlatString.id;
if(cltype101 >= var_tmp99->type->table_size) {
var100 = 0;
} else {
var100 = var_tmp99->type->type_table[cltype101] == idtype102;
}
if (var100){
var103 = var_tmp99->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_tmp99:String(FlatString)> */
var_tpl = var103;
var104 = var_tmp99->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tmp99:String(FlatString)> */
var105 = var_tmp99->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tmp99:String(FlatString)> */
{
{ /* Inline native$CString$copy_to (var104,var_ns,var_tpl,var105,var_off) on <var104:CString> */
memmove(var_ns+var_off,var104+var105,var_tpl);
RET_LABEL106:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var109 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var113 = var_off + var_tpl;
var107 = var113;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var_off = var107;
} else {
{
var114 = ((val*(*)(val* self))(var_tmp99->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_tmp99); /* substrings on <var_tmp99:String>*/
}
var_ = var114;
{
var115 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_116 = var115;
for(;;) {
{
var117 = ((short int(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_116); /* is_ok on <var_116:Iterator[FlatText]>*/
}
if (var117){
} else {
goto BREAK_label118;
}
{
var119 = ((val*(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_116); /* item on <var_116:Iterator[FlatText]>*/
}
var_j = var119;
/* <var_j:FlatText> isa FlatString */
cltype121 = type_core__FlatString.color;
idtype122 = type_core__FlatString.id;
if(cltype121 >= var_j->type->table_size) {
var120 = 0;
} else {
var120 = var_j->type->type_table[cltype121] == idtype122;
}
if (unlikely(!var120)) {
var_class_name123 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1528);
fatal_exit(1);
}
var_s = var_j;
var124 = var_s->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_s:FlatString> */
var_slen = var124;
var125 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
var126 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:FlatString> */
{
{ /* Inline native$CString$copy_to (var125,var_ns,var_slen,var126,var_off) on <var125:CString> */
memmove(var_ns+var_off,var125+var126,var_slen);
RET_LABEL127:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var130 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var130)) {
var_class_name133 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name133);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var134 = var_off + var_slen;
var128 = var134;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
var_off = var128;
{
((void(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_116); /* next on <var_116:Iterator[FlatText]>*/
}
}
BREAK_label118: (void)0;
{
((void(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_116); /* finish on <var_116:Iterator[FlatText]>*/
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var137 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var137)) {
var_class_name140 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name140);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var141 = var_i + 1l;
var135 = var141;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
var_i = var135;
} else {
goto BREAK_label142;
}
}
BREAK_label142: (void)0;
if (likely(varoncenew143_guard)) {
var144 = varoncenew143;
} else {
var145 = NEW_core__FlatString(&type_core__FlatString);
var144 = var145;
varoncenew143 = var144;
varoncenew143_guard = 1;
}
{
var146 = ((val*(*)(val* self, char* p0, long p1, long p2))(var144->class->vft[COLOR_core__flat__FlatString__with_infos]))(var144, var_ns, var_sl, 0l); /* with_infos on <var144:FlatString>*/
}
var = var146;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$NativeArray$native_to_s for (self: NativeArray[nullable Object]): String */
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
static char* varoncenew;
static int varoncenew_guard;
char* var36 /* : CString */;
char* var37 /* : CString */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
char* var45 /* : CString */;
char* var47 /* : CString */;
char* var_ns /* var ns: CString */;
long var_off /* var off: Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
val* var58 /* : Object */;
val* var_tmp /* var tmp: String */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
long var62 /* : Int */;
long var_tpl /* var tpl: Int */;
char* var63 /* : CString */;
long var64 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
val* var73 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var74 /* : Iterator[nullable Object] */;
val* var_75 /* var : Iterator[FlatText] */;
short int var76 /* : Bool */;
val* var78 /* : nullable Object */;
val* var_j /* var j: FlatText */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
val* var_s /* var s: FlatString */;
long var83 /* : Int */;
long var_slen /* var slen: Int */;
char* var84 /* : CString */;
long var85 /* : Int */;
long var87 /* : Int */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
long var93 /* : Int */;
long var94 /* : Int */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name99;
long var100 /* : Int */;
static val* varoncenew102;
static int varoncenew102_guard;
val* var103 /* : FlatString */;
val* var104 /* : FlatString */;
val* var105 /* : FlatString */;
/* <self:NativeArray[nullable Object]> isa NativeArray[String] */
cltype = type_core__NativeArray__core__String.color;
idtype = type_core__NativeArray__core__String.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1542);
fatal_exit(1);
}
{
{ /* Inline array$NativeArray$length (self) on <self:NativeArray[nullable Object](NativeArray[String])> */
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
{ /* Inline kernel$Int$< (var_i,var_l) on <var_i:Int> */
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
{ /* Inline array$NativeArray$[] (var_na,var_i) on <var_na:NativeArray[String]> */
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
{ /* Inline kernel$Int$+ (var_sl,var14) on <var_sl:Int> */
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
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
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
{ /* Inline kernel$Int$+ (var_mypos,1l) on <var_mypos:Int> */
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
if (likely(varoncenew_guard)) {
var36 = varoncenew;
} else {
var37 = NULL/*special!*/;
var36 = var37;
varoncenew = var36;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_sl,1l) on <var_sl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var40 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var44 = var_sl + 1l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline native$CString$new (var36,var38) on <var36:CString> */
var47 = (char*)nit_alloc(var38);
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_ns = var45;
{
{ /* Inline native$CString$[]= (var_ns,var_sl,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_sl]=(unsigned char)((unsigned char)0x00);
RET_LABEL48:(void)0;
}
}
var_i = 0l;
var_off = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_mypos) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_mypos:Int> isa OTHER */
/* <var_mypos:Int> isa OTHER */
var51 = 1; /* easy <var_mypos:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var55 = var_i < var_mypos;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (var49){
{
{ /* Inline array$NativeArray$[] (var_na,var_i) on <var_na:NativeArray[String]> */
var58 = ((struct instance_core__NativeArray*)var_na)->values[var_i];
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_tmp = var56;
/* <var_tmp:String> isa FlatString */
cltype60 = type_core__FlatString.color;
idtype61 = type_core__FlatString.id;
if(cltype60 >= var_tmp->type->table_size) {
var59 = 0;
} else {
var59 = var_tmp->type->type_table[cltype60] == idtype61;
}
if (var59){
var62 = var_tmp->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_tmp:String(FlatString)> */
var_tpl = var62;
var63 = var_tmp->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_tmp:String(FlatString)> */
var64 = var_tmp->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_tmp:String(FlatString)> */
{
{ /* Inline native$CString$copy_to (var63,var_ns,var_tpl,var64,var_off) on <var63:CString> */
memmove(var_ns+var_off,var63+var64,var_tpl);
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_tpl) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_tpl:Int> isa OTHER */
/* <var_tpl:Int> isa OTHER */
var68 = 1; /* easy <var_tpl:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var72 = var_off + var_tpl;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var_off = var66;
} else {
{
var73 = ((val*(*)(val* self))(var_tmp->class->vft[COLOR_core__abstract_text__Text__substrings]))(var_tmp); /* substrings on <var_tmp:String>*/
}
var_ = var73;
{
var74 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_75 = var74;
for(;;) {
{
var76 = ((short int(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_75); /* is_ok on <var_75:Iterator[FlatText]>*/
}
if (var76){
} else {
goto BREAK_label77;
}
{
var78 = ((val*(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_75); /* item on <var_75:Iterator[FlatText]>*/
}
var_j = var78;
/* <var_j:FlatText> isa FlatString */
cltype80 = type_core__FlatString.color;
idtype81 = type_core__FlatString.id;
if(cltype80 >= var_j->type->table_size) {
var79 = 0;
} else {
var79 = var_j->type->type_table[cltype80] == idtype81;
}
if (unlikely(!var79)) {
var_class_name82 = var_j == NULL ? "null" : var_j->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__flat, 1565);
fatal_exit(1);
}
var_s = var_j;
var83 = var_s->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_s:FlatString> */
var_slen = var83;
var84 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
var85 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:FlatString> */
{
{ /* Inline native$CString$copy_to (var84,var_ns,var_slen,var85,var_off) on <var84:CString> */
memmove(var_ns+var_off,var84+var85,var_slen);
RET_LABEL86:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_slen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var89 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var89)) {
var_class_name92 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var93 = var_off + var_slen;
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var_off = var87;
{
((void(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_75); /* next on <var_75:Iterator[FlatText]>*/
}
}
BREAK_label77: (void)0;
{
((void(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_75); /* finish on <var_75:Iterator[FlatText]>*/
}
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var96 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var96)) {
var_class_name99 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name99);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var100 = var_i + 1l;
var94 = var100;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_i = var94;
} else {
goto BREAK_label101;
}
}
BREAK_label101: (void)0;
if (likely(varoncenew102_guard)) {
var103 = varoncenew102;
} else {
var104 = NEW_core__FlatString(&type_core__FlatString);
var103 = var104;
varoncenew102 = var103;
varoncenew102_guard = 1;
}
{
var105 = ((val*(*)(val* self, char* p0, long p1, long p2))(var103->class->vft[COLOR_core__flat__FlatString__with_infos]))(var103, var_ns, var_sl, 0l); /* with_infos on <var103:FlatString>*/
}
var = var105;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method flat$Map$join for (self: Map[nullable Object, nullable Object], String, String): String */
val* core__flat___Map___join(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_sep /* var sep: String */;
val* var_couple_sep /* var couple_sep: String */;
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
val* var12 /* : MapIterator[nullable Object, nullable Object] */;
val* var_i /* var i: MapIterator[nullable Object, nullable Object] */;
val* var13 /* : nullable Object */;
val* var_k /* var k: nullable Object */;
val* var14 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
val* var17 /* : Object */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : String */;
val* var27 /* : Object */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
val* var36 /* : String */;
val* var37 /* : String */;
short int var38 /* : Bool */;
val* var39 /* : nullable Object */;
val* var40 /* : nullable Object */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
val* var43 /* : Object */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable Bool */;
val* var52 /* : String */;
val* var53 /* : Object */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
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
var12 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(self); /* iterator on <self:Map[nullable Object, nullable Object]>*/
}
var_i = var12;
{
var13 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var13;
{
var14 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_e = var14;
if (unlikely(varonce15==NULL)) {
var16 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
} else {
var16 = varonce15;
varonce15 = NULL;
}
if (var_k!=NULL) {
var17 = var_k;
} else {
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "<null>";
var22 = (val*)(6l<<2|1);
var23 = (val*)(6l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
var17 = var19;
}
{
var26 = ((val*(*)(val* self))((((long)var17&3)?class_info[((long)var17&3)]:var17->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var17); /* to_s on <var17:Object>*/
}
((struct instance_core__NativeArray*)var16)->values[0]=var26;
((struct instance_core__NativeArray*)var16)->values[1]=var_couple_sep;
if (var_e!=NULL) {
var27 = var_e;
} else {
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "<null>";
var32 = (val*)(6l<<2|1);
var33 = (val*)(6l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
var27 = var29;
}
{
var36 = ((val*(*)(val* self))((((long)var27&3)?class_info[((long)var27&3)]:var27->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var27); /* to_s on <var27:Object>*/
}
((struct instance_core__NativeArray*)var16)->values[2]=var36;
{
var37 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var37); /* append on <var_s:Buffer>*/
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
for(;;) {
{
var38 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_i); /* is_ok on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
if (var38){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var_sep); /* append on <var_s:Buffer>*/
}
{
var39 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var39;
{
var40 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
var_e = var40;
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
} else {
var42 = varonce41;
varonce41 = NULL;
}
if (var_k!=NULL) {
var43 = var_k;
} else {
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "<null>";
var48 = (val*)(6l<<2|1);
var49 = (val*)(6l<<2|1);
var50 = (val*)((long)(0)<<2|3);
var51 = (val*)((long)(0)<<2|3);
var47 = core__flat___CString___to_s_unsafe(var46, var48, var49, var50, var51);
var45 = var47;
varonce44 = var45;
}
var43 = var45;
}
{
var52 = ((val*(*)(val* self))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var43); /* to_s on <var43:Object>*/
}
((struct instance_core__NativeArray*)var42)->values[0]=var52;
((struct instance_core__NativeArray*)var42)->values[1]=var_couple_sep;
if (var_e!=NULL) {
var53 = var_e;
} else {
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "<null>";
var58 = (val*)(6l<<2|1);
var59 = (val*)(6l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
var53 = var55;
}
{
var62 = ((val*(*)(val* self))((((long)var53&3)?class_info[((long)var53&3)]:var53->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var53); /* to_s on <var53:Object>*/
}
((struct instance_core__NativeArray*)var42)->values[2]=var62;
{
var63 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var63); /* append on <var_s:Buffer>*/
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
var64 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Buffer>*/
}
var = var64;
goto RET_LABEL;
RET_LABEL:;
return var;
}
