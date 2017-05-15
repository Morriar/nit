#include "core__fixed_ints_text.sep.0.h"
/* method fixed_ints_text#Int8#to_s_len for (self: Int8): Int */
long core__fixed_ints_text___Int8___to_s_len(int8_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = fixed_ints_text___Int8_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Int8#native_to_s for (self: Int8, CString, Int) */
void core__fixed_ints_text___Int8___native_to_s(int8_t self, char* p0, long p1) {
fixed_ints_text___Int8_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints_text#Int8#to_s for (self: Int8): String */
val* core__fixed_ints_text___Int8___core__abstract_text__Object__to_s(int8_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_nslen /* var nslen: Int */;
char* var4 /* : CString */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
char* var9 /* : CString */;
char* var11 /* : CString */;
char* var_ns /* var ns: CString */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
{
{ /* Inline fixed_ints_text#Int8#to_s_len (self) on <self:Int8> */
var3 = fixed_ints_text___Int8_to_s_len___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
var4 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var_nslen + 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline native#CString#new (var4,var5) on <var4:CString> */
var11 = (char*)nit_alloc(var5);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ns = var9;
{
{ /* Inline native#CString#[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var_nslen + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline fixed_ints_text#Int8#native_to_s (self,var_ns,var13) on <self:Int8> */
fixed_ints_text___Int8_native_to_s___impl(self, var_ns, var13);
RET_LABEL20:(void)0;
}
}
{
var22 = (val*)(var_nslen<<2|1);
var23 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var_ns, var22, ((val*)NULL), var23, ((val*)NULL));
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Int8#to_s for (self: Object): String */
val* VIRTUAL_core__fixed_ints_text___Int8___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
int8_t var2 /* : Int8 */;
var2 = ((struct instance_core__Int8*)self)->value; /* autounbox from Object to Int8 */;
var1 = core__fixed_ints_text___Int8___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Int16#to_s_len for (self: Int16): Int */
long core__fixed_ints_text___Int16___to_s_len(int16_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = fixed_ints_text___Int16_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Int16#native_to_s for (self: Int16, CString, Int) */
void core__fixed_ints_text___Int16___native_to_s(int16_t self, char* p0, long p1) {
fixed_ints_text___Int16_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints_text#Int16#to_s for (self: Int16): String */
val* core__fixed_ints_text___Int16___core__abstract_text__Object__to_s(int16_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_nslen /* var nslen: Int */;
char* var4 /* : CString */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
char* var9 /* : CString */;
char* var11 /* : CString */;
char* var_ns /* var ns: CString */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
{
{ /* Inline fixed_ints_text#Int16#to_s_len (self) on <self:Int16> */
var3 = fixed_ints_text___Int16_to_s_len___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
var4 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var_nslen + 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline native#CString#new (var4,var5) on <var4:CString> */
var11 = (char*)nit_alloc(var5);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ns = var9;
{
{ /* Inline native#CString#[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var_nslen + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline fixed_ints_text#Int16#native_to_s (self,var_ns,var13) on <self:Int16> */
fixed_ints_text___Int16_native_to_s___impl(self, var_ns, var13);
RET_LABEL20:(void)0;
}
}
{
var22 = (val*)(var_nslen<<2|1);
var23 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var_ns, var22, ((val*)NULL), var23, ((val*)NULL));
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Int16#to_s for (self: Object): String */
val* VIRTUAL_core__fixed_ints_text___Int16___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
int16_t var2 /* : Int16 */;
var2 = ((struct instance_core__Int16*)self)->value; /* autounbox from Object to Int16 */;
var1 = core__fixed_ints_text___Int16___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#UInt16#to_s_len for (self: UInt16): Int */
long core__fixed_ints_text___UInt16___to_s_len(uint16_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = fixed_ints_text___UInt16_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#UInt16#native_to_s for (self: UInt16, CString, Int) */
void core__fixed_ints_text___UInt16___native_to_s(uint16_t self, char* p0, long p1) {
fixed_ints_text___UInt16_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints_text#UInt16#to_s for (self: UInt16): String */
val* core__fixed_ints_text___UInt16___core__abstract_text__Object__to_s(uint16_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_nslen /* var nslen: Int */;
char* var4 /* : CString */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
char* var9 /* : CString */;
char* var11 /* : CString */;
char* var_ns /* var ns: CString */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
{
{ /* Inline fixed_ints_text#UInt16#to_s_len (self) on <self:UInt16> */
var3 = fixed_ints_text___UInt16_to_s_len___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
var4 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var_nslen + 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline native#CString#new (var4,var5) on <var4:CString> */
var11 = (char*)nit_alloc(var5);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ns = var9;
{
{ /* Inline native#CString#[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var_nslen + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline fixed_ints_text#UInt16#native_to_s (self,var_ns,var13) on <self:UInt16> */
fixed_ints_text___UInt16_native_to_s___impl(self, var_ns, var13);
RET_LABEL20:(void)0;
}
}
{
var22 = (val*)(var_nslen<<2|1);
var23 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var_ns, var22, ((val*)NULL), var23, ((val*)NULL));
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#UInt16#to_s for (self: Object): String */
val* VIRTUAL_core__fixed_ints_text___UInt16___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
uint16_t var2 /* : UInt16 */;
var2 = ((struct instance_core__UInt16*)self)->value; /* autounbox from Object to UInt16 */;
var1 = core__fixed_ints_text___UInt16___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Int32#to_s_len for (self: Int32): Int */
long core__fixed_ints_text___Int32___to_s_len(int32_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = fixed_ints_text___Int32_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Int32#native_to_s for (self: Int32, CString, Int) */
void core__fixed_ints_text___Int32___native_to_s(int32_t self, char* p0, long p1) {
fixed_ints_text___Int32_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints_text#Int32#to_s for (self: Int32): String */
val* core__fixed_ints_text___Int32___core__abstract_text__Object__to_s(int32_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_nslen /* var nslen: Int */;
char* var4 /* : CString */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
char* var9 /* : CString */;
char* var11 /* : CString */;
char* var_ns /* var ns: CString */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
{
{ /* Inline fixed_ints_text#Int32#to_s_len (self) on <self:Int32> */
var3 = fixed_ints_text___Int32_to_s_len___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
var4 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var_nslen + 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline native#CString#new (var4,var5) on <var4:CString> */
var11 = (char*)nit_alloc(var5);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ns = var9;
{
{ /* Inline native#CString#[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var_nslen + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline fixed_ints_text#Int32#native_to_s (self,var_ns,var13) on <self:Int32> */
fixed_ints_text___Int32_native_to_s___impl(self, var_ns, var13);
RET_LABEL20:(void)0;
}
}
{
var22 = (val*)(var_nslen<<2|1);
var23 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var_ns, var22, ((val*)NULL), var23, ((val*)NULL));
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Int32#to_s for (self: Object): String */
val* VIRTUAL_core__fixed_ints_text___Int32___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
int32_t var2 /* : Int32 */;
var2 = ((struct instance_core__Int32*)self)->value; /* autounbox from Object to Int32 */;
var1 = core__fixed_ints_text___Int32___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#UInt32#to_s_len for (self: UInt32): Int */
long core__fixed_ints_text___UInt32___to_s_len(uint32_t self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = fixed_ints_text___UInt32_to_s_len___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#UInt32#native_to_s for (self: UInt32, CString, Int) */
void core__fixed_ints_text___UInt32___native_to_s(uint32_t self, char* p0, long p1) {
fixed_ints_text___UInt32_native_to_s___impl(self, p0, p1);
RET_LABEL:;
}
/* method fixed_ints_text#UInt32#to_s for (self: UInt32): String */
val* core__fixed_ints_text___UInt32___core__abstract_text__Object__to_s(uint32_t self) {
val* var /* : String */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_nslen /* var nslen: Int */;
char* var4 /* : CString */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
char* var9 /* : CString */;
char* var11 /* : CString */;
char* var_ns /* var ns: CString */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
{
{ /* Inline fixed_ints_text#UInt32#to_s_len (self) on <self:UInt32> */
var3 = fixed_ints_text___UInt32_to_s_len___impl(self);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_nslen = var1;
var4 = NULL/*special!*/;
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var_nslen + 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline native#CString#new (var4,var5) on <var4:CString> */
var11 = (char*)nit_alloc(var5);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ns = var9;
{
{ /* Inline native#CString#[]= (var_ns,var_nslen,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_nslen]=(unsigned char)((unsigned char)0x00);
RET_LABEL12:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_nslen,1l) on <var_nslen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var_nslen + 1l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline fixed_ints_text#UInt32#native_to_s (self,var_ns,var13) on <self:UInt32> */
fixed_ints_text___UInt32_native_to_s___impl(self, var_ns, var13);
RET_LABEL20:(void)0;
}
}
{
var22 = (val*)(var_nslen<<2|1);
var23 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var_ns, var22, ((val*)NULL), var23, ((val*)NULL));
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#UInt32#to_s for (self: Object): String */
val* VIRTUAL_core__fixed_ints_text___UInt32___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
uint32_t var2 /* : UInt32 */;
var2 = ((struct instance_core__UInt32*)self)->value; /* autounbox from Object to UInt32 */;
var1 = core__fixed_ints_text___UInt32___core__abstract_text__Object__to_s(var2);
var = var1;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Text#strip_numhead for (self: Text): Text */
val* core__fixed_ints_text___Text___strip_numhead(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Text */;
{
var1 = core__fixed_ints_text___Text___get_numhead(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = core__abstract_text___CString___to_s_full(var3, 0l, 0l);
var2 = var4;
varonce = var2;
}
{
{ /* Inline kernel#Object#!= (var1,var2) on <var1:Text> */
var_other = var2;
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:Text>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, 2l); /* substring_from on <self:Text>*/
}
var = var9;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Text#get_numhead for (self: Text): Text */
val* core__fixed_ints_text___Text___get_numhead(val* self) {
val* var /* : Text */;
long var1 /* : Int */;
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
uint32_t var9 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
uint32_t var18 /* : Char */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var_30 /* var : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var_38 /* var : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var_42 /* var : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : Text */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#< (var1,2l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var4 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var1 < 2l;
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
var9 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, 0l); /* [] on <self:Text>*/
}
var_c = var9;
{
{ /* Inline kernel#Char#!= (var_c,'0') on <var_c:Char> */
var12 = var_c == '0';
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "";
var17 = core__abstract_text___CString___to_s_full(var16, 0l, 0l);
var15 = var17;
varonce14 = var15;
}
var = var15;
goto RET_LABEL;
} else {
}
{
var18 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, 1l); /* [] on <self:Text>*/
}
var_c = var18;
{
{ /* Inline kernel#Char#== (var_c,'x') on <var_c:Char> */
var26 = var_c == 'x';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_ = var24;
if (var24){
var23 = var_;
} else {
{
{ /* Inline kernel#Char#== (var_c,'b') on <var_c:Char> */
var29 = var_c == 'b';
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var23 = var27;
}
var_30 = var23;
if (var23){
var22 = var_30;
} else {
{
{ /* Inline kernel#Char#== (var_c,'o') on <var_c:Char> */
var33 = var_c == 'o';
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var22 = var31;
}
var_34 = var22;
if (var22){
var21 = var_34;
} else {
{
{ /* Inline kernel#Char#== (var_c,'X') on <var_c:Char> */
var37 = var_c == 'X';
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var21 = var35;
}
var_38 = var21;
if (var21){
var20 = var_38;
} else {
{
{ /* Inline kernel#Char#== (var_c,'B') on <var_c:Char> */
var41 = var_c == 'B';
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var20 = var39;
}
var_42 = var20;
if (var20){
var19 = var_42;
} else {
{
{ /* Inline kernel#Char#== (var_c,'O') on <var_c:Char> */
var45 = var_c == 'O';
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var19 = var43;
}
if (var19){
{
var46 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, 2l); /* substring on <self:Text>*/
}
var = var46;
goto RET_LABEL;
} else {
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "";
var50 = core__abstract_text___CString___to_s_full(var49, 0l, 0l);
var48 = var50;
varonce47 = var48;
}
var = var48;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Text#strip_numext for (self: Text): Text */
val* core__fixed_ints_text___Text___strip_numext(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
val* var_ext /* var ext: Text */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
val* var15 /* : Text */;
{
var1 = core__fixed_ints_text___Text___get_numext(self);
}
var_ext = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = core__abstract_text___CString___to_s_full(var3, 0l, 0l);
var2 = var4;
varonce = var2;
}
{
{ /* Inline kernel#Object#!= (var_ext,var2) on <var_ext:Text> */
var_other = var2;
{
var7 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var_other); /* == on <var_ext:Text>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var10 = ((long(*)(val* self))(var_ext->class->vft[COLOR_core__abstract_text__Text__length]))(var_ext); /* length on <var_ext:Text>*/
}
{
{ /* Inline kernel#Int#- (var9,var10) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var9 - var10;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var15 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var11); /* substring on <self:Text>*/
}
var = var15;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Text#get_numext for (self: Text): Text */
val* core__fixed_ints_text___Text___get_numext(val* self) {
val* var /* : Text */;
long var1 /* : Int */;
long var_len /* var len: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var_max /* var max: Int */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
uint32_t var23 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
val* var39 /* : Text */;
long var40 /* : Int */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var_len = var1;
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel#Int#< (var3,3l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var6 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var3 < 3l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
var2 = var8;
} else {
var2 = 3l;
}
var_max = var2;
var_i = 1l;
var_ = var_max;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var11 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var15 = var_i <= var_;
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
{ /* Inline kernel#Int#- (var_len,var_i) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var18 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var22 = var_len - var_i;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
var23 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var16); /* [] on <self:Text>*/
}
var_c = var23;
{
{ /* Inline kernel#Char#== (var_c,'i') on <var_c:Char> */
var27 = var_c == 'i';
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_28 = var25;
if (var25){
var24 = var_28;
} else {
{
{ /* Inline kernel#Char#== (var_c,'u') on <var_c:Char> */
var31 = var_c == 'u';
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var24 = var29;
}
if (var24){
{
{ /* Inline kernel#Int#- (var_len,var_i) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var34 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var38 = var_len - var_i;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
var39 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, var32); /* substring_from on <self:Text>*/
}
var = var39;
goto RET_LABEL;
} else {
}
{
var40 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var40;
}
BREAK_label: (void)0;
if (likely(varonce!=NULL)) {
var41 = varonce;
} else {
var42 = "";
var43 = core__abstract_text___CString___to_s_full(var42, 0l, 0l);
var41 = var43;
varonce = var41;
}
var = var41;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Text#is_int for (self: Text): Bool */
short int core__fixed_ints_text___Text___is_int(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
val* var6 /* : Pattern */;
val* var_s /* var s: String */;
long var_pos /* var pos: Int */;
long var7 /* : Int */;
long var_len /* var len: Int */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
uint32_t var13 /* : Char */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
val* var24 /* : Text */;
val* var25 /* : Text */;
val* var_rets /* var rets: Text */;
static val* varonce;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
short int var29 /* : Bool */;
val* var30 /* : Text */;
val* var_hd /* var hd: Text */;
short int var31 /* : Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
short int var49 /* : Bool */;
short int var_50 /* var : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
short int var62 /* : Bool */;
short int var_63 /* var : Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:Text>*/
}
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var6 = (val*)((long)('_')<<2|2);
var5 = core__string_search___Text___remove_all(self, var6);
}
var_s = var5;
var_pos = 0l;
{
var7 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:String>*/
}
var_len = var7;
for(;;) {
{
{ /* Inline kernel#Int#< (var_pos,var_len) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var11 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_pos < var_len;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ = var9;
if (var9){
{
var13 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var_pos); /* [] on <var_s:String>*/
}
{
{ /* Inline kernel#Char#== (var13,'-') on <var13:Char> */
var16 = var13 == '-';
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var8 = var14;
} else {
var8 = var_;
}
if (var8){
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = var_pos + 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_pos = var17;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var24 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, var_pos); /* substring_from on <var_s:String>*/
}
var_s = var24;
{
var25 = core__fixed_ints_text___Text___strip_numhead(var_s);
}
var_rets = var25;
if (likely(varonce!=NULL)) {
var26 = varonce;
} else {
var27 = "";
var28 = core__abstract_text___CString___to_s_full(var27, 0l, 0l);
var26 = var28;
varonce = var26;
}
{
var29 = ((short int(*)(val* self, val* p0))(var_rets->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rets, var26); /* == on <var_rets:Text>*/
}
if (var29){
var = 0;
goto RET_LABEL;
} else {
}
{
var30 = core__fixed_ints_text___Text___get_numhead(self);
}
var_hd = var30;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "0x";
var35 = core__abstract_text___CString___to_s_full(var34, 2l, 2l);
var33 = var35;
varonce32 = var33;
}
{
var36 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var33); /* == on <var_hd:Text>*/
}
var_37 = var36;
if (var36){
var31 = var_37;
} else {
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "0X";
var41 = core__abstract_text___CString___to_s_full(var40, 2l, 2l);
var39 = var41;
varonce38 = var39;
}
{
var42 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var39); /* == on <var_hd:Text>*/
}
var31 = var42;
}
if (var31){
{
var43 = core___core__Text___is_hex(var_rets);
}
var = var43;
goto RET_LABEL;
} else {
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "0b";
var48 = core__abstract_text___CString___to_s_full(var47, 2l, 2l);
var46 = var48;
varonce45 = var46;
}
{
var49 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var46); /* == on <var_hd:Text>*/
}
var_50 = var49;
if (var49){
var44 = var_50;
} else {
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "0B";
var54 = core__abstract_text___CString___to_s_full(var53, 2l, 2l);
var52 = var54;
varonce51 = var52;
}
{
var55 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var52); /* == on <var_hd:Text>*/
}
var44 = var55;
}
if (var44){
{
var56 = core___core__Text___is_bin(var_rets);
}
var = var56;
goto RET_LABEL;
} else {
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "0o";
var61 = core__abstract_text___CString___to_s_full(var60, 2l, 2l);
var59 = var61;
varonce58 = var59;
}
{
var62 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var59); /* == on <var_hd:Text>*/
}
var_63 = var62;
if (var62){
var57 = var_63;
} else {
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "0O";
var67 = core__abstract_text___CString___to_s_full(var66, 2l, 2l);
var65 = var67;
varonce64 = var65;
}
{
var68 = ((short int(*)(val* self, val* p0))(var_hd->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_hd, var65); /* == on <var_hd:Text>*/
}
var57 = var68;
}
if (var57){
{
var69 = core___core__Text___is_oct(var_rets);
}
var = var69;
goto RET_LABEL;
} else {
}
{
var70 = core___core__Text___is_dec(var_rets);
}
var = var70;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Text#to_i for (self: Text): Int */
long core__fixed_ints_text___Text___to_i(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : Pattern */;
val* var_s /* var s: String */;
long var_val /* var val: Int */;
short int var_neg /* var neg: Bool */;
long var_pos /* var pos: Int */;
uint32_t var4 /* : Char */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
val* var13 /* : Text */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
uint32_t var22 /* : Char */;
uint32_t var_s1 /* var s1: Char */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : Text */;
long var31 /* : Int */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : Text */;
long var41 /* : Int */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : Text */;
long var51 /* : Int */;
short int var52 /* : Bool */;
long var53 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
long var58 /* : Int */;
{
var1 = core__fixed_ints_text___Text___is_int(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__fixed_ints_text, 236);
fatal_exit(1);
}
{
var3 = (val*)((long)('_')<<2|2);
var2 = core__string_search___Text___remove_all(self, var3);
}
var_s = var2;
var_val = 0l;
var_neg = 0;
var_pos = 0l;
for(;;) {
{
var4 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var_pos); /* [] on <var_s:String>*/
}
{
{ /* Inline kernel#Char#== (var4,'-') on <var4:Char> */
var7 = var4 == '-';
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var8 = !var_neg;
var_neg = var8;
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var11 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var_pos + 1l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_pos = var9;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var13 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, var_pos); /* substring_from on <var_s:String>*/
}
var_s = var13;
{
var14 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:String>*/
}
{
{ /* Inline kernel#Int#>= (var14,2l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var17 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var21 = var14 >= 2l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var22 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, 1l); /* [] on <var_s:String>*/
}
var_s1 = var22;
{
{ /* Inline kernel#Char#== (var_s1,'x') on <var_s1:Char> */
var26 = var_s1 == 'x';
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_ = var24;
if (var24){
var23 = var_;
} else {
{
{ /* Inline kernel#Char#== (var_s1,'X') on <var_s1:Char> */
var29 = var_s1 == 'X';
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var23 = var27;
}
if (var23){
{
var30 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, 2l); /* substring_from on <var_s:String>*/
}
{
var31 = ((long(*)(val* self, val* p0, val* p1))(var30->class->vft[COLOR_core__abstract_text__Text__to_hex]))(var30, ((val*)NULL), ((val*)NULL)); /* to_hex on <var30:Text(String)>*/
}
var_val = var31;
} else {
{
{ /* Inline kernel#Char#== (var_s1,'o') on <var_s1:Char> */
var35 = var_s1 == 'o';
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_36 = var33;
if (var33){
var32 = var_36;
} else {
{
{ /* Inline kernel#Char#== (var_s1,'O') on <var_s1:Char> */
var39 = var_s1 == 'O';
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var32 = var37;
}
if (var32){
{
var40 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, 2l); /* substring_from on <var_s:String>*/
}
{
var41 = core___core__Text___to_oct(var40);
}
var_val = var41;
} else {
{
{ /* Inline kernel#Char#== (var_s1,'b') on <var_s1:Char> */
var45 = var_s1 == 'b';
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_46 = var43;
if (var43){
var42 = var_46;
} else {
{
{ /* Inline kernel#Char#== (var_s1,'B') on <var_s1:Char> */
var49 = var_s1 == 'B';
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var42 = var47;
}
if (var42){
{
var50 = ((val*(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_s, 2l); /* substring_from on <var_s:String>*/
}
{
var51 = core___core__Text___to_bin(var50);
}
var_val = var51;
} else {
{
var52 = core__abstract_text___Char___is_numeric(var_s1);
}
if (var52){
{
var53 = core___core__Text___to_dec(var_s);
}
var_val = var53;
} else {
}
}
}
}
} else {
{
var54 = core___core__Text___to_dec(var_s);
}
var_val = var54;
}
if (var_neg){
{
{ /* Inline kernel#Int#unary - (var_val) on <var_val:Int> */
var58 = -var_val;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var55 = var56;
} else {
var55 = var_val;
}
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Text#is_num for (self: Text): Bool */
short int core__fixed_ints_text___Text___is_num(val* self) {
short int var /* : Bool */;
val* var1 /* : Text */;
val* var_prefix /* var prefix: Text */;
val* var2 /* : Text */;
val* var3 /* : Text */;
val* var4 /* : String */;
val* var5 /* : Pattern */;
val* var_s /* var s: String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
uint32_t var13 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var_35 /* var : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
{
var1 = core__fixed_ints_text___Text___get_numhead(self);
}
var_prefix = var1;
{
var2 = core__fixed_ints_text___Text___strip_numhead(self);
}
{
var3 = core__fixed_ints_text___Text___strip_numext(var2);
}
{
var5 = (val*)((long)('_')<<2|2);
var4 = core__string_search___Text___remove_all(var3, var5);
}
var_s = var4;
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "";
var8 = core__abstract_text___CString___to_s_full(var7, 0l, 0l);
var6 = var8;
varonce = var6;
}
{
{ /* Inline kernel#Object#!= (var_prefix,var6) on <var_prefix:Text> */
var_other = var6;
{
var11 = ((short int(*)(val* self, val* p0))(var_prefix->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_prefix, var_other); /* == on <var_prefix:Text>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var13 = ((uint32_t(*)(val* self, long p0))(var_prefix->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_prefix, 1l); /* [] on <var_prefix:Text>*/
}
var_c = var13;
{
{ /* Inline kernel#Char#== (var_c,'x') on <var_c:Char> */
var17 = var_c == 'x';
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_ = var15;
if (var15){
var14 = var_;
} else {
{
{ /* Inline kernel#Char#== (var_c,'X') on <var_c:Char> */
var20 = var_c == 'X';
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var14 = var18;
}
if (var14){
{
var21 = core___core__Text___is_hex(var_s);
}
var = var21;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Char#== (var_c,'o') on <var_c:Char> */
var25 = var_c == 'o';
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_26 = var23;
if (var23){
var22 = var_26;
} else {
{
{ /* Inline kernel#Char#== (var_c,'O') on <var_c:Char> */
var29 = var_c == 'O';
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var22 = var27;
}
if (var22){
{
var30 = core___core__Text___is_oct(var_s);
}
var = var30;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Char#== (var_c,'b') on <var_c:Char> */
var34 = var_c == 'b';
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_35 = var32;
if (var32){
var31 = var_35;
} else {
{
{ /* Inline kernel#Char#== (var_c,'B') on <var_c:Char> */
var38 = var_c == 'B';
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var31 = var36;
}
if (var31){
{
var39 = core___core__Text___is_bin(var_s);
}
var = var39;
goto RET_LABEL;
} else {
}
} else {
}
{
var40 = core___core__Text___is_dec(var_s);
}
var = var40;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method fixed_ints_text#Text#to_num for (self: Text): nullable Numeric */
val* core__fixed_ints_text___Text___to_num(val* self) {
val* var /* : nullable Numeric */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : String */;
val* var4 /* : Pattern */;
val* var_s /* var s: String */;
val* var5 /* : Text */;
val* var_ext /* var ext: Text */;
val* var6 /* : Text */;
val* var_trunk /* var trunk: Text */;
val* var7 /* : Text */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var_trval /* var trval: Int */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
short int var17 /* : Bool */;
unsigned char var18 /* : Byte */;
unsigned char var20 /* : Byte */;
val* var21 /* : nullable Numeric */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
short int var26 /* : Bool */;
int8_t var27 /* : Int8 */;
int8_t var29 /* : Int8 */;
val* var30 /* : nullable Numeric */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
short int var35 /* : Bool */;
int16_t var36 /* : Int16 */;
int16_t var38 /* : Int16 */;
val* var39 /* : nullable Numeric */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
short int var44 /* : Bool */;
uint16_t var45 /* : UInt16 */;
uint16_t var47 /* : UInt16 */;
val* var48 /* : nullable Numeric */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
short int var53 /* : Bool */;
int32_t var54 /* : Int32 */;
int32_t var56 /* : Int32 */;
val* var57 /* : nullable Numeric */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
short int var62 /* : Bool */;
uint32_t var63 /* : UInt32 */;
uint32_t var65 /* : UInt32 */;
val* var66 /* : nullable Numeric */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
short int var71 /* : Bool */;
val* var72 /* : nullable Numeric */;
{
var1 = core__fixed_ints_text___Text___is_num(self);
}
var2 = !var1;
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var4 = (val*)((long)('_')<<2|2);
var3 = core__string_search___Text___remove_all(self, var4);
}
var_s = var3;
{
var5 = core__fixed_ints_text___Text___get_numext(var_s);
}
var_ext = var5;
{
var6 = core__fixed_ints_text___Text___strip_numext(var_s);
}
var_trunk = var6;
{
var7 = core__fixed_ints_text___Text___strip_numhead(var_trunk);
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "";
var10 = core__abstract_text___CString___to_s_full(var9, 0l, 0l);
var8 = var10;
varonce = var8;
}
{
var11 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Object___61d_61d]))(var7, var8); /* == on <var7:Text>*/
}
if (var11){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var12 = core__fixed_ints_text___Text___to_i(var_trunk);
}
var_trval = var12;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "u8";
var16 = core__abstract_text___CString___to_s_full(var15, 2l, 2l);
var14 = var16;
varonce13 = var14;
}
{
var17 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var14); /* == on <var_ext:Text>*/
}
if (var17){
{
{ /* Inline kernel#Int#to_b (var_trval) on <var_trval:Int> */
var20 = (unsigned char)var_trval;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var21 = BOX_core__Byte(var18); /* autobox from Byte to nullable Numeric */
var = var21;
goto RET_LABEL;
} else {
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "i8";
var25 = core__abstract_text___CString___to_s_full(var24, 2l, 2l);
var23 = var25;
varonce22 = var23;
}
{
var26 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var23); /* == on <var_ext:Text>*/
}
if (var26){
{
{ /* Inline fixed_ints#Int#to_i8 (var_trval) on <var_trval:Int> */
var29 = (int8_t)var_trval;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var30 = BOX_core__Int8(var27); /* autobox from Int8 to nullable Numeric */
var = var30;
goto RET_LABEL;
} else {
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "i16";
var34 = core__abstract_text___CString___to_s_full(var33, 3l, 3l);
var32 = var34;
varonce31 = var32;
}
{
var35 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var32); /* == on <var_ext:Text>*/
}
if (var35){
{
{ /* Inline fixed_ints#Int#to_i16 (var_trval) on <var_trval:Int> */
var38 = (int16_t)var_trval;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var39 = BOX_core__Int16(var36); /* autobox from Int16 to nullable Numeric */
var = var39;
goto RET_LABEL;
} else {
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "u16";
var43 = core__abstract_text___CString___to_s_full(var42, 3l, 3l);
var41 = var43;
varonce40 = var41;
}
{
var44 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var41); /* == on <var_ext:Text>*/
}
if (var44){
{
{ /* Inline fixed_ints#Int#to_u16 (var_trval) on <var_trval:Int> */
var47 = (uint16_t)var_trval;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var48 = BOX_core__UInt16(var45); /* autobox from UInt16 to nullable Numeric */
var = var48;
goto RET_LABEL;
} else {
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "i32";
var52 = core__abstract_text___CString___to_s_full(var51, 3l, 3l);
var50 = var52;
varonce49 = var50;
}
{
var53 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var50); /* == on <var_ext:Text>*/
}
if (var53){
{
{ /* Inline fixed_ints#Int#to_i32 (var_trval) on <var_trval:Int> */
var56 = (int32_t)var_trval;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var57 = BOX_core__Int32(var54); /* autobox from Int32 to nullable Numeric */
var = var57;
goto RET_LABEL;
} else {
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "u32";
var61 = core__abstract_text___CString___to_s_full(var60, 3l, 3l);
var59 = var61;
varonce58 = var59;
}
{
var62 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var59); /* == on <var_ext:Text>*/
}
if (var62){
{
{ /* Inline fixed_ints#Int#to_u32 (var_trval) on <var_trval:Int> */
var65 = (uint32_t)var_trval;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var66 = BOX_core__UInt32(var63); /* autobox from UInt32 to nullable Numeric */
var = var66;
goto RET_LABEL;
} else {
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "";
var70 = core__abstract_text___CString___to_s_full(var69, 0l, 0l);
var68 = var70;
varonce67 = var68;
}
{
var71 = ((short int(*)(val* self, val* p0))(var_ext->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ext, var68); /* == on <var_ext:Text>*/
}
if (var71){
var72 = (val*)(var_trval<<2|1);
var = var72;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
}
}
}
}
}
}
RET_LABEL:;
return var;
}
