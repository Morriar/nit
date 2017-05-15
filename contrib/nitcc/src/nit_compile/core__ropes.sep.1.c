#include "core__ropes.sep.0.h"
/* method ropes$Concat$chars for (self: Concat): SequenceRead[Char] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__chars(val* self) {
val* var /* : SequenceRead[Char] */;
val* var1 /* : RopeChars */;
var1 = NEW_core__ropes__RopeChars(&type_core__ropes__RopeChars);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__StringCharView__target_61d]))(var1, self); /* target= on <var1:RopeChars>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:RopeChars>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$bytes for (self: Concat): SequenceRead[Byte] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__bytes(val* self) {
val* var /* : SequenceRead[Byte] */;
val* var1 /* : RopeBytes */;
var1 = NEW_core__ropes__RopeBytes(&type_core__ropes__RopeBytes);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_text__StringByteView__target_61d]))(var1, self); /* target= on <var1:RopeBytes>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:RopeBytes>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$length for (self: Concat): Int */
long core__ropes___core__ropes__Concat___core__abstract_text__Text__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$Concat$length= for (self: Concat, Int) */
void core__ropes___core__ropes__Concat___length_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__Concat___length].l = p0; /* _length on <self:Concat> */
RET_LABEL:;
}
/* method ropes$Concat$byte_length for (self: Concat): Int */
long core__ropes___core__ropes__Concat___core__abstract_text__Text__byte_length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___byte_length].l; /* _byte_length on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$Concat$byte_length= for (self: Concat, Int) */
void core__ropes___core__ropes__Concat___byte_length_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__Concat___byte_length].l = p0; /* _byte_length on <self:Concat> */
RET_LABEL:;
}
/* method ropes$Concat$substrings for (self: Concat): Iterator[FlatText] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__substrings(val* self) {
val* var /* : Iterator[FlatText] */;
val* var1 /* : RopeSubstrings */;
var1 = NEW_core__ropes__RopeSubstrings(&type_core__ropes__RopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeSubstrings__from]))(var1, self, 0l); /* from on <var1:RopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$empty for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__empty(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
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
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$flat_cache for (self: Concat): FlatString */
val* core__ropes___core__ropes__Concat___flat_cache(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 85);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$Concat$flat_cache= for (self: Concat, FlatString) */
void core__ropes___core__ropes__Concat___flat_cache_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__Concat___flat_cache].val = p0; /* _flat_cache on <self:Concat> */
RET_LABEL:;
}
/* method ropes$Concat$flat_last_pos_start for (self: Concat): Int */
long core__ropes___core__ropes__Concat___flat_last_pos_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$Concat$flat_last_pos_start= for (self: Concat, Int) */
void core__ropes___core__ropes__Concat___flat_last_pos_start_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l = p0; /* _flat_last_pos_start on <self:Concat> */
RET_LABEL:;
}
/* method ropes$Concat$to_cstring for (self: Concat): CString */
char* core__ropes___core__ropes__Concat___core__abstract_text__Text__to_cstring(val* self) {
char* var /* : CString */;
long var1 /* : Int */;
long var_len /* var len: Int */;
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
long var_off /* var off: Int */;
val* var12 /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[FlatText] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_i /* var i: FlatText */;
long var17 /* : Int */;
long var_ilen /* var ilen: Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
char* var22 /* : CString */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__Concat___byte_length].l; /* _byte_length on <self:Concat> */
var_len = var1;
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NULL/*special!*/;
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_len,1l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var_len + 1l;
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
{ /* Inline native$CString$[]= (var_ns,var_len,((unsigned char)0x00)) on <var_ns:CString> */
var_ns[var_len]=(unsigned char)((unsigned char)0x00);
RET_LABEL11:(void)0;
}
}
var_off = 0l;
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__substrings]))(self); /* substrings on <self:Concat>*/
}
var_ = var12;
{
var13 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[FlatText]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[FlatText]>*/
}
var_i = var16;
var17 = var_i->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_i:FlatText> */
var_ilen = var17;
/* <var_i:FlatText> isa FlatString */
cltype19 = type_core__FlatString.color;
idtype20 = type_core__FlatString.id;
if(cltype19 >= var_i->type->table_size) {
var18 = 0;
} else {
var18 = var_i->type->type_table[cltype19] == idtype20;
}
if (unlikely(!var18)) {
var_class_name21 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 98);
fatal_exit(1);
}
var22 = var_i->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_i:FlatText(FlatString)> */
/* <var_i:FlatText> isa FlatString */
cltype24 = type_core__FlatString.color;
idtype25 = type_core__FlatString.id;
if(cltype24 >= var_i->type->table_size) {
var23 = 0;
} else {
var23 = var_i->type->type_table[cltype24] == idtype25;
}
if (unlikely(!var23)) {
var_class_name26 = var_i == NULL ? "null" : var_i->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 98);
fatal_exit(1);
}
var27 = var_i->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_i:FlatText(FlatString)> */
{
{ /* Inline native$CString$copy_to (var22,var_ns,var_ilen,var27,var_off) on <var22:CString> */
memmove(var_ns+var_off,var22+var27,var_ilen);
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_off,var_ilen) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var_ilen:Int> isa OTHER */
/* <var_ilen:Int> isa OTHER */
var31 = 1; /* easy <var_ilen:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_off + var_ilen;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_off = var29;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[FlatText]>*/
}
var = var_ns;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$left for (self: Concat): String */
val* core__ropes___core__ropes__Concat___left(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 104);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$Concat$left= for (self: Concat, String) */
void core__ropes___core__ropes__Concat___left_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__Concat___left].val = p0; /* _left on <self:Concat> */
RET_LABEL:;
}
/* method ropes$Concat$right for (self: Concat): String */
val* core__ropes___core__ropes__Concat___right(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 106);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$Concat$right= for (self: Concat, String) */
void core__ropes___core__ropes__Concat___right_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__Concat___right].val = p0; /* _right on <self:Concat> */
RET_LABEL:;
}
/* method ropes$Concat$init for (self: Concat) */
void core__ropes___core__ropes__Concat___core__kernel__Object__init(val* self) {
val* var /* : String */;
val* var_l /* var l: String */;
val* var1 /* : String */;
val* var_r /* var r: String */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
long var17 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes___core__ropes__Concat___core__kernel__Object__init]))(self); /* init on <self:Concat>*/
}
var = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 110);
fatal_exit(1);
}
var_l = var;
var1 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 111);
fatal_exit(1);
}
var_r = var1;
{
var2 = ((long(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Text__length]))(var_l); /* length on <var_l:String>*/
}
{
var3 = ((long(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Text__length]))(var_r); /* length on <var_r:String>*/
}
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
self->attrs[COLOR_core__ropes__Concat___length].l = var4; /* _length on <self:Concat> */
{
var8 = ((long(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_l); /* byte_length on <var_l:String>*/
}
{
var9 = ((long(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_r); /* byte_length on <var_r:String>*/
}
{
{ /* Inline kernel$Int$+ (var8,var9) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var16 = var8 + var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
self->attrs[COLOR_core__ropes__Concat___byte_length].l = var10; /* _byte_length on <self:Concat> */
var17 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l = var17; /* _flat_last_pos_start on <self:Concat> */
RET_LABEL:;
}
/* method ropes$Concat$is_empty for (self: Concat): Bool */
short int core__ropes___core__ropes__Concat___core__abstract_text__Text__is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__Concat___byte_length].l; /* _byte_length on <self:Concat> */
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
/* method ropes$Concat$output for (self: Concat) */
void core__ropes___core__ropes__Concat___core__kernel__Object__output(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 120);
fatal_exit(1);
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__output]))(var); /* output on <var:String>*/
}
var1 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 121);
fatal_exit(1);
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__output]))(var1); /* output on <var1:String>*/
}
RET_LABEL:;
}
/* method ropes$Concat$iterator for (self: Concat): Iterator[Char] */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__iterator(val* self) {
val* var /* : Iterator[Char] */;
val* var1 /* : RopeCharIterator */;
var1 = NEW_core__ropes__RopeCharIterator(&type_core__ropes__RopeCharIterator);
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeCharIterator__from]))(var1, self, 0l); /* from on <var1:RopeCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$* for (self: Concat, Int): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text___42d(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var_x /* var x: String */;
long var_j /* var j: Int */;
long var_ /* var : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : Text */;
long var6 /* : Int */;
var_i = p0;
var_x = self;
var_j = 1l;
var_ = var_i;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var3 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = var_j < var_;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__abstract_text__Text___43d]))(var_x, self); /* + on <var_x:String>*/
}
var_x = var5;
var6 = core___core__Int___Discrete__successor(var_j, 1l);
var_j = var6;
}
BREAK_label: (void)0;
var = var_x;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$[] for (self: Concat, Int): Char */
uint32_t core__ropes___core__ropes__Concat___core__abstract_text__Text___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
long var14 /* : Int */;
long var_flps /* var flps: Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : FlatString */;
val* var_fc /* var fc: FlatString */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
uint32_t var45 /* : Char */;
val* var46 /* : FlatString */;
val* var_lf /* var lf: FlatString */;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
uint32_t var55 /* : Char */;
var_i = p0;
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var_i >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
var6 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
{
{ /* Inline kernel$Int$< (var_i,var6) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var_i < var6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 133);
fatal_exit(1);
}
var14 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var_flps = var14;
{
{ /* Inline kernel$Int$>= (var_i,var_flps) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var17 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var21 = var_i >= var_flps;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var22 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 136);
fatal_exit(1);
}
var_fc = var22;
var23 = var_fc->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_fc:FlatString> */
{
{ /* Inline kernel$Int$+ (var_flps,var23) on <var_flps:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var30 = var_flps + var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_i,var24) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var33 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var37 = var_i < var24;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
{
{ /* Inline kernel$Int$- (var_i,var_flps) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var40 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var44 = var_i - var_flps;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
var45 = ((uint32_t(*)(val* self, long p0))(var_fc->class->vft[COLOR_core__flat__FlatText__fetch_char_at]))(var_fc, var38); /* fetch_char_at on <var_fc:FlatString>*/
}
var = var45;
goto RET_LABEL;
} else {
}
} else {
}
{
var46 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__Concat__get_leaf_at]))(self, var_i); /* get_leaf_at on <self:Concat>*/
}
var_lf = var46;
var47 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
{
{ /* Inline kernel$Int$- (var_i,var47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var54 = var_i - var47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
var55 = ((uint32_t(*)(val* self, long p0))(var_lf->class->vft[COLOR_core__flat__FlatText__fetch_char_at]))(var_lf, var48); /* fetch_char_at on <var_lf:FlatString>*/
}
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$get_leaf_at for (self: Concat, Int): FlatString */
val* core__ropes___core__ropes__Concat___get_leaf_at(val* self, long p0) {
val* var /* : FlatString */;
long var_pos /* var pos: Int */;
long var1 /* : Int */;
long var_flps /* var flps: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : FlatString */;
val* var_fc /* var fc: FlatString */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var_s /* var s: String */;
long var_st /* var st: Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
const char* var_class_name28;
val* var29 /* : String */;
val* var_lft /* var lft: String */;
long var30 /* : Int */;
long var_llen /* var llen: Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
short int var37 /* : Bool */;
val* var38 /* : String */;
long var39 /* : Int */;
short int var41 /* : Bool */;
int cltype42;
int idtype43;
const char* var_class_name44;
long var45 /* : Int */;
long var46 /* : Int */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
long var52 /* : Int */;
var_pos = p0;
var1 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var_flps = var1;
{
{ /* Inline kernel$Int$>= (var_pos,var_flps) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var4 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var_pos >= var_flps;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var6 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 146);
fatal_exit(1);
}
var_fc = var6;
var7 = var_fc->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_fc:FlatString> */
{
{ /* Inline kernel$Int$+ (var_flps,var7) on <var_flps:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_flps + var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_pos,var8) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var17 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var21 = var_pos < var8;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var = var_fc;
goto RET_LABEL;
} else {
}
} else {
}
var_s = self;
var_st = var_pos;
for(;;) {
/* <var_s:String> isa FlatString */
cltype23 = type_core__FlatString.color;
idtype24 = type_core__FlatString.id;
if(cltype23 >= var_s->type->table_size) {
var22 = 0;
} else {
var22 = var_s->type->type_table[cltype23] == idtype24;
}
if (var22){
goto BREAK_label;
} else {
}
/* <var_s:String> isa Concat */
cltype26 = type_core__ropes__Concat.color;
idtype27 = type_core__ropes__Concat.id;
if(cltype26 >= var_s->type->table_size) {
var25 = 0;
} else {
var25 = var_s->type->type_table[cltype26] == idtype27;
}
if (unlikely(!var25)) {
var_class_name28 = var_s == NULL ? "null" : var_s->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Concat", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 153);
fatal_exit(1);
}
var_s = var_s;
var29 = var_s->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_s:String(Concat)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 154);
fatal_exit(1);
}
var_lft = var29;
{
var30 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__length]))(var_lft); /* length on <var_lft:String>*/
}
var_llen = var30;
{
{ /* Inline kernel$Int$>= (var_pos,var_llen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var33 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var37 = var_pos >= var_llen;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
var38 = var_s->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_s:String(Concat)> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 157);
fatal_exit(1);
}
var_s = var38;
{
{ /* Inline kernel$Int$- (var_pos,var_llen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var41 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var41)) {
var_class_name44 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name44);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var45 = var_pos - var_llen;
var39 = var45;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_pos = var39;
} else {
var_s = var_lft;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$- (var_st,var_pos) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var48 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var52 = var_st - var_pos;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l = var46; /* _flat_last_pos_start on <self:Concat> */
self->attrs[COLOR_core__ropes__Concat___flat_cache].val = var_s; /* _flat_cache on <self:Concat> */
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$substring for (self: Concat, Int, Int): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__substring(val* self, long p0, long p1) {
val* var /* : String */;
long var_from /* var from: Int */;
long var_count /* var count: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
long var26 /* : Int */;
long var_ln /* var ln: Int */;
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
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
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
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var_end_index /* var end_index: Int */;
long var77 /* : Int */;
long var_flps /* var flps: Int */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
short int var84 /* : Bool */;
val* var85 /* : FlatString */;
val* var_fc /* var fc: FlatString */;
long var86 /* : Int */;
long var87 /* : Int */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
long var93 /* : Int */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name99;
short int var100 /* : Bool */;
long var101 /* : Int */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
long var107 /* : Int */;
long var108 /* : Int */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
const char* var_class_name113;
long var114 /* : Int */;
val* var115 /* : String */;
val* var116 /* : String */;
val* var_lft /* var lft: String */;
long var117 /* : Int */;
long var_llen /* var llen: Int */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
const char* var_class_name123;
short int var124 /* : Bool */;
long var125 /* : Int */;
short int var127 /* : Bool */;
int cltype128;
int idtype129;
const char* var_class_name130;
long var131 /* : Int */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
const char* var_class_name137;
short int var138 /* : Bool */;
val* var139 /* : Text */;
long var140 /* : Int */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name145;
long var146 /* : Int */;
long var_lsublen /* var lsublen: Int */;
val* var147 /* : Text */;
val* var148 /* : String */;
long var149 /* : Int */;
short int var151 /* : Bool */;
int cltype152;
int idtype153;
const char* var_class_name154;
long var155 /* : Int */;
val* var156 /* : Text */;
val* var157 /* : Text */;
val* var158 /* : String */;
long var159 /* : Int */;
short int var161 /* : Bool */;
int cltype162;
int idtype163;
const char* var_class_name164;
long var165 /* : Int */;
val* var166 /* : Text */;
var_from = p0;
var_count = p1;
{
{ /* Inline kernel$Int$< (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = var_from < 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel$Int$+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var7 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var11 = var_count + var_from;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_count = var5;
{
{ /* Inline kernel$Int$< (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var18 = var_count < 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "";
var22 = (val*)(0l<<2|1);
var23 = (val*)(0l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce = var19;
}
var = var19;
goto RET_LABEL;
} else {
}
var_from = 0l;
} else {
}
var26 = self->attrs[COLOR_core__ropes__Concat___length].l; /* _length on <self:Concat> */
var_ln = var26;
{
{ /* Inline kernel$Int$+ (var_count,var_from) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var29 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var33 = var_count + var_from;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var27,var_ln) on <var27:Int> */
/* Covariant cast for argument 0 (i) <var_ln:Int> isa OTHER */
/* <var_ln:Int> isa OTHER */
var36 = 1; /* easy <var_ln:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var40 = var27 > var_ln;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
{
{ /* Inline kernel$Int$- (var_ln,var_from) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var43 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var47 = var_ln - var_from;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_count = var41;
} else {
}
{
{ /* Inline kernel$Int$<= (var_count,0l) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var50 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var54 = var_count <= 0l;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "";
var59 = (val*)(0l<<2|1);
var60 = (val*)(0l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
var = var56;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var65 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var69 = var_from + var_count;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var63,1l) on <var63:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var76 = var63 - 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_end_index = var70;
var77 = self->attrs[COLOR_core__ropes__Concat___flat_last_pos_start].l; /* _flat_last_pos_start on <self:Concat> */
var_flps = var77;
{
{ /* Inline kernel$Int$>= (var_from,var_flps) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var80 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var84 = var_from >= var_flps;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
if (var78){
var85 = self->attrs[COLOR_core__ropes__Concat___flat_cache].val; /* _flat_cache on <self:Concat> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _flat_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 182);
fatal_exit(1);
}
var_fc = var85;
var86 = var_fc->attrs[COLOR_core__abstract_text__FlatText___length].l; /* _length on <var_fc:FlatString> */
{
{ /* Inline kernel$Int$+ (var_flps,var86) on <var_flps:Int> */
/* Covariant cast for argument 0 (i) <var86:Int> isa OTHER */
/* <var86:Int> isa OTHER */
var89 = 1; /* easy <var86:Int> isa OTHER*/
if (unlikely(!var89)) {
var_class_name92 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var93 = var_flps + var86;
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_end_index,var87) on <var_end_index:Int> */
/* Covariant cast for argument 0 (i) <var87:Int> isa OTHER */
/* <var87:Int> isa OTHER */
var96 = 1; /* easy <var87:Int> isa OTHER*/
if (unlikely(!var96)) {
var_class_name99 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name99);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var100 = var_end_index < var87;
var94 = var100;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
if (var94){
{
{ /* Inline kernel$Int$- (var_from,var_flps) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var103 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var107 = var_from - var_flps;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_end_index,var_flps) on <var_end_index:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var110 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var110)) {
var_class_name113 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name113);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var114 = var_end_index - var_flps;
var108 = var114;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
{
var115 = ((val*(*)(val* self, long p0, long p1, long p2))(var_fc->class->vft[COLOR_core__flat__FlatString__substring_impl]))(var_fc, var101, var_count, var108); /* substring_impl on <var_fc:FlatString>*/
}
var = var115;
goto RET_LABEL;
} else {
}
} else {
}
var116 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var116 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 188);
fatal_exit(1);
}
var_lft = var116;
{
var117 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__length]))(var_lft); /* length on <var_lft:String>*/
}
var_llen = var117;
{
{ /* Inline kernel$Int$< (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var120 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var120)) {
var_class_name123 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name123);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var124 = var_from < var_llen;
var118 = var124;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
if (var118){
{
{ /* Inline kernel$Int$+ (var_from,var_count) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_count:Int> isa OTHER */
/* <var_count:Int> isa OTHER */
var127 = 1; /* easy <var_count:Int> isa OTHER*/
if (unlikely(!var127)) {
var_class_name130 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name130);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var131 = var_from + var_count;
var125 = var131;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var125,var_llen) on <var125:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var134 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var134)) {
var_class_name137 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name137);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var138 = var125 < var_llen;
var132 = var138;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
}
if (var132){
{
var139 = ((val*(*)(val* self, long p0, long p1))(var_lft->class->vft[COLOR_core__abstract_text__Text__substring]))(var_lft, var_from, var_count); /* substring on <var_lft:String>*/
}
var = var139;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$- (var_llen,var_from) on <var_llen:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var142 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name145 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var146 = var_llen - var_from;
var140 = var146;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
var_lsublen = var140;
{
var147 = ((val*(*)(val* self, long p0))(var_lft->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_lft, var_from); /* substring_from on <var_lft:String>*/
}
var148 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var148 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 193);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$- (var_count,var_lsublen) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_lsublen:Int> isa OTHER */
/* <var_lsublen:Int> isa OTHER */
var151 = 1; /* easy <var_lsublen:Int> isa OTHER*/
if (unlikely(!var151)) {
var_class_name154 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name154);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var155 = var_count - var_lsublen;
var149 = var155;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
{
var156 = ((val*(*)(val* self, long p0, long p1))(var148->class->vft[COLOR_core__abstract_text__Text__substring]))(var148, 0l, var149); /* substring on <var148:String>*/
}
{
var157 = ((val*(*)(val* self, val* p0))(var147->class->vft[COLOR_core__abstract_text__Text___43d]))(var147, var156); /* + on <var147:Text(String)>*/
}
var = var157;
goto RET_LABEL;
} else {
var158 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var158 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 195);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$- (var_from,var_llen) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var161 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var161)) {
var_class_name164 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name164);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var165 = var_from - var_llen;
var159 = var165;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
{
var166 = ((val*(*)(val* self, long p0, long p1))(var158->class->vft[COLOR_core__abstract_text__Text__substring]))(var158, var159, var_count); /* substring on <var158:String>*/
}
var = var166;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes$Concat$reversed for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__reversed(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : Text */;
val* var4 /* : String */;
val* var5 /* : Text */;
var1 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var2 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 199);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__reversed]))(var2); /* reversed on <var2:String>*/
}
var4 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 199);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__Text__reversed]))(var4); /* reversed on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$insert_at for (self: Concat, String, Int): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__insert_at(val* self, val* p0, long p1) {
val* var /* : String */;
val* var_s /* var s: String */;
long var_pos /* var pos: Int */;
val* var1 /* : String */;
val* var_lft /* var lft: String */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : String */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
val* var16 /* : Text */;
val* var17 /* : Text */;
val* var18 /* : Text */;
val* var19 /* : String */;
val* var20 /* : Text */;
var_s = p0;
var_pos = p1;
var1 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 202);
fatal_exit(1);
}
var_lft = var1;
{
var2 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__length]))(var_lft); /* length on <var_lft:String>*/
}
{
{ /* Inline kernel$Int$> (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var6 = var_pos > var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var7 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 204);
fatal_exit(1);
}
{
var8 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__length]))(var_lft); /* length on <var_lft:String>*/
}
{
{ /* Inline kernel$Int$- (var_pos,var8) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var15 = var_pos - var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
var16 = ((val*(*)(val* self, val* p0, long p1))(var7->class->vft[COLOR_core__abstract_text__Text__insert_at]))(var7, var_s, var9); /* insert_at on <var7:String>*/
}
{
var17 = ((val*(*)(val* self, val* p0))(var_lft->class->vft[COLOR_core__abstract_text__Text___43d]))(var_lft, var16); /* + on <var_lft:String>*/
}
var = var17;
goto RET_LABEL;
} else {
}
{
var18 = ((val*(*)(val* self, val* p0, long p1))(var_lft->class->vft[COLOR_core__abstract_text__Text__insert_at]))(var_lft, var_s, var_pos); /* insert_at on <var_lft:String>*/
}
var19 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 206);
fatal_exit(1);
}
{
var20 = ((val*(*)(val* self, val* p0))(var18->class->vft[COLOR_core__abstract_text__Text___43d]))(var18, var19); /* + on <var18:Text(String)>*/
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$to_upper for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__to_upper(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : Text */;
val* var4 /* : String */;
val* var5 /* : Text */;
var1 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var2 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 209);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__to_upper]))(var2); /* to_upper on <var2:String>*/
}
var4 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 209);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__Text__to_upper]))(var4); /* to_upper on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$to_lower for (self: Concat): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text__to_lower(val* self) {
val* var /* : String */;
val* var1 /* : Concat */;
val* var2 /* : String */;
val* var3 /* : Text */;
val* var4 /* : String */;
val* var5 /* : Text */;
var1 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var2 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 211);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__to_lower]))(var2); /* to_lower on <var2:String>*/
}
var4 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 211);
fatal_exit(1);
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__Text__to_lower]))(var4); /* to_lower on <var4:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__left_61d]))(var1, var3); /* left= on <var1:Concat>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__ropes__Concat__right_61d]))(var1, var5); /* right= on <var1:Concat>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Concat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$+ for (self: Concat, Text): String */
val* core__ropes___core__ropes__Concat___core__abstract_text__Text___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : Concat */;
val* var5 /* : String */;
val* var_r /* var r: String */;
long var6 /* : Int */;
long var_rlen /* var rlen: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name;
long var12 /* : Int */;
val* var13 /* : Sys */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : Concat */;
val* var23 /* : Concat */;
val* var24 /* : String */;
val* var25 /* : Text */;
var_o = p0;
{
var1 = ((val*(*)(val* self))(var_o->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_o); /* to_s on <var_o:Text>*/
}
var_s = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:String>*/
}
var_slen = var2;
/* <var_s:String> isa Concat */
cltype = type_core__ropes__Concat.color;
idtype = type_core__ropes__Concat.id;
if(cltype >= var_s->type->table_size) {
var3 = 0;
} else {
var3 = var_s->type->type_table[cltype] == idtype;
}
if (var3){
var4 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__ropes__Concat__left_61d]))(var4, self); /* left= on <var4:Concat>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__ropes__Concat__right_61d]))(var4, var_s); /* right= on <var4:Concat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:Concat>*/
}
var = var4;
goto RET_LABEL;
} else {
var5 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 219);
fatal_exit(1);
}
var_r = var5;
{
var6 = ((long(*)(val* self))(var_r->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_r); /* byte_length on <var_r:String>*/
}
var_rlen = var6;
{
{ /* Inline kernel$Int$+ (var_rlen,var_slen) on <var_rlen:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var9 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var_rlen + var_slen;
var7 = var12;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var13 = glob_sys;
{
var14 = ((long(*)(val* self))(var13->class->vft[COLOR_core__ropes__Sys__maxlen]))(var13); /* maxlen on <var13:Sys>*/
}
{
{ /* Inline kernel$Int$> (var7,var14) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var21 = var7 > var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var22 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__ropes__Concat__left_61d]))(var22, self); /* left= on <var22:Concat>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__ropes__Concat__right_61d]))(var22, var_s); /* right= on <var22:Concat>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:Concat>*/
}
var = var22;
goto RET_LABEL;
} else {
}
var23 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
var24 = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 222);
fatal_exit(1);
}
{
var25 = ((val*(*)(val* self, val* p0))(var_r->class->vft[COLOR_core__abstract_text__Text___43d]))(var_r, var_s); /* + on <var_r:String>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__ropes__Concat__left_61d]))(var23, var24); /* left= on <var23:Concat>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_core__ropes__Concat__right_61d]))(var23, var25); /* right= on <var23:Concat>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:Concat>*/
}
var = var23;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method ropes$Concat$copy_to_native for (self: Concat, CString, Int, Int, Int) */
void core__ropes___core__ropes__Concat___core__abstract_text__Text__copy_to_native(val* self, char* p0, long p1, long p2, long p3) {
char* var_dest /* var dest: CString */;
long var_n /* var n: Int */;
long var_src_offset /* var src_offset: Int */;
long var_dest_offset /* var dest_offset: Int */;
val* var /* : String */;
val* var_l /* var l: String */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var_lcopy /* var lcopy: Int */;
long var14 /* : Int */;
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
val* var36 /* : String */;
var_dest = p0;
var_n = p1;
var_src_offset = p2;
var_dest_offset = p3;
var = self->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <self:Concat> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 227);
fatal_exit(1);
}
var_l = var;
{
var1 = ((long(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_l); /* byte_length on <var_l:String>*/
}
{
{ /* Inline kernel$Int$< (var_src_offset,var1) on <var_src_offset:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_src_offset < var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((long(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_l); /* byte_length on <var_l:String>*/
}
{
{ /* Inline kernel$Int$- (var6,var_src_offset) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var_src_offset:Int> isa OTHER */
/* <var_src_offset:Int> isa OTHER */
var9 = 1; /* easy <var_src_offset:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var6 - var_src_offset;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_lcopy = var7;
{
{ /* Inline kernel$Int$> (var_lcopy,var_n) on <var_lcopy:Int> */
/* Covariant cast for argument 0 (i) <var_n:Int> isa OTHER */
/* <var_n:Int> isa OTHER */
var17 = 1; /* easy <var_n:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var21 = var_lcopy > var_n;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
var14 = var_n;
} else {
var14 = var_lcopy;
}
var_lcopy = var14;
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var_l->class->vft[COLOR_core__abstract_text__Text__copy_to_native]))(var_l, var_dest, var_lcopy, var_src_offset, var_dest_offset); /* copy_to_native on <var_l:String>*/
}
{
{ /* Inline kernel$Int$+ (var_dest_offset,var_lcopy) on <var_dest_offset:Int> */
/* Covariant cast for argument 0 (i) <var_lcopy:Int> isa OTHER */
/* <var_lcopy:Int> isa OTHER */
var24 = 1; /* easy <var_lcopy:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var_dest_offset + var_lcopy;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var_dest_offset = var22;
{
{ /* Inline kernel$Int$- (var_n,var_lcopy) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_lcopy:Int> isa OTHER */
/* <var_lcopy:Int> isa OTHER */
var31 = 1; /* easy <var_lcopy:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var35 = var_n - var_lcopy;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_n = var29;
var_src_offset = 0l;
} else {
}
var36 = self->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <self:Concat> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 236);
fatal_exit(1);
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var36->class->vft[COLOR_core__abstract_text__Text__copy_to_native]))(var36, var_dest, var_n, var_src_offset, var_dest_offset); /* copy_to_native on <var36:String>*/
}
RET_LABEL:;
}
/* method ropes$Concat$balance for (self: Concat): String */
val* core__ropes___core__ropes__Concat___balance(val* self) {
val* var /* : String */;
val* var1 /* : Array[String] */;
val* var_children /* var children: Array[String] */;
val* var2 /* : RopeCharIteratorPiece */;
val* var_iter /* var iter: nullable RopeCharIteratorPiece */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : String */;
val* var_rnod /* var rnod: String */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var7 /* : Bool */;
val* var8 /* : nullable RopeCharIteratorPiece */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : RopeCharIteratorPiece */;
val* var13 /* : String */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : RopeCharIteratorPiece */;
val* var17 /* : String */;
val* var18 /* : nullable RopeCharIteratorPiece */;
long var19 /* : Int */;
val* var20 /* : String */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_children = var1;
var2 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var2, self); /* node= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var2, 0); /* ldone= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var2, 0); /* rdone= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var2, ((val*)NULL)); /* prev= on <var2:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:RopeCharIteratorPiece>*/
}
var_iter = var2;
for(;;) {
if (var_iter == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_iter->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_iter, ((val*)NULL)); /* == on <var_iter:nullable RopeCharIteratorPiece>*/
var3 = var4;
}
if (var3){
goto BREAK_label;
} else {
}
{
var5 = ((val*(*)(val* self))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node]))(var_iter); /* node on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var_rnod = var5;
/* <var_rnod:String> isa Concat */
cltype = type_core__ropes__Concat.color;
idtype = type_core__ropes__Concat.id;
if(cltype >= var_rnod->type->table_size) {
var6 = 0;
} else {
var6 = var_rnod->type->type_table[cltype] == idtype;
}
var7 = !var6;
if (var7){
{
((void(*)(val* self, val* p0))(var_children->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_children, var_rnod); /* push on <var_children:Array[String]>*/
}
{
var8 = ((val*(*)(val* self))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev]))(var_iter); /* prev on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var_iter = var8;
goto BREAK_label9;
} else {
}
{
var10 = ((short int(*)(val* self))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone]))(var_iter); /* ldone on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var11 = !var10;
if (var11){
{
((void(*)(val* self, short int p0))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var_iter, 1); /* ldone= on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var12 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var13 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 254);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var12, var13); /* node= on <var12:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var12->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var12, 0); /* ldone= on <var12:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var12->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var12, 0); /* rdone= on <var12:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var12, var_iter); /* prev= on <var12:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_core__kernel__Object__init]))(var12); /* init on <var12:RopeCharIteratorPiece>*/
}
var_iter = var12;
} else {
{
var14 = ((short int(*)(val* self))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone]))(var_iter); /* rdone on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var15 = !var14;
if (var15){
{
((void(*)(val* self, short int p0))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var_iter, 1); /* rdone= on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var16 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var17 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 257);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var16, var17); /* node= on <var16:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var16->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var16, 0); /* ldone= on <var16:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var16->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var16, 0); /* rdone= on <var16:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var16, var_iter); /* prev= on <var16:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var16->class->vft[COLOR_core__kernel__Object__init]))(var16); /* init on <var16:RopeCharIteratorPiece>*/
}
var_iter = var16;
} else {
{
var18 = ((val*(*)(val* self))(var_iter->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev]))(var_iter); /* prev on <var_iter:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var_iter = var18;
}
}
BREAK_label9: (void)0;
}
BREAK_label: (void)0;
{
var19 = ((long(*)(val* self))(var_children->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_children); /* length on <var_children:Array[String]>*/
}
{
var20 = ((val*(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_core__ropes__Concat__recurse_balance]))(self, var_children, var19); /* recurse_balance on <self:Concat>*/
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Concat$recurse_balance for (self: Concat, Array[String], Int): String */
val* core__ropes___core__ropes__Concat___recurse_balance(val* self, val* p0, long p1) {
val* var /* : String */;
val* var_nodes /* var nodes: Array[String] */;
long var_len /* var len: Int */;
long var_finpos /* var finpos: Int */;
long var_stpos /* var stpos: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
val* var19 /* : Concat */;
val* var20 /* : nullable Object */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
val* var28 /* : nullable Object */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
val* var36 /* : nullable Object */;
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
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var55 /* : String */;
var_nodes = p0;
var_len = p1;
var_finpos = 0l;
var_stpos = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_stpos,var_len) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var3 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = var_stpos < var_len;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel$Int$- (var_len,var_stpos) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <var_stpos:Int> isa OTHER */
/* <var_stpos:Int> isa OTHER */
var7 = 1; /* easy <var_stpos:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var11 = var_len - var_stpos;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var18 = var5 > 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
var19 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
var20 = ((val*(*)(val* self, long p0))(var_nodes->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_nodes, var_stpos); /* [] on <var_nodes:Array[String]>*/
}
{
{ /* Inline kernel$Int$+ (var_stpos,1l) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var27 = var_stpos + 1l;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var28 = ((val*(*)(val* self, long p0))(var_nodes->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_nodes, var21); /* [] on <var_nodes:Array[String]>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_core__ropes__Concat__left_61d]))(var19, var20); /* left= on <var19:Concat>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_core__ropes__Concat__right_61d]))(var19, var28); /* right= on <var19:Concat>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_core__kernel__Object__init]))(var19); /* init on <var19:Concat>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_nodes->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_nodes, var_finpos, var19); /* []= on <var_nodes:Array[String]>*/
}
{
{ /* Inline kernel$Int$+ (var_stpos,2l) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var31 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var35 = var_stpos + 2l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_stpos = var29;
} else {
{
var36 = ((val*(*)(val* self, long p0))(var_nodes->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_nodes, var_stpos); /* [] on <var_nodes:Array[String]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_nodes->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_nodes, var_finpos, var36); /* []= on <var_nodes:Array[String]>*/
}
{
{ /* Inline kernel$Int$+ (var_stpos,1l) on <var_stpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var39 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var43 = var_stpos + 1l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_stpos = var37;
}
{
{ /* Inline kernel$Int$+ (var_finpos,1l) on <var_finpos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_finpos + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_finpos = var44;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$== (var_finpos,1l) on <var_finpos:Int> */
var53 = var_finpos == 1l;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
{
var54 = ((val*(*)(val* self, long p0))(var_nodes->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_nodes, 0l); /* [] on <var_nodes:Array[String]>*/
}
var = var54;
goto RET_LABEL;
} else {
}
{
var55 = ((val*(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_core__ropes__Concat__recurse_balance]))(self, var_nodes, var_finpos); /* recurse_balance on <self:Concat>*/
}
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$FlatString$insert_at for (self: FlatString, String, Int): String */
val* core__ropes___FlatString___core__abstract_text__Text__insert_at(val* self, val* p0, long p1) {
val* var /* : String */;
val* var_s /* var s: String */;
long var_pos /* var pos: Int */;
val* var1 /* : Text */;
val* var_l /* var l: String */;
val* var2 /* : Text */;
val* var_r /* var r: String */;
val* var3 /* : Text */;
val* var4 /* : Text */;
var_s = p0;
var_pos = p1;
{
var1 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var_pos); /* substring on <self:FlatString>*/
}
var_l = var1;
{
var2 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, var_pos); /* substring_from on <self:FlatString>*/
}
var_r = var2;
{
var3 = ((val*(*)(val* self, val* p0))(var_l->class->vft[COLOR_core__abstract_text__Text___43d]))(var_l, var_s); /* + on <var_l:String>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_text__Text___43d]))(var3, var_r); /* + on <var3:Text(String)>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$FlatString$+ for (self: FlatString, Text): String */
val* core__ropes___FlatString___core__abstract_text__Text___43d(val* self, val* p0) {
val* var /* : String */;
val* var_o /* var o: Text */;
val* var1 /* : String */;
val* var_s /* var s: String */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
long var3 /* : Int */;
long var_mlen /* var mlen: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var_nlen /* var nlen: Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : Sys */;
long var18 /* : Int */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
short int var25 /* : Bool */;
val* var26 /* : Concat */;
char* var27 /* : CString */;
char* var_mits /* var mits: CString */;
long var28 /* : Int */;
long var_sifrom /* var sifrom: Int */;
long var29 /* : Int */;
long var_mifrom /* var mifrom: Int */;
char* var30 /* : CString */;
char* var_sits /* var sits: CString */;
static char* varoncenew;
static int varoncenew_guard;
char* var31 /* : CString */;
char* var32 /* : CString */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
char* var40 /* : CString */;
char* var42 /* : CString */;
char* var_ns /* var ns: CString */;
static val* varoncenew45;
static int varoncenew45_guard;
val* var46 /* : FlatString */;
val* var47 /* : FlatString */;
long var48 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
long var56 /* : Int */;
val* var57 /* : FlatString */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
val* var61 /* : String */;
val* var_sl /* var sl: String */;
long var62 /* : Int */;
long var_sllen /* var sllen: Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
val* var70 /* : Sys */;
long var71 /* : Int */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
short int var78 /* : Bool */;
val* var79 /* : Concat */;
val* var80 /* : Concat */;
val* var81 /* : Text */;
val* var82 /* : String */;
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
{ /* Inline kernel$Int$== (var_slen,0l) on <var_slen:Int> */
var6 = var_slen == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = self;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_mlen,0l) on <var_mlen:Int> */
var9 = var_mlen == 0l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_slen,var_mlen) on <var_slen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var12 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var_slen + var_mlen;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_nlen = var10;
/* <var_s:String> isa FlatString */
cltype15 = type_core__FlatString.color;
idtype16 = type_core__FlatString.id;
if(cltype15 >= var_s->type->table_size) {
var14 = 0;
} else {
var14 = var_s->type->type_table[cltype15] == idtype16;
}
if (var14){
var17 = glob_sys;
{
var18 = ((long(*)(val* self))(var17->class->vft[COLOR_core__ropes__Sys__maxlen]))(var17); /* maxlen on <var17:Sys>*/
}
{
{ /* Inline kernel$Int$> (var_nlen,var18) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var25 = var_nlen > var18;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
var26 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_core__ropes__Concat__left_61d]))(var26, self); /* left= on <var26:Concat>*/
}
{
((void(*)(val* self, val* p0))(var26->class->vft[COLOR_core__ropes__Concat__right_61d]))(var26, var_s); /* right= on <var26:Concat>*/
}
{
((void(*)(val* self))(var26->class->vft[COLOR_core__kernel__Object__init]))(var26); /* init on <var26:Concat>*/
}
var = var26;
goto RET_LABEL;
} else {
}
var27 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_mits = var27;
var28 = var_s->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <var_s:String(FlatString)> */
var_sifrom = var28;
var29 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_mifrom = var29;
var30 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:String(FlatString)> */
var_sits = var30;
if (likely(varoncenew_guard)) {
var31 = varoncenew;
} else {
var32 = NULL/*special!*/;
var31 = var32;
varoncenew = var31;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$+ (var_nlen,1l) on <var_nlen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var39 = var_nlen + 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline native$CString$new (var31,var33) on <var31:CString> */
var42 = (char*)nit_alloc(var33);
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_ns = var40;
{
{ /* Inline native$CString$copy_to (var_mits,var_ns,var_mlen,var_mifrom,0l) on <var_mits:CString> */
memmove(var_ns+0l,var_mits+var_mifrom,var_mlen);
RET_LABEL43:(void)0;
}
}
{
{ /* Inline native$CString$copy_to (var_sits,var_ns,var_slen,var_sifrom,var_mlen) on <var_sits:CString> */
memmove(var_ns+var_mlen,var_sits+var_sifrom,var_slen);
RET_LABEL44:(void)0;
}
}
if (likely(varoncenew45_guard)) {
var46 = varoncenew45;
} else {
var47 = NEW_core__FlatString(&type_core__FlatString);
var46 = var47;
varoncenew45 = var46;
varoncenew45_guard = 1;
}
{
var48 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:FlatString>*/
}
{
var49 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:String(FlatString)>*/
}
{
{ /* Inline kernel$Int$+ (var48,var49) on <var48:Int> */
/* Covariant cast for argument 0 (i) <var49:Int> isa OTHER */
/* <var49:Int> isa OTHER */
var52 = 1; /* easy <var49:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var56 = var48 + var49;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var57 = ((val*(*)(val* self, char* p0, long p1, long p2, long p3))(var46->class->vft[COLOR_core__flat__FlatString__full]))(var46, var_ns, var_nlen, 0l, var50); /* full on <var46:FlatString>*/
}
var = var57;
goto RET_LABEL;
} else {
/* <var_s:String> isa Concat */
cltype59 = type_core__ropes__Concat.color;
idtype60 = type_core__ropes__Concat.id;
if(cltype59 >= var_s->type->table_size) {
var58 = 0;
} else {
var58 = var_s->type->type_table[cltype59] == idtype60;
}
if (var58){
var61 = var_s->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_s:String(Concat)> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 310);
fatal_exit(1);
}
var_sl = var61;
{
var62 = ((long(*)(val* self))(var_sl->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_sl); /* byte_length on <var_sl:String>*/
}
var_sllen = var62;
{
{ /* Inline kernel$Int$+ (var_sllen,var_mlen) on <var_sllen:Int> */
/* Covariant cast for argument 0 (i) <var_mlen:Int> isa OTHER */
/* <var_mlen:Int> isa OTHER */
var65 = 1; /* easy <var_mlen:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var69 = var_sllen + var_mlen;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var70 = glob_sys;
{
var71 = ((long(*)(val* self))(var70->class->vft[COLOR_core__ropes__Sys__maxlen]))(var70); /* maxlen on <var70:Sys>*/
}
{
{ /* Inline kernel$Int$> (var63,var71) on <var63:Int> */
/* Covariant cast for argument 0 (i) <var71:Int> isa OTHER */
/* <var71:Int> isa OTHER */
var74 = 1; /* easy <var71:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var78 = var63 > var71;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
if (var72){
var79 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
((void(*)(val* self, val* p0))(var79->class->vft[COLOR_core__ropes__Concat__left_61d]))(var79, self); /* left= on <var79:Concat>*/
}
{
((void(*)(val* self, val* p0))(var79->class->vft[COLOR_core__ropes__Concat__right_61d]))(var79, var_s); /* right= on <var79:Concat>*/
}
{
((void(*)(val* self))(var79->class->vft[COLOR_core__kernel__Object__init]))(var79); /* init on <var79:Concat>*/
}
var = var79;
goto RET_LABEL;
} else {
}
var80 = NEW_core__ropes__Concat(&type_core__ropes__Concat);
{
var81 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text___43d]))(self, var_sl); /* + on <self:FlatString>*/
}
var82 = var_s->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_s:String(Concat)> */
if (unlikely(var82 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 313);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_core__ropes__Concat__left_61d]))(var80, var81); /* left= on <var80:Concat>*/
}
{
((void(*)(val* self, val* p0))(var80->class->vft[COLOR_core__ropes__Concat__right_61d]))(var80, var82); /* right= on <var80:Concat>*/
}
{
((void(*)(val* self))(var80->class->vft[COLOR_core__kernel__Object__init]))(var80); /* init on <var80:Concat>*/
}
var = var80;
goto RET_LABEL;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 315);
fatal_exit(1);
}
}
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIteratorPiece$node for (self: RopeCharIteratorPiece): String */
val* core__ropes___core__ropes__RopeCharIteratorPiece___node(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val; /* _node on <self:RopeCharIteratorPiece> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 322);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIteratorPiece$node= for (self: RopeCharIteratorPiece, String) */
void core__ropes___core__ropes__RopeCharIteratorPiece___node_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___node].val = p0; /* _node on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes$RopeCharIteratorPiece$ldone for (self: RopeCharIteratorPiece): Bool */
short int core__ropes___core__ropes__RopeCharIteratorPiece___ldone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s; /* _ldone on <self:RopeCharIteratorPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIteratorPiece$ldone= for (self: RopeCharIteratorPiece, Bool) */
void core__ropes___core__ropes__RopeCharIteratorPiece___ldone_61d(val* self, short int p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___ldone].s = p0; /* _ldone on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes$RopeCharIteratorPiece$rdone for (self: RopeCharIteratorPiece): Bool */
short int core__ropes___core__ropes__RopeCharIteratorPiece___rdone(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s; /* _rdone on <self:RopeCharIteratorPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIteratorPiece$rdone= for (self: RopeCharIteratorPiece, Bool) */
void core__ropes___core__ropes__RopeCharIteratorPiece___rdone_61d(val* self, short int p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___rdone].s = p0; /* _rdone on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes$RopeCharIteratorPiece$prev for (self: RopeCharIteratorPiece): nullable RopeCharIteratorPiece */
val* core__ropes___core__ropes__RopeCharIteratorPiece___prev(val* self) {
val* var /* : nullable RopeCharIteratorPiece */;
val* var1 /* : nullable RopeCharIteratorPiece */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val; /* _prev on <self:RopeCharIteratorPiece> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIteratorPiece$prev= for (self: RopeCharIteratorPiece, nullable RopeCharIteratorPiece) */
void core__ropes___core__ropes__RopeCharIteratorPiece___prev_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIteratorPiece___prev].val = p0; /* _prev on <self:RopeCharIteratorPiece> */
RET_LABEL:;
}
/* method ropes$RopeCharIteratorPiece$init for (self: RopeCharIteratorPiece) */
void core__ropes___core__ropes__RopeCharIteratorPiece___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__ropes___core__ropes__RopeCharIteratorPiece___core__kernel__Object__init]))(self); /* init on <self:RopeCharIteratorPiece>*/
}
RET_LABEL:;
}
/* method ropes$RopeByteReverseIterator$ns for (self: RopeByteReverseIterator): CString */
char* core__ropes___core__ropes__RopeByteReverseIterator___ns(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___ns].str; /* _ns on <self:RopeByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteReverseIterator$ns= for (self: RopeByteReverseIterator, CString) */
void core__ropes___core__ropes__RopeByteReverseIterator___ns_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___ns].str = p0; /* _ns on <self:RopeByteReverseIterator> */
RET_LABEL:;
}
/* method ropes$RopeByteReverseIterator$pns for (self: RopeByteReverseIterator): Int */
long core__ropes___core__ropes__RopeByteReverseIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pns].l; /* _pns on <self:RopeByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteReverseIterator$pns= for (self: RopeByteReverseIterator, Int) */
void core__ropes___core__ropes__RopeByteReverseIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pns].l = p0; /* _pns on <self:RopeByteReverseIterator> */
RET_LABEL:;
}
/* method ropes$RopeByteReverseIterator$pos for (self: RopeByteReverseIterator): Int */
long core__ropes___core__ropes__RopeByteReverseIterator___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pos].l; /* _pos on <self:RopeByteReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteReverseIterator$pos= for (self: RopeByteReverseIterator, Int) */
void core__ropes___core__ropes__RopeByteReverseIterator___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___pos].l = p0; /* _pos on <self:RopeByteReverseIterator> */
RET_LABEL:;
}
/* method ropes$RopeByteReverseIterator$subs for (self: RopeByteReverseIterator): IndexedIterator[FlatString] */
val* core__ropes___core__ropes__RopeByteReverseIterator___subs(val* self) {
val* var /* : IndexedIterator[FlatString] */;
val* var1 /* : IndexedIterator[FlatString] */;
var1 = self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val; /* _subs on <self:RopeByteReverseIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 342);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteReverseIterator$subs= for (self: RopeByteReverseIterator, IndexedIterator[FlatString]) */
void core__ropes___core__ropes__RopeByteReverseIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeByteReverseIterator___subs].val = p0; /* _subs on <self:RopeByteReverseIterator> */
RET_LABEL:;
}
/* method ropes$RopeByteReverseIterator$from for (self: RopeByteReverseIterator, Concat, Int) */
void core__ropes___core__ropes__RopeByteReverseIterator___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : ReverseRopeSubstrings */;
val* var1 /* : IndexedIterator[FlatString] */;
val* var2 /* : nullable Object */;
val* var_s /* var s: FlatString */;
char* var3 /* : CString */;
val* var4 /* : IndexedIterator[FlatString] */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeByteReverseIterator>*/
}
var_root = p0;
var_pos = p1;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pos_61d]))(self, var_pos); /* pos= on <self:RopeByteReverseIterator>*/
}
var = NEW_core__ropes__ReverseRopeSubstrings(&type_core__ropes__ReverseRopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__from]))(var, var_root, var_pos); /* from on <var:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs_61d]))(self, var); /* subs= on <self:RopeByteReverseIterator>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs]))(self); /* subs on <self:RopeByteReverseIterator>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var1); /* item on <var1:IndexedIterator[FlatString]>*/
}
var_s = var2;
var3 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__ns_61d]))(self, var3); /* ns= on <self:RopeByteReverseIterator>*/
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs]))(self); /* subs on <self:RopeByteReverseIterator>*/
}
{
var5 = ((long(*)(val* self))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var4); /* index on <var4:IndexedIterator[FlatString]>*/
}
{
{ /* Inline kernel$Int$- (var_pos,var5) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var9 = var_pos - var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pns_61d]))(self, var6); /* pns= on <self:RopeByteReverseIterator>*/
}
RET_LABEL:;
}
/* method ropes$RopeByteReverseIterator$index for (self: RopeByteReverseIterator): Int */
long core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pos]))(self); /* pos on <self:RopeByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteReverseIterator$is_ok for (self: RopeByteReverseIterator): Bool */
short int core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pos]))(self); /* pos on <self:RopeByteReverseIterator>*/
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
/* method ropes$RopeByteReverseIterator$item for (self: RopeByteReverseIterator): Byte */
unsigned char core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : CString */;
long var2 /* : Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__ns]))(self); /* ns on <self:RopeByteReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pns]))(self); /* pns on <self:RopeByteReverseIterator>*/
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
/* method ropes$RopeByteReverseIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteReverseIterator$next for (self: RopeByteReverseIterator) */
void core__ropes___core__ropes__RopeByteReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeByteReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var_5 /* var : RopeByteReverseIterator */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : IndexedIterator[FlatString] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : IndexedIterator[FlatString] */;
val* var26 /* : IndexedIterator[FlatString] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : IndexedIterator[FlatString] */;
val* var30 /* : nullable Object */;
val* var_s /* var s: FlatString */;
char* var31 /* : CString */;
long var32 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pns]))(var_); /* pns on <var_:RopeByteReverseIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pns_61d]))(var_, var1); /* pns= on <var_:RopeByteReverseIterator>*/
}
var_5 = self;
{
var6 = ((long(*)(val* self))(var_5->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pos]))(var_5); /* pos on <var_5:RopeByteReverseIterator>*/
}
{
{ /* Inline kernel$Int$- (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var6 - 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_5->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pos_61d]))(var_5, var7); /* pos= on <var_5:RopeByteReverseIterator>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pns]))(self); /* pns on <self:RopeByteReverseIterator>*/
}
{
{ /* Inline kernel$Int$>= (var14,0l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var21 = var14 >= 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
goto RET_LABEL;
} else {
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs]))(self); /* subs on <self:RopeByteReverseIterator>*/
}
{
var23 = ((short int(*)(val* self))((((long)var22&3)?class_info[((long)var22&3)]:var22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var22); /* is_ok on <var22:IndexedIterator[FlatString]>*/
}
var24 = !var23;
if (var24){
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs]))(self); /* subs on <self:RopeByteReverseIterator>*/
}
{
((void(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var25); /* next on <var25:IndexedIterator[FlatString]>*/
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs]))(self); /* subs on <self:RopeByteReverseIterator>*/
}
{
var27 = ((short int(*)(val* self))((((long)var26&3)?class_info[((long)var26&3)]:var26->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var26); /* is_ok on <var26:IndexedIterator[FlatString]>*/
}
var28 = !var27;
if (var28){
goto RET_LABEL;
} else {
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__subs]))(self); /* subs on <self:RopeByteReverseIterator>*/
}
{
var30 = ((val*(*)(val* self))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var29); /* item on <var29:IndexedIterator[FlatString]>*/
}
var_s = var30;
var31 = var_s->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var_s:FlatString> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__ns_61d]))(self, var31); /* ns= on <self:RopeByteReverseIterator>*/
}
{
var32 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__flat__FlatText__last_byte]))(var_s); /* last_byte on <var_s:FlatString>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteReverseIterator__pns_61d]))(self, var32); /* pns= on <self:RopeByteReverseIterator>*/
}
RET_LABEL:;
}
/* method ropes$RopeByteIterator$pns for (self: RopeByteIterator): Int */
long core__ropes___core__ropes__RopeByteIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___pns].l; /* _pns on <self:RopeByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteIterator$pns= for (self: RopeByteIterator, Int) */
void core__ropes___core__ropes__RopeByteIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___pns].l = p0; /* _pns on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes$RopeByteIterator$ns for (self: RopeByteIterator): CString */
char* core__ropes___core__ropes__RopeByteIterator___ns(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___ns].str; /* _ns on <self:RopeByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteIterator$ns= for (self: RopeByteIterator, CString) */
void core__ropes___core__ropes__RopeByteIterator___ns_61d(val* self, char* p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___ns].str = p0; /* _ns on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes$RopeByteIterator$subs for (self: RopeByteIterator): IndexedIterator[FlatString] */
val* core__ropes___core__ropes__RopeByteIterator___subs(val* self) {
val* var /* : IndexedIterator[FlatString] */;
val* var1 /* : IndexedIterator[FlatString] */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val; /* _subs on <self:RopeByteIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 381);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteIterator$subs= for (self: RopeByteIterator, IndexedIterator[FlatString]) */
void core__ropes___core__ropes__RopeByteIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___subs].val = p0; /* _subs on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes$RopeByteIterator$max for (self: RopeByteIterator): Int */
long core__ropes___core__ropes__RopeByteIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___max].l; /* _max on <self:RopeByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteIterator$max= for (self: RopeByteIterator, Int) */
void core__ropes___core__ropes__RopeByteIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___max].l = p0; /* _max on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes$RopeByteIterator$pos for (self: RopeByteIterator): Int */
long core__ropes___core__ropes__RopeByteIterator___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeByteIterator___pos].l; /* _pos on <self:RopeByteIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteIterator$pos= for (self: RopeByteIterator, Int) */
void core__ropes___core__ropes__RopeByteIterator___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeByteIterator___pos].l = p0; /* _pos on <self:RopeByteIterator> */
RET_LABEL:;
}
/* method ropes$RopeByteIterator$from for (self: RopeByteIterator, Concat, Int) */
void core__ropes___core__ropes__RopeByteIterator___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : RopeSubstrings */;
val* var1 /* : IndexedIterator[FlatString] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : IndexedIterator[FlatString] */;
val* var8 /* : nullable Object */;
char* var9 /* : CString */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
long var17 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeByteIterator>*/
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeSubstrings(&type_core__ropes__RopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var->class->vft[COLOR_core__ropes__RopeSubstrings__from]))(var, var_root, var_pos); /* from on <var:RopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs_61d]))(self, var); /* subs= on <self:RopeByteIterator>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
var2 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var1); /* index on <var1:IndexedIterator[FlatString]>*/
}
{
{ /* Inline kernel$Int$- (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var_pos - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pns_61d]))(self, var3); /* pns= on <self:RopeByteIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pos_61d]))(self, var_pos); /* pos= on <self:RopeByteIterator>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
var8 = ((val*(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var7); /* item on <var7:IndexedIterator[FlatString]>*/
}
var9 = var8->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var8:nullable Object(FlatString)> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__ns_61d]))(self, var9); /* ns= on <self:RopeByteIterator>*/
}
{
var10 = ((long(*)(val* self))(var_root->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_root); /* byte_length on <var_root:Concat>*/
}
{
{ /* Inline kernel$Int$- (var10,1l) on <var10:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var17 = var10 - 1l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__max_61d]))(self, var11); /* max= on <self:RopeByteIterator>*/
}
RET_LABEL:;
}
/* method ropes$RopeByteIterator$item for (self: RopeByteIterator): Byte */
unsigned char core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__item(val* self) {
unsigned char var /* : Byte */;
char* var1 /* : CString */;
long var2 /* : Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__ns]))(self); /* ns on <self:RopeByteIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pns]))(self); /* pns on <self:RopeByteIterator>*/
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
/* method ropes$RopeByteIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__item(self);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteIterator$is_ok for (self: RopeByteIterator): Bool */
short int core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pos]))(self); /* pos on <self:RopeByteIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__max]))(self); /* max on <self:RopeByteIterator>*/
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
/* method ropes$RopeByteIterator$index for (self: RopeByteIterator): Int */
long core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pos]))(self); /* pos on <self:RopeByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeByteIterator$next for (self: RopeByteIterator) */
void core__ropes___core__ropes__RopeByteIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeByteIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var_5 /* var : RopeByteIterator */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
val* var15 /* : IndexedIterator[FlatString] */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
val* var25 /* : IndexedIterator[FlatString] */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : IndexedIterator[FlatString] */;
val* var29 /* : IndexedIterator[FlatString] */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : IndexedIterator[FlatString] */;
val* var33 /* : nullable Object */;
char* var34 /* : CString */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeByteIterator__pns]))(var_); /* pns on <var_:RopeByteIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__RopeByteIterator__pns_61d]))(var_, var1); /* pns= on <var_:RopeByteIterator>*/
}
var_5 = self;
{
var6 = ((long(*)(val* self))(var_5->class->vft[COLOR_core__ropes__RopeByteIterator__pos]))(var_5); /* pos on <var_5:RopeByteIterator>*/
}
{
{ /* Inline kernel$Int$+ (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var6 + 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_5->class->vft[COLOR_core__ropes__RopeByteIterator__pos_61d]))(var_5, var7); /* pos= on <var_5:RopeByteIterator>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pns]))(self); /* pns on <self:RopeByteIterator>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
var16 = ((val*(*)(val* self))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var15); /* item on <var15:IndexedIterator[FlatString]>*/
}
var17 = var16->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var16:nullable Object(FlatString)> */
{
{ /* Inline kernel$Int$< (var14,var17) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var24 = var14 < var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
var26 = ((short int(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var25); /* is_ok on <var25:IndexedIterator[FlatString]>*/
}
var27 = !var26;
if (var27){
goto RET_LABEL;
} else {
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
((void(*)(val* self))((((long)var28&3)?class_info[((long)var28&3)]:var28->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var28); /* next on <var28:IndexedIterator[FlatString]>*/
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
var30 = ((short int(*)(val* self))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var29); /* is_ok on <var29:IndexedIterator[FlatString]>*/
}
var31 = !var30;
if (var31){
goto RET_LABEL;
} else {
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeByteIterator__subs]))(self); /* subs on <self:RopeByteIterator>*/
}
{
var33 = ((val*(*)(val* self))((((long)var32&3)?class_info[((long)var32&3)]:var32->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var32); /* item on <var32:IndexedIterator[FlatString]>*/
}
var34 = var33->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <var33:nullable Object(FlatString)> */
{
((void(*)(val* self, char* p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__ns_61d]))(self, var34); /* ns= on <self:RopeByteIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeByteIterator__pns_61d]))(self, 0l); /* pns= on <self:RopeByteIterator>*/
}
RET_LABEL:;
}
/* method ropes$RopeCharReverseIterator$ns for (self: RopeCharReverseIterator): String */
val* core__ropes___core__ropes__RopeCharReverseIterator___ns(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val; /* _ns on <self:RopeCharReverseIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ns");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 419);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$ns= for (self: RopeCharReverseIterator, String) */
void core__ropes___core__ropes__RopeCharReverseIterator___ns_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___ns].val = p0; /* _ns on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharReverseIterator$pns for (self: RopeCharReverseIterator): Int */
long core__ropes___core__ropes__RopeCharReverseIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l; /* _pns on <self:RopeCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$pns= for (self: RopeCharReverseIterator, Int) */
void core__ropes___core__ropes__RopeCharReverseIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pns].l = p0; /* _pns on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharReverseIterator$pos for (self: RopeCharReverseIterator): Int */
long core__ropes___core__ropes__RopeCharReverseIterator___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l; /* _pos on <self:RopeCharReverseIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$pos= for (self: RopeCharReverseIterator, Int) */
void core__ropes___core__ropes__RopeCharReverseIterator___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___pos].l = p0; /* _pos on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharReverseIterator$subs for (self: RopeCharReverseIterator): IndexedIterator[String] */
val* core__ropes___core__ropes__RopeCharReverseIterator___subs(val* self) {
val* var /* : IndexedIterator[String] */;
val* var1 /* : IndexedIterator[String] */;
var1 = self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val; /* _subs on <self:RopeCharReverseIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 425);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$subs= for (self: RopeCharReverseIterator, IndexedIterator[String]) */
void core__ropes___core__ropes__RopeCharReverseIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharReverseIterator___subs].val = p0; /* _subs on <self:RopeCharReverseIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharReverseIterator$from for (self: RopeCharReverseIterator, Concat, Int) */
void core__ropes___core__ropes__RopeCharReverseIterator___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : ReverseRopeSubstrings */;
val* var1 /* : IndexedIterator[String] */;
val* var2 /* : nullable Object */;
val* var3 /* : IndexedIterator[String] */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeCharReverseIterator>*/
}
var_root = p0;
var_pos = p1;
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pos_61d]))(self, var_pos); /* pos= on <self:RopeCharReverseIterator>*/
}
var = NEW_core__ropes__ReverseRopeSubstrings(&type_core__ropes__ReverseRopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__from]))(var, var_root, var_pos); /* from on <var:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs_61d]))(self, var); /* subs= on <self:RopeCharReverseIterator>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs]))(self); /* subs on <self:RopeCharReverseIterator>*/
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var1); /* item on <var1:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__ns_61d]))(self, var2); /* ns= on <self:RopeCharReverseIterator>*/
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs]))(self); /* subs on <self:RopeCharReverseIterator>*/
}
{
var4 = ((long(*)(val* self))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var3); /* index on <var3:IndexedIterator[String]>*/
}
{
{ /* Inline kernel$Int$- (var_pos,var4) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var8 = var_pos - var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pns_61d]))(self, var5); /* pns= on <self:RopeCharReverseIterator>*/
}
RET_LABEL:;
}
/* method ropes$RopeCharReverseIterator$index for (self: RopeCharReverseIterator): Int */
long core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pos]))(self); /* pos on <self:RopeCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$is_ok for (self: RopeCharReverseIterator): Bool */
short int core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pos]))(self); /* pos on <self:RopeCharReverseIterator>*/
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
/* method ropes$RopeCharReverseIterator$item for (self: RopeCharReverseIterator): Char */
uint32_t core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : String */;
long var2 /* : Int */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__ns]))(self); /* ns on <self:RopeCharReverseIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pns]))(self); /* pns on <self:RopeCharReverseIterator>*/
}
{
var3 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var2); /* [] on <var1:String>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharReverseIterator$next for (self: RopeCharReverseIterator) */
void core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeCharReverseIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var_5 /* var : RopeCharReverseIterator */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
short int var21 /* : Bool */;
val* var22 /* : IndexedIterator[String] */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : IndexedIterator[String] */;
val* var26 /* : IndexedIterator[String] */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : IndexedIterator[String] */;
val* var30 /* : nullable Object */;
val* var31 /* : String */;
long var32 /* : Int */;
long var33 /* : Int */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
long var39 /* : Int */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pns]))(var_); /* pns on <var_:RopeCharReverseIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pns_61d]))(var_, var1); /* pns= on <var_:RopeCharReverseIterator>*/
}
var_5 = self;
{
var6 = ((long(*)(val* self))(var_5->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pos]))(var_5); /* pos on <var_5:RopeCharReverseIterator>*/
}
{
{ /* Inline kernel$Int$- (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var6 - 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_5->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pos_61d]))(var_5, var7); /* pos= on <var_5:RopeCharReverseIterator>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pns]))(self); /* pns on <self:RopeCharReverseIterator>*/
}
{
{ /* Inline kernel$Int$>= (var14,0l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var17 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var21 = var14 >= 0l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
goto RET_LABEL;
} else {
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs]))(self); /* subs on <self:RopeCharReverseIterator>*/
}
{
var23 = ((short int(*)(val* self))((((long)var22&3)?class_info[((long)var22&3)]:var22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var22); /* is_ok on <var22:IndexedIterator[String]>*/
}
var24 = !var23;
if (var24){
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs]))(self); /* subs on <self:RopeCharReverseIterator>*/
}
{
((void(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var25); /* next on <var25:IndexedIterator[String]>*/
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs]))(self); /* subs on <self:RopeCharReverseIterator>*/
}
{
var27 = ((short int(*)(val* self))((((long)var26&3)?class_info[((long)var26&3)]:var26->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var26); /* is_ok on <var26:IndexedIterator[String]>*/
}
var28 = !var27;
if (var28){
goto RET_LABEL;
} else {
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__subs]))(self); /* subs on <self:RopeCharReverseIterator>*/
}
{
var30 = ((val*(*)(val* self))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var29); /* item on <var29:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__ns_61d]))(self, var30); /* ns= on <self:RopeCharReverseIterator>*/
}
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__ns]))(self); /* ns on <self:RopeCharReverseIterator>*/
}
{
var32 = ((long(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__Text__length]))(var31); /* length on <var31:String>*/
}
{
{ /* Inline kernel$Int$- (var32,1l) on <var32:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var35 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var39 = var32 - 1l;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharReverseIterator__pns_61d]))(self, var33); /* pns= on <self:RopeCharReverseIterator>*/
}
RET_LABEL:;
}
/* method ropes$RopeCharIterator$pns for (self: RopeCharIterator): Int */
long core__ropes___core__ropes__RopeCharIterator___pns(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l; /* _pns on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$pns= for (self: RopeCharIterator, Int) */
void core__ropes___core__ropes__RopeCharIterator___pns_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___pns].l = p0; /* _pns on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharIterator$str for (self: RopeCharIterator): String */
val* core__ropes___core__ropes__RopeCharIterator___str(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___str].val; /* _str on <self:RopeCharIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 460);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$str= for (self: RopeCharIterator, String) */
void core__ropes___core__ropes__RopeCharIterator___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___str].val = p0; /* _str on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharIterator$subs for (self: RopeCharIterator): IndexedIterator[String] */
val* core__ropes___core__ropes__RopeCharIterator___subs(val* self) {
val* var /* : IndexedIterator[String] */;
val* var1 /* : IndexedIterator[String] */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val; /* _subs on <self:RopeCharIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 462);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$subs= for (self: RopeCharIterator, IndexedIterator[String]) */
void core__ropes___core__ropes__RopeCharIterator___subs_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___subs].val = p0; /* _subs on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharIterator$max for (self: RopeCharIterator): Int */
long core__ropes___core__ropes__RopeCharIterator___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___max].l; /* _max on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$max= for (self: RopeCharIterator, Int) */
void core__ropes___core__ropes__RopeCharIterator___max_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___max].l = p0; /* _max on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharIterator$pos for (self: RopeCharIterator): Int */
long core__ropes___core__ropes__RopeCharIterator___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l; /* _pos on <self:RopeCharIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$pos= for (self: RopeCharIterator, Int) */
void core__ropes___core__ropes__RopeCharIterator___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeCharIterator___pos].l = p0; /* _pos on <self:RopeCharIterator> */
RET_LABEL:;
}
/* method ropes$RopeCharIterator$from for (self: RopeCharIterator, Concat, Int) */
void core__ropes___core__ropes__RopeCharIterator___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : RopeSubstrings */;
val* var1 /* : IndexedIterator[String] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : IndexedIterator[String] */;
val* var8 /* : nullable Object */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeCharIterator>*/
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeSubstrings(&type_core__ropes__RopeSubstrings);
{
((void(*)(val* self, val* p0, long p1))(var->class->vft[COLOR_core__ropes__RopeSubstrings__from]))(var, var_root, var_pos); /* from on <var:RopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs_61d]))(self, var); /* subs= on <self:RopeCharIterator>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
var2 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var1); /* index on <var1:IndexedIterator[String]>*/
}
{
{ /* Inline kernel$Int$- (var_pos,var2) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var_pos - var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pns_61d]))(self, var3); /* pns= on <self:RopeCharIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pos_61d]))(self, var_pos); /* pos= on <self:RopeCharIterator>*/
}
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
var8 = ((val*(*)(val* self))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var7); /* item on <var7:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__str_61d]))(self, var8); /* str= on <self:RopeCharIterator>*/
}
{
var9 = ((long(*)(val* self))(var_root->class->vft[COLOR_core__abstract_text__Text__length]))(var_root); /* length on <var_root:Concat>*/
}
{
{ /* Inline kernel$Int$- (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var16 = var9 - 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__max_61d]))(self, var10); /* max= on <self:RopeCharIterator>*/
}
RET_LABEL:;
}
/* method ropes$RopeCharIterator$item for (self: RopeCharIterator): Char */
uint32_t core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item(val* self) {
uint32_t var /* : Char */;
val* var1 /* : String */;
long var2 /* : Int */;
uint32_t var3 /* : Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__str]))(self); /* str on <self:RopeCharIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pns]))(self); /* pns on <self:RopeCharIterator>*/
}
{
var3 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var2); /* [] on <var1:String>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$item for (self: Iterator[nullable Object]): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item(self);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$is_ok for (self: RopeCharIterator): Bool */
short int core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__is_ok(val* self) {
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
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pos]))(self); /* pos on <self:RopeCharIterator>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__max]))(self); /* max on <self:RopeCharIterator>*/
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
/* method ropes$RopeCharIterator$index for (self: RopeCharIterator): Int */
long core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pos]))(self); /* pos on <self:RopeCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeCharIterator$next for (self: RopeCharIterator) */
void core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeCharIterator */;
long var /* : Int */;
long var1 /* : Int */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var4 /* : Int */;
val* var_5 /* var : RopeCharIterator */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
val* var15 /* : IndexedIterator[String] */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
short int var24 /* : Bool */;
val* var25 /* : IndexedIterator[String] */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : IndexedIterator[String] */;
val* var29 /* : IndexedIterator[String] */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : IndexedIterator[String] */;
val* var33 /* : nullable Object */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeCharIterator__pns]))(var_); /* pns on <var_:RopeCharIterator>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__RopeCharIterator__pns_61d]))(var_, var1); /* pns= on <var_:RopeCharIterator>*/
}
var_5 = self;
{
var6 = ((long(*)(val* self))(var_5->class->vft[COLOR_core__ropes__RopeCharIterator__pos]))(var_5); /* pos on <var_5:RopeCharIterator>*/
}
{
{ /* Inline kernel$Int$+ (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var6 + 1l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_5->class->vft[COLOR_core__ropes__RopeCharIterator__pos_61d]))(var_5, var7); /* pos= on <var_5:RopeCharIterator>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pns]))(self); /* pns on <self:RopeCharIterator>*/
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
var16 = ((val*(*)(val* self))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var15); /* item on <var15:IndexedIterator[String]>*/
}
{
var17 = ((long(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__Text__length]))(var16); /* length on <var16:nullable Object(String)>*/
}
{
{ /* Inline kernel$Int$< (var14,var17) on <var14:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var20 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var24 = var14 < var17;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
goto RET_LABEL;
} else {
}
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
var26 = ((short int(*)(val* self))((((long)var25&3)?class_info[((long)var25&3)]:var25->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var25); /* is_ok on <var25:IndexedIterator[String]>*/
}
var27 = !var26;
if (var27){
goto RET_LABEL;
} else {
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
((void(*)(val* self))((((long)var28&3)?class_info[((long)var28&3)]:var28->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var28); /* next on <var28:IndexedIterator[String]>*/
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
var30 = ((short int(*)(val* self))((((long)var29&3)?class_info[((long)var29&3)]:var29->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var29); /* is_ok on <var29:IndexedIterator[String]>*/
}
var31 = !var30;
if (var31){
goto RET_LABEL;
} else {
}
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeCharIterator__subs]))(self); /* subs on <self:RopeCharIterator>*/
}
{
var33 = ((val*(*)(val* self))((((long)var32&3)?class_info[((long)var32&3)]:var32->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var32); /* item on <var32:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__str_61d]))(self, var33); /* str= on <self:RopeCharIterator>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeCharIterator__pns_61d]))(self, 0l); /* pns= on <self:RopeCharIterator>*/
}
RET_LABEL:;
}
/* method ropes$ReverseRopeSubstrings$iter for (self: ReverseRopeSubstrings): RopeCharIteratorPiece */
val* core__ropes___core__ropes__ReverseRopeSubstrings___iter(val* self) {
val* var /* : RopeCharIteratorPiece */;
val* var1 /* : RopeCharIteratorPiece */;
var1 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val; /* _iter on <self:ReverseRopeSubstrings> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 499);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$ReverseRopeSubstrings$iter= for (self: ReverseRopeSubstrings, RopeCharIteratorPiece) */
void core__ropes___core__ropes__ReverseRopeSubstrings___iter_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___iter].val = p0; /* _iter on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes$ReverseRopeSubstrings$pos for (self: ReverseRopeSubstrings): Int */
long core__ropes___core__ropes__ReverseRopeSubstrings___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l; /* _pos on <self:ReverseRopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$ReverseRopeSubstrings$pos= for (self: ReverseRopeSubstrings, Int) */
void core__ropes___core__ropes__ReverseRopeSubstrings___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___pos].l = p0; /* _pos on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes$ReverseRopeSubstrings$str for (self: ReverseRopeSubstrings): FlatString */
val* core__ropes___core__ropes__ReverseRopeSubstrings___str(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val; /* _str on <self:ReverseRopeSubstrings> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 504);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$ReverseRopeSubstrings$str= for (self: ReverseRopeSubstrings, FlatString) */
void core__ropes___core__ropes__ReverseRopeSubstrings___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__ReverseRopeSubstrings___str].val = p0; /* _str on <self:ReverseRopeSubstrings> */
RET_LABEL:;
}
/* method ropes$ReverseRopeSubstrings$from for (self: ReverseRopeSubstrings, Concat, Int) */
void core__ropes___core__ropes__ReverseRopeSubstrings___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : RopeCharIteratorPiece */;
val* var_r /* var r: RopeCharIteratorPiece */;
val* var_rnod /* var rnod: String */;
long var_off /* var off: Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : String */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : String */;
val* var20 /* : RopeCharIteratorPiece */;
val* var21 /* : String */;
val* var22 /* : RopeCharIteratorPiece */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:ReverseRopeSubstrings>*/
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var, var_root); /* node= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var, 0); /* ldone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var, 1); /* rdone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:RopeCharIteratorPiece>*/
}
var_r = var;
var_rnod = var_root;
var_off = var_pos;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype = type_core__ropes__Concat.color;
idtype = type_core__ropes__Concat.id;
if(cltype >= var_rnod->type->table_size) {
var1 = 0;
} else {
var1 = var_rnod->type->type_table[cltype] == idtype;
}
if (var1){
var2 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 513);
fatal_exit(1);
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__length]))(var2); /* length on <var2:String>*/
}
{
{ /* Inline kernel$Int$>= (var_off,var3) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var9 = var_off >= var3;
var4 = var9;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var10 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 514);
fatal_exit(1);
}
{
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__Text__length]))(var10); /* length on <var10:String>*/
}
{
{ /* Inline kernel$Int$- (var_off,var11) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var18 = var_off - var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_off = var12;
var19 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 515);
fatal_exit(1);
}
var_rnod = var19;
var20 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var20, var_rnod); /* node= on <var20:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var20->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var20, 0); /* ldone= on <var20:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var20->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var20, 1); /* rdone= on <var20:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var20, var_r); /* prev= on <var20:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__init]))(var20); /* init on <var20:RopeCharIteratorPiece>*/
}
var_r = var20;
} else {
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var_r, 1); /* ldone= on <var_r:RopeCharIteratorPiece>*/
}
var21 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 519);
fatal_exit(1);
}
var_rnod = var21;
var22 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var22, var_rnod); /* node= on <var22:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var22->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var22, 0); /* ldone= on <var22:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var22->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var22, 1); /* rdone= on <var22:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var22, var_r); /* prev= on <var22:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:RopeCharIteratorPiece>*/
}
var_r = var22;
}
} else {
/* <var_rnod:String> isa FlatString */
cltype24 = type_core__FlatString.color;
idtype25 = type_core__FlatString.id;
if(cltype24 >= var_rnod->type->table_size) {
var23 = 0;
} else {
var23 = var_rnod->type->type_table[cltype24] == idtype25;
}
if (unlikely(!var23)) {
var_class_name26 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 523);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__str_61d]))(self, var_rnod); /* str= on <self:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var_r, 1); /* ldone= on <var_r:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__iter_61d]))(self, var_r); /* iter= on <self:ReverseRopeSubstrings>*/
}
{
{ /* Inline kernel$Int$- (var_pos,var_off) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_off:Int> isa OTHER */
/* <var_off:Int> isa OTHER */
var29 = 1; /* easy <var_off:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var33 = var_pos - var_off;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos_61d]))(self, var27); /* pos= on <self:ReverseRopeSubstrings>*/
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes$ReverseRopeSubstrings$item for (self: ReverseRopeSubstrings): FlatString */
val* core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__str]))(self); /* str on <self:ReverseRopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$ReverseRopeSubstrings$index for (self: ReverseRopeSubstrings): Int */
long core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos]))(self); /* pos on <self:ReverseRopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$ReverseRopeSubstrings$is_ok for (self: ReverseRopeSubstrings): Bool */
short int core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos]))(self); /* pos on <self:ReverseRopeSubstrings>*/
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
/* method ropes$ReverseRopeSubstrings$next for (self: ReverseRopeSubstrings) */
void core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__next(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : RopeCharIteratorPiece */;
val* var6 /* : nullable RopeCharIteratorPiece */;
val* var_curr /* var curr: nullable RopeCharIteratorPiece */;
val* var7 /* : String */;
val* var_currit /* var currit: String */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : String */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
val* var_ /* var : ReverseRopeSubstrings */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : RopeCharIteratorPiece */;
val* var32 /* : String */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : RopeCharIteratorPiece */;
val* var36 /* : String */;
val* var37 /* : nullable RopeCharIteratorPiece */;
long var39 /* : Int */;
long var41 /* : Int */;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos]))(self); /* pos on <self:ReverseRopeSubstrings>*/
}
{
{ /* Inline kernel$Int$< (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = var < 0l;
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
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__iter]))(self); /* iter on <self:ReverseRopeSubstrings>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev]))(var5); /* prev on <var5:RopeCharIteratorPiece>*/
}
var_curr = var6;
if (unlikely(var_curr == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 541);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node]))(var_curr); /* node on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var_currit = var7;
for(;;) {
if (var_curr == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_curr->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_curr, ((val*)NULL)); /* != on <var_curr:nullable RopeCharIteratorPiece>*/
var8 = var9;
}
if (var8){
{
var10 = ((val*(*)(val* self))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node]))(var_curr); /* node on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var_currit = var10;
/* <var_currit:String> isa Concat */
cltype12 = type_core__ropes__Concat.color;
idtype13 = type_core__ropes__Concat.id;
if(cltype12 >= var_currit->type->table_size) {
var11 = 0;
} else {
var11 = var_currit->type->type_table[cltype12] == idtype13;
}
var14 = !var11;
if (var14){
/* <var_currit:String> isa FlatString */
cltype16 = type_core__FlatString.color;
idtype17 = type_core__FlatString.id;
if(cltype16 >= var_currit->type->table_size) {
var15 = 0;
} else {
var15 = var_currit->type->type_table[cltype16] == idtype17;
}
if (unlikely(!var15)) {
var_class_name18 = var_currit == NULL ? "null" : var_currit->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 545);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__str_61d]))(self, var_currit); /* str= on <self:ReverseRopeSubstrings>*/
}
var_ = self;
{
var19 = ((long(*)(val* self))(var_->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos]))(var_); /* pos on <var_:ReverseRopeSubstrings>*/
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__str]))(self); /* str on <self:ReverseRopeSubstrings>*/
}
{
var21 = ((long(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__Text__length]))(var20); /* length on <var20:FlatString>*/
}
{
{ /* Inline kernel$Int$- (var19,var21) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var28 = var19 - var21;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos_61d]))(var_, var22); /* pos= on <var_:ReverseRopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__iter_61d]))(self, var_curr); /* iter= on <self:ReverseRopeSubstrings>*/
}
goto RET_LABEL;
} else {
}
{
var29 = ((short int(*)(val* self))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone]))(var_curr); /* rdone on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var30 = !var29;
if (var30){
{
((void(*)(val* self, short int p0))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var_curr, 1); /* rdone= on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var31 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var32 = var_currit->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_currit:String(Concat)> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 552);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var31, var32); /* node= on <var31:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var31->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var31, 0); /* ldone= on <var31:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var31->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var31, 0); /* rdone= on <var31:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var31, var_curr); /* prev= on <var31:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var31->class->vft[COLOR_core__kernel__Object__init]))(var31); /* init on <var31:RopeCharIteratorPiece>*/
}
var_curr = var31;
goto BREAK_label;
} else {
}
{
var33 = ((short int(*)(val* self))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone]))(var_curr); /* ldone on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var34 = !var33;
if (var34){
{
((void(*)(val* self, short int p0))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var_curr, 1); /* ldone= on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var35 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
var36 = var_currit->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_currit:String(Concat)> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 557);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var35, var36); /* node= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var35, 0); /* ldone= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var35, 0); /* rdone= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var35, var_curr); /* prev= on <var35:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var35->class->vft[COLOR_core__kernel__Object__init]))(var35); /* init on <var35:RopeCharIteratorPiece>*/
}
var_curr = var35;
goto BREAK_label;
} else {
}
{
var37 = ((val*(*)(val* self))(var_curr->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev]))(var_curr); /* prev on <var_curr:nullable RopeCharIteratorPiece(RopeCharIteratorPiece)>*/
}
var_curr = var37;
} else {
goto BREAK_label38;
}
BREAK_label: (void)0;
}
BREAK_label38: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var41 = -1l;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__ReverseRopeSubstrings__pos_61d]))(self, var39); /* pos= on <self:ReverseRopeSubstrings>*/
}
RET_LABEL:;
}
/* method ropes$RopeSubstrings$iter for (self: RopeSubstrings): RopeCharIteratorPiece */
val* core__ropes___core__ropes__RopeSubstrings___iter(val* self) {
val* var /* : RopeCharIteratorPiece */;
val* var1 /* : RopeCharIteratorPiece */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val; /* _iter on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 570);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeSubstrings$iter= for (self: RopeSubstrings, RopeCharIteratorPiece) */
void core__ropes___core__ropes__RopeSubstrings___iter_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___iter].val = p0; /* _iter on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes$RopeSubstrings$pos for (self: RopeSubstrings): Int */
long core__ropes___core__ropes__RopeSubstrings___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l; /* _pos on <self:RopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeSubstrings$pos= for (self: RopeSubstrings, Int) */
void core__ropes___core__ropes__RopeSubstrings___pos_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___pos].l = p0; /* _pos on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes$RopeSubstrings$max for (self: RopeSubstrings): Int */
long core__ropes___core__ropes__RopeSubstrings___max(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___max].l; /* _max on <self:RopeSubstrings> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeSubstrings$max= for (self: RopeSubstrings, Int) */
void core__ropes___core__ropes__RopeSubstrings___max_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___max].l = p0; /* _max on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes$RopeSubstrings$str for (self: RopeSubstrings): FlatString */
val* core__ropes___core__ropes__RopeSubstrings___str(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__RopeSubstrings___str].val; /* _str on <self:RopeSubstrings> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _str");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 577);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeSubstrings$str= for (self: RopeSubstrings, FlatString) */
void core__ropes___core__ropes__RopeSubstrings___str_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeSubstrings___str].val = p0; /* _str on <self:RopeSubstrings> */
RET_LABEL:;
}
/* method ropes$RopeSubstrings$from for (self: RopeSubstrings, Concat, Int) */
void core__ropes___core__ropes__RopeSubstrings___from(val* self, val* p0, long p1) {
val* var_root /* var root: Concat */;
long var_pos /* var pos: Int */;
val* var /* : RopeCharIteratorPiece */;
val* var_r /* var r: RopeCharIteratorPiece */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
val* var_rnod /* var rnod: String */;
long var_off /* var off: Int */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : String */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
val* var18 /* : String */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : RopeCharIteratorPiece */;
val* var29 /* : String */;
val* var30 /* : RopeCharIteratorPiece */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:RopeSubstrings>*/
}
var_root = p0;
var_pos = p1;
var = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var, var_root); /* node= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var, 1); /* ldone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var, 0); /* rdone= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var, ((val*)NULL)); /* prev= on <var:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:RopeCharIteratorPiece>*/
}
var_r = var;
{
var1 = ((long(*)(val* self))(var_root->class->vft[COLOR_core__abstract_text__Text__length]))(var_root); /* length on <var_root:Concat>*/
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
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeSubstrings__max_61d]))(self, var2); /* max= on <self:RopeSubstrings>*/
}
var_rnod = var_root;
var_off = var_pos;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype7 = type_core__ropes__Concat.color;
idtype8 = type_core__ropes__Concat.id;
if(cltype7 >= var_rnod->type->table_size) {
var6 = 0;
} else {
var6 = var_rnod->type->type_table[cltype7] == idtype8;
}
if (var6){
var9 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 587);
fatal_exit(1);
}
{
var10 = ((long(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__Text__length]))(var9); /* length on <var9:String>*/
}
{
{ /* Inline kernel$Int$>= (var_off,var10) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var17 = var_off >= var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var_r, 1); /* rdone= on <var_r:RopeCharIteratorPiece>*/
}
var18 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 589);
fatal_exit(1);
}
{
var19 = ((long(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__Text__length]))(var18); /* length on <var18:String>*/
}
{
{ /* Inline kernel$Int$- (var_off,var19) on <var_off:Int> */
/* Covariant cast for argument 0 (i) <var19:Int> isa OTHER */
/* <var19:Int> isa OTHER */
var22 = 1; /* easy <var19:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var26 = var_off - var19;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_off = var20;
var27 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 590);
fatal_exit(1);
}
var_rnod = var27;
var28 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var28, var_rnod); /* node= on <var28:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var28->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var28, 1); /* ldone= on <var28:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var28->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var28, 0); /* rdone= on <var28:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var28, var_r); /* prev= on <var28:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var28->class->vft[COLOR_core__kernel__Object__init]))(var28); /* init on <var28:RopeCharIteratorPiece>*/
}
var_r = var28;
} else {
var29 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 593);
fatal_exit(1);
}
var_rnod = var29;
var30 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var30, var_rnod); /* node= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var30, 1); /* ldone= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var30, 0); /* rdone= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var30, var_r); /* prev= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:RopeCharIteratorPiece>*/
}
var_r = var30;
}
} else {
/* <var_rnod:String> isa FlatString */
cltype32 = type_core__FlatString.color;
idtype33 = type_core__FlatString.id;
if(cltype32 >= var_rnod->type->table_size) {
var31 = 0;
} else {
var31 = var_rnod->type->type_table[cltype32] == idtype33;
}
if (unlikely(!var31)) {
var_class_name34 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 597);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeSubstrings__str_61d]))(self, var_rnod); /* str= on <self:RopeSubstrings>*/
}
{
((void(*)(val* self, short int p0))(var_r->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var_r, 1); /* rdone= on <var_r:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeSubstrings__iter_61d]))(self, var_r); /* iter= on <self:RopeSubstrings>*/
}
{
{ /* Inline kernel$Int$- (var_pos,var_off) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_off:Int> isa OTHER */
/* <var_off:Int> isa OTHER */
var37 = 1; /* easy <var_off:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var41 = var_pos - var_off;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeSubstrings__pos_61d]))(self, var35); /* pos= on <self:RopeSubstrings>*/
}
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes$RopeSubstrings$item for (self: RopeSubstrings): FlatString */
val* core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__item(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__str]))(self); /* str on <self:RopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeSubstrings$is_ok for (self: RopeSubstrings): Bool */
short int core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__is_ok(val* self) {
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
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__pos]))(self); /* pos on <self:RopeSubstrings>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__max]))(self); /* max on <self:RopeSubstrings>*/
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
/* method ropes$RopeSubstrings$index for (self: RopeSubstrings): Int */
long core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__pos]))(self); /* pos on <self:RopeSubstrings>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeSubstrings$next for (self: RopeSubstrings) */
void core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__next(val* self) {
val* var_ /* var : RopeSubstrings */;
long var /* : Int */;
val* var1 /* : FlatString */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : RopeCharIteratorPiece */;
val* var17 /* : nullable RopeCharIteratorPiece */;
val* var_it /* var it: RopeCharIteratorPiece */;
val* var18 /* : String */;
val* var_rnod /* var rnod: String */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : String */;
val* var30 /* : RopeCharIteratorPiece */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : String */;
val* var34 /* : RopeCharIteratorPiece */;
val* var35 /* : nullable RopeCharIteratorPiece */;
val* var36 /* : String */;
var_ = self;
{
var = ((long(*)(val* self))(var_->class->vft[COLOR_core__ropes__RopeSubstrings__pos]))(var_); /* pos on <var_:RopeSubstrings>*/
}
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__str]))(self); /* str on <self:RopeSubstrings>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:FlatString>*/
}
{
{ /* Inline kernel$Int$+ (var,var2) on <var:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var + var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__ropes__RopeSubstrings__pos_61d]))(var_, var3); /* pos= on <var_:RopeSubstrings>*/
}
{
var7 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__pos]))(self); /* pos on <self:RopeSubstrings>*/
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__max]))(self); /* max on <self:RopeSubstrings>*/
}
{
{ /* Inline kernel$Int$> (var7,var8) on <var7:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var15 = var7 > var8;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_core__ropes__RopeSubstrings__iter]))(self); /* iter on <self:RopeSubstrings>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev]))(var16); /* prev on <var16:RopeCharIteratorPiece>*/
}
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 615);
fatal_exit(1);
}
var_it = var17;
{
var18 = ((val*(*)(val* self))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node]))(var_it); /* node on <var_it:RopeCharIteratorPiece>*/
}
var_rnod = var18;
for(;;) {
/* <var_rnod:String> isa Concat */
cltype20 = type_core__ropes__Concat.color;
idtype21 = type_core__ropes__Concat.id;
if(cltype20 >= var_rnod->type->table_size) {
var19 = 0;
} else {
var19 = var_rnod->type->type_table[cltype20] == idtype21;
}
var22 = !var19;
if (var22){
{
((void(*)(val* self, short int p0))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var_it, 1); /* ldone= on <var_it:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var_it, 1); /* rdone= on <var_it:RopeCharIteratorPiece>*/
}
/* <var_rnod:String> isa FlatString */
cltype24 = type_core__FlatString.color;
idtype25 = type_core__FlatString.id;
if(cltype24 >= var_rnod->type->table_size) {
var23 = 0;
} else {
var23 = var_rnod->type->type_table[cltype24] == idtype25;
}
if (unlikely(!var23)) {
var_class_name26 = var_rnod == NULL ? "null" : var_rnod->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "FlatString", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 621);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeSubstrings__str_61d]))(self, var_rnod); /* str= on <self:RopeSubstrings>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__ropes__RopeSubstrings__iter_61d]))(self, var_it); /* iter= on <self:RopeSubstrings>*/
}
goto BREAK_label;
} else {
}
{
var27 = ((short int(*)(val* self))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone]))(var_it); /* ldone on <var_it:RopeCharIteratorPiece>*/
}
var28 = !var27;
if (var28){
var29 = var_rnod->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_rnod:String(Concat)> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 626);
fatal_exit(1);
}
var_rnod = var29;
{
((void(*)(val* self, short int p0))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var_it, 1); /* ldone= on <var_it:RopeCharIteratorPiece>*/
}
var30 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var30, var_rnod); /* node= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var30, 0); /* ldone= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var30, 0); /* rdone= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var30, var_it); /* prev= on <var30:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:RopeCharIteratorPiece>*/
}
var_it = var30;
} else {
{
var31 = ((short int(*)(val* self))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone]))(var_it); /* rdone on <var_it:RopeCharIteratorPiece>*/
}
var32 = !var31;
if (var32){
{
((void(*)(val* self, short int p0))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var_it, 1); /* rdone= on <var_it:RopeCharIteratorPiece>*/
}
var33 = var_rnod->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_rnod:String(Concat)> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 631);
fatal_exit(1);
}
var_rnod = var33;
var34 = NEW_core__ropes__RopeCharIteratorPiece(&type_core__ropes__RopeCharIteratorPiece);
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node_61d]))(var34, var_rnod); /* node= on <var34:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var34->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__ldone_61d]))(var34, 0); /* ldone= on <var34:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, short int p0))(var34->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__rdone_61d]))(var34, 0); /* rdone= on <var34:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev_61d]))(var34, var_it); /* prev= on <var34:RopeCharIteratorPiece>*/
}
{
((void(*)(val* self))(var34->class->vft[COLOR_core__kernel__Object__init]))(var34); /* init on <var34:RopeCharIteratorPiece>*/
}
var_it = var34;
} else {
{
var35 = ((val*(*)(val* self))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__prev]))(var_it); /* prev on <var_it:RopeCharIteratorPiece>*/
}
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 634);
fatal_exit(1);
}
var_it = var35;
{
var36 = ((val*(*)(val* self))(var_it->class->vft[COLOR_core__ropes__RopeCharIteratorPiece__node]))(var_it); /* node on <var_it:RopeCharIteratorPiece>*/
}
var_rnod = var36;
goto BREAK_label37;
}
}
BREAK_label37: (void)0;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method ropes$RopeChars$[] for (self: RopeChars, Int): Char */
uint32_t core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
uint32_t var /* : Char */;
long var_i /* var i: Int */;
val* var1 /* : Text */;
uint32_t var2 /* : Char */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:RopeChars>*/
}
{
var2 = ((uint32_t(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var1, var_i); /* [] on <var1:Text(Concat)>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeChars$[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
uint32_t var1 /* : Char */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = (val*)((long)(var1)<<2|2);
var = var2;
RET_LABEL:;
return var;
}
/* method ropes$RopeChars$iterator_from for (self: RopeChars, Int): IndexedIterator[Char] */
val* core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeCharIterator */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeCharIterator(&type_core__ropes__RopeCharIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:RopeChars>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeCharIterator__from]))(var1, var2, var_i); /* from on <var1:RopeCharIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeChars$reverse_iterator_from for (self: RopeChars, Int): IndexedIterator[Char] */
val* core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Char] */;
long var_i /* var i: Int */;
val* var1 /* : RopeCharReverseIterator */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeCharReverseIterator(&type_core__ropes__RopeCharReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringCharView__target]))(self); /* target on <self:RopeChars>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeCharReverseIterator__from]))(var1, var2, var_i); /* from on <var1:RopeCharReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeBytes$cache for (self: RopeBytes): FlatString */
val* core__ropes___core__ropes__RopeBytes___cache(val* self) {
val* var /* : FlatString */;
val* var1 /* : FlatString */;
var1 = self->attrs[COLOR_core__ropes__RopeBytes___cache].val; /* _cache on <self:RopeBytes> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 664);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeBytes$cache= for (self: RopeBytes, FlatString) */
void core__ropes___core__ropes__RopeBytes___cache_61d(val* self, val* p0) {
self->attrs[COLOR_core__ropes__RopeBytes___cache].val = p0; /* _cache on <self:RopeBytes> */
RET_LABEL:;
}
/* method ropes$RopeBytes$cache_start for (self: RopeBytes): Int */
long core__ropes___core__ropes__RopeBytes___cache_start(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBytes___cache_start].l; /* _cache_start on <self:RopeBytes> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeBytes$cache_start= for (self: RopeBytes, Int) */
void core__ropes___core__ropes__RopeBytes___cache_start_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBytes___cache_start].l = p0; /* _cache_start on <self:RopeBytes> */
RET_LABEL:;
}
/* method ropes$RopeBytes$cache_end for (self: RopeBytes): Int */
long core__ropes___core__ropes__RopeBytes___cache_end(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__ropes__RopeBytes___cache_end].l; /* _cache_end on <self:RopeBytes> */
var = var1;
RET_LABEL:;
return var;
}
/* method ropes$RopeBytes$cache_end= for (self: RopeBytes, Int) */
void core__ropes___core__ropes__RopeBytes___cache_end_61d(val* self, long p0) {
self->attrs[COLOR_core__ropes__RopeBytes___cache_end].l = p0; /* _cache_end on <self:RopeBytes> */
RET_LABEL:;
}
/* method ropes$RopeBytes$[] for (self: RopeBytes, Int): Byte */
unsigned char core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
unsigned char var /* : Byte */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
val* var6 /* : Text */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
long var15 /* : Int */;
long var_flps /* var flps: Int */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
val* var33 /* : FlatString */;
val* var34 /* : SequenceRead[Byte] */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
val* var42 /* : nullable Object */;
unsigned char var43 /* : Byte */;
val* var44 /* : FlatString */;
val* var_lf /* var lf: FlatString */;
val* var45 /* : SequenceRead[Byte] */;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
val* var54 /* : nullable Object */;
unsigned char var55 /* : Byte */;
var_i = p0;
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var_i >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBytes>*/
}
var7 = var6->attrs[COLOR_core__ropes__Concat___byte_length].l; /* _byte_length on <var6:Text(Concat)> */
{
{ /* Inline kernel$Int$< (var_i,var7) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_i < var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var1 = var8;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 671);
fatal_exit(1);
}
var15 = self->attrs[COLOR_core__ropes__RopeBytes___cache_start].l; /* _cache_start on <self:RopeBytes> */
var_flps = var15;
{
{ /* Inline kernel$Int$>= (var_i,var_flps) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var19 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var23 = var_i >= var_flps;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_24 = var17;
if (var17){
var25 = self->attrs[COLOR_core__ropes__RopeBytes___cache_end].l; /* _cache_end on <self:RopeBytes> */
{
{ /* Inline kernel$Int$<= (var_i,var25) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var25:Int> isa OTHER */
/* <var25:Int> isa OTHER */
var28 = 1; /* easy <var25:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var32 = var_i <= var25;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var16 = var26;
} else {
var16 = var_24;
}
if (var16){
var33 = self->attrs[COLOR_core__ropes__RopeBytes___cache].val; /* _cache on <self:RopeBytes> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 674);
fatal_exit(1);
}
{
var34 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__Text__bytes]))(var33); /* bytes on <var33:FlatString>*/
}
{
{ /* Inline kernel$Int$- (var_i,var_flps) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var37 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var41 = var_i - var_flps;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
var42 = ((val*(*)(val* self, long p0))((((long)var34&3)?class_info[((long)var34&3)]:var34->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var34, var35); /* [] on <var34:SequenceRead[Byte]>*/
}
var43 = ((struct instance_core__Byte*)var42)->value; /* autounbox from nullable Object to Byte */;
var = var43;
goto RET_LABEL;
} else {
}
{
var44 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__ropes__RopeBytes__get_leaf_at]))(self, var_i); /* get_leaf_at on <self:RopeBytes>*/
}
var_lf = var44;
{
var45 = ((val*(*)(val* self))(var_lf->class->vft[COLOR_core__abstract_text__Text__bytes]))(var_lf); /* bytes on <var_lf:FlatString>*/
}
var46 = self->attrs[COLOR_core__ropes__RopeBytes___cache_start].l; /* _cache_start on <self:RopeBytes> */
{
{ /* Inline kernel$Int$- (var_i,var46) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var46:Int> isa OTHER */
/* <var46:Int> isa OTHER */
var49 = 1; /* easy <var46:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var53 = var_i - var46;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
var54 = ((val*(*)(val* self, long p0))((((long)var45&3)?class_info[((long)var45&3)]:var45->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var45, var47); /* [] on <var45:SequenceRead[Byte]>*/
}
var55 = ((struct instance_core__Byte*)var54)->value; /* autounbox from nullable Object to Byte */;
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeBytes$[] for (self: SequenceRead[nullable Object], Int): nullable Object */
val* VIRTUAL_core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
unsigned char var1 /* : Byte */;
val* var2 /* : nullable Object */;
var1 = core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead___91d_93d(self, p0);
var2 = BOX_core__Byte(var1); /* autobox from Byte to nullable Object */
var = var2;
RET_LABEL:;
return var;
}
/* method ropes$RopeBytes$get_leaf_at for (self: RopeBytes, Int): FlatString */
val* core__ropes___core__ropes__RopeBytes___get_leaf_at(val* self, long p0) {
val* var /* : FlatString */;
long var_pos /* var pos: Int */;
long var1 /* : Int */;
long var_flps /* var flps: Int */;
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
val* var15 /* : FlatString */;
val* var16 /* : Text */;
val* var_s /* var s: String */;
long var_st /* var st: Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
val* var24 /* : String */;
val* var_lft /* var lft: String */;
long var25 /* : Int */;
long var_llen /* var llen: Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
short int var32 /* : Bool */;
val* var33 /* : String */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
long var47 /* : Int */;
long var48 /* : Int */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
long var54 /* : Int */;
long var55 /* : Int */;
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
var_pos = p0;
var1 = self->attrs[COLOR_core__ropes__RopeBytes___cache_start].l; /* _cache_start on <self:RopeBytes> */
var_flps = var1;
{
{ /* Inline kernel$Int$>= (var_pos,var_flps) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_flps:Int> isa OTHER */
/* <var_flps:Int> isa OTHER */
var5 = 1; /* easy <var_flps:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var6 = var_pos >= var_flps;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
var7 = self->attrs[COLOR_core__ropes__RopeBytes___cache_end].l; /* _cache_end on <self:RopeBytes> */
{
{ /* Inline kernel$Int$<= (var_pos,var7) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var14 = var_pos <= var7;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var2 = var8;
} else {
var2 = var_;
}
if (var2){
var15 = self->attrs[COLOR_core__ropes__RopeBytes___cache].val; /* _cache on <self:RopeBytes> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 683);
fatal_exit(1);
}
var = var15;
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBytes>*/
}
var_s = var16;
var_st = var_pos;
for(;;) {
/* <var_s:String> isa FlatString */
cltype18 = type_core__FlatString.color;
idtype19 = type_core__FlatString.id;
if(cltype18 >= var_s->type->table_size) {
var17 = 0;
} else {
var17 = var_s->type->type_table[cltype18] == idtype19;
}
if (var17){
goto BREAK_label;
} else {
}
/* <var_s:String> isa Concat */
cltype21 = type_core__ropes__Concat.color;
idtype22 = type_core__ropes__Concat.id;
if(cltype21 >= var_s->type->table_size) {
var20 = 0;
} else {
var20 = var_s->type->type_table[cltype21] == idtype22;
}
if (unlikely(!var20)) {
var_class_name23 = var_s == NULL ? "null" : var_s->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Concat", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 689);
fatal_exit(1);
}
var_s = var_s;
var24 = var_s->attrs[COLOR_core__ropes__Concat___left].val; /* _left on <var_s:String(Concat)> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _left");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 690);
fatal_exit(1);
}
var_lft = var24;
{
var25 = ((long(*)(val* self))(var_lft->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_lft); /* byte_length on <var_lft:String>*/
}
var_llen = var25;
{
{ /* Inline kernel$Int$>= (var_pos,var_llen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var28 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var32 = var_pos >= var_llen;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
var33 = var_s->attrs[COLOR_core__ropes__Concat___right].val; /* _right on <var_s:String(Concat)> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _right");
PRINT_ERROR(" (%s:%d)\n", FILE_core__ropes, 693);
fatal_exit(1);
}
var_s = var33;
{
{ /* Inline kernel$Int$- (var_pos,var_llen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_llen:Int> isa OTHER */
/* <var_llen:Int> isa OTHER */
var36 = 1; /* easy <var_llen:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var40 = var_pos - var_llen;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var_pos = var34;
} else {
var_s = var_lft;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$- (var_st,var_pos) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var43 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var47 = var_st - var_pos;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
self->attrs[COLOR_core__ropes__RopeBytes___cache_start].l = var41; /* _cache_start on <self:RopeBytes> */
{
{ /* Inline kernel$Int$- (var_st,var_pos) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var50 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var54 = var_st - var_pos;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
{
var55 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_s); /* byte_length on <var_s:String(FlatString)>*/
}
{
{ /* Inline kernel$Int$+ (var48,var55) on <var48:Int> */
/* Covariant cast for argument 0 (i) <var55:Int> isa OTHER */
/* <var55:Int> isa OTHER */
var58 = 1; /* easy <var55:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var62 = var48 + var55;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var56,1l) on <var56:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var69 = var56 - 1l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
self->attrs[COLOR_core__ropes__RopeBytes___cache_end].l = var63; /* _cache_end on <self:RopeBytes> */
self->attrs[COLOR_core__ropes__RopeBytes___cache].val = var_s; /* _cache on <self:RopeBytes> */
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeBytes$iterator_from for (self: RopeBytes, Int): IndexedIterator[Byte] */
val* core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead__iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_i /* var i: Int */;
val* var1 /* : RopeByteIterator */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeByteIterator(&type_core__ropes__RopeByteIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBytes>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeByteIterator__from]))(var1, var2, var_i); /* from on <var1:RopeByteIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$RopeBytes$reverse_iterator_from for (self: RopeBytes, Int): IndexedIterator[Byte] */
val* core__ropes___core__ropes__RopeBytes___core__abstract_collection__SequenceRead__reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[Byte] */;
long var_i /* var i: Int */;
val* var1 /* : RopeByteReverseIterator */;
val* var2 /* : Text */;
var_i = p0;
var1 = NEW_core__ropes__RopeByteReverseIterator(&type_core__ropes__RopeByteReverseIterator);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__StringByteView__target]))(self); /* target on <self:RopeBytes>*/
}
{
((void(*)(val* self, val* p0, long p1))(var1->class->vft[COLOR_core__ropes__RopeByteReverseIterator__from]))(var1, var2, var_i); /* from on <var1:RopeByteReverseIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method ropes$Sys$maxlen for (self: Sys): Int */
long core__ropes___Sys___maxlen(val* self) {
long var /* : Int */;
var = 512l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
