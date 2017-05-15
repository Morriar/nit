#include "core__stream.sep.0.h"
/* method stream$Stream$last_error for (self: Stream): nullable IOError */
val* core___core__Stream___last_error(val* self) {
val* var /* : nullable IOError */;
val* var1 /* : nullable IOError */;
var1 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:Stream> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream$Stream$last_error= for (self: Stream, nullable IOError) */
void core___core__Stream___last_error_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__Stream___last_error].val = p0; /* _last_error on <self:Stream> */
RET_LABEL:;
}
/* method stream$Stream$close for (self: Stream) */
void core___core__Stream___close(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "close", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 40);
fatal_exit(1);
RET_LABEL:;
}
/* method stream$Stream$start for (self: Stream) */
void core___core__Stream___start(val* self) {
RET_LABEL:;
}
/* method stream$Stream$finish for (self: Stream) */
void core___core__Stream___finish(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__close]))(self); /* close on <self:Stream>*/
}
RET_LABEL:;
}
/* method stream$Reader$decoder for (self: Reader): Codec */
val* core___core__Reader___decoder(val* self) {
val* var /* : Codec */;
val* var1 /* : Codec */;
var1 = self->attrs[COLOR_core__stream__Reader___decoder].val; /* _decoder on <self:Reader> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decoder");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 68);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream$Reader$decoder= for (self: Reader, Codec) */
void core___core__Reader___decoder_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__Reader___decoder].val = p0; /* _decoder on <self:Reader> */
RET_LABEL:;
}
/* method stream$Reader$read_char for (self: Reader): nullable Char */
val* core___core__Reader___read_char(val* self) {
val* var /* : nullable Char */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "read_char", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 71);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream$Reader$read_byte for (self: Reader): nullable Byte */
val* core___core__Reader___read_byte(val* self) {
val* var /* : nullable Byte */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "read_byte", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 74);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream$Reader$read for (self: Reader, Int): String */
val* core___core__Reader___read(val* self, long p0) {
val* var /* : String */;
long var_i /* var i: Int */;
val* var1 /* : Bytes */;
val* var2 /* : String */;
var_i = p0;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__stream__Reader__read_bytes]))(self, var_i); /* read_bytes on <self:Reader>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1); /* to_s on <var1:Bytes>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Reader$read_bytes for (self: Reader, Int): Bytes */
val* core___core__Reader___read_bytes(val* self, long p0) {
val* var /* : Bytes */;
long var_i /* var i: Int */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Bytes */;
static char* varoncenew;
static int varoncenew_guard;
char* var5 /* : CString */;
char* var6 /* : CString */;
char* var7 /* : CString */;
char* var9 /* : CString */;
char* var_s /* var s: CString */;
val* var10 /* : Bytes */;
val* var_buf /* var buf: Bytes */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable Byte */;
val* var_c /* var c: nullable Byte */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:Reader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
var4 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self))(var4->class->vft[COLOR_core__bytes__Bytes__empty]))(var4); /* empty on <var4:Bytes>*/
}
var = var4;
goto RET_LABEL;
} else {
}
if (likely(varoncenew_guard)) {
var5 = varoncenew;
} else {
var6 = NULL/*special!*/;
var5 = var6;
varoncenew = var5;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var5,var_i) on <var5:CString> */
var9 = (char*)nit_alloc(var_i);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_s = var7;
var10 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, char* p0))(var10->class->vft[COLOR_core__bytes__Bytes__items_61d]))(var10, var_s); /* items= on <var10:Bytes>*/
}
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_core__array__AbstractArrayRead__length_61d]))(var10, 0l); /* length= on <var10:Bytes>*/
}
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_core__bytes__Bytes__capacity_61d]))(var10, 0l); /* capacity= on <var10:Bytes>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:Bytes>*/
}
var_buf = var10;
for(;;) {
{
{ /* Inline kernel$Int$> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var15 = var_i > 0l;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_ = var12;
if (var12){
{
var16 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var17 = !var16;
var11 = var17;
} else {
var11 = var_;
}
if (var11){
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_byte]))(self); /* read_byte on <self:Reader>*/
}
var_c = var18;
if (var_c == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Byte$!= (var_c,((val*)NULL)) on <var_c:nullable Byte> */
var22 = 0; /* incompatible types Byte vs. null; cannot be NULL */
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
((void(*)(val* self, val* p0))(var_buf->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_buf, var_c); /* add on <var_buf:Bytes>*/
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var26 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var30 = var_i - 1l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_i = var24;
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_buf;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Reader$read_line for (self: Reader): String */
val* core___core__Reader___read_line(val* self) {
val* var /* : String */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
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
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
val* var20 /* : FlatBuffer */;
val* var_s /* var s: FlatBuffer */;
val* var21 /* : String */;
val* var22 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:Reader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "";
var7 = (val*)(0l<<2|1);
var8 = (val*)(0l<<2|1);
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
var11 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
if (var11){
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "";
var16 = (val*)(0l<<2|1);
var17 = (val*)(0l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
var = var13;
goto RET_LABEL;
} else {
}
var20 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__init]))(var20); /* init on <var20:FlatBuffer>*/
}
var_s = var20;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Reader__append_line_to]))(self, var_s); /* append_line_to on <self:Reader>*/
}
{
var21 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:FlatBuffer>*/
}
{
var22 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__Text__chomp]))(var21); /* chomp on <var21:String>*/
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Reader$read_lines for (self: Reader): Array[String] */
val* core___core__Reader___read_lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : String */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_res = var1;
for(;;) {
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var3 = !var2;
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_line]))(self); /* read_line on <self:Reader>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var4); /* add on <var_res:Array[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Reader$each_line for (self: Reader): LineIterator */
val* core___core__Reader___each_line(val* self) {
val* var /* : LineIterator */;
val* var1 /* : LineIterator */;
var1 = NEW_core__LineIterator(&type_core__LineIterator);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__stream__LineIterator__stream_61d]))(var1, self); /* stream= on <var1:LineIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:LineIterator>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Reader$read_all for (self: Reader): String */
val* core___core__Reader___read_all(val* self) {
val* var /* : String */;
val* var1 /* : Bytes */;
val* var_s /* var s: Bytes */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var_rets /* var rets: String */;
long var_pos /* var pos: Int */;
char* var21 /* : CString */;
val* var22 /* : FlatString */;
val* var_str /* var str: FlatString */;
long var23 /* : Int */;
char* var24 /* : CString */;
char* var_sits /* var sits: CString */;
long var_remsp /* var remsp: Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var28 /* : Bool */;
long var_chunksz /* var chunksz: Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
static val* varoncenew;
static int varoncenew_guard;
val* var36 /* : FlatString */;
val* var37 /* : FlatString */;
val* var38 /* : FlatString */;
val* var39 /* : Text */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
long var54 /* : Int */;
long var_st /* var st: Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
long var_byte_length /* var byte_length: Int */;
static val* varoncenew62;
static int varoncenew62_guard;
val* var63 /* : FlatString */;
val* var64 /* : FlatString */;
val* var65 /* : FlatString */;
val* var66 /* : Text */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
val* var77 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_all_bytes]))(self); /* read_all_bytes on <self:Reader>*/
}
var_s = var1;
{
var2 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Bytes>*/
}
var_slen = var2;
{
{ /* Inline kernel$Int$== (var_slen,0l) on <var_slen:Int> */
var5 = var_slen == 0l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
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
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "";
var17 = (val*)(0l<<2|1);
var18 = (val*)(0l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
var_rets = var14;
var_pos = 0l;
{
var21 = ((char*(*)(val* self))(var_s->class->vft[COLOR_core__bytes__Bytes__items]))(var_s); /* items on <var_s:Bytes>*/
}
var22 = core__flat___CString___clean_utf8(var21, var_slen);
var_str = var22;
{
var23 = ((long(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_str); /* byte_length on <var_str:FlatString>*/
}
var_slen = var23;
{
var24 = ((char*(*)(val* self))(var_str->class->vft[COLOR_core__abstract_text__FlatText__items]))(var_str); /* items on <var_str:FlatString>*/
}
var_sits = var24;
var_remsp = var_slen;
for(;;) {
{
{ /* Inline kernel$Int$< (var_pos,var_slen) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_slen:Int> isa OTHER */
/* <var_slen:Int> isa OTHER */
var27 = 1; /* easy <var_slen:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var28 = var_pos < var_slen;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
var_chunksz = 129l;
{
{ /* Inline kernel$Int$> (var_chunksz,var_remsp) on <var_chunksz:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var31 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var35 = var_chunksz > var_remsp;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
if (likely(varoncenew_guard)) {
var36 = varoncenew;
} else {
var37 = NEW_core__FlatString(&type_core__FlatString);
var36 = var37;
varoncenew = var36;
varoncenew_guard = 1;
}
{
var38 = ((val*(*)(val* self, char* p0, long p1, long p2))(var36->class->vft[COLOR_core__flat__FlatString__with_infos]))(var36, var_sits, var_remsp, var_pos); /* with_infos on <var36:FlatString>*/
}
{
var39 = ((val*(*)(val* self, val* p0))(var_rets->class->vft[COLOR_core__abstract_text__Text___43d]))(var_rets, var38); /* + on <var_rets:String>*/
}
var_rets = var39;
goto BREAK_label;
} else {
}
{
{ /* Inline kernel$Int$+ (var_pos,var_chunksz) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <var_chunksz:Int> isa OTHER */
/* <var_chunksz:Int> isa OTHER */
var42 = 1; /* easy <var_chunksz:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var46 = var_pos + var_chunksz;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var40,1l) on <var40:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var49 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var53 = var40 - 1l;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var54 = core___core__CString___find_beginning_of_char_at(var_sits, var47);
var_st = var54;
{
{ /* Inline kernel$Int$- (var_st,var_pos) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var57 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var61 = var_st - var_pos;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var_byte_length = var55;
if (likely(varoncenew62_guard)) {
var63 = varoncenew62;
} else {
var64 = NEW_core__FlatString(&type_core__FlatString);
var63 = var64;
varoncenew62 = var63;
varoncenew62_guard = 1;
}
{
var65 = ((val*(*)(val* self, char* p0, long p1, long p2))(var63->class->vft[COLOR_core__flat__FlatString__with_infos]))(var63, var_sits, var_byte_length, var_pos); /* with_infos on <var63:FlatString>*/
}
{
var66 = ((val*(*)(val* self, val* p0))(var_rets->class->vft[COLOR_core__abstract_text__Text___43d]))(var_rets, var65); /* + on <var_rets:String>*/
}
var_rets = var66;
var_pos = var_st;
{
{ /* Inline kernel$Int$- (var_remsp,var_byte_length) on <var_remsp:Int> */
/* Covariant cast for argument 0 (i) <var_byte_length:Int> isa OTHER */
/* <var_byte_length:Int> isa OTHER */
var69 = 1; /* easy <var_byte_length:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var73 = var_remsp - var_byte_length;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_remsp = var67;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
/* <var_rets:String> isa Concat */
cltype75 = type_core__ropes__Concat.color;
idtype76 = type_core__ropes__Concat.id;
if(cltype75 >= var_rets->type->table_size) {
var74 = 0;
} else {
var74 = var_rets->type->type_table[cltype75] == idtype76;
}
if (var74){
{
var77 = ((val*(*)(val* self))(var_rets->class->vft[COLOR_core__ropes__Concat__balance]))(var_rets); /* balance on <var_rets:String(Concat)>*/
}
var = var77;
goto RET_LABEL;
} else {
}
var = var_rets;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Reader$read_all_bytes for (self: Reader): Bytes */
val* core___core__Reader___read_all_bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Bytes */;
val* var5 /* : Bytes */;
val* var_s /* var s: Bytes */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Byte */;
val* var_c /* var c: nullable Byte */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:Reader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
var4 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self))(var4->class->vft[COLOR_core__bytes__Bytes__empty]))(var4); /* empty on <var4:Bytes>*/
}
var = var4;
goto RET_LABEL;
} else {
}
var5 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self))(var5->class->vft[COLOR_core__bytes__Bytes__empty]))(var5); /* empty on <var5:Bytes>*/
}
var_s = var5;
for(;;) {
{
var6 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var7 = !var6;
if (var7){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_byte]))(self); /* read_byte on <self:Reader>*/
}
var_c = var8;
if (var_c == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Byte$!= (var_c,((val*)NULL)) on <var_c:nullable Byte> */
var12 = 0; /* incompatible types Byte vs. null; cannot be NULL */
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_s, var_c); /* add on <var_s:Bytes>*/
}
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Reader$append_line_to for (self: Reader, Buffer) */
void core___core__Reader___append_line_to(val* self, val* p0) {
val* var_s /* var s: Buffer */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Char */;
val* var_x /* var x: nullable Char */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : SequenceRead[Char] */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
uint32_t var13 /* : Char */;
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:Reader>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable IOError>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
for(;;) {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_char]))(self); /* read_char on <self:Reader>*/
}
var_x = var3;
if (var_x == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Char$== (var_x,((val*)NULL)) on <var_x:nullable Char> */
var7 = 0; /* incompatible types Char vs. null; cannot be NULL */
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
var8 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
if (var8){
goto RET_LABEL;
} else {
}
} else {
{
var9 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__chars]))(var_s); /* chars on <var_s:Buffer>*/
}
{
((void(*)(val* self, val* p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__Sequence__push]))(var9, var_x); /* push on <var9:SequenceRead[Char](Sequence[Char])>*/
}
{
{ /* Inline kernel$Char$== (var_x,'\n') on <var_x:nullable Char(Char)> */
var13 = (uint32_t)((long)(var_x)>>2);
var12 = var13 == '\n';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
goto RET_LABEL;
} else {
}
}
}
RET_LABEL:;
}
/* method stream$Reader$eof for (self: Reader): Bool */
short int core___core__Reader___eof(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "eof", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 284);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream$Reader$read_word for (self: Reader): String */
val* core___core__Reader___read_word(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_buf /* var buf: FlatBuffer */;
val* var2 /* : nullable Char */;
val* var_c /* var c: nullable Char */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
uint32_t var8 /* : Char */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable Char */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
uint32_t var17 /* : Char */;
uint32_t var18 /* : Char */;
val* var19 /* : String */;
val* var_res /* var res: String */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_buf = var1;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_nonwhitespace]))(self); /* read_nonwhitespace on <self:Reader>*/
}
var_c = var2;
if (var_c == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Char$!= (var_c,((val*)NULL)) on <var_c:nullable Char> */
var6 = 0; /* incompatible types Char vs. null; cannot be NULL */
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
var8 = (uint32_t)((long)(var_c)>>2);
((void(*)(val* self, uint32_t p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buf, var8); /* add on <var_buf:FlatBuffer>*/
}
for(;;) {
{
var9 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var10 = !var9;
if (var10){
{
var11 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_char]))(self); /* read_char on <self:Reader>*/
}
var_c = var11;
if (var_c == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Char$== (var_c,((val*)NULL)) on <var_c:nullable Char> */
var15 = 0; /* incompatible types Char vs. null; cannot be NULL */
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto BREAK_label;
} else {
}
var17 = (uint32_t)((long)(var_c)>>2);
var16 = core___core__Char___is_whitespace(var17);
if (var16){
goto BREAK_label;
} else {
}
{
var18 = (uint32_t)((long)(var_c)>>2);
((void(*)(val* self, uint32_t p0))(var_buf->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_buf, var18); /* add on <var_buf:FlatBuffer>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
{
var19 = ((val*(*)(val* self))(var_buf->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_buf); /* to_s on <var_buf:FlatBuffer>*/
}
var_res = var19;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Reader$read_nonwhitespace for (self: Reader): nullable Char */
val* core___core__Reader___read_nonwhitespace(val* self) {
val* var /* : nullable Char */;
val* var_c /* var c: nullable Char */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Char */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
uint32_t var10 /* : Char */;
short int var11 /* : Bool */;
var_c = ((val*)NULL);
for(;;) {
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:Reader>*/
}
var2 = !var1;
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__read_char]))(self); /* read_char on <self:Reader>*/
}
var_c = var3;
if (var_c == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Char$== (var_c,((val*)NULL)) on <var_c:nullable Char> */
var8 = 0; /* incompatible types Char vs. null; cannot be NULL */
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var_ = var5;
if (var5){
var4 = var_;
} else {
var10 = (uint32_t)((long)(var_c)>>2);
var9 = core___core__Char___is_whitespace(var10);
var11 = !var9;
var4 = var11;
}
if (var4){
goto BREAK_label;
} else {
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_c;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$LineIterator$stream for (self: LineIterator): Reader */
val* core___core__LineIterator___stream(val* self) {
val* var /* : Reader */;
val* var1 /* : Reader */;
var1 = self->attrs[COLOR_core__stream__LineIterator___stream].val; /* _stream on <self:LineIterator> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 353);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream$LineIterator$stream= for (self: LineIterator, Reader) */
void core___core__LineIterator___stream_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__LineIterator___stream].val = p0; /* _stream on <self:LineIterator> */
RET_LABEL:;
}
/* method stream$LineIterator$is_ok for (self: LineIterator): Bool */
short int core___core__LineIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Reader */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var_res /* var res: Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Reader */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__stream]))(self); /* stream on <self:LineIterator>*/
}
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_core__stream__Reader__eof]))(var1); /* eof on <var1:Reader>*/
}
var3 = !var2;
var_res = var3;
var5 = !var_res;
var_ = var5;
if (var5){
{
var6 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__close_on_finish]))(self); /* close_on_finish on <self:LineIterator>*/
}
var4 = var6;
} else {
var4 = var_;
}
if (var4){
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__stream]))(self); /* stream on <self:LineIterator>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_core__stream__Stream__close]))(var7); /* close on <var7:Reader>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$LineIterator$item for (self: LineIterator): String */
val* core___core__LineIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var_line /* var line: nullable String */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Reader */;
val* var5 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__line]))(self); /* line on <self:LineIterator>*/
}
var_line = var1;
if (var_line == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_line->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_line, ((val*)NULL)); /* == on <var_line:nullable String>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__stream]))(self); /* stream on <self:LineIterator>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__stream__Reader__read_line]))(var4); /* read_line on <var4:Reader>*/
}
var_line = var5;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__LineIterator__line_61d]))(self, var_line); /* line= on <self:LineIterator>*/
}
var = var_line;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$LineIterator$line for (self: LineIterator): nullable String */
val* core___core__LineIterator___line(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_core__stream__LineIterator___line].val; /* _line on <self:LineIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream$LineIterator$line= for (self: LineIterator, nullable String) */
void core___core__LineIterator___line_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__LineIterator___line].val = p0; /* _line on <self:LineIterator> */
RET_LABEL:;
}
/* method stream$LineIterator$next for (self: LineIterator) */
void core___core__LineIterator___core__abstract_collection__Iterator__next(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__line]))(self); /* line on <self:LineIterator>*/
}
if (var == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, ((val*)NULL)); /* == on <var:nullable String>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Iterator__item]))(self); /* item on <self:LineIterator>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__LineIterator__line_61d]))(self, ((val*)NULL)); /* line= on <self:LineIterator>*/
}
RET_LABEL:;
}
/* method stream$LineIterator$close_on_finish for (self: LineIterator): Bool */
short int core___core__LineIterator___close_on_finish(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__stream__LineIterator___close_on_finish].s; /* _close_on_finish on <self:LineIterator> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream$LineIterator$close_on_finish= for (self: LineIterator, Bool) */
void core___core__LineIterator___close_on_finish_61d(val* self, short int p0) {
self->attrs[COLOR_core__stream__LineIterator___close_on_finish].s = p0; /* _close_on_finish on <self:LineIterator> */
RET_LABEL:;
}
/* method stream$LineIterator$finish for (self: LineIterator) */
void core___core__LineIterator___core__abstract_collection__Iterator__finish(val* self) {
short int var /* : Bool */;
val* var1 /* : Reader */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__close_on_finish]))(self); /* close_on_finish on <self:LineIterator>*/
}
if (var){
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__LineIterator__stream]))(self); /* stream on <self:LineIterator>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__stream__Stream__close]))(var1); /* close on <var1:Reader>*/
}
} else {
}
RET_LABEL:;
}
/* method stream$LineIterator$init for (self: LineIterator) */
void core___core__LineIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__LineIterator___core__kernel__Object__init]))(self); /* init on <self:LineIterator>*/
}
RET_LABEL:;
}
/* method stream$PollableReader$poll_in for (self: PollableReader): Bool */
short int core___core__PollableReader___poll_in(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "poll_in", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 399);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream$Writer$coder for (self: Writer): Codec */
val* core___core__Writer___coder(val* self) {
val* var /* : Codec */;
val* var1 /* : Codec */;
var1 = self->attrs[COLOR_core__stream__Writer___coder].val; /* _coder on <self:Writer> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _coder");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 408);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream$Writer$coder= for (self: Writer, Codec) */
void core___core__Writer___coder_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__Writer___coder].val = p0; /* _coder on <self:Writer> */
RET_LABEL:;
}
/* method stream$Writer$write_bytes for (self: Writer, Bytes) */
void core___core__Writer___write_bytes(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "write_bytes", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 411);
fatal_exit(1);
RET_LABEL:;
}
/* method stream$Writer$write for (self: Writer, Text) */
void core___core__Writer___write(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "write", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 414);
fatal_exit(1);
RET_LABEL:;
}
/* method stream$Writer$write_byte for (self: Writer, Byte) */
void core___core__Writer___write_byte(val* self, unsigned char p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "write_byte", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 417);
fatal_exit(1);
RET_LABEL:;
}
/* method stream$Writer$write_char for (self: Writer, Char) */
void core___core__Writer___write_char(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
val* var /* : String */;
var_c = p0;
var = core__abstract_text___Char___Object__to_s(var_c);
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Writer__write]))(self, var); /* write on <self:Writer>*/
}
RET_LABEL:;
}
/* method stream$Writer$is_writable for (self: Writer): Bool */
short int core___core__Writer___is_writable(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "is_writable", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 423);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream$Writable$write_to for (self: Writable, Writer) */
void core___core__Writable___write_to(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "write_to", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 434);
fatal_exit(1);
RET_LABEL:;
}
/* method stream$Writable$write_to_string for (self: Writable): String */
val* core___core__Writable___write_to_string(val* self) {
val* var /* : String */;
val* var1 /* : StringWriter */;
val* var_stream /* var stream: StringWriter */;
val* var2 /* : String */;
var1 = NEW_core__StringWriter(&type_core__StringWriter);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:StringWriter>*/
}
var_stream = var1;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__stream__Writable__write_to]))(self, var_stream); /* write_to on <self:Writable>*/
}
{
var2 = ((val*(*)(val* self))(var_stream->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_stream); /* to_s on <var_stream:StringWriter>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Bytes$write_to for (self: Bytes, Writer) */
void core__stream___Bytes___Writable__write_to(val* self, val* p0) {
val* var_s /* var s: Writer */;
var_s = p0;
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__stream__Writer__write_bytes]))(var_s, self); /* write_bytes on <var_s:Writer>*/
}
RET_LABEL:;
}
/* method stream$Bytes$write_to_string for (self: Bytes): String */
val* core__stream___Bytes___Writable__write_to_string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Bytes>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$Text$write_to for (self: Text, Writer) */
void core__stream___Text___Writable__write_to(val* self, val* p0) {
val* var_stream /* var stream: Writer */;
var_stream = p0;
{
((void(*)(val* self, val* p0))(var_stream->class->vft[COLOR_core__stream__Writer__write]))(var_stream, self); /* write on <var_stream:Writer>*/
}
RET_LABEL:;
}
/* method stream$BufferedReader$read_char for (self: BufferedReader): nullable Char */
val* core___core__BufferedReader___Reader__read_char(val* self) {
val* var /* : nullable Char */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
char* var13 /* : CString */;
long var14 /* : Int */;
unsigned char var15 /* : Byte */;
unsigned char var17 /* : Byte */;
long var18 /* : Int */;
long var20 /* : Int */;
uint32_t var21 /* : Char */;
uint32_t var23 /* : Char */;
uint32_t var_c /* var c: Char */;
val* var_ /* var : BufferedReader */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var28 /* : Int */;
val* var29 /* : nullable Char */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:BufferedReader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var4 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Stream has reached eof";
var9 = (val*)(22l<<2|1);
var10 = (val*)(22l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var6); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:BufferedReader>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var14 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline native$CString$[] (var13,var14) on <var13:CString> */
var17 = (unsigned char)((int)var13[var14]);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline kernel$Byte$to_i (var15) on <var15:Byte> */
var20 = (long)var15;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel$Int$code_point (var18) on <var18:Int> */
var23 = (uint32_t)var18;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_c = var21;
var_ = self;
var24 = var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <var_:BufferedReader> */
{
{ /* Inline kernel$Int$+ (var24,1l) on <var24:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var27 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var28 = var24 + 1l;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var25; /* _buffer_pos on <var_:BufferedReader> */
var29 = (val*)((long)(var_c)<<2|2);
var = var29;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$read_byte for (self: BufferedReader): nullable Byte */
val* core___core__BufferedReader___Reader__read_byte(val* self) {
val* var /* : nullable Byte */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
char* var13 /* : CString */;
long var14 /* : Int */;
unsigned char var15 /* : Byte */;
unsigned char var17 /* : Byte */;
unsigned char var_c /* var c: Byte */;
val* var_ /* var : BufferedReader */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var22 /* : Int */;
val* var23 /* : nullable Byte */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:BufferedReader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var4 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Stream has reached eof";
var9 = (val*)(22l<<2|1);
var10 = (val*)(22l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var6); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:BufferedReader>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var14 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline native$CString$[] (var13,var14) on <var13:CString> */
var17 = (unsigned char)((int)var13[var14]);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_c = var15;
var_ = self;
var18 = var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <var_:BufferedReader> */
{
{ /* Inline kernel$Int$+ (var18,1l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var18 + 1l;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var19; /* _buffer_pos on <var_:BufferedReader> */
var23 = BOX_core__Byte(var_c); /* autobox from Byte to nullable Byte */
var = var23;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$buffer_reset for (self: BufferedReader) */
void core___core__BufferedReader___buffer_reset(val* self) {
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream$BufferedReader$peek for (self: BufferedReader, Int): Bytes */
val* core___core__BufferedReader___peek(val* self, long p0) {
val* var /* : Bytes */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
val* var2 /* : Bytes */;
long var3 /* : Int */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
long var_remsp /* var remsp: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : Bytes */;
val* var_bf /* var bf: Bytes */;
char* var17 /* : CString */;
long var18 /* : Int */;
val* var19 /* : Bytes */;
val* var_bf20 /* var bf: Bytes */;
char* var21 /* : CString */;
long var22 /* : Int */;
long var23 /* : Int */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
long var32 /* : Int */;
long var33 /* : Int */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
long var41 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
long var_full_len /* var full_len: Int */;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
short int var57 /* : Bool */;
long var58 /* : Int */;
long var_c /* var c: Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
short int var65 /* : Bool */;
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
static char* varoncenew;
static int varoncenew_guard;
char* var80 /* : CString */;
char* var81 /* : CString */;
long var82 /* : Int */;
char* var83 /* : CString */;
char* var85 /* : CString */;
char* var_nns /* var nns: CString */;
char* var86 /* : CString */;
long var87 /* : Int */;
char* var89 /* : CString */;
long var90 /* : Int */;
long var91 /* : Int */;
var_i = p0;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
if (var1){
var2 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__bytes__Bytes__empty]))(var2); /* empty on <var2:Bytes>*/
}
var = var2;
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
var4 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel$Int$- (var3,var4) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var8 = var3 - var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_remsp = var5;
{
{ /* Inline kernel$Int$<= (var_i,var_remsp) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var11 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var15 = var_i <= var_remsp;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var16 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_core__bytes__Bytes__with_capacity]))(var16, var_i); /* with_capacity on <var16:Bytes>*/
}
var_bf = var16;
var17 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var18 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
((void(*)(val* self, char* p0, long p1, long p2))(var_bf->class->vft[COLOR_core__bytes__Bytes__append_ns_from]))(var_bf, var17, var_i, var18); /* append_ns_from on <var_bf:Bytes>*/
}
var = var_bf;
goto RET_LABEL;
} else {
}
var19 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, long p0))(var19->class->vft[COLOR_core__bytes__Bytes__with_capacity]))(var19, var_i); /* with_capacity on <var19:Bytes>*/
}
var_bf20 = var19;
var21 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var22 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
((void(*)(val* self, char* p0, long p1, long p2))(var_bf20->class->vft[COLOR_core__bytes__Bytes__append_ns_from]))(var_bf20, var21, var_remsp, var22); /* append_ns_from on <var_bf20:Bytes>*/
}
var23 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var23; /* _buffer_pos on <self:BufferedReader> */
{
var24 = ((long(*)(val* self))(var_bf20->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_bf20); /* length on <var_bf20:Bytes>*/
}
{
{ /* Inline kernel$Int$- (var_i,var24) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var31 = var_i - var24;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
var32 = ((long(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__stream__BufferedReader__read_intern]))(self, var25, var_bf20); /* read_intern on <self:BufferedReader>*/
}
var33 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
var34 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel$Int$- (var33,var34) on <var33:Int> */
/* Covariant cast for argument 0 (i) <var34:Int> isa OTHER */
/* <var34:Int> isa OTHER */
var37 = 1; /* easy <var34:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var41 = var33 - var34;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_remsp = var35;
{
var42 = ((long(*)(val* self))(var_bf20->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_bf20); /* length on <var_bf20:Bytes>*/
}
{
{ /* Inline kernel$Int$+ (var42,var_remsp) on <var42:Int> */
/* Covariant cast for argument 0 (i) <var_remsp:Int> isa OTHER */
/* <var_remsp:Int> isa OTHER */
var45 = 1; /* easy <var_remsp:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var49 = var42 + var_remsp;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var_full_len = var43;
var50 = self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:BufferedReader> */
{
{ /* Inline kernel$Int$> (var_full_len,var50) on <var_full_len:Int> */
/* Covariant cast for argument 0 (i) <var50:Int> isa OTHER */
/* <var50:Int> isa OTHER */
var53 = 1; /* easy <var50:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var57 = var_full_len > var50;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
if (var51){
var58 = self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:BufferedReader> */
var_c = var58;
for(;;) {
{
{ /* Inline kernel$Int$< (var_c,var_full_len) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <var_full_len:Int> isa OTHER */
/* <var_full_len:Int> isa OTHER */
var61 = 1; /* easy <var_full_len:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var65 = var_c < var_full_len;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
{
{ /* Inline kernel$Int$* (var_c,2l) on <var_c:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var68 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var72 = var_c * 2l;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var66,2l) on <var66:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var75 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var79 = var66 + 2l;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var_c = var73;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l = var_c; /* _buffer_capacity on <self:BufferedReader> */
} else {
}
if (likely(varoncenew_guard)) {
var80 = varoncenew;
} else {
var81 = NULL/*special!*/;
var80 = var81;
varoncenew = var80;
varoncenew_guard = 1;
}
var82 = self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:BufferedReader> */
{
{ /* Inline native$CString$new (var80,var82) on <var80:CString> */
var85 = (char*)nit_alloc(var82);
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var_nns = var83;
{
var86 = ((char*(*)(val* self))(var_bf20->class->vft[COLOR_core__bytes__Bytes__items]))(var_bf20); /* items on <var_bf20:Bytes>*/
}
{
var87 = ((long(*)(val* self))(var_bf20->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_bf20); /* length on <var_bf20:Bytes>*/
}
{
{ /* Inline native$CString$copy_to (var86,var_nns,var87,0l,0l) on <var86:CString> */
memmove(var_nns+0l,var86+0l,var87);
RET_LABEL88:(void)0;
}
}
var89 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var90 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
var91 = ((long(*)(val* self))(var_bf20->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_bf20); /* length on <var_bf20:Bytes>*/
}
{
{ /* Inline native$CString$copy_to (var89,var_nns,var_remsp,var90,var91) on <var89:CString> */
memmove(var_nns+var91,var89+var90,var_remsp);
RET_LABEL92:(void)0;
}
}
self->attrs[COLOR_core__stream__BufferedReader___buffer].str = var_nns; /* _buffer on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = var_full_len; /* _buffer_length on <self:BufferedReader> */
var = var_bf20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$read_bytes for (self: BufferedReader, Int): Bytes */
val* core___core__BufferedReader___Reader__read_bytes(val* self, long p0) {
val* var /* : Bytes */;
long var_i /* var i: Int */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Bytes */;
val* var5 /* : Bytes */;
val* var_buf /* var buf: Bytes */;
long var6 /* : Int */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:BufferedReader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
var4 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self))(var4->class->vft[COLOR_core__bytes__Bytes__empty]))(var4); /* empty on <var4:Bytes>*/
}
var = var4;
goto RET_LABEL;
} else {
}
var5 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_core__bytes__Bytes__with_capacity]))(var5, var_i); /* with_capacity on <var5:Bytes>*/
}
var_buf = var5;
{
var6 = ((long(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__stream__BufferedReader__read_intern]))(self, var_i, var_buf); /* read_intern on <self:BufferedReader>*/
}
var = var_buf;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$read_intern for (self: BufferedReader, Int, Bytes): Int */
long core___core__BufferedReader___read_intern(val* self, long p0, val* p1) {
long var /* : Int */;
long var_i /* var i: Int */;
val* var_buf /* var buf: Bytes */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var_p /* var p: Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var_bufsp /* var bufsp: Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
short int var14 /* : Bool */;
val* var_ /* var : BufferedReader */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
char* var23 /* : CString */;
long var24 /* : Int */;
long var25 /* : Int */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
long var_readln /* var readln: Int */;
char* var33 /* : CString */;
long var34 /* : Int */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
long var40 /* : Int */;
long var41 /* : Int */;
long var_rd /* var rd: Int */;
long var42 /* : Int */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name47;
long var48 /* : Int */;
var_i = p0;
var_buf = p1;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
if (var1){
var = 0l;
goto RET_LABEL;
} else {
}
var2 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_p = var2;
var3 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$- (var3,var_p) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var6 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var3 - var_p;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_bufsp = var4;
{
{ /* Inline kernel$Int$>= (var_bufsp,var_i) on <var_bufsp:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var10 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var14 = var_bufsp >= var_i;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var_ = self;
var15 = var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <var_:BufferedReader> */
{
{ /* Inline kernel$Int$+ (var15,var_i) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var18 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var15 + var_i;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var16; /* _buffer_pos on <var_:BufferedReader> */
var23 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
((void(*)(val* self, char* p0, long p1, long p2))(var_buf->class->vft[COLOR_core__bytes__Bytes__append_ns_from]))(var_buf, var23, var_i, var_p); /* append_ns_from on <var_buf:Bytes>*/
}
var = var_i;
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var24; /* _buffer_pos on <self:BufferedReader> */
var25 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$- (var25,var_p) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var28 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var32 = var25 - var_p;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_readln = var26;
var33 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
((void(*)(val* self, char* p0, long p1, long p2))(var_buf->class->vft[COLOR_core__bytes__Bytes__append_ns_from]))(var_buf, var33, var_readln, var_p); /* append_ns_from on <var_buf:Bytes>*/
}
{
{ /* Inline kernel$Int$- (var_i,var_readln) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_readln:Int> isa OTHER */
/* <var_readln:Int> isa OTHER */
var36 = 1; /* easy <var_readln:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var40 = var_i - var_readln;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var41 = ((long(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__stream__BufferedReader__read_intern]))(self, var34, var_buf); /* read_intern on <self:BufferedReader>*/
}
var_rd = var41;
{
{ /* Inline kernel$Int$+ (var_rd,var_readln) on <var_rd:Int> */
/* Covariant cast for argument 0 (i) <var_readln:Int> isa OTHER */
/* <var_readln:Int> isa OTHER */
var44 = 1; /* easy <var_readln:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name47 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name47);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var48 = var_rd + var_readln;
var42 = var48;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var = var42;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$read_all_bytes for (self: BufferedReader): Bytes */
val* core___core__BufferedReader___Reader__read_all_bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : nullable IOError */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Bytes */;
val* var5 /* : Bytes */;
val* var_s /* var s: Bytes */;
char* var6 /* : CString */;
char* var_b /* var b: CString */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var_j /* var j: Int */;
long var10 /* : Int */;
long var_k /* var k: Int */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
long var_rd_sz /* var rd_sz: Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:BufferedReader>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable IOError>*/
var2 = var3;
}
if (var2){
var4 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self))(var4->class->vft[COLOR_core__bytes__Bytes__empty]))(var4); /* empty on <var4:Bytes>*/
}
var = var4;
goto RET_LABEL;
} else {
}
var5 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, long p0))(var5->class->vft[COLOR_core__bytes__Bytes__with_capacity]))(var5, 10l); /* with_capacity on <var5:Bytes>*/
}
var_s = var5;
var6 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var_b = var6;
for(;;) {
{
var7 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:BufferedReader>*/
}
var8 = !var7;
if (var8){
var9 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_j = var9;
var10 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
var_k = var10;
{
{ /* Inline kernel$Int$- (var_k,var_j) on <var_k:Int> */
/* Covariant cast for argument 0 (i) <var_j:Int> isa OTHER */
/* <var_j:Int> isa OTHER */
var13 = 1; /* easy <var_j:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var_k - var_j;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_rd_sz = var11;
{
((void(*)(val* self, char* p0, long p1, long p2))(var_s->class->vft[COLOR_core__bytes__Bytes__append_ns_from]))(var_s, var_b, var_rd_sz, var_j); /* append_ns_from on <var_s:Bytes>*/
}
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var_k; /* _buffer_pos on <self:BufferedReader> */
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__fill_buffer]))(self); /* fill_buffer on <self:BufferedReader>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_s;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$append_line_to for (self: BufferedReader, Buffer) */
void core___core__BufferedReader___Reader__append_line_to(val* self, val* p0) {
val* var_s /* var s: Buffer */;
val* var /* : Bytes */;
val* var_lb /* var lb: Bytes */;
long var1 /* : Int */;
long var_i /* var i: Int */;
short int var2 /* : Bool */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
char* var8 /* : CString */;
unsigned char var9 /* : Byte */;
unsigned char var11 /* : Byte */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
long var22 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
char* var31 /* : CString */;
unsigned char var32 /* : Byte */;
unsigned char var34 /* : Byte */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
long var38 /* : Int */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
long var44 /* : Int */;
val* var45 /* : nullable Object */;
val* var_eol /* var eol: nullable Object */;
val* var46 /* : nullable Object */;
long var47 /* : Int */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
int cltype51;
int idtype52;
const char* var_class_name53;
short int var54 /* : Bool */;
long var55 /* : Int */;
long var_j /* var j: Int */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
int cltype59;
int idtype60;
const char* var_class_name61;
short int var62 /* : Bool */;
char* var63 /* : CString */;
unsigned char var64 /* : Byte */;
unsigned char var66 /* : Byte */;
val* var67 /* : nullable Object */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
short int var76 /* : Bool */;
val* var77 /* : String */;
short int var78 /* : Bool */;
val* var79 /* : String */;
short int var80 /* : Bool */;
val* var81 /* : String */;
var_s = p0;
var = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_core__bytes__Bytes__with_capacity]))(var, 10l); /* with_capacity on <var:Bytes>*/
}
var_lb = var;
for(;;) {
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_i = var1;
for(;;) {
var3 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$< (var_i,var3) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var7 = var_i < var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
var8 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline native$CString$[] (var8,var_i) on <var8:CString> */
var11 = (unsigned char)((int)var8[var_i]);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Byte$!= (var9,((unsigned char)0x0a)) on <var9:Byte> */
var14 = var9 == ((unsigned char)0x0a);
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var2 = var12;
} else {
var2 = var_;
}
if (var2){
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var22 = var_i + 1l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_i = var16;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var23 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$< (var_i,var23) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var30 = var_i < var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
var31 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline native$CString$[] (var31,var_i) on <var31:CString> */
var34 = (unsigned char)((int)var31[var_i]);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var32,((unsigned char)0x0a)) on <var32:Byte> */
var37 = var32 == ((unsigned char)0x0a);
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (unlikely(!var35)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 586);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
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
var45 = (val*)((long)(1)<<2|3);
var_eol = var45;
} else {
var46 = (val*)((long)(0)<<2|3);
var_eol = var46;
}
var47 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
{
{ /* Inline kernel$Int$> (var_i,var47) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var47:Int> isa OTHER */
/* <var47:Int> isa OTHER */
var50 = 1; /* easy <var47:Int> isa OTHER*/
if (unlikely(!var50)) {
var_class_name53 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name53);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var54 = var_i > var47;
var48 = var54;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
var55 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var_j = var55;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j,var_i) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var58 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var62 = var_j < var_i;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
if (var56){
var63 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
{
{ /* Inline native$CString$[] (var63,var_j) on <var63:CString> */
var66 = (unsigned char)((int)var63[var_j]);
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
var67 = BOX_core__Byte(var64); /* autobox from Byte to nullable Object */
((void(*)(val* self, val* p0))(var_lb->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_lb, var67); /* add on <var_lb:Bytes>*/
}
{
{ /* Inline kernel$Int$+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var74 = var_j + 1l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var_j = var68;
} else {
goto BREAK_label75;
}
}
BREAK_label75: (void)0;
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = var_i; /* _buffer_pos on <self:BufferedReader> */
} else {
{
var76 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__end_reached]))(self); /* end_reached on <self:BufferedReader>*/
}
if (unlikely(!var76)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 603);
fatal_exit(1);
}
{
var77 = ((val*(*)(val* self))(var_lb->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_lb); /* to_s on <var_lb:Bytes>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var77); /* append on <var_s:Buffer>*/
}
goto RET_LABEL;
}
var78 = (short int)((long)(var_eol)>>2);
if (var78){
{
var79 = ((val*(*)(val* self))(var_lb->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_lb); /* to_s on <var_lb:Bytes>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var79); /* append on <var_s:Buffer>*/
}
goto RET_LABEL;
} else {
{
var80 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__end_reached]))(self); /* end_reached on <self:BufferedReader>*/
}
if (var80){
{
var81 = ((val*(*)(val* self))(var_lb->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_lb); /* to_s on <var_lb:Bytes>*/
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_s, var81); /* append on <var_s:Buffer>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__fill_buffer]))(self); /* fill_buffer on <self:BufferedReader>*/
}
}
}
RET_LABEL:;
}
/* method stream$BufferedReader$eof for (self: BufferedReader): Bool */
short int core___core__BufferedReader___Reader__eof(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var2 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$< (var1,var2) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var5 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var6 = var1 < var2;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var = 0;
goto RET_LABEL;
} else {
}
{
var7 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__end_reached]))(self); /* end_reached on <self:BufferedReader>*/
}
if (var7){
var = 1;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__fill_buffer]))(self); /* fill_buffer on <self:BufferedReader>*/
}
var9 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var10 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
{
{ /* Inline kernel$Int$>= (var9,var10) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var17 = var9 >= var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
{
var18 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__end_reached]))(self); /* end_reached on <self:BufferedReader>*/
}
var8 = var18;
} else {
var8 = var_;
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$buffer for (self: BufferedReader): CString */
char* core___core__BufferedReader___buffer(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:BufferedReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$buffer= for (self: BufferedReader, CString) */
void core___core__BufferedReader___buffer_61d(val* self, char* p0) {
self->attrs[COLOR_core__stream__BufferedReader___buffer].str = p0; /* _buffer on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream$BufferedReader$buffer_pos for (self: BufferedReader): Int */
long core___core__BufferedReader___buffer_pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l; /* _buffer_pos on <self:BufferedReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$buffer_pos= for (self: BufferedReader, Int) */
void core___core__BufferedReader___buffer_pos_61d(val* self, long p0) {
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = p0; /* _buffer_pos on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream$BufferedReader$buffer_length for (self: BufferedReader): Int */
long core___core__BufferedReader___buffer_length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l; /* _buffer_length on <self:BufferedReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$buffer_length= for (self: BufferedReader, Int) */
void core___core__BufferedReader___buffer_length_61d(val* self, long p0) {
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = p0; /* _buffer_length on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream$BufferedReader$buffer_capacity for (self: BufferedReader): Int */
long core___core__BufferedReader___buffer_capacity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:BufferedReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$buffer_capacity= for (self: BufferedReader, Int) */
void core___core__BufferedReader___buffer_capacity_61d(val* self, long p0) {
self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l = p0; /* _buffer_capacity on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream$BufferedReader$fill_buffer for (self: BufferedReader) */
void core___core__BufferedReader___fill_buffer(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "fill_buffer", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 643);
fatal_exit(1);
RET_LABEL:;
}
/* method stream$BufferedReader$end_reached for (self: BufferedReader): Bool */
short int core___core__BufferedReader___end_reached(val* self) {
short int var /* : Bool */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "end_reached", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 646);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method stream$BufferedReader$prepare_buffer for (self: BufferedReader, Int) */
void core___core__BufferedReader___prepare_buffer(val* self, long p0) {
long var_capacity /* var capacity: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var /* : CString */;
char* var1 /* : CString */;
char* var2 /* : CString */;
char* var4 /* : CString */;
var_capacity = p0;
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NULL/*special!*/;
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var,var_capacity) on <var:CString> */
var4 = (char*)nit_alloc(var_capacity);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_core__stream__BufferedReader___buffer].str = var2; /* _buffer on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:BufferedReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l = var_capacity; /* _buffer_capacity on <self:BufferedReader> */
RET_LABEL:;
}
/* method stream$StringWriter$content for (self: StringWriter): Buffer */
val* core___core__StringWriter___content(val* self) {
val* var /* : Buffer */;
val* var1 /* : Buffer */;
var1 = self->attrs[COLOR_core__stream__StringWriter___content].val; /* _content on <self:StringWriter> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 671);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream$StringWriter$content= for (self: StringWriter, Buffer) */
void core___core__StringWriter___content_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__StringWriter___content].val = p0; /* _content on <self:StringWriter> */
RET_LABEL:;
}
/* method stream$StringWriter$to_s for (self: StringWriter): String */
val* core___core__StringWriter___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : Buffer */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringWriter__content]))(self); /* content on <self:StringWriter>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1); /* to_s on <var1:Buffer>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$StringWriter$is_writable for (self: StringWriter): Bool */
short int core___core__StringWriter___Writer__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__StringWriter__closed]))(self); /* closed on <self:StringWriter>*/
}
var2 = !var1;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$StringWriter$write_bytes for (self: StringWriter, Bytes) */
void core___core__StringWriter___Writer__write_bytes(val* self, val* p0) {
val* var_b /* var b: Bytes */;
val* var /* : Buffer */;
val* var1 /* : String */;
var_b = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringWriter__content]))(self); /* content on <self:StringWriter>*/
}
{
var1 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:Bytes>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__abstract_text__Buffer__append]))(var, var1); /* append on <var:Buffer>*/
}
RET_LABEL:;
}
/* method stream$StringWriter$write for (self: StringWriter, Text) */
void core___core__StringWriter___Writer__write(val* self, val* p0) {
val* var_str /* var str: Text */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Buffer */;
var_str = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__StringWriter__closed]))(self); /* closed on <self:StringWriter>*/
}
var1 = !var;
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 681);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringWriter__content]))(self); /* content on <self:StringWriter>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_core__abstract_text__Buffer__append]))(var2, var_str); /* append on <var2:Buffer>*/
}
RET_LABEL:;
}
/* method stream$StringWriter$write_char for (self: StringWriter, Char) */
void core___core__StringWriter___Writer__write_char(val* self, uint32_t p0) {
uint32_t var_c /* var c: Char */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : Buffer */;
var_c = p0;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__StringWriter__closed]))(self); /* closed on <self:StringWriter>*/
}
var1 = !var;
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 687);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringWriter__content]))(self); /* content on <self:StringWriter>*/
}
{
((void(*)(val* self, uint32_t p0))(var2->class->vft[COLOR_core__abstract_text__Buffer__add]))(var2, var_c); /* add on <var2:Buffer>*/
}
RET_LABEL:;
}
/* method stream$StringWriter$closed for (self: StringWriter): Bool */
short int core___core__StringWriter___closed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__stream__StringWriter___closed].s; /* _closed on <self:StringWriter> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream$StringWriter$closed= for (self: StringWriter, Bool) */
void core___core__StringWriter___closed_61d(val* self, short int p0) {
self->attrs[COLOR_core__stream__StringWriter___closed].s = p0; /* _closed on <self:StringWriter> */
RET_LABEL:;
}
/* method stream$StringWriter$close for (self: StringWriter) */
void core___core__StringWriter___Stream__close(val* self) {
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__stream__StringWriter__closed_61d]))(self, 1); /* closed= on <self:StringWriter>*/
}
RET_LABEL:;
}
/* method stream$StringReader$source for (self: StringReader): String */
val* core___core__StringReader___source(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__stream__StringReader___source].val; /* _source on <self:StringReader> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _source");
PRINT_ERROR(" (%s:%d)\n", FILE_core__stream, 703);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method stream$StringReader$source= for (self: StringReader, String) */
void core___core__StringReader___source_61d(val* self, val* p0) {
self->attrs[COLOR_core__stream__StringReader___source].val = p0; /* _source on <self:StringReader> */
RET_LABEL:;
}
/* method stream$StringReader$cursor for (self: StringReader): Int */
long core___core__StringReader___cursor(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__stream__StringReader___cursor].l; /* _cursor on <self:StringReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method stream$StringReader$cursor= for (self: StringReader, Int) */
void core___core__StringReader___cursor_61d(val* self, long p0) {
self->attrs[COLOR_core__stream__StringReader___cursor].l = p0; /* _cursor on <self:StringReader> */
RET_LABEL:;
}
/* method stream$StringReader$read_char for (self: StringReader): nullable Char */
val* core___core__StringReader___Reader__read_char(val* self) {
val* var /* : nullable Char */;
long var1 /* : Int */;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : String */;
long var9 /* : Int */;
uint32_t var10 /* : Char */;
uint32_t var_c /* var c: Char */;
val* var_ /* var : StringReader */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var19 /* : nullable Char */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__length]))(var2); /* length on <var2:String>*/
}
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
if (var4){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var9 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var10 = ((uint32_t(*)(val* self, long p0))(var8->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var8, var9); /* [] on <var8:String>*/
}
var_c = var10;
var_ = self;
{
var11 = ((long(*)(val* self))(var_->class->vft[COLOR_core__stream__StringReader__cursor]))(var_); /* cursor on <var_:StringReader>*/
}
{
{ /* Inline kernel$Int$+ (var11,1l) on <var11:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var11 + 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__stream__StringReader__cursor_61d]))(var_, var12); /* cursor= on <var_:StringReader>*/
}
var19 = (val*)((long)(var_c)<<2|2);
var = var19;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method stream$StringReader$read_byte for (self: StringReader): nullable Byte */
val* core___core__StringReader___Reader__read_byte(val* self) {
val* var /* : nullable Byte */;
long var1 /* : Int */;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : String */;
val* var9 /* : SequenceRead[Byte] */;
long var10 /* : Int */;
val* var11 /* : nullable Object */;
unsigned char var12 /* : Byte */;
unsigned char var_c /* var c: Byte */;
val* var_ /* var : StringReader */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
val* var21 /* : nullable Byte */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__length]))(var2); /* length on <var2:String>*/
}
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
if (var4){
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__Text__bytes]))(var8); /* bytes on <var8:String>*/
}
{
var10 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var11 = ((val*(*)(val* self, long p0))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var9, var10); /* [] on <var9:SequenceRead[Byte]>*/
}
var12 = ((struct instance_core__Byte*)var11)->value; /* autounbox from nullable Object to Byte */;
var_c = var12;
var_ = self;
{
var13 = ((long(*)(val* self))(var_->class->vft[COLOR_core__stream__StringReader__cursor]))(var_); /* cursor on <var_:StringReader>*/
}
{
{ /* Inline kernel$Int$+ (var13,1l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var13 + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__stream__StringReader__cursor_61d]))(var_, var14); /* cursor= on <var_:StringReader>*/
}
var21 = BOX_core__Byte(var_c); /* autobox from Byte to nullable Byte */
var = var21;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method stream$StringReader$close for (self: StringReader) */
void core___core__StringReader___Stream__close(val* self) {
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var3 = (val*)(0l<<2|1);
var4 = (val*)(0l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__StringReader__source_61d]))(self, var); /* source= on <self:StringReader>*/
}
RET_LABEL:;
}
/* method stream$StringReader$read_all_bytes for (self: StringReader): Bytes */
val* core___core__StringReader___Reader__read_all_bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : String */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var_nslen /* var nslen: Int */;
static char* varoncenew;
static int varoncenew_guard;
char* var8 /* : CString */;
char* var9 /* : CString */;
char* var10 /* : CString */;
char* var12 /* : CString */;
char* var_nns /* var nns: CString */;
val* var13 /* : String */;
long var14 /* : Int */;
val* var15 /* : Bytes */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__length]))(var1); /* length on <var1:String>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
{ /* Inline kernel$Int$- (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var2 - var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_nslen = var4;
if (likely(varoncenew_guard)) {
var8 = varoncenew;
} else {
var9 = NULL/*special!*/;
var8 = var9;
varoncenew = var8;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var8,var_nslen) on <var8:CString> */
var12 = (char*)nit_alloc(var_nslen);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_nns = var10;
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2, long p3))(var13->class->vft[COLOR_core__abstract_text__Text__copy_to_native]))(var13, var_nns, var_nslen, var14, 0l); /* copy_to_native on <var13:String>*/
}
var15 = NEW_core__Bytes(&type_core__Bytes);
{
((void(*)(val* self, char* p0))(var15->class->vft[COLOR_core__bytes__Bytes__items_61d]))(var15, var_nns); /* items= on <var15:Bytes>*/
}
{
((void(*)(val* self, long p0))(var15->class->vft[COLOR_core__array__AbstractArrayRead__length_61d]))(var15, var_nslen); /* length= on <var15:Bytes>*/
}
{
((void(*)(val* self, long p0))(var15->class->vft[COLOR_core__bytes__Bytes__capacity_61d]))(var15, var_nslen); /* capacity= on <var15:Bytes>*/
}
{
((void(*)(val* self))(var15->class->vft[COLOR_core__kernel__Object__init]))(var15); /* init on <var15:Bytes>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method stream$StringReader$eof for (self: StringReader): Bool */
short int core___core__StringReader___Reader__eof(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
val* var2 /* : String */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__cursor]))(self); /* cursor on <self:StringReader>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__StringReader__source]))(self); /* source on <self:StringReader>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var2); /* byte_length on <var2:String>*/
}
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
/* method stream$StringReader$init for (self: StringReader) */
void core___core__StringReader___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__StringReader___core__kernel__Object__init]))(self); /* init on <self:StringReader>*/
}
RET_LABEL:;
}
