#include "core__math.sep.0.h"
/* method math$Int$rand for (self: Int): Int */
long core__math___Int___rand(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__math___Int_rand___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Int$& for (self: Int, Int): Int */
long core__math___Int____38d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self & p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Int$| for (self: Int, Int): Int */
long core__math___Int____124d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self | p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Int$^ for (self: Int, Int): Int */
long core__math___Int____94d(long self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__math___Int__caret___impl(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Int$unary ~ for (self: Int): Int */
long core__math___Int___unary_32d_126d(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__math___Int__unary_tilde___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Int$sqrt for (self: Int): Int */
long core__math___Int___sqrt(long self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = core__math___Int_sqrt___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Int$gcd for (self: Int, Int): Int */
long core__math___Int___gcd(long self, long p0) {
long var /* : Int */;
long var_o /* var o: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
long var23 /* : Int */;
long var25 /* : Int */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
long var36 /* : Int */;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
long var48 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
long var52 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
long var57 /* : Int */;
long var58 /* : Int */;
long var59 /* : Int */;
long var61 /* : Int */;
long var62 /* : Int */;
long var64 /* : Int */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
long var68 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
short int var78 /* : Bool */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
long var86 /* : Int */;
long var88 /* : Int */;
long var89 /* : Int */;
long var90 /* : Int */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
long var96 /* : Int */;
long var97 /* : Int */;
long var99 /* : Int */;
long var100 /* : Int */;
var_o = p0;
{
{ /* Inline kernel$Int$< (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = self < 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline kernel$Int$unary - (self) on <self:Int> */
var7 = -self;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var8 = core__math___Int___gcd(var5, var_o);
{
{ /* Inline kernel$Int$unary - (var8) on <var8:Int> */
var11 = -var8;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var = var9;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$< (var_o,0l) on <var_o:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var14 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var18 = var_o < 0l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline kernel$Int$unary - (var_o) on <var_o:Int> */
var21 = -var_o;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var22 = core__math___Int___gcd(self, var19);
{
{ /* Inline kernel$Int$unary - (var22) on <var22:Int> */
var25 = -var22;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var = var23;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (self,0l) on <self:Int> */
var29 = self == 0l;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_ = var27;
if (var27){
var26 = var_;
} else {
{
{ /* Inline kernel$Int$== (var_o,self) on <var_o:Int> */
var32 = var_o == self;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var26 = var30;
}
if (var26){
var = var_o;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_o,0l) on <var_o:Int> */
var35 = var_o == 0l;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
var = self;
goto RET_LABEL;
} else {
}
{
{ /* Inline math$Int$& (self,1l) on <self:Int> */
var38 = self & 1l;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var36,0l) on <var36:Int> */
var41 = var36 == 0l;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
{
{ /* Inline math$Int$& (var_o,1l) on <var_o:Int> */
var44 = var_o & 1l;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var42,1l) on <var42:Int> */
var47 = var42 == 1l;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
{ /* Inline kernel$Int$>> (self,1l) on <self:Int> */
var50 = self >> 1l;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var51 = core__math___Int___gcd(var48, var_o);
var = var51;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$>> (self,1l) on <self:Int> */
var54 = self >> 1l;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var_o,1l) on <var_o:Int> */
var57 = var_o >> 1l;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var58 = core__math___Int___gcd(var52, var55);
{
{ /* Inline kernel$Int$<< (var58,1l) on <var58:Int> */
var61 = var58 << 1l;
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
var = var59;
goto RET_LABEL;
}
} else {
}
{
{ /* Inline math$Int$& (var_o,1l) on <var_o:Int> */
var64 = var_o & 1l;
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var62,0l) on <var62:Int> */
var67 = var62 == 0l;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (var65){
{
{ /* Inline kernel$Int$>> (var_o,1l) on <var_o:Int> */
var70 = var_o >> 1l;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var71 = core__math___Int___gcd(self, var68);
var = var71;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$> (self,var_o) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_o:Int> isa OTHER */
/* <var_o:Int> isa OTHER */
var74 = 1; /* easy <var_o:Int> isa OTHER*/
if (unlikely(!var74)) {
var_class_name77 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var78 = self > var_o;
var72 = var78;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
if (var72){
{
{ /* Inline kernel$Int$- (self,var_o) on <self:Int> */
/* Covariant cast for argument 0 (i) <var_o:Int> isa OTHER */
/* <var_o:Int> isa OTHER */
var81 = 1; /* easy <var_o:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var85 = self - var_o;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var79,1l) on <var79:Int> */
var88 = var79 >> 1l;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var89 = core__math___Int___gcd(var86, var_o);
var = var89;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$- (var_o,self) on <var_o:Int> */
/* Covariant cast for argument 0 (i) <self:Int> isa OTHER */
/* <self:Int> isa OTHER */
var92 = 1; /* easy <self:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var96 = var_o - self;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline kernel$Int$>> (var90,1l) on <var90:Int> */
var99 = var90 >> 1l;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var100 = core__math___Int___gcd(var97, self);
var = var100;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Int$is_even for (self: Int): Bool */
short int core__math___Int___is_even(long self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
{
{ /* Inline kernel$Int$% (self,2l) on <self:Int> */
var3 = self % 2l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var6 = var1 == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Int$is_odd for (self: Int): Bool */
short int core__math___Int___is_odd(long self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
var1 = core__math___Int___is_even(self);
var2 = !var1;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Int$is_prime for (self: Int): Bool */
short int core__math___Int___is_prime(long self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
long var_i /* var i: Int */;
long var10 /* : Int */;
long var_11 /* var : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
long var25 /* : Int */;
{
{ /* Inline kernel$Int$== (self,2l) on <self:Int> */
var3 = self == 2l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$<= (self,1l) on <self:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var8 = self <= 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
var4 = var_;
} else {
var9 = core__math___Int___is_even(self);
var4 = var9;
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
}
var_i = 3l;
var10 = core__math___Int___sqrt(self);
var_11 = var10;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_i,var_11) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_11:Int> isa OTHER */
/* <var_11:Int> isa OTHER */
var14 = 1; /* easy <var_11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var18 = var_i <= var_11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
} else {
goto BREAK_label;
}
{
{ /* Inline kernel$Int$% (self,var_i) on <self:Int> */
var21 = self % var_i;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var19,0l) on <var19:Int> */
var24 = var19 == 0l;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
var = 0;
goto RET_LABEL;
} else {
}
var25 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var25;
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Int$** for (self: Int, Int): Int */
long core__math___Int____42d_42d(long self, long p0) {
long var /* : Int */;
long var_e /* var e: Int */;
double var1 /* : Float */;
double var3 /* : Float */;
double var4 /* : Float */;
double var6 /* : Float */;
double var7 /* : Float */;
long var8 /* : Int */;
long var10 /* : Int */;
var_e = p0;
{
{ /* Inline kernel$Int$to_f (self) on <self:Int> */
var3 = (double)self;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$to_f (var_e) on <var_e:Int> */
var6 = (double)var_e;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var7 = core__math___Float___pow(var1, var4);
{
{ /* Inline kernel$Float$to_i (var7) on <var7:Float> */
var10 = (long)var7;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Int$factorial for (self: Int): Int */
long core__math___Int___factorial(long self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var_res /* var res: Int */;
long var_n /* var n: Int */;
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
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
{
{ /* Inline kernel$Int$>= (self,0l) on <self:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = self >= 0l;
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__math, 163);
fatal_exit(1);
}
var_res = 1l;
var_n = self;
for(;;) {
{
{ /* Inline kernel$Int$> (var_n,0l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var7 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var11 = var_n > 0l;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline kernel$Int$* (var_res,var_n) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var_n:Int> isa OTHER */
/* <var_n:Int> isa OTHER */
var14 = 1; /* easy <var_n:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var18 = var_res * var_n;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_res = var12;
{
{ /* Inline kernel$Int$- (var_n,1l) on <var_n:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var25 = var_n - 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_n = var19;
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
/* method math$Int$is_pow2 for (self: Int): Bool */
short int core__math___Int___is_pow2(long self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var_ /* var : Bool */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
long var10 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
{
{ /* Inline kernel$Int$!= (self,0l) on <self:Int> */
var4 = self == 0l;
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
{ /* Inline kernel$Int$- (self,1l) on <self:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var9 = self - 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline math$Int$& (self,var6) on <self:Int> */
var12 = self & var6;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var10,0l) on <var10:Int> */
var15 = var10 == 0l;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var1 = var13;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Byte$& for (self: Byte, Byte): Byte */
unsigned char core__math___Byte____38d(unsigned char self, unsigned char p0) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = self & p0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Byte$| for (self: Byte, Byte): Byte */
unsigned char core__math___Byte____124d(unsigned char self, unsigned char p0) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = core__math___Byte__pipe___impl(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Byte$^ for (self: Byte, Byte): Byte */
unsigned char core__math___Byte____94d(unsigned char self, unsigned char p0) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = core__math___Byte__caret___impl(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Byte$unary ~ for (self: Byte): Byte */
unsigned char core__math___Byte___unary_32d_126d(unsigned char self) {
unsigned char var /* : Byte */;
unsigned char var1 /* : Byte */;
var1 = core__math___Byte__unary_tilde___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$sqrt for (self: Float): Float */
double core__math___Float___sqrt(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_sqrt___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$cos for (self: Float): Float */
double core__math___Float___cos(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_cos___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$sin for (self: Float): Float */
double core__math___Float___sin(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_sin___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$tan for (self: Float): Float */
double core__math___Float___tan(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_tan___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$acos for (self: Float): Float */
double core__math___Float___acos(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_acos___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$asin for (self: Float): Float */
double core__math___Float___asin(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_asin___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$atan for (self: Float): Float */
double core__math___Float___atan(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_atan___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$abs for (self: Float): Float */
double core__math___Float___abs(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_abs___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$pow for (self: Float, Float): Float */
double core__math___Float___pow(double self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_pow___impl(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$log for (self: Float): Float */
double core__math___Float___log(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_log___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$log_base for (self: Float, Float): Float */
double core__math___Float___log_base(double self, double p0) {
double var /* : Float */;
double var_base /* var base: Float */;
double var1 /* : Float */;
double var2 /* : Float */;
double var3 /* : Float */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var6 /* : Float */;
var_base = p0;
var1 = core__math___Float___log(self);
var2 = core__math___Float___log(var_base);
{
{ /* Inline kernel$Float$/ (var1,var2) on <var1:Float> */
/* Covariant cast for argument 0 (i) <var2:Float> isa OTHER */
/* <var2:Float> isa OTHER */
var5 = 1; /* easy <var2:Float> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var6 = var1 / var2;
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
/* method math$Float$exp for (self: Float): Float */
double core__math___Float___exp(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_exp___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$ceil for (self: Float): Float */
double core__math___Float___ceil(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_ceil___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$floor for (self: Float): Float */
double core__math___Float___floor(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_floor___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$round for (self: Float): Float */
double core__math___Float___round(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_round___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$rand for (self: Float): Float */
double core__math___Float___rand(double self) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_rand___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$hypot_with for (self: Float, Float): Float */
double core__math___Float___hypot_with(double self, double p0) {
double var /* : Float */;
double var1 /* : Float */;
var1 = core__math___Float_hypot_with___impl(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$is_nan for (self: Float): Bool */
short int core__math___Float___is_nan(double self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__math___Float_is_nan___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$is_inf for (self: Float): Int */
long core__math___Float___is_inf(double self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
long var6 /* : Int */;
long var8 /* : Int */;
var1 = core__math___Float___native_is_inf(self);
if (var1){
{
{ /* Inline kernel$Float$< (self,0.0) on <self:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var4 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 530);
fatal_exit(1);
}
var5 = self < 0.0;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var8 = -1l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var = var6;
goto RET_LABEL;
} else {
}
var = 1l;
goto RET_LABEL;
} else {
}
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$native_is_inf for (self: Float): Bool */
short int core__math___Float___native_is_inf(double self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__math___Float_native_is_inf___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$lerp for (self: Float, Float, Float): Float */
double core__math___Float___lerp(double self, double p0, double p1) {
double var /* : Float */;
double var_a /* var a: Float */;
double var_b /* var b: Float */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var4 /* : Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
double var11 /* : Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
double var18 /* : Float */;
double var19 /* : Float */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
double var25 /* : Float */;
var_a = p0;
var_b = p1;
{
{ /* Inline kernel$Float$- (1.0,self) on <1.0:Float> */
/* Covariant cast for argument 0 (i) <self:Float> isa OTHER */
/* <self:Float> isa OTHER */
var3 = 1; /* easy <self:Float> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var4 = 1.0 - self;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var1,var_a) on <var1:Float> */
/* Covariant cast for argument 0 (i) <var_a:Float> isa OTHER */
/* <var_a:Float> isa OTHER */
var7 = 1; /* easy <var_a:Float> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var11 = var1 * var_a;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel$Float$* (self,var_b) on <self:Float> */
/* Covariant cast for argument 0 (i) <var_b:Float> isa OTHER */
/* <var_b:Float> isa OTHER */
var14 = 1; /* easy <var_b:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var18 = self * var_b;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Float$+ (var5,var12) on <var5:Float> */
/* Covariant cast for argument 0 (i) <var12:Float> isa OTHER */
/* <var12:Float> isa OTHER */
var21 = 1; /* easy <var12:Float> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var25 = var5 + var12;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$qerp for (self: Float, Float, Float, Float): Float */
double core__math___Float___qerp(double self, double p0, double p1, double p2) {
double var /* : Float */;
double var_a /* var a: Float */;
double var_handle /* var handle: Float */;
double var_b /* var b: Float */;
double var_p /* var p: Float */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var4 /* : Float */;
double var_i /* var i: Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
double var11 /* : Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
double var18 /* : Float */;
double var19 /* : Float */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
double var25 /* : Float */;
double var26 /* : Float */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
double var32 /* : Float */;
double var33 /* : Float */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
double var39 /* : Float */;
double var40 /* : Float */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
double var46 /* : Float */;
double var47 /* : Float */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
double var53 /* : Float */;
double var54 /* : Float */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
double var60 /* : Float */;
double var61 /* : Float */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
const char* var_class_name66;
double var67 /* : Float */;
double var_r /* var r: Float */;
var_a = p0;
var_handle = p1;
var_b = p2;
var_p = self;
{
{ /* Inline kernel$Float$- (1.0,var_p) on <1.0:Float> */
/* Covariant cast for argument 0 (i) <var_p:Float> isa OTHER */
/* <var_p:Float> isa OTHER */
var3 = 1; /* easy <var_p:Float> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var4 = 1.0 - var_p;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_i = var1;
{
{ /* Inline kernel$Float$* (var_i,var_i) on <var_i:Float> */
/* Covariant cast for argument 0 (i) <var_i:Float> isa OTHER */
/* <var_i:Float> isa OTHER */
var7 = 1; /* easy <var_i:Float> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var11 = var_i * var_i;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var5,var_a) on <var5:Float> */
/* Covariant cast for argument 0 (i) <var_a:Float> isa OTHER */
/* <var_a:Float> isa OTHER */
var14 = 1; /* easy <var_a:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var18 = var5 * var_a;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Float$* (2.0,var_i) on <2.0:Float> */
/* Covariant cast for argument 0 (i) <var_i:Float> isa OTHER */
/* <var_i:Float> isa OTHER */
var21 = 1; /* easy <var_i:Float> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var25 = 2.0 * var_i;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var19,var_p) on <var19:Float> */
/* Covariant cast for argument 0 (i) <var_p:Float> isa OTHER */
/* <var_p:Float> isa OTHER */
var28 = 1; /* easy <var_p:Float> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var32 = var19 * var_p;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var26,var_handle) on <var26:Float> */
/* Covariant cast for argument 0 (i) <var_handle:Float> isa OTHER */
/* <var_handle:Float> isa OTHER */
var35 = 1; /* easy <var_handle:Float> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var39 = var26 * var_handle;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel$Float$+ (var12,var33) on <var12:Float> */
/* Covariant cast for argument 0 (i) <var33:Float> isa OTHER */
/* <var33:Float> isa OTHER */
var42 = 1; /* easy <var33:Float> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var46 = var12 + var33;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var_p,var_p) on <var_p:Float> */
/* Covariant cast for argument 0 (i) <var_p:Float> isa OTHER */
/* <var_p:Float> isa OTHER */
var49 = 1; /* easy <var_p:Float> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var53 = var_p * var_p;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var47,var_b) on <var47:Float> */
/* Covariant cast for argument 0 (i) <var_b:Float> isa OTHER */
/* <var_b:Float> isa OTHER */
var56 = 1; /* easy <var_b:Float> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var60 = var47 * var_b;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel$Float$+ (var40,var54) on <var40:Float> */
/* Covariant cast for argument 0 (i) <var54:Float> isa OTHER */
/* <var54:Float> isa OTHER */
var63 = 1; /* easy <var54:Float> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var67 = var40 + var54;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var_r = var61;
var = var_r;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Float$cerp for (self: Float, Float, Float, Float, Float): Float */
double core__math___Float___cerp(double self, double p0, double p1, double p2, double p3) {
double var /* : Float */;
double var_a /* var a: Float */;
double var_a_handle /* var a_handle: Float */;
double var_b_handle /* var b_handle: Float */;
double var_b /* var b: Float */;
double var_p /* var p: Float */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var4 /* : Float */;
double var_i /* var i: Float */;
double var5 /* : Float */;
short int var7 /* : Bool */;
int cltype8;
int idtype9;
const char* var_class_name10;
double var11 /* : Float */;
double var12 /* : Float */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
double var18 /* : Float */;
double var19 /* : Float */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
double var25 /* : Float */;
double var26 /* : Float */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
double var32 /* : Float */;
double var33 /* : Float */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
double var39 /* : Float */;
double var40 /* : Float */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
const char* var_class_name45;
double var46 /* : Float */;
double var47 /* : Float */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
double var53 /* : Float */;
double var54 /* : Float */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name59;
double var60 /* : Float */;
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
double var75 /* : Float */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
double var81 /* : Float */;
double var82 /* : Float */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
double var88 /* : Float */;
double var89 /* : Float */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
const char* var_class_name94;
double var95 /* : Float */;
double var96 /* : Float */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
double var102 /* : Float */;
double var103 /* : Float */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
double var109 /* : Float */;
double var110 /* : Float */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
double var116 /* : Float */;
double var117 /* : Float */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
double var123 /* : Float */;
double var_r /* var r: Float */;
var_a = p0;
var_a_handle = p1;
var_b_handle = p2;
var_b = p3;
var_p = self;
{
{ /* Inline kernel$Float$- (1.0,var_p) on <1.0:Float> */
/* Covariant cast for argument 0 (i) <var_p:Float> isa OTHER */
/* <var_p:Float> isa OTHER */
var3 = 1; /* easy <var_p:Float> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 536);
fatal_exit(1);
}
var4 = 1.0 - var_p;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_i = var1;
{
{ /* Inline kernel$Float$* (var_i,var_i) on <var_i:Float> */
/* Covariant cast for argument 0 (i) <var_i:Float> isa OTHER */
/* <var_i:Float> isa OTHER */
var7 = 1; /* easy <var_i:Float> isa OTHER*/
if (unlikely(!var7)) {
var_class_name10 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name10);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var11 = var_i * var_i;
var5 = var11;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var5,var_i) on <var5:Float> */
/* Covariant cast for argument 0 (i) <var_i:Float> isa OTHER */
/* <var_i:Float> isa OTHER */
var14 = 1; /* easy <var_i:Float> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var18 = var5 * var_i;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var12,var_a) on <var12:Float> */
/* Covariant cast for argument 0 (i) <var_a:Float> isa OTHER */
/* <var_a:Float> isa OTHER */
var21 = 1; /* easy <var_a:Float> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var25 = var12 * var_a;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel$Float$* (3.0,var_i) on <3.0:Float> */
/* Covariant cast for argument 0 (i) <var_i:Float> isa OTHER */
/* <var_i:Float> isa OTHER */
var28 = 1; /* easy <var_i:Float> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var32 = 3.0 * var_i;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var26,var_i) on <var26:Float> */
/* Covariant cast for argument 0 (i) <var_i:Float> isa OTHER */
/* <var_i:Float> isa OTHER */
var35 = 1; /* easy <var_i:Float> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var39 = var26 * var_i;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var33,var_p) on <var33:Float> */
/* Covariant cast for argument 0 (i) <var_p:Float> isa OTHER */
/* <var_p:Float> isa OTHER */
var42 = 1; /* easy <var_p:Float> isa OTHER*/
if (unlikely(!var42)) {
var_class_name45 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name45);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var46 = var33 * var_p;
var40 = var46;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var40,var_a_handle) on <var40:Float> */
/* Covariant cast for argument 0 (i) <var_a_handle:Float> isa OTHER */
/* <var_a_handle:Float> isa OTHER */
var49 = 1; /* easy <var_a_handle:Float> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var53 = var40 * var_a_handle;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel$Float$+ (var19,var47) on <var19:Float> */
/* Covariant cast for argument 0 (i) <var47:Float> isa OTHER */
/* <var47:Float> isa OTHER */
var56 = 1; /* easy <var47:Float> isa OTHER*/
if (unlikely(!var56)) {
var_class_name59 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name59);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var60 = var19 + var47;
var54 = var60;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel$Float$* (3.0,var_i) on <3.0:Float> */
/* Covariant cast for argument 0 (i) <var_i:Float> isa OTHER */
/* <var_i:Float> isa OTHER */
var63 = 1; /* easy <var_i:Float> isa OTHER*/
if (unlikely(!var63)) {
var_class_name66 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name66);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var67 = 3.0 * var_i;
var61 = var67;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var61,var_p) on <var61:Float> */
/* Covariant cast for argument 0 (i) <var_p:Float> isa OTHER */
/* <var_p:Float> isa OTHER */
var70 = 1; /* easy <var_p:Float> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var74 = var61 * var_p;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var68,var_p) on <var68:Float> */
/* Covariant cast for argument 0 (i) <var_p:Float> isa OTHER */
/* <var_p:Float> isa OTHER */
var77 = 1; /* easy <var_p:Float> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var81 = var68 * var_p;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var75,var_b_handle) on <var75:Float> */
/* Covariant cast for argument 0 (i) <var_b_handle:Float> isa OTHER */
/* <var_b_handle:Float> isa OTHER */
var84 = 1; /* easy <var_b_handle:Float> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var88 = var75 * var_b_handle;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline kernel$Float$+ (var54,var82) on <var54:Float> */
/* Covariant cast for argument 0 (i) <var82:Float> isa OTHER */
/* <var82:Float> isa OTHER */
var91 = 1; /* easy <var82:Float> isa OTHER*/
if (unlikely(!var91)) {
var_class_name94 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name94);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var95 = var54 + var82;
var89 = var95;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var_p,var_p) on <var_p:Float> */
/* Covariant cast for argument 0 (i) <var_p:Float> isa OTHER */
/* <var_p:Float> isa OTHER */
var98 = 1; /* easy <var_p:Float> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var102 = var_p * var_p;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var96,var_p) on <var96:Float> */
/* Covariant cast for argument 0 (i) <var_p:Float> isa OTHER */
/* <var_p:Float> isa OTHER */
var105 = 1; /* easy <var_p:Float> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var109 = var96 * var_p;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
{
{ /* Inline kernel$Float$* (var103,var_b) on <var103:Float> */
/* Covariant cast for argument 0 (i) <var_b:Float> isa OTHER */
/* <var_b:Float> isa OTHER */
var112 = 1; /* easy <var_b:Float> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 537);
fatal_exit(1);
}
var116 = var103 * var_b;
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline kernel$Float$+ (var89,var110) on <var89:Float> */
/* Covariant cast for argument 0 (i) <var110:Float> isa OTHER */
/* <var110:Float> isa OTHER */
var119 = 1; /* easy <var110:Float> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 534);
fatal_exit(1);
}
var123 = var89 + var110;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var_r = var117;
var = var_r;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Comparable$clamp for (self: Comparable, Comparable, Comparable): Comparable */
val* core__math___Comparable___clamp(val* self, val* p0, val* p1) {
val* var /* : Comparable */;
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
val* var_min /* var min: Comparable */;
val* var_max /* var max: Comparable */;
val* var7 /* : Comparable */;
val* var8 /* : Comparable */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const struct type* type_struct12;
const char* var_class_name13;
/* Covariant cast for argument 0 (min) <p0:Comparable> isa OTHER */
/* <p0:Comparable> isa OTHER */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__math, 424);
fatal_exit(1);
}
/* Covariant cast for argument 1 (max) <p1:Comparable> isa OTHER */
/* <p1:Comparable> isa OTHER */
type_struct5 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(cltype3 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype3] == idtype4;
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_core__math, 424);
fatal_exit(1);
}
var_min = p0;
var_max = p1;
{
var7 = ((val*(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__kernel__Comparable__max]))(self, var_min); /* max on <self:Comparable>*/
}
{
var8 = ((val*(*)(val* self, val* p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__kernel__Comparable__min]))(var7, var_max); /* min on <var7:Comparable>*/
}
/* <var8:Comparable> isa OTHER */
type_struct12 = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype10 = type_struct12->color;
idtype11 = type_struct12->id;
if(cltype10 >= (((long)var8&3)?type_info[((long)var8&3)]:var8->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var8&3)?type_info[((long)var8&3)]:var8->type)->type_table[cltype10] == idtype11;
}
if (unlikely(!var9)) {
var_class_name13 = var8 == NULL ? "null" : (((long)var8&3)?type_info[((long)var8&3)]:var8->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__math, 431);
fatal_exit(1);
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Collection$rand for (self: Collection[nullable Object]): nullable Object */
val* core__math___Collection___rand(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
long var2 /* : Int */;
long var3 /* : Int */;
long var_rand_index /* var rand_index: Int */;
val* var_ /* var : Collection[nullable Object] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : Iterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var14 /* : Int */;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:Collection[nullable Object]>*/
}
if (var1){
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__math, 444);
fatal_exit(1);
} else {
}
{
var2 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:Collection[nullable Object]>*/
}
var3 = core__math___Int___rand(var2);
var_rand_index = var3;
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
{
{ /* Inline kernel$Int$== (var_rand_index,0l) on <var_rand_index:Int> */
var10 = var_rand_index == 0l;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var = var_e;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$- (var_rand_index,1l) on <var_rand_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var13 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var_rand_index - 1l;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_rand_index = var11;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:Iterator[nullable Object]>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__math, 451);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method math$Collection$to_shuffle for (self: Collection[nullable Object]): Array[nullable Object] */
val* core__math___Collection___to_shuffle(val* self) {
val* var /* : Array[nullable Object] */;
val* var1 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__array__Collection__to_a]))(self); /* to_a on <self:Collection[nullable Object]>*/
}
var_res = var1;
{
((void(*)(val* self))(var_res->class->vft[COLOR_core__math__AbstractArray__shuffle]))(var_res); /* shuffle on <var_res:Array[nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Collection$sample for (self: Collection[nullable Object], Int): Array[nullable Object] */
val* core__math___Collection___sample(val* self, long p0) {
val* var /* : Array[nullable Object] */;
long var_length /* var length: Int */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Array[nullable Object] */;
val* var7 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_it /* var it: Iterator[nullable Object] */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
long var18 /* : Int */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name23;
long var24 /* : Int */;
long var_i25 /* var i: Int */;
long var26 /* : Int */;
long var_27 /* var : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
long var36 /* : Int */;
long var_j /* var j: Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
long var45 /* : Int */;
var_length = p0;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:Collection[nullable Object]>*/
}
{
{ /* Inline kernel$Int$>= (var_length,var1) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var_length >= var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var6 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__math__Collection__to_shuffle]))(self); /* to_shuffle on <self:Collection[nullable Object]>*/
}
var = var6;
goto RET_LABEL;
} else {
}
var7 = NEW_core__Array((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Array__core__Collection___35dE]);
{
((void(*)(val* self, long p0))(var7->class->vft[COLOR_core__array__Array__with_capacity]))(var7, var_length); /* with_capacity on <var7:Array[nullable Object]>*/
}
var_res = var7;
{
var8 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(self); /* iterator on <self:Collection[nullable Object]>*/
}
var_it = var8;
var_i = 0l;
var_ = var_length;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var11 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var15 = var_i < var_;
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
var16 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_res->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_res, var_i, var16); /* []= on <var_res:Array[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[nullable Object]>*/
}
var17 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var17;
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_res->class->vft[COLOR_core__math__AbstractArray__shuffle]))(var_res); /* shuffle on <var_res:Array[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var_length,1l) on <var_length:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var20 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var20)) {
var_class_name23 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name23);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var24 = var_length + 1l;
var18 = var24;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_i25 = var18;
{
var26 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:Collection[nullable Object]>*/
}
var_27 = var26;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_i25,var_27) on <var_i25:Int> */
/* Covariant cast for argument 0 (i) <var_27:Int> isa OTHER */
/* <var_27:Int> isa OTHER */
var30 = 1; /* easy <var_27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var34 = var_i25 <= var_27;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
} else {
goto BREAK_label35;
}
var36 = core__math___Int___rand(var_i25);
var_j = var36;
{
{ /* Inline kernel$Int$< (var_j,var_length) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_length:Int> isa OTHER */
/* <var_length:Int> isa OTHER */
var39 = 1; /* easy <var_length:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var43 = var_j < var_length;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
var44 = ((val*(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_it); /* item on <var_it:Iterator[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(var_res->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(var_res, var_j, var44); /* []= on <var_res:Array[nullable Object]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_it&3)?class_info[((long)var_it&3)]:var_it->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_it); /* next on <var_it:Iterator[nullable Object]>*/
}
var45 = core___core__Int___Discrete__successor(var_i25, 1l);
var_i25 = var45;
}
BREAK_label35: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$SequenceRead$rand for (self: SequenceRead[nullable Object]): nullable Object */
val* core__math___SequenceRead___Collection__rand(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
val* var5 /* : nullable Object */;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:SequenceRead[nullable Object]>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__math, 506);
fatal_exit(1);
}
{
var3 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:SequenceRead[nullable Object]>*/
}
var4 = core__math___Int___rand(var3);
{
var5 = ((val*(*)(val* self, long p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var4); /* [] on <self:SequenceRead[nullable Object]>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$AbstractArray$shuffle for (self: AbstractArray[nullable Object]) */
void core__math___AbstractArray___shuffle(val* self) {
long var_i /* var i: Int */;
long var /* : Int */;
long var_ /* var : Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
long var_j /* var j: Int */;
val* var21 /* : nullable Object */;
val* var_tmp /* var tmp: nullable Object */;
val* var22 /* : nullable Object */;
long var23 /* : Int */;
var_i = 0l;
{
var = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArray[nullable Object]>*/
}
var_ = var;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var3 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var4 = var_i < var_;
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
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:AbstractArray[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var5,var_i) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var_i:Int> isa OTHER */
/* <var_i:Int> isa OTHER */
var8 = 1; /* easy <var_i:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var12 = var5 - var_i;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var13 = core__math___Int___rand(var6);
{
{ /* Inline kernel$Int$+ (var_i,var13) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var16 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var_i + var13;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_j = var14;
{
var21 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_i); /* [] on <self:AbstractArray[nullable Object]>*/
}
var_tmp = var21;
{
var22 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_j); /* [] on <self:AbstractArray[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(self, var_i, var22); /* []= on <self:AbstractArray[nullable Object]>*/
}
{
((void(*)(val* self, long p0, val* p1))(self->class->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(self, var_j, var_tmp); /* []= on <self:AbstractArray[nullable Object]>*/
}
var23 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var23;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method math$Sys$init for (self: Sys) */
void core__math___Sys___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__math___Sys___core__kernel__Object__init]))(self); /* init on <self:Sys>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__math__Sys__srand]))(self); /* srand on <self:Sys>*/
}
RET_LABEL:;
}
/* method math$Sys$inf for (self: Sys): Float */
double core__math___Sys___inf(val* self) {
double var /* : Float */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var4 /* : Float */;
{
{ /* Inline kernel$Float$/ (1.0,0.0) on <1.0:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var3 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var4 = 1.0 / 0.0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Sys$nan for (self: Sys): Float */
double core__math___Sys___nan(val* self) {
double var /* : Float */;
double var1 /* : Float */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
double var4 /* : Float */;
{
{ /* Inline kernel$Float$/ (0.0,0.0) on <0.0:Float> */
/* Covariant cast for argument 0 (i) <0.0:Float> isa OTHER */
/* <0.0:Float> isa OTHER */
var3 = 1; /* easy <0.0:Float> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Float.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 538);
fatal_exit(1);
}
var4 = 0.0 / 0.0;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Sys$atan2 for (self: Sys, Float, Float): Float */
double core__math___Sys___atan2(val* self, double p0, double p1) {
double var /* : Float */;
double var1 /* : Float */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__math___Sys_atan2___impl(var_for_c_0, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Sys$pi for (self: Sys): Float */
double core__math___Sys___pi(val* self) {
double var /* : Float */;
var = 3.14159265;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method math$Sys$srand_from for (self: Sys, Int) */
void core__math___Sys___srand_from(val* self, long p0) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
core__math___Sys_srand_from___impl(var_for_c_0, p0);
RET_LABEL:;
}
/* method math$Sys$srand for (self: Sys) */
void core__math___Sys___srand(val* self) {
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
core__math___Sys_srand___impl(var_for_c_0);
RET_LABEL:;
}
