#include "core__range.sep.0.h"
/* method range#Range#first for (self: Range[Discrete]): Discrete */
val* core___core__Range___core__abstract_collection__Collection__first(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_core__range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 22);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#first= for (self: Range[Discrete], Discrete) */
void core___core__Range___first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (first) <p0:Discrete> isa E */
/* <p0:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 22);
fatal_exit(1);
}
self->attrs[COLOR_core__range__Range___first].val = p0; /* _first on <self:Range[Discrete]> */
RET_LABEL:;
}
/* method range#Range#last for (self: Range[Discrete]): Discrete */
val* core___core__Range___last(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_core__range__Range___last].val; /* _last on <self:Range[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _last");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#last= for (self: Range[Discrete], Discrete) */
void core___core__Range___last_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (last) <p0:Discrete> isa E */
/* <p0:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 24);
fatal_exit(1);
}
self->attrs[COLOR_core__range__Range___last].val = p0; /* _last on <self:Range[Discrete]> */
RET_LABEL:;
}
/* method range#Range#after for (self: Range[Discrete]): Discrete */
val* core___core__Range___after(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_core__range__Range___after].val; /* _after on <self:Range[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _after");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 27);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#Range#after= for (self: Range[Discrete], Discrete) */
void core___core__Range___after_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (after) <p0:Discrete> isa E */
/* <p0:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 27);
fatal_exit(1);
}
self->attrs[COLOR_core__range__Range___after].val = p0; /* _after on <self:Range[Discrete]> */
RET_LABEL:;
}
/* method range#Range#has for (self: Range[Discrete], nullable Object): Bool */
short int core___core__Range___core__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_item /* var item: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : Discrete */;
val* var6 /* : Discrete */;
short int var7 /* : Bool */;
short int var_8 /* var : Bool */;
val* var9 /* : Discrete */;
val* var11 /* : Discrete */;
short int var12 /* : Bool */;
var_item = p0;
/* <var_item:nullable Object> isa Comparable */
cltype = type_core__Comparable.color;
idtype = type_core__Comparable.id;
if(var_item == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_item&3)?type_info[((long)var_item&3)]:var_item->type)->type_table[cltype] == idtype;
}
}
var_ = var3;
if (var3){
{
{ /* Inline range#Range#first (self) on <self:Range[Discrete]> */
var6 = self->attrs[COLOR_core__range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 22);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int(*)(val* self, val* p0))((((long)var_item&3)?class_info[((long)var_item&3)]:var_item->class)->vft[COLOR_core__kernel__Comparable___62d_61d]))(var_item, var4); /* >= on <var_item:nullable Object(Comparable)>*/
}
var2 = var7;
} else {
var2 = var_;
}
var_8 = var2;
if (var2){
{
{ /* Inline range#Range#last (self) on <self:Range[Discrete]> */
var11 = self->attrs[COLOR_core__range__Range___last].val; /* _last on <self:Range[Discrete]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _last");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 24);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((short int(*)(val* self, val* p0))((((long)var_item&3)?class_info[((long)var_item&3)]:var_item->class)->vft[COLOR_core__kernel__Comparable___60d_61d]))(var_item, var9); /* <= on <var_item:nullable Object(Comparable)>*/
}
var1 = var12;
} else {
var1 = var_8;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#count for (self: Range[Discrete], nullable Object): Int */
long core___core__Range___core__abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
short int var1 /* : Bool */;
var_item = p0;
{
var1 = core___core__Range___core__abstract_collection__Collection__has(self, var_item);
}
if (var1){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method range#Range#iterator for (self: Range[Discrete]): Iterator[Discrete] */
val* core___core__Range___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : Iterator[Discrete] */;
val* var1 /* : IteratorRange[Discrete] */;
var1 = NEW_core__range__IteratorRange(self->type->resolution_table->types[COLOR_core__range__IteratorRange__core__Range___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__range__IteratorRange__range_61d]))(var1, self); /* range= on <var1:IteratorRange[Discrete]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:IteratorRange[Discrete]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#length for (self: Range[Discrete]): Int */
long core___core__Range___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
val* var2 /* : Discrete */;
val* var4 /* : Discrete */;
val* var5 /* : Discrete */;
val* var7 /* : Discrete */;
long var8 /* : Int */;
long var_nb /* var nb: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
{
var1 = core___core__Range___core__abstract_collection__Collection__is_empty(self);
}
if (var1){
var = 0l;
goto RET_LABEL;
} else {
}
{
{ /* Inline range#Range#first (self) on <self:Range[Discrete]> */
var4 = self->attrs[COLOR_core__range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 22);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline range#Range#after (self) on <self:Range[Discrete]> */
var7 = self->attrs[COLOR_core__range__Range___after].val; /* _after on <self:Range[Discrete]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _after");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 27);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((long(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__kernel__Discrete__distance]))(var2, var5); /* distance on <var2:Discrete>*/
}
var_nb = var8;
{
{ /* Inline kernel#Int#> (var_nb,0l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var12 = var_nb > 0l;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = var_nb;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method range#Range#is_empty for (self: Range[Discrete]): Bool */
short int core___core__Range___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : Discrete */;
val* var3 /* : Discrete */;
val* var4 /* : Discrete */;
val* var6 /* : Discrete */;
short int var7 /* : Bool */;
{
{ /* Inline range#Range#first (self) on <self:Range[Discrete]> */
var3 = self->attrs[COLOR_core__range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 22);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline range#Range#after (self) on <self:Range[Discrete]> */
var6 = self->attrs[COLOR_core__range__Range___after].val; /* _after on <self:Range[Discrete]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _after");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 27);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Comparable___62d_61d]))(var1, var4); /* >= on <var1:Discrete>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#without_last for (self: Range[Discrete], Discrete, Discrete) */
void core___core__Range___without_last(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
val* var_from /* var from: Discrete */;
val* var_to /* var to: Discrete */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const struct type* type_struct11;
const char* var_class_name12;
short int var13 /* : Bool */;
val* var14 /* : Discrete */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const struct type* type_struct18;
const char* var_class_name19;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const struct type* type_struct24;
const char* var_class_name25;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const struct type* type_struct30;
const char* var_class_name31;
val* var32 /* : Discrete */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const struct type* type_struct36;
const char* var_class_name37;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const struct type* type_struct42;
const char* var_class_name43;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const struct type* type_struct48;
const char* var_class_name49;
/* Covariant cast for argument 0 (from) <p0:Discrete> isa E */
/* <p0:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 94);
fatal_exit(1);
}
/* Covariant cast for argument 1 (to) <p1:Discrete> isa E */
/* <p1:Discrete> isa E */
type_struct4 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 94);
fatal_exit(1);
}
{
{ /* Inline kernel#Object#init (self) on <self:Range[Discrete]> */
RET_LABEL6:(void)0;
}
}
var_from = p0;
var_to = p1;
{
{ /* Inline range#Range#first= (self,var_from) on <self:Range[Discrete]> */
/* Covariant cast for argument 0 (first) <var_from:Discrete> isa E */
/* <var_from:Discrete> isa E */
type_struct11 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype9 = type_struct11->color;
idtype10 = type_struct11->id;
if(cltype9 >= (((long)var_from&3)?type_info[((long)var_from&3)]:var_from->type)->table_size) {
var8 = 0;
} else {
var8 = (((long)var_from&3)?type_info[((long)var_from&3)]:var_from->type)->type_table[cltype9] == idtype10;
}
if (unlikely(!var8)) {
var_class_name12 = var_from == NULL ? "null" : (((long)var_from&3)?type_info[((long)var_from&3)]:var_from->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 22);
fatal_exit(1);
}
self->attrs[COLOR_core__range__Range___first].val = var_from; /* _first on <self:Range[Discrete]> */
RET_LABEL7:(void)0;
}
}
{
var13 = ((short int(*)(val* self, val* p0))((((long)var_from&3)?class_info[((long)var_from&3)]:var_from->class)->vft[COLOR_core__kernel__Comparable___60d_61d]))(var_from, var_to); /* <= on <var_from:Discrete>*/
}
if (var13){
{
var14 = ((val*(*)(val* self, long p0))((((long)var_to&3)?class_info[((long)var_to&3)]:var_to->class)->vft[COLOR_core__kernel__Discrete__predecessor]))(var_to, 1l); /* predecessor on <var_to:Discrete>*/
}
/* <var14:Discrete> isa E */
type_struct18 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype16 = type_struct18->color;
idtype17 = type_struct18->id;
if(cltype16 >= (((long)var14&3)?type_info[((long)var14&3)]:var14->type)->table_size) {
var15 = 0;
} else {
var15 = (((long)var14&3)?type_info[((long)var14&3)]:var14->type)->type_table[cltype16] == idtype17;
}
if (unlikely(!var15)) {
var_class_name19 = var14 == NULL ? "null" : (((long)var14&3)?type_info[((long)var14&3)]:var14->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 105);
fatal_exit(1);
}
{
{ /* Inline range#Range#last= (self,var14) on <self:Range[Discrete]> */
/* Covariant cast for argument 0 (last) <var14:Discrete> isa E */
/* <var14:Discrete> isa E */
type_struct24 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype22 = type_struct24->color;
idtype23 = type_struct24->id;
if(cltype22 >= (((long)var14&3)?type_info[((long)var14&3)]:var14->type)->table_size) {
var21 = 0;
} else {
var21 = (((long)var14&3)?type_info[((long)var14&3)]:var14->type)->type_table[cltype22] == idtype23;
}
if (unlikely(!var21)) {
var_class_name25 = var14 == NULL ? "null" : (((long)var14&3)?type_info[((long)var14&3)]:var14->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 24);
fatal_exit(1);
}
self->attrs[COLOR_core__range__Range___last].val = var14; /* _last on <self:Range[Discrete]> */
RET_LABEL20:(void)0;
}
}
{
{ /* Inline range#Range#after= (self,var_to) on <self:Range[Discrete]> */
/* Covariant cast for argument 0 (after) <var_to:Discrete> isa E */
/* <var_to:Discrete> isa E */
type_struct30 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype28 = type_struct30->color;
idtype29 = type_struct30->id;
if(cltype28 >= (((long)var_to&3)?type_info[((long)var_to&3)]:var_to->type)->table_size) {
var27 = 0;
} else {
var27 = (((long)var_to&3)?type_info[((long)var_to&3)]:var_to->type)->type_table[cltype28] == idtype29;
}
if (unlikely(!var27)) {
var_class_name31 = var_to == NULL ? "null" : (((long)var_to&3)?type_info[((long)var_to&3)]:var_to->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 27);
fatal_exit(1);
}
self->attrs[COLOR_core__range__Range___after].val = var_to; /* _after on <self:Range[Discrete]> */
RET_LABEL26:(void)0;
}
}
} else {
{
var32 = ((val*(*)(val* self, long p0))((((long)var_to&3)?class_info[((long)var_to&3)]:var_to->class)->vft[COLOR_core__kernel__Discrete__successor]))(var_to, 1l); /* successor on <var_to:Discrete>*/
}
/* <var32:Discrete> isa E */
type_struct36 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype34 = type_struct36->color;
idtype35 = type_struct36->id;
if(cltype34 >= (((long)var32&3)?type_info[((long)var32&3)]:var32->type)->table_size) {
var33 = 0;
} else {
var33 = (((long)var32&3)?type_info[((long)var32&3)]:var32->type)->type_table[cltype34] == idtype35;
}
if (unlikely(!var33)) {
var_class_name37 = var32 == NULL ? "null" : (((long)var32&3)?type_info[((long)var32&3)]:var32->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 108);
fatal_exit(1);
}
{
{ /* Inline range#Range#last= (self,var32) on <self:Range[Discrete]> */
/* Covariant cast for argument 0 (last) <var32:Discrete> isa E */
/* <var32:Discrete> isa E */
type_struct42 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype40 = type_struct42->color;
idtype41 = type_struct42->id;
if(cltype40 >= (((long)var32&3)?type_info[((long)var32&3)]:var32->type)->table_size) {
var39 = 0;
} else {
var39 = (((long)var32&3)?type_info[((long)var32&3)]:var32->type)->type_table[cltype40] == idtype41;
}
if (unlikely(!var39)) {
var_class_name43 = var32 == NULL ? "null" : (((long)var32&3)?type_info[((long)var32&3)]:var32->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 24);
fatal_exit(1);
}
self->attrs[COLOR_core__range__Range___last].val = var32; /* _last on <self:Range[Discrete]> */
RET_LABEL38:(void)0;
}
}
{
{ /* Inline range#Range#after= (self,var_to) on <self:Range[Discrete]> */
/* Covariant cast for argument 0 (after) <var_to:Discrete> isa E */
/* <var_to:Discrete> isa E */
type_struct48 = self->type->resolution_table->types[COLOR_core__Range___35dE];
cltype46 = type_struct48->color;
idtype47 = type_struct48->id;
if(cltype46 >= (((long)var_to&3)?type_info[((long)var_to&3)]:var_to->type)->table_size) {
var45 = 0;
} else {
var45 = (((long)var_to&3)?type_info[((long)var_to&3)]:var_to->type)->type_table[cltype46] == idtype47;
}
if (unlikely(!var45)) {
var_class_name49 = var_to == NULL ? "null" : (((long)var_to&3)?type_info[((long)var_to&3)]:var_to->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 27);
fatal_exit(1);
}
self->attrs[COLOR_core__range__Range___after].val = var_to; /* _after on <self:Range[Discrete]> */
RET_LABEL44:(void)0;
}
}
}
RET_LABEL:;
}
/* method range#Range#== for (self: Range[Discrete], nullable Object): Bool */
short int core___core__Range___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
short int var_ /* var : Bool */;
val* var4 /* : Discrete */;
val* var6 /* : Discrete */;
val* var7 /* : Discrete */;
val* var9 /* : Discrete */;
short int var10 /* : Bool */;
short int var_11 /* var : Bool */;
val* var12 /* : Discrete */;
val* var14 /* : Discrete */;
val* var15 /* : Discrete */;
val* var17 /* : Discrete */;
short int var18 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa Range[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Range__core__Range___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_o == NULL) {
var3 = is_nullable;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var_ = var3;
if (var3){
{
{ /* Inline range#Range#first (self) on <self:Range[Discrete]> */
var6 = self->attrs[COLOR_core__range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 22);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline range#Range#first (var_o) on <var_o:nullable Object(Range[Discrete])> */
var9 = var_o->attrs[COLOR_core__range__Range___first].val; /* _first on <var_o:nullable Object(Range[Discrete])> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 22);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var7); /* == on <var4:Discrete>*/
}
var2 = var10;
} else {
var2 = var_;
}
var_11 = var2;
if (var2){
{
{ /* Inline range#Range#last (self) on <self:Range[Discrete]> */
var14 = self->attrs[COLOR_core__range__Range___last].val; /* _last on <self:Range[Discrete]> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _last");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 24);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline range#Range#last (var_o) on <var_o:nullable Object(Range[Discrete])> */
var17 = var_o->attrs[COLOR_core__range__Range___last].val; /* _last on <var_o:nullable Object(Range[Discrete])> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _last");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 24);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ((short int(*)(val* self, val* p0))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var12, var15); /* == on <var12:Discrete>*/
}
var1 = var18;
} else {
var1 = var_11;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#Range#hash for (self: Range[Discrete]): Int */
long core___core__Range___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : Discrete */;
val* var3 /* : Discrete */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
val* var9 /* : Discrete */;
val* var11 /* : Discrete */;
long var12 /* : Int */;
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
{
{ /* Inline range#Range#first (self) on <self:Range[Discrete]> */
var3 = self->attrs[COLOR_core__range__Range___first].val; /* _first on <self:Range[Discrete]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 22);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Object__hash]))(var1); /* hash on <var1:Discrete>*/
}
{
{ /* Inline kernel#Int#* (var4,11l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <11l:Int> isa OTHER */
/* <11l:Int> isa OTHER */
var7 = 1; /* easy <11l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var8 = var4 * 11l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline range#Range#last (self) on <self:Range[Discrete]> */
var11 = self->attrs[COLOR_core__range__Range___last].val; /* _last on <self:Range[Discrete]> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _last");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 24);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((long(*)(val* self))((((long)var9&3)?class_info[((long)var9&3)]:var9->class)->vft[COLOR_core__kernel__Object__hash]))(var9); /* hash on <var9:Discrete>*/
}
{
{ /* Inline kernel#Int#* (var12,23l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <23l:Int> isa OTHER */
/* <23l:Int> isa OTHER */
var15 = 1; /* easy <23l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var19 = var12 * 23l;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var5,var13) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var13:Int> isa OTHER */
/* <var13:Int> isa OTHER */
var22 = 1; /* easy <var13:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var26 = var5 + var13;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#IteratorRange#range= for (self: IteratorRange[Discrete], Range[Discrete]) */
void core__range___core__range__IteratorRange___range_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (range) <p0:Range[Discrete]> isa Range[E] */
/* <p0:Range[Discrete]> isa Range[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Range__core__range__IteratorRange___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Range[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 194);
fatal_exit(1);
}
self->attrs[COLOR_core__range__IteratorRange___range].val = p0; /* _range on <self:IteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#IteratorRange#item for (self: IteratorRange[Discrete]): Discrete */
val* core__range___core__range__IteratorRange___core__abstract_collection__Iterator__item(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
var1 = self->attrs[COLOR_core__range__IteratorRange___item].val; /* _item on <self:IteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 195);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method range#IteratorRange#is_ok for (self: IteratorRange[Discrete]): Bool */
short int core__range___core__range__IteratorRange___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Discrete */;
val* var2 /* : Range[Discrete] */;
val* var3 /* : Discrete */;
val* var5 /* : Discrete */;
short int var6 /* : Bool */;
var1 = self->attrs[COLOR_core__range__IteratorRange___item].val; /* _item on <self:IteratorRange[Discrete]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 197);
fatal_exit(1);
}
var2 = self->attrs[COLOR_core__range__IteratorRange___range].val; /* _range on <self:IteratorRange[Discrete]> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 197);
fatal_exit(1);
}
{
{ /* Inline range#Range#after (var2) on <var2:Range[Discrete]> */
var5 = var2->attrs[COLOR_core__range__Range___after].val; /* _after on <var2:Range[Discrete]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _after");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 27);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Comparable___60d]))(var1, var3); /* < on <var1:Discrete>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method range#IteratorRange#next for (self: IteratorRange[Discrete]) */
void core__range___core__range__IteratorRange___core__abstract_collection__Iterator__next(val* self) {
val* var /* : Discrete */;
val* var1 /* : Discrete */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var = self->attrs[COLOR_core__range__IteratorRange___item].val; /* _item on <self:IteratorRange[Discrete]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _item");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 199);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self, long p0))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__kernel__Discrete__successor]))(var, 1l); /* successor on <var:Discrete>*/
}
/* <var1:Discrete> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__range__IteratorRange___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 199);
fatal_exit(1);
}
self->attrs[COLOR_core__range__IteratorRange___item].val = var1; /* _item on <self:IteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#IteratorRange#init for (self: IteratorRange[Discrete]) */
void core__range___core__range__IteratorRange___core__kernel__Object__init(val* self) {
val* var /* : Range[Discrete] */;
val* var1 /* : Discrete */;
val* var3 /* : Discrete */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__range___core__range__IteratorRange___core__kernel__Object__init]))(self); /* init on <self:IteratorRange[Discrete]>*/
}
var = self->attrs[COLOR_core__range__IteratorRange___range].val; /* _range on <self:IteratorRange[Discrete]> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _range");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 203);
fatal_exit(1);
}
{
{ /* Inline range#Range#first (var) on <var:Range[Discrete]> */
var3 = var->attrs[COLOR_core__range__Range___first].val; /* _first on <var:Range[Discrete]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first");
PRINT_ERROR(" (%s:%d)\n", FILE_core__range, 22);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_core__range__IteratorRange___item].val = var1; /* _item on <self:IteratorRange[Discrete]> */
RET_LABEL:;
}
/* method range#Int#times for (self: Int): Range[Int] */
val* core__range___Int___times(long self) {
val* var /* : Range[Int] */;
val* var1 /* : Range[Int] */;
val* var2 /* : Discrete */;
val* var3 /* : Discrete */;
var1 = NEW_core__Range(&type_core__Range__core__Int);
{
var2 = (val*)(0l<<2|1);
var3 = (val*)(self<<2|1);
core___core__Range___without_last(var1, var2, var3); /* Direct call range#Range#without_last on <var1:Range[Int]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
