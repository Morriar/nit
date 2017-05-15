#include "core__string_search.sep.0.h"
/* method string_search$Pattern$search_index_in for (self: Pattern, Text, Int): Int */
long core___core__Pattern___search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "search_index_in", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 20);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string_search$Pattern$search_in for (self: Pattern, Text, Int): nullable Match */
val* core___core__Pattern___search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "search_in", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 33);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method string_search$Pattern$search_all_in for (self: Pattern, Text): Array[Match] */
val* core___core__Pattern___search_all_in(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var_s /* var s: Text */;
val* var1 /* : Array[Match] */;
val* var_res /* var res: Array[Match] */;
val* var2 /* : nullable Match */;
val* var_match /* var match: nullable Match */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
val* var6 /* : nullable Match */;
var_s = p0;
var1 = NEW_core__Array(&type_core__Array__core__Match);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[Match]>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__string_search__Pattern__search_in]))(self, var_s, 0l); /* search_in on <self:Pattern>*/
}
var_match = var2;
for(;;) {
if (var_match == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_match->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_match, ((val*)NULL)); /* != on <var_match:nullable Match>*/
var3 = var4;
}
if (var3){
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var_match); /* add on <var_res:Array[Match]>*/
}
{
var5 = ((long(*)(val* self))(var_match->class->vft[COLOR_core__string_search__Match__after]))(var_match); /* after on <var_match:nullable Match(Match)>*/
}
{
var6 = ((val*(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__string_search__Pattern__search_in]))(self, var_s, var5); /* search_in on <self:Pattern>*/
}
var_match = var6;
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
/* method string_search$Pattern$split_in for (self: Pattern, Text): Array[Match] */
val* core___core__Pattern___split_in(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var_s /* var s: Text */;
val* var1 /* : Array[Match] */;
val* var_res /* var res: Array[Match] */;
long var_i /* var i: Int */;
val* var2 /* : nullable Match */;
val* var_match /* var match: nullable Match */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
long var_len /* var len: Int */;
val* var10 /* : Match */;
val* var11 /* : String */;
long var12 /* : Int */;
val* var13 /* : nullable Match */;
val* var14 /* : Match */;
val* var15 /* : String */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
var_s = p0;
var1 = NEW_core__Array(&type_core__Array__core__Match);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[Match]>*/
}
var_res = var1;
var_i = 0l;
{
var2 = ((val*(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__string_search__Pattern__search_in]))(self, var_s, 0l); /* search_in on <self:Pattern>*/
}
var_match = var2;
for(;;) {
if (var_match == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_match->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_match, ((val*)NULL)); /* != on <var_match:nullable Match>*/
var3 = var4;
}
if (var3){
{
var5 = ((long(*)(val* self))(var_match->class->vft[COLOR_core__string_search__Match__from]))(var_match); /* from on <var_match:nullable Match(Match)>*/
}
{
{ /* Inline kernel$Int$- (var5,var_i) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var8 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var9 = var5 - var_i;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_len = var6;
var10 = NEW_core__Match(&type_core__Match);
{
var11 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Text>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__string_search__Match__string_61d]))(var10, var11); /* string= on <var10:Match>*/
}
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_core__string_search__Match__from_61d]))(var10, var_i); /* from= on <var10:Match>*/
}
{
((void(*)(val* self, long p0))(var10->class->vft[COLOR_core__string_search__Match__length_61d]))(var10, var_len); /* length= on <var10:Match>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:Match>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var10); /* add on <var_res:Array[Match]>*/
}
{
var12 = ((long(*)(val* self))(var_match->class->vft[COLOR_core__string_search__Match__after]))(var_match); /* after on <var_match:nullable Match(Match)>*/
}
var_i = var12;
{
var13 = ((val*(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__string_search__Pattern__search_in]))(self, var_s, var_i); /* search_in on <self:Pattern>*/
}
var_match = var13;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var14 = NEW_core__Match(&type_core__Match);
{
var15 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Text>*/
}
{
var16 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text>*/
}
{
{ /* Inline kernel$Int$- (var16,var_i) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var19 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var23 = var16 - var_i;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_core__string_search__Match__string_61d]))(var14, var15); /* string= on <var14:Match>*/
}
{
((void(*)(val* self, long p0))(var14->class->vft[COLOR_core__string_search__Match__from_61d]))(var14, var_i); /* from= on <var14:Match>*/
}
{
((void(*)(val* self, long p0))(var14->class->vft[COLOR_core__string_search__Match__length_61d]))(var14, var17); /* length= on <var14:Match>*/
}
{
((void(*)(val* self))(var14->class->vft[COLOR_core__kernel__Object__init]))(var14); /* init on <var14:Match>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var14); /* add on <var_res:Array[Match]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Pattern$is_in for (self: Pattern, Text): Bool */
short int core___core__Pattern___is_in(val* self, val* p0) {
short int var /* : Bool */;
val* var_s /* var s: Text */;
long var1 /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
var_s = p0;
{
var1 = ((long(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__string_search__Pattern__search_index_in]))(self, var_s, 0l); /* search_index_in on <self:Pattern>*/
}
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var4 = -1l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var1,var2) on <var1:Int> */
var7 = var1 == var2;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$BM_Pattern$to_s for (self: BM_Pattern): String */
val* core___core__BM_Pattern___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _motif");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 103);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$BM_Pattern$search_index_in for (self: BM_Pattern, Text, Int): Int */
long core___core__BM_Pattern___Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var_n /* var n: Int */;
long var6 /* : Int */;
long var_m /* var m: Int */;
long var_j /* var j: Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var_i /* var i: Int */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
short int var42 /* : Bool */;
short int var_ /* var : Bool */;
val* var43 /* : String */;
uint32_t var44 /* : Char */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
uint32_t var52 /* : Char */;
short int var53 /* : Bool */;
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
val* var70 /* : Array[Int] */;
val* var71 /* : nullable Object */;
long var72 /* : Int */;
long var_gs /* var gs: Int */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
uint32_t var80 /* : Char */;
long var81 /* : Int */;
long var82 /* : Int */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
long var88 /* : Int */;
long var89 /* : Int */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
long var95 /* : Int */;
long var96 /* : Int */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
long var102 /* : Int */;
long var_bc /* var bc: Int */;
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
long var117 /* : Int */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
long var123 /* : Int */;
long var125 /* : Int */;
long var127 /* : Int */;
var_s = p0;
var_from = p1;
{
{ /* Inline kernel$Int$>= (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var_from >= 0l;
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 108);
fatal_exit(1);
}
{
var5 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_n = var5;
var6 = self->attrs[COLOR_core__string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
var_m = var6;
var_j = var_from;
for(;;) {
{
{ /* Inline kernel$Int$- (var_n,var_m) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <var_m:Int> isa OTHER */
/* <var_m:Int> isa OTHER */
var9 = 1; /* easy <var_m:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var_n - var_m;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var7 + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_j,var14) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var23 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var27 = var_j < var14;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline kernel$Int$- (var_m,1l) on <var_m:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var34 = var_m - 1l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_i = var28;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var38 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var42 = var_i >= 0l;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_ = var36;
if (var36){
var43 = self->attrs[COLOR_core__string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _motif");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 115);
fatal_exit(1);
}
{
var44 = ((uint32_t(*)(val* self, long p0))(var43->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var43, var_i); /* [] on <var43:String>*/
}
{
{ /* Inline kernel$Int$+ (var_i,var_j) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_j:Int> isa OTHER */
/* <var_j:Int> isa OTHER */
var47 = 1; /* easy <var_j:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var51 = var_i + var_j;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
var52 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var45); /* [] on <var_s:Text>*/
}
{
{ /* Inline kernel$Char$== (var44,var52) on <var44:Char> */
var55 = var44 == var52;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var35 = var53;
} else {
var35 = var_;
}
if (var35){
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var58 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var62 = var_i - 1l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_i = var56;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$< (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var65 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var69 = var_i < 0l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
var = var_j;
goto RET_LABEL;
} else {
var70 = self->attrs[COLOR_core__string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _gs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 119);
fatal_exit(1);
}
{
var71 = ((val*(*)(val* self, long p0))(var70->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var70, var_i); /* [] on <var70:Array[Int]>*/
}
var72 = (long)(var71)>>2;
var_gs = var72;
{
{ /* Inline kernel$Int$+ (var_i,var_j) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_j:Int> isa OTHER */
/* <var_j:Int> isa OTHER */
var75 = 1; /* easy <var_j:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var79 = var_i + var_j;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
{
var80 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var73); /* [] on <var_s:Text>*/
}
{
var81 = ((long(*)(val* self, uint32_t p0))(self->class->vft[COLOR_core__string_search__BM_Pattern__bc]))(self, var80); /* bc on <self:BM_Pattern>*/
}
{
{ /* Inline kernel$Int$- (var81,var_m) on <var81:Int> */
/* Covariant cast for argument 0 (i) <var_m:Int> isa OTHER */
/* <var_m:Int> isa OTHER */
var84 = 1; /* easy <var_m:Int> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var88 = var81 - var_m;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var82,1l) on <var82:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var91 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var95 = var82 + 1l;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var89,var_i) on <var89:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var98 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var102 = var89 + var_i;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var_bc = var96;
{
{ /* Inline kernel$Int$> (var_gs,var_bc) on <var_gs:Int> */
/* Covariant cast for argument 0 (i) <var_bc:Int> isa OTHER */
/* <var_bc:Int> isa OTHER */
var105 = 1; /* easy <var_bc:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var109 = var_gs > var_bc;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
if (var103){
{
{ /* Inline kernel$Int$+ (var_j,var_gs) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_gs:Int> isa OTHER */
/* <var_gs:Int> isa OTHER */
var112 = 1; /* easy <var_gs:Int> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var116 = var_j + var_gs;
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var_j = var110;
} else {
{
{ /* Inline kernel$Int$+ (var_j,var_bc) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_bc:Int> isa OTHER */
/* <var_bc:Int> isa OTHER */
var119 = 1; /* easy <var_bc:Int> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var123 = var_j + var_bc;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var_j = var117;
}
}
} else {
goto BREAK_label124;
}
}
BREAK_label124: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var127 = -1l;
var125 = var127;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
var = var125;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$BM_Pattern$search_in for (self: BM_Pattern, Text, Int): nullable Match */
val* core___core__BM_Pattern___Pattern__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_to /* var to: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Match */;
val* var7 /* : String */;
long var8 /* : Int */;
var_s = p0;
var_from = p1;
{
var1 = ((long(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_core__string_search__Pattern__search_index_in]))(self, var_s, var_from); /* search_index_in on <self:BM_Pattern>*/
}
var_to = var1;
{
{ /* Inline kernel$Int$< (var_to,0l) on <var_to:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_to < 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
var6 = NEW_core__Match(&type_core__Match);
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Text>*/
}
var8 = self->attrs[COLOR_core__string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__string_search__Match__string_61d]))(var6, var7); /* string= on <var6:Match>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_core__string_search__Match__from_61d]))(var6, var_to); /* from= on <var6:Match>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_core__string_search__Match__length_61d]))(var6, var8); /* length= on <var6:Match>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:Match>*/
}
var = var6;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search$BM_Pattern$init for (self: BM_Pattern) */
void core___core__BM_Pattern___core__kernel__Object__init(val* self) {
val* var /* : String */;
long var1 /* : Int */;
val* var2 /* : Array[Int] */;
long var3 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__BM_Pattern___core__kernel__Object__init]))(self); /* init on <self:BM_Pattern>*/
}
var = self->attrs[COLOR_core__string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _motif");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 145);
fatal_exit(1);
}
{
var1 = ((long(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__length]))(var); /* length on <var:String>*/
}
self->attrs[COLOR_core__string_search__BM_Pattern___length].l = var1; /* _length on <self:BM_Pattern> */
var2 = NEW_core__Array(&type_core__Array__core__Int);
var3 = self->attrs[COLOR_core__string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_core__array__Array__with_capacity]))(var2, var3); /* with_capacity on <var2:Array[Int]>*/
}
self->attrs[COLOR_core__string_search__BM_Pattern___gs].val = var2; /* _gs on <self:BM_Pattern> */
{
((void(*)(val* self))(self->class->vft[COLOR_core__string_search__BM_Pattern__compute_gs]))(self); /* compute_gs on <self:BM_Pattern>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__string_search__BM_Pattern__compute_bc]))(self); /* compute_bc on <self:BM_Pattern>*/
}
RET_LABEL:;
}
/* method string_search$BM_Pattern$motif for (self: BM_Pattern): String */
val* core___core__BM_Pattern___motif(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _motif");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 151);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$BM_Pattern$motif= for (self: BM_Pattern, String) */
void core___core__BM_Pattern___motif_61d(val* self, val* p0) {
self->attrs[COLOR_core__string_search__BM_Pattern___motif].val = p0; /* _motif on <self:BM_Pattern> */
RET_LABEL:;
}
/* method string_search$BM_Pattern$length for (self: BM_Pattern): Int */
long core___core__BM_Pattern___length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$BM_Pattern$length= for (self: BM_Pattern, Int) */
void core___core__BM_Pattern___length_61d(val* self, long p0) {
self->attrs[COLOR_core__string_search__BM_Pattern___length].l = p0; /* _length on <self:BM_Pattern> */
RET_LABEL:;
}
/* method string_search$BM_Pattern$bc for (self: BM_Pattern, Char): Int */
long core___core__BM_Pattern___bc(val* self, uint32_t p0) {
long var /* : Int */;
uint32_t var_e /* var e: Char */;
val* var1 /* : ArrayMap[Char, Int] */;
val* var2 /* : nullable Object */;
short int var3 /* : Bool */;
val* var4 /* : ArrayMap[Char, Int] */;
val* var5 /* : nullable Object */;
val* var6 /* : nullable Object */;
long var7 /* : Int */;
long var8 /* : Int */;
var_e = p0;
var1 = self->attrs[COLOR_core__string_search__BM_Pattern___bc_table].val; /* _bc_table on <self:BM_Pattern> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bc_table");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 159);
fatal_exit(1);
}
{
var2 = (val*)((long)(var_e)<<2|2);
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var1, var2); /* has_key on <var1:ArrayMap[Char, Int]>*/
}
if (var3){
var4 = self->attrs[COLOR_core__string_search__BM_Pattern___bc_table].val; /* _bc_table on <self:BM_Pattern> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bc_table");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 160);
fatal_exit(1);
}
{
var5 = (val*)((long)(var_e)<<2|2);
var6 = ((val*(*)(val* self, val* p0))(var4->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var4, var5); /* [] on <var4:ArrayMap[Char, Int]>*/
}
var7 = (long)(var6)>>2;
var = var7;
goto RET_LABEL;
} else {
var8 = self->attrs[COLOR_core__string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
var = var8;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search$BM_Pattern$gs for (self: BM_Pattern): Array[Int] */
val* core___core__BM_Pattern___gs(val* self) {
val* var /* : Array[Int] */;
val* var1 /* : Array[Int] */;
var1 = self->attrs[COLOR_core__string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _gs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 166);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$BM_Pattern$gs= for (self: BM_Pattern, Array[Int]) */
void core___core__BM_Pattern___gs_61d(val* self, val* p0) {
self->attrs[COLOR_core__string_search__BM_Pattern___gs].val = p0; /* _gs on <self:BM_Pattern> */
RET_LABEL:;
}
/* method string_search$BM_Pattern$bc_table for (self: BM_Pattern): ArrayMap[Char, Int] */
val* core___core__BM_Pattern___bc_table(val* self) {
val* var /* : ArrayMap[Char, Int] */;
val* var1 /* : ArrayMap[Char, Int] */;
var1 = self->attrs[COLOR_core__string_search__BM_Pattern___bc_table].val; /* _bc_table on <self:BM_Pattern> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bc_table");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 169);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$BM_Pattern$bc_table= for (self: BM_Pattern, ArrayMap[Char, Int]) */
void core___core__BM_Pattern___bc_table_61d(val* self, val* p0) {
self->attrs[COLOR_core__string_search__BM_Pattern___bc_table].val = p0; /* _bc_table on <self:BM_Pattern> */
RET_LABEL:;
}
/* method string_search$BM_Pattern$compute_bc for (self: BM_Pattern) */
void core___core__BM_Pattern___compute_bc(val* self) {
val* var /* : String */;
val* var_x /* var x: String */;
long var1 /* : Int */;
long var_m /* var m: Int */;
long var_i /* var i: Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
val* var13 /* : ArrayMap[Char, Int] */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : nullable Object */;
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
val* var30 /* : nullable Object */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
var = self->attrs[COLOR_core__string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _motif");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 174);
fatal_exit(1);
}
var_x = var;
var1 = self->attrs[COLOR_core__string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
var_m = var1;
var_i = 0l;
for(;;) {
{
{ /* Inline kernel$Int$- (var_m,1l) on <var_m:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var_m - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_i,var2) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var2:Int> isa OTHER */
/* <var2:Int> isa OTHER */
var8 = 1; /* easy <var2:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_i < var2;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var13 = self->attrs[COLOR_core__string_search__BM_Pattern___bc_table].val; /* _bc_table on <self:BM_Pattern> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bc_table");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 178);
fatal_exit(1);
}
{
var14 = ((val*(*)(val* self))(var_x->class->vft[COLOR_core__abstract_text__Text__chars]))(var_x); /* chars on <var_x:String>*/
}
{
var15 = ((val*(*)(val* self, long p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var14, var_i); /* [] on <var14:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Int$- (var_m,var_i) on <var_m:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var18 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var22 = var_m - var_i;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var25 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name28 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name28);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var29 = var16 - 1l;
var23 = var29;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
var30 = (val*)(var23<<2|1);
((void(*)(val* self, val* p0, val* p1))(var13->class->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var13, var15, var30); /* []= on <var13:ArrayMap[Char, Int]>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var33 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var37 = var_i + 1l;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_i = var31;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method string_search$BM_Pattern$suffixes for (self: BM_Pattern): Array[Int] */
val* core___core__BM_Pattern___suffixes(val* self) {
val* var /* : Array[Int] */;
val* var1 /* : String */;
val* var_x /* var x: String */;
long var2 /* : Int */;
long var_m /* var m: Int */;
val* var3 /* : Array[Int] */;
val* var4 /* : nullable Object */;
val* var_suff /* var suff: Array[Int] */;
long var_f /* var f: Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
long var_g /* var g: Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
long var15 /* : Int */;
long var_i /* var i: Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
short int var_ /* var : Bool */;
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
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
val* var52 /* : nullable Object */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
long var66 /* : Int */;
short int var67 /* : Bool */;
long var68 /* : Int */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
long var74 /* : Int */;
long var75 /* : Int */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
long var81 /* : Int */;
long var82 /* : Int */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
long var88 /* : Int */;
val* var89 /* : nullable Object */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
short int var104 /* : Bool */;
short int var_105 /* var : Bool */;
val* var106 /* : SequenceRead[Char] */;
val* var107 /* : nullable Object */;
val* var108 /* : SequenceRead[Char] */;
long var109 /* : Int */;
short int var111 /* : Bool */;
int cltype112;
int idtype113;
const char* var_class_name114;
long var115 /* : Int */;
long var116 /* : Int */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
long var122 /* : Int */;
long var123 /* : Int */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
const char* var_class_name128;
long var129 /* : Int */;
val* var130 /* : nullable Object */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
long var134 /* : Int */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
long var140 /* : Int */;
long var141 /* : Int */;
short int var143 /* : Bool */;
int cltype144;
int idtype145;
const char* var_class_name146;
long var147 /* : Int */;
val* var148 /* : nullable Object */;
long var149 /* : Int */;
short int var151 /* : Bool */;
int cltype152;
int idtype153;
const char* var_class_name154;
long var155 /* : Int */;
var1 = self->attrs[COLOR_core__string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _motif");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 185);
fatal_exit(1);
}
var_x = var1;
var2 = self->attrs[COLOR_core__string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
var_m = var2;
var3 = NEW_core__Array(&type_core__Array__core__Int);
{
var4 = (val*)(var_m<<2|1);
((void(*)(val* self, val* p0, long p1))(var3->class->vft[COLOR_core__array__Array__filled_with]))(var3, var4, var_m); /* filled_with on <var3:Array[Int]>*/
}
var_suff = var3;
var_f = 0l;
{
{ /* Inline kernel$Int$- (var_m,1l) on <var_m:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var8 = var_m - 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_g = var5;
{
{ /* Inline kernel$Int$- (var_m,2l) on <var_m:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var11 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var15 = var_m - 2l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_i = var9;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var18 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var22 = var_i >= 0l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline kernel$Int$> (var_i,var_g) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_g:Int> isa OTHER */
/* <var_g:Int> isa OTHER */
var26 = 1; /* easy <var_g:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var30 = var_i > var_g;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_ = var24;
if (var24){
{
{ /* Inline kernel$Int$+ (var_i,var_m) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_m:Int> isa OTHER */
/* <var_m:Int> isa OTHER */
var33 = 1; /* easy <var_m:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var37 = var_i + var_m;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var31,1l) on <var31:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var40 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var44 = var31 - 1l;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var38,var_f) on <var38:Int> */
/* Covariant cast for argument 0 (i) <var_f:Int> isa OTHER */
/* <var_f:Int> isa OTHER */
var47 = 1; /* easy <var_f:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var51 = var38 - var_f;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
var52 = ((val*(*)(val* self, long p0))(var_suff->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_suff, var45); /* [] on <var_suff:Array[Int]>*/
}
{
{ /* Inline kernel$Int$- (var_i,var_g) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_g:Int> isa OTHER */
/* <var_g:Int> isa OTHER */
var55 = 1; /* easy <var_g:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var59 = var_i - var_g;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var52,var53) on <var52:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var53:Int> isa OTHER */
/* <var53:Int> isa OTHER */
var62 = 1; /* easy <var53:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var66 = (long)(var52)>>2;
var67 = var66 < var53;
var60 = var67;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var23 = var60;
} else {
var23 = var_;
}
if (var23){
{
{ /* Inline kernel$Int$+ (var_i,var_m) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_m:Int> isa OTHER */
/* <var_m:Int> isa OTHER */
var70 = 1; /* easy <var_m:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var74 = var_i + var_m;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var68,1l) on <var68:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var77 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var81 = var68 - 1l;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var75,var_f) on <var75:Int> */
/* Covariant cast for argument 0 (i) <var_f:Int> isa OTHER */
/* <var_f:Int> isa OTHER */
var84 = 1; /* easy <var_f:Int> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var88 = var75 - var_f;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
{
var89 = ((val*(*)(val* self, long p0))(var_suff->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_suff, var82); /* [] on <var_suff:Array[Int]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_suff->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_suff, var_i, var89); /* []= on <var_suff:Array[Int]>*/
}
} else {
{
{ /* Inline kernel$Int$< (var_i,var_g) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_g:Int> isa OTHER */
/* <var_g:Int> isa OTHER */
var92 = 1; /* easy <var_g:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var96 = var_i < var_g;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
if (var90){
var_g = var_i;
} else {
}
var_f = var_i;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_g,0l) on <var_g:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var100 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var104 = var_g >= 0l;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var_105 = var98;
if (var98){
{
var106 = ((val*(*)(val* self))(var_x->class->vft[COLOR_core__abstract_text__Text__chars]))(var_x); /* chars on <var_x:String>*/
}
{
var107 = ((val*(*)(val* self, long p0))((((long)var106&3)?class_info[((long)var106&3)]:var106->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var106, var_g); /* [] on <var106:SequenceRead[Char]>*/
}
{
var108 = ((val*(*)(val* self))(var_x->class->vft[COLOR_core__abstract_text__Text__chars]))(var_x); /* chars on <var_x:String>*/
}
{
{ /* Inline kernel$Int$+ (var_g,var_m) on <var_g:Int> */
/* Covariant cast for argument 0 (i) <var_m:Int> isa OTHER */
/* <var_m:Int> isa OTHER */
var111 = 1; /* easy <var_m:Int> isa OTHER*/
if (unlikely(!var111)) {
var_class_name114 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name114);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var115 = var_g + var_m;
var109 = var115;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var109,1l) on <var109:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var118 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var122 = var109 - 1l;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var116,var_f) on <var116:Int> */
/* Covariant cast for argument 0 (i) <var_f:Int> isa OTHER */
/* <var_f:Int> isa OTHER */
var125 = 1; /* easy <var_f:Int> isa OTHER*/
if (unlikely(!var125)) {
var_class_name128 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name128);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var129 = var116 - var_f;
var123 = var129;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
}
{
var130 = ((val*(*)(val* self, long p0))((((long)var108&3)?class_info[((long)var108&3)]:var108->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var108, var123); /* [] on <var108:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var107,var130) on <var107:nullable Object(Char)> */
var133 = var107 == var130;
var131 = var133;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
var97 = var131;
} else {
var97 = var_105;
}
if (var97){
{
{ /* Inline kernel$Int$- (var_g,1l) on <var_g:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var136 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var136)) {
var_class_name139 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var140 = var_g - 1l;
var134 = var140;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
var_g = var134;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$- (var_f,var_g) on <var_f:Int> */
/* Covariant cast for argument 0 (i) <var_g:Int> isa OTHER */
/* <var_g:Int> isa OTHER */
var143 = 1; /* easy <var_g:Int> isa OTHER*/
if (unlikely(!var143)) {
var_class_name146 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name146);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var147 = var_f - var_g;
var141 = var147;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
{
var148 = (val*)(var141<<2|1);
((void(*)(val* self, long p0, val* p1))(var_suff->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_suff, var_i, var148); /* []= on <var_suff:Array[Int]>*/
}
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var151 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var151)) {
var_class_name154 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name154);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var155 = var_i - 1l;
var149 = var155;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
var_i = var149;
} else {
goto BREAK_label156;
}
}
BREAK_label156: (void)0;
var = var_suff;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$BM_Pattern$compute_gs for (self: BM_Pattern) */
void core___core__BM_Pattern___compute_gs(val* self) {
long var /* : Int */;
long var_m /* var m: Int */;
val* var1 /* : Array[Int] */;
val* var_suff /* var suff: Array[Int] */;
long var_i /* var i: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Array[Int] */;
val* var7 /* : nullable Object */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var_j /* var j: Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
long var22 /* : Int */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
long var33 /* : Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var_ /* var : Bool */;
val* var39 /* : nullable Object */;
long var40 /* : Int */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
long var50 /* : Int */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
long var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
long var64 /* : Int */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
short int var71 /* : Bool */;
val* var72 /* : Array[Int] */;
val* var73 /* : nullable Object */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
long var77 /* : Int */;
val* var78 /* : Array[Int] */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
long var86 /* : Int */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
long var92 /* : Int */;
val* var93 /* : nullable Object */;
long var94 /* : Int */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name99;
long var100 /* : Int */;
long var102 /* : Int */;
short int var104 /* : Bool */;
int cltype105;
int idtype106;
const char* var_class_name107;
long var108 /* : Int */;
long var110 /* : Int */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
long var116 /* : Int */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
short int var123 /* : Bool */;
val* var124 /* : Array[Int] */;
long var125 /* : Int */;
short int var127 /* : Bool */;
int cltype128;
int idtype129;
const char* var_class_name130;
long var131 /* : Int */;
val* var132 /* : nullable Object */;
long var133 /* : Int */;
short int var135 /* : Bool */;
int cltype136;
int idtype137;
const char* var_class_name138;
long var139 /* : Int */;
long var140 /* : Int */;
long var141 /* : Int */;
short int var143 /* : Bool */;
int cltype144;
int idtype145;
const char* var_class_name146;
long var147 /* : Int */;
long var148 /* : Int */;
short int var150 /* : Bool */;
int cltype151;
int idtype152;
const char* var_class_name153;
long var154 /* : Int */;
val* var155 /* : nullable Object */;
long var156 /* : Int */;
short int var158 /* : Bool */;
int cltype159;
int idtype160;
const char* var_class_name161;
long var162 /* : Int */;
var = self->attrs[COLOR_core__string_search__BM_Pattern___length].l; /* _length on <self:BM_Pattern> */
var_m = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__string_search__BM_Pattern__suffixes]))(self); /* suffixes on <self:BM_Pattern>*/
}
var_suff = var1;
var_i = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_m) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_m:Int> isa OTHER */
/* <var_m:Int> isa OTHER */
var4 = 1; /* easy <var_m:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_i < var_m;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var6 = self->attrs[COLOR_core__string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _gs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 212);
fatal_exit(1);
}
{
var7 = (val*)(var_m<<2|1);
((void(*)(val* self, long p0, val* p1))(var6->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var6, var_i, var7); /* []= on <var6:Array[Int]>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_i + 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_i = var8;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var_j = 0l;
{
{ /* Inline kernel$Int$- (var_m,1l) on <var_m:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var17 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var21 = var_m - 1l;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var_i = var15;
for(;;) {
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var24 = -1l;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel$Int$>= (var_i,var22) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var27 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var31 = var_i >= var22;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var35 = -1l;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_i,var33) on <var_i:Int> */
var38 = var_i == var33;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_ = var36;
if (var36){
var32 = var_;
} else {
{
var39 = ((val*(*)(val* self, long p0))(var_suff->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_suff, var_i); /* [] on <var_suff:Array[Int]>*/
}
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
{
{ /* Inline kernel$Int$== (var39,var40) on <var39:nullable Object(Int)> */
var50 = (long)(var39)>>2;
var49 = var50 == var40;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var32 = var47;
}
if (var32){
for(;;) {
{
{ /* Inline kernel$Int$- (var_m,1l) on <var_m:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var57 = var_m - 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var51,var_i) on <var51:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var60 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var64 = var51 - var_i;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_j,var58) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var58:Int> isa OTHER */
/* <var58:Int> isa OTHER */
var67 = 1; /* easy <var58:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var71 = var_j < var58;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (var65){
var72 = self->attrs[COLOR_core__string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _gs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 220);
fatal_exit(1);
}
{
var73 = ((val*(*)(val* self, long p0))(var72->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var72, var_j); /* [] on <var72:Array[Int]>*/
}
{
{ /* Inline kernel$Int$== (var73,var_m) on <var73:nullable Object(Int)> */
var77 = (long)(var73)>>2;
var76 = var77 == var_m;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
if (var74){
var78 = self->attrs[COLOR_core__string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (unlikely(var78 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _gs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 220);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$- (var_m,1l) on <var_m:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var81 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var85 = var_m - 1l;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var79,var_i) on <var79:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var88 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var92 = var79 - var_i;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
{
var93 = (val*)(var86<<2|1);
((void(*)(val* self, long p0, val* p1))(var78->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var78, var_j, var93); /* []= on <var78:Array[Int]>*/
}
} else {
}
{
{ /* Inline kernel$Int$+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var96 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var96)) {
var_class_name99 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name99);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var100 = var_j + 1l;
var94 = var100;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_j = var94;
} else {
goto BREAK_label101;
}
}
BREAK_label101: (void)0;
} else {
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var104 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var104)) {
var_class_name107 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name107);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var108 = var_i - 1l;
var102 = var108;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var_i = var102;
} else {
goto BREAK_label109;
}
}
BREAK_label109: (void)0;
var_i = 0l;
for(;;) {
{
{ /* Inline kernel$Int$- (var_m,1l) on <var_m:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var112 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var116 = var_m - 1l;
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var_i,var110) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var110:Int> isa OTHER */
/* <var110:Int> isa OTHER */
var119 = 1; /* easy <var110:Int> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var123 = var_i < var110;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
if (var117){
var124 = self->attrs[COLOR_core__string_search__BM_Pattern___gs].val; /* _gs on <self:BM_Pattern> */
if (unlikely(var124 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _gs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 228);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$- (var_m,1l) on <var_m:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var127 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var127)) {
var_class_name130 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name130);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var131 = var_m - 1l;
var125 = var131;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
{
var132 = ((val*(*)(val* self, long p0))(var_suff->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_suff, var_i); /* [] on <var_suff:Array[Int]>*/
}
{
{ /* Inline kernel$Int$- (var125,var132) on <var125:Int> */
/* Covariant cast for argument 0 (i) <var132:nullable Object(Int)> isa OTHER */
/* <var132:nullable Object(Int)> isa OTHER */
var135 = 1; /* easy <var132:nullable Object(Int)> isa OTHER*/
if (unlikely(!var135)) {
var_class_name138 = var132 == NULL ? "null" : (((long)var132&3)?type_info[((long)var132&3)]:var132->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name138);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var139 = (long)(var132)>>2;
var140 = var125 - var139;
var133 = var140;
goto RET_LABEL134;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_m,1l) on <var_m:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var143 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var143)) {
var_class_name146 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name146);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var147 = var_m - 1l;
var141 = var147;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var141,var_i) on <var141:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var150 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var150)) {
var_class_name153 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name153);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var154 = var141 - var_i;
var148 = var154;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
{
var155 = (val*)(var148<<2|1);
((void(*)(val* self, long p0, val* p1))(var124->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var124, var133, var155); /* []= on <var124:Array[Int]>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var158 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var158)) {
var_class_name161 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name161);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var162 = var_i + 1l;
var156 = var162;
goto RET_LABEL157;
RET_LABEL157:(void)0;
}
}
var_i = var156;
} else {
goto BREAK_label163;
}
}
BREAK_label163: (void)0;
RET_LABEL:;
}
/* method string_search$BM_Pattern$hash for (self: BM_Pattern): Int */
long core___core__BM_Pattern___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : String */;
long var2 /* : Int */;
var1 = self->attrs[COLOR_core__string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _motif");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 233);
fatal_exit(1);
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__hash]))(var1); /* hash on <var1:String>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$BM_Pattern$== for (self: BM_Pattern, nullable Object): Bool */
short int core___core__BM_Pattern___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : String */;
val* var4 /* : String */;
short int var5 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa BM_Pattern */
cltype = type_core__BM_Pattern.color;
idtype = type_core__BM_Pattern.id;
if(var_o == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
var3 = var_o->attrs[COLOR_core__string_search__BM_Pattern___motif].val; /* _motif on <var_o:nullable Object(BM_Pattern)> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _motif");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 234);
fatal_exit(1);
}
var4 = self->attrs[COLOR_core__string_search__BM_Pattern___motif].val; /* _motif on <self:BM_Pattern> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _motif");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 234);
fatal_exit(1);
}
{
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, var4); /* == on <var3:String>*/
}
var1 = var5;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Match$string for (self: Match): String */
val* core___core__Match___string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__string_search__Match___string].val; /* _string on <self:Match> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 239);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$Match$string= for (self: Match, String) */
void core___core__Match___string_61d(val* self, val* p0) {
self->attrs[COLOR_core__string_search__Match___string].val = p0; /* _string on <self:Match> */
RET_LABEL:;
}
/* method string_search$Match$from for (self: Match): Int */
long core___core__Match___from(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__string_search__Match___from].l; /* _from on <self:Match> */
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$Match$from= for (self: Match, Int) */
void core___core__Match___from_61d(val* self, long p0) {
self->attrs[COLOR_core__string_search__Match___from].l = p0; /* _from on <self:Match> */
RET_LABEL:;
}
/* method string_search$Match$length for (self: Match): Int */
long core___core__Match___length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__string_search__Match___length].l; /* _length on <self:Match> */
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$Match$length= for (self: Match, Int) */
void core___core__Match___length_61d(val* self, long p0) {
self->attrs[COLOR_core__string_search__Match___length].l = p0; /* _length on <self:Match> */
RET_LABEL:;
}
/* method string_search$Match$after for (self: Match): Int */
long core___core__Match___after(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__from]))(self); /* from on <self:Match>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__length]))(self); /* length on <self:Match>*/
}
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
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Match$to_s for (self: Match): String */
val* core___core__Match___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
long var3 /* : Int */;
val* var4 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__string]))(self); /* string on <self:Match>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__from]))(self); /* from on <self:Match>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__length]))(self); /* length on <self:Match>*/
}
{
var4 = ((val*(*)(val* self, long p0, long p1))(var1->class->vft[COLOR_core__abstract_text__Text__substring]))(var1, var2, var3); /* substring on <var1:String>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Match$text_before for (self: Match): String */
val* core___core__Match___text_before(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
val* var3 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__string]))(self); /* string on <self:Match>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__from]))(self); /* from on <self:Match>*/
}
{
var3 = ((val*(*)(val* self, long p0, long p1))(var1->class->vft[COLOR_core__abstract_text__Text__substring]))(var1, 0l, var2); /* substring on <var1:String>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Match$text_after for (self: Match): String */
val* core___core__Match___text_after(val* self) {
val* var /* : String */;
val* var1 /* : String */;
long var2 /* : Int */;
val* var3 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__string]))(self); /* string on <self:Match>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__after]))(self); /* after on <self:Match>*/
}
{
var3 = ((val*(*)(val* self, long p0))(var1->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var1, var2); /* substring_from on <var1:String>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Match$init for (self: Match) */
void core___core__Match___core__kernel__Object__init(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name20;
long var21 /* : Int */;
val* var22 /* : String */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
short int var30 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Match___core__kernel__Object__init]))(self); /* init on <self:Match>*/
}
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__length]))(self); /* length on <self:Match>*/
}
{
{ /* Inline kernel$Int$>= (var,0l) on <var:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'positive_length\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 298);
fatal_exit(1);
}
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__from]))(self); /* from on <self:Match>*/
}
{
{ /* Inline kernel$Int$>= (var5,0l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var12 = var5 >= 0l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (unlikely(!var6)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'valid_from\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 299);
fatal_exit(1);
}
{
var13 = ((long(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__from]))(self); /* from on <self:Match>*/
}
{
var14 = ((long(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__length]))(self); /* length on <self:Match>*/
}
{
{ /* Inline kernel$Int$+ (var13,var14) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name20 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name20);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var21 = var13 + var14;
var15 = var21;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_core__string_search__Match__string]))(self); /* string on <self:Match>*/
}
{
var23 = ((long(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__Text__length]))(var22); /* length on <var22:String>*/
}
{
{ /* Inline kernel$Int$<= (var15,var23) on <var15:Int> */
/* Covariant cast for argument 0 (i) <var23:Int> isa OTHER */
/* <var23:Int> isa OTHER */
var26 = 1; /* easy <var23:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var30 = var15 <= var23;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (unlikely(!var24)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'valid_after\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 300);
fatal_exit(1);
}
RET_LABEL:;
}
/* method string_search$Char$search_index_in for (self: Char, Text, Int): Int */
long core__string_search___Char___Pattern__search_index_in(uint32_t self, val* p0, long p1) {
long var /* : Int */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_stop /* var stop: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
uint32_t var6 /* : Char */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
long var17 /* : Int */;
long var19 /* : Int */;
var_s = p0;
var_from = p1;
{
var1 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text>*/
}
var_stop = var1;
for(;;) {
{
{ /* Inline kernel$Int$< (var_from,var_stop) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_stop:Int> isa OTHER */
/* <var_stop:Int> isa OTHER */
var4 = 1; /* easy <var_stop:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_from < var_stop;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var_from); /* [] on <var_s:Text>*/
}
{
{ /* Inline kernel$Char$== (var6,self) on <var6:Char> */
var9 = var6 == self;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = var_from;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_from,1l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var12 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var16 = var_from + 1l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_from = var10;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var19 = -1l;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var = var17;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Char$search_index_in for (self: Pattern, Text, Int): Int */
long VIRTUAL_core__string_search___Char___Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
uint32_t var2 /* : Char */;
var2 = (uint32_t)((long)(self)>>2);
var1 = core__string_search___Char___Pattern__search_index_in(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$Char$search_in for (self: Char, Text, Int): nullable Match */
val* core__string_search___Char___Pattern__search_in(uint32_t self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_pos /* var pos: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Match */;
val* var7 /* : String */;
var_s = p0;
var_from = p1;
var1 = core__string_search___Char___Pattern__search_index_in(self, var_s, var_from);
var_pos = var1;
{
{ /* Inline kernel$Int$< (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_pos < 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
var6 = NEW_core__Match(&type_core__Match);
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Text>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__string_search__Match__string_61d]))(var6, var7); /* string= on <var6:Match>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_core__string_search__Match__from_61d]))(var6, var_pos); /* from= on <var6:Match>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_core__string_search__Match__length_61d]))(var6, 1l); /* length= on <var6:Match>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:Match>*/
}
var = var6;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search$Char$search_in for (self: Pattern, Text, Int): nullable Match */
val* VIRTUAL_core__string_search___Char___Pattern__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var1 /* : nullable Match */;
uint32_t var2 /* : Char */;
var2 = (uint32_t)((long)(self)>>2);
var1 = core__string_search___Char___Pattern__search_in(var2, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method string_search$Text$search_index_in for (self: Text, Text, Int): Int */
long core__string_search___Text___Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
long var_stop /* var stop: Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
long var_i /* var i: Int */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
short int var_ /* var : Bool */;
uint32_t var44 /* : Char */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
uint32_t var52 /* : Char */;
short int var53 /* : Bool */;
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
long var70 /* : Int */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
long var76 /* : Int */;
long var78 /* : Int */;
long var80 /* : Int */;
var_s = p0;
var_from = p1;
{
{ /* Inline kernel$Int$>= (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var_from >= 0l;
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 333);
fatal_exit(1);
}
{
var5 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Text__length]))(var_s); /* length on <var_s:Text>*/
}
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var5,var6) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var13 = var5 - var6;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var7 + 1l;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_stop = var14;
for(;;) {
{
{ /* Inline kernel$Int$< (var_from,var_stop) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_stop:Int> isa OTHER */
/* <var_stop:Int> isa OTHER */
var23 = 1; /* easy <var_stop:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var27 = var_from < var_stop;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
var28 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var28,1l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var35 = var28 - 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_i = var29;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var39 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var43 = var_i >= 0l;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_ = var37;
if (var37){
{
var44 = ((uint32_t(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(self, var_i); /* [] on <self:Text>*/
}
{
{ /* Inline kernel$Int$+ (var_i,var_from) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var47 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var51 = var_i + var_from;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
var52 = ((uint32_t(*)(val* self, long p0))(var_s->class->vft[COLOR_core__abstract_text__Text___91d_93d]))(var_s, var45); /* [] on <var_s:Text>*/
}
{
{ /* Inline kernel$Char$== (var44,var52) on <var44:Char> */
var55 = var44 == var52;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var36 = var53;
} else {
var36 = var_;
}
if (var36){
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var58 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var58)) {
var_class_name61 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name61);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var62 = var_i - 1l;
var56 = var62;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var_i = var56;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$< (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var65 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var69 = var_i < 0l;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
var = var_from;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_from,1l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var72 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var76 = var_from + 1l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var_from = var70;
} else {
goto BREAK_label77;
}
}
BREAK_label77: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var80 = -1l;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var = var78;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$search_in for (self: Text, Text, Int): nullable Match */
val* core__string_search___Text___Pattern__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_s /* var s: Text */;
long var_from /* var from: Int */;
long var1 /* : Int */;
long var_pos /* var pos: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Match */;
val* var7 /* : String */;
long var8 /* : Int */;
var_s = p0;
var_from = p1;
{
var1 = ((long(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_core__string_search__Pattern__search_index_in]))(self, var_s, var_from); /* search_index_in on <self:Text>*/
}
var_pos = var1;
{
{ /* Inline kernel$Int$< (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_pos < 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
var6 = NEW_core__Match(&type_core__Match);
{
var7 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_s); /* to_s on <var_s:Text>*/
}
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__string_search__Match__string_61d]))(var6, var7); /* string= on <var6:Match>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_core__string_search__Match__from_61d]))(var6, var_pos); /* from= on <var6:Match>*/
}
{
((void(*)(val* self, long p0))(var6->class->vft[COLOR_core__string_search__Match__length_61d]))(var6, var8); /* length= on <var6:Match>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:Match>*/
}
var = var6;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method string_search$Text$search for (self: Text, Pattern): nullable Match */
val* core__string_search___Text___search(val* self, val* p0) {
val* var /* : nullable Match */;
val* var_pattern /* var pattern: Pattern */;
val* var1 /* : nullable Match */;
var_pattern = p0;
{
var1 = ((val*(*)(val* self, val* p0, long p1))((((long)var_pattern&3)?class_info[((long)var_pattern&3)]:var_pattern->class)->vft[COLOR_core__string_search__Pattern__search_in]))(var_pattern, self, 0l); /* search_in on <var_pattern:Pattern>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$search_from for (self: Text, Pattern, Int): nullable Match */
val* core__string_search___Text___search_from(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_pattern /* var pattern: Pattern */;
long var_from /* var from: Int */;
val* var1 /* : nullable Match */;
var_pattern = p0;
var_from = p1;
{
var1 = ((val*(*)(val* self, val* p0, long p1))((((long)var_pattern&3)?class_info[((long)var_pattern&3)]:var_pattern->class)->vft[COLOR_core__string_search__Pattern__search_in]))(var_pattern, self, var_from); /* search_in on <var_pattern:Pattern>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$search_last for (self: Text, Text): nullable Match */
val* core__string_search___Text___search_last(val* self, val* p0) {
val* var /* : nullable Match */;
val* var_t /* var t: Text */;
long var1 /* : Int */;
val* var2 /* : nullable Match */;
var_t = p0;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, val* p0, long p1))(self->class->vft[COLOR_core__string_search__Text__search_last_up_to]))(self, var_t, var1); /* search_last_up_to on <self:Text>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$search_last_up_to for (self: Text, Text, Int): nullable Match */
val* core__string_search___Text___search_last_up_to(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_t /* var t: Text */;
long var_up_to /* var up_to: Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_i /* var i: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
short int var12 /* : Bool */;
long var13 /* : Int */;
val* var14 /* : Text */;
short int var15 /* : Bool */;
val* var16 /* : Match */;
val* var17 /* : String */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
var_t = p0;
var_up_to = p1;
{
var1 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Text__length]))(var_t); /* length on <var_t:Text>*/
}
{
{ /* Inline kernel$Int$- (var_up_to,var1) on <var_up_to:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var_up_to - var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_i = var2;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var12 = var_i >= 0l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var13 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Text__length]))(var_t); /* length on <var_t:Text>*/
}
{
var14 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_i, var13); /* substring on <self:Text>*/
}
{
var15 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_core__kernel__Object___61d_61d]))(var14, var_t); /* == on <var14:Text>*/
}
if (var15){
var16 = NEW_core__Match(&type_core__Match);
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
var18 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Text__length]))(var_t); /* length on <var_t:Text>*/
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_core__string_search__Match__string_61d]))(var16, var17); /* string= on <var16:Match>*/
}
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_core__string_search__Match__from_61d]))(var16, var_i); /* from= on <var16:Match>*/
}
{
((void(*)(val* self, long p0))(var16->class->vft[COLOR_core__string_search__Match__length_61d]))(var16, var18); /* length= on <var16:Match>*/
}
{
((void(*)(val* self))(var16->class->vft[COLOR_core__kernel__Object__init]))(var16); /* init on <var16:Match>*/
}
var = var16;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var25 = var_i - 1l;
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
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$prefix for (self: Text, Text): nullable Match */
val* core__string_search___Text___prefix(val* self, val* p0) {
val* var /* : nullable Match */;
val* var_t /* var t: Text */;
long var1 /* : Int */;
long var_len /* var len: Int */;
val* var2 /* : Text */;
short int var3 /* : Bool */;
val* var4 /* : Match */;
val* var5 /* : String */;
var_t = p0;
{
var1 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Text__length]))(var_t); /* length on <var_t:Text>*/
}
var_len = var1;
{
var2 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var_len); /* substring on <self:Text>*/
}
{
var3 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var2, var_t); /* == on <var2:Text>*/
}
if (var3){
var4 = NEW_core__Match(&type_core__Match);
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__string_search__Match__string_61d]))(var4, var5); /* string= on <var4:Match>*/
}
{
((void(*)(val* self, long p0))(var4->class->vft[COLOR_core__string_search__Match__from_61d]))(var4, 0l); /* from= on <var4:Match>*/
}
{
((void(*)(val* self, long p0))(var4->class->vft[COLOR_core__string_search__Match__length_61d]))(var4, var_len); /* length= on <var4:Match>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:Match>*/
}
var = var4;
goto RET_LABEL;
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$suffix for (self: Text, Text): nullable Match */
val* core__string_search___Text___suffix(val* self, val* p0) {
val* var /* : nullable Match */;
val* var_t /* var t: Text */;
long var1 /* : Int */;
long var_len /* var len: Int */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_from /* var from: Int */;
val* var7 /* : Text */;
short int var8 /* : Bool */;
val* var9 /* : Match */;
val* var10 /* : String */;
var_t = p0;
{
var1 = ((long(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Text__length]))(var_t); /* length on <var_t:Text>*/
}
var_len = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:Text>*/
}
{
{ /* Inline kernel$Int$- (var2,var_len) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var5 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var2 - var_len;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_from = var3;
{
var7 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var_from, var_len); /* substring on <self:Text>*/
}
{
var8 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Object___61d_61d]))(var7, var_t); /* == on <var7:Text>*/
}
if (var8){
var9 = NEW_core__Match(&type_core__Match);
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_core__string_search__Match__string_61d]))(var9, var10); /* string= on <var9:Match>*/
}
{
((void(*)(val* self, long p0))(var9->class->vft[COLOR_core__string_search__Match__from_61d]))(var9, var_from); /* from= on <var9:Match>*/
}
{
((void(*)(val* self, long p0))(var9->class->vft[COLOR_core__string_search__Match__length_61d]))(var9, var_len); /* length= on <var9:Match>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:Match>*/
}
var = var9;
goto RET_LABEL;
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$search_all for (self: Text, Pattern): Array[Match] */
val* core__string_search___Text___search_all(val* self, val* p0) {
val* var /* : Array[Match] */;
val* var_pattern /* var pattern: Pattern */;
val* var1 /* : Array[Match] */;
var_pattern = p0;
{
var1 = ((val*(*)(val* self, val* p0))((((long)var_pattern&3)?class_info[((long)var_pattern&3)]:var_pattern->class)->vft[COLOR_core__string_search__Pattern__search_all_in]))(var_pattern, self); /* search_all_in on <var_pattern:Pattern>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$split for (self: Text, Pattern): Array[String] */
val* core__string_search___Text___split(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_pattern /* var pattern: Pattern */;
val* var1 /* : Array[Match] */;
val* var_matches /* var matches: Array[Match] */;
val* var2 /* : Array[String] */;
long var3 /* : Int */;
val* var_res /* var res: Array[String] */;
val* var_ /* var : Array[Match] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[Match] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_m /* var m: Match */;
val* var8 /* : String */;
var_pattern = p0;
{
var1 = ((val*(*)(val* self, val* p0))((((long)var_pattern&3)?class_info[((long)var_pattern&3)]:var_pattern->class)->vft[COLOR_core__string_search__Pattern__split_in]))(var_pattern, self); /* split_in on <var_pattern:Pattern>*/
}
var_matches = var1;
var2 = NEW_core__Array(&type_core__Array__core__String);
{
var3 = ((long(*)(val* self))(var_matches->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_matches); /* length on <var_matches:Array[Match]>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_core__array__Array__with_capacity]))(var2, var3); /* with_capacity on <var2:Array[String]>*/
}
var_res = var2;
var_ = var_matches;
{
var4 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Match]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[Match]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[Match]>*/
}
var_m = var7;
{
var8 = ((val*(*)(val* self))(var_m->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_m); /* to_s on <var_m:Match>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var8); /* add on <var_res:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[Match]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[Match]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$split_with for (self: Text, Pattern): Array[String] */
val* core__string_search___Text___split_with(val* self, val* p0) {
val* var /* : Array[String] */;
val* var_pattern /* var pattern: Pattern */;
val* var1 /* : Array[String] */;
var_pattern = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__string_search__Text__split]))(self, var_pattern); /* split on <self:Text>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$split_once_on for (self: Text, Pattern): Array[Text] */
val* core__string_search___Text___split_once_on(val* self, val* p0) {
val* var /* : Array[Text] */;
val* var_pattern /* var pattern: Pattern */;
val* var1 /* : nullable Match */;
val* var_m /* var m: nullable Match */;
val* var2 /* : Array[Text] */;
val* var_res /* var res: Array[Text] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
long var6 /* : Int */;
val* var7 /* : Text */;
long var8 /* : Int */;
val* var9 /* : Text */;
var_pattern = p0;
{
var1 = ((val*(*)(val* self, val* p0, long p1))((((long)var_pattern&3)?class_info[((long)var_pattern&3)]:var_pattern->class)->vft[COLOR_core__string_search__Pattern__search_in]))(var_pattern, self, 0l); /* search_in on <var_pattern:Pattern>*/
}
var_m = var1;
var2 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__core__abstract_text__Text__SELFTYPE]);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:Array[Text]>*/
}
var_res = var2;
if (var_m == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_m->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_m, ((val*)NULL)); /* == on <var_m:nullable Match>*/
var3 = var4;
}
if (var3){
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 465);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, self); /* add on <var_res:Array[Text]>*/
}
} else {
{
var6 = ((long(*)(val* self))(var_m->class->vft[COLOR_core__string_search__Match__from]))(var_m); /* from on <var_m:nullable Match(Match)>*/
}
{
var7 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var6); /* substring on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var7); /* add on <var_res:Array[Text]>*/
}
{
var8 = ((long(*)(val* self))(var_m->class->vft[COLOR_core__string_search__Match__after]))(var_m); /* after on <var_m:nullable Match(Match)>*/
}
{
var9 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_text__Text__substring_from]))(self, var8); /* substring_from on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var9); /* add on <var_res:Array[Text]>*/
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$replace for (self: Text, Pattern, Text): String */
val* core__string_search___Text___replace(val* self, val* p0, val* p1) {
val* var /* : String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_pattern /* var pattern: Pattern */;
val* var_string /* var string: Text */;
val* var2 /* : Array[String] */;
val* var3 /* : String */;
/* Covariant cast for argument 1 (string) <p1:Text> isa SELFTYPE */
/* <p1:Text> isa SELFTYPE */
type_struct = self->type->resolution_table->types[COLOR_core__abstract_text__Text__SELFTYPE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELFTYPE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__string_search, 473);
fatal_exit(1);
}
var_pattern = p0;
var_string = p1;
{
var2 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__string_search__Text__split_with]))(self, var_pattern); /* split_with on <self:Text>*/
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(var2->class->vft[COLOR_core__abstract_text__Collection__join]))(var2, var_string, ((val*)NULL)); /* join on <var2:Array[String]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$has for (self: Text, Pattern): Bool */
short int core__string_search___Text___has(val* self, val* p0) {
short int var /* : Bool */;
val* var_pattern /* var pattern: Pattern */;
short int var1 /* : Bool */;
var_pattern = p0;
{
var1 = ((short int(*)(val* self, val* p0))((((long)var_pattern&3)?class_info[((long)var_pattern&3)]:var_pattern->class)->vft[COLOR_core__string_search__Pattern__is_in]))(var_pattern, self); /* is_in on <var_pattern:Pattern>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method string_search$Text$remove_all for (self: Text, Pattern): String */
val* core__string_search___Text___remove_all(val* self, val* p0) {
val* var /* : String */;
val* var_pattern /* var pattern: Pattern */;
val* var1 /* : Array[String] */;
val* var2 /* : String */;
var_pattern = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__string_search__Text__split]))(self, var_pattern); /* split on <self:Text>*/
}
{
var2 = ((val*(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_core__abstract_text__Collection__join]))(var1, ((val*)NULL), ((val*)NULL)); /* join on <var1:Array[String]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
