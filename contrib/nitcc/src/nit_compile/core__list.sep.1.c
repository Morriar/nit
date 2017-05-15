#include "core__list.sep.0.h"
/* method list$List$[] for (self: List[nullable Object], Int): nullable Object */
val* core___core__List___core__abstract_collection__SequenceRead___91d_93d(val* self, long p0) {
val* var /* : nullable Object */;
long var_index /* var index: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
var_index = p0;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__list__List__get_node]))(self, var_index); /* get_node on <self:List[nullable Object]>*/
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 24);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_collection__Ref__item]))(var1); /* item on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$[]= for (self: List[nullable Object], Int, nullable Object) */
void core___core__List___core__abstract_collection__Sequence___91d_93d_61d(val* self, long p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
long var_index /* var index: Int */;
val* var_item /* var item: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 1 (item) <p1:nullable Object> isa E */
/* <p1:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p1 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 26);
fatal_exit(1);
}
var_index = p0;
var_item = p1;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__list__List__get_node]))(self, var_index); /* get_node on <self:List[nullable Object]>*/
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 26);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__Ref__item_61d]))(var1, var_item); /* item= on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
RET_LABEL:;
}
/* method list$List$first for (self: List[nullable Object]): nullable Object */
val* core___core__List___core__abstract_collection__Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 29);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_collection__Ref__item]))(var1); /* item on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$first= for (self: List[nullable Object], nullable Object) */
void core___core__List___core__abstract_collection__Sequence__first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 31);
fatal_exit(1);
}
var_e = p0;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 32);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__Ref__item_61d]))(var1, var_e); /* item= on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
RET_LABEL:;
}
/* method list$List$last for (self: List[nullable Object]): nullable Object */
val* core___core__List___core__abstract_collection__SequenceRead__last(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
var1 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 35);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_collection__Ref__item]))(var1); /* item on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$last= for (self: List[nullable Object], nullable Object) */
void core___core__List___core__abstract_collection__Sequence__last_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 37);
fatal_exit(1);
}
var_e = p0;
var1 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 38);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__Ref__item_61d]))(var1, var_e); /* item= on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
RET_LABEL:;
}
/* method list$List$is_empty for (self: List[nullable Object]): Bool */
short int core___core__List___core__abstract_collection__Collection__is_empty(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable ListNode[nullable Object]>*/
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$length for (self: List[nullable Object]): Int */
long core___core__List___core__abstract_collection__Collection__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__list__List___length].l; /* _length on <self:List[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list$List$length= for (self: List[nullable Object], Int) */
void core___core__List___length_61d(val* self, long p0) {
self->attrs[COLOR_core__list__List___length].l = p0; /* _length on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list$List$has for (self: List[nullable Object], nullable Object): Bool */
short int core___core__List___core__abstract_collection__Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_e /* var e: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_e = p0;
/* <var_e:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_e == NULL) {
var1 = is_nullable;
} else {
if(cltype >= (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var1)) {
var_class_name = var_e == NULL ? "null" : (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 49);
fatal_exit(1);
}
var2 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_core__list__List__search_node_after]))(self, var_e, var2); /* search_node_after on <self:List[nullable Object]>*/
}
if (var3 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___33d_61d]))(var3, ((val*)NULL)); /* != on <var3:nullable ListNode[nullable Object]>*/
var4 = var5;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$has_only for (self: List[nullable Object], nullable Object): Bool */
short int core___core__List___core__abstract_collection__Collection__has_only(val* self, val* p0) {
short int var /* : Bool */;
val* var_e /* var e: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable ListNode[nullable Object] */;
var_e = p0;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
var_node = var1;
for(;;) {
if (var_node == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ListNode[nullable Object]>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__abstract_collection__Ref__item]))(var_node); /* item on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
if (var4 == NULL) {
var5 = (var_e != NULL);
} else {
var6 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var4, var_e); /* != on <var4:nullable Object>*/
var5 = var6;
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__next]))(var_node); /* next on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var_node = var7;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$count for (self: List[nullable Object], nullable Object): Int */
long core___core__List___core__abstract_collection__Collection__count(val* self, val* p0) {
long var /* : Int */;
val* var_e /* var e: nullable Object */;
long var_nb /* var nb: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
val* var11 /* : nullable ListNode[nullable Object] */;
var_e = p0;
var_nb = 0l;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
var_node = var1;
for(;;) {
if (var_node == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ListNode[nullable Object]>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__abstract_collection__Ref__item]))(var_node); /* item on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
if (var4 == NULL) {
var5 = (var_e != NULL);
} else {
var6 = ((short int(*)(val* self, val* p0))((((long)var4&3)?class_info[((long)var4&3)]:var4->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var4, var_e); /* != on <var4:nullable Object>*/
var5 = var6;
}
if (var5){
{
{ /* Inline kernel$Int$+ (var_nb,1l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var10 = var_nb + 1l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_nb = var7;
} else {
}
{
var11 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__next]))(var_node); /* next on <var_node:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var_node = var11;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$slice for (self: List[nullable Object], Int, Int): List[nullable Object] */
val* core___core__List___slice(val* self, long p0, long p1) {
val* var /* : List[nullable Object] */;
long var_from /* var from: Int */;
long var_to /* var to: Int */;
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
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
int cltype19;
int idtype20;
const char* var_class_name21;
short int var22 /* : Bool */;
short int var_23 /* var : Bool */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype36;
int idtype37;
const char* var_class_name38;
short int var39 /* : Bool */;
val* var40 /* : List[nullable Object] */;
val* var_list /* var list: List[nullable Object] */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
const char* var_class_name46;
short int var47 /* : Bool */;
val* var48 /* : nullable Object */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype52;
int idtype53;
const char* var_class_name54;
long var55 /* : Int */;
var_from = p0;
var_to = p1;
{
{ /* Inline kernel$Int$>= (var_from,0l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var5 = var_from >= 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
var6 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:List[nullable Object]>*/
}
{
{ /* Inline kernel$Int$< (var_from,var6) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var13 = var_from < var6;
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
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 74);
fatal_exit(1);
}
{
{ /* Inline kernel$Int$>= (var_to,0l) on <var_to:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var18 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name21 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name21);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var22 = var_to >= 0l;
var16 = var22;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_23 = var16;
if (var16){
{
var24 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:List[nullable Object]>*/
}
{
{ /* Inline kernel$Int$< (var_to,var24) on <var_to:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var31 = var_to < var24;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var15 = var25;
} else {
var15 = var_23;
}
var_32 = var15;
if (var15){
{
{ /* Inline kernel$Int$<= (var_from,var_to) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var35 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name38 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name38);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var39 = var_from <= var_to;
var33 = var39;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var14 = var33;
} else {
var14 = var_32;
}
if (unlikely(!var14)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 75);
fatal_exit(1);
}
var40 = NEW_core__List(self->type->resolution_table->types[COLOR_core__List__core__List___35dE]);
{
((void(*)(val* self))(var40->class->vft[COLOR_core__kernel__Object__init]))(var40); /* init on <var40:List[nullable Object]>*/
}
var_list = var40;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_from,var_to) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <var_to:Int> isa OTHER */
/* <var_to:Int> isa OTHER */
var43 = 1; /* easy <var_to:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name46 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name46);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var47 = var_from <= var_to;
var41 = var47;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
var48 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_from); /* [] on <self:List[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var_list->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_list, var48); /* add on <var_list:List[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var_from,1l) on <var_from:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var51 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name54 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name54);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var55 = var_from + 1l;
var49 = var55;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var_from = var49;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_list;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$push for (self: List[nullable Object], nullable Object) */
void core___core__List___core__abstract_collection__Sequence__push(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : ListNode[nullable Object] */;
val* var_node /* var node: ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var_tail /* var tail: nullable ListNode[nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_ /* var : List[nullable Object] */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 86);
fatal_exit(1);
}
var_e = p0;
var1 = NEW_core__list__ListNode(self->type->resolution_table->types[COLOR_core__list__ListNode__core__List___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__Ref__item_61d]))(var1, var_e); /* item= on <var1:ListNode[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ListNode[nullable Object]>*/
}
var_node = var1;
var2 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var_tail = var2;
if (var_tail == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_tail->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_tail, ((val*)NULL)); /* == on <var_tail:nullable ListNode[nullable Object]>*/
var3 = var4;
}
if (var3){
self->attrs[COLOR_core__list__List___head].val = var_node; /* _head on <self:List[nullable Object]> */
} else {
{
((void(*)(val* self, val* p0))(var_tail->class->vft[COLOR_core__list__ListNode__next_61d]))(var_tail, var_node); /* next= on <var_tail:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__list__ListNode__prev_61d]))(var_node, var_tail); /* prev= on <var_node:ListNode[nullable Object]>*/
}
}
self->attrs[COLOR_core__list__List___tail].val = var_node; /* _tail on <self:List[nullable Object]> */
var_ = self;
{
var5 = ((long(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_); /* length on <var_:List[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var5 + 1l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__list__List__length_61d]))(var_, var6); /* length= on <var_:List[nullable Object]>*/
}
RET_LABEL:;
}
/* method list$List$unshift for (self: List[nullable Object], nullable Object) */
void core___core__List___core__abstract_collection__Sequence__unshift(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : ListNode[nullable Object] */;
val* var_node /* var node: ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var_head /* var head: nullable ListNode[nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_ /* var : List[nullable Object] */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
const char* var_class_name11;
long var12 /* : Int */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 101);
fatal_exit(1);
}
var_e = p0;
var1 = NEW_core__list__ListNode(self->type->resolution_table->types[COLOR_core__list__ListNode__core__List___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__Ref__item_61d]))(var1, var_e); /* item= on <var1:ListNode[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ListNode[nullable Object]>*/
}
var_node = var1;
var2 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
var_head = var2;
if (var_head == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_head->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_head, ((val*)NULL)); /* == on <var_head:nullable ListNode[nullable Object]>*/
var3 = var4;
}
if (var3){
self->attrs[COLOR_core__list__List___tail].val = var_node; /* _tail on <self:List[nullable Object]> */
} else {
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__list__ListNode__next_61d]))(var_node, var_head); /* next= on <var_node:ListNode[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var_head->class->vft[COLOR_core__list__ListNode__prev_61d]))(var_head, var_node); /* prev= on <var_head:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
}
self->attrs[COLOR_core__list__List___head].val = var_node; /* _head on <self:List[nullable Object]> */
var_ = self;
{
var5 = ((long(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_); /* length on <var_:List[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name11 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name11);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var5 + 1l;
var6 = var12;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__list__List__length_61d]))(var_, var6); /* length= on <var_:List[nullable Object]>*/
}
RET_LABEL:;
}
/* method list$List$insert for (self: List[nullable Object], nullable Object, Int) */
void core___core__List___core__abstract_collection__Sequence__insert(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
long var_i /* var i: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 116);
fatal_exit(1);
}
var_e = p0;
var_i = p1;
{
var1 = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__list__List__get_node]))(self, var_i); /* get_node on <self:List[nullable Object]>*/
}
var_node = var1;
if (var_node == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, ((val*)NULL)); /* == on <var_node:nullable ListNode[nullable Object]>*/
var2 = var3;
}
if (var2){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_collection__Sequence__push]))(self, var_e); /* push on <self:List[nullable Object]>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_core__list__List__insert_before]))(self, var_e, var_node); /* insert_before on <self:List[nullable Object]>*/
}
RET_LABEL:;
}
/* method list$List$link for (self: List[nullable Object], List[nullable Object]) */
void core___core__List___link(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_l /* var l: List[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_tail /* var tail: nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable ListNode[nullable Object] */;
val* var5 /* : nullable ListNode[nullable Object] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable ListNode[nullable Object] */;
val* var9 /* : nullable ListNode[nullable Object] */;
val* var10 /* : nullable ListNode[nullable Object] */;
val* var_ /* var : List[nullable Object] */;
long var11 /* : Int */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
/* Covariant cast for argument 0 (l) <p0:List[nullable Object]> isa List[E] */
/* <p0:List[nullable Object]> isa List[E] */
type_struct = self->type->resolution_table->types[COLOR_core__List__core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "List[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 127);
fatal_exit(1);
}
var_l = p0;
var1 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var_tail = var1;
if (var_tail == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_tail->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_tail, ((val*)NULL)); /* == on <var_tail:nullable ListNode[nullable Object]>*/
var2 = var3;
}
if (var2){
var4 = var_l->attrs[COLOR_core__list__List___head].val; /* _head on <var_l:List[nullable Object]> */
self->attrs[COLOR_core__list__List___head].val = var4; /* _head on <self:List[nullable Object]> */
} else {
var5 = var_l->attrs[COLOR_core__list__List___head].val; /* _head on <var_l:List[nullable Object]> */
if (var5 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___33d_61d]))(var5, ((val*)NULL)); /* != on <var5:nullable ListNode[nullable Object]>*/
var6 = var7;
}
if (var6){
var8 = var_l->attrs[COLOR_core__list__List___head].val; /* _head on <var_l:List[nullable Object]> */
{
((void(*)(val* self, val* p0))(var_tail->class->vft[COLOR_core__list__ListNode__next_61d]))(var_tail, var8); /* next= on <var_tail:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
{
var9 = ((val*(*)(val* self))(var_tail->class->vft[COLOR_core__list__ListNode__next]))(var_tail); /* next on <var_tail:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 137);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_core__list__ListNode__prev_61d]))(var9, var_tail); /* prev= on <var9:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
} else {
}
}
var10 = var_l->attrs[COLOR_core__list__List___tail].val; /* _tail on <var_l:List[nullable Object]> */
self->attrs[COLOR_core__list__List___tail].val = var10; /* _tail on <self:List[nullable Object]> */
var_ = self;
{
var11 = ((long(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_); /* length on <var_:List[nullable Object]>*/
}
{
var12 = ((long(*)(val* self))(var_l->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_l); /* length on <var_l:List[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var11,var12) on <var11:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var11 + var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__list__List__length_61d]))(var_, var13); /* length= on <var_:List[nullable Object]>*/
}
{
((void(*)(val* self))(var_l->class->vft[COLOR_core__abstract_collection__RemovableCollection__clear]))(var_l); /* clear on <var_l:List[nullable Object]>*/
}
RET_LABEL:;
}
/* method list$List$pop for (self: List[nullable Object]): nullable Object */
val* core___core__List___core__abstract_collection__Sequence__pop(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable ListNode[nullable Object] */;
val* var_ /* var : List[nullable Object] */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
var1 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 149);
fatal_exit(1);
}
var_node = var1;
{
var2 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__prev]))(var_node); /* prev on <var_node:ListNode[nullable Object]>*/
}
self->attrs[COLOR_core__list__List___tail].val = var2; /* _tail on <self:List[nullable Object]> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__list__ListNode__prev_61d]))(var_node, ((val*)NULL)); /* prev= on <var_node:ListNode[nullable Object]>*/
}
var3 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (var3 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, ((val*)NULL)); /* == on <var3:nullable ListNode[nullable Object]>*/
var4 = var5;
}
if (var4){
self->attrs[COLOR_core__list__List___head].val = ((val*)NULL); /* _head on <self:List[nullable Object]> */
} else {
var6 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 155);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__list__ListNode__next_61d]))(var6, ((val*)NULL)); /* next= on <var6:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
}
var_ = self;
{
var7 = ((long(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_); /* length on <var_:List[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var11 = var7 - 1l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__list__List__length_61d]))(var_, var8); /* length= on <var_:List[nullable Object]>*/
}
{
var12 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__abstract_collection__Ref__item]))(var_node); /* item on <var_node:ListNode[nullable Object]>*/
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$shift for (self: List[nullable Object]): nullable Object */
val* core___core__List___core__abstract_collection__Sequence__shift(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var3 /* : nullable ListNode[nullable Object] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable ListNode[nullable Object] */;
val* var_ /* var : List[nullable Object] */;
long var7 /* : Int */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 164);
fatal_exit(1);
}
var_node = var1;
{
var2 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__next]))(var_node); /* next on <var_node:ListNode[nullable Object]>*/
}
self->attrs[COLOR_core__list__List___head].val = var2; /* _head on <self:List[nullable Object]> */
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__list__ListNode__next_61d]))(var_node, ((val*)NULL)); /* next= on <var_node:ListNode[nullable Object]>*/
}
var3 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (var3 == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, ((val*)NULL)); /* == on <var3:nullable ListNode[nullable Object]>*/
var4 = var5;
}
if (var4){
self->attrs[COLOR_core__list__List___tail].val = ((val*)NULL); /* _tail on <self:List[nullable Object]> */
} else {
var6 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 170);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__list__ListNode__prev_61d]))(var6, ((val*)NULL)); /* prev= on <var6:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
}
var_ = self;
{
var7 = ((long(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_); /* length on <var_:List[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var7,1l) on <var7:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var11 = var7 - 1l;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__list__List__length_61d]))(var_, var8); /* length= on <var_:List[nullable Object]>*/
}
{
var12 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__abstract_collection__Ref__item]))(var_node); /* item on <var_node:ListNode[nullable Object]>*/
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$remove for (self: List[nullable Object], nullable Object) */
void core___core__List___core__abstract_collection__RemovableCollection__remove(val* self, val* p0) {
val* var_e /* var e: nullable Object */;
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var_e = p0;
/* <var_e:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var_e == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->table_size) {
var = 0;
} else {
var = (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = var_e == NULL ? "null" : (((long)var_e&3)?type_info[((long)var_e&3)]:var_e->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 178);
fatal_exit(1);
}
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
{
var2 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_core__list__List__search_node_after]))(self, var_e, var1); /* search_node_after on <self:List[nullable Object]>*/
}
var_node = var2;
if (var_node == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
var4 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ListNode[nullable Object]>*/
var3 = var4;
}
if (var3){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__list__List__remove_node]))(self, var_node); /* remove_node on <self:List[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method list$List$remove_at for (self: List[nullable Object], Int) */
void core___core__List___core__abstract_collection__Sequence__remove_at(val* self, long p0) {
long var_i /* var i: Int */;
val* var /* : nullable ListNode[nullable Object] */;
val* var_node /* var node: nullable ListNode[nullable Object] */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
var_i = p0;
{
var = ((val*(*)(val* self, long p0))(self->class->vft[COLOR_core__list__List__get_node]))(self, var_i); /* get_node on <self:List[nullable Object]>*/
}
var_node = var;
if (var_node == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_node, ((val*)NULL)); /* != on <var_node:nullable ListNode[nullable Object]>*/
var1 = var2;
}
if (var1){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__list__List__remove_node]))(self, var_node); /* remove_node on <self:List[nullable Object]>*/
}
} else {
}
RET_LABEL:;
}
/* method list$List$clear for (self: List[nullable Object]) */
void core___core__List___core__abstract_collection__RemovableCollection__clear(val* self) {
self->attrs[COLOR_core__list__List___head].val = ((val*)NULL); /* _head on <self:List[nullable Object]> */
self->attrs[COLOR_core__list__List___tail].val = ((val*)NULL); /* _tail on <self:List[nullable Object]> */
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__list__List__length_61d]))(self, 0l); /* length= on <self:List[nullable Object]>*/
}
RET_LABEL:;
}
/* method list$List$iterator for (self: List[nullable Object]): ListIterator[nullable Object] */
val* core___core__List___core__abstract_collection__Collection__iterator(val* self) {
val* var /* : ListIterator[nullable Object] */;
val* var1 /* : ListIterator[nullable Object] */;
var1 = NEW_core__ListIterator(self->type->resolution_table->types[COLOR_core__ListIterator__core__List___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__list__ListIterator__list_61d]))(var1, self); /* list= on <var1:ListIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ListIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$reverse_iterator for (self: List[nullable Object]): ListIterator[nullable Object] */
val* core___core__List___core__abstract_collection__SequenceRead__reverse_iterator(val* self) {
val* var /* : ListIterator[nullable Object] */;
val* var1 /* : ListReverseIterator[nullable Object] */;
var1 = NEW_core__list__ListReverseIterator(self->type->resolution_table->types[COLOR_core__list__ListReverseIterator__core__List___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__list__ListIterator__list_61d]))(var1, self); /* list= on <var1:ListReverseIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ListReverseIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$init for (self: List[nullable Object]) */
void core___core__List___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__List___core__kernel__Object__init]))(self); /* init on <self:List[nullable Object]>*/
}
RET_LABEL:;
}
/* method list$List$from for (self: List[nullable Object], Collection[nullable Object]) */
void core___core__List___from(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Collection__core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 202);
fatal_exit(1);
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:List[nullable Object]>*/
}
var_coll = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_collection__Sequence__append]))(self, var_coll); /* append on <self:List[nullable Object]>*/
}
RET_LABEL:;
}
/* method list$List$head for (self: List[nullable Object]): nullable ListNode[nullable Object] */
val* core___core__List___head(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list$List$head= for (self: List[nullable Object], nullable ListNode[nullable Object]) */
void core___core__List___head_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (head) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 205);
fatal_exit(1);
}
self->attrs[COLOR_core__list__List___head].val = p0; /* _head on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list$List$tail for (self: List[nullable Object]): nullable ListNode[nullable Object] */
val* core___core__List___tail(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_core__list__List___tail].val; /* _tail on <self:List[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list$List$tail= for (self: List[nullable Object], nullable ListNode[nullable Object]) */
void core___core__List___tail_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (tail) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 208);
fatal_exit(1);
}
self->attrs[COLOR_core__list__List___tail].val = p0; /* _tail on <self:List[nullable Object]> */
RET_LABEL:;
}
/* method list$List$get_node for (self: List[nullable Object], Int): nullable ListNode[nullable Object] */
val* core___core__List___get_node(val* self, long p0) {
val* var /* : nullable ListNode[nullable Object] */;
long var_i /* var i: Int */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_n /* var n: nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
val* var16 /* : nullable ListNode[nullable Object] */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
var_i = p0;
var1 = self->attrs[COLOR_core__list__List___head].val; /* _head on <self:List[nullable Object]> */
var_n = var1;
{
{ /* Inline kernel$Int$< (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var5 = var_i < 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
for(;;) {
if (var_n == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_n, ((val*)NULL)); /* != on <var_n:nullable ListNode[nullable Object]>*/
var7 = var8;
}
var_ = var7;
if (var7){
{
{ /* Inline kernel$Int$> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var15 = var_i > 0l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var6 = var9;
} else {
var6 = var_;
}
if (var6){
{
var16 = ((val*(*)(val* self))(var_n->class->vft[COLOR_core__list__ListNode__next]))(var_n); /* next on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var_n = var16;
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var23 = var_i - 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_i = var17;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_n;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$search_node_after for (self: List[nullable Object], nullable Object, nullable ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* core___core__List___search_node_after(val* self, val* p0, val* p1) {
val* var /* : nullable ListNode[nullable Object] */;
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
const char* var_class_name6;
val* var_e /* var e: nullable Object */;
val* var_after /* var after: nullable ListNode[nullable Object] */;
val* var_n /* var n: nullable ListNode[nullable Object] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 225);
fatal_exit(1);
}
/* Covariant cast for argument 1 (after) <p1:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p1:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct5 = self->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__List___35dE];
cltype3 = type_struct5->color;
idtype4 = type_struct5->id;
if(p1 == NULL) {
var2 = 1;
} else {
if(cltype3 >= p1->type->table_size) {
var2 = 0;
} else {
var2 = p1->type->type_table[cltype3] == idtype4;
}
}
if (unlikely(!var2)) {
var_class_name6 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name6);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 225);
fatal_exit(1);
}
var_e = p0;
var_after = p1;
var_n = var_after;
for(;;) {
if (var_n == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_n, ((val*)NULL)); /* != on <var_n:nullable ListNode[nullable Object]>*/
var8 = var9;
}
var_ = var8;
if (var8){
{
var10 = ((val*(*)(val* self))(var_n->class->vft[COLOR_core__abstract_collection__Ref__item]))(var_n); /* item on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
if (var10 == NULL) {
var11 = (var_e != NULL);
} else {
var12 = ((short int(*)(val* self, val* p0))((((long)var10&3)?class_info[((long)var10&3)]:var10->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var10, var_e); /* != on <var10:nullable Object>*/
var11 = var12;
}
var7 = var11;
} else {
var7 = var_;
}
if (var7){
{
var13 = ((val*(*)(val* self))(var_n->class->vft[COLOR_core__list__ListNode__next]))(var_n); /* next on <var_n:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var_n = var13;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_n;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$List$remove_node for (self: List[nullable Object], ListNode[nullable Object]) */
void core___core__List___remove_node(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_node /* var node: ListNode[nullable Object] */;
val* var_ /* var : List[nullable Object] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
long var8 /* : Int */;
val* var9 /* : nullable ListNode[nullable Object] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable ListNode[nullable Object] */;
val* var13 /* : nullable ListNode[nullable Object] */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable ListNode[nullable Object] */;
val* var17 /* : nullable ListNode[nullable Object] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable ListNode[nullable Object] */;
val* var21 /* : nullable ListNode[nullable Object] */;
val* var22 /* : nullable ListNode[nullable Object] */;
val* var23 /* : nullable ListNode[nullable Object] */;
val* var24 /* : nullable ListNode[nullable Object] */;
val* var25 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (node) <p0:ListNode[nullable Object]> isa ListNode[E] */
/* <p0:ListNode[nullable Object]> isa ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_core__list__ListNode__core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 233);
fatal_exit(1);
}
var_node = p0;
var_ = self;
{
var1 = ((long(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_); /* length on <var_:List[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var8 = var1 - 1l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__list__List__length_61d]))(var_, var2); /* length= on <var_:List[nullable Object]>*/
}
{
var9 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__prev]))(var_node); /* prev on <var_node:ListNode[nullable Object]>*/
}
if (var9 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var9->class->vft[COLOR_core__kernel__Object___61d_61d]))(var9, ((val*)NULL)); /* == on <var9:nullable ListNode[nullable Object]>*/
var10 = var11;
}
if (var10){
{
var12 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__next]))(var_node); /* next on <var_node:ListNode[nullable Object]>*/
}
self->attrs[COLOR_core__list__List___head].val = var12; /* _head on <self:List[nullable Object]> */
{
var13 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__next]))(var_node); /* next on <var_node:ListNode[nullable Object]>*/
}
if (var13 == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
var15 = ((short int(*)(val* self, val* p0))(var13->class->vft[COLOR_core__kernel__Object___61d_61d]))(var13, ((val*)NULL)); /* == on <var13:nullable ListNode[nullable Object]>*/
var14 = var15;
}
if (var14){
self->attrs[COLOR_core__list__List___tail].val = ((val*)NULL); /* _tail on <self:List[nullable Object]> */
} else {
{
var16 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__next]))(var_node); /* next on <var_node:ListNode[nullable Object]>*/
}
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 242);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_core__list__ListNode__prev_61d]))(var16, ((val*)NULL)); /* prev= on <var16:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
}
} else {
{
var17 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__next]))(var_node); /* next on <var_node:ListNode[nullable Object]>*/
}
if (var17 == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
var19 = ((short int(*)(val* self, val* p0))(var17->class->vft[COLOR_core__kernel__Object___61d_61d]))(var17, ((val*)NULL)); /* == on <var17:nullable ListNode[nullable Object]>*/
var18 = var19;
}
if (var18){
{
var20 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__prev]))(var_node); /* prev on <var_node:ListNode[nullable Object]>*/
}
self->attrs[COLOR_core__list__List___tail].val = var20; /* _tail on <self:List[nullable Object]> */
{
var21 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__prev]))(var_node); /* prev on <var_node:ListNode[nullable Object]>*/
}
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 246);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_core__list__ListNode__next_61d]))(var21, ((val*)NULL)); /* next= on <var21:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
} else {
{
var22 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__prev]))(var_node); /* prev on <var_node:ListNode[nullable Object]>*/
}
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 248);
fatal_exit(1);
}
{
var23 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__next]))(var_node); /* next on <var_node:ListNode[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__list__ListNode__next_61d]))(var22, var23); /* next= on <var22:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
{
var24 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__next]))(var_node); /* next on <var_node:ListNode[nullable Object]>*/
}
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 249);
fatal_exit(1);
}
{
var25 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__prev]))(var_node); /* prev on <var_node:ListNode[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var24->class->vft[COLOR_core__list__ListNode__prev_61d]))(var24, var25); /* prev= on <var24:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
}
}
RET_LABEL:;
}
/* method list$List$insert_before for (self: List[nullable Object], nullable Object, ListNode[nullable Object]) */
void core___core__List___insert_before(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
short int var1 /* : Bool */;
int cltype2;
int idtype3;
const struct type* type_struct4;
const char* var_class_name5;
val* var_element /* var element: nullable Object */;
val* var_node /* var node: ListNode[nullable Object] */;
val* var_ /* var : List[nullable Object] */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
long var13 /* : Int */;
val* var14 /* : ListNode[nullable Object] */;
val* var_nnode /* var nnode: ListNode[nullable Object] */;
val* var15 /* : nullable ListNode[nullable Object] */;
val* var_prev /* var prev: nullable ListNode[nullable Object] */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
/* Covariant cast for argument 0 (element) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__List___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 253);
fatal_exit(1);
}
/* Covariant cast for argument 1 (node) <p1:ListNode[nullable Object]> isa ListNode[E] */
/* <p1:ListNode[nullable Object]> isa ListNode[E] */
type_struct4 = self->type->resolution_table->types[COLOR_core__list__ListNode__core__List___35dE];
cltype2 = type_struct4->color;
idtype3 = type_struct4->id;
if(cltype2 >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype2] == idtype3;
}
if (unlikely(!var1)) {
var_class_name5 = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "ListNode[E]", var_class_name5);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 253);
fatal_exit(1);
}
var_element = p0;
var_node = p1;
var_ = self;
{
var6 = ((long(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_); /* length on <var_:List[nullable Object]>*/
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
((void(*)(val* self, long p0))(var_->class->vft[COLOR_core__list__List__length_61d]))(var_, var7); /* length= on <var_:List[nullable Object]>*/
}
var14 = NEW_core__list__ListNode(self->type->resolution_table->types[COLOR_core__list__ListNode__core__List___35dE]);
{
((void(*)(val* self, val* p0))(var14->class->vft[COLOR_core__abstract_collection__Ref__item_61d]))(var14, var_element); /* item= on <var14:ListNode[nullable Object]>*/
}
{
((void(*)(val* self))(var14->class->vft[COLOR_core__kernel__Object__init]))(var14); /* init on <var14:ListNode[nullable Object]>*/
}
var_nnode = var14;
{
var15 = ((val*(*)(val* self))(var_node->class->vft[COLOR_core__list__ListNode__prev]))(var_node); /* prev on <var_node:ListNode[nullable Object]>*/
}
var_prev = var15;
if (var_prev == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))(var_prev->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_prev, ((val*)NULL)); /* == on <var_prev:nullable ListNode[nullable Object]>*/
var16 = var17;
}
if (var16){
self->attrs[COLOR_core__list__List___head].val = var_nnode; /* _head on <self:List[nullable Object]> */
} else {
{
((void(*)(val* self, val* p0))(var_prev->class->vft[COLOR_core__list__ListNode__next_61d]))(var_prev, var_nnode); /* next= on <var_prev:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
}
{
((void(*)(val* self, val* p0))(var_nnode->class->vft[COLOR_core__list__ListNode__prev_61d]))(var_nnode, var_prev); /* prev= on <var_nnode:ListNode[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var_nnode->class->vft[COLOR_core__list__ListNode__next_61d]))(var_nnode, var_node); /* next= on <var_nnode:ListNode[nullable Object]>*/
}
{
((void(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__list__ListNode__prev_61d]))(var_node, var_nnode); /* prev= on <var_node:ListNode[nullable Object]>*/
}
RET_LABEL:;
}
/* method list$ListIterator$item for (self: ListIterator[nullable Object]): nullable Object */
val* core___core__ListIterator___core__abstract_collection__Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var2 /* : nullable Object */;
var1 = self->attrs[COLOR_core__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 272);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_collection__Ref__item]))(var1); /* item on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$ListIterator$item= for (self: ListIterator[nullable Object], nullable Object) */
void core___core__ListIterator___item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
val* var1 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__ListIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 274);
fatal_exit(1);
}
var_e = p0;
var1 = self->attrs[COLOR_core__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 275);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__Ref__item_61d]))(var1, var_e); /* item= on <var1:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
RET_LABEL:;
}
/* method list$ListIterator$is_ok for (self: ListIterator[nullable Object]): Bool */
short int core___core__ListIterator___core__abstract_collection__Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ListNode[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
var1 = self->attrs[COLOR_core__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, ((val*)NULL)); /* == on <var1:nullable ListNode[nullable Object]>*/
var2 = var3;
}
var4 = !var2;
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method list$ListIterator$next for (self: ListIterator[nullable Object]) */
void core___core__ListIterator___core__abstract_collection__Iterator__next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_ /* var : ListIterator[nullable Object] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
var = self->attrs[COLOR_core__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 281);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__list__ListNode__next]))(var); /* next on <var:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
self->attrs[COLOR_core__list__ListIterator___node].val = var1; /* _node on <self:ListIterator[nullable Object]> */
var_ = self;
var2 = var_->attrs[COLOR_core__list__ListIterator___index].l; /* _index on <var_:ListIterator[nullable Object]> */
{
{ /* Inline kernel$Int$+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var2 + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_->attrs[COLOR_core__list__ListIterator___index].l = var3; /* _index on <var_:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list$ListIterator$init for (self: ListIterator[nullable Object]) */
void core___core__ListIterator___core__kernel__Object__init(val* self) {
val* var /* : List[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__ListIterator___core__kernel__Object__init]))(self); /* init on <self:ListIterator[nullable Object]>*/
}
var = self->attrs[COLOR_core__list__ListIterator___list].val; /* _list on <self:ListIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _list");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 288);
fatal_exit(1);
}
var1 = var->attrs[COLOR_core__list__List___head].val; /* _head on <var:List[nullable Object]> */
self->attrs[COLOR_core__list__ListIterator___node].val = var1; /* _node on <self:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list$ListIterator$list for (self: ListIterator[nullable Object]): List[nullable Object] */
val* core___core__ListIterator___list(val* self) {
val* var /* : List[nullable Object] */;
val* var1 /* : List[nullable Object] */;
var1 = self->attrs[COLOR_core__list__ListIterator___list].val; /* _list on <self:ListIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _list");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 291);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method list$ListIterator$list= for (self: ListIterator[nullable Object], List[nullable Object]) */
void core___core__ListIterator___list_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (list) <p0:List[nullable Object]> isa List[E] */
/* <p0:List[nullable Object]> isa List[E] */
type_struct = self->type->resolution_table->types[COLOR_core__List__core__ListIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "List[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 291);
fatal_exit(1);
}
self->attrs[COLOR_core__list__ListIterator___list].val = p0; /* _list on <self:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list$ListIterator$node for (self: ListIterator[nullable Object]): nullable ListNode[nullable Object] */
val* core___core__ListIterator___node(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_core__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list$ListIterator$node= for (self: ListIterator[nullable Object], nullable ListNode[nullable Object]) */
void core___core__ListIterator___node_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (node) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__ListIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 294);
fatal_exit(1);
}
self->attrs[COLOR_core__list__ListIterator___node].val = p0; /* _node on <self:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list$ListIterator$index for (self: ListIterator[nullable Object]): Int */
long core___core__ListIterator___core__abstract_collection__IndexedIterator__index(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__list__ListIterator___index].l; /* _index on <self:ListIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list$ListIterator$index= for (self: ListIterator[nullable Object], Int) */
void core___core__ListIterator___index_61d(val* self, long p0) {
self->attrs[COLOR_core__list__ListIterator___index].l = p0; /* _index on <self:ListIterator[nullable Object]> */
RET_LABEL:;
}
/* method list$ListIterator$delete for (self: ListIterator[nullable Object]) */
void core___core__ListIterator___delete(val* self) {
val* var /* : List[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var = self->attrs[COLOR_core__list__ListIterator___list].val; /* _list on <self:ListIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _list");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 303);
fatal_exit(1);
}
var1 = self->attrs[COLOR_core__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 303);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__list__List__remove_node]))(var, var1); /* remove_node on <var:List[nullable Object]>*/
}
RET_LABEL:;
}
/* method list$ListIterator$insert_before for (self: ListIterator[nullable Object], nullable Object) */
void core___core__ListIterator___insert_before(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_element /* var element: nullable Object */;
val* var1 /* : List[nullable Object] */;
val* var2 /* : nullable ListNode[nullable Object] */;
/* Covariant cast for argument 0 (element) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__ListIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 306);
fatal_exit(1);
}
var_element = p0;
var1 = self->attrs[COLOR_core__list__ListIterator___list].val; /* _list on <self:ListIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _list");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 309);
fatal_exit(1);
}
var2 = self->attrs[COLOR_core__list__ListIterator___node].val; /* _node on <self:ListIterator[nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 309);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_core__list__List__insert_before]))(var1, var_element, var2); /* insert_before on <var1:List[nullable Object]>*/
}
RET_LABEL:;
}
/* method list$ListReverseIterator$next for (self: ListReverseIterator[nullable Object]) */
void core__list___core__list__ListReverseIterator___core__abstract_collection__Iterator__next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
val* var_ /* var : ListReverseIterator[nullable Object] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
var = self->attrs[COLOR_core__list__ListIterator___node].val; /* _node on <self:ListReverseIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 318);
fatal_exit(1);
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__list__ListNode__prev]))(var); /* prev on <var:nullable ListNode[nullable Object](ListNode[nullable Object])>*/
}
self->attrs[COLOR_core__list__ListIterator___node].val = var1; /* _node on <self:ListReverseIterator[nullable Object]> */
var_ = self;
var2 = var_->attrs[COLOR_core__list__ListIterator___index].l; /* _index on <var_:ListReverseIterator[nullable Object]> */
{
{ /* Inline kernel$Int$- (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var6 = var2 - 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_->attrs[COLOR_core__list__ListIterator___index].l = var3; /* _index on <var_:ListReverseIterator[nullable Object]> */
RET_LABEL:;
}
/* method list$ListReverseIterator$init for (self: ListReverseIterator[nullable Object]) */
void core__list___core__list__ListReverseIterator___core__kernel__Object__init(val* self) {
val* var /* : List[nullable Object] */;
val* var_list /* var list: List[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
long var2 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__list___core__list__ListReverseIterator___core__kernel__Object__init]))(self); /* init on <self:ListReverseIterator[nullable Object]>*/
}
var = self->attrs[COLOR_core__list__ListIterator___list].val; /* _list on <self:ListReverseIterator[nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _list");
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 324);
fatal_exit(1);
}
var_list = var;
var1 = var_list->attrs[COLOR_core__list__List___tail].val; /* _tail on <var_list:List[nullable Object]> */
self->attrs[COLOR_core__list__ListIterator___node].val = var1; /* _node on <self:ListReverseIterator[nullable Object]> */
{
var2 = ((long(*)(val* self))(var_list->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_list); /* length on <var_list:List[nullable Object]>*/
}
self->attrs[COLOR_core__list__ListIterator___index].l = var2; /* _index on <self:ListReverseIterator[nullable Object]> */
RET_LABEL:;
}
/* method list$ListNode$next for (self: ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* core__list___core__list__ListNode___next(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_core__list__ListNode___next].val; /* _next on <self:ListNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list$ListNode$next= for (self: ListNode[nullable Object], nullable ListNode[nullable Object]) */
void core__list___core__list__ListNode___next_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (next) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 334);
fatal_exit(1);
}
self->attrs[COLOR_core__list__ListNode___next].val = p0; /* _next on <self:ListNode[nullable Object]> */
RET_LABEL:;
}
/* method list$ListNode$prev for (self: ListNode[nullable Object]): nullable ListNode[nullable Object] */
val* core__list___core__list__ListNode___prev(val* self) {
val* var /* : nullable ListNode[nullable Object] */;
val* var1 /* : nullable ListNode[nullable Object] */;
var1 = self->attrs[COLOR_core__list__ListNode___prev].val; /* _prev on <self:ListNode[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method list$ListNode$prev= for (self: ListNode[nullable Object], nullable ListNode[nullable Object]) */
void core__list___core__list__ListNode___prev_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (prev) <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
/* <p0:nullable ListNode[nullable Object]> isa nullable ListNode[E] */
type_struct = self->type->resolution_table->types[COLOR_nullable__core__list__ListNode__core__list__ListNode___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable ListNode[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__list, 337);
fatal_exit(1);
}
self->attrs[COLOR_core__list__ListNode___prev].val = p0; /* _prev on <self:ListNode[nullable Object]> */
RET_LABEL:;
}
