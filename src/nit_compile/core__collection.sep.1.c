#include "core__collection.sep.0.h"
/* method collection#SequenceRead#levenshtein_distance for (self: SequenceRead[nullable Object], SequenceRead[nullable Object]): Int */
long core__collection___SequenceRead___levenshtein_distance(val* self, val* p0) {
long var /* : Int */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: SequenceRead[nullable Object] */;
long var2 /* : Int */;
long var_slen /* var slen: Int */;
long var3 /* : Int */;
long var_olen /* var olen: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Array[Int] */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
val* var_v0 /* var v0: Array[Int] */;
val* var19 /* : Array[Int] */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var_v1 /* var v1: Array[Int] */;
long var_j /* var j: Int */;
long var_ /* var : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
val* var34 /* : nullable Object */;
long var35 /* : Int */;
long var_i /* var i: Int */;
long var_36 /* var : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
val* var52 /* : nullable Object */;
long var_j53 /* var j: Int */;
long var_54 /* var : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
val* var63 /* : nullable Object */;
long var64 /* : Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
long var70 /* : Int */;
long var71 /* : Int */;
long var_cost1 /* var cost1: Int */;
long var72 /* : Int */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
long var78 /* : Int */;
val* var79 /* : nullable Object */;
long var80 /* : Int */;
short int var82 /* : Bool */;
int cltype83;
int idtype84;
const char* var_class_name85;
long var86 /* : Int */;
long var87 /* : Int */;
long var_cost2 /* var cost2: Int */;
val* var88 /* : nullable Object */;
long var89 /* : Int */;
long var_cost3 /* var cost3: Int */;
val* var90 /* : nullable Object */;
val* var91 /* : nullable Object */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
long var94 /* : Int */;
short int var96 /* : Bool */;
int cltype97;
int idtype98;
const char* var_class_name99;
long var100 /* : Int */;
long var101 /* : Int */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
const char* var_class_name106;
long var107 /* : Int */;
long var108 /* : Int */;
long var109 /* : Int */;
val* var110 /* : nullable Object */;
long var111 /* : Int */;
val* var_tmp /* var tmp: Array[Int] */;
long var112 /* : Int */;
val* var113 /* : nullable Object */;
long var114 /* : Int */;
/* Covariant cast for argument 0 (other) <p0:SequenceRead[nullable Object]> isa SequenceRead[E] */
/* <p0:SequenceRead[nullable Object]> isa SequenceRead[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__SequenceRead__core__SequenceRead___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SequenceRead[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__collection, 26);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:SequenceRead[nullable Object]>*/
}
var_slen = var2;
{
var3 = ((long(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_other); /* length on <var_other:SequenceRead[nullable Object]>*/
}
var_olen = var3;
{
{ /* Inline kernel#Int#== (var_slen,0l) on <var_slen:Int> */
var6 = var_slen == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var = var_olen;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_olen,0l) on <var_olen:Int> */
var9 = var_olen == 0l;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
var = var_slen;
goto RET_LABEL;
} else {
}
{
var10 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Object___61d_61d]))(self, var_other); /* == on <self:SequenceRead[nullable Object]>*/
}
if (var10){
var = 0l;
goto RET_LABEL;
} else {
}
var11 = NEW_core__Array(&type_core__Array__core__Int);
{
{ /* Inline kernel#Int#+ (var_olen,1l) on <var_olen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var_olen + 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
core___core__Array___with_capacity(var11, var12); /* Direct call array#Array#with_capacity on <var11:Array[Int]>*/
}
var_v0 = var11;
var19 = NEW_core__Array(&type_core__Array__core__Int);
{
{ /* Inline kernel#Int#+ (var_olen,1l) on <var_olen:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var_olen + 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
core___core__Array___with_capacity(var19, var20); /* Direct call array#Array#with_capacity on <var19:Array[Int]>*/
}
var_v1 = var19;
var_j = 0l;
var_ = var_olen;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_j,var_) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var29 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var33 = var_j <= var_;
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
var34 = (val*)(var_j<<2|1);
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_v0, var_j, var34); /* Direct call array#Array#[]= on <var_v0:Array[Int]>*/
}
{
var35 = core___core__Int___Discrete__successor(var_j, 1l);
}
var_j = var35;
}
BREAK_label: (void)0;
var_i = 0l;
var_36 = var_slen;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_36) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_36:Int> isa OTHER */
/* <var_36:Int> isa OTHER */
var39 = 1; /* easy <var_36:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var43 = var_i < var_36;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
} else {
goto BREAK_label44;
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
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
{
var52 = (val*)(var45<<2|1);
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_v1, 0l, var52); /* Direct call array#Array#[]= on <var_v1:Array[Int]>*/
}
var_j53 = 0l;
var_54 = var_olen;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j53,var_54) on <var_j53:Int> */
/* Covariant cast for argument 0 (i) <var_54:Int> isa OTHER */
/* <var_54:Int> isa OTHER */
var57 = 1; /* easy <var_54:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var61 = var_j53 < var_54;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
} else {
goto BREAK_label62;
}
{
var63 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_v1, var_j53);
}
{
{ /* Inline kernel#Int#+ (var63,1l) on <var63:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var66 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var70 = (long)(var63)>>2;
var71 = var70 + 1l;
var64 = var71;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var_cost1 = var64;
{
{ /* Inline kernel#Int#+ (var_j53,1l) on <var_j53:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var74 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var78 = var_j53 + 1l;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
{
var79 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_v0, var72);
}
{
{ /* Inline kernel#Int#+ (var79,1l) on <var79:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var82 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var82)) {
var_class_name85 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name85);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var86 = (long)(var79)>>2;
var87 = var86 + 1l;
var80 = var87;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var_cost2 = var80;
{
var88 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_v0, var_j53);
}
var89 = (long)(var88)>>2;
var_cost3 = var89;
{
var90 = ((val*(*)(val* self, long p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_i); /* [] on <self:SequenceRead[nullable Object]>*/
}
{
var91 = ((val*(*)(val* self, long p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_other, var_j53); /* [] on <var_other:SequenceRead[nullable Object]>*/
}
if (var90 == NULL) {
var92 = (var91 != NULL);
} else {
var93 = ((short int(*)(val* self, val* p0))((((long)var90&3)?class_info[((long)var90&3)]:var90->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var90, var91); /* != on <var90:nullable Object>*/
var92 = var93;
}
if (var92){
{
{ /* Inline kernel#Int#+ (var_cost3,1l) on <var_cost3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var96 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var96)) {
var_class_name99 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name99);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var100 = var_cost3 + 1l;
var94 = var100;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_cost3 = var94;
} else {
}
{
{ /* Inline kernel#Int#+ (var_j53,1l) on <var_j53:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var103 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var103)) {
var_class_name106 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name106);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var107 = var_j53 + 1l;
var101 = var107;
goto RET_LABEL102;
RET_LABEL102:(void)0;
}
}
{
var108 = core___core__Int___Comparable__min(var_cost1, var_cost2);
}
{
var109 = core___core__Int___Comparable__min(var108, var_cost3);
}
{
var110 = (val*)(var109<<2|1);
core___core__Array___core__abstract_collection__Sequence___91d_93d_61d(var_v1, var101, var110); /* Direct call array#Array#[]= on <var_v1:Array[Int]>*/
}
{
var111 = core___core__Int___Discrete__successor(var_j53, 1l);
}
var_j53 = var111;
}
BREAK_label62: (void)0;
var_tmp = var_v1;
var_v1 = var_v0;
var_v0 = var_tmp;
{
var112 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var112;
}
BREAK_label44: (void)0;
{
var113 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_v0, var_olen);
}
var114 = (long)(var113)>>2;
var = var114;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method collection#Sequence#subarray for (self: Sequence[nullable Object], Int, Int): Array[nullable Object] */
val* core__collection___Sequence___subarray(val* self, long p0, long p1) {
val* var /* : Array[nullable Object] */;
long var_start /* var start: Int */;
long var_len /* var len: Int */;
val* var1 /* : Array[nullable Object] */;
val* var_a /* var a: Array[nullable Object] */;
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
val* var13 /* : nullable Object */;
long var14 /* : Int */;
var_start = p0;
var_len = p1;
var1 = NEW_core__Array((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Array__core__Sequence___35dE]);
{
core___core__Array___with_capacity(var1, var_len); /* Direct call array#Array#with_capacity on <var1:Array[nullable Object]>*/
}
var_a = var1;
var_i = var_start;
{
{ /* Inline kernel#Int#+ (var_start,var_len) on <var_start:Int> */
/* Covariant cast for argument 0 (i) <var_len:Int> isa OTHER */
/* <var_len:Int> isa OTHER */
var4 = 1; /* easy <var_len:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = var_start + var_len;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var8 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_i < var_;
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
var13 = ((val*(*)(val* self, long p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_i); /* [] on <self:Sequence[nullable Object]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_a, var13); /* Direct call array#Array#add on <var_a:Array[nullable Object]>*/
}
{
var14 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var14;
}
BREAK_label: (void)0;
var = var_a;
goto RET_LABEL;
RET_LABEL:;
return var;
}
