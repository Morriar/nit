#include "core__utf8.sep.0.h"
/* method utf8$UTF8Codec$char_max_size for (self: UTF8Codec): Int */
long core__utf8___core__utf8__UTF8Codec___core__codec_base__Codec__char_max_size(val* self) {
long var /* : Int */;
var = 4l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8$UTF8Codec$codet_size for (self: UTF8Codec): Int */
long core__utf8___core__utf8__UTF8Codec___core__codec_base__Codec__codet_size(val* self) {
long var /* : Int */;
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8$UTF8Codec$max_lookahead for (self: UTF8Codec): Int */
long core__utf8___core__utf8__UTF8Codec___core__codec_base__Codec__max_lookahead(val* self) {
long var /* : Int */;
var = 4l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8$UTF8Codec$encode_char for (self: UTF8Codec, Char): CString */
char* core__utf8___core__utf8__UTF8Codec___core__codec_base__Codec__encode_char(val* self, uint32_t p0) {
char* var /* : CString */;
uint32_t var_c /* var c: Char */;
static char* varoncenew;
static int varoncenew_guard;
char* var1 /* : CString */;
char* var2 /* : CString */;
long var3 /* : Int */;
char* var4 /* : CString */;
char* var6 /* : CString */;
char* var_ns /* var ns: CString */;
long var7 /* : Int */;
var_c = p0;
if (likely(varoncenew_guard)) {
var1 = varoncenew;
} else {
var2 = NULL/*special!*/;
var1 = var2;
varoncenew = var1;
varoncenew_guard = 1;
}
var3 = core__abstract_text___Char___u8char_len(var_c);
{
{ /* Inline native$CString$new (var1,var3) on <var1:CString> */
var6 = (char*)nit_alloc(var3);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ns = var4;
{
var7 = ((long(*)(val* self, uint32_t p0, char* p1))(self->class->vft[COLOR_core__codec_base__Codec__add_char_to]))(self, var_c, var_ns); /* add_char_to on <self:UTF8Codec>*/
}
var = var_ns;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8$UTF8Codec$add_char_to for (self: UTF8Codec, Char, CString): Int */
long core__utf8___core__utf8__UTF8Codec___core__codec_base__Codec__add_char_to(val* self, uint32_t p0, char* p1) {
long var /* : Int */;
uint32_t var_c /* var c: Char */;
char* var_stream /* var stream: CString */;
long var1 /* : Int */;
long var2 /* : Int */;
var_c = p0;
var_stream = p1;
var1 = core__abstract_text___Char___u8char_len(var_c);
core__abstract_text___Char___u8char_tos(var_c, var_stream, var1); /* Direct call abstract_text$Char$u8char_tos on <var_c:Char>*/
var2 = core__abstract_text___Char___u8char_len(var_c);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8$UTF8Codec$encode_string for (self: UTF8Codec, Text): Bytes */
val* core__utf8___core__utf8__UTF8Codec___core__codec_base__Codec__encode_string(val* self, val* p0) {
val* var /* : Bytes */;
val* var_s /* var s: Text */;
val* var1 /* : Bytes */;
long var2 /* : Int */;
val* var_buf /* var buf: Bytes */;
long var3 /* : Int */;
var_s = p0;
var1 = NEW_core__Bytes(&type_core__Bytes);
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:Text>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_core__bytes__Bytes__with_capacity]))(var1, var2); /* with_capacity on <var1:Bytes>*/
}
var_buf = var1;
{
var3 = ((long(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_core__codec_base__Codec__add_string_to]))(self, var_s, var_buf); /* add_string_to on <self:UTF8Codec>*/
}
var = var_buf;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8$UTF8Codec$add_string_to for (self: UTF8Codec, Text, Bytes): Int */
long core__utf8___core__utf8__UTF8Codec___core__codec_base__Codec__add_string_to(val* self, val* p0, val* p1) {
long var /* : Int */;
val* var_s /* var s: Text */;
val* var_b /* var b: Bytes */;
long var1 /* : Int */;
var_s = p0;
var_b = p1;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__bytes__Text__append_to_bytes]))(var_s, var_b); /* append_to_bytes on <var_s:Text>*/
}
{
var1 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8$UTF8Codec$is_valid_char for (self: UTF8Codec, CString, Int): Int */
long core__utf8___core__utf8__UTF8Codec___core__codec_base__Codec__is_valid_char(val* self, char* p0, long p1) {
long var /* : Int */;
char* var_ns /* var ns: CString */;
long var_len /* var len: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
unsigned char var4 /* : Byte */;
unsigned char var6 /* : Byte */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
unsigned char var13 /* : Byte */;
unsigned char var15 /* : Byte */;
unsigned char var16 /* : Byte */;
unsigned char var18 /* : Byte */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
long var23 /* : Int */;
unsigned char var24 /* : Byte */;
unsigned char var26 /* : Byte */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
var_ns = p0;
var_len = p1;
{
{ /* Inline kernel$Int$== (var_len,0l) on <var_len:Int> */
var3 = var_len == 0l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var = 2l;
goto RET_LABEL;
} else {
}
{
{ /* Inline native$CString$[] (var_ns,0l) on <var_ns:CString> */
var6 = (unsigned char)((int)var_ns[0l]);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var7 = core__native___Byte___is_valid_utf8_start(var4);
var8 = !var7;
if (var8){
var = 2l;
goto RET_LABEL;
} else {
}
var_i = 1l;
var_ = var_len;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var11 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_i < var_;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
} else {
goto BREAK_label;
}
{
{ /* Inline native$CString$[] (var_ns,var_i) on <var_ns:CString> */
var15 = (unsigned char)((int)var_ns[var_i]);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline math$Byte$& (var13,((unsigned char)0xc0)) on <var13:Byte> */
var18 = var13 & ((unsigned char)0xc0);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel$Byte$!= (var16,((unsigned char)0x80)) on <var16:Byte> */
var21 = var16 == ((unsigned char)0x80);
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var = 2l;
goto RET_LABEL;
} else {
}
var23 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var23;
}
BREAK_label: (void)0;
{
{ /* Inline native$CString$[] (var_ns,0l) on <var_ns:CString> */
var26 = (unsigned char)((int)var_ns[0l]);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var27 = core__native___Byte___u8len(var24);
{
{ /* Inline kernel$Int$!= (var_len,var27) on <var_len:Int> */
var30 = var_len == var27;
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
var = 1l;
goto RET_LABEL;
} else {
}
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8$UTF8Codec$decode_char for (self: UTF8Codec, CString): Char */
uint32_t core__utf8___core__utf8__UTF8Codec___core__codec_base__Codec__decode_char(val* self, char* p0) {
uint32_t var /* : Char */;
char* var_b /* var b: CString */;
uint32_t var1 /* : Char */;
uint32_t var_c /* var c: Char */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_cp /* var cp: Int */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
uint32_t var17 /* : Char */;
uint32_t var19 /* : Char */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
uint32_t var28 /* : Char */;
uint32_t var30 /* : Char */;
var_b = p0;
var1 = core___core__CString___char_at(var_b, 0l);
var_c = var1;
{
{ /* Inline kernel$Char$code_point (var_c) on <var_c:Char> */
var4 = (long)var_c;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_cp = var2;
{
{ /* Inline kernel$Int$>= (var_cp,55296l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <55296l:Int> isa OTHER */
/* <55296l:Int> isa OTHER */
var8 = 1; /* easy <55296l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var9 = var_cp >= 55296l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_ = var6;
if (var6){
{
{ /* Inline kernel$Int$<= (var_cp,57343l) on <var_cp:Int> */
/* Covariant cast for argument 0 (i) <57343l:Int> isa OTHER */
/* <57343l:Int> isa OTHER */
var12 = 1; /* easy <57343l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var16 = var_cp <= 57343l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var5 = var10;
} else {
var5 = var_;
}
if (var5){
{
{ /* Inline kernel$Int$code_point (65533l) on <65533l:Int> */
var19 = (uint32_t)65533l;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var = var17;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_cp,65534l) on <var_cp:Int> */
var23 = var_cp == 65534l;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_24 = var21;
if (var21){
var20 = var_24;
} else {
{
{ /* Inline kernel$Int$== (var_cp,65535l) on <var_cp:Int> */
var27 = var_cp == 65535l;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var20 = var25;
}
if (var20){
{
{ /* Inline kernel$Int$code_point (65533l) on <65533l:Int> */
var30 = (uint32_t)65533l;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var = var28;
goto RET_LABEL;
} else {
}
var = var_c;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8$UTF8Codec$decode_string for (self: UTF8Codec, CString, Int): String */
val* core__utf8___core__utf8__UTF8Codec___core__codec_base__Codec__decode_string(val* self, char* p0, long p1) {
val* var /* : String */;
char* var_ns /* var ns: CString */;
long var_len /* var len: Int */;
val* var1 /* : String */;
val* var2 /* : nullable Int */;
val* var3 /* : nullable Bool */;
val* var_ret /* var ret: String */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
char* var5 /* : CString */;
char* var_rit /* var rit: CString */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
static char* varoncenew;
static int varoncenew_guard;
char* var9 /* : CString */;
char* var10 /* : CString */;
char* var11 /* : CString */;
char* var13 /* : CString */;
char* var_nns /* var nns: CString */;
long var15 /* : Int */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
var_ns = p0;
var_len = p1;
var2 = (val*)(var_len<<2|1);
var3 = (val*)((long)(0)<<2|3);
var1 = core__flat___CString___to_s_unsafe(var_ns, var2, ((val*)NULL), var3, ((val*)NULL));
var_ret = var1;
/* <var_ret:String> isa FlatString */
cltype = type_core__FlatString.color;
idtype = type_core__FlatString.id;
if(cltype >= var_ret->type->table_size) {
var4 = 0;
} else {
var4 = var_ret->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
var_class_name = var_ret == NULL ? "null" : var_ret->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__utf8, 72);
fatal_exit(1);
}
{
var5 = ((char*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__FlatText__items]))(var_ret); /* items on <var_ret:String(FlatString)>*/
}
var_rit = var5;
{
{ /* Inline native$CString$== (var_rit,var_ns) on <var_rit:CString> */
var8 = var_rit == var_ns;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
if (likely(varoncenew_guard)) {
var9 = varoncenew;
} else {
var10 = NULL/*special!*/;
var9 = var10;
varoncenew = var9;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var9,var_len) on <var9:CString> */
var13 = (char*)nit_alloc(var_len);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_nns = var11;
{
{ /* Inline native$CString$copy_to (var_rit,var_nns,var_len,0l,0l) on <var_rit:CString> */
memmove(var_nns+0l,var_rit+0l,var_len);
RET_LABEL14:(void)0;
}
}
{
var15 = ((long(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_ret); /* byte_length on <var_ret:String>*/
}
{
var16 = ((long(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Text__length]))(var_ret); /* length on <var_ret:String>*/
}
var18 = (val*)(var15<<2|1);
var19 = (val*)(var16<<2|1);
var20 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var_nns, var18, var19, var20, ((val*)NULL));
var = var17;
goto RET_LABEL;
} else {
}
var = var_ret;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method utf8$Sys$utf8_codec for (self: Sys): Codec */
val* core__utf8___Sys___utf8_codec(val* self) {
val* var /* : Codec */;
static val* varonce;
static int varonce_guard;
val* var1 /* : UTF8Codec */;
val* var2 /* : UTF8Codec */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_core__utf8__UTF8Codec(&type_core__utf8__UTF8Codec);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:UTF8Codec>*/
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
